void __fastcall ServantSellConfirmListViewObject___ctor(
        ServantSellConfirmListViewObject_o *this,
        const MethodInfo *method)
{
  if ( (byte_438D196 & 1) == 0 )
  {
    sub_B775C4(&ListViewObject_TypeInfo);
    byte_438D196 = 1;
  }
  if ( (BYTE3(ListViewObject_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ListViewObject_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  }
  ListViewObject___ctor((ListViewObject_o *)this, 0LL);
}


void __fastcall ServantSellConfirmListViewObject__Awake(
        ServantSellConfirmListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  struct ServantSellConfirmListViewItemDraw_o *Component_srcLineSprite; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_438D18A & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_ServantSellConfirmListViewItemDraw___);
    byte_438D18A = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_B7769C(0LL, v3);
  Component_srcLineSprite = (struct ServantSellConfirmListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                             dispObject,
                                                                             (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_ServantSellConfirmListViewItemDraw___);
  this->fields.itemDraw = Component_srcLineSprite;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.itemDraw,
    (System_Int32_array **)Component_srcLineSprite,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
}


void __fastcall ServantSellConfirmListViewObject__CallOnMoveEnd(
        ServantSellConfirmListViewObject_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleServantConfConponent_o *p_onMoveEnd; // x0
  System_Action_o *v9; // x19
  struct System_Action_o *onMoveEnd; // t1

  onMoveEnd = this->fields.onMoveEnd;
  p_onMoveEnd = (BattleServantConfConponent_o *)&this->fields.onMoveEnd;
  v9 = onMoveEnd;
  if ( onMoveEnd )
  {
    p_onMoveEnd->klass = 0LL;
    sub_B77560(p_onMoveEnd, 0LL, v2, v3, v4, v5, v6, v7);
    System_Action__Invoke(v9, 0LL);
  }
}


UnityEngine_GameObject_o *__fastcall ServantSellConfirmListViewObject__CreateDragObject(
        ServantSellConfirmListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *DragObject; // x19
  srcLineSprite_o *Component_srcLineSprite; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x3
  ServantSellConfirmListViewObject_o *v7; // x20
  const MethodInfo *v8; // x1

  if ( (byte_438D18F & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_ServantSellConfirmListViewObject___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438D18F = 1;
  }
  DragObject = (UnityEngine_Object_o *)ListViewObject__CreateDragObject((ListViewObject_o *)this, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  Component_srcLineSprite = (srcLineSprite_o *)UnityEngine_Object__op_Inequality(DragObject, 0LL, 0LL);
  if ( ((unsigned __int8)Component_srcLineSprite & 1) != 0 )
  {
    if ( !DragObject
      || (Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                      (UnityEngine_GameObject_o *)DragObject,
                                      (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_ServantSellConfirmListViewObject___)) == 0LL )
    {
      sub_B7769C(Component_srcLineSprite, v5);
    }
    v7 = (ServantSellConfirmListViewObject_o *)Component_srcLineSprite;
    ServantSellConfirmListViewObject__Init((ServantSellConfirmListViewObject_o *)Component_srcLineSprite, 2, 0LL, v6);
    ServantSellConfirmListViewObject__SetupDisp(v7, v8);
  }
  return (UnityEngine_GameObject_o *)DragObject;
}


ServantSellConfirmListViewItem_o *__fastcall ServantSellConfirmListViewObject__GetItem(
        ServantSellConfirmListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 v4; // x11

  if ( (byte_438D18C & 1) == 0 )
  {
    sub_B775C4(&ServantSellConfirmListViewItem_TypeInfo);
    byte_438D18C = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0LL;
  v4 = *(&ServantSellConfirmListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v4 )
    return 0LL;
  if ( (ServantSellConfirmListViewItem_c *)linkItem->klass->_2.typeHierarchy[v4 - 1] == ServantSellConfirmListViewItem_TypeInfo )
    return (ServantSellConfirmListViewItem_o *)this->fields.linkItem;
  return 0LL;
}


int32_t __fastcall ServantSellConfirmListViewObject__GetState(
        ServantSellConfirmListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  if ( (unsigned int)initMode < 3 )
    return 1;
  if ( initMode == 3 )
    return 3;
  return 0;
}


void __fastcall ServantSellConfirmListViewObject__Init(
        ServantSellConfirmListViewObject_o *this,
        int32_t initMode,
        System_Action_o *onMoveEnd,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x0
  int32_t dispMode; // w22
  int32_t state; // w23
  __int64 v10; // x9
  UnityEngine_Transform_o *transform; // x0
  __int64 v12; // x1
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  const MethodInfo *v19; // x1
  int32_t v20; // w8
  int32_t v21; // w9
  ServantSellConfirmListViewManager_o *v22; // x0
  int32_t v23; // w1
  System_Action_ServantSellConfirmListViewItem__o *v24; // x2
  const MethodInfo *v25; // x3

  if ( (byte_438D190 & 1) == 0 )
  {
    sub_B775C4(&ServantSellConfirmListViewItem_TypeInfo);
    byte_438D190 = 1;
  }
  linkItem = this->fields.linkItem;
  dispMode = this->fields.dispMode;
  state = this->fields.state;
  if ( linkItem )
  {
    v10 = *(&ServantSellConfirmListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v10
      || (ServantSellConfirmListViewItem_c *)linkItem->klass->_2.typeHierarchy[v10 - 1] != ServantSellConfirmListViewItem_TypeInfo )
    {
      sub_B77990(linkItem);
      ServantSellConfirmListViewManager__SetMode(v22, v23, v24, v25);
      return;
    }
  }
  if ( !linkItem )
    initMode = 0;
  ListViewObject__SetVisible((ListViewObject_o *)this, initMode != 0, 0LL);
  ((void (__fastcall *)(ServantSellConfirmListViewObject_o *, bool, Il2CppMethodPointer))this->klass->vtable._9_SetInput.method)(
    this,
    initMode == 3,
    this->klass->vtable._10_Invalidation.methodPtr);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0LL),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_B7769C(transform, v12);
  }
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0LL);
  this->fields.onMoveEnd = onMoveEnd;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.onMoveEnd,
    (System_Int32_array **)onMoveEnd,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  if ( initMode == 1 )
  {
    v20 = 1;
    goto LABEL_16;
  }
  if ( initMode == 3 )
  {
    v20 = 2;
    this->fields.dispMode = 2;
    goto LABEL_19;
  }
  if ( initMode != 2 )
  {
    v20 = 0;
    this->fields.dispMode = 0;
    if ( (unsigned int)initMode < 3 )
      goto LABEL_17;
LABEL_19:
    if ( initMode == 3 )
      v21 = 3;
    else
      v21 = 0;
    goto LABEL_22;
  }
  v20 = 2;
LABEL_16:
  this->fields.dispMode = v20;
LABEL_17:
  v21 = 1;
LABEL_22:
  this->fields.state = v21;
  if ( !state || dispMode != v20 )
    ServantSellConfirmListViewObject__SetupDisp(this, v19);
  ServantSellConfirmListViewObject__CallOnMoveEnd(this, v19);
}


void __fastcall ServantSellConfirmListViewObject__InitItem(
        ServantSellConfirmListViewObject_o *this,
        const MethodInfo *method)
{
  this->fields.state = 0;
}


bool __fastcall ServantSellConfirmListViewObject__IsCanDrag(
        ServantSellConfirmListViewObject_o *this,
        const MethodInfo *method)
{
  UITouchPress_o *manager; // x0
  __int64 v4; // x9
  UnityEngine_Object_o *touchPress; // x20

  if ( (byte_438D18E & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&ServantSellConfirmListViewItem_TypeInfo);
    sub_B775C4(&ServantSellConfirmListViewManager_TypeInfo);
    byte_438D18E = 1;
  }
  manager = (UITouchPress_o *)this->fields.manager;
  if ( !manager )
    goto LABEL_14;
  v4 = *(&ServantSellConfirmListViewManager_TypeInfo->_2.bitflags2 + 1);
  if ( *(&manager->klass->_2.bitflags2 + 1) < (unsigned int)v4
    || (ServantSellConfirmListViewManager_c *)manager->klass->_2.typeHierarchy[v4 - 1] != ServantSellConfirmListViewManager_TypeInfo )
  {
    sub_B77990(manager);
    goto LABEL_14;
  }
  touchPress = (UnityEngine_Object_o *)this->fields.touchPress;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(touchPress, 0LL, 0LL) )
  {
    manager = this->fields.touchPress;
    if ( manager )
    {
      UITouchPress__PressReset(manager, 0LL);
      return 0;
    }
LABEL_14:
    sub_B7769C(manager, method);
  }
  return 0;
}


void __fastcall ServantSellConfirmListViewObject__OnClickSelect(
        ServantSellConfirmListViewObject_o *this,
        const MethodInfo *method)
{
  ServantSellConfirmListViewObject_o *v2; // x20
  Il2CppObject *linkItem; // x19
  ServantSellConfirmListViewItem_c *v4; // x1
  __int64 v5; // x9
  UnityEngine_Component_o *manager; // x22
  __int64 v7; // x10
  struct ListViewManager_o *v8; // x21
  __int64 *v9; // x8
  Il2CppObject *v10; // x2
  UnityEngine_Component_o *v11; // x0
  int monitor_high; // w8
  UserServantEntity_o *klass; // x0

  v2 = this;
  if ( (byte_438D192 & 1) == 0 )
  {
    sub_B775C4(&ServantSellConfirmListViewItem_TypeInfo);
    sub_B775C4(&ServantSellConfirmListViewManager_TypeInfo);
    sub_B775C4(&SoundManager_TypeInfo);
    sub_B775C4(&TutorialFlag_TypeInfo);
    sub_B775C4(&StringLiteral_10152/*"OnClickSelectListView"*/);
    this = (ServantSellConfirmListViewObject_o *)sub_B775C4(&StringLiteral_10148/*"OnClickLockModeItem"*/);
    byte_438D192 = 1;
  }
  linkItem = (Il2CppObject *)v2->fields.linkItem;
  if ( linkItem )
  {
    v4 = ServantSellConfirmListViewItem_TypeInfo;
    v5 = *(&ServantSellConfirmListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v5
      || (ServantSellConfirmListViewItem_c *)linkItem->klass->_2.typeHierarchy[v5 - 1] != ServantSellConfirmListViewItem_TypeInfo )
    {
      sub_B77990(v2->fields.linkItem);
      goto LABEL_33;
    }
    manager = (UnityEngine_Component_o *)v2->fields.manager;
    if ( manager
      && (v7 = *(&ServantSellConfirmListViewManager_TypeInfo->_2.bitflags2 + 1),
          *(&manager->klass->_2.bitflags2 + 1) >= (unsigned int)v7) )
    {
      if ( (ServantSellConfirmListViewManager_c *)manager->klass->_2.typeHierarchy[v7 - 1] == ServantSellConfirmListViewManager_TypeInfo )
        v8 = v2->fields.manager;
      else
        v8 = 0LL;
    }
    else
    {
      v8 = 0LL;
    }
    if ( BYTE4(linkItem[11].klass) )
    {
LABEL_14:
      this = (ServantSellConfirmListViewObject_o *)ServantSellConfirmListViewObject__GetItem(v2, (const MethodInfo *)v4);
      if ( manager )
      {
        v9 = &StringLiteral_10152/*"OnClickSelectListView"*/;
        v10 = (Il2CppObject *)this;
        v11 = manager;
LABEL_26:
        UnityEngine_Component__SendMessage(v11, (System_String_o *)*v9, v10, 0LL);
        return;
      }
LABEL_33:
      sub_B7769C(this, v4);
    }
    if ( !v8 )
      goto LABEL_33;
    monitor_high = HIDWORD(v8[1].monitor);
    if ( monitor_high == 2 || monitor_high == 1 )
    {
      klass = (UserServantEntity_o *)linkItem[7].klass;
      if ( !klass || !UserServantEntity__IsHeroine(klass, 0LL) )
        goto LABEL_25;
      if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TutorialFlag_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
      }
      if ( !TutorialFlag__Get_29515752(126, 0LL) )
      {
LABEL_25:
        v9 = &StringLiteral_10148/*"OnClickLockModeItem"*/;
        v11 = (UnityEngine_Component_o *)v8;
        v10 = linkItem;
        goto LABEL_26;
      }
    }
    else if ( !ServantSellConfirmListViewItem__get_IsCanNotSelect(
                 (ServantSellConfirmListViewItem_o *)v2->fields.linkItem,
                 (const MethodInfo *)ServantSellConfirmListViewItem_TypeInfo) )
    {
      goto LABEL_14;
    }
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(2, 0LL);
  }
}


