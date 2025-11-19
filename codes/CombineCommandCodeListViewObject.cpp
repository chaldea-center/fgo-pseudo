void CombineCommandCodeListViewObject___ctor(CombineCommandCodeListViewObject_o *this, const MethodInfo *method)
{
  if ( (byte_4CBA231 & 1) == 0 )
  {
    sub_1C6BA08(&ListViewObject_TypeInfo);
    byte_4CBA231 = 1;
  }
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  ListViewObject___ctor((ListViewObject_o *)this, 0);
}


void CombineCommandCodeListViewObject__Awake(CombineCommandCodeListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4CBA229 & 1) == 0 )
  {
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_CombineCommandCodeListViewItemDraw___);
    byte_4CBA229 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1C6BC60(0, v3);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_CombineCommandCodeListViewItemDraw___);
  this->fields.itemDraw = (struct CombineCommandCodeListViewItemDraw_o *)Component_object;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.itemDraw, (int32_t)Component_object, v6, v7);
}


CombineCommandCodeListViewItem_o *CombineCommandCodeListViewObject__GetItem(
        CombineCommandCodeListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11

  if ( (byte_4CBA22A & 1) == 0 )
  {
    sub_1C6BA08(&CombineCommandCodeListViewItem_TypeInfo);
    byte_4CBA22A = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0;
  naturalAligment = CombineCommandCodeListViewItem_TypeInfo->_2.naturalAligment;
  if ( linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment )
    return 0;
  if ( (CombineCommandCodeListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == CombineCommandCodeListViewItem_TypeInfo )
    return (CombineCommandCodeListViewItem_o *)this->fields.linkItem;
  return 0;
}


void CombineCommandCodeListViewObject__Init(
        CombineCommandCodeListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        UnityEngine_Vector3_o position,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x10
  int32_t v11; // w23
  int32_t dispMode; // w22
  int32_t state; // w24
  UnityEngine_Transform_o *transform; // x0
  __int64 v15; // x1
  CGThumbnailListItem_o *p_callbackFunc; // x21
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  const MethodInfo *v19; // x1
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  int32_t v22; // w8
  CGThumbnailListItem_c *klass; // x19

  if ( (byte_4CBA22C & 1) == 0 )
  {
    sub_1C6BA08(&CombineCommandCodeListViewItem_TypeInfo);
    byte_4CBA22C = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem
    && (naturalAligment = CombineCommandCodeListViewItem_TypeInfo->_2.naturalAligment,
        linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (CombineCommandCodeListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == CombineCommandCodeListViewItem_TypeInfo )
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
  ListViewObject__SetVisible((ListViewObject_o *)this, v11 != 0, 0);
  ((void (__fastcall *)(CombineCommandCodeListViewObject_o *, bool, const MethodInfo *))this->klass->vtable._9_SetInput.methodPtr)(
    this,
    v11 == 3,
    this->klass->vtable._9_SetInput.method);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0)) == 0) )
  {
    sub_1C6BC60(transform, v15);
  }
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0);
  this->fields.callbackFunc = callbackFunc;
  p_callbackFunc = (CGThumbnailListItem_o *)&this->fields.callbackFunc;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callbackFunc, v17, v18);
  if ( (unsigned int)v11 <= 3 )
  {
    v22 = *((_DWORD *)&xmmword_CEC6A0 + v11);
    this->fields.state = dword_CEC0C0[v11];
    this->fields.dispMode = v22;
  }
  if ( !state || dispMode != this->fields.dispMode )
    CombineCommandCodeListViewObject__SetupDisp(this, v19);
  klass = p_callbackFunc->klass;
  if ( p_callbackFunc->klass )
  {
    p_callbackFunc->klass = 0;
    sub_1C6B9AC(p_callbackFunc, 0, v20, v21);
    ((void (__fastcall *)(Il2CppClass *, _QWORD))klass->_1.namespaze)(
      klass->_1.element_class,
      *(_QWORD *)&klass->_1.byval_arg.bits);
  }
}


void CombineCommandCodeListViewObject__InitItem(CombineCommandCodeListViewObject_o *this, const MethodInfo *method)
{
  this->fields.state = 0;
}


