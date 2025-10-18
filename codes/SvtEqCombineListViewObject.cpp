void SvtEqCombineListViewObject___ctor(SvtEqCombineListViewObject_o *this, const MethodInfo *method)
{
  if ( (byte_4C3D0FF & 1) == 0 )
  {
    sub_1C37058(&ListViewObject_TypeInfo);
    byte_4C3D0FF = 1;
  }
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  ListViewObject___ctor((ListViewObject_o *)this, 0);
}


void SvtEqCombineListViewObject__Awake(SvtEqCombineListViewObject_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *dispObject; // x0
  Il2CppObject *Component_object; // x0
  Il2CppObject *v5; // x0

  if ( (byte_4C3D0F2 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_UIDragDropListViewItem___);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_SvtEqCombineListViewItemDraw___);
    byte_4C3D0F2 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1C372B4(0);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_SvtEqCombineListViewItemDraw___);
  this->fields.itemDraw = (struct SvtEqCombineListViewItemDraw_o *)Component_object;
  sub_1C36FFC(&this->fields.itemDraw, Component_object);
  v5 = UnityEngine_Component__GetComponent_object_(
         (UnityEngine_Component_o *)this,
         (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_UIDragDropListViewItem___);
  this->fields.itemDrag = (struct UIDragDropListViewItem_o *)v5;
  sub_1C36FFC(&this->fields.itemDrag, v5);
}


UnityEngine_GameObject_o *SvtEqCombineListViewObject__CreateDragObject(
        SvtEqCombineListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *DragObject; // x19
  Il2CppObject *Component_object; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4C3D0F7 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_SvtEqCombineListViewObject___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3D0F7 = 1;
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
                               (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_SvtEqCombineListViewObject___)) == 0 )
    {
      sub_1C372B4(Component_object);
    }
    SvtEqCombineListViewObject__Init_31539236((SvtEqCombineListViewObject_o *)Component_object, 2, v5);
  }
  return (UnityEngine_GameObject_o *)DragObject;
}


SvtEqCombineListViewItem_o *SvtEqCombineListViewObject__GetItem(
        SvtEqCombineListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11

  if ( (byte_4C3D0F4 & 1) == 0 )
  {
    sub_1C37058(&SvtEqCombineListViewItem_TypeInfo);
    byte_4C3D0F4 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0;
  naturalAligment = SvtEqCombineListViewItem_TypeInfo->_2.naturalAligment;
  if ( linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment )
    return 0;
  if ( (SvtEqCombineListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == SvtEqCombineListViewItem_TypeInfo )
    return (SvtEqCombineListViewItem_o *)this->fields.linkItem;
  return 0;
}


void SvtEqCombineListViewObject__Init(
        SvtEqCombineListViewObject_o *this,
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
  int32_t v13; // w23
  bool v14; // w21
  bool v15; // w24
  UnityEngine_Transform_o *transform; // x0
  bool v17; // w24
  struct System_Action_o **p_callbackFunc; // x21
  const MethodInfo *v19; // x1
  int32_t v20; // w9
  struct System_Action_o *v21; // x19

  if ( (byte_4C3D0F8 & 1) == 0 )
  {
    sub_1C37058(&SvtEqCombineListViewItem_TypeInfo);
    byte_4C3D0F8 = 1;
  }
  linkItem = this->fields.linkItem;
  dispMode = this->fields.dispMode;
  state = this->fields.state;
  if ( !linkItem )
    goto LABEL_7;
  naturalAligment = SvtEqCombineListViewItem_TypeInfo->_2.naturalAligment;
  if ( linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (v13 = initMode,
        (SvtEqCombineListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] != SvtEqCombineListViewItem_TypeInfo) )
  {
    sub_1C37574(linkItem);
LABEL_7:
    v13 = 0;
  }
  v14 = initMode == 5;
  v15 = state == 0;
  ListViewObject__SetVisible((ListViewObject_o *)this, v13 != 0, 0);
  ((void (__fastcall *)(SvtEqCombineListViewObject_o *, bool, const MethodInfo *))this->klass->vtable._9_SetInput.methodPtr)(
    this,
    v13 == 4,
    this->klass->vtable._9_SetInput.method);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0)) == 0) )
  {
    sub_1C372B4(transform);
  }
  v17 = v14 || v15;
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0);
  this->fields.callbackFunc = callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  sub_1C36FFC(&this->fields.callbackFunc, callbackFunc);
  if ( (unsigned int)v13 <= 4 && ((0x17u >> v13) & 1) != 0 )
  {
    v20 = dword_C4659C[v13];
    this->fields.dispMode = dword_C46588[v13];
    this->fields.state = v20;
  }
  if ( v17 || dispMode != this->fields.dispMode )
    SvtEqCombineListViewObject__SetupDisp(this, v19);
  v21 = *p_callbackFunc;
  if ( *p_callbackFunc )
  {
    *p_callbackFunc = 0;
    sub_1C36FFC(p_callbackFunc, 0);
    ((void (__fastcall *)(intptr_t, intptr_t))v21->fields.invoke_impl)(v21->fields.method_code, v21->fields.method);
  }
}


