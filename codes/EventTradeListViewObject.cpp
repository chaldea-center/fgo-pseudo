void __fastcall EventTradeListViewObject___ctor(EventTradeListViewObject_o *this, const MethodInfo *method)
{
  if ( (byte_4A0CF5E & 1) == 0 )
  {
    sub_1B686D4(&ListViewObject_TypeInfo, method);
    byte_4A0CF5E = 1;
  }
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  ListViewObject___ctor((ListViewObject_o *)this, 0LL);
}


void __fastcall EventTradeListViewObject__Awake(EventTradeListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_4A0CF56 & 1) == 0 )
  {
    sub_1B686D4(&Method_UnityEngine_GameObject_GetComponent_EventTradeListViewItemDraw___, method);
    byte_4A0CF56 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1B68930(0LL, v3);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_2E98950 *)Method_UnityEngine_GameObject_GetComponent_EventTradeListViewItemDraw___);
  this->fields.itemDraw = (struct EventTradeListViewItemDraw_o *)Component_object;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.itemDraw, (int32_t)Component_object, v6, v7);
}


UnityEngine_GameObject_o *__fastcall EventTradeListViewObject__CreateDragObject(
        EventTradeListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *DragObject; // x0
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x19
  const MethodInfo *v6; // x3

  if ( (byte_4A0CF5A & 1) == 0 )
  {
    sub_1B686D4(&Method_UnityEngine_GameObject_GetComponent_EventTradeListViewObject___, method);
    byte_4A0CF5A = 1;
  }
  DragObject = ListViewObject__CreateDragObject((ListViewObject_o *)this, 0LL);
  if ( !DragObject
    || (v5 = DragObject,
        (DragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                    DragObject,
                                                    (const MethodInfo_2E98950 *)Method_UnityEngine_GameObject_GetComponent_EventTradeListViewObject___)) == 0LL) )
  {
    sub_1B68930(DragObject, v4);
  }
  EventTradeListViewObject__Init_45964348((EventTradeListViewObject_o *)DragObject, 2, 0LL, v6);
  return v5;
}


EventTradeListViewItem_o *__fastcall EventTradeListViewObject__GetItem(
        EventTradeListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x11

  if ( (byte_4A0CF59 & 1) == 0 )
  {
    sub_1B686D4(&EventTradeListViewItem_TypeInfo, method);
    byte_4A0CF59 = 1;
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
    return dword_BDF62C[initMode];
}


void __fastcall EventTradeListViewObject__Init(
        EventTradeListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  EventTradeListViewObject__Init_45964348(this, initMode, 0LL, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventTradeListViewObject__Init_45964348(
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
  int32_t v14; // w0
  const MethodInfo *v15; // x1
  int32_t v16; // w8

  v5 = initMode;
  if ( (byte_4A0CF5B & 1) == 0 )
  {
    sub_1B686D4(&EventTradeListViewItem_TypeInfo, *(_QWORD *)&initMode);
    byte_4A0CF5B = 1;
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
    sub_1B68930(transform, v13);
  }
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0LL);
  v14 = EventTradeListViewItemDraw__GetDisplayMode(v5, (EventTradeListViewItem_o *)v9, 0LL);
  this->fields.displayMode = v14;
  switch ( v5 )
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
      ActionExtensions__Call(onMoveEnd, 0LL);
      break;
    default:
      v16 = 0;
LABEL_17:
      this->fields.state = v16;
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
    sub_1B68930(this, method);
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
    sub_1B68930(this, method);
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, EventTradeListViewObject_o *, _QWORD))replenishmentAction->fields.m_target)(
    replenishmentAction->fields.original_method_info,
    this,
    *(_QWORD *)&replenishmentAction->fields.extra_arg);
}


void __fastcall EventTradeListViewObject__OnClickTradeStartButton(
        EventTradeListViewObject_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A0CF5D & 1) == 0 )
  {
    sub_1B686D4(&Method_ActionExtensions_Call_EventTradeListViewObject___, method);
    byte_4A0CF5D = 1;
  }
  ActionExtensions__Call_object_(
    (System_Action_T__o *)this->fields.tradeStartAction,
    (Il2CppObject *)this,
    (const MethodInfo_2DA1358 *)Method_ActionExtensions_Call_EventTradeListViewObject___);
}


void __fastcall EventTradeListViewObject__OnClickWithdrawalButton(
        EventTradeListViewObject_o *this,
        const MethodInfo *method)
{
  struct System_Action_EventTradeListViewObject__o *withdrawalAction; // x8

  withdrawalAction = this->fields.withdrawalAction;
  if ( !withdrawalAction )
    sub_1B68930(this, method);
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, EventTradeListViewObject_o *, _QWORD))withdrawalAction->fields.m_target)(
    withdrawalAction->fields.original_method_info,
    this,
    *(_QWORD *)&withdrawalAction->fields.extra_arg);
}