void __fastcall ServantSellConfirmListViewObject__OnDestroy(
        ServantSellConfirmListViewObject_o *this,
        const MethodInfo *method)
{
  BattleServantConfConponent_o *p_dragObject; // x19
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_GameObject_o *dragObject; // t1
  UnityEngine_Object_o *klass; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_438D18B & 1) == 0 )
  {
    sub_B775C4(&NGUITools_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438D18B = 1;
  }
  dragObject = this->fields.dragObject;
  p_dragObject = (BattleServantConfConponent_o *)&this->fields.dragObject;
  v4 = (UnityEngine_Object_o *)dragObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(v4, 0LL, 0LL) )
  {
    klass = (UnityEngine_Object_o *)p_dragObject->klass;
    if ( (BYTE3(NGUITools_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    NGUITools__Destroy(klass, 0LL);
    p_dragObject->klass = 0LL;
    sub_B77560(p_dragObject, 0LL, v7, v8, v9, v10, v11, v12);
  }
}


void __fastcall ServantSellConfirmListViewObject__OnDragDropStart(
        ServantSellConfirmListViewObject_o *this,
        const MethodInfo *method)
{
  ServantSellConfirmListViewObject_o *v2; // x19
  struct ListViewManager_o *manager; // x8
  __int64 v4; // x10

  v2 = this;
  if ( (byte_438D194 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    this = (ServantSellConfirmListViewObject_o *)sub_B775C4(&ServantSellConfirmListViewManager_TypeInfo);
    byte_438D194 = 1;
  }
  manager = v2->fields.manager;
  if ( !manager
    || (v4 = *(&ServantSellConfirmListViewManager_TypeInfo->_2.bitflags2 + 1),
        *(&manager->klass->_2.bitflags2 + 1) < (unsigned int)v4)
    || (ServantSellConfirmListViewManager_c *)manager->klass->_2.typeHierarchy[v4 - 1] != ServantSellConfirmListViewManager_TypeInfo )
  {
    sub_B7769C(this, method);
  }
}


void __fastcall ServantSellConfirmListViewObject__OnLongPush(
        ServantSellConfirmListViewObject_o *this,
        const MethodInfo *method)
{
  void *linkItem; // x0
  ServantSellConfirmListViewItem_c *v4; // x1
  __int64 v5; // x9
  __int64 v6; // x9

  if ( (byte_438D193 & 1) == 0 )
  {
    sub_B775C4(&ServantSellConfirmListViewItem_TypeInfo);
    sub_B775C4(&ServantSellConfirmListViewManager_TypeInfo);
    byte_438D193 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    v4 = ServantSellConfirmListViewItem_TypeInfo;
    v5 = *(&ServantSellConfirmListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)linkItem + 300LL) >= (unsigned int)v5
      && *(ServantSellConfirmListViewItem_c **)(*(_QWORD *)(*(_QWORD *)linkItem + 200LL) + 8 * v5 - 8) == ServantSellConfirmListViewItem_TypeInfo )
    {
      linkItem = this->fields.manager;
      if ( !linkItem )
        goto LABEL_11;
      v6 = *(&ServantSellConfirmListViewManager_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)linkItem + 300LL) >= (unsigned int)v6
        && *(ServantSellConfirmListViewManager_c **)(*(_QWORD *)(*(_QWORD *)linkItem + 200LL) + 8 * v6 - 8) == ServantSellConfirmListViewManager_TypeInfo )
      {
        return;
      }
    }
    sub_B77990(linkItem);
LABEL_11:
    sub_B7769C(linkItem, v4);
  }
}