void SvtEqCombineListViewObject__InitItem(SvtEqCombineListViewObject_o *this, const MethodInfo *method)
{
  this->fields.state = 0;
}


// local variable allocation has failed, the output may be wrong!
void SvtEqCombineListViewObject__Init_31539236(
        SvtEqCombineListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  float v4; // s0
  int v5; // s1 OVERLAPPED

  if ( !byte_4C3C921 )
  {
    sub_1C37058(&UnityEngine_Vector3_TypeInfo);
    byte_4C3C921 = 1;
  }
  SvtEqCombineListViewObject__Init(this, initMode, 0, v4, *(UnityEngine_Vector3_o *)&v5, v3);
}


// local variable allocation has failed, the output may be wrong!
void SvtEqCombineListViewObject__Init_31541472(
        SvtEqCombineListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        const MethodInfo *method)
{
  int v5; // s1 OVERLAPPED

  if ( !byte_4C3C921 )
  {
    sub_1C37058(&UnityEngine_Vector3_TypeInfo);
    byte_4C3C921 = 1;
  }
  SvtEqCombineListViewObject__Init(this, initMode, callbackFunc, delay, *(UnityEngine_Vector3_o *)&v5, method);
}


// local variable allocation has failed, the output may be wrong!
void SvtEqCombineListViewObject__Init_31541556(
        SvtEqCombineListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  float v4; // s0
  int v5; // s1 OVERLAPPED

  if ( !byte_4C3C921 )
  {
    sub_1C37058(&UnityEngine_Vector3_TypeInfo);
    byte_4C3C921 = 1;
  }
  SvtEqCombineListViewObject__Init(this, initMode, callbackFunc, v4, *(UnityEngine_Vector3_o *)&v5, method);
}


bool SvtEqCombineListViewObject__IsCanDrag(SvtEqCombineListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  UITouchPress_o *manager; // x0
  __int64 naturalAligment; // x9
  struct ListViewItem_o *linkItem; // x1
  __int64 v7; // x10
  UnityEngine_Object_o *touchPress; // x20
  SvtEqCombineListViewObject_o *v10; // x0
  const MethodInfo *v11; // x1

  if ( (byte_4C3D0F6 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&SvtEqCombineListViewItem_TypeInfo);
    sub_1C37058(&SvtEqCombineListViewManager_TypeInfo);
    byte_4C3D0F6 = 1;
  }
  manager = (UITouchPress_o *)this->fields.manager;
  if ( !manager )
    goto LABEL_19;
  naturalAligment = SvtEqCombineListViewManager_TypeInfo->_2.naturalAligment;
  if ( manager->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (SvtEqCombineListViewManager_c *)manager->klass->_2.typeHierarchy[naturalAligment - 1] != SvtEqCombineListViewManager_TypeInfo )
  {
    manager = (UITouchPress_o *)sub_1C37574(manager);
    goto LABEL_19;
  }
  if ( (HIDWORD(manager[10].monitor) & 0x80000000) != 0 )
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
    sub_1C372B4(manager);
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem
    || (v7 = SvtEqCombineListViewItem_TypeInfo->_2.naturalAligment,
        linkItem->klass->_2.naturalAligment >= (unsigned int)v7)
    && (SvtEqCombineListViewItem_c *)linkItem->klass->_2.typeHierarchy[v7 - 1] == SvtEqCombineListViewItem_TypeInfo )
  {
    if ( SvtEqCombineListViewManager__IsDragEnable(
           (SvtEqCombineListViewManager_o *)manager,
           (SvtEqCombineListViewItem_o *)linkItem,
           v2) )
    {
      return 1;
    }
    goto LABEL_12;
  }
  v10 = (SvtEqCombineListViewObject_o *)sub_1C37574(this->fields.linkItem);
  return (unsigned __int8)SvtEqCombineListViewObject__CreateDragObject(v10, v11);
}


