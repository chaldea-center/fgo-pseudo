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
  __int64 v7; // x8
  __int64 v8; // x0

  if ( (byte_41888EC & 1) == 0 )
  {
    sub_B2C35C(&Method_JsonManager_DeserializeArray_WarBoardUserMasterData___, method);
    sub_B2C35C(&JsonManager_TypeInfo, v3);
    sub_B2C35C(&StringLiteral_15827/*"[{0}]"*/, v4);
    byte_41888EC = 1;
  }
  v5 = (Il2CppObject *)System_String__Format((System_String_o *)StringLiteral_15827/*"[{0}]"*/, (Il2CppObject *)json, 0LL);
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  result = (WarBoardUserMasterData_o *)JsonManager__DeserializeArray_UserPresentBoxWindow_resData_(
                                         v5,
                                         (const MethodInfo_1AACFE4 *)Method_JsonManager_DeserializeArray_WarBoardUserMasterData___);
  if ( result )
  {
    v7 = *(_QWORD *)&result->fields.skill1Ct;
    if ( v7 )
    {
      if ( !(_DWORD)v7 )
      {
        v8 = sub_B2C460(result);
        sub_B2C400(v8, 0LL);
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
  __int64 v5; // x1
  struct System_Collections_Generic_List_BattleSkillInfoData__o *masterSkillInfo; // x8
  int size; // w21
  BattleSkillInfoData_o *v8; // x8
  struct System_Collections_Generic_List_BattleSkillInfoData__o *v9; // x22
  BattleSkillInfoData_o *v10; // x8
  struct System_Collections_Generic_List_BattleSkillInfoData__o *v11; // x20
  BattleSkillInfoData_o *v12; // x8

  v4 = this;
  if ( (byte_41888EA & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Count__, battleData);
    this = (WarBoardUserMasterData_o *)sub_B2C35C(
                                         &Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__,
                                         v5);
    byte_41888EA = 1;
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
  v8 = masterSkillInfo->fields._items->m_Items[0];
  if ( !v8 )
    goto LABEL_19;
  v4->fields.skill1Ct = v8->fields.chargeTurn;
  if ( size < 2 )
    return;
  v9 = battleData->fields.masterSkillInfo;
  if ( !v9 )
    goto LABEL_19;
  if ( v9->fields._size <= 1u )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
  v10 = v9->fields._items->m_Items[1];
  if ( !v10 )
    goto LABEL_19;
  v4->fields.skill2Ct = v10->fields.chargeTurn;
  if ( size < 3 )
    return;
  v11 = battleData->fields.masterSkillInfo;
  if ( !v11 )
    goto LABEL_19;
  if ( v11->fields._size <= 2u )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
  v12 = v11->fields._items->m_Items[2];
  if ( !v12 )
LABEL_19:
    sub_B2C434(this, battleData);
  v4->fields.skill3Ct = v12->fields.chargeTurn;
}


void __fastcall WarBoardUserMasterData__SetSaveData(
        WarBoardUserMasterData_o *this,
        WarBoardPieceData_SaveData_o *saveData,
        const MethodInfo *method)
{
  if ( !saveData )
    sub_B2C434(this, 0LL);
  this->fields.currentLimitActionPoint = saveData->fields.actionCount;
  this->fields.squareIndex = saveData->fields.squareIndex;
  this->fields.currentForceActionPoint = saveData->fields.currentForceActionPoint;
  this->fields.attackCount = saveData->fields.attackCount;
  this->fields.currentPieceActionPoint = saveData->fields.currentActionPoint;
  this->fields.defeatPoint = saveData->fields.breakPoint;
}


System_String_o *__fastcall WarBoardUserMasterData__ToJson(WarBoardUserMasterData_o *this, const MethodInfo *method)
{
  if ( (byte_41888EB & 1) == 0 )
  {
    sub_B2C35C(&JsonManager_TypeInfo, method);
    byte_41888EB = 1;
  }
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  return JsonManager__toJson((Il2CppObject *)this, 0, 0, 0LL);
}