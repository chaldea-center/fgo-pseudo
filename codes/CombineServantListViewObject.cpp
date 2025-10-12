void CombineServantListViewObject___ctor(CombineServantListViewObject_o *this, const MethodInfo *method)
{
  if ( (byte_4C3BC02 & 1) == 0 )
  {
    sub_1C32C20(&ListViewObject_TypeInfo);
    byte_4C3BC02 = 1;
  }
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  ListViewObject___ctor((ListViewObject_o *)this, 0);
}


void CombineServantListViewObject__Awake(CombineServantListViewObject_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *dispObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  Il2CppObject *v7; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4C3BBF5 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_UIDragDropListViewItem___);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_CombineServantListViewItemDraw___);
    byte_4C3BBF5 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1C32E7C(0);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_CombineServantListViewItemDraw___);
  this->fields.itemDraw = (struct CombineServantListViewItemDraw_o *)Component_object;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.itemDraw, (int32_t)Component_object, v5, v6);
  v7 = UnityEngine_Component__GetComponent_object_(
         (UnityEngine_Component_o *)this,
         (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_UIDragDropListViewItem___);
  this->fields.itemDrag = (struct UIDragDropListViewItem_o *)v7;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.itemDrag, (int32_t)v7, v8, v9);
}


UnityEngine_GameObject_o *CombineServantListViewObject__CreateDragObject(
        CombineServantListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *DragObject; // x19
  Il2CppObject *Component_object; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4C3BBFA & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_CombineServantListViewObject___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3BBFA = 1;
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
                               (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_CombineServantListViewObject___)) == 0 )
    {
      sub_1C32E7C(Component_object);
    }
    CombineServantListViewObject__Init_48793740((CombineServantListViewObject_o *)Component_object, 2, v5);
  }
  return (UnityEngine_GameObject_o *)DragObject;
}


CombineServantListViewItem_o *CombineServantListViewObject__GetItem(
        CombineServantListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11

  if ( (byte_4C3BBF7 & 1) == 0 )
  {
    sub_1C32C20(&CombineServantListViewItem_TypeInfo);
    byte_4C3BBF7 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0;
  naturalAligment = CombineServantListViewItem_TypeInfo->_2.naturalAligment;
  if ( linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment )
    return 0;
  if ( (CombineServantListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == CombineServantListViewItem_TypeInfo )
    return (CombineServantListViewItem_o *)this->fields.linkItem;
  return 0;
}


void CombineServantListViewObject__Init(
        CombineServantListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        UnityEngine_Vector3_o position,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x0
  int32_t dispMode; // w22
  int32_t state; // w8
  __int64 naturalAligment; // x10
  unsigned int v13; // w23
  bool v14; // w21
  bool v15; // w24
  UnityEngine_Transform_o *transform; // x0
  bool v17; // w24
  CGThumbnailListItem_o *p_callbackFunc; // x21
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  const MethodInfo *v21; // x1
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  int32_t v24; // w9
  CGThumbnailListItem_c *klass; // x19

  if ( (byte_4C3BBFB & 1) == 0 )
  {
    sub_1C32C20(&CombineServantListViewItem_TypeInfo);
    byte_4C3BBFB = 1;
  }
  linkItem = this->fields.linkItem;
  dispMode = this->fields.dispMode;
  state = this->fields.state;
  if ( !linkItem )
    goto LABEL_7;
  naturalAligment = CombineServantListViewItem_TypeInfo->_2.naturalAligment;
  if ( linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (v13 = initMode,
        (CombineServantListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] != CombineServantListViewItem_TypeInfo) )
  {
    sub_1C3313C(linkItem);
LABEL_7:
    v13 = 0;
  }
  v14 = initMode == 4;
  v15 = state == 0;
  ListViewObject__SetVisible((ListViewObject_o *)this, v13 != 0, 0);
  ((void (__fastcall *)(CombineServantListViewObject_o *, bool, const MethodInfo *))this->klass->vtable._9_SetInput.methodPtr)(
    this,
    v13 == 3,
    this->klass->vtable._9_SetInput.method);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0)) == 0) )
  {
    sub_1C32E7C(transform);
  }
  v17 = v14 || v15;
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0);
  this->fields.callbackFunc = callbackFunc;
  p_callbackFunc = (CGThumbnailListItem_o *)&this->fields.callbackFunc;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callbackFunc, v19, v20);
  if ( v13 <= 4 )
  {
    v24 = dword_C44640[v13];
    this->fields.dispMode = dword_C4462C[v13];
    this->fields.state = v24;
  }
  if ( v17 || dispMode != this->fields.dispMode )
    CombineServantListViewObject__SetupDisp(this, v21);
  klass = p_callbackFunc->klass;
  if ( p_callbackFunc->klass )
  {
    p_callbackFunc->klass = 0;
    sub_1C32BC4(p_callbackFunc, 0, v22, v23);
    ((void (__fastcall *)(Il2CppClass *, _QWORD))klass->_1.namespaze)(
      klass->_1.element_class,
      *(_QWORD *)&klass->_1.byval_arg.bits);
  }
}


