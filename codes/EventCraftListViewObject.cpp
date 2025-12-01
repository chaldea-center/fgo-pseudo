void EventCraftListViewObject___ctor(EventCraftListViewObject_o *this, const MethodInfo *method)
{
  if ( (byte_4CC15E5 & 1) == 0 )
  {
    sub_1C713B0(&ListViewObject_TypeInfo);
    byte_4CC15E5 = 1;
  }
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  ListViewObject___ctor((ListViewObject_o *)this, 0);
}


void EventCraftListViewObject__Awake(EventCraftListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  Il2CppObject *Component_object; // x0

  if ( (byte_4CC15DD & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_EventCraftListViewItemDraw___);
    byte_4CC15DD = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1C71608(0, v3);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_EventCraftListViewItemDraw___);
  this->fields.itemDraw = (struct EventCraftListViewItemDraw_o *)Component_object;
  sub_1C71354(&this->fields.itemDraw, Component_object);
}


UnityEngine_GameObject_o *EventCraftListViewObject__CreateDragObject(
        EventCraftListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *DragObject; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x3

  if ( (byte_4CC15E1 & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_EventCraftListViewObject___);
    byte_4CC15E1 = 1;
  }
  DragObject = ListViewObject__CreateDragObject((ListViewObject_o *)this, 0);
  if ( !DragObject
    || (DragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   DragObject,
                                                   (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_EventCraftListViewObject___)) == 0 )
  {
    sub_1C71608(DragObject, v4);
  }
  EventCraftListViewObject__Init((EventCraftListViewObject_o *)DragObject, 1, 0, v5);
  return this->fields.dragObject;
}


EventCraftListViewItem_o *EventCraftListViewObject__GetItem(EventCraftListViewObject_o *this, const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11

  if ( (byte_4CC15E0 & 1) == 0 )
  {
    sub_1C713B0(&EventCraftListViewItem_TypeInfo);
    byte_4CC15E0 = 1;
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
  bool v8; // w24
  bool v9; // w25
  __int64 naturalAligment; // x11
  struct ListViewItem_o *v11; // x21
  int32_t displayMode; // w26
  UnityEngine_Transform_o *transform; // x0
  __int64 v14; // x1
  int32_t v15; // w0
  const MethodInfo *v16; // x1
  int32_t v17; // w8

  if ( (byte_4CC15E2 & 1) == 0 )
  {
    sub_1C713B0(&EventCraftListViewItem_TypeInfo);
    byte_4CC15E2 = 1;
  }
  linkItem = this->fields.linkItem;
  v8 = this->fields.state != 0;
  v9 = initMode != 2;
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
  if ( !v11 )
    initMode = 0;
  displayMode = this->fields.displayMode;
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
    sub_1C71608(transform, v14);
  }
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0);
  v15 = EventCraftListViewItemDraw__GetDisplayMode(initMode, (EventCraftListViewItem_o *)v11, 0);
  this->fields.displayMode = v15;
  if ( (unsigned int)initMode > 2 )
    v17 = 0;
  else
    v17 = dword_D2167C[initMode];
  this->fields.state = v17;
  if ( !v9 || !v8 || displayMode != v15 )
    EventCraftListViewObject__SetupDisplay(this, v16);
  ActionExtensions__Call(onMoveEnd, 0);
}


void EventCraftListViewObject__OnClickCraftStartButton(EventCraftListViewObject_o *this, const MethodInfo *method)
{
  if ( (byte_4CC15E4 & 1) == 0 )
  {
    sub_1C713B0(&Method_ActionExtensions_Call_EventCraftListViewObject___);
    byte_4CC15E4 = 1;
  }
  ActionExtensions__Call_object_(
    (System_Action_T__o *)this->fields.startAction,
    (Il2CppObject *)this,
    (const MethodInfo_3095D08 *)Method_ActionExtensions_Call_EventCraftListViewObject___);
}


void EventCraftListViewObject__OnClickReceiveButton(EventCraftListViewObject_o *this, const MethodInfo *method)
{
  struct System_Action_EventCraftListViewObject__o *receiveAction; // x8

  receiveAction = this->fields.receiveAction;
  if ( !receiveAction )
    sub_1C71608(this, method);
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
    sub_1C71608(this, method);
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
    sub_1C71608(this, method);
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
    sub_1C71608(this, method);
  ((void (__fastcall *)(intptr_t, EventCraftListViewObject_o *, intptr_t))withdrawalAction->fields.invoke_impl)(
    withdrawalAction->fields.method_code,
    this,
    withdrawalAction->fields.method);
}


