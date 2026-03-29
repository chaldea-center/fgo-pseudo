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
  UILabel_o *v7; // x19

  if ( (byte_4D2E1EF & 1) == 0 )
  {
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_15521/*"WARBOARD_SERVANT_STATUS_PERMANENT_SLEEP"*/);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D2E1EF = 1;
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
    v7 = this->fields.label;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    label = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_15521/*"WARBOARD_SERVANT_STATUS_PERMANENT_SLEEP"*/, 0);
    if ( v7 )
    {
      UILabel__set_text(v7, (System_String_o *)label, 0);
      return;
    }
LABEL_12:
    sub_1C93D2C(label, pieceData);
  }
}