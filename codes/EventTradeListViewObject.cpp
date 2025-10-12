void EventTradeListViewObject___ctor(EventTradeListViewObject_o *this, const MethodInfo *method)
{
  if ( (byte_4C32433 & 1) == 0 )
  {
    sub_1C32C20(&ListViewObject_TypeInfo);
    byte_4C32433 = 1;
  }
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  ListViewObject___ctor((ListViewObject_o *)this, 0);
}


void EventTradeListViewObject__Awake(EventTradeListViewObject_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *dispObject; // x0
  Il2CppObject *Component_object; // x0

  if ( (byte_4C3242B & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_EventTradeListViewItemDraw___);
    byte_4C3242B = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1C32E7C(0);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_EventTradeListViewItemDraw___);
  this->fields.itemDraw = (struct EventTradeListViewItemDraw_o *)Component_object;
  sub_1C32BC4(&this->fields.itemDraw, Component_object);
}


UnityEngine_GameObject_o *EventTradeListViewObject__CreateDragObject(
        EventTradeListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *DragObject; // x0
  UnityEngine_GameObject_o *v4; // x19
  const MethodInfo *v5; // x3

  if ( (byte_4C3242F & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_EventTradeListViewObject___);
    byte_4C3242F = 1;
  }
  DragObject = ListViewObject__CreateDragObject((ListViewObject_o *)this, 0);
  if ( !DragObject
    || (v4 = DragObject,
        (DragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                    DragObject,
                                                    (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_EventTradeListViewObject___)) == 0) )
  {
    sub_1C32E7C(DragObject);
  }
  EventTradeListViewObject__Init_32475932((EventTradeListViewObject_o *)DragObject, 2, 0, v5);
  return v4;
}


EventTradeListViewItem_o *EventTradeListViewObject__GetItem(EventTradeListViewObject_o *this, const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11

  if ( (byte_4C3242E & 1) == 0 )
  {
    sub_1C32C20(&EventTradeListViewItem_TypeInfo);
    byte_4C3242E = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0;
  naturalAligment = EventTradeListViewItem_TypeInfo->_2.naturalAligment;
  if ( linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment )
    return 0;
  if ( (EventTradeListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == EventTradeListViewItem_TypeInfo )
    return (EventTradeListViewItem_o *)this->fields.linkItem;
  return 0;
}


int32_t EventTradeListViewObject__GetState(
        EventTradeListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  if ( (unsigned int)initMode > 7 )
    return 0;
  else
    return dword_C44CA4[initMode];
}


void EventTradeListViewObject__Init(EventTradeListViewObject_o *this, int32_t initMode, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  EventTradeListViewObject__Init_32475932(this, initMode, 0, v3);
}


void EventTradeListViewObject__Init_32475932(
        EventTradeListViewObject_o *this,
        int32_t initMode,
        System_Action_o *onMoveEnd,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11
  struct ListViewItem_o *v9; // x22
  int32_t displayMode; // w24
  int32_t state; // w25
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v13; // x2
  int32_t v14; // w0
  const MethodInfo *v15; // x1
  int32_t v16; // w8

  if ( (byte_4C32430 & 1) == 0 )
  {
    sub_1C32C20(&EventTradeListViewItem_TypeInfo);
    byte_4C32430 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem
    && (naturalAligment = EventTradeListViewItem_TypeInfo->_2.naturalAligment,
        linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (EventTradeListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == EventTradeListViewItem_TypeInfo )
      v9 = this->fields.linkItem;
    else
      v9 = 0;
  }
  else
  {
    v9 = 0;
  }
  if ( !v9 )
    initMode = 0;
  state = this->fields.state;
  displayMode = this->fields.displayMode;
  ListViewObject__SetVisible((ListViewObject_o *)this, initMode != 0, 0);
  ((void (__fastcall *)(EventTradeListViewObject_o *, bool, const MethodInfo *))this->klass->vtable._9_SetInput.methodPtr)(
    this,
    initMode != 0,
    this->klass->vtable._9_SetInput.method);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0)) == 0) )
  {
    sub_1C32E7C(transform);
  }
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0);
  v14 = EventTradeListViewItemDraw__GetDisplayMode(initMode, (EventTradeListViewItem_o *)v9, v13);
  this->fields.displayMode = v14;
  switch ( initMode )
  {
    case 0:
    case 1:
    case 2:
    case 7:
      v16 = 1;
      goto LABEL_17;
    case 3:
      this->fields.state = 3;
      goto LABEL_22;
    case 4:
    case 6:
      this->fields.state = 2;
      return;
    case 5:
      this->fields.state = 0;
LABEL_20:
      if ( !state || displayMode != v14 )
LABEL_22:
        EventTradeListViewObject__SetupDisplay(this, v15);
      ActionExtensions__Call(onMoveEnd, 0);
      break;
    default:
      v16 = 0;
LABEL_17:
      this->fields.state = v16;
      switch ( initMode )
      {
        case 3:
        case 7:
          goto LABEL_22;
        case 4:
        case 6:
          return;
        default:
          goto LABEL_20;
      }
  }
}