void SvtEqCombineListViewObject__OnClickSelect(SvtEqCombineListViewObject_o *this, const MethodInfo *method)
{
  SvtEqCombineListViewManager_o *manager; // x21
  SvtEqCombineListViewObject_o *v3; // x19
  SvtEqCombineListViewItem_o *linkItem; // x20
  __int64 naturalAligment; // x9
  __int64 v6; // x9
  const MethodInfo *v7; // x1
  int32_t modeKind; // w8
  int64_t v9; // x0
  const MethodInfo *v10; // x2
  bool v11; // w21
  _QWORD *v12; // x8
  System_Reflection_MethodBase_o *v13; // x0
  const MethodInfo *v14; // x1
  int64_t UserSvtId; // x0
  const MethodInfo *v16; // x2
  bool v17; // w21
  _QWORD *v18; // x8
  int32_t type; // w8
  _QWORD *v20; // x0
  System_Reflection_MethodBase_o *v21; // x0
  _QWORD *v22; // x0
  _QWORD *v23; // x0
  int32_t v24; // w20
  System_Reflection_MethodBase_o *v25; // x0

  v3 = this;
  if ( (byte_4C3D0FB & 1) == 0 )
  {
    sub_1C37058(&SvtEqCombineListViewItem_TypeInfo);
    sub_1C37058(&SvtEqCombineListViewManager_TypeInfo);
    sub_1C37058(&Method_SvtEqCombineListViewObject_OnClickSelect__);
    sub_1C37058(&StringLiteral_9867/*"OnClickSelectBase"*/);
    this = (SvtEqCombineListViewObject_o *)sub_1C37058(&StringLiteral_9869/*"OnClickSelectMaterial"*/);
    byte_4C3D0FB = 1;
  }
  linkItem = (SvtEqCombineListViewItem_o *)v3->fields.linkItem;
  if ( !linkItem )
    return;
  naturalAligment = SvtEqCombineListViewItem_TypeInfo->_2.naturalAligment;
  if ( linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (SvtEqCombineListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] != SvtEqCombineListViewItem_TypeInfo )
  {
    sub_1C37574(v3->fields.linkItem);
LABEL_51:
    this = (SvtEqCombineListViewObject_o *)sub_1C37574(manager);
    goto LABEL_52;
  }
  manager = (SvtEqCombineListViewManager_o *)v3->fields.manager;
  if ( !manager )
    goto LABEL_52;
  v6 = SvtEqCombineListViewManager_TypeInfo->_2.naturalAligment;
  if ( manager->klass->_2.naturalAligment < (unsigned int)v6
    || (SvtEqCombineListViewManager_c *)manager->klass->_2.typeHierarchy[v6 - 1] != SvtEqCombineListViewManager_TypeInfo )
  {
    goto LABEL_51;
  }
  ListViewManager__ClearScrollBarValue(v3->fields.manager, 0, 0);
  modeKind = manager->fields.modeKind;
  if ( modeKind == 2 )
  {
    UserSvtId = SvtEqCombineListViewItem__get_UserSvtId(linkItem, v7);
    v17 = SvtEqCombineListViewManager__CheckIsMaterialSelectSvt(manager, UserSvtId, v16);
    v18 = Method_SvtEqCombineListViewObject_OnClickSelect__;
    if ( (*((_BYTE *)Method_SvtEqCombineListViewObject_OnClickSelect__ + 83) & 2) != 0 )
      v18 = (_QWORD *)sub_1C37070(Method_SvtEqCombineListViewObject_OnClickSelect__);
    v13 = (System_Reflection_MethodBase_o *)sub_1C3703C(v18, v18[4]);
    if ( !v17 )
    {
      OverwriteAssetSoundName__PlaySystemSe(v13, 0, 0, 0);
      linkItem->fields.isSwapChoice ^= 1u;
      goto LABEL_19;
    }
    goto LABEL_35;
  }
  if ( modeKind == 1 )
  {
    v9 = SvtEqCombineListViewItem__get_UserSvtId(linkItem, v7);
    v11 = SvtEqCombineListViewManager__CheckIsMaterialSelectSvt(manager, v9, v10);
    v12 = Method_SvtEqCombineListViewObject_OnClickSelect__;
    if ( (*((_BYTE *)Method_SvtEqCombineListViewObject_OnClickSelect__ + 83) & 2) != 0 )
      v12 = (_QWORD *)sub_1C37070(Method_SvtEqCombineListViewObject_OnClickSelect__);
    v13 = (System_Reflection_MethodBase_o *)sub_1C3703C(v12, v12[4]);
    if ( !v11 )
    {
      OverwriteAssetSoundName__PlaySystemSe(v13, 11, 0, 0);
      linkItem->fields.isSwapLock ^= 1u;
LABEL_19:
      SvtEqCombineListViewObject__SetupDisp(v3, v14);
      return;
    }
    goto LABEL_35;
  }
  type = linkItem->fields.type;
  if ( !type )
  {
    if ( linkItem->fields.isLvMax && linkItem->fields.isLimitCntMax || linkItem->fields.isSvtEqMaterial )
    {
      v20 = Method_SvtEqCombineListViewObject_OnClickSelect__;
      if ( (*((_BYTE *)Method_SvtEqCombineListViewObject_OnClickSelect__ + 83) & 2) != 0 )
        v20 = (_QWORD *)sub_1C37070(Method_SvtEqCombineListViewObject_OnClickSelect__);
      v21 = (System_Reflection_MethodBase_o *)sub_1C3703C(v20, v20[4]);
      OverwriteAssetSoundName__PlaySystemSe(v21, 2, 0, 0);
    }
    else
    {
      this = (SvtEqCombineListViewObject_o *)v3->fields.manager;
      if ( !this )
        goto LABEL_52;
      UnityEngine_Component__SendMessage(
        (UnityEngine_Component_o *)this,
        (System_String_o *)StringLiteral_9867/*"OnClickSelectBase"*/,
        (Il2CppObject *)v3,
        0);
    }
    type = linkItem->fields.type;
  }
  if ( type == 1 )
  {
    if ( SvtEqCombineListViewItem__get_IsCanNotSelect(linkItem, v7) )
    {
      v22 = Method_SvtEqCombineListViewObject_OnClickSelect__;
      if ( (*((_BYTE *)Method_SvtEqCombineListViewObject_OnClickSelect__ + 83) & 2) != 0 )
        v22 = (_QWORD *)sub_1C37070(Method_SvtEqCombineListViewObject_OnClickSelect__);
      v13 = (System_Reflection_MethodBase_o *)sub_1C3703C(v22, v22[4]);
LABEL_35:
      OverwriteAssetSoundName__PlaySystemSe(v13, 2, 0, 0);
      return;
    }
    if ( linkItem->fields.isMaterialSvt )
    {
      linkItem->fields.isMaterialSvt = 0;
      v23 = Method_SvtEqCombineListViewObject_OnClickSelect__;
      if ( (*((_BYTE *)Method_SvtEqCombineListViewObject_OnClickSelect__ + 83) & 2) != 0 )
        v23 = (_QWORD *)sub_1C37070(Method_SvtEqCombineListViewObject_OnClickSelect__);
      v24 = 1;
    }
    else
    {
      v23 = Method_SvtEqCombineListViewObject_OnClickSelect__;
      if ( linkItem->fields.isMaxSelect )
      {
        if ( (*((_BYTE *)Method_SvtEqCombineListViewObject_OnClickSelect__ + 83) & 2) != 0 )
          v23 = (_QWORD *)sub_1C37070(Method_SvtEqCombineListViewObject_OnClickSelect__);
        v24 = 2;
      }
      else
      {
        if ( (*((_BYTE *)Method_SvtEqCombineListViewObject_OnClickSelect__ + 83) & 2) != 0 )
          v23 = (_QWORD *)sub_1C37070(Method_SvtEqCombineListViewObject_OnClickSelect__);
        v24 = 0;
      }
    }
    v25 = (System_Reflection_MethodBase_o *)sub_1C3703C(v23, v23[4]);
    OverwriteAssetSoundName__PlaySystemSe(v25, v24, 0, 0);
    this = (SvtEqCombineListViewObject_o *)v3->fields.manager;
    if ( this )
    {
      UnityEngine_Component__SendMessage(
        (UnityEngine_Component_o *)this,
        (System_String_o *)StringLiteral_9869/*"OnClickSelectMaterial"*/,
        (Il2CppObject *)v3,
        0);
      return;
    }
LABEL_52:
    sub_1C372B4(this);
  }
}


