void SvtEqCombineListViewObject___ctor(SvtEqCombineListViewObject_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_593231E & 1) == 0 )
  {
    sub_21FFC50(&ListViewObject_TypeInfo);
    byte_593231E = 1;
  }
  if ( !*(&ListViewObject_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo, method, v2);
  ListViewObject___ctor((ListViewObject_o *)this, 0);
}


void SvtEqCombineListViewObject__Awake(SvtEqCombineListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  Il2CppObject *Component_object; // x0
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  Il2CppObject *v12; // x0
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7

  if ( (byte_5932311 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_UIDragDropListViewItem___);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_SvtEqCombineListViewItemDraw___);
    byte_5932311 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_21FFECC(0, v3);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_SvtEqCombineListViewItemDraw___);
  this->fields.itemDraw = (struct SvtEqCombineListViewItemDraw_o *)Component_object;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.itemDraw,
    (int32_t)Component_object,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  v12 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)this,
          (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_UIDragDropListViewItem___);
  this->fields.itemDrag = (struct UIDragDropListViewItem_o *)v12;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.itemDrag, (int32_t)v12, v13, v14, v15, v16, v17, v18);
}


UnityEngine_GameObject_o *SvtEqCombineListViewObject__CreateDragObject(
        SvtEqCombineListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x2
  UnityEngine_Object_o *DragObject; // x19
  Il2CppObject *Component_object; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2

  if ( (byte_5932316 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_SvtEqCombineListViewObject___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5932316 = 1;
  }
  DragObject = (UnityEngine_Object_o *)ListViewObject__CreateDragObject((ListViewObject_o *)this, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3, v4);
  Component_object = (Il2CppObject *)UnityEngine_Object__op_Inequality(DragObject, 0, 0);
  if ( ((unsigned __int8)Component_object & 1) != 0 )
  {
    if ( !DragObject
      || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)DragObject,
                               (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_SvtEqCombineListViewObject___)) == 0 )
    {
      sub_21FFECC(Component_object, v7);
    }
    SvtEqCombineListViewObject__Init_37969588((SvtEqCombineListViewObject_o *)Component_object, 2, v8);
  }
  return (UnityEngine_GameObject_o *)DragObject;
}


SvtEqCombineListViewItem_o *SvtEqCombineListViewObject__GetItem(
        SvtEqCombineListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11

  if ( (byte_5932313 & 1) == 0 )
  {
    sub_21FFC50(&SvtEqCombineListViewItem_TypeInfo);
    byte_5932313 = 1;
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
  int32_t dispMode; // w23
  bool v11; // w24
  __int64 naturalAligment; // x9
  __int64 v13; // x9
  UnityEngine_Transform_o *transform; // x0
  __int64 v15; // x1
  MissionNaviTransitionBoardItem_o *p_callbackFunc; // x22
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  const MethodInfo *v23; // x1
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  int32_t v30; // w9
  MissionNaviTransitionBoardItem_c *klass; // x19

  if ( (byte_5932317 & 1) == 0 )
  {
    sub_21FFC50(&SvtEqCombineListViewItem_TypeInfo);
    byte_5932317 = 1;
  }
  linkItem = this->fields.linkItem;
  dispMode = this->fields.dispMode;
  v11 = this->fields.state == 0;
  if ( initMode == 5 )
  {
    if ( !linkItem )
    {
LABEL_12:
      initMode = 0;
      goto LABEL_13;
    }
    naturalAligment = SvtEqCombineListViewItem_TypeInfo->_2.naturalAligment;
    if ( linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment
      && (SvtEqCombineListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == SvtEqCombineListViewItem_TypeInfo )
    {
      initMode = 5;
LABEL_13:
      v11 = 1;
      goto LABEL_15;
    }
LABEL_11:
    sub_220024C(linkItem, SvtEqCombineListViewItem_TypeInfo, callbackFunc, method);
    goto LABEL_12;
  }
  if ( !linkItem )
  {
    initMode = 0;
    goto LABEL_15;
  }
  v13 = SvtEqCombineListViewItem_TypeInfo->_2.naturalAligment;
  if ( linkItem->klass->_2.naturalAligment < (unsigned int)v13
    || (SvtEqCombineListViewItem_c *)linkItem->klass->_2.typeHierarchy[v13 - 1] != SvtEqCombineListViewItem_TypeInfo )
  {
    goto LABEL_11;
  }
LABEL_15:
  ListViewObject__SetVisible((ListViewObject_o *)this, initMode != 0, 0);
  ((void (__fastcall *)(SvtEqCombineListViewObject_o *, bool, const MethodInfo *))this->klass->vtable._9_SetInput.methodPtr)(
    this,
    initMode == 4,
    this->klass->vtable._9_SetInput.method);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0)) == 0) )
  {
    sub_21FFECC(transform, v15);
  }
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0);
  this->fields.callbackFunc = callbackFunc;
  p_callbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callbackFunc,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  if ( (unsigned int)initMode <= 4 && ((0x17u >> initMode) & 1) != 0 )
  {
    v30 = dword_ECFAC8[initMode];
    this->fields.dispMode = dword_ECFAB4[initMode];
    this->fields.state = v30;
  }
  if ( v11 || dispMode != this->fields.dispMode )
    SvtEqCombineListViewObject__SetupDisp(this, v23);
  klass = p_callbackFunc->klass;
  if ( p_callbackFunc->klass )
  {
    p_callbackFunc->klass = 0;
    sub_21FFBF4(p_callbackFunc, 0, v24, v25, v26, v27, v28, v29);
    ((void (__fastcall *)(Il2CppClass *, _QWORD))klass->_1.namespaze)(
      klass->_1.element_class,
      *(_QWORD *)&klass->_1.byval_arg.bits);
  }
}


