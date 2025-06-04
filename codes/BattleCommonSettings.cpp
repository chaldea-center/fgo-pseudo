void __fastcall BattleCommonSettings___ctor(BattleCommonSettings_o *this, const MethodInfo *method)
{
  UnityEngine_ScriptableObject___ctor((UnityEngine_ScriptableObject_o *)this, 0LL);
}


BattleCommonSettings_ShiftIconAdjustment_array *__fastcall BattleCommonSettings__get_ShiftIconAdjustmentArray(
        BattleCommonSettings_o *this,
        const MethodInfo *method)
{
  return this->fields.shiftIconAdjustmentArray;
}


void __fastcall BattleCommonSettings_ShiftIconAdjustment___ctor(
        BattleCommonSettings_ShiftIconAdjustment_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_String_o *__fastcall BattleCommonSettings_ShiftIconAdjustment__get_SpriteName(
        BattleCommonSettings_ShiftIconAdjustment_o *this,
        const MethodInfo *method)
{
  struct System_String_o **p_spriteName; // x19
  struct System_String_o *spriteName; // x21
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  p_spriteName = &this->fields.spriteName;
  spriteName = this->fields.spriteName;
  if ( !spriteName )
  {
    spriteName = BattleServantHpShiftComponent__GetShiftIconName(this->fields.ImageType, this->fields.ImageNo, 0LL);
    this->fields.spriteName = spriteName;
    sub_1BC2FAC((CGThumbnailListItem_o *)p_spriteName, (int32_t)spriteName, v5, v6);
  }
  return spriteName;
}