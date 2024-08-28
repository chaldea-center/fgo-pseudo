void __fastcall SvtEqCombineListViewObject___ctor(SvtEqCombineListViewObject_o *this, const MethodInfo *method)
{
  if ( (byte_4A236DA & 1) == 0 )
  {
    sub_1B715CC(&ListViewObject_TypeInfo, method);
    byte_4A236DA = 1;
  }
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  ListViewObject___ctor((ListViewObject_o *)this, 0LL);
}


void __fastcall SvtEqCombineListViewObject__Awake(SvtEqCombineListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v7; // w2
  int32_t v8; // w3
  Il2CppObject *v9; // x0
  int32_t v10; // w2
  int32_t v11; // w3

  if ( (byte_4A236CD & 1) == 0 )
  {
    sub_1B715CC(&Method_UnityEngine_Component_GetComponent_UIDragDropListViewItem___, method);
    sub_1B715CC(&Method_UnityEngine_GameObject_GetComponent_SvtEqCombineListViewItemDraw___, v3);
    byte_4A236CD = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1B71828(0LL, v4);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_2EAA998 *)Method_UnityEngine_GameObject_GetComponent_SvtEqCombineListViewItemDraw___);
  this->fields.itemDraw = (struct SvtEqCombineListViewItemDraw_o *)Component_object;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.itemDraw, (int32_t)Component_object, v7, v8);
  v9 = UnityEngine_Component__GetComponent_object_(
         (UnityEngine_Component_o *)this,
         (const MethodInfo_2E51E8C *)Method_UnityEngine_Component_GetComponent_UIDragDropListViewItem___);
  this->fields.itemDrag = (struct UIDragDropListViewItem_o *)v9;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.itemDrag, (int32_t)v9, v10, v11);
}


UnityEngine_GameObject_o *__fastcall SvtEqCombineListViewObject__CreateDragObject(
        SvtEqCombineListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *DragObject; // x19
  Il2CppObject *Component_object; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_4A236D2 & 1) == 0 )
  {
    sub_1B715CC(&Method_UnityEngine_GameObject_GetComponent_SvtEqCombineListViewObject___, method);
    sub_1B715CC(&UnityEngine_Object_TypeInfo, v3);
    byte_4A236D2 = 1;
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
                               (const MethodInfo_2EAA998 *)Method_UnityEngine_GameObject_GetComponent_SvtEqCombineListViewObject___)) == 0LL )
    {
      sub_1B71828(Component_object, v6);
    }
    SvtEqCombineListViewObject__Init_45211268((SvtEqCombineListViewObject_o *)Component_object, 2, v7);
  }
  return (UnityEngine_GameObject_o *)DragObject;
}


