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
    sub_1C372B4(this);
  if ( LODWORD(eventDataList->max_length) <= index )
    sub_1C372BC(this);
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
    sub_1C372BC(this);
  v4 = eventDataList->m_Items[index];
  if ( !v4 )
LABEL_5:
    sub_1C372B4(this);
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
    sub_1C372BC(this);
  v4 = eventDataList->m_Items[index];
  if ( !v4 )
LABEL_5:
    sub_1C372B4(this);
  return v4->fields.title;
}


void FsmEventDataList__SendEvent(FsmEventDataList_o *this, int32_t index, const MethodInfo *method)
{
  UnityEngine_Object_o *targetFSM; // x21
  PlayMakerFSM_o *v6; // x0
  struct FsmEventData_array *eventDataList; // x8
  FsmEventData_o *v8; // x8

  if ( (byte_4C446CB & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C446CB = 1;
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
      sub_1C372BC(v6);
    v8 = eventDataList->m_Items[index];
    if ( !v8 || (v6 = this->fields.targetFSM) == 0 )
LABEL_12:
      sub_1C372B4(v6);
    PlayMakerFSM__SendEvent(v6, v8->fields.eventData, 0);
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
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  unsigned int *v12; // x20
  unsigned __int64 v13; // x23
  signed __int64 v14; // x24
  __int64 v15; // x25
  CGThumbnailListItem_o *v16; // x21
  CGThumbnailListItem_c *klass; // x8
  FsmEventData_o *v18; // x22
  const MethodInfo *v19; // x1
  __int64 v20; // x0

  if ( (byte_4C446CA & 1) == 0 )
  {
    sub_1C37058(&FsmEventData___TypeInfo);
    sub_1C37058(&FsmEventData_TypeInfo);
    byte_4C446CA = 1;
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
    v9 = sub_1C37100(FsmEventData___TypeInfo, (unsigned int)value);
    v12 = (unsigned int *)v9;
    if ( value >= 1 )
    {
      v13 = 0;
      v14 = max_length;
      v15 = (unsigned int)value;
      v16 = (CGThumbnailListItem_o *)(v9 + 32);
      do
      {
        if ( (__int64)v13 >= v14 )
        {
          v18 = (FsmEventData_o *)sub_1C372A4(FsmEventData_TypeInfo);
          FsmEventData___ctor(v18, v19);
          if ( !v12 )
LABEL_20:
            sub_1C372B4(v9);
        }
        else
        {
          klass = p_eventDataList->klass;
          if ( !p_eventDataList->klass )
            goto LABEL_20;
          if ( v13 >= LODWORD(klass->_1.namespaze) )
LABEL_21:
            sub_1C372BC(v9);
          if ( !v12 )
            goto LABEL_20;
          v18 = (FsmEventData_o *)*((_QWORD *)&klass->_1.byval_arg.data + v13);
        }
        if ( v18 )
        {
          v9 = sub_1C37194(v18, *(_QWORD *)(*(_QWORD *)v12 + 64LL));
          if ( !v9 )
          {
            v20 = sub_1C372D8(0);
            sub_1C37180(v20, 0);
          }
        }
        if ( v13 >= v12[6] )
          goto LABEL_21;
        v16->klass = (CGThumbnailListItem_c *)v18;
        sub_1C36FFC(v16, (int32_t)v18, v10, v11);
        ++v13;
        v16 = (CGThumbnailListItem_o *)((char *)v16 + 8);
      }
      while ( v15 != v13 );
    }
    p_eventDataList->klass = (CGThumbnailListItem_c *)v12;
    sub_1C36FFC(p_eventDataList, (int32_t)v12, v10, v11);
  }
}


void FsmEventDataList__set_TargetFSM(FsmEventDataList_o *this, PlayMakerFSM_o *value, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.targetFSM = value;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.targetFSM, (int32_t)value, (int32_t)method, v3);
}