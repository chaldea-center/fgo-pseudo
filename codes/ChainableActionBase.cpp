void ChainableActionBase___ctor(ChainableActionBase_o *this, const MethodInfo *method)
{
  ChainableActionBase_o *v2; // x19
  System_String_o *v3; // x2
  System_String_o *v4; // x3
  int32_t v5; // w4
  int32_t v6; // w5
  bool v7; // w6
  bool v8; // w7
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7

  v2 = this;
  System_Object___ctor((Il2CppObject *)this, 0);
  v2->fields.endCallback = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v2->fields, 0, v3, v4, v5, v6, v7, v8);
  v2->fields.nextAction = 0;
  v2 = (ChainableActionBase_o *)((char *)v2 + 24);
  sub_2213A04((MissionNaviTransitionBoardItem_o *)v2, 0, v9, v10, v11, v12, v13, v14);
  LOBYTE(v2->monitor) = 0;
}


void ChainableActionBase__End(ChainableActionBase_o *this, const MethodInfo *method)
{
  struct System_Action_o *endCallback; // x8
  struct System_Action_o *nextAction; // x8

  endCallback = this->fields.endCallback;
  if ( endCallback )
    ((void (__fastcall *)(intptr_t, intptr_t))endCallback->fields.invoke_impl)(
      endCallback->fields.method_code,
      endCallback->fields.method);
  nextAction = this->fields.nextAction;
  if ( nextAction )
    ((void (__fastcall *)(intptr_t, intptr_t))nextAction->fields.invoke_impl)(
      nextAction->fields.method_code,
      nextAction->fields.method);
}


void ChainableActionBase__Execute(ChainableActionBase_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x1
  Il2CppMethodPointer methodPtr; // x2

  if ( !this->fields._IsExecuted_k__BackingField )
  {
    methodPtr = this->klass->vtable._4_unknown.methodPtr;
    v2 = this->klass->vtable._4_unknown.method;
    this->fields._IsExecuted_k__BackingField = 1;
    ((void (__fastcall *)(ChainableActionBase_o *, const MethodInfo *))methodPtr)(this, v2);
  }
}


ChainableActionBase_o *ChainableActionBase__Final(
        ChainableActionBase_o *this,
        System_Action_array *endCallbacks,
        const MethodInfo *method)
{
  ChainableActionBase_o *v4; // x20
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 i; // x21
  System_Delegate_o *v7; // x0
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_Action_c *v14; // x1

  v4 = this;
  if ( (byte_5974EBF & 1) == 0 )
  {
    this = (ChainableActionBase_o *)sub_2213A60(&System_Action_TypeInfo);
    byte_5974EBF = 1;
  }
  if ( !v4->fields._IsExecuted_k__BackingField )
  {
    if ( !endCallbacks )
      sub_2213CDC(this, endCallbacks);
    max_length = endCallbacks->max_length;
    if ( (int)max_length >= 1 )
    {
      for ( i = 0; (__int64)i < (int)max_length; ++i )
      {
        if ( i >= (unsigned int)max_length )
          goto LABEL_16;
        v7 = System_Delegate__Combine(
               (System_Delegate_o *)v4->fields.endCallback,
               (System_Delegate_o *)endCallbacks->m_Items[i],
               0);
        if ( v7 )
        {
          v14 = System_Action_TypeInfo;
          if ( (System_Action_c *)v7->klass != System_Action_TypeInfo
            || (v4->fields.endCallback = (struct System_Action_o *)v7, (System_Action_c *)v7->klass != v14) )
          {
            sub_221405C(v7, v14, v8);
LABEL_16:
            sub_2213CE4(this);
          }
        }
        else
        {
          v4->fields.endCallback = 0;
        }
        sub_2213A04((MissionNaviTransitionBoardItem_o *)&v4->fields, (int32_t)v7, v8, v9, v10, v11, v12, v13);
        LODWORD(max_length) = endCallbacks->max_length;
      }
    }
  }
  return v4;
}


void ChainableActionBase__SetNextAction(
        ChainableActionBase_o *this,
        System_Action_o *nextAction,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.nextAction = nextAction;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.nextAction,
    (int32_t)nextAction,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


bool ChainableActionBase__get_IsExecuted(ChainableActionBase_o *this, const MethodInfo *method)
{
  return this->fields._IsExecuted_k__BackingField;
}


void ChainableActionBase__set_IsExecuted(ChainableActionBase_o *this, bool value, const MethodInfo *method)
{
  this->fields._IsExecuted_k__BackingField = value;
}