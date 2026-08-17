void ServantCheckEquipListViewObject___ctor(ServantCheckEquipListViewObject_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_596C5D3 & 1) == 0 )
  {
    sub_2213A60(&ListViewObject_TypeInfo);
    byte_596C5D3 = 1;
  }
  if ( !*(&ListViewObject_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo, method, v2);
  ListViewObject___ctor((ListViewObject_o *)this, 0);
}


void ServantCheckEquipListViewObject__Awake(ServantCheckEquipListViewObject_o *this, const MethodInfo *method)
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

  if ( (byte_596C5CD & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_ServantCheckEquipListViewItemDraw___);
    byte_596C5CD = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_2213CDC(0, v3);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_ServantCheckEquipListViewItemDraw___);
  this->fields.itemDraw = (struct ServantCheckEquipListViewItemDraw_o *)Component_object;
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


ServantCheckEquipListViewItem_o *ServantCheckEquipListViewObject__GetItem(
        ServantCheckEquipListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11

  if ( (byte_596C5CE & 1) == 0 )
  {
    sub_2213A60(&ServantCheckEquipListViewItem_TypeInfo);
    byte_596C5CE = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0;
  naturalAligment = ServantCheckEquipListViewItem_TypeInfo->_2.naturalAligment;
  if ( linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment )
    return 0;
  if ( (ServantCheckEquipListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == ServantCheckEquipListViewItem_TypeInfo )
    return (ServantCheckEquipListViewItem_o *)this->fields.linkItem;
  return 0;
}


void ServantCheckEquipListViewObject__Init(
        ServantCheckEquipListViewObject_o *this,
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

  if ( (byte_596C5D0 & 1) == 0 )
  {
    sub_2213A60(&ServantCheckEquipListViewItem_TypeInfo);
    byte_596C5D0 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem
    && (klass = linkItem->klass,
        naturalAligment = ServantCheckEquipListViewItem_TypeInfo->_2.naturalAligment,
        klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (ServantCheckEquipListViewItem_c *)klass->_2.typeHierarchy[naturalAligment - 1] == ServantCheckEquipListViewItem_TypeInfo )
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
  ((void (__fastcall *)(ServantCheckEquipListViewObject_o *, bool, const MethodInfo *))this->klass->vtable._9_SetInput.methodPtr)(
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
    ServantCheckEquipListViewObject__SetupDisp(this, v24);
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


void ServantCheckEquipListViewObject__InitItem(ServantCheckEquipListViewObject_o *this, const MethodInfo *method)
{
  this->fields.state = 0;
}


// local variable allocation has failed, the output may be wrong!
void ServantCheckEquipListViewObject__Init_41701964(
        ServantCheckEquipListViewObject_o *this,
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
  ServantCheckEquipListViewObject__Init(this, initMode, 0, v4, *(UnityEngine_Vector3_o *)&v5, v3);
}


// local variable allocation has failed, the output may be wrong!
void ServantCheckEquipListViewObject__Init_41702452(
        ServantCheckEquipListViewObject_o *this,
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
  ServantCheckEquipListViewObject__Init(this, initMode, callbackFunc, v4, *(UnityEngine_Vector3_o *)&v5, method);
}


// local variable allocation has failed, the output may be wrong!
void ServantCheckEquipListViewObject__Init_41705756(
        ServantCheckEquipListViewObject_o *this,
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
  ServantCheckEquipListViewObject__Init(this, initMode, callbackFunc, delay, *(UnityEngine_Vector3_o *)&v5, method);
}


void ServantCheckEquipListViewObject__SetInput(
        ServantCheckEquipListViewObject_o *this,
        bool isInput,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_Object_o *itemDraw; // x20
  _BOOL8 v8; // x0
  __int64 v9; // x1

  if ( (byte_596C5CF & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&ServantCheckEquipListViewItem_TypeInfo);
    byte_596C5CF = 1;
  }
  ListViewObject__SetInput((ListViewObject_o *)this, isInput, 0);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
  v8 = UnityEngine_Object__op_Inequality(itemDraw, 0, 0);
  if ( v8 && !this->fields.itemDraw )
    sub_2213CDC(v8, v9);
}


void ServantCheckEquipListViewObject__SetItem(
        ServantCheckEquipListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  ListViewObject__SetItem_50850568((ListViewObject_o *)this, item, seed, 0);
  this->fields.state = 0;
}


void ServantCheckEquipListViewObject__SetItem_41704928(
        ServantCheckEquipListViewObject_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ListViewObject__SetItem((ListViewObject_o *)this, item, 0);
  this->fields.state = 0;
}


void ServantCheckEquipListViewObject__SetupDisp(ServantCheckEquipListViewObject_o *this, const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x20
  __int64 naturalAligment; // x10
  bool v5; // w1
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Object_o *itemDraw; // x21
  __int64 v9; // x1
  const MethodInfo *v10; // x3
  ServantCheckEquipListViewItemDraw_o *v11; // x0

  if ( (byte_596C5D1 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&ServantCheckEquipListViewItem_TypeInfo);
    byte_596C5D1 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    goto LABEL_7;
  naturalAligment = ServantCheckEquipListViewItem_TypeInfo->_2.naturalAligment;
  if ( linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (ServantCheckEquipListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] != ServantCheckEquipListViewItem_TypeInfo )
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
    ServantCheckEquipListViewItemDraw__SetItem(
      v11,
      (ServantCheckEquipListViewItem_o *)linkItem,
      this->fields.dispMode,
      v10);
  }
}


System_String_o *ServantCheckEquipListViewObject__ToString(
        ServantCheckEquipListViewObject_o *this,
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

  if ( (byte_596C5D2 & 1) == 0 )
  {
    sub_2213A60(&ServantCheckEquipListViewItemDraw_DispMode_TypeInfo);
    sub_2213A60(&StringLiteral_113/*" "*/);
    byte_596C5D2 = 1;
  }
  dispMode = this->fields.dispMode;
  v12 = 0.0;
  v11 = 0;
  v9.klass = (System_Enum_c *)ServantCheckEquipListViewItemDraw_DispMode_TypeInfo;
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


void ServantCheckEquipListViewObject__add_callbackFunc(
        ServantCheckEquipListViewObject_o *this,
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
  ServantCheckEquipListViewObject_o *v13; // x0
  System_Action_o *v14; // x1
  const MethodInfo *v15; // x2

  if ( (byte_596C5CB & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    byte_596C5CB = 1;
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
  v13 = (ServantCheckEquipListViewObject_o *)sub_221405C(v8, System_Action_TypeInfo, v9, v10);
  ServantCheckEquipListViewObject__remove_callbackFunc(v13, v14, v15);
}


void ServantCheckEquipListViewObject__remove_callbackFunc(
        ServantCheckEquipListViewObject_o *this,
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
  ServantCheckEquipListViewObject_o *v13; // x0
  const MethodInfo *v14; // x1

  if ( (byte_596C5CC & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    byte_596C5CC = 1;
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
  v13 = (ServantCheckEquipListViewObject_o *)sub_221405C(v8, System_Action_TypeInfo, v9, v10);
  ServantCheckEquipListViewObject__Awake(v13, v14);
}