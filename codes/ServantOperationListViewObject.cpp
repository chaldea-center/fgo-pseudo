void __fastcall ServantOperationListViewObject___ctor(ServantOperationListViewObject_o *this, const MethodInfo *method)
{
  if ( (byte_4A5767F & 1) == 0 )
  {
    sub_1B885B0(&ListViewObject_TypeInfo);
    byte_4A5767F = 1;
  }
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  ListViewObject___ctor((ListViewObject_o *)this, 0LL);
}


void __fastcall ServantOperationListViewObject__Awake(ServantOperationListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  Il2CppObject *v8; // x0
  int32_t v9; // w2
  int32_t v10; // w3

  if ( (byte_4A57673 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_UIDragDropListViewItem___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_ServantOperationListViewItemDraw___);
    byte_4A57673 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1B8880C(0LL, v3);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_ServantOperationListViewItemDraw___);
  this->fields.itemDraw = (struct ServantOperationListViewItemDraw_o *)Component_object;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.itemDraw, (int32_t)Component_object, v6, v7);
  v8 = UnityEngine_Component__GetComponent_object_(
         (UnityEngine_Component_o *)this,
         (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_UIDragDropListViewItem___);
  this->fields.itemDrag = (struct UIDragDropListViewItem_o *)v8;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.itemDrag, (int32_t)v8, v9, v10);
}


void __fastcall ServantOperationListViewObject__CallOnMoveEnd(
        ServantOperationListViewObject_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  ServantStatusBattleListViewItem_o *p_onMoveEnd; // x0
  struct System_Action_o *v5; // x19
  struct System_Action_o *onMoveEnd; // t1

  onMoveEnd = this->fields.onMoveEnd;
  p_onMoveEnd = (ServantStatusBattleListViewItem_o *)&this->fields.onMoveEnd;
  v5 = onMoveEnd;
  if ( onMoveEnd )
  {
    p_onMoveEnd->klass = 0LL;
    sub_1B88554(p_onMoveEnd, 0, v2, v3);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v5->fields.m_target)(
      v5->fields.original_method_info,
      *(_QWORD *)&v5->fields.extra_arg);
  }
}


