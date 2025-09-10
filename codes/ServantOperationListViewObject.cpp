void ServantOperationListViewObject___ctor(ServantOperationListViewObject_o *this, const MethodInfo *method)
{
  if ( (byte_4C23421 & 1) == 0 )
  {
    sub_1C2D490(&ListViewObject_TypeInfo);
    byte_4C23421 = 1;
  }
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  ListViewObject___ctor((ListViewObject_o *)this, 0);
}


void ServantOperationListViewObject__Awake(ServantOperationListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  Il2CppObject *v8; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4C23415 & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_Component_GetComponent_UIDragDropListViewItem___);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_ServantOperationListViewItemDraw___);
    byte_4C23415 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1C2D6EC(0, v3);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_ServantOperationListViewItemDraw___);
  this->fields.itemDraw = (struct ServantOperationListViewItemDraw_o *)Component_object;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.itemDraw, (int32_t)Component_object, v6, v7);
  v8 = UnityEngine_Component__GetComponent_object_(
         (UnityEngine_Component_o *)this,
         (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_UIDragDropListViewItem___);
  this->fields.itemDrag = (struct UIDragDropListViewItem_o *)v8;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.itemDrag, (int32_t)v8, v9, v10);
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
    sub_1C2D434(p_onMoveEnd, 0, v2, v3);
    ((void (__fastcall *)(intptr_t, intptr_t))v5->fields.invoke_impl)(v5->fields.method_code, v5->fields.method);
  }
}


UnityEngine_GameObject_o *ServantOperationListViewObject__CreateDragObject(
        ServantOperationListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *DragObject; // x19
  Il2CppObject *Component_object; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x3
  ServantOperationListViewObject_o *v7; // x20
  const MethodInfo *v8; // x1

  if ( (byte_4C2341A & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_ServantOperationListViewObject___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2341A = 1;
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
                               (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_ServantOperationListViewObject___)) == 0 )
    {
      sub_1C2D6EC(Component_object, v5);
    }
    v7 = (ServantOperationListViewObject_o *)Component_object;
    ServantOperationListViewObject__Init((ServantOperationListViewObject_o *)Component_object, 2, 0, v6);
    ServantOperationListViewObject__SetupDisp(v7, v8);
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

  if ( (byte_4C23417 & 1) == 0 )
  {
    sub_1C2D490(&ServantOperationListViewItem_TypeInfo);
    byte_4C23417 = 1;
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
  __int64 v12; // x1
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x1
  int32_t v16; // w9
  int32_t v17; // w8

  if ( (byte_4C2341B & 1) == 0 )
  {
    sub_1C2D490(&ServantOperationListViewItem_TypeInfo);
    byte_4C2341B = 1;
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
    sub_1C2D9AC(linkItem);
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
    sub_1C2D6EC(transform, v12);
  }
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0);
  this->fields.onMoveEnd = onMoveEnd;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.onMoveEnd, (int32_t)onMoveEnd, v13, v14);
  if ( initMode == 1 )
    goto LABEL_13;
  if ( initMode == 3 )
  {
    v17 = 2;
    this->fields.dispMode = 2;
LABEL_16:
    v16 = 2 * (initMode == 3);
    goto LABEL_18;
  }
  if ( initMode != 2 )
  {
    v17 = 0;
    this->fields.dispMode = 0;
    if ( (unsigned int)initMode < 3 )
    {
      v16 = 1;
      goto LABEL_18;
    }
    goto LABEL_16;
  }
LABEL_13:
  this->fields.dispMode = initMode;
  v16 = 1;
  v17 = initMode;
