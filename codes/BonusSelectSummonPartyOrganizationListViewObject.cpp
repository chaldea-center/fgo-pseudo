void __fastcall BonusSelectSummonPartyOrganizationListViewObject___ctor(
        BonusSelectSummonPartyOrganizationListViewObject_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C1E50D & 1) == 0 )
  {
    sub_1C3B764(&ListViewObject_TypeInfo, method);
    byte_4C1E50D = 1;
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  __int64 v16; // x1
  const MethodInfo *v17; // x3
  BonusSelectSummonPartyOrganizationListViewItemDraw_o *itemDraw; // x0

  this->fields.listViewItem = item;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.listViewItem,
    (int64_t)item,
    (int64_t)onTapEvent,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.onTapEvent = onTapEvent;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.onTapEvent, (int64_t)onTapEvent, v10, v11, v12, v13, v14, v15);
  itemDraw = this->fields.itemDraw;
  if ( !itemDraw )
    sub_1C3B9C0(0LL, v16);
  BonusSelectSummonPartyOrganizationListViewItemDraw__SetItem(itemDraw, this->fields.listViewItem, 3, v17);
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
    sub_1C3B9C0(0LL, method);
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