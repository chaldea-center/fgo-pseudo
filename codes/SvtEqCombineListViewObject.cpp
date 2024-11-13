void __fastcall SvtEqCombineListViewObject___ctor(SvtEqCombineListViewObject_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B19F1D & 1) == 0 )
  {
    sub_1BCA7E0(&ListViewObject_TypeInfo, method, v2);
    byte_4B19F1D = 1;
  }
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo, method);
  ListViewObject___ctor((ListViewObject_o *)this, 0LL);
}


void __fastcall SvtEqCombineListViewObject__Awake(SvtEqCombineListViewObject_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  Il2CppObject *Component_object; // x0
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  Il2CppObject *v15; // x0
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7

  if ( (byte_4B19F10 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UIDragDropListViewItem___, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_SvtEqCombineListViewItemDraw___, v4, v5);
    byte_4B19F10 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1BCAA3C(0LL, v6);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_SvtEqCombineListViewItemDraw___);
  this->fields.itemDraw = (struct SvtEqCombineListViewItemDraw_o *)Component_object;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.itemDraw,
    (int64_t)Component_object,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  v15 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)this,
          (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIDragDropListViewItem___);
  this->fields.itemDrag = (struct UIDragDropListViewItem_o *)v15;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.itemDrag, (int64_t)v15, v16, v17, v18, v19, v20, v21);
}


