void __fastcall WarBoardUserMasterData___ctor(WarBoardUserMasterData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


WarBoardUserMasterData_o *__fastcall WarBoardUserMasterData__FromJson(System_String_o *json, const MethodInfo *method)
{
  Il2CppObject *v3; // x19
  WarBoardUserMasterData_o *result; // x0
  __int64 v5; // x8
  __int64 v6; // x0

  if ( (byte_435266F & 1) == 0 )
  {
    sub_B70694(&Method_JsonManager_DeserializeArray_WarBoardUserMasterData___);
    sub_B70694(&JsonManager_TypeInfo);
    sub_B70694(&StringLiteral_16049/*"[{0}]"*/);
    byte_435266F = 1;
  }
  v3 = (Il2CppObject *)System_String__Format((System_String_o *)StringLiteral_16049/*"[{0}]"*/, (Il2CppObject *)json, 0LL);
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  result = (WarBoardUserMasterData_o *)JsonManager__DeserializeArray_UserPresentBoxWindow_resData_(
                                         v3,
                                         (const MethodInfo_1D50530 *)Method_JsonManager_DeserializeArray_WarBoardUserMasterData___);
  if ( result )
  {
    v5 = *(_QWORD *)&result->fields.skill1Ct;
    if ( v5 )
    {
      if ( !(_DWORD)v5 )
      {
        v6 = sub_B70798(result);
        sub_B70738(v6, 0LL);
      }
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
  struct System_Collections_Generic_List_BattleSkillInfoData__o *masterSkillInfo; // x8
  int size; // w21
  BattleSkillInfoData_o *v7; // x8
  struct System_Collections_Generic_List_BattleSkillInfoData__o *v8; // x22
  BattleSkillInfoData_o *v9; // x8
  struct System_Collections_Generic_List_BattleSkillInfoData__o *v10; // x20
  BattleSkillInfoData_o *v11; // x8

  v4 = this;
  if ( (byte_435266D & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Count__);
    this = (WarBoardUserMasterData_o *)sub_B70694(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__);
    byte_435266D = 1;
  }
  *(_QWORD *)&v4->fields.skill1Ct = 0LL;
  v4->fields.skill3Ct = 0;
  if ( !battleData )
    goto LABEL_19;
  masterSkillInfo = battleData->fields.masterSkillInfo;
  if ( !masterSkillInfo )
    goto LABEL_19;
  size = masterSkillInfo->fields._size;
  if ( size < 1 )
    return;
  v7 = masterSkillInfo->fields._items->m_Items[0];
  if ( !v7 )
    goto LABEL_19;
  v4->fields.skill1Ct = v7->fields.chargeTurn;
  if ( size < 2 )
    return;
  v8 = battleData->fields.masterSkillInfo;
  if ( !v8 )
    goto LABEL_19;
  if ( v8->fields._size <= 1u )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
  v9 = v8->fields._items->m_Items[1];
  if ( !v9 )
    goto LABEL_19;
  v4->fields.skill2Ct = v9->fields.chargeTurn;
  if ( size < 3 )
    return;
  v10 = battleData->fields.masterSkillInfo;
  if ( !v10 )
    goto LABEL_19;
  if ( v10->fields._size <= 2u )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
  v11 = v10->fields._items->m_Items[2];
  if ( !v11 )
LABEL_19:
    sub_B7076C(this, battleData);
  v4->fields.skill3Ct = v11->fields.chargeTurn;
}


void __fastcall WarBoardUserMasterData__SetSaveData(
        WarBoardUserMasterData_o *this,
        WarBoardPieceData_SaveData_o *saveData,
        const MethodInfo *method)
{
  if ( !saveData )
    sub_B7076C(this, 0LL);
  this->fields.currentLimitActionPoint = saveData->fields.actionCount;
  this->fields.squareIndex = saveData->fields.squareIndex;
  this->fields.currentForceActionPoint = saveData->fields.currentForceActionPoint;
  this->fields.attackCount = saveData->fields.attackCount;
  this->fields.currentPieceActionPoint = saveData->fields.currentActionPoint;
  this->fields.defeatPoint = saveData->fields.breakPoint;
}


System_String_o *__fastcall WarBoardUserMasterData__ToJson(WarBoardUserMasterData_o *this, const MethodInfo *method)
{
  if ( (byte_435266E & 1) == 0 )
  {
    sub_B70694(&JsonManager_TypeInfo);
    byte_435266E = 1;
  }
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  return JsonManager__toJson((Il2CppObject *)this, 0, 0, 0LL);
}