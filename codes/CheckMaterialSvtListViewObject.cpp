void __fastcall CheckMaterialSvtListViewObject___ctor(CheckMaterialSvtListViewObject_o *this, const MethodInfo *method)
{
  if ( (byte_438C3C1 & 1) == 0 )
  {
    sub_B775C4(&ListViewObject_TypeInfo);
    byte_438C3C1 = 1;
  }
  if ( (BYTE3(ListViewObject_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ListViewObject_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  }
  ListViewObject___ctor((ListViewObject_o *)this, 0LL);
}


void __fastcall CheckMaterialSvtListViewObject__Awake(CheckMaterialSvtListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  struct CheckMaterialSvtListViewItemDraw_o *Component_srcLineSprite; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_438C3B5 & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_CheckMaterialSvtListViewItemDraw___);
    byte_438C3B5 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_B7769C(0LL, v3);
  Component_srcLineSprite = (struct CheckMaterialSvtListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                           dispObject,
                                                                           (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_CheckMaterialSvtListViewItemDraw___);
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


void __fastcall CheckMaterialSvtListViewObject__CallOnMoveEnd(
        CheckMaterialSvtListViewObject_o *this,
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


UnityEngine_GameObject_o *__fastcall CheckMaterialSvtListViewObject__CreateDragObject(
        CheckMaterialSvtListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *DragObject; // x19
  srcLineSprite_o *Component_srcLineSprite; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x3
  CheckMaterialSvtListViewObject_o *v7; // x20
  const MethodInfo *v8; // x1

  if ( (byte_438C3BA & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_CheckMaterialSvtListViewObject___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438C3BA = 1;
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
                                      (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_CheckMaterialSvtListViewObject___)) == 0LL )
    {
      sub_B7769C(Component_srcLineSprite, v5);
    }
    v7 = (CheckMaterialSvtListViewObject_o *)Component_srcLineSprite;
    CheckMaterialSvtListViewObject__Init((CheckMaterialSvtListViewObject_o *)Component_srcLineSprite, 2, 0LL, v6);
    CheckMaterialSvtListViewObject__SetupDisp(v7, v8);
  }
  return (UnityEngine_GameObject_o *)DragObject;
}


CheckMaterialSvtListViewItem_o *__fastcall CheckMaterialSvtListViewObject__GetItem(
        CheckMaterialSvtListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 v4; // x11

  if ( (byte_438C3B7 & 1) == 0 )
  {
    sub_B775C4(&CheckMaterialSvtListViewItem_TypeInfo);
    byte_438C3B7 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0LL;
  v4 = *(&CheckMaterialSvtListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v4 )
    return 0LL;
  if ( (CheckMaterialSvtListViewItem_c *)linkItem->klass->_2.typeHierarchy[v4 - 1] == CheckMaterialSvtListViewItem_TypeInfo )
    return (CheckMaterialSvtListViewItem_o *)this->fields.linkItem;
  return 0LL;
}


int32_t __fastcall CheckMaterialSvtListViewObject__GetState(
        CheckMaterialSvtListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  if ( (unsigned int)initMode < 3 )
    return 1;
  if ( initMode == 3 )
    return 3;
  return 0;
}


void __fastcall CheckMaterialSvtListViewObject__Init(
        CheckMaterialSvtListViewObject_o *this,
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
  CheckMaterialSvtListViewManager_o *v22; // x0
  int32_t v23; // w1
  const MethodInfo *v24; // x2

  if ( (byte_438C3BB & 1) == 0 )
  {
    sub_B775C4(&CheckMaterialSvtListViewItem_TypeInfo);
    byte_438C3BB = 1;
  }
  linkItem = this->fields.linkItem;
  dispMode = this->fields.dispMode;
  state = this->fields.state;
  if ( linkItem )
  {
    v10 = *(&CheckMaterialSvtListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v10
      || (CheckMaterialSvtListViewItem_c *)linkItem->klass->_2.typeHierarchy[v10 - 1] != CheckMaterialSvtListViewItem_TypeInfo )
    {
      v22 = (CheckMaterialSvtListViewManager_o *)sub_B77990(linkItem);
      CheckMaterialSvtListViewManager__SetMode_27304572(v22, v23, v24);
      return;
    }
  }
  if ( !linkItem )
    initMode = 0;
  ListViewObject__SetVisible((ListViewObject_o *)this, initMode != 0, 0LL);
  ((void (__fastcall *)(CheckMaterialSvtListViewObject_o *, bool, Il2CppMethodPointer))this->klass->vtable._9_SetInput.method)(
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
    CheckMaterialSvtListViewObject__SetupDisp(this, v19);
  CheckMaterialSvtListViewObject__CallOnMoveEnd(this, v19);
}


void __fastcall CheckMaterialSvtListViewObject__InitItem(
        CheckMaterialSvtListViewObject_o *this,
        const MethodInfo *method)
{
  this->fields.state = 0;
}


bool __fastcall CheckMaterialSvtListViewObject__IsCanDrag(
        CheckMaterialSvtListViewObject_o *this,
        const MethodInfo *method)
{
  UITouchPress_o *manager; // x0
  __int64 v4; // x9
  UnityEngine_Object_o *touchPress; // x20

  if ( (byte_438C3B9 & 1) == 0 )
  {
    sub_B775C4(&CheckMaterialSvtListViewItem_TypeInfo);
    sub_B775C4(&CheckMaterialSvtListViewManager_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438C3B9 = 1;
  }
  manager = (UITouchPress_o *)this->fields.manager;
  if ( !manager )
    goto LABEL_14;
  v4 = *(&CheckMaterialSvtListViewManager_TypeInfo->_2.bitflags2 + 1);
  if ( *(&manager->klass->_2.bitflags2 + 1) < (unsigned int)v4
    || (CheckMaterialSvtListViewManager_c *)manager->klass->_2.typeHierarchy[v4 - 1] != CheckMaterialSvtListViewManager_TypeInfo )
  {
    manager = (UITouchPress_o *)sub_B77990(manager);
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


void __fastcall CheckMaterialSvtListViewObject__OnClickSelect(
        CheckMaterialSvtListViewObject_o *this,
        const MethodInfo *method)
{
  CheckMaterialSvtListViewObject_o *v2; // x19
  UnityEngine_Component_o *manager; // x20
  __int64 v4; // x10
  Il2CppObject *v5; // x2

  v2 = this;
  if ( (byte_438C3BD & 1) == 0 )
  {
    sub_B775C4(&CheckMaterialSvtListViewManager_TypeInfo);
    this = (CheckMaterialSvtListViewObject_o *)sub_B775C4(&StringLiteral_10152/*"OnClickSelectListView"*/);
    byte_438C3BD = 1;
  }
  if ( v2->fields.linkItem )
  {
    manager = (UnityEngine_Component_o *)v2->fields.manager;
    if ( !manager
      || (v4 = *(&CheckMaterialSvtListViewManager_TypeInfo->_2.bitflags2 + 1),
          *(&manager->klass->_2.bitflags2 + 1) < (unsigned int)v4)
      || (CheckMaterialSvtListViewManager_c *)manager->klass->_2.typeHierarchy[v4 - 1] != CheckMaterialSvtListViewManager_TypeInfo )
    {
      sub_B7769C(this, method);
    }
    v5 = (Il2CppObject *)CheckMaterialSvtListViewObject__GetItem(v2, method);
    UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_10152/*"OnClickSelectListView"*/, v5, 0LL);
  }
}


void __fastcall CheckMaterialSvtListViewObject__OnDestroy(
        CheckMaterialSvtListViewObject_o *this,
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

  if ( (byte_438C3B6 & 1) == 0 )
  {
    sub_B775C4(&NGUITools_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438C3B6 = 1;
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


void __fastcall CheckMaterialSvtListViewObject__OnDragDropStart(
        CheckMaterialSvtListViewObject_o *this,
        const MethodInfo *method)
{
  CheckMaterialSvtListViewObject_o *v2; // x19
  struct ListViewManager_o *manager; // x8
  __int64 v4; // x10

  v2 = this;
  if ( (byte_438C3BF & 1) == 0 )
  {
    sub_B775C4(&CheckMaterialSvtListViewManager_TypeInfo);
    this = (CheckMaterialSvtListViewObject_o *)sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438C3BF = 1;
  }
  manager = v2->fields.manager;
  if ( !manager
    || (v4 = *(&CheckMaterialSvtListViewManager_TypeInfo->_2.bitflags2 + 1),
        *(&manager->klass->_2.bitflags2 + 1) < (unsigned int)v4)
    || (CheckMaterialSvtListViewManager_c *)manager->klass->_2.typeHierarchy[v4 - 1] != CheckMaterialSvtListViewManager_TypeInfo )
  {
    sub_B7769C(this, method);
  }
}


void __fastcall CheckMaterialSvtListViewObject__OnLongPush(
        CheckMaterialSvtListViewObject_o *this,
        const MethodInfo *method)
{
  void *linkItem; // x0
  CheckMaterialSvtListViewItem_c *v4; // x1
  __int64 v5; // x9
  __int64 v6; // x9

  if ( (byte_438C3BE & 1) == 0 )
  {
    sub_B775C4(&CheckMaterialSvtListViewItem_TypeInfo);
    sub_B775C4(&CheckMaterialSvtListViewManager_TypeInfo);
    byte_438C3BE = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    v4 = CheckMaterialSvtListViewItem_TypeInfo;
    v5 = *(&CheckMaterialSvtListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)linkItem + 300LL) >= (unsigned int)v5
      && *(CheckMaterialSvtListViewItem_c **)(*(_QWORD *)(*(_QWORD *)linkItem + 200LL) + 8 * v5 - 8) == CheckMaterialSvtListViewItem_TypeInfo )
    {
      linkItem = this->fields.manager;
      if ( !linkItem )
        goto LABEL_11;
      v6 = *(&CheckMaterialSvtListViewManager_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)linkItem + 300LL) >= (unsigned int)v6
        && *(CheckMaterialSvtListViewManager_c **)(*(_QWORD *)(*(_QWORD *)linkItem + 200LL) + 8 * v6 - 8) == CheckMaterialSvtListViewManager_TypeInfo )
      {
        return;
      }
    }
    linkItem = (void *)sub_B77990(linkItem);
LABEL_11:
    sub_B7769C(linkItem, v4);
  }
}


void __fastcall CheckMaterialSvtListViewObject__OnLongRelease(
        CheckMaterialSvtListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewManager_o *manager; // x0
  __int64 v4; // x10

  if ( (byte_438C3C0 & 1) == 0 )
  {
    sub_B775C4(&CheckMaterialSvtListViewManager_TypeInfo);
    sub_B775C4(&StringLiteral_10205/*"OnLongPushListView"*/);
    sub_B775C4(&StringLiteral_3686/*"CancelDragEnd"*/);
    byte_438C3C0 = 1;
  }
  if ( this->fields.linkItem )
  {
    manager = this->fields.manager;
    if ( manager )
    {
      v4 = *(&CheckMaterialSvtListViewManager_TypeInfo->_2.bitflags2 + 1);
      if ( *(&manager->klass->_2.bitflags2 + 1) >= (unsigned int)v4
        && (CheckMaterialSvtListViewManager_c *)manager->klass->_2.typeHierarchy[v4 - 1] == CheckMaterialSvtListViewManager_TypeInfo )
      {
        if ( HIDWORD(manager[1].klass) )
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


void __fastcall CheckMaterialSvtListViewObject__SetInput(
        CheckMaterialSvtListViewObject_o *this,
        bool isInput,
        const MethodInfo *method)
{
  UnityEngine_Object_o *itemDraw; // x20
  const MethodInfo *v6; // x3
  CheckMaterialSvtListViewItemDraw_o *manager; // x0
  __int64 v8; // x9
  struct ListViewItem_o *linkItem; // x1
  __int64 v10; // x10
  CheckMaterialSvtListViewObject_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_438C3B8 & 1) == 0 )
  {
    sub_B775C4(&CheckMaterialSvtListViewItem_TypeInfo);
    sub_B775C4(&CheckMaterialSvtListViewManager_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438C3B8 = 1;
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
    manager = (CheckMaterialSvtListViewItemDraw_o *)this->fields.manager;
    if ( manager
      && ((v8 = *(&CheckMaterialSvtListViewManager_TypeInfo->_2.bitflags2 + 1),
           *(&manager->klass->_2.bitflags2 + 1) < (unsigned int)v8)
       || (CheckMaterialSvtListViewManager_c *)manager->klass->_2.typeHierarchy[v8 - 1] != CheckMaterialSvtListViewManager_TypeInfo) )
    {
      sub_B77990(manager);
    }
    else
    {
      linkItem = this->fields.linkItem;
      if ( !linkItem
        || (v10 = *(&CheckMaterialSvtListViewItem_TypeInfo->_2.bitflags2 + 1),
            *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v10)
        && (CheckMaterialSvtListViewItem_c *)linkItem->klass->_2.typeHierarchy[v10 - 1] == CheckMaterialSvtListViewItem_TypeInfo )
      {
        if ( !manager || (manager = this->fields.itemDraw) == 0LL )
          sub_B7769C(manager, linkItem);
        CheckMaterialSvtListViewItemDraw__SetInput(manager, (CheckMaterialSvtListViewItem_o *)linkItem, 1, v6);
        return;
      }
    }
    v11 = (CheckMaterialSvtListViewObject_o *)sub_B77990(linkItem);
    CheckMaterialSvtListViewObject__IsCanDrag(v11, v12);
  }
}


void __fastcall CheckMaterialSvtListViewObject__SetItem(
        CheckMaterialSvtListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  ListViewObject__SetItem_34301308((ListViewObject_o *)this, item, seed, 0LL);
  this->fields.state = 0;
}


void __fastcall CheckMaterialSvtListViewObject__SetItem_27306632(
        CheckMaterialSvtListViewObject_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ListViewObject__SetItem((ListViewObject_o *)this, item, 0LL);
  this->fields.state = 0;
}


void __fastcall CheckMaterialSvtListViewObject__SetupDisp(
        CheckMaterialSvtListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x21
  int32_t *manager; // x20
  __int64 v5; // x9
  __int64 v6; // x9
  bool v7; // w1
  UnityEngine_Object_o *itemDraw; // x22
  CheckMaterialSvtListViewItemDraw_o *v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x5

  if ( (byte_438C3BC & 1) == 0 )
  {
    sub_B775C4(&CheckMaterialSvtListViewItem_TypeInfo);
    sub_B775C4(&CheckMaterialSvtListViewManager_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438C3BC = 1;
  }
  manager = (int32_t *)this->fields.manager;
  if ( manager )
  {
    v5 = *(&CheckMaterialSvtListViewManager_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)manager + 300LL) < (unsigned int)v5
      || *(CheckMaterialSvtListViewManager_c **)(*(_QWORD *)(*(_QWORD *)manager + 200LL) + 8 * v5 - 8) != CheckMaterialSvtListViewManager_TypeInfo )
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
  v6 = *(&CheckMaterialSvtListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v6
    || (CheckMaterialSvtListViewItem_c *)linkItem->klass->_2.typeHierarchy[v6 - 1] != CheckMaterialSvtListViewItem_TypeInfo )
  {
LABEL_19:
    v9 = (CheckMaterialSvtListViewItemDraw_o *)sub_B77990(linkItem);
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
  v9 = (CheckMaterialSvtListViewItemDraw_o *)UnityEngine_Object__op_Equality(itemDraw, 0LL, 0LL);
  if ( ((unsigned __int8)v9 & 1) == 0 )
  {
    if ( manager )
    {
      v9 = this->fields.itemDraw;
      if ( v9 )
      {
        CheckMaterialSvtListViewItemDraw__SetItem(
          v9,
          (CheckMaterialSvtListViewItem_o *)linkItem,
          this->fields.dispMode,
          1,
          manager[81],
          v11);
        return;
      }
    }
LABEL_20:
    sub_B7769C(v9, v10);
  }
}


void __fastcall CheckMaterialSvtListViewObject__add_onMoveEnd(
        CheckMaterialSvtListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_onMoveEnd; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *onMoveEnd; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  CheckMaterialSvtListViewObject_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_438C3B3 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    byte_438C3B3 = 1;
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
  v11 = (CheckMaterialSvtListViewObject_o *)sub_B77990(v8);
  CheckMaterialSvtListViewObject__remove_onMoveEnd(v11, v12, v13);
}


void __fastcall CheckMaterialSvtListViewObject__remove_onMoveEnd(
        CheckMaterialSvtListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_onMoveEnd; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *onMoveEnd; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  CheckMaterialSvtListViewObject_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_438C3B4 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    byte_438C3B4 = 1;
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
  v11 = (CheckMaterialSvtListViewObject_o *)sub_B77990(v8);
  CheckMaterialSvtListViewObject__Awake(v11, v12);
}