UnityEngine_GameObject_o *__fastcall SvtEqCombineListViewObject__CreateDragObject(
        SvtEqCombineListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  UnityEngine_Object_o *DragObject; // x19
  Il2CppObject *Component_object; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x2

  if ( (byte_4B19F15 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_SvtEqCombineListViewObject___, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    byte_4B19F15 = 1;
  }
  DragObject = (UnityEngine_Object_o *)ListViewObject__CreateDragObject((ListViewObject_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  Component_object = (Il2CppObject *)UnityEngine_Object__op_Inequality(DragObject, 0LL, 0LL);
  if ( ((unsigned __int8)Component_object & 1) != 0 )
  {
    if ( !DragObject
      || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)DragObject,
                               (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_SvtEqCombineListViewObject___)) == 0LL )
    {
      sub_1BCAA3C(Component_object, v9);
    }
    SvtEqCombineListViewObject__Init_46249876((SvtEqCombineListViewObject_o *)Component_object, 2, v10);
  }
  return (UnityEngine_GameObject_o *)DragObject;
}


SvtEqCombineListViewItem_o *__fastcall SvtEqCombineListViewObject__GetItem(
        SvtEqCombineListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x11

  if ( (byte_4B19F12 & 1) == 0 )
  {
    sub_1BCA7E0(&SvtEqCombineListViewItem_TypeInfo, method, v2);
    byte_4B19F12 = 1;
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


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_4B19F16 & 1) == 0 )
  {
    sub_1BCA7E0(&SvtEqCombineListViewItem_TypeInfo, *(_QWORD *)&initMode, callbackFunc);
    byte_4B19F16 = 1;
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
    sub_1BCACFC(linkItem);
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
    sub_1BCAA3C(transform, v17);
  }
  v18 = v14 || v15;
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0LL);
  this->fields.callbackFunc = callbackFunc;
  p_callbackFunc = (PartyOrganizationUtility_o *)&this->fields.callbackFunc;
  sub_1BCA784(
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
    v33 = dword_C0E284[v13];
    this->fields.dispMode = dword_C0E270[v13];
    this->fields.state = v33;
  }
  if ( v18 || dispMode != this->fields.dispMode )
    SvtEqCombineListViewObject__SetupDisp(this, v26);
  klass = p_callbackFunc->klass;
  if ( p_callbackFunc->klass )
  {
    p_callbackFunc->klass = 0LL;
    sub_1BCA784(p_callbackFunc, 0LL, v27, v28, v29, v30, v31, v32);
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
void __fastcall SvtEqCombineListViewObject__Init_46249876(
        SvtEqCombineListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  float v4; // s0
  int v5; // s1

  if ( !byte_4B109C1 )
  {
    sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, *(_QWORD *)&initMode, method);
    byte_4B109C1 = 1;
  }
  SvtEqCombineListViewObject__Init(this, initMode, 0LL, v4, *(UnityEngine_Vector3_o *)&v5, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SvtEqCombineListViewObject__Init_46252112(
        SvtEqCombineListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        const MethodInfo *method)
{
  int v5; // s1

  if ( !byte_4B109C1 )
  {
    sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, *(_QWORD *)&initMode, callbackFunc);
    byte_4B109C1 = 1;
  }
  SvtEqCombineListViewObject__Init(this, initMode, callbackFunc, delay, *(UnityEngine_Vector3_o *)&v5, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SvtEqCombineListViewObject__Init_46252196(
        SvtEqCombineListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  float v4; // s0
  int v5; // s1

  if ( !byte_4B109C1 )
  {
    sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, *(_QWORD *)&initMode, callbackFunc);
    byte_4B109C1 = 1;
  }
  SvtEqCombineListViewObject__Init(this, initMode, callbackFunc, v4, *(UnityEngine_Vector3_o *)&v5, method);
}


bool __fastcall SvtEqCombineListViewObject__IsCanDrag(SvtEqCombineListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  UITouchPress_o *manager; // x0
  SvtEqCombineListViewManager_c *v9; // x1
  __int64 methodPtr_low; // x9
  struct ListViewItem_o *linkItem; // x1
  __int64 v12; // x10
  UnityEngine_Object_o *touchPress; // x20
  SvtEqCombineListViewObject_o *v15; // x0
  const MethodInfo *v16; // x1

  if ( (byte_4B19F14 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&SvtEqCombineListViewItem_TypeInfo, v4, v5);
    sub_1BCA7E0(&SvtEqCombineListViewManager_TypeInfo, v6, v7);
    byte_4B19F14 = 1;
  }
  manager = (UITouchPress_o *)this->fields.manager;
  if ( !manager )
    goto LABEL_19;
  v9 = SvtEqCombineListViewManager_TypeInfo;
  methodPtr_low = LOBYTE(SvtEqCombineListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(manager->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (SvtEqCombineListViewManager_c *)manager->klass->_2.typeHierarchy[methodPtr_low - 1] != SvtEqCombineListViewManager_TypeInfo )
  {
    sub_1BCACFC(manager);
    goto LABEL_19;
  }
  if ( (LODWORD(manager[9].fields.clickRange) & 0x80000000) != 0 )
  {
LABEL_12:
    touchPress = (UnityEngine_Object_o *)this->fields.touchPress;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
    if ( !UnityEngine_Object__op_Inequality(touchPress, 0LL, 0LL) )
      return 0;
    manager = this->fields.touchPress;
    if ( manager )
    {
      UITouchPress__PressReset(manager, 0LL);
      return 0;
    }
LABEL_19:
    sub_1BCAA3C(manager, method);
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem
    || (v12 = LOBYTE(SvtEqCombineListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v12)
    && (SvtEqCombineListViewItem_c *)linkItem->klass->_2.typeHierarchy[v12 - 1] == SvtEqCombineListViewItem_TypeInfo )
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
  sub_1BCACFC(this->fields.linkItem);
  return (unsigned __int8)SvtEqCombineListViewObject__CreateDragObject(v15, v16);
}


void __fastcall SvtEqCombineListViewObject__OnClickSelect(SvtEqCombineListViewObject_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  SvtEqCombineListViewManager_o *manager; // x21
  SvtEqCombineListViewObject_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  SvtEqCombineListViewItem_o *linkItem; // x20
  SvtEqCombineListViewItem_c *v14; // x1
  __int64 methodPtr_low; // x9
  __int64 v16; // x9
  int32_t modeKind; // w8
  int64_t v18; // x0
  const MethodInfo *v19; // x2
  bool v20; // w21
  _QWORD *v21; // x8
  System_Reflection_MethodBase_o *v22; // x0
  const MethodInfo *v23; // x1
  int64_t UserSvtId; // x0
  const MethodInfo *v25; // x2
  bool v26; // w21
  _QWORD *v27; // x8
  int32_t type; // w8
  _QWORD *v29; // x0
  System_Reflection_MethodBase_o *v30; // x0
  _QWORD *v31; // x0
  _QWORD *v32; // x0
  int32_t v33; // w20
  System_Reflection_MethodBase_o *v34; // x0

  v4 = this;
  if ( (byte_4B19F19 & 1) == 0 )
  {
    sub_1BCA7E0(&SvtEqCombineListViewItem_TypeInfo, method, v2);
    sub_1BCA7E0(&SvtEqCombineListViewManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_SvtEqCombineListViewObject_OnClickSelect__, v7, v8);
    sub_1BCA7E0(&StringLiteral_9996/*"OnClickSelectBase"*/, v9, v10);
    this = (SvtEqCombineListViewObject_o *)sub_1BCA7E0(&StringLiteral_9998/*"OnClickSelectMaterial"*/, v11, v12);
    byte_4B19F19 = 1;
  }
  linkItem = (SvtEqCombineListViewItem_o *)v4->fields.linkItem;
  if ( !linkItem )
    return;
  v14 = SvtEqCombineListViewItem_TypeInfo;
  methodPtr_low = LOBYTE(SvtEqCombineListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (SvtEqCombineListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] != SvtEqCombineListViewItem_TypeInfo )
  {
    sub_1BCACFC(v4->fields.linkItem);
LABEL_51:
    sub_1BCACFC(manager);
    goto LABEL_52;
  }
  manager = (SvtEqCombineListViewManager_o *)v4->fields.manager;
  if ( !manager )
    goto LABEL_52;
  v16 = LOBYTE(SvtEqCombineListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(manager->klass->vtable._0_Equals.methodPtr) < (unsigned int)v16
    || (SvtEqCombineListViewManager_c *)manager->klass->_2.typeHierarchy[v16 - 1] != SvtEqCombineListViewManager_TypeInfo )
  {
    goto LABEL_51;
  }
  ListViewManager__ClearScrollBarValue(v4->fields.manager, 0, 0LL);
  modeKind = manager->fields.modeKind;
  if ( modeKind == 2 )
  {
    UserSvtId = SvtEqCombineListViewItem__get_UserSvtId(linkItem, (const MethodInfo *)v14);
    v26 = SvtEqCombineListViewManager__CheckIsMaterialSelectSvt(manager, UserSvtId, v25);
    v27 = Method_SvtEqCombineListViewObject_OnClickSelect__;
    if ( (*((_BYTE *)Method_SvtEqCombineListViewObject_OnClickSelect__ + 83) & 2) != 0 )
      v27 = (_QWORD *)sub_1BCA7F8(Method_SvtEqCombineListViewObject_OnClickSelect__);
    v22 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v27, v27[4]);
    if ( !v26 )
    {
      OverwriteAssetSoundName__PlaySystemSe(v22, 0, 0LL);
      linkItem->fields.isSwapChoice ^= 1u;
      goto LABEL_19;
    }
    goto LABEL_35;
  }
  if ( modeKind == 1 )
  {
    v18 = SvtEqCombineListViewItem__get_UserSvtId(linkItem, (const MethodInfo *)v14);
    v20 = SvtEqCombineListViewManager__CheckIsMaterialSelectSvt(manager, v18, v19);
    v21 = Method_SvtEqCombineListViewObject_OnClickSelect__;
    if ( (*((_BYTE *)Method_SvtEqCombineListViewObject_OnClickSelect__ + 83) & 2) != 0 )
      v21 = (_QWORD *)sub_1BCA7F8(Method_SvtEqCombineListViewObject_OnClickSelect__);
    v22 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v21, v21[4]);
    if ( !v20 )
    {
      OverwriteAssetSoundName__PlaySystemSe(v22, 11, 0LL);
      linkItem->fields.isSwapLock ^= 1u;
LABEL_19:
      SvtEqCombineListViewObject__SetupDisp(v4, v23);
      return;
    }
    goto LABEL_35;
  }
  type = linkItem->fields.type;
  if ( !type )
  {
    if ( linkItem->fields.isLvMax && linkItem->fields.isLimitCntMax || linkItem->fields.isSvtEqMaterial )
    {
      v29 = Method_SvtEqCombineListViewObject_OnClickSelect__;
      if ( (*((_BYTE *)Method_SvtEqCombineListViewObject_OnClickSelect__ + 83) & 2) != 0 )
        v29 = (_QWORD *)sub_1BCA7F8(Method_SvtEqCombineListViewObject_OnClickSelect__);
      v30 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v29, v29[4]);
      OverwriteAssetSoundName__PlaySystemSe(v30, 2, 0LL);
    }
    else
    {
      this = (SvtEqCombineListViewObject_o *)v4->fields.manager;
      if ( !this )
        goto LABEL_52;
      UnityEngine_Component__SendMessage(
        (UnityEngine_Component_o *)this,
        (System_String_o *)StringLiteral_9996/*"OnClickSelectBase"*/,
        (Il2CppObject *)v4,
        0LL);
    }
    type = linkItem->fields.type;
  }
  if ( type == 1 )
  {
    if ( SvtEqCombineListViewItem__get_IsCanNotSelect(linkItem, (const MethodInfo *)v14) )
    {
      v31 = Method_SvtEqCombineListViewObject_OnClickSelect__;
      if ( (*((_BYTE *)Method_SvtEqCombineListViewObject_OnClickSelect__ + 83) & 2) != 0 )
        v31 = (_QWORD *)sub_1BCA7F8(Method_SvtEqCombineListViewObject_OnClickSelect__);
      v22 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v31, v31[4]);
LABEL_35:
      OverwriteAssetSoundName__PlaySystemSe(v22, 2, 0LL);
      return;
    }
    if ( linkItem->fields.isMaterialSvt )
    {
      linkItem->fields.isMaterialSvt = 0;
      v32 = Method_SvtEqCombineListViewObject_OnClickSelect__;
      if ( (*((_BYTE *)Method_SvtEqCombineListViewObject_OnClickSelect__ + 83) & 2) != 0 )
        v32 = (_QWORD *)sub_1BCA7F8(Method_SvtEqCombineListViewObject_OnClickSelect__);
      v33 = 1;
    }
    else
    {
      v32 = Method_SvtEqCombineListViewObject_OnClickSelect__;
      if ( linkItem->fields.isMaxSelect )
      {
        if ( (*((_BYTE *)Method_SvtEqCombineListViewObject_OnClickSelect__ + 83) & 2) != 0 )
          v32 = (_QWORD *)sub_1BCA7F8(Method_SvtEqCombineListViewObject_OnClickSelect__);
        v33 = 2;
      }
      else
      {
        if ( (*((_BYTE *)Method_SvtEqCombineListViewObject_OnClickSelect__ + 83) & 2) != 0 )
          v32 = (_QWORD *)sub_1BCA7F8(Method_SvtEqCombineListViewObject_OnClickSelect__);
        v33 = 0;
      }
    }
    v34 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v32, v32[4]);
    OverwriteAssetSoundName__PlaySystemSe(v34, v33, 0LL);
    this = (SvtEqCombineListViewObject_o *)v4->fields.manager;
    if ( this )
    {
      UnityEngine_Component__SendMessage(
        (UnityEngine_Component_o *)this,
        (System_String_o *)StringLiteral_9998/*"OnClickSelectMaterial"*/,
        (Il2CppObject *)v4,
        0LL);
      return;
    }
LABEL_52:
    sub_1BCAA3C(this, v14);
  }
}


