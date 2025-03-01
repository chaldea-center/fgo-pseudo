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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  UnityEngine_Object_o *itemDraw; // x20
  __int64 v11; // x1
  const MethodInfo *v12; // x3
  WarBoardPartyOrganizationListViewItemDraw_o *v13; // x0

  if ( (byte_4BFB524 & 1) == 0 )
  {
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, onTapEvent);
    byte_4BFB524 = 1;
  }
  this->fields.onTapEvent = onTapEvent;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields.onTapEvent,
    (int64_t)onTapEvent,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    v13 = this->fields.itemDraw;
    if ( !v13 )
      sub_1C2E388(0LL, v11);
    WarBoardPartyOrganizationListViewItemDraw__SetItem(v13, this->fields.listViewItem, 3, v12);
  }
}


void __fastcall WarBoardPartyOrganizationListViewObject__OnLongTapServant(
        WarBoardPartyOrganizationListViewObject_o *this,
        const MethodInfo *method)
{
  struct WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_o *onTapEvent; // x8

  if ( this->fields.isEnableTouch )
  {
    onTapEvent = this->fields.onTapEvent;
    if ( onTapEvent )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, struct PartyOrganizationListViewItem_o *, _QWORD, __int64, _QWORD))onTapEvent->fields.m_target)(
        onTapEvent->fields.original_method_info,
        this->fields.listViewItem,
        0LL,
        1LL,
        *(_QWORD *)&onTapEvent->fields.extra_arg);
  }
}


void __fastcall WarBoardPartyOrganizationListViewObject__OnLongTapServantEquip(
        WarBoardPartyOrganizationListViewObject_o *this,
        const MethodInfo *method)
{
  struct WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_o *onTapEvent; // x8

  if ( this->fields.isEnableTouch )
  {
    onTapEvent = this->fields.onTapEvent;
    if ( onTapEvent )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, struct PartyOrganizationListViewItem_o *, __int64, __int64, _QWORD))onTapEvent->fields.m_target)(
        onTapEvent->fields.original_method_info,
        this->fields.listViewItem,
        1LL,
        1LL,
        *(_QWORD *)&onTapEvent->fields.extra_arg);
  }
}


void __fastcall WarBoardPartyOrganizationListViewObject__OnTapEvent(
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
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, struct PartyOrganizationListViewItem_o *, bool, bool, _QWORD))onTapEvent->fields.m_target)(
        onTapEvent->fields.original_method_info,
        this->fields.listViewItem,
        isServantEquip,
        isLongTap,
        *(_QWORD *)&onTapEvent->fields.extra_arg);
  }
}


void __fastcall WarBoardPartyOrganizationListViewObject__OnTapServant(
        WarBoardPartyOrganizationListViewObject_o *this,
        const MethodInfo *method)
{
  struct WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_o *onTapEvent; // x8

  if ( this->fields.isEnableTouch )
  {
    onTapEvent = this->fields.onTapEvent;
    if ( onTapEvent )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, struct PartyOrganizationListViewItem_o *, _QWORD, _QWORD, _QWORD))onTapEvent->fields.m_target)(
        onTapEvent->fields.original_method_info,
        this->fields.listViewItem,
        0LL,
        0LL,
        *(_QWORD *)&onTapEvent->fields.extra_arg);
  }
}


void __fastcall WarBoardPartyOrganizationListViewObject__OnTapServantEquip(
        WarBoardPartyOrganizationListViewObject_o *this,
        const MethodInfo *method)
{
  struct WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_o *onTapEvent; // x8

  if ( this->fields.isEnableTouch )
  {
    onTapEvent = this->fields.onTapEvent;
    if ( onTapEvent )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, struct PartyOrganizationListViewItem_o *, __int64, _QWORD, _QWORD))onTapEvent->fields.m_target)(
        onTapEvent->fields.original_method_info,
        this->fields.listViewItem,
        1LL,
        0LL,
        *(_QWORD *)&onTapEvent->fields.extra_arg);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.listViewItem = item;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields.listViewItem,
    (int64_t)item,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}