void CombineServantListViewObject__InitItem(CombineServantListViewObject_o *this, const MethodInfo *method)
{
  this->fields.state = 0;
}


// local variable allocation has failed, the output may be wrong!
void CombineServantListViewObject__Init_48793740(
        CombineServantListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  float v4; // s0
  int v5; // s1 OVERLAPPED

  if ( !byte_4C313D1 )
  {
    sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
    byte_4C313D1 = 1;
  }
  CombineServantListViewObject__Init(this, initMode, 0, v4, *(UnityEngine_Vector3_o *)&v5, v3);
}


// local variable allocation has failed, the output may be wrong!
void CombineServantListViewObject__Init_48795944(
        CombineServantListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        const MethodInfo *method)
{
  int v5; // s1 OVERLAPPED

  if ( !byte_4C313D1 )
  {
    sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
    byte_4C313D1 = 1;
  }
  CombineServantListViewObject__Init(this, initMode, callbackFunc, delay, *(UnityEngine_Vector3_o *)&v5, method);
}


// local variable allocation has failed, the output may be wrong!
void CombineServantListViewObject__Init_48796028(
        CombineServantListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  float v4; // s0
  int v5; // s1 OVERLAPPED

  if ( !byte_4C313D1 )
  {
    sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
    byte_4C313D1 = 1;
  }
  CombineServantListViewObject__Init(this, initMode, callbackFunc, v4, *(UnityEngine_Vector3_o *)&v5, method);
}


bool CombineServantListViewObject__IsCanDrag(CombineServantListViewObject_o *this, const MethodInfo *method)
{
  CombineServantListViewObject_o *v2; // x19
  CombineServantListViewManager_o *manager; // x20
  __int64 naturalAligment; // x9
  CombineServantListViewItem_o *linkItem; // x1
  __int64 v6; // x10
  UnityEngine_Object_o *touchPress; // x20
  CombineServantListViewObject_o *v9; // x0
  const MethodInfo *v10; // x1

  v2 = this;
  if ( (byte_4C3BBF9 & 1) == 0 )
  {
    sub_1C32C20(&CombineServantListViewItem_TypeInfo);
    sub_1C32C20(&CombineServantListViewManager_TypeInfo);
    this = (CombineServantListViewObject_o *)sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3BBF9 = 1;
  }
  manager = (CombineServantListViewManager_o *)v2->fields.manager;
  if ( !manager )
    goto LABEL_19;
  naturalAligment = CombineServantListViewManager_TypeInfo->_2.naturalAligment;
  if ( manager->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (CombineServantListViewManager_c *)manager->klass->_2.typeHierarchy[naturalAligment - 1] != CombineServantListViewManager_TypeInfo )
  {
    sub_1C3313C(v2->fields.manager);
    goto LABEL_19;
  }
  if ( !CombineServantListViewManager__IsDragStart((CombineServantListViewManager_o *)v2->fields.manager, 0) )
  {
LABEL_12:
    touchPress = (UnityEngine_Object_o *)v2->fields.touchPress;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(touchPress, 0, 0) )
      return 0;
    this = (CombineServantListViewObject_o *)v2->fields.touchPress;
    if ( this )
    {
      UITouchPress__PressReset((UITouchPress_o *)this, 0);
      return 0;
    }
LABEL_19:
    sub_1C32E7C(this);
  }
  linkItem = (CombineServantListViewItem_o *)v2->fields.linkItem;
  if ( !linkItem
    || (v6 = CombineServantListViewItem_TypeInfo->_2.naturalAligment,
        linkItem->klass->_2.naturalAligment >= (unsigned int)v6)
    && (CombineServantListViewItem_c *)linkItem->klass->_2.typeHierarchy[v6 - 1] == CombineServantListViewItem_TypeInfo )
  {
    if ( CombineServantListViewManager__IsDragEnable(manager, linkItem, 0) )
      return 1;
    goto LABEL_12;
  }
  sub_1C3313C(v2->fields.linkItem);
  return (unsigned __int8)CombineServantListViewObject__CreateDragObject(v9, v10);
}