void __fastcall SvtEqCombineListViewObject__OnDestroy(SvtEqCombineListViewObject_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  PartyOrganizationUtility_o *p_dragObject; // x19
  UnityEngine_Object_o *v7; // x20
  struct UnityEngine_GameObject_o *dragObject; // t1
  __int64 v9; // x1
  UnityEngine_Object_o *klass; // x20
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7

  if ( (byte_4B19F11 & 1) == 0 )
  {
    sub_1BCA7E0(&NGUITools_TypeInfo, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    byte_4B19F11 = 1;
  }
  dragObject = this->fields.dragObject;
  p_dragObject = (PartyOrganizationUtility_o *)&this->fields.dragObject;
  v7 = (UnityEngine_Object_o *)dragObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(v7, 0LL, 0LL) )
  {
    klass = (UnityEngine_Object_o *)p_dragObject->klass;
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v9);
    NGUITools__Destroy(klass, 0LL);
    p_dragObject->klass = 0LL;
    sub_1BCA784(p_dragObject, 0LL, v11, v12, v13, v14, v15, v16);
  }
}


void __fastcall SvtEqCombineListViewObject__OnDragDropStart(
        SvtEqCombineListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UITouchPress_o *manager; // x0
  __int64 methodPtr_low; // x9
  UnityEngine_Object_o *touchPress; // x20

  if ( (byte_4B19F1B & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&SvtEqCombineListViewManager_TypeInfo, v4, v5);
    byte_4B19F1B = 1;
  }
  manager = (UITouchPress_o *)this->fields.manager;
  if ( !manager )
    goto LABEL_14;
  methodPtr_low = LOBYTE(SvtEqCombineListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(manager->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (SvtEqCombineListViewManager_c *)manager->klass->_2.typeHierarchy[methodPtr_low - 1] != SvtEqCombineListViewManager_TypeInfo )
  {
    sub_1BCACFC(manager);
    goto LABEL_14;
  }
  if ( (LODWORD(manager[9].fields.clickRange) & 0x80000000) == 0 )
  {
    touchPress = (UnityEngine_Object_o *)this->fields.touchPress;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, SvtEqCombineListViewManager_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(touchPress, 0LL, 0LL) )
    {
      manager = this->fields.touchPress;
      if ( manager )
      {
        UITouchPress__PressReset(manager, 0LL);
        return;
      }
LABEL_14:
      sub_1BCAA3C(manager, method);
    }
  }
}


