void EventCraftListViewObject___ctor(EventCraftListViewObject_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_593243B & 1) == 0 )
  {
    sub_21FFC50(&ListViewObject_TypeInfo);
    byte_593243B = 1;
  }
  if ( !*(&ListViewObject_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo, method, v2);
  ListViewObject___ctor((ListViewObject_o *)this, 0);
}


void EventCraftListViewObject__Awake(EventCraftListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  Il2CppObject *Component_object; // x0
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  if ( (byte_5932433 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_EventCraftListViewItemDraw___);
    byte_5932433 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_21FFECC(0, v3);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_EventCraftListViewItemDraw___);
  this->fields.itemDraw = (struct EventCraftListViewItemDraw_o *)Component_object;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.itemDraw,
    (int32_t)Component_object,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
}


UnityEngine_GameObject_o *EventCraftListViewObject__CreateDragObject(
        EventCraftListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *DragObject; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x3

  if ( (byte_5932437 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_EventCraftListViewObject___);
    byte_5932437 = 1;
  }
  DragObject = ListViewObject__CreateDragObject((ListViewObject_o *)this, 0);
  if ( !DragObject
    || (DragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   DragObject,
                                                   (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_EventCraftListViewObject___)) == 0 )
  {
    sub_21FFECC(DragObject, v4);
  }
  EventCraftListViewObject__Init((EventCraftListViewObject_o *)DragObject, 1, 0, v5);
  return this->fields.dragObject;
}


EventCraftListViewItem_o *EventCraftListViewObject__GetItem(EventCraftListViewObject_o *this, const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11

  if ( (byte_5932436 & 1) == 0 )
  {
    sub_21FFC50(&EventCraftListViewItem_TypeInfo);
    byte_5932436 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0;
  naturalAligment = EventCraftListViewItem_TypeInfo->_2.naturalAligment;
  if ( linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment )
    return 0;
  if ( (EventCraftListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == EventCraftListViewItem_TypeInfo )
    return (EventCraftListViewItem_o *)this->fields.linkItem;
  return 0;
}


void EventCraftListViewObject__Init(
        EventCraftListViewObject_o *this,
        int32_t initMode,
        System_Action_o *onMoveEnd,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  bool v9; // w24
  __int64 naturalAligment; // x11
  struct ListViewItem_o *v11; // x21
  int32_t displayMode; // w25
  UnityEngine_Transform_o *transform; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x2
  int32_t v16; // w0
  const MethodInfo *v17; // x1
  int32_t v18; // w8

  if ( (byte_5932438 & 1) == 0 )
  {
    sub_21FFC50(&EventCraftListViewItem_TypeInfo);
    byte_5932438 = 1;
  }
  linkItem = this->fields.linkItem;
  v9 = initMode != 2 && this->fields.state != 0;
  if ( linkItem
    && (naturalAligment = EventCraftListViewItem_TypeInfo->_2.naturalAligment,
        linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (EventCraftListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == EventCraftListViewItem_TypeInfo )
      v11 = this->fields.linkItem;
    else
      v11 = 0;
  }
  else
  {
    v11 = 0;
  }
  displayMode = this->fields.displayMode;
  if ( !v11 )
    initMode = 0;
  ListViewObject__SetVisible((ListViewObject_o *)this, initMode != 0, 0);
  ((void (__fastcall *)(EventCraftListViewObject_o *, bool, const MethodInfo *))this->klass->vtable._9_SetInput.methodPtr)(
    this,
    initMode != 0,
    this->klass->vtable._9_SetInput.method);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0)) == 0) )
  {
    sub_21FFECC(transform, v14);
  }
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0);
  v16 = EventCraftListViewItemDraw__GetDisplayMode(initMode, (EventCraftListViewItem_o *)v11, v15);
  this->fields.displayMode = v16;
  if ( (unsigned int)initMode > 2 )
    v18 = 0;
  else
    v18 = dword_ECFADC[initMode];
  this->fields.state = v18;
  if ( displayMode != v16 || !v9 )
    EventCraftListViewObject__SetupDisplay(this, v17);
  ActionExtensions__Call(onMoveEnd, 0);
}


