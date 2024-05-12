void __fastcall CombineServantListViewObject___ctor(CombineServantListViewObject_o *this, const MethodInfo *method)
{
  if ( (byte_438DEA8 & 1) == 0 )
  {
    sub_B775C4(&ListViewObject_TypeInfo);
    byte_438DEA8 = 1;
  }
  if ( (BYTE3(ListViewObject_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ListViewObject_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  }
  ListViewObject___ctor((ListViewObject_o *)this, 0LL);
}


void __fastcall CombineServantListViewObject__Awake(CombineServantListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  struct CombineServantListViewItemDraw_o *Component_srcLineSprite; // x0
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

  if ( (byte_438DE9B & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_Component_GetComponent_UIDragDropListViewItem___);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_CombineServantListViewItemDraw___);
    byte_438DE9B = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_B7769C(0LL, v3);
  Component_srcLineSprite = (struct CombineServantListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                         dispObject,
                                                                         (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_CombineServantListViewItemDraw___);
  this->fields.itemDraw = Component_srcLineSprite;
  sub_B77560(
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
                              (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_UIDragDropListViewItem___);
  this->fields.itemDrag = (struct UIDragDropListViewItem_o *)Component_WebViewObject;
  sub_B77560(
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
UnityEngine_GameObject_o *__fastcall CombineServantListViewObject__CreateDragObject(
        CombineServantListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *DragObject; // x19
  srcLineSprite_o *Component_srcLineSprite; // x0
  __int64 v5; // x1
  CombineServantListViewObject_o *v6; // x20
  const MethodInfo *v7; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_438DEA0 & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_CombineServantListViewObject___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438DEA0 = 1;
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
                                      (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_CombineServantListViewObject___)) == 0LL )
    {
      sub_B7769C(Component_srcLineSprite, v5);
    }
    v6 = (CombineServantListViewObject_o *)Component_srcLineSprite;
    zero = UnityEngine_Vector3__get_zero(0LL);
    CombineServantListViewObject__Init(v6, 2, 0LL, zero.fields.x, *(UnityEngine_Vector3_o *)&zero.fields.y, v7);
  }
  return (UnityEngine_GameObject_o *)DragObject;
}


CombineServantListViewItem_o *__fastcall CombineServantListViewObject__GetItem(
        CombineServantListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 v4; // x11

  if ( (byte_438DE9D & 1) == 0 )
  {
    sub_B775C4(&CombineServantListViewItem_TypeInfo);
    byte_438DE9D = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0LL;
  v4 = *(&CombineServantListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v4 )
    return 0LL;
  if ( (CombineServantListViewItem_c *)linkItem->klass->_2.typeHierarchy[v4 - 1] == CombineServantListViewItem_TypeInfo )
    return (CombineServantListViewItem_o *)this->fields.linkItem;
  return 0LL;
}


void __fastcall CombineServantListViewObject__Init(
        CombineServantListViewObject_o *this,
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

  if ( (byte_438DEA1 & 1) == 0 )
  {
    sub_B775C4(&CombineServantListViewItem_TypeInfo);
    byte_438DEA1 = 1;
  }
  linkItem = this->fields.linkItem;
  dispMode = this->fields.dispMode;
  if ( linkItem )
  {
    v11 = *(&CombineServantListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v11
      || (CombineServantListViewItem_c *)linkItem->klass->_2.typeHierarchy[v11 - 1] != CombineServantListViewItem_TypeInfo )
    {
      goto LABEL_38;
    }
    if ( initMode == 4 )
      v12 = 0;
    else
      v12 = 2;
    if ( initMode == 4 )
      v13 = 0LL;
    else
      v13 = this->fields.linkItem;
    if ( initMode != 4 )
    {
      v14 = *(&CombineServantListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v14
        && (CombineServantListViewItem_c *)linkItem->klass->_2.typeHierarchy[v14 - 1] == CombineServantListViewItem_TypeInfo )
      {
        v12 = 2;
        v13 = this->fields.linkItem;
        goto LABEL_22;
      }
LABEL_38:
      sub_B77990(linkItem);
      goto LABEL_39;
    }
  }
  else
  {
    if ( initMode == 4 )
      v12 = 0;
    else
      v12 = 2;
    if ( initMode == 4 )
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
  ((void (__fastcall *)(CombineServantListViewObject_o *, bool, Il2CppMethodPointer))this->klass->vtable._9_SetInput.method)(
    this,
    v18 == 3,
    this->klass->vtable._10_Invalidation.methodPtr);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0LL),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
LABEL_39:
    sub_B7769C(transform, v20);
  }
  v21 = v15 || v17;
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0LL);
  this->fields.callbackFunc = callbackFunc;
  p_callbackFunc = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callbackFunc,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  if ( (unsigned int)v18 <= 4 )
  {
    v36 = dword_332F7C0[v18];
    this->fields.dispMode = dword_332F7A0[v18];
    this->fields.state = v36;
  }
  if ( v21 || dispMode != this->fields.dispMode )
    CombineServantListViewObject__SetupDisp(this, v29);
  klass = (System_Action_o *)p_callbackFunc->klass;
  if ( p_callbackFunc->klass )
  {
    p_callbackFunc->klass = 0LL;
    sub_B77560(p_callbackFunc, 0LL, v30, v31, v32, v33, v34, v35);
    System_Action__Invoke(klass, 0LL);
  }
}


void __fastcall CombineServantListViewObject__InitItem(CombineServantListViewObject_o *this, const MethodInfo *method)
{
  this->fields.state = 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineServantListViewObject__Init_30410464(
        CombineServantListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  zero = UnityEngine_Vector3__get_zero(0LL);
  CombineServantListViewObject__Init(this, initMode, 0LL, zero.fields.x, *(UnityEngine_Vector3_o *)&zero.fields.y, v5);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineServantListViewObject__Init_30412892(
        CombineServantListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        const MethodInfo *method)
{
  const MethodInfo *v8; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  zero = UnityEngine_Vector3__get_zero(0LL);
  CombineServantListViewObject__Init(
    this,
    initMode,
    callbackFunc,
    zero.fields.x,
    *(UnityEngine_Vector3_o *)&zero.fields.y,
    v8);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineServantListViewObject__Init_30412956(
        CombineServantListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  zero = UnityEngine_Vector3__get_zero(0LL);
  CombineServantListViewObject__Init(
    this,
    initMode,
    callbackFunc,
    zero.fields.x,
    *(UnityEngine_Vector3_o *)&zero.fields.y,
    v7);
}


bool __fastcall CombineServantListViewObject__IsCanDrag(CombineServantListViewObject_o *this, const MethodInfo *method)
{
  CombineServantListViewObject_o *v2; // x19
  CombineServantListViewManager_o *manager; // x20
  __int64 v4; // x9
  CombineServantListViewItem_o *linkItem; // x1
  __int64 v6; // x10
  UnityEngine_Object_o *touchPress; // x20
  CombineServantListViewObject_o *v9; // x0
  const MethodInfo *v10; // x1

  v2 = this;
  if ( (byte_438DE9F & 1) == 0 )
  {
    sub_B775C4(&CombineServantListViewItem_TypeInfo);
    sub_B775C4(&CombineServantListViewManager_TypeInfo);
    this = (CombineServantListViewObject_o *)sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438DE9F = 1;
  }
  manager = (CombineServantListViewManager_o *)v2->fields.manager;
  if ( !manager )
    goto LABEL_20;
  v4 = *(&CombineServantListViewManager_TypeInfo->_2.bitflags2 + 1);
  if ( *(&manager->klass->_2.bitflags2 + 1) < (unsigned int)v4
    || (CombineServantListViewManager_c *)manager->klass->_2.typeHierarchy[v4 - 1] != CombineServantListViewManager_TypeInfo )
  {
    sub_B77990(v2->fields.manager);
    goto LABEL_20;
  }
  if ( !CombineServantListViewManager__IsDragStart((CombineServantListViewManager_o *)v2->fields.manager, 0LL) )
  {
LABEL_12:
    touchPress = (UnityEngine_Object_o *)v2->fields.touchPress;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Inequality(touchPress, 0LL, 0LL) )
      return 0;
    this = (CombineServantListViewObject_o *)v2->fields.touchPress;
    if ( this )
    {
      UITouchPress__PressReset((UITouchPress_o *)this, 0LL);
      return 0;
    }
LABEL_20:
    sub_B7769C(this, method);
  }
  linkItem = (CombineServantListViewItem_o *)v2->fields.linkItem;
  if ( !linkItem
    || (v6 = *(&CombineServantListViewItem_TypeInfo->_2.bitflags2 + 1),
        *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v6)
    && (CombineServantListViewItem_c *)linkItem->klass->_2.typeHierarchy[v6 - 1] == CombineServantListViewItem_TypeInfo )
  {
    if ( CombineServantListViewManager__IsDragEnable(manager, linkItem, 0LL) )
      return 1;
    goto LABEL_12;
  }
  sub_B77990(v2->fields.linkItem);
  return (unsigned __int8)CombineServantListViewObject__CreateDragObject(v9, v10);
}


void __fastcall CombineServantListViewObject__OnClickSelect(
        CombineServantListViewObject_o *this,
        const MethodInfo *method)
{
  CombineServantListViewManager_o *manager; // x21
  CombineServantListViewObject_o *v3; // x19
  CombineServantListViewItem_o *linkItem; // x20
  CombineServantListViewItem_c *v5; // x1
  __int64 v6; // x9
  __int64 v7; // x9
  int32_t modeKind; // w8
  int64_t v9; // x0
  bool v10; // w0
  SoundManager_c *v11; // x8
  __int16 v12; // w9
  const MethodInfo *v13; // x1
  int64_t UserSvtId; // x0
  bool v15; // w0
  SoundManager_c *v16; // x0
  __int64 *v17; // x8
  int32_t v18; // w0

  v3 = this;
  if ( (byte_438DEA4 & 1) == 0 )
  {
    sub_B775C4(&CombineServantListViewItem_TypeInfo);
    sub_B775C4(&CombineServantListViewManager_TypeInfo);
    sub_B775C4(&SoundManager_TypeInfo);
    sub_B775C4(&StringLiteral_10151/*"OnClickSelectBase"*/);
    sub_B775C4(&StringLiteral_10153/*"OnClickSelectMaterial"*/);
    this = (CombineServantListViewObject_o *)sub_B775C4(&StringLiteral_10155/*"OnClickSelectPush"*/);
    byte_438DEA4 = 1;
  }
  linkItem = (CombineServantListViewItem_o *)v3->fields.linkItem;
  if ( linkItem )
  {
    v5 = CombineServantListViewItem_TypeInfo;
    v6 = *(&CombineServantListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v6
      && (CombineServantListViewItem_c *)linkItem->klass->_2.typeHierarchy[v6 - 1] == CombineServantListViewItem_TypeInfo )
    {
      manager = (CombineServantListViewManager_o *)v3->fields.manager;
      if ( !manager )
        goto LABEL_60;
      v7 = *(&CombineServantListViewManager_TypeInfo->_2.bitflags2 + 1);
      if ( *(&manager->klass->_2.bitflags2 + 1) >= (unsigned int)v7
        && (CombineServantListViewManager_c *)manager->klass->_2.typeHierarchy[v7 - 1] == CombineServantListViewManager_TypeInfo )
      {
        ListViewManager__ClearScrollBarValue(v3->fields.manager, 0, 0LL);
        modeKind = manager->fields.modeKind;
        if ( modeKind != 3 )
        {
          if ( modeKind == 2 )
          {
            UserSvtId = CombineServantListViewItem__get_UserSvtId(linkItem, 0LL);
            v15 = CombineServantListViewManager__CheckIsMaterialSelectSvt(manager, UserSvtId, 0LL);
            v11 = SoundManager_TypeInfo;
            v12 = WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr);
            if ( !v15 )
            {
              if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                && !SoundManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
              }
              SoundManager__playSystemSe(0, 0LL);
              CombineServantListViewItem__SwapChoice(linkItem, 0LL);
              goto LABEL_35;
            }
            goto LABEL_18;
          }
          if ( modeKind == 1 )
          {
            v9 = CombineServantListViewItem__get_UserSvtId(linkItem, 0LL);
            v10 = CombineServantListViewManager__CheckIsMaterialSelectSvt(manager, v9, 0LL);
            v11 = SoundManager_TypeInfo;
            v12 = WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr);
            if ( !v10 )
            {
              if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                && !SoundManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
              }
              SoundManager__playSystemSe(11, 0LL);
              CombineServantListViewItem__SwapLock(linkItem, 0LL);
LABEL_35:
              CombineServantListViewObject__SetupDisp(v3, v13);
              return;
            }
LABEL_18:
            if ( (v12 & 0x400) == 0 || v11->_2.cctor_finished )
              goto LABEL_25;
            v16 = v11;
LABEL_24:
            j_il2cpp_runtime_class_init_0(v16);
LABEL_25:
            SoundManager__playSystemSe(2, 0LL);
            return;
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
              if ( !CombineServantListViewItem__get_IsCanNotBaseSelect(linkItem, 0LL) || linkItem->fields.isBaseSvt )
              {
                this = (CombineServantListViewObject_o *)v3->fields.manager;
                if ( this )
                {
                  v17 = &StringLiteral_10151/*"OnClickSelectBase"*/;
LABEL_38:
                  UnityEngine_Component__SendMessage(
                    (UnityEngine_Component_o *)this,
                    (System_String_o *)*v17,
                    (Il2CppObject *)v3,
                    0LL);
                  return;
                }
                goto LABEL_60;
              }
              if ( !CombineServantListViewItem__get_IsCanNotBaseSelect(linkItem, 0LL) )
                return;
              goto LABEL_22;
            case 1:
            case 5:
              if ( CombineServantListViewItem__get_IsCanNotSelect(linkItem, 0LL) )
                goto LABEL_22;
              if ( linkItem->fields.isMaterialSvt )
              {
                linkItem->fields.isMaterialSvt = 0;
                if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !SoundManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
                }
                v18 = 1;
              }
              else if ( linkItem->fields.isMaxSelect )
              {
                if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                  && !SoundManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
                }
                v18 = 2;
              }
              else
              {
                if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                  && !SoundManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
                }
                v18 = 0;
              }
              SoundManager__playSystemSe(v18, 0LL);
              this = (CombineServantListViewObject_o *)v3->fields.manager;
              if ( !this )
                goto LABEL_60;
              v17 = &StringLiteral_10153/*"OnClickSelectMaterial"*/;
              goto LABEL_38;
            default:
              return;
          }
        }
        if ( CombineServantListViewItem__get_IsCanNotSelectPush(linkItem, 0LL) )
        {
LABEL_22:
          v16 = SoundManager_TypeInfo;
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0
            || SoundManager_TypeInfo->_2.cctor_finished )
          {
            goto LABEL_25;
          }
          goto LABEL_24;
        }
        this = (CombineServantListViewObject_o *)v3->fields.manager;
        if ( this )
        {
          v17 = &StringLiteral_10155/*"OnClickSelectPush"*/;
          goto LABEL_38;
        }
