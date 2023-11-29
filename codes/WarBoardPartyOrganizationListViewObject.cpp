void __fastcall WarBoardPartyOrganizationListViewObject___ctor(
        WarBoardPartyOrganizationListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


PartyOrganizationListViewItem_o *__fastcall WarBoardPartyOrganizationListViewObject__GetItem(
        WarBoardPartyOrganizationListViewObject_o *this,
        const MethodInfo *method)
{
  return this->fields.listViewItem;
}


void __fastcall WarBoardPartyOrganizationListViewObject__Init(
        WarBoardPartyOrganizationListViewObject_o *this,
        WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_o *onTapEvent,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  UnityEngine_Object_o *itemDraw; // x20
  const MethodInfo *v11; // x3
  WarBoardPartyOrganizationListViewItemDraw_o *v12; // x0

  if ( (byte_40F85C0 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, onTapEvent);
    byte_40F85C0 = 1;
  }
  this->fields.onTapEvent = onTapEvent;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.onTapEvent,
    (System_Int32_array **)onTapEvent,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    v12 = this->fields.itemDraw;
    if ( !v12 )
      sub_B170D4();
    WarBoardPartyOrganizationListViewItemDraw__SetItem(v12, this->fields.listViewItem, 3, v11);
  }
}


void __fastcall WarBoardPartyOrganizationListViewObject__OnLongTapServant(
        WarBoardPartyOrganizationListViewObject_o *this,
        const MethodInfo *method)
{
  WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_o *onTapEvent; // x0

  if ( this->fields.isEnableTouch )
  {
    onTapEvent = this->fields.onTapEvent;
    if ( onTapEvent )
      WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent__Invoke(onTapEvent, this->fields.listViewItem, 0, 1, 0LL);
  }
}


void __fastcall WarBoardPartyOrganizationListViewObject__OnLongTapServantEquip(
        WarBoardPartyOrganizationListViewObject_o *this,
        const MethodInfo *method)
{
  WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_o *onTapEvent; // x0

  if ( this->fields.isEnableTouch )
  {
    onTapEvent = this->fields.onTapEvent;
    if ( onTapEvent )
      WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent__Invoke(onTapEvent, this->fields.listViewItem, 1, 1, 0LL);
  }
}


void __fastcall WarBoardPartyOrganizationListViewObject__OnTapEvent(
        WarBoardPartyOrganizationListViewObject_o *this,
        bool isServantEquip,
        bool isLongTap,
        const MethodInfo *method)
{
  if ( this->fields.isEnableTouch )
  {
    if ( this->fields.onTapEvent )
      WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent__Invoke(
        this->fields.onTapEvent,
        this->fields.listViewItem,
        isServantEquip,
        isLongTap,
        0LL);
  }
}


void __fastcall WarBoardPartyOrganizationListViewObject__OnTapServant(
        WarBoardPartyOrganizationListViewObject_o *this,
        const MethodInfo *method)
{
  if ( this->fields.isEnableTouch )
  {
    if ( this->fields.onTapEvent )
      WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent__Invoke(
        this->fields.onTapEvent,
        this->fields.listViewItem,
        0,
        0,
        0LL);
  }
}


void __fastcall WarBoardPartyOrganizationListViewObject__OnTapServantEquip(
        WarBoardPartyOrganizationListViewObject_o *this,
        const MethodInfo *method)
{
  WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_o *onTapEvent; // x0

  if ( this->fields.isEnableTouch )
  {
    onTapEvent = this->fields.onTapEvent;
    if ( onTapEvent )
      WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent__Invoke(onTapEvent, this->fields.listViewItem, 1, 0, 0LL);
  }
}


void __fastcall WarBoardPartyOrganizationListViewObject__SetInput(
        WarBoardPartyOrganizationListViewObject_o *this,
        bool isEnableInput,
        const MethodInfo *method)
{
  this->fields.isEnableTouch = isEnableInput;
}


void __fastcall WarBoardPartyOrganizationListViewObject__SetItem(
        WarBoardPartyOrganizationListViewObject_o *this,
        PartyOrganizationListViewItem_o *item,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.listViewItem = item;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.listViewItem,
    (System_Int32_array **)item,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}