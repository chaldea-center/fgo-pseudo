void CharaGraphSortManageUnitGrandEquip___ctor(CharaGraphSortManageUnitGrandEquip_o *this, const MethodInfo *method)
{
  CharaGraphSortManageUnitServantEquip___ctor((CharaGraphSortManageUnitServantEquip_o *)this, 0);
}


CharaGraphFilterLogicBase_o *CharaGraphSortManageUnitGrandEquip__CreateFilterLogic(
        CharaGraphSortManageUnitGrandEquip_o *this,
        const MethodInfo *method)
{
  ServantCharaGraphEquipFilterLogic_o *v2; // x19

  if ( (byte_596B302 & 1) == 0 )
  {
    sub_2213A60(&ServantCharaGraphEquipFilterLogicGrand_TypeInfo);
    byte_596B302 = 1;
  }
  v2 = (ServantCharaGraphEquipFilterLogic_o *)sub_2213CCC(ServantCharaGraphEquipFilterLogicGrand_TypeInfo);
  ServantCharaGraphEquipFilterLogic___ctor(v2, 0);
  return (CharaGraphFilterLogicBase_o *)v2;
}