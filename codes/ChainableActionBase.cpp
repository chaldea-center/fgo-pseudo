void __fastcall ChainableActionBase___ctor(ChainableActionBase_o *this, const MethodInfo *method)
{
  ChainableActionBase_o *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  v2 = this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v2->fields.endCallback = 0LL;
  sub_1BD33FC((PartyOrganizationUtility_o *)&v2->fields, 0LL, v3, v4, v5, v6, v7, v8);
  v2->fields.nextAction = 0LL;
  v2 = (ChainableActionBase_o *)((char *)v2 + 24);
  sub_1BD33FC((PartyOrganizationUtility_o *)v2, 0LL, v9, v10, v11, v12, v13, v14);
  LOBYTE(v2->monitor) = 0;
}


void __fastcall ChainableActionBase__End(ChainableActionBase_o *this, const MethodInfo *method)
{
  struct System_Action_o *endCallback; // x8
  struct System_Action_o *nextAction; // x8

  endCallback = this->fields.endCallback;
  if ( endCallback )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))endCallback->fields.m_target)(
      endCallback->fields.original_method_info,
      *(_QWORD *)&endCallback->fields.extra_arg);
  nextAction = this->fields.nextAction;
  if ( nextAction )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))nextAction->fields.m_target)(
      nextAction->fields.original_method_info,
      *(_QWORD *)&nextAction->fields.extra_arg);
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
  System_Delegate_o *v8; // x0
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  System_Action_c *v15; // x1

  v4 = this;
  if ( (byte_4B3B8A7 & 1) == 0 )
  {
    this = (ChainableActionBase_o *)sub_1BD3458(&System_Action_TypeInfo, endCallbacks);
    byte_4B3B8A7 = 1;
  }
  if ( !v4->fields._IsExecuted_k__BackingField )
  {
    if ( !endCallbacks )
      sub_1BD36B4(this, endCallbacks);
    v5 = *(_QWORD *)&endCallbacks->max_length;
    if ( (int)v5 >= 1 )
    {
      v6 = 0LL;
      p_fields = (System_Delegate_o **)&v4->fields;
      do
      {
        if ( v6 >= (unsigned int)v5 )
          goto LABEL_16;
        v8 = System_Delegate__Combine(*p_fields, (System_Delegate_o *)endCallbacks->m_Items[v6], 0LL);
        if ( v8 )
        {
          v15 = System_Action_TypeInfo;
          if ( (System_Action_c *)v8->klass != System_Action_TypeInfo
            || (*p_fields = v8, (System_Action_c *)v8->klass != v15) )
          {
            sub_1BD3974(v8);
LABEL_16:
            sub_1BD36BC(this, endCallbacks);
          }
        }
        else
        {
          *p_fields = 0LL;
        }
        sub_1BD33FC((PartyOrganizationUtility_o *)&v4->fields, (int64_t)v8, v9, v10, v11, v12, v13, v14);
        LODWORD(v5) = endCallbacks->max_length;
        ++v6;
      }
      while ( (__int64)v6 < (int)v5 );
    }
  }
  return v4;
}


void __fastcall ChainableActionBase__SetNextAction(
        ChainableActionBase_o *this,
        System_Action_o *nextAction,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.nextAction = nextAction;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)&this->fields.nextAction,
    (int64_t)nextAction,
    (int64_t)method,
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