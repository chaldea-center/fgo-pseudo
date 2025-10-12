void ServantOperationListViewObject___ctor(ServantOperationListViewObject_o *this, const MethodInfo *method)
{
  if ( (byte_4C33AF1 & 1) == 0 )
  {
    sub_1C32C20(&ListViewObject_TypeInfo);
    byte_4C33AF1 = 1;
  }
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  ListViewObject___ctor((ListViewObject_o *)this, 0);
}


void ServantOperationListViewObject__Awake(ServantOperationListViewObject_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *dispObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  Il2CppObject *v7; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4C33AE5 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_UIDragDropListViewItem___);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_ServantOperationListViewItemDraw___);
    byte_4C33AE5 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1C32E7C(0);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_ServantOperationListViewItemDraw___);
  this->fields.itemDraw = (struct ServantOperationListViewItemDraw_o *)Component_object;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.itemDraw, (int32_t)Component_object, v5, v6);
  v7 = UnityEngine_Component__GetComponent_object_(
         (UnityEngine_Component_o *)this,
         (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_UIDragDropListViewItem___);
  this->fields.itemDrag = (struct UIDragDropListViewItem_o *)v7;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.itemDrag, (int32_t)v7, v8, v9);
}


void ServantOperationListViewObject__CallOnMoveEnd(ServantOperationListViewObject_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  CGThumbnailListItem_o *p_onMoveEnd; // x0
  struct System_Action_o *v5; // x19
  struct System_Action_o *onMoveEnd; // t1

  onMoveEnd = this->fields.onMoveEnd;
  p_onMoveEnd = (CGThumbnailListItem_o *)&this->fields.onMoveEnd;
  v5 = onMoveEnd;
  if ( onMoveEnd )
  {
    p_onMoveEnd->klass = 0;
    sub_1C32BC4(p_onMoveEnd, 0, v2, v3);
    ((void (__fastcall *)(intptr_t, intptr_t))v5->fields.invoke_impl)(v5->fields.method_code, v5->fields.method);
  }
}


UnityEngine_GameObject_o *ServantOperationListViewObject__CreateDragObject(
        ServantOperationListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *DragObject; // x19
  Il2CppObject *Component_object; // x0
  const MethodInfo *v5; // x3
  ServantOperationListViewObject_o *v6; // x20
  const MethodInfo *v7; // x1

  if ( (byte_4C33AEA & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_ServantOperationListViewObject___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C33AEA = 1;
  }
  DragObject = (UnityEngine_Object_o *)ListViewObject__CreateDragObject((ListViewObject_o *)this, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Component_object = (Il2CppObject *)UnityEngine_Object__op_Inequality(DragObject, 0, 0);
  if ( ((unsigned __int8)Component_object & 1) != 0 )
  {
    if ( !DragObject
      || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)DragObject,
                               (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_ServantOperationListViewObject___)) == 0 )
    {
      sub_1C32E7C(Component_object);
    }
    v6 = (ServantOperationListViewObject_o *)Component_object;
    ServantOperationListViewObject__Init((ServantOperationListViewObject_o *)Component_object, 2, 0, v5);
    ServantOperationListViewObject__SetupDisp(v6, v7);
  }
  return (UnityEngine_GameObject_o *)DragObject;
}


int32_t ServantOperationListViewObject__GetInitMode(int32_t initMode, const MethodInfo *method)
{
  int32_t v2; // w8

  if ( initMode == 2 )
    v2 = 3;
  else
    v2 = 0;
  if ( initMode == 1 )
    return 2;
  else
    return v2;
}


