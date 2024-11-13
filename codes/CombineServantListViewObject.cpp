void __fastcall CombineServantListViewObject___ctor(CombineServantListViewObject_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B19E2E & 1) == 0 )
  {
    sub_1BCA7E0(&ListViewObject_TypeInfo, method, v2);
    byte_4B19E2E = 1;
  }
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo, method);
  ListViewObject___ctor((ListViewObject_o *)this, 0LL);
}


void __fastcall CombineServantListViewObject__Awake(CombineServantListViewObject_o *this, const MethodInfo *method)
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

  if ( (byte_4B19E21 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UIDragDropListViewItem___, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_CombineServantListViewItemDraw___, v4, v5);
    byte_4B19E21 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1BCAA3C(0LL, v6);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_CombineServantListViewItemDraw___);
  this->fields.itemDraw = (struct CombineServantListViewItemDraw_o *)Component_object;
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


UnityEngine_GameObject_o *__fastcall CombineServantListViewObject__CreateDragObject(
        CombineServantListViewObject_o *this,
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

  if ( (byte_4B19E26 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_CombineServantListViewObject___, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    byte_4B19E26 = 1;
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
                               (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_CombineServantListViewObject___)) == 0LL )
    {
      sub_1BCAA3C(Component_object, v9);
    }
    CombineServantListViewObject__Init_46136612((CombineServantListViewObject_o *)Component_object, 2, v10);
  }
  return (UnityEngine_GameObject_o *)DragObject;
}


