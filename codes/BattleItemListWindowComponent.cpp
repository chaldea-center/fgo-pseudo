void __fastcall BattleItemListWindowComponent___ctor(BattleItemListWindowComponent_o *this, const MethodInfo *method)
{
  this->fields.isFromBattleMenu = 1;
  BattleWindowComponent___ctor((BattleWindowComponent_o *)this, 0LL);
}


void __fastcall BattleItemListWindowComponent__CloseWindow(
        BattleItemListWindowComponent_o *this,
        const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v9; // x1
  struct System_String_o **v10; // x8
  struct System_String_o *v11; // x1
  __int64 v12; // x1
  BattleViewItemlistComponent_o *itemList; // x0

  if ( (byte_4C24FAC & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_3645/*"COMMAND_SPELL_RECOVER_TIME"*/, method);
    sub_1C3B764(&StringLiteral_3644/*"COMMAND_SPELL_RECOVER_AT"*/, v9);
    byte_4C24FAC = 1;
  }
  if ( this->fields.isFromBattleMenu )
    v10 = (struct System_String_o **)&StringLiteral_3644/*"COMMAND_SPELL_RECOVER_AT"*/;
  else
    v10 = (struct System_String_o **)&StringLiteral_3645/*"COMMAND_SPELL_RECOVER_TIME"*/;
  v11 = *v10;
  this->fields.closeFsmEvent = *v10;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.closeFsmEvent, (int64_t)v11, v2, v3, v4, v5, v6, v7);
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_1C3B9C0(0LL, v12);
  BattleViewItemlistComponent__setHide(itemList, 0LL);
  BattleWindowComponent__Close((BattleWindowComponent_o *)this, 0LL, 0LL);
}


void __fastcall BattleItemListWindowComponent__CompClose(
        BattleItemListWindowComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *masterFsm; // x0

  masterFsm = this->fields.masterFsm;
  if ( !masterFsm
    || (PlayMakerFSM__SendEvent(masterFsm, this->fields.closeFsmEvent, 0LL),
        (masterFsm = (PlayMakerFSM_o *)this->fields.itemList) == 0LL) )
  {
    sub_1C3B9C0(masterFsm, method);
  }
  BattleViewItemlistComponent__ClearObj((BattleViewItemlistComponent_o *)masterFsm, 0LL);
  BattleWindowComponent__CompClose((BattleWindowComponent_o *)this, 0LL);
}


void __fastcall BattleItemListWindowComponent__CompOpen(
        BattleItemListWindowComponent_o *this,
        const MethodInfo *method)
{
  BattleViewItemlistComponent_o *itemList; // x0

  itemList = this->fields.itemList;
  if ( !itemList )
    sub_1C3B9C0(0LL, method);
  BattleViewItemlistComponent__setShow(itemList, 0LL);
  BattleWindowComponent__CompOpen((BattleWindowComponent_o *)this, 0LL);
}


void __fastcall BattleItemListWindowComponent__OnItemClick(
        BattleItemListWindowComponent_o *this,
        BattleDropItem_o *dropItem,
        const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleItemListWindowComponent__Open(
        BattleItemListWindowComponent_o *this,
        bool fromBattleMenu,
        BattleWindowComponent_EndCall_o *call,
        const MethodInfo *method)
{
  __int64 v7; // x1
  BattleData_o *battleData; // x0
  BattleViewItemlistComponent_o *itemList; // x22
  BattleDropItem_array *DropItems; // x23
  BattleDropItemComponent_ClickDelegate_o *v11; // x24

  if ( (byte_4C24FAB & 1) == 0 )
  {
    sub_1C3B764(&Method_BattleItemListWindowComponent_OnItemClick__, fromBattleMenu);
    sub_1C3B764(&BattleDropItemComponent_ClickDelegate_TypeInfo, v7);
    byte_4C24FAB = 1;
  }
  battleData = this->fields.battleData;
  if ( !battleData
    || (itemList = this->fields.itemList,
        DropItems = BattleData__getDropItems(battleData, 0LL),
        v11 = (BattleDropItemComponent_ClickDelegate_o *)sub_1C3B9B0(BattleDropItemComponent_ClickDelegate_TypeInfo),
        BattleDropItemComponent_ClickDelegate___ctor(
          v11,
          (Il2CppObject *)this,
          Method_BattleItemListWindowComponent_OnItemClick__,
          0LL),
        !itemList)
    || (BattleViewItemlistComponent__setListDataCustomColumn(
          itemList,
          DropItems,
          v11,
          this->fields.itemColumnCount,
          0LL),
        (battleData = (BattleData_o *)this->fields.itemList) == 0LL) )
  {
    sub_1C3B9C0(battleData, fromBattleMenu);
  }
  BattleViewItemlistComponent__setHide((BattleViewItemlistComponent_o *)battleData, 0LL);
  this->fields.isFromBattleMenu = fromBattleMenu;
  BattleWindowComponent__Open((BattleWindowComponent_o *)this, call, 0LL);
}


void __fastcall BattleItemListWindowComponent__SetBattleData(
        BattleItemListWindowComponent_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.battleData = data;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.battleData,
    (int64_t)data,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


System_String_o *__fastcall BattleItemListWindowComponent__get_closeBtnPath(
        BattleItemListWindowComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C24FAD & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_12826/*"SubmarineUnreleasedScan"*/, method);
    byte_4C24FAD = 1;
  }
  return (System_String_o *)StringLiteral_12826/*"SubmarineUnreleasedScan"*/;
}