ServantOperationListViewItem_o *ServantOperationListViewObject__GetItem(
        ServantOperationListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11

  if ( (byte_4C33AE7 & 1) == 0 )
  {
    sub_1C32C20(&ServantOperationListViewItem_TypeInfo);
    byte_4C33AE7 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0;
  naturalAligment = ServantOperationListViewItem_TypeInfo->_2.naturalAligment;
  if ( linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment )
    return 0;
  if ( (ServantOperationListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == ServantOperationListViewItem_TypeInfo )
    return (ServantOperationListViewItem_o *)this->fields.linkItem;
  return 0;
}


int32_t ServantOperationListViewObject__GetState(
        ServantOperationListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  if ( (unsigned int)initMode < 3 )
    return 1;
  else
    return 2 * (initMode == 3);
}


void ServantOperationListViewObject__Init(
        ServantOperationListViewObject_o *this,
        int32_t initMode,
        System_Action_o *onMoveEnd,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x0
  int32_t dispMode; // w22
  int32_t state; // w23
  __int64 naturalAligment; // x9
  UnityEngine_Transform_o *transform; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x1
  int32_t v15; // w9
  int32_t v16; // w8

  if ( (byte_4C33AEB & 1) == 0 )
  {
    sub_1C32C20(&ServantOperationListViewItem_TypeInfo);
    byte_4C33AEB = 1;
  }
  linkItem = this->fields.linkItem;
  dispMode = this->fields.dispMode;
  state = this->fields.state;
  if ( !linkItem )
    goto LABEL_7;
  naturalAligment = ServantOperationListViewItem_TypeInfo->_2.naturalAligment;
  if ( linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (ServantOperationListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] != ServantOperationListViewItem_TypeInfo )
  {
    sub_1C3313C(linkItem);
LABEL_7:
    initMode = 0;
  }
  ListViewObject__SetVisible((ListViewObject_o *)this, initMode != 0, 0);
  ((void (__fastcall *)(ServantOperationListViewObject_o *, bool, const MethodInfo *))this->klass->vtable._9_SetInput.methodPtr)(
    this,
    initMode == 3,
    this->klass->vtable._9_SetInput.method);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0)) == 0) )
  {
    sub_1C32E7C(transform);
  }
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0);
  this->fields.onMoveEnd = onMoveEnd;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.onMoveEnd, (int32_t)onMoveEnd, v12, v13);
  if ( initMode == 1 )
    goto LABEL_13;
  if ( initMode == 3 )
  {
    v16 = 2;
    this->fields.dispMode = 2;
LABEL_16:
    v15 = 2 * (initMode == 3);
    goto LABEL_18;
  }
  if ( initMode != 2 )
  {
    v16 = 0;
    this->fields.dispMode = 0;
    if ( (unsigned int)initMode < 3 )
    {
      v15 = 1;
      goto LABEL_18;
    }
    goto LABEL_16;
  }
LABEL_13:
  this->fields.dispMode = initMode;
  v15 = 1;
  v16 = initMode;
LABEL_18:
  this->fields.state = v15;
  if ( !state || dispMode != v16 )
    ServantOperationListViewObject__SetupDisp(this, v14);
  ServantOperationListViewObject__CallOnMoveEnd(this, v14);
}


void ServantOperationListViewObject__InitItem(ServantOperationListViewObject_o *this, const MethodInfo *method)
{
  this->fields.state = 0;
}


