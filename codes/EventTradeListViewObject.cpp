void __fastcall EventTradeListViewObject___ctor(EventTradeListViewObject_o *this, const MethodInfo *method)
{
  if ( (byte_4BAF6DF & 1) == 0 )
  {
    sub_1C13D24(&ListViewObject_TypeInfo, method);
    byte_4BAF6DF = 1;
  }
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  ListViewObject___ctor((ListViewObject_o *)this, 0LL);
}


void __fastcall EventTradeListViewObject__Awake(EventTradeListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0

  if ( (byte_4BAF6D7 & 1) == 0 )
  {
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponent_EventTradeListViewItemDraw___, method);
    byte_4BAF6D7 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1C13F80(0LL, v3);
  this->fields.itemDraw = (struct EventTradeListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                   dispObject,
                                                                   (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_EventTradeListViewItemDraw___);
  sub_1C13CC8(&this->fields.itemDraw);
}


UnityEngine_GameObject_o *__fastcall EventTradeListViewObject__CreateDragObject(
        EventTradeListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *DragObject; // x0
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x19
  const MethodInfo *v6; // x3

  if ( (byte_4BAF6DB & 1) == 0 )
  {
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponent_EventTradeListViewObject___, method);
    byte_4BAF6DB = 1;
  }
  DragObject = ListViewObject__CreateDragObject((ListViewObject_o *)this, 0LL);
  if ( !DragObject
    || (v5 = DragObject,
        (DragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                    DragObject,
                                                    (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_EventTradeListViewObject___)) == 0LL) )
  {
    sub_1C13F80(DragObject, v4);
  }
  EventTradeListViewObject__Init_31571936((EventTradeListViewObject_o *)DragObject, 2, 0LL, v6);
  return v5;
}


