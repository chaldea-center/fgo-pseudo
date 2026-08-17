void CombineCommandCodeListViewObject___ctor(CombineCommandCodeListViewObject_o *this, const MethodInfo *method)
{
  if ( (byte_5974A4A & 1) == 0 )
  {
    sub_2213A60(&ListViewObject_TypeInfo);
    byte_5974A4A = 1;
  }
  if ( !*(&ListViewObject_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo, method);
  ListViewObject___ctor((ListViewObject_o *)this, 0);
}


void CombineCommandCodeListViewObject__Awake(CombineCommandCodeListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  Il2CppObject *Component_object; // x0
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  if ( (byte_5974A42 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_CombineCommandCodeListViewItemDraw___);
    byte_5974A42 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_2213CDC(0, v3);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_CombineCommandCodeListViewItemDraw___);
  this->fields.itemDraw = (struct CombineCommandCodeListViewItemDraw_o *)Component_object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.itemDraw,
    (int32_t)Component_object,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
}


CombineCommandCodeListViewItem_o *CombineCommandCodeListViewObject__GetItem(
        CombineCommandCodeListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11

  if ( (byte_5974A43 & 1) == 0 )
  {
    sub_2213A60(&CombineCommandCodeListViewItem_TypeInfo);
    byte_5974A43 = 1;
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
  struct ListViewItem_o *linkItem; // x9
  ListViewItem_c *klass; // x9
  __int64 naturalAligment; // x10
  unsigned int v12; // w23
  int32_t dispMode; // w22
  int32_t state; // w24
  UnityEngine_Transform_o *transform; // x0
  __int64 v16; // x1
  MissionNaviTransitionBoardItem_o *p_callbackFunc; // x21
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  const MethodInfo *v24; // x1
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  int32_t v31; // w8
  MissionNaviTransitionBoardItem_c *v32; // x19

  if ( (byte_5974A45 & 1) == 0 )
  {
    sub_2213A60(&CombineCommandCodeListViewItem_TypeInfo);
    byte_5974A45 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem
    && (klass = linkItem->klass,
        naturalAligment = CombineCommandCodeListViewItem_TypeInfo->_2.naturalAligment,
        klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (CombineCommandCodeListViewItem_c *)klass->_2.typeHierarchy[naturalAligment - 1] == CombineCommandCodeListViewItem_TypeInfo )
      v12 = initMode;
    else
      v12 = 0;
  }
  else
  {
    v12 = 0;
  }
  state = this->fields.state;
  dispMode = this->fields.dispMode;
  ListViewObject__SetVisible((ListViewObject_o *)this, v12 != 0, 0);
  ((void (__fastcall *)(CombineCommandCodeListViewObject_o *, bool, const MethodInfo *))this->klass->vtable._9_SetInput.methodPtr)(
    this,
    v12 == 3,
    this->klass->vtable._9_SetInput.method);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0)) == 0) )
  {
    sub_2213CDC(transform, v16);
  }
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0);
  this->fields.callbackFunc = callbackFunc;
  p_callbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callbackFunc,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  if ( v12 <= 3 )
  {
    v31 = *((_DWORD *)&xmmword_E9C5F0 + v12);
    this->fields.state = dword_E9CE90[v12];
    this->fields.dispMode = v31;
  }
  if ( !state || dispMode != this->fields.dispMode )
    CombineCommandCodeListViewObject__SetupDisp(this, v24);
  v32 = p_callbackFunc->klass;
  if ( p_callbackFunc->klass )
  {
    p_callbackFunc->klass = 0;
    sub_2213A04(p_callbackFunc, 0, v25, v26, v27, v28, v29, v30);
    ((void (__fastcall *)(Il2CppClass *, _QWORD))v32->_1.namespaze)(
      v32->_1.element_class,
      *(_QWORD *)&v32->_1.byval_arg.bits);
  }
}


void CombineCommandCodeListViewObject__InitItem(CombineCommandCodeListViewObject_o *this, const MethodInfo *method)
{
  this->fields.state = 0;
}


