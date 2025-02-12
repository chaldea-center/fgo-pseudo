void __fastcall FsmEventDataList___ctor(FsmEventDataList_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall FsmEventDataList__Finalize(FsmEventDataList_o *this, const MethodInfo *method)
{
  System_Object__Finalize((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
FsmEventData_o *__fastcall FsmEventDataList__Get(FsmEventDataList_o *this, int32_t index, const MethodInfo *method)
{
  struct FsmEventData_array *eventDataList; // x8

  eventDataList = this->fields.eventDataList;
  if ( !eventDataList )
    sub_1C1AE30(this, index);
  if ( eventDataList->max_length <= index )
    sub_1C1AE38(this, *(_QWORD *)&index);
  return eventDataList->m_Items[index];
}


// local variable allocation has failed, the output may be wrong!
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
    sub_1C1AE38(this, *(_QWORD *)&index);
  v4 = eventDataList->m_Items[index];
  if ( !v4 )
LABEL_5:
    sub_1C1AE30(this, index);
  return v4->fields.eventData;
}


// local variable allocation has failed, the output may be wrong!
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
    sub_1C1AE38(this, *(_QWORD *)&index);
  v4 = eventDataList->m_Items[index];
  if ( !v4 )
LABEL_5:
    sub_1C1AE30(this, index);
  return v4->fields.title;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FsmEventDataList__SendEvent(FsmEventDataList_o *this, int32_t index, const MethodInfo *method)
{
  UnityEngine_Object_o *targetFSM; // x21
  PlayMakerFSM_o *v6; // x0
  __int64 v7; // x1
  struct FsmEventData_array *eventDataList; // x8
  FsmEventData_o *v9; // x8

  if ( (byte_4BC8F42 & 1) == 0 )
  {
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, *(_QWORD *)&index);
    byte_4BC8F42 = 1;
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
      sub_1C1AE38(v6, v7);
    v9 = eventDataList->m_Items[index];
    if ( !v9 || (v6 = this->fields.targetFSM) == 0LL )
LABEL_12:
      sub_1C1AE30(v6, v7);
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


// local variable allocation has failed, the output may be wrong!
void __fastcall FsmEventDataList__set_Length(FsmEventDataList_o *this, int32_t value, const MethodInfo *method)
{
  __int64 v5; // x1
  struct FsmEventData_array *v6; // x8
  PartyOrganizationUtility_o *p_eventDataList; // x19
  struct FsmEventData_array *eventDataList; // t1
  signed int max_length; // w22
  __int64 v10; // x0
  __int64 v11; // x1
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  unsigned int *v18; // x20
  unsigned __int64 v19; // x23
  signed __int64 v20; // x24
  __int64 v21; // x25
  PartyOrganizationUtility_o *v22; // x21
  PartyOrganizationUtility_c *klass; // x8
  FsmEventData_o *v24; // x22
  const MethodInfo *v25; // x1
  __int64 v26; // x0

  if ( (byte_4BC8F41 & 1) == 0 )
  {
    sub_1C1ABD4(&FsmEventData___TypeInfo, *(_QWORD *)&value);
    sub_1C1ABD4(&FsmEventData_TypeInfo, v5);
    byte_4BC8F41 = 1;
  }
  eventDataList = this->fields.eventDataList;
  p_eventDataList = (PartyOrganizationUtility_o *)&this->fields.eventDataList;
  v6 = eventDataList;
  if ( eventDataList )
    max_length = v6->max_length;
  else
    max_length = 0;
  if ( max_length != value )
  {
    v10 = sub_1C1AC7C(FsmEventData___TypeInfo, (unsigned int)value);
    v18 = (unsigned int *)v10;
    if ( value >= 1 )
    {
      v19 = 0LL;
      v20 = max_length;
      v21 = (unsigned int)value;
      v22 = (PartyOrganizationUtility_o *)(v10 + 32);
      do
      {
        if ( (__int64)v19 >= v20 )
        {
          v24 = (FsmEventData_o *)sub_1C1AE20(FsmEventData_TypeInfo);
          FsmEventData___ctor(v24, v25);
          if ( !v18 )
LABEL_20:
            sub_1C1AE30(v10, v11);
        }
        else
        {
          klass = p_eventDataList->klass;
          if ( !p_eventDataList->klass )
            goto LABEL_20;
          if ( v19 >= LODWORD(klass->_1.namespaze) )
LABEL_21:
            sub_1C1AE38(v10, v11);
          if ( !v18 )
            goto LABEL_20;
          v24 = (FsmEventData_o *)*((_QWORD *)&klass->_1.byval_arg.data + v19);
        }
        if ( v24 )
        {
          v10 = sub_1C1AD10(v24, *(_QWORD *)(*(_QWORD *)v18 + 64LL));
          if ( !v10 )
          {
            v26 = sub_1C1AE54(0LL);
            sub_1C1ACFC(v26, 0LL);
          }
        }
        if ( v19 >= v18[6] )
          goto LABEL_21;
        v22->klass = (PartyOrganizationUtility_c *)v24;
        sub_1C1AB78(v22, (int64_t)v24, v12, v13, v14, v15, v16, v17);
        ++v19;
        v22 = (PartyOrganizationUtility_o *)((char *)v22 + 8);
      }
      while ( v21 != v19 );
    }
    p_eventDataList->klass = (PartyOrganizationUtility_c *)v18;
    sub_1C1AB78(p_eventDataList, (int64_t)v18, v12, v13, v14, v15, v16, v17);
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
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.targetFSM,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}