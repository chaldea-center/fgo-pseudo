void CostumeListViewObject___ctor(CostumeListViewObject_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_596A269 & 1) == 0 )
  {
    sub_2213A60(&ListViewObject_TypeInfo);
    byte_596A269 = 1;
  }
  if ( !*(&ListViewObject_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo, method, v2);
  ListViewObject___ctor((ListViewObject_o *)this, 0);
}


void CostumeListViewObject__Awake(CostumeListViewObject_o *this, const MethodInfo *method)
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

  if ( (byte_596A262 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_CostumeListViewItemDraw___);
    byte_596A262 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_2213CDC(0, v3);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_CostumeListViewItemDraw___);
  this->fields.itemDraw = (struct CostumeListViewItemDraw_o *)Component_object;
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


CostumeListViewItem_o *CostumeListViewObject__GetItem(CostumeListViewObject_o *this, const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11

  if ( (byte_596A263 & 1) == 0 )
  {
    sub_2213A60(&CostumeListViewItem_TypeInfo);
    byte_596A263 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0;
  naturalAligment = CostumeListViewItem_TypeInfo->_2.naturalAligment;
  if ( linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment )
    return 0;
  if ( (CostumeListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == CostumeListViewItem_TypeInfo )
    return (CostumeListViewItem_o *)this->fields.linkItem;
  return 0;
}


void CostumeListViewObject__Init(
        CostumeListViewObject_o *this,
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

  if ( (byte_596A265 & 1) == 0 )
  {
    sub_2213A60(&CostumeListViewItem_TypeInfo);
    byte_596A265 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem
    && (klass = linkItem->klass,
        naturalAligment = CostumeListViewItem_TypeInfo->_2.naturalAligment,
        klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (CostumeListViewItem_c *)klass->_2.typeHierarchy[naturalAligment - 1] == CostumeListViewItem_TypeInfo )
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
  ((void (__fastcall *)(CostumeListViewObject_o *, bool, const MethodInfo *))this->klass->vtable._9_SetInput.methodPtr)(
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
    CostumeListViewObject__SetupDisp(this, v24);
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


void CostumeListViewObject__InitItem(CostumeListViewObject_o *this, const MethodInfo *method)
{
  this->fields.state = 0;
}


// local variable allocation has failed, the output may be wrong!
void CostumeListViewObject__Init_37707340(CostumeListViewObject_o *this, int32_t initMode, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  float v4; // s0
  int v5; // s1 OVERLAPPED

  if ( !byte_5969AE0 )
  {
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  CostumeListViewObject__Init(this, initMode, 0, v4, *(UnityEngine_Vector3_o *)&v5, v3);
}


// local variable allocation has failed, the output may be wrong!
void CostumeListViewObject__Init_37707936(
        CostumeListViewObject_o *this,
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
  CostumeListViewObject__Init(this, initMode, callbackFunc, v4, *(UnityEngine_Vector3_o *)&v5, method);
}


// local variable allocation has failed, the output may be wrong!
void CostumeListViewObject__Init_37709924(
        CostumeListViewObject_o *this,
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
  CostumeListViewObject__Init(this, initMode, callbackFunc, delay, *(UnityEngine_Vector3_o *)&v5, method);
}


void CostumeListViewObject__OnClickSelect(CostumeListViewObject_o *this, const MethodInfo *method)
{
  CostumeListViewObject_o *v2; // x19
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0

  v2 = this;
  if ( (byte_596A268 & 1) == 0 )
  {
    sub_2213A60(&CostumeListViewItem_TypeInfo);
    sub_2213A60(&Method_CostumeListViewObject_OnClickSelect__);
    this = (CostumeListViewObject_o *)sub_2213A60(&StringLiteral_10267/*"OnClickSelectListView"*/);
    byte_596A268 = 1;
  }
  linkItem = v2->fields.linkItem;
  if ( linkItem )
  {
    naturalAligment = CostumeListViewItem_TypeInfo->_2.naturalAligment;
    if ( linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment
      && (CostumeListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == CostumeListViewItem_TypeInfo )
    {
      if ( HIBYTE(linkItem[1].fields.index) || LOBYTE(linkItem[1].fields.sortIndex) )
      {
        v5 = Method_CostumeListViewObject_OnClickSelect__;
        if ( (*((_BYTE *)Method_CostumeListViewObject_OnClickSelect__ + 83) & 2) != 0 )
          v5 = (_QWORD *)sub_2213A78(Method_CostumeListViewObject_OnClickSelect__);
        v6 = (System_Reflection_MethodBase_o *)sub_2213A44(v5, v5[4]);
        OverwriteAssetSoundName__PlaySystemSe(v6, 2, 0, 0);
        return;
      }
      this = (CostumeListViewObject_o *)v2->fields.manager;
      if ( this )
      {
        UnityEngine_Component__SendMessage(
          (UnityEngine_Component_o *)this,
          (System_String_o *)StringLiteral_10267/*"OnClickSelectListView"*/,
          (Il2CppObject *)v2,
          0);
        return;
      }
    }
    sub_2213CDC(this, method);
  }
}


void CostumeListViewObject__SetInput(CostumeListViewObject_o *this, bool isInput, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_Object_o *itemDraw; // x20
  const MethodInfo *v8; // x2
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11
  struct ListViewItem_o *v11; // x1
  CostumeListViewItemDraw_o *v12; // x0

  if ( (byte_596A264 & 1) == 0 )
  {
    sub_2213A60(&CostumeListViewItem_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596A264 = 1;
  }
  ListViewObject__SetInput((ListViewObject_o *)this, isInput, 0);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
  {
    linkItem = this->fields.linkItem;
    if ( linkItem
      && (naturalAligment = CostumeListViewItem_TypeInfo->_2.naturalAligment,
          linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
    {
      if ( (CostumeListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == CostumeListViewItem_TypeInfo )
        v11 = this->fields.linkItem;
      else
        v11 = 0;
    }
    else
    {
      v11 = 0;
    }
    v12 = this->fields.itemDraw;
    if ( !v12 )
      sub_2213CDC(0, v11);
    CostumeListViewItemDraw__SetInput(v12, (CostumeListViewItem_o *)v11, v8);
  }
}


void CostumeListViewObject__SetItem(
        CostumeListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  ListViewObject__SetItem_50850568((ListViewObject_o *)this, item, seed, 0);
  this->fields.state = 0;
}


void CostumeListViewObject__SetItem_37709012(
        CostumeListViewObject_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ListViewObject__SetItem((ListViewObject_o *)this, item, 0);
  this->fields.state = 0;
}


void CostumeListViewObject__SetupDisp(CostumeListViewObject_o *this, const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x20
  __int64 naturalAligment; // x10
  bool v5; // w1
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Object_o *itemDraw; // x21
  __int64 v9; // x1
  const MethodInfo *v10; // x3
  CostumeListViewItemDraw_o *v11; // x0

  if ( (byte_596A266 & 1) == 0 )
  {
    sub_2213A60(&CostumeListViewItem_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596A266 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    goto LABEL_7;
  naturalAligment = CostumeListViewItem_TypeInfo->_2.naturalAligment;
  if ( linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (CostumeListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] != CostumeListViewItem_TypeInfo )
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
  {
    v11 = this->fields.itemDraw;
    if ( !v11 )
      sub_2213CDC(0, v9);
    CostumeListViewItemDraw__SetItem(v11, (CostumeListViewItem_o *)linkItem, this->fields.dispMode, v10);
  }
}


System_String_o *CostumeListViewObject__ToString(CostumeListViewObject_o *this, const MethodInfo *method)
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

  if ( (byte_596A267 & 1) == 0 )
  {
    sub_2213A60(&CostumeListViewItemDraw_DispMode_TypeInfo);
    sub_2213A60(&StringLiteral_113/*" "*/);
    byte_596A267 = 1;
  }
  dispMode = this->fields.dispMode;
  v12 = 0.0;
  v11 = 0;
  v9.klass = (System_Enum_c *)CostumeListViewItemDraw_DispMode_TypeInfo;
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


void CostumeListViewObject__add_callbackFunc(
        CostumeListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  CostumeListViewObject_o *v13; // x0
  System_Action_o *v14; // x1
  const MethodInfo *v15; // x2

  if ( (byte_596A260 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    byte_596A260 = 1;
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
    v11 = sub_224B48C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  v13 = (CostumeListViewObject_o *)sub_221405C(v8, System_Action_TypeInfo, v9, v10);
  CostumeListViewObject__remove_callbackFunc(v13, v14, v15);
}


void CostumeListViewObject__remove_callbackFunc(
        CostumeListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  CostumeListViewObject_o *v13; // x0
  const MethodInfo *v14; // x1

  if ( (byte_596A261 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    byte_596A261 = 1;
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
    v11 = sub_224B48C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  v13 = (CostumeListViewObject_o *)sub_221405C(v8, System_Action_TypeInfo, v9, v10);
  CostumeListViewObject__Awake(v13, v14);
}