void SvtEqCombineListViewObject__OnDestroy(SvtEqCombineListViewObject_o *this, const MethodInfo *method)
{
  struct UnityEngine_GameObject_o **p_dragObject; // x19
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_GameObject_o *dragObject; // t1
  UnityEngine_Object_o *v6; // x20

  if ( (byte_4C3D0F3 & 1) == 0 )
  {
    sub_1C37058(&NGUITools_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3D0F3 = 1;
  }
  dragObject = this->fields.dragObject;
  p_dragObject = &this->fields.dragObject;
  v4 = (UnityEngine_Object_o *)dragObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v4, 0, 0) )
  {
    v6 = (UnityEngine_Object_o *)*p_dragObject;
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    NGUITools__Destroy(v6, 0);
    *p_dragObject = 0;
    sub_1C36FFC(p_dragObject, 0);
  }
}


void SvtEqCombineListViewObject__OnDragDropStart(SvtEqCombineListViewObject_o *this, const MethodInfo *method)
{
  UITouchPress_o *manager; // x0
  __int64 naturalAligment; // x9
  UnityEngine_Object_o *touchPress; // x20

  if ( (byte_4C3D0FD & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&SvtEqCombineListViewManager_TypeInfo);
    byte_4C3D0FD = 1;
  }
  manager = (UITouchPress_o *)this->fields.manager;
  if ( !manager )
    goto LABEL_14;
  naturalAligment = SvtEqCombineListViewManager_TypeInfo->_2.naturalAligment;
  if ( manager->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (SvtEqCombineListViewManager_c *)manager->klass->_2.typeHierarchy[naturalAligment - 1] != SvtEqCombineListViewManager_TypeInfo )
  {
    manager = (UITouchPress_o *)sub_1C37574(manager);
    goto LABEL_14;
  }
  if ( (HIDWORD(manager[10].monitor) & 0x80000000) == 0 )
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
      sub_1C372B4(manager);
    }
  }
}


