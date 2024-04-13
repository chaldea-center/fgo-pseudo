void __fastcall SvtEqCombineListViewObject___ctor(SvtEqCombineListViewObject_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EE522 & 1) == 0 )
  {
    sub_B5D5C4(&ListViewObject_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EE522 = 1;
  }
  if ( (BYTE3(ListViewObject_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ListViewObject_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  }
  ListViewObject___ctor((ListViewObject_o *)this, 0LL);
}


void __fastcall SvtEqCombineListViewObject__Awake(SvtEqCombineListViewObject_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  __int64 v8; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  struct SvtEqCombineListViewItemDraw_o *Component_srcLineSprite; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  WebViewObject_o *Component_WebViewObject; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7

  if ( (byte_42EE515 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_UIDragDropListViewItem___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_SvtEqCombineListViewItemDraw___, v5, v6, v7);
    byte_42EE515 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_B5D69C(0LL, v8);
  Component_srcLineSprite = (struct SvtEqCombineListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                       dispObject,
                                                                       (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_SvtEqCombineListViewItemDraw___);
  this->fields.itemDraw = Component_srcLineSprite;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.itemDraw,
    (System_Int32_array **)Component_srcLineSprite,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              (UnityEngine_Component_o *)this,
                              (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UIDragDropListViewItem___);
  this->fields.itemDrag = (struct UIDragDropListViewItem_o *)Component_WebViewObject;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.itemDrag,
    (System_Int32_array **)Component_WebViewObject,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall SvtEqCombineListViewObject__CreateDragObject(
        SvtEqCombineListViewObject_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Object_o *DragObject; // x19
  srcLineSprite_o *Component_srcLineSprite; // x0
  __int64 v10; // x1
  SvtEqCombineListViewObject_o *v11; // x20
  const MethodInfo *v12; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_42EE51A & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_SvtEqCombineListViewObject___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    byte_42EE51A = 1;
  }
  DragObject = (UnityEngine_Object_o *)ListViewObject__CreateDragObject((ListViewObject_o *)this, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  Component_srcLineSprite = (srcLineSprite_o *)UnityEngine_Object__op_Inequality(DragObject, 0LL, 0LL);
  if ( ((unsigned __int8)Component_srcLineSprite & 1) != 0 )
  {
    if ( !DragObject
      || (Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                      (UnityEngine_GameObject_o *)DragObject,
                                      (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_SvtEqCombineListViewObject___)) == 0LL )
    {
      sub_B5D69C(Component_srcLineSprite, v10);
    }
    v11 = (SvtEqCombineListViewObject_o *)Component_srcLineSprite;
    zero = UnityEngine_Vector3__get_zero(0LL);
    SvtEqCombineListViewObject__Init(v11, 2, 0LL, zero.fields.x, *(UnityEngine_Vector3_o *)&zero.fields.y, v12);
  }
  return (UnityEngine_GameObject_o *)DragObject;
}


SvtEqCombineListViewItem_o *__fastcall SvtEqCombineListViewObject__GetItem(
        SvtEqCombineListViewObject_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  struct ListViewItem_o *linkItem; // x8
  __int64 v6; // x11

  if ( (byte_42EE517 & 1) == 0 )
  {
    sub_B5D5C4(&SvtEqCombineListViewItem_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EE517 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0LL;
  v6 = *(&SvtEqCombineListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v6 )
    return 0LL;
  if ( (SvtEqCombineListViewItem_c *)linkItem->klass->_2.typeHierarchy[v6 - 1] == SvtEqCombineListViewItem_TypeInfo )
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
  __int64 v11; // x10
  int v12; // w9
  struct ListViewItem_o *v13; // x10
  __int64 v14; // x10
  bool v15; // w24
  struct ListViewItem_o *v16; // x8
  bool v17; // w25
  int32_t v18; // w23
  UnityEngine_Transform_o *transform; // x0
  __int64 v20; // x1
  bool v21; // w24
  BattleServantConfConponent_o *p_callbackFunc; // x21
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  const MethodInfo *v29; // x1
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  int32_t v36; // w9
  System_Action_o *klass; // x19

  if ( (byte_42EE51B & 1) == 0 )
  {
    sub_B5D5C4(&SvtEqCombineListViewItem_TypeInfo, initMode, (_DWORD)callbackFunc, method);
    byte_42EE51B = 1;
  }
  linkItem = this->fields.linkItem;
  dispMode = this->fields.dispMode;
  if ( linkItem )
  {
    v11 = *(&SvtEqCombineListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v11
      || (SvtEqCombineListViewItem_c *)linkItem->klass->_2.typeHierarchy[v11 - 1] != SvtEqCombineListViewItem_TypeInfo )
    {
      goto LABEL_39;
    }
    if ( initMode == 5 )
      v12 = 0;
    else
      v12 = 2;
    if ( initMode == 5 )
      v13 = 0LL;
    else
      v13 = this->fields.linkItem;
    if ( initMode != 5 )
    {
      v14 = *(&SvtEqCombineListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v14
        && (SvtEqCombineListViewItem_c *)linkItem->klass->_2.typeHierarchy[v14 - 1] == SvtEqCombineListViewItem_TypeInfo )
      {
        v12 = 2;
        v13 = this->fields.linkItem;
        goto LABEL_22;
      }
LABEL_39:
      sub_B5D990(linkItem);
      goto LABEL_40;
    }
  }
  else
  {
    if ( initMode == 5 )
      v12 = 0;
    else
      v12 = 2;
    if ( initMode == 5 )
      v13 = 0LL;
    else
      v13 = this->fields.linkItem;
  }
LABEL_22:
  v15 = this->fields.state == 0;
  if ( v12 )
    v16 = v13;
  else
    v16 = this->fields.linkItem;
  v17 = v12 == 0;
  if ( v16 )
    v18 = initMode;
  else
    v18 = 0;
  ListViewObject__SetVisible((ListViewObject_o *)this, v18 != 0, 0LL);
  ((void (__fastcall *)(SvtEqCombineListViewObject_o *, bool, Il2CppMethodPointer))this->klass->vtable._9_SetInput.method)(
    this,
    v18 == 4,
    this->klass->vtable._10_Invalidation.methodPtr);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0LL),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
LABEL_40:
    sub_B5D69C(transform, v20);
  }
  v21 = v15 || v17;
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0LL);
  this->fields.callbackFunc = callbackFunc;
  p_callbackFunc = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callbackFunc,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  if ( (unsigned int)v18 <= 4 && ((0x17u >> v18) & 1) != 0 )
  {
    v36 = dword_32C4320[v18];
    this->fields.dispMode = dword_32C4300[v18];
    this->fields.state = v36;
  }
  if ( v21 || dispMode != this->fields.dispMode )
    SvtEqCombineListViewObject__SetupDisp(this, v29);
  klass = (System_Action_o *)p_callbackFunc->klass;
  if ( p_callbackFunc->klass )
  {
    p_callbackFunc->klass = 0LL;
    sub_B5D560(p_callbackFunc, 0LL, v30, v31, v32, v33, v34, v35);
    System_Action__Invoke(klass, 0LL);
  }
}


void __fastcall SvtEqCombineListViewObject__InitItem(SvtEqCombineListViewObject_o *this, const MethodInfo *method)
{
  this->fields.state = 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SvtEqCombineListViewObject__Init_35014556(
        SvtEqCombineListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  zero = UnityEngine_Vector3__get_zero(0LL);
  SvtEqCombineListViewObject__Init(this, initMode, 0LL, zero.fields.x, *(UnityEngine_Vector3_o *)&zero.fields.y, v5);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SvtEqCombineListViewObject__Init_35016744(
        SvtEqCombineListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        const MethodInfo *method)
{
  const MethodInfo *v8; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  zero = UnityEngine_Vector3__get_zero(0LL);
  SvtEqCombineListViewObject__Init(
    this,
    initMode,
    callbackFunc,
    zero.fields.x,
    *(UnityEngine_Vector3_o *)&zero.fields.y,
    v8);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SvtEqCombineListViewObject__Init_35016808(
        SvtEqCombineListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  zero = UnityEngine_Vector3__get_zero(0LL);
  SvtEqCombineListViewObject__Init(
    this,
    initMode,
    callbackFunc,
    zero.fields.x,
    *(UnityEngine_Vector3_o *)&zero.fields.y,
    v7);
}


bool __fastcall SvtEqCombineListViewObject__IsCanDrag(SvtEqCombineListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  UITouchPress_o *manager; // x0
  __int64 v12; // x9
  struct ListViewItem_o *linkItem; // x1
  __int64 v14; // x10
  UnityEngine_Object_o *touchPress; // x20
  SvtEqCombineListViewObject_o *v17; // x0
  const MethodInfo *v18; // x1

  if ( (byte_42EE519 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&SvtEqCombineListViewItem_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&SvtEqCombineListViewManager_TypeInfo, v8, v9, v10);
    byte_42EE519 = 1;
  }
  manager = (UITouchPress_o *)this->fields.manager;
  if ( !manager )
    goto LABEL_20;
  v12 = *(&SvtEqCombineListViewManager_TypeInfo->_2.bitflags2 + 1);
  if ( *(&manager->klass->_2.bitflags2 + 1) < (unsigned int)v12
    || (SvtEqCombineListViewManager_c *)manager->klass->_2.typeHierarchy[v12 - 1] != SvtEqCombineListViewManager_TypeInfo )
  {
    sub_B5D990(manager);
    goto LABEL_20;
  }
  if ( (LODWORD(manager[10].fields.clickRange) & 0x80000000) != 0 )
  {
LABEL_12:
    touchPress = (UnityEngine_Object_o *)this->fields.touchPress;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Inequality(touchPress, 0LL, 0LL) )
      return 0;
    manager = this->fields.touchPress;
    if ( manager )
    {
      UITouchPress__PressReset(manager, 0LL);
      return 0;
    }
LABEL_20:
    sub_B5D69C(manager, method);
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem
    || (v14 = *(&SvtEqCombineListViewItem_TypeInfo->_2.bitflags2 + 1),
        *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v14)
    && (SvtEqCombineListViewItem_c *)linkItem->klass->_2.typeHierarchy[v14 - 1] == SvtEqCombineListViewItem_TypeInfo )
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
  sub_B5D990(this->fields.linkItem);
  return (unsigned __int8)SvtEqCombineListViewObject__CreateDragObject(v17, v18);
}


void __fastcall SvtEqCombineListViewObject__OnClickSelect(SvtEqCombineListViewObject_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  SvtEqCombineListViewManager_o *manager; // x21
  SvtEqCombineListViewObject_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  SvtEqCombineListViewItem_o *linkItem; // x20
  SvtEqCombineListViewItem_c *v19; // x1
  __int64 v20; // x9
  __int64 v21; // x9
  int32_t modeKind; // w8
  int64_t v23; // x0
  const MethodInfo *v24; // x2
  bool v25; // w0
  SoundManager_c *v26; // x8
  __int16 v27; // w9
  const MethodInfo *v28; // x1
  int64_t UserSvtId; // x0
  const MethodInfo *v30; // x2
  bool v31; // w0
  SoundManager_c *v32; // x0
  int32_t type; // w8
  int32_t v34; // w0

  v5 = this;
  if ( (byte_42EE51E & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SvtEqCombineListViewItem_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&SvtEqCombineListViewManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_10075/*"OnClickSelectBase"*/, v12, v13, v14);
    this = (SvtEqCombineListViewObject_o *)sub_B5D5C4(&StringLiteral_10077/*"OnClickSelectMaterial"*/, v15, v16, v17);
    byte_42EE51E = 1;
  }
  linkItem = (SvtEqCombineListViewItem_o *)v5->fields.linkItem;
  if ( !linkItem )
    return;
  v19 = SvtEqCombineListViewItem_TypeInfo;
  v20 = *(&SvtEqCombineListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v20
    || (SvtEqCombineListViewItem_c *)linkItem->klass->_2.typeHierarchy[v20 - 1] != SvtEqCombineListViewItem_TypeInfo )
  {
    sub_B5D990(v5->fields.linkItem);
LABEL_60:
    sub_B5D990(manager);
    goto LABEL_61;
  }
  manager = (SvtEqCombineListViewManager_o *)v5->fields.manager;
  if ( !manager )
    goto LABEL_61;
  v21 = *(&SvtEqCombineListViewManager_TypeInfo->_2.bitflags2 + 1);
  if ( *(&manager->klass->_2.bitflags2 + 1) < (unsigned int)v21
    || (SvtEqCombineListViewManager_c *)manager->klass->_2.typeHierarchy[v21 - 1] != SvtEqCombineListViewManager_TypeInfo )
  {
    goto LABEL_60;
  }
  ListViewManager__ClearScrollBarValue(v5->fields.manager, 0, 0LL);
  modeKind = manager->fields.modeKind;
  if ( modeKind == 2 )
  {
    UserSvtId = SvtEqCombineListViewItem__get_UserSvtId(linkItem, (const MethodInfo *)v19);
    v31 = SvtEqCombineListViewManager__CheckIsMaterialSelectSvt(manager, UserSvtId, v30);
    v26 = SoundManager_TypeInfo;
    v27 = WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr);
    if ( !v31 )
    {
      if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      linkItem->fields.isSwapChoice ^= 1u;
      goto LABEL_33;
    }
    goto LABEL_17;
  }
  if ( modeKind == 1 )
  {
    v23 = SvtEqCombineListViewItem__get_UserSvtId(linkItem, (const MethodInfo *)v19);
    v25 = SvtEqCombineListViewManager__CheckIsMaterialSelectSvt(manager, v23, v24);
    v26 = SoundManager_TypeInfo;
    v27 = WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr);
    if ( !v25 )
    {
      if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(11, 0LL);
      linkItem->fields.isSwapLock ^= 1u;
LABEL_33:
      SvtEqCombineListViewObject__SetupDisp(v5, v28);
      return;
    }
LABEL_17:
    if ( (v27 & 0x400) == 0 || v26->_2.cctor_finished )
      goto LABEL_41;
    v32 = v26;
LABEL_20:
    j_il2cpp_runtime_class_init_0(v32);
LABEL_41:
    SoundManager__playSystemSe(2, 0LL);
    return;
  }
  type = linkItem->fields.type;
  if ( !type )
  {
    if ( linkItem->fields.isLvMax && linkItem->fields.isLimitCntMax || linkItem->fields.isSvtEqMaterial )
    {
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(2, 0LL);
    }
    else
    {
      this = (SvtEqCombineListViewObject_o *)v5->fields.manager;
      if ( !this )
        goto LABEL_61;
      UnityEngine_Component__SendMessage(
        (UnityEngine_Component_o *)this,
        (System_String_o *)StringLiteral_10075/*"OnClickSelectBase"*/,
        (Il2CppObject *)v5,
        0LL);
    }
    type = linkItem->fields.type;
  }
  if ( type == 1 )
  {
    if ( SvtEqCombineListViewItem__get_IsCanNotSelect(linkItem, (const MethodInfo *)v19) )
    {
      v32 = SoundManager_TypeInfo;
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0
        || SoundManager_TypeInfo->_2.cctor_finished )
      {
        goto LABEL_41;
      }
      goto LABEL_20;
    }
    if ( linkItem->fields.isMaterialSvt )
    {
      linkItem->fields.isMaterialSvt = 0;
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      v34 = 1;
    }
    else if ( linkItem->fields.isMaxSelect )
    {
      if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      v34 = 2;
    }
    else
    {
      if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      v34 = 0;
    }
    SoundManager__playSystemSe(v34, 0LL);
    this = (SvtEqCombineListViewObject_o *)v5->fields.manager;
    if ( this )
    {
      UnityEngine_Component__SendMessage(
        (UnityEngine_Component_o *)this,
        (System_String_o *)StringLiteral_10077/*"OnClickSelectMaterial"*/,
        (Il2CppObject *)v5,
        0LL);
      return;
    }
LABEL_61:
    sub_B5D69C(this, v19);
  }
}


void __fastcall SvtEqCombineListViewObject__OnDestroy(SvtEqCombineListViewObject_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  BattleServantConfConponent_o *p_dragObject; // x19
  UnityEngine_Object_o *v9; // x20
  struct UnityEngine_GameObject_o *dragObject; // t1
  UnityEngine_Object_o *klass; // x20
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  if ( (byte_42EE516 & 1) == 0 )
  {
    sub_B5D5C4(&NGUITools_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    byte_42EE516 = 1;
  }
  dragObject = this->fields.dragObject;
  p_dragObject = (BattleServantConfConponent_o *)&this->fields.dragObject;
  v9 = (UnityEngine_Object_o *)dragObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v9, 0LL, 0LL) )
  {
    klass = (UnityEngine_Object_o *)p_dragObject->klass;
    if ( (BYTE3(NGUITools_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    NGUITools__Destroy(klass, 0LL);
    p_dragObject->klass = 0LL;
    sub_B5D560(p_dragObject, 0LL, v12, v13, v14, v15, v16, v17);
  }
}


void __fastcall SvtEqCombineListViewObject__OnDragDropStart(
        SvtEqCombineListViewObject_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UITouchPress_o *manager; // x0
  __int64 v9; // x9
  UnityEngine_Object_o *touchPress; // x20

  if ( (byte_42EE520 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SvtEqCombineListViewManager_TypeInfo, v5, v6, v7);
    byte_42EE520 = 1;
  }
  manager = (UITouchPress_o *)this->fields.manager;
  if ( !manager )
    goto LABEL_15;
  v9 = *(&SvtEqCombineListViewManager_TypeInfo->_2.bitflags2 + 1);
  if ( *(&manager->klass->_2.bitflags2 + 1) < (unsigned int)v9
    || (SvtEqCombineListViewManager_c *)manager->klass->_2.typeHierarchy[v9 - 1] != SvtEqCombineListViewManager_TypeInfo )
  {
    sub_B5D990(manager);
    goto LABEL_15;
  }
  if ( (LODWORD(manager[10].fields.clickRange) & 0x80000000) == 0 )
  {
    touchPress = (UnityEngine_Object_o *)this->fields.touchPress;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(touchPress, 0LL, 0LL) )
    {
      manager = this->fields.touchPress;
      if ( manager )
      {
        UITouchPress__PressReset(manager, 0LL);
        return;
      }
LABEL_15:
      sub_B5D69C(manager, method);
    }
  }
}


void __fastcall SvtEqCombineListViewObject__OnLongPush(SvtEqCombineListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3
  SvtEqCombineListViewObject_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  struct ListViewItem_o *linkItem; // x20
  void *v15; // x1
  __int64 v16; // x9
  SvtEqCombineListViewManager_o *manager; // x21
  __int64 v18; // x9
  int32_t sortIndex; // w19
  bool IsSelect; // w0
  const MethodInfo *v21; // x3
  SvtEqCombineListViewObject_o *v22; // x0
  const MethodInfo *v23; // x1

  v4 = this;
  if ( (byte_42EE51F & 1) == 0 )
  {
    sub_B5D5C4(&SvtEqCombineListViewItem_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&SvtEqCombineListViewManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_10129/*"OnLongPushListView"*/, v8, v9, v10);
    this = (SvtEqCombineListViewObject_o *)sub_B5D5C4(&StringLiteral_10147/*"OnPressCancel"*/, v11, v12, v13);
    byte_42EE51F = 1;
  }
  linkItem = v4->fields.linkItem;
  if ( linkItem )
  {
    v15 = SvtEqCombineListViewItem_TypeInfo;
    v16 = *(&SvtEqCombineListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v16
      && (SvtEqCombineListViewItem_c *)linkItem->klass->_2.typeHierarchy[v16 - 1] == SvtEqCombineListViewItem_TypeInfo )
    {
      manager = (SvtEqCombineListViewManager_o *)v4->fields.manager;
      if ( manager )
      {
        v15 = SvtEqCombineListViewManager_TypeInfo;
        v18 = *(&SvtEqCombineListViewManager_TypeInfo->_2.bitflags2 + 1);
        if ( *(&manager->klass->_2.bitflags2 + 1) < (unsigned int)v18
          || (SvtEqCombineListViewManager_c *)manager->klass->_2.typeHierarchy[v18 - 1] != SvtEqCombineListViewManager_TypeInfo )
        {
          sub_B5D990(v4->fields.manager);
          SvtEqCombineListViewObject__OnDragDropStart(v22, v23);
          return;
        }
      }
      if ( LODWORD(linkItem[1].klass) == 1 )
      {
        if ( manager )
        {
          if ( SvtEqCombineListViewManager__IsDragEnable(
                 (SvtEqCombineListViewManager_o *)v4->fields.manager,
                 (SvtEqCombineListViewItem_o *)v4->fields.linkItem,
                 v2) )
          {
            sortIndex = linkItem->fields.sortIndex;
            IsSelect = ListViewItem__get_IsSelect(linkItem, 0LL);
            SvtEqCombineListViewManager__SetDragStart(manager, sortIndex, !IsSelect, v21);
          }
          return;
        }
      }
      else
      {
        this = (SvtEqCombineListViewObject_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v4, 0LL);
        if ( this )
        {
          UnityEngine_GameObject__SendMessage_41595196(
            (UnityEngine_GameObject_o *)this,
            (System_String_o *)StringLiteral_10147/*"OnPressCancel"*/,
            0LL);
          this = (SvtEqCombineListViewObject_o *)v4->fields.manager;
          if ( this )
          {
            UnityEngine_Component__SendMessage(
              (UnityEngine_Component_o *)this,
              (System_String_o *)StringLiteral_10129/*"OnLongPushListView"*/,
              (Il2CppObject *)v4->fields.linkItem,
              0LL);
            return;
          }
        }
      }
    }
    else
    {
      sub_B5D990(v4->fields.linkItem);
    }
    sub_B5D69C(this, v15);
  }
}


void __fastcall SvtEqCombineListViewObject__OnLongRelease(SvtEqCombineListViewObject_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  UnityEngine_Object_o *itemDrag; // x20
  __int64 v15; // x1
  UIDragDropListViewItem_o *manager; // x0
  __int64 v17; // x9

  if ( (byte_42EE521 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SvtEqCombineListViewManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_10129/*"OnLongPushListView"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_3626/*"CancelDragEnd"*/, v11, v12, v13);
    byte_42EE521 = 1;
  }
  if ( this->fields.linkItem )
  {
    itemDrag = (UnityEngine_Object_o *)this->fields.itemDrag;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(itemDrag, 0LL, 0LL) )
    {
      manager = this->fields.itemDrag;
      if ( !manager )
        goto LABEL_18;
      UIDragDropListViewItem__PressReset(manager, 0LL);
    }
    manager = (UIDragDropListViewItem_o *)this->fields.manager;
    if ( manager )
    {
      v17 = *(&SvtEqCombineListViewManager_TypeInfo->_2.bitflags2 + 1);
      if ( *(&manager->klass->_2.bitflags2 + 1) >= (unsigned int)v17
        && (SvtEqCombineListViewManager_c *)manager->klass->_2.typeHierarchy[v17 - 1] == SvtEqCombineListViewManager_TypeInfo )
      {
        if ( LODWORD(manager[6].klass) )
          return;
        UnityEngine_Component__SendMessage_41576000(
          (UnityEngine_Component_o *)manager,
          (System_String_o *)StringLiteral_3626/*"CancelDragEnd"*/,
          0LL);
        manager = (UIDragDropListViewItem_o *)this->fields.manager;
        if ( manager )
        {
          UnityEngine_Component__SendMessage(
            (UnityEngine_Component_o *)manager,
            (System_String_o *)StringLiteral_10129/*"OnLongPushListView"*/,
            (Il2CppObject *)this->fields.linkItem,
            0LL);
          return;
        }
      }
      else
      {
        sub_B5D990(manager);
      }
    }
LABEL_18:
    sub_B5D69C(manager, v15);
  }
}


void __fastcall SvtEqCombineListViewObject__SetInput(
        SvtEqCombineListViewObject_o *this,
        bool isInput,
        const MethodInfo *method)
{
  __int64 v3; // x3
  char v6; // w1
  int v7; // w2
  __int64 v8; // x3
  UnityEngine_Object_o *itemDraw; // x20
  const MethodInfo *v10; // x3
  struct ListViewItem_o *linkItem; // x1
  __int64 v12; // x10
  SvtEqCombineListViewItemDraw_o *v13; // x0

  if ( (byte_42EE518 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, isInput, (_DWORD)method, v3);
    sub_B5D5C4(&SvtEqCombineListViewItem_TypeInfo, v6, v7, v8);
    byte_42EE518 = 1;
  }
  ListViewObject__SetInput((ListViewObject_o *)this, isInput, 0LL);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    linkItem = this->fields.linkItem;
    if ( linkItem
      && ((v12 = *(&SvtEqCombineListViewItem_TypeInfo->_2.bitflags2 + 1),
           *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v12)
       || (SvtEqCombineListViewItem_c *)linkItem->klass->_2.typeHierarchy[v12 - 1] != SvtEqCombineListViewItem_TypeInfo) )
    {
      sub_B5D990(this->fields.linkItem);
    }
    else
    {
      v13 = this->fields.itemDraw;
      if ( v13 )
      {
        SvtEqCombineListViewItemDraw__SetInput(v13, (SvtEqCombineListViewItem_o *)linkItem, 0, v10);
        return;
      }
    }
    sub_B5D69C(v13, linkItem);
  }
}


void __fastcall SvtEqCombineListViewObject__SetItem(
        SvtEqCombineListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  ListViewObject__SetItem_34021840((ListViewObject_o *)this, item, seed, 0LL);
  this->fields.state = 0;
}


void __fastcall SvtEqCombineListViewObject__SetItem_35033676(
        SvtEqCombineListViewObject_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ListViewObject__SetItem((ListViewObject_o *)this, item, 0LL);
  this->fields.state = 0;
}


void __fastcall SvtEqCombineListViewObject__SetupDisp(SvtEqCombineListViewObject_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  struct ListViewItem_o *linkItem; // x21
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int32_t *manager; // x20
  __int64 v13; // x9
  __int64 v14; // x9
  bool v15; // w1
  UnityEngine_Object_o *touchPress; // x22
  SvtEqCombineListViewItemDraw_o *v17; // x0
  __int64 v18; // x1
  struct UITouchPress_o *v19; // x8
  UnityEngine_Object_o *itemDraw; // x22
  const MethodInfo *v21; // x4
  SvtEqCombineListViewManager_o *v22; // x0
  int32_t v23; // w1
  bool v24; // w2
  const MethodInfo *v25; // x3

  if ( (byte_42EE51C & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SvtEqCombineListViewItem_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&SvtEqCombineListViewManager_TypeInfo, v9, v10, v11);
    byte_42EE51C = 1;
  }
  manager = (int32_t *)this->fields.manager;
  if ( manager )
  {
    v13 = *(&SvtEqCombineListViewManager_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)manager + 300LL) < (unsigned int)v13
      || *(SvtEqCombineListViewManager_c **)(*(_QWORD *)(*(_QWORD *)manager + 200LL) + 8 * v13 - 8) != SvtEqCombineListViewManager_TypeInfo )
    {
      sub_B5D990(this->fields.manager);
      goto LABEL_28;
    }
  }
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    v14 = *(&SvtEqCombineListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v14
      && (SvtEqCombineListViewItem_c *)linkItem->klass->_2.typeHierarchy[v14 - 1] == SvtEqCombineListViewItem_TypeInfo )
    {
      v15 = this->fields.dispMode != 0;
      goto LABEL_11;
    }
LABEL_28:
    sub_B5D990(linkItem);
    SvtEqCombineListViewManager__SetDragStart(v22, v23, v24, v25);
    return;
  }
  v15 = 0;