void SvtEqCombineListViewObject__InitItem(SvtEqCombineListViewObject_o *this, const MethodInfo *method)
{
  this->fields.state = 0;
}


// local variable allocation has failed, the output may be wrong!
void SvtEqCombineListViewObject__Init_37969588(
        SvtEqCombineListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  float v4; // s0
  int v5; // s1 OVERLAPPED

  if ( !byte_5931940 )
  {
    sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
    byte_5931940 = 1;
  }
  SvtEqCombineListViewObject__Init(this, initMode, 0, v4, *(UnityEngine_Vector3_o *)&v5, v3);
}


// local variable allocation has failed, the output may be wrong!
void SvtEqCombineListViewObject__Init_37971800(
        SvtEqCombineListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        const MethodInfo *method)
{
  int v5; // s1 OVERLAPPED

  if ( !byte_5931940 )
  {
    sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
    byte_5931940 = 1;
  }
  SvtEqCombineListViewObject__Init(this, initMode, callbackFunc, delay, *(UnityEngine_Vector3_o *)&v5, method);
}


// local variable allocation has failed, the output may be wrong!
void SvtEqCombineListViewObject__Init_37971884(
        SvtEqCombineListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  float v4; // s0
  int v5; // s1 OVERLAPPED

  if ( !byte_5931940 )
  {
    sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
    byte_5931940 = 1;
  }
  SvtEqCombineListViewObject__Init(this, initMode, callbackFunc, v4, *(UnityEngine_Vector3_o *)&v5, method);
}


bool SvtEqCombineListViewObject__IsCanDrag(SvtEqCombineListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3
  UITouchPress_o *manager; // x0
  SvtEqCombineListViewManager_c *v6; // x1
  __int64 naturalAligment; // x9
  struct ListViewItem_o *linkItem; // x1
  __int64 v9; // x10
  UnityEngine_Object_o *touchPress; // x20
  SvtEqCombineListViewObject_o *v12; // x0
  const MethodInfo *v13; // x1

  if ( (byte_5932315 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&SvtEqCombineListViewItem_TypeInfo);
    sub_21FFC50(&SvtEqCombineListViewManager_TypeInfo);
    byte_5932315 = 1;
  }
  manager = (UITouchPress_o *)this->fields.manager;
  if ( !manager )
    goto LABEL_19;
  v6 = SvtEqCombineListViewManager_TypeInfo;
  naturalAligment = SvtEqCombineListViewManager_TypeInfo->_2.naturalAligment;
  if ( manager->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (SvtEqCombineListViewManager_c *)manager->klass->_2.typeHierarchy[naturalAligment - 1] != SvtEqCombineListViewManager_TypeInfo )
  {
    manager = (UITouchPress_o *)sub_220024C(manager, SvtEqCombineListViewManager_TypeInfo, v2, v3);
    goto LABEL_19;
  }
  if ( (HIDWORD(manager[10].monitor) & 0x80000000) != 0 )
  {
LABEL_12:
    touchPress = (UnityEngine_Object_o *)this->fields.touchPress;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v2);
    if ( !UnityEngine_Object__op_Inequality(touchPress, 0, 0) )
      return 0;
    manager = this->fields.touchPress;
    if ( manager )
    {
      UITouchPress__PressReset(manager, 0);
      return 0;
    }
LABEL_19:
    sub_21FFECC(manager, method);
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem
    || (v9 = SvtEqCombineListViewItem_TypeInfo->_2.naturalAligment,
        linkItem->klass->_2.naturalAligment >= (unsigned int)v9)
    && (SvtEqCombineListViewItem_c *)linkItem->klass->_2.typeHierarchy[v9 - 1] == SvtEqCombineListViewItem_TypeInfo )
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
  v12 = (SvtEqCombineListViewObject_o *)sub_220024C(this->fields.linkItem, SvtEqCombineListViewItem_TypeInfo, v2, v3);
  return (unsigned __int8)SvtEqCombineListViewObject__CreateDragObject(v12, v13);
}