void SvtEqCombineListViewObject__OnLongPush(SvtEqCombineListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  SvtEqCombineListViewObject_o *v3; // x19
  struct ListViewItem_o *linkItem; // x20
  __int64 naturalAligment; // x9
  SvtEqCombineListViewManager_o *manager; // x21
  __int64 v7; // x9
  int32_t sortIndex; // w19
  bool IsSelect; // w0
  const MethodInfo *v10; // x3
  SvtEqCombineListViewObject_o *v11; // x0
  const MethodInfo *v12; // x1

  v3 = this;
  if ( (byte_4C3D0FC & 1) == 0 )
  {
    sub_1C37058(&SvtEqCombineListViewItem_TypeInfo);
    sub_1C37058(&SvtEqCombineListViewManager_TypeInfo);
    sub_1C37058(&StringLiteral_9928/*"OnLongPushListView"*/);
    this = (SvtEqCombineListViewObject_o *)sub_1C37058(&StringLiteral_9946/*"OnPressCancel"*/);
    byte_4C3D0FC = 1;
  }
  linkItem = v3->fields.linkItem;
  if ( linkItem )
  {
    naturalAligment = SvtEqCombineListViewItem_TypeInfo->_2.naturalAligment;
    if ( linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment
      && (SvtEqCombineListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == SvtEqCombineListViewItem_TypeInfo )
    {
      manager = (SvtEqCombineListViewManager_o *)v3->fields.manager;
      if ( manager )
      {
        v7 = SvtEqCombineListViewManager_TypeInfo->_2.naturalAligment;
        if ( manager->klass->_2.naturalAligment < (unsigned int)v7
          || (SvtEqCombineListViewManager_c *)manager->klass->_2.typeHierarchy[v7 - 1] != SvtEqCombineListViewManager_TypeInfo )
        {
          v11 = (SvtEqCombineListViewObject_o *)sub_1C37574(v3->fields.manager);
          SvtEqCombineListViewObject__OnDragDropStart(v11, v12);
          return;
        }
        if ( LODWORD(linkItem[1].klass) == 1 )
        {
          if ( SvtEqCombineListViewManager__IsDragEnable(
                 (SvtEqCombineListViewManager_o *)v3->fields.manager,
                 (SvtEqCombineListViewItem_o *)v3->fields.linkItem,
                 v2) )
          {
            sortIndex = linkItem->fields.sortIndex;
            IsSelect = ListViewItem__get_IsSelect(linkItem, 0);
            SvtEqCombineListViewManager__SetDragStart(manager, sortIndex, !IsSelect, v10);
          }
          return;
        }
      }
      else if ( LODWORD(linkItem[1].klass) == 1 )
      {
        goto LABEL_18;
      }
      this = (SvtEqCombineListViewObject_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v3, 0);
      if ( this )
      {
        UnityEngine_GameObject__SendMessage_71248628(
          (UnityEngine_GameObject_o *)this,
          (System_String_o *)StringLiteral_9946/*"OnPressCancel"*/,
          0);
        this = (SvtEqCombineListViewObject_o *)v3->fields.manager;
        if ( this )
        {
          UnityEngine_Component__SendMessage(
            (UnityEngine_Component_o *)this,
            (System_String_o *)StringLiteral_9928/*"OnLongPushListView"*/,
            (Il2CppObject *)v3->fields.linkItem,
            0);
          return;
        }
      }
    }
    else
    {
      this = (SvtEqCombineListViewObject_o *)sub_1C37574(v3->fields.linkItem);
    }
LABEL_18:
    sub_1C372B4(this);
  }
}


void SvtEqCombineListViewObject__OnLongRelease(SvtEqCombineListViewObject_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *itemDrag; // x20
  UIDragDropListViewItem_o *manager; // x0
  __int64 naturalAligment; // x9

  if ( (byte_4C3D0FE & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&SvtEqCombineListViewManager_TypeInfo);
    sub_1C37058(&StringLiteral_9928/*"OnLongPushListView"*/);
    sub_1C37058(&StringLiteral_4033/*"CancelDragEnd"*/);
    byte_4C3D0FE = 1;
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
      naturalAligment = SvtEqCombineListViewManager_TypeInfo->_2.naturalAligment;
      if ( manager->klass->_2.naturalAligment >= (unsigned int)naturalAligment
        && (SvtEqCombineListViewManager_c *)manager->klass->_2.typeHierarchy[naturalAligment - 1] == SvtEqCombineListViewManager_TypeInfo )
      {
        if ( LODWORD(manager[5].fields.mTarget.fields.x) )
          return;
        UnityEngine_Component__SendMessage_71238472(
          (UnityEngine_Component_o *)manager,
          (System_String_o *)StringLiteral_4033/*"CancelDragEnd"*/,
          0);
        manager = (UIDragDropListViewItem_o *)this->fields.manager;
        if ( manager )
        {
          UnityEngine_Component__SendMessage(
            (UnityEngine_Component_o *)manager,
            (System_String_o *)StringLiteral_9928/*"OnLongPushListView"*/,
            (Il2CppObject *)this->fields.linkItem,
            0);
          return;
        }
      }
      else
      {
        manager = (UIDragDropListViewItem_o *)sub_1C37574(manager);
      }
    }
LABEL_17:
    sub_1C372B4(manager);
  }
}