EventTradeListViewItem_o *__fastcall EventTradeListViewObject__GetItem(
        EventTradeListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x11

  if ( (byte_4BAF6DA & 1) == 0 )
  {
    sub_1C13D24(&EventTradeListViewItem_TypeInfo, method);
    byte_4BAF6DA = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0LL;
  methodPtr_low = LOBYTE(EventTradeListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
    return 0LL;
  if ( (EventTradeListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == EventTradeListViewItem_TypeInfo )
    return (EventTradeListViewItem_o *)this->fields.linkItem;
  return 0LL;
}


int32_t __fastcall EventTradeListViewObject__GetState(
        EventTradeListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  if ( (unsigned int)initMode > 7 )
    return 0;
  else
    return dword_C2F7EC[initMode];
}


void __fastcall EventTradeListViewObject__Init(
        EventTradeListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  EventTradeListViewObject__Init_31571936(this, initMode, 0LL, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventTradeListViewObject__Init_31571936(
        EventTradeListViewObject_o *this,
        int32_t initMode,
        System_Action_o *onMoveEnd,
        const MethodInfo *method)
{
  int32_t v5; // w21
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x11
  struct ListViewItem_o *v9; // x22
  int32_t displayMode; // w24
  int32_t state; // w25
  UnityEngine_Transform_o *transform; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x2
  int32_t v15; // w0
  const MethodInfo *v16; // x1
  int32_t v17; // w8

  v5 = initMode;
  if ( (byte_4BAF6DC & 1) == 0 )
  {
    sub_1C13D24(&EventTradeListViewItem_TypeInfo, *(_QWORD *)&initMode);
    byte_4BAF6DC = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem
    && (methodPtr_low = LOBYTE(EventTradeListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
  {
    if ( (EventTradeListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == EventTradeListViewItem_TypeInfo )
      v9 = this->fields.linkItem;
    else
      v9 = 0LL;
  }
  else
  {
    v9 = 0LL;
  }
  if ( !v9 )
    v5 = 0;
  state = this->fields.state;
  displayMode = this->fields.displayMode;
  ListViewObject__SetVisible((ListViewObject_o *)this, v5 != 0, 0LL);
  ((void (__fastcall *)(EventTradeListViewObject_o *, bool, Il2CppMethodPointer))this->klass->vtable._9_SetInput.method)(
    this,
    v5 != 0,
    this->klass->vtable._10_Invalidation.methodPtr);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0LL),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_1C13F80(transform, v13);
  }
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0LL);
  v15 = EventTradeListViewItemDraw__GetDisplayMode(v5, (EventTradeListViewItem_o *)v9, v14);
  this->fields.displayMode = v15;
  switch ( v5 )
  {
    case 0:
    case 1:
    case 2:
    case 7:
      v17 = 1;
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
      if ( !state || displayMode != v15 )
LABEL_22:
        EventTradeListViewObject__SetupDisplay(this, v16);
      ActionExtensions__Call(onMoveEnd, 0LL);
      break;
    default:
      v17 = 0;
LABEL_17:
      this->fields.state = v17;
      switch ( v5 )
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


void __fastcall EventTradeListViewObject__OnClickReceiveButton(
        EventTradeListViewObject_o *this,
        const MethodInfo *method)
{
  struct System_Action_EventTradeListViewObject__o *receiveAction; // x8

  receiveAction = this->fields.receiveAction;
  if ( !receiveAction )
    sub_1C13F80(this, method);
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, EventTradeListViewObject_o *, _QWORD))receiveAction->fields.m_target)(
    receiveAction->fields.original_method_info,
    this,
    *(_QWORD *)&receiveAction->fields.extra_arg);
}


void __fastcall EventTradeListViewObject__OnClickReplenishmentButton(
        EventTradeListViewObject_o *this,
        const MethodInfo *method)
{
  struct System_Action_EventTradeListViewObject__o *replenishmentAction; // x8

  replenishmentAction = this->fields.replenishmentAction;
  if ( !replenishmentAction )
    sub_1C13F80(this, method);
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, EventTradeListViewObject_o *, _QWORD))replenishmentAction->fields.m_target)(
    replenishmentAction->fields.original_method_info,
    this,
    *(_QWORD *)&replenishmentAction->fields.extra_arg);
}


void __fastcall EventTradeListViewObject__OnClickTradeStartButton(
        EventTradeListViewObject_o *this,
        const MethodInfo *method)
{
  if ( (byte_4BAF6DE & 1) == 0 )
  {
    sub_1C13D24(&Method_ActionExtensions_Call_EventTradeListViewObject___, method);
    byte_4BAF6DE = 1;
  }
  ActionExtensions__Call_object_(
    (System_Action_T__o *)this->fields.tradeStartAction,
    (Il2CppObject *)this,
    (const MethodInfo_2EE1C78 *)Method_ActionExtensions_Call_EventTradeListViewObject___);
}


void __fastcall EventTradeListViewObject__OnClickWithdrawalButton(
        EventTradeListViewObject_o *this,
        const MethodInfo *method)
{
  struct System_Action_EventTradeListViewObject__o *withdrawalAction; // x8

  withdrawalAction = this->fields.withdrawalAction;
  if ( !withdrawalAction )
    sub_1C13F80(this, method);
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, EventTradeListViewObject_o *, _QWORD))withdrawalAction->fields.m_target)(
    withdrawalAction->fields.original_method_info,
    this,
    *(_QWORD *)&withdrawalAction->fields.extra_arg);
}


void __fastcall EventTradeListViewObject__OnDestroy(EventTradeListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct UnityEngine_GameObject_o **p_dragObject; // x19
  UnityEngine_Object_o *v5; // x20
  struct UnityEngine_GameObject_o *dragObject; // t1
  UnityEngine_Object_o *v7; // x20

  if ( (byte_4BAF6D9 & 1) == 0 )
  {
    sub_1C13D24(&NGUITools_TypeInfo, method);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v3);
    byte_4BAF6D9 = 1;
  }
  dragObject = this->fields.dragObject;
  p_dragObject = &this->fields.dragObject;
  v5 = (UnityEngine_Object_o *)dragObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(v5, 0LL, 0LL) )
  {
    v7 = (UnityEngine_Object_o *)*p_dragObject;
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    NGUITools__Destroy(v7, 0LL);
    *p_dragObject = 0LL;
    sub_1C13CC8(p_dragObject);
  }
}