CombineServantListViewItem_o *__fastcall CombineServantListViewObject__GetItem(
        CombineServantListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x11

  if ( (byte_4B19E23 & 1) == 0 )
  {
    sub_1BCA7E0(&CombineServantListViewItem_TypeInfo, method, v2);
    byte_4B19E23 = 1;
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
  unsigned int v13; // w23
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

  if ( (byte_4B19E27 & 1) == 0 )
  {
    sub_1BCA7E0(&CombineServantListViewItem_TypeInfo, *(_QWORD *)&initMode, callbackFunc);
    byte_4B19E27 = 1;
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
    sub_1BCACFC(linkItem);
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
  if ( v13 <= 4 )
  {
    v33 = dword_C0B444[v13];
    this->fields.dispMode = dword_C0B430[v13];
    this->fields.state = v33;
  }
  if ( v18 || dispMode != this->fields.dispMode )
    CombineServantListViewObject__SetupDisp(this, v26);
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


void __fastcall CombineServantListViewObject__InitItem(CombineServantListViewObject_o *this, const MethodInfo *method)
{
  this->fields.state = 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineServantListViewObject__Init_46136612(
        CombineServantListViewObject_o *this,
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
  CombineServantListViewObject__Init(this, initMode, 0LL, v4, *(UnityEngine_Vector3_o *)&v5, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineServantListViewObject__Init_46138816(
        CombineServantListViewObject_o *this,
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
  CombineServantListViewObject__Init(this, initMode, callbackFunc, delay, *(UnityEngine_Vector3_o *)&v5, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineServantListViewObject__Init_46138900(
        CombineServantListViewObject_o *this,
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
  CombineServantListViewObject__Init(this, initMode, callbackFunc, v4, *(UnityEngine_Vector3_o *)&v5, method);
}


bool __fastcall CombineServantListViewObject__IsCanDrag(CombineServantListViewObject_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  CombineServantListViewObject_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  CombineServantListViewManager_o *manager; // x20
  __int64 methodPtr_low; // x9
  __int64 v10; // x1
  CombineServantListViewItem_o *linkItem; // x1
  __int64 v12; // x10
  UnityEngine_Object_o *touchPress; // x20
  CombineServantListViewObject_o *v15; // x0
  const MethodInfo *v16; // x1

  v3 = this;
  if ( (byte_4B19E25 & 1) == 0 )
  {
    sub_1BCA7E0(&CombineServantListViewItem_TypeInfo, method, v2);
    sub_1BCA7E0(&CombineServantListViewManager_TypeInfo, v4, v5);
    this = (CombineServantListViewObject_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v6, v7);
    byte_4B19E25 = 1;
  }
  manager = (CombineServantListViewManager_o *)v3->fields.manager;
  if ( !manager )
    goto LABEL_19;
  methodPtr_low = LOBYTE(CombineServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(manager->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (CombineServantListViewManager_c *)manager->klass->_2.typeHierarchy[methodPtr_low - 1] != CombineServantListViewManager_TypeInfo )
  {
    sub_1BCACFC(v3->fields.manager);
    goto LABEL_19;
  }
  if ( !CombineServantListViewManager__IsDragStart((CombineServantListViewManager_o *)v3->fields.manager, 0LL) )
  {
LABEL_12:
    touchPress = (UnityEngine_Object_o *)v3->fields.touchPress;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
    if ( !UnityEngine_Object__op_Inequality(touchPress, 0LL, 0LL) )
      return 0;
    this = (CombineServantListViewObject_o *)v3->fields.touchPress;
    if ( this )
    {
      UITouchPress__PressReset((UITouchPress_o *)this, 0LL);
      return 0;
    }
LABEL_19:
    sub_1BCAA3C(this, method);
  }
  linkItem = (CombineServantListViewItem_o *)v3->fields.linkItem;
  if ( !linkItem
    || (v12 = LOBYTE(CombineServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v12)
    && (CombineServantListViewItem_c *)linkItem->klass->_2.typeHierarchy[v12 - 1] == CombineServantListViewItem_TypeInfo )
  {
    if ( CombineServantListViewManager__IsDragEnable(manager, linkItem, 0LL) )
      return 1;
    goto LABEL_12;
  }
  sub_1BCACFC(v3->fields.linkItem);
  return (unsigned __int8)CombineServantListViewObject__CreateDragObject(v15, v16);
}


void __fastcall CombineServantListViewObject__OnClickSelect(
        CombineServantListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  CombineServantListViewManager_o *manager; // x21
  CombineServantListViewObject_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  CombineServantListViewItem_o *linkItem; // x20
  CombineServantListViewItem_c *v16; // x1
  __int64 methodPtr_low; // x9
  __int64 v18; // x9
  int32_t modeKind; // w8
  int64_t v20; // x0
  bool v21; // w21
  _QWORD *v22; // x8
  System_Reflection_MethodBase_o *v23; // x0
  const MethodInfo *v24; // x1
  _QWORD *v25; // x0
  int64_t UserSvtId; // x0
  bool v27; // w21
  _QWORD *v28; // x8
  __int64 *v29; // x8
  _QWORD *v30; // x0
  int32_t v31; // w20
  System_Reflection_MethodBase_o *v32; // x0

  v4 = this;
  if ( (byte_4B19E2A & 1) == 0 )
  {
    sub_1BCA7E0(&CombineServantListViewItem_TypeInfo, method, v2);
    sub_1BCA7E0(&CombineServantListViewManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_CombineServantListViewObject_OnClickSelect__, v7, v8);
    sub_1BCA7E0(&StringLiteral_9996/*"OnClickSelectBase"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_9998/*"OnClickSelectMaterial"*/, v11, v12);
    this = (CombineServantListViewObject_o *)sub_1BCA7E0(&StringLiteral_10000/*"OnClickSelectPush"*/, v13, v14);
    byte_4B19E2A = 1;
  }
  linkItem = (CombineServantListViewItem_o *)v4->fields.linkItem;
  if ( linkItem )
  {
    v16 = CombineServantListViewItem_TypeInfo;
    methodPtr_low = LOBYTE(CombineServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
      && (CombineServantListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == CombineServantListViewItem_TypeInfo )
    {
      manager = (CombineServantListViewManager_o *)v4->fields.manager;
      if ( !manager )
        goto LABEL_52;
      v18 = LOBYTE(CombineServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(manager->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v18
        && (CombineServantListViewManager_c *)manager->klass->_2.typeHierarchy[v18 - 1] == CombineServantListViewManager_TypeInfo )
      {
        ListViewManager__ClearScrollBarValue(v4->fields.manager, 0, 0LL);
        modeKind = manager->fields.modeKind;
        if ( modeKind != 3 )
        {
          if ( modeKind == 2 )
          {
            UserSvtId = CombineServantListViewItem__get_UserSvtId(linkItem, 0LL);
            v27 = CombineServantListViewManager__CheckIsMaterialSelectSvt(manager, UserSvtId, 0LL);
            v28 = Method_CombineServantListViewObject_OnClickSelect__;
            if ( (*((_BYTE *)Method_CombineServantListViewObject_OnClickSelect__ + 83) & 2) != 0 )
              v28 = (_QWORD *)sub_1BCA7F8(Method_CombineServantListViewObject_OnClickSelect__);
            v23 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v28, v28[4]);
            if ( !v27 )
            {
              OverwriteAssetSoundName__PlaySystemSe(v23, 0, 0LL);
              CombineServantListViewItem__SwapChoice(linkItem, 0LL);
              goto LABEL_33;
            }
LABEL_23:
            OverwriteAssetSoundName__PlaySystemSe(v23, 2, 0LL);
            return;
          }
          if ( modeKind == 1 )
          {
            v20 = CombineServantListViewItem__get_UserSvtId(linkItem, 0LL);
            v21 = CombineServantListViewManager__CheckIsMaterialSelectSvt(manager, v20, 0LL);
            v22 = Method_CombineServantListViewObject_OnClickSelect__;
            if ( (*((_BYTE *)Method_CombineServantListViewObject_OnClickSelect__ + 83) & 2) != 0 )
              v22 = (_QWORD *)sub_1BCA7F8(Method_CombineServantListViewObject_OnClickSelect__);
            v23 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v22, v22[4]);
            if ( !v21 )
            {
              OverwriteAssetSoundName__PlaySystemSe(v23, 11, 0LL);
              CombineServantListViewItem__SwapLock(linkItem, 0LL);
LABEL_33:
              CombineServantListViewObject__SetupDisp(v4, v24);
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
            case 0xC:
              if ( !CombineServantListViewItem__get_IsCanNotBaseSelect(linkItem, 0LL) || linkItem->fields.isBaseSvt )
              {
                this = (CombineServantListViewObject_o *)v4->fields.manager;
                if ( this )
                {
                  v29 = &StringLiteral_9996/*"OnClickSelectBase"*/;
LABEL_31:
                  UnityEngine_Component__SendMessage(
                    (UnityEngine_Component_o *)this,
                    (System_String_o *)*v29,
                    (Il2CppObject *)v4,
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
                v30 = Method_CombineServantListViewObject_OnClickSelect__;
                if ( (*((_BYTE *)Method_CombineServantListViewObject_OnClickSelect__ + 83) & 2) != 0 )
                  v30 = (_QWORD *)sub_1BCA7F8(Method_CombineServantListViewObject_OnClickSelect__);
                v31 = 1;
              }
              else
              {
                v30 = Method_CombineServantListViewObject_OnClickSelect__;
                if ( linkItem->fields.isMaxSelect )
                {
                  if ( (*((_BYTE *)Method_CombineServantListViewObject_OnClickSelect__ + 83) & 2) != 0 )
                    v30 = (_QWORD *)sub_1BCA7F8(Method_CombineServantListViewObject_OnClickSelect__);
                  v31 = 2;
                }
                else
                {
                  if ( (*((_BYTE *)Method_CombineServantListViewObject_OnClickSelect__ + 83) & 2) != 0 )
                    v30 = (_QWORD *)sub_1BCA7F8(Method_CombineServantListViewObject_OnClickSelect__);
                  v31 = 0;
                }
              }
              v32 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v30, v30[4]);
              OverwriteAssetSoundName__PlaySystemSe(v32, v31, 0LL);
              this = (CombineServantListViewObject_o *)v4->fields.manager;
              if ( !this )
                goto LABEL_52;
              v29 = &StringLiteral_9998/*"OnClickSelectMaterial"*/;
              goto LABEL_31;
            default:
              return;
          }
        }
        if ( CombineServantListViewItem__get_IsCanNotSelectPush(linkItem, 0LL) )
        {
LABEL_17:
          v25 = Method_CombineServantListViewObject_OnClickSelect__;
          if ( (*((_BYTE *)Method_CombineServantListViewObject_OnClickSelect__ + 83) & 2) != 0 )
            v25 = (_QWORD *)sub_1BCA7F8(Method_CombineServantListViewObject_OnClickSelect__);
          v23 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v25, v25[4]);
          goto LABEL_23;
        }
        this = (CombineServantListViewObject_o *)v4->fields.manager;
        if ( this )
        {
          v29 = &StringLiteral_10000/*"OnClickSelectPush"*/;
          goto LABEL_31;
        }
LABEL_52:
        sub_1BCAA3C(this, v16);
      }
    }
    else
    {
      sub_1BCACFC(v4->fields.linkItem);
    }
    sub_1BCACFC(manager);
    goto LABEL_52;
  }
}


void __fastcall CombineServantListViewObject__OnDestroy(CombineServantListViewObject_o *this, const MethodInfo *method)
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

  if ( (byte_4B19E22 & 1) == 0 )
  {
    sub_1BCA7E0(&NGUITools_TypeInfo, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    byte_4B19E22 = 1;
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


void __fastcall CombineServantListViewObject__OnDragDropStart(
        CombineServantListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UITouchPress_o *manager; // x0
  __int64 methodPtr_low; // x9
  __int64 v8; // x1
  UnityEngine_Object_o *touchPress; // x20

  if ( (byte_4B19E2C & 1) == 0 )
  {
    sub_1BCA7E0(&CombineServantListViewManager_TypeInfo, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    byte_4B19E2C = 1;
  }
  manager = (UITouchPress_o *)this->fields.manager;
  if ( !manager )
    goto LABEL_14;
  methodPtr_low = LOBYTE(CombineServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(manager->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (CombineServantListViewManager_c *)manager->klass->_2.typeHierarchy[methodPtr_low - 1] != CombineServantListViewManager_TypeInfo )
  {
    sub_1BCACFC(manager);
    goto LABEL_14;
  }
  if ( CombineServantListViewManager__IsDragStart((CombineServantListViewManager_o *)manager, 0LL) )
  {
    touchPress = (UnityEngine_Object_o *)this->fields.touchPress;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
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


void __fastcall CombineServantListViewObject__OnLongPush(
        CombineServantListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  CombineServantListViewObject_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  struct ListViewItem_o *linkItem; // x20
  void *v11; // x1
  __int64 methodPtr_low; // x9
  CombineServantListViewManager_o *manager; // x21
  __int64 v14; // x9
  int32_t sortIndex; // w19
  bool IsSelect; // w0
  CombineServantListViewObject_o *v17; // x0
  const MethodInfo *v18; // x1

  v3 = this;
  if ( (byte_4B19E2B & 1) == 0 )
  {
    sub_1BCA7E0(&CombineServantListViewItem_TypeInfo, method, v2);
    sub_1BCA7E0(&CombineServantListViewManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&StringLiteral_10055/*"OnLongPushListView"*/, v6, v7);
    this = (CombineServantListViewObject_o *)sub_1BCA7E0(&StringLiteral_10073/*"OnPressCancel"*/, v8, v9);
    byte_4B19E2B = 1;
  }
  linkItem = v3->fields.linkItem;
  if ( linkItem )
  {
    v11 = CombineServantListViewItem_TypeInfo;
    methodPtr_low = LOBYTE(CombineServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
      && (CombineServantListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == CombineServantListViewItem_TypeInfo )
    {
      manager = (CombineServantListViewManager_o *)v3->fields.manager;
      if ( manager )
      {
        v11 = CombineServantListViewManager_TypeInfo;
        v14 = LOBYTE(CombineServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(manager->klass->vtable._0_Equals.methodPtr) < (unsigned int)v14
          || (CombineServantListViewManager_c *)manager->klass->_2.typeHierarchy[v14 - 1] != CombineServantListViewManager_TypeInfo )
        {
          sub_1BCACFC(v3->fields.manager);
          CombineServantListViewObject__OnDragDropStart(v17, v18);
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
          UnityEngine_GameObject__SendMessage_70135704(
            (UnityEngine_GameObject_o *)this,
            (System_String_o *)StringLiteral_10073/*"OnPressCancel"*/,
            0LL);
          this = (CombineServantListViewObject_o *)v3->fields.manager;
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
    }
    else
    {
      sub_1BCACFC(v3->fields.linkItem);
    }
    sub_1BCAA3C(this, v11);
  }
}


void __fastcall CombineServantListViewObject__OnLongRelease(
        CombineServantListViewObject_o *this,
        const MethodInfo *method)
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

  if ( (byte_4B19E2D & 1) == 0 )
  {
    sub_1BCA7E0(&CombineServantListViewManager_TypeInfo, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    sub_1BCA7E0(&StringLiteral_10055/*"OnLongPushListView"*/, v6, v7);
    sub_1BCA7E0(&StringLiteral_4121/*"CancelDragEnd"*/, v8, v9);
    byte_4B19E2D = 1;
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
      methodPtr_low = LOBYTE(CombineServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(manager->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
        && (CombineServantListViewManager_c *)manager->klass->_2.typeHierarchy[methodPtr_low - 1] == CombineServantListViewManager_TypeInfo )
      {
        if ( HIDWORD(manager[7].fields.mListViewObject) )
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
void __fastcall CombineServantListViewObject__SetInput(
        CombineServantListViewObject_o *this,
        bool isInput,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  CombineServantListViewItem_o *itemDraw; // x21
  void *v11; // x1
  struct ListViewManager_o *manager; // x0
  __int64 v13; // x9
  __int64 methodPtr_low; // x9
  CombineServantListViewItemDraw_o *v15; // x20
  CombineServantListViewObject_o *v16; // x0
  const MethodInfo *v17; // x1

  if ( (byte_4B19E24 & 1) == 0 )
  {
    sub_1BCA7E0(&CombineServantListViewItem_TypeInfo, isInput, method);
    sub_1BCA7E0(&CombineServantListViewManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v7, v8);
    byte_4B19E24 = 1;
  }
  ListViewObject__SetInput((ListViewObject_o *)this, isInput, 0LL);
  itemDraw = (CombineServantListViewItem_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)itemDraw, 0LL, 0LL) )
  {
    manager = this->fields.manager;
    if ( manager
      && ((v11 = CombineServantListViewManager_TypeInfo,
           v13 = LOBYTE(CombineServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr),
           LOBYTE(manager->klass->vtable._0_Equals.methodPtr) < (unsigned int)v13)
       || (CombineServantListViewManager_c *)manager->klass->_2.typeHierarchy[v13 - 1] != CombineServantListViewManager_TypeInfo) )
    {
      sub_1BCACFC(manager);
    }
    else
    {
      itemDraw = (CombineServantListViewItem_o *)this->fields.linkItem;
      if ( !itemDraw
        || (v11 = CombineServantListViewItem_TypeInfo,
            methodPtr_low = LOBYTE(CombineServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
            LOBYTE(itemDraw->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low)
        && (CombineServantListViewItem_c *)itemDraw->klass->_2.typeHierarchy[methodPtr_low - 1] == CombineServantListViewItem_TypeInfo )
      {
        if ( !manager
          || (v15 = this->fields.itemDraw,
              manager = (struct ListViewManager_o *)CombineServantListViewManager__IsSelectEnable(
                                                      (CombineServantListViewManager_o *)manager,
                                                      itemDraw,
                                                      0,
                                                      0,
                                                      0,
                                                      0LL),
              !v15) )
        {
          sub_1BCAA3C(manager, v11);
        }
        CombineServantListViewItemDraw__SetInput(v15, itemDraw, (unsigned __int8)manager & isInput & 1, 0LL);
        return;
      }
    }
    sub_1BCACFC(itemDraw);
    CombineServantListViewObject__IsCanDrag(v16, v17);
  }
}


void __fastcall CombineServantListViewObject__SetItem(
        CombineServantListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  ListViewObject__SetItem_41478184((ListViewObject_o *)this, item, seed, 0LL);
  this->fields.state = 0;
}


void __fastcall CombineServantListViewObject__SetItem_46137024(
        CombineServantListViewObject_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ListViewObject__SetItem((ListViewObject_o *)this, item, 0LL);
  this->fields.state = 0;
}


void __fastcall CombineServantListViewObject__SetupDisp(CombineServantListViewObject_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct ListViewItem_o *linkItem; // x21
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  CombineServantListViewManager_o *manager; // x20
  __int64 methodPtr_low; // x9
  __int64 v11; // x9
  bool v12; // w1
  __int64 v13; // x1
  UnityEngine_Object_o *touchPress; // x22
  _BOOL8 IsSelectEnable; // x0
  __int64 v16; // x1
  struct UITouchPress_o *v17; // x8
  UnityEngine_Object_o *itemDraw; // x22
  CombineServantListViewItemDraw_o *v19; // x22
  int32_t dispMode; // w19
  CombineServantListViewObject_o *v21; // x0
  int32_t v22; // w1
  System_Action_o *v23; // x2
  const MethodInfo *v24; // x3
  long double v25; // q0

  if ( (byte_4B19E28 & 1) == 0 )
  {
    sub_1BCA7E0(&CombineServantListViewItem_TypeInfo, method, v2);
    sub_1BCA7E0(&CombineServantListViewManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v7, v8);
    byte_4B19E28 = 1;
  }
  manager = (CombineServantListViewManager_o *)this->fields.manager;
  if ( manager )
  {
    methodPtr_low = LOBYTE(CombineServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(manager->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (CombineServantListViewManager_c *)manager->klass->_2.typeHierarchy[methodPtr_low - 1] != CombineServantListViewManager_TypeInfo )
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
  v11 = LOBYTE(CombineServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)v11
    || (CombineServantListViewItem_c *)linkItem->klass->_2.typeHierarchy[v11 - 1] != CombineServantListViewItem_TypeInfo )
  {
LABEL_26:
    v25 = sub_1BCACFC(linkItem);
    CombineServantListViewObject__Init_46138816(v21, v22, v23, *(float *)&v25, v24);
    return;
  }
  v12 = this->fields.dispMode != 0;
LABEL_11:
  ListViewObject__SetVisible((ListViewObject_o *)this, v12, 0LL);
  touchPress = (UnityEngine_Object_o *)this->fields.touchPress;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
  IsSelectEnable = UnityEngine_Object__op_Inequality(touchPress, 0LL, 0LL);
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
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16);
  IsSelectEnable = UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL);
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
                         0LL);
      if ( v19 )
      {
        CombineServantListViewItemDraw__SetItem(
          v19,
          (CombineServantListViewItem_o *)linkItem,
          dispMode,
          IsSelectEnable,
          manager->fields.modeKind,
          0LL);
        return;
      }
    }
LABEL_24:
    sub_1BCAA3C(IsSelectEnable, v16);
  }
}


void __fastcall CombineServantListViewObject__Start(CombineServantListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.state )
    CombineServantListViewObject__Init_46136612(this, 2, v2);
}


System_String_o *__fastcall CombineServantListViewObject__ToString(
        CombineServantListViewObject_o *this,
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

  if ( (byte_4B19E29 & 1) == 0 )
  {
    sub_1BCA7E0(&CombineServantListViewItemDraw_DispMode_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_116/*" "*/, v4, v5);
    byte_4B19E29 = 1;
  }
  v14 = 0.0;
  v13 = 0LL;
  v11.klass = (System_Enum_c *)CombineServantListViewItemDraw_DispMode_TypeInfo;
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

  if ( (byte_4B19E1F & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, value, method);
    byte_4B19E1F = 1;
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

  if ( (byte_4B19E20 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, value, method);
    byte_4B19E20 = 1;
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
  CombineServantListViewObject__Awake(v11, v12);
}