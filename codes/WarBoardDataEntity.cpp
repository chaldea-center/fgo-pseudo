void __fastcall WarBoardDataEntity___ctor(WarBoardDataEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4183FE9 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_string___ctor__, method);
    byte_4183FE9 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_24E401C *)Method_DataEntityBase_string___ctor__);
}


WarBoardDataEntity_o *__fastcall WarBoardDataEntity__CloneFromOriginData(
        WarBoardDataEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *originData; // x19

  if ( (byte_4183FE8 & 1) == 0 )
  {
    sub_B2C35C(&Method_JsonManager_Deserialize_WarBoardDataEntity___, method);
    sub_B2C35C(&JsonManager_TypeInfo, v3);
    byte_4183FE8 = 1;
  }
  originData = this->fields.originData;
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  return (WarBoardDataEntity_o *)JsonManager__Deserialize_TerminalPramsManager_ClearData_(
                                   originData,
                                   (const MethodInfo_1AACF6C *)Method_JsonManager_Deserialize_WarBoardDataEntity___);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall WarBoardDataEntity__CreatePK(int32_t questId, int32_t questPhase, const MethodInfo *method)
{
  if ( (byte_4183FE5 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&questPhase);
    byte_4183FE5 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           questId,
           questPhase,
           (const MethodInfo_1732908 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall WarBoardDataEntity__CreatePrimaryKey(WarBoardDataEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return WarBoardDataEntity__CreatePK(this->fields.questId, this->fields.questPhase, v2);
}


System_String_o *__fastcall WarBoardDataEntity__GetOriginDataJson(WarBoardDataEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *originData; // x19

  if ( (byte_4183FE7 & 1) == 0 )
  {
    sub_B2C35C(&JsonManager_TypeInfo, method);
    byte_4183FE7 = 1;
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  WarBoardDataEntity___c__DisplayClass26_0_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1
  struct WarBoardUserServantData_array *svtInfo; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v13; // x20

  if ( (byte_4183FE6 & 1) == 0 )
  {
    sub_B2C35C(&Method_BasicHelper_Find_WarBoardUserServantData___, *(_QWORD *)&stageBossIndex);
    sub_B2C35C(&Method_System_Func_WarBoardUserServantData__bool___ctor__, v5);
    sub_B2C35C(&System_Func_WarBoardUserServantData__bool__TypeInfo, v6);
    sub_B2C35C(&Method_WarBoardDataEntity___c__DisplayClass26_0__GetStageBossData_b__0__, v7);
    sub_B2C35C(&WarBoardDataEntity___c__DisplayClass26_0_TypeInfo, v8);
    byte_4183FE6 = 1;
  }
  v9 = (WarBoardDataEntity___c__DisplayClass26_0_o *)sub_B2C42C(WarBoardDataEntity___c__DisplayClass26_0_TypeInfo);
  WarBoardDataEntity___c__DisplayClass26_0___ctor(v9, 0LL);
  if ( !v9 )
    sub_B2C434(v10, v11);
  v9->fields.stageBossIndex = stageBossIndex;
  svtInfo = this->fields.svtInfo;
  v13 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_WarBoardUserServantData__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v13,
    (Il2CppObject *)v9,
    Method_WarBoardDataEntity___c__DisplayClass26_0__GetStageBossData_b__0__,
    (const MethodInfo_2711C04 *)Method_System_Func_WarBoardUserServantData__bool___ctor__);
  return (WarBoardUserServantData_o *)BasicHelper__Find_USFGOActorBattleActionEventConditional_OverwriteParamCondition_(
                                        (WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *)svtInfo,
                                        (System_Func_T__bool__o *)v13,
                                        (const MethodInfo_1726BF0 *)Method_BasicHelper_Find_WarBoardUserServantData___);
}


void __fastcall WarBoardDataEntity__SetOriginData(
        WarBoardDataEntity_o *this,
        Il2CppObject *data,
        const MethodInfo *method)
{
  this->fields.originData = data;
  sub_B2C2F8(&this->fields.originData, data);
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
    sub_B2C434(this, 0LL);
  return n->fields.stageBossIdx == this->fields.stageBossIndex;
}