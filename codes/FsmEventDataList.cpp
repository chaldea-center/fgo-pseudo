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
    sub_B5D69C(this, index);
  if ( eventDataList->max_length <= index )
  {
    v5 = sub_B5D6C8(this);
    sub_B5D668(v5, 0LL);
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
    v6 = sub_B5D6C8(this);
    sub_B5D668(v6, 0LL);
  }
  v4 = eventDataList->m_Items[index];
  if ( !v4 )
LABEL_5:
    sub_B5D69C(this, index);
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
    v6 = sub_B5D6C8(this);
    sub_B5D668(v6, 0LL);
  }
  v4 = eventDataList->m_Items[index];
  if ( !v4 )
LABEL_5:
    sub_B5D69C(this, index);
  return v4->fields.title;
}


void __fastcall FsmEventDataList__SendEvent(FsmEventDataList_o *this, int32_t index, const MethodInfo *method)
{
  __int64 v3; // x3
  UnityEngine_Object_o *targetFSM; // x21
  PlayMakerFSM_o *v7; // x0
  __int64 v8; // x1
  struct FsmEventData_array *eventDataList; // x8
  FsmEventData_o *v10; // x8
  __int64 v11; // x0

  if ( (byte_42EB522 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, index, (_DWORD)method, v3);
    byte_42EB522 = 1;
  }
  targetFSM = (UnityEngine_Object_o *)this->fields.targetFSM;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v7 = (PlayMakerFSM_o *)UnityEngine_Object__op_Inequality(targetFSM, 0LL, 0LL);
  if ( ((unsigned __int8)v7 & 1) != 0 )
  {
    eventDataList = this->fields.eventDataList;
    if ( !eventDataList )
      goto LABEL_13;
    if ( eventDataList->max_length <= index )
    {
      v11 = sub_B5D6C8(v7);
      sub_B5D668(v11, 0LL);
    }
    v10 = eventDataList->m_Items[index];
    if ( !v10 || (v7 = this->fields.targetFSM) == 0LL )
LABEL_13:
      sub_B5D69C(v7, v8);
    PlayMakerFSM__SendEvent(v7, v10->fields.eventData, 0LL);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  struct FsmEventData_array *v9; // x8
  BattleServantConfConponent_o *p_eventDataList; // x19
  struct FsmEventData_array *eventDataList; // t1
  signed int max_length; // w22
  __int64 v13; // x0
  __int64 v14; // x1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  unsigned int *v21; // x20
  unsigned __int64 v22; // x23
  signed __int64 v23; // x24
  signed __int64 v24; // x25
  BattleServantConfConponent_o *v25; // x21
  BattleServantConfConponent_c *klass; // x8
  FsmEventData_o *v27; // x22
  const MethodInfo *v28; // x1
  __int64 v29; // x0
  __int64 v30; // x0

  if ( (byte_42EB521 & 1) == 0 )
  {
    sub_B5D5C4(&FsmEventData___TypeInfo, value, (_DWORD)method, v3);
    sub_B5D5C4(&FsmEventData_TypeInfo, v6, v7, v8);
    byte_42EB521 = 1;
  }
  eventDataList = this->fields.eventDataList;
  p_eventDataList = (BattleServantConfConponent_o *)&this->fields.eventDataList;
  v9 = eventDataList;
  if ( eventDataList )
    max_length = v9->max_length;
  else
    max_length = 0;
  if ( max_length != value )
  {
    v13 = sub_B5D5DC(FsmEventData___TypeInfo, (unsigned int)value);
    v21 = (unsigned int *)v13;
    if ( value >= 1 )
    {
      v22 = 0LL;
      v23 = value;
      v24 = max_length;
      v25 = (BattleServantConfConponent_o *)(v13 + 32);
      do
      {
        if ( (__int64)v22 >= v24 )
        {
          v27 = (FsmEventData_o *)sub_B5D694(FsmEventData_TypeInfo);
          FsmEventData___ctor(v27, v28);
          if ( !v21 )
LABEL_21:
            sub_B5D69C(v13, v14);
          if ( !v27 )
            goto LABEL_18;
        }
        else
        {
          klass = p_eventDataList->klass;
          if ( !p_eventDataList->klass )
            goto LABEL_21;
          if ( v22 >= LODWORD(klass->_1.namespaze) )
          {
LABEL_22:
            v29 = sub_B5D6C8(v13);
            sub_B5D668(v29, 0LL);
          }
          if ( !v21 )
            goto LABEL_21;
          v27 = (FsmEventData_o *)*((_QWORD *)&klass->_1.byval_arg.data + v22);
          if ( !v27 )
            goto LABEL_18;
        }
        v13 = sub_B5D684(v27, *(_QWORD *)(*(_QWORD *)v21 + 64LL));
        if ( !v13 )
        {
          v30 = sub_B5D6BC(0LL);
          sub_B5D668(v30, 0LL);
        }
LABEL_18:
        if ( v22 >= v21[6] )
          goto LABEL_22;
        v25->klass = (BattleServantConfConponent_c *)v27;
        sub_B5D560(v25, (System_Int32_array **)v27, v15, v16, v17, v18, v19, v20);
        ++v22;
        v25 = (BattleServantConfConponent_o *)((char *)v25 + 8);
      }
      while ( (__int64)v22 < v23 );
    }
    p_eventDataList->klass = (BattleServantConfConponent_c *)v21;
    sub_B5D560(p_eventDataList, (System_Int32_array **)v21, v15, v16, v17, v18, v19, v20);
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
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.targetFSM,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}