void __fastcall EventCraftListViewObject___ctor(EventCraftListViewObject_o *this, const MethodInfo *method)
{
  if ( (byte_4B06256 & 1) == 0 )
  {
    sub_1BC3008(&ListViewObject_TypeInfo, method);
    byte_4B06256 = 1;
  }
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  ListViewObject___ctor((ListViewObject_o *)this, 0LL);
}


void __fastcall EventCraftListViewObject__Awake(EventCraftListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4B0624E & 1) == 0 )
  {
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_EventCraftListViewItemDraw___, method);
    byte_4B0624E = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1BC3264(0LL, v3);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_EventCraftListViewItemDraw___);
  this->fields.itemDraw = (struct EventCraftListViewItemDraw_o *)Component_object;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.itemDraw, (int32_t)Component_object, v6, v7);
}


UnityEngine_GameObject_o *__fastcall EventCraftListViewObject__CreateDragObject(
        EventCraftListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *DragObject; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x3

  if ( (byte_4B06252 & 1) == 0 )
  {
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_EventCraftListViewObject___, method);
    byte_4B06252 = 1;
  }
  DragObject = ListViewObject__CreateDragObject((ListViewObject_o *)this, 0LL);
  if ( !DragObject
    || (DragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   DragObject,
                                                   (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_EventCraftListViewObject___)) == 0LL )
  {
    sub_1BC3264(DragObject, v4);
  }
  EventCraftListViewObject__Init((EventCraftListViewObject_o *)DragObject, 1, 0LL, v5);
  return this->fields.dragObject;
}


EventCraftListViewItem_o *__fastcall EventCraftListViewObject__GetItem(
        EventCraftListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x11

  if ( (byte_4B06251 & 1) == 0 )
  {
    sub_1BC3008(&EventCraftListViewItem_TypeInfo, method);
    byte_4B06251 = 1;
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
  if ( (byte_4B06253 & 1) == 0 )
  {
    sub_1BC3008(&EventCraftListViewItem_TypeInfo, *(_QWORD *)&initMode);
    byte_4B06253 = 1;
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
    sub_1BC3264(transform, v14);
  }
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0LL);
  v15 = EventCraftListViewItemDraw__GetDisplayMode(v5, (EventCraftListViewItem_o *)v11, 0LL);
  this->fields.displayMode = v15;
  if ( (unsigned int)v5 > 2 )
    v17 = 0;
  else
    v17 = dword_C19514[v5];
  this->fields.state = v17;
  if ( !v9 || !v8 || displayMode != v15 )
    EventCraftListViewObject__SetupDisplay(this, v16);
  ActionExtensions__Call(onMoveEnd, 0LL);
}


void __fastcall EventCraftListViewObject__OnClickCraftStartButton(
        EventCraftListViewObject_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B06255 & 1) == 0 )
  {
    sub_1BC3008(&Method_ActionExtensions_Call_EventCraftListViewObject___, method);
    byte_4B06255 = 1;
  }
  ActionExtensions__Call_object_(
    (System_Action_T__o *)this->fields.startAction,
    (Il2CppObject *)this,
    (const MethodInfo_2F514AC *)Method_ActionExtensions_Call_EventCraftListViewObject___);
}


void __fastcall EventCraftListViewObject__OnClickReceiveButton(
        EventCraftListViewObject_o *this,
        const MethodInfo *method)
{
  struct System_Action_EventCraftListViewObject__o *receiveAction; // x8

  receiveAction = this->fields.receiveAction;
  if ( !receiveAction )
    sub_1BC3264(this, method);
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
    sub_1BC3264(this, method);
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
    sub_1BC3264(this, method);
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
    sub_1BC3264(this, method);
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, EventCraftListViewObject_o *, _QWORD))withdrawalAction->fields.m_target)(
    withdrawalAction->fields.original_method_info,
    this,
    *(_QWORD *)&withdrawalAction->fields.extra_arg);
}


void __fastcall EventCraftListViewObject__OnDestroy(EventCraftListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  CGThumbnailListItem_o *p_dragObject; // x19
  UnityEngine_Object_o *v5; // x20
  struct UnityEngine_GameObject_o *dragObject; // t1
  UnityEngine_Object_o *klass; // x20
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4B06250 & 1) == 0 )
  {
    sub_1BC3008(&NGUITools_TypeInfo, method);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v3);
    byte_4B06250 = 1;
  }
  dragObject = this->fields.dragObject;
  p_dragObject = (CGThumbnailListItem_o *)&this->fields.dragObject;
  v5 = (UnityEngine_Object_o *)dragObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(v5, 0LL, 0LL) )
  {
    klass = (UnityEngine_Object_o *)p_dragObject->klass;
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    NGUITools__Destroy(klass, 0LL);
    p_dragObject->klass = 0LL;
    sub_1BC2FAC(p_dragObject, 0, v8, v9);
  }
}


