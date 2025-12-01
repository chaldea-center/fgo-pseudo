void BonusSelectSummonPartyOrganizationListViewObject___ctor(
        BonusSelectSummonPartyOrganizationListViewObject_o *this,
        const MethodInfo *method)
{
  if ( (byte_4CC37F5 & 1) == 0 )
  {
    sub_1C713B0(&ListViewObject_TypeInfo);
    byte_4CC37F5 = 1;
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
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  __int64 v16; // x1
  const MethodInfo *v17; // x3
  BonusSelectSummonPartyOrganizationListViewItemDraw_o *itemDraw; // x0

  this->fields.listViewItem = item;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.listViewItem,
    (int32_t)item,
    (int32_t)onTapEvent,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.onTapEvent = onTapEvent;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.onTapEvent,
    (int32_t)onTapEvent,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  itemDraw = this->fields.itemDraw;
  if ( !itemDraw )
    sub_1C71608(0, v16);
  BonusSelectSummonPartyOrganizationListViewItemDraw__SetItem(itemDraw, this->fields.listViewItem, 3, v17);
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
    sub_1C71608(0, method);
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