void SvtEqCombineListViewObject__OnClickSelect(SvtEqCombineListViewObject_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  SvtEqCombineListViewManager_o *manager; // x21
  SvtEqCombineListViewObject_o *v5; // x19
  SvtEqCombineListViewItem_o *linkItem; // x20
  SvtEqCombineListViewItem_c *v7; // x1
  __int64 naturalAligment; // x9
  SvtEqCombineListViewManager_c *v9; // x1
  __int64 v10; // x9
  int32_t modeKind; // w8
  int64_t v12; // x0
  const MethodInfo *v13; // x2
  bool v14; // w8
  _QWORD *v15; // x0
  char v16; // w9
  System_Reflection_MethodBase_o *v17; // x0
  const MethodInfo *v18; // x1
  SvtEqCombineListViewObject_o *v19; // x0
  int64_t UserSvtId; // x0
  const MethodInfo *v21; // x2
  bool v22; // w8
  System_Reflection_MethodBase_o *v23; // x0
  int32_t type; // w8
  System_Reflection_MethodBase_o *v25; // x0
  System_Reflection_MethodBase_o *v26; // x0
  System_Reflection_MethodBase_o *v27; // x0
  int32_t v28; // w1
  _BOOL4 isMaxSelect; // w20

  v5 = this;
  if ( (byte_593231A & 1) == 0 )
  {
    sub_21FFC50(&SvtEqCombineListViewItem_TypeInfo);
    sub_21FFC50(&SvtEqCombineListViewManager_TypeInfo);
    sub_21FFC50(&Method_SvtEqCombineListViewObject_OnClickSelect__);
    sub_21FFC50(&StringLiteral_10253/*"OnClickSelectBase"*/);
    this = (SvtEqCombineListViewObject_o *)sub_21FFC50(&StringLiteral_10255/*"OnClickSelectMaterial"*/);
    byte_593231A = 1;
  }
  linkItem = (SvtEqCombineListViewItem_o *)v5->fields.linkItem;
  if ( !linkItem )
    return;
  v7 = SvtEqCombineListViewItem_TypeInfo;
  naturalAligment = SvtEqCombineListViewItem_TypeInfo->_2.naturalAligment;
  if ( linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (SvtEqCombineListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] != SvtEqCombineListViewItem_TypeInfo )
  {
    sub_220024C(v5->fields.linkItem, SvtEqCombineListViewItem_TypeInfo, v2, v3);
LABEL_44:
    this = (SvtEqCombineListViewObject_o *)sub_220024C(manager, v9, v2, v3);
    goto LABEL_45;
  }
  manager = (SvtEqCombineListViewManager_o *)v5->fields.manager;
  if ( !manager )
    goto LABEL_45;
  v9 = SvtEqCombineListViewManager_TypeInfo;
  v10 = SvtEqCombineListViewManager_TypeInfo->_2.naturalAligment;
  if ( manager->klass->_2.naturalAligment < (unsigned int)v10
    || (SvtEqCombineListViewManager_c *)manager->klass->_2.typeHierarchy[v10 - 1] != SvtEqCombineListViewManager_TypeInfo )
  {
    goto LABEL_44;
  }
  ListViewManager__ClearScrollBarValue(v5->fields.manager, 0, 0);
  modeKind = manager->fields.modeKind;
  if ( modeKind == 2 )
  {
    UserSvtId = SvtEqCombineListViewItem__get_UserSvtId(linkItem, (const MethodInfo *)v7);
    v22 = SvtEqCombineListViewManager__CheckIsMaterialSelectSvt(manager, UserSvtId, v21);
    v15 = Method_SvtEqCombineListViewObject_OnClickSelect__;
    v16 = *((_BYTE *)Method_SvtEqCombineListViewObject_OnClickSelect__ + 83);
    if ( !v22 )
    {
      if ( (*((_BYTE *)Method_SvtEqCombineListViewObject_OnClickSelect__ + 83) & 2) != 0 )
        v15 = (_QWORD *)sub_21FFC68(Method_SvtEqCombineListViewObject_OnClickSelect__);
      v26 = (System_Reflection_MethodBase_o *)sub_21FFC34(v15, v15[4]);
      OverwriteAssetSoundName__PlaySystemSe(v26, 0, 0, 0);
      v19 = v5;
      linkItem->fields.isSwapChoice ^= 1u;
      goto LABEL_28;
    }
    goto LABEL_16;
  }
  if ( modeKind == 1 )
  {
    v12 = SvtEqCombineListViewItem__get_UserSvtId(linkItem, (const MethodInfo *)v7);
    v14 = SvtEqCombineListViewManager__CheckIsMaterialSelectSvt(manager, v12, v13);
    v15 = Method_SvtEqCombineListViewObject_OnClickSelect__;
    v16 = *((_BYTE *)Method_SvtEqCombineListViewObject_OnClickSelect__ + 83);
    if ( !v14 )
    {
      if ( (*((_BYTE *)Method_SvtEqCombineListViewObject_OnClickSelect__ + 83) & 2) != 0 )
        v15 = (_QWORD *)sub_21FFC68(Method_SvtEqCombineListViewObject_OnClickSelect__);
      v17 = (System_Reflection_MethodBase_o *)sub_21FFC34(v15, v15[4]);
      OverwriteAssetSoundName__PlaySystemSe(v17, 11, 0, 0);
      v19 = v5;
      linkItem->fields.isSwapLock ^= 1u;
LABEL_28:
      SvtEqCombineListViewObject__SetupDisp(v19, v18);
      return;
    }
LABEL_16:
    if ( (v16 & 2) != 0 )
      v15 = (_QWORD *)sub_21FFC68(v15);
    v23 = (System_Reflection_MethodBase_o *)sub_21FFC34(v15, v15[4]);
    goto LABEL_19;
  }
  type = linkItem->fields.type;
  if ( !type )
  {
    if ( linkItem->fields.isLvMax && linkItem->fields.isLimitCntMax || linkItem->fields.isSvtEqMaterial )
    {
      v25 = (System_Reflection_MethodBase_o *)sub_1FEBA28(Method_SvtEqCombineListViewObject_OnClickSelect__);
      OverwriteAssetSoundName__PlaySystemSe(v25, 2, 0, 0);
    }
    else
    {
      this = (SvtEqCombineListViewObject_o *)v5->fields.manager;
      if ( !this )
        goto LABEL_45;
      UnityEngine_Component__SendMessage(
        (UnityEngine_Component_o *)this,
        (System_String_o *)StringLiteral_10253/*"OnClickSelectBase"*/,
        (Il2CppObject *)v5,
        0);
    }
    type = linkItem->fields.type;
  }
  if ( type == 1 )
  {
    if ( SvtEqCombineListViewItem__get_IsCanNotSelect(linkItem, (const MethodInfo *)v7) )
    {
      v23 = (System_Reflection_MethodBase_o *)sub_1FEBA28(Method_SvtEqCombineListViewObject_OnClickSelect__);
LABEL_19:
      OverwriteAssetSoundName__PlaySystemSe(v23, 2, 0, 0);
      return;
    }
    if ( linkItem->fields.isMaterialSvt )
    {
      linkItem->fields.isMaterialSvt = 0;
      v27 = (System_Reflection_MethodBase_o *)sub_1FEBA28(Method_SvtEqCombineListViewObject_OnClickSelect__);
      v28 = 1;
    }
    else
    {
      isMaxSelect = linkItem->fields.isMaxSelect;
      v27 = (System_Reflection_MethodBase_o *)sub_1FEBA28(Method_SvtEqCombineListViewObject_OnClickSelect__);
      if ( isMaxSelect )
        v28 = 2;
      else
        v28 = 0;
    }
    OverwriteAssetSoundName__PlaySystemSe(v27, v28, 0, 0);
    this = (SvtEqCombineListViewObject_o *)v5->fields.manager;
    if ( this )
    {
      UnityEngine_Component__SendMessage(
        (UnityEngine_Component_o *)this,
        (System_String_o *)StringLiteral_10255/*"OnClickSelectMaterial"*/,
        (Il2CppObject *)v5,
        0);
      return;
    }
LABEL_45:
    sub_21FFECC(this, v7);
  }
}


