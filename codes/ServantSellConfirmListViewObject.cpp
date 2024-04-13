void __fastcall ServantSellConfirmListViewObject___ctor(
        ServantSellConfirmListViewObject_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EAAB4 & 1) == 0 )
  {
    sub_B5D5C4(&ListViewObject_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EAAB4 = 1;
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
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  struct ServantSellConfirmListViewItemDraw_o *Component_srcLineSprite; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_42EAAA8 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_UnityEngine_GameObject_GetComponent_ServantSellConfirmListViewItemDraw___,
      (_DWORD)method,
      v2,
      v3);
    byte_42EAAA8 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_B5D69C(0LL, v5);
  Component_srcLineSprite = (struct ServantSellConfirmListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                             dispObject,
                                                                             (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_ServantSellConfirmListViewItemDraw___);
  this->fields.itemDraw = Component_srcLineSprite;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.itemDraw,
    (System_Int32_array **)Component_srcLineSprite,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
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
    sub_B5D560(p_onMoveEnd, 0LL, v2, v3, v4, v5, v6, v7);
    System_Action__Invoke(v9, 0LL);
  }
}


UnityEngine_GameObject_o *__fastcall ServantSellConfirmListViewObject__CreateDragObject(
        ServantSellConfirmListViewObject_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Object_o *DragObject; // x19
  srcLineSprite_o *Component_srcLineSprite; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x3
  ServantSellConfirmListViewObject_o *v12; // x20
  const MethodInfo *v13; // x1

  if ( (byte_42EAAAD & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_ServantSellConfirmListViewObject___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    byte_42EAAAD = 1;
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
                                      (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_ServantSellConfirmListViewObject___)) == 0LL )
    {
      sub_B5D69C(Component_srcLineSprite, v10);
    }
    v12 = (ServantSellConfirmListViewObject_o *)Component_srcLineSprite;
    ServantSellConfirmListViewObject__Init((ServantSellConfirmListViewObject_o *)Component_srcLineSprite, 2, 0LL, v11);
    ServantSellConfirmListViewObject__SetupDisp(v12, v13);
  }
  return (UnityEngine_GameObject_o *)DragObject;
}


ServantSellConfirmListViewItem_o *__fastcall ServantSellConfirmListViewObject__GetItem(
        ServantSellConfirmListViewObject_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  struct ListViewItem_o *linkItem; // x8
  __int64 v6; // x11

  if ( (byte_42EAAAA & 1) == 0 )
  {
    sub_B5D5C4(&ServantSellConfirmListViewItem_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EAAAA = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0LL;
  v6 = *(&ServantSellConfirmListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v6 )
    return 0LL;
  if ( (ServantSellConfirmListViewItem_c *)linkItem->klass->_2.typeHierarchy[v6 - 1] == ServantSellConfirmListViewItem_TypeInfo )
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
  unsigned int v5; // w21
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

  v5 = initMode;
  if ( (byte_42EAAAE & 1) == 0 )
  {
    sub_B5D5C4(&ServantSellConfirmListViewItem_TypeInfo, initMode, (_DWORD)onMoveEnd, method);
    byte_42EAAAE = 1;
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
      sub_B5D990(linkItem);
      ServantSellConfirmListViewManager__SetMode(v22, v23, v24, v25);
      return;
    }
  }
  if ( !linkItem )
    v5 = 0;
  ListViewObject__SetVisible((ListViewObject_o *)this, v5 != 0, 0LL);
  ((void (__fastcall *)(ServantSellConfirmListViewObject_o *, bool, Il2CppMethodPointer))this->klass->vtable._9_SetInput.method)(
    this,
    v5 == 3,
    this->klass->vtable._10_Invalidation.methodPtr);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0LL),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_B5D69C(transform, v12);
  }
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0LL);
  this->fields.onMoveEnd = onMoveEnd;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.onMoveEnd,
    (System_Int32_array **)onMoveEnd,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  if ( v5 == 1 )
  {
    v20 = 1;
    goto LABEL_16;
  }
  if ( v5 == 3 )
  {
    v20 = 2;
    this->fields.dispMode = 2;
    goto LABEL_19;
  }
  if ( v5 != 2 )
  {
    v20 = 0;
    this->fields.dispMode = 0;
    if ( v5 < 3 )
      goto LABEL_17;
LABEL_19:
    if ( v5 == 3 )
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  UITouchPress_o *manager; // x0
  __int64 v12; // x9
  UnityEngine_Object_o *touchPress; // x20

  if ( (byte_42EAAAC & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&ServantSellConfirmListViewItem_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&ServantSellConfirmListViewManager_TypeInfo, v8, v9, v10);
    byte_42EAAAC = 1;
  }
  manager = (UITouchPress_o *)this->fields.manager;
  if ( !manager )
    goto LABEL_14;
  v12 = *(&ServantSellConfirmListViewManager_TypeInfo->_2.bitflags2 + 1);
  if ( *(&manager->klass->_2.bitflags2 + 1) < (unsigned int)v12
    || (ServantSellConfirmListViewManager_c *)manager->klass->_2.typeHierarchy[v12 - 1] != ServantSellConfirmListViewManager_TypeInfo )
  {
    sub_B5D990(manager);
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
    sub_B5D69C(manager, method);
  }
  return 0;
}


