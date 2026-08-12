void BonusSelectSummonPartyOrganizationListViewObject___ctor(
        BonusSelectSummonPartyOrganizationListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_596C98D & 1) == 0 )
  {
    sub_2213A60(&ListViewObject_TypeInfo);
    byte_596C98D = 1;
  }
  if ( !*(&ListViewObject_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo, method, v2);
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
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  __int64 v16; // x1
  const MethodInfo *v17; // x3
  BonusSelectSummonPartyOrganizationListViewItemDraw_o *itemDraw; // x0

  this->fields.listViewItem = item;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.listViewItem,
    (int32_t)item,
    (System_String_o *)onTapEvent,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.onTapEvent = onTapEvent;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.onTapEvent,
    (int32_t)onTapEvent,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  itemDraw = this->fields.itemDraw;
  if ( !itemDraw )
    sub_2213CDC(0, v16);
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

  if ( !this->fields.itemDraw )
    sub_2213CDC(this, method);
  BonusSelectSummonPartyOrganizationListViewItemDraw__SetItem(this->fields.itemDraw, this->fields.listViewItem, 3, v2);
}


void BonusSelectSummonPartyOrganizationListViewObject__OnLongTapServant(
        BonusSelectSummonPartyOrganizationListViewObject_o *this,
        const MethodInfo *method)
{
  struct BonusSelectSummonConfirmDialog_OnTapPartyMemberEvent_o *onTapEvent; // x9

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
  struct BonusSelectSummonConfirmDialog_OnTapPartyMemberEvent_o *onTapEvent; // x9

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
  this->fields.isEnableTouch = isEnableInput;
  ListViewObject__SetInput((ListViewObject_o *)this, isEnableInput, 0);
}