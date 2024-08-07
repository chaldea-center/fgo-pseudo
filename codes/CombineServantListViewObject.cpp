void __fastcall CombineServantListViewObject___ctor(CombineServantListViewObject_o *this, const MethodInfo *method)
{
  if ( (byte_4A02543 & 1) == 0 )
  {
    sub_1B64A00(&ListViewObject_TypeInfo, method);
    byte_4A02543 = 1;
  }
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  ListViewObject___ctor((ListViewObject_o *)this, 0LL);
}


void __fastcall CombineServantListViewObject__Awake(CombineServantListViewObject_o *this, const MethodInfo *method)
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

  if ( (byte_4A02536 & 1) == 0 )
  {
    sub_1B64A00(&Method_UnityEngine_Component_GetComponent_UIDragDropListViewItem___, method);
    sub_1B64A00(&Method_UnityEngine_GameObject_GetComponent_CombineServantListViewItemDraw___, v3);
    byte_4A02536 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1B64C5C(0LL, v4);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_2E8A7CC *)Method_UnityEngine_GameObject_GetComponent_CombineServantListViewItemDraw___);
  this->fields.itemDraw = (struct CombineServantListViewItemDraw_o *)Component_object;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.itemDraw, (int32_t)Component_object, v7, v8);
  v9 = UnityEngine_Component__GetComponent_object_(
         (UnityEngine_Component_o *)this,
         (const MethodInfo_2E32784 *)Method_UnityEngine_Component_GetComponent_UIDragDropListViewItem___);
  this->fields.itemDrag = (struct UIDragDropListViewItem_o *)v9;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.itemDrag, (int32_t)v9, v10, v11);
}


UnityEngine_GameObject_o *__fastcall CombineServantListViewObject__CreateDragObject(
        CombineServantListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *DragObject; // x19
  Il2CppObject *Component_object; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_4A0253B & 1) == 0 )
  {
    sub_1B64A00(&Method_UnityEngine_GameObject_GetComponent_CombineServantListViewObject___, method);
    sub_1B64A00(&UnityEngine_Object_TypeInfo, v3);
    byte_4A0253B = 1;
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
                               (const MethodInfo_2E8A7CC *)Method_UnityEngine_GameObject_GetComponent_CombineServantListViewObject___)) == 0LL )
    {
      sub_1B64C5C(Component_object, v6);
    }
    CombineServantListViewObject__Init_44838152((CombineServantListViewObject_o *)Component_object, 2, v7);
  }
  return (UnityEngine_GameObject_o *)DragObject;
}


CombineServantListViewItem_o *__fastcall CombineServantListViewObject__GetItem(
        CombineServantListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x11

  if ( (byte_4A02538 & 1) == 0 )
  {
    sub_1B64A00(&CombineServantListViewItem_TypeInfo, method);
    byte_4A02538 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0LL;
  methodPtr_low = LOBYTE(CombineServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
    return 0LL;
  if ( (CombineServantListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == CombineServantListViewItem_TypeInfo )
    return (CombineServantListViewItem_o *)this->fields.linkItem;
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_4A0253C & 1) == 0 )
  {
    sub_1B64A00(&CombineServantListViewItem_TypeInfo, *(_QWORD *)&initMode);
    byte_4A0253C = 1;
  }
  linkItem = this->fields.linkItem;
  dispMode = this->fields.dispMode;
  state = this->fields.state;
  if ( !linkItem )
    goto LABEL_7;
  methodPtr_low = LOBYTE(CombineServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (v13 = initMode,
        (CombineServantListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] != CombineServantListViewItem_TypeInfo) )
  {
    sub_1B64F1C(linkItem);
LABEL_7:
    v13 = 0;
  }
  v14 = initMode == 4;
  v15 = state == 0;
  ListViewObject__SetVisible((ListViewObject_o *)this, v13 != 0, 0LL);
  ((void (__fastcall *)(CombineServantListViewObject_o *, bool, Il2CppMethodPointer))this->klass->vtable._9_SetInput.method)(
    this,
    v13 == 3,
    this->klass->vtable._10_Invalidation.methodPtr);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0LL),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_1B64C5C(transform, v17);
  }
  v18 = v14 || v15;
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0LL);
  this->fields.callbackFunc = callbackFunc;
  p_callbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, (int32_t)callbackFunc, v20, v21);
  if ( (unsigned int)v13 <= 4 )
  {
    v25 = dword_BDE4B0[v13];
    this->fields.dispMode = dword_BDE49C[v13];
    this->fields.state = v25;
  }
  if ( v18 || dispMode != this->fields.dispMode )
    CombineServantListViewObject__SetupDisp(this, v22);
  klass = p_callbackFunc->klass;
  if ( p_callbackFunc->klass )
  {
    p_callbackFunc->klass = 0LL;
    sub_1B649A4(p_callbackFunc, 0, v23, v24);
    ((void (__fastcall *)(Il2CppClass *, _QWORD))klass->_1.namespaze)(
      klass->_1.element_class,
      *(_QWORD *)&klass->_1.byval_arg.bits);
  }
}