bool ServantOperationListViewObject__IsCanDrag(ServantOperationListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  UITouchPress_o *manager; // x0
  __int64 naturalAligment; // x9
  struct ListViewItem_o *linkItem; // x1
  __int64 v7; // x10
  UnityEngine_Object_o *touchPress; // x20
  ServantOperationListViewObject_o *v10; // x0
  const MethodInfo *v11; // x1

  if ( (byte_4C33AE9 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&ServantOperationListViewItem_TypeInfo);
    sub_1C32C20(&ServantOperationListViewManager_TypeInfo);
    byte_4C33AE9 = 1;
  }
  manager = (UITouchPress_o *)this->fields.manager;
  if ( !manager )
    goto LABEL_19;
  naturalAligment = ServantOperationListViewManager_TypeInfo->_2.naturalAligment;
  if ( manager->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (ServantOperationListViewManager_c *)manager->klass->_2.typeHierarchy[naturalAligment - 1] != ServantOperationListViewManager_TypeInfo )
  {
    manager = (UITouchPress_o *)sub_1C3313C(manager);
    goto LABEL_19;
  }
  if ( (LODWORD(manager[5].fields.clickRange) & 0x80000000) != 0 )
  {
LABEL_12:
    touchPress = (UnityEngine_Object_o *)this->fields.touchPress;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(touchPress, 0, 0) )
      return 0;
    manager = this->fields.touchPress;
    if ( manager )
    {
      UITouchPress__PressReset(manager, 0);
      return 0;
    }
LABEL_19:
    sub_1C32E7C(manager);
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem
    || (v7 = ServantOperationListViewItem_TypeInfo->_2.naturalAligment,
        linkItem->klass->_2.naturalAligment >= (unsigned int)v7)
    && (ServantOperationListViewItem_c *)linkItem->klass->_2.typeHierarchy[v7 - 1] == ServantOperationListViewItem_TypeInfo )
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
  v10 = (ServantOperationListViewObject_o *)sub_1C3313C(this->fields.linkItem);
  return (unsigned __int8)ServantOperationListViewObject__CreateDragObject(v10, v11);
}