LABEL_60:
        sub_B7769C(this, v5);
      }
    }
    else
    {
      sub_B77990(v3->fields.linkItem);
    }
    sub_B77990(manager);
    goto LABEL_60;
  }
}


void __fastcall CombineServantListViewObject__OnDestroy(CombineServantListViewObject_o *this, const MethodInfo *method)
{
  BattleServantConfConponent_o *p_dragObject; // x19
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_GameObject_o *dragObject; // t1
  UnityEngine_Object_o *klass; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_438DE9C & 1) == 0 )
  {
    sub_B775C4(&NGUITools_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438DE9C = 1;
  }
  dragObject = this->fields.dragObject;
  p_dragObject = (BattleServantConfConponent_o *)&this->fields.dragObject;
  v4 = (UnityEngine_Object_o *)dragObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v4, 0LL, 0LL) )
  {
    klass = (UnityEngine_Object_o *)p_dragObject->klass;
    if ( (BYTE3(NGUITools_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    NGUITools__Destroy(klass, 0LL);
    p_dragObject->klass = 0LL;
    sub_B77560(p_dragObject, 0LL, v7, v8, v9, v10, v11, v12);
  }
}


void __fastcall CombineServantListViewObject__OnDragDropStart(
        CombineServantListViewObject_o *this,
        const MethodInfo *method)
{
  UITouchPress_o *manager; // x0
  __int64 v4; // x9
  UnityEngine_Object_o *touchPress; // x20

  if ( (byte_438DEA6 & 1) == 0 )
  {
    sub_B775C4(&CombineServantListViewManager_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438DEA6 = 1;
  }
  manager = (UITouchPress_o *)this->fields.manager;
  if ( !manager )
    goto LABEL_15;
  v4 = *(&CombineServantListViewManager_TypeInfo->_2.bitflags2 + 1);
  if ( *(&manager->klass->_2.bitflags2 + 1) < (unsigned int)v4
    || (CombineServantListViewManager_c *)manager->klass->_2.typeHierarchy[v4 - 1] != CombineServantListViewManager_TypeInfo )
  {
    sub_B77990(manager);
    goto LABEL_15;
  }
  if ( CombineServantListViewManager__IsDragStart((CombineServantListViewManager_o *)manager, 0LL) )
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
      sub_B7769C(manager, method);
    }
  }
}


void __fastcall CombineServantListViewObject__OnLongPush(
        CombineServantListViewObject_o *this,
        const MethodInfo *method)
{
  CombineServantListViewManager_o *manager; // x21
  CombineServantListViewObject_o *v3; // x19
  struct ListViewItem_o *linkItem; // x20
  void *v5; // x1
  __int64 v6; // x9
  __int64 v7; // x9
  int32_t sortIndex; // w19
  bool IsSelect; // w0

  v3 = this;
  if ( (byte_438DEA5 & 1) == 0 )
  {
    sub_B775C4(&CombineServantListViewItem_TypeInfo);
    sub_B775C4(&CombineServantListViewManager_TypeInfo);
    sub_B775C4(&StringLiteral_10205/*"OnLongPushListView"*/);
    this = (CombineServantListViewObject_o *)sub_B775C4(&StringLiteral_10223/*"OnPressCancel"*/);
    byte_438DEA5 = 1;
  }
  linkItem = v3->fields.linkItem;
  if ( linkItem )
  {
    v5 = CombineServantListViewItem_TypeInfo;
    v6 = *(&CombineServantListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v6
      && (CombineServantListViewItem_c *)linkItem->klass->_2.typeHierarchy[v6 - 1] == CombineServantListViewItem_TypeInfo )
    {
      manager = (CombineServantListViewManager_o *)v3->fields.manager;
      if ( !manager
        || (v5 = CombineServantListViewManager_TypeInfo,
            v7 = *(&CombineServantListViewManager_TypeInfo->_2.bitflags2 + 1),
            *(&manager->klass->_2.bitflags2 + 1) >= (unsigned int)v7)
        && (CombineServantListViewManager_c *)manager->klass->_2.typeHierarchy[v7 - 1] == CombineServantListViewManager_TypeInfo )
      {
        if ( (LODWORD(linkItem[1].klass) | 4) == 5 )
        {
          if ( manager )
          {
            if ( CombineServantListViewManager__IsDragEnable(
                   (CombineServantListViewManager_o *)v3->fields.manager,
                   (CombineServantListViewItem_o *)v3->fields.linkItem,
                   0LL) )
            {
              sortIndex = linkItem->fields.sortIndex;
              IsSelect = ListViewItem__get_IsSelect(linkItem, 0LL);
              CombineServantListViewManager__SetDragStart(manager, sortIndex, !IsSelect, 0LL);
            }
            return;
          }
        }
        else
        {
          this = (CombineServantListViewObject_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)v3,
                                                     0LL);
          if ( this )
          {
            UnityEngine_GameObject__SendMessage_41438608(
              (UnityEngine_GameObject_o *)this,
              (System_String_o *)StringLiteral_10223/*"OnPressCancel"*/,
              0LL);
            this = (CombineServantListViewObject_o *)v3->fields.manager;
            if ( this )
            {
              UnityEngine_Component__SendMessage(
                (UnityEngine_Component_o *)this,
                (System_String_o *)StringLiteral_10205/*"OnLongPushListView"*/,
                (Il2CppObject *)v3->fields.linkItem,
                0LL);
              return;
            }
          }
        }
LABEL_19:
        sub_B7769C(this, v5);
      }
    }
    else
    {
      sub_B77990(v3->fields.linkItem);
    }
    sub_B77990(manager);
    goto LABEL_19;
  }
}