void EventCraftListViewObject__OnDestroy(EventCraftListViewObject_o *this, const MethodInfo *method)
{
  struct UnityEngine_GameObject_o **p_dragObject; // x19
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_GameObject_o *dragObject; // t1
  UnityEngine_Object_o *v6; // x20

  if ( (byte_4CC15DF & 1) == 0 )
  {
    sub_1C713B0(&NGUITools_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC15DF = 1;
  }
  dragObject = this->fields.dragObject;
  p_dragObject = &this->fields.dragObject;
  v4 = (UnityEngine_Object_o *)dragObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(v4, 0, 0) )
  {
    v6 = (UnityEngine_Object_o *)*p_dragObject;
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    NGUITools__Destroy(v6, 0);
    *p_dragObject = 0;
    sub_1C71354(p_dragObject, 0);
  }
}


void EventCraftListViewObject__SetItem(
        EventCraftListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  this->fields.state = 0;
  ListViewObject__SetItem_44123920((ListViewObject_o *)this, item, seed, 0);
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
  this->fields.startAction = start;
  sub_1C71354(&this->fields.startAction, start);
  this->fields.receiveAction = receive;
  sub_1C71354(&this->fields.receiveAction, receive);
  this->fields.replenishmentAction = replenishment;
  sub_1C71354(&this->fields.replenishmentAction, replenishment);
  this->fields.withdrawalAction = withdrawal;
  sub_1C71354(&this->fields.withdrawalAction, withdrawal);
  this->fields.supportToolAction = supportTool;
  sub_1C71354(&this->fields.supportToolAction, supportTool);
}


void EventCraftListViewObject__SetupDisplay(EventCraftListViewObject_o *this, const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x20
  __int64 naturalAligment; // x10
  bool v5; // w1
  UnityEngine_Object_o *itemDraw; // x21
  __int64 v7; // x1
  EventCraftListViewItemDraw_o *v8; // x0

  if ( (byte_4CC15E3 & 1) == 0 )
  {
    sub_1C713B0(&EventCraftListViewItem_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC15E3 = 1;
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
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(itemDraw, 0, 0) )
  {
    v8 = this->fields.itemDraw;
    if ( !v8
      || (EventCraftListViewItemDraw__SetItem(v8, (EventCraftListViewItem_o *)linkItem, this->fields.displayMode, 0),
          (v8 = this->fields.itemDraw) == 0) )
    {
      sub_1C71608(v8, v7);
    }
    EventCraftListViewItemDraw__UpdateItem(v8, (EventCraftListViewItem_o *)linkItem, this->fields.displayMode, 0);
  }
}


void EventCraftListViewObject__Update(EventCraftListViewObject_o *this, const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11
  EventCraftListViewItem_c *v5; // x10
  EventCraftListViewItem_o *v6; // x20
  __int64 v7; // x1
  float time; // s8
  EventCraftListViewItemDraw_o *itemDraw; // x0

  if ( (byte_4CC15DE & 1) == 0 )
  {
    sub_1C713B0(&EventCraftListViewItem_TypeInfo);
    sub_1C713B0(&System_Math_TypeInfo);
    byte_4CC15DE = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    naturalAligment = EventCraftListViewItem_TypeInfo->_2.naturalAligment;
    if ( linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
    {
      v5 = (EventCraftListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1];
      v6 = v5 == EventCraftListViewItem_TypeInfo ? (EventCraftListViewItem_o *)this->fields.linkItem : 0LL;
      if ( v5 == EventCraftListViewItem_TypeInfo
        && (float)(UnityEngine_Time__get_time(0) - this->fields.updatedTime) >= 1.0 )
      {
        time = UnityEngine_Time__get_time(0);
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        itemDraw = this->fields.itemDraw;
        this->fields.updatedTime = floorf(time);
        if ( !itemDraw )
          sub_1C71608(0, v7);
        EventCraftListViewItemDraw__UpdateItem(itemDraw, v6, this->fields.displayMode, 0);
      }
    }
  }
}


void EventCraftListViewObject__UpdateItem(
        EventCraftListViewObject_o *this,
        EventCraftListViewItem_o *item,
        const MethodInfo *method)
{
  EventCraftListViewItemDraw_o *itemDraw; // x0

  itemDraw = this->fields.itemDraw;
  if ( !itemDraw )
    sub_1C71608(0, item);
  EventCraftListViewItemDraw__UpdateItem(itemDraw, item, this->fields.displayMode, 0);
}


int32_t EventCraftListViewObject__get_DisplayMode(EventCraftListViewObject_o *this, const MethodInfo *method)
{
  return this->fields.displayMode;
}