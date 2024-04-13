void __fastcall RemovedBuffInfo___ctor(RemovedBuffInfo_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v15; // x20
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7

  if ( (byte_42EC554 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v5, v6, v7);
    byte_42EC554 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  this->fields._RemovedAllBuffList_k__BackingField = (struct System_Collections_Generic_List_BattleBuffData_BuffData__o *)v8;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v8, v9, v10, v11, v12, v13, v14);
  v15 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v15,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  this->fields._RemovedLinkedBuffList_k__BackingField = (struct System_Collections_Generic_List_BattleBuffData_BuffData__o *)v15;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._RemovedLinkedBuffList_k__BackingField,
    (System_Int32_array **)v15,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
}


void __fastcall RemovedBuffInfo__AddBuffs(
        RemovedBuffInfo_o *this,
        System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *buffDataEnumerable,
        bool asLinkedBuff,
        const MethodInfo *method)
{
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *RemovedAllBuffList_k__BackingField; // x0

  if ( (byte_42EC555 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__,
      (_DWORD)buffDataEnumerable,
      asLinkedBuff,
      method);
    byte_42EC555 = 1;
  }
  RemovedAllBuffList_k__BackingField = (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)this->fields._RemovedAllBuffList_k__BackingField;
  if ( !RemovedAllBuffList_k__BackingField )
    goto LABEL_8;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    RemovedAllBuffList_k__BackingField,
    (System_Collections_Generic_IEnumerable_T__o *)buffDataEnumerable,
    (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  if ( asLinkedBuff )
  {
    RemovedAllBuffList_k__BackingField = (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)this->fields._RemovedLinkedBuffList_k__BackingField;
    if ( RemovedAllBuffList_k__BackingField )
    {
      System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
        RemovedAllBuffList_k__BackingField,
        (System_Collections_Generic_IEnumerable_T__o *)buffDataEnumerable,
        (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
      return;
    }
LABEL_8:
    sub_B5D69C(RemovedAllBuffList_k__BackingField, buffDataEnumerable);
  }
}


System_Collections_Generic_List_BattleBuffData_BuffData__o *__fastcall RemovedBuffInfo__get_RemovedAllBuffList(
        RemovedBuffInfo_o *this,
        const MethodInfo *method)
{
  return this->fields._RemovedAllBuffList_k__BackingField;
}


System_Collections_Generic_List_BattleBuffData_BuffData__o *__fastcall RemovedBuffInfo__get_RemovedLinkedBuffList(
        RemovedBuffInfo_o *this,
        const MethodInfo *method)
{
  return this->fields._RemovedLinkedBuffList_k__BackingField;
}


void __fastcall RemovedBuffInfo__set_RemovedAllBuffList(
        RemovedBuffInfo_o *this,
        System_Collections_Generic_List_BattleBuffData_BuffData__o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._RemovedAllBuffList_k__BackingField = value;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall RemovedBuffInfo__set_RemovedLinkedBuffList(
        RemovedBuffInfo_o *this,
        System_Collections_Generic_List_BattleBuffData_BuffData__o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._RemovedLinkedBuffList_k__BackingField = value;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._RemovedLinkedBuffList_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}