LABEL_18:
  this->fields.state = v16;
  if ( !state || dispMode != v17 )
    ServantOperationListViewObject__SetupDisp(this, v15);
  ServantOperationListViewObject__CallOnMoveEnd(this, v15);
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

  if ( (byte_4C23419 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&ServantOperationListViewItem_TypeInfo);
    sub_1C2D490(&ServantOperationListViewManager_TypeInfo);
    byte_4C23419 = 1;
  }
  manager = (UITouchPress_o *)this->fields.manager;
  if ( !manager )
    goto LABEL_19;
  naturalAligment = ServantOperationListViewManager_TypeInfo->_2.naturalAligment;
  if ( manager->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (ServantOperationListViewManager_c *)manager->klass->_2.typeHierarchy[naturalAligment - 1] != ServantOperationListViewManager_TypeInfo )
  {
    manager = (UITouchPress_o *)sub_1C2D9AC(manager);
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
    sub_1C2D6EC(manager, method);
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
  v10 = (ServantOperationListViewObject_o *)sub_1C2D9AC(this->fields.linkItem);
  return (unsigned __int8)ServantOperationListViewObject__CreateDragObject(v10, v11);
}


void ServantOperationListViewObject__OnClickSelect(ServantOperationListViewObject_o *this, const MethodInfo *method)
{
  ServantOperationListViewObject_o *v2; // x21
  struct ListViewItem_o *linkItem; // x19
  ServantOperationListViewItem_c *v4; // x1
  __int64 naturalAligment; // x9
  UnityEngine_Component_o *manager; // x20
  __int64 v7; // x10
  int m_CachedPtr_high; // w8
  UserServantEntity_o *v9; // x0
  __int64 *v10; // x8
  UserServantEntity_o *klass; // x0
  System_String_o *v12; // x1
  UnityEngine_Component_o *v13; // x0
  Il2CppObject *v14; // x2
  const MethodInfo *v15; // x1
  _QWORD *v16; // x0
  System_Reflection_MethodBase_o *v17; // x0
  UnityEngine_Component_o *v18; // x19
  ServantOperationListViewObject_o *v19; // x0
  const MethodInfo *v20; // x1

  v2 = this;
  if ( (byte_4C2341D & 1) == 0 )
  {
    sub_1C2D490(&ServantOperationListViewItem_TypeInfo);
    sub_1C2D490(&ServantOperationListViewManager_TypeInfo);
    sub_1C2D490(&Method_ServantOperationListViewObject_OnClickSelect__);
    sub_1C2D490(&TutorialFlag_TypeInfo);
    sub_1C2D490(&StringLiteral_9862/*"OnClickSelectListView"*/);
    sub_1C2D490(&StringLiteral_9833/*"OnClickChoiceModeItem"*/);
    sub_1C2D490(&StringLiteral_9859/*"OnClickPushModeItem"*/);
    this = (ServantOperationListViewObject_o *)sub_1C2D490(&StringLiteral_9855/*"OnClickLockModeItem"*/);
    byte_4C2341D = 1;
  }
  linkItem = v2->fields.linkItem;
  if ( linkItem )
  {
    v4 = ServantOperationListViewItem_TypeInfo;
    naturalAligment = ServantOperationListViewItem_TypeInfo->_2.naturalAligment;
    if ( linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (ServantOperationListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] != ServantOperationListViewItem_TypeInfo )
    {
      v19 = (ServantOperationListViewObject_o *)sub_1C2D9AC(v2->fields.linkItem);
      ServantOperationListViewObject__OnLongPush(v19, v20);
      return;
    }
    manager = (UnityEngine_Component_o *)v2->fields.manager;
    if ( manager )
    {
      v7 = ServantOperationListViewManager_TypeInfo->_2.naturalAligment;
      if ( manager->klass->_2.naturalAligment >= (unsigned int)v7
        && (ServantOperationListViewManager_c *)manager->klass->_2.typeHierarchy[v7 - 1] == ServantOperationListViewManager_TypeInfo )
      {
        m_CachedPtr_high = HIDWORD(manager[19].fields.m_CachedPtr);
        switch ( m_CachedPtr_high )
        {
          case 3:
            if ( !ServantOperationListViewItem__get_IsCanNotSelectPush(
                    (ServantOperationListViewItem_o *)v2->fields.linkItem,
                    (const MethodInfo *)ServantOperationListViewItem_TypeInfo) )
            {
              v10 = &StringLiteral_9859/*"OnClickPushModeItem"*/;
              goto LABEL_27;
            }
            goto LABEL_30;
          case 2:
            klass = (UserServantEntity_o *)linkItem[1].klass;
            if ( !klass || !UserServantEntity__IsHeroine(klass, 0) )
              goto LABEL_26;
            if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
            if ( !TutorialFlag__Get_40206092(126, 0) )
            {
LABEL_26:
              v10 = &StringLiteral_9833/*"OnClickChoiceModeItem"*/;
              goto LABEL_27;
            }
            goto LABEL_30;
          case 1:
            v9 = (UserServantEntity_o *)linkItem[1].klass;
            if ( !v9 || !UserServantEntity__IsHeroine(v9, 0) )
              goto LABEL_17;
            if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
            if ( !TutorialFlag__Get_40206092(126, 0) )
            {
LABEL_17:
              v10 = &StringLiteral_9855/*"OnClickLockModeItem"*/;
LABEL_27:
              v12 = (System_String_o *)*v10;
              v13 = manager;
              v14 = (Il2CppObject *)linkItem;
LABEL_28:
              UnityEngine_Component__SendMessage(v13, v12, v14, 0);
              return;
            }
            goto LABEL_30;
        }
        if ( ServantOperationListViewItem__get_IsCanNotSelect(
               (ServantOperationListViewItem_o *)v2->fields.linkItem,
               (const MethodInfo *)ServantOperationListViewItem_TypeInfo) )
        {
LABEL_30:
          v16 = Method_ServantOperationListViewObject_OnClickSelect__;
          if ( (*((_BYTE *)Method_ServantOperationListViewObject_OnClickSelect__ + 83) & 2) != 0 )
            v16 = (_QWORD *)sub_1C2D4A8(Method_ServantOperationListViewObject_OnClickSelect__);
          v17 = (System_Reflection_MethodBase_o *)sub_1C2D474(v16, v16[4]);
          OverwriteAssetSoundName__PlaySystemSe(v17, 2, 0, 0);
          return;
        }
        v18 = (UnityEngine_Component_o *)v2->fields.manager;
        this = (ServantOperationListViewObject_o *)ServantOperationListViewObject__GetItem(v2, v15);
        if ( v18 )
        {
          v14 = (Il2CppObject *)this;
          v13 = v18;
          v12 = (System_String_o *)StringLiteral_9862/*"OnClickSelectListView"*/;
          goto LABEL_28;
        }
      }
    }
    sub_1C2D6EC(this, v4);
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

  if ( (byte_4C23416 & 1) == 0 )
  {
    sub_1C2D490(&NGUITools_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C23416 = 1;
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
    sub_1C2D434(p_dragObject, 0, v7, v8);
  }
}


void ServantOperationListViewObject__OnDragDropStart(ServantOperationListViewObject_o *this, const MethodInfo *method)
{
  UITouchPress_o *manager; // x0
  __int64 naturalAligment; // x9
  UnityEngine_Object_o *touchPress; // x20

  if ( (byte_4C2341F & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&ServantOperationListViewManager_TypeInfo);
    byte_4C2341F = 1;
  }
  manager = (UITouchPress_o *)this->fields.manager;
  if ( !manager )
    goto LABEL_14;
  naturalAligment = ServantOperationListViewManager_TypeInfo->_2.naturalAligment;
  if ( manager->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (ServantOperationListViewManager_c *)manager->klass->_2.typeHierarchy[naturalAligment - 1] != ServantOperationListViewManager_TypeInfo )
  {
    manager = (UITouchPress_o *)sub_1C2D9AC(manager);
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
      sub_1C2D6EC(manager, method);
    }
  }
}


void ServantOperationListViewObject__OnLongPush(ServantOperationListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ServantOperationListViewManager_o *indicator; // x20
  ListViewItem_o *emptyMessageLabel; // x19
  ServantOperationListViewItem_c *v5; // x1
  __int64 naturalAligment; // x9
  __int64 v7; // x9
  int32_t sortIndex; // w21
  char v9; // w8
  const MethodInfo *v10; // x3

  indicator = (ServantOperationListViewManager_o *)this;
  if ( (byte_4C2341E & 1) == 0 )
  {
    sub_1C2D490(&ServantOperationListViewItem_TypeInfo);
    this = (ServantOperationListViewObject_o *)sub_1C2D490(&ServantOperationListViewManager_TypeInfo);
    byte_4C2341E = 1;
  }
  emptyMessageLabel = (ListViewItem_o *)indicator->fields.emptyMessageLabel;
  if ( emptyMessageLabel )
  {
    v5 = ServantOperationListViewItem_TypeInfo;
    naturalAligment = ServantOperationListViewItem_TypeInfo->_2.naturalAligment;
    if ( emptyMessageLabel->klass->_2.naturalAligment >= (unsigned int)naturalAligment
      && (ServantOperationListViewItem_c *)emptyMessageLabel->klass->_2.typeHierarchy[naturalAligment - 1] == ServantOperationListViewItem_TypeInfo )
    {
      indicator = (ServantOperationListViewManager_o *)indicator->fields.indicator;
      if ( !indicator )
        goto LABEL_14;
      v7 = ServantOperationListViewManager_TypeInfo->_2.naturalAligment;
      if ( indicator->klass->_2.naturalAligment >= (unsigned int)v7
        && (ServantOperationListViewManager_c *)indicator->klass->_2.typeHierarchy[v7 - 1] == ServantOperationListViewManager_TypeInfo )
      {
        if ( ServantOperationListViewManager__IsDragEnable(
               indicator,
               (ServantOperationListViewItem_o *)emptyMessageLabel,
               v2) )
        {
          sortIndex = emptyMessageLabel->fields.sortIndex;
          v9 = ~ListViewItem__get_IsSelect(emptyMessageLabel, 0);
          ServantOperationListViewManager__SetDragStart(indicator, sortIndex, v9 & 1, v10);
        }
        return;
      }
    }
    else
    {
      sub_1C2D9AC(indicator->fields.emptyMessageLabel);
    }
    this = (ServantOperationListViewObject_o *)sub_1C2D9AC(indicator);
LABEL_14:
    sub_1C2D6EC(this, v5);
  }
}


void ServantOperationListViewObject__OnLongRelease(ServantOperationListViewObject_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *itemDrag; // x20
  __int64 v4; // x1
  UIDragDropListViewItem_o *manager; // x0
  __int64 naturalAligment; // x10

  if ( (byte_4C23420 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&ServantOperationListViewManager_TypeInfo);
    sub_1C2D490(&StringLiteral_9922/*"OnLongPushListView"*/);
    sub_1C2D490(&StringLiteral_4026/*"CancelDragEnd"*/);
    byte_4C23420 = 1;
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
        UnityEngine_Component__SendMessage_71135424(
          (UnityEngine_Component_o *)manager,
          (System_String_o *)StringLiteral_4026/*"CancelDragEnd"*/,
          0);
        manager = (UIDragDropListViewItem_o *)this->fields.manager;
        if ( manager )
        {
          UnityEngine_Component__SendMessage(
            (UnityEngine_Component_o *)manager,
            (System_String_o *)StringLiteral_9922/*"OnLongPushListView"*/,
            (Il2CppObject *)this->fields.linkItem,
            0);
          return;
        }
      }
    }
LABEL_16:
    sub_1C2D6EC(manager, v4);
  }
}