void SvtEqCombineListViewObject__OnDestroy(SvtEqCombineListViewObject_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  MissionNaviTransitionBoardItem_o *p_dragObject; // x19
  UnityEngine_Object_o *v5; // x20
  struct UnityEngine_GameObject_o *dragObject; // t1
  __int64 v7; // x1
  __int64 v8; // x2
  UnityEngine_Object_o *klass; // x20
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7

  if ( (byte_5932312 & 1) == 0 )
  {
    sub_21FFC50(&NGUITools_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5932312 = 1;
  }
  dragObject = this->fields.dragObject;
  p_dragObject = (MissionNaviTransitionBoardItem_o *)&this->fields.dragObject;
  v5 = (UnityEngine_Object_o *)dragObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(v5, 0, 0) )
  {
    klass = (UnityEngine_Object_o *)p_dragObject->klass;
    if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v7, v8);
    NGUITools__Destroy(klass, 0);
    p_dragObject->klass = 0;
    sub_21FFBF4(p_dragObject, 0, v10, v11, v12, v13, v14, v15);
  }
}


void SvtEqCombineListViewObject__OnDragDropStart(SvtEqCombineListViewObject_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  UITouchPress_o *manager; // x0
  __int64 naturalAligment; // x9
  UnityEngine_Object_o *touchPress; // x20

  if ( (byte_593231C & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&SvtEqCombineListViewManager_TypeInfo);
    byte_593231C = 1;
  }
  manager = (UITouchPress_o *)this->fields.manager;
  if ( !manager )
    goto LABEL_14;
  naturalAligment = SvtEqCombineListViewManager_TypeInfo->_2.naturalAligment;
  if ( manager->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (SvtEqCombineListViewManager_c *)manager->klass->_2.typeHierarchy[naturalAligment - 1] != SvtEqCombineListViewManager_TypeInfo )
  {
    manager = (UITouchPress_o *)sub_220024C(manager, SvtEqCombineListViewManager_TypeInfo, v2, v3);
    goto LABEL_14;
  }
  if ( (HIDWORD(manager[10].monitor) & 0x80000000) == 0 )
  {
    touchPress = (UnityEngine_Object_o *)this->fields.touchPress;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, SvtEqCombineListViewManager_TypeInfo, v2);
    if ( UnityEngine_Object__op_Inequality(touchPress, 0, 0) )
    {
      manager = this->fields.touchPress;
      if ( manager )
      {
        UITouchPress__PressReset(manager, 0);
        return;
      }
LABEL_14:
      sub_21FFECC(manager, method);
    }
  }
}