void __fastcall SvtEqCombineListViewObject__OnLongPush(SvtEqCombineListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  SvtEqCombineListViewObject_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  struct ListViewItem_o *linkItem; // x20
  SvtEqCombineListViewItem_c *v11; // x1
  __int64 methodPtr_low; // x9
  SvtEqCombineListViewManager_o *manager; // x21
  __int64 v14; // x9
  int32_t sortIndex; // w19
  bool IsSelect; // w0
  const MethodInfo *v17; // x3
  SvtEqCombineListViewObject_o *v18; // x0
  const MethodInfo *v19; // x1

  v3 = this;
  if ( (byte_4B19F1A & 1) == 0 )
  {
    sub_1BCA7E0(&SvtEqCombineListViewItem_TypeInfo, method, v2);
    sub_1BCA7E0(&SvtEqCombineListViewManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&StringLiteral_10055/*"OnLongPushListView"*/, v6, v7);
    this = (SvtEqCombineListViewObject_o *)sub_1BCA7E0(&StringLiteral_10073/*"OnPressCancel"*/, v8, v9);
    byte_4B19F1A = 1;
  }
  linkItem = v3->fields.linkItem;
  if ( linkItem )
  {
    v11 = SvtEqCombineListViewItem_TypeInfo;
    methodPtr_low = LOBYTE(SvtEqCombineListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
      && (SvtEqCombineListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == SvtEqCombineListViewItem_TypeInfo )
    {
      manager = (SvtEqCombineListViewManager_o *)v3->fields.manager;
      if ( manager )
      {
        v14 = LOBYTE(SvtEqCombineListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(manager->klass->vtable._0_Equals.methodPtr) < (unsigned int)v14
          || (SvtEqCombineListViewManager_c *)manager->klass->_2.typeHierarchy[v14 - 1] != SvtEqCombineListViewManager_TypeInfo )
        {
          sub_1BCACFC(v3->fields.manager);
          SvtEqCombineListViewObject__OnDragDropStart(v18, v19);
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
            SvtEqCombineListViewManager__SetDragStart(manager, sortIndex, !IsSelect, v17);
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
        UnityEngine_GameObject__SendMessage_70135704(
          (UnityEngine_GameObject_o *)this,
          (System_String_o *)StringLiteral_10073/*"OnPressCancel"*/,
          0LL);
        this = (SvtEqCombineListViewObject_o *)v3->fields.manager;
        if ( this )
        {
          UnityEngine_Component__SendMessage(
            (UnityEngine_Component_o *)this,
            (System_String_o *)StringLiteral_10055/*"OnLongPushListView"*/,
            (Il2CppObject *)v3->fields.linkItem,
            0LL);
          return;
        }
      }
    }
    else
    {
      sub_1BCACFC(v3->fields.linkItem);
    }
LABEL_18:
    sub_1BCAA3C(this, v11);
  }
}


void __fastcall SvtEqCombineListViewObject__OnLongRelease(SvtEqCombineListViewObject_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  UnityEngine_Object_o *itemDrag; // x20
  __int64 v11; // x1
  UIDragDropListViewItem_o *manager; // x0
  __int64 methodPtr_low; // x9

  if ( (byte_4B19F1C & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&SvtEqCombineListViewManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&StringLiteral_10055/*"OnLongPushListView"*/, v6, v7);
    sub_1BCA7E0(&StringLiteral_4121/*"CancelDragEnd"*/, v8, v9);
    byte_4B19F1C = 1;
  }
  if ( this->fields.linkItem )
  {
    itemDrag = (UnityEngine_Object_o *)this->fields.itemDrag;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
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
        UnityEngine_Component__SendMessage_70125484(
          (UnityEngine_Component_o *)manager,
          (System_String_o *)StringLiteral_4121/*"CancelDragEnd"*/,
          0LL);
        manager = (UIDragDropListViewItem_o *)this->fields.manager;
        if ( manager )
        {
          UnityEngine_Component__SendMessage(
            (UnityEngine_Component_o *)manager,
            (System_String_o *)StringLiteral_10055/*"OnLongPushListView"*/,
            (Il2CppObject *)this->fields.linkItem,
            0LL);
          return;
        }
      }
      else
      {
        sub_1BCACFC(manager);
      }
    }
LABEL_17:
    sub_1BCAA3C(manager, v11);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SvtEqCombineListViewObject__SetInput(
        SvtEqCombineListViewObject_o *this,
        bool isInput,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  UnityEngine_Object_o *itemDraw; // x20
  const MethodInfo *v9; // x3
  struct ListViewItem_o *linkItem; // x1
  __int64 methodPtr_low; // x10
  SvtEqCombineListViewItemDraw_o *v12; // x0

  if ( (byte_4B19F13 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, isInput, method);
    sub_1BCA7E0(&SvtEqCombineListViewItem_TypeInfo, v5, v6);
    byte_4B19F13 = 1;
  }
  ListViewObject__SetInput((ListViewObject_o *)this, isInput, 0LL);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    linkItem = this->fields.linkItem;
    if ( linkItem
      && ((methodPtr_low = LOBYTE(SvtEqCombineListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
           LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
       || (SvtEqCombineListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] != SvtEqCombineListViewItem_TypeInfo) )
    {
      sub_1BCACFC(this->fields.linkItem);
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
    sub_1BCAA3C(v12, linkItem);
  }
}


void __fastcall SvtEqCombineListViewObject__SetItem(
        SvtEqCombineListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  ListViewObject__SetItem_41478184((ListViewObject_o *)this, item, seed, 0LL);
  this->fields.state = 0;
}


void __fastcall SvtEqCombineListViewObject__SetItem_46270020(
        SvtEqCombineListViewObject_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ListViewObject__SetItem((ListViewObject_o *)this, item, 0LL);
  this->fields.state = 0;
}


void __fastcall SvtEqCombineListViewObject__SetupDisp(SvtEqCombineListViewObject_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct ListViewItem_o *linkItem; // x21
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  int32_t *manager; // x20
  __int64 methodPtr_low; // x9
  __int64 v11; // x9
  bool v12; // w1
  __int64 v13; // x1
  UnityEngine_Object_o *touchPress; // x22
  SvtEqCombineListViewItemDraw_o *v15; // x0
  __int64 v16; // x1
  struct UITouchPress_o *v17; // x8
  UnityEngine_Object_o *itemDraw; // x22
  const MethodInfo *v19; // x4
  SvtEqCombineListViewManager_o *v20; // x0
  int32_t v21; // w1
  bool v22; // w2
  const MethodInfo *v23; // x3

  if ( (byte_4B19F17 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&SvtEqCombineListViewItem_TypeInfo, v5, v6);
    sub_1BCA7E0(&SvtEqCombineListViewManager_TypeInfo, v7, v8);
    byte_4B19F17 = 1;
  }
  manager = (int32_t *)this->fields.manager;
  if ( manager )
  {
    methodPtr_low = LOBYTE(SvtEqCombineListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)manager + 304LL) < (unsigned int)methodPtr_low
      || *(SvtEqCombineListViewManager_c **)(*(_QWORD *)(*(_QWORD *)manager + 200LL) + 8 * methodPtr_low - 8) != SvtEqCombineListViewManager_TypeInfo )
    {
      sub_1BCACFC(this->fields.manager);
      goto LABEL_26;
    }
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
  {
    v12 = 0;
    goto LABEL_11;
  }
  v11 = LOBYTE(SvtEqCombineListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)v11
    || (SvtEqCombineListViewItem_c *)linkItem->klass->_2.typeHierarchy[v11 - 1] != SvtEqCombineListViewItem_TypeInfo )
  {
LABEL_26:
    sub_1BCACFC(linkItem);
    SvtEqCombineListViewManager__SetDragStart(v20, v21, v22, v23);
    return;
  }
  v12 = this->fields.dispMode != 0;
LABEL_11:
  ListViewObject__SetVisible((ListViewObject_o *)this, v12, 0LL);
  touchPress = (UnityEngine_Object_o *)this->fields.touchPress;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
  v15 = (SvtEqCombineListViewItemDraw_o *)UnityEngine_Object__op_Inequality(touchPress, 0LL, 0LL);
  if ( ((unsigned __int8)v15 & 1) != 0 )
  {
    if ( !linkItem )
      goto LABEL_24;
    v17 = this->fields.touchPress;
    if ( !v17 )
      goto LABEL_24;
    v17->fields.isLongPressFast = LODWORD(linkItem[1].klass) == 1;
  }
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16);
  v15 = (SvtEqCombineListViewItemDraw_o *)UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL);
  if ( ((unsigned __int8)v15 & 1) != 0 )
  {
    if ( manager )
    {
      v15 = this->fields.itemDraw;
      if ( v15 )
      {
        SvtEqCombineListViewItemDraw__SetItem(
          v15,
          (SvtEqCombineListViewItem_o *)linkItem,
          this->fields.dispMode,
          manager[182],
          v19);
        return;
      }
    }
LABEL_24:
    sub_1BCAA3C(v15, v16);
  }
}


