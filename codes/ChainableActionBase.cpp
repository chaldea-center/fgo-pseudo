void ChainableActionBase___ctor(ChainableActionBase_o *this, const MethodInfo *method)
{
  ChainableActionBase_o *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3
  System_String_o *v5; // x4
  int32_t v6; // w5
  int64_t v7; // x6
  System_String_o *v8; // x7
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7

  v2 = this;
  System_Object___ctor((Il2CppObject *)this, 0);
  v2->fields.endCallback = 0;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v2->fields, 0, v3, v4, v5, v6, v7, v8);
  v2->fields.nextAction = 0;
  v2 = (ChainableActionBase_o *)((char *)v2 + 24);
  sub_1C71354((GrandQuestFolderBoardItem_o *)v2, 0, v9, v10, v11, v12, v13, v14);
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
  ChainableActionBase_c *klass; // x8

  if ( !this->fields._IsExecuted_k__BackingField )
  {
    klass = this->klass;
    this->fields._IsExecuted_k__BackingField = 1;
    ((void (__fastcall *)(ChainableActionBase_o *, const MethodInfo *))klass->vtable._4_unknown.methodPtr)(
      this,
      klass->vtable._4_unknown.method);
  }
}


ChainableActionBase_o *ChainableActionBase__Final(
        ChainableActionBase_o *this,
        System_Action_array *endCallbacks,
        const MethodInfo *method)
{
  ChainableActionBase_o *v4; // x20
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v6; // x22
  System_Delegate_o **p_fields; // x21
  System_Delegate_o *v8; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  System_Action_c *v15; // x1

  v4 = this;
  if ( (byte_4CCB9AC & 1) == 0 )
  {
    this = (ChainableActionBase_o *)sub_1C713B0(&System_Action_TypeInfo);
    byte_4CCB9AC = 1;
  }
  if ( !v4->fields._IsExecuted_k__BackingField )
  {
    if ( !endCallbacks )
      sub_1C71608(this, endCallbacks);
    max_length = endCallbacks->max_length;
    if ( (int)max_length >= 1 )
    {
      v6 = 0;
      p_fields = (System_Delegate_o **)&v4->fields;
      do
      {
        if ( v6 >= (unsigned int)max_length )
          goto LABEL_16;
        v8 = System_Delegate__Combine(*p_fields, (System_Delegate_o *)endCallbacks->m_Items[v6], 0);
        if ( v8 )
        {
          v15 = System_Action_TypeInfo;
          if ( (System_Action_c *)v8->klass != System_Action_TypeInfo
            || (*p_fields = v8, (System_Action_c *)v8->klass != v15) )
          {
            sub_1C719A4(v8);
LABEL_16:
            sub_1C71610(this);
          }
        }
        else
        {
          *p_fields = 0;
        }
        sub_1C71354((GrandQuestFolderBoardItem_o *)&v4->fields, (int32_t)v8, v9, v10, v11, v12, v13, v14);
        LODWORD(max_length) = endCallbacks->max_length;
        ++v6;
      }
      while ( (__int64)v6 < (int)max_length );
    }
  }
  return v4;
}


void ChainableActionBase__SetNextAction(
        ChainableActionBase_o *this,
        System_Action_o *nextAction,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields.nextAction = nextAction;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.nextAction,
    (int32_t)nextAction,
    (int32_t)method,
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