void SvtEqCombineListViewObject__OnLongPush(SvtEqCombineListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3
  SvtEqCombineListViewObject_o *v4; // x19
  struct ListViewItem_o *linkItem; // x20
  SvtEqCombineListViewItem_c *v6; // x1
  __int64 naturalAligment; // x9
  SvtEqCombineListViewManager_o *manager; // x21
  __int64 v9; // x9
  int32_t sortIndex; // w19
  bool IsSelect; // w0
  const MethodInfo *v12; // x3
  SvtEqCombineListViewObject_o *v13; // x0
  const MethodInfo *v14; // x1

  v4 = this;
  if ( (byte_593231B & 1) == 0 )
  {
    sub_21FFC50(&SvtEqCombineListViewItem_TypeInfo);
    sub_21FFC50(&SvtEqCombineListViewManager_TypeInfo);
    sub_21FFC50(&StringLiteral_10317/*"OnLongPushListView"*/);
    this = (SvtEqCombineListViewObject_o *)sub_21FFC50(&StringLiteral_10336/*"OnPressCancel"*/);
    byte_593231B = 1;
  }
  linkItem = v4->fields.linkItem;
  if ( linkItem )
  {
    v6 = SvtEqCombineListViewItem_TypeInfo;
    naturalAligment = SvtEqCombineListViewItem_TypeInfo->_2.naturalAligment;
    if ( linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment
      && (SvtEqCombineListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == SvtEqCombineListViewItem_TypeInfo )
    {
      manager = (SvtEqCombineListViewManager_o *)v4->fields.manager;
      if ( manager )
      {
        v9 = SvtEqCombineListViewManager_TypeInfo->_2.naturalAligment;
        if ( manager->klass->_2.naturalAligment < (unsigned int)v9
          || (SvtEqCombineListViewManager_c *)manager->klass->_2.typeHierarchy[v9 - 1] != SvtEqCombineListViewManager_TypeInfo )
        {
          v13 = (SvtEqCombineListViewObject_o *)sub_220024C(
                                                  v4->fields.manager,
                                                  SvtEqCombineListViewManager_TypeInfo,
                                                  v2,
                                                  v3);
          SvtEqCombineListViewObject__OnDragDropStart(v13, v14);
          return;
        }
        if ( LODWORD(linkItem[1].klass) == 1 )
        {
          if ( SvtEqCombineListViewManager__IsDragEnable(
                 (SvtEqCombineListViewManager_o *)v4->fields.manager,
                 (SvtEqCombineListViewItem_o *)v4->fields.linkItem,
                 v2) )
          {
            sortIndex = linkItem->fields.sortIndex;
            IsSelect = ListViewItem__get_IsSelect(linkItem, 0);
            SvtEqCombineListViewManager__SetDragStart(manager, sortIndex, !IsSelect, v12);
          }
          return;
        }
      }
      else if ( LODWORD(linkItem[1].klass) == 1 )
      {
        goto LABEL_18;
      }
      this = (SvtEqCombineListViewObject_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v4, 0);
      if ( this )
      {
        UnityEngine_GameObject__SendMessage_83224792(
          (UnityEngine_GameObject_o *)this,
          (System_String_o *)StringLiteral_10336/*"OnPressCancel"*/,
          0);
        this = (SvtEqCombineListViewObject_o *)v4->fields.manager;
        if ( this )
        {
          UnityEngine_Component__SendMessage(
            (UnityEngine_Component_o *)this,
            (System_String_o *)StringLiteral_10317/*"OnLongPushListView"*/,
            (Il2CppObject *)v4->fields.linkItem,
            0);
          return;
        }
      }
    }
    else
    {
      this = (SvtEqCombineListViewObject_o *)sub_220024C(v4->fields.linkItem, SvtEqCombineListViewItem_TypeInfo, v2, v3);
    }
LABEL_18:
    sub_21FFECC(this, v6);
  }
}


void SvtEqCombineListViewObject__OnLongRelease(SvtEqCombineListViewObject_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *itemDrag; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x3
  UIDragDropListViewItem_o *manager; // x0
  __int64 naturalAligment; // x9

  if ( (byte_593231D & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&SvtEqCombineListViewManager_TypeInfo);
    sub_21FFC50(&StringLiteral_10317/*"OnLongPushListView"*/);
    sub_21FFC50(&StringLiteral_4175/*"CancelDragEnd"*/);
    byte_593231D = 1;
  }
  if ( this->fields.linkItem )
  {
    itemDrag = (UnityEngine_Object_o *)this->fields.itemDrag;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
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
        UnityEngine_Component__SendMessage_83209572(
          (UnityEngine_Component_o *)manager,
          (System_String_o *)StringLiteral_4175/*"CancelDragEnd"*/,
          0);
        manager = (UIDragDropListViewItem_o *)this->fields.manager;
        if ( manager )
        {
          UnityEngine_Component__SendMessage(
            (UnityEngine_Component_o *)manager,
            (System_String_o *)StringLiteral_10317/*"OnLongPushListView"*/,
            (Il2CppObject *)this->fields.linkItem,
            0);
          return;
        }
      }
      else
      {
        manager = (UIDragDropListViewItem_o *)sub_220024C(manager, SvtEqCombineListViewManager_TypeInfo, v6, v7);
      }
    }
LABEL_17:
    sub_21FFECC(manager, v5);
  }
}