void EventTradeListViewObject__OnClickReceiveButton(EventTradeListViewObject_o *this, const MethodInfo *method)
{
  struct System_Action_EventTradeListViewObject__o *receiveAction; // x8

  receiveAction = this->fields.receiveAction;
  if ( !receiveAction )
    sub_1C32E7C(this);
  ((void (__fastcall *)(intptr_t, EventTradeListViewObject_o *, intptr_t))receiveAction->fields.invoke_impl)(
    receiveAction->fields.method_code,
    this,
    receiveAction->fields.method);
}


void EventTradeListViewObject__OnClickReplenishmentButton(EventTradeListViewObject_o *this, const MethodInfo *method)
{
  struct System_Action_EventTradeListViewObject__o *replenishmentAction; // x8

  replenishmentAction = this->fields.replenishmentAction;
  if ( !replenishmentAction )
    sub_1C32E7C(this);
  ((void (__fastcall *)(intptr_t, EventTradeListViewObject_o *, intptr_t))replenishmentAction->fields.invoke_impl)(
    replenishmentAction->fields.method_code,
    this,
    replenishmentAction->fields.method);
}


void EventTradeListViewObject__OnClickTradeStartButton(EventTradeListViewObject_o *this, const MethodInfo *method)
{
  if ( (byte_4C32432 & 1) == 0 )
  {
    sub_1C32C20(&Method_ActionExtensions_Call_EventTradeListViewObject___);
    byte_4C32432 = 1;
  }
  ActionExtensions__Call_object_(
    (System_Action_T__o *)this->fields.tradeStartAction,
    (Il2CppObject *)this,
    (const MethodInfo_3029CE0 *)Method_ActionExtensions_Call_EventTradeListViewObject___);
}


void EventTradeListViewObject__OnClickWithdrawalButton(EventTradeListViewObject_o *this, const MethodInfo *method)
{
  struct System_Action_EventTradeListViewObject__o *withdrawalAction; // x8

  withdrawalAction = this->fields.withdrawalAction;
  if ( !withdrawalAction )
    sub_1C32E7C(this);
  ((void (__fastcall *)(intptr_t, EventTradeListViewObject_o *, intptr_t))withdrawalAction->fields.invoke_impl)(
    withdrawalAction->fields.method_code,
    this,
    withdrawalAction->fields.method);
}


