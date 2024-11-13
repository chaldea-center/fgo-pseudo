void __fastcall EventCraftListViewObject___ctor(EventCraftListViewObject_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B19FFB & 1) == 0 )
  {
    sub_1BCA7E0(&ListViewObject_TypeInfo, method, v2);
    byte_4B19FFB = 1;
  }
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo, method);
  ListViewObject___ctor((ListViewObject_o *)this, 0LL);
}


void __fastcall EventCraftListViewObject__Awake(EventCraftListViewObject_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  Il2CppObject *Component_object; // x0
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7

  if ( (byte_4B19FF3 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_EventCraftListViewItemDraw___, method, v2);
    byte_4B19FF3 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1BCAA3C(0LL, v4);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_EventCraftListViewItemDraw___);
  this->fields.itemDraw = (struct EventCraftListViewItemDraw_o *)Component_object;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.itemDraw,
    (int64_t)Component_object,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
}


UnityEngine_GameObject_o *__fastcall EventCraftListViewObject__CreateDragObject(
        EventCraftListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_GameObject_o *DragObject; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x3

  if ( (byte_4B19FF7 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_EventCraftListViewObject___, method, v2);
    byte_4B19FF7 = 1;
  }
  DragObject = ListViewObject__CreateDragObject((ListViewObject_o *)this, 0LL);
  if ( !DragObject
    || (DragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   DragObject,
                                                   (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_EventCraftListViewObject___)) == 0LL )
  {
    sub_1BCAA3C(DragObject, v5);
  }
  EventCraftListViewObject__Init((EventCraftListViewObject_o *)DragObject, 1, 0LL, v6);
  return this->fields.dragObject;
}


EventCraftListViewItem_o *__fastcall EventCraftListViewObject__GetItem(
        EventCraftListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x11

  if ( (byte_4B19FF6 & 1) == 0 )
  {
    sub_1BCA7E0(&EventCraftListViewItem_TypeInfo, method, v2);
    byte_4B19FF6 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0LL;
  methodPtr_low = LOBYTE(EventCraftListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
    return 0LL;
  if ( (EventCraftListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == EventCraftListViewItem_TypeInfo )
    return (EventCraftListViewItem_o *)this->fields.linkItem;
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventCraftListViewObject__Init(
        EventCraftListViewObject_o *this,
        int32_t initMode,
        System_Action_o *onMoveEnd,
        const MethodInfo *method)
{
  int32_t v5; // w22
  struct ListViewItem_o *linkItem; // x8
  bool v8; // w24
  bool v9; // w25
  __int64 methodPtr_low; // x11
  struct ListViewItem_o *v11; // x21
  int32_t displayMode; // w26
  UnityEngine_Transform_o *transform; // x0
  __int64 v14; // x1
  int32_t v15; // w0
  const MethodInfo *v16; // x1
  int32_t v17; // w8

  v5 = initMode;
  if ( (byte_4B19FF8 & 1) == 0 )
  {
    sub_1BCA7E0(&EventCraftListViewItem_TypeInfo, *(_QWORD *)&initMode, onMoveEnd);
    byte_4B19FF8 = 1;
  }
  linkItem = this->fields.linkItem;
  v8 = this->fields.state != 0;
  v9 = v5 != 2;
  if ( linkItem
    && (methodPtr_low = LOBYTE(EventCraftListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
  {
    if ( (EventCraftListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == EventCraftListViewItem_TypeInfo )
      v11 = this->fields.linkItem;
    else
      v11 = 0LL;
  }
  else
  {
    v11 = 0LL;
  }
  if ( !v11 )
    v5 = 0;
  displayMode = this->fields.displayMode;
  ListViewObject__SetVisible((ListViewObject_o *)this, v5 != 0, 0LL);
  ((void (__fastcall *)(EventCraftListViewObject_o *, bool, Il2CppMethodPointer))this->klass->vtable._9_SetInput.method)(
    this,
    v5 != 0,
    this->klass->vtable._10_Invalidation.methodPtr);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0LL),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_1BCAA3C(transform, v14);
  }
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0LL);
  v15 = EventCraftListViewItemDraw__GetDisplayMode(v5, (EventCraftListViewItem_o *)v11, 0LL);
  this->fields.displayMode = v15;
  if ( (unsigned int)v5 > 2 )
    v17 = 0;
  else
    v17 = dword_C0E2CC[v5];
  this->fields.state = v17;
  if ( !v9 || !v8 || displayMode != v15 )
    EventCraftListViewObject__SetupDisplay(this, v16);
  ActionExtensions__Call(onMoveEnd, 0LL);
}


void __fastcall EventCraftListViewObject__OnClickCraftStartButton(
        EventCraftListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B19FFA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ActionExtensions_Call_EventCraftListViewObject___, method, v2);
    byte_4B19FFA = 1;
  }
  ActionExtensions__Call_object_(
    (System_Action_T__o *)this->fields.startAction,
    (Il2CppObject *)this,
    (const MethodInfo_2E65588 *)Method_ActionExtensions_Call_EventCraftListViewObject___);
}


void __fastcall EventCraftListViewObject__OnClickReceiveButton(
        EventCraftListViewObject_o *this,
        const MethodInfo *method)
{
  struct System_Action_EventCraftListViewObject__o *receiveAction; // x8

  receiveAction = this->fields.receiveAction;
  if ( !receiveAction )
    sub_1BCAA3C(this, method);
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, EventCraftListViewObject_o *, _QWORD))receiveAction->fields.m_target)(
    receiveAction->fields.original_method_info,
    this,
    *(_QWORD *)&receiveAction->fields.extra_arg);
}