void __fastcall EventCraftListViewObject__SetItem(
        EventCraftListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  this->fields.state = 0;
  ListViewObject__SetItem_42800124((ListViewObject_o *)this, item, seed, 0LL);
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
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int32_t v18; // w2
  const MethodInfo *v19; // x3

  this->fields.startAction = start;
  sub_1BC2FAC(
    (CGThumbnailListItem_o *)&this->fields.startAction,
    (int32_t)start,
    (int32_t)receive,
    (const MethodInfo *)replenishment);
  this->fields.receiveAction = receive;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.receiveAction, (int32_t)receive, v12, v13);
  this->fields.replenishmentAction = replenishment;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.replenishmentAction, (int32_t)replenishment, v14, v15);
  this->fields.withdrawalAction = withdrawal;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.withdrawalAction, (int32_t)withdrawal, v16, v17);
  this->fields.supportToolAction = supportTool;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.supportToolAction, (int32_t)supportTool, v18, v19);
}


void __fastcall EventCraftListViewObject__SetupDisplay(EventCraftListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct ListViewItem_o *linkItem; // x20
  __int64 methodPtr_low; // x10
  bool v6; // w1
  UnityEngine_Object_o *itemDraw; // x21
  __int64 v8; // x1
  EventCraftListViewItemDraw_o *v9; // x0

  if ( (byte_4B06254 & 1) == 0 )
  {
    sub_1BC3008(&EventCraftListViewItem_TypeInfo, method);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v3);
    byte_4B06254 = 1;
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
    v6 = 0;
    goto LABEL_8;
  }
  v6 = this->fields.displayMode != 0;
LABEL_8:
  ListViewObject__SetVisible((ListViewObject_o *)this, v6, 0LL);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(itemDraw, 0LL, 0LL) )
  {
    v9 = this->fields.itemDraw;
    if ( !v9
      || (EventCraftListViewItemDraw__SetItem(v9, (EventCraftListViewItem_o *)linkItem, this->fields.displayMode, 0LL),
          (v9 = this->fields.itemDraw) == 0LL) )
    {
      sub_1BC3264(v9, v8);
    }
    EventCraftListViewItemDraw__UpdateItem(v9, (EventCraftListViewItem_o *)linkItem, this->fields.displayMode, 0LL);
  }
}


void __fastcall EventCraftListViewObject__Update(EventCraftListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x11
  EventCraftListViewItem_c *v6; // x10
  EventCraftListViewItem_o *v7; // x20
  __int64 v8; // x1
  float time; // s8
  EventCraftListViewItemDraw_o *itemDraw; // x0

  if ( (byte_4B0624F & 1) == 0 )
  {
    sub_1BC3008(&EventCraftListViewItem_TypeInfo, method);
    sub_1BC3008(&System_Math_TypeInfo, v3);
    byte_4B0624F = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    methodPtr_low = LOBYTE(EventCraftListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
    {
      v6 = (EventCraftListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1];
      v7 = v6 == EventCraftListViewItem_TypeInfo ? (EventCraftListViewItem_o *)this->fields.linkItem : 0LL;
      if ( v6 == EventCraftListViewItem_TypeInfo
        && (float)(UnityEngine_Time__get_time(0LL) - this->fields.updatedTime) >= 1.0 )
      {
        time = UnityEngine_Time__get_time(0LL);
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        itemDraw = this->fields.itemDraw;
        this->fields.updatedTime = floorf(time);
        if ( !itemDraw )
          sub_1BC3264(0LL, v8);
        EventCraftListViewItemDraw__UpdateItem(itemDraw, v7, this->fields.displayMode, 0LL);
      }
    }
  }
}


void __fastcall EventCraftListViewObject__UpdateItem(
        EventCraftListViewObject_o *this,
        EventCraftListViewItem_o *item,
        const MethodInfo *method)
{
  EventCraftListViewItemDraw_o *itemDraw; // x0

  itemDraw = this->fields.itemDraw;
  if ( !itemDraw )
    sub_1BC3264(0LL, item);
  EventCraftListViewItemDraw__UpdateItem(itemDraw, item, this->fields.displayMode, 0LL);
}


int32_t __fastcall EventCraftListViewObject__get_DisplayMode(
        EventCraftListViewObject_o *this,
        const MethodInfo *method)
{
  return this->fields.displayMode;
}