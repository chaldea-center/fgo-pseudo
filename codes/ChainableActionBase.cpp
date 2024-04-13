void __fastcall ChainableActionBase___ctor(ChainableActionBase_o *this, const MethodInfo *method)
{
  ChainableActionBase_o *v2; // x19
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  v2 = this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v2->fields.endCallback = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&v2->fields, 0LL, v3, v4, v5, v6, v7, v8);
  v2->fields.nextAction = 0LL;
  v2 = (ChainableActionBase_o *)((char *)v2 + 24);
  sub_B5D560((BattleServantConfConponent_o *)v2, 0LL, v9, v10, v11, v12, v13, v14);
  LOBYTE(v2->monitor) = 0;
}


void __fastcall ChainableActionBase__End(ChainableActionBase_o *this, const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.endCallback, 0LL);
  ActionExtensions__Call(this->fields.nextAction, 0LL);
}


void __fastcall ChainableActionBase__Execute(ChainableActionBase_o *this, const MethodInfo *method)
{
  ChainableActionBase_c *klass; // x8

  if ( !this->fields._IsExecuted_k__BackingField )
  {
    klass = this->klass;
    this->fields._IsExecuted_k__BackingField = 1;
    ((void (__fastcall *)(ChainableActionBase_o *, Il2CppMethodPointer))klass->vtable._4_unknown.method)(
      this,
      klass->vtable._5_End.methodPtr);
  }
}


ChainableActionBase_o *__fastcall ChainableActionBase__Final(
        ChainableActionBase_o *this,
        System_Action_array *endCallbacks,
        const MethodInfo *method)
{
  __int64 v3; // x3
  ChainableActionBase_o *v5; // x20
  __int64 v6; // x8
  unsigned __int64 v7; // x22
  System_Delegate_o **p_fields; // x21
  System_Int32_array **v9; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  __int64 v17; // x0

  v5 = this;
  if ( (byte_42EB6C6 & 1) == 0 )
  {
    this = (ChainableActionBase_o *)sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)endCallbacks, (_DWORD)method, v3);
    byte_42EB6C6 = 1;
  }
  if ( !v5->fields._IsExecuted_k__BackingField )
  {
    if ( !endCallbacks )
      goto LABEL_14;
    v6 = *(_QWORD *)&endCallbacks->max_length;
    if ( (int)v6 >= 1 )
    {
      v7 = 0LL;
      p_fields = (System_Delegate_o **)&v5->fields;
      while ( 1 )
      {
        if ( v7 >= (unsigned int)v6 )
        {
          v17 = sub_B5D6C8(this);
          sub_B5D668(v17, 0LL);
        }
        v9 = (System_Int32_array **)System_Delegate__Combine(
                                      *p_fields,
                                      (System_Delegate_o *)endCallbacks->m_Items[v7],
                                      0LL);
        if ( v9 )
        {
          if ( *v9 != (System_Int32_array *)System_Action_TypeInfo )
            break;
        }
        *p_fields = (System_Delegate_o *)v9;
        sub_B5D560((BattleServantConfConponent_o *)&v5->fields, v9, v10, v11, v12, v13, v14, v15);
        LODWORD(v6) = endCallbacks->max_length;
        if ( (__int64)++v7 >= (int)v6 )
          return v5;
      }
      sub_B5D990(v9);
LABEL_14:
      sub_B5D69C(this, endCallbacks);
    }
  }
  return v5;
}


void __fastcall ChainableActionBase__SetNextAction(
        ChainableActionBase_o *this,
        System_Action_o *nextAction,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.nextAction = nextAction;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.nextAction,
    (System_Int32_array **)nextAction,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


bool __fastcall ChainableActionBase__get_IsExecuted(ChainableActionBase_o *this, const MethodInfo *method)
{
  return this->fields._IsExecuted_k__BackingField;
}


void __fastcall ChainableActionBase__set_IsExecuted(ChainableActionBase_o *this, bool value, const MethodInfo *method)
{
  this->fields._IsExecuted_k__BackingField = value;
}