void __fastcall ServantOperationListViewObject___ctor(ServantOperationListViewObject_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EC765 & 1) == 0 )
  {
    sub_B5D5C4(&ListViewObject_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EC765 = 1;
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  __int64 v8; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  struct ServantOperationListViewItemDraw_o *Component_srcLineSprite; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  WebViewObject_o *Component_WebViewObject; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7

  if ( (byte_42EC759 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_UIDragDropListViewItem___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_ServantOperationListViewItemDraw___, v5, v6, v7);
    byte_42EC759 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_B5D69C(0LL, v8);
  Component_srcLineSprite = (struct ServantOperationListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                           dispObject,
                                                                           (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_ServantOperationListViewItemDraw___);
  this->fields.itemDraw = Component_srcLineSprite;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.itemDraw,
    (System_Int32_array **)Component_srcLineSprite,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              (UnityEngine_Component_o *)this,
                              (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UIDragDropListViewItem___);
  this->fields.itemDrag = (struct UIDragDropListViewItem_o *)Component_WebViewObject;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.itemDrag,
    (System_Int32_array **)Component_WebViewObject,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
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
    sub_B5D560(p_onMoveEnd, 0LL, v2, v3, v4, v5, v6, v7);
    System_Action__Invoke(v9, 0LL);
  }
}


UnityEngine_GameObject_o *__fastcall ServantOperationListViewObject__CreateDragObject(
        ServantOperationListViewObject_o *this,
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
  ServantOperationListViewObject_o *v12; // x20
  const MethodInfo *v13; // x1

  if ( (byte_42EC75E & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_ServantOperationListViewObject___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    byte_42EC75E = 1;
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
                                      (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_ServantOperationListViewObject___)) == 0LL )
    {
      sub_B5D69C(Component_srcLineSprite, v10);
    }
    v12 = (ServantOperationListViewObject_o *)Component_srcLineSprite;
    ServantOperationListViewObject__Init((ServantOperationListViewObject_o *)Component_srcLineSprite, 2, 0LL, v11);
    ServantOperationListViewObject__SetupDisp(v12, v13);
  }
  return (UnityEngine_GameObject_o *)DragObject;
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
  int v2; // w2
  __int64 v3; // x3
  struct ListViewItem_o *linkItem; // x8
  __int64 v6; // x11

  if ( (byte_42EC75B & 1) == 0 )
  {
    sub_B5D5C4(&ServantOperationListViewItem_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EC75B = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0LL;
  v6 = *(&ServantOperationListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v6 )
    return 0LL;
  if ( (ServantOperationListViewItem_c *)linkItem->klass->_2.typeHierarchy[v6 - 1] == ServantOperationListViewItem_TypeInfo )
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
  ServantOperationListViewManager_o *v22; // x0
  int32_t v23; // w1
  System_Action_ServantOperationListViewItem__o *v24; // x2
  const MethodInfo *v25; // x3

  v5 = initMode;
  if ( (byte_42EC75F & 1) == 0 )
  {
    sub_B5D5C4(&ServantOperationListViewItem_TypeInfo, initMode, (_DWORD)onMoveEnd, method);
    byte_42EC75F = 1;
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
      sub_B5D990(linkItem);
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
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  UITouchPress_o *manager; // x0
  __int64 v12; // x9
  struct ListViewItem_o *linkItem; // x1
  __int64 v14; // x10
  UnityEngine_Object_o *touchPress; // x20
  ServantOperationListViewObject_o *v17; // x0
  const MethodInfo *v18; // x1

  if ( (byte_42EC75D & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&ServantOperationListViewItem_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&ServantOperationListViewManager_TypeInfo, v8, v9, v10);
    byte_42EC75D = 1;
  }
  manager = (UITouchPress_o *)this->fields.manager;
  if ( !manager )
    goto LABEL_20;
  v12 = *(&ServantOperationListViewManager_TypeInfo->_2.bitflags2 + 1);
  if ( *(&manager->klass->_2.bitflags2 + 1) < (unsigned int)v12
    || (ServantOperationListViewManager_c *)manager->klass->_2.typeHierarchy[v12 - 1] != ServantOperationListViewManager_TypeInfo )
  {
    sub_B5D990(manager);
    goto LABEL_20;
  }
  if ( ((__int64)manager[6].fields.onClick & 0x80000000) != 0 )
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
    manager = this->fields.touchPress;
    if ( manager )
    {
      UITouchPress__PressReset(manager, 0LL);
      return 0;
    }
LABEL_20:
    sub_B5D69C(manager, method);
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem
    || (v14 = *(&ServantOperationListViewItem_TypeInfo->_2.bitflags2 + 1),
        *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v14)
    && (ServantOperationListViewItem_c *)linkItem->klass->_2.typeHierarchy[v14 - 1] == ServantOperationListViewItem_TypeInfo )
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
  sub_B5D990(this->fields.linkItem);
  return (unsigned __int8)ServantOperationListViewObject__CreateDragObject(v17, v18);
}


void __fastcall ServantOperationListViewObject__OnClickSelect(
        ServantOperationListViewObject_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  ServantOperationListViewObject_o *v4; // x21
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
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  struct ListViewItem_o *linkItem; // x19
  ServantOperationListViewItem_c *v27; // x1
  __int64 v28; // x9
  UnityEngine_Component_o *manager; // x20
  __int64 v30; // x10
  int monitor_high; // w8
  UserServantEntity_o *v32; // x0
  __int64 *v33; // x8
  UserServantEntity_o *klass; // x0
  System_String_o *v35; // x1
  UnityEngine_Component_o *v36; // x0
  Il2CppObject *v37; // x2
  const MethodInfo *v38; // x1
  UnityEngine_Component_o *v39; // x19
  ServantOperationListViewObject_o *v40; // x0
  const MethodInfo *v41; // x1

  v4 = this;
  if ( (byte_42EC761 & 1) == 0 )
  {
    sub_B5D5C4(&ServantOperationListViewItem_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&ServantOperationListViewManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&SoundManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&TutorialFlag_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_10076/*"OnClickSelectListView"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_10050/*"OnClickChoiceModeItem"*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_10074/*"OnClickPushModeItem"*/, v20, v21, v22);
    this = (ServantOperationListViewObject_o *)sub_B5D5C4(&StringLiteral_10072/*"OnClickLockModeItem"*/, v23, v24, v25);
    byte_42EC761 = 1;
  }
  linkItem = v4->fields.linkItem;
  if ( linkItem )
  {
    v27 = ServantOperationListViewItem_TypeInfo;
    v28 = *(&ServantOperationListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v28
      || (ServantOperationListViewItem_c *)linkItem->klass->_2.typeHierarchy[v28 - 1] != ServantOperationListViewItem_TypeInfo )
    {
      sub_B5D990(v4->fields.linkItem);
      ServantOperationListViewObject__OnLongPush(v40, v41);
      return;
    }
    manager = (UnityEngine_Component_o *)v4->fields.manager;
    if ( manager )
    {
      v30 = *(&ServantOperationListViewManager_TypeInfo->_2.bitflags2 + 1);
      if ( *(&manager->klass->_2.bitflags2 + 1) >= (unsigned int)v30
        && (ServantOperationListViewManager_c *)manager->klass->_2.typeHierarchy[v30 - 1] == ServantOperationListViewManager_TypeInfo )
      {
        monitor_high = HIDWORD(manager[19].monitor);
        switch ( monitor_high )
        {
          case 3:
            if ( !ServantOperationListViewItem__get_IsCanNotSelectPush(
                    (ServantOperationListViewItem_o *)v4->fields.linkItem,
                    (const MethodInfo *)ServantOperationListViewItem_TypeInfo) )
            {
              v33 = &StringLiteral_10074/*"OnClickPushModeItem"*/;
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
            if ( !TutorialFlag__Get_29295864(126, 0LL) )
            {
LABEL_26:
              v33 = &StringLiteral_10050/*"OnClickChoiceModeItem"*/;
              goto LABEL_29;
            }
            goto LABEL_32;
          case 1:
            v32 = (UserServantEntity_o *)linkItem[1].klass;
            if ( !v32 || !UserServantEntity__IsHeroine(v32, 0LL) )
              goto LABEL_18;
            if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !TutorialFlag_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
            }
            if ( !TutorialFlag__Get_29295864(126, 0LL) )
            {
LABEL_18:
              v33 = &StringLiteral_10072/*"OnClickLockModeItem"*/;
LABEL_29:
              v35 = (System_String_o *)*v33;
              v36 = manager;
              v37 = (Il2CppObject *)linkItem;
LABEL_30:
              UnityEngine_Component__SendMessage(v36, v35, v37, 0LL);
              return;
            }
            goto LABEL_32;
        }
        if ( ServantOperationListViewItem__get_IsCanNotSelect(
               (ServantOperationListViewItem_o *)v4->fields.linkItem,
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
        v39 = (UnityEngine_Component_o *)v4->fields.manager;
        this = (ServantOperationListViewObject_o *)ServantOperationListViewObject__GetItem(v4, v38);
        if ( v39 )
        {
          v37 = (Il2CppObject *)this;
          v36 = v39;
          v35 = (System_String_o *)StringLiteral_10076/*"OnClickSelectListView"*/;
          goto LABEL_30;
        }
      }
    }
    sub_B5D69C(this, v27);
  }
}


void __fastcall ServantOperationListViewObject__OnDestroy(
        ServantOperationListViewObject_o *this,
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

  if ( (byte_42EC75A & 1) == 0 )
  {
    sub_B5D5C4(&NGUITools_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    byte_42EC75A = 1;
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


void __fastcall ServantOperationListViewObject__OnDragDropStart(
        ServantOperationListViewObject_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UITouchPress_o *manager; // x0
  __int64 v9; // x9
  UnityEngine_Object_o *touchPress; // x20

  if ( (byte_42EC763 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&ServantOperationListViewManager_TypeInfo, v5, v6, v7);
    byte_42EC763 = 1;
  }
  manager = (UITouchPress_o *)this->fields.manager;
  if ( !manager )
    goto LABEL_15;
  v9 = *(&ServantOperationListViewManager_TypeInfo->_2.bitflags2 + 1);
  if ( *(&manager->klass->_2.bitflags2 + 1) < (unsigned int)v9
    || (ServantOperationListViewManager_c *)manager->klass->_2.typeHierarchy[v9 - 1] != ServantOperationListViewManager_TypeInfo )
  {
    sub_B5D990(manager);
    goto LABEL_15;
  }
  if ( ((__int64)manager[6].fields.onClick & 0x80000000) == 0 )
  {
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
        return;
      }
LABEL_15:
      sub_B5D69C(manager, method);
    }
  }
}


void __fastcall ServantOperationListViewObject__OnLongPush(
        ServantOperationListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3
  ServantOperationListViewManager_o *indicator; // x20
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  ListViewItem_o *emptyMessageLabel; // x19
  ServantOperationListViewItem_c *v9; // x1
  __int64 v10; // x9
  __int64 v11; // x9
  int32_t sortIndex; // w21
  char v13; // w8
  const MethodInfo *v14; // x3

  indicator = (ServantOperationListViewManager_o *)this;
  if ( (byte_42EC762 & 1) == 0 )
  {
    sub_B5D5C4(&ServantOperationListViewItem_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    this = (ServantOperationListViewObject_o *)sub_B5D5C4(&ServantOperationListViewManager_TypeInfo, v5, v6, v7);
    byte_42EC762 = 1;
  }
  emptyMessageLabel = (ListViewItem_o *)indicator->fields.emptyMessageLabel;
  if ( emptyMessageLabel )
  {
    v9 = ServantOperationListViewItem_TypeInfo;
    v10 = *(&ServantOperationListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&emptyMessageLabel->klass->_2.bitflags2 + 1) >= (unsigned int)v10
      && (ServantOperationListViewItem_c *)emptyMessageLabel->klass->_2.typeHierarchy[v10 - 1] == ServantOperationListViewItem_TypeInfo )
    {
      indicator = (ServantOperationListViewManager_o *)indicator->fields.indicator;
      if ( !indicator )
        goto LABEL_14;
      v11 = *(&ServantOperationListViewManager_TypeInfo->_2.bitflags2 + 1);
      if ( *(&indicator->klass->_2.bitflags2 + 1) >= (unsigned int)v11
        && (ServantOperationListViewManager_c *)indicator->klass->_2.typeHierarchy[v11 - 1] == ServantOperationListViewManager_TypeInfo )
      {
        if ( ServantOperationListViewManager__IsDragEnable(
               indicator,
               (ServantOperationListViewItem_o *)emptyMessageLabel,
               v2) )
        {
          sortIndex = emptyMessageLabel->fields.sortIndex;
          v13 = ~ListViewItem__get_IsSelect(emptyMessageLabel, 0LL);
          ServantOperationListViewManager__SetDragStart(indicator, sortIndex, v13 & 1, v14);
        }
        return;
      }
    }
    else
    {
      sub_B5D990(indicator->fields.emptyMessageLabel);
    }
    sub_B5D990(indicator);
LABEL_14:
    sub_B5D69C(this, v9);
  }
}


void __fastcall ServantOperationListViewObject__OnLongRelease(
        ServantOperationListViewObject_o *this,
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
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  UnityEngine_Object_o *itemDrag; // x20
  __int64 v15; // x1
  UIDragDropListViewItem_o *manager; // x0
  __int64 v17; // x10

  if ( (byte_42EC764 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&ServantOperationListViewManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_10129/*"OnLongPushListView"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_3626/*"CancelDragEnd"*/, v11, v12, v13);
    byte_42EC764 = 1;
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
      manager = this->fields.itemDrag;
      if ( !manager )
        goto LABEL_17;
      UIDragDropListViewItem__PressReset(manager, 0LL);
    }
    manager = (UIDragDropListViewItem_o *)this->fields.manager;
    if ( manager )
    {
      v17 = *(&ServantOperationListViewManager_TypeInfo->_2.bitflags2 + 1);
      if ( *(&manager->klass->_2.bitflags2 + 1) >= (unsigned int)v17
        && (ServantOperationListViewManager_c *)manager->klass->_2.typeHierarchy[v17 - 1] == ServantOperationListViewManager_TypeInfo )
      {
        if ( *((_DWORD *)&manager[3].fields.mTarget + 3) )
          return;
        UnityEngine_Component__SendMessage_41576000(
          (UnityEngine_Component_o *)manager,
          (System_String_o *)StringLiteral_3626/*"CancelDragEnd"*/,
          0LL);
        manager = (UIDragDropListViewItem_o *)this->fields.manager;
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
LABEL_17:
    sub_B5D69C(manager, v15);
  }
}


void __fastcall ServantOperationListViewObject__SetInput(
        ServantOperationListViewObject_o *this,
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
  ServantOperationListViewItem_c *v13; // x1
  const MethodInfo *v14; // x4
  struct ListViewItem_o *linkItem; // x20
  __int64 v16; // x9
  struct ListViewManager_o *manager; // x0
  __int64 v18; // x10
  ServantOperationListViewItemDraw_o *v19; // x19
  const MethodInfo *v20; // x3
  ServantOperationListViewObject_o *v21; // x0
  const MethodInfo *v22; // x1

  if ( (byte_42EC75C & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, isInput, (_DWORD)method, v3);
    sub_B5D5C4(&ServantOperationListViewItem_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&ServantOperationListViewManager_TypeInfo, v9, v10, v11);
    byte_42EC75C = 1;
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
      && ((v13 = ServantOperationListViewItem_TypeInfo,
           v16 = *(&ServantOperationListViewItem_TypeInfo->_2.bitflags2 + 1),
           *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v16)
       || (ServantOperationListViewItem_c *)linkItem->klass->_2.typeHierarchy[v16 - 1] != ServantOperationListViewItem_TypeInfo) )
    {
      sub_B5D990(this->fields.linkItem);
      ServantOperationListViewObject__IsCanDrag(v21, v22);
    }
    else
    {
      manager = this->fields.manager;
      if ( !manager
        || (v18 = *(&ServantOperationListViewManager_TypeInfo->_2.bitflags2 + 1),
            *(&manager->klass->_2.bitflags2 + 1) < (unsigned int)v18)
        || (ServantOperationListViewManager_c *)manager->klass->_2.typeHierarchy[v18 - 1] != ServantOperationListViewManager_TypeInfo
        || (v19 = this->fields.itemDraw,
            manager = (struct ListViewManager_o *)ServantOperationListViewManager__IsSelectEnable(
                                                    (ServantOperationListViewManager_o *)manager,
                                                    (ServantOperationListViewItem_o *)linkItem,
                                                    0,
                                                    0,
                                                    v14),
            !v19) )
      {
        sub_B5D69C(manager, v13);
      }
      ServantOperationListViewItemDraw__SetInput(
        v19,
        (ServantOperationListViewItem_o *)linkItem,
        (unsigned __int8)manager & 1,
        v20);
    }
  }
}


void __fastcall ServantOperationListViewObject__SetItem(
        ServantOperationListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  ListViewObject__SetItem_34021840((ListViewObject_o *)this, item, seed, 0LL);
  this->fields.state = 0;
}


void __fastcall ServantOperationListViewObject__SetItem_32549128(
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
  int v2; // w2
  __int64 v3; // x3
  struct ListViewItem_o *linkItem; // x21
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  ServantOperationListViewManager_o *manager; // x20
  __int64 v13; // x9
  __int64 v14; // x9
  bool v15; // w1
  UnityEngine_Object_o *itemDraw; // x22
  _BOOL8 IsSelectEnable; // x0
  __int64 v18; // x1
  const MethodInfo *v19; // x4
  ServantOperationListViewItemDraw_o *v20; // x22
  int32_t dispMode; // w19
  const MethodInfo *v22; // x5

  if ( (byte_42EC760 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&ServantOperationListViewItem_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&ServantOperationListViewManager_TypeInfo, v9, v10, v11);
    byte_42EC760 = 1;
  }
  manager = (ServantOperationListViewManager_o *)this->fields.manager;
  if ( manager )
  {
    v13 = *(&ServantOperationListViewManager_TypeInfo->_2.bitflags2 + 1);
    if ( *(&manager->klass->_2.bitflags2 + 1) < (unsigned int)v13
      || (ServantOperationListViewManager_c *)manager->klass->_2.typeHierarchy[v13 - 1] != ServantOperationListViewManager_TypeInfo )
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
  v14 = *(&ServantOperationListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v14
    || (ServantOperationListViewItem_c *)linkItem->klass->_2.typeHierarchy[v14 - 1] != ServantOperationListViewItem_TypeInfo )
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
  IsSelectEnable = UnityEngine_Object__op_Equality(itemDraw, 0LL, 0LL);
  if ( !IsSelectEnable )
  {
    if ( manager )
    {
      v20 = this->fields.itemDraw;
      dispMode = this->fields.dispMode;
      IsSelectEnable = ServantOperationListViewManager__IsSelectEnable(
                         manager,
                         (ServantOperationListViewItem_o *)linkItem,
                         0,
                         0,
                         v19);
      if ( v20 )
      {
        ServantOperationListViewItemDraw__SetItem(
          v20,
          (ServantOperationListViewItem_o *)linkItem,
          dispMode,
          IsSelectEnable,
          manager->fields.modeKind,
          v22);
        return;
      }
    }
LABEL_20:
    sub_B5D69C(IsSelectEnable, v18);
  }
}