void __fastcall EventTradeListViewObject__OnDestroy(EventTradeListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  ServantStatusBattleListViewItem_o *p_dragObject; // x19
  UnityEngine_Object_o *v5; // x20
  struct UnityEngine_GameObject_o *dragObject; // t1
  UnityEngine_Object_o *klass; // x20
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_4A0CF58 & 1) == 0 )
  {
    sub_1B686D4(&NGUITools_TypeInfo, method);
    sub_1B686D4(&UnityEngine_Object_TypeInfo, v3);
    byte_4A0CF58 = 1;
  }
  dragObject = this->fields.dragObject;
  p_dragObject = (ServantStatusBattleListViewItem_o *)&this->fields.dragObject;
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
    sub_1B68678(p_dragObject, 0, v8, v9);
  }
}


void __fastcall EventTradeListViewObject__SetItem(
        EventTradeListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  this->fields.state = 0;
  ListViewObject__SetItem_40489024((ListViewObject_o *)this, item, seed, 0LL);
}


void __fastcall EventTradeListViewObject__SetOnClickAction(
        EventTradeListViewObject_o *this,
        System_Action_EventTradeListViewObject__o *tradeStart,
        System_Action_EventTradeListViewObject__o *receive,
        System_Action_EventTradeListViewObject__o *replenishment,
        System_Action_EventTradeListViewObject__o *withdrawal,
        const MethodInfo *method)
{
  int32_t v10; // w2
  int32_t v11; // w3
  int32_t v12; // w2
  int32_t v13; // w3
  int32_t v14; // w2
  int32_t v15; // w3

  this->fields.tradeStartAction = tradeStart;
  sub_1B68678(
    (ServantStatusBattleListViewItem_o *)&this->fields.tradeStartAction,
    (int32_t)tradeStart,
    (int32_t)receive,
    (int32_t)replenishment);
  this->fields.receiveAction = receive;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.receiveAction, (int32_t)receive, v10, v11);
  this->fields.replenishmentAction = replenishment;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.replenishmentAction, (int32_t)replenishment, v12, v13);
  this->fields.withdrawalAction = withdrawal;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.withdrawalAction, (int32_t)withdrawal, v14, v15);
}


void __fastcall EventTradeListViewObject__SetupDisplay(EventTradeListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct ListViewItem_o *linkItem; // x20
  __int64 methodPtr_low; // x10
  bool v6; // w1
  UnityEngine_Object_o *itemDraw; // x21
  __int64 v8; // x1
  EventTradeListViewItemDraw_o *v9; // x0

  if ( (byte_4A0CF5C & 1) == 0 )
  {
    sub_1B686D4(&EventTradeListViewItem_TypeInfo, method);
    sub_1B686D4(&UnityEngine_Object_TypeInfo, v3);
    byte_4A0CF5C = 1;
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
    v9 = this->fields.itemDraw;
    if ( !v9
      || (EventTradeListViewItemDraw__SetItem(v9, (EventTradeListViewItem_o *)linkItem, this->fields.displayMode, 0LL),
          (v9 = this->fields.itemDraw) == 0LL) )
    {
      sub_1B68930(v9, v8);
    }
    EventTradeListViewItemDraw__UpdateItem(v9, (EventTradeListViewItem_o *)linkItem, this->fields.displayMode, 0LL);
  }
}


void __fastcall EventTradeListViewObject__Update(EventTradeListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x11
  EventTradeListViewItem_c *v6; // x10
  EventTradeListViewItem_o *v7; // x20
  EventTradeListViewItemDraw_o *itemDraw; // x21
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_4A0CF57 & 1) == 0 )
  {
    sub_1B686D4(&EventTradeListViewItem_TypeInfo, method);
    byte_4A0CF57 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    methodPtr_low = LOBYTE(EventTradeListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
    {
      v6 = (EventTradeListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1];
      v7 = v6 == EventTradeListViewItem_TypeInfo ? (EventTradeListViewItem_o *)this->fields.linkItem : 0LL;
      if ( v6 == EventTradeListViewItem_TypeInfo )
      {
        itemDraw = this->fields.itemDraw;
        EventTradeListViewObject__Init_45964348(this, 3, 0LL, v2);
        if ( !itemDraw )
          sub_1B68930(v9, v10);
        EventTradeListViewItemDraw__UpdateItem(itemDraw, v7, this->fields.displayMode, 0LL);
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