void WarBoardDataEntity___ctor(WarBoardDataEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5939860 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_string___ctor__);
    byte_5939860 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3EDADE8 *)Method_DataEntityBase_string___ctor__);
}


WarBoardDataEntity_o *WarBoardDataEntity__CloneFromOriginData(WarBoardDataEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *originData; // x19

  if ( (byte_593985F & 1) == 0 )
  {
    sub_21FFC50(&Method_JsonManager_Deserialize_WarBoardDataEntity___);
    sub_21FFC50(&JsonManager_TypeInfo);
    byte_593985F = 1;
  }
  originData = this->fields.originData;
  if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, method);
  return (WarBoardDataEntity_o *)JsonManager__Deserialize_object_(
                                   originData,
                                   (const MethodInfo_38A041C *)Method_JsonManager_Deserialize_WarBoardDataEntity___);
}


System_String_o *WarBoardDataEntity__CreatePK(int32_t questId, int32_t questPhase, const MethodInfo *method)
{
  if ( (byte_593985C & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_593985C = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           questId,
           questPhase,
           (const MethodInfo_3820F68 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *WarBoardDataEntity__CreatePrimaryKey(WarBoardDataEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return WarBoardDataEntity__CreatePK(this->fields.questId, this->fields.questPhase, v2);
}


System_String_o *WarBoardDataEntity__GetOriginDataJson(WarBoardDataEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *originData; // x19

  if ( (byte_593985E & 1) == 0 )
  {
    sub_21FFC50(&JsonManager_TypeInfo);
    byte_593985E = 1;
  }
  originData = this->fields.originData;
  if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, method);
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
  System_Object_array *svtInfo; // x20
  System_Func_object__bool__o *v9; // x19

  if ( (byte_593985D & 1) == 0 )
  {
    sub_21FFC50(&Method_BasicHelper_Find_WarBoardUserServantData___);
    sub_21FFC50(&System_Func_WarBoardUserServantData__bool__TypeInfo);
    sub_21FFC50(&Method_WarBoardDataEntity___c__DisplayClass26_0__GetStageBossData_b__0__);
    sub_21FFC50(&WarBoardDataEntity___c__DisplayClass26_0_TypeInfo);
    byte_593985D = 1;
  }
  v5 = sub_21FFEBC(WarBoardDataEntity___c__DisplayClass26_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_21FFECC(v6, v7);
  svtInfo = (System_Object_array *)this->fields.svtInfo;
  *(_DWORD *)(v5 + 16) = stageBossIndex;
  v9 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_WarBoardUserServantData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_WarBoardDataEntity___c__DisplayClass26_0__GetStageBossData_b__0__,
    0);
  return (WarBoardUserServantData_o *)BasicHelper__Find_object_(
                                        svtInfo,
                                        (System_Func_T__bool__o *)v9,
                                        (const MethodInfo_37DD66C *)Method_BasicHelper_Find_WarBoardUserServantData___);
}


void WarBoardDataEntity__SetOriginData(WarBoardDataEntity_o *this, Il2CppObject *data, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.originData = data;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.originData,
    (int32_t)data,
    (System_String_o *)method,
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
    sub_21FFECC(this, 0);
  return n->fields.stageBossIdx == this->fields.stageBossIndex;
}