void SvtEqCombineListViewObject__SetInput(SvtEqCombineListViewObject_o *this, bool isInput, const MethodInfo *method)
{
  UnityEngine_Object_o *itemDraw; // x20
  const MethodInfo *v6; // x3
  struct ListViewItem_o *linkItem; // x1
  __int64 naturalAligment; // x10
  SvtEqCombineListViewItemDraw_o *v9; // x0

  if ( (byte_4C3D0F5 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&SvtEqCombineListViewItem_TypeInfo);
    byte_4C3D0F5 = 1;
  }
  ListViewObject__SetInput((ListViewObject_o *)this, isInput, 0);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
  {
    linkItem = this->fields.linkItem;
    if ( linkItem
      && ((naturalAligment = SvtEqCombineListViewItem_TypeInfo->_2.naturalAligment,
           linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment)
       || (SvtEqCombineListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] != SvtEqCombineListViewItem_TypeInfo) )
    {
      v9 = (SvtEqCombineListViewItemDraw_o *)sub_1C37574(this->fields.linkItem);
    }
    else
    {
      v9 = this->fields.itemDraw;
      if ( v9 )
      {
        SvtEqCombineListViewItemDraw__SetInput(v9, (SvtEqCombineListViewItem_o *)linkItem, 0, v6);
        return;
      }
    }
    sub_1C372B4(v9);
  }
}