void EventCraftListViewObject__OnClickCraftStartButton(EventCraftListViewObject_o *this, const MethodInfo *method)
{
  if ( (byte_593243A & 1) == 0 )
  {
    sub_21FFC50(&Method_ActionExtensions_Call_EventCraftListViewObject___);
    byte_593243A = 1;
  }
  ActionExtensions__Call_object_(
    (System_Action_T__o *)this->fields.startAction,
    (Il2CppObject *)this,
    (const MethodInfo_36CDF5C *)Method_ActionExtensions_Call_EventCraftListViewObject___);
}


void EventCraftListViewObject__OnClickReceiveButton(EventCraftListViewObject_o *this, const MethodInfo *method)
{
  struct System_Action_EventCraftListViewObject__o *receiveAction; // x8

  receiveAction = this->fields.receiveAction;
  if ( !receiveAction )
    sub_21FFECC(this, method);
  ((void (__fastcall *)(intptr_t, EventCraftListViewObject_o *, intptr_t))receiveAction->fields.invoke_impl)(
    receiveAction->fields.method_code,
    this,
    receiveAction->fields.method);
}


void EventCraftListViewObject__OnClickReplenishmentButton(EventCraftListViewObject_o *this, const MethodInfo *method)
{
  struct System_Action_EventCraftListViewObject__o *replenishmentAction; // x8

  replenishmentAction = this->fields.replenishmentAction;
  if ( !replenishmentAction )
    sub_21FFECC(this, method);
  ((void (__fastcall *)(intptr_t, EventCraftListViewObject_o *, intptr_t))replenishmentAction->fields.invoke_impl)(
    replenishmentAction->fields.method_code,
    this,
    replenishmentAction->fields.method);
}


void EventCraftListViewObject__OnClickSupportToolButton(EventCraftListViewObject_o *this, const MethodInfo *method)
{
  struct System_Action_EventCraftListViewObject__o *supportToolAction; // x8

  supportToolAction = this->fields.supportToolAction;
  if ( !supportToolAction )
    sub_21FFECC(this, method);
  ((void (__fastcall *)(intptr_t, EventCraftListViewObject_o *, intptr_t))supportToolAction->fields.invoke_impl)(
    supportToolAction->fields.method_code,
    this,
    supportToolAction->fields.method);
}


void EventCraftListViewObject__OnClickWithdrawalButton(EventCraftListViewObject_o *this, const MethodInfo *method)
{
  struct System_Action_EventCraftListViewObject__o *withdrawalAction; // x8

  withdrawalAction = this->fields.withdrawalAction;
  if ( !withdrawalAction )
    sub_21FFECC(this, method);
  ((void (__fastcall *)(intptr_t, EventCraftListViewObject_o *, intptr_t))withdrawalAction->fields.invoke_impl)(
    withdrawalAction->fields.method_code,
    this,
    withdrawalAction->fields.method);
}


void EventCraftListViewObject__OnDestroy(EventCraftListViewObject_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  MissionNaviTransitionBoardItem_o *p_dragObject; // x19
  UnityEngine_Object_o *v5; // x20
  struct UnityEngine_GameObject_o *dragObject; // t1
  __int64 v7; // x1
  __int64 v8; // x2
  UnityEngine_Object_o *klass; // x20
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7

  if ( (byte_5932435 & 1) == 0 )
  {
    sub_21FFC50(&NGUITools_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5932435 = 1;
  }
  dragObject = this->fields.dragObject;
  p_dragObject = (MissionNaviTransitionBoardItem_o *)&this->fields.dragObject;
  v5 = (UnityEngine_Object_o *)dragObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( !UnityEngine_Object__op_Equality(v5, 0, 0) )
  {
    klass = (UnityEngine_Object_o *)p_dragObject->klass;
    if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v7, v8);
    NGUITools__Destroy(klass, 0);
    p_dragObject->klass = 0;
    sub_21FFBF4(p_dragObject, 0, v10, v11, v12, v13, v14, v15);
  }
}


void EventCraftListViewObject__SetItem(
        EventCraftListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  this->fields.state = 0;
  ListViewObject__SetItem_50780416((ListViewObject_o *)this, item, seed, 0);
}


