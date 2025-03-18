void __fastcall MyRoomHelpListViewObject___ctor(MyRoomHelpListViewObject_o *this, const MethodInfo *method)
{
  if ( (byte_4C1D913 & 1) == 0 )
  {
    sub_1C3B764(&ListViewObject_TypeInfo, method);
    byte_4C1D913 = 1;
  }
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  ListViewObject___ctor((ListViewObject_o *)this, 0LL);
}


void __fastcall MyRoomHelpListViewObject__Awake(MyRoomHelpListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0

  if ( (byte_4C1D90D & 1) == 0 )
  {
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_MyRoomHelpListViewItemDraw___, method);
    byte_4C1D90D = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1C3B9C0(0LL, v3);
  this->fields.itemDraw = (struct MyRoomHelpListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                   dispObject,
                                                                   (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_MyRoomHelpListViewItemDraw___);
  sub_1C3B708(&this->fields.itemDraw);
}


UnityEngine_GameObject_o *__fastcall MyRoomHelpListViewObject__CreateDragObject(
        MyRoomHelpListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *DragObject; // x0
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x19
  const MethodInfo *v6; // x2

  if ( (byte_4C1D910 & 1) == 0 )
  {
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_MyRoomHelpListViewObject___, method);
    byte_4C1D910 = 1;
  }
  DragObject = ListViewObject__CreateDragObject((ListViewObject_o *)this, 0LL);
  if ( !DragObject
    || (v5 = DragObject,
        (DragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                    DragObject,
                                                    (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_MyRoomHelpListViewObject___)) == 0LL) )
  {
    sub_1C3B9C0(DragObject, v4);
  }
  MyRoomHelpListViewObject__Init_32866284((MyRoomHelpListViewObject_o *)DragObject, 2, v6);
  return v5;
}