void __fastcall CombineServantListViewObject__InitItem(CombineServantListViewObject_o *this, const MethodInfo *method)
{
  this->fields.state = 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineServantListViewObject__Init_44838152(
        CombineServantListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  float v4; // s0
  int v5; // s1

  if ( !byte_49F9821 )
  {
    sub_1B64A00(&UnityEngine_Vector3_TypeInfo, *(_QWORD *)&initMode);
    byte_49F9821 = 1;
  }
  CombineServantListViewObject__Init(this, initMode, 0LL, v4, *(UnityEngine_Vector3_o *)&v5, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineServantListViewObject__Init_44840632(
        CombineServantListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        const MethodInfo *method)
{
  int v5; // s1

  if ( !byte_49F9821 )
  {
    sub_1B64A00(&UnityEngine_Vector3_TypeInfo, *(_QWORD *)&initMode);
    byte_49F9821 = 1;
  }
  CombineServantListViewObject__Init(this, initMode, callbackFunc, delay, *(UnityEngine_Vector3_o *)&v5, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineServantListViewObject__Init_44840716(
        CombineServantListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  float v4; // s0
  int v5; // s1

  if ( !byte_49F9821 )
  {
    sub_1B64A00(&UnityEngine_Vector3_TypeInfo, *(_QWORD *)&initMode);
    byte_49F9821 = 1;
  }
  CombineServantListViewObject__Init(this, initMode, callbackFunc, v4, *(UnityEngine_Vector3_o *)&v5, method);
}


bool __fastcall CombineServantListViewObject__IsCanDrag(CombineServantListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  UITouchPress_o *manager; // x0
  __int64 methodPtr_low; // x9
  struct ListViewItem_o *linkItem; // x1
  __int64 v9; // x10
  UnityEngine_Object_o *touchPress; // x20
  CombineServantListViewObject_o *v12; // x0
  const MethodInfo *v13; // x1

  if ( (byte_4A0253A & 1) == 0 )
  {
    sub_1B64A00(&CombineServantListViewItem_TypeInfo, method);
    sub_1B64A00(&CombineServantListViewManager_TypeInfo, v4);
    sub_1B64A00(&UnityEngine_Object_TypeInfo, v5);
    byte_4A0253A = 1;
  }
  manager = (UITouchPress_o *)this->fields.manager;
  if ( !manager )
    goto LABEL_19;
  methodPtr_low = LOBYTE(CombineServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(manager->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (CombineServantListViewManager_c *)manager->klass->_2.typeHierarchy[methodPtr_low - 1] != CombineServantListViewManager_TypeInfo )
  {
    sub_1B64F1C(manager);
    goto LABEL_19;
  }
  if ( (*(_DWORD *)&manager[12].fields.isCancel & 0x80000000) != 0 )
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
    sub_1B64C5C(manager, method);
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem
    || (v9 = LOBYTE(CombineServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v9)
    && (CombineServantListViewItem_c *)linkItem->klass->_2.typeHierarchy[v9 - 1] == CombineServantListViewItem_TypeInfo )
  {
    if ( CombineServantListViewManager__IsDragEnable(
           (CombineServantListViewManager_o *)manager,
           (CombineServantListViewItem_o *)linkItem,
           v2) )
    {
      return 1;
    }
    goto LABEL_12;
  }
  sub_1B64F1C(this->fields.linkItem);
  return (unsigned __int8)CombineServantListViewObject__CreateDragObject(v12, v13);
}


void __fastcall CombineServantListViewObject__OnClickSelect(
        CombineServantListViewObject_o *this,
        const MethodInfo *method)
{
  CombineServantListViewManager_o *manager; // x21
  CombineServantListViewObject_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  CombineServantListViewItem_o *linkItem; // x20
  CombineServantListViewItem_c *v10; // x1
  __int64 methodPtr_low; // x9
  __int64 v12; // x9
  int32_t modeKind; // w8
  int64_t v14; // x0
  const MethodInfo *v15; // x2
  bool v16; // w21
  _QWORD *v17; // x8
  System_Reflection_MethodBase_o *v18; // x0
  const MethodInfo *v19; // x1
  _QWORD *v20; // x0
  int64_t UserSvtId; // x0
  const MethodInfo *v22; // x2
  bool v23; // w21
  _QWORD *v24; // x8
  __int64 *v25; // x8
  _QWORD *v26; // x0
  int32_t v27; // w20
  System_Reflection_MethodBase_o *v28; // x0

  v3 = this;
  if ( (byte_4A0253F & 1) == 0 )
  {
    sub_1B64A00(&CombineServantListViewItem_TypeInfo, method);
    sub_1B64A00(&CombineServantListViewManager_TypeInfo, v4);
    sub_1B64A00(&Method_CombineServantListViewObject_OnClickSelect__, v5);
    sub_1B64A00(&StringLiteral_9820/*"OnClickSelectBase"*/, v6);
    sub_1B64A00(&StringLiteral_9822/*"OnClickSelectMaterial"*/, v7);
    this = (CombineServantListViewObject_o *)sub_1B64A00(&StringLiteral_9824/*"OnClickSelectPush"*/, v8);
    byte_4A0253F = 1;
  }
  linkItem = (CombineServantListViewItem_o *)v3->fields.linkItem;
  if ( linkItem )
  {
    v10 = CombineServantListViewItem_TypeInfo;
    methodPtr_low = LOBYTE(CombineServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
      && (CombineServantListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == CombineServantListViewItem_TypeInfo )
    {
      manager = (CombineServantListViewManager_o *)v3->fields.manager;
      if ( !manager )
        goto LABEL_52;
      v12 = LOBYTE(CombineServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(manager->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v12
        && (CombineServantListViewManager_c *)manager->klass->_2.typeHierarchy[v12 - 1] == CombineServantListViewManager_TypeInfo )
      {
        ListViewManager__ClearScrollBarValue(v3->fields.manager, 0, 0LL);
        modeKind = manager->fields.modeKind;
        if ( modeKind != 3 )
        {
          if ( modeKind == 2 )
          {
            UserSvtId = CombineServantListViewItem__get_UserSvtId(linkItem, 0LL);
            v23 = CombineServantListViewManager__CheckIsMaterialSelectSvt(manager, UserSvtId, v22);
            v24 = Method_CombineServantListViewObject_OnClickSelect__;
            if ( (*((_BYTE *)Method_CombineServantListViewObject_OnClickSelect__ + 83) & 2) != 0 )
              v24 = (_QWORD *)sub_1B64A18(Method_CombineServantListViewObject_OnClickSelect__);
            v18 = (System_Reflection_MethodBase_o *)sub_1B649E4(v24, v24[4]);
            if ( !v23 )
            {
              OverwriteAssetSoundName__PlaySystemSe(v18, 0, 0LL);
              CombineServantListViewItem__SwapChoice(linkItem, 0LL);
              goto LABEL_33;
            }
LABEL_23:
            OverwriteAssetSoundName__PlaySystemSe(v18, 2, 0LL);
            return;
          }
          if ( modeKind == 1 )
          {
            v14 = CombineServantListViewItem__get_UserSvtId(linkItem, 0LL);
            v16 = CombineServantListViewManager__CheckIsMaterialSelectSvt(manager, v14, v15);
            v17 = Method_CombineServantListViewObject_OnClickSelect__;
            if ( (*((_BYTE *)Method_CombineServantListViewObject_OnClickSelect__ + 83) & 2) != 0 )
              v17 = (_QWORD *)sub_1B64A18(Method_CombineServantListViewObject_OnClickSelect__);
            v18 = (System_Reflection_MethodBase_o *)sub_1B649E4(v17, v17[4]);
            if ( !v16 )
            {
              OverwriteAssetSoundName__PlaySystemSe(v18, 11, 0LL);
              CombineServantListViewItem__SwapLock(linkItem, 0LL);
LABEL_33:
              CombineServantListViewObject__SetupDisp(v3, v19);
              return;
            }
            goto LABEL_23;
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
                  v25 = &StringLiteral_9820/*"OnClickSelectBase"*/;
LABEL_31:
                  UnityEngine_Component__SendMessage(
                    (UnityEngine_Component_o *)this,
                    (System_String_o *)*v25,
                    (Il2CppObject *)v3,
                    0LL);
                  return;
                }
                goto LABEL_52;
              }
              if ( !CombineServantListViewItem__get_IsCanNotBaseSelect(linkItem, 0LL) )
                return;
              goto LABEL_17;
            case 1:
            case 5:
              if ( CombineServantListViewItem__get_IsCanNotSelect(linkItem, 0LL) )
                goto LABEL_17;
              if ( linkItem->fields.isMaterialSvt )
              {
                linkItem->fields.isMaterialSvt = 0;
                v26 = Method_CombineServantListViewObject_OnClickSelect__;
                if ( (*((_BYTE *)Method_CombineServantListViewObject_OnClickSelect__ + 83) & 2) != 0 )
                  v26 = (_QWORD *)sub_1B64A18(Method_CombineServantListViewObject_OnClickSelect__);
                v27 = 1;
              }
              else
              {
                v26 = Method_CombineServantListViewObject_OnClickSelect__;
                if ( linkItem->fields.isMaxSelect )
                {
                  if ( (*((_BYTE *)Method_CombineServantListViewObject_OnClickSelect__ + 83) & 2) != 0 )
                    v26 = (_QWORD *)sub_1B64A18(Method_CombineServantListViewObject_OnClickSelect__);
                  v27 = 2;
                }
                else
                {
                  if ( (*((_BYTE *)Method_CombineServantListViewObject_OnClickSelect__ + 83) & 2) != 0 )
                    v26 = (_QWORD *)sub_1B64A18(Method_CombineServantListViewObject_OnClickSelect__);
                  v27 = 0;
                }
              }
              v28 = (System_Reflection_MethodBase_o *)sub_1B649E4(v26, v26[4]);
              OverwriteAssetSoundName__PlaySystemSe(v28, v27, 0LL);
              this = (CombineServantListViewObject_o *)v3->fields.manager;
              if ( !this )
                goto LABEL_52;
              v25 = &StringLiteral_9822/*"OnClickSelectMaterial"*/;
              goto LABEL_31;
            default:
              return;
          }
        }
        if ( CombineServantListViewItem__get_IsCanNotSelectPush(linkItem, 0LL) )
        {
LABEL_17:
          v20 = Method_CombineServantListViewObject_OnClickSelect__;
          if ( (*((_BYTE *)Method_CombineServantListViewObject_OnClickSelect__ + 83) & 2) != 0 )
            v20 = (_QWORD *)sub_1B64A18(Method_CombineServantListViewObject_OnClickSelect__);
          v18 = (System_Reflection_MethodBase_o *)sub_1B649E4(v20, v20[4]);
          goto LABEL_23;
        }
        this = (CombineServantListViewObject_o *)v3->fields.manager;
        if ( this )
        {
          v25 = &StringLiteral_9824/*"OnClickSelectPush"*/;
          goto LABEL_31;
        }
LABEL_52:
        sub_1B64C5C(this, v10);
      }
    }
    else
    {
      sub_1B64F1C(v3->fields.linkItem);
    }
    sub_1B64F1C(manager);
    goto LABEL_52;
  }
}


void __fastcall CombineServantListViewObject__OnDestroy(CombineServantListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  ServantStatusBattleListViewItem_o *p_dragObject; // x19
  UnityEngine_Object_o *v5; // x20
  struct UnityEngine_GameObject_o *dragObject; // t1
  UnityEngine_Object_o *klass; // x20
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_4A02537 & 1) == 0 )
  {
    sub_1B64A00(&NGUITools_TypeInfo, method);
    sub_1B64A00(&UnityEngine_Object_TypeInfo, v3);
    byte_4A02537 = 1;
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
    sub_1B649A4(p_dragObject, 0, v8, v9);
  }
}


void __fastcall CombineServantListViewObject__OnDragDropStart(
        CombineServantListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UITouchPress_o *manager; // x0
  __int64 methodPtr_low; // x9
  UnityEngine_Object_o *touchPress; // x20

  if ( (byte_4A02541 & 1) == 0 )
  {
    sub_1B64A00(&CombineServantListViewManager_TypeInfo, method);
    sub_1B64A00(&UnityEngine_Object_TypeInfo, v3);
    byte_4A02541 = 1;
  }
  manager = (UITouchPress_o *)this->fields.manager;
  if ( !manager )
    goto LABEL_14;
  methodPtr_low = LOBYTE(CombineServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(manager->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (CombineServantListViewManager_c *)manager->klass->_2.typeHierarchy[methodPtr_low - 1] != CombineServantListViewManager_TypeInfo )
  {
    sub_1B64F1C(manager);
    goto LABEL_14;
  }
  if ( (*(_DWORD *)&manager[12].fields.isCancel & 0x80000000) == 0 )
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
      sub_1B64C5C(manager, method);
    }
  }
}


void __fastcall CombineServantListViewObject__OnLongPush(
        CombineServantListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  CombineServantListViewObject_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct ListViewItem_o *linkItem; // x20
  void *v8; // x1
  __int64 methodPtr_low; // x9
  CombineServantListViewManager_o *manager; // x21
  __int64 v11; // x9
  int32_t sortIndex; // w19
  bool IsSelect; // w0
  const MethodInfo *v14; // x3
  CombineServantListViewObject_o *v15; // x0
  const MethodInfo *v16; // x1

  v3 = this;
  if ( (byte_4A02540 & 1) == 0 )
  {
    sub_1B64A00(&CombineServantListViewItem_TypeInfo, method);
    sub_1B64A00(&CombineServantListViewManager_TypeInfo, v4);
    sub_1B64A00(&StringLiteral_9878/*"OnLongPushListView"*/, v5);
    this = (CombineServantListViewObject_o *)sub_1B64A00(&StringLiteral_9897/*"OnPressCancel"*/, v6);
    byte_4A02540 = 1;
  }
  linkItem = v3->fields.linkItem;
  if ( linkItem )
  {
    v8 = CombineServantListViewItem_TypeInfo;
    methodPtr_low = LOBYTE(CombineServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
      && (CombineServantListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == CombineServantListViewItem_TypeInfo )
    {
      manager = (CombineServantListViewManager_o *)v3->fields.manager;
      if ( manager )
      {
        v8 = CombineServantListViewManager_TypeInfo;
        v11 = LOBYTE(CombineServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(manager->klass->vtable._0_Equals.methodPtr) < (unsigned int)v11
          || (CombineServantListViewManager_c *)manager->klass->_2.typeHierarchy[v11 - 1] != CombineServantListViewManager_TypeInfo )
        {
          sub_1B64F1C(v3->fields.manager);
          CombineServantListViewObject__OnDragDropStart(v15, v16);
          return;
        }
      }
      if ( (LODWORD(linkItem[1].klass) | 4) == 5 )
      {
        if ( manager )
        {
          if ( CombineServantListViewManager__IsDragEnable(
                 (CombineServantListViewManager_o *)v3->fields.manager,
                 (CombineServantListViewItem_o *)v3->fields.linkItem,
                 v2) )
          {
            sortIndex = linkItem->fields.sortIndex;
            IsSelect = ListViewItem__get_IsSelect(linkItem, 0LL);
            CombineServantListViewManager__SetDragStart(manager, sortIndex, !IsSelect, v14);
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
          UnityEngine_GameObject__SendMessage_69118936(
            (UnityEngine_GameObject_o *)this,
            (System_String_o *)StringLiteral_9897/*"OnPressCancel"*/,
            0LL);
          this = (CombineServantListViewObject_o *)v3->fields.manager;
          if ( this )
          {
            UnityEngine_Component__SendMessage(
              (UnityEngine_Component_o *)this,
              (System_String_o *)StringLiteral_9878/*"OnLongPushListView"*/,
              (Il2CppObject *)v3->fields.linkItem,
              0LL);
            return;
          }
        }
      }
    }
    else
    {
      sub_1B64F1C(v3->fields.linkItem);
    }
    sub_1B64C5C(this, v8);
  }
}


void __fastcall CombineServantListViewObject__OnLongRelease(
        CombineServantListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_Object_o *itemDrag; // x20
  __int64 v7; // x1
  UIDragDropListViewItem_o *manager; // x0
  __int64 methodPtr_low; // x9

  if ( (byte_4A02542 & 1) == 0 )
  {
    sub_1B64A00(&CombineServantListViewManager_TypeInfo, method);
    sub_1B64A00(&UnityEngine_Object_TypeInfo, v3);
    sub_1B64A00(&StringLiteral_9878/*"OnLongPushListView"*/, v4);
    sub_1B64A00(&StringLiteral_4033/*"CancelDragEnd"*/, v5);
    byte_4A02542 = 1;
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
      methodPtr_low = LOBYTE(CombineServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(manager->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
        && (CombineServantListViewManager_c *)manager->klass->_2.typeHierarchy[methodPtr_low - 1] == CombineServantListViewManager_TypeInfo )
      {
        if ( HIDWORD(manager[7].fields.mListViewObject) )
          return;
        UnityEngine_Component__SendMessage_69108716(
          (UnityEngine_Component_o *)manager,
          (System_String_o *)StringLiteral_4033/*"CancelDragEnd"*/,
          0LL);
        manager = (UIDragDropListViewItem_o *)this->fields.manager;
        if ( manager )
        {
          UnityEngine_Component__SendMessage(
            (UnityEngine_Component_o *)manager,
            (System_String_o *)StringLiteral_9878/*"OnLongPushListView"*/,
            (Il2CppObject *)this->fields.linkItem,
            0LL);
          return;
        }
      }
      else
      {
        sub_1B64F1C(manager);
      }
    }
LABEL_17:
    sub_1B64C5C(manager, v7);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineServantListViewObject__SetInput(
        CombineServantListViewObject_o *this,
        bool isInput,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  CombineServantListViewItem_o *itemDraw; // x21
  void *v8; // x1
  const MethodInfo *v9; // x5
  struct ListViewManager_o *manager; // x0
  __int64 v11; // x9
  __int64 methodPtr_low; // x9
  CombineServantListViewItemDraw_o *v13; // x20
  CombineServantListViewObject_o *v14; // x0
  const MethodInfo *v15; // x1

  if ( (byte_4A02539 & 1) == 0 )
  {
    sub_1B64A00(&CombineServantListViewItem_TypeInfo, isInput);
    sub_1B64A00(&CombineServantListViewManager_TypeInfo, v5);
    sub_1B64A00(&UnityEngine_Object_TypeInfo, v6);
    byte_4A02539 = 1;
  }
  ListViewObject__SetInput((ListViewObject_o *)this, isInput, 0LL);
  itemDraw = (CombineServantListViewItem_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)itemDraw, 0LL, 0LL) )
  {
    manager = this->fields.manager;
    if ( manager
      && ((v8 = CombineServantListViewManager_TypeInfo,
           v11 = LOBYTE(CombineServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr),
           LOBYTE(manager->klass->vtable._0_Equals.methodPtr) < (unsigned int)v11)
       || (CombineServantListViewManager_c *)manager->klass->_2.typeHierarchy[v11 - 1] != CombineServantListViewManager_TypeInfo) )
    {
      sub_1B64F1C(manager);
    }
    else
    {
      itemDraw = (CombineServantListViewItem_o *)this->fields.linkItem;
      if ( !itemDraw
        || (v8 = CombineServantListViewItem_TypeInfo,
            methodPtr_low = LOBYTE(CombineServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
            LOBYTE(itemDraw->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low)
        && (CombineServantListViewItem_c *)itemDraw->klass->_2.typeHierarchy[methodPtr_low - 1] == CombineServantListViewItem_TypeInfo )
      {
        if ( !manager
          || (v13 = this->fields.itemDraw,
              manager = (struct ListViewManager_o *)CombineServantListViewManager__IsSelectEnable(
                                                      (CombineServantListViewManager_o *)manager,
                                                      itemDraw,
                                                      0,
                                                      0,
                                                      0,
                                                      v9),
              !v13) )
        {
          sub_1B64C5C(manager, v8);
        }
        CombineServantListViewItemDraw__SetInput(v13, itemDraw, (unsigned __int8)manager & isInput & 1, 0LL);
        return;
      }
    }
    sub_1B64F1C(itemDraw);
    CombineServantListViewObject__IsCanDrag(v14, v15);
  }
}


void __fastcall CombineServantListViewObject__SetItem(
        CombineServantListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  ListViewObject__SetItem_40424740((ListViewObject_o *)this, item, seed, 0LL);
  this->fields.state = 0;
}


void __fastcall CombineServantListViewObject__SetItem_44877620(
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
  __int64 v4; // x1
  __int64 v5; // x1
  CombineServantListViewManager_o *manager; // x20
  __int64 methodPtr_low; // x9
  __int64 v8; // x9
  bool v9; // w1
  UnityEngine_Object_o *touchPress; // x22
  _BOOL8 IsSelectEnable; // x0
  __int64 v12; // x1
  struct UITouchPress_o *v13; // x8
  UnityEngine_Object_o *itemDraw; // x22
  const MethodInfo *v15; // x5
  CombineServantListViewItemDraw_o *v16; // x22
  int32_t dispMode; // w19
  CombineServantListViewManager_o *v18; // x0
  int32_t v19; // w1
  bool v20; // w2
  const MethodInfo *v21; // x3

  if ( (byte_4A0253D & 1) == 0 )
  {
    sub_1B64A00(&CombineServantListViewItem_TypeInfo, method);
    sub_1B64A00(&CombineServantListViewManager_TypeInfo, v4);
    sub_1B64A00(&UnityEngine_Object_TypeInfo, v5);
    byte_4A0253D = 1;
  }
  manager = (CombineServantListViewManager_o *)this->fields.manager;
  if ( manager )
  {
    methodPtr_low = LOBYTE(CombineServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(manager->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (CombineServantListViewManager_c *)manager->klass->_2.typeHierarchy[methodPtr_low - 1] != CombineServantListViewManager_TypeInfo )
    {
      sub_1B64F1C(this->fields.manager);
      goto LABEL_26;
    }
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
  {
    v9 = 0;
    goto LABEL_11;
  }
  v8 = LOBYTE(CombineServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)v8
    || (CombineServantListViewItem_c *)linkItem->klass->_2.typeHierarchy[v8 - 1] != CombineServantListViewItem_TypeInfo )
  {
LABEL_26:
    sub_1B64F1C(linkItem);
    CombineServantListViewManager__SetDragStart(v18, v19, v20, v21);
    return;
  }
  v9 = this->fields.dispMode != 0;
LABEL_11:
  ListViewObject__SetVisible((ListViewObject_o *)this, v9, 0LL);
  touchPress = (UnityEngine_Object_o *)this->fields.touchPress;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  IsSelectEnable = UnityEngine_Object__op_Inequality(touchPress, 0LL, 0LL);
  if ( IsSelectEnable )
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
  IsSelectEnable = UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL);
  if ( IsSelectEnable )
  {
    if ( manager )
    {
      v16 = this->fields.itemDraw;
      dispMode = this->fields.dispMode;
      IsSelectEnable = CombineServantListViewManager__IsSelectEnable(
                         manager,
                         (CombineServantListViewItem_o *)linkItem,
                         0,
                         0,
                         0,
                         v15);
      if ( v16 )
      {
        CombineServantListViewItemDraw__SetItem(
          v16,
          (CombineServantListViewItem_o *)linkItem,
          dispMode,
          IsSelectEnable,
          manager->fields.modeKind,
          0LL);
        return;
      }
    }
LABEL_24:
    sub_1B64C5C(IsSelectEnable, v12);
  }
}


void __fastcall CombineServantListViewObject__Start(CombineServantListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.state )
    CombineServantListViewObject__Init_44838152(this, 2, v2);
}


System_String_o *__fastcall CombineServantListViewObject__ToString(
        CombineServantListViewObject_o *this,
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

  if ( (byte_4A0253E & 1) == 0 )
  {
    sub_1B64A00(&CombineServantListViewItemDraw_DispMode_TypeInfo, method);
    sub_1B64A00(&StringLiteral_117/*" "*/, v3);
    byte_4A0253E = 1;
  }
  v12 = 0.0;
  v11 = 0LL;
  v9.klass = (System_Enum_c *)CombineServantListViewItemDraw_DispMode_TypeInfo;
  v9.monitor = (void *)-1LL;
  dispMode = this->fields.dispMode;
  v4 = System_Enum__ToString(&v9, 0LL);
  z = this->fields.basePosition.fields.z;
  v6 = v4;
  v11 = *(_QWORD *)&this->fields.basePosition.fields.x;
  v12 = z;
  v7 = (System_String_o *)sub_1D8E8C0(&v11, 0LL, 0LL, 0LL);
  return System_String__Concat_61396396(v6, (System_String_o *)StringLiteral_117/*" "*/, v7, 0LL);
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

  if ( (byte_4A02534 & 1) == 0 )
  {
    sub_1B64A00(&System_Action_TypeInfo, value);
    byte_4A02534 = 1;
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
    v9 = sub_1B9FEF0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1B64F1C(v8);
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

  if ( (byte_4A02535 & 1) == 0 )
  {
    sub_1B64A00(&System_Action_TypeInfo, value);
    byte_4A02535 = 1;
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
    v9 = sub_1B9FEF0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1B64F1C(v8);
  CombineServantListViewObject__Awake(v11, v12);
}