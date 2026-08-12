void FsmEventDataList___ctor(FsmEventDataList_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void FsmEventDataList__Finalize(FsmEventDataList_o *this, const MethodInfo *method)
{
  System_Object__Finalize((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
FsmEventData_o *FsmEventDataList__Get(FsmEventDataList_o *this, int32_t index, const MethodInfo *method)
{
  struct FsmEventData_array *eventDataList; // x8

  eventDataList = this->fields.eventDataList;
  if ( !eventDataList )
    sub_2213CDC(this, *(_QWORD *)&index);
  if ( LODWORD(eventDataList->max_length) <= index )
    sub_2213CE4(this);
  return eventDataList->m_Items[index];
}


// local variable allocation has failed, the output may be wrong!
System_String_o *FsmEventDataList__GetEventData(FsmEventDataList_o *this, int32_t index, const MethodInfo *method)
{
  struct FsmEventData_array *eventDataList; // x8
  FsmEventData_o *v4; // x8

  eventDataList = this->fields.eventDataList;
  if ( !eventDataList )
    goto LABEL_5;
  if ( LODWORD(eventDataList->max_length) <= index )
    sub_2213CE4(this);
  v4 = eventDataList->m_Items[index];
  if ( !v4 )
LABEL_5:
    sub_2213CDC(this, *(_QWORD *)&index);
  return v4->fields.eventData;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *FsmEventDataList__GetTitle(FsmEventDataList_o *this, int32_t index, const MethodInfo *method)
{
  struct FsmEventData_array *eventDataList; // x8
  FsmEventData_o *v4; // x8

  eventDataList = this->fields.eventDataList;
  if ( !eventDataList )
    goto LABEL_5;
  if ( LODWORD(eventDataList->max_length) <= index )
    sub_2213CE4(this);
  v4 = eventDataList->m_Items[index];
  if ( !v4 )
LABEL_5:
    sub_2213CDC(this, *(_QWORD *)&index);
  return v4->fields.title;
}


// local variable allocation has failed, the output may be wrong!
void FsmEventDataList__SendEvent(FsmEventDataList_o *this, int32_t index, const MethodInfo *method)
{
  UnityEngine_Object_o *targetFSM; // x21
  PlayMakerFSM_o *v6; // x0
  __int64 v7; // x1
  struct FsmEventData_array *eventDataList; // x8
  FsmEventData_o *v9; // x8

  if ( (byte_5971FCE & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5971FCE = 1;
  }
  targetFSM = (UnityEngine_Object_o *)this->fields.targetFSM;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&index);
  v6 = (PlayMakerFSM_o *)UnityEngine_Object__op_Inequality(targetFSM, 0, 0);
  if ( ((unsigned __int8)v6 & 1) != 0 )
  {
    eventDataList = this->fields.eventDataList;
    if ( !eventDataList )
      goto LABEL_12;
    if ( LODWORD(eventDataList->max_length) <= index )
      sub_2213CE4(v6);
    v9 = eventDataList->m_Items[index];
    if ( !v9 || (v6 = this->fields.targetFSM) == 0 )
LABEL_12:
      sub_2213CDC(v6, v7);
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
  MissionNaviTransitionBoardItem_o *p_eventDataList; // x19
  struct FsmEventData_array *eventDataList; // t1
  int max_length; // w21
  __int64 v9; // x0
  __int64 v10; // x1
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  unsigned int *v17; // x20
  signed __int64 v18; // x24
  unsigned __int64 v19; // x23
  MissionNaviTransitionBoardItem_o *v20; // x21
  __int64 v21; // x26
  MissionNaviTransitionBoardItem_c *klass; // x8
  FsmEventData_o *v23; // x22
  const MethodInfo *v24; // x1
  __int64 v25; // x1
  __int64 v26; // x0

  if ( (byte_5971FCD & 1) == 0 )
  {
    sub_2213A60(&FsmEventData___TypeInfo);
    sub_2213A60(&FsmEventData_TypeInfo);
    byte_5971FCD = 1;
  }
  eventDataList = this->fields.eventDataList;
  p_eventDataList = (MissionNaviTransitionBoardItem_o *)&this->fields.eventDataList;
  v5 = eventDataList;
  if ( eventDataList )
    max_length = v5->max_length;
  else
    max_length = 0;
  if ( max_length != value )
  {
    v9 = sub_2213B20(FsmEventData___TypeInfo, (unsigned int)value);
    v17 = (unsigned int *)v9;
    if ( value >= 1 )
    {
      v18 = max_length;
      v19 = 0;
      v20 = (MissionNaviTransitionBoardItem_o *)(v9 + 32);
      v21 = (unsigned int)value;
      do
      {
        if ( (__int64)v19 >= v18 )
        {
          v23 = (FsmEventData_o *)sub_2213CCC(FsmEventData_TypeInfo);
          FsmEventData___ctor(v23, v24);
          if ( !v17 )
LABEL_20:
            sub_2213CDC(v9, v10);
        }
        else
        {
          klass = p_eventDataList->klass;
          if ( !p_eventDataList->klass )
            goto LABEL_20;
          if ( v19 >= LODWORD(klass->_1.namespaze) )
LABEL_21:
            sub_2213CE4(v9);
          if ( !v17 )
            goto LABEL_20;
          v23 = (FsmEventData_o *)*((_QWORD *)&klass->_1.byval_arg.data + v19);
        }
        if ( v23 )
        {
          v9 = sub_2213BB4(v23, *(_QWORD *)(*(_QWORD *)v17 + 64LL));
          if ( !v9 )
          {
            v26 = sub_2213D00(0, v25);
            sub_2213BA0(v26, 0);
          }
        }
        if ( v19 >= v17[6] )
          goto LABEL_21;
        v20->klass = (MissionNaviTransitionBoardItem_c *)v23;
        sub_2213A04(v20, (int32_t)v23, v11, v12, v13, v14, v15, v16);
        ++v19;
        v20 = (MissionNaviTransitionBoardItem_o *)((char *)v20 + 8);
      }
      while ( v21 != v19 );
    }
    p_eventDataList->klass = (MissionNaviTransitionBoardItem_c *)v17;
    sub_2213A04(p_eventDataList, (int32_t)v17, v11, v12, v13, v14, v15, v16);
  }
}


void FsmEventDataList__set_TargetFSM(FsmEventDataList_o *this, PlayMakerFSM_o *value, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.targetFSM = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.targetFSM,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}