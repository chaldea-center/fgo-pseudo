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
    sub_1BCAA3C(this, *(_QWORD *)&index);
  if ( eventDataList->max_length <= index )
    sub_1BCAA44(this, index);
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
    sub_1BCAA44(this, index);
  v4 = eventDataList->m_Items[index];
  if ( !v4 )
LABEL_5:
    sub_1BCAA3C(this, *(_QWORD *)&index);
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
    sub_1BCAA44(this, index);
  v4 = eventDataList->m_Items[index];
  if ( !v4 )
LABEL_5:
    sub_1BCAA3C(this, *(_QWORD *)&index);
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

  if ( (byte_4B1761C & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, *(_QWORD *)&index, method);
    byte_4B1761C = 1;
  }
  targetFSM = (UnityEngine_Object_o *)this->fields.targetFSM;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&index);
  v6 = (PlayMakerFSM_o *)UnityEngine_Object__op_Inequality(targetFSM, 0LL, 0LL);
  if ( ((unsigned __int8)v6 & 1) != 0 )
  {
    eventDataList = this->fields.eventDataList;
    if ( !eventDataList )
      goto LABEL_12;
    if ( eventDataList->max_length <= index )
      sub_1BCAA44(v6, v7);
    v9 = eventDataList->m_Items[index];
    if ( !v9 || (v6 = this->fields.targetFSM) == 0LL )
LABEL_12:
      sub_1BCAA3C(v6, v7);
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
  __int64 v6; // x2
  struct FsmEventData_array *v7; // x8
  PartyOrganizationUtility_o *p_eventDataList; // x19
  struct FsmEventData_array *eventDataList; // t1
  signed int max_length; // w22
  __int64 v11; // x0
  __int64 v12; // x1
  int64_t v13; // x2
  __int64 v14; // x3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  unsigned int *v19; // x20
  unsigned __int64 v20; // x23
  signed __int64 v21; // x24
  __int64 v22; // x25
  PartyOrganizationUtility_o *v23; // x21
  PartyOrganizationUtility_c *klass; // x8
  FsmEventData_o *v25; // x22
  const MethodInfo *v26; // x1
  __int64 v27; // x0

  if ( (byte_4B1761B & 1) == 0 )
  {
    sub_1BCA7E0(&FsmEventData___TypeInfo, *(_QWORD *)&value, method);
    sub_1BCA7E0(&FsmEventData_TypeInfo, v5, v6);
    byte_4B1761B = 1;
  }
  eventDataList = this->fields.eventDataList;
  p_eventDataList = (PartyOrganizationUtility_o *)&this->fields.eventDataList;
  v7 = eventDataList;
  if ( eventDataList )
    max_length = v7->max_length;
  else
    max_length = 0;
  if ( max_length != value )
  {
    v11 = sub_1BCA888(FsmEventData___TypeInfo, (unsigned int)value);
    v19 = (unsigned int *)v11;
    if ( value >= 1 )
    {
      v20 = 0LL;
      v21 = max_length;
      v22 = (unsigned int)value;
      v23 = (PartyOrganizationUtility_o *)(v11 + 32);
      do
      {
        if ( (__int64)v20 >= v21 )
        {
          v25 = (FsmEventData_o *)sub_1BCAA2C(FsmEventData_TypeInfo, v12, v13, v14);
          FsmEventData___ctor(v25, v26);
          if ( !v19 )
LABEL_20:
            sub_1BCAA3C(v11, v12);
        }
        else
        {
          klass = p_eventDataList->klass;
          if ( !p_eventDataList->klass )
            goto LABEL_20;
          if ( v20 >= LODWORD(klass->_1.namespaze) )
LABEL_21:
            sub_1BCAA44(v11, v12);
          if ( !v19 )
            goto LABEL_20;
          v25 = (FsmEventData_o *)*((_QWORD *)&klass->_1.byval_arg.data + v20);
        }
        if ( v25 )
        {
          v11 = sub_1BCA91C(v25, *(_QWORD *)(*(_QWORD *)v19 + 64LL));
          if ( !v11 )
          {
            v27 = sub_1BCAA60(0LL);
            sub_1BCA908(v27, 0LL);
          }
        }
        if ( v20 >= v19[6] )
          goto LABEL_21;
        v23->klass = (PartyOrganizationUtility_c *)v25;
        sub_1BCA784(v23, (int64_t)v25, v13, v14, v15, v16, v17, v18);
        ++v20;
        v23 = (PartyOrganizationUtility_o *)((char *)v23 + 8);
      }
      while ( v22 != v20 );
    }
    p_eventDataList->klass = (PartyOrganizationUtility_c *)v19;
    sub_1BCA784(p_eventDataList, (int64_t)v19, v13, v14, v15, v16, v17, v18);
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
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.targetFSM,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}