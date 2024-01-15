void __fastcall ServantOperationListViewObject___ctor(ServantOperationListViewObject_o *this, const MethodInfo *method)
{
  if ( (byte_40FD754 & 1) == 0 )
  {
    sub_B16FFC(&ListViewObject_TypeInfo, method);
    byte_40FD754 = 1;
  }
  if ( (BYTE3(ListViewObject_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ListViewObject_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  }
  ListViewObject___ctor((ListViewObject_o *)this, 0LL);
}


void __fastcall ServantOperationListViewObject__Awake(ServantOperationListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  struct ServantOperationListViewItemDraw_o *Component_srcLineSprite; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  WebViewObject_o *Component_WebViewObject; // x1
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  if ( (byte_40FD748 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UIDragDropListViewItem___, method);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_ServantOperationListViewItemDraw___, v3);
    byte_40FD748 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_B170D4();
  Component_srcLineSprite = (struct ServantOperationListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                           dispObject,
                                                                           (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_ServantOperationListViewItemDraw___);
  this->fields.itemDraw = Component_srcLineSprite;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.itemDraw,
    (System_Int32_array **)Component_srcLineSprite,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              (UnityEngine_Component_o *)this,
                              (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UIDragDropListViewItem___);
  this->fields.itemDrag = (struct UIDragDropListViewItem_o *)Component_WebViewObject;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.itemDrag,
    (System_Int32_array **)Component_WebViewObject,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
}


void __fastcall ServantOperationListViewObject__CallOnMoveEnd(
        ServantOperationListViewObject_o *this,
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
    sub_B16F98(p_onMoveEnd, 0LL, v2, v3, v4, v5, v6, v7);
    System_Action__Invoke(v9, 0LL);
  }
}


UnityEngine_GameObject_o *__fastcall ServantOperationListViewObject__CreateDragObject(
        ServantOperationListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *DragObject; // x19
  ServantOperationListViewObject_o *Component_srcLineSprite; // x0
  const MethodInfo *v6; // x3
  ServantOperationListViewObject_o *v7; // x20
  const MethodInfo *v8; // x1

  if ( (byte_40FD74D & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_ServantOperationListViewObject___, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    byte_40FD74D = 1;
  }
  DragObject = ListViewObject__CreateDragObject((ListViewObject_o *)this, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)DragObject, 0LL, 0LL) )
  {
    if ( !DragObject
      || (Component_srcLineSprite = (ServantOperationListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                          DragObject,
                                                                          (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_ServantOperationListViewObject___)) == 0LL )
    {
      sub_B170D4();
    }
    v7 = Component_srcLineSprite;
    ServantOperationListViewObject__Init(Component_srcLineSprite, 2, 0LL, v6);
    ServantOperationListViewObject__SetupDisp(v7, v8);
  }
  return DragObject;
}


int32_t __fastcall ServantOperationListViewObject__GetInitMode(int32_t initMode, const MethodInfo *method)
{
  if ( initMode == 1 )
    return 2;
  if ( initMode == 2 )
    return 3;
  return 0;
}


ServantOperationListViewItem_o *__fastcall ServantOperationListViewObject__GetItem(
        ServantOperationListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 v4; // x11

  if ( (byte_40FD74A & 1) == 0 )
  {
    sub_B16FFC(&ServantOperationListViewItem_TypeInfo, method);
    byte_40FD74A = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0LL;
  v4 = *(&ServantOperationListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v4 )
    return 0LL;
  if ( (ServantOperationListViewItem_c *)linkItem->klass->_2.typeHierarchy[v4 - 1] == ServantOperationListViewItem_TypeInfo )
    return (ServantOperationListViewItem_o *)this->fields.linkItem;
  return 0LL;
}


int32_t __fastcall ServantOperationListViewObject__GetState(
        ServantOperationListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  if ( (unsigned int)initMode < 3 )
    return 1;
  else
    return 2 * (initMode == 3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantOperationListViewObject__Init(
        ServantOperationListViewObject_o *this,
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
  UnityEngine_Transform_o *v12; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  const MethodInfo *v19; // x1
  int32_t v20; // w8
  int32_t v21; // w9
  ServantOperationListViewManager_o *v22; // x0
  int32_t v23; // w1
  System_Action_ServantOperationListViewItem__o *v24; // x2
  const MethodInfo *v25; // x3

  v5 = initMode;
  if ( (byte_40FD74E & 1) == 0 )
  {
    sub_B16FFC(&ServantOperationListViewItem_TypeInfo, *(_QWORD *)&initMode);
    byte_40FD74E = 1;
  }
  linkItem = this->fields.linkItem;
  dispMode = this->fields.dispMode;
  state = this->fields.state;
  if ( linkItem )
  {
    v10 = *(&ServantOperationListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v10
      || (ServantOperationListViewItem_c *)linkItem->klass->_2.typeHierarchy[v10 - 1] != ServantOperationListViewItem_TypeInfo )
    {
      sub_B173C8(linkItem);
      ServantOperationListViewManager__SetMode(v22, v23, v24, v25);
      return;
    }
  }
  if ( !linkItem )
    v5 = 0;
  ListViewObject__SetVisible((ListViewObject_o *)this, v5 != 0, 0LL);
  ((void (__fastcall *)(ServantOperationListViewObject_o *, bool, Il2CppMethodPointer))this->klass->vtable._9_SetInput.method)(
    this,
    v5 == 3,
    this->klass->vtable._10_Invalidation.methodPtr);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0LL),
        (v12 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_B170D4();
  }
  UnityEngine_Transform__set_localScale(v12, this->fields.baseScale, 0LL);
  this->fields.onMoveEnd = onMoveEnd;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.onMoveEnd,
    (System_Int32_array **)onMoveEnd,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  switch ( v5 )
  {
    case 1u:
      v20 = 1;
      goto LABEL_16;
    case 3u:
      v20 = 2;
      this->fields.dispMode = 2;
      break;
    case 2u:
      v20 = 2;
LABEL_16:
      this->fields.dispMode = v20;
LABEL_17:
      v21 = 1;
      goto LABEL_20;
    default:
      v20 = 0;
      this->fields.dispMode = 0;
      if ( v5 < 3 )
        goto LABEL_17;
      break;
  }
  v21 = 2 * (v5 == 3);
LABEL_20:
  this->fields.state = v21;
  if ( !state || dispMode != v20 )
    ServantOperationListViewObject__SetupDisp(this, v19);
  ServantOperationListViewObject__CallOnMoveEnd(this, v19);
}


void __fastcall ServantOperationListViewObject__InitItem(
        ServantOperationListViewObject_o *this,
        const MethodInfo *method)
{
  this->fields.state = 0;
}


bool __fastcall ServantOperationListViewObject__IsCanDrag(
        ServantOperationListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  struct ListViewManager_o *manager; // x0
  __int64 v7; // x9
  struct ListViewItem_o *linkItem; // x1
  __int64 v9; // x10
  UnityEngine_Object_o *touchPress; // x20
  UITouchPress_o *v12; // x0
  ServantOperationListViewObject_o *v13; // x0
  const MethodInfo *v14; // x1

  if ( (byte_40FD74C & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    sub_B16FFC(&ServantOperationListViewItem_TypeInfo, v4);
    sub_B16FFC(&ServantOperationListViewManager_TypeInfo, v5);
    byte_40FD74C = 1;
  }
  manager = this->fields.manager;
  if ( !manager )
    goto LABEL_20;
  v7 = *(&ServantOperationListViewManager_TypeInfo->_2.bitflags2 + 1);
  if ( *(&manager->klass->_2.bitflags2 + 1) < (unsigned int)v7
    || (ServantOperationListViewManager_c *)manager->klass->_2.typeHierarchy[v7 - 1] != ServantOperationListViewManager_TypeInfo )
  {
    sub_B173C8(manager);
    goto LABEL_20;
  }
  if ( ((__int64)manager[1].fields.itemList & 0x80000000) != 0 )
  {
LABEL_12:
    touchPress = (UnityEngine_Object_o *)this->fields.touchPress;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Inequality(touchPress, 0LL, 0LL) )
      return 0;
    v12 = this->fields.touchPress;
    if ( v12 )
    {
      UITouchPress__PressReset(v12, 0LL);
      return 0;
    }
LABEL_20:
    sub_B170D4();
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem
    || (v9 = *(&ServantOperationListViewItem_TypeInfo->_2.bitflags2 + 1),
        *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v9)
    && (ServantOperationListViewItem_c *)linkItem->klass->_2.typeHierarchy[v9 - 1] == ServantOperationListViewItem_TypeInfo )
  {
    if ( ServantOperationListViewManager__IsDragEnable(
           (ServantOperationListViewManager_o *)manager,
           (ServantOperationListViewItem_o *)linkItem,
           v2) )
    {
      return 1;
    }
    goto LABEL_12;
  }
  sub_B173C8(this->fields.linkItem);
  return (unsigned __int8)ServantOperationListViewObject__CreateDragObject(v13, v14);
}


void __fastcall ServantOperationListViewObject__OnClickSelect(
        ServantOperationListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct ListViewItem_o *linkItem; // x19
  __int64 v11; // x9
  struct ListViewManager_o *manager; // x20
  __int64 v13; // x10
  int listDragPrefab_high; // w8
  UserServantEntity_o *v15; // x0
  __int64 *v16; // x8
  UserServantEntity_o *klass; // x0
  System_String_o *v18; // x1
  UnityEngine_Component_o *v19; // x0
  Il2CppObject *v20; // x2
  const MethodInfo *v21; // x1
  struct ListViewManager_o *v22; // x19
  ServantOperationListViewItem_o *Item; // x0
  ServantOperationListViewObject_o *v24; // x0
  const MethodInfo *v25; // x1

  if ( (byte_40FD750 & 1) == 0 )
  {
    sub_B16FFC(&ServantOperationListViewItem_TypeInfo, method);
    sub_B16FFC(&ServantOperationListViewManager_TypeInfo, v3);
    sub_B16FFC(&SoundManager_TypeInfo, v4);
    sub_B16FFC(&TutorialFlag_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_9938/*"OnClickSelectListView"*/, v6);
    sub_B16FFC(&StringLiteral_9912/*"OnClickChoiceModeItem"*/, v7);
    sub_B16FFC(&StringLiteral_9936/*"OnClickPushModeItem"*/, v8);
    sub_B16FFC(&StringLiteral_9934/*"OnClickLockModeItem"*/, v9);
    byte_40FD750 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    v11 = *(&ServantOperationListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v11
      || (ServantOperationListViewItem_c *)linkItem->klass->_2.typeHierarchy[v11 - 1] != ServantOperationListViewItem_TypeInfo )
    {
      sub_B173C8(this->fields.linkItem);
      ServantOperationListViewObject__OnLongPush(v24, v25);
      return;
    }
    manager = this->fields.manager;
    if ( manager )
    {
      v13 = *(&ServantOperationListViewManager_TypeInfo->_2.bitflags2 + 1);
      if ( *(&manager->klass->_2.bitflags2 + 1) >= (unsigned int)v13
        && (ServantOperationListViewManager_c *)manager->klass->_2.typeHierarchy[v13 - 1] == ServantOperationListViewManager_TypeInfo )
      {
        listDragPrefab_high = HIDWORD(manager[1].fields.listDragPrefab);
        switch ( listDragPrefab_high )
        {
          case 3:
            if ( !ServantOperationListViewItem__get_IsCanNotSelectPush(
                    (ServantOperationListViewItem_o *)this->fields.linkItem,
                    (const MethodInfo *)ServantOperationListViewItem_TypeInfo) )
            {
              v16 = &StringLiteral_9936/*"OnClickPushModeItem"*/;
              goto LABEL_29;
            }
            goto LABEL_32;
          case 2:
            klass = (UserServantEntity_o *)linkItem[1].klass;
            if ( !klass || !UserServantEntity__IsHeroine(klass, 0LL) )
              goto LABEL_26;
            if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !TutorialFlag_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
            }
            if ( !TutorialFlag__Get_28023340(126, 0LL) )
            {
LABEL_26:
              v16 = &StringLiteral_9912/*"OnClickChoiceModeItem"*/;
              goto LABEL_29;
            }
            goto LABEL_32;
          case 1:
            v15 = (UserServantEntity_o *)linkItem[1].klass;
            if ( !v15 || !UserServantEntity__IsHeroine(v15, 0LL) )
              goto LABEL_18;
            if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !TutorialFlag_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
            }
            if ( !TutorialFlag__Get_28023340(126, 0LL) )
            {
LABEL_18:
              v16 = &StringLiteral_9934/*"OnClickLockModeItem"*/;
LABEL_29:
              v18 = (System_String_o *)*v16;
              v19 = (UnityEngine_Component_o *)manager;
              v20 = (Il2CppObject *)linkItem;
LABEL_30:
              UnityEngine_Component__SendMessage(v19, v18, v20, 0LL);
              return;
            }
            goto LABEL_32;
        }
        if ( ServantOperationListViewItem__get_IsCanNotSelect(
               (ServantOperationListViewItem_o *)this->fields.linkItem,
               (const MethodInfo *)ServantOperationListViewItem_TypeInfo) )
        {
LABEL_32:
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          SoundManager__playSystemSe(2, 0LL);
          return;
        }
        v22 = this->fields.manager;
        Item = ServantOperationListViewObject__GetItem(this, v21);
        if ( v22 )
        {
          v20 = (Il2CppObject *)Item;
          v19 = (UnityEngine_Component_o *)v22;
          v18 = (System_String_o *)StringLiteral_9938/*"OnClickSelectListView"*/;
          goto LABEL_30;
        }
      }
    }
    sub_B170D4();
  }
}


void __fastcall ServantOperationListViewObject__OnDestroy(
        ServantOperationListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  BattleServantConfConponent_o *p_dragObject; // x19
  UnityEngine_Object_o *v5; // x20
  struct UnityEngine_GameObject_o *dragObject; // t1
  UnityEngine_Object_o *klass; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_40FD749 & 1) == 0 )
  {
    sub_B16FFC(&NGUITools_TypeInfo, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    byte_40FD749 = 1;
  }
  dragObject = this->fields.dragObject;
  p_dragObject = (BattleServantConfConponent_o *)&this->fields.dragObject;
  v5 = (UnityEngine_Object_o *)dragObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(v5, 0LL, 0LL) )
  {
    klass = (UnityEngine_Object_o *)p_dragObject->klass;
    if ( (BYTE3(NGUITools_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    NGUITools__Destroy(klass, 0LL);
    p_dragObject->klass = 0LL;
    sub_B16F98(p_dragObject, 0LL, v8, v9, v10, v11, v12, v13);
  }
}


void __fastcall ServantOperationListViewObject__OnDragDropStart(
        ServantOperationListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  struct ListViewManager_o *manager; // x0
  __int64 v5; // x9
  UnityEngine_Object_o *touchPress; // x20
  UITouchPress_o *v7; // x0

  if ( (byte_40FD752 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    sub_B16FFC(&ServantOperationListViewManager_TypeInfo, v3);
    byte_40FD752 = 1;
  }
  manager = this->fields.manager;
  if ( !manager )
    goto LABEL_15;
  v5 = *(&ServantOperationListViewManager_TypeInfo->_2.bitflags2 + 1);
  if ( *(&manager->klass->_2.bitflags2 + 1) < (unsigned int)v5
    || (ServantOperationListViewManager_c *)manager->klass->_2.typeHierarchy[v5 - 1] != ServantOperationListViewManager_TypeInfo )
  {
    sub_B173C8(manager);
    goto LABEL_15;
  }
  if ( ((__int64)manager[1].fields.itemList & 0x80000000) == 0 )
  {
    touchPress = (UnityEngine_Object_o *)this->fields.touchPress;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(touchPress, 0LL, 0LL) )
    {
      v7 = this->fields.touchPress;
      if ( v7 )
      {
        UITouchPress__PressReset(v7, 0LL);
        return;
      }
LABEL_15:
      sub_B170D4();
    }
  }
}


void __fastcall ServantOperationListViewObject__OnLongPush(
        ServantOperationListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  struct ListViewItem_o *linkItem; // x19
  __int64 v6; // x9
  __int64 v7; // x9
  int32_t sortIndex; // w21
  char v9; // w8
  const MethodInfo *v10; // x3

  if ( (byte_40FD751 & 1) == 0 )
  {
    sub_B16FFC(&ServantOperationListViewItem_TypeInfo, method);
    sub_B16FFC(&ServantOperationListViewManager_TypeInfo, v4);
    byte_40FD751 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    v6 = *(&ServantOperationListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v6
      && (ServantOperationListViewItem_c *)linkItem->klass->_2.typeHierarchy[v6 - 1] == ServantOperationListViewItem_TypeInfo )
    {
      this = (ServantOperationListViewObject_o *)this->fields.manager;
      if ( !this )
        goto LABEL_14;
      v7 = *(&ServantOperationListViewManager_TypeInfo->_2.bitflags2 + 1);
      if ( *(&this->klass->_2.bitflags2 + 1) >= (unsigned int)v7
        && (ServantOperationListViewManager_c *)this->klass->_2.typeHierarchy[v7 - 1] == ServantOperationListViewManager_TypeInfo )
      {
        if ( ServantOperationListViewManager__IsDragEnable(
               (ServantOperationListViewManager_o *)this,
               (ServantOperationListViewItem_o *)linkItem,
               v2) )
        {
          sortIndex = linkItem->fields.sortIndex;
          v9 = ~ListViewItem__get_IsSelect(linkItem, 0LL);
          ServantOperationListViewManager__SetDragStart(
            (ServantOperationListViewManager_o *)this,
            sortIndex,
            v9 & 1,
            v10);
        }
        return;
      }
    }
    else
    {
      sub_B173C8(this->fields.linkItem);
    }
    sub_B173C8(this);
LABEL_14:
    sub_B170D4();
  }
}


void __fastcall ServantOperationListViewObject__OnLongRelease(
        ServantOperationListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_Object_o *itemDrag; // x20
  UIDragDropListViewItem_o *v7; // x0
  struct ListViewManager_o *manager; // x0
  __int64 v9; // x10
  UnityEngine_Component_o *v10; // x0

  if ( (byte_40FD753 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    sub_B16FFC(&ServantOperationListViewManager_TypeInfo, v3);
    sub_B16FFC(&StringLiteral_9991/*"OnLongPushListView"*/, v4);
    sub_B16FFC(&StringLiteral_3546/*"CancelDragEnd"*/, v5);
    byte_40FD753 = 1;
  }
  if ( this->fields.linkItem )
  {
    itemDrag = (UnityEngine_Object_o *)this->fields.itemDrag;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(itemDrag, 0LL, 0LL) )
    {
      v7 = this->fields.itemDrag;
      if ( !v7 )
        goto LABEL_17;
      UIDragDropListViewItem__PressReset(v7, 0LL);
    }
    manager = this->fields.manager;
    if ( manager )
    {
      v9 = *(&ServantOperationListViewManager_TypeInfo->_2.bitflags2 + 1);
      if ( *(&manager->klass->_2.bitflags2 + 1) >= (unsigned int)v9
        && (ServantOperationListViewManager_c *)manager->klass->_2.typeHierarchy[v9 - 1] == ServantOperationListViewManager_TypeInfo )
      {
        if ( HIDWORD(manager[1].fields.listDragPrefab) )
          return;
        UnityEngine_Component__SendMessage_40674196(
          (UnityEngine_Component_o *)manager,
          (System_String_o *)StringLiteral_3546/*"CancelDragEnd"*/,
          0LL);
        v10 = (UnityEngine_Component_o *)this->fields.manager;
        if ( v10 )
        {
          UnityEngine_Component__SendMessage(
            v10,
            (System_String_o *)StringLiteral_9991/*"OnLongPushListView"*/,
            (Il2CppObject *)this->fields.linkItem,
            0LL);
          return;
        }
      }
    }
LABEL_17:
    sub_B170D4();
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantOperationListViewObject__SetInput(
        ServantOperationListViewObject_o *this,
        bool isInput,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_Object_o *itemDraw; // x20
  const MethodInfo *v8; // x4
  struct ListViewItem_o *linkItem; // x20
  __int64 v10; // x9
  struct ListViewManager_o *manager; // x0
  __int64 v12; // x10
  ServantOperationListViewItemDraw_o *v13; // x19
  bool IsSelectEnable; // w0
  const MethodInfo *v15; // x3
  ServantOperationListViewObject_o *v16; // x0
  const MethodInfo *v17; // x1

  if ( (byte_40FD74B & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, isInput);
    sub_B16FFC(&ServantOperationListViewItem_TypeInfo, v5);
    sub_B16FFC(&ServantOperationListViewManager_TypeInfo, v6);
    byte_40FD74B = 1;
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
    linkItem = this->fields.linkItem;
    if ( linkItem
      && ((v10 = *(&ServantOperationListViewItem_TypeInfo->_2.bitflags2 + 1),
           *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v10)
       || (ServantOperationListViewItem_c *)linkItem->klass->_2.typeHierarchy[v10 - 1] != ServantOperationListViewItem_TypeInfo) )
    {
      sub_B173C8(this->fields.linkItem);
      ServantOperationListViewObject__IsCanDrag(v16, v17);
    }
    else
    {
      manager = this->fields.manager;
      if ( !manager
        || (v12 = *(&ServantOperationListViewManager_TypeInfo->_2.bitflags2 + 1),
            *(&manager->klass->_2.bitflags2 + 1) < (unsigned int)v12)
        || (ServantOperationListViewManager_c *)manager->klass->_2.typeHierarchy[v12 - 1] != ServantOperationListViewManager_TypeInfo
        || (v13 = this->fields.itemDraw,
            IsSelectEnable = ServantOperationListViewManager__IsSelectEnable(
                               (ServantOperationListViewManager_o *)manager,
                               (ServantOperationListViewItem_o *)linkItem,
                               0,
                               0,
                               v8),
            !v13) )
      {
        sub_B170D4();
      }
      ServantOperationListViewItemDraw__SetInput(v13, (ServantOperationListViewItem_o *)linkItem, IsSelectEnable, v15);
    }
  }
}


void __fastcall ServantOperationListViewObject__SetItem(
        ServantOperationListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  ListViewObject__SetItem_30205928((ListViewObject_o *)this, item, seed, 0LL);
  this->fields.state = 0;
}


void __fastcall ServantOperationListViewObject__SetItem_31641752(
        ServantOperationListViewObject_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ListViewObject__SetItem((ListViewObject_o *)this, item, 0LL);
  this->fields.state = 0;
}


void __fastcall ServantOperationListViewObject__SetupDisp(
        ServantOperationListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x21
  __int64 v4; // x1
  __int64 v5; // x1
  ServantOperationListViewManager_o *manager; // x20
  __int64 v7; // x9
  __int64 v8; // x9
  bool v9; // w1
  UnityEngine_Object_o *itemDraw; // x22
  const MethodInfo *v11; // x4
  ServantOperationListViewItemDraw_o *v12; // x22
  int32_t dispMode; // w19
  bool IsSelectEnable; // w0
  const MethodInfo *v15; // x5

  if ( (byte_40FD74F & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    sub_B16FFC(&ServantOperationListViewItem_TypeInfo, v4);
    sub_B16FFC(&ServantOperationListViewManager_TypeInfo, v5);
    byte_40FD74F = 1;
  }
  manager = (ServantOperationListViewManager_o *)this->fields.manager;
  if ( manager )
  {
    v7 = *(&ServantOperationListViewManager_TypeInfo->_2.bitflags2 + 1);
    if ( *(&manager->klass->_2.bitflags2 + 1) < (unsigned int)v7
      || (ServantOperationListViewManager_c *)manager->klass->_2.typeHierarchy[v7 - 1] != ServantOperationListViewManager_TypeInfo )
    {
      sub_B173C8(this->fields.manager);
      goto LABEL_19;
    }
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
  {
    v9 = 0;
    goto LABEL_11;
  }
  v8 = *(&ServantOperationListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v8
    || (ServantOperationListViewItem_c *)linkItem->klass->_2.typeHierarchy[v8 - 1] != ServantOperationListViewItem_TypeInfo )
  {
LABEL_19:
    sub_B173C8(linkItem);
    goto LABEL_20;
  }
  v9 = this->fields.dispMode != 0;
LABEL_11:
  ListViewObject__SetVisible((ListViewObject_o *)this, v9, 0LL);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(itemDraw, 0LL, 0LL) )
  {
    if ( manager )
    {
      v12 = this->fields.itemDraw;
      dispMode = this->fields.dispMode;
      IsSelectEnable = ServantOperationListViewManager__IsSelectEnable(
                         manager,
                         (ServantOperationListViewItem_o *)linkItem,
                         0,
                         0,
                         v11);
      if ( v12 )
      {
        ServantOperationListViewItemDraw__SetItem(
          v12,
          (ServantOperationListViewItem_o *)linkItem,
          dispMode,
          IsSelectEnable,
          manager->fields.modeKind,
          v15);
        return;
      }
    }
LABEL_20:
    sub_B170D4();
  }
}