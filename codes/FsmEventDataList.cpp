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
    sub_1B68930(this, index);
  if ( eventDataList->max_length <= index )
    sub_1B68938(this, *(_QWORD *)&index);
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
    sub_1B68938(this, *(_QWORD *)&index);
  v4 = eventDataList->m_Items[index];
  if ( !v4 )
LABEL_5:
    sub_1B68930(this, index);
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
    sub_1B68938(this, *(_QWORD *)&index);
  v4 = eventDataList->m_Items[index];
  if ( !v4 )
LABEL_5:
    sub_1B68930(this, index);
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

  if ( (byte_4A0A034 & 1) == 0 )
  {
    sub_1B686D4(&UnityEngine_Object_TypeInfo, *(_QWORD *)&index);
    byte_4A0A034 = 1;
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
      sub_1B68938(v6, v7);
    v9 = eventDataList->m_Items[index];
    if ( !v9 || (v6 = this->fields.targetFSM) == 0LL )
LABEL_12:
      sub_1B68930(v6, v7);
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
  ServantStatusBattleListViewItem_o *p_eventDataList; // x19
  struct FsmEventData_array *eventDataList; // t1
  signed int max_length; // w22
  __int64 v10; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  unsigned int *v14; // x20
  unsigned __int64 v15; // x23
  signed __int64 v16; // x24
  __int64 v17; // x25
  ServantStatusBattleListViewItem_o *v18; // x21
  ServantStatusBattleListViewItem_c *klass; // x8
  FsmEventData_o *v20; // x22
  const MethodInfo *v21; // x1
  __int64 v22; // x0

  if ( (byte_4A0A033 & 1) == 0 )
  {
    sub_1B686D4(&FsmEventData___TypeInfo, *(_QWORD *)&value);
    sub_1B686D4(&FsmEventData_TypeInfo, v5);
    byte_4A0A033 = 1;
  }
  eventDataList = this->fields.eventDataList;
  p_eventDataList = (ServantStatusBattleListViewItem_o *)&this->fields.eventDataList;
  v6 = eventDataList;
  if ( eventDataList )
    max_length = v6->max_length;
  else
    max_length = 0;
  if ( max_length != value )
  {
    v10 = sub_1B6877C(FsmEventData___TypeInfo, (unsigned int)value);
    v14 = (unsigned int *)v10;
    if ( value >= 1 )
    {
      v15 = 0LL;
      v16 = max_length;
      v17 = (unsigned int)value;
      v18 = (ServantStatusBattleListViewItem_o *)(v10 + 32);
      do
      {
        if ( (__int64)v15 >= v16 )
        {
          v20 = (FsmEventData_o *)sub_1B68920(FsmEventData_TypeInfo);
          FsmEventData___ctor(v20, v21);
          if ( !v14 )
LABEL_20:
            sub_1B68930(v10, v11);
        }
        else
        {
          klass = p_eventDataList->klass;
          if ( !p_eventDataList->klass )
            goto LABEL_20;
          if ( v15 >= LODWORD(klass->_1.namespaze) )
LABEL_21:
            sub_1B68938(v10, v11);
          if ( !v14 )
            goto LABEL_20;
          v20 = (FsmEventData_o *)*((_QWORD *)&klass->_1.byval_arg.data + v15);
        }
        if ( v20 )
        {
          v10 = sub_1B68810(v20, *(_QWORD *)(*(_QWORD *)v14 + 64LL));
          if ( !v10 )
          {
            v22 = sub_1B68954(0LL);
            sub_1B687FC(v22, 0LL);
          }
        }
        if ( v15 >= v14[6] )
          goto LABEL_21;
        v18->klass = (ServantStatusBattleListViewItem_c *)v20;
        sub_1B68678(v18, (int32_t)v20, v12, v13);
        ++v15;
        v18 = (ServantStatusBattleListViewItem_o *)((char *)v18 + 8);
      }
      while ( v17 != v15 );
    }
    p_eventDataList->klass = (ServantStatusBattleListViewItem_c *)v14;
    sub_1B68678(p_eventDataList, (int32_t)v14, v12, v13);
  }
}


void __fastcall FsmEventDataList__set_TargetFSM(
        FsmEventDataList_o *this,
        PlayMakerFSM_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields.targetFSM = value;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.targetFSM, (int32_t)value, (int32_t)method, v3);
}