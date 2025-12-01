void FsmEventDataList___ctor(FsmEventDataList_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void FsmEventDataList__Finalize(FsmEventDataList_o *this, const MethodInfo *method)
{
  System_Object__Finalize((Il2CppObject *)this, 0);
}


FsmEventData_o *FsmEventDataList__Get(FsmEventDataList_o *this, int32_t index, const MethodInfo *method)
{
  struct FsmEventData_array *eventDataList; // x8

  eventDataList = this->fields.eventDataList;
  if ( !eventDataList )
    sub_1C71608(this, index);
  if ( LODWORD(eventDataList->max_length) <= index )
    sub_1C71610(this);
  return eventDataList->m_Items[index];
}


System_String_o *FsmEventDataList__GetEventData(FsmEventDataList_o *this, int32_t index, const MethodInfo *method)
{
  struct FsmEventData_array *eventDataList; // x8
  FsmEventData_o *v4; // x8

  eventDataList = this->fields.eventDataList;
  if ( !eventDataList )
    goto LABEL_5;
  if ( LODWORD(eventDataList->max_length) <= index )
    sub_1C71610(this);
  v4 = eventDataList->m_Items[index];
  if ( !v4 )
LABEL_5:
    sub_1C71608(this, index);
  return v4->fields.eventData;
}


System_String_o *FsmEventDataList__GetTitle(FsmEventDataList_o *this, int32_t index, const MethodInfo *method)
{
  struct FsmEventData_array *eventDataList; // x8
  FsmEventData_o *v4; // x8

  eventDataList = this->fields.eventDataList;
  if ( !eventDataList )
    goto LABEL_5;
  if ( LODWORD(eventDataList->max_length) <= index )
    sub_1C71610(this);
  v4 = eventDataList->m_Items[index];
  if ( !v4 )
LABEL_5:
    sub_1C71608(this, index);
  return v4->fields.title;
}


void FsmEventDataList__SendEvent(FsmEventDataList_o *this, int32_t index, const MethodInfo *method)
{
  UnityEngine_Object_o *targetFSM; // x21
  PlayMakerFSM_o *v6; // x0
  __int64 v7; // x1
  struct FsmEventData_array *eventDataList; // x8
  FsmEventData_o *v9; // x8

  if ( (byte_4CC8B2F & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC8B2F = 1;
  }
  targetFSM = (UnityEngine_Object_o *)this->fields.targetFSM;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = (PlayMakerFSM_o *)UnityEngine_Object__op_Inequality(targetFSM, 0, 0);
  if ( ((unsigned __int8)v6 & 1) != 0 )
  {
    eventDataList = this->fields.eventDataList;
    if ( !eventDataList )
      goto LABEL_12;
    if ( LODWORD(eventDataList->max_length) <= index )
      sub_1C71610(v6);
    v9 = eventDataList->m_Items[index];
    if ( !v9 || (v6 = this->fields.targetFSM) == 0 )
LABEL_12:
      sub_1C71608(v6, v7);
    PlayMakerFSM__SendEvent(v6, v9->fields.eventData, 0);
  }
}


int32_t FsmEventDataList__get_Length(FsmEventDataList_o *this, const MethodInfo *method)
{
  struct FsmEventData_array *eventDataList; // x8

  eventDataList = this->fields.eventDataList;
  if ( eventDataList )
    return eventDataList->max_length;
  else
    return 0;
}


PlayMakerFSM_o *FsmEventDataList__get_TargetFSM(FsmEventDataList_o *this, const MethodInfo *method)
{
  return this->fields.targetFSM;
}


void FsmEventDataList__set_Length(FsmEventDataList_o *this, int32_t value, const MethodInfo *method)
{
  struct FsmEventData_array *v5; // x8
  GrandQuestFolderBoardItem_o *p_eventDataList; // x19
  struct FsmEventData_array *eventDataList; // t1
  int max_length; // w22
  __int64 v9; // x0
  __int64 v10; // x1
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  unsigned int *v17; // x20
  unsigned __int64 v18; // x23
  signed __int64 v19; // x24
  __int64 v20; // x25
  GrandQuestFolderBoardItem_o *v21; // x21
  GrandQuestFolderBoardItem_c *klass; // x8
  FsmEventData_o *v23; // x22
  const MethodInfo *v24; // x1
  __int64 v25; // x0

  if ( (byte_4CC8B2E & 1) == 0 )
  {
    sub_1C713B0(&FsmEventData___TypeInfo);
    sub_1C713B0(&FsmEventData_TypeInfo);
    byte_4CC8B2E = 1;
  }
  eventDataList = this->fields.eventDataList;
  p_eventDataList = (GrandQuestFolderBoardItem_o *)&this->fields.eventDataList;
  v5 = eventDataList;
  if ( eventDataList )
    max_length = v5->max_length;
  else
    max_length = 0;
  if ( max_length != value )
  {
    v9 = sub_1C71458(FsmEventData___TypeInfo, (unsigned int)value);
    v17 = (unsigned int *)v9;
    if ( value >= 1 )
    {
      v18 = 0;
      v19 = max_length;
      v20 = (unsigned int)value;
      v21 = (GrandQuestFolderBoardItem_o *)(v9 + 32);
      do
      {
        if ( (__int64)v18 >= v19 )
        {
          v23 = (FsmEventData_o *)sub_1C715FC(FsmEventData_TypeInfo);
          FsmEventData___ctor(v23, v24);
          if ( !v17 )
LABEL_20:
            sub_1C71608(v9, v10);
        }
        else
        {
          klass = p_eventDataList->klass;
          if ( !p_eventDataList->klass )
            goto LABEL_20;
          if ( v18 >= LODWORD(klass->_1.namespaze) )
LABEL_21:
            sub_1C71610(v9);
          if ( !v17 )
            goto LABEL_20;
          v23 = (FsmEventData_o *)*((_QWORD *)&klass->_1.byval_arg.data + v18);
        }
        if ( v23 )
        {
          v9 = sub_1C714EC(v23, *(_QWORD *)(*(_QWORD *)v17 + 64LL));
          if ( !v9 )
          {
            v25 = sub_1C7162C(0);
            sub_1C714D8(v25, 0);
          }
        }
        if ( v18 >= v17[6] )
          goto LABEL_21;
        v21->klass = (GrandQuestFolderBoardItem_c *)v23;
        sub_1C71354(v21, (int32_t)v23, v11, v12, v13, v14, v15, v16);
        ++v18;
        v21 = (GrandQuestFolderBoardItem_o *)((char *)v21 + 8);
      }
      while ( v20 != v18 );
    }
    p_eventDataList->klass = (GrandQuestFolderBoardItem_c *)v17;
    sub_1C71354(p_eventDataList, (int32_t)v17, v11, v12, v13, v14, v15, v16);
  }
}


void FsmEventDataList__set_TargetFSM(FsmEventDataList_o *this, PlayMakerFSM_o *value, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields.targetFSM = value;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.targetFSM,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}