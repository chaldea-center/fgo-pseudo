void EventTradeListViewObject___ctor(EventTradeListViewObject_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_596AD71 & 1) == 0 )
  {
    sub_2213A60(&ListViewObject_TypeInfo);
    byte_596AD71 = 1;
  }
  if ( !*(&ListViewObject_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo, method, v2);
  ListViewObject___ctor((ListViewObject_o *)this, 0);
}


void EventTradeListViewObject__Awake(EventTradeListViewObject_o *this, const MethodInfo *method)
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

  if ( (byte_596AD69 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_EventTradeListViewItemDraw___);
    byte_596AD69 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_2213CDC(0, v3);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_EventTradeListViewItemDraw___);
  this->fields.itemDraw = (struct EventTradeListViewItemDraw_o *)Component_object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.itemDraw,
    (int32_t)Component_object,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
}


UnityEngine_GameObject_o *EventTradeListViewObject__CreateDragObject(
        EventTradeListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *DragObject; // x0
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x19
  const MethodInfo *v6; // x3

  if ( (byte_596AD6D & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_EventTradeListViewObject___);
    byte_596AD6D = 1;
  }
  DragObject = ListViewObject__CreateDragObject((ListViewObject_o *)this, 0);
  if ( !DragObject
    || (v5 = DragObject,
        (DragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                    DragObject,
                                                    (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_EventTradeListViewObject___)) == 0) )
  {
    sub_2213CDC(DragObject, v4);
  }
  EventTradeListViewObject__Init_38989304((EventTradeListViewObject_o *)DragObject, 2, 0, v6);
  return v5;
}


EventTradeListViewItem_o *EventTradeListViewObject__GetItem(EventTradeListViewObject_o *this, const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11

  if ( (byte_596AD6C & 1) == 0 )
  {
    sub_2213A60(&EventTradeListViewItem_TypeInfo);
    byte_596AD6C = 1;
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
    return dword_ED8FF4[initMode];
}


void EventTradeListViewObject__Init(EventTradeListViewObject_o *this, int32_t initMode, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  EventTradeListViewObject__Init_38989304(this, initMode, 0, v3);
}


void EventTradeListViewObject__Init_38989304(
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
  __int64 v13; // x1
  const MethodInfo *v14; // x2
  EventTradeListViewObject_o *v15; // x0
  int v16; // w22
  const MethodInfo *v17; // x2
  const MethodInfo *v18; // x1

  if ( (byte_596AD6E & 1) == 0 )
  {
    sub_2213A60(&EventTradeListViewItem_TypeInfo);
    byte_596AD6E = 1;
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
    sub_2213CDC(transform, v13);
  }
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0);
  v15 = (EventTradeListViewObject_o *)EventTradeListViewItemDraw__GetDisplayMode(
                                        initMode,
                                        (EventTradeListViewItem_o *)v9,
                                        v14);
  v16 = (int)v15;
  this->fields.displayMode = (int)v15;
  this->fields.state = EventTradeListViewObject__GetState(v15, initMode, v17);
  if ( initMode > 5 )
  {
    if ( initMode == 6 )
      return;
    if ( initMode != 7 )
    {
LABEL_22:
      if ( state && displayMode == v16 )
        goto LABEL_20;
    }
LABEL_19:
    EventTradeListViewObject__SetupDisplay(this, v18);
LABEL_20:
    ActionExtensions__Call(onMoveEnd, 0);
    return;
  }
  if ( initMode == 3 )
    goto LABEL_19;
  if ( initMode != 4 )
    goto LABEL_22;
}


void EventTradeListViewObject__OnClickReceiveButton(EventTradeListViewObject_o *this, const MethodInfo *method)
{
  struct System_Action_EventTradeListViewObject__o *receiveAction; // x8

  receiveAction = this->fields.receiveAction;
  if ( !receiveAction )
    sub_2213CDC(this, method);
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
    sub_2213CDC(this, method);
  ((void (__fastcall *)(intptr_t, EventTradeListViewObject_o *, intptr_t))replenishmentAction->fields.invoke_impl)(
    replenishmentAction->fields.method_code,
    this,
    replenishmentAction->fields.method);
}


void EventTradeListViewObject__OnClickTradeStartButton(EventTradeListViewObject_o *this, const MethodInfo *method)
{
  if ( (byte_596AD70 & 1) == 0 )
  {
    sub_2213A60(&Method_ActionExtensions_Call_EventTradeListViewObject___);
    byte_596AD70 = 1;
  }
  ActionExtensions__Call_object_(
    (System_Action_T__o *)this->fields.tradeStartAction,
    (Il2CppObject *)this,
    (const MethodInfo_36FFECC *)Method_ActionExtensions_Call_EventTradeListViewObject___);
}


