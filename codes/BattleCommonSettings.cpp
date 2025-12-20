void BattleCommonSettings___ctor(BattleCommonSettings_o *this, const MethodInfo *method)
{
  UnityEngine_ScriptableObject___ctor((UnityEngine_ScriptableObject_o *)this, 0);
}


BattleCommonSettings_ShiftIconAdjustment_array *BattleCommonSettings__get_ShiftIconAdjustmentArray(
        BattleCommonSettings_o *this,
        const MethodInfo *method)
{
  return this->fields.shiftIconAdjustmentArray;
}


void BattleCommonSettings_ShiftIconAdjustment___ctor(
        BattleCommonSettings_ShiftIconAdjustment_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


System_String_o *BattleCommonSettings_ShiftIconAdjustment__get_SpriteName(
        BattleCommonSettings_ShiftIconAdjustment_o *this,
        const MethodInfo *method)
{
  struct System_String_o **p_spriteName; // x19
  struct System_String_o *spriteName; // x21
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7

  p_spriteName = &this->fields.spriteName;
  spriteName = this->fields.spriteName;
  if ( !spriteName )
  {
    spriteName = BattleServantHpShiftComponent__GetShiftIconName(this->fields.ImageType, this->fields.ImageNo, 0);
    this->fields.spriteName = spriteName;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)p_spriteName, (int32_t)spriteName, v5, v6, v7, v8, v9, v10);
  }
  return spriteName;
}