void __fastcall ServantSellConfirmListViewObject__OnLongRelease(
        ServantSellConfirmListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewManager_o *manager; // x0
  __int64 v4; // x10

  if ( (byte_438D195 & 1) == 0 )
  {
    sub_B775C4(&ServantSellConfirmListViewManager_TypeInfo);
    sub_B775C4(&StringLiteral_10205/*"OnLongPushListView"*/);
    sub_B775C4(&StringLiteral_3686/*"CancelDragEnd"*/);
    byte_438D195 = 1;
  }
  if ( this->fields.linkItem )
  {
    manager = this->fields.manager;
    if ( manager )
    {
      v4 = *(&ServantSellConfirmListViewManager_TypeInfo->_2.bitflags2 + 1);
      if ( *(&manager->klass->_2.bitflags2 + 1) >= (unsigned int)v4
        && (ServantSellConfirmListViewManager_c *)manager->klass->_2.typeHierarchy[v4 - 1] == ServantSellConfirmListViewManager_TypeInfo )
      {
        if ( HIDWORD(manager[1].monitor) )
          return;
        UnityEngine_Component__SendMessage_41419016(
          (UnityEngine_Component_o *)manager,
          (System_String_o *)StringLiteral_3686/*"CancelDragEnd"*/,
          0LL);
        manager = this->fields.manager;
        if ( manager )
        {
          UnityEngine_Component__SendMessage(
            (UnityEngine_Component_o *)manager,
            (System_String_o *)StringLiteral_10205/*"OnLongPushListView"*/,
            (Il2CppObject *)this->fields.linkItem,
            0LL);
          return;
        }
      }
    }
    sub_B7769C(manager, method);
  }
}