void ServantOperationListViewObject__OnClickSelect(ServantOperationListViewObject_o *this, const MethodInfo *method)
{
  ServantOperationListViewObject_o *v2; // x21
  struct ListViewItem_o *linkItem; // x19
  __int64 naturalAligment; // x9
  UnityEngine_Component_o *manager; // x20
  __int64 v6; // x10
  int m_CachedPtr_high; // w8
  UserServantEntity_o *v8; // x0
  __int64 *v9; // x8
  UserServantEntity_o *klass; // x0
  System_String_o *v11; // x1
  UnityEngine_Component_o *v12; // x0
  Il2CppObject *v13; // x2
  const MethodInfo *v14; // x1
  _QWORD *v15; // x0
  System_Reflection_MethodBase_o *v16; // x0
  UnityEngine_Component_o *v17; // x19
  ServantOperationListViewObject_o *v18; // x0
  const MethodInfo *v19; // x1

  v2 = this;
  if ( (byte_4C33AED & 1) == 0 )
  {
    sub_1C32C20(&ServantOperationListViewItem_TypeInfo);
    sub_1C32C20(&ServantOperationListViewManager_TypeInfo);
    sub_1C32C20(&Method_ServantOperationListViewObject_OnClickSelect__);
    sub_1C32C20(&TutorialFlag_TypeInfo);
    sub_1C32C20(&StringLiteral_9867/*"OnClickSelectListView"*/);
    sub_1C32C20(&StringLiteral_9838/*"OnClickChoiceModeItem"*/);
    sub_1C32C20(&StringLiteral_9864/*"OnClickPushModeItem"*/);
    this = (ServantOperationListViewObject_o *)sub_1C32C20(&StringLiteral_9860/*"OnClickLockModeItem"*/);
    byte_4C33AED = 1;
  }
  linkItem = v2->fields.linkItem;
  if ( linkItem )
  {
    naturalAligment = ServantOperationListViewItem_TypeInfo->_2.naturalAligment;
    if ( linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (ServantOperationListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] != ServantOperationListViewItem_TypeInfo )
    {
      v18 = (ServantOperationListViewObject_o *)sub_1C3313C(v2->fields.linkItem);
      ServantOperationListViewObject__OnLongPush(v18, v19);
      return;
    }
    manager = (UnityEngine_Component_o *)v2->fields.manager;
    if ( manager )
    {
      v6 = ServantOperationListViewManager_TypeInfo->_2.naturalAligment;
      if ( manager->klass->_2.naturalAligment >= (unsigned int)v6
        && (ServantOperationListViewManager_c *)manager->klass->_2.typeHierarchy[v6 - 1] == ServantOperationListViewManager_TypeInfo )
      {
        m_CachedPtr_high = HIDWORD(manager[19].fields.m_CachedPtr);
        switch ( m_CachedPtr_high )
        {
          case 3:
            if ( !ServantOperationListViewItem__get_IsCanNotSelectPush(
                    (ServantOperationListViewItem_o *)v2->fields.linkItem,
                    (const MethodInfo *)ServantOperationListViewItem_TypeInfo) )
            {
              v9 = &StringLiteral_9864/*"OnClickPushModeItem"*/;
              goto LABEL_27;
            }
            goto LABEL_30;
          case 2:
            klass = (UserServantEntity_o *)linkItem[1].klass;
            if ( !klass || !UserServantEntity__IsHeroine(klass, 0) )
              goto LABEL_26;
            if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
            if ( !TutorialFlag__Get_40328320(126, 0) )
            {
LABEL_26:
              v9 = &StringLiteral_9838/*"OnClickChoiceModeItem"*/;
              goto LABEL_27;
            }
            goto LABEL_30;
          case 1:
            v8 = (UserServantEntity_o *)linkItem[1].klass;
            if ( !v8 || !UserServantEntity__IsHeroine(v8, 0) )
              goto LABEL_17;
            if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
            if ( !TutorialFlag__Get_40328320(126, 0) )
            {
LABEL_17:
              v9 = &StringLiteral_9860/*"OnClickLockModeItem"*/;
LABEL_27:
              v11 = (System_String_o *)*v9;
              v12 = manager;
              v13 = (Il2CppObject *)linkItem;
LABEL_28:
              UnityEngine_Component__SendMessage(v12, v11, v13, 0);
              return;
            }
            goto LABEL_30;
        }
        if ( ServantOperationListViewItem__get_IsCanNotSelect(
               (ServantOperationListViewItem_o *)v2->fields.linkItem,
               (const MethodInfo *)ServantOperationListViewItem_TypeInfo) )
        {
LABEL_30:
          v15 = Method_ServantOperationListViewObject_OnClickSelect__;
          if ( (*((_BYTE *)Method_ServantOperationListViewObject_OnClickSelect__ + 83) & 2) != 0 )
            v15 = (_QWORD *)sub_1C32C38(Method_ServantOperationListViewObject_OnClickSelect__);
          v16 = (System_Reflection_MethodBase_o *)sub_1C32C04(v15, v15[4]);
          OverwriteAssetSoundName__PlaySystemSe(v16, 2, 0, 0);
          return;
        }
        v17 = (UnityEngine_Component_o *)v2->fields.manager;
        this = (ServantOperationListViewObject_o *)ServantOperationListViewObject__GetItem(v2, v14);
        if ( v17 )
        {
          v13 = (Il2CppObject *)this;
          v12 = v17;
          v11 = (System_String_o *)StringLiteral_9867/*"OnClickSelectListView"*/;
          goto LABEL_28;
        }
      }
    }
    sub_1C32E7C(this);
  }
}


void ServantOperationListViewObject__OnDestroy(ServantOperationListViewObject_o *this, const MethodInfo *method)
{
  CGThumbnailListItem_o *p_dragObject; // x19
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_GameObject_o *dragObject; // t1
  UnityEngine_Object_o *klass; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4C33AE6 & 1) == 0 )
  {
    sub_1C32C20(&NGUITools_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C33AE6 = 1;
  }
  dragObject = this->fields.dragObject;
  p_dragObject = (CGThumbnailListItem_o *)&this->fields.dragObject;
  v4 = (UnityEngine_Object_o *)dragObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(v4, 0, 0) )
  {
    klass = (UnityEngine_Object_o *)p_dragObject->klass;
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    NGUITools__Destroy(klass, 0);
    p_dragObject->klass = 0;
    sub_1C32BC4(p_dragObject, 0, v7, v8);
  }
}


