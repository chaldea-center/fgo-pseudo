void __fastcall WarBoardDataEntity___ctor(WarBoardDataEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E51CC & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_string___ctor__, (_DWORD)method, v2, v3);
    byte_42E51CC = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23FAD5C *)Method_DataEntityBase_string___ctor__);
}


WarBoardDataEntity_o *__fastcall WarBoardDataEntity__CloneFromOriginData(
        WarBoardDataEntity_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  Il2CppObject *originData; // x19

  if ( (byte_42E51CB & 1) == 0 )
  {
    sub_B5D5C4(&Method_JsonManager_Deserialize_WarBoardDataEntity___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&JsonManager_TypeInfo, v5, v6, v7);
    byte_42E51CB = 1;
  }
  originData = this->fields.originData;
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  return (WarBoardDataEntity_o *)JsonManager__Deserialize_TerminalPramsManager_ClearData_(
                                   originData,
                                   (const MethodInfo_1E5E158 *)Method_JsonManager_Deserialize_WarBoardDataEntity___);
}


System_String_o *__fastcall WarBoardDataEntity__CreatePK(int32_t questId, int32_t questPhase, const MethodInfo *method)
{
  __int64 v3; // x3

  if ( (byte_42E51C8 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_CreateMultiplePK_int__int___, questPhase, (_DWORD)method, v3);
    byte_42E51C8 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           questId,
           questPhase,
           (const MethodInfo_1AE3018 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall WarBoardDataEntity__CreatePrimaryKey(WarBoardDataEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return WarBoardDataEntity__CreatePK(this->fields.questId, this->fields.questPhase, v2);
}


System_String_o *__fastcall WarBoardDataEntity__GetOriginDataJson(WarBoardDataEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *originData; // x19

  if ( (byte_42E51CA & 1) == 0 )
  {
    sub_B5D5C4(&JsonManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E51CA = 1;
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  WarBoardDataEntity___c__DisplayClass26_0_o *v18; // x21
  __int64 v19; // x0
  __int64 v20; // x1
  struct WarBoardUserServantData_array *svtInfo; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v22; // x20

  if ( (byte_42E51C9 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_Find_WarBoardUserServantData___, stageBossIndex, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Func_WarBoardUserServantData__bool___ctor__, v6, v7, v8);
    sub_B5D5C4(&System_Func_WarBoardUserServantData__bool__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_WarBoardDataEntity___c__DisplayClass26_0__GetStageBossData_b__0__, v12, v13, v14);
    sub_B5D5C4(&WarBoardDataEntity___c__DisplayClass26_0_TypeInfo, v15, v16, v17);
    byte_42E51C9 = 1;
  }
  v18 = (WarBoardDataEntity___c__DisplayClass26_0_o *)sub_B5D694(WarBoardDataEntity___c__DisplayClass26_0_TypeInfo);
  WarBoardDataEntity___c__DisplayClass26_0___ctor(v18, 0LL);
  if ( !v18 )
    sub_B5D69C(v19, v20);
  v18->fields.stageBossIndex = stageBossIndex;
  svtInfo = this->fields.svtInfo;
  v22 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_WarBoardUserServantData__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v22,
    (Il2CppObject *)v18,
    Method_WarBoardDataEntity___c__DisplayClass26_0__GetStageBossData_b__0__,
    (const MethodInfo_2C2ECD0 *)Method_System_Func_WarBoardUserServantData__bool___ctor__);
  return (WarBoardUserServantData_o *)BasicHelper__Find_USFGOActorBattleActionEventConditional_OverwriteParamCondition_(
                                        (WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *)svtInfo,
                                        (System_Func_T__bool__o *)v22,
                                        (const MethodInfo_1AD7278 *)Method_BasicHelper_Find_WarBoardUserServantData___);
}


void __fastcall WarBoardDataEntity__SetOriginData(
        WarBoardDataEntity_o *this,
        Il2CppObject *data,
        const MethodInfo *method)
{
  this->fields.originData = data;
  sub_B5D560(&this->fields.originData);
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
    sub_B5D69C(this, 0LL);
  return n->fields.stageBossIdx == this->fields.stageBossIndex;
}