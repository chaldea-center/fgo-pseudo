void __fastcall SvtEqCombineListViewObject___ctor(SvtEqCombineListViewObject_o *this, const MethodInfo *method)
{
  if ( (byte_4BE0369 & 1) == 0 )
  {
    sub_1C21E38(&ListViewObject_TypeInfo);
    byte_4BE0369 = 1;
  }
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  ListViewObject___ctor((ListViewObject_o *)this, 0LL);
}


void __fastcall SvtEqCombineListViewObject__Awake(SvtEqCombineListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  Il2CppObject *Component_object; // x0
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  Il2CppObject *v12; // x0
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7

  if ( (byte_4BE035C & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_Component_GetComponent_UIDragDropListViewItem___);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_SvtEqCombineListViewItemDraw___);
    byte_4BE035C = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1C22094(0LL, v3);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_SvtEqCombineListViewItemDraw___);
  this->fields.itemDraw = (struct SvtEqCombineListViewItemDraw_o *)Component_object;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.itemDraw, (int64_t)Component_object, v6, v7, v8, v9, v10, v11);
  v12 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)this,
          (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_UIDragDropListViewItem___);
  this->fields.itemDrag = (struct UIDragDropListViewItem_o *)v12;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.itemDrag, (int64_t)v12, v13, v14, v15, v16, v17, v18);
}


UnityEngine_GameObject_o *__fastcall SvtEqCombineListViewObject__CreateDragObject(
        SvtEqCombineListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *DragObject; // x19
  Il2CppObject *Component_object; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2

  if ( (byte_4BE0361 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_SvtEqCombineListViewObject___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BE0361 = 1;
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
                               (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_SvtEqCombineListViewObject___)) == 0LL )
    {
      sub_1C22094(Component_object, v5);
    }
    SvtEqCombineListViewObject__Init_46852232((SvtEqCombineListViewObject_o *)Component_object, 2, v6);
  }
  return (UnityEngine_GameObject_o *)DragObject;
}


SvtEqCombineListViewItem_o *__fastcall SvtEqCombineListViewObject__GetItem(
        SvtEqCombineListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x11

  if ( (byte_4BE035E & 1) == 0 )
  {
    sub_1C21E38(&SvtEqCombineListViewItem_TypeInfo);
    byte_4BE035E = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0LL;
  methodPtr_low = LOBYTE(SvtEqCombineListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
    return 0LL;
  if ( (SvtEqCombineListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == SvtEqCombineListViewItem_TypeInfo )
    return (SvtEqCombineListViewItem_o *)this->fields.linkItem;
  return 0LL;
}


void __fastcall SvtEqCombineListViewObject__Init(
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
  __int64 methodPtr_low; // x10
  int32_t v13; // w23
  bool v14; // w21
  bool v15; // w24
  UnityEngine_Transform_o *transform; // x0
  __int64 v17; // x1
  bool v18; // w24
  PartyOrganizationUtility_o *p_callbackFunc; // x21
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  const MethodInfo *v26; // x1
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  int32_t v33; // w9
  PartyOrganizationUtility_c *klass; // x19

  if ( (byte_4BE0362 & 1) == 0 )
  {
    sub_1C21E38(&SvtEqCombineListViewItem_TypeInfo);
    byte_4BE0362 = 1;
  }
  linkItem = this->fields.linkItem;
  dispMode = this->fields.dispMode;
  state = this->fields.state;
  if ( !linkItem )
    goto LABEL_7;
  methodPtr_low = LOBYTE(SvtEqCombineListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (v13 = initMode,
        (SvtEqCombineListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] != SvtEqCombineListViewItem_TypeInfo) )
  {
    sub_1C22354(linkItem);
LABEL_7:
    v13 = 0;
  }
  v14 = initMode == 5;
  v15 = state == 0;
  ListViewObject__SetVisible((ListViewObject_o *)this, v13 != 0, 0LL);
  ((void (__fastcall *)(SvtEqCombineListViewObject_o *, bool, Il2CppMethodPointer))this->klass->vtable._9_SetInput.method)(
    this,
    v13 == 4,
    this->klass->vtable._10_Invalidation.methodPtr);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0LL),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_1C22094(transform, v17);
  }
  v18 = v14 || v15;
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0LL);
  this->fields.callbackFunc = callbackFunc;
  p_callbackFunc = (PartyOrganizationUtility_o *)&this->fields.callbackFunc;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.callbackFunc,
    (int64_t)callbackFunc,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  if ( (unsigned int)v13 <= 4 && ((0x17u >> v13) & 1) != 0 )
  {
    v33 = dword_C3A184[v13];
    this->fields.dispMode = dword_C3A170[v13];
    this->fields.state = v33;
  }
  if ( v18 || dispMode != this->fields.dispMode )
    SvtEqCombineListViewObject__SetupDisp(this, v26);
  klass = p_callbackFunc->klass;
  if ( p_callbackFunc->klass )
  {
    p_callbackFunc->klass = 0LL;
    sub_1C21DDC(p_callbackFunc, 0LL, v27, v28, v29, v30, v31, v32);
    ((void (__fastcall *)(Il2CppClass *, _QWORD))klass->_1.namespaze)(
      klass->_1.element_class,
      *(_QWORD *)&klass->_1.byval_arg.bits);
  }
}