// local variable allocation has failed, the output may be wrong!
void CombineCommandCodeListViewObject__Init_48711268(
        CombineCommandCodeListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  float v4; // s0
  int v5; // s1 OVERLAPPED

  if ( !byte_4CAFC09 )
  {
    sub_1C6BA08(&UnityEngine_Vector3_TypeInfo);
    byte_4CAFC09 = 1;
  }
  CombineCommandCodeListViewObject__Init(this, initMode, 0, v4, *(UnityEngine_Vector3_o *)&v5, v3);
}


// local variable allocation has failed, the output may be wrong!
void CombineCommandCodeListViewObject__Init_48712016(
        CombineCommandCodeListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  float v4; // s0
  int v5; // s1 OVERLAPPED

  if ( !byte_4CAFC09 )
  {
    sub_1C6BA08(&UnityEngine_Vector3_TypeInfo);
    byte_4CAFC09 = 1;
  }
  CombineCommandCodeListViewObject__Init(this, initMode, callbackFunc, v4, *(UnityEngine_Vector3_o *)&v5, method);
}


// local variable allocation has failed, the output may be wrong!
void CombineCommandCodeListViewObject__Init_48720324(
        CombineCommandCodeListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        const MethodInfo *method)
{
  int v5; // s1 OVERLAPPED

  if ( !byte_4CAFC09 )
  {
    sub_1C6BA08(&UnityEngine_Vector3_TypeInfo);
    byte_4CAFC09 = 1;
  }
  CombineCommandCodeListViewObject__Init(this, initMode, callbackFunc, delay, *(UnityEngine_Vector3_o *)&v5, method);
}


void CombineCommandCodeListViewObject__OnClickSelect(
        CombineCommandCodeListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *manager; // x21
  CombineCommandCodeListViewObject_o *v3; // x19
  struct ListViewItem_o *linkItem; // x20
  CombineCommandCodeListViewItem_c *v5; // x1
  __int64 naturalAligment; // x9
  __int64 v7; // x9
  int m_CachedPtr; // w8
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0
  const MethodInfo *v11; // x1
  _QWORD *v12; // x0
  System_Reflection_MethodBase_o *v13; // x0
  _QWORD *v14; // x0
  System_Reflection_MethodBase_o *v15; // x0

  v3 = this;
  if ( (byte_4CBA22E & 1) == 0 )
  {
    sub_1C6BA08(&CombineCommandCodeListViewItem_TypeInfo);
    sub_1C6BA08(&CombineCommandCodeListViewManager_TypeInfo);
    sub_1C6BA08(&Method_CombineCommandCodeListViewObject_OnClickSelect__);
    this = (CombineCommandCodeListViewObject_o *)sub_1C6BA08(&StringLiteral_9845/*"OnClickListView"*/);
    byte_4CBA22E = 1;
  }
  linkItem = v3->fields.linkItem;
  if ( !linkItem )
    return;
  v5 = CombineCommandCodeListViewItem_TypeInfo;
  naturalAligment = CombineCommandCodeListViewItem_TypeInfo->_2.naturalAligment;
  if ( linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (CombineCommandCodeListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] != CombineCommandCodeListViewItem_TypeInfo )
  {
    sub_1C6BFFC(v3->fields.linkItem);
    goto LABEL_26;
  }
  manager = (UnityEngine_Component_o *)v3->fields.manager;
  if ( !manager )
    goto LABEL_27;
  v7 = CombineCommandCodeListViewManager_TypeInfo->_2.naturalAligment;
  if ( manager->klass->_2.naturalAligment < (unsigned int)v7
    || (CombineCommandCodeListViewManager_c *)manager->klass->_2.typeHierarchy[v7 - 1] != CombineCommandCodeListViewManager_TypeInfo )
  {
LABEL_26:
    sub_1C6BFFC(manager);
LABEL_27:
    sub_1C6BC60(this, v5);
  }
  ListViewManager__ClearScrollBarValue(v3->fields.manager, 1, 0);
  m_CachedPtr = manager[22].fields.m_CachedPtr;
  if ( m_CachedPtr == 2 )
  {
    v12 = Method_CombineCommandCodeListViewObject_OnClickSelect__;
    if ( (*((_BYTE *)Method_CombineCommandCodeListViewObject_OnClickSelect__ + 83) & 2) != 0 )
      v12 = (_QWORD *)sub_1C6BA20(Method_CombineCommandCodeListViewObject_OnClickSelect__);
    v13 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v12, v12[4]);
    OverwriteAssetSoundName__PlaySystemSe(v13, 0, 0, 0);
    BYTE6(linkItem[1].klass) ^= 1u;
    goto LABEL_18;
  }
  if ( m_CachedPtr == 1 )
  {
    v9 = Method_CombineCommandCodeListViewObject_OnClickSelect__;
    if ( (*((_BYTE *)Method_CombineCommandCodeListViewObject_OnClickSelect__ + 83) & 2) != 0 )
      v9 = (_QWORD *)sub_1C6BA20(Method_CombineCommandCodeListViewObject_OnClickSelect__);
    v10 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v9, v9[4]);
    OverwriteAssetSoundName__PlaySystemSe(v10, 11, 0, 0);
    BYTE5(linkItem[1].klass) ^= 1u;