void __fastcall EventTradeListViewObject__SetItem(
        EventTradeListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  this->fields.state = 0;
  ListViewObject__SetItem_41915964((ListViewObject_o *)this, item, seed, 0LL);
}


void __fastcall EventTradeListViewObject__SetOnClickAction(
        EventTradeListViewObject_o *this,
        System_Action_EventTradeListViewObject__o *tradeStart,
        System_Action_EventTradeListViewObject__o *receive,
        System_Action_EventTradeListViewObject__o *replenishment,
        System_Action_EventTradeListViewObject__o *withdrawal,
        const MethodInfo *method)
{
  this->fields.tradeStartAction = tradeStart;
  sub_1C13CC8(&this->fields.tradeStartAction);
  this->fields.receiveAction = receive;
  sub_1C13CC8(&this->fields.receiveAction);
  this->fields.replenishmentAction = replenishment;
  sub_1C13CC8(&this->fields.replenishmentAction);
  this->fields.withdrawalAction = withdrawal;
  sub_1C13CC8(&this->fields.withdrawalAction);
}


void __fastcall EventTradeListViewObject__SetupDisplay(EventTradeListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct ListViewItem_o *linkItem; // x20
  __int64 methodPtr_low; // x10
  bool v6; // w1
  UnityEngine_Object_o *itemDraw; // x21
  __int64 v8; // x1
  const MethodInfo *v9; // x3
  EventTradeListViewItemDraw_o *v10; // x0
  const MethodInfo *v11; // x3

  if ( (byte_4BAF6DD & 1) == 0 )
  {
    sub_1C13D24(&EventTradeListViewItem_TypeInfo, method);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v3);
    byte_4BAF6DD = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    goto LABEL_7;
  methodPtr_low = LOBYTE(EventTradeListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (EventTradeListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] != EventTradeListViewItem_TypeInfo )
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
    v10 = this->fields.itemDraw;
    if ( !v10
      || (EventTradeListViewItemDraw__SetItem(v10, (EventTradeListViewItem_o *)linkItem, this->fields.displayMode, v9),
          (v10 = this->fields.itemDraw) == 0LL) )
    {
      sub_1C13F80(v10, v8);
    }
    EventTradeListViewItemDraw__UpdateItem(v10, (EventTradeListViewItem_o *)linkItem, this->fields.displayMode, v11);
  }
}


void __fastcall EventTradeListViewObject__Update(EventTradeListViewObject_o *this, const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x11
  EventTradeListViewItem_c *v5; // x10
  EventTradeListViewItem_o *v6; // x20
  float time; // s8
  const MethodInfo *v8; // x3
  float v9; // s0
  EventTradeListViewItemDraw_o *itemDraw; // x21
  __int64 v11; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x3

  if ( (byte_4BAF6D8 & 1) == 0 )
  {
    sub_1C13D24(&EventTradeListViewItem_TypeInfo, method);
    byte_4BAF6D8 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    methodPtr_low = LOBYTE(EventTradeListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
    {
      v5 = (EventTradeListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1];
      v6 = v5 == EventTradeListViewItem_TypeInfo ? (EventTradeListViewItem_o *)this->fields.linkItem : 0LL;
      if ( v5 == EventTradeListViewItem_TypeInfo )
      {
        time = this->fields.time;
        v9 = time + UnityEngine_Time__get_deltaTime(0LL);
        this->fields.time = v9;
        if ( v9 >= 1.0 )
        {
          itemDraw = this->fields.itemDraw;
          this->fields.time = 0.0;
          EventTradeListViewObject__Init_31571936(this, 3, 0LL, v8);
          if ( !itemDraw )
            sub_1C13F80(v11, v12);
          EventTradeListViewItemDraw__UpdateItem(itemDraw, v6, this->fields.displayMode, v13);
        }
      }
    }
  }
}


int32_t __fastcall EventTradeListViewObject__get_DisplayMode(
        EventTradeListViewObject_o *this,
        const MethodInfo *method)
{
  return this->fields.displayMode;
}