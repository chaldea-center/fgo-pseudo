void WarBoardUserMasterData___ctor(WarBoardUserMasterData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


WarBoardUserMasterData_o *WarBoardUserMasterData__FromJson(System_String_o *json, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x2
  Il2CppObject *v5; // x19
  WarBoardUserMasterData_o *result; // x0
  __int64 v7; // x8

  if ( (byte_596E2DE & 1) == 0 )
  {
    sub_2213A60(&Method_JsonManager_DeserializeArray_WarBoardUserMasterData___);
    sub_2213A60(&JsonManager_TypeInfo);
    sub_2213A60(&StringLiteral_16648/*"[{0}]"*/);
    byte_596E2DE = 1;
  }
  v5 = (Il2CppObject *)System_String__Format((System_String_o *)StringLiteral_16648/*"[{0}]"*/, (Il2CppObject *)json, 0);
  if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v3, v4);
  result = (WarBoardUserMasterData_o *)JsonManager__DeserializeArray_object_(
                                         v5,
                                         (const MethodInfo_38D3A34 *)Method_JsonManager_DeserializeArray_WarBoardUserMasterData___);
  if ( result )
  {
    v7 = *(_QWORD *)&result->fields.skill1Ct;
    if ( v7 )
    {
      if ( !(_DWORD)v7 )
        sub_2213CE4(result);
      return *(WarBoardUserMasterData_o **)&result->fields.skill3Ct;
    }
    else
    {
      return 0;
    }
  }
  return result;
}


void WarBoardUserMasterData__SetBattleData(
        WarBoardUserMasterData_o *this,
        BattleData_o *battleData,
        const MethodInfo *method)
{
  WarBoardUserMasterData_o *v4; // x19
  int32_t skill1Ct; // w22

  v4 = this;
  if ( (byte_596E2DC & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Count__);
    this = (WarBoardUserMasterData_o *)sub_2213A60(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__);
    byte_596E2DC = 1;
  }
  *(_QWORD *)&v4->fields.skill1Ct = 0;
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
                                       (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__);
  if ( !this )
    goto LABEL_15;
  v4->fields.skill1Ct = ((__int64 (__fastcall *)(WarBoardUserMasterData_o *, _QWORD))this->klass[1]._1.byval_arg.data)(
                          this,
                          *(_QWORD *)&this->klass[1]._1.byval_arg.bits);
  if ( skill1Ct == 1 )
    return;
  this = (WarBoardUserMasterData_o *)battleData->fields.masterSkillInfo;
  if ( !this )
    goto LABEL_15;
  this = (WarBoardUserMasterData_o *)System_Collections_Generic_List_object___get_Item(
                                       (System_Collections_Generic_List_object__o *)this,
                                       1,
                                       (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__);
  if ( !this )
    goto LABEL_15;
  v4->fields.skill2Ct = ((__int64 (__fastcall *)(WarBoardUserMasterData_o *, _QWORD))this->klass[1]._1.byval_arg.data)(
                          this,
                          *(_QWORD *)&this->klass[1]._1.byval_arg.bits);
  if ( (unsigned int)skill1Ct < 3 )
    return;
  this = (WarBoardUserMasterData_o *)battleData->fields.masterSkillInfo;
  if ( !this
    || (this = (WarBoardUserMasterData_o *)System_Collections_Generic_List_object___get_Item(
                                             (System_Collections_Generic_List_object__o *)this,
                                             2,
                                             (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__)) == 0 )
  {
LABEL_15:
    sub_2213CDC(this, battleData);
  }
  v4->fields.skill3Ct = ((__int64 (__fastcall *)(WarBoardUserMasterData_o *, _QWORD))this->klass[1]._1.byval_arg.data)(
                          this,
                          *(_QWORD *)&this->klass[1]._1.byval_arg.bits);
}


void WarBoardUserMasterData__SetSaveData(
        WarBoardUserMasterData_o *this,
        WarBoardPieceData_SaveData_o *saveData,
        const MethodInfo *method)
{
  int32_t currentForceActionPoint; // w9
  int32_t squareIndex; // w10
  int32_t attackCount; // w8
  int32_t currentActionPoint; // w9

  if ( !saveData )
    sub_2213CDC(this, 0);
  currentForceActionPoint = saveData->fields.currentForceActionPoint;
  squareIndex = saveData->fields.squareIndex;
  this->fields.currentLimitActionPoint = saveData->fields.actionCount;
  attackCount = saveData->fields.attackCount;
  this->fields.currentForceActionPoint = currentForceActionPoint;
  currentActionPoint = saveData->fields.currentActionPoint;
  this->fields.attackCount = attackCount;
  this->fields.squareIndex = squareIndex;
  this->fields.defeatPoint = saveData->fields.breakPoint;
  this->fields.currentPieceActionPoint = currentActionPoint;
}


System_String_o *WarBoardUserMasterData__ToJson(WarBoardUserMasterData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_596E2DD & 1) == 0 )
  {
    sub_2213A60(&JsonManager_TypeInfo);
    byte_596E2DD = 1;
  }
  if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, method, v2);
  return JsonManager__toJson((Il2CppObject *)this, 0, 0, 0);
}