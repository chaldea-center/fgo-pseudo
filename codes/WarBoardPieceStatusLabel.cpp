void __fastcall WarBoardPieceStatusLabel___ctor(WarBoardPieceStatusLabel_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall WarBoardPieceStatusLabel__SetupLabel(
        WarBoardPieceStatusLabel_o *this,
        WarBoardPieceData_o *pieceData,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  UILabel_o *label; // x0
  BattleServantData_o *battleServant_k__BackingField; // x0
  __int64 v11; // x1
  UILabel_o *v12; // x19

  if ( (byte_4B13BF9 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, pieceData, method);
    sub_1BCA7E0(&StringLiteral_15601/*"WARBOARD_SERVANT_STATUS_PERMANENT_SLEEP"*/, v5, v6);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v7, v8);
    byte_4B13BF9 = 1;
  }
  label = this->fields.label;
  if ( !label )
    goto LABEL_12;
  UILabel__set_text(label, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  if ( !pieceData )
    goto LABEL_12;
  battleServant_k__BackingField = pieceData->fields._battleServant_k__BackingField;
  if ( battleServant_k__BackingField
    && BattleServantData__HasAvailablePermanentSleepBuff(battleServant_k__BackingField, 0LL) )
  {
    v12 = this->fields.label;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v11);
    label = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_15601/*"WARBOARD_SERVANT_STATUS_PERMANENT_SLEEP"*/, 0LL);
    if ( v12 )
    {
      UILabel__set_text(v12, (System_String_o *)label, 0LL);
      return;
    }
LABEL_12:
    sub_1BCAA3C(label, pieceData);
  }
}