void ServantOperationListViewObject__SetInput(
        ServantOperationListViewObject_o *this,
        bool isInput,
        const MethodInfo *method)
{
  UnityEngine_Object_o *itemDraw; // x20
  ServantOperationListViewItem_c *v6; // x1
  const MethodInfo *v7; // x4
  struct ListViewItem_o *linkItem; // x20
  __int64 v9; // x9
  struct ListViewManager_o *manager; // x0
  __int64 naturalAligment; // x10
  ServantOperationListViewItemDraw_o *v12; // x19
  const MethodInfo *v13; // x3
  ServantOperationListViewObject_o *v14; // x0
  const MethodInfo *v15; // x1

  if ( (byte_4C23418 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&ServantOperationListViewItem_TypeInfo);
    sub_1C2D490(&ServantOperationListViewManager_TypeInfo);
    byte_4C23418 = 1;
  }
  ListViewObject__SetInput((ListViewObject_o *)this, isInput, 0);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(itemDraw, 0, 0) )
  {
    linkItem = this->fields.linkItem;
    if ( linkItem
      && ((v6 = ServantOperationListViewItem_TypeInfo,
           v9 = ServantOperationListViewItem_TypeInfo->_2.naturalAligment,
           linkItem->klass->_2.naturalAligment < (unsigned int)v9)
       || (ServantOperationListViewItem_c *)linkItem->klass->_2.typeHierarchy[v9 - 1] != ServantOperationListViewItem_TypeInfo) )
    {
      v14 = (ServantOperationListViewObject_o *)sub_1C2D9AC(this->fields.linkItem);
      ServantOperationListViewObject__IsCanDrag(v14, v15);
    }
    else
    {
      manager = this->fields.manager;
      if ( !manager
        || (naturalAligment = ServantOperationListViewManager_TypeInfo->_2.naturalAligment,
            manager->klass->_2.naturalAligment < (unsigned int)naturalAligment)
        || (ServantOperationListViewManager_c *)manager->klass->_2.typeHierarchy[naturalAligment - 1] != ServantOperationListViewManager_TypeInfo
        || (v12 = this->fields.itemDraw,
            manager = (struct ListViewManager_o *)ServantOperationListViewManager__IsSelectEnable(
                                                    (ServantOperationListViewManager_o *)manager,
                                                    (ServantOperationListViewItem_o *)linkItem,
                                                    0,
                                                    0,
                                                    v7),
            !v12) )
      {
        sub_1C2D6EC(manager, v6);
      }
      ServantOperationListViewItemDraw__SetInput(
        v12,
        (ServantOperationListViewItem_o *)linkItem,
        (unsigned __int8)manager & 1,
        v13);
    }
  }
}


