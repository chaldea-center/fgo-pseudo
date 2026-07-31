void WarBoardPieceStatusLabel___ctor(WarBoardPieceStatusLabel_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void WarBoardPieceStatusLabel__SetupLabel(
        WarBoardPieceStatusLabel_o *this,
        WarBoardPieceData_o *pieceData,
        const MethodInfo *method)
{
  UILabel_o *label; // x0
  BattleServantData_o *battleServant_k__BackingField; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  UILabel_o *v9; // x19

  if ( (byte_5935EA4 & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_16002/*"WARBOARD_SERVANT_STATUS_PERMANENT_SLEEP"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5935EA4 = 1;
  }
  label = this->fields.label;
  if ( !label )
    goto LABEL_12;
  UILabel__set_text(label, (System_String_o *)StringLiteral_1/*""*/, 0);
  if ( !pieceData )
    goto LABEL_12;
  battleServant_k__BackingField = pieceData->fields._battleServant_k__BackingField;
  if ( battleServant_k__BackingField
    && BattleServantData__HasAvailablePermanentSleepBuff(battleServant_k__BackingField, 0) )
  {
    v9 = this->fields.label;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v7, v8);
    label = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_16002/*"WARBOARD_SERVANT_STATUS_PERMANENT_SLEEP"*/, 0);
    if ( v9 )
    {
      UILabel__set_text(v9, (System_String_o *)label, 0);
      return;
    }
LABEL_12:
    sub_21FFECC(label, pieceData);
  }
}