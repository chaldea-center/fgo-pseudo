void __fastcall WarBoardPieceStatusLabel___ctor(WarBoardPieceStatusLabel_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall WarBoardPieceStatusLabel__SetupLabel(
        WarBoardPieceStatusLabel_o *this,
        WarBoardPieceData_o *pieceData,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  UILabel_o *label; // x0
  BattleServantData_o *battleServant_k__BackingField; // x0
  UILabel_o *v14; // x19

  if ( (byte_42EAB04 & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)pieceData, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_15441/*"WARBOARD_SERVANT_STATUS_PERMANENT_SLEEP"*/, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_1/*""*/, v9, v10, v11);
    byte_42EAB04 = 1;
  }
  label = this->fields.label;
  if ( !label )
    goto LABEL_13;
  UILabel__set_text(label, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  if ( !pieceData )
    goto LABEL_13;
  battleServant_k__BackingField = pieceData->fields._battleServant_k__BackingField;
  if ( battleServant_k__BackingField
    && BattleServantData__HasAvailablePermanentSleepBuff(battleServant_k__BackingField, 0LL) )
  {
    v14 = this->fields.label;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    label = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_15441/*"WARBOARD_SERVANT_STATUS_PERMANENT_SLEEP"*/, 0LL);
    if ( v14 )
    {
      UILabel__set_text(v14, (System_String_o *)label, 0LL);
      return;
    }
LABEL_13:
    sub_B5D69C(label, pieceData);
  }
}