void __fastcall CombineServantListViewObject__OnLongRelease(
        CombineServantListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *itemDrag; // x20
  __int64 v4; // x1
  UIDragDropListViewItem_o *manager; // x0
  __int64 v6; // x9

  if ( (byte_438DEA7 & 1) == 0 )
  {
    sub_B775C4(&CombineServantListViewManager_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&StringLiteral_10205/*"OnLongPushListView"*/);
    sub_B775C4(&StringLiteral_3686/*"CancelDragEnd"*/);
    byte_438DEA7 = 1;
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
      v6 = *(&CombineServantListViewManager_TypeInfo->_2.bitflags2 + 1);
      if ( *(&manager->klass->_2.bitflags2 + 1) >= (unsigned int)v6
        && (CombineServantListViewManager_c *)manager->klass->_2.typeHierarchy[v6 - 1] == CombineServantListViewManager_TypeInfo )
      {
        if ( *(&manager[8].fields.restriction + 1) )
          return;
        UnityEngine_Component__SendMessage_41419016(
          (UnityEngine_Component_o *)manager,
          (System_String_o *)StringLiteral_3686/*"CancelDragEnd"*/,
          0LL);
        manager = (UIDragDropListViewItem_o *)this->fields.manager;
        if ( manager )
        {
          UnityEngine_Component__SendMessage(
            (UnityEngine_Component_o *)manager,
            (System_String_o *)StringLiteral_10205/*"OnLongPushListView"*/,
            (Il2CppObject *)this->fields.linkItem,
            0LL);
          return;
        }
      }
      else
      {
        sub_B77990(manager);
      }
    }
LABEL_18:
    sub_B7769C(manager, v4);
  }
}