LABEL_18:
    CombineCommandCodeListViewObject__SetupDisp(v3, v11);
    return;
  }
  if ( BYTE4(linkItem[1].klass) || HIBYTE(linkItem[1].klass) )
  {
    v14 = Method_CombineCommandCodeListViewObject_OnClickSelect__;
    if ( (*((_BYTE *)Method_CombineCommandCodeListViewObject_OnClickSelect__ + 83) & 2) != 0 )
      v14 = (_QWORD *)sub_1C6BA20(Method_CombineCommandCodeListViewObject_OnClickSelect__);
    v15 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v14, v14[4]);
    OverwriteAssetSoundName__PlaySystemSe(v15, 2, 0, 0);
  }
  else
  {
    UnityEngine_Component__SendMessage(
      manager,
      (System_String_o *)StringLiteral_9845/*"OnClickListView"*/,
      (Il2CppObject *)v3->fields.linkItem,
      0);
  }
}


void CombineCommandCodeListViewObject__OnLongPush(CombineCommandCodeListViewObject_o *this, const MethodInfo *method)
{
  Il2CppObject *linkItem; // x2
  UnityEngine_Component_o *manager; // x0
  __int64 naturalAligment; // x9

  if ( (byte_4CBA22F & 1) == 0 )
  {
    sub_1C6BA08(&CombineCommandCodeListViewManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_9924/*"OnLongPushListView"*/);
    byte_4CBA22F = 1;
  }
  linkItem = (Il2CppObject *)this->fields.linkItem;
  if ( linkItem )
  {
    manager = (UnityEngine_Component_o *)this->fields.manager;
    if ( manager )
    {
      naturalAligment = CombineCommandCodeListViewManager_TypeInfo->_2.naturalAligment;
      if ( manager->klass->_2.naturalAligment >= (unsigned int)naturalAligment
        && (CombineCommandCodeListViewManager_c *)manager->klass->_2.typeHierarchy[naturalAligment - 1] == CombineCommandCodeListViewManager_TypeInfo )
      {
        UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_9924/*"OnLongPushListView"*/, linkItem, 0);
        return;
      }
      sub_1C6BFFC(manager);
    }
    sub_1C6BC60(manager, method);
  }
}


