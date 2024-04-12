void __fastcall WarBoardPieceStatusLabel___ctor(WarBoardPieceStatusLabel_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall WarBoardPieceStatusLabel__SetupLabel(
        WarBoardPieceStatusLabel_o *this,
        WarBoardPieceData_o *pieceData,
        const MethodInfo *method)
{
  UILabel_o *label; // x0
  BattleServantData_o *battleServant_k__BackingField; // x0
  UILabel_o *v7; // x19

  if ( (byte_42B21A5 & 1) == 0 )
  {
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&StringLiteral_15382/*"WARBOARD_SERVANT_STATUS_PERMANENT_SLEEP"*/);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42B21A5 = 1;
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
    v7 = this->fields.label;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    label = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_15382/*"WARBOARD_SERVANT_STATUS_PERMANENT_SLEEP"*/, 0LL);
    if ( v7 )
    {
      UILabel__set_text(v7, (System_String_o *)label, 0LL);
      return;
    }
LABEL_13:
    sub_B52A5C(label, pieceData);
  }
}