void __fastcall FsmEventDataList___ctor(FsmEventDataList_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall FsmEventDataList__Finalize(FsmEventDataList_o *this, const MethodInfo *method)
{
  System_Object__Finalize((Il2CppObject *)this, 0LL);
}


FsmEventData_o *__fastcall FsmEventDataList__Get(FsmEventDataList_o *this, int32_t index, const MethodInfo *method)
{
  struct FsmEventData_array *eventDataList; // x8

  eventDataList = this->fields.eventDataList;
  if ( !eventDataList )
    sub_1C22094(this, index);
  if ( eventDataList->max_length <= index )
    sub_1C2209C(this, index);
  return eventDataList->m_Items[index];
}


System_String_o *__fastcall FsmEventDataList__GetEventData(
        FsmEventDataList_o *this,
        int32_t index,
        const MethodInfo *method)
{
  struct FsmEventData_array *eventDataList; // x8
  FsmEventData_o *v4; // x8

  eventDataList = this->fields.eventDataList;
  if ( !eventDataList )
    goto LABEL_5;
  if ( eventDataList->max_length <= index )
    sub_1C2209C(this, index);
  v4 = eventDataList->m_Items[index];
  if ( !v4 )
LABEL_5:
    sub_1C22094(this, index);
  return v4->fields.eventData;
}


System_String_o *__fastcall FsmEventDataList__GetTitle(
        FsmEventDataList_o *this,
        int32_t index,
        const MethodInfo *method)
{
  struct FsmEventData_array *eventDataList; // x8
  FsmEventData_o *v4; // x8

  eventDataList = this->fields.eventDataList;
  if ( !eventDataList )
    goto LABEL_5;
  if ( eventDataList->max_length <= index )
    sub_1C2209C(this, index);
  v4 = eventDataList->m_Items[index];
  if ( !v4 )
LABEL_5:
    sub_1C22094(this, index);
  return v4->fields.title;
}


void __fastcall FsmEventDataList__SendEvent(FsmEventDataList_o *this, int32_t index, const MethodInfo *method)
{
  UnityEngine_Object_o *targetFSM; // x21
  PlayMakerFSM_o *v6; // x0
  __int64 v7; // x1
  struct FsmEventData_array *eventDataList; // x8
  FsmEventData_o *v9; // x8

  if ( (byte_4BDD9EC & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDD9EC = 1;
  }
  targetFSM = (UnityEngine_Object_o *)this->fields.targetFSM;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = (PlayMakerFSM_o *)UnityEngine_Object__op_Inequality(targetFSM, 0LL, 0LL);
  if ( ((unsigned __int8)v6 & 1) != 0 )
  {
    eventDataList = this->fields.eventDataList;
    if ( !eventDataList )
      goto LABEL_12;
    if ( eventDataList->max_length <= index )
      sub_1C2209C(v6, v7);
    v9 = eventDataList->m_Items[index];
    if ( !v9 || (v6 = this->fields.targetFSM) == 0LL )
LABEL_12:
      sub_1C22094(v6, v7);
    PlayMakerFSM__SendEvent(v6, v9->fields.eventData, 0LL);
  }
}


int32_t __fastcall FsmEventDataList__get_Length(FsmEventDataList_o *this, const MethodInfo *method)
{
  struct FsmEventData_array *eventDataList; // x8

  eventDataList = this->fields.eventDataList;
  if ( eventDataList )
    return eventDataList->max_length;
  else
    return 0;
}


PlayMakerFSM_o *__fastcall FsmEventDataList__get_TargetFSM(FsmEventDataList_o *this, const MethodInfo *method)
{
  return this->fields.targetFSM;
}


void __fastcall FsmEventDataList__set_Length(FsmEventDataList_o *this, int32_t value, const MethodInfo *method)
{
  struct FsmEventData_array *v5; // x8
  PartyOrganizationUtility_o *p_eventDataList; // x19
  struct FsmEventData_array *eventDataList; // t1
  signed int max_length; // w22
  __int64 v9; // x0
  __int64 v10; // x1
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  unsigned int *v17; // x20
  unsigned __int64 v18; // x23
  signed __int64 v19; // x24
  __int64 v20; // x25
  PartyOrganizationUtility_o *v21; // x21
  PartyOrganizationUtility_c *klass; // x8
  FsmEventData_o *v23; // x22
  const MethodInfo *v24; // x1
  __int64 v25; // x0

  if ( (byte_4BDD9EB & 1) == 0 )
  {
    sub_1C21E38(&FsmEventData___TypeInfo);
    sub_1C21E38(&FsmEventData_TypeInfo);
    byte_4BDD9EB = 1;
  }
  eventDataList = this->fields.eventDataList;
  p_eventDataList = (PartyOrganizationUtility_o *)&this->fields.eventDataList;
  v5 = eventDataList;
  if ( eventDataList )
    max_length = v5->max_length;
  else
    max_length = 0;
  if ( max_length != value )
  {
    v9 = sub_1C21EE0(FsmEventData___TypeInfo, (unsigned int)value);
    v17 = (unsigned int *)v9;
    if ( value >= 1 )
    {
      v18 = 0LL;
      v19 = max_length;
      v20 = (unsigned int)value;
      v21 = (PartyOrganizationUtility_o *)(v9 + 32);
      do
      {
        if ( (__int64)v18 >= v19 )
        {
          v23 = (FsmEventData_o *)sub_1C22084(FsmEventData_TypeInfo);
          FsmEventData___ctor(v23, v24);
          if ( !v17 )
LABEL_20:
            sub_1C22094(v9, v10);
        }
        else
        {
          klass = p_eventDataList->klass;
          if ( !p_eventDataList->klass )
            goto LABEL_20;
          if ( v18 >= LODWORD(klass->_1.namespaze) )
LABEL_21:
            sub_1C2209C(v9, v10);
          if ( !v17 )
            goto LABEL_20;
          v23 = (FsmEventData_o *)*((_QWORD *)&klass->_1.byval_arg.data + v18);
        }
        if ( v23 )
        {
          v9 = sub_1C21F74(v23, *(_QWORD *)(*(_QWORD *)v17 + 64LL));
          if ( !v9 )
          {
            v25 = sub_1C220B8(0LL);
            sub_1C21F60(v25, 0LL);
          }
        }
        if ( v18 >= v17[6] )
          goto LABEL_21;
        v21->klass = (PartyOrganizationUtility_c *)v23;
        sub_1C21DDC(v21, (int64_t)v23, v11, v12, v13, v14, v15, v16);
        ++v18;
        v21 = (PartyOrganizationUtility_o *)((char *)v21 + 8);
      }
      while ( v20 != v18 );
    }
    p_eventDataList->klass = (PartyOrganizationUtility_c *)v17;
    sub_1C21DDC(p_eventDataList, (int64_t)v17, v11, v12, v13, v14, v15, v16);
  }
}


void __fastcall FsmEventDataList__set_TargetFSM(
        FsmEventDataList_o *this,
        PlayMakerFSM_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.targetFSM = value;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.targetFSM,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}