void CombineServantListViewObject__OnClickSelect(CombineServantListViewObject_o *this, const MethodInfo *method)
{
  CombineServantListViewManager_o *manager; // x21
  CombineServantListViewObject_o *v3; // x19
  CombineServantListViewItem_o *linkItem; // x20
  __int64 naturalAligment; // x9
  __int64 v6; // x9
  int32_t modeKind; // w8
  int64_t v8; // x0
  bool v9; // w21
  _QWORD *v10; // x8
  System_Reflection_MethodBase_o *v11; // x0
  const MethodInfo *v12; // x1
  _QWORD *v13; // x0
  int64_t UserSvtId; // x0
  bool v15; // w21
  _QWORD *v16; // x8
  __int64 *v17; // x8
  _QWORD *v18; // x0
  int32_t v19; // w20
  System_Reflection_MethodBase_o *v20; // x0

  v3 = this;
  if ( (byte_4C3BBFE & 1) == 0 )
  {
    sub_1C32C20(&CombineServantListViewItem_TypeInfo);
    sub_1C32C20(&CombineServantListViewManager_TypeInfo);
    sub_1C32C20(&Method_CombineServantListViewObject_OnClickSelect__);
    sub_1C32C20(&StringLiteral_9866/*"OnClickSelectBase"*/);
    sub_1C32C20(&StringLiteral_9868/*"OnClickSelectMaterial"*/);
    this = (CombineServantListViewObject_o *)sub_1C32C20(&StringLiteral_9870/*"OnClickSelectPush"*/);
    byte_4C3BBFE = 1;
  }
  linkItem = (CombineServantListViewItem_o *)v3->fields.linkItem;
  if ( linkItem )
  {
    naturalAligment = CombineServantListViewItem_TypeInfo->_2.naturalAligment;
    if ( linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment
      && (CombineServantListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == CombineServantListViewItem_TypeInfo )
    {
      manager = (CombineServantListViewManager_o *)v3->fields.manager;
      if ( !manager )
        goto LABEL_52;
      v6 = CombineServantListViewManager_TypeInfo->_2.naturalAligment;
      if ( manager->klass->_2.naturalAligment >= (unsigned int)v6
        && (CombineServantListViewManager_c *)manager->klass->_2.typeHierarchy[v6 - 1] == CombineServantListViewManager_TypeInfo )
      {
        ListViewManager__ClearScrollBarValue(v3->fields.manager, 0, 0);
        modeKind = manager->fields.modeKind;
        if ( modeKind != 3 )
        {
          if ( modeKind == 2 )
          {
            UserSvtId = CombineServantListViewItem__get_UserSvtId(linkItem, 0);
            v15 = CombineServantListViewManager__CheckIsMaterialSelectSvt(manager, UserSvtId, 0);
            v16 = Method_CombineServantListViewObject_OnClickSelect__;
            if ( (*((_BYTE *)Method_CombineServantListViewObject_OnClickSelect__ + 83) & 2) != 0 )
              v16 = (_QWORD *)sub_1C32C38(Method_CombineServantListViewObject_OnClickSelect__);
            v11 = (System_Reflection_MethodBase_o *)sub_1C32C04(v16, v16[4]);
            if ( !v15 )
            {
              OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0, 0);
              CombineServantListViewItem__SwapChoice(linkItem, 0);
              goto LABEL_33;
            }
LABEL_23:
            OverwriteAssetSoundName__PlaySystemSe(v11, 2, 0, 0);
            return;
          }
          if ( modeKind == 1 )
          {
            v8 = CombineServantListViewItem__get_UserSvtId(linkItem, 0);
            v9 = CombineServantListViewManager__CheckIsMaterialSelectSvt(manager, v8, 0);
            v10 = Method_CombineServantListViewObject_OnClickSelect__;
            if ( (*((_BYTE *)Method_CombineServantListViewObject_OnClickSelect__ + 83) & 2) != 0 )
              v10 = (_QWORD *)sub_1C32C38(Method_CombineServantListViewObject_OnClickSelect__);
            v11 = (System_Reflection_MethodBase_o *)sub_1C32C04(v10, v10[4]);
            if ( !v9 )
            {
              OverwriteAssetSoundName__PlaySystemSe(v11, 11, 0, 0);
              CombineServantListViewItem__SwapLock(linkItem, 0);
LABEL_33:
              CombineServantListViewObject__SetupDisp(v3, v12);
              return;
            }
            goto LABEL_23;
          }
          switch ( linkItem->fields.type )
          {
            case 0:
            case 2:
            case 3:
            case 4:
            case 6:
            case 7:
            case 8:
            case 9:
            case 0xA:
            case 0xB:
            case 0xC:
              if ( !CombineServantListViewItem__get_IsCanNotBaseSelect(linkItem, 0) || linkItem->fields.isBaseSvt )
              {
                this = (CombineServantListViewObject_o *)v3->fields.manager;
                if ( this )
                {
                  v17 = &StringLiteral_9866/*"OnClickSelectBase"*/;
LABEL_31:
                  UnityEngine_Component__SendMessage(
                    (UnityEngine_Component_o *)this,
                    (System_String_o *)*v17,
                    (Il2CppObject *)v3,
                    0);
                  return;
                }
                goto LABEL_52;
              }
              if ( !CombineServantListViewItem__get_IsCanNotBaseSelect(linkItem, 0) )
                return;
              goto LABEL_17;
            case 1:
            case 5:
              if ( CombineServantListViewItem__get_IsCanNotSelect(linkItem, 0) )
                goto LABEL_17;
              if ( linkItem->fields.isMaterialSvt )
              {
                linkItem->fields.isMaterialSvt = 0;
                v18 = Method_CombineServantListViewObject_OnClickSelect__;
                if ( (*((_BYTE *)Method_CombineServantListViewObject_OnClickSelect__ + 83) & 2) != 0 )
                  v18 = (_QWORD *)sub_1C32C38(Method_CombineServantListViewObject_OnClickSelect__);
                v19 = 1;
              }
              else
              {
                v18 = Method_CombineServantListViewObject_OnClickSelect__;
                if ( linkItem->fields.isMaxSelect )
                {
                  if ( (*((_BYTE *)Method_CombineServantListViewObject_OnClickSelect__ + 83) & 2) != 0 )
                    v18 = (_QWORD *)sub_1C32C38(Method_CombineServantListViewObject_OnClickSelect__);
                  v19 = 2;
                }
                else
                {
                  if ( (*((_BYTE *)Method_CombineServantListViewObject_OnClickSelect__ + 83) & 2) != 0 )
                    v18 = (_QWORD *)sub_1C32C38(Method_CombineServantListViewObject_OnClickSelect__);
                  v19 = 0;
                }
              }
              v20 = (System_Reflection_MethodBase_o *)sub_1C32C04(v18, v18[4]);
              OverwriteAssetSoundName__PlaySystemSe(v20, v19, 0, 0);
              this = (CombineServantListViewObject_o *)v3->fields.manager;
              if ( !this )
                goto LABEL_52;
              v17 = &StringLiteral_9868/*"OnClickSelectMaterial"*/;
              goto LABEL_31;
            default:
              return;
          }
        }
        if ( CombineServantListViewItem__get_IsCanNotSelectPush(linkItem, 0) )
        {
LABEL_17:
          v13 = Method_CombineServantListViewObject_OnClickSelect__;
          if ( (*((_BYTE *)Method_CombineServantListViewObject_OnClickSelect__ + 83) & 2) != 0 )
            v13 = (_QWORD *)sub_1C32C38(Method_CombineServantListViewObject_OnClickSelect__);
          v11 = (System_Reflection_MethodBase_o *)sub_1C32C04(v13, v13[4]);
          goto LABEL_23;
        }
        this = (CombineServantListViewObject_o *)v3->fields.manager;
        if ( this )
        {
          v17 = &StringLiteral_9870/*"OnClickSelectPush"*/;
          goto LABEL_31;
        }
LABEL_52:
        sub_1C32E7C(this);
      }
    }
    else
    {
      sub_1C3313C(v3->fields.linkItem);
    }
    sub_1C3313C(manager);
    goto LABEL_52;
  }
}


