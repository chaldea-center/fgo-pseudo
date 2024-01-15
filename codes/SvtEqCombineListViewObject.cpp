void __fastcall SvtEqCombineListViewObject___ctor(SvtEqCombineListViewObject_o *this, const MethodInfo *method)
{
  if ( (byte_40FD66E & 1) == 0 )
  {
    sub_B16FFC(&ListViewObject_TypeInfo, method);
    byte_40FD66E = 1;
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
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  struct SvtEqCombineListViewItemDraw_o *Component_srcLineSprite; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  WebViewObject_o *Component_WebViewObject; // x1
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  if ( (byte_40FD661 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UIDragDropListViewItem___, method);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_SvtEqCombineListViewItemDraw___, v3);
    byte_40FD661 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_B170D4();
  Component_srcLineSprite = (struct SvtEqCombineListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                       dispObject,
                                                                       (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_SvtEqCombineListViewItemDraw___);
  this->fields.itemDraw = Component_srcLineSprite;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.itemDraw,
    (System_Int32_array **)Component_srcLineSprite,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              (UnityEngine_Component_o *)this,
                              (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UIDragDropListViewItem___);
  this->fields.itemDrag = (struct UIDragDropListViewItem_o *)Component_WebViewObject;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.itemDrag,
    (System_Int32_array **)Component_WebViewObject,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall SvtEqCombineListViewObject__CreateDragObject(
        SvtEqCombineListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *DragObject; // x19
  srcLineSprite_o *Component_srcLineSprite; // x0
  SvtEqCombineListViewObject_o *v6; // x20
  const MethodInfo *v7; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_40FD666 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_SvtEqCombineListViewObject___, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    byte_40FD666 = 1;
  }
  DragObject = ListViewObject__CreateDragObject((ListViewObject_o *)this, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)DragObject, 0LL, 0LL) )
  {
    if ( !DragObject
      || (Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                      DragObject,
                                      (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_SvtEqCombineListViewObject___)) == 0LL )
    {
      sub_B170D4();
    }
    v6 = (SvtEqCombineListViewObject_o *)Component_srcLineSprite;
    zero = UnityEngine_Vector3__get_zero(0LL);
    SvtEqCombineListViewObject__Init(v6, 2, 0LL, zero.fields.x, *(UnityEngine_Vector3_o *)&zero.fields.y, v7);
  }
  return DragObject;
}


