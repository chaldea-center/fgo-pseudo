void SvtEqCombineListViewObject___ctor(SvtEqCombineListViewObject_o *this, const MethodInfo *method)
{
  if ( (byte_4C50E7F & 1) == 0 )
  {
    sub_1C3E564(&ListViewObject_TypeInfo);
    byte_4C50E7F = 1;
  }
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  ListViewObject___ctor((ListViewObject_o *)this, 0);
}


void SvtEqCombineListViewObject__Awake(SvtEqCombineListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  Il2CppObject *Component_object; // x0
  Il2CppObject *v6; // x0

  if ( (byte_4C50E72 & 1) == 0 )
  {
    sub_1C3E564(&Method_UnityEngine_Component_GetComponent_UIDragDropListViewItem___);
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_SvtEqCombineListViewItemDraw___);
    byte_4C50E72 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1C3E7C0(0, v3);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_SvtEqCombineListViewItemDraw___);
  this->fields.itemDraw = (struct SvtEqCombineListViewItemDraw_o *)Component_object;
  sub_1C3E508(&this->fields.itemDraw, Component_object);
  v6 = UnityEngine_Component__GetComponent_object_(
         (UnityEngine_Component_o *)this,
         (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_UIDragDropListViewItem___);
  this->fields.itemDrag = (struct UIDragDropListViewItem_o *)v6;
  sub_1C3E508(&this->fields.itemDrag, v6);
}


UnityEngine_GameObject_o *SvtEqCombineListViewObject__CreateDragObject(
        SvtEqCombineListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *DragObject; // x19
  Il2CppObject *Component_object; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2

  if ( (byte_4C50E77 & 1) == 0 )
  {
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_SvtEqCombineListViewObject___);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C50E77 = 1;
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
                               (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_SvtEqCombineListViewObject___)) == 0 )
    {
      sub_1C3E7C0(Component_object, v5);
    }
    SvtEqCombineListViewObject__Init_31569240((SvtEqCombineListViewObject_o *)Component_object, 2, v6);
  }
  return (UnityEngine_GameObject_o *)DragObject;
}


SvtEqCombineListViewItem_o *SvtEqCombineListViewObject__GetItem(
        SvtEqCombineListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11

  if ( (byte_4C50E74 & 1) == 0 )
  {
    sub_1C3E564(&SvtEqCombineListViewItem_TypeInfo);
    byte_4C50E74 = 1;
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
  __int64 v17; // x1
  bool v18; // w24
  struct System_Action_o **p_callbackFunc; // x21
  const MethodInfo *v20; // x1
  int32_t v21; // w9
  struct System_Action_o *v22; // x19

  if ( (byte_4C50E78 & 1) == 0 )
  {
    sub_1C3E564(&SvtEqCombineListViewItem_TypeInfo);
    byte_4C50E78 = 1;
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
    sub_1C3EA80(linkItem);
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
    sub_1C3E7C0(transform, v17);
  }
  v18 = v14 || v15;
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0);
  this->fields.callbackFunc = callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  sub_1C3E508(&this->fields.callbackFunc, callbackFunc);
  if ( (unsigned int)v13 <= 4 && ((0x17u >> v13) & 1) != 0 )
  {
    v21 = dword_C49C0C[v13];
    this->fields.dispMode = dword_C49BF8[v13];
    this->fields.state = v21;
  }
  if ( v18 || dispMode != this->fields.dispMode )
    SvtEqCombineListViewObject__SetupDisp(this, v20);
  v22 = *p_callbackFunc;
  if ( *p_callbackFunc )
  {
    *p_callbackFunc = 0;
    sub_1C3E508(p_callbackFunc, 0);
    ((void (__fastcall *)(intptr_t, intptr_t))v22->fields.invoke_impl)(v22->fields.method_code, v22->fields.method);
  }
}


void SvtEqCombineListViewObject__InitItem(SvtEqCombineListViewObject_o *this, const MethodInfo *method)
{
  this->fields.state = 0;
}