void EventTradeListViewObject__OnClickWithdrawalButton(EventTradeListViewObject_o *this, const MethodInfo *method)
{
  struct System_Action_EventTradeListViewObject__o *withdrawalAction; // x8

  withdrawalAction = this->fields.withdrawalAction;
  if ( !withdrawalAction )
    sub_2213CDC(this, method);
  ((void (__fastcall *)(intptr_t, EventTradeListViewObject_o *, intptr_t))withdrawalAction->fields.invoke_impl)(
    withdrawalAction->fields.method_code,
    this,
    withdrawalAction->fields.method);
}


void EventTradeListViewObject__OnDestroy(EventTradeListViewObject_o *this, const MethodInfo *method)
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

  if ( (byte_596AD6B & 1) == 0 )
  {
    sub_2213A60(&NGUITools_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596AD6B = 1;
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
    sub_2213A04(p_dragObject, 0, v10, v11, v12, v13, v14, v15);
  }
}


void EventTradeListViewObject__SetItem(
        EventTradeListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  this->fields.state = 0;
  ListViewObject__SetItem_50850568((ListViewObject_o *)this, item, seed, 0);
}


void EventTradeListViewObject__SetOnClickAction(
        EventTradeListViewObject_o *this,
        System_Action_EventTradeListViewObject__o *tradeStart,
        System_Action_EventTradeListViewObject__o *receive,
        System_Action_EventTradeListViewObject__o *replenishment,
        System_Action_EventTradeListViewObject__o *withdrawal,
        const MethodInfo *method)
{
  bool v6; // w6
  bool v7; // w7
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7

  this->fields.tradeStartAction = tradeStart;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.tradeStartAction,
    (int32_t)tradeStart,
    (System_String_o *)receive,
    (System_String_o *)replenishment,
    (int32_t)withdrawal,
    (int32_t)method,
    v6,
    v7);
  this->fields.receiveAction = receive;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.receiveAction,
    (int32_t)receive,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  this->fields.replenishmentAction = replenishment;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.replenishmentAction,
    (int32_t)replenishment,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  this->fields.withdrawalAction = withdrawal;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.withdrawalAction,
    (int32_t)withdrawal,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
}


void EventTradeListViewObject__SetupDisplay(EventTradeListViewObject_o *this, const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x20
  __int64 naturalAligment; // x10
  bool v5; // w1
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Object_o *itemDraw; // x21
  __int64 v9; // x1
  const MethodInfo *v10; // x3
  EventTradeListViewItemDraw_o *v11; // x0
  const MethodInfo *v12; // x3

  if ( (byte_596AD6F & 1) == 0 )
  {
    sub_2213A60(&EventTradeListViewItem_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596AD6F = 1;
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
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
  if ( !UnityEngine_Object__op_Equality(itemDraw, 0, 0) )
  {
    v11 = this->fields.itemDraw;
    if ( !v11
      || (EventTradeListViewItemDraw__SetItem(v11, (EventTradeListViewItem_o *)linkItem, this->fields.displayMode, v10),
          (v11 = this->fields.itemDraw) == 0) )
    {
      sub_2213CDC(v11, v9);
    }
    EventTradeListViewItemDraw__UpdateItem(v11, (EventTradeListViewItem_o *)linkItem, this->fields.displayMode, v12);
  }
}


void EventTradeListViewObject__Update(EventTradeListViewObject_o *this, const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x20
  __int64 naturalAligment; // x10
  float time; // s8
  const MethodInfo *v6; // x3
  float v7; // s0
  EventTradeListViewItemDraw_o *itemDraw; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x3

  if ( (byte_596AD6A & 1) == 0 )
  {
    sub_2213A60(&EventTradeListViewItem_TypeInfo);
    byte_596AD6A = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    naturalAligment = EventTradeListViewItem_TypeInfo->_2.naturalAligment;
    if ( linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment
      && (EventTradeListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == EventTradeListViewItem_TypeInfo )
    {
      time = this->fields.time;
      v7 = time + UnityEngine_Time__get_deltaTime(0);
      this->fields.time = v7;
      if ( v7 >= 1.0 )
      {
        itemDraw = this->fields.itemDraw;
        this->fields.time = 0.0;
        EventTradeListViewObject__Init_38989304(this, 3, 0, v6);
        if ( !itemDraw )
          sub_2213CDC(v9, v10);
        EventTradeListViewItemDraw__UpdateItem(
          itemDraw,
          (EventTradeListViewItem_o *)linkItem,
          this->fields.displayMode,
          v11);
      }
    }
  }
}


int32_t EventTradeListViewObject__get_DisplayMode(EventTradeListViewObject_o *this, const MethodInfo *method)
{
  return this->fields.displayMode;
}