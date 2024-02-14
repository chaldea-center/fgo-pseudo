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
  __int64 v5; // x0

  eventDataList = this->fields.eventDataList;
  if ( !eventDataList )
    sub_B0D97C(this);
  if ( eventDataList->max_length <= index )
  {
    v5 = sub_B0D9A8(this);
    sub_B0D948(v5, 0LL);
  }
  return eventDataList->m_Items[index];
}


System_String_o *__fastcall FsmEventDataList__GetEventData(
        FsmEventDataList_o *this,
        int32_t index,
        const MethodInfo *method)
{
  struct FsmEventData_array *eventDataList; // x8
  FsmEventData_o *v4; // x8
  __int64 v6; // x0

  eventDataList = this->fields.eventDataList;
  if ( !eventDataList )
    goto LABEL_5;
  if ( eventDataList->max_length <= index )
  {
    v6 = sub_B0D9A8(this);
    sub_B0D948(v6, 0LL);
  }
  v4 = eventDataList->m_Items[index];
  if ( !v4 )
LABEL_5:
    sub_B0D97C(this);
  return v4->fields.eventData;
}


System_String_o *__fastcall FsmEventDataList__GetTitle(
        FsmEventDataList_o *this,
        int32_t index,
        const MethodInfo *method)
{
  struct FsmEventData_array *eventDataList; // x8
  FsmEventData_o *v4; // x8
  __int64 v6; // x0

  eventDataList = this->fields.eventDataList;
  if ( !eventDataList )
    goto LABEL_5;
  if ( eventDataList->max_length <= index )
  {
    v6 = sub_B0D9A8(this);
    sub_B0D948(v6, 0LL);
  }
  v4 = eventDataList->m_Items[index];
  if ( !v4 )
LABEL_5:
    sub_B0D97C(this);
  return v4->fields.title;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FsmEventDataList__SendEvent(FsmEventDataList_o *this, int32_t index, const MethodInfo *method)
{
  UnityEngine_Object_o *targetFSM; // x21
  PlayMakerFSM_o *v6; // x0
  struct FsmEventData_array *eventDataList; // x8
  FsmEventData_o *v8; // x8
  __int64 v9; // x0

  if ( (byte_42171F7 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, *(_QWORD *)&index);
    byte_42171F7 = 1;
  }
  targetFSM = (UnityEngine_Object_o *)this->fields.targetFSM;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v6 = (PlayMakerFSM_o *)UnityEngine_Object__op_Inequality(targetFSM, 0LL, 0LL);
  if ( ((unsigned __int8)v6 & 1) != 0 )
  {
    eventDataList = this->fields.eventDataList;
    if ( !eventDataList )
      goto LABEL_13;
    if ( eventDataList->max_length <= index )
    {
      v9 = sub_B0D9A8(v6);
      sub_B0D948(v9, 0LL);
    }
    v8 = eventDataList->m_Items[index];
    if ( !v8 || (v6 = this->fields.targetFSM) == 0LL )
LABEL_13:
      sub_B0D97C(v6);
    PlayMakerFSM__SendEvent(v6, v8->fields.eventData, 0LL);
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
  BattleServantConfConponent_o *p_eventDataList; // x19
  struct FsmEventData_array *eventDataList; // t1
  signed int max_length; // w22
  __int64 v10; // x0
  __int64 v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  unsigned int *v18; // x20
  unsigned __int64 v19; // x23
  signed __int64 v20; // x24
  signed __int64 v21; // x25
  BattleServantConfConponent_o *v22; // x21
  BattleServantConfConponent_c *klass; // x8
  FsmEventData_o *v24; // x22
  const MethodInfo *v25; // x1
  __int64 v26; // x0
  __int64 v27; // x0

  if ( (byte_42171F6 & 1) == 0 )
  {
    sub_B0D8A4(&FsmEventData___TypeInfo, *(_QWORD *)&value);
    sub_B0D8A4(&FsmEventData_TypeInfo, v5);
    byte_42171F6 = 1;
  }
  eventDataList = this->fields.eventDataList;
  p_eventDataList = (BattleServantConfConponent_o *)&this->fields.eventDataList;
  v6 = eventDataList;
  if ( eventDataList )
    max_length = v6->max_length;
  else
    max_length = 0;
  if ( max_length != value )
  {
    v10 = sub_B0D8BC(FsmEventData___TypeInfo, (unsigned int)value);
    v18 = (unsigned int *)v10;
    if ( value >= 1 )
    {
      v19 = 0LL;
      v20 = value;
      v21 = max_length;
      v22 = (BattleServantConfConponent_o *)(v10 + 32);
      do
      {
        if ( (__int64)v19 >= v21 )
        {
          v24 = (FsmEventData_o *)sub_B0D974(FsmEventData_TypeInfo, v11, v12);
          FsmEventData___ctor(v24, v25);
          if ( !v18 )
LABEL_21:
            sub_B0D97C(v10);
          if ( !v24 )
            goto LABEL_18;
        }
        else
        {
          klass = p_eventDataList->klass;
          if ( !p_eventDataList->klass )
            goto LABEL_21;
          if ( v19 >= LODWORD(klass->_1.namespaze) )
          {
LABEL_22:
            v26 = sub_B0D9A8(v10);
            sub_B0D948(v26, 0LL);
          }
          if ( !v18 )
            goto LABEL_21;
          v24 = (FsmEventData_o *)*((_QWORD *)&klass->_1.byval_arg.data + v19);
          if ( !v24 )
            goto LABEL_18;
        }
        v10 = sub_B0D964(v24, *(_QWORD *)(*(_QWORD *)v18 + 64LL));
        if ( !v10 )
        {
          v27 = sub_B0D99C(0LL);
          sub_B0D948(v27, 0LL);
        }
LABEL_18:
        if ( v19 >= v18[6] )
          goto LABEL_22;
        v22->klass = (BattleServantConfConponent_c *)v24;
        sub_B0D840(v22, (System_Int32_array **)v24, v12, v13, v14, v15, v16, v17);
        ++v19;
        v22 = (BattleServantConfConponent_o *)((char *)v22 + 8);
      }
      while ( (__int64)v19 < v20 );
    }
    p_eventDataList->klass = (BattleServantConfConponent_c *)v18;
    sub_B0D840(p_eventDataList, (System_Int32_array **)v18, v12, v13, v14, v15, v16, v17);
  }
}


void __fastcall FsmEventDataList__set_TargetFSM(
        FsmEventDataList_o *this,
        PlayMakerFSM_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.targetFSM = value;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.targetFSM,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}