// local variable allocation has failed, the output may be wrong!
void SvtEqCombineListViewObject__Init_31569240(
        SvtEqCombineListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  float v4; // s0
  int v5; // s1 OVERLAPPED

  if ( !byte_4C506A1 )
  {
    sub_1C3E564(&UnityEngine_Vector3_TypeInfo);
    byte_4C506A1 = 1;
  }
  SvtEqCombineListViewObject__Init(this, initMode, 0, v4, *(UnityEngine_Vector3_o *)&v5, v3);
}


// local variable allocation has failed, the output may be wrong!
void SvtEqCombineListViewObject__Init_31571476(
        SvtEqCombineListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        const MethodInfo *method)
{
  int v5; // s1 OVERLAPPED

  if ( !byte_4C506A1 )
  {
    sub_1C3E564(&UnityEngine_Vector3_TypeInfo);
    byte_4C506A1 = 1;
  }
  SvtEqCombineListViewObject__Init(this, initMode, callbackFunc, delay, *(UnityEngine_Vector3_o *)&v5, method);
}


// local variable allocation has failed, the output may be wrong!
void SvtEqCombineListViewObject__Init_31571560(
        SvtEqCombineListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  float v4; // s0
  int v5; // s1 OVERLAPPED

  if ( !byte_4C506A1 )
  {
    sub_1C3E564(&UnityEngine_Vector3_TypeInfo);
    byte_4C506A1 = 1;
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

  if ( (byte_4C50E76 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&SvtEqCombineListViewItem_TypeInfo);
    sub_1C3E564(&SvtEqCombineListViewManager_TypeInfo);
    byte_4C50E76 = 1;
  }
  manager = (UITouchPress_o *)this->fields.manager;
  if ( !manager )
    goto LABEL_19;
  naturalAligment = SvtEqCombineListViewManager_TypeInfo->_2.naturalAligment;
  if ( manager->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (SvtEqCombineListViewManager_c *)manager->klass->_2.typeHierarchy[naturalAligment - 1] != SvtEqCombineListViewManager_TypeInfo )
  {
    manager = (UITouchPress_o *)sub_1C3EA80(manager);
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
    sub_1C3E7C0(manager, method);
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
  v10 = (SvtEqCombineListViewObject_o *)sub_1C3EA80(this->fields.linkItem);
  return (unsigned __int8)SvtEqCombineListViewObject__CreateDragObject(v10, v11);
}


void SvtEqCombineListViewObject__OnClickSelect(SvtEqCombineListViewObject_o *this, const MethodInfo *method)
{
  SvtEqCombineListViewManager_o *manager; // x21
  SvtEqCombineListViewObject_o *v3; // x19
  SvtEqCombineListViewItem_o *linkItem; // x20
  SvtEqCombineListViewItem_c *v5; // x1
  __int64 naturalAligment; // x9
  __int64 v7; // x9
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
  if ( (byte_4C50E7B & 1) == 0 )
  {
    sub_1C3E564(&SvtEqCombineListViewItem_TypeInfo);
    sub_1C3E564(&SvtEqCombineListViewManager_TypeInfo);
    sub_1C3E564(&Method_SvtEqCombineListViewObject_OnClickSelect__);
    sub_1C3E564(&StringLiteral_9867/*"OnClickSelectBase"*/);
    this = (SvtEqCombineListViewObject_o *)sub_1C3E564(&StringLiteral_9869/*"OnClickSelectMaterial"*/);
    byte_4C50E7B = 1;
  }
  linkItem = (SvtEqCombineListViewItem_o *)v3->fields.linkItem;
  if ( !linkItem )
    return;
  v5 = SvtEqCombineListViewItem_TypeInfo;
  naturalAligment = SvtEqCombineListViewItem_TypeInfo->_2.naturalAligment;
  if ( linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (SvtEqCombineListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] != SvtEqCombineListViewItem_TypeInfo )
  {
    sub_1C3EA80(v3->fields.linkItem);
LABEL_51:
    this = (SvtEqCombineListViewObject_o *)sub_1C3EA80(manager);
    goto LABEL_52;
  }
  manager = (SvtEqCombineListViewManager_o *)v3->fields.manager;
  if ( !manager )
    goto LABEL_52;
  v7 = SvtEqCombineListViewManager_TypeInfo->_2.naturalAligment;
  if ( manager->klass->_2.naturalAligment < (unsigned int)v7
    || (SvtEqCombineListViewManager_c *)manager->klass->_2.typeHierarchy[v7 - 1] != SvtEqCombineListViewManager_TypeInfo )
  {
    goto LABEL_51;
  }
  ListViewManager__ClearScrollBarValue(v3->fields.manager, 0, 0);
  modeKind = manager->fields.modeKind;
  if ( modeKind == 2 )
  {
    UserSvtId = SvtEqCombineListViewItem__get_UserSvtId(linkItem, (const MethodInfo *)v5);
    v17 = SvtEqCombineListViewManager__CheckIsMaterialSelectSvt(manager, UserSvtId, v16);
    v18 = Method_SvtEqCombineListViewObject_OnClickSelect__;
    if ( (*((_BYTE *)Method_SvtEqCombineListViewObject_OnClickSelect__ + 83) & 2) != 0 )
      v18 = (_QWORD *)sub_1C3E57C(Method_SvtEqCombineListViewObject_OnClickSelect__);
    v13 = (System_Reflection_MethodBase_o *)sub_1C3E548(v18, v18[4]);
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
    v9 = SvtEqCombineListViewItem__get_UserSvtId(linkItem, (const MethodInfo *)v5);
    v11 = SvtEqCombineListViewManager__CheckIsMaterialSelectSvt(manager, v9, v10);
    v12 = Method_SvtEqCombineListViewObject_OnClickSelect__;
    if ( (*((_BYTE *)Method_SvtEqCombineListViewObject_OnClickSelect__ + 83) & 2) != 0 )
      v12 = (_QWORD *)sub_1C3E57C(Method_SvtEqCombineListViewObject_OnClickSelect__);
    v13 = (System_Reflection_MethodBase_o *)sub_1C3E548(v12, v12[4]);
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
        v20 = (_QWORD *)sub_1C3E57C(Method_SvtEqCombineListViewObject_OnClickSelect__);
      v21 = (System_Reflection_MethodBase_o *)sub_1C3E548(v20, v20[4]);
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
    if ( SvtEqCombineListViewItem__get_IsCanNotSelect(linkItem, (const MethodInfo *)v5) )
    {
      v22 = Method_SvtEqCombineListViewObject_OnClickSelect__;
      if ( (*((_BYTE *)Method_SvtEqCombineListViewObject_OnClickSelect__ + 83) & 2) != 0 )
        v22 = (_QWORD *)sub_1C3E57C(Method_SvtEqCombineListViewObject_OnClickSelect__);
      v13 = (System_Reflection_MethodBase_o *)sub_1C3E548(v22, v22[4]);
LABEL_35:
      OverwriteAssetSoundName__PlaySystemSe(v13, 2, 0, 0);
      return;
    }
    if ( linkItem->fields.isMaterialSvt )
    {
      linkItem->fields.isMaterialSvt = 0;
      v23 = Method_SvtEqCombineListViewObject_OnClickSelect__;
      if ( (*((_BYTE *)Method_SvtEqCombineListViewObject_OnClickSelect__ + 83) & 2) != 0 )
        v23 = (_QWORD *)sub_1C3E57C(Method_SvtEqCombineListViewObject_OnClickSelect__);
      v24 = 1;
    }
    else
    {
      v23 = Method_SvtEqCombineListViewObject_OnClickSelect__;
      if ( linkItem->fields.isMaxSelect )
      {
        if ( (*((_BYTE *)Method_SvtEqCombineListViewObject_OnClickSelect__ + 83) & 2) != 0 )
          v23 = (_QWORD *)sub_1C3E57C(Method_SvtEqCombineListViewObject_OnClickSelect__);
        v24 = 2;
      }
      else
      {
        if ( (*((_BYTE *)Method_SvtEqCombineListViewObject_OnClickSelect__ + 83) & 2) != 0 )
          v23 = (_QWORD *)sub_1C3E57C(Method_SvtEqCombineListViewObject_OnClickSelect__);
        v24 = 0;
      }
    }
    v25 = (System_Reflection_MethodBase_o *)sub_1C3E548(v23, v23[4]);
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
    sub_1C3E7C0(this, v5);
  }
}


void SvtEqCombineListViewObject__OnDestroy(SvtEqCombineListViewObject_o *this, const MethodInfo *method)
{
  struct UnityEngine_GameObject_o **p_dragObject; // x19
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_GameObject_o *dragObject; // t1
  UnityEngine_Object_o *v6; // x20

  if ( (byte_4C50E73 & 1) == 0 )
  {
    sub_1C3E564(&NGUITools_TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C50E73 = 1;
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
    sub_1C3E508(p_dragObject, 0);
  }
}


void SvtEqCombineListViewObject__OnDragDropStart(SvtEqCombineListViewObject_o *this, const MethodInfo *method)
{
  UITouchPress_o *manager; // x0
  __int64 naturalAligment; // x9
  UnityEngine_Object_o *touchPress; // x20

  if ( (byte_4C50E7D & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&SvtEqCombineListViewManager_TypeInfo);
    byte_4C50E7D = 1;
  }
  manager = (UITouchPress_o *)this->fields.manager;
  if ( !manager )
    goto LABEL_14;
  naturalAligment = SvtEqCombineListViewManager_TypeInfo->_2.naturalAligment;
  if ( manager->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (SvtEqCombineListViewManager_c *)manager->klass->_2.typeHierarchy[naturalAligment - 1] != SvtEqCombineListViewManager_TypeInfo )
  {
    manager = (UITouchPress_o *)sub_1C3EA80(manager);
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
      sub_1C3E7C0(manager, method);
    }
  }
}


void SvtEqCombineListViewObject__OnLongPush(SvtEqCombineListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  SvtEqCombineListViewObject_o *v3; // x19
  struct ListViewItem_o *linkItem; // x20
  SvtEqCombineListViewItem_c *v5; // x1
  __int64 naturalAligment; // x9
  SvtEqCombineListViewManager_o *manager; // x21
  __int64 v8; // x9
  int32_t sortIndex; // w19
  bool IsSelect; // w0
  const MethodInfo *v11; // x3
  SvtEqCombineListViewObject_o *v12; // x0
  const MethodInfo *v13; // x1

  v3 = this;
  if ( (byte_4C50E7C & 1) == 0 )
  {
    sub_1C3E564(&SvtEqCombineListViewItem_TypeInfo);
    sub_1C3E564(&SvtEqCombineListViewManager_TypeInfo);
    sub_1C3E564(&StringLiteral_9928/*"OnLongPushListView"*/);
    this = (SvtEqCombineListViewObject_o *)sub_1C3E564(&StringLiteral_9946/*"OnPressCancel"*/);
    byte_4C50E7C = 1;
  }
  linkItem = v3->fields.linkItem;
  if ( linkItem )
  {
    v5 = SvtEqCombineListViewItem_TypeInfo;
    naturalAligment = SvtEqCombineListViewItem_TypeInfo->_2.naturalAligment;
    if ( linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment
      && (SvtEqCombineListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == SvtEqCombineListViewItem_TypeInfo )
    {
      manager = (SvtEqCombineListViewManager_o *)v3->fields.manager;
      if ( manager )
      {
        v8 = SvtEqCombineListViewManager_TypeInfo->_2.naturalAligment;
        if ( manager->klass->_2.naturalAligment < (unsigned int)v8
          || (SvtEqCombineListViewManager_c *)manager->klass->_2.typeHierarchy[v8 - 1] != SvtEqCombineListViewManager_TypeInfo )
        {
          v12 = (SvtEqCombineListViewObject_o *)sub_1C3EA80(v3->fields.manager);
          SvtEqCombineListViewObject__OnDragDropStart(v12, v13);
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
            SvtEqCombineListViewManager__SetDragStart(manager, sortIndex, !IsSelect, v11);
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
        UnityEngine_GameObject__SendMessage_71323440(
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
      this = (SvtEqCombineListViewObject_o *)sub_1C3EA80(v3->fields.linkItem);
    }
LABEL_18:
    sub_1C3E7C0(this, v5);
  }
}


void SvtEqCombineListViewObject__OnLongRelease(SvtEqCombineListViewObject_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *itemDrag; // x20
  __int64 v4; // x1
  UIDragDropListViewItem_o *manager; // x0
  __int64 naturalAligment; // x9

  if ( (byte_4C50E7E & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&SvtEqCombineListViewManager_TypeInfo);
    sub_1C3E564(&StringLiteral_9928/*"OnLongPushListView"*/);
    sub_1C3E564(&StringLiteral_4033/*"CancelDragEnd"*/);
    byte_4C50E7E = 1;
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
        UnityEngine_Component__SendMessage_71313284(
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
        manager = (UIDragDropListViewItem_o *)sub_1C3EA80(manager);
      }
    }
LABEL_17:
    sub_1C3E7C0(manager, v4);
  }
}


void SvtEqCombineListViewObject__SetInput(SvtEqCombineListViewObject_o *this, bool isInput, const MethodInfo *method)
{
  UnityEngine_Object_o *itemDraw; // x20
  const MethodInfo *v6; // x3
  struct ListViewItem_o *linkItem; // x1
  __int64 naturalAligment; // x10
  SvtEqCombineListViewItemDraw_o *v9; // x0

  if ( (byte_4C50E75 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&SvtEqCombineListViewItem_TypeInfo);
    byte_4C50E75 = 1;
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
      v9 = (SvtEqCombineListViewItemDraw_o *)sub_1C3EA80(this->fields.linkItem);
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
    sub_1C3E7C0(v9, linkItem);
  }
}


void SvtEqCombineListViewObject__SetItem(
        SvtEqCombineListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  ListViewObject__SetItem_43886976((ListViewObject_o *)this, item, seed, 0);
  this->fields.state = 0;
}


void SvtEqCombineListViewObject__SetItem_31590184(
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
  __int64 v10; // x1
  struct UITouchPress_o *v11; // x8
  UnityEngine_Object_o *itemDraw; // x22
  const MethodInfo *v13; // x4
  SvtEqCombineListViewManager_o *v14; // x0
  int32_t v15; // w1
  bool v16; // w2
  const MethodInfo *v17; // x3

  if ( (byte_4C50E79 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&SvtEqCombineListViewItem_TypeInfo);
    sub_1C3E564(&SvtEqCombineListViewManager_TypeInfo);
    byte_4C50E79 = 1;
  }
  manager = (int32_t *)this->fields.manager;
  if ( manager )
  {
    naturalAligment = SvtEqCombineListViewManager_TypeInfo->_2.naturalAligment;
    if ( *(unsigned __int8 *)(*(_QWORD *)manager + 304LL) < (unsigned int)naturalAligment
      || *(SvtEqCombineListViewManager_c **)(*(_QWORD *)(*(_QWORD *)manager + 200LL) + 8 * naturalAligment - 8) != SvtEqCombineListViewManager_TypeInfo )
    {
      sub_1C3EA80(this->fields.manager);
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
    v14 = (SvtEqCombineListViewManager_o *)sub_1C3EA80(linkItem);
    SvtEqCombineListViewManager__SetDragStart(v14, v15, v16, v17);
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
    v11 = this->fields.touchPress;
    if ( !v11 )
      goto LABEL_24;
    v11->fields.isLongPressFast = LODWORD(linkItem[1].klass) == 1;
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
          v13);
        return;
      }
    }
LABEL_24:
    sub_1C3E7C0(v9, v10);
  }
}


void SvtEqCombineListViewObject__Start(SvtEqCombineListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.state )
    SvtEqCombineListViewObject__Init_31569240(this, 2, v2);
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

  if ( (byte_4C50E7A & 1) == 0 )
  {
    sub_1C3E564(&SvtEqCombineListViewItemDraw_DispMode_TypeInfo);
    sub_1C3E564(&StringLiteral_113/*" "*/);
    byte_4C50E7A = 1;
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
  v6 = (System_String_o *)sub_1DFD43C(&v10, 0, 0, 0);
  return System_String__Concat_63674716(v5, (System_String_o *)StringLiteral_113/*" "*/, v6, 0);
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

  if ( (byte_4C50E70 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    byte_4C50E70 = 1;
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
    v9 = sub_1C787BC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (SvtEqCombineListViewObject_o *)sub_1C3EA80(v8);
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

  if ( (byte_4C50E71 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    byte_4C50E71 = 1;
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
    v9 = sub_1C787BC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (SvtEqCombineListViewObject_o *)sub_1C3EA80(v8);
  SvtEqCombineListViewObject__Awake(v11, v12);
}