void WarBoardPartyOrganizationListViewObject___ctor(
        WarBoardPartyOrganizationListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


PartyOrganizationListViewItem_o *WarBoardPartyOrganizationListViewObject__GetItem(
        WarBoardPartyOrganizationListViewObject_o *this,
        const MethodInfo *method)
{
  return this->fields.listViewItem;
}


void WarBoardPartyOrganizationListViewObject__Init(
        WarBoardPartyOrganizationListViewObject_o *this,
        WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_o *onTapEvent,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  UnityEngine_Object_o *itemDraw; // x20
  __int64 v7; // x1
  const MethodInfo *v8; // x3
  WarBoardPartyOrganizationListViewItemDraw_o *v9; // x0

  if ( (byte_4C549A6 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C549A6 = 1;
  }
  this->fields.onTapEvent = onTapEvent;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.onTapEvent, (int32_t)onTapEvent, (int32_t)method, v3);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
  {
    v9 = this->fields.itemDraw;
    if ( !v9 )
      sub_1C3E7C0(0, v7);
    WarBoardPartyOrganizationListViewItemDraw__SetItem(v9, this->fields.listViewItem, 3, v8);
  }
}


void WarBoardPartyOrganizationListViewObject__OnLongTapServant(
        WarBoardPartyOrganizationListViewObject_o *this,
        const MethodInfo *method)
{
  struct WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_o *onTapEvent; // x8

  if ( this->fields.isEnableTouch )
  {
    onTapEvent = this->fields.onTapEvent;
    if ( onTapEvent )
      ((void (__fastcall *)(intptr_t, struct PartyOrganizationListViewItem_o *, _QWORD, __int64, intptr_t))onTapEvent->fields.invoke_impl)(
        onTapEvent->fields.method_code,
        this->fields.listViewItem,
        0,
        1,
        onTapEvent->fields.method);
  }
}


void WarBoardPartyOrganizationListViewObject__OnLongTapServantEquip(
        WarBoardPartyOrganizationListViewObject_o *this,
        const MethodInfo *method)
{
  struct WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_o *onTapEvent; // x8

  if ( this->fields.isEnableTouch )
  {
    onTapEvent = this->fields.onTapEvent;
    if ( onTapEvent )
      ((void (__fastcall *)(intptr_t, struct PartyOrganizationListViewItem_o *, __int64, __int64, intptr_t))onTapEvent->fields.invoke_impl)(
        onTapEvent->fields.method_code,
        this->fields.listViewItem,
        1,
        1,
        onTapEvent->fields.method);
  }
}


void WarBoardPartyOrganizationListViewObject__OnTapEvent(
        WarBoardPartyOrganizationListViewObject_o *this,
        bool isServantEquip,
        bool isLongTap,
        const MethodInfo *method)
{
  struct WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_o *onTapEvent; // x9

  if ( this->fields.isEnableTouch )
  {
    onTapEvent = this->fields.onTapEvent;
    if ( onTapEvent )
      ((void (__fastcall *)(intptr_t, struct PartyOrganizationListViewItem_o *, bool, bool, intptr_t))onTapEvent->fields.invoke_impl)(
        onTapEvent->fields.method_code,
        this->fields.listViewItem,
        isServantEquip,
        isLongTap,
        onTapEvent->fields.method);
  }
}


void WarBoardPartyOrganizationListViewObject__OnTapServant(
        WarBoardPartyOrganizationListViewObject_o *this,
        const MethodInfo *method)
{
  struct WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_o *onTapEvent; // x8

  if ( this->fields.isEnableTouch )
  {
    onTapEvent = this->fields.onTapEvent;
    if ( onTapEvent )
      ((void (__fastcall *)(intptr_t, struct PartyOrganizationListViewItem_o *, _QWORD, _QWORD, intptr_t))onTapEvent->fields.invoke_impl)(
        onTapEvent->fields.method_code,
        this->fields.listViewItem,
        0,
        0,
        onTapEvent->fields.method);
  }
}


void WarBoardPartyOrganizationListViewObject__OnTapServantEquip(
        WarBoardPartyOrganizationListViewObject_o *this,
        const MethodInfo *method)
{
  struct WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_o *onTapEvent; // x8

  if ( this->fields.isEnableTouch )
  {
    onTapEvent = this->fields.onTapEvent;
    if ( onTapEvent )
      ((void (__fastcall *)(intptr_t, struct PartyOrganizationListViewItem_o *, __int64, _QWORD, intptr_t))onTapEvent->fields.invoke_impl)(
        onTapEvent->fields.method_code,
        this->fields.listViewItem,
        1,
        0,
        onTapEvent->fields.method);
  }
}


void WarBoardPartyOrganizationListViewObject__SetInput(
        WarBoardPartyOrganizationListViewObject_o *this,
        bool isEnableInput,
        const MethodInfo *method)
{
  this->fields.isEnableTouch = isEnableInput;
}


void WarBoardPartyOrganizationListViewObject__SetItem(
        WarBoardPartyOrganizationListViewObject_o *this,
        PartyOrganizationListViewItem_o *item,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.listViewItem = item;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.listViewItem, (int32_t)item, (int32_t)method, v3);
}