void __fastcall ServantSellConfirmListViewObject__OnClickSelect(
        ServantSellConfirmListViewObject_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  ServantSellConfirmListViewObject_o *v4; // x20
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  Il2CppObject *linkItem; // x19
  ServantSellConfirmListViewItem_c *v21; // x1
  __int64 v22; // x9
  UnityEngine_Component_o *manager; // x22
  __int64 v24; // x10
  struct ListViewManager_o *v25; // x21
  __int64 *v26; // x8
  Il2CppObject *v27; // x2
  UnityEngine_Component_o *v28; // x0
  int monitor_high; // w8
  UserServantEntity_o *klass; // x0

  v4 = this;
  if ( (byte_42EAAB0 & 1) == 0 )
  {
    sub_B5D5C4(&ServantSellConfirmListViewItem_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&ServantSellConfirmListViewManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&SoundManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&TutorialFlag_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_10076/*"OnClickSelectListView"*/, v14, v15, v16);
    this = (ServantSellConfirmListViewObject_o *)sub_B5D5C4(&StringLiteral_10072/*"OnClickLockModeItem"*/, v17, v18, v19);
    byte_42EAAB0 = 1;
  }
  linkItem = (Il2CppObject *)v4->fields.linkItem;
  if ( linkItem )
  {
    v21 = ServantSellConfirmListViewItem_TypeInfo;
    v22 = *(&ServantSellConfirmListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v22
      || (ServantSellConfirmListViewItem_c *)linkItem->klass->_2.typeHierarchy[v22 - 1] != ServantSellConfirmListViewItem_TypeInfo )
    {
      sub_B5D990(v4->fields.linkItem);
      goto LABEL_33;
    }
    manager = (UnityEngine_Component_o *)v4->fields.manager;
    if ( manager
      && (v24 = *(&ServantSellConfirmListViewManager_TypeInfo->_2.bitflags2 + 1),
          *(&manager->klass->_2.bitflags2 + 1) >= (unsigned int)v24) )
    {
      if ( (ServantSellConfirmListViewManager_c *)manager->klass->_2.typeHierarchy[v24 - 1] == ServantSellConfirmListViewManager_TypeInfo )
        v25 = v4->fields.manager;
      else
        v25 = 0LL;
    }
    else
    {
      v25 = 0LL;
    }
    if ( BYTE4(linkItem[11].klass) )
    {
LABEL_14:
      this = (ServantSellConfirmListViewObject_o *)ServantSellConfirmListViewObject__GetItem(
                                                     v4,
                                                     (const MethodInfo *)v21);
      if ( manager )
      {
        v26 = &StringLiteral_10076/*"OnClickSelectListView"*/;
        v27 = (Il2CppObject *)this;
        v28 = manager;
LABEL_26:
        UnityEngine_Component__SendMessage(v28, (System_String_o *)*v26, v27, 0LL);
        return;
      }
LABEL_33:
      sub_B5D69C(this, v21);
    }
    if ( !v25 )
      goto LABEL_33;
    monitor_high = HIDWORD(v25[1].monitor);
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
      if ( !TutorialFlag__Get_29295864(126, 0LL) )
      {
LABEL_25:
        v26 = &StringLiteral_10072/*"OnClickLockModeItem"*/;
        v28 = (UnityEngine_Component_o *)v25;
        v27 = linkItem;
        goto LABEL_26;
      }
    }
    else if ( !ServantSellConfirmListViewItem__get_IsCanNotSelect(
                 (ServantSellConfirmListViewItem_o *)v4->fields.linkItem,
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  BattleServantConfConponent_o *p_dragObject; // x19
  UnityEngine_Object_o *v9; // x20
  struct UnityEngine_GameObject_o *dragObject; // t1
  UnityEngine_Object_o *klass; // x20
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  if ( (byte_42EAAA9 & 1) == 0 )
  {
    sub_B5D5C4(&NGUITools_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    byte_42EAAA9 = 1;
  }
  dragObject = this->fields.dragObject;
  p_dragObject = (BattleServantConfConponent_o *)&this->fields.dragObject;
  v9 = (UnityEngine_Object_o *)dragObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(v9, 0LL, 0LL) )
  {
    klass = (UnityEngine_Object_o *)p_dragObject->klass;
    if ( (BYTE3(NGUITools_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    NGUITools__Destroy(klass, 0LL);
    p_dragObject->klass = 0LL;
    sub_B5D560(p_dragObject, 0LL, v12, v13, v14, v15, v16, v17);
  }
}


void __fastcall ServantSellConfirmListViewObject__OnDragDropStart(
        ServantSellConfirmListViewObject_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  ServantSellConfirmListViewObject_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct ListViewManager_o *manager; // x8
  __int64 v9; // x10

  v4 = this;
  if ( (byte_42EAAB2 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    this = (ServantSellConfirmListViewObject_o *)sub_B5D5C4(&ServantSellConfirmListViewManager_TypeInfo, v5, v6, v7);
    byte_42EAAB2 = 1;
  }
  manager = v4->fields.manager;
  if ( !manager
    || (v9 = *(&ServantSellConfirmListViewManager_TypeInfo->_2.bitflags2 + 1),
        *(&manager->klass->_2.bitflags2 + 1) < (unsigned int)v9)
    || (ServantSellConfirmListViewManager_c *)manager->klass->_2.typeHierarchy[v9 - 1] != ServantSellConfirmListViewManager_TypeInfo )
  {
    sub_B5D69C(this, method);
  }
}


void __fastcall ServantSellConfirmListViewObject__OnLongPush(
        ServantSellConfirmListViewObject_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  void *linkItem; // x0
  ServantSellConfirmListViewItem_c *v9; // x1
  __int64 v10; // x9
  __int64 v11; // x9

  if ( (byte_42EAAB1 & 1) == 0 )
  {
    sub_B5D5C4(&ServantSellConfirmListViewItem_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&ServantSellConfirmListViewManager_TypeInfo, v5, v6, v7);
    byte_42EAAB1 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    v9 = ServantSellConfirmListViewItem_TypeInfo;
    v10 = *(&ServantSellConfirmListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)linkItem + 300LL) >= (unsigned int)v10
      && *(ServantSellConfirmListViewItem_c **)(*(_QWORD *)(*(_QWORD *)linkItem + 200LL) + 8 * v10 - 8) == ServantSellConfirmListViewItem_TypeInfo )
    {
      linkItem = this->fields.manager;
      if ( !linkItem )
        goto LABEL_11;
      v11 = *(&ServantSellConfirmListViewManager_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)linkItem + 300LL) >= (unsigned int)v11
        && *(ServantSellConfirmListViewManager_c **)(*(_QWORD *)(*(_QWORD *)linkItem + 200LL) + 8 * v11 - 8) == ServantSellConfirmListViewManager_TypeInfo )
      {
        return;
      }
    }
    sub_B5D990(linkItem);
LABEL_11:
    sub_B5D69C(linkItem, v9);
  }
}


void __fastcall ServantSellConfirmListViewObject__OnLongRelease(
        ServantSellConfirmListViewObject_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  struct ListViewManager_o *manager; // x0
  __int64 v12; // x10

  if ( (byte_42EAAB3 & 1) == 0 )
  {
    sub_B5D5C4(&ServantSellConfirmListViewManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_10129/*"OnLongPushListView"*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_3626/*"CancelDragEnd"*/, v8, v9, v10);
    byte_42EAAB3 = 1;
  }
  if ( this->fields.linkItem )
  {
    manager = this->fields.manager;
    if ( manager )
    {
      v12 = *(&ServantSellConfirmListViewManager_TypeInfo->_2.bitflags2 + 1);
      if ( *(&manager->klass->_2.bitflags2 + 1) >= (unsigned int)v12
        && (ServantSellConfirmListViewManager_c *)manager->klass->_2.typeHierarchy[v12 - 1] == ServantSellConfirmListViewManager_TypeInfo )
      {
        if ( HIDWORD(manager[1].monitor) )
          return;
        UnityEngine_Component__SendMessage_41576000(
          (UnityEngine_Component_o *)manager,
          (System_String_o *)StringLiteral_3626/*"CancelDragEnd"*/,
          0LL);
        manager = this->fields.manager;
        if ( manager )
        {
          UnityEngine_Component__SendMessage(
            (UnityEngine_Component_o *)manager,
            (System_String_o *)StringLiteral_10129/*"OnLongPushListView"*/,
            (Il2CppObject *)this->fields.linkItem,
            0LL);
          return;
        }
      }
    }
    sub_B5D69C(manager, method);
  }
}


void __fastcall ServantSellConfirmListViewObject__SetInput(
        ServantSellConfirmListViewObject_o *this,
        bool isInput,
        const MethodInfo *method)
{
  __int64 v3; // x3
  char v6; // w1
  int v7; // w2
  __int64 v8; // x3
  char v9; // w1
  int v10; // w2
  __int64 v11; // x3
  UnityEngine_Object_o *itemDraw; // x20
  const MethodInfo *v13; // x3
  ServantSellConfirmListViewItemDraw_o *manager; // x0
  __int64 v15; // x9
  struct ListViewItem_o *linkItem; // x1
  __int64 v17; // x10
  ServantSellConfirmListViewObject_o *v18; // x0
  const MethodInfo *v19; // x1

  if ( (byte_42EAAAB & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, isInput, (_DWORD)method, v3);
    sub_B5D5C4(&ServantSellConfirmListViewItem_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&ServantSellConfirmListViewManager_TypeInfo, v9, v10, v11);
    byte_42EAAAB = 1;
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
      && ((v15 = *(&ServantSellConfirmListViewManager_TypeInfo->_2.bitflags2 + 1),
           *(&manager->klass->_2.bitflags2 + 1) < (unsigned int)v15)
       || (ServantSellConfirmListViewManager_c *)manager->klass->_2.typeHierarchy[v15 - 1] != ServantSellConfirmListViewManager_TypeInfo) )
    {
      sub_B5D990(manager);
    }
    else
    {
      linkItem = this->fields.linkItem;
      if ( !linkItem
        || (v17 = *(&ServantSellConfirmListViewItem_TypeInfo->_2.bitflags2 + 1),
            *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v17)
        && (ServantSellConfirmListViewItem_c *)linkItem->klass->_2.typeHierarchy[v17 - 1] == ServantSellConfirmListViewItem_TypeInfo )
      {
        if ( !manager || (manager = this->fields.itemDraw) == 0LL )
          sub_B5D69C(manager, linkItem);
        ServantSellConfirmListViewItemDraw__SetInput(manager, (ServantSellConfirmListViewItem_o *)linkItem, 1, v13);
        return;
      }
    }
    sub_B5D990(linkItem);
    ServantSellConfirmListViewObject__IsCanDrag(v18, v19);
  }
}


void __fastcall ServantSellConfirmListViewObject__SetItem(
        ServantSellConfirmListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  ListViewObject__SetItem_34021840((ListViewObject_o *)this, item, seed, 0LL);
  this->fields.state = 0;
}


void __fastcall ServantSellConfirmListViewObject__SetItem_29064148(
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
  int v2; // w2
  __int64 v3; // x3
  struct ListViewItem_o *linkItem; // x21
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int32_t *manager; // x20
  __int64 v13; // x9
  __int64 v14; // x9
  bool v15; // w1
  UnityEngine_Object_o *itemDraw; // x22
  ServantSellConfirmListViewItemDraw_o *v17; // x0
  __int64 v18; // x1
  const MethodInfo *v19; // x5

  if ( (byte_42EAAAF & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&ServantSellConfirmListViewItem_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&ServantSellConfirmListViewManager_TypeInfo, v9, v10, v11);
    byte_42EAAAF = 1;
  }
  manager = (int32_t *)this->fields.manager;
  if ( manager )
  {
    v13 = *(&ServantSellConfirmListViewManager_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)manager + 300LL) < (unsigned int)v13
      || *(ServantSellConfirmListViewManager_c **)(*(_QWORD *)(*(_QWORD *)manager + 200LL) + 8 * v13 - 8) != ServantSellConfirmListViewManager_TypeInfo )
    {
      sub_B5D990(this->fields.manager);
      goto LABEL_19;
    }
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
  {
    v15 = 0;
    goto LABEL_11;
  }
  v14 = *(&ServantSellConfirmListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v14
    || (ServantSellConfirmListViewItem_c *)linkItem->klass->_2.typeHierarchy[v14 - 1] != ServantSellConfirmListViewItem_TypeInfo )
  {
LABEL_19:
    sub_B5D990(linkItem);
    goto LABEL_20;
  }
  v15 = this->fields.dispMode != 0;
LABEL_11:
  ListViewObject__SetVisible((ListViewObject_o *)this, v15, 0LL);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v17 = (ServantSellConfirmListViewItemDraw_o *)UnityEngine_Object__op_Equality(itemDraw, 0LL, 0LL);
  if ( ((unsigned __int8)v17 & 1) == 0 )
  {
    if ( manager )
    {
      v17 = this->fields.itemDraw;
      if ( v17 )
      {
        ServantSellConfirmListViewItemDraw__SetItem(
          v17,
          (ServantSellConfirmListViewItem_o *)linkItem,
          this->fields.dispMode,
          1,
          manager[83],
          v19);
        return;
      }
    }
LABEL_20:
    sub_B5D69C(v17, v18);
  }
}