void SvtEqCombineListViewObject__SetInput(SvtEqCombineListViewObject_o *this, bool isInput, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_Object_o *itemDraw; // x20
  __int64 v8; // x2
  const MethodInfo *v9; // x3
  struct ListViewItem_o *linkItem; // x1
  __int64 naturalAligment; // x10
  SvtEqCombineListViewItemDraw_o *v12; // x0

  if ( (byte_5932314 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&SvtEqCombineListViewItem_TypeInfo);
    byte_5932314 = 1;
  }
  ListViewObject__SetInput((ListViewObject_o *)this, isInput, 0);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
  {
    linkItem = this->fields.linkItem;
    if ( linkItem
      && ((naturalAligment = SvtEqCombineListViewItem_TypeInfo->_2.naturalAligment,
           linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment)
       || (SvtEqCombineListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] != SvtEqCombineListViewItem_TypeInfo) )
    {
      v12 = (SvtEqCombineListViewItemDraw_o *)sub_220024C(
                                                this->fields.linkItem,
                                                SvtEqCombineListViewItem_TypeInfo,
                                                v8,
                                                v9);
    }
    else
    {
      v12 = this->fields.itemDraw;
      if ( v12 )
      {
        SvtEqCombineListViewItemDraw__SetInput(v12, (SvtEqCombineListViewItem_o *)linkItem, 0, v9);
        return;
      }
    }
    sub_21FFECC(v12, linkItem);
  }
}


