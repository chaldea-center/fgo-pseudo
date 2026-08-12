void CombineServantListViewObject___ctor(CombineServantListViewObject_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_596A32A & 1) == 0 )
  {
    sub_2213A60(&ListViewObject_TypeInfo);
    byte_596A32A = 1;
  }
  if ( !*(&ListViewObject_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo, method, v2);
  ListViewObject___ctor((ListViewObject_o *)this, 0);
}


void CombineServantListViewObject__Awake(CombineServantListViewObject_o *this, const MethodInfo *method)
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

  if ( (byte_596A31D & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UIDragDropListViewItem___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_CombineServantListViewItemDraw___);
    byte_596A31D = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_2213CDC(0, v3);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_CombineServantListViewItemDraw___);
  this->fields.itemDraw = (struct CombineServantListViewItemDraw_o *)Component_object;
  sub_2213A04(
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
          (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIDragDropListViewItem___);
  this->fields.itemDrag = (struct UIDragDropListViewItem_o *)v12;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.itemDrag, (int32_t)v12, v13, v14, v15, v16, v17, v18);
}


UnityEngine_GameObject_o *CombineServantListViewObject__CreateDragObject(
        CombineServantListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x2
  UnityEngine_Object_o *DragObject; // x19
  Il2CppObject *Component_object; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2

  if ( (byte_596A322 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_CombineServantListViewObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596A322 = 1;
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
                               (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_CombineServantListViewObject___)) == 0 )
    {
      sub_2213CDC(Component_object, v7);
    }
    CombineServantListViewObject__Init_37850296((CombineServantListViewObject_o *)Component_object, 2, v8);
  }
  return (UnityEngine_GameObject_o *)DragObject;
}


CombineServantListViewItem_o *CombineServantListViewObject__GetItem(
        CombineServantListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11

  if ( (byte_596A31F & 1) == 0 )
  {
    sub_2213A60(&CombineServantListViewItem_TypeInfo);
    byte_596A31F = 1;
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

  if ( (byte_596A323 & 1) == 0 )
  {
    sub_2213A60(&CombineServantListViewItem_TypeInfo);
    byte_596A323 = 1;
  }
  linkItem = this->fields.linkItem;
  dispMode = this->fields.dispMode;
  v11 = this->fields.state == 0;
  if ( initMode == 4 )
  {
    if ( !linkItem )
    {
LABEL_12:
      initMode = 0;
      goto LABEL_13;
    }
    naturalAligment = CombineServantListViewItem_TypeInfo->_2.naturalAligment;
    if ( linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment
      && (CombineServantListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == CombineServantListViewItem_TypeInfo )
    {
      initMode = 4;
LABEL_13:
      v11 = 1;
      goto LABEL_15;
    }
LABEL_11:
    sub_221405C(linkItem, CombineServantListViewItem_TypeInfo, callbackFunc, method);
    goto LABEL_12;
  }
  if ( !linkItem )
  {
    initMode = 0;
    goto LABEL_15;
  }
  v13 = CombineServantListViewItem_TypeInfo->_2.naturalAligment;
  if ( linkItem->klass->_2.naturalAligment < (unsigned int)v13
    || (CombineServantListViewItem_c *)linkItem->klass->_2.typeHierarchy[v13 - 1] != CombineServantListViewItem_TypeInfo )
  {
    goto LABEL_11;
  }
LABEL_15:
  ListViewObject__SetVisible((ListViewObject_o *)this, initMode != 0, 0);
  ((void (__fastcall *)(CombineServantListViewObject_o *, bool, const MethodInfo *))this->klass->vtable._9_SetInput.methodPtr)(
    this,
    initMode == 3,
    this->klass->vtable._9_SetInput.method);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0)) == 0) )
  {
    sub_2213CDC(transform, v15);
  }
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0);
  this->fields.callbackFunc = callbackFunc;
  p_callbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callbackFunc,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  if ( (unsigned int)initMode <= 4 )
  {
    v30 = dword_ED8BD0[initMode];
    this->fields.dispMode = dword_ED8BBC[initMode];
    this->fields.state = v30;
  }
  if ( v11 || dispMode != this->fields.dispMode )
    CombineServantListViewObject__SetupDisp(this, v23);
  klass = p_callbackFunc->klass;
  if ( p_callbackFunc->klass )
  {
    p_callbackFunc->klass = 0;
    sub_2213A04(p_callbackFunc, 0, v24, v25, v26, v27, v28, v29);
    ((void (__fastcall *)(Il2CppClass *, _QWORD))klass->_1.namespaze)(
      klass->_1.element_class,
      *(_QWORD *)&klass->_1.byval_arg.bits);
  }
}