void __fastcall ServantSellConfirmListViewObject__SetInput(
        ServantSellConfirmListViewObject_o *this,
        bool isInput,
        const MethodInfo *method)
{
  UnityEngine_Object_o *itemDraw; // x20
  const MethodInfo *v6; // x3
  ServantSellConfirmListViewItemDraw_o *manager; // x0
  __int64 v8; // x9
  struct ListViewItem_o *linkItem; // x1
  __int64 v10; // x10
  ServantSellConfirmListViewObject_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_438D18D & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&ServantSellConfirmListViewItem_TypeInfo);
    sub_B775C4(&ServantSellConfirmListViewManager_TypeInfo);
    byte_438D18D = 1;
  }
  ListViewObject__SetInput((ListViewObject_o *)this, isInput, 0LL);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(itemDraw, 0LL, 0LL) )
  {
    manager = (ServantSellConfirmListViewItemDraw_o *)this->fields.manager;
    if ( manager
      && ((v8 = *(&ServantSellConfirmListViewManager_TypeInfo->_2.bitflags2 + 1),
           *(&manager->klass->_2.bitflags2 + 1) < (unsigned int)v8)
       || (ServantSellConfirmListViewManager_c *)manager->klass->_2.typeHierarchy[v8 - 1] != ServantSellConfirmListViewManager_TypeInfo) )
    {
      sub_B77990(manager);
    }
    else
    {
      linkItem = this->fields.linkItem;
      if ( !linkItem
        || (v10 = *(&ServantSellConfirmListViewItem_TypeInfo->_2.bitflags2 + 1),
            *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v10)
        && (ServantSellConfirmListViewItem_c *)linkItem->klass->_2.typeHierarchy[v10 - 1] == ServantSellConfirmListViewItem_TypeInfo )
      {
        if ( !manager || (manager = this->fields.itemDraw) == 0LL )
          sub_B7769C(manager, linkItem);
        ServantSellConfirmListViewItemDraw__SetInput(manager, (ServantSellConfirmListViewItem_o *)linkItem, 1, v6);
        return;
      }
    }
    sub_B77990(linkItem);
    ServantSellConfirmListViewObject__IsCanDrag(v11, v12);
  }
}


