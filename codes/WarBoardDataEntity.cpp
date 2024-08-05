void __fastcall WarBoardDataEntity___ctor(WarBoardDataEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49FF456 & 1) == 0 )
  {
    sub_1B64870(&Method_DataEntityBase_string___ctor__, method);
    byte_49FF456 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_30D5FF8 *)Method_DataEntityBase_string___ctor__);
}


WarBoardDataEntity_o *__fastcall WarBoardDataEntity__CloneFromOriginData(
        WarBoardDataEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *originData; // x19

  if ( (byte_49FF455 & 1) == 0 )
  {
    sub_1B64870(&Method_JsonManager_Deserialize_WarBoardDataEntity___, method);
    sub_1B64870(&JsonManager_TypeInfo, v3);
    byte_49FF455 = 1;
  }
  originData = this->fields.originData;
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  return (WarBoardDataEntity_o *)JsonManager__Deserialize_object_(
                                   originData,
                                   (const MethodInfo_2EA104C *)Method_JsonManager_Deserialize_WarBoardDataEntity___);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall WarBoardDataEntity__CreatePK(int32_t questId, int32_t questPhase, const MethodInfo *method)
{
  if ( (byte_49FF452 & 1) == 0 )
  {
    sub_1B64870(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&questPhase);
    byte_49FF452 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           questId,
           questPhase,
           (const MethodInfo_2E398EC *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall WarBoardDataEntity__CreatePrimaryKey(WarBoardDataEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return WarBoardDataEntity__CreatePK(this->fields.questId, this->fields.questPhase, v2);
}


System_String_o *__fastcall WarBoardDataEntity__GetOriginDataJson(WarBoardDataEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *originData; // x19

  if ( (byte_49FF454 & 1) == 0 )
  {
    sub_1B64870(&JsonManager_TypeInfo, method);
    byte_49FF454 = 1;
  }
  originData = this->fields.originData;
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
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
  __int64 v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  System_Object_array *svtInfo; // x19
  System_Func_object__bool__o *v12; // x20

  if ( (byte_49FF453 & 1) == 0 )
  {
    sub_1B64870(&Method_BasicHelper_Find_WarBoardUserServantData___, *(_QWORD *)&stageBossIndex);
    sub_1B64870(&System_Func_WarBoardUserServantData__bool__TypeInfo, v5);
    sub_1B64870(&Method_WarBoardDataEntity___c__DisplayClass26_0__GetStageBossData_b__0__, v6);
    sub_1B64870(&WarBoardDataEntity___c__DisplayClass26_0_TypeInfo, v7);
    byte_49FF453 = 1;
  }
  v8 = sub_1B64ABC(WarBoardDataEntity___c__DisplayClass26_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    sub_1B64ACC(v9, v10);
  *(_DWORD *)(v8 + 16) = stageBossIndex;
  svtInfo = (System_Object_array *)this->fields.svtInfo;
  v12 = (System_Func_object__bool__o *)sub_1B64ABC(System_Func_WarBoardUserServantData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v12,
    (Il2CppObject *)v8,
    Method_WarBoardDataEntity___c__DisplayClass26_0__GetStageBossData_b__0__,
    0LL);
  return (WarBoardUserServantData_o *)BasicHelper__Find_object_(
                                        svtInfo,
                                        (System_Func_T__bool__o *)v12,
                                        (const MethodInfo_2E27718 *)Method_BasicHelper_Find_WarBoardUserServantData___);
}


void __fastcall WarBoardDataEntity__SetOriginData(
        WarBoardDataEntity_o *this,
        Il2CppObject *data,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields.originData = data;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.originData, (int32_t)data, (int32_t)method, v3);
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
    sub_1B64ACC(this, 0LL);
  return n->fields.stageBossIdx == this->fields.stageBossIndex;
}