void __fastcall WarBoardDataEntity___ctor(WarBoardDataEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B1718F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_string___ctor__, method, v2);
    byte_4B1718F = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_31B2CB8 *)Method_DataEntityBase_string___ctor__);
}


WarBoardDataEntity_o *__fastcall WarBoardDataEntity__CloneFromOriginData(
        WarBoardDataEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *originData; // x19

  if ( (byte_4B1718E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_JsonManager_Deserialize_WarBoardDataEntity___, method, v2);
    sub_1BCA7E0(&JsonManager_TypeInfo, v4, v5);
    byte_4B1718E = 1;
  }
  originData = this->fields.originData;
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, method);
  return (WarBoardDataEntity_o *)JsonManager__Deserialize_object_(
                                   originData,
                                   (const MethodInfo_2F79634 *)Method_JsonManager_Deserialize_WarBoardDataEntity___);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall WarBoardDataEntity__CreatePK(int32_t questId, int32_t questPhase, const MethodInfo *method)
{
  if ( (byte_4B1718B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&questPhase, method);
    byte_4B1718B = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           questId,
           questPhase,
           (const MethodInfo_2F10EB4 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall WarBoardDataEntity__CreatePrimaryKey(WarBoardDataEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return WarBoardDataEntity__CreatePK(this->fields.questId, this->fields.questPhase, v2);
}


System_String_o *__fastcall WarBoardDataEntity__GetOriginDataJson(WarBoardDataEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *originData; // x19

  if ( (byte_4B1718D & 1) == 0 )
  {
    sub_1BCA7E0(&JsonManager_TypeInfo, method, v2);
    byte_4B1718D = 1;
  }
  originData = this->fields.originData;
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, method);
  return JsonManager__toJson(originData, 0, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
WarBoardUserServantData_o *__fastcall WarBoardDataEntity__GetStageBossData(
        WarBoardDataEntity_o *this,
        int32_t stageBossIndex,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  System_Object_array *svtInfo; // x19
  System_Func_object__bool__o *v18; // x20

  if ( (byte_4B1718C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_Find_WarBoardUserServantData___, *(_QWORD *)&stageBossIndex, method);
    sub_1BCA7E0(&System_Func_WarBoardUserServantData__bool__TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_WarBoardDataEntity___c__DisplayClass26_0__GetStageBossData_b__0__, v8, v9);
    sub_1BCA7E0(&WarBoardDataEntity___c__DisplayClass26_0_TypeInfo, v10, v11);
    byte_4B1718C = 1;
  }
  v12 = sub_1BCAA2C(WarBoardDataEntity___c__DisplayClass26_0_TypeInfo, *(_QWORD *)&stageBossIndex, method, v3);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12 )
    sub_1BCAA3C(v13, v14);
  *(_DWORD *)(v12 + 16) = stageBossIndex;
  svtInfo = (System_Object_array *)this->fields.svtInfo;
  v18 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_WarBoardUserServantData__bool__TypeInfo, v14, v15, v16);
  System_Func_object__bool____ctor(
    v18,
    (Il2CppObject *)v12,
    Method_WarBoardDataEntity___c__DisplayClass26_0__GetStageBossData_b__0__,
    0LL);
  return (WarBoardUserServantData_o *)BasicHelper__Find_object_(
                                        svtInfo,
                                        (System_Func_T__bool__o *)v18,
                                        (const MethodInfo_2EFE860 *)Method_BasicHelper_Find_WarBoardUserServantData___);
}


void __fastcall WarBoardDataEntity__SetOriginData(
        WarBoardDataEntity_o *this,
        Il2CppObject *data,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.originData = data;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.originData,
    (int64_t)data,
    (int64_t)method,
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
    sub_1BCAA3C(this, 0LL);
  return n->fields.stageBossIdx == this->fields.stageBossIndex;
}