void BattleBoostItem___ctor(BattleBoostItem_o *this, ItemEntity_o *item, int32_t skillId, const MethodInfo *method)
{
  BattleBoostItem_o *v6; // x21
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7

  v6 = this;
  System_Object___ctor((Il2CppObject *)this, 0);
  v6->fields.item = item;
  v6 = (BattleBoostItem_o *)((char *)v6 + 16);
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)v6, (int32_t)item, v7, v8, v9, v10, v11, v12);
  LODWORD(v6->monitor) = skillId;
}


// local variable allocation has failed, the output may be wrong!
bool BattleBoostItem__checkEffectTiming(BattleBoostItem_o *this, int32_t timing, const MethodInfo *method)
{
  BattleBoostItemInfoData_c *v5; // x0
  ItemEntity_o *item; // x20

  if ( (byte_593AF44 & 1) == 0 )
  {
    sub_21FFC50(&BattleBoostItemInfoData_TypeInfo);
    byte_593AF44 = 1;
  }
  v5 = BattleBoostItemInfoData_TypeInfo;
  item = this->fields.item;
  if ( !*(&BattleBoostItemInfoData_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BattleBoostItemInfoData_TypeInfo, *(_QWORD *)&timing);
  if ( !item )
    sub_21FFECC(v5, *(_QWORD *)&timing);
  return ItemEntity__getScript(
           item,
           BattleBoostItemInfoData_TypeInfo->static_fields->KEY_SCRIPT_BOOST_EFFECT_TIMING,
           0,
           0) == timing;
}