void ServantOperationListViewObject__OnDragDropStart(ServantOperationListViewObject_o *this, const MethodInfo *method)
{
  UITouchPress_o *manager; // x0
  __int64 naturalAligment; // x9
  UnityEngine_Object_o *touchPress; // x20

  if ( (byte_4C33AEF & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&ServantOperationListViewManager_TypeInfo);
    byte_4C33AEF = 1;
  }
  manager = (UITouchPress_o *)this->fields.manager;
  if ( !manager )
    goto LABEL_14;
  naturalAligment = ServantOperationListViewManager_TypeInfo->_2.naturalAligment;
  if ( manager->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (ServantOperationListViewManager_c *)manager->klass->_2.typeHierarchy[naturalAligment - 1] != ServantOperationListViewManager_TypeInfo )
  {
    manager = (UITouchPress_o *)sub_1C3313C(manager);
    goto LABEL_14;
  }
  if ( (LODWORD(manager[5].fields.clickRange) & 0x80000000) == 0 )
  {
    touchPress = (UnityEngine_Object_o *)this->fields.touchPress;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(touchPress, 0, 0) )
    {
      manager = this->fields.touchPress;
      if ( manager )
      {
        UITouchPress__PressReset(manager, 0);
        return;
      }
LABEL_14:
      sub_1C32E7C(manager);
    }
  }
}


void ServantOperationListViewObject__OnLongPush(ServantOperationListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ServantOperationListViewManager_o *indicator; // x20
  ListViewItem_o *emptyMessageLabel; // x19
  __int64 naturalAligment; // x9
  __int64 v6; // x9
  int32_t sortIndex; // w21
  char v8; // w8
  const MethodInfo *v9; // x3

  indicator = (ServantOperationListViewManager_o *)this;
  if ( (byte_4C33AEE & 1) == 0 )
  {
    sub_1C32C20(&ServantOperationListViewItem_TypeInfo);
    this = (ServantOperationListViewObject_o *)sub_1C32C20(&ServantOperationListViewManager_TypeInfo);
    byte_4C33AEE = 1;
  }
  emptyMessageLabel = (ListViewItem_o *)indicator->fields.emptyMessageLabel;
  if ( emptyMessageLabel )
  {
    naturalAligment = ServantOperationListViewItem_TypeInfo->_2.naturalAligment;
    if ( emptyMessageLabel->klass->_2.naturalAligment >= (unsigned int)naturalAligment
      && (ServantOperationListViewItem_c *)emptyMessageLabel->klass->_2.typeHierarchy[naturalAligment - 1] == ServantOperationListViewItem_TypeInfo )
    {
      indicator = (ServantOperationListViewManager_o *)indicator->fields.indicator;
      if ( !indicator )
        goto LABEL_14;
      v6 = ServantOperationListViewManager_TypeInfo->_2.naturalAligment;
      if ( indicator->klass->_2.naturalAligment >= (unsigned int)v6
        && (ServantOperationListViewManager_c *)indicator->klass->_2.typeHierarchy[v6 - 1] == ServantOperationListViewManager_TypeInfo )
      {
        if ( ServantOperationListViewManager__IsDragEnable(
               indicator,
               (ServantOperationListViewItem_o *)emptyMessageLabel,
               v2) )
        {
          sortIndex = emptyMessageLabel->fields.sortIndex;
          v8 = ~ListViewItem__get_IsSelect(emptyMessageLabel, 0);
          ServantOperationListViewManager__SetDragStart(indicator, sortIndex, v8 & 1, v9);
        }
        return;
      }
    }
    else
    {
      sub_1C3313C(indicator->fields.emptyMessageLabel);
    }
    this = (ServantOperationListViewObject_o *)sub_1C3313C(indicator);
LABEL_14:
    sub_1C32E7C(this);
  }
}


