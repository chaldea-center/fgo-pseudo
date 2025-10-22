void CharaGraphSortManageUnitGrandEquip___ctor(CharaGraphSortManageUnitGrandEquip_o *this, const MethodInfo *method)
{
  CharaGraphSortManageUnitServantEquip___ctor((CharaGraphSortManageUnitServantEquip_o *)this, 0);
}


CharaGraphFilterLogicBase_o *CharaGraphSortManageUnitGrandEquip__CreateFilterLogic(
        CharaGraphSortManageUnitGrandEquip_o *this,
        const MethodInfo *method)
{
  ServantCharaGraphEquipFilterLogic_o *v2; // x19

  if ( (byte_4C51AE1 & 1) == 0 )
  {
    sub_1C3E564(&ServantCharaGraphEquipFilterLogicGrand_TypeInfo);
    byte_4C51AE1 = 1;
  }
  v2 = (ServantCharaGraphEquipFilterLogic_o *)sub_1C3E7B0(ServantCharaGraphEquipFilterLogicGrand_TypeInfo);
  ServantCharaGraphEquipFilterLogic___ctor(v2, 0);
  return (CharaGraphFilterLogicBase_o *)v2;
}