void CombineCommandCodeListViewObject__SetInput(
        CombineCommandCodeListViewObject_o *this,
        bool isInput,
        const MethodInfo *method)
{
  UnityEngine_Object_o *itemDraw; // x20
  const MethodInfo *v6; // x2
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11
  struct ListViewItem_o *v9; // x1
  CombineCommandCodeListViewItemDraw_o *v10; // x0

  if ( (byte_4CBA22B & 1) == 0 )
  {
    sub_1C6BA08(&CombineCommandCodeListViewItem_TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CBA22B = 1;
  }
  ListViewObject__SetInput((ListViewObject_o *)this, isInput, 0);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
  {
    linkItem = this->fields.linkItem;
    if ( linkItem
      && (naturalAligment = CombineCommandCodeListViewItem_TypeInfo->_2.naturalAligment,
          linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
    {
      if ( (CombineCommandCodeListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == CombineCommandCodeListViewItem_TypeInfo )
        v9 = this->fields.linkItem;
      else
        v9 = 0;
    }
    else
    {
      v9 = 0;
    }
    v10 = this->fields.itemDraw;
    if ( !v10 )
      sub_1C6BC60(0, v9);
    CombineCommandCodeListViewItemDraw__SetInput(v10, (CombineCommandCodeListViewItem_o *)v9, v6);
  }
}


void CombineCommandCodeListViewObject__SetItem(
        CombineCommandCodeListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  ListViewObject__SetItem_44077592((ListViewObject_o *)this, item, seed, 0);
  this->fields.state = 0;
}


void CombineCommandCodeListViewObject__SetItem_48719412(
        CombineCommandCodeListViewObject_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ListViewObject__SetItem((ListViewObject_o *)this, item, 0);
  this->fields.state = 0;
}


void CombineCommandCodeListViewObject__SetupDisp(CombineCommandCodeListViewObject_o *this, const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x20
  __int64 naturalAligment; // x10
  bool v5; // w1
  UnityEngine_Object_o *itemDraw; // x21
  __int64 v7; // x1
  const MethodInfo *v8; // x3
  CombineCommandCodeListViewItemDraw_o *v9; // x0

  if ( (byte_4CBA22D & 1) == 0 )
  {
    sub_1C6BA08(&CombineCommandCodeListViewItem_TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CBA22D = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    goto LABEL_7;
  naturalAligment = CombineCommandCodeListViewItem_TypeInfo->_2.naturalAligment;
  if ( linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (CombineCommandCodeListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] != CombineCommandCodeListViewItem_TypeInfo )
  {
    linkItem = 0;
LABEL_7:
    v5 = 0;
    goto LABEL_8;
  }
  v5 = this->fields.dispMode != 0;
LABEL_8:
  ListViewObject__SetVisible((ListViewObject_o *)this, v5, 0);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
  {
    v9 = this->fields.itemDraw;
    if ( !v9 )
      sub_1C6BC60(0, v7);
    CombineCommandCodeListViewItemDraw__SetItem(
      v9,
      (CombineCommandCodeListViewItem_o *)linkItem,
      this->fields.dispMode,
      v8);
  }
}


System_String_o *CombineCommandCodeListViewObject__ToString(
        CombineCommandCodeListViewObject_o *this,
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

  if ( (byte_4CBA230 & 1) == 0 )
  {
    sub_1C6BA08(&CombineCommandCodeListViewItemDraw_DispMode_TypeInfo);
    sub_1C6BA08(&StringLiteral_113/*" "*/);
    byte_4CBA230 = 1;
  }
  v11 = 0.0;
  v10 = 0;
  v8.klass = (System_Enum_c *)CombineCommandCodeListViewItemDraw_DispMode_TypeInfo;
  v8.monitor = (void *)-1LL;
  dispMode = this->fields.dispMode;
  v3 = System_Enum__ToString(&v8, 0);
  z = this->fields.basePosition.fields.z;
  v5 = v3;
  v10 = *(_QWORD *)&this->fields.basePosition.fields.x;
  v11 = z;
  v6 = (System_String_o *)sub_1E29128(&v10, 0, 0, 0);
  return System_String__Concat_64005056(v5, (System_String_o *)StringLiteral_113/*" "*/, v6, 0);
}


void CombineCommandCodeListViewObject__add_callbackFunc(
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

  if ( (byte_4CBA227 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    byte_4CBA227 = 1;
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
    v9 = sub_1CC77DC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C6BFFC(v8);
  CombineCommandCodeListViewObject__remove_callbackFunc(v11, v12, v13);
}


void CombineCommandCodeListViewObject__remove_callbackFunc(
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

  if ( (byte_4CBA228 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    byte_4CBA228 = 1;
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
    v9 = sub_1CC77DC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C6BFFC(v8);
  CombineCommandCodeListViewObject__Awake(v11, v12);
}