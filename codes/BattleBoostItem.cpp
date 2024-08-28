void __fastcall BattleBoostItem___ctor(
        BattleBoostItem_o *this,
        ItemEntity_o *item,
        int32_t skillId,
        const MethodInfo *method)
{
  BattleBoostItem_o *v6; // x21
  int32_t v7; // w2
  int32_t v8; // w3

  v6 = this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v6->fields.item = item;
  v6 = (BattleBoostItem_o *)((char *)v6 + 16);
  sub_1B68678((ServantStatusBattleListViewItem_o *)v6, (int32_t)item, v7, v8);
  LODWORD(v6->monitor) = skillId;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleBoostItem__checkEffectTiming(BattleBoostItem_o *this, int32_t timing, const MethodInfo *method)
{
  BattleBoostItemInfoData_c *v5; // x0
  ItemEntity_o *item; // x20

  if ( (byte_4A0AED3 & 1) == 0 )
  {
    sub_1B686D4(&BattleBoostItemInfoData_TypeInfo, *(_QWORD *)&timing);
    byte_4A0AED3 = 1;
  }
  v5 = BattleBoostItemInfoData_TypeInfo;
  item = this->fields.item;
  if ( !BattleBoostItemInfoData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleBoostItemInfoData_TypeInfo);
  if ( !item )
    sub_1B68930(v5, *(_QWORD *)&timing);
  return ItemEntity__getScript(
           item,
           BattleBoostItemInfoData_TypeInfo->static_fields->KEY_SCRIPT_BOOST_EFFECT_TIMING,
           0,
           0LL) == timing;
}