void __fastcall CombineServantListViewObject__SetInput(
        CombineServantListViewObject_o *this,
        bool isInput,
        const MethodInfo *method)
{
  CombineServantListViewItem_o *itemDraw; // x21
  void *v6; // x1
  struct ListViewManager_o *manager; // x0
  __int64 v8; // x9
  __int64 v9; // x9
  CombineServantListViewItemDraw_o *v10; // x20
  CombineServantListViewObject_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_438DE9E & 1) == 0 )
  {
    sub_B775C4(&CombineServantListViewItem_TypeInfo);
    sub_B775C4(&CombineServantListViewManager_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438DE9E = 1;
  }
  ListViewObject__SetInput((ListViewObject_o *)this, isInput, 0LL);
  itemDraw = (CombineServantListViewItem_o *)this->fields.itemDraw;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)itemDraw, 0LL, 0LL) )
  {
    manager = this->fields.manager;
    if ( manager
      && ((v6 = CombineServantListViewManager_TypeInfo,
           v8 = *(&CombineServantListViewManager_TypeInfo->_2.bitflags2 + 1),
           *(&manager->klass->_2.bitflags2 + 1) < (unsigned int)v8)
       || (CombineServantListViewManager_c *)manager->klass->_2.typeHierarchy[v8 - 1] != CombineServantListViewManager_TypeInfo) )
    {
      sub_B77990(manager);
    }
    else
    {
      itemDraw = (CombineServantListViewItem_o *)this->fields.linkItem;
      if ( !itemDraw
        || (v6 = CombineServantListViewItem_TypeInfo,
            v9 = *(&CombineServantListViewItem_TypeInfo->_2.bitflags2 + 1),
            *(&itemDraw->klass->_2.bitflags2 + 1) >= (unsigned int)v9)
        && (CombineServantListViewItem_c *)itemDraw->klass->_2.typeHierarchy[v9 - 1] == CombineServantListViewItem_TypeInfo )
      {
        if ( !manager
          || (v10 = this->fields.itemDraw,
              manager = (struct ListViewManager_o *)CombineServantListViewManager__IsSelectEnable(
                                                      (CombineServantListViewManager_o *)manager,
                                                      itemDraw,
                                                      0,
                                                      0,
                                                      0,
                                                      0LL),
              !v10) )
        {
          sub_B7769C(manager, v6);
        }
        CombineServantListViewItemDraw__SetInput(v10, itemDraw, (unsigned __int8)manager & isInput & 1, 0LL);
        return;
      }
    }
    sub_B77990(itemDraw);
    CombineServantListViewObject__IsCanDrag(v11, v12);
  }
}


