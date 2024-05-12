void __fastcall WarBoardDataEntity___ctor(WarBoardDataEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4387B58 & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_string___ctor__);
    byte_4387B58 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_21FB7E0 *)Method_DataEntityBase_string___ctor__);
}


WarBoardDataEntity_o *__fastcall WarBoardDataEntity__CloneFromOriginData(
        WarBoardDataEntity_o *this,
        const MethodInfo *method)
{
  Il2CppObject *originData; // x19

  if ( (byte_4387B57 & 1) == 0 )
  {
    sub_B775C4(&Method_JsonManager_Deserialize_WarBoardDataEntity___);
    sub_B775C4(&JsonManager_TypeInfo);
    byte_4387B57 = 1;
  }
  originData = this->fields.originData;
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  return (WarBoardDataEntity_o *)JsonManager__Deserialize_TerminalPramsManager_ClearData_(
                                   originData,
                                   (const MethodInfo_1DF1654 *)Method_JsonManager_Deserialize_WarBoardDataEntity___);
}


System_String_o *__fastcall WarBoardDataEntity__CreatePK(int32_t questId, int32_t questPhase, const MethodInfo *method)
{
  if ( (byte_4387B54 & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4387B54 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           questId,
           questPhase,
           (const MethodInfo_1D171BC *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall WarBoardDataEntity__CreatePrimaryKey(WarBoardDataEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return WarBoardDataEntity__CreatePK(this->fields.questId, this->fields.questPhase, v2);
}


System_String_o *__fastcall WarBoardDataEntity__GetOriginDataJson(WarBoardDataEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *originData; // x19

  if ( (byte_4387B56 & 1) == 0 )
  {
    sub_B775C4(&JsonManager_TypeInfo);
    byte_4387B56 = 1;
  }
  originData = this->fields.originData;
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  return JsonManager__toJson(originData, 0, 0, 0LL);
}


WarBoardUserServantData_o *__fastcall WarBoardDataEntity__GetStageBossData(
        WarBoardDataEntity_o *this,
        int32_t stageBossIndex,
        const MethodInfo *method)
{
  WarBoardDataEntity___c__DisplayClass26_0_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  struct WarBoardUserServantData_array *svtInfo; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v9; // x20

  if ( (byte_4387B55 & 1) == 0 )
  {
    sub_B775C4(&Method_BasicHelper_Find_WarBoardUserServantData___);
    sub_B775C4(&Method_System_Func_WarBoardUserServantData__bool___ctor__);
    sub_B775C4(&System_Func_WarBoardUserServantData__bool__TypeInfo);
    sub_B775C4(&Method_WarBoardDataEntity___c__DisplayClass26_0__GetStageBossData_b__0__);
    sub_B775C4(&WarBoardDataEntity___c__DisplayClass26_0_TypeInfo);
    byte_4387B55 = 1;
  }
  v5 = (WarBoardDataEntity___c__DisplayClass26_0_o *)sub_B77694(WarBoardDataEntity___c__DisplayClass26_0_TypeInfo);
  WarBoardDataEntity___c__DisplayClass26_0___ctor(v5, 0LL);
  if ( !v5 )
    sub_B7769C(v6, v7);
  v5->fields.stageBossIndex = stageBossIndex;
  svtInfo = this->fields.svtInfo;
  v9 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B77694(System_Func_WarBoardUserServantData__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_WarBoardDataEntity___c__DisplayClass26_0__GetStageBossData_b__0__,
    (const MethodInfo_29E92C4 *)Method_System_Func_WarBoardUserServantData__bool___ctor__);
  return (WarBoardUserServantData_o *)BasicHelper__Find_USFGOActorBattleActionEventConditional_OverwriteParamCondition_(
                                        (WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *)svtInfo,
                                        (System_Func_T__bool__o *)v9,
                                        (const MethodInfo_1C66688 *)Method_BasicHelper_Find_WarBoardUserServantData___);
}


void __fastcall WarBoardDataEntity__SetOriginData(
        WarBoardDataEntity_o *this,
        Il2CppObject *data,
        const MethodInfo *method)
{
  this->fields.originData = data;
  sub_B77560(&this->fields.originData);
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
    sub_B7769C(this, 0LL);
  return n->fields.stageBossIdx == this->fields.stageBossIndex;
}