void ServantOperationListViewObject__OnLongRelease(ServantOperationListViewObject_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *itemDrag; // x20
  UIDragDropListViewItem_o *manager; // x0
  __int64 naturalAligment; // x10

  if ( (byte_4C33AF0 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&ServantOperationListViewManager_TypeInfo);
    sub_1C32C20(&StringLiteral_9927/*"OnLongPushListView"*/);
    sub_1C32C20(&StringLiteral_4033/*"CancelDragEnd"*/);
    byte_4C33AF0 = 1;
  }
  if ( this->fields.linkItem )
  {
    itemDrag = (UnityEngine_Object_o *)this->fields.itemDrag;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(itemDrag, 0, 0) )
    {
      manager = this->fields.itemDrag;
      if ( !manager )
        goto LABEL_16;
      UIDragDropListViewItem__PressReset(manager, 0);
    }
    manager = (UIDragDropListViewItem_o *)this->fields.manager;
    if ( manager )
    {
      naturalAligment = ServantOperationListViewManager_TypeInfo->_2.naturalAligment;
      if ( manager->klass->_2.naturalAligment >= (unsigned int)naturalAligment
        && (ServantOperationListViewManager_c *)manager->klass->_2.typeHierarchy[naturalAligment - 1] == ServantOperationListViewManager_TypeInfo )
      {
        if ( HIDWORD(manager[3].fields.mListViewObject) )
          return;
        UnityEngine_Component__SendMessage_71195360(
          (UnityEngine_Component_o *)manager,
          (System_String_o *)StringLiteral_4033/*"CancelDragEnd"*/,
          0);
        manager = (UIDragDropListViewItem_o *)this->fields.manager;
        if ( manager )
        {
          UnityEngine_Component__SendMessage(
            (UnityEngine_Component_o *)manager,
            (System_String_o *)StringLiteral_9927/*"OnLongPushListView"*/,
            (Il2CppObject *)this->fields.linkItem,
            0);
          return;
        }
      }
    }
LABEL_16:
    sub_1C32E7C(manager);
  }
}


void ServantOperationListViewObject__SetInput(
        ServantOperationListViewObject_o *this,
        bool isInput,
        const MethodInfo *method)
{
  UnityEngine_Object_o *itemDraw; // x20
  const MethodInfo *v6; // x4
  struct ListViewItem_o *linkItem; // x20
  __int64 v8; // x9
  struct ListViewManager_o *manager; // x0
  __int64 naturalAligment; // x10
  ServantOperationListViewItemDraw_o *v11; // x19
  const MethodInfo *v12; // x3
  ServantOperationListViewObject_o *v13; // x0
  const MethodInfo *v14; // x1

  if ( (byte_4C33AE8 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&ServantOperationListViewItem_TypeInfo);
    sub_1C32C20(&ServantOperationListViewManager_TypeInfo);
    byte_4C33AE8 = 1;
  }
  ListViewObject__SetInput((ListViewObject_o *)this, isInput, 0);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(itemDraw, 0, 0) )
  {
    linkItem = this->fields.linkItem;
    if ( linkItem
      && ((v8 = ServantOperationListViewItem_TypeInfo->_2.naturalAligment,
           linkItem->klass->_2.naturalAligment < (unsigned int)v8)
       || (ServantOperationListViewItem_c *)linkItem->klass->_2.typeHierarchy[v8 - 1] != ServantOperationListViewItem_TypeInfo) )
    {
      v13 = (ServantOperationListViewObject_o *)sub_1C3313C(this->fields.linkItem);
      ServantOperationListViewObject__IsCanDrag(v13, v14);
    }
    else
    {
      manager = this->fields.manager;
      if ( !manager
        || (naturalAligment = ServantOperationListViewManager_TypeInfo->_2.naturalAligment,
            manager->klass->_2.naturalAligment < (unsigned int)naturalAligment)
        || (ServantOperationListViewManager_c *)manager->klass->_2.typeHierarchy[naturalAligment - 1] != ServantOperationListViewManager_TypeInfo
        || (v11 = this->fields.itemDraw,
            manager = (struct ListViewManager_o *)ServantOperationListViewManager__IsSelectEnable(
                                                    (ServantOperationListViewManager_o *)manager,
                                                    (ServantOperationListViewItem_o *)linkItem,
                                                    0,
                                                    0,
                                                    v6),
            !v11) )
      {
        sub_1C32E7C(manager);
      }
      ServantOperationListViewItemDraw__SetInput(
        v11,
        (ServantOperationListViewItem_o *)linkItem,
        (unsigned __int8)manager & 1,
        v12);
    }
  }
}


