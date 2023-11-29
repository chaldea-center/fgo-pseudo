void __fastcall WarBoardDataEntity___ctor(WarBoardDataEntity_o *this, const MethodInfo *method)
{
  if ( (byte_40F6396 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_string___ctor__, method);
    byte_40F6396 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_266F2D4 *)Method_DataEntityBase_string___ctor__);
}


WarBoardDataEntity_o *__fastcall WarBoardDataEntity__CloneFromOriginData(
        WarBoardDataEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *originData; // x19

  if ( (byte_40F6395 & 1) == 0 )
  {
    sub_B16FFC(&Method_JsonManager_Deserialize_WarBoardDataEntity___, method);
    sub_B16FFC(&JsonManager_TypeInfo, v3);
    byte_40F6395 = 1;
  }
  originData = this->fields.originData;
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  return (WarBoardDataEntity_o *)JsonManager__Deserialize_TerminalPramsManager_ClearData_(
                                   originData,
                                   (const MethodInfo_19D6740 *)Method_JsonManager_Deserialize_WarBoardDataEntity___);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall WarBoardDataEntity__CreatePK(int32_t questId, int32_t questPhase, const MethodInfo *method)
{
  if ( (byte_40F6392 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&questPhase);
    byte_40F6392 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           questId,
           questPhase,
           (const MethodInfo_18C21A0 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall WarBoardDataEntity__CreatePrimaryKey(WarBoardDataEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return WarBoardDataEntity__CreatePK(this->fields.questId, this->fields.questPhase, v2);
}


System_String_o *__fastcall WarBoardDataEntity__GetOriginDataJson(WarBoardDataEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *originData; // x19

  if ( (byte_40F6394 & 1) == 0 )
  {
    sub_B16FFC(&JsonManager_TypeInfo, method);
    byte_40F6394 = 1;
  }
  originData = this->fields.originData;
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  return JsonManager__toJson(originData, 0, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
WarBoardUserServantData_o *__fastcall WarBoardDataEntity__GetStageBossData(
        WarBoardDataEntity_o *this,
        int32_t stageBossIndex,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  WarBoardDataEntity___c__DisplayClass26_0_o *v11; // x21
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  struct WarBoardUserServantData_array *svtInfo; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v17; // x20

  if ( (byte_40F6393 & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_Find_WarBoardUserServantData___, *(_QWORD *)&stageBossIndex);
    sub_B16FFC(&Method_System_Func_WarBoardUserServantData__bool___ctor__, v7);
    sub_B16FFC(&System_Func_WarBoardUserServantData__bool__TypeInfo, v8);
    sub_B16FFC(&Method_WarBoardDataEntity___c__DisplayClass26_0__GetStageBossData_b__0__, v9);
    sub_B16FFC(&WarBoardDataEntity___c__DisplayClass26_0_TypeInfo, v10);
    byte_40F6393 = 1;
  }
  v11 = (WarBoardDataEntity___c__DisplayClass26_0_o *)sub_B170CC(
                                                        WarBoardDataEntity___c__DisplayClass26_0_TypeInfo,
                                                        *(_QWORD *)&stageBossIndex,
                                                        method,
                                                        v3,
                                                        v4);
  WarBoardDataEntity___c__DisplayClass26_0___ctor(v11, 0LL);
  if ( !v11 )
    sub_B170D4();
  v11->fields.stageBossIndex = stageBossIndex;
  svtInfo = this->fields.svtInfo;
  v17 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                             System_Func_WarBoardUserServantData__bool__TypeInfo,
                                                                             v12,
                                                                             v13,
                                                                             v14,
                                                                             v15);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v17,
    (Il2CppObject *)v11,
    Method_WarBoardDataEntity___c__DisplayClass26_0__GetStageBossData_b__0__,
    (const MethodInfo_2B6AB40 *)Method_System_Func_WarBoardUserServantData__bool___ctor__);
  return (WarBoardUserServantData_o *)BasicHelper__Find_USFGOActorBattleActionEventConditional_OverwriteParamCondition_(
                                        (WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *)svtInfo,
                                        (System_Func_T__bool__o *)v17,
                                        (const MethodInfo_18B650C *)Method_BasicHelper_Find_WarBoardUserServantData___);
}


void __fastcall WarBoardDataEntity__SetOriginData(
        WarBoardDataEntity_o *this,
        Il2CppObject *data,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.originData = data;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.originData,
    (System_Int32_array **)data,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall WarBoardDataEntity_WarBoardDeckData___ctor(
        WarBoardDataEntity_WarBoardDeckData_o *this,
        const MethodInfo *method)
{
  DeckData___ctor((DeckData_o *)this, 0LL);
}


void __fastcall WarBoardDataEntity___c__DisplayClass26_0___ctor(
        WarBoardDataEntity___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardDataEntity___c__DisplayClass26_0___GetStageBossData_b__0(
        WarBoardDataEntity___c__DisplayClass26_0_o *this,
        WarBoardUserServantData_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_B170D4();
  return n->fields.stageBossIdx == this->fields.stageBossIndex;
}