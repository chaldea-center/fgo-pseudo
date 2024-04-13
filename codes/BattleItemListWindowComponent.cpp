void __fastcall BattleItemListWindowComponent___ctor(BattleItemListWindowComponent_o *this, const MethodInfo *method)
{
  this->fields.isFromBattleMenu = 1;
  BattleWindowComponent___ctor((BattleWindowComponent_o *)this, 0LL);
}


void __fastcall BattleItemListWindowComponent__CloseWindow(
        BattleItemListWindowComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  BattleItemListWindowComponent_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct System_String_o **v8; // x8

  v4 = this;
  if ( (byte_42E597A & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_3176/*"CLOSE_TO_TACTICAL"*/, (_DWORD)method, v2, v3);
    this = (BattleItemListWindowComponent_o *)sub_B5D5C4(&StringLiteral_3175/*"CLOSE_TO_MENU"*/, v5, v6, v7);
    byte_42E597A = 1;
  }
  if ( v4->fields.isFromBattleMenu )
    v8 = (struct System_String_o **)&StringLiteral_3175/*"CLOSE_TO_MENU"*/;
  else
    v8 = (struct System_String_o **)&StringLiteral_3176/*"CLOSE_TO_TACTICAL"*/;
  if ( !v4
    || (v4->fields.closeFsmEvent = *v8,
        sub_B5D560(&v4->fields.closeFsmEvent),
        (this = (BattleItemListWindowComponent_o *)v4->fields.itemList) == 0LL) )
  {
    sub_B5D69C(this, method);
  }
  BattleViewItemlistComponent__setHide((BattleViewItemlistComponent_o *)this, 0LL);
  BattleWindowComponent__Close((BattleWindowComponent_o *)v4, 0LL, 0LL);
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
    sub_B5D69C(masterFsm, method);
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
    sub_B5D69C(0LL, method);
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  BattleData_o *battleData; // x0
  BattleViewItemlistComponent_o *itemList; // x22
  BattleDropItem_array *DropItems; // x23
  BattleDropItemComponent_ClickDelegate_o *v13; // x24

  if ( (byte_42E5979 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BattleItemListWindowComponent_OnItemClick__, fromBattleMenu, (_DWORD)call, method);
    sub_B5D5C4(&BattleDropItemComponent_ClickDelegate_TypeInfo, v7, v8, v9);
    byte_42E5979 = 1;
  }
  battleData = this->fields.battleData;
  if ( !battleData
    || (itemList = this->fields.itemList,
        DropItems = BattleData__getDropItems(battleData, 0LL),
        v13 = (BattleDropItemComponent_ClickDelegate_o *)sub_B5D694(BattleDropItemComponent_ClickDelegate_TypeInfo),
        BattleDropItemComponent_ClickDelegate___ctor(
          v13,
          (Il2CppObject *)this,
          Method_BattleItemListWindowComponent_OnItemClick__,
          0LL),
        !itemList)
    || (BattleViewItemlistComponent__setListDataCustomColumn(
          itemList,
          DropItems,
          v13,
          this->fields.itemColumnCount,
          0LL),
        (battleData = (BattleData_o *)this->fields.itemList) == 0LL) )
  {
    sub_B5D69C(battleData, fromBattleMenu);
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
  this->fields.battleData = data;
  sub_B5D560(&this->fields.battleData);
}


System_String_o *__fastcall BattleItemListWindowComponent__get_closeBtnPath(
        BattleItemListWindowComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E597B & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_12779/*"Scroll Bar/item_list_close"*/, (_DWORD)method, v2, v3);
    byte_42E597B = 1;
  }
  return (System_String_o *)StringLiteral_12779/*"Scroll Bar/item_list_close"*/;
}