void ServantOperationListViewObject__SetItem(
        ServantOperationListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  ListViewObject__SetItem_43729388((ListViewObject_o *)this, item, seed, 0);
  this->fields.state = 0;
}


void ServantOperationListViewObject__SetItem_34979124(
        ServantOperationListViewObject_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ListViewObject__SetItem((ListViewObject_o *)this, item, 0);
  this->fields.state = 0;
}


void ServantOperationListViewObject__SetupDisp(ServantOperationListViewObject_o *this, const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x21
  ServantOperationListViewManager_o *manager; // x20
  __int64 naturalAligment; // x9
  __int64 v6; // x9
  bool v7; // w1
  UnityEngine_Object_o *itemDraw; // x22
  __int64 IsSelectEnable; // x0
  const MethodInfo *v10; // x4
  ServantOperationListViewItemDraw_o *v11; // x22
  int32_t dispMode; // w19
  const MethodInfo *v13; // x5

  if ( (byte_4C33AEC & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&ServantOperationListViewItem_TypeInfo);
    sub_1C32C20(&ServantOperationListViewManager_TypeInfo);
    byte_4C33AEC = 1;
  }
  manager = (ServantOperationListViewManager_o *)this->fields.manager;
  if ( manager )
  {
    naturalAligment = ServantOperationListViewManager_TypeInfo->_2.naturalAligment;
    if ( manager->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (ServantOperationListViewManager_c *)manager->klass->_2.typeHierarchy[naturalAligment - 1] != ServantOperationListViewManager_TypeInfo )
    {
      sub_1C3313C(this->fields.manager);
      goto LABEL_18;
    }
  }
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    v6 = ServantOperationListViewItem_TypeInfo->_2.naturalAligment;
    if ( linkItem->klass->_2.naturalAligment >= (unsigned int)v6
      && (ServantOperationListViewItem_c *)linkItem->klass->_2.typeHierarchy[v6 - 1] == ServantOperationListViewItem_TypeInfo )
    {
      v7 = this->fields.dispMode != 0;
      goto LABEL_11;
    }
LABEL_18:
    IsSelectEnable = sub_1C3313C(linkItem);
    goto LABEL_19;
  }
  v7 = 0;
LABEL_11:
  ListViewObject__SetVisible((ListViewObject_o *)this, v7, 0);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  IsSelectEnable = UnityEngine_Object__op_Equality(itemDraw, 0, 0);
  if ( (IsSelectEnable & 1) == 0 )
  {
    if ( manager )
    {
      v11 = this->fields.itemDraw;
      dispMode = this->fields.dispMode;
      IsSelectEnable = ServantOperationListViewManager__IsSelectEnable(
                         manager,
                         (ServantOperationListViewItem_o *)linkItem,
                         0,
                         0,
                         v10);
      if ( v11 )
      {
        ServantOperationListViewItemDraw__SetItem(
          v11,
          (ServantOperationListViewItem_o *)linkItem,
          dispMode,
          IsSelectEnable & 1,
          manager->fields.modeKind,
          v13);
        return;
      }
    }
LABEL_19:
    sub_1C32E7C(IsSelectEnable);
  }
}