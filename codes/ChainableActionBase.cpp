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
  sub_B16F98((BattleServantConfConponent_o *)&v2->fields, 0LL, v3, v4, v5, v6, v7, v8);
  v2->fields.nextAction = 0LL;
  v2 = (ChainableActionBase_o *)((char *)v2 + 24);
  sub_B16F98((BattleServantConfConponent_o *)v2, 0LL, v9, v10, v11, v12, v13, v14);
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
  ChainableActionBase_o *v4; // x20
  __int64 v5; // x8
  unsigned __int64 v6; // x22
  System_Delegate_o **p_fields; // x21
  System_Int32_array **v8; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  v4 = this;
  if ( (byte_40FCF83 & 1) == 0 )
  {
    this = (ChainableActionBase_o *)sub_B16FFC(&System_Action_TypeInfo, endCallbacks);
    byte_40FCF83 = 1;
  }
  if ( !v4->fields._IsExecuted_k__BackingField )
  {
    if ( !endCallbacks )
      goto LABEL_14;
    v5 = *(_QWORD *)&endCallbacks->max_length;
    if ( (int)v5 >= 1 )
    {
      v6 = 0LL;
      p_fields = (System_Delegate_o **)&v4->fields;
      while ( 1 )
      {
        if ( v6 >= (unsigned int)v5 )
        {
          sub_B17100(this, endCallbacks, method);
          sub_B170A0();
        }
        v8 = (System_Int32_array **)System_Delegate__Combine(
                                      *p_fields,
                                      (System_Delegate_o *)endCallbacks->m_Items[v6],
                                      0LL);
        if ( v8 )
        {
          if ( *v8 != (System_Int32_array *)System_Action_TypeInfo )
            break;
        }
        *p_fields = (System_Delegate_o *)v8;
        sub_B16F98((BattleServantConfConponent_o *)&v4->fields, v8, v9, v10, v11, v12, v13, v14);
        LODWORD(v5) = endCallbacks->max_length;
        if ( (__int64)++v6 >= (int)v5 )
          return v4;
      }
      sub_B173C8(v8);
LABEL_14:
      sub_B170D4();
    }
  }
  return v4;
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
  sub_B16F98(
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