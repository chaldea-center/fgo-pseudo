void __fastcall CharaGraphSortManageUnitGrandEquip___ctor(
        CharaGraphSortManageUnitGrandEquip_o *this,
        const MethodInfo *method)
{
  CharaGraphSortManageUnitServantEquip___ctor((CharaGraphSortManageUnitServantEquip_o *)this, 0LL);
}


CharaGraphFilterLogicBase_o *__fastcall CharaGraphSortManageUnitGrandEquip__CreateFilterLogic(
        CharaGraphSortManageUnitGrandEquip_o *this,
        const MethodInfo *method)
{
  ServantCharaGraphEquipFilterLogic_o *v2; // x19

  if ( (byte_4B3F955 & 1) == 0 )
  {
    sub_1BDB878(&ServantCharaGraphEquipFilterLogicGrand_TypeInfo, method);
    byte_4B3F955 = 1;
  }
  v2 = (ServantCharaGraphEquipFilterLogic_o *)sub_1BDBAC4(ServantCharaGraphEquipFilterLogicGrand_TypeInfo);
  ServantCharaGraphEquipFilterLogic___ctor(v2, 0LL);
  return (CharaGraphFilterLogicBase_o *)v2;
}