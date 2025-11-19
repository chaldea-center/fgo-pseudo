void BonusSelectSummonPartyOrganizationListViewObject___ctor(
        BonusSelectSummonPartyOrganizationListViewObject_o *this,
        const MethodInfo *method)
{
  if ( (byte_4CB26E4 & 1) == 0 )
  {
    sub_1C6BA08(&ListViewObject_TypeInfo);
    byte_4CB26E4 = 1;
  }
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  ListViewObject___ctor((ListViewObject_o *)this, 0);
}


BonusSelectSummonPartyOrganizationListViewItem_o *BonusSelectSummonPartyOrganizationListViewObject__GetItem(
        BonusSelectSummonPartyOrganizationListViewObject_o *this,
        const MethodInfo *method)
{
  return this->fields.listViewItem;
}


void BonusSelectSummonPartyOrganizationListViewObject__Init(
        BonusSelectSummonPartyOrganizationListViewObject_o *this,
        BonusSelectSummonPartyOrganizationListViewItem_o *item,
        BonusSelectSummonConfirmDialog_OnTapPartyMemberEvent_o *onTapEvent,
        const MethodInfo *method)
{
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  __int64 v8; // x1
  const MethodInfo *v9; // x3
  BonusSelectSummonPartyOrganizationListViewItemDraw_o *itemDraw; // x0

  this->fields.listViewItem = item;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.listViewItem, (int32_t)item, (int32_t)onTapEvent, method);
  this->fields.onTapEvent = onTapEvent;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.onTapEvent, (int32_t)onTapEvent, v6, v7);
  itemDraw = this->fields.itemDraw;
  if ( !itemDraw )
    sub_1C6BC60(0, v8);
  BonusSelectSummonPartyOrganizationListViewItemDraw__SetItem(itemDraw, this->fields.listViewItem, 3, v9);
  ((void (__fastcall *)(BonusSelectSummonPartyOrganizationListViewObject_o *, __int64, const MethodInfo *))this->klass->vtable._9_SetInput.methodPtr)(
    this,
    1,
    this->klass->vtable._9_SetInput.method);
}


void BonusSelectSummonPartyOrganizationListViewObject__Modfy(
        BonusSelectSummonPartyOrganizationListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  BonusSelectSummonPartyOrganizationListViewItemDraw_o *itemDraw; // x0

  itemDraw = this->fields.itemDraw;
  if ( !itemDraw )
    sub_1C6BC60(0, method);
  BonusSelectSummonPartyOrganizationListViewItemDraw__SetItem(itemDraw, this->fields.listViewItem, 3, v2);
}


void BonusSelectSummonPartyOrganizationListViewObject__OnLongTapServant(
        BonusSelectSummonPartyOrganizationListViewObject_o *this,
        const MethodInfo *method)
{
  struct BonusSelectSummonConfirmDialog_OnTapPartyMemberEvent_o *onTapEvent; // x8

  if ( this->fields.isEnableTouch )
  {
    onTapEvent = this->fields.onTapEvent;
    if ( onTapEvent )
      ((void (__fastcall *)(intptr_t, struct BonusSelectSummonPartyOrganizationListViewItem_o *, __int64, intptr_t))onTapEvent->fields.invoke_impl)(
        onTapEvent->fields.method_code,
        this->fields.listViewItem,
        1,
        onTapEvent->fields.method);
  }
}


void BonusSelectSummonPartyOrganizationListViewObject__OnTapEvent(
        BonusSelectSummonPartyOrganizationListViewObject_o *this,
        bool isLongTap,
        const MethodInfo *method)
{
  struct BonusSelectSummonConfirmDialog_OnTapPartyMemberEvent_o *onTapEvent; // x9

  if ( this->fields.isEnableTouch )
  {
    onTapEvent = this->fields.onTapEvent;
    if ( onTapEvent )
      ((void (__fastcall *)(intptr_t, struct BonusSelectSummonPartyOrganizationListViewItem_o *, bool, intptr_t))onTapEvent->fields.invoke_impl)(
        onTapEvent->fields.method_code,
        this->fields.listViewItem,
        isLongTap,
        onTapEvent->fields.method);
  }
}


void BonusSelectSummonPartyOrganizationListViewObject__OnTapServant(
        BonusSelectSummonPartyOrganizationListViewObject_o *this,
        const MethodInfo *method)
{
  struct BonusSelectSummonConfirmDialog_OnTapPartyMemberEvent_o *onTapEvent; // x8

  if ( this->fields.isEnableTouch )
  {
    onTapEvent = this->fields.onTapEvent;
    if ( onTapEvent )
      ((void (__fastcall *)(intptr_t, struct BonusSelectSummonPartyOrganizationListViewItem_o *, _QWORD, intptr_t))onTapEvent->fields.invoke_impl)(
        onTapEvent->fields.method_code,
        this->fields.listViewItem,
        0,
        onTapEvent->fields.method);
  }
}


void BonusSelectSummonPartyOrganizationListViewObject__SetInput(
        BonusSelectSummonPartyOrganizationListViewObject_o *this,
        bool isEnableInput,
        const MethodInfo *method)
{
  bool v3; // w1

  v3 = isEnableInput;
  this->fields.isEnableTouch = v3;
  ListViewObject__SetInput((ListViewObject_o *)this, v3, 0);
}