void __fastcall ServantSellConfirmListViewObject__SetItem(
        ServantSellConfirmListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  ListViewObject__SetItem_34301308((ListViewObject_o *)this, item, seed, 0LL);
  this->fields.state = 0;
}


void __fastcall ServantSellConfirmListViewObject__SetItem_28956564(
        ServantSellConfirmListViewObject_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ListViewObject__SetItem((ListViewObject_o *)this, item, 0LL);
  this->fields.state = 0;
}


void __fastcall ServantSellConfirmListViewObject__SetupDisp(
        ServantSellConfirmListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x21
  int32_t *manager; // x20
  __int64 v5; // x9
  __int64 v6; // x9
  bool v7; // w1
  UnityEngine_Object_o *itemDraw; // x22
  ServantSellConfirmListViewItemDraw_o *v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x5

  if ( (byte_438D191 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&ServantSellConfirmListViewItem_TypeInfo);
    sub_B775C4(&ServantSellConfirmListViewManager_TypeInfo);
    byte_438D191 = 1;
  }
  manager = (int32_t *)this->fields.manager;
  if ( manager )
  {
    v5 = *(&ServantSellConfirmListViewManager_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)manager + 300LL) < (unsigned int)v5
      || *(ServantSellConfirmListViewManager_c **)(*(_QWORD *)(*(_QWORD *)manager + 200LL) + 8 * v5 - 8) != ServantSellConfirmListViewManager_TypeInfo )
    {
      sub_B77990(this->fields.manager);
      goto LABEL_19;
    }
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
  {
    v7 = 0;
    goto LABEL_11;
  }
  v6 = *(&ServantSellConfirmListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v6
    || (ServantSellConfirmListViewItem_c *)linkItem->klass->_2.typeHierarchy[v6 - 1] != ServantSellConfirmListViewItem_TypeInfo )
  {
LABEL_19:
    sub_B77990(linkItem);
    goto LABEL_20;
  }
  v7 = this->fields.dispMode != 0;