// local variable allocation has failed, the output may be wrong!
void CombineCommandCodeListViewObject__Init_55727424(
        CombineCommandCodeListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  float v4; // s0
  int v5; // s1 OVERLAPPED

  if ( !byte_5969AE0 )
  {
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  CombineCommandCodeListViewObject__Init(this, initMode, 0, v4, *(UnityEngine_Vector3_o *)&v5, v3);
}


// local variable allocation has failed, the output may be wrong!
void CombineCommandCodeListViewObject__Init_55728172(
        CombineCommandCodeListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  float v4; // s0
  int v5; // s1 OVERLAPPED

  if ( !byte_5969AE0 )
  {
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  CombineCommandCodeListViewObject__Init(this, initMode, callbackFunc, v4, *(UnityEngine_Vector3_o *)&v5, method);
}


// local variable allocation has failed, the output may be wrong!
void CombineCommandCodeListViewObject__Init_55736416(
        CombineCommandCodeListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        const MethodInfo *method)
{
  int v5; // s1 OVERLAPPED

  if ( !byte_5969AE0 )
  {
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  CombineCommandCodeListViewObject__Init(this, initMode, callbackFunc, delay, *(UnityEngine_Vector3_o *)&v5, method);
}


void CombineCommandCodeListViewObject__OnClickSelect(
        CombineCommandCodeListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Component_o *manager; // x21
  CombineCommandCodeListViewObject_o *v4; // x19
  struct ListViewItem_o *linkItem; // x20
  CombineCommandCodeListViewItem_c *v6; // x1
  __int64 naturalAligment; // x9
  CombineCommandCodeListViewManager_c *v8; // x1
  __int64 v9; // x9
  int m_CachedPtr; // w8
  _QWORD *v11; // x0
  System_Reflection_MethodBase_o *v12; // x0
  const MethodInfo *v13; // x1
  CombineCommandCodeListViewObject_o *v14; // x0
  _QWORD *v15; // x0
  System_Reflection_MethodBase_o *v16; // x0
  _QWORD *v17; // x0
  System_Reflection_MethodBase_o *v18; // x0

  v4 = this;
  if ( (byte_5974A47 & 1) == 0 )
  {
    sub_2213A60(&CombineCommandCodeListViewItem_TypeInfo);
    sub_2213A60(&CombineCommandCodeListViewManager_TypeInfo);
    sub_2213A60(&Method_CombineCommandCodeListViewObject_OnClickSelect__);
    this = (CombineCommandCodeListViewObject_o *)sub_2213A60(&StringLiteral_10248/*"OnClickListView"*/);
    byte_5974A47 = 1;
  }
  linkItem = v4->fields.linkItem;
  if ( !linkItem )
    return;
  v6 = CombineCommandCodeListViewItem_TypeInfo;
  naturalAligment = CombineCommandCodeListViewItem_TypeInfo->_2.naturalAligment;
  if ( linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (CombineCommandCodeListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] != CombineCommandCodeListViewItem_TypeInfo )
  {
    sub_221405C(v4->fields.linkItem, CombineCommandCodeListViewItem_TypeInfo, v2);
    goto LABEL_26;
  }
  manager = (UnityEngine_Component_o *)v4->fields.manager;
  if ( !manager )
    goto LABEL_27;
  v8 = CombineCommandCodeListViewManager_TypeInfo;
  v9 = CombineCommandCodeListViewManager_TypeInfo->_2.naturalAligment;
  if ( manager->klass->_2.naturalAligment < (unsigned int)v9
    || (CombineCommandCodeListViewManager_c *)manager->klass->_2.typeHierarchy[v9 - 1] != CombineCommandCodeListViewManager_TypeInfo )
  {
LABEL_26:
    sub_221405C(manager, v8, v2);
LABEL_27:
    sub_2213CDC(this, v6);
  }
  ListViewManager__ClearScrollBarValue(v4->fields.manager, 1, 0);
  m_CachedPtr = manager[22].fields.m_CachedPtr;
  if ( m_CachedPtr == 2 )
  {
    v15 = Method_CombineCommandCodeListViewObject_OnClickSelect__;
    if ( (*((_BYTE *)Method_CombineCommandCodeListViewObject_OnClickSelect__ + 83) & 2) != 0 )
      v15 = (_QWORD *)sub_2213A78(Method_CombineCommandCodeListViewObject_OnClickSelect__);
    v16 = (System_Reflection_MethodBase_o *)sub_2213A44(v15, v15[4]);
    OverwriteAssetSoundName__PlaySystemSe(v16, 0, 0, 0);
    v14 = v4;
    BYTE6(linkItem[1].klass) ^= 1u;
    goto LABEL_18;
  }
  if ( m_CachedPtr == 1 )
  {
    v11 = Method_CombineCommandCodeListViewObject_OnClickSelect__;
    if ( (*((_BYTE *)Method_CombineCommandCodeListViewObject_OnClickSelect__ + 83) & 2) != 0 )
      v11 = (_QWORD *)sub_2213A78(Method_CombineCommandCodeListViewObject_OnClickSelect__);
    v12 = (System_Reflection_MethodBase_o *)sub_2213A44(v11, v11[4]);
    OverwriteAssetSoundName__PlaySystemSe(v12, 11, 0, 0);
    v14 = v4;
    BYTE5(linkItem[1].klass) ^= 1u;
LABEL_18:
    CombineCommandCodeListViewObject__SetupDisp(v14, v13);
    return;
  }
  if ( BYTE4(linkItem[1].klass) || HIBYTE(linkItem[1].klass) )
  {
    v17 = Method_CombineCommandCodeListViewObject_OnClickSelect__;
    if ( (*((_BYTE *)Method_CombineCommandCodeListViewObject_OnClickSelect__ + 83) & 2) != 0 )
      v17 = (_QWORD *)sub_2213A78(Method_CombineCommandCodeListViewObject_OnClickSelect__);
    v18 = (System_Reflection_MethodBase_o *)sub_2213A44(v17, v17[4]);
    OverwriteAssetSoundName__PlaySystemSe(v18, 2, 0, 0);
  }
  else
  {
    UnityEngine_Component__SendMessage(
      manager,
      (System_String_o *)StringLiteral_10248/*"OnClickListView"*/,
      (Il2CppObject *)v4->fields.linkItem,
      0);
  }
}


void CombineCommandCodeListViewObject__OnLongPush(CombineCommandCodeListViewObject_o *this, const MethodInfo *method)
{
  Il2CppObject *linkItem; // x2
  UnityEngine_Component_o *manager; // x0
  __int64 naturalAligment; // x9

  if ( (byte_5974A48 & 1) == 0 )
  {
    sub_2213A60(&CombineCommandCodeListViewManager_TypeInfo);
    sub_2213A60(&StringLiteral_10330/*"OnLongPushListView"*/);
    byte_5974A48 = 1;
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
        UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_10330/*"OnLongPushListView"*/, linkItem, 0);
        return;
      }
      sub_221405C(manager, CombineCommandCodeListViewManager_TypeInfo, linkItem);
    }
    sub_2213CDC(manager, method);
  }
}