void __fastcall SvtEqCombineListViewObject__InitItem(SvtEqCombineListViewObject_o *this, const MethodInfo *method)
{
  this->fields.state = 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SvtEqCombineListViewObject__Init_46852232(
        SvtEqCombineListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  float v4; // s0
  int v5; // s1

  if ( !byte_4BD6BB1 )
  {
    sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
    byte_4BD6BB1 = 1;
  }
  SvtEqCombineListViewObject__Init(this, initMode, 0LL, v4, *(UnityEngine_Vector3_o *)&v5, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SvtEqCombineListViewObject__Init_46854468(
        SvtEqCombineListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        const MethodInfo *method)
{
  int v5; // s1

  if ( !byte_4BD6BB1 )
  {
    sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
    byte_4BD6BB1 = 1;
  }
  SvtEqCombineListViewObject__Init(this, initMode, callbackFunc, delay, *(UnityEngine_Vector3_o *)&v5, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SvtEqCombineListViewObject__Init_46854552(
        SvtEqCombineListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  float v4; // s0
  int v5; // s1

  if ( !byte_4BD6BB1 )
  {
    sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
    byte_4BD6BB1 = 1;
  }
  SvtEqCombineListViewObject__Init(this, initMode, callbackFunc, v4, *(UnityEngine_Vector3_o *)&v5, method);
}


bool __fastcall SvtEqCombineListViewObject__IsCanDrag(SvtEqCombineListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  UITouchPress_o *manager; // x0
  __int64 methodPtr_low; // x9
  struct ListViewItem_o *linkItem; // x1
  __int64 v7; // x10
  UnityEngine_Object_o *touchPress; // x20
  SvtEqCombineListViewObject_o *v10; // x0
  const MethodInfo *v11; // x1

  if ( (byte_4BE0360 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&SvtEqCombineListViewItem_TypeInfo);
    sub_1C21E38(&SvtEqCombineListViewManager_TypeInfo);
    byte_4BE0360 = 1;
  }
  manager = (UITouchPress_o *)this->fields.manager;
  if ( !manager )
    goto LABEL_19;
  methodPtr_low = LOBYTE(SvtEqCombineListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(manager->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (SvtEqCombineListViewManager_c *)manager->klass->_2.typeHierarchy[methodPtr_low - 1] != SvtEqCombineListViewManager_TypeInfo )
  {
    sub_1C22354(manager);
    goto LABEL_19;
  }
  if ( (LODWORD(manager[9].fields.clickRange) & 0x80000000) != 0 )
  {
LABEL_12:
    touchPress = (UnityEngine_Object_o *)this->fields.touchPress;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(touchPress, 0LL, 0LL) )
      return 0;
    manager = this->fields.touchPress;
    if ( manager )
    {
      UITouchPress__PressReset(manager, 0LL);
      return 0;
    }
LABEL_19:
    sub_1C22094(manager, method);
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem
    || (v7 = LOBYTE(SvtEqCombineListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v7)
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
  sub_1C22354(this->fields.linkItem);
  return (unsigned __int8)SvtEqCombineListViewObject__CreateDragObject(v10, v11);
}


void __fastcall SvtEqCombineListViewObject__OnClickSelect(SvtEqCombineListViewObject_o *this, const MethodInfo *method)
{
  SvtEqCombineListViewManager_o *manager; // x21
  SvtEqCombineListViewObject_o *v3; // x19
  SvtEqCombineListViewItem_o *linkItem; // x20
  SvtEqCombineListViewItem_c *v5; // x1
  __int64 methodPtr_low; // x9
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
  if ( (byte_4BE0365 & 1) == 0 )
  {
    sub_1C21E38(&SvtEqCombineListViewItem_TypeInfo);
    sub_1C21E38(&SvtEqCombineListViewManager_TypeInfo);
    sub_1C21E38(&Method_SvtEqCombineListViewObject_OnClickSelect__);
    sub_1C21E38(&StringLiteral_10060/*"OnClickSelectBase"*/);
    this = (SvtEqCombineListViewObject_o *)sub_1C21E38(&StringLiteral_10062/*"OnClickSelectMaterial"*/);
    byte_4BE0365 = 1;
  }
  linkItem = (SvtEqCombineListViewItem_o *)v3->fields.linkItem;
  if ( !linkItem )
    return;
  v5 = SvtEqCombineListViewItem_TypeInfo;
  methodPtr_low = LOBYTE(SvtEqCombineListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (SvtEqCombineListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] != SvtEqCombineListViewItem_TypeInfo )
  {
    sub_1C22354(v3->fields.linkItem);
LABEL_51:
    sub_1C22354(manager);
    goto LABEL_52;
  }
  manager = (SvtEqCombineListViewManager_o *)v3->fields.manager;
  if ( !manager )
    goto LABEL_52;
  v7 = LOBYTE(SvtEqCombineListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(manager->klass->vtable._0_Equals.methodPtr) < (unsigned int)v7
    || (SvtEqCombineListViewManager_c *)manager->klass->_2.typeHierarchy[v7 - 1] != SvtEqCombineListViewManager_TypeInfo )
  {
    goto LABEL_51;
  }
  ListViewManager__ClearScrollBarValue(v3->fields.manager, 0, 0LL);
  modeKind = manager->fields.modeKind;
  if ( modeKind == 2 )
  {
    UserSvtId = SvtEqCombineListViewItem__get_UserSvtId(linkItem, (const MethodInfo *)v5);
    v17 = SvtEqCombineListViewManager__CheckIsMaterialSelectSvt(manager, UserSvtId, v16);
    v18 = Method_SvtEqCombineListViewObject_OnClickSelect__;
    if ( (*((_BYTE *)Method_SvtEqCombineListViewObject_OnClickSelect__ + 83) & 2) != 0 )
      v18 = (_QWORD *)sub_1C21E50(Method_SvtEqCombineListViewObject_OnClickSelect__);
    v13 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v18, v18[4]);
    if ( !v17 )
    {
      OverwriteAssetSoundName__PlaySystemSe(v13, 0, 0, 0LL);
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
      v12 = (_QWORD *)sub_1C21E50(Method_SvtEqCombineListViewObject_OnClickSelect__);
    v13 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v12, v12[4]);
    if ( !v11 )
    {
      OverwriteAssetSoundName__PlaySystemSe(v13, 11, 0, 0LL);
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
        v20 = (_QWORD *)sub_1C21E50(Method_SvtEqCombineListViewObject_OnClickSelect__);
      v21 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v20, v20[4]);
      OverwriteAssetSoundName__PlaySystemSe(v21, 2, 0, 0LL);
    }
    else
    {
      this = (SvtEqCombineListViewObject_o *)v3->fields.manager;
      if ( !this )
        goto LABEL_52;
      UnityEngine_Component__SendMessage(
        (UnityEngine_Component_o *)this,
        (System_String_o *)StringLiteral_10060/*"OnClickSelectBase"*/,
        (Il2CppObject *)v3,
        0LL);
    }
    type = linkItem->fields.type;
  }
  if ( type == 1 )
  {
    if ( SvtEqCombineListViewItem__get_IsCanNotSelect(linkItem, (const MethodInfo *)v5) )
    {
      v22 = Method_SvtEqCombineListViewObject_OnClickSelect__;
      if ( (*((_BYTE *)Method_SvtEqCombineListViewObject_OnClickSelect__ + 83) & 2) != 0 )
        v22 = (_QWORD *)sub_1C21E50(Method_SvtEqCombineListViewObject_OnClickSelect__);
      v13 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v22, v22[4]);
LABEL_35:
      OverwriteAssetSoundName__PlaySystemSe(v13, 2, 0, 0LL);
      return;
    }
    if ( linkItem->fields.isMaterialSvt )
    {
      linkItem->fields.isMaterialSvt = 0;
      v23 = Method_SvtEqCombineListViewObject_OnClickSelect__;
      if ( (*((_BYTE *)Method_SvtEqCombineListViewObject_OnClickSelect__ + 83) & 2) != 0 )
        v23 = (_QWORD *)sub_1C21E50(Method_SvtEqCombineListViewObject_OnClickSelect__);
      v24 = 1;
    }
    else
    {
      v23 = Method_SvtEqCombineListViewObject_OnClickSelect__;
      if ( linkItem->fields.isMaxSelect )
      {
        if ( (*((_BYTE *)Method_SvtEqCombineListViewObject_OnClickSelect__ + 83) & 2) != 0 )
          v23 = (_QWORD *)sub_1C21E50(Method_SvtEqCombineListViewObject_OnClickSelect__);
        v24 = 2;
      }
      else
      {
        if ( (*((_BYTE *)Method_SvtEqCombineListViewObject_OnClickSelect__ + 83) & 2) != 0 )
          v23 = (_QWORD *)sub_1C21E50(Method_SvtEqCombineListViewObject_OnClickSelect__);
        v24 = 0;
      }
    }
    v25 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v23, v23[4]);
    OverwriteAssetSoundName__PlaySystemSe(v25, v24, 0, 0LL);
    this = (SvtEqCombineListViewObject_o *)v3->fields.manager;
    if ( this )
    {
      UnityEngine_Component__SendMessage(
        (UnityEngine_Component_o *)this,
        (System_String_o *)StringLiteral_10062/*"OnClickSelectMaterial"*/,
        (Il2CppObject *)v3,
        0LL);
      return;
    }
LABEL_52:
    sub_1C22094(this, v5);
  }
}


void __fastcall SvtEqCombineListViewObject__OnDestroy(SvtEqCombineListViewObject_o *this, const MethodInfo *method)
{
  PartyOrganizationUtility_o *p_dragObject; // x19
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_GameObject_o *dragObject; // t1
  UnityEngine_Object_o *klass; // x20
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7

  if ( (byte_4BE035D & 1) == 0 )
  {
    sub_1C21E38(&NGUITools_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BE035D = 1;
  }
  dragObject = this->fields.dragObject;
  p_dragObject = (PartyOrganizationUtility_o *)&this->fields.dragObject;
  v4 = (UnityEngine_Object_o *)dragObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v4, 0LL, 0LL) )
  {
    klass = (UnityEngine_Object_o *)p_dragObject->klass;
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    NGUITools__Destroy(klass, 0LL);
    p_dragObject->klass = 0LL;
    sub_1C21DDC(p_dragObject, 0LL, v7, v8, v9, v10, v11, v12);
  }
}


void __fastcall SvtEqCombineListViewObject__OnDragDropStart(
        SvtEqCombineListViewObject_o *this,
        const MethodInfo *method)
{
  UITouchPress_o *manager; // x0
  __int64 methodPtr_low; // x9
  UnityEngine_Object_o *touchPress; // x20

  if ( (byte_4BE0367 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&SvtEqCombineListViewManager_TypeInfo);
    byte_4BE0367 = 1;
  }
  manager = (UITouchPress_o *)this->fields.manager;
  if ( !manager )
    goto LABEL_14;
  methodPtr_low = LOBYTE(SvtEqCombineListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(manager->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (SvtEqCombineListViewManager_c *)manager->klass->_2.typeHierarchy[methodPtr_low - 1] != SvtEqCombineListViewManager_TypeInfo )
  {
    sub_1C22354(manager);
    goto LABEL_14;
  }
  if ( (LODWORD(manager[9].fields.clickRange) & 0x80000000) == 0 )
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
      sub_1C22094(manager, method);
    }
  }
}


void __fastcall SvtEqCombineListViewObject__OnLongPush(SvtEqCombineListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  SvtEqCombineListViewObject_o *v3; // x19
  struct ListViewItem_o *linkItem; // x20
  SvtEqCombineListViewItem_c *v5; // x1
  __int64 methodPtr_low; // x9
  SvtEqCombineListViewManager_o *manager; // x21
  __int64 v8; // x9
  int32_t sortIndex; // w19
  bool IsSelect; // w0
  const MethodInfo *v11; // x3
  SvtEqCombineListViewObject_o *v12; // x0
  const MethodInfo *v13; // x1

  v3 = this;
  if ( (byte_4BE0366 & 1) == 0 )
  {
    sub_1C21E38(&SvtEqCombineListViewItem_TypeInfo);
    sub_1C21E38(&SvtEqCombineListViewManager_TypeInfo);
    sub_1C21E38(&StringLiteral_10119/*"OnLongPushListView"*/);
    this = (SvtEqCombineListViewObject_o *)sub_1C21E38(&StringLiteral_10137/*"OnPressCancel"*/);
    byte_4BE0366 = 1;
  }
  linkItem = v3->fields.linkItem;
  if ( linkItem )
  {
    v5 = SvtEqCombineListViewItem_TypeInfo;
    methodPtr_low = LOBYTE(SvtEqCombineListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
      && (SvtEqCombineListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == SvtEqCombineListViewItem_TypeInfo )
    {
      manager = (SvtEqCombineListViewManager_o *)v3->fields.manager;
      if ( manager )
      {
        v8 = LOBYTE(SvtEqCombineListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(manager->klass->vtable._0_Equals.methodPtr) < (unsigned int)v8
          || (SvtEqCombineListViewManager_c *)manager->klass->_2.typeHierarchy[v8 - 1] != SvtEqCombineListViewManager_TypeInfo )
        {
          sub_1C22354(v3->fields.manager);
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
            IsSelect = ListViewItem__get_IsSelect(linkItem, 0LL);
            SvtEqCombineListViewManager__SetDragStart(manager, sortIndex, !IsSelect, v11);
          }
          return;
        }
      }
      else if ( LODWORD(linkItem[1].klass) == 1 )
      {
        goto LABEL_18;
      }
      this = (SvtEqCombineListViewObject_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v3, 0LL);
      if ( this )
      {
        UnityEngine_GameObject__SendMessage_70851072(
          (UnityEngine_GameObject_o *)this,
          (System_String_o *)StringLiteral_10137/*"OnPressCancel"*/,
          0LL);
        this = (SvtEqCombineListViewObject_o *)v3->fields.manager;
        if ( this )
        {
          UnityEngine_Component__SendMessage(
            (UnityEngine_Component_o *)this,
            (System_String_o *)StringLiteral_10119/*"OnLongPushListView"*/,
            (Il2CppObject *)v3->fields.linkItem,
            0LL);
          return;
        }
      }
    }
    else
    {
      sub_1C22354(v3->fields.linkItem);
    }
LABEL_18:
    sub_1C22094(this, v5);
  }
}


void __fastcall SvtEqCombineListViewObject__OnLongRelease(SvtEqCombineListViewObject_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *itemDrag; // x20
  __int64 v4; // x1
  UIDragDropListViewItem_o *manager; // x0
  __int64 methodPtr_low; // x9

  if ( (byte_4BE0368 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&SvtEqCombineListViewManager_TypeInfo);
    sub_1C21E38(&StringLiteral_10119/*"OnLongPushListView"*/);
    sub_1C21E38(&StringLiteral_4147/*"CancelDragEnd"*/);
    byte_4BE0368 = 1;
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
        goto LABEL_17;
      UIDragDropListViewItem__PressReset(manager, 0LL);
    }
    manager = (UIDragDropListViewItem_o *)this->fields.manager;
    if ( manager )
    {
      methodPtr_low = LOBYTE(SvtEqCombineListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(manager->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
        && (SvtEqCombineListViewManager_c *)manager->klass->_2.typeHierarchy[methodPtr_low - 1] == SvtEqCombineListViewManager_TypeInfo )
      {
        if ( LODWORD(manager[5].fields.mListViewObject) )
          return;
        UnityEngine_Component__SendMessage_70840852(
          (UnityEngine_Component_o *)manager,
          (System_String_o *)StringLiteral_4147/*"CancelDragEnd"*/,
          0LL);
        manager = (UIDragDropListViewItem_o *)this->fields.manager;
        if ( manager )
        {
          UnityEngine_Component__SendMessage(
            (UnityEngine_Component_o *)manager,
            (System_String_o *)StringLiteral_10119/*"OnLongPushListView"*/,
            (Il2CppObject *)this->fields.linkItem,
            0LL);
          return;
        }
      }
      else
      {
        sub_1C22354(manager);
      }
    }
LABEL_17:
    sub_1C22094(manager, v4);
  }
}


void __fastcall SvtEqCombineListViewObject__SetInput(
        SvtEqCombineListViewObject_o *this,
        bool isInput,
        const MethodInfo *method)
{
  UnityEngine_Object_o *itemDraw; // x20
  const MethodInfo *v6; // x3
  struct ListViewItem_o *linkItem; // x1
  __int64 methodPtr_low; // x10
  SvtEqCombineListViewItemDraw_o *v9; // x0

  if ( (byte_4BE035F & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&SvtEqCombineListViewItem_TypeInfo);
    byte_4BE035F = 1;
  }
  ListViewObject__SetInput((ListViewObject_o *)this, isInput, 0LL);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    linkItem = this->fields.linkItem;
    if ( linkItem
      && ((methodPtr_low = LOBYTE(SvtEqCombineListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
           LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
       || (SvtEqCombineListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] != SvtEqCombineListViewItem_TypeInfo) )
    {
      sub_1C22354(this->fields.linkItem);
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
    sub_1C22094(v9, linkItem);
  }
}


void __fastcall SvtEqCombineListViewObject__SetItem(
        SvtEqCombineListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  ListViewObject__SetItem_42027352((ListViewObject_o *)this, item, seed, 0LL);
  this->fields.state = 0;
}


void __fastcall SvtEqCombineListViewObject__SetItem_46872448(
        SvtEqCombineListViewObject_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ListViewObject__SetItem((ListViewObject_o *)this, item, 0LL);
  this->fields.state = 0;
}


void __fastcall SvtEqCombineListViewObject__SetupDisp(SvtEqCombineListViewObject_o *this, const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x21
  int32_t *manager; // x20
  __int64 methodPtr_low; // x9
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

  if ( (byte_4BE0363 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&SvtEqCombineListViewItem_TypeInfo);
    sub_1C21E38(&SvtEqCombineListViewManager_TypeInfo);
    byte_4BE0363 = 1;
  }
  manager = (int32_t *)this->fields.manager;
  if ( manager )
  {
    methodPtr_low = LOBYTE(SvtEqCombineListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)manager + 304LL) < (unsigned int)methodPtr_low
      || *(SvtEqCombineListViewManager_c **)(*(_QWORD *)(*(_QWORD *)manager + 200LL) + 8 * methodPtr_low - 8) != SvtEqCombineListViewManager_TypeInfo )
    {
      sub_1C22354(this->fields.manager);
      goto LABEL_26;
    }
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
  {
    v7 = 0;
    goto LABEL_11;
  }
  v6 = LOBYTE(SvtEqCombineListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)v6
    || (SvtEqCombineListViewItem_c *)linkItem->klass->_2.typeHierarchy[v6 - 1] != SvtEqCombineListViewItem_TypeInfo )
  {
LABEL_26:
    sub_1C22354(linkItem);
    SvtEqCombineListViewManager__SetDragStart(v14, v15, v16, v17);
    return;
  }
  v7 = this->fields.dispMode != 0;
LABEL_11:
  ListViewObject__SetVisible((ListViewObject_o *)this, v7, 0LL);
  touchPress = (UnityEngine_Object_o *)this->fields.touchPress;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v9 = (SvtEqCombineListViewItemDraw_o *)UnityEngine_Object__op_Inequality(touchPress, 0LL, 0LL);
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
  v9 = (SvtEqCombineListViewItemDraw_o *)UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL);
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
          manager[182],
          v13);
        return;
      }
    }