SvtEqCombineListViewItem_o *__fastcall SvtEqCombineListViewObject__GetItem(
        SvtEqCombineListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 v4; // x11

  if ( (byte_40FD663 & 1) == 0 )
  {
    sub_B16FFC(&SvtEqCombineListViewItem_TypeInfo, method);
    byte_40FD663 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0LL;
  v4 = *(&SvtEqCombineListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v4 )
    return 0LL;
  if ( (SvtEqCombineListViewItem_c *)linkItem->klass->_2.typeHierarchy[v4 - 1] == SvtEqCombineListViewItem_TypeInfo )
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
  __int64 v11; // x10
  int v12; // w9
  struct ListViewItem_o *v13; // x10
  __int64 v14; // x10
  bool v15; // w24
  struct ListViewItem_o *v16; // x8
  bool v17; // w25
  int32_t v18; // w23
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v20; // x0
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

  if ( (byte_40FD667 & 1) == 0 )
  {
    sub_B16FFC(&SvtEqCombineListViewItem_TypeInfo, *(_QWORD *)&initMode);
    byte_40FD667 = 1;
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
      sub_B173C8(linkItem);
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
        (v20 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
LABEL_40:
    sub_B170D4();
  }
  v21 = v15 || v17;
  UnityEngine_Transform__set_localScale(v20, this->fields.baseScale, 0LL);
  this->fields.callbackFunc = callbackFunc;
  p_callbackFunc = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
  sub_B16F98(
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
    v36 = dword_3147F90[v18];
    this->fields.dispMode = dword_3147F70[v18];
    this->fields.state = v36;
  }
  if ( v21 || dispMode != this->fields.dispMode )
    SvtEqCombineListViewObject__SetupDisp(this, v29);
  klass = (System_Action_o *)p_callbackFunc->klass;
  if ( p_callbackFunc->klass )
  {
    p_callbackFunc->klass = 0LL;
    sub_B16F98(p_callbackFunc, 0LL, v30, v31, v32, v33, v34, v35);
    System_Action__Invoke(klass, 0LL);
  }
}


void __fastcall SvtEqCombineListViewObject__InitItem(SvtEqCombineListViewObject_o *this, const MethodInfo *method)
{
  this->fields.state = 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SvtEqCombineListViewObject__Init_31516600(
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
void __fastcall SvtEqCombineListViewObject__Init_31518788(
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
void __fastcall SvtEqCombineListViewObject__Init_31518852(
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
  __int64 v4; // x1
  __int64 v5; // x1
  struct ListViewManager_o *manager; // x0
  __int64 v7; // x9
  struct ListViewItem_o *linkItem; // x1
  __int64 v9; // x10
  UnityEngine_Object_o *touchPress; // x20
  UITouchPress_o *v12; // x0
  SvtEqCombineListViewObject_o *v13; // x0
  const MethodInfo *v14; // x1

  if ( (byte_40FD665 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    sub_B16FFC(&SvtEqCombineListViewItem_TypeInfo, v4);
    sub_B16FFC(&SvtEqCombineListViewManager_TypeInfo, v5);
    byte_40FD665 = 1;
  }
  manager = this->fields.manager;
  if ( !manager )
    goto LABEL_20;
  v7 = *(&SvtEqCombineListViewManager_TypeInfo->_2.bitflags2 + 1);
  if ( *(&manager->klass->_2.bitflags2 + 1) < (unsigned int)v7
    || (SvtEqCombineListViewManager_c *)manager->klass->_2.typeHierarchy[v7 - 1] != SvtEqCombineListViewManager_TypeInfo )
  {
    sub_B173C8(manager);
    goto LABEL_20;
  }
  if ( ((__int64)manager[2].fields.topItem & 0x80000000) != 0 )
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
    v12 = this->fields.touchPress;
    if ( v12 )
    {
      UITouchPress__PressReset(v12, 0LL);
      return 0;
    }
LABEL_20:
    sub_B170D4();
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem
    || (v9 = *(&SvtEqCombineListViewItem_TypeInfo->_2.bitflags2 + 1),
        *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v9)
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
  sub_B173C8(this->fields.linkItem);
  return (unsigned __int8)SvtEqCombineListViewObject__CreateDragObject(v13, v14);
}


void __fastcall SvtEqCombineListViewObject__OnClickSelect(SvtEqCombineListViewObject_o *this, const MethodInfo *method)
{
  struct ListViewManager_o *manager; // x21
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  SvtEqCombineListViewItem_o *linkItem; // x20
  __int64 v9; // x9
  __int64 v10; // x9
  const MethodInfo *v11; // x1
  int scrollBar; // w8
  int64_t v13; // x0
  const MethodInfo *v14; // x2
  bool v15; // w0
  SoundManager_c *v16; // x8
  __int16 v17; // w9
  const MethodInfo *v18; // x1
  int64_t UserSvtId; // x0
  const MethodInfo *v20; // x2
  bool v21; // w0
  SoundManager_c *v22; // x0
  int32_t type; // w8
  UnityEngine_Component_o *v24; // x0
  int32_t v25; // w0
  UnityEngine_Component_o *v26; // x0

  if ( (byte_40FD66A & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    sub_B16FFC(&SvtEqCombineListViewItem_TypeInfo, v4);
    sub_B16FFC(&SvtEqCombineListViewManager_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_9937/*"OnClickSelectBase"*/, v6);
    sub_B16FFC(&StringLiteral_9939/*"OnClickSelectMaterial"*/, v7);
    byte_40FD66A = 1;
  }
  linkItem = (SvtEqCombineListViewItem_o *)this->fields.linkItem;
  if ( !linkItem )
    return;
  v9 = *(&SvtEqCombineListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v9
    || (SvtEqCombineListViewItem_c *)linkItem->klass->_2.typeHierarchy[v9 - 1] != SvtEqCombineListViewItem_TypeInfo )
  {
    sub_B173C8(this->fields.linkItem);
LABEL_60:
    sub_B173C8(manager);
    goto LABEL_61;
  }
  manager = this->fields.manager;
  if ( !manager )
    goto LABEL_61;
  v10 = *(&SvtEqCombineListViewManager_TypeInfo->_2.bitflags2 + 1);
  if ( *(&manager->klass->_2.bitflags2 + 1) < (unsigned int)v10
    || (SvtEqCombineListViewManager_c *)manager->klass->_2.typeHierarchy[v10 - 1] != SvtEqCombineListViewManager_TypeInfo )
  {
    goto LABEL_60;
  }
  ListViewManager__ClearScrollBarValue(this->fields.manager, 0, 0LL);
  scrollBar = (int)manager[2].fields.scrollBar;
  if ( scrollBar == 2 )
  {
    UserSvtId = SvtEqCombineListViewItem__get_UserSvtId(linkItem, v11);
    v21 = SvtEqCombineListViewManager__CheckIsMaterialSelectSvt(
            (SvtEqCombineListViewManager_o *)manager,
            UserSvtId,
            v20);
    v16 = SoundManager_TypeInfo;
    v17 = WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr);
    if ( !v21 )
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
  if ( scrollBar == 1 )
  {
    v13 = SvtEqCombineListViewItem__get_UserSvtId(linkItem, v11);
    v15 = SvtEqCombineListViewManager__CheckIsMaterialSelectSvt((SvtEqCombineListViewManager_o *)manager, v13, v14);
    v16 = SoundManager_TypeInfo;
    v17 = WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr);
    if ( !v15 )
    {
      if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(11, 0LL);
      linkItem->fields.isSwapLock ^= 1u;
LABEL_33:
      SvtEqCombineListViewObject__SetupDisp(this, v18);
      return;
    }
LABEL_17:
    if ( (v17 & 0x400) == 0 || v16->_2.cctor_finished )
      goto LABEL_41;
    v22 = v16;
LABEL_20:
    j_il2cpp_runtime_class_init_0(v22);
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
      v24 = (UnityEngine_Component_o *)this->fields.manager;
      if ( !v24 )
        goto LABEL_61;
      UnityEngine_Component__SendMessage(v24, (System_String_o *)StringLiteral_9937/*"OnClickSelectBase"*/, (Il2CppObject *)this, 0LL);
    }
    type = linkItem->fields.type;
  }
  if ( type == 1 )
  {
    if ( SvtEqCombineListViewItem__get_IsCanNotSelect(linkItem, v11) )
    {
      v22 = SoundManager_TypeInfo;
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
      v25 = 1;
    }
    else if ( linkItem->fields.isMaxSelect )
    {
      if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      v25 = 2;
    }
    else
    {
      if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      v25 = 0;
    }
    SoundManager__playSystemSe(v25, 0LL);
    v26 = (UnityEngine_Component_o *)this->fields.manager;
    if ( v26 )
    {
      UnityEngine_Component__SendMessage(v26, (System_String_o *)StringLiteral_9939/*"OnClickSelectMaterial"*/, (Il2CppObject *)this, 0LL);
      return;
    }
LABEL_61:
    sub_B170D4();
  }
}


void __fastcall SvtEqCombineListViewObject__OnDestroy(SvtEqCombineListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  BattleServantConfConponent_o *p_dragObject; // x19
  UnityEngine_Object_o *v5; // x20
  struct UnityEngine_GameObject_o *dragObject; // t1
  UnityEngine_Object_o *klass; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_40FD662 & 1) == 0 )
  {
    sub_B16FFC(&NGUITools_TypeInfo, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    byte_40FD662 = 1;
  }
  dragObject = this->fields.dragObject;
  p_dragObject = (BattleServantConfConponent_o *)&this->fields.dragObject;
  v5 = (UnityEngine_Object_o *)dragObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v5, 0LL, 0LL) )
  {
    klass = (UnityEngine_Object_o *)p_dragObject->klass;
    if ( (BYTE3(NGUITools_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    NGUITools__Destroy(klass, 0LL);
    p_dragObject->klass = 0LL;
    sub_B16F98(p_dragObject, 0LL, v8, v9, v10, v11, v12, v13);
  }
}


void __fastcall SvtEqCombineListViewObject__OnDragDropStart(
        SvtEqCombineListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  struct ListViewManager_o *manager; // x0
  __int64 v5; // x9
  UnityEngine_Object_o *touchPress; // x20
  UITouchPress_o *v7; // x0

  if ( (byte_40FD66C & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    sub_B16FFC(&SvtEqCombineListViewManager_TypeInfo, v3);
    byte_40FD66C = 1;
  }
  manager = this->fields.manager;
  if ( !manager )
    goto LABEL_15;
  v5 = *(&SvtEqCombineListViewManager_TypeInfo->_2.bitflags2 + 1);
  if ( *(&manager->klass->_2.bitflags2 + 1) < (unsigned int)v5
    || (SvtEqCombineListViewManager_c *)manager->klass->_2.typeHierarchy[v5 - 1] != SvtEqCombineListViewManager_TypeInfo )
  {
    sub_B173C8(manager);
    goto LABEL_15;
  }
  if ( ((__int64)manager[2].fields.topItem & 0x80000000) == 0 )
  {
    touchPress = (UnityEngine_Object_o *)this->fields.touchPress;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(touchPress, 0LL, 0LL) )
    {
      v7 = this->fields.touchPress;
      if ( v7 )
      {
        UITouchPress__PressReset(v7, 0LL);
        return;
      }
LABEL_15:
      sub_B170D4();
    }
  }
}


void __fastcall SvtEqCombineListViewObject__OnLongPush(SvtEqCombineListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct ListViewItem_o *linkItem; // x20
  __int64 v8; // x9
  struct ListViewManager_o *manager; // x21
  __int64 v10; // x9
  int32_t sortIndex; // w19
  bool IsSelect; // w0
  const MethodInfo *v13; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *v15; // x0
  SvtEqCombineListViewObject_o *v16; // x0
  const MethodInfo *v17; // x1

  if ( (byte_40FD66B & 1) == 0 )
  {
    sub_B16FFC(&SvtEqCombineListViewItem_TypeInfo, method);
    sub_B16FFC(&SvtEqCombineListViewManager_TypeInfo, v4);
    sub_B16FFC(&StringLiteral_9991/*"OnLongPushListView"*/, v5);
    sub_B16FFC(&StringLiteral_10009/*"OnPressCancel"*/, v6);
    byte_40FD66B = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    v8 = *(&SvtEqCombineListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v8
      && (SvtEqCombineListViewItem_c *)linkItem->klass->_2.typeHierarchy[v8 - 1] == SvtEqCombineListViewItem_TypeInfo )
    {
      manager = this->fields.manager;
      if ( manager )
      {
        v10 = *(&SvtEqCombineListViewManager_TypeInfo->_2.bitflags2 + 1);
        if ( *(&manager->klass->_2.bitflags2 + 1) < (unsigned int)v10
          || (SvtEqCombineListViewManager_c *)manager->klass->_2.typeHierarchy[v10 - 1] != SvtEqCombineListViewManager_TypeInfo )
        {
          sub_B173C8(this->fields.manager);
          SvtEqCombineListViewObject__OnDragDropStart(v16, v17);
          return;
        }
      }
      if ( LODWORD(linkItem[1].klass) == 1 )
      {
        if ( manager )
        {
          if ( SvtEqCombineListViewManager__IsDragEnable(
                 (SvtEqCombineListViewManager_o *)this->fields.manager,
                 (SvtEqCombineListViewItem_o *)this->fields.linkItem,
                 v2) )
          {
            sortIndex = linkItem->fields.sortIndex;
            IsSelect = ListViewItem__get_IsSelect(linkItem, 0LL);
            SvtEqCombineListViewManager__SetDragStart(
              (SvtEqCombineListViewManager_o *)manager,
              sortIndex,
              !IsSelect,
              v13);
          }
          return;
        }
      }
      else
      {
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        if ( gameObject )
        {
          UnityEngine_GameObject__SendMessage_40693392(gameObject, (System_String_o *)StringLiteral_10009/*"OnPressCancel"*/, 0LL);
          v15 = (UnityEngine_Component_o *)this->fields.manager;
          if ( v15 )
          {
            UnityEngine_Component__SendMessage(
              v15,
              (System_String_o *)StringLiteral_9991/*"OnLongPushListView"*/,
              (Il2CppObject *)this->fields.linkItem,
              0LL);
            return;
          }
        }
      }
    }
    else
    {
      sub_B173C8(this->fields.linkItem);
    }
    sub_B170D4();
  }
}


void __fastcall SvtEqCombineListViewObject__OnLongRelease(SvtEqCombineListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_Object_o *itemDrag; // x20
  UIDragDropListViewItem_o *v7; // x0
  struct ListViewManager_o *manager; // x0
  __int64 v9; // x9
  UnityEngine_Component_o *v10; // x0

  if ( (byte_40FD66D & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    sub_B16FFC(&SvtEqCombineListViewManager_TypeInfo, v3);
    sub_B16FFC(&StringLiteral_9991/*"OnLongPushListView"*/, v4);
    sub_B16FFC(&StringLiteral_3546/*"CancelDragEnd"*/, v5);
    byte_40FD66D = 1;
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
      v7 = this->fields.itemDrag;
      if ( !v7 )
        goto LABEL_18;
      UIDragDropListViewItem__PressReset(v7, 0LL);
    }
    manager = this->fields.manager;
    if ( manager )
    {
      v9 = *(&SvtEqCombineListViewManager_TypeInfo->_2.bitflags2 + 1);
      if ( *(&manager->klass->_2.bitflags2 + 1) >= (unsigned int)v9
        && (SvtEqCombineListViewManager_c *)manager->klass->_2.typeHierarchy[v9 - 1] == SvtEqCombineListViewManager_TypeInfo )
      {
        if ( LODWORD(manager[2].fields.scrollBar) )
          return;
        UnityEngine_Component__SendMessage_40674196(
          (UnityEngine_Component_o *)manager,
          (System_String_o *)StringLiteral_3546/*"CancelDragEnd"*/,
          0LL);
        v10 = (UnityEngine_Component_o *)this->fields.manager;
        if ( v10 )
        {
          UnityEngine_Component__SendMessage(
            v10,
            (System_String_o *)StringLiteral_9991/*"OnLongPushListView"*/,
            (Il2CppObject *)this->fields.linkItem,
            0LL);
          return;
        }
      }
      else
      {
        sub_B173C8(manager);
      }
    }
LABEL_18:
    sub_B170D4();
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
  __int64 v9; // x10
  SvtEqCombineListViewItemDraw_o *v10; // x0

  if ( (byte_40FD664 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, isInput);
    sub_B16FFC(&SvtEqCombineListViewItem_TypeInfo, v5);
    byte_40FD664 = 1;
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
      && ((v9 = *(&SvtEqCombineListViewItem_TypeInfo->_2.bitflags2 + 1),
           *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v9)
       || (SvtEqCombineListViewItem_c *)linkItem->klass->_2.typeHierarchy[v9 - 1] != SvtEqCombineListViewItem_TypeInfo) )
    {
      sub_B173C8(this->fields.linkItem);
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
    sub_B170D4();
  }
}


void __fastcall SvtEqCombineListViewObject__SetItem(
        SvtEqCombineListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  ListViewObject__SetItem_30205928((ListViewObject_o *)this, item, seed, 0LL);
  this->fields.state = 0;
}


void __fastcall SvtEqCombineListViewObject__SetItem_31535720(
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
  __int64 v7; // x9
  __int64 v8; // x9
  bool v9; // w1
  UnityEngine_Object_o *touchPress; // x22
  struct UITouchPress_o *v11; // x8
  UnityEngine_Object_o *itemDraw; // x22
  const MethodInfo *v13; // x4
  SvtEqCombineListViewItemDraw_o *v14; // x0
  SvtEqCombineListViewManager_o *v15; // x0
  int32_t v16; // w1
  bool v17; // w2
  const MethodInfo *v18; // x3

  if ( (byte_40FD668 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    sub_B16FFC(&SvtEqCombineListViewItem_TypeInfo, v4);
    sub_B16FFC(&SvtEqCombineListViewManager_TypeInfo, v5);
    byte_40FD668 = 1;
  }
  manager = (int32_t *)this->fields.manager;
  if ( manager )
  {
    v7 = *(&SvtEqCombineListViewManager_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)manager + 300LL) < (unsigned int)v7
      || *(SvtEqCombineListViewManager_c **)(*(_QWORD *)(*(_QWORD *)manager + 200LL) + 8 * v7 - 8) != SvtEqCombineListViewManager_TypeInfo )
    {
      sub_B173C8(this->fields.manager);
      goto LABEL_28;
    }
  }
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    v8 = *(&SvtEqCombineListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v8
      && (SvtEqCombineListViewItem_c *)linkItem->klass->_2.typeHierarchy[v8 - 1] == SvtEqCombineListViewItem_TypeInfo )
    {
      v9 = this->fields.dispMode != 0;
      goto LABEL_11;
    }
LABEL_28:
    sub_B173C8(linkItem);
    SvtEqCombineListViewManager__SetDragStart(v15, v16, v17, v18);
    return;
  }
  v9 = 0;
LABEL_11:
  ListViewObject__SetVisible((ListViewObject_o *)this, v9, 0LL);
  touchPress = (UnityEngine_Object_o *)this->fields.touchPress;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(touchPress, 0LL, 0LL) )
  {
    if ( !linkItem )
      goto LABEL_26;
    v11 = this->fields.touchPress;
    if ( !v11 )
      goto LABEL_26;
    v11->fields.isLongPressFast = LODWORD(linkItem[1].klass) == 1;
  }
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
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
          manager[180],
          v13);
        return;
      }
    }
LABEL_26:
    sub_B170D4();
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
  __int64 v3; // x1
  __int64 v4; // x0
  __int64 v5; // x20
  System_String_o *v6; // x21
  int32_t *v7; // x0
  __int64 v8; // x9
  float z; // w10
  System_String_o *v10; // x0
  __int64 v12; // [xsp+0h] [xbp-30h] BYREF
  float v13; // [xsp+8h] [xbp-28h]
  UnityEngine_Vector3_o v14; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FD669 & 1) == 0 )
  {
    sub_B16FFC(&SvtEqCombineListViewItemDraw_DispMode_TypeInfo, method);
    sub_B16FFC(&StringLiteral_80/*" "*/, v3);
    byte_40FD669 = 1;
  }
  v13 = 0.0;
  v12 = 0LL;
  v4 = j_il2cpp_value_box_0(SvtEqCombineListViewItemDraw_DispMode_TypeInfo, &this->fields.dispMode);
  if ( !v4 )
    sub_B170D4();
  v5 = v4;
  v6 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v4 + 360LL))(
                            v4,
                            *(_QWORD *)(*(_QWORD *)v4 + 368LL));
  v7 = (int32_t *)j_il2cpp_object_unbox_0(v5);
  v8 = *(_QWORD *)&this->fields.basePosition.fields.x;
  z = this->fields.basePosition.fields.z;
  this->fields.dispMode = *v7;
  v12 = v8;
  v13 = z;
  v10 = UnityEngine_Vector3__ToString(v14, (const MethodInfo *)&v12);
  return System_String__Concat_43746016(v6, (System_String_o *)StringLiteral_80/*" "*/, v10, 0LL);
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

  if ( (byte_40FD65F & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, value);
    byte_40FD65F = 1;
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
    v9 = sub_B0BA14(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B173C8(v8);
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

  if ( (byte_40FD660 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, value);
    byte_40FD660 = 1;
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
    v9 = sub_B0BA14(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B173C8(v8);
  SvtEqCombineListViewObject__Awake(v11, v12);
}