void __fastcall SvtEqCombineListViewObject__Start(SvtEqCombineListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.state )
    SvtEqCombineListViewObject__Init_46249876(this, 2, v2);
}


System_String_o *__fastcall SvtEqCombineListViewObject__ToString(
        SvtEqCombineListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  System_String_o *v6; // x0
  float z; // w9
  System_String_o *v8; // x20
  System_String_o *v9; // x0
  System_Enum_o v11; // [xsp+8h] [xbp-58h] BYREF
  int32_t dispMode; // [xsp+18h] [xbp-48h]
  __int64 v13; // [xsp+20h] [xbp-40h] BYREF
  float v14; // [xsp+28h] [xbp-38h]

  if ( (byte_4B19F18 & 1) == 0 )
  {
    sub_1BCA7E0(&SvtEqCombineListViewItemDraw_DispMode_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_116/*" "*/, v4, v5);
    byte_4B19F18 = 1;
  }
  v14 = 0.0;
  v13 = 0LL;
  v11.klass = (System_Enum_c *)SvtEqCombineListViewItemDraw_DispMode_TypeInfo;
  v11.monitor = (void *)-1LL;
  dispMode = this->fields.dispMode;
  v6 = System_Enum__ToString(&v11, 0LL);
  z = this->fields.basePosition.fields.z;
  v8 = v6;
  v13 = *(_QWORD *)&this->fields.basePosition.fields.x;
  v14 = z;
  v9 = (System_String_o *)sub_1DDA8EC(&v13, 0LL, 0LL, 0LL);
  return System_String__Concat_62412480(v8, (System_String_o *)StringLiteral_116/*" "*/, v9, 0LL);
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

  if ( (byte_4B19F0E & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, value, method);
    byte_4B19F0E = 1;
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
    v9 = sub_1C05CD0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1BCACFC(v8);
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

  if ( (byte_4B19F0F & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, value, method);
    byte_4B19F0F = 1;
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
    v9 = sub_1C05CD0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1BCACFC(v8);
  SvtEqCombineListViewObject__Awake(v11, v12);
}