LABEL_24:
    sub_1C22094(v9, v10);
  }
}


void __fastcall SvtEqCombineListViewObject__Start(SvtEqCombineListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.state )
    SvtEqCombineListViewObject__Init_46852232(this, 2, v2);
}


System_String_o *__fastcall SvtEqCombineListViewObject__ToString(
        SvtEqCombineListViewObject_o *this,
        const MethodInfo *method)
{
  System_String_o *v3; // x0
  float z; // w9
  System_String_o *v5; // x20
  System_String_o *v6; // x0
  System_Enum_o v8; // [xsp+8h] [xbp-58h] BYREF
  int32_t dispMode; // [xsp+18h] [xbp-48h]
  __int64 v10; // [xsp+20h] [xbp-40h] BYREF
  float v11; // [xsp+28h] [xbp-38h]

  if ( (byte_4BE0364 & 1) == 0 )
  {
    sub_1C21E38(&SvtEqCombineListViewItemDraw_DispMode_TypeInfo);
    sub_1C21E38(&StringLiteral_117/*" "*/);
    byte_4BE0364 = 1;
  }
  v11 = 0.0;
  v10 = 0LL;
  v8.klass = (System_Enum_c *)SvtEqCombineListViewItemDraw_DispMode_TypeInfo;
  v8.monitor = (void *)-1LL;
  dispMode = this->fields.dispMode;
  v3 = System_Enum__ToString(&v8, 0LL);
  z = this->fields.basePosition.fields.z;
  v5 = v3;
  v10 = *(_QWORD *)&this->fields.basePosition.fields.x;
  v11 = z;
  v6 = (System_String_o *)sub_1DE0AAC(&v10, 0LL, 0LL, 0LL);
  return System_String__Concat_63126736(v5, (System_String_o *)StringLiteral_117/*" "*/, v6, 0LL);
}


void __fastcall SvtEqCombineListViewObject__add_callbackFunc(
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

  if ( (byte_4BE035A & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    byte_4BE035A = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_1C5D328(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C22354(v8);
  SvtEqCombineListViewObject__remove_callbackFunc(v11, v12, v13);
}


void __fastcall SvtEqCombineListViewObject__remove_callbackFunc(
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

  if ( (byte_4BE035B & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    byte_4BE035B = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_1C5D328(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C22354(v8);
  SvtEqCombineListViewObject__Awake(v11, v12);
}