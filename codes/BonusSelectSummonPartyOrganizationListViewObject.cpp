void __fastcall BonusSelectSummonPartyOrganizationListViewObject___ctor(
        BonusSelectSummonPartyOrganizationListViewObject_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A578D7 & 1) == 0 )
  {
    sub_1B885B0(&ListViewObject_TypeInfo);
    byte_4A578D7 = 1;
  }
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  ListViewObject___ctor((ListViewObject_o *)this, 0LL);
}


BonusSelectSummonPartyOrganizationListViewItem_o *__fastcall BonusSelectSummonPartyOrganizationListViewObject__GetItem(
        BonusSelectSummonPartyOrganizationListViewObject_o *this,
        const MethodInfo *method)
{
  return this->fields.listViewItem;
}


void __fastcall BonusSelectSummonPartyOrganizationListViewObject__Init(
        BonusSelectSummonPartyOrganizationListViewObject_o *this,
        BonusSelectSummonPartyOrganizationListViewItem_o *item,
        BonusSelectSummonConfirmDialog_OnTapPartyMemberEvent_o *onTapEvent,
        const MethodInfo *method)
{
  int32_t v6; // w2
  int32_t v7; // w3
  __int64 v8; // x1
  const MethodInfo *v9; // x3
  BonusSelectSummonPartyOrganizationListViewItemDraw_o *itemDraw; // x0

  this->fields.listViewItem = item;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.listViewItem,
    (int32_t)item,
    (int32_t)onTapEvent,
    (int32_t)method);
  this->fields.onTapEvent = onTapEvent;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.onTapEvent, (int32_t)onTapEvent, v6, v7);
  itemDraw = this->fields.itemDraw;
  if ( !itemDraw )
    sub_1B8880C(0LL, v8);
  BonusSelectSummonPartyOrganizationListViewItemDraw__SetItem(itemDraw, this->fields.listViewItem, 3, v9);
  ((void (__fastcall *)(BonusSelectSummonPartyOrganizationListViewObject_o *, __int64, Il2CppMethodPointer))this->klass->vtable._9_SetInput.method)(
    this,
    1LL,
    this->klass->vtable._10_Invalidation.methodPtr);
}


void __fastcall BonusSelectSummonPartyOrganizationListViewObject__Modfy(
        BonusSelectSummonPartyOrganizationListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  BonusSelectSummonPartyOrganizationListViewItemDraw_o *itemDraw; // x0

  itemDraw = this->fields.itemDraw;
  if ( !itemDraw )
    sub_1B8880C(0LL, method);
  BonusSelectSummonPartyOrganizationListViewItemDraw__SetItem(itemDraw, this->fields.listViewItem, 3, v2);
}


void __fastcall BonusSelectSummonPartyOrganizationListViewObject__OnLongTapServant(
        BonusSelectSummonPartyOrganizationListViewObject_o *this,
        const MethodInfo *method)
{
  struct BonusSelectSummonConfirmDialog_OnTapPartyMemberEvent_o *onTapEvent; // x8

  if ( this->fields.isEnableTouch )
  {
    onTapEvent = this->fields.onTapEvent;
    if ( onTapEvent )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, struct BonusSelectSummonPartyOrganizationListViewItem_o *, __int64, _QWORD))onTapEvent->fields.m_target)(
        onTapEvent->fields.original_method_info,
        this->fields.listViewItem,
        1LL,
        *(_QWORD *)&onTapEvent->fields.extra_arg);
  }
}


void __fastcall BonusSelectSummonPartyOrganizationListViewObject__OnTapEvent(
        BonusSelectSummonPartyOrganizationListViewObject_o *this,
        bool isLongTap,
        const MethodInfo *method)
{
  struct BonusSelectSummonConfirmDialog_OnTapPartyMemberEvent_o *onTapEvent; // x9

  if ( this->fields.isEnableTouch )
  {
    onTapEvent = this->fields.onTapEvent;
    if ( onTapEvent )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, struct BonusSelectSummonPartyOrganizationListViewItem_o *, bool, _QWORD))onTapEvent->fields.m_target)(
        onTapEvent->fields.original_method_info,
        this->fields.listViewItem,
        isLongTap,
        *(_QWORD *)&onTapEvent->fields.extra_arg);
  }
}


void __fastcall BonusSelectSummonPartyOrganizationListViewObject__OnTapServant(
        BonusSelectSummonPartyOrganizationListViewObject_o *this,
        const MethodInfo *method)
{
  struct BonusSelectSummonConfirmDialog_OnTapPartyMemberEvent_o *onTapEvent; // x8

  if ( this->fields.isEnableTouch )
  {
    onTapEvent = this->fields.onTapEvent;
    if ( onTapEvent )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, struct BonusSelectSummonPartyOrganizationListViewItem_o *, _QWORD, _QWORD))onTapEvent->fields.m_target)(
        onTapEvent->fields.original_method_info,
        this->fields.listViewItem,
        0LL,
        *(_QWORD *)&onTapEvent->fields.extra_arg);
  }
}


void __fastcall BonusSelectSummonPartyOrganizationListViewObject__SetInput(
        BonusSelectSummonPartyOrganizationListViewObject_o *this,
        bool isEnableInput,
        const MethodInfo *method)
{
  bool v3; // w1

  v3 = isEnableInput;
  this->fields.isEnableTouch = v3;
  ListViewObject__SetInput((ListViewObject_o *)this, v3, 0LL);
}