void __fastcall BonusSelectSummonPartyOrganizationListViewObject___ctor(
        BonusSelectSummonPartyOrganizationListViewObject_o *this,
        const MethodInfo *method)
{
  if ( (byte_40FB10A & 1) == 0 )
  {
    sub_B16FFC(&ListViewObject_TypeInfo, method);
    byte_40FB10A = 1;
  }
  if ( (BYTE3(ListViewObject_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ListViewObject_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  }
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
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  const MethodInfo *v16; // x3
  BonusSelectSummonPartyOrganizationListViewItemDraw_o *itemDraw; // x0

  this->fields.listViewItem = item;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.listViewItem,
    (System_Int32_array **)item,
    (System_String_array **)onTapEvent,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.onTapEvent = onTapEvent;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.onTapEvent,
    (System_Int32_array **)onTapEvent,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  itemDraw = this->fields.itemDraw;
  if ( !itemDraw )
    sub_B170D4();
  BonusSelectSummonPartyOrganizationListViewItemDraw__SetItem(itemDraw, this->fields.listViewItem, 3, v16);
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
    sub_B170D4();
  BonusSelectSummonPartyOrganizationListViewItemDraw__SetItem(itemDraw, this->fields.listViewItem, 3, v2);
}


void __fastcall BonusSelectSummonPartyOrganizationListViewObject__OnLongTapServant(
        BonusSelectSummonPartyOrganizationListViewObject_o *this,
        const MethodInfo *method)
{
  BonusSelectSummonConfirmDialog_OnTapPartyMemberEvent_o *onTapEvent; // x0

  if ( this->fields.isEnableTouch )
  {
    onTapEvent = this->fields.onTapEvent;
    if ( onTapEvent )
      BonusSelectSummonConfirmDialog_OnTapPartyMemberEvent__Invoke(onTapEvent, this->fields.listViewItem, 1, 0LL);
  }
}


void __fastcall BonusSelectSummonPartyOrganizationListViewObject__OnTapEvent(
        BonusSelectSummonPartyOrganizationListViewObject_o *this,
        bool isLongTap,
        const MethodInfo *method)
{
  if ( this->fields.isEnableTouch )
  {
    if ( this->fields.onTapEvent )
      BonusSelectSummonConfirmDialog_OnTapPartyMemberEvent__Invoke(
        this->fields.onTapEvent,
        this->fields.listViewItem,
        isLongTap,
        0LL);
  }
}


void __fastcall BonusSelectSummonPartyOrganizationListViewObject__OnTapServant(
        BonusSelectSummonPartyOrganizationListViewObject_o *this,
        const MethodInfo *method)
{
  if ( this->fields.isEnableTouch )
  {
    if ( this->fields.onTapEvent )
      BonusSelectSummonConfirmDialog_OnTapPartyMemberEvent__Invoke(
        this->fields.onTapEvent,
        this->fields.listViewItem,
        0,
        0LL);
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