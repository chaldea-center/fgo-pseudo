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
    sub_1C3E7C0(this, *(_QWORD *)&index);
  if ( LODWORD(eventDataList->max_length) <= index )
    sub_1C3E7C8(this, *(_QWORD *)&index);
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
    sub_1C3E7C8(this, *(_QWORD *)&index);
  v4 = eventDataList->m_Items[index];
  if ( !v4 )
LABEL_5:
    sub_1C3E7C0(this, *(_QWORD *)&index);
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
    sub_1C3E7C8(this, *(_QWORD *)&index);
  v4 = eventDataList->m_Items[index];
  if ( !v4 )
LABEL_5:
    sub_1C3E7C0(this, *(_QWORD *)&index);
  return v4->fields.title;
}


void FsmEventDataList__SendEvent(FsmEventDataList_o *this, int32_t index, const MethodInfo *method)
{
  UnityEngine_Object_o *targetFSM; // x21
  PlayMakerFSM_o *v6; // x0
  __int64 v7; // x1
  struct FsmEventData_array *eventDataList; // x8
  FsmEventData_o *v9; // x8

  if ( (byte_4C58496 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C58496 = 1;
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
      sub_1C3E7C8(v6, v7);
    v9 = eventDataList->m_Items[index];
    if ( !v9 || (v6 = this->fields.targetFSM) == 0 )
LABEL_12:
      sub_1C3E7C0(v6, v7);
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
  CGThumbnailListItem_o *p_eventDataList; // x19
  struct FsmEventData_array *eventDataList; // t1
  int max_length; // w22
  __int64 v9; // x0
  __int64 v10; // x1
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  unsigned int *v13; // x20
  unsigned __int64 v14; // x23
  signed __int64 v15; // x24
  __int64 v16; // x25
  CGThumbnailListItem_o *v17; // x21
  CGThumbnailListItem_c *klass; // x8
  FsmEventData_o *v19; // x22
  const MethodInfo *v20; // x1
  __int64 v21; // x0

  if ( (byte_4C58495 & 1) == 0 )
  {
    sub_1C3E564(&FsmEventData___TypeInfo);
    sub_1C3E564(&FsmEventData_TypeInfo);
    byte_4C58495 = 1;
  }
  eventDataList = this->fields.eventDataList;
  p_eventDataList = (CGThumbnailListItem_o *)&this->fields.eventDataList;
  v5 = eventDataList;
  if ( eventDataList )
    max_length = v5->max_length;
  else
    max_length = 0;
  if ( max_length != value )
  {
    v9 = sub_1C3E60C(FsmEventData___TypeInfo, (unsigned int)value);
    v13 = (unsigned int *)v9;
    if ( value >= 1 )
    {
      v14 = 0;
      v15 = max_length;
      v16 = (unsigned int)value;
      v17 = (CGThumbnailListItem_o *)(v9 + 32);
      do
      {
        if ( (__int64)v14 >= v15 )
        {
          v19 = (FsmEventData_o *)sub_1C3E7B0(FsmEventData_TypeInfo);
          FsmEventData___ctor(v19, v20);
          if ( !v13 )
LABEL_20:
            sub_1C3E7C0(v9, v10);
        }
        else
        {
          klass = p_eventDataList->klass;
          if ( !p_eventDataList->klass )
            goto LABEL_20;
          if ( v14 >= LODWORD(klass->_1.namespaze) )
LABEL_21:
            sub_1C3E7C8(v9, v10);
          if ( !v13 )
            goto LABEL_20;
          v19 = (FsmEventData_o *)*((_QWORD *)&klass->_1.byval_arg.data + v14);
        }
        if ( v19 )
        {
          v9 = sub_1C3E6A0(v19, *(_QWORD *)(*(_QWORD *)v13 + 64LL));
          if ( !v9 )
          {
            v21 = sub_1C3E7E4(0);
            sub_1C3E68C(v21, 0);
          }
        }
        if ( v14 >= v13[6] )
          goto LABEL_21;
        v17->klass = (CGThumbnailListItem_c *)v19;
        sub_1C3E508(v17, (int32_t)v19, v11, v12);
        ++v14;
        v17 = (CGThumbnailListItem_o *)((char *)v17 + 8);
      }
      while ( v16 != v14 );
    }
    p_eventDataList->klass = (CGThumbnailListItem_c *)v13;
    sub_1C3E508(p_eventDataList, (int32_t)v13, v11, v12);
  }
}


void FsmEventDataList__set_TargetFSM(FsmEventDataList_o *this, PlayMakerFSM_o *value, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.targetFSM = value;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.targetFSM, (int32_t)value, (int32_t)method, v3);
}