LABEL_11:
  ListViewObject__SetVisible((ListViewObject_o *)this, v15, 0LL);
  touchPress = (UnityEngine_Object_o *)this->fields.touchPress;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v17 = (SvtEqCombineListViewItemDraw_o *)UnityEngine_Object__op_Inequality(touchPress, 0LL, 0LL);
  if ( ((unsigned __int8)v17 & 1) != 0 )
  {
    if ( !linkItem )
      goto LABEL_26;
    v19 = this->fields.touchPress;
    if ( !v19 )
      goto LABEL_26;
    v19->fields.isLongPressFast = LODWORD(linkItem[1].klass) == 1;
  }
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v17 = (SvtEqCombineListViewItemDraw_o *)UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL);
  if ( ((unsigned __int8)v17 & 1) != 0 )
  {
    if ( manager )
    {
      v17 = this->fields.itemDraw;
      if ( v17 )
      {
        SvtEqCombineListViewItemDraw__SetItem(
          v17,
          (SvtEqCombineListViewItem_o *)linkItem,
          this->fields.dispMode,
          manager[180],
          v21);
        return;
      }
    }
LABEL_26:
    sub_B5D69C(v17, v18);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SvtEqCombineListViewObject__Start(SvtEqCombineListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( !this->fields.state )
  {
    zero = UnityEngine_Vector3__get_zero(0LL);
    SvtEqCombineListViewObject__Init(this, 2, 0LL, zero.fields.x, *(UnityEngine_Vector3_o *)&zero.fields.y, v3);
  }
}


System_String_o *__fastcall SvtEqCombineListViewObject__ToString(
        SvtEqCombineListViewObject_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  __int64 v8; // x0
  __int64 v9; // x1
  __int64 v10; // x20
  System_String_o *v11; // x21
  int32_t *v12; // x0
  __int64 v13; // x9
  float z; // w10
  System_String_o *v15; // x0
  __int64 v17; // [xsp+0h] [xbp-30h] BYREF
  float v18; // [xsp+8h] [xbp-28h]
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42EE51D & 1) == 0 )
  {
    sub_B5D5C4(&SvtEqCombineListViewItemDraw_DispMode_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_81/*" "*/, v5, v6, v7);
    byte_42EE51D = 1;
  }
  v18 = 0.0;
  v17 = 0LL;
  v8 = j_il2cpp_value_box_0(SvtEqCombineListViewItemDraw_DispMode_TypeInfo, &this->fields.dispMode);
  if ( !v8 )
    sub_B5D69C(0LL, v9);
  v10 = v8;
  v11 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v8 + 360LL))(
                             v8,
                             *(_QWORD *)(*(_QWORD *)v8 + 368LL));
  v12 = (int32_t *)j_il2cpp_object_unbox_0(v10);
  v13 = *(_QWORD *)&this->fields.basePosition.fields.x;
  z = this->fields.basePosition.fields.z;
  this->fields.dispMode = *v12;
  v17 = v13;
  v18 = z;
  v15 = UnityEngine_Vector3__ToString(v19, (const MethodInfo *)&v17);
  return System_String__Concat_44580072(v11, (System_String_o *)StringLiteral_81/*" "*/, v15, 0LL);
}


void __fastcall SvtEqCombineListViewObject__add_callbackFunc(
        SvtEqCombineListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  SvtEqCombineListViewObject_o *v12; // x0
  System_Action_o *v13; // x1
  const MethodInfo *v14; // x2

  if ( (byte_42EE513 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42EE513 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v7 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v9 = System_Delegate__Combine(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (System_Action_c *)v9->klass != System_Action_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_callbackFunc, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  sub_B5D990(v9);
  SvtEqCombineListViewObject__remove_callbackFunc(v12, v13, v14);
}


void __fastcall SvtEqCombineListViewObject__remove_callbackFunc(
        SvtEqCombineListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  SvtEqCombineListViewObject_o *v12; // x0
  const MethodInfo *v13; // x1

  if ( (byte_42EE514 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42EE514 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v7 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v9 = System_Delegate__Remove(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (System_Action_c *)v9->klass != System_Action_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_callbackFunc, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  sub_B5D990(v9);
  SvtEqCombineListViewObject__Awake(v12, v13);
}