void __fastcall ServantSellConfirmListViewObject__add_onMoveEnd(
        ServantSellConfirmListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct System_Action_o **p_onMoveEnd; // x20
  System_Delegate_o *v7; // x21
  struct System_Action_o *onMoveEnd; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  ServantSellConfirmListViewObject_o *v12; // x0
  System_Action_o *v13; // x1
  const MethodInfo *v14; // x2

  if ( (byte_42EAAA6 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42EAAA6 = 1;
  }
  onMoveEnd = this->fields.onMoveEnd;
  p_onMoveEnd = &this->fields.onMoveEnd;
  v7 = (System_Delegate_o *)onMoveEnd;
  while ( 1 )
  {
    v9 = System_Delegate__Combine(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (System_Action_c *)v9->klass != System_Action_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_onMoveEnd, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  sub_B5D990(v9);
  ServantSellConfirmListViewObject__remove_onMoveEnd(v12, v13, v14);
}


void __fastcall ServantSellConfirmListViewObject__remove_onMoveEnd(
        ServantSellConfirmListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct System_Action_o **p_onMoveEnd; // x20
  System_Delegate_o *v7; // x21
  struct System_Action_o *onMoveEnd; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  ServantSellConfirmListViewObject_o *v12; // x0
  const MethodInfo *v13; // x1

  if ( (byte_42EAAA7 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42EAAA7 = 1;
  }
  onMoveEnd = this->fields.onMoveEnd;
  p_onMoveEnd = &this->fields.onMoveEnd;
  v7 = (System_Delegate_o *)onMoveEnd;
  while ( 1 )
  {
    v9 = System_Delegate__Remove(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (System_Action_c *)v9->klass != System_Action_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_onMoveEnd, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  sub_B5D990(v9);
  ServantSellConfirmListViewObject__Awake(v12, v13);
}