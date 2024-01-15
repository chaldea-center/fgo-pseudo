void __fastcall BattleItemListWindowComponent___ctor(BattleItemListWindowComponent_o *this, const MethodInfo *method)
{
  this->fields.isFromBattleMenu = 1;
  BattleWindowComponent___ctor((BattleWindowComponent_o *)this, 0LL);
}


void __fastcall BattleItemListWindowComponent__CloseWindow(
        BattleItemListWindowComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_String_o **v4; // x8
  struct System_String_o *v5; // x1
  BattleViewItemlistComponent_o *itemList; // x0

  if ( (byte_40F734D & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_3102/*"CLOSE_TO_TACTICAL"*/, method);
    sub_B16FFC(&StringLiteral_3101/*"CLOSE_TO_MENU"*/, v3);
    byte_40F734D = 1;
  }
  if ( this->fields.isFromBattleMenu )
    v4 = (struct System_String_o **)&StringLiteral_3101/*"CLOSE_TO_MENU"*/;
  else
    v4 = (struct System_String_o **)&StringLiteral_3102/*"CLOSE_TO_TACTICAL"*/;
  if ( !this
    || (v5 = *v4,
        this->fields.closeFsmEvent = *v4,
        sub_B16F98(&this->fields.closeFsmEvent, v5),
        (itemList = this->fields.itemList) == 0LL) )
  {
    sub_B170D4();
  }
  BattleViewItemlistComponent__setHide(itemList, 0LL);
  BattleWindowComponent__Close((BattleWindowComponent_o *)this, 0LL, 0LL);
}


void __fastcall BattleItemListWindowComponent__CompClose(
        BattleItemListWindowComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *masterFsm; // x0
  BattleViewItemlistComponent_o *itemList; // x0

  masterFsm = this->fields.masterFsm;
  if ( !masterFsm
    || (PlayMakerFSM__SendEvent(masterFsm, this->fields.closeFsmEvent, 0LL), (itemList = this->fields.itemList) == 0LL) )
  {
    sub_B170D4();
  }
  BattleViewItemlistComponent__ClearObj(itemList, 0LL);
  BattleWindowComponent__CompClose((BattleWindowComponent_o *)this, 0LL);
}


void __fastcall BattleItemListWindowComponent__CompOpen(
        BattleItemListWindowComponent_o *this,
        const MethodInfo *method)
{
  BattleViewItemlistComponent_o *itemList; // x0

  itemList = this->fields.itemList;
  if ( !itemList )
    sub_B170D4();
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
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  BattleDropItemComponent_ClickDelegate_o *v15; // x24
  BattleViewItemlistComponent_o *v16; // x0

  if ( (byte_40F734C & 1) == 0 )
  {
    sub_B16FFC(&Method_BattleItemListWindowComponent_OnItemClick__, fromBattleMenu);
    sub_B16FFC(&BattleDropItemComponent_ClickDelegate_TypeInfo, v7);
    byte_40F734C = 1;
  }
  battleData = this->fields.battleData;
  if ( !battleData
    || (itemList = this->fields.itemList,
        DropItems = BattleData__getDropItems(battleData, 0LL),
        v15 = (BattleDropItemComponent_ClickDelegate_o *)sub_B170CC(
                                                           BattleDropItemComponent_ClickDelegate_TypeInfo,
                                                           v11,
                                                           v12,
                                                           v13,
                                                           v14),
        BattleDropItemComponent_ClickDelegate___ctor(
          v15,
          (Il2CppObject *)this,
          Method_BattleItemListWindowComponent_OnItemClick__,
          0LL),
        !itemList)
    || (BattleViewItemlistComponent__setListDataCustomColumn(
          itemList,
          DropItems,
          v15,
          this->fields.itemColumnCount,
          0LL),
        (v16 = this->fields.itemList) == 0LL) )
  {
    sub_B170D4();
  }
  BattleViewItemlistComponent__setHide(v16, 0LL);
  this->fields.isFromBattleMenu = fromBattleMenu;
  BattleWindowComponent__Open((BattleWindowComponent_o *)this, call, 0LL);
}


void __fastcall BattleItemListWindowComponent__SetBattleData(
        BattleItemListWindowComponent_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  this->fields.battleData = data;
  sub_B16F98(&this->fields.battleData, data);
}


System_String_o *__fastcall BattleItemListWindowComponent__get_closeBtnPath(
        BattleItemListWindowComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_40F734E & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_12573/*"Scroll Bar/item_list_close"*/, method);
    byte_40F734E = 1;
  }
  return (System_String_o *)StringLiteral_12573/*"Scroll Bar/item_list_close"*/;
}