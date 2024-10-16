void __fastcall CombineCommandCodeListViewObject___ctor(
        CombineCommandCodeListViewObject_o *this,
        const MethodInfo *method)
{
  if ( (byte_4AB94FB & 1) == 0 )
  {
    sub_1BAB41C(&ListViewObject_TypeInfo, method);
    byte_4AB94FB = 1;
  }
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  ListViewObject___ctor((ListViewObject_o *)this, 0LL);
}


void __fastcall CombineCommandCodeListViewObject__Awake(
        CombineCommandCodeListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_4AB94F3 & 1) == 0 )
  {
    sub_1BAB41C(&Method_UnityEngine_GameObject_GetComponent_CombineCommandCodeListViewItemDraw___, method);
    byte_4AB94F3 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1BAB678(0LL, v3);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_2F13970 *)Method_UnityEngine_GameObject_GetComponent_CombineCommandCodeListViewItemDraw___);
  this->fields.itemDraw = (struct CombineCommandCodeListViewItemDraw_o *)Component_object;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.itemDraw, (int32_t)Component_object, v6, v7);
}


CombineCommandCodeListViewItem_o *__fastcall CombineCommandCodeListViewObject__GetItem(
        CombineCommandCodeListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x11

  if ( (byte_4AB94F4 & 1) == 0 )
  {
    sub_1BAB41C(&CombineCommandCodeListViewItem_TypeInfo, method);
    byte_4AB94F4 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0LL;
  methodPtr_low = LOBYTE(CombineCommandCodeListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
    return 0LL;
  if ( (CombineCommandCodeListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == CombineCommandCodeListViewItem_TypeInfo )
    return (CombineCommandCodeListViewItem_o *)this->fields.linkItem;
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineCommandCodeListViewObject__Init(
        CombineCommandCodeListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        UnityEngine_Vector3_o position,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x10
  int32_t v11; // w23
  int32_t dispMode; // w22
  int32_t state; // w24
  UnityEngine_Transform_o *transform; // x0
  __int64 v15; // x1
  ServantStatusBattleListViewItem_o *p_callbackFunc; // x21
  int32_t v17; // w2
  int32_t v18; // w3
  const MethodInfo *v19; // x1
  int32_t v20; // w2
  int32_t v21; // w3
  int32_t v22; // w8
  ServantStatusBattleListViewItem_c *klass; // x19

  if ( (byte_4AB94F6 & 1) == 0 )
  {
    sub_1BAB41C(&CombineCommandCodeListViewItem_TypeInfo, *(_QWORD *)&initMode);
    byte_4AB94F6 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem
    && (methodPtr_low = LOBYTE(CombineCommandCodeListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
  {
    if ( (CombineCommandCodeListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == CombineCommandCodeListViewItem_TypeInfo )
      v11 = initMode;
    else
      v11 = 0;
  }
  else
  {
    v11 = 0;
  }
  state = this->fields.state;
  dispMode = this->fields.dispMode;
  ListViewObject__SetVisible((ListViewObject_o *)this, v11 != 0, 0LL);
  ((void (__fastcall *)(CombineCommandCodeListViewObject_o *, bool, Il2CppMethodPointer))this->klass->vtable._9_SetInput.method)(
    this,
    v11 == 3,
    this->klass->vtable._10_Invalidation.methodPtr);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0LL),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_1BAB678(transform, v15);
  }
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0LL);
  this->fields.callbackFunc = callbackFunc;
  p_callbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, (int32_t)callbackFunc, v17, v18);
  if ( (unsigned int)v11 <= 3 )
  {
    v22 = *((_DWORD *)&xmmword_BC34E0 + v11);
    this->fields.state = dword_BC2F50[v11];
    this->fields.dispMode = v22;
  }
  if ( !state || dispMode != this->fields.dispMode )
    CombineCommandCodeListViewObject__SetupDisp(this, v19);
  klass = p_callbackFunc->klass;
  if ( p_callbackFunc->klass )
  {
    p_callbackFunc->klass = 0LL;
    sub_1BAB3C0(p_callbackFunc, 0, v20, v21);
    ((void (__fastcall *)(Il2CppClass *, _QWORD))klass->_1.namespaze)(
      klass->_1.element_class,
      *(_QWORD *)&klass->_1.byval_arg.bits);
  }
}


void __fastcall CombineCommandCodeListViewObject__InitItem(
        CombineCommandCodeListViewObject_o *this,
        const MethodInfo *method)
{
  this->fields.state = 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineCommandCodeListViewObject__Init_45215292(
        CombineCommandCodeListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  float v4; // s0
  int v5; // s1

  if ( !byte_4AB0691 )
  {
    sub_1BAB41C(&UnityEngine_Vector3_TypeInfo, *(_QWORD *)&initMode);
    byte_4AB0691 = 1;
  }
  CombineCommandCodeListViewObject__Init(this, initMode, 0LL, v4, *(UnityEngine_Vector3_o *)&v5, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineCommandCodeListViewObject__Init_45216040(
        CombineCommandCodeListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  float v4; // s0
  int v5; // s1

  if ( !byte_4AB0691 )
  {
    sub_1BAB41C(&UnityEngine_Vector3_TypeInfo, *(_QWORD *)&initMode);
    byte_4AB0691 = 1;
  }
  CombineCommandCodeListViewObject__Init(this, initMode, callbackFunc, v4, *(UnityEngine_Vector3_o *)&v5, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineCommandCodeListViewObject__Init_45224312(
        CombineCommandCodeListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        const MethodInfo *method)
{
  int v5; // s1

  if ( !byte_4AB0691 )
  {
    sub_1BAB41C(&UnityEngine_Vector3_TypeInfo, *(_QWORD *)&initMode);
    byte_4AB0691 = 1;
  }
  CombineCommandCodeListViewObject__Init(this, initMode, callbackFunc, delay, *(UnityEngine_Vector3_o *)&v5, method);
}


void __fastcall CombineCommandCodeListViewObject__OnClickSelect(
        CombineCommandCodeListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *manager; // x21
  CombineCommandCodeListViewObject_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct ListViewItem_o *linkItem; // x20
  CombineCommandCodeListViewItem_c *v8; // x1
  __int64 methodPtr_low; // x9
  __int64 v10; // x9
  intptr_t m_CachedPtr; // w8
  _QWORD *v12; // x0
  System_Reflection_MethodBase_o *v13; // x0
  const MethodInfo *v14; // x1
  _QWORD *v15; // x0
  System_Reflection_MethodBase_o *v16; // x0
  _QWORD *v17; // x0
  System_Reflection_MethodBase_o *v18; // x0

  v3 = this;
  if ( (byte_4AB94F8 & 1) == 0 )
  {
    sub_1BAB41C(&CombineCommandCodeListViewItem_TypeInfo, method);
    sub_1BAB41C(&CombineCommandCodeListViewManager_TypeInfo, v4);
    sub_1BAB41C(&Method_CombineCommandCodeListViewObject_OnClickSelect__, v5);
    this = (CombineCommandCodeListViewObject_o *)sub_1BAB41C(&StringLiteral_9853/*"OnClickListView"*/, v6);
    byte_4AB94F8 = 1;
  }
  linkItem = v3->fields.linkItem;
  if ( !linkItem )
    return;
  v8 = CombineCommandCodeListViewItem_TypeInfo;
  methodPtr_low = LOBYTE(CombineCommandCodeListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (CombineCommandCodeListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] != CombineCommandCodeListViewItem_TypeInfo )
  {
    sub_1BAB938(v3->fields.linkItem);
    goto LABEL_26;
  }
  manager = (UnityEngine_Component_o *)v3->fields.manager;
  if ( !manager )
    goto LABEL_27;
  v10 = LOBYTE(CombineCommandCodeListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(manager->klass->vtable._0_Equals.methodPtr) < (unsigned int)v10
    || (CombineCommandCodeListViewManager_c *)manager->klass->_2.typeHierarchy[v10 - 1] != CombineCommandCodeListViewManager_TypeInfo )
  {
LABEL_26:
    sub_1BAB938(manager);
LABEL_27:
    sub_1BAB678(this, v8);
  }
  ListViewManager__ClearScrollBarValue(v3->fields.manager, 1, 0LL);
  m_CachedPtr = manager[22].fields.m_CachedPtr;
  if ( m_CachedPtr == 2 )
  {
    v15 = Method_CombineCommandCodeListViewObject_OnClickSelect__;
    if ( (*((_BYTE *)Method_CombineCommandCodeListViewObject_OnClickSelect__ + 83) & 2) != 0 )
      v15 = (_QWORD *)sub_1BAB434(Method_CombineCommandCodeListViewObject_OnClickSelect__);
    v16 = (System_Reflection_MethodBase_o *)sub_1BAB400(v15, v15[4]);
    OverwriteAssetSoundName__PlaySystemSe(v16, 0, 0LL);
    BYTE6(linkItem[1].klass) ^= 1u;
    goto LABEL_18;
  }
  if ( m_CachedPtr == 1 )
  {
    v12 = Method_CombineCommandCodeListViewObject_OnClickSelect__;
    if ( (*((_BYTE *)Method_CombineCommandCodeListViewObject_OnClickSelect__ + 83) & 2) != 0 )
      v12 = (_QWORD *)sub_1BAB434(Method_CombineCommandCodeListViewObject_OnClickSelect__);
    v13 = (System_Reflection_MethodBase_o *)sub_1BAB400(v12, v12[4]);
    OverwriteAssetSoundName__PlaySystemSe(v13, 11, 0LL);
    BYTE5(linkItem[1].klass) ^= 1u;
LABEL_18:
    CombineCommandCodeListViewObject__SetupDisp(v3, v14);
    return;
  }
  if ( BYTE4(linkItem[1].klass) || HIBYTE(linkItem[1].klass) )
  {
    v17 = Method_CombineCommandCodeListViewObject_OnClickSelect__;
    if ( (*((_BYTE *)Method_CombineCommandCodeListViewObject_OnClickSelect__ + 83) & 2) != 0 )
      v17 = (_QWORD *)sub_1BAB434(Method_CombineCommandCodeListViewObject_OnClickSelect__);
    v18 = (System_Reflection_MethodBase_o *)sub_1BAB400(v17, v17[4]);
    OverwriteAssetSoundName__PlaySystemSe(v18, 2, 0LL);
  }
  else
  {
    UnityEngine_Component__SendMessage(
      manager,
      (System_String_o *)StringLiteral_9853/*"OnClickListView"*/,
      (Il2CppObject *)v3->fields.linkItem,
      0LL);
  }
}


void __fastcall CombineCommandCodeListViewObject__OnLongPush(
        CombineCommandCodeListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *linkItem; // x2
  UnityEngine_Component_o *manager; // x0
  __int64 methodPtr_low; // x9

  if ( (byte_4AB94F9 & 1) == 0 )
  {
    sub_1BAB41C(&CombineCommandCodeListViewManager_TypeInfo, method);
    sub_1BAB41C(&StringLiteral_9928/*"OnLongPushListView"*/, v3);
    byte_4AB94F9 = 1;
  }
  linkItem = (Il2CppObject *)this->fields.linkItem;
  if ( linkItem )
  {
    manager = (UnityEngine_Component_o *)this->fields.manager;
    if ( manager )
    {
      methodPtr_low = LOBYTE(CombineCommandCodeListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(manager->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
        && (CombineCommandCodeListViewManager_c *)manager->klass->_2.typeHierarchy[methodPtr_low - 1] == CombineCommandCodeListViewManager_TypeInfo )
      {
        UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_9928/*"OnLongPushListView"*/, linkItem, 0LL);
        return;
      }
      sub_1BAB938(manager);
    }
    sub_1BAB678(manager, method);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineCommandCodeListViewObject__SetInput(
        CombineCommandCodeListViewObject_o *this,
        bool isInput,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Object_o *itemDraw; // x20
  const MethodInfo *v7; // x2
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x11
  struct ListViewItem_o *v10; // x1
  CombineCommandCodeListViewItemDraw_o *v11; // x0

  if ( (byte_4AB94F5 & 1) == 0 )
  {
    sub_1BAB41C(&CombineCommandCodeListViewItem_TypeInfo, isInput);
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, v5);
    byte_4AB94F5 = 1;
  }
  ListViewObject__SetInput((ListViewObject_o *)this, isInput, 0LL);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    linkItem = this->fields.linkItem;
    if ( linkItem
      && (methodPtr_low = LOBYTE(CombineCommandCodeListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
          LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
    {
      if ( (CombineCommandCodeListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == CombineCommandCodeListViewItem_TypeInfo )
        v10 = this->fields.linkItem;
      else
        v10 = 0LL;
    }
    else
    {
      v10 = 0LL;
    }
    v11 = this->fields.itemDraw;
    if ( !v11 )
      sub_1BAB678(0LL, v10);
    CombineCommandCodeListViewItemDraw__SetInput(v11, (CombineCommandCodeListViewItem_o *)v10, v7);
  }
}


void __fastcall CombineCommandCodeListViewObject__SetItem(
        CombineCommandCodeListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  ListViewObject__SetItem_41133552((ListViewObject_o *)this, item, seed, 0LL);
  this->fields.state = 0;
}


void __fastcall CombineCommandCodeListViewObject__SetItem_45223400(
        CombineCommandCodeListViewObject_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ListViewObject__SetItem((ListViewObject_o *)this, item, 0LL);
  this->fields.state = 0;
}


void __fastcall CombineCommandCodeListViewObject__SetupDisp(
        CombineCommandCodeListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  struct ListViewItem_o *linkItem; // x20
  __int64 methodPtr_low; // x10
  bool v6; // w1
  UnityEngine_Object_o *itemDraw; // x21
  __int64 v8; // x1
  const MethodInfo *v9; // x3
  CombineCommandCodeListViewItemDraw_o *v10; // x0

  if ( (byte_4AB94F7 & 1) == 0 )
  {
    sub_1BAB41C(&CombineCommandCodeListViewItem_TypeInfo, method);
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, v3);
    byte_4AB94F7 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    goto LABEL_7;
  methodPtr_low = LOBYTE(CombineCommandCodeListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (CombineCommandCodeListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] != CombineCommandCodeListViewItem_TypeInfo )
  {
    linkItem = 0LL;
LABEL_7:
    v6 = 0;
    goto LABEL_8;
  }
  v6 = this->fields.dispMode != 0;
LABEL_8:
  ListViewObject__SetVisible((ListViewObject_o *)this, v6, 0LL);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    v10 = this->fields.itemDraw;
    if ( !v10 )
      sub_1BAB678(0LL, v8);
    CombineCommandCodeListViewItemDraw__SetItem(
      v10,
      (CombineCommandCodeListViewItem_o *)linkItem,
      this->fields.dispMode,
      v9);
  }
}


System_String_o *__fastcall CombineCommandCodeListViewObject__ToString(
        CombineCommandCodeListViewObject_o *this,
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

  if ( (byte_4AB94FA & 1) == 0 )
  {
    sub_1BAB41C(&CombineCommandCodeListViewItemDraw_DispMode_TypeInfo, method);
    sub_1BAB41C(&StringLiteral_116/*" "*/, v3);
    byte_4AB94FA = 1;
  }
  v12 = 0.0;
  v11 = 0LL;
  v9.klass = (System_Enum_c *)CombineCommandCodeListViewItemDraw_DispMode_TypeInfo;
  v9.monitor = (void *)-1LL;
  dispMode = this->fields.dispMode;
  v4 = System_Enum__ToString(&v9, 0LL);
  z = this->fields.basePosition.fields.z;
  v6 = v4;
  v11 = *(_QWORD *)&this->fields.basePosition.fields.x;
  v12 = z;
  v7 = (System_String_o *)sub_1D976D4(&v11, 0LL, 0LL, 0LL);
  return System_String__Concat_62059388(v6, (System_String_o *)StringLiteral_116/*" "*/, v7, 0LL);
}


void __fastcall CombineCommandCodeListViewObject__add_callbackFunc(
        CombineCommandCodeListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  CombineCommandCodeListViewObject_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4AB94F1 & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_TypeInfo, value);
    byte_4AB94F1 = 1;
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
    v9 = sub_1BE690C(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1BAB938(v8);
  CombineCommandCodeListViewObject__remove_callbackFunc(v11, v12, v13);
}


void __fastcall CombineCommandCodeListViewObject__remove_callbackFunc(
        CombineCommandCodeListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  CombineCommandCodeListViewObject_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4AB94F2 & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_TypeInfo, value);
    byte_4AB94F2 = 1;
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
    v9 = sub_1BE690C(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1BAB938(v8);
  CombineCommandCodeListViewObject__Awake(v11, v12);
}