void __fastcall EventCraftListViewObject__OnClickReplenishmentButton(
        EventCraftListViewObject_o *this,
        const MethodInfo *method)
{
  struct System_Action_EventCraftListViewObject__o *replenishmentAction; // x8

  replenishmentAction = this->fields.replenishmentAction;
  if ( !replenishmentAction )
    sub_1BCAA3C(this, method);
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, EventCraftListViewObject_o *, _QWORD))replenishmentAction->fields.m_target)(
    replenishmentAction->fields.original_method_info,
    this,
    *(_QWORD *)&replenishmentAction->fields.extra_arg);
}


void __fastcall EventCraftListViewObject__OnClickSupportToolButton(
        EventCraftListViewObject_o *this,
        const MethodInfo *method)
{
  struct System_Action_EventCraftListViewObject__o *supportToolAction; // x8

  supportToolAction = this->fields.supportToolAction;
  if ( !supportToolAction )
    sub_1BCAA3C(this, method);
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, EventCraftListViewObject_o *, _QWORD))supportToolAction->fields.m_target)(
    supportToolAction->fields.original_method_info,
    this,
    *(_QWORD *)&supportToolAction->fields.extra_arg);
}


void __fastcall EventCraftListViewObject__OnClickWithdrawalButton(
        EventCraftListViewObject_o *this,
        const MethodInfo *method)
{
  struct System_Action_EventCraftListViewObject__o *withdrawalAction; // x8

  withdrawalAction = this->fields.withdrawalAction;
  if ( !withdrawalAction )
    sub_1BCAA3C(this, method);
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, EventCraftListViewObject_o *, _QWORD))withdrawalAction->fields.m_target)(
    withdrawalAction->fields.original_method_info,
    this,
    *(_QWORD *)&withdrawalAction->fields.extra_arg);
}


void __fastcall EventCraftListViewObject__OnDestroy(EventCraftListViewObject_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  PartyOrganizationUtility_o *p_dragObject; // x19
  UnityEngine_Object_o *v7; // x20
  struct UnityEngine_GameObject_o *dragObject; // t1
  __int64 v9; // x1
  UnityEngine_Object_o *klass; // x20
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7

  if ( (byte_4B19FF5 & 1) == 0 )
  {
    sub_1BCA7E0(&NGUITools_TypeInfo, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    byte_4B19FF5 = 1;
  }
  dragObject = this->fields.dragObject;
  p_dragObject = (PartyOrganizationUtility_o *)&this->fields.dragObject;
  v7 = (UnityEngine_Object_o *)dragObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(v7, 0LL, 0LL) )
  {
    klass = (UnityEngine_Object_o *)p_dragObject->klass;
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v9);
    NGUITools__Destroy(klass, 0LL);
    p_dragObject->klass = 0LL;
    sub_1BCA784(p_dragObject, 0LL, v11, v12, v13, v14, v15, v16);
  }
}


void __fastcall EventCraftListViewObject__SetItem(
        EventCraftListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  this->fields.state = 0;
  ListViewObject__SetItem_41478184((ListViewObject_o *)this, item, seed, 0LL);
}