void SvtEqCombineListViewObject__SetItem(
        SvtEqCombineListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  ListViewObject__SetItem_50780416((ListViewObject_o *)this, item, seed, 0);
  this->fields.state = 0;
}


void SvtEqCombineListViewObject__SetItem_37990348(
        SvtEqCombineListViewObject_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ListViewObject__SetItem((ListViewObject_o *)this, item, 0);
  this->fields.state = 0;
}


void SvtEqCombineListViewObject__SetupDisp(SvtEqCombineListViewObject_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  struct ListViewItem_o *linkItem; // x21
  int32_t *manager; // x20
  __int64 naturalAligment; // x9
  SvtEqCombineListViewItem_c *v8; // x1
  __int64 v9; // x9
  bool v10; // w1
  __int64 v11; // x1
  __int64 v12; // x2
  UnityEngine_Object_o *touchPress; // x22
  SvtEqCombineListViewItemDraw_o *v14; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  struct UITouchPress_o *v17; // x8
  UnityEngine_Object_o *itemDraw; // x22
  const MethodInfo *v19; // x4
  SvtEqCombineListViewManager_o *v20; // x0
  int32_t v21; // w1
  bool v22; // w2
  const MethodInfo *v23; // x3

  if ( (byte_5932318 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&SvtEqCombineListViewItem_TypeInfo);
    sub_21FFC50(&SvtEqCombineListViewManager_TypeInfo);
    byte_5932318 = 1;
  }
  manager = (int32_t *)this->fields.manager;
  if ( manager )
  {
    naturalAligment = SvtEqCombineListViewManager_TypeInfo->_2.naturalAligment;
    if ( *(unsigned __int8 *)(*(_QWORD *)manager + 304LL) < (unsigned int)naturalAligment
      || *(SvtEqCombineListViewManager_c **)(*(_QWORD *)(*(_QWORD *)manager + 200LL) + 8 * naturalAligment - 8) != SvtEqCombineListViewManager_TypeInfo )
    {
      sub_220024C(this->fields.manager, SvtEqCombineListViewManager_TypeInfo, v2, v3);
      goto LABEL_26;
    }
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
  {
    v10 = 0;
    goto LABEL_11;
  }
  v8 = SvtEqCombineListViewItem_TypeInfo;
  v9 = SvtEqCombineListViewItem_TypeInfo->_2.naturalAligment;
  if ( linkItem->klass->_2.naturalAligment < (unsigned int)v9
    || (SvtEqCombineListViewItem_c *)linkItem->klass->_2.typeHierarchy[v9 - 1] != SvtEqCombineListViewItem_TypeInfo )
  {
LABEL_26:
    v20 = (SvtEqCombineListViewManager_o *)sub_220024C(linkItem, v8, v2, v3);
    SvtEqCombineListViewManager__SetDragStart(v20, v21, v22, v23);
    return;
  }
  v10 = this->fields.dispMode != 0;
LABEL_11:
  ListViewObject__SetVisible((ListViewObject_o *)this, v10, 0);
  touchPress = (UnityEngine_Object_o *)this->fields.touchPress;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11, v12);
  v14 = (SvtEqCombineListViewItemDraw_o *)UnityEngine_Object__op_Inequality(touchPress, 0, 0);
  if ( ((unsigned __int8)v14 & 1) != 0 )
  {
    if ( !linkItem )
      goto LABEL_24;
    v17 = this->fields.touchPress;
    if ( !v17 )
      goto LABEL_24;
    v17->fields.isLongPressFast = LODWORD(linkItem[1].klass) == 1;
  }
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15, v16);
  v14 = (SvtEqCombineListViewItemDraw_o *)UnityEngine_Object__op_Inequality(itemDraw, 0, 0);
  if ( ((unsigned __int8)v14 & 1) != 0 )
  {
    if ( manager )
    {
      v14 = this->fields.itemDraw;
      if ( v14 )
      {
        SvtEqCombineListViewItemDraw__SetItem(
          v14,
          (SvtEqCombineListViewItem_o *)linkItem,
          this->fields.dispMode,
          manager[186],
          v19);
        return;
      }
    }
LABEL_24:
    sub_21FFECC(v14, v15);
  }
}