MyRoomHelpListViewItem_o *__fastcall MyRoomHelpListViewObject__GetItem(
        MyRoomHelpListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x11

  if ( (byte_4C1D90F & 1) == 0 )
  {
    sub_1C3B764(&MyRoomHelpListViewItem_TypeInfo, method);
    byte_4C1D90F = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0LL;
  methodPtr_low = LOBYTE(MyRoomHelpListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
    return 0LL;
  if ( (MyRoomHelpListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == MyRoomHelpListViewItem_TypeInfo )
    return (MyRoomHelpListViewItem_o *)this->fields.linkItem;
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomHelpListViewObject__Init(
        MyRoomHelpListViewObject_o *this,
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
  struct System_Action_o **p_callbackFunc; // x21
  const MethodInfo *v17; // x1
  int32_t v18; // w9
  struct System_Action_o *v19; // x19

  if ( (byte_4C1D911 & 1) == 0 )
  {
    sub_1C3B764(&MyRoomHelpListViewItem_TypeInfo, *(_QWORD *)&initMode);
    byte_4C1D911 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem
    && (methodPtr_low = LOBYTE(MyRoomHelpListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
  {
    if ( (MyRoomHelpListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == MyRoomHelpListViewItem_TypeInfo )
      v11 = initMode;
    else
      v11 = 0;
  }
  else
  {
    v11 = 0;
  }
  dispMode = this->fields.dispMode;
  state = this->fields.state;
  ListViewObject__SetVisible((ListViewObject_o *)this, v11 != 0, 0LL);
  ((void (__fastcall *)(MyRoomHelpListViewObject_o *, bool, Il2CppMethodPointer))this->klass->vtable._9_SetInput.method)(
    this,
    v11 == 3,
    this->klass->vtable._10_Invalidation.methodPtr);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0LL),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_1C3B9C0(transform, v15);
  }
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0LL);
  this->fields.callbackFunc = callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  sub_1C3B708(&this->fields.callbackFunc);
  if ( (unsigned int)v11 <= 3 )
  {
    v18 = dword_C0CCF0[v11];
    this->fields.dispMode = *((_DWORD *)&xmmword_C0D8E0 + v11);
    this->fields.state = v18;
  }
  if ( !state || dispMode != this->fields.dispMode )
    MyRoomHelpListViewObject__SetupDisp(this, v17);
  v19 = *p_callbackFunc;
  if ( *p_callbackFunc )
  {
    *p_callbackFunc = 0LL;
    sub_1C3B708(p_callbackFunc);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v19->fields.m_target)(
      v19->fields.original_method_info,
      *(_QWORD *)&v19->fields.extra_arg);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomHelpListViewObject__Init_32866284(
        MyRoomHelpListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  float v4; // s0
  int v5; // s1

  if ( !byte_4C1C511 )
  {
    sub_1C3B764(&UnityEngine_Vector3_TypeInfo, *(_QWORD *)&initMode);
    byte_4C1C511 = 1;
  }
  MyRoomHelpListViewObject__Init(this, initMode, 0LL, v4, *(UnityEngine_Vector3_o *)&v5, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomHelpListViewObject__Init_32866880(
        MyRoomHelpListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        const MethodInfo *method)
{
  int v5; // s1

  if ( !byte_4C1C511 )
  {
    sub_1C3B764(&UnityEngine_Vector3_TypeInfo, *(_QWORD *)&initMode);
    byte_4C1C511 = 1;
  }
  MyRoomHelpListViewObject__Init(this, initMode, callbackFunc, delay, *(UnityEngine_Vector3_o *)&v5, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomHelpListViewObject__Init_32867468(
        MyRoomHelpListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  float v4; // s0
  int v5; // s1

  if ( !byte_4C1C511 )
  {
    sub_1C3B764(&UnityEngine_Vector3_TypeInfo, *(_QWORD *)&initMode);
    byte_4C1C511 = 1;
  }
  MyRoomHelpListViewObject__Init(this, initMode, callbackFunc, v4, *(UnityEngine_Vector3_o *)&v5, method);
}


void __fastcall MyRoomHelpListViewObject__OnDestroy(MyRoomHelpListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct UnityEngine_GameObject_o **p_dragObject; // x19
  UnityEngine_Object_o *v5; // x20
  struct UnityEngine_GameObject_o *dragObject; // t1
  UnityEngine_Object_o *v7; // x20

  if ( (byte_4C1D90E & 1) == 0 )
  {
    sub_1C3B764(&NGUITools_TypeInfo, method);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v3);
    byte_4C1D90E = 1;
  }
  dragObject = this->fields.dragObject;
  p_dragObject = &this->fields.dragObject;
  v5 = (UnityEngine_Object_o *)dragObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v5, 0LL, 0LL) )
  {
    v7 = (UnityEngine_Object_o *)*p_dragObject;
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    NGUITools__Destroy(v7, 0LL);
    *p_dragObject = 0LL;
    sub_1C3B708(p_dragObject);
  }
}


void __fastcall MyRoomHelpListViewObject__SetItem(
        MyRoomHelpListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  this->fields.state = 0;
  ListViewObject__SetItem_42230072((ListViewObject_o *)this, item, seed, 0LL);
}


void __fastcall MyRoomHelpListViewObject__SetupDisp(MyRoomHelpListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct ListViewItem_o *linkItem; // x20
  __int64 methodPtr_low; // x10
  bool v6; // w1
  UnityEngine_Object_o *itemDraw; // x21
  __int64 v8; // x1
  const MethodInfo *v9; // x3
  MyRoomHelpListViewItemDraw_o *v10; // x0

  if ( (byte_4C1D912 & 1) == 0 )
  {
    sub_1C3B764(&MyRoomHelpListViewItem_TypeInfo, method);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v3);
    byte_4C1D912 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    goto LABEL_7;
  methodPtr_low = LOBYTE(MyRoomHelpListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (MyRoomHelpListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] != MyRoomHelpListViewItem_TypeInfo )
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
      sub_1C3B9C0(0LL, v8);
    MyRoomHelpListViewItemDraw__SetItem(v10, (MyRoomHelpListViewItem_o *)linkItem, this->fields.dispMode, v9);
  }
}


void __fastcall MyRoomHelpListViewObject__add_callbackFunc(
        MyRoomHelpListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  MyRoomHelpListViewObject_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4C1D90B & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, value);
    byte_4C1D90B = 1;
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
    v9 = sub_1C76C54(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (MyRoomHelpListViewObject_o *)sub_1C3BC80(v8);
  MyRoomHelpListViewObject__remove_callbackFunc(v11, v12, v13);
}


void __fastcall MyRoomHelpListViewObject__remove_callbackFunc(
        MyRoomHelpListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  MyRoomHelpListViewObject_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4C1D90C & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, value);
    byte_4C1D90C = 1;
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
    v9 = sub_1C76C54(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (MyRoomHelpListViewObject_o *)sub_1C3BC80(v8);
  MyRoomHelpListViewObject__Awake(v11, v12);
}