void __fastcall CombineServantListViewObject__SetItem(
        CombineServantListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  ListViewObject__SetItem_34301308((ListViewObject_o *)this, item, seed, 0LL);
  this->fields.state = 0;
}


void __fastcall CombineServantListViewObject__SetItem_30410892(
        CombineServantListViewObject_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ListViewObject__SetItem((ListViewObject_o *)this, item, 0LL);
  this->fields.state = 0;
}


void __fastcall CombineServantListViewObject__SetupDisp(CombineServantListViewObject_o *this, const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x21
  CombineServantListViewManager_o *manager; // x20
  __int64 v5; // x9
  __int64 v6; // x9
  bool v7; // w1
  UnityEngine_Object_o *touchPress; // x22
  _BOOL8 IsSelectEnable; // x0
  __int64 v10; // x1
  struct UITouchPress_o *v11; // x8
  UnityEngine_Object_o *itemDraw; // x22
  CombineServantListViewItemDraw_o *v13; // x22
  int32_t dispMode; // w19
  CombineServantListViewObject_o *v15; // x0
  int32_t v16; // w1
  System_Action_o *v17; // x2
  const MethodInfo *v18; // x3
  long double v19; // q0

  if ( (byte_438DEA2 & 1) == 0 )
  {
    sub_B775C4(&CombineServantListViewItem_TypeInfo);
    sub_B775C4(&CombineServantListViewManager_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438DEA2 = 1;
  }
  manager = (CombineServantListViewManager_o *)this->fields.manager;
  if ( manager )
  {
    v5 = *(&CombineServantListViewManager_TypeInfo->_2.bitflags2 + 1);
    if ( *(&manager->klass->_2.bitflags2 + 1) < (unsigned int)v5
      || (CombineServantListViewManager_c *)manager->klass->_2.typeHierarchy[v5 - 1] != CombineServantListViewManager_TypeInfo )
    {
      sub_B77990(this->fields.manager);
      goto LABEL_28;
    }
  }
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    v6 = *(&CombineServantListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v6
      && (CombineServantListViewItem_c *)linkItem->klass->_2.typeHierarchy[v6 - 1] == CombineServantListViewItem_TypeInfo )
    {
      v7 = this->fields.dispMode != 0;
      goto LABEL_11;
    }
LABEL_28:
    v19 = sub_B77990(linkItem);
    CombineServantListViewObject__Init_30412892(v15, v16, v17, *(float *)&v19, v18);
    return;
  }
  v7 = 0;
LABEL_11:
  ListViewObject__SetVisible((ListViewObject_o *)this, v7, 0LL);
  touchPress = (UnityEngine_Object_o *)this->fields.touchPress;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  IsSelectEnable = UnityEngine_Object__op_Inequality(touchPress, 0LL, 0LL);
  if ( IsSelectEnable )
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
  IsSelectEnable = UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL);
  if ( IsSelectEnable )
  {
    if ( manager )
    {
      v13 = this->fields.itemDraw;
      dispMode = this->fields.dispMode;
      IsSelectEnable = CombineServantListViewManager__IsSelectEnable(
                         manager,
                         (CombineServantListViewItem_o *)linkItem,
                         0,
                         0,
                         0,
                         0LL);
      if ( v13 )
      {
        CombineServantListViewItemDraw__SetItem(
          v13,
          (CombineServantListViewItem_o *)linkItem,
          dispMode,
          IsSelectEnable,
          manager->fields.modeKind,
          0LL);
        return;
      }
    }
LABEL_26:
    sub_B7769C(IsSelectEnable, v10);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineServantListViewObject__Start(CombineServantListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( !this->fields.state )
  {
    zero = UnityEngine_Vector3__get_zero(0LL);
    CombineServantListViewObject__Init(this, 2, 0LL, zero.fields.x, *(UnityEngine_Vector3_o *)&zero.fields.y, v3);
  }
}


System_String_o *__fastcall CombineServantListViewObject__ToString(
        CombineServantListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x0
  __int64 v5; // x1
  __int64 v6; // x20
  System_String_o *v7; // x21
  int32_t *v8; // x0
  __int64 v9; // x9
  float z; // w10
  System_String_o *v11; // x0
  __int64 v13; // [xsp+0h] [xbp-30h] BYREF
  float v14; // [xsp+8h] [xbp-28h]
  UnityEngine_Vector3_o v15; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_438DEA3 & 1) == 0 )
  {
    sub_B775C4(&CombineServantListViewItemDraw_DispMode_TypeInfo);
    sub_B775C4(&StringLiteral_82/*" "*/);
    byte_438DEA3 = 1;
  }
  v14 = 0.0;
  v13 = 0LL;
  v4 = j_il2cpp_value_box_0(CombineServantListViewItemDraw_DispMode_TypeInfo, &this->fields.dispMode, v2);
  if ( !v4 )
    sub_B7769C(0LL, v5);
  v6 = v4;
  v7 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v4 + 360LL))(
                            v4,
                            *(_QWORD *)(*(_QWORD *)v4 + 368LL));
  v8 = (int32_t *)j_il2cpp_object_unbox_0(v6);
  v9 = *(_QWORD *)&this->fields.basePosition.fields.x;
  z = this->fields.basePosition.fields.z;
  this->fields.dispMode = *v8;
  v13 = v9;
  v14 = z;
  v11 = UnityEngine_Vector3__ToString(v15, (const MethodInfo *)&v13);
  return System_String__Concat_44904220(v7, (System_String_o *)StringLiteral_82/*" "*/, v11, 0LL);
}


void __fastcall CombineServantListViewObject__add_callbackFunc(
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

  if ( (byte_438DE99 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    byte_438DE99 = 1;
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
    v9 = sub_B6BFDC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B77990(v8);
  CombineServantListViewObject__remove_callbackFunc(v11, v12, v13);
}


void __fastcall CombineServantListViewObject__remove_callbackFunc(
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

  if ( (byte_438DE9A & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    byte_438DE9A = 1;
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
    v9 = sub_B6BFDC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B77990(v8);
  CombineServantListViewObject__Awake(v11, v12);
}