void __fastcall EventCraftListViewObject__SetOnClickAction(
        EventCraftListViewObject_o *this,
        System_Action_EventCraftListViewObject__o *start,
        System_Action_EventCraftListViewObject__o *receive,
        System_Action_EventCraftListViewObject__o *replenishment,
        System_Action_EventCraftListViewObject__o *withdrawal,
        System_Action_EventCraftListViewObject__o *supportTool,
        const MethodInfo *method)
{
  PartyListViewItem_o *v7; // x7
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7

  this->fields.startAction = start;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.startAction,
    (int64_t)start,
    (int64_t)receive,
    (int32_t)replenishment,
    (System_String_o *)withdrawal,
    (BattleSetupInfo_o *)supportTool,
    (FollowerInfo_o *)method,
    v7);
  this->fields.receiveAction = receive;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.receiveAction, (int64_t)receive, v13, v14, v15, v16, v17, v18);
  this->fields.replenishmentAction = replenishment;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.replenishmentAction,
    (int64_t)replenishment,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  this->fields.withdrawalAction = withdrawal;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.withdrawalAction,
    (int64_t)withdrawal,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  this->fields.supportToolAction = supportTool;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.supportToolAction,
    (int64_t)supportTool,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
}


void __fastcall EventCraftListViewObject__SetupDisplay(EventCraftListViewObject_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  struct ListViewItem_o *linkItem; // x20
  __int64 methodPtr_low; // x10
  bool v8; // w1
  __int64 v9; // x1
  UnityEngine_Object_o *itemDraw; // x21
  __int64 v11; // x1
  EventCraftListViewItemDraw_o *v12; // x0

  if ( (byte_4B19FF9 & 1) == 0 )
  {
    sub_1BCA7E0(&EventCraftListViewItem_TypeInfo, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    byte_4B19FF9 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    goto LABEL_7;
  methodPtr_low = LOBYTE(EventCraftListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (EventCraftListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] != EventCraftListViewItem_TypeInfo )
  {
    linkItem = 0LL;
LABEL_7:
    v8 = 0;
    goto LABEL_8;
  }
  v8 = this->fields.displayMode != 0;
LABEL_8:
  ListViewObject__SetVisible((ListViewObject_o *)this, v8, 0LL);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
  if ( !UnityEngine_Object__op_Equality(itemDraw, 0LL, 0LL) )
  {
    v12 = this->fields.itemDraw;
    if ( !v12
      || (EventCraftListViewItemDraw__SetItem(v12, (EventCraftListViewItem_o *)linkItem, this->fields.displayMode, 0LL),
          (v12 = this->fields.itemDraw) == 0LL) )
    {
      sub_1BCAA3C(v12, v11);
    }
    EventCraftListViewItemDraw__UpdateItem(v12, (EventCraftListViewItem_o *)linkItem, this->fields.displayMode, 0LL);
  }
}


void __fastcall EventCraftListViewObject__Update(EventCraftListViewObject_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x11
  EventCraftListViewItem_c *v6; // x10
  EventCraftListViewItem_o *v7; // x20
  float time; // s8
  __int64 v9; // x1
  float v10; // s0
  EventCraftListViewItemDraw_o *itemDraw; // x0

  if ( (byte_4B19FF4 & 1) == 0 )
  {
    sub_1BCA7E0(&EventCraftListViewItem_TypeInfo, method, v2);
    byte_4B19FF4 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    methodPtr_low = LOBYTE(EventCraftListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
    {
      v6 = (EventCraftListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1];
      v7 = v6 == EventCraftListViewItem_TypeInfo ? (EventCraftListViewItem_o *)this->fields.linkItem : 0LL;
      if ( v6 == EventCraftListViewItem_TypeInfo )
      {
        time = this->fields.time;
        v10 = time + UnityEngine_Time__get_deltaTime(0LL);
        this->fields.time = v10;
        if ( v10 >= 1.0 )
        {
          itemDraw = this->fields.itemDraw;
          this->fields.time = 0.0;
          if ( !itemDraw )
            sub_1BCAA3C(0LL, v9);
          EventCraftListViewItemDraw__UpdateItem(itemDraw, v7, this->fields.displayMode, 0LL);
        }
      }
    }
  }
}


int32_t __fastcall EventCraftListViewObject__get_DisplayMode(
        EventCraftListViewObject_o *this,
        const MethodInfo *method)
{
  return this->fields.displayMode;
}