SvtEqCombineListViewItem_o *__fastcall SvtEqCombineListViewObject__GetItem(
        SvtEqCombineListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x11

  if ( (byte_4A236CF & 1) == 0 )
  {
    sub_1B715CC(&SvtEqCombineListViewItem_TypeInfo, method);
    byte_4A236CF = 1;
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
  ServantStatusBattleListViewItem_o *p_callbackFunc; // x21
  int32_t v20; // w2
  int32_t v21; // w3
  const MethodInfo *v22; // x1
  int32_t v23; // w2
  int32_t v24; // w3
  int32_t v25; // w9
  ServantStatusBattleListViewItem_c *klass; // x19

  if ( (byte_4A236D3 & 1) == 0 )
  {
    sub_1B715CC(&SvtEqCombineListViewItem_TypeInfo, *(_QWORD *)&initMode);
    byte_4A236D3 = 1;
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
    sub_1B71AE8(linkItem);
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
    sub_1B71828(transform, v17);
  }
  v18 = v14 || v15;
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0LL);
  this->fields.callbackFunc = callbackFunc;
  p_callbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, (int32_t)callbackFunc, v20, v21);
  if ( (unsigned int)v13 <= 4 && ((0x17u >> v13) & 1) != 0 )
  {
    v25 = dword_BE5E1C[v13];
    this->fields.dispMode = dword_BE5E08[v13];
    this->fields.state = v25;
  }
  if ( v18 || dispMode != this->fields.dispMode )
    SvtEqCombineListViewObject__SetupDisp(this, v22);
  klass = p_callbackFunc->klass;
  if ( p_callbackFunc->klass )
  {
    p_callbackFunc->klass = 0LL;
    sub_1B71570(p_callbackFunc, 0, v23, v24);
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
void __fastcall SvtEqCombineListViewObject__Init_45211268(
        SvtEqCombineListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  float v4; // s0
  int v5; // s1

  if ( !byte_4A1A751 )
  {
    sub_1B715CC(&UnityEngine_Vector3_TypeInfo, *(_QWORD *)&initMode);
    byte_4A1A751 = 1;
  }
  SvtEqCombineListViewObject__Init(this, initMode, 0LL, v4, *(UnityEngine_Vector3_o *)&v5, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SvtEqCombineListViewObject__Init_45213504(
        SvtEqCombineListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        const MethodInfo *method)
{
  int v5; // s1

  if ( !byte_4A1A751 )
  {
    sub_1B715CC(&UnityEngine_Vector3_TypeInfo, *(_QWORD *)&initMode);
    byte_4A1A751 = 1;
  }
  SvtEqCombineListViewObject__Init(this, initMode, callbackFunc, delay, *(UnityEngine_Vector3_o *)&v5, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SvtEqCombineListViewObject__Init_45213588(
        SvtEqCombineListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  float v4; // s0
  int v5; // s1

  if ( !byte_4A1A751 )
  {
    sub_1B715CC(&UnityEngine_Vector3_TypeInfo, *(_QWORD *)&initMode);
    byte_4A1A751 = 1;
  }
  SvtEqCombineListViewObject__Init(this, initMode, callbackFunc, v4, *(UnityEngine_Vector3_o *)&v5, method);
}


bool __fastcall SvtEqCombineListViewObject__IsCanDrag(SvtEqCombineListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  UITouchPress_o *manager; // x0
  __int64 methodPtr_low; // x9
  struct ListViewItem_o *linkItem; // x1
  __int64 v9; // x10
  UnityEngine_Object_o *touchPress; // x20
  SvtEqCombineListViewObject_o *v12; // x0
  const MethodInfo *v13; // x1

  if ( (byte_4A236D1 & 1) == 0 )
  {
    sub_1B715CC(&UnityEngine_Object_TypeInfo, method);
    sub_1B715CC(&SvtEqCombineListViewItem_TypeInfo, v4);
    sub_1B715CC(&SvtEqCombineListViewManager_TypeInfo, v5);
    byte_4A236D1 = 1;
  }
  manager = (UITouchPress_o *)this->fields.manager;
  if ( !manager )
    goto LABEL_19;
  methodPtr_low = LOBYTE(SvtEqCombineListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(manager->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (SvtEqCombineListViewManager_c *)manager->klass->_2.typeHierarchy[methodPtr_low - 1] != SvtEqCombineListViewManager_TypeInfo )
  {
    sub_1B71AE8(manager);
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
    sub_1B71828(manager, method);
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem
    || (v9 = LOBYTE(SvtEqCombineListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v9)
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
  sub_1B71AE8(this->fields.linkItem);
  return (unsigned __int8)SvtEqCombineListViewObject__CreateDragObject(v12, v13);
}


void __fastcall SvtEqCombineListViewObject__OnClickSelect(SvtEqCombineListViewObject_o *this, const MethodInfo *method)
{
  SvtEqCombineListViewManager_o *manager; // x21
  SvtEqCombineListViewObject_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  SvtEqCombineListViewItem_o *linkItem; // x20
  SvtEqCombineListViewItem_c *v9; // x1
  __int64 methodPtr_low; // x9
  __int64 v11; // x9
  int32_t modeKind; // w8
  int64_t v13; // x0
  const MethodInfo *v14; // x2
  bool v15; // w21
  _QWORD *v16; // x8
  System_Reflection_MethodBase_o *v17; // x0
  const MethodInfo *v18; // x1
  int64_t UserSvtId; // x0
  const MethodInfo *v20; // x2
  bool v21; // w21
  _QWORD *v22; // x8
  int32_t type; // w8
  _QWORD *v24; // x0
  System_Reflection_MethodBase_o *v25; // x0
  _QWORD *v26; // x0
  _QWORD *v27; // x0
  int32_t v28; // w20
  System_Reflection_MethodBase_o *v29; // x0

  v3 = this;
  if ( (byte_4A236D6 & 1) == 0 )
  {
    sub_1B715CC(&SvtEqCombineListViewItem_TypeInfo, method);
    sub_1B715CC(&SvtEqCombineListViewManager_TypeInfo, v4);
    sub_1B715CC(&Method_SvtEqCombineListViewObject_OnClickSelect__, v5);
    sub_1B715CC(&StringLiteral_9829/*"OnClickSelectBase"*/, v6);
    this = (SvtEqCombineListViewObject_o *)sub_1B715CC(&StringLiteral_9831/*"OnClickSelectMaterial"*/, v7);
    byte_4A236D6 = 1;
  }
  linkItem = (SvtEqCombineListViewItem_o *)v3->fields.linkItem;
  if ( !linkItem )
    return;
  v9 = SvtEqCombineListViewItem_TypeInfo;
  methodPtr_low = LOBYTE(SvtEqCombineListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (SvtEqCombineListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] != SvtEqCombineListViewItem_TypeInfo )
  {
    sub_1B71AE8(v3->fields.linkItem);
LABEL_51:
    sub_1B71AE8(manager);
    goto LABEL_52;
  }
  manager = (SvtEqCombineListViewManager_o *)v3->fields.manager;
  if ( !manager )
    goto LABEL_52;
  v11 = LOBYTE(SvtEqCombineListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(manager->klass->vtable._0_Equals.methodPtr) < (unsigned int)v11
    || (SvtEqCombineListViewManager_c *)manager->klass->_2.typeHierarchy[v11 - 1] != SvtEqCombineListViewManager_TypeInfo )
  {
    goto LABEL_51;
  }
  ListViewManager__ClearScrollBarValue(v3->fields.manager, 0, 0LL);
  modeKind = manager->fields.modeKind;
  if ( modeKind == 2 )
  {
    UserSvtId = SvtEqCombineListViewItem__get_UserSvtId(linkItem, (const MethodInfo *)v9);
    v21 = SvtEqCombineListViewManager__CheckIsMaterialSelectSvt(manager, UserSvtId, v20);
    v22 = Method_SvtEqCombineListViewObject_OnClickSelect__;
    if ( (*((_BYTE *)Method_SvtEqCombineListViewObject_OnClickSelect__ + 83) & 2) != 0 )
      v22 = (_QWORD *)sub_1B715E4(Method_SvtEqCombineListViewObject_OnClickSelect__);
    v17 = (System_Reflection_MethodBase_o *)sub_1B715B0(v22, v22[4]);
    if ( !v21 )
    {
      OverwriteAssetSoundName__PlaySystemSe(v17, 0, 0LL);
      linkItem->fields.isSwapChoice ^= 1u;
      goto LABEL_19;
    }
    goto LABEL_35;
  }
  if ( modeKind == 1 )
  {
    v13 = SvtEqCombineListViewItem__get_UserSvtId(linkItem, (const MethodInfo *)v9);
    v15 = SvtEqCombineListViewManager__CheckIsMaterialSelectSvt(manager, v13, v14);
    v16 = Method_SvtEqCombineListViewObject_OnClickSelect__;
    if ( (*((_BYTE *)Method_SvtEqCombineListViewObject_OnClickSelect__ + 83) & 2) != 0 )
      v16 = (_QWORD *)sub_1B715E4(Method_SvtEqCombineListViewObject_OnClickSelect__);
    v17 = (System_Reflection_MethodBase_o *)sub_1B715B0(v16, v16[4]);
    if ( !v15 )
    {
      OverwriteAssetSoundName__PlaySystemSe(v17, 11, 0LL);
      linkItem->fields.isSwapLock ^= 1u;
LABEL_19:
      SvtEqCombineListViewObject__SetupDisp(v3, v18);
      return;
    }
    goto LABEL_35;
  }
  type = linkItem->fields.type;
  if ( !type )
  {
    if ( linkItem->fields.isLvMax && linkItem->fields.isLimitCntMax || linkItem->fields.isSvtEqMaterial )
    {
      v24 = Method_SvtEqCombineListViewObject_OnClickSelect__;
      if ( (*((_BYTE *)Method_SvtEqCombineListViewObject_OnClickSelect__ + 83) & 2) != 0 )
        v24 = (_QWORD *)sub_1B715E4(Method_SvtEqCombineListViewObject_OnClickSelect__);
      v25 = (System_Reflection_MethodBase_o *)sub_1B715B0(v24, v24[4]);
      OverwriteAssetSoundName__PlaySystemSe(v25, 2, 0LL);
    }
    else
    {
      this = (SvtEqCombineListViewObject_o *)v3->fields.manager;
      if ( !this )
        goto LABEL_52;
      UnityEngine_Component__SendMessage(
        (UnityEngine_Component_o *)this,
        (System_String_o *)StringLiteral_9829/*"OnClickSelectBase"*/,
        (Il2CppObject *)v3,
        0LL);
    }
    type = linkItem->fields.type;
  }
  if ( type == 1 )
  {
    if ( SvtEqCombineListViewItem__get_IsCanNotSelect(linkItem, (const MethodInfo *)v9) )
    {
      v26 = Method_SvtEqCombineListViewObject_OnClickSelect__;
      if ( (*((_BYTE *)Method_SvtEqCombineListViewObject_OnClickSelect__ + 83) & 2) != 0 )
        v26 = (_QWORD *)sub_1B715E4(Method_SvtEqCombineListViewObject_OnClickSelect__);
      v17 = (System_Reflection_MethodBase_o *)sub_1B715B0(v26, v26[4]);
LABEL_35:
      OverwriteAssetSoundName__PlaySystemSe(v17, 2, 0LL);
      return;
    }
    if ( linkItem->fields.isMaterialSvt )
    {
      linkItem->fields.isMaterialSvt = 0;
      v27 = Method_SvtEqCombineListViewObject_OnClickSelect__;
      if ( (*((_BYTE *)Method_SvtEqCombineListViewObject_OnClickSelect__ + 83) & 2) != 0 )
        v27 = (_QWORD *)sub_1B715E4(Method_SvtEqCombineListViewObject_OnClickSelect__);
      v28 = 1;
    }
    else
    {
      v27 = Method_SvtEqCombineListViewObject_OnClickSelect__;
      if ( linkItem->fields.isMaxSelect )
      {
        if ( (*((_BYTE *)Method_SvtEqCombineListViewObject_OnClickSelect__ + 83) & 2) != 0 )
          v27 = (_QWORD *)sub_1B715E4(Method_SvtEqCombineListViewObject_OnClickSelect__);
        v28 = 2;
      }
      else
      {
        if ( (*((_BYTE *)Method_SvtEqCombineListViewObject_OnClickSelect__ + 83) & 2) != 0 )
          v27 = (_QWORD *)sub_1B715E4(Method_SvtEqCombineListViewObject_OnClickSelect__);
        v28 = 0;
      }
    }
    v29 = (System_Reflection_MethodBase_o *)sub_1B715B0(v27, v27[4]);
    OverwriteAssetSoundName__PlaySystemSe(v29, v28, 0LL);
    this = (SvtEqCombineListViewObject_o *)v3->fields.manager;
    if ( this )
    {
      UnityEngine_Component__SendMessage(
        (UnityEngine_Component_o *)this,
        (System_String_o *)StringLiteral_9831/*"OnClickSelectMaterial"*/,
        (Il2CppObject *)v3,
        0LL);
      return;
    }
LABEL_52:
    sub_1B71828(this, v9);
  }
}


void __fastcall SvtEqCombineListViewObject__OnDestroy(SvtEqCombineListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  ServantStatusBattleListViewItem_o *p_dragObject; // x19
  UnityEngine_Object_o *v5; // x20
  struct UnityEngine_GameObject_o *dragObject; // t1
  UnityEngine_Object_o *klass; // x20
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_4A236CE & 1) == 0 )
  {
    sub_1B715CC(&NGUITools_TypeInfo, method);
    sub_1B715CC(&UnityEngine_Object_TypeInfo, v3);
    byte_4A236CE = 1;
  }
  dragObject = this->fields.dragObject;
  p_dragObject = (ServantStatusBattleListViewItem_o *)&this->fields.dragObject;
  v5 = (UnityEngine_Object_o *)dragObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v5, 0LL, 0LL) )
  {
    klass = (UnityEngine_Object_o *)p_dragObject->klass;
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    NGUITools__Destroy(klass, 0LL);
    p_dragObject->klass = 0LL;
    sub_1B71570(p_dragObject, 0, v8, v9);
  }
}


void __fastcall SvtEqCombineListViewObject__OnDragDropStart(
        SvtEqCombineListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UITouchPress_o *manager; // x0
  __int64 methodPtr_low; // x9
  UnityEngine_Object_o *touchPress; // x20

  if ( (byte_4A236D8 & 1) == 0 )
  {
    sub_1B715CC(&UnityEngine_Object_TypeInfo, method);
    sub_1B715CC(&SvtEqCombineListViewManager_TypeInfo, v3);
    byte_4A236D8 = 1;
  }
  manager = (UITouchPress_o *)this->fields.manager;
  if ( !manager )
    goto LABEL_14;
  methodPtr_low = LOBYTE(SvtEqCombineListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(manager->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (SvtEqCombineListViewManager_c *)manager->klass->_2.typeHierarchy[methodPtr_low - 1] != SvtEqCombineListViewManager_TypeInfo )
  {
    sub_1B71AE8(manager);
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
      sub_1B71828(manager, method);
    }
  }
}


void __fastcall SvtEqCombineListViewObject__OnLongPush(SvtEqCombineListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  SvtEqCombineListViewObject_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct ListViewItem_o *linkItem; // x20
  SvtEqCombineListViewItem_c *v8; // x1
  __int64 methodPtr_low; // x9
  SvtEqCombineListViewManager_o *manager; // x21
  __int64 v11; // x9
  int32_t sortIndex; // w19
  bool IsSelect; // w0
  const MethodInfo *v14; // x3
  SvtEqCombineListViewObject_o *v15; // x0
  const MethodInfo *v16; // x1

  v3 = this;
  if ( (byte_4A236D7 & 1) == 0 )
  {
    sub_1B715CC(&SvtEqCombineListViewItem_TypeInfo, method);
    sub_1B715CC(&SvtEqCombineListViewManager_TypeInfo, v4);
    sub_1B715CC(&StringLiteral_9887/*"OnLongPushListView"*/, v5);
    this = (SvtEqCombineListViewObject_o *)sub_1B715CC(&StringLiteral_9906/*"OnPressCancel"*/, v6);
    byte_4A236D7 = 1;
  }
  linkItem = v3->fields.linkItem;
  if ( linkItem )
  {
    v8 = SvtEqCombineListViewItem_TypeInfo;
    methodPtr_low = LOBYTE(SvtEqCombineListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
      && (SvtEqCombineListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == SvtEqCombineListViewItem_TypeInfo )
    {
      manager = (SvtEqCombineListViewManager_o *)v3->fields.manager;
      if ( manager )
      {
        v11 = LOBYTE(SvtEqCombineListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(manager->klass->vtable._0_Equals.methodPtr) < (unsigned int)v11
          || (SvtEqCombineListViewManager_c *)manager->klass->_2.typeHierarchy[v11 - 1] != SvtEqCombineListViewManager_TypeInfo )
        {
          sub_1B71AE8(v3->fields.manager);
          SvtEqCombineListViewObject__OnDragDropStart(v15, v16);
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
            SvtEqCombineListViewManager__SetDragStart(manager, sortIndex, !IsSelect, v14);
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
        UnityEngine_GameObject__SendMessage_69239312(
          (UnityEngine_GameObject_o *)this,
          (System_String_o *)StringLiteral_9906/*"OnPressCancel"*/,
          0LL);
        this = (SvtEqCombineListViewObject_o *)v3->fields.manager;
        if ( this )
        {
          UnityEngine_Component__SendMessage(
            (UnityEngine_Component_o *)this,
            (System_String_o *)StringLiteral_9887/*"OnLongPushListView"*/,
            (Il2CppObject *)v3->fields.linkItem,
            0LL);
          return;
        }
      }
    }
    else
    {
      sub_1B71AE8(v3->fields.linkItem);
    }
LABEL_18:
    sub_1B71828(this, v8);
  }
}


void __fastcall SvtEqCombineListViewObject__OnLongRelease(SvtEqCombineListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_Object_o *itemDrag; // x20
  __int64 v7; // x1
  UIDragDropListViewItem_o *manager; // x0
  __int64 methodPtr_low; // x9

  if ( (byte_4A236D9 & 1) == 0 )
  {
    sub_1B715CC(&UnityEngine_Object_TypeInfo, method);
    sub_1B715CC(&SvtEqCombineListViewManager_TypeInfo, v3);
    sub_1B715CC(&StringLiteral_9887/*"OnLongPushListView"*/, v4);
    sub_1B715CC(&StringLiteral_4037/*"CancelDragEnd"*/, v5);
    byte_4A236D9 = 1;
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
        UnityEngine_Component__SendMessage_69229092(
          (UnityEngine_Component_o *)manager,
          (System_String_o *)StringLiteral_4037/*"CancelDragEnd"*/,
          0LL);
        manager = (UIDragDropListViewItem_o *)this->fields.manager;
        if ( manager )
        {
          UnityEngine_Component__SendMessage(
            (UnityEngine_Component_o *)manager,
            (System_String_o *)StringLiteral_9887/*"OnLongPushListView"*/,
            (Il2CppObject *)this->fields.linkItem,
            0LL);
          return;
        }
      }
      else
      {
        sub_1B71AE8(manager);
      }
    }
LABEL_17:
    sub_1B71828(manager, v7);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SvtEqCombineListViewObject__SetInput(
        SvtEqCombineListViewObject_o *this,
        bool isInput,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Object_o *itemDraw; // x20
  const MethodInfo *v7; // x3
  struct ListViewItem_o *linkItem; // x1
  __int64 methodPtr_low; // x10
  SvtEqCombineListViewItemDraw_o *v10; // x0

  if ( (byte_4A236D0 & 1) == 0 )
  {
    sub_1B715CC(&UnityEngine_Object_TypeInfo, isInput);
    sub_1B715CC(&SvtEqCombineListViewItem_TypeInfo, v5);
    byte_4A236D0 = 1;
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
      sub_1B71AE8(this->fields.linkItem);
    }
    else
    {
      v10 = this->fields.itemDraw;
      if ( v10 )
      {
        SvtEqCombineListViewItemDraw__SetInput(v10, (SvtEqCombineListViewItem_o *)linkItem, 0, v7);
        return;
      }
    }
    sub_1B71828(v10, linkItem);
  }
}


void __fastcall SvtEqCombineListViewObject__SetItem(
        SvtEqCombineListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  ListViewObject__SetItem_40546388((ListViewObject_o *)this, item, seed, 0LL);
  this->fields.state = 0;
}


void __fastcall SvtEqCombineListViewObject__SetItem_45231172(
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
  __int64 v4; // x1
  __int64 v5; // x1
  int32_t *manager; // x20
  __int64 methodPtr_low; // x9
  __int64 v8; // x9
  bool v9; // w1
  UnityEngine_Object_o *touchPress; // x22
  SvtEqCombineListViewItemDraw_o *v11; // x0
  __int64 v12; // x1
  struct UITouchPress_o *v13; // x8
  UnityEngine_Object_o *itemDraw; // x22
  const MethodInfo *v15; // x4
  SvtEqCombineListViewManager_o *v16; // x0
  int32_t v17; // w1
  bool v18; // w2
  const MethodInfo *v19; // x3

  if ( (byte_4A236D4 & 1) == 0 )
  {
    sub_1B715CC(&UnityEngine_Object_TypeInfo, method);
    sub_1B715CC(&SvtEqCombineListViewItem_TypeInfo, v4);
    sub_1B715CC(&SvtEqCombineListViewManager_TypeInfo, v5);
    byte_4A236D4 = 1;
  }
  manager = (int32_t *)this->fields.manager;
  if ( manager )
  {
    methodPtr_low = LOBYTE(SvtEqCombineListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)manager + 304LL) < (unsigned int)methodPtr_low
      || *(SvtEqCombineListViewManager_c **)(*(_QWORD *)(*(_QWORD *)manager + 200LL) + 8 * methodPtr_low - 8) != SvtEqCombineListViewManager_TypeInfo )
    {
      sub_1B71AE8(this->fields.manager);
      goto LABEL_26;
    }
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
  {
    v9 = 0;
    goto LABEL_11;
  }
  v8 = LOBYTE(SvtEqCombineListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)v8
    || (SvtEqCombineListViewItem_c *)linkItem->klass->_2.typeHierarchy[v8 - 1] != SvtEqCombineListViewItem_TypeInfo )
  {
LABEL_26:
    sub_1B71AE8(linkItem);
    SvtEqCombineListViewManager__SetDragStart(v16, v17, v18, v19);
    return;
  }
  v9 = this->fields.dispMode != 0;
LABEL_11:
  ListViewObject__SetVisible((ListViewObject_o *)this, v9, 0LL);
  touchPress = (UnityEngine_Object_o *)this->fields.touchPress;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v11 = (SvtEqCombineListViewItemDraw_o *)UnityEngine_Object__op_Inequality(touchPress, 0LL, 0LL);
  if ( ((unsigned __int8)v11 & 1) != 0 )
  {
    if ( !linkItem )
      goto LABEL_24;
    v13 = this->fields.touchPress;
    if ( !v13 )
      goto LABEL_24;
    v13->fields.isLongPressFast = LODWORD(linkItem[1].klass) == 1;
  }
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v11 = (SvtEqCombineListViewItemDraw_o *)UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL);
  if ( ((unsigned __int8)v11 & 1) != 0 )
  {
    if ( manager )
    {
      v11 = this->fields.itemDraw;
      if ( v11 )
      {
        SvtEqCombineListViewItemDraw__SetItem(
          v11,
          (SvtEqCombineListViewItem_o *)linkItem,
          this->fields.dispMode,
          manager[182],
          v15);
        return;
      }
    }
LABEL_24:
    sub_1B71828(v11, v12);
  }
}


void __fastcall SvtEqCombineListViewObject__Start(SvtEqCombineListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.state )
    SvtEqCombineListViewObject__Init_45211268(this, 2, v2);
}


System_String_o *__fastcall SvtEqCombineListViewObject__ToString(
        SvtEqCombineListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_String_o *v4; // x0
  float z; // w9
  System_String_o *v6; // x20
  System_String_o *v7; // x0
  System_Enum_o v9; // [xsp+8h] [xbp-58h] BYREF
  int32_t dispMode; // [xsp+18h] [xbp-48h]
  __int64 v11; // [xsp+20h] [xbp-40h] BYREF
  float v12; // [xsp+28h] [xbp-38h]

  if ( (byte_4A236D5 & 1) == 0 )
  {
    sub_1B715CC(&SvtEqCombineListViewItemDraw_DispMode_TypeInfo, method);
    sub_1B715CC(&StringLiteral_117/*" "*/, v3);
    byte_4A236D5 = 1;
  }
  v12 = 0.0;
  v11 = 0LL;
  v9.klass = (System_Enum_c *)SvtEqCombineListViewItemDraw_DispMode_TypeInfo;
  v9.monitor = (void *)-1LL;
  dispMode = this->fields.dispMode;
  v4 = System_Enum__ToString(&v9, 0LL);
  z = this->fields.basePosition.fields.z;
  v6 = v4;
  v11 = *(_QWORD *)&this->fields.basePosition.fields.x;
  v12 = z;
  v7 = (System_String_o *)sub_1D94964(&v11, 0LL, 0LL, 0LL);
  return System_String__Concat_61516764(v6, (System_String_o *)StringLiteral_117/*" "*/, v7, 0LL);
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

  if ( (byte_4A236CB & 1) == 0 )
  {
    sub_1B715CC(&System_Action_TypeInfo, value);
    byte_4A236CB = 1;
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
    v9 = sub_1BACABC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1B71AE8(v8);
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

  if ( (byte_4A236CC & 1) == 0 )
  {
    sub_1B715CC(&System_Action_TypeInfo, value);
    byte_4A236CC = 1;
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
    v9 = sub_1BACABC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1B71AE8(v8);
  SvtEqCombineListViewObject__Awake(v11, v12);
}