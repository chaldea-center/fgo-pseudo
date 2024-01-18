void __fastcall RemovedBuffInfo___ctor(RemovedBuffInfo_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v4; // x20
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x20
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  if ( (byte_418AD73 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, method);
    sub_B2C35C(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v3);
    byte_418AD73 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v4 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v4,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  this->fields._RemovedAllBuffList_k__BackingField = (struct System_Collections_Generic_List_BattleBuffData_BuffData__o *)v4;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v4, v5, v6, v7, v8, v9, v10);
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  this->fields._RemovedLinkedBuffList_k__BackingField = (struct System_Collections_Generic_List_BattleBuffData_BuffData__o *)v11;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields._RemovedLinkedBuffList_k__BackingField,
    (System_Int32_array **)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
}


void __fastcall RemovedBuffInfo__AddBuffs(
        RemovedBuffInfo_o *this,
        System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *buffDataEnumerable,
        bool asLinkedBuff,
        const MethodInfo *method)
{
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *RemovedAllBuffList_k__BackingField; // x0

  if ( (byte_418AD74 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__, buffDataEnumerable);
    byte_418AD74 = 1;
  }
  RemovedAllBuffList_k__BackingField = (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)this->fields._RemovedAllBuffList_k__BackingField;
  if ( !RemovedAllBuffList_k__BackingField )
    goto LABEL_8;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    RemovedAllBuffList_k__BackingField,
    (System_Collections_Generic_IEnumerable_T__o *)buffDataEnumerable,
    (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  if ( asLinkedBuff )
  {
    RemovedAllBuffList_k__BackingField = (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)this->fields._RemovedLinkedBuffList_k__BackingField;
    if ( RemovedAllBuffList_k__BackingField )
    {
      System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
        RemovedAllBuffList_k__BackingField,
        (System_Collections_Generic_IEnumerable_T__o *)buffDataEnumerable,
        (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
      return;
    }
LABEL_8:
    sub_B2C434(RemovedAllBuffList_k__BackingField, buffDataEnumerable);
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
  sub_B2C2F8(
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
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields._RemovedLinkedBuffList_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}