void SvtEqCombineListViewObject__SetItem(
        SvtEqCombineListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  ListViewObject__SetItem_43831492((ListViewObject_o *)this, item, seed, 0);
  this->fields.state = 0;
}


void SvtEqCombineListViewObject__SetItem_31560180(
        SvtEqCombineListViewObject_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ListViewObject__SetItem((ListViewObject_o *)this, item, 0);
  this->fields.state = 0;
}


void SvtEqCombineListViewObject__SetupDisp(SvtEqCombineListViewObject_o *this, const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x21
  int32_t *manager; // x20
  __int64 naturalAligment; // x9
  __int64 v6; // x9
  bool v7; // w1
  UnityEngine_Object_o *touchPress; // x22
  SvtEqCombineListViewItemDraw_o *v9; // x0
  struct UITouchPress_o *v10; // x8
  UnityEngine_Object_o *itemDraw; // x22
  const MethodInfo *v12; // x4
  SvtEqCombineListViewManager_o *v13; // x0
  int32_t v14; // w1
  bool v15; // w2
  const MethodInfo *v16; // x3

  if ( (byte_4C3D0F9 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&SvtEqCombineListViewItem_TypeInfo);
    sub_1C37058(&SvtEqCombineListViewManager_TypeInfo);
    byte_4C3D0F9 = 1;
  }
  manager = (int32_t *)this->fields.manager;
  if ( manager )
  {
    naturalAligment = SvtEqCombineListViewManager_TypeInfo->_2.naturalAligment;
    if ( *(unsigned __int8 *)(*(_QWORD *)manager + 304LL) < (unsigned int)naturalAligment
      || *(SvtEqCombineListViewManager_c **)(*(_QWORD *)(*(_QWORD *)manager + 200LL) + 8 * naturalAligment - 8) != SvtEqCombineListViewManager_TypeInfo )
    {
      sub_1C37574(this->fields.manager);
      goto LABEL_26;
    }
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
  {
    v7 = 0;
    goto LABEL_11;
  }
  v6 = SvtEqCombineListViewItem_TypeInfo->_2.naturalAligment;
  if ( linkItem->klass->_2.naturalAligment < (unsigned int)v6
    || (SvtEqCombineListViewItem_c *)linkItem->klass->_2.typeHierarchy[v6 - 1] != SvtEqCombineListViewItem_TypeInfo )
  {
LABEL_26:
    v13 = (SvtEqCombineListViewManager_o *)sub_1C37574(linkItem);
    SvtEqCombineListViewManager__SetDragStart(v13, v14, v15, v16);
    return;
  }
  v7 = this->fields.dispMode != 0;
LABEL_11:
  ListViewObject__SetVisible((ListViewObject_o *)this, v7, 0);
  touchPress = (UnityEngine_Object_o *)this->fields.touchPress;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v9 = (SvtEqCombineListViewItemDraw_o *)UnityEngine_Object__op_Inequality(touchPress, 0, 0);
  if ( ((unsigned __int8)v9 & 1) != 0 )
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
  v9 = (SvtEqCombineListViewItemDraw_o *)UnityEngine_Object__op_Inequality(itemDraw, 0, 0);
  if ( ((unsigned __int8)v9 & 1) != 0 )
  {
    if ( manager )
    {
      v9 = this->fields.itemDraw;
      if ( v9 )
      {
        SvtEqCombineListViewItemDraw__SetItem(
          v9,
          (SvtEqCombineListViewItem_o *)linkItem,
          this->fields.dispMode,
          manager[186],
          v12);
        return;
      }
    }
LABEL_24:
    sub_1C372B4(v9);
  }
}


void SvtEqCombineListViewObject__Start(SvtEqCombineListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.state )
    SvtEqCombineListViewObject__Init_31539236(this, 2, v2);
}