void CombineServantListViewObject__OnDestroy(CombineServantListViewObject_o *this, const MethodInfo *method)
{
  CGThumbnailListItem_o *p_dragObject; // x19
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_GameObject_o *dragObject; // t1
  UnityEngine_Object_o *klass; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4C3BBF6 & 1) == 0 )
  {
    sub_1C32C20(&NGUITools_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3BBF6 = 1;
  }
  dragObject = this->fields.dragObject;
  p_dragObject = (CGThumbnailListItem_o *)&this->fields.dragObject;
  v4 = (UnityEngine_Object_o *)dragObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v4, 0, 0) )
  {
    klass = (UnityEngine_Object_o *)p_dragObject->klass;
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    NGUITools__Destroy(klass, 0);
    p_dragObject->klass = 0;
    sub_1C32BC4(p_dragObject, 0, v7, v8);
  }
}


void CombineServantListViewObject__OnDragDropStart(CombineServantListViewObject_o *this, const MethodInfo *method)
{
  UITouchPress_o *manager; // x0
  __int64 naturalAligment; // x9
  UnityEngine_Object_o *touchPress; // x20

  if ( (byte_4C3BC00 & 1) == 0 )
  {
    sub_1C32C20(&CombineServantListViewManager_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3BC00 = 1;
  }
  manager = (UITouchPress_o *)this->fields.manager;
  if ( !manager )
    goto LABEL_14;
  naturalAligment = CombineServantListViewManager_TypeInfo->_2.naturalAligment;
  if ( manager->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (CombineServantListViewManager_c *)manager->klass->_2.typeHierarchy[naturalAligment - 1] != CombineServantListViewManager_TypeInfo )
  {
    sub_1C3313C(manager);
    goto LABEL_14;
  }
  if ( CombineServantListViewManager__IsDragStart((CombineServantListViewManager_o *)manager, 0) )
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


void CombineServantListViewObject__OnLongPush(CombineServantListViewObject_o *this, const MethodInfo *method)
{
  CombineServantListViewObject_o *v2; // x19
  struct ListViewItem_o *linkItem; // x20
  __int64 naturalAligment; // x9
  CombineServantListViewManager_o *manager; // x21
  __int64 v6; // x9
  int32_t sortIndex; // w19
  bool IsSelect; // w0
  CombineServantListViewObject_o *v9; // x0
  const MethodInfo *v10; // x1

  v2 = this;
  if ( (byte_4C3BBFF & 1) == 0 )
  {
    sub_1C32C20(&CombineServantListViewItem_TypeInfo);
    sub_1C32C20(&CombineServantListViewManager_TypeInfo);
    sub_1C32C20(&StringLiteral_9927/*"OnLongPushListView"*/);
    this = (CombineServantListViewObject_o *)sub_1C32C20(&StringLiteral_9945/*"OnPressCancel"*/);
    byte_4C3BBFF = 1;
  }
  linkItem = v2->fields.linkItem;
  if ( linkItem )
  {
    naturalAligment = CombineServantListViewItem_TypeInfo->_2.naturalAligment;
    if ( linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment
      && (CombineServantListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == CombineServantListViewItem_TypeInfo )
    {
      manager = (CombineServantListViewManager_o *)v2->fields.manager;
      if ( manager )
      {
        v6 = CombineServantListViewManager_TypeInfo->_2.naturalAligment;
        if ( manager->klass->_2.naturalAligment < (unsigned int)v6
          || (CombineServantListViewManager_c *)manager->klass->_2.typeHierarchy[v6 - 1] != CombineServantListViewManager_TypeInfo )
        {
          sub_1C3313C(v2->fields.manager);
          CombineServantListViewObject__OnDragDropStart(v9, v10);
          return;
        }
      }
      if ( (LODWORD(linkItem[1].klass) | 4) == 5 )
      {
        if ( manager )
        {
          if ( CombineServantListViewManager__IsDragEnable(
                 (CombineServantListViewManager_o *)v2->fields.manager,
                 (CombineServantListViewItem_o *)v2->fields.linkItem,
                 0) )
          {
            sortIndex = linkItem->fields.sortIndex;
            IsSelect = ListViewItem__get_IsSelect(linkItem, 0);
            CombineServantListViewManager__SetDragStart(manager, sortIndex, !IsSelect, 0);
          }
          return;
        }
      }
      else
      {
        this = (CombineServantListViewObject_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v2, 0);
        if ( this )
        {
          UnityEngine_GameObject__SendMessage_71205516(
            (UnityEngine_GameObject_o *)this,
            (System_String_o *)StringLiteral_9945/*"OnPressCancel"*/,
            0);
          this = (CombineServantListViewObject_o *)v2->fields.manager;
          if ( this )
          {
            UnityEngine_Component__SendMessage(
              (UnityEngine_Component_o *)this,
              (System_String_o *)StringLiteral_9927/*"OnLongPushListView"*/,
              (Il2CppObject *)v2->fields.linkItem,
              0);
            return;
          }
        }
      }
    }
    else
    {
      sub_1C3313C(v2->fields.linkItem);
    }
    sub_1C32E7C(this);
  }
}


void CombineServantListViewObject__OnLongRelease(CombineServantListViewObject_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *itemDrag; // x20
  UIDragDropListViewItem_o *manager; // x0
  __int64 naturalAligment; // x9

  if ( (byte_4C3BC01 & 1) == 0 )
  {
    sub_1C32C20(&CombineServantListViewManager_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&StringLiteral_9927/*"OnLongPushListView"*/);
    sub_1C32C20(&StringLiteral_4033/*"CancelDragEnd"*/);
    byte_4C3BC01 = 1;
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
        goto LABEL_17;
      UIDragDropListViewItem__PressReset(manager, 0);
    }
    manager = (UIDragDropListViewItem_o *)this->fields.manager;
    if ( manager )
    {
      naturalAligment = CombineServantListViewManager_TypeInfo->_2.naturalAligment;
      if ( manager->klass->_2.naturalAligment >= (unsigned int)naturalAligment
        && (CombineServantListViewManager_c *)manager->klass->_2.typeHierarchy[naturalAligment - 1] == CombineServantListViewManager_TypeInfo )
      {
        if ( HIDWORD(manager[8].fields.m_CancellationTokenSource) )
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
      else
      {
        sub_1C3313C(manager);
      }
    }
LABEL_17:
    sub_1C32E7C(manager);
  }
}


void CombineServantListViewObject__SetInput(
        CombineServantListViewObject_o *this,
        bool isInput,
        const MethodInfo *method)
{
  CombineServantListViewItem_o *itemDraw; // x21
  struct ListViewManager_o *manager; // x0
  __int64 v7; // x9
  __int64 naturalAligment; // x9
  CombineServantListViewItemDraw_o *v9; // x20
  CombineServantListViewObject_o *v10; // x0
  const MethodInfo *v11; // x1

  if ( (byte_4C3BBF8 & 1) == 0 )
  {
    sub_1C32C20(&CombineServantListViewItem_TypeInfo);
    sub_1C32C20(&CombineServantListViewManager_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3BBF8 = 1;
  }
  ListViewObject__SetInput((ListViewObject_o *)this, isInput, 0);
  itemDraw = (CombineServantListViewItem_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)itemDraw, 0, 0) )
  {
    manager = this->fields.manager;
    if ( manager
      && ((v7 = CombineServantListViewManager_TypeInfo->_2.naturalAligment,
           manager->klass->_2.naturalAligment < (unsigned int)v7)
       || (CombineServantListViewManager_c *)manager->klass->_2.typeHierarchy[v7 - 1] != CombineServantListViewManager_TypeInfo) )
    {
      sub_1C3313C(manager);
    }
    else
    {
      itemDraw = (CombineServantListViewItem_o *)this->fields.linkItem;
      if ( !itemDraw
        || (naturalAligment = CombineServantListViewItem_TypeInfo->_2.naturalAligment,
            itemDraw->klass->_2.naturalAligment >= (unsigned int)naturalAligment)
        && (CombineServantListViewItem_c *)itemDraw->klass->_2.typeHierarchy[naturalAligment - 1] == CombineServantListViewItem_TypeInfo )
      {
        if ( !manager
          || (v9 = this->fields.itemDraw,
              manager = (struct ListViewManager_o *)CombineServantListViewManager__IsSelectEnable(
                                                      (CombineServantListViewManager_o *)manager,
                                                      itemDraw,
                                                      0,
                                                      0,
                                                      0,
                                                      0),
              !v9) )
        {
          sub_1C32E7C(manager);
        }
        CombineServantListViewItemDraw__SetInput(v9, itemDraw, (unsigned __int8)manager & isInput & 1, 0);
        return;
      }
    }
    sub_1C3313C(itemDraw);
    CombineServantListViewObject__IsCanDrag(v10, v11);
  }
}


void CombineServantListViewObject__SetItem(
        CombineServantListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  ListViewObject__SetItem_43729388((ListViewObject_o *)this, item, seed, 0);
  this->fields.state = 0;
}


void CombineServantListViewObject__SetItem_48794152(
        CombineServantListViewObject_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ListViewObject__SetItem((ListViewObject_o *)this, item, 0);
  this->fields.state = 0;
}


void CombineServantListViewObject__SetupDisp(CombineServantListViewObject_o *this, const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x21
  CombineServantListViewManager_o *manager; // x20
  __int64 naturalAligment; // x9
  __int64 v6; // x9
  bool v7; // w1
  UnityEngine_Object_o *touchPress; // x22
  _BOOL8 IsSelectEnable; // x0
  struct UITouchPress_o *v10; // x8
  UnityEngine_Object_o *itemDraw; // x22
  CombineServantListViewItemDraw_o *v12; // x22
  int32_t dispMode; // w19
  CombineServantListViewObject_o *v14; // x0
  int32_t v15; // w1
  System_Action_o *v16; // x2
  const MethodInfo *v17; // x3
  long double v18; // q0

  if ( (byte_4C3BBFC & 1) == 0 )
  {
    sub_1C32C20(&CombineServantListViewItem_TypeInfo);
    sub_1C32C20(&CombineServantListViewManager_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3BBFC = 1;
  }
  manager = (CombineServantListViewManager_o *)this->fields.manager;
  if ( manager )
  {
    naturalAligment = CombineServantListViewManager_TypeInfo->_2.naturalAligment;
    if ( manager->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (CombineServantListViewManager_c *)manager->klass->_2.typeHierarchy[naturalAligment - 1] != CombineServantListViewManager_TypeInfo )
    {
      sub_1C3313C(this->fields.manager);
      goto LABEL_26;
    }
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
  {
    v7 = 0;
    goto LABEL_11;
  }
  v6 = CombineServantListViewItem_TypeInfo->_2.naturalAligment;
  if ( linkItem->klass->_2.naturalAligment < (unsigned int)v6
    || (CombineServantListViewItem_c *)linkItem->klass->_2.typeHierarchy[v6 - 1] != CombineServantListViewItem_TypeInfo )
  {
LABEL_26:
    v18 = sub_1C3313C(linkItem);
    CombineServantListViewObject__Init_48795944(v14, v15, v16, *(float *)&v18, v17);
    return;
  }
  v7 = this->fields.dispMode != 0;
LABEL_11:
  ListViewObject__SetVisible((ListViewObject_o *)this, v7, 0);
  touchPress = (UnityEngine_Object_o *)this->fields.touchPress;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  IsSelectEnable = UnityEngine_Object__op_Inequality(touchPress, 0, 0);
  if ( IsSelectEnable )
  {
    if ( !linkItem )
      goto LABEL_24;
    v10 = this->fields.touchPress;
    if ( !v10 )
      goto LABEL_24;
    v10->fields.isLongPressFast = LODWORD(linkItem[1].klass) == 1;
  }
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  IsSelectEnable = UnityEngine_Object__op_Inequality(itemDraw, 0, 0);
  if ( IsSelectEnable )
  {
    if ( manager )
    {
      v12 = this->fields.itemDraw;
      dispMode = this->fields.dispMode;
      IsSelectEnable = CombineServantListViewManager__IsSelectEnable(
                         manager,
                         (CombineServantListViewItem_o *)linkItem,
                         0,
                         0,
                         0,
                         0);
      if ( v12 )
      {
        CombineServantListViewItemDraw__SetItem(
          v12,
          (CombineServantListViewItem_o *)linkItem,
          dispMode,
          IsSelectEnable,
          manager->fields.modeKind,
          0);
        return;
      }
    }
LABEL_24:
    sub_1C32E7C(IsSelectEnable);
  }
}


void CombineServantListViewObject__Start(CombineServantListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.state )
    CombineServantListViewObject__Init_48793740(this, 2, v2);
}


System_String_o *CombineServantListViewObject__ToString(CombineServantListViewObject_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x0
  float z; // w9
  System_String_o *v5; // x20
  System_String_o *v6; // x0
  System_Enum_o v8; // [xsp+8h] [xbp-58h] BYREF
  int32_t dispMode; // [xsp+18h] [xbp-48h]
  __int64 v10; // [xsp+20h] [xbp-40h] BYREF
  float v11; // [xsp+28h] [xbp-38h]

  if ( (byte_4C3BBFD & 1) == 0 )
  {
    sub_1C32C20(&CombineServantListViewItemDraw_DispMode_TypeInfo);
    sub_1C32C20(&StringLiteral_113/*" "*/);
    byte_4C3BBFD = 1;
  }
  v11 = 0.0;
  v10 = 0;
  v8.klass = (System_Enum_c *)CombineServantListViewItemDraw_DispMode_TypeInfo;
  v8.monitor = (void *)-1LL;
  dispMode = this->fields.dispMode;
  v3 = System_Enum__ToString(&v8, 0);
  z = this->fields.basePosition.fields.z;
  v5 = v3;
  v10 = *(_QWORD *)&this->fields.basePosition.fields.x;
  v11 = z;
  v6 = (System_String_o *)sub_1DF1AD0(&v10, 0, 0, 0);
  return System_String__Concat_63556792(v5, (System_String_o *)StringLiteral_113/*" "*/, v6, 0);
}


void CombineServantListViewObject__add_callbackFunc(
        CombineServantListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  CombineServantListViewObject_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4C3BBF3 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    byte_4C3BBF3 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_1C6CE78(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C3313C(v8);
  CombineServantListViewObject__remove_callbackFunc(v11, v12, v13);
}


void CombineServantListViewObject__remove_callbackFunc(
        CombineServantListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  CombineServantListViewObject_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4C3BBF4 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    byte_4C3BBF4 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_1C6CE78(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C3313C(v8);
  CombineServantListViewObject__Awake(v11, v12);
}