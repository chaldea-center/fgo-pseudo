void __fastcall WarBoardUserMasterData___ctor(WarBoardUserMasterData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


WarBoardUserMasterData_o *__fastcall WarBoardUserMasterData__FromJson(System_String_o *json, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  Il2CppObject *v11; // x19
  WarBoardUserMasterData_o *result; // x0
  __int64 v13; // x8
  __int64 v14; // x0

  if ( (byte_42E9348 & 1) == 0 )
  {
    sub_B5D5C4(&Method_JsonManager_DeserializeArray_WarBoardUserMasterData___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&JsonManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_16018/*"[{0}]"*/, v8, v9, v10);
    byte_42E9348 = 1;
  }
  v11 = (Il2CppObject *)System_String__Format((System_String_o *)StringLiteral_16018/*"[{0}]"*/, (Il2CppObject *)json, 0LL);
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  result = (WarBoardUserMasterData_o *)JsonManager__DeserializeArray_UserPresentBoxWindow_resData_(
                                         v11,
                                         (const MethodInfo_1E5E1D0 *)Method_JsonManager_DeserializeArray_WarBoardUserMasterData___);
  if ( result )
  {
    v13 = *(_QWORD *)&result->fields.skill1Ct;
    if ( v13 )
    {
      if ( !(_DWORD)v13 )
      {
        v14 = sub_B5D6C8(result);
        sub_B5D668(v14, 0LL);
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
  __int64 v3; // x3
  WarBoardUserMasterData_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  struct System_Collections_Generic_List_BattleSkillInfoData__o *masterSkillInfo; // x8
  int size; // w21
  BattleSkillInfoData_o *v11; // x8
  struct System_Collections_Generic_List_BattleSkillInfoData__o *v12; // x22
  BattleSkillInfoData_o *v13; // x8
  struct System_Collections_Generic_List_BattleSkillInfoData__o *v14; // x20
  BattleSkillInfoData_o *v15; // x8

  v5 = this;
  if ( (byte_42E9346 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_BattleSkillInfoData__get_Count__,
      (_DWORD)battleData,
      (_DWORD)method,
      v3);
    this = (WarBoardUserMasterData_o *)sub_B5D5C4(
                                         &Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__,
                                         v6,
                                         v7,
                                         v8);
    byte_42E9346 = 1;
  }
  *(_QWORD *)&v5->fields.skill1Ct = 0LL;
  v5->fields.skill3Ct = 0;
  if ( !battleData )
    goto LABEL_19;
  masterSkillInfo = battleData->fields.masterSkillInfo;
  if ( !masterSkillInfo )
    goto LABEL_19;
  size = masterSkillInfo->fields._size;
  if ( size < 1 )
    return;
  v11 = masterSkillInfo->fields._items->m_Items[0];
  if ( !v11 )
    goto LABEL_19;
  v5->fields.skill1Ct = v11->fields.chargeTurn;
  if ( size < 2 )
    return;
  v12 = battleData->fields.masterSkillInfo;
  if ( !v12 )
    goto LABEL_19;
  if ( v12->fields._size <= 1u )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  v13 = v12->fields._items->m_Items[1];
  if ( !v13 )
    goto LABEL_19;
  v5->fields.skill2Ct = v13->fields.chargeTurn;
  if ( size < 3 )
    return;
  v14 = battleData->fields.masterSkillInfo;
  if ( !v14 )
    goto LABEL_19;
  if ( v14->fields._size <= 2u )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  v15 = v14->fields._items->m_Items[2];
  if ( !v15 )
LABEL_19:
    sub_B5D69C(this, battleData);
  v5->fields.skill3Ct = v15->fields.chargeTurn;
}


void __fastcall WarBoardUserMasterData__SetSaveData(
        WarBoardUserMasterData_o *this,
        WarBoardPieceData_SaveData_o *saveData,
        const MethodInfo *method)
{
  if ( !saveData )
    sub_B5D69C(this, 0LL);
  this->fields.currentLimitActionPoint = saveData->fields.actionCount;
  this->fields.squareIndex = saveData->fields.squareIndex;
  this->fields.currentForceActionPoint = saveData->fields.currentForceActionPoint;
  this->fields.attackCount = saveData->fields.attackCount;
  this->fields.currentPieceActionPoint = saveData->fields.currentActionPoint;
  this->fields.defeatPoint = saveData->fields.breakPoint;
}


System_String_o *__fastcall WarBoardUserMasterData__ToJson(WarBoardUserMasterData_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E9347 & 1) == 0 )
  {
    sub_B5D5C4(&JsonManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E9347 = 1;
  }
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  return JsonManager__toJson((Il2CppObject *)this, 0, 0, 0LL);
}