System_String_o *SvtEqCombineListViewObject__ToString(SvtEqCombineListViewObject_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x0
  float z; // w9
  System_String_o *v5; // x20
  System_String_o *v6; // x0
  System_Enum_o v8; // [xsp+8h] [xbp-58h] BYREF
  int32_t dispMode; // [xsp+18h] [xbp-48h]
  __int64 v10; // [xsp+20h] [xbp-40h] BYREF
  float v11; // [xsp+28h] [xbp-38h]

  if ( (byte_4C3D0FA & 1) == 0 )
  {
    sub_1C37058(&SvtEqCombineListViewItemDraw_DispMode_TypeInfo);
    sub_1C37058(&StringLiteral_113/*" "*/);
    byte_4C3D0FA = 1;
  }
  v11 = 0.0;
  v10 = 0;
  v8.klass = (System_Enum_c *)SvtEqCombineListViewItemDraw_DispMode_TypeInfo;
  v8.monitor = (void *)-1LL;
  dispMode = this->fields.dispMode;
  v3 = System_Enum__ToString(&v8, 0);
  z = this->fields.basePosition.fields.z;
  v5 = v3;
  v10 = *(_QWORD *)&this->fields.basePosition.fields.x;
  v11 = z;
  v6 = (System_String_o *)sub_1DF5F08(&v10, 0, 0, 0);
  return System_String__Concat_63599904(v5, (System_String_o *)StringLiteral_113/*" "*/, v6, 0);
}


void SvtEqCombineListViewObject__add_callbackFunc(
        SvtEqCombineListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  SvtEqCombineListViewObject_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4C3D0F0 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    byte_4C3D0F0 = 1;
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
    v9 = sub_1C712B0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (SvtEqCombineListViewObject_o *)sub_1C37574(v8);
  SvtEqCombineListViewObject__remove_callbackFunc(v11, v12, v13);
}


void SvtEqCombineListViewObject__remove_callbackFunc(
        SvtEqCombineListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  SvtEqCombineListViewObject_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4C3D0F1 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    byte_4C3D0F1 = 1;
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
    v9 = sub_1C712B0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (SvtEqCombineListViewObject_o *)sub_1C37574(v8);
  SvtEqCombineListViewObject__Awake(v11, v12);
}