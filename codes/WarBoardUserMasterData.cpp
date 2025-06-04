void __fastcall WarBoardUserMasterData___ctor(WarBoardUserMasterData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


WarBoardUserMasterData_o *__fastcall WarBoardUserMasterData__FromJson(System_String_o *json, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *v5; // x19
  WarBoardUserMasterData_o *result; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x8

  if ( (byte_4AFFC86 & 1) == 0 )
  {
    sub_1BC3008(&Method_JsonManager_DeserializeArray_WarBoardUserMasterData___, method);
    sub_1BC3008(&JsonManager_TypeInfo, v3);
    sub_1BC3008(&StringLiteral_15869/*"[{0}]"*/, v4);
    byte_4AFFC86 = 1;
  }
  v5 = (Il2CppObject *)System_String__Format((System_String_o *)StringLiteral_15869/*"[{0}]"*/, (Il2CppObject *)json, 0LL);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  result = (WarBoardUserMasterData_o *)JsonManager__DeserializeArray_object_(
                                         v5,
                                         (const MethodInfo_306D91C *)Method_JsonManager_DeserializeArray_WarBoardUserMasterData___);
  if ( result )
  {
    v9 = *(_QWORD *)&result->fields.skill1Ct;
    if ( v9 )
    {
      if ( !(_DWORD)v9 )
        sub_1BC326C(result, v7, v8);
      return *(WarBoardUserMasterData_o **)&result->fields.skill3Ct;
    }
    else
    {
      return 0LL;
    }
  }
  return result;
}


void __fastcall WarBoardUserMasterData__SetBattleData(
        WarBoardUserMasterData_o *this,
        BattleData_o *battleData,
        const MethodInfo *method)
{
  WarBoardUserMasterData_o *v4; // x19
  __int64 v5; // x1
  int32_t skill1Ct; // w22

  v4 = this;
  if ( (byte_4AFFC84 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Count__, battleData);
    this = (WarBoardUserMasterData_o *)sub_1BC3008(
                                         &Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__,
                                         v5);
    byte_4AFFC84 = 1;
  }
  *(_QWORD *)&v4->fields.skill1Ct = 0LL;
  v4->fields.skill3Ct = 0;
  if ( !battleData )
    goto LABEL_15;
  this = (WarBoardUserMasterData_o *)battleData->fields.masterSkillInfo;
  if ( !this )
    goto LABEL_15;
  skill1Ct = this->fields.skill1Ct;
  if ( skill1Ct < 1 )
    return;
  this = (WarBoardUserMasterData_o *)System_Collections_Generic_List_object___get_Item(
                                       (System_Collections_Generic_List_object__o *)this,
                                       0,
                                       (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__);
  if ( !this )
    goto LABEL_15;
  v4->fields.skill1Ct = this->fields.forceActionPoint;
  if ( skill1Ct < 2 )
    return;
  this = (WarBoardUserMasterData_o *)battleData->fields.masterSkillInfo;
  if ( !this )
    goto LABEL_15;
  this = (WarBoardUserMasterData_o *)System_Collections_Generic_List_object___get_Item(
                                       (System_Collections_Generic_List_object__o *)this,
                                       1,
                                       (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__);
  if ( !this )
    goto LABEL_15;
  v4->fields.skill2Ct = this->fields.forceActionPoint;
  if ( skill1Ct < 3 )
    return;
  this = (WarBoardUserMasterData_o *)battleData->fields.masterSkillInfo;
  if ( !this
    || (this = (WarBoardUserMasterData_o *)System_Collections_Generic_List_object___get_Item(
                                             (System_Collections_Generic_List_object__o *)this,
                                             2,
                                             (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__)) == 0LL )
  {
LABEL_15:
    sub_1BC3264(this, battleData);
  }
  v4->fields.skill3Ct = this->fields.forceActionPoint;
}


void __fastcall WarBoardUserMasterData__SetSaveData(
        WarBoardUserMasterData_o *this,
        WarBoardPieceData_SaveData_o *saveData,
        const MethodInfo *method)
{
  if ( !saveData )
    sub_1BC3264(this, 0LL);
  this->fields.currentLimitActionPoint = saveData->fields.actionCount;
  this->fields.squareIndex = saveData->fields.squareIndex;
  this->fields.currentForceActionPoint = saveData->fields.currentForceActionPoint;
  this->fields.attackCount = saveData->fields.attackCount;
  this->fields.currentPieceActionPoint = saveData->fields.currentActionPoint;
  this->fields.defeatPoint = saveData->fields.breakPoint;
}


System_String_o *__fastcall WarBoardUserMasterData__ToJson(WarBoardUserMasterData_o *this, const MethodInfo *method)
{
  if ( (byte_4AFFC85 & 1) == 0 )
  {
    sub_1BC3008(&JsonManager_TypeInfo, method);
    byte_4AFFC85 = 1;
  }
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  return JsonManager__toJson((Il2CppObject *)this, 0, 0, 0LL);
}