void CombineCommandCodeListViewObject__SetInput(
        CombineCommandCodeListViewObject_o *this,
        bool isInput,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Object_o *itemDraw; // x20
  const MethodInfo *v7; // x2
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11
  struct ListViewItem_o *v10; // x1
  CombineCommandCodeListViewItemDraw_o *v11; // x0

  if ( (byte_5974A44 & 1) == 0 )
  {
    sub_2213A60(&CombineCommandCodeListViewItem_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974A44 = 1;
  }
  ListViewObject__SetInput((ListViewObject_o *)this, isInput, 0);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
  {
    linkItem = this->fields.linkItem;
    if ( linkItem
      && (naturalAligment = CombineCommandCodeListViewItem_TypeInfo->_2.naturalAligment,
          linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
    {
      if ( (CombineCommandCodeListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == CombineCommandCodeListViewItem_TypeInfo )
        v10 = this->fields.linkItem;
      else
        v10 = 0;
    }
    else
    {
      v10 = 0;
    }
    v11 = this->fields.itemDraw;
    if ( !v11 )
      sub_2213CDC(0, v10);
    CombineCommandCodeListViewItemDraw__SetInput(v11, (CombineCommandCodeListViewItem_o *)v10, v7);
  }
}


void CombineCommandCodeListViewObject__SetItem(
        CombineCommandCodeListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  ListViewObject__SetItem_50850568((ListViewObject_o *)this, item, seed, 0);
  this->fields.state = 0;
}


void CombineCommandCodeListViewObject__SetItem_55735504(
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
  __int64 v6; // x1
  UnityEngine_Object_o *itemDraw; // x21
  __int64 v8; // x1
  const MethodInfo *v9; // x3
  CombineCommandCodeListViewItemDraw_o *v10; // x0

  if ( (byte_5974A46 & 1) == 0 )
  {
    sub_2213A60(&CombineCommandCodeListViewItem_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974A46 = 1;
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
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
  {
    v10 = this->fields.itemDraw;
    if ( !v10 )
      sub_2213CDC(0, v8);
    CombineCommandCodeListViewItemDraw__SetItem(
      v10,
      (CombineCommandCodeListViewItem_o *)linkItem,
      this->fields.dispMode,
      v9);
  }
}


System_String_o *CombineCommandCodeListViewObject__ToString(
        CombineCommandCodeListViewObject_o *this,
        const MethodInfo *method)
{
  int32_t dispMode; // w10
  System_String_o *v4; // x0
  float z; // w9
  System_String_o *v6; // x20
  System_String_o *v7; // x0
  System_Enum_o v9; // [xsp+8h] [xbp-58h] BYREF
  int32_t v10; // [xsp+18h] [xbp-48h]
  __int64 v11; // [xsp+20h] [xbp-40h] BYREF
  float v12; // [xsp+28h] [xbp-38h]

  if ( (byte_5974A49 & 1) == 0 )
  {
    sub_2213A60(&CombineCommandCodeListViewItemDraw_DispMode_TypeInfo);
    sub_2213A60(&StringLiteral_113/*" "*/);
    byte_5974A49 = 1;
  }
  dispMode = this->fields.dispMode;
  v12 = 0.0;
  v11 = 0;
  v9.klass = (System_Enum_c *)CombineCommandCodeListViewItemDraw_DispMode_TypeInfo;
  v9.monitor = (void *)-1LL;
  v10 = dispMode;
  v4 = System_Enum__ToString(&v9, 0);
  z = this->fields.basePosition.fields.z;
  v6 = v4;
  v11 = *(_QWORD *)&this->fields.basePosition.fields.x;
  v12 = z;
  v7 = (System_String_o *)sub_2402C74(&v11, 0, 0, 0);
  return System_String__Concat_75694928(v6, (System_String_o *)StringLiteral_113/*" "*/, v7, 0);
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
  __int64 v9; // x2
  __int64 v10; // x0
  bool v11; // zf
  CombineCommandCodeListViewObject_o *v12; // x0
  System_Action_o *v13; // x1
  const MethodInfo *v14; // x2

  if ( (byte_5974A40 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    byte_5974A40 = 1;
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
    v10 = sub_224B48C(p_callbackFunc, v8, v6);
    v11 = v10 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  sub_221405C(v8, System_Action_TypeInfo, v9);
  CombineCommandCodeListViewObject__remove_callbackFunc(v12, v13, v14);
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
  __int64 v9; // x2
  __int64 v10; // x0
  bool v11; // zf
  CombineCommandCodeListViewObject_o *v12; // x0
  const MethodInfo *v13; // x1

  if ( (byte_5974A41 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    byte_5974A41 = 1;
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
    v10 = sub_224B48C(p_callbackFunc, v8, v6);
    v11 = v10 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  sub_221405C(v8, System_Action_TypeInfo, v9);
  CombineCommandCodeListViewObject__Awake(v12, v13);
}