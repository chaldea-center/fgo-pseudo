void __fastcall BattleBoostItem___ctor(
        BattleBoostItem_o *this,
        ItemEntity_o *item,
        int32_t skillId,
        const MethodInfo *method)
{
  BattleBoostItem_o *v6; // x21
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  v6 = this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v6->fields.item = item;
  v6 = (BattleBoostItem_o *)((char *)v6 + 16);
  sub_B0D840((BattleServantConfConponent_o *)v6, (System_Int32_array **)item, v7, v8, v9, v10, v11, v12);
  LODWORD(v6->monitor) = skillId;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleBoostItem__checkEffectTiming(BattleBoostItem_o *this, int32_t timing, const MethodInfo *method)
{
  ItemEntity_o *item; // x20
  BattleBoostItemInfoData_c *v6; // x0

  if ( (byte_4217DDC & 1) == 0 )
  {
    sub_B0D8A4(&BattleBoostItemInfoData_TypeInfo, *(_QWORD *)&timing);
    byte_4217DDC = 1;
  }
  item = this->fields.item;
  v6 = BattleBoostItemInfoData_TypeInfo;
  if ( (BYTE3(BattleBoostItemInfoData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleBoostItemInfoData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBoostItemInfoData_TypeInfo);
  }
  if ( !item )
    sub_B0D97C(v6);
  return ItemEntity__getScript(
           item,
           BattleBoostItemInfoData_TypeInfo->static_fields->KEY_SCRIPT_BOOST_EFFECT_TIMING,
           0,
           0LL) == timing;
}