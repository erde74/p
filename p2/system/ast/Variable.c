
AST_Variable *
new_Variable(const wchar_t* name)
{
    AST_Variable * result = NEW(AST_Variable);
    HEADER(result)        = (Object)Variable_Class;
    /* TODO add name */
    return result;
}

void AST_Variable_eval(AST_Variable * self)
{
    LOGFUN;
    Object env = current_env();
    
    if (HEADER(env) == (Object)Env_Class) {
        return Runtime_Env_lookup(
                                  (Runtime_Env *)env, self->index, self->key);
    } else {
        // TODO
        assert(NULL);
        // Object args[2] = { (Object)new_SmallInt(self->index), self->key };
        // return Send(env, Symbol_at_in_, 2, args);
    }
}

void AST_Variable_assign(AST_Variable * self, Object value)
{
    Object env = current_env();
    
    if (HEADER(env) == (Object)Env_Class) {
        return Runtime_Env_assign(
                                  (Runtime_Env *)env, self->index, self->key, value);
    }
    // TODO
    assert(NULL);
}

void pre_initialize_Variable()
{
    Variable_Class      = new_Named_Class((Object)Object_Class, L"Variable");
}

void post_initialize_Variable(){}