void EventCraftListViewObject__SetOnClickAction(
        EventCraftListViewObject_o *this,
        System_Action_EventCraftListViewObject__o *start,
        System_Action_EventCraftListViewObject__o *receive,
        System_Action_EventCraftListViewObject__o *replenishment,
        System_Action_EventCraftListViewObject__o *withdrawal,
        System_Action_EventCraftListViewObject__o *supportTool,
        const MethodInfo *method)
{
  bool v7; // w7
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7

  this->fields.startAction = start;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.startAction,
    (int32_t)start,
    (System_String_o *)receive,
    (System_String_o *)replenishment,
    (int32_t)withdrawal,
    (int32_t)supportTool,
    (bool)method,
    v7);
  this->fields.receiveAction = receive;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.receiveAction,
    (int32_t)receive,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  this->fields.replenishmentAction = replenishment;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.replenishmentAction,
    (int32_t)replenishment,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  this->fields.withdrawalAction = withdrawal;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.withdrawalAction,
    (int32_t)withdrawal,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  this->fields.supportToolAction = supportTool;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.supportToolAction,
    (int32_t)supportTool,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
}


void EventCraftListViewObject__SetupDisplay(EventCraftListViewObject_o *this, const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x20
  __int64 naturalAligment; // x10
  bool v5; // w1
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Object_o *itemDraw; // x21
  __int64 v9; // x1
  const MethodInfo *v10; // x3
  EventCraftListViewItemDraw_o *v11; // x0
  const MethodInfo *v12; // x3

  if ( (byte_5932439 & 1) == 0 )
  {
    sub_21FFC50(&EventCraftListViewItem_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5932439 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    goto LABEL_7;
  naturalAligment = EventCraftListViewItem_TypeInfo->_2.naturalAligment;
  if ( linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (EventCraftListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] != EventCraftListViewItem_TypeInfo )
  {
    linkItem = 0;
LABEL_7:
    v5 = 0;
    goto LABEL_8;
  }
  v5 = this->fields.displayMode != 0;
LABEL_8:
  ListViewObject__SetVisible((ListViewObject_o *)this, v5, 0);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
  if ( !UnityEngine_Object__op_Equality(itemDraw, 0, 0) )
  {
    v11 = this->fields.itemDraw;
    if ( !v11
      || (EventCraftListViewItemDraw__SetItem(v11, (EventCraftListViewItem_o *)linkItem, this->fields.displayMode, v10),
          (v11 = this->fields.itemDraw) == 0) )
    {
      sub_21FFECC(v11, v9);
    }
    EventCraftListViewItemDraw__UpdateItem(v11, (EventCraftListViewItem_o *)linkItem, this->fields.displayMode, v12);
  }
}


void EventCraftListViewObject__Update(EventCraftListViewObject_o *this, const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x20
  __int64 naturalAligment; // x10
  __int64 v5; // x1
  __int64 v6; // x2
  const MethodInfo *v7; // x3
  float time; // s8
  EventCraftListViewItemDraw_o *itemDraw; // x0

  if ( (byte_5932434 & 1) == 0 )
  {
    sub_21FFC50(&EventCraftListViewItem_TypeInfo);
    sub_21FFC50(&System_Math_TypeInfo);
    byte_5932434 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    naturalAligment = EventCraftListViewItem_TypeInfo->_2.naturalAligment;
    if ( linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment
      && (EventCraftListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == EventCraftListViewItem_TypeInfo
      && (float)(UnityEngine_Time__get_time(0) - this->fields.updatedTime) >= 1.0 )
    {
      time = UnityEngine_Time__get_time(0);
      if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v5, v6);
      itemDraw = this->fields.itemDraw;
      this->fields.updatedTime = floorf(time);
      if ( !itemDraw )
        sub_21FFECC(0, v5);
      EventCraftListViewItemDraw__UpdateItem(
        itemDraw,
        (EventCraftListViewItem_o *)linkItem,
        this->fields.displayMode,
        v7);
    }
  }
}


void EventCraftListViewObject__UpdateItem(
        EventCraftListViewObject_o *this,
        EventCraftListViewItem_o *item,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( !this->fields.itemDraw )
    sub_21FFECC(this, item);
  EventCraftListViewItemDraw__UpdateItem(this->fields.itemDraw, item, this->fields.displayMode, v3);
}


int32_t EventCraftListViewObject__get_DisplayMode(EventCraftListViewObject_o *this, const MethodInfo *method)
{
  return this->fields.displayMode;
}