UnityEngine_GameObject_o *__fastcall ServantOperationListViewObject__CreateDragObject(
        ServantOperationListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *DragObject; // x19
  Il2CppObject *Component_object; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x3
  ServantOperationListViewObject_o *v7; // x20
  const MethodInfo *v8; // x1

  if ( (byte_4A57678 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_ServantOperationListViewObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A57678 = 1;
  }
  DragObject = (UnityEngine_Object_o *)ListViewObject__CreateDragObject((ListViewObject_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Component_object = (Il2CppObject *)UnityEngine_Object__op_Inequality(DragObject, 0LL, 0LL);
  if ( ((unsigned __int8)Component_object & 1) != 0 )
  {
    if ( !DragObject
      || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)DragObject,
                               (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_ServantOperationListViewObject___)) == 0LL )
    {
      sub_1B8880C(Component_object, v5);
    }
    v7 = (ServantOperationListViewObject_o *)Component_object;
    ServantOperationListViewObject__Init((ServantOperationListViewObject_o *)Component_object, 2, 0LL, v6);
    ServantOperationListViewObject__SetupDisp(v7, v8);
  }
  return (UnityEngine_GameObject_o *)DragObject;
}


int32_t __fastcall ServantOperationListViewObject__GetInitMode(int32_t initMode, const MethodInfo *method)
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


ServantOperationListViewItem_o *__fastcall ServantOperationListViewObject__GetItem(
        ServantOperationListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x11

  if ( (byte_4A57675 & 1) == 0 )
  {
    sub_1B885B0(&ServantOperationListViewItem_TypeInfo);
    byte_4A57675 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0LL;
  methodPtr_low = LOBYTE(ServantOperationListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
    return 0LL;
  if ( (ServantOperationListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == ServantOperationListViewItem_TypeInfo )
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
  struct ListViewItem_o *linkItem; // x0
  int32_t dispMode; // w23
  int32_t state; // w24
  __int64 methodPtr_low; // x9
  UnityEngine_Transform_o *transform; // x0
  __int64 v12; // x1
  int32_t v13; // w2
  int32_t v14; // w3
  int32_t v15; // w0
  const MethodInfo *v16; // x1
  int32_t v17; // w8

  if ( (byte_4A57679 & 1) == 0 )
  {
    sub_1B885B0(&ServantOperationListViewItem_TypeInfo);
    byte_4A57679 = 1;
  }
  linkItem = this->fields.linkItem;
  dispMode = this->fields.dispMode;
  state = this->fields.state;
  if ( !linkItem )
    goto LABEL_7;
  methodPtr_low = LOBYTE(ServantOperationListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (ServantOperationListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantOperationListViewItem_TypeInfo )
  {
    sub_1B88ACC(linkItem);
LABEL_7:
    initMode = 0;
  }
  ListViewObject__SetVisible((ListViewObject_o *)this, initMode != 0, 0LL);
  ((void (__fastcall *)(ServantOperationListViewObject_o *, bool, Il2CppMethodPointer))this->klass->vtable._9_SetInput.method)(
    this,
    initMode == 3,
    this->klass->vtable._10_Invalidation.methodPtr);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0LL),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_1B8880C(transform, v12);
  }
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0LL);
  this->fields.onMoveEnd = onMoveEnd;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.onMoveEnd, (int32_t)onMoveEnd, v13, v14);
  v15 = ServantOperationListViewItemDraw__GetDispMode(initMode, 0LL);
  v17 = 2 * (initMode == 3);
  if ( (unsigned int)initMode <= 2 )
    v17 = 1;
  this->fields.dispMode = v15;
  this->fields.state = v17;
  if ( !state || dispMode != v15 )
    ServantOperationListViewObject__SetupDisp(this, v16);
  ServantOperationListViewObject__CallOnMoveEnd(this, v16);
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
  ServantOperationListViewObject_o *v2; // x19
  ServantOperationListViewManager_o *manager; // x20
  __int64 methodPtr_low; // x9
  ServantOperationListViewItem_o *linkItem; // x1
  __int64 v6; // x10
  UnityEngine_Object_o *touchPress; // x20
  ServantOperationListViewObject_o *v9; // x0
  const MethodInfo *v10; // x1

  v2 = this;
  if ( (byte_4A57677 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&ServantOperationListViewItem_TypeInfo);
    this = (ServantOperationListViewObject_o *)sub_1B885B0(&ServantOperationListViewManager_TypeInfo);
    byte_4A57677 = 1;
  }
  manager = (ServantOperationListViewManager_o *)v2->fields.manager;
  if ( !manager )
    goto LABEL_19;
  methodPtr_low = LOBYTE(ServantOperationListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(manager->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (ServantOperationListViewManager_c *)manager->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantOperationListViewManager_TypeInfo )
  {
    this = (ServantOperationListViewObject_o *)sub_1B88ACC(v2->fields.manager);
    goto LABEL_19;
  }
  if ( !ServantOperationListViewManager__IsDragStart((ServantOperationListViewManager_o *)v2->fields.manager, 0LL) )
  {
LABEL_12:
    touchPress = (UnityEngine_Object_o *)v2->fields.touchPress;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(touchPress, 0LL, 0LL) )
      return 0;
    this = (ServantOperationListViewObject_o *)v2->fields.touchPress;
    if ( this )
    {
      UITouchPress__PressReset((UITouchPress_o *)this, 0LL);
      return 0;
    }
LABEL_19:
    sub_1B8880C(this, method);
  }
  linkItem = (ServantOperationListViewItem_o *)v2->fields.linkItem;
  if ( !linkItem
    || (v6 = LOBYTE(ServantOperationListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v6)
    && (ServantOperationListViewItem_c *)linkItem->klass->_2.typeHierarchy[v6 - 1] == ServantOperationListViewItem_TypeInfo )
  {
    if ( ServantOperationListViewManager__IsDragEnable(manager, linkItem, 0LL) )
      return 1;
    goto LABEL_12;
  }
  v9 = (ServantOperationListViewObject_o *)sub_1B88ACC(v2->fields.linkItem);
  return (unsigned __int8)ServantOperationListViewObject__CreateDragObject(v9, v10);
}


void __fastcall ServantOperationListViewObject__OnClickSelect(
        ServantOperationListViewObject_o *this,
        const MethodInfo *method)
{
  ServantOperationListViewObject_o *v2; // x21
  Il2CppObject *linkItem; // x19
  ServantOperationListViewItem_c *v4; // x1
  __int64 methodPtr_low; // x9
  UnityEngine_Component_o *manager; // x20
  __int64 v7; // x10
  int v8; // w8
  __int64 *v9; // x8
  System_String_o *v10; // x1
  UnityEngine_Component_o *v11; // x0
  Il2CppObject *v12; // x2
  const MethodInfo *v13; // x1
  _QWORD *v14; // x0
  System_Reflection_MethodBase_o *v15; // x0
  UnityEngine_Component_o *v16; // x19
  ServantOperationListViewObject_o *v17; // x0
  const MethodInfo *v18; // x1

  v2 = this;
  if ( (byte_4A5767B & 1) == 0 )
  {
    sub_1B885B0(&ServantOperationListViewItem_TypeInfo);
    sub_1B885B0(&ServantOperationListViewManager_TypeInfo);
    sub_1B885B0(&Method_ServantOperationListViewObject_OnClickSelect__);
    sub_1B885B0(&TutorialFlag_TypeInfo);
    sub_1B885B0(&StringLiteral_9864/*"OnClickSelectListView"*/);
    sub_1B885B0(&StringLiteral_9837/*"OnClickChoiceModeItem"*/);
    sub_1B885B0(&StringLiteral_9861/*"OnClickPushModeItem"*/);
    this = (ServantOperationListViewObject_o *)sub_1B885B0(&StringLiteral_9859/*"OnClickLockModeItem"*/);
    byte_4A5767B = 1;
  }
  linkItem = (Il2CppObject *)v2->fields.linkItem;
  if ( linkItem )
  {
    v4 = ServantOperationListViewItem_TypeInfo;
    methodPtr_low = LOBYTE(ServantOperationListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(linkItem->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
      || (ServantOperationListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantOperationListViewItem_TypeInfo )
    {
      v17 = (ServantOperationListViewObject_o *)sub_1B88ACC(v2->fields.linkItem);
      ServantOperationListViewObject__OnLongPush(v17, v18);
      return;
    }
    manager = (UnityEngine_Component_o *)v2->fields.manager;
    if ( manager )
    {
      v7 = LOBYTE(ServantOperationListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(manager->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v7
        && (ServantOperationListViewManager_c *)manager->klass->_2.typeHierarchy[v7 - 1] == ServantOperationListViewManager_TypeInfo )
      {
        v8 = *((_DWORD *)&manager[19].fields + 1);
        switch ( v8 )
        {
          case 3:
            if ( !ServantOperationListViewItem__get_IsCanNotSelectPush(
                    (ServantOperationListViewItem_o *)v2->fields.linkItem,
                    0LL) )
            {
              v9 = &StringLiteral_9861/*"OnClickPushModeItem"*/;
              goto LABEL_25;
            }
            goto LABEL_28;
          case 2:
            if ( !ServantOperationListViewItem__get_IsHeroine(
                    (ServantOperationListViewItem_o *)v2->fields.linkItem,
                    0LL) )
              goto LABEL_24;
            if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
            if ( !TutorialFlag__Get_37688364(126, 0LL) )
            {
LABEL_24:
              v9 = &StringLiteral_9837/*"OnClickChoiceModeItem"*/;
              goto LABEL_25;
            }
            goto LABEL_28;
          case 1:
            if ( !ServantOperationListViewItem__get_IsHeroine(
                    (ServantOperationListViewItem_o *)v2->fields.linkItem,
                    0LL) )
              goto LABEL_16;
            if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
            if ( !TutorialFlag__Get_37688364(126, 0LL) )
            {
LABEL_16:
              v9 = &StringLiteral_9859/*"OnClickLockModeItem"*/;
LABEL_25:
              v10 = (System_String_o *)*v9;
              v11 = manager;
              v12 = linkItem;
LABEL_26:
              UnityEngine_Component__SendMessage(v11, v10, v12, 0LL);
              return;
            }
            goto LABEL_28;
        }
        if ( ServantOperationListViewItem__get_IsCanNotSelect(
               (ServantOperationListViewItem_o *)v2->fields.linkItem,
               0LL) )
        {
LABEL_28:
          v14 = Method_ServantOperationListViewObject_OnClickSelect__;
          if ( (*((_BYTE *)Method_ServantOperationListViewObject_OnClickSelect__ + 83) & 2) != 0 )
            v14 = (_QWORD *)sub_1B885C8(Method_ServantOperationListViewObject_OnClickSelect__);
          v15 = (System_Reflection_MethodBase_o *)sub_1B88594(v14, v14[4]);
          OverwriteAssetSoundName__PlaySystemSe(v15, 2, 0LL);
          return;
        }
        v16 = (UnityEngine_Component_o *)v2->fields.manager;
        this = (ServantOperationListViewObject_o *)ServantOperationListViewObject__GetItem(v2, v13);
        if ( v16 )
        {
          v12 = (Il2CppObject *)this;
          v11 = v16;
          v10 = (System_String_o *)StringLiteral_9864/*"OnClickSelectListView"*/;
          goto LABEL_26;
        }
      }
    }
    sub_1B8880C(this, v4);
  }
}


void __fastcall ServantOperationListViewObject__OnDestroy(
        ServantOperationListViewObject_o *this,
        const MethodInfo *method)
{
  ServantStatusBattleListViewItem_o *p_dragObject; // x19
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_GameObject_o *dragObject; // t1
  UnityEngine_Object_o *klass; // x20
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_4A57674 & 1) == 0 )
  {
    sub_1B885B0(&NGUITools_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A57674 = 1;
  }
  dragObject = this->fields.dragObject;
  p_dragObject = (ServantStatusBattleListViewItem_o *)&this->fields.dragObject;
  v4 = (UnityEngine_Object_o *)dragObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(v4, 0LL, 0LL) )
  {
    klass = (UnityEngine_Object_o *)p_dragObject->klass;
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    NGUITools__Destroy(klass, 0LL);
    p_dragObject->klass = 0LL;
    sub_1B88554(p_dragObject, 0, v7, v8);
  }
}


void __fastcall ServantOperationListViewObject__OnDragDropStart(
        ServantOperationListViewObject_o *this,
        const MethodInfo *method)
{
  UITouchPress_o *manager; // x0
  __int64 methodPtr_low; // x9
  UnityEngine_Object_o *touchPress; // x20

  if ( (byte_4A5767D & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&ServantOperationListViewManager_TypeInfo);
    byte_4A5767D = 1;
  }
  manager = (UITouchPress_o *)this->fields.manager;
  if ( !manager )
    goto LABEL_14;
  methodPtr_low = LOBYTE(ServantOperationListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(manager->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (ServantOperationListViewManager_c *)manager->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantOperationListViewManager_TypeInfo )
  {
    manager = (UITouchPress_o *)sub_1B88ACC(manager);
    goto LABEL_14;
  }
  if ( ServantOperationListViewManager__IsDragStart((ServantOperationListViewManager_o *)manager, 0LL) )
  {
    touchPress = (UnityEngine_Object_o *)this->fields.touchPress;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(touchPress, 0LL, 0LL) )
    {
      manager = this->fields.touchPress;
      if ( manager )
      {
        UITouchPress__PressReset(manager, 0LL);
        return;
      }
LABEL_14:
      sub_1B8880C(manager, method);
    }
  }
}


void __fastcall ServantOperationListViewObject__OnLongPush(
        ServantOperationListViewObject_o *this,
        const MethodInfo *method)
{
  ServantOperationListViewManager_o *indicator; // x20
  ListViewItem_o *emptyMessageLabel; // x19
  ServantOperationListViewItem_c *v4; // x1
  __int64 methodPtr_low; // x9
  __int64 v6; // x9
  int32_t sortIndex; // w21
  char v8; // w8

  indicator = (ServantOperationListViewManager_o *)this;
  if ( (byte_4A5767C & 1) == 0 )
  {
    sub_1B885B0(&ServantOperationListViewItem_TypeInfo);
    this = (ServantOperationListViewObject_o *)sub_1B885B0(&ServantOperationListViewManager_TypeInfo);
    byte_4A5767C = 1;
  }
  emptyMessageLabel = (ListViewItem_o *)indicator->fields.emptyMessageLabel;
  if ( emptyMessageLabel )
  {
    v4 = ServantOperationListViewItem_TypeInfo;
    methodPtr_low = LOBYTE(ServantOperationListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(emptyMessageLabel->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
      && (ServantOperationListViewItem_c *)emptyMessageLabel->klass->_2.typeHierarchy[methodPtr_low - 1] == ServantOperationListViewItem_TypeInfo )
    {
      indicator = (ServantOperationListViewManager_o *)indicator->fields.indicator;
      if ( !indicator )
        goto LABEL_14;
      v6 = LOBYTE(ServantOperationListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(indicator->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v6
        && (ServantOperationListViewManager_c *)indicator->klass->_2.typeHierarchy[v6 - 1] == ServantOperationListViewManager_TypeInfo )
      {
        if ( ServantOperationListViewManager__IsDragEnable(
               indicator,
               (ServantOperationListViewItem_o *)emptyMessageLabel,
               0LL) )
        {
          sortIndex = emptyMessageLabel->fields.sortIndex;
          v8 = ~ListViewItem__get_IsSelect(emptyMessageLabel, 0LL);
          ServantOperationListViewManager__SetDragStart(indicator, sortIndex, v8 & 1, 0LL);
        }
        return;
      }
    }
    else
    {
      sub_1B88ACC(indicator->fields.emptyMessageLabel);
    }
    this = (ServantOperationListViewObject_o *)sub_1B88ACC(indicator);
LABEL_14:
    sub_1B8880C(this, v4);
  }
}


void __fastcall ServantOperationListViewObject__OnLongRelease(
        ServantOperationListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *itemDrag; // x20
  __int64 v4; // x1
  UIDragDropListViewItem_o *manager; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4A5767E & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&ServantOperationListViewManager_TypeInfo);
    sub_1B885B0(&StringLiteral_9921/*"OnLongPushListView"*/);
    sub_1B885B0(&StringLiteral_4055/*"CancelDragEnd"*/);
    byte_4A5767E = 1;
  }
  if ( this->fields.linkItem )
  {
    itemDrag = (UnityEngine_Object_o *)this->fields.itemDrag;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(itemDrag, 0LL, 0LL) )
    {
      manager = this->fields.itemDrag;
      if ( !manager )
        goto LABEL_16;
      UIDragDropListViewItem__PressReset(manager, 0LL);
    }
    manager = (UIDragDropListViewItem_o *)this->fields.manager;
    if ( manager )
    {
      methodPtr_low = LOBYTE(ServantOperationListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(manager->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
        && (ServantOperationListViewManager_c *)manager->klass->_2.typeHierarchy[methodPtr_low - 1] == ServantOperationListViewManager_TypeInfo )
      {
        if ( HIDWORD(manager[3].fields.mListViewObject) )
          return;
        UnityEngine_Component__SendMessage_69430620(
          (UnityEngine_Component_o *)manager,
          (System_String_o *)StringLiteral_4055/*"CancelDragEnd"*/,
          0LL);
        manager = (UIDragDropListViewItem_o *)this->fields.manager;
        if ( manager )
        {
          UnityEngine_Component__SendMessage(
            (UnityEngine_Component_o *)manager,
            (System_String_o *)StringLiteral_9921/*"OnLongPushListView"*/,
            (Il2CppObject *)this->fields.linkItem,
            0LL);
          return;
        }
      }
    }
LABEL_16:
    sub_1B8880C(manager, v4);
  }
}


void __fastcall ServantOperationListViewObject__SetInput(
        ServantOperationListViewObject_o *this,
        bool isInput,
        const MethodInfo *method)
{
  UnityEngine_Object_o *itemDraw; // x20
  ServantOperationListViewItem_c *v6; // x1
  struct ListViewItem_o *linkItem; // x20
  __int64 v8; // x9
  struct ListViewManager_o *manager; // x0
  __int64 methodPtr_low; // x10
  ServantOperationListViewItemDraw_o *v11; // x19
  ServantOperationListViewObject_o *v12; // x0
  const MethodInfo *v13; // x1

  if ( (byte_4A57676 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&ServantOperationListViewItem_TypeInfo);
    sub_1B885B0(&ServantOperationListViewManager_TypeInfo);
    byte_4A57676 = 1;
  }
  ListViewObject__SetInput((ListViewObject_o *)this, isInput, 0LL);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(itemDraw, 0LL, 0LL) )
  {
    linkItem = this->fields.linkItem;
    if ( linkItem
      && ((v6 = ServantOperationListViewItem_TypeInfo,
           v8 = LOBYTE(ServantOperationListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
           LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)v8)
       || (ServantOperationListViewItem_c *)linkItem->klass->_2.typeHierarchy[v8 - 1] != ServantOperationListViewItem_TypeInfo) )
    {
      v12 = (ServantOperationListViewObject_o *)sub_1B88ACC(this->fields.linkItem);
      ServantOperationListViewObject__IsCanDrag(v12, v13);
    }
    else
    {
      manager = this->fields.manager;
      if ( !manager
        || (methodPtr_low = LOBYTE(ServantOperationListViewManager_TypeInfo->vtable._0_Equals.methodPtr),
            LOBYTE(manager->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
        || (ServantOperationListViewManager_c *)manager->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantOperationListViewManager_TypeInfo
        || (v11 = this->fields.itemDraw,
            manager = (struct ListViewManager_o *)ServantOperationListViewManager__IsSelectEnable(
                                                    (ServantOperationListViewManager_o *)manager,
                                                    (ServantOperationListViewItem_o *)linkItem,
                                                    0,
                                                    0,
                                                    0LL),
            !v11) )
      {
        sub_1B8880C(manager, v6);
      }
      ServantOperationListViewItemDraw__SetInput(
        v11,
        (ServantOperationListViewItem_o *)linkItem,
        (unsigned __int8)manager & 1,
        0LL);
    }
  }
}


void __fastcall ServantOperationListViewObject__SetItem(
        ServantOperationListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  ListViewObject__SetItem_40756536((ListViewObject_o *)this, item, seed, 0LL);
  this->fields.state = 0;
}


void __fastcall ServantOperationListViewObject__SetItem_32757308(
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
  ServantOperationListViewManager_o *manager; // x20
  __int64 methodPtr_low; // x9
  __int64 v6; // x9
  bool v7; // w1
  UnityEngine_Object_o *itemDraw; // x22
  __int64 IsSelectEnable; // x0
  __int64 v10; // x1
  ServantOperationListViewItemDraw_o *v11; // x22
  int32_t dispMode; // w19

  if ( (byte_4A5767A & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&ServantOperationListViewItem_TypeInfo);
    sub_1B885B0(&ServantOperationListViewManager_TypeInfo);
    byte_4A5767A = 1;
  }
  manager = (ServantOperationListViewManager_o *)this->fields.manager;
  if ( manager )
  {
    methodPtr_low = LOBYTE(ServantOperationListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(manager->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (ServantOperationListViewManager_c *)manager->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantOperationListViewManager_TypeInfo )
    {
      sub_1B88ACC(this->fields.manager);
      goto LABEL_18;
    }
  }
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    v6 = LOBYTE(ServantOperationListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v6
      && (ServantOperationListViewItem_c *)linkItem->klass->_2.typeHierarchy[v6 - 1] == ServantOperationListViewItem_TypeInfo )
    {
      v7 = this->fields.dispMode != 0;
      goto LABEL_11;
    }
LABEL_18:
    IsSelectEnable = sub_1B88ACC(linkItem);
    goto LABEL_19;
  }
  v7 = 0;
LABEL_11:
  ListViewObject__SetVisible((ListViewObject_o *)this, v7, 0LL);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  IsSelectEnable = UnityEngine_Object__op_Equality(itemDraw, 0LL, 0LL);
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
                         0LL);
      if ( v11 )
      {
        ServantOperationListViewItemDraw__SetItem(
          v11,
          (ServantOperationListViewItem_o *)linkItem,
          dispMode,
          IsSelectEnable & 1,
          manager->fields.modeKind,
          0LL);
        return;
      }
    }
LABEL_19:
    sub_1B8880C(IsSelectEnable, v10);
  }
}