LABEL_11:
  ListViewObject__SetVisible((ListViewObject_o *)this, v7, 0LL);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v9 = (ServantSellConfirmListViewItemDraw_o *)UnityEngine_Object__op_Equality(itemDraw, 0LL, 0LL);
  if ( ((unsigned __int8)v9 & 1) == 0 )
  {
    if ( manager )
    {
      v9 = this->fields.itemDraw;
      if ( v9 )
      {
        ServantSellConfirmListViewItemDraw__SetItem(
          v9,
          (ServantSellConfirmListViewItem_o *)linkItem,
          this->fields.dispMode,
          1,
          manager[83],
          v11);
        return;
      }
    }
LABEL_20:
    sub_B7769C(v9, v10);
  }
}


void __fastcall ServantSellConfirmListViewObject__add_onMoveEnd(
        ServantSellConfirmListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_onMoveEnd; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *onMoveEnd; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  ServantSellConfirmListViewObject_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_438D188 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    byte_438D188 = 1;
  }
  onMoveEnd = this->fields.onMoveEnd;
  p_onMoveEnd = &this->fields.onMoveEnd;
  v6 = (System_Delegate_o *)onMoveEnd;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_B6BFDC(p_onMoveEnd, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B77990(v8);
  ServantSellConfirmListViewObject__remove_onMoveEnd(v11, v12, v13);
}


void __fastcall ServantSellConfirmListViewObject__remove_onMoveEnd(
        ServantSellConfirmListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_onMoveEnd; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *onMoveEnd; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  ServantSellConfirmListViewObject_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_438D189 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    byte_438D189 = 1;
  }
  onMoveEnd = this->fields.onMoveEnd;
  p_onMoveEnd = &this->fields.onMoveEnd;
  v6 = (System_Delegate_o *)onMoveEnd;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_B6BFDC(p_onMoveEnd, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B77990(v8);
  ServantSellConfirmListViewObject__Awake(v11, v12);
}