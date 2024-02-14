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
  __int64 v6; // x1
  UILabel_o *label; // x0
  BattleServantData_o *battleServant_k__BackingField; // x0
  UILabel_o *v9; // x19

  if ( (byte_421650D & 1) == 0 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, pieceData);
    sub_B0D8A4(&StringLiteral_15329/*"WARBOARD_SERVANT_STATUS_PERMANENT_SLEEP"*/, v5);
    sub_B0D8A4(&StringLiteral_1/*""*/, v6);
    byte_421650D = 1;
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
    v9 = this->fields.label;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    label = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_15329/*"WARBOARD_SERVANT_STATUS_PERMANENT_SLEEP"*/, 0LL);
    if ( v9 )
    {
      UILabel__set_text(v9, (System_String_o *)label, 0LL);
      return;
    }
LABEL_13:
    sub_B0D97C(label);
  }
}