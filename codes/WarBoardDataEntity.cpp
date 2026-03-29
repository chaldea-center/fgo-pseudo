void WarBoardDataEntity___ctor(WarBoardDataEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D31B2B & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataEntityBase_string___ctor__);
    byte_4D31B2B = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3460BB4 *)Method_DataEntityBase_string___ctor__);
}


WarBoardDataEntity_o *WarBoardDataEntity__CloneFromOriginData(WarBoardDataEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *originData; // x19

  if ( (byte_4D31B2A & 1) == 0 )
  {
    sub_1C93AD4(&Method_JsonManager_Deserialize_WarBoardDataEntity___);
    sub_1C93AD4(&JsonManager_TypeInfo);
    byte_4D31B2A = 1;
  }
  originData = this->fields.originData;
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  return (WarBoardDataEntity_o *)JsonManager__Deserialize_object_(
                                   originData,
                                   (const MethodInfo_3213E20 *)Method_JsonManager_Deserialize_WarBoardDataEntity___);
}


System_String_o *WarBoardDataEntity__CreatePK(int32_t questId, int32_t questPhase, const MethodInfo *method)
{
  if ( (byte_4D31B27 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4D31B27 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           questId,
           questPhase,
           (const MethodInfo_31A2BC4 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *WarBoardDataEntity__CreatePrimaryKey(WarBoardDataEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return WarBoardDataEntity__CreatePK(this->fields.questId, this->fields.questPhase, v2);
}


System_String_o *WarBoardDataEntity__GetOriginDataJson(WarBoardDataEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *originData; // x19

  if ( (byte_4D31B29 & 1) == 0 )
  {
    sub_1C93AD4(&JsonManager_TypeInfo);
    byte_4D31B29 = 1;
  }
  originData = this->fields.originData;
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  return JsonManager__toJson(originData, 0, 0, 0);
}


WarBoardUserServantData_o *WarBoardDataEntity__GetStageBossData(
        WarBoardDataEntity_o *this,
        int32_t stageBossIndex,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Object_array *svtInfo; // x19
  System_Func_object__bool__o *v9; // x20

  if ( (byte_4D31B28 & 1) == 0 )
  {
    sub_1C93AD4(&Method_BasicHelper_Find_WarBoardUserServantData___);
    sub_1C93AD4(&System_Func_WarBoardUserServantData__bool__TypeInfo);
    sub_1C93AD4(&Method_WarBoardDataEntity___c__DisplayClass26_0__GetStageBossData_b__0__);
    sub_1C93AD4(&WarBoardDataEntity___c__DisplayClass26_0_TypeInfo);
    byte_4D31B28 = 1;
  }
  v5 = sub_1C93D20(WarBoardDataEntity___c__DisplayClass26_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C93D2C(v6, v7);
  *(_DWORD *)(v5 + 16) = stageBossIndex;
  svtInfo = (System_Object_array *)this->fields.svtInfo;
  v9 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_WarBoardUserServantData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_WarBoardDataEntity___c__DisplayClass26_0__GetStageBossData_b__0__,
    0);
  return (WarBoardUserServantData_o *)BasicHelper__Find_object_(
                                        svtInfo,
                                        (System_Func_T__bool__o *)v9,
                                        (const MethodInfo_318E744 *)Method_BasicHelper_Find_WarBoardUserServantData___);
}


void WarBoardDataEntity__SetOriginData(WarBoardDataEntity_o *this, Il2CppObject *data, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields.originData = data;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.originData,
    (int32_t)data,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void WarBoardDataEntity_WarBoardDeckData___ctor(WarBoardDataEntity_WarBoardDeckData_o *this, const MethodInfo *method)
{
  DeckData___ctor((DeckData_o *)this, 0);
}


void WarBoardDataEntity___c__DisplayClass26_0___ctor(
        WarBoardDataEntity___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool WarBoardDataEntity___c__DisplayClass26_0___GetStageBossData_b__0(
        WarBoardDataEntity___c__DisplayClass26_0_o *this,
        WarBoardUserServantData_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_1C93D2C(this, 0);
  return n->fields.stageBossIdx == this->fields.stageBossIndex;
}