void EventTradeListViewObject__OnDestroy(EventTradeListViewObject_o *this, const MethodInfo *method)
{
  struct UnityEngine_GameObject_o **p_dragObject; // x19
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_GameObject_o *dragObject; // t1
  UnityEngine_Object_o *v6; // x20

  if ( (byte_4C3242D & 1) == 0 )
  {
    sub_1C32C20(&NGUITools_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3242D = 1;
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
    sub_1C32BC4(p_dragObject, 0);
  }
}


void EventTradeListViewObject__SetItem(
        EventTradeListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  this->fields.state = 0;
  ListViewObject__SetItem_43729388((ListViewObject_o *)this, item, seed, 0);
}


void EventTradeListViewObject__SetOnClickAction(
        EventTradeListViewObject_o *this,
        System_Action_EventTradeListViewObject__o *tradeStart,
        System_Action_EventTradeListViewObject__o *receive,
        System_Action_EventTradeListViewObject__o *replenishment,
        System_Action_EventTradeListViewObject__o *withdrawal,
        const MethodInfo *method)
{
  this->fields.tradeStartAction = tradeStart;
  sub_1C32BC4(&this->fields.tradeStartAction, tradeStart);
  this->fields.receiveAction = receive;
  sub_1C32BC4(&this->fields.receiveAction, receive);
  this->fields.replenishmentAction = replenishment;
  sub_1C32BC4(&this->fields.replenishmentAction, replenishment);
  this->fields.withdrawalAction = withdrawal;
  sub_1C32BC4(&this->fields.withdrawalAction, withdrawal);
}


void EventTradeListViewObject__SetupDisplay(EventTradeListViewObject_o *this, const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x20
  __int64 naturalAligment; // x10
  bool v5; // w1
  UnityEngine_Object_o *itemDraw; // x21
  const MethodInfo *v7; // x3
  EventTradeListViewItemDraw_o *v8; // x0
  const MethodInfo *v9; // x3

  if ( (byte_4C32431 & 1) == 0 )
  {
    sub_1C32C20(&EventTradeListViewItem_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C32431 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    goto LABEL_7;
  naturalAligment = EventTradeListViewItem_TypeInfo->_2.naturalAligment;
  if ( linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (EventTradeListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] != EventTradeListViewItem_TypeInfo )
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
      || (EventTradeListViewItemDraw__SetItem(v8, (EventTradeListViewItem_o *)linkItem, this->fields.displayMode, v7),
          (v8 = this->fields.itemDraw) == 0) )
    {
      sub_1C32E7C(v8);
    }
    EventTradeListViewItemDraw__UpdateItem(v8, (EventTradeListViewItem_o *)linkItem, this->fields.displayMode, v9);
  }
}


void EventTradeListViewObject__Update(EventTradeListViewObject_o *this, const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11
  EventTradeListViewItem_c *v5; // x10
  EventTradeListViewItem_o *v6; // x20
  float time; // s8
  const MethodInfo *v8; // x3
  float v9; // s0
  EventTradeListViewItemDraw_o *itemDraw; // x21
  __int64 v11; // x0
  const MethodInfo *v12; // x3

  if ( (byte_4C3242C & 1) == 0 )
  {
    sub_1C32C20(&EventTradeListViewItem_TypeInfo);
    byte_4C3242C = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    naturalAligment = EventTradeListViewItem_TypeInfo->_2.naturalAligment;
    if ( linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
    {
      v5 = (EventTradeListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1];
      v6 = v5 == EventTradeListViewItem_TypeInfo ? (EventTradeListViewItem_o *)this->fields.linkItem : 0LL;
      if ( v5 == EventTradeListViewItem_TypeInfo )
      {
        time = this->fields.time;
        v9 = time + UnityEngine_Time__get_deltaTime(0);
        this->fields.time = v9;
        if ( v9 >= 1.0 )
        {
          itemDraw = this->fields.itemDraw;
          this->fields.time = 0.0;
          EventTradeListViewObject__Init_32475932(this, 3, 0, v8);
          if ( !itemDraw )
            sub_1C32E7C(v11);
          EventTradeListViewItemDraw__UpdateItem(itemDraw, v6, this->fields.displayMode, v12);
        }
      }
    }
  }
}


int32_t EventTradeListViewObject__get_DisplayMode(EventTradeListViewObject_o *this, const MethodInfo *method)
{
  return this->fields.displayMode;
}