void SvtEqCombineListViewObject__Start(SvtEqCombineListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.state )
    SvtEqCombineListViewObject__Init_37969588(this, 2, v2);
}


System_String_o *SvtEqCombineListViewObject__ToString(SvtEqCombineListViewObject_o *this, const MethodInfo *method)
{
  int32_t dispMode; // w10
  System_String_o *v4; // x0
  float z; // w9
  System_String_o *v6; // x20
  System_String_o *v7; // x0
  System_Enum_o v9; // [xsp+8h] [xbp-58h] BYREF
  int32_t v10; // [xsp+18h] [xbp-48h]
  __int64 v11; // [xsp+20h] [xbp-40h] BYREF
  float v12; // [xsp+28h] [xbp-38h]

  if ( (byte_5932319 & 1) == 0 )
  {
    sub_21FFC50(&SvtEqCombineListViewItemDraw_DispMode_TypeInfo);
    sub_21FFC50(&StringLiteral_113/*" "*/);
    byte_5932319 = 1;
  }
  dispMode = this->fields.dispMode;
  v12 = 0.0;
  v11 = 0;
  v9.klass = (System_Enum_c *)SvtEqCombineListViewItemDraw_DispMode_TypeInfo;
  v9.monitor = (void *)-1LL;
  v10 = dispMode;
  v4 = System_Enum__ToString(&v9, 0);
  z = this->fields.basePosition.fields.z;
  v6 = v4;
  v11 = *(_QWORD *)&this->fields.basePosition.fields.x;
  v12 = z;
  v7 = (System_String_o *)sub_240362C(&v11, 0, 0, 0);
  return System_String__Concat_75481624(v6, (System_String_o *)StringLiteral_113/*" "*/, v7, 0);
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
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  SvtEqCombineListViewObject_o *v13; // x0
  System_Action_o *v14; // x1
  const MethodInfo *v15; // x2

  if ( (byte_593230F & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    byte_593230F = 1;
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
    v11 = sub_223767C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  v13 = (SvtEqCombineListViewObject_o *)sub_220024C(v8, System_Action_TypeInfo, v9, v10);
  SvtEqCombineListViewObject__remove_callbackFunc(v13, v14, v15);
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
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  SvtEqCombineListViewObject_o *v13; // x0
  const MethodInfo *v14; // x1

  if ( (byte_5932310 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    byte_5932310 = 1;
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
    v11 = sub_223767C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  v13 = (SvtEqCombineListViewObject_o *)sub_220024C(v8, System_Action_TypeInfo, v9, v10);
  SvtEqCombineListViewObject__Awake(v13, v14);
}