void ServantOperationListViewObject__SetItem(
        ServantOperationListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  ListViewObject__SetItem_43593652((ListViewObject_o *)this, item, seed, 0);
  this->fields.state = 0;
}


void ServantOperationListViewObject__SetItem_34864036(
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
  __int64 v10; // x1
  const MethodInfo *v11; // x4
  ServantOperationListViewItemDraw_o *v12; // x22
  int32_t dispMode; // w19
  const MethodInfo *v14; // x5

  if ( (byte_4C2341C & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&ServantOperationListViewItem_TypeInfo);
    sub_1C2D490(&ServantOperationListViewManager_TypeInfo);
    byte_4C2341C = 1;
  }
  manager = (ServantOperationListViewManager_o *)this->fields.manager;
  if ( manager )
  {
    naturalAligment = ServantOperationListViewManager_TypeInfo->_2.naturalAligment;
    if ( manager->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (ServantOperationListViewManager_c *)manager->klass->_2.typeHierarchy[naturalAligment - 1] != ServantOperationListViewManager_TypeInfo )
    {
      sub_1C2D9AC(this->fields.manager);
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
    IsSelectEnable = sub_1C2D9AC(linkItem);
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
          IsSelectEnable & 1,
          manager->fields.modeKind,
          v14);
        return;
      }
    }
LABEL_19:
    sub_1C2D6EC(IsSelectEnable, v10);
  }
}