void CombineServantListViewObject__InitItem(CombineServantListViewObject_o *this, const MethodInfo *method)
{
  this->fields.state = 0;
}


void CombineServantListViewObject__Init_37850296(
        CombineServantListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  float v4; // s0
  float v5; // s1
  float v6; // s2
  float v7; // s3
  UnityEngine_Vector3_o v10; // 0:kr00_12.12

  if ( !byte_5969AE0 )
  {
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  v10.fields.x = v5;
  v10.fields.y = v6;
  v10.fields.z = v7;
  CombineServantListViewObject__Init(this, initMode, 0, v4, v10, v3);
}


void CombineServantListViewObject__Init_37852556(
        CombineServantListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        const MethodInfo *method)
{
  float v5; // s1
  float v6; // s2
  float v7; // s3
  UnityEngine_Vector3_o v11; // 0:kr00_12.12

  if ( !byte_5969AE0 )
  {
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  v11.fields.x = v5;
  v11.fields.y = v6;
  v11.fields.z = v7;
  CombineServantListViewObject__Init(this, initMode, callbackFunc, delay, v11, method);
}


void CombineServantListViewObject__Init_37852640(
        CombineServantListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  float v4; // s0
  float v5; // s1
  float v6; // s2
  float v7; // s3
  UnityEngine_Vector3_o v11; // 0:kr00_12.12

  if ( !byte_5969AE0 )
  {
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  v11.fields.x = v5;
  v11.fields.y = v6;
  v11.fields.z = v7;
  CombineServantListViewObject__Init(this, initMode, callbackFunc, v4, v11, method);
}


bool CombineServantListViewObject__IsCanDrag(CombineServantListViewObject_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  CombineServantListViewObject_o *v4; // x19
  CombineServantListViewManager_o *manager; // x20
  __int64 naturalAligment; // x9
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  CombineServantListViewItem_o *linkItem; // x1
  __int64 v11; // x10
  UnityEngine_Object_o *touchPress; // x20
  CombineServantListViewObject_o *v14; // x0
  const MethodInfo *v15; // x1

  v4 = this;
  if ( (byte_596A321 & 1) == 0 )
  {
    sub_2213A60(&CombineServantListViewItem_TypeInfo);
    sub_2213A60(&CombineServantListViewManager_TypeInfo);
    this = (CombineServantListViewObject_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596A321 = 1;
  }
  manager = (CombineServantListViewManager_o *)v4->fields.manager;
  if ( !manager )
    goto LABEL_19;
  naturalAligment = CombineServantListViewManager_TypeInfo->_2.naturalAligment;
  if ( manager->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (CombineServantListViewManager_c *)manager->klass->_2.typeHierarchy[naturalAligment - 1] != CombineServantListViewManager_TypeInfo )
  {
    this = (CombineServantListViewObject_o *)sub_221405C(
                                               v4->fields.manager,
                                               CombineServantListViewManager_TypeInfo,
                                               v2,
                                               v3);
    goto LABEL_19;
  }
  if ( !CombineServantListViewManager__IsDragStart((CombineServantListViewManager_o *)v4->fields.manager, 0) )
  {
LABEL_12:
    touchPress = (UnityEngine_Object_o *)v4->fields.touchPress;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v8);
    if ( !UnityEngine_Object__op_Inequality(touchPress, 0, 0) )
      return 0;
    this = (CombineServantListViewObject_o *)v4->fields.touchPress;
    if ( this )
    {
      UITouchPress__PressReset((UITouchPress_o *)this, 0);
      return 0;
    }
LABEL_19:
    sub_2213CDC(this, method);
  }
  linkItem = (CombineServantListViewItem_o *)v4->fields.linkItem;
  if ( !linkItem
    || (v11 = CombineServantListViewItem_TypeInfo->_2.naturalAligment,
        linkItem->klass->_2.naturalAligment >= (unsigned int)v11)
    && (CombineServantListViewItem_c *)linkItem->klass->_2.typeHierarchy[v11 - 1] == CombineServantListViewItem_TypeInfo )
  {
    if ( CombineServantListViewManager__IsDragEnable(manager, linkItem, 0) )
      return 1;
    goto LABEL_12;
  }
  v14 = (CombineServantListViewObject_o *)sub_221405C(v4->fields.linkItem, CombineServantListViewItem_TypeInfo, v8, v9);
  return (unsigned __int8)CombineServantListViewObject__CreateDragObject(v14, v15);
}


void CombineServantListViewObject__OnClickSelect(CombineServantListViewObject_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  CombineServantListViewManager_o *manager; // x21
  CombineServantListViewObject_o *v5; // x19
  CombineServantListViewItem_o *linkItem; // x20
  CombineServantListViewItem_c *v7; // x1
  __int64 naturalAligment; // x9
  CombineServantListViewManager_c *v9; // x1
  __int64 v10; // x9
  int32_t modeKind; // w8
  int64_t v12; // x0
  bool v13; // w8
  _QWORD *v14; // x0
  char v15; // w9
  System_Reflection_MethodBase_o *v16; // x0
  const MethodInfo *v17; // x1
  int64_t UserSvtId; // x0
  bool v19; // w8
  System_Reflection_MethodBase_o *v20; // x0
  unsigned int type; // w8
  __int64 *v22; // x8
  System_Reflection_MethodBase_o *v23; // x0
  System_Reflection_MethodBase_o *v24; // x0
  int32_t v25; // w1
  _BOOL4 isMaxSelect; // w20

  v5 = this;
  if ( (byte_596A326 & 1) == 0 )
  {
    sub_2213A60(&CombineServantListViewItem_TypeInfo);
    sub_2213A60(&CombineServantListViewManager_TypeInfo);
    sub_2213A60(&Method_CombineServantListViewObject_OnClickSelect__);
    sub_2213A60(&StringLiteral_10266/*"OnClickSelectBase"*/);
    sub_2213A60(&StringLiteral_10268/*"OnClickSelectMaterial"*/);
    this = (CombineServantListViewObject_o *)sub_2213A60(&StringLiteral_10270/*"OnClickSelectPush"*/);
    byte_596A326 = 1;
  }
  linkItem = (CombineServantListViewItem_o *)v5->fields.linkItem;
  if ( !linkItem )
    return;
  v7 = CombineServantListViewItem_TypeInfo;
  naturalAligment = CombineServantListViewItem_TypeInfo->_2.naturalAligment;
  if ( linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (CombineServantListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] != CombineServantListViewItem_TypeInfo )
  {
    sub_221405C(v5->fields.linkItem, CombineServantListViewItem_TypeInfo, v2, v3);
LABEL_53:
    this = (CombineServantListViewObject_o *)sub_221405C(manager, v9, v2, v3);
    goto LABEL_54;
  }
  manager = (CombineServantListViewManager_o *)v5->fields.manager;
  if ( !manager )
    goto LABEL_54;
  v9 = CombineServantListViewManager_TypeInfo;
  v10 = CombineServantListViewManager_TypeInfo->_2.naturalAligment;
  if ( manager->klass->_2.naturalAligment < (unsigned int)v10
    || (CombineServantListViewManager_c *)manager->klass->_2.typeHierarchy[v10 - 1] != CombineServantListViewManager_TypeInfo )
  {
    goto LABEL_53;
  }
  ListViewManager__ClearScrollBarValue(v5->fields.manager, 0, 0);
  modeKind = manager->fields.modeKind;
  switch ( modeKind )
  {
    case 3:
      if ( CombineServantListViewItem__get_IsCanNotSelectPush(linkItem, 0) )
      {
        v14 = Method_CombineServantListViewObject_OnClickSelect__;
        if ( (*((_BYTE *)Method_CombineServantListViewObject_OnClickSelect__ + 83) & 2) == 0 )
          goto LABEL_19;
        goto LABEL_18;
      }
      this = (CombineServantListViewObject_o *)v5->fields.manager;
      if ( this )
      {
        v22 = &StringLiteral_10270/*"OnClickSelectPush"*/;
        goto LABEL_40;
      }
LABEL_54:
      sub_2213CDC(this, v7);
    case 2:
      UserSvtId = CombineServantListViewItem__get_UserSvtId(linkItem, 0);
      v19 = CombineServantListViewManager__CheckIsMaterialSelectSvt(manager, UserSvtId, 0);
      v14 = Method_CombineServantListViewObject_OnClickSelect__;
      v15 = *((_BYTE *)Method_CombineServantListViewObject_OnClickSelect__ + 83);
      if ( !v19 )
      {
        if ( (*((_BYTE *)Method_CombineServantListViewObject_OnClickSelect__ + 83) & 2) != 0 )
          v14 = (_QWORD *)sub_2213A78(Method_CombineServantListViewObject_OnClickSelect__);
        v23 = (System_Reflection_MethodBase_o *)sub_2213A44(v14, v14[4]);
        OverwriteAssetSoundName__PlaySystemSe(v23, 0, 0, 0);
        CombineServantListViewItem__SwapChoice(linkItem, 0);
        goto LABEL_37;
      }
LABEL_17:
      if ( (v15 & 2) == 0 )
      {
LABEL_19:
        v20 = (System_Reflection_MethodBase_o *)sub_2213A44(v14, v14[4]);
LABEL_20:
        OverwriteAssetSoundName__PlaySystemSe(v20, 2, 0, 0);
        return;
      }
LABEL_18:
      v14 = (_QWORD *)sub_2213A78(v14);
      goto LABEL_19;
    case 1:
      v12 = CombineServantListViewItem__get_UserSvtId(linkItem, 0);
      v13 = CombineServantListViewManager__CheckIsMaterialSelectSvt(manager, v12, 0);
      v14 = Method_CombineServantListViewObject_OnClickSelect__;
      v15 = *((_BYTE *)Method_CombineServantListViewObject_OnClickSelect__ + 83);
      if ( !v13 )
      {
        if ( (*((_BYTE *)Method_CombineServantListViewObject_OnClickSelect__ + 83) & 2) != 0 )
          v14 = (_QWORD *)sub_2213A78(Method_CombineServantListViewObject_OnClickSelect__);
        v16 = (System_Reflection_MethodBase_o *)sub_2213A44(v14, v14[4]);
        OverwriteAssetSoundName__PlaySystemSe(v16, 11, 0, 0);
        CombineServantListViewItem__SwapLock(linkItem, 0);
LABEL_37:
        CombineServantListViewObject__SetupDisp(v5, v17);
        return;
      }
      goto LABEL_17;
  }
  type = linkItem->fields.type;
  if ( type <= 0xC )
  {
    if ( ((1 << type) & 0x1DC8) != 0 || ((1 << type) & 0x214) != 0 )
      goto LABEL_30;
    if ( type == 5 )
      goto LABEL_43;
  }
  if ( type == 1 )
  {
LABEL_43:
    if ( !CombineServantListViewItem__get_IsCanNotSelect(linkItem, 0) )
    {
      if ( linkItem->fields.isMaterialSvt )
      {
        linkItem->fields.isMaterialSvt = 0;
        v24 = (System_Reflection_MethodBase_o *)sub_1FFEFAC(Method_CombineServantListViewObject_OnClickSelect__);
        v25 = 1;
      }
      else
      {
        isMaxSelect = linkItem->fields.isMaxSelect;
        v24 = (System_Reflection_MethodBase_o *)sub_1FFEFAC(Method_CombineServantListViewObject_OnClickSelect__);
        if ( isMaxSelect )
          v25 = 2;
        else
          v25 = 0;
      }
      OverwriteAssetSoundName__PlaySystemSe(v24, v25, 0, 0);
      this = (CombineServantListViewObject_o *)v5->fields.manager;
      if ( this )
      {
        v22 = &StringLiteral_10268/*"OnClickSelectMaterial"*/;
        goto LABEL_40;
      }
      goto LABEL_54;
    }
    goto LABEL_44;
  }
  if ( type )
    return;
LABEL_30:
  if ( !CombineServantListViewItem__get_IsCanNotBaseSelect(linkItem, 0) || linkItem->fields.isBaseSvt )
  {
    this = (CombineServantListViewObject_o *)v5->fields.manager;
    if ( this )
    {
      v22 = &StringLiteral_10266/*"OnClickSelectBase"*/;
LABEL_40:
      UnityEngine_Component__SendMessage(
        (UnityEngine_Component_o *)this,
        (System_String_o *)*v22,
        (Il2CppObject *)v5,
        0);
      return;
    }
    goto LABEL_54;
  }
  if ( CombineServantListViewItem__get_IsCanNotBaseSelect(linkItem, 0) )
  {
LABEL_44:
    v20 = (System_Reflection_MethodBase_o *)sub_1FFEFAC(Method_CombineServantListViewObject_OnClickSelect__);
    goto LABEL_20;
  }
}


void CombineServantListViewObject__OnDestroy(CombineServantListViewObject_o *this, const MethodInfo *method)
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

  if ( (byte_596A31E & 1) == 0 )
  {
    sub_2213A60(&NGUITools_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596A31E = 1;
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
    sub_2213A04(p_dragObject, 0, v10, v11, v12, v13, v14, v15);
  }
}


void CombineServantListViewObject__OnDragDropStart(CombineServantListViewObject_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  UITouchPress_o *manager; // x0
  __int64 naturalAligment; // x9
  __int64 v7; // x1
  __int64 v8; // x2
  UnityEngine_Object_o *touchPress; // x20

  if ( (byte_596A328 & 1) == 0 )
  {
    sub_2213A60(&CombineServantListViewManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596A328 = 1;
  }
  manager = (UITouchPress_o *)this->fields.manager;
  if ( !manager )
    goto LABEL_14;
  naturalAligment = CombineServantListViewManager_TypeInfo->_2.naturalAligment;
  if ( manager->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (CombineServantListViewManager_c *)manager->klass->_2.typeHierarchy[naturalAligment - 1] != CombineServantListViewManager_TypeInfo )
  {
    manager = (UITouchPress_o *)sub_221405C(manager, CombineServantListViewManager_TypeInfo, v2, v3);
    goto LABEL_14;
  }
  if ( CombineServantListViewManager__IsDragStart((CombineServantListViewManager_o *)manager, 0) )
  {
    touchPress = (UnityEngine_Object_o *)this->fields.touchPress;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v8);
    if ( UnityEngine_Object__op_Inequality(touchPress, 0, 0) )
    {
      manager = this->fields.touchPress;
      if ( manager )
      {
        UITouchPress__PressReset(manager, 0);
        return;
      }
LABEL_14:
      sub_2213CDC(manager, method);
    }
  }
}


void CombineServantListViewObject__OnLongPush(CombineServantListViewObject_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  CombineServantListViewObject_o *v4; // x19
  struct ListViewItem_o *linkItem; // x20
  void *v6; // x1
  __int64 naturalAligment; // x9
  CombineServantListViewManager_o *manager; // x21
  __int64 v9; // x9
  int32_t sortIndex; // w19
  bool IsSelect; // w0
  CombineServantListViewObject_o *v12; // x0
  const MethodInfo *v13; // x1

  v4 = this;
  if ( (byte_596A327 & 1) == 0 )
  {
    sub_2213A60(&CombineServantListViewItem_TypeInfo);
    sub_2213A60(&CombineServantListViewManager_TypeInfo);
    sub_2213A60(&StringLiteral_10330/*"OnLongPushListView"*/);
    this = (CombineServantListViewObject_o *)sub_2213A60(&StringLiteral_10349/*"OnPressCancel"*/);
    byte_596A327 = 1;
  }
  linkItem = v4->fields.linkItem;
  if ( linkItem )
  {
    v6 = CombineServantListViewItem_TypeInfo;
    naturalAligment = CombineServantListViewItem_TypeInfo->_2.naturalAligment;
    if ( linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment
      && (CombineServantListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == CombineServantListViewItem_TypeInfo )
    {
      manager = (CombineServantListViewManager_o *)v4->fields.manager;
      if ( manager )
      {
        v6 = CombineServantListViewManager_TypeInfo;
        v9 = CombineServantListViewManager_TypeInfo->_2.naturalAligment;
        if ( manager->klass->_2.naturalAligment < (unsigned int)v9
          || (CombineServantListViewManager_c *)manager->klass->_2.typeHierarchy[v9 - 1] != CombineServantListViewManager_TypeInfo )
        {
          v12 = (CombineServantListViewObject_o *)sub_221405C(
                                                    v4->fields.manager,
                                                    CombineServantListViewManager_TypeInfo,
                                                    v2,
                                                    v3);
          CombineServantListViewObject__OnDragDropStart(v12, v13);
          return;
        }
      }
      if ( (LODWORD(linkItem[1].klass) | 4) == 5 )
      {
        if ( manager )
        {
          if ( CombineServantListViewManager__IsDragEnable(
                 (CombineServantListViewManager_o *)v4->fields.manager,
                 (CombineServantListViewItem_o *)v4->fields.linkItem,
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
        this = (CombineServantListViewObject_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v4, 0);
        if ( this )
        {
          UnityEngine_GameObject__SendMessage_83438096(
            (UnityEngine_GameObject_o *)this,
            (System_String_o *)StringLiteral_10349/*"OnPressCancel"*/,
            0);
          this = (CombineServantListViewObject_o *)v4->fields.manager;
          if ( this )
          {
            UnityEngine_Component__SendMessage(
              (UnityEngine_Component_o *)this,
              (System_String_o *)StringLiteral_10330/*"OnLongPushListView"*/,
              (Il2CppObject *)v4->fields.linkItem,
              0);
            return;
          }
        }
      }
    }
    else
    {
      this = (CombineServantListViewObject_o *)sub_221405C(
                                                 v4->fields.linkItem,
                                                 CombineServantListViewItem_TypeInfo,
                                                 v2,
                                                 v3);
    }
    sub_2213CDC(this, v6);
  }
}


void CombineServantListViewObject__OnLongRelease(CombineServantListViewObject_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *itemDrag; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x3
  UIDragDropListViewItem_o *manager; // x0
  __int64 naturalAligment; // x9

  if ( (byte_596A329 & 1) == 0 )
  {
    sub_2213A60(&CombineServantListViewManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_10330/*"OnLongPushListView"*/);
    sub_2213A60(&StringLiteral_4180/*"CancelDragEnd"*/);
    byte_596A329 = 1;
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
      naturalAligment = CombineServantListViewManager_TypeInfo->_2.naturalAligment;
      if ( manager->klass->_2.naturalAligment >= (unsigned int)naturalAligment
        && (CombineServantListViewManager_c *)manager->klass->_2.typeHierarchy[naturalAligment - 1] == CombineServantListViewManager_TypeInfo )
      {
        if ( HIDWORD(manager[8].fields.m_CancellationTokenSource) )
          return;
        UnityEngine_Component__SendMessage_83422876(
          (UnityEngine_Component_o *)manager,
          (System_String_o *)StringLiteral_4180/*"CancelDragEnd"*/,
          0);
        manager = (UIDragDropListViewItem_o *)this->fields.manager;
        if ( manager )
        {
          UnityEngine_Component__SendMessage(
            (UnityEngine_Component_o *)manager,
            (System_String_o *)StringLiteral_10330/*"OnLongPushListView"*/,
            (Il2CppObject *)this->fields.linkItem,
            0);
          return;
        }
      }
      else
      {
        manager = (UIDragDropListViewItem_o *)sub_221405C(manager, CombineServantListViewManager_TypeInfo, v6, v7);
      }
    }
LABEL_17:
    sub_2213CDC(manager, v5);
  }
}


void CombineServantListViewObject__SetInput(
        CombineServantListViewObject_o *this,
        bool isInput,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  CombineServantListViewItem_o *itemDraw; // x21
  void *v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  struct ListViewManager_o *manager; // x0
  __int64 v12; // x9
  __int64 naturalAligment; // x9
  CombineServantListViewItemDraw_o *v14; // x20
  CombineServantListViewObject_o *v15; // x0
  const MethodInfo *v16; // x1

  if ( (byte_596A320 & 1) == 0 )
  {
    sub_2213A60(&CombineServantListViewItem_TypeInfo);
    sub_2213A60(&CombineServantListViewManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596A320 = 1;
  }
  ListViewObject__SetInput((ListViewObject_o *)this, isInput, 0);
  itemDraw = (CombineServantListViewItem_o *)this->fields.itemDraw;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)itemDraw, 0, 0) )
  {
    manager = this->fields.manager;
    if ( manager
      && ((v8 = CombineServantListViewManager_TypeInfo,
           v12 = CombineServantListViewManager_TypeInfo->_2.naturalAligment,
           manager->klass->_2.naturalAligment < (unsigned int)v12)
       || (CombineServantListViewManager_c *)manager->klass->_2.typeHierarchy[v12 - 1] != CombineServantListViewManager_TypeInfo) )
    {
      sub_221405C(manager, CombineServantListViewManager_TypeInfo, v9, v10);
    }
    else
    {
      itemDraw = (CombineServantListViewItem_o *)this->fields.linkItem;
      if ( !itemDraw
        || (v8 = CombineServantListViewItem_TypeInfo,
            naturalAligment = CombineServantListViewItem_TypeInfo->_2.naturalAligment,
            itemDraw->klass->_2.naturalAligment >= (unsigned int)naturalAligment)
        && (CombineServantListViewItem_c *)itemDraw->klass->_2.typeHierarchy[naturalAligment - 1] == CombineServantListViewItem_TypeInfo )
      {
        if ( !manager
          || (v14 = this->fields.itemDraw,
              manager = (struct ListViewManager_o *)CombineServantListViewManager__IsSelectEnable(
                                                      (CombineServantListViewManager_o *)manager,
                                                      itemDraw,
                                                      0,
                                                      0,
                                                      0,
                                                      0),
              !v14) )
        {
          sub_2213CDC(manager, v8);
        }
        CombineServantListViewItemDraw__SetInput(v14, itemDraw, (unsigned __int8)manager & isInput & 1, 0);
        return;
      }
    }
    v15 = (CombineServantListViewObject_o *)sub_221405C(itemDraw, v8, v9, v10);
    CombineServantListViewObject__IsCanDrag(v15, v16);
  }
}


void CombineServantListViewObject__SetItem(
        CombineServantListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  ListViewObject__SetItem_50850568((ListViewObject_o *)this, item, seed, 0);
  this->fields.state = 0;
}


void CombineServantListViewObject__SetItem_37850708(
        CombineServantListViewObject_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ListViewObject__SetItem((ListViewObject_o *)this, item, 0);
  this->fields.state = 0;
}


void CombineServantListViewObject__SetupDisp(CombineServantListViewObject_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  struct ListViewItem_o *linkItem; // x21
  CombineServantListViewManager_o *manager; // x20
  __int64 naturalAligment; // x9
  CombineServantListViewItem_c *v8; // x1
  __int64 v9; // x9
  bool v10; // w1
  __int64 v11; // x1
  __int64 v12; // x2
  UnityEngine_Object_o *touchPress; // x22
  _BOOL8 IsSelectEnable; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  struct UITouchPress_o *v17; // x8
  UnityEngine_Object_o *itemDraw; // x22
  CombineServantListViewItemDraw_o *v19; // x22
  int32_t dispMode; // w19
  CombineServantListViewObject_o *v21; // x0
  int32_t v22; // w1
  System_Action_o *v23; // x2
  const MethodInfo *v24; // x3
  float v25; // s0

  if ( (byte_596A324 & 1) == 0 )
  {
    sub_2213A60(&CombineServantListViewItem_TypeInfo);
    sub_2213A60(&CombineServantListViewManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596A324 = 1;
  }
  manager = (CombineServantListViewManager_o *)this->fields.manager;
  if ( manager )
  {
    naturalAligment = CombineServantListViewManager_TypeInfo->_2.naturalAligment;
    if ( manager->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (CombineServantListViewManager_c *)manager->klass->_2.typeHierarchy[naturalAligment - 1] != CombineServantListViewManager_TypeInfo )
    {
      sub_221405C(this->fields.manager, CombineServantListViewManager_TypeInfo, v2, v3);
      goto LABEL_26;
    }
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
  {
    v10 = 0;
    goto LABEL_11;
  }
  v8 = CombineServantListViewItem_TypeInfo;
  v9 = CombineServantListViewItem_TypeInfo->_2.naturalAligment;
  if ( linkItem->klass->_2.naturalAligment < (unsigned int)v9
    || (CombineServantListViewItem_c *)linkItem->klass->_2.typeHierarchy[v9 - 1] != CombineServantListViewItem_TypeInfo )
  {
LABEL_26:
    v21 = (CombineServantListViewObject_o *)sub_221405C(linkItem, v8, v2, v3);
    CombineServantListViewObject__Init_37852556(v21, v22, v23, v25, v24);
    return;
  }
  v10 = this->fields.dispMode != 0;
LABEL_11:
  ListViewObject__SetVisible((ListViewObject_o *)this, v10, 0);
  touchPress = (UnityEngine_Object_o *)this->fields.touchPress;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11, v12);
  IsSelectEnable = UnityEngine_Object__op_Inequality(touchPress, 0, 0);
  if ( IsSelectEnable )
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
  IsSelectEnable = UnityEngine_Object__op_Inequality(itemDraw, 0, 0);
  if ( IsSelectEnable )
  {
    if ( manager )
    {
      v19 = this->fields.itemDraw;
      dispMode = this->fields.dispMode;
      IsSelectEnable = CombineServantListViewManager__IsSelectEnable(
                         manager,
                         (CombineServantListViewItem_o *)linkItem,
                         0,
                         0,
                         0,
                         0);
      if ( v19 )
      {
        CombineServantListViewItemDraw__SetItem(
          v19,
          (CombineServantListViewItem_o *)linkItem,
          dispMode,
          IsSelectEnable,
          manager->fields.modeKind,
          0);
        return;
      }
    }
LABEL_24:
    sub_2213CDC(IsSelectEnable, v15);
  }
}


void CombineServantListViewObject__Start(CombineServantListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.state )
    CombineServantListViewObject__Init_37850296(this, 2, v2);
}


System_String_o *CombineServantListViewObject__ToString(CombineServantListViewObject_o *this, const MethodInfo *method)
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

  if ( (byte_596A325 & 1) == 0 )
  {
    sub_2213A60(&CombineServantListViewItemDraw_DispMode_TypeInfo);
    sub_2213A60(&StringLiteral_113/*" "*/);
    byte_596A325 = 1;
  }
  dispMode = this->fields.dispMode;
  v12 = 0.0;
  v11 = 0;
  v9.klass = (System_Enum_c *)CombineServantListViewItemDraw_DispMode_TypeInfo;
  v9.monitor = (void *)-1LL;
  v10 = dispMode;
  v4 = System_Enum__ToString(&v9, 0);
  z = this->fields.basePosition.fields.z;
  v6 = v4;
  v11 = *(_QWORD *)&this->fields.basePosition.fields.x;
  v12 = z;
  v7 = (System_String_o *)sub_2402C74(&v11, 0, 0, 0);
  return System_String__Concat_75694928(v6, (System_String_o *)StringLiteral_113/*" "*/, v7, 0);
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
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  CombineServantListViewObject_o *v13; // x0
  System_Action_o *v14; // x1
  const MethodInfo *v15; // x2

  if ( (byte_596A31B & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    byte_596A31B = 1;
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
    v11 = sub_224B48C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  v13 = (CombineServantListViewObject_o *)sub_221405C(v8, System_Action_TypeInfo, v9, v10);
  CombineServantListViewObject__remove_callbackFunc(v13, v14, v15);
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
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  CombineServantListViewObject_o *v13; // x0
  const MethodInfo *v14; // x1

  if ( (byte_596A31C & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    byte_596A31C = 1;
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
    v11 = sub_224B48C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  v13 = (CombineServantListViewObject_o *)sub_221405C(v8, System_Action_TypeInfo, v9, v10);
  CombineServantListViewObject__Awake(v13, v14);
}