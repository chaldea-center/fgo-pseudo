void __fastcall PresentBoxNotificationListViewObject___ctor(
        PresentBoxNotificationListViewObject_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A5EC2A & 1) == 0 )
  {
    sub_1B885B0(&ListViewObject_TypeInfo);
    byte_4A5EC2A = 1;
  }
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  ListViewObject___ctor((ListViewObject_o *)this, 0LL);
}


void __fastcall PresentBoxNotificationListViewObject__Awake(
        PresentBoxNotificationListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_4A5EC22 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_PresentBoxNotificationListViewItemDraw___);
    byte_4A5EC22 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1B8880C(0LL, v3);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_PresentBoxNotificationListViewItemDraw___);
  this->fields.itemDraw = (struct PresentBoxNotificationListViewItemDraw_o *)Component_object;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.itemDraw, (int32_t)Component_object, v6, v7);
}


UnityEngine_GameObject_o *__fastcall PresentBoxNotificationListViewObject__CreateDragObject(
        PresentBoxNotificationListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *DragObject; // x0
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x19
  const MethodInfo *v6; // x2

  if ( (byte_4A5EC26 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_PresentBoxNotificationListViewObject___);
    byte_4A5EC26 = 1;
  }
  DragObject = ListViewObject__CreateDragObject((ListViewObject_o *)this, 0LL);
  if ( !DragObject
    || (v5 = DragObject,
        (DragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                    DragObject,
                                                    (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_PresentBoxNotificationListViewObject___)) == 0LL) )
  {
    sub_1B8880C(DragObject, v4);
  }
  PresentBoxNotificationListViewObject__Init_45260536((PresentBoxNotificationListViewObject_o *)DragObject, 2, v6);
  return v5;
}


void __fastcall PresentBoxNotificationListViewObject__EventMoveEnd(
        PresentBoxNotificationListViewObject_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  ServantStatusBattleListViewItem_o *p_callbackFunc; // x0
  struct System_Action_o *v5; // x19
  struct System_Action_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc;
  v5 = callbackFunc;
  p_callbackFunc[-1].fields.isMine = 0;
  *((_DWORD *)&p_callbackFunc[-1].fields.isMine + 1) = 1;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_1B88554(p_callbackFunc, 0, v2, v3);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v5->fields.m_target)(
      v5->fields.original_method_info,
      *(_QWORD *)&v5->fields.extra_arg);
  }
}


PresentBoxNotificationListViewItem_o *__fastcall PresentBoxNotificationListViewObject__GetItem(
        PresentBoxNotificationListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x11

  if ( (byte_4A5EC24 & 1) == 0 )
  {
    sub_1B885B0(&PresentBoxNotificationListViewItem_TypeInfo);
    byte_4A5EC24 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0LL;
  methodPtr_low = LOBYTE(PresentBoxNotificationListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
    return 0LL;
  if ( (PresentBoxNotificationListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == PresentBoxNotificationListViewItem_TypeInfo )
    return (PresentBoxNotificationListViewItem_o *)this->fields.linkItem;
  return 0LL;
}


void __fastcall PresentBoxNotificationListViewObject__Init(
        PresentBoxNotificationListViewObject_o *this,
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
  int32_t v22; // w9
  ServantStatusBattleListViewItem_c *klass; // x19

  if ( (byte_4A5EC27 & 1) == 0 )
  {
    sub_1B885B0(&PresentBoxNotificationListViewItem_TypeInfo);
    byte_4A5EC27 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem
    && (methodPtr_low = LOBYTE(PresentBoxNotificationListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
  {
    if ( (PresentBoxNotificationListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == PresentBoxNotificationListViewItem_TypeInfo )
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
  ((void (__fastcall *)(PresentBoxNotificationListViewObject_o *, bool, Il2CppMethodPointer))this->klass->vtable._9_SetInput.method)(
    this,
    v11 == 3,
    this->klass->vtable._10_Invalidation.methodPtr);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0LL),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_1B8880C(transform, v15);
  }
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0LL);
  this->fields.callbackFunc = callbackFunc;
  p_callbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, (int32_t)callbackFunc, v17, v18);
  if ( (unsigned int)v11 <= 3 )
  {
    v22 = dword_BB3DA0[v11];
    this->fields.dispMode = *((_DWORD *)&xmmword_BB49C0 + v11);
    this->fields.state = v22;
  }
  if ( !state || dispMode != this->fields.dispMode )
    PresentBoxNotificationListViewObject__SetupDisp(this, v19);
  klass = p_callbackFunc->klass;
  if ( p_callbackFunc->klass )
  {
    p_callbackFunc->klass = 0LL;
    sub_1B88554(p_callbackFunc, 0, v20, v21);
    ((void (__fastcall *)(Il2CppClass *, _QWORD))klass->_1.namespaze)(
      klass->_1.element_class,
      *(_QWORD *)&klass->_1.byval_arg.bits);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PresentBoxNotificationListViewObject__Init_45260536(
        PresentBoxNotificationListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  float v4; // s0
  int v5; // s1

  if ( !byte_4A55CE1 )
  {
    sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE1 = 1;
  }
  PresentBoxNotificationListViewObject__Init(this, initMode, 0LL, v4, *(UnityEngine_Vector3_o *)&v5, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PresentBoxNotificationListViewObject__Init_45261832(
        PresentBoxNotificationListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        const MethodInfo *method)
{
  int v5; // s1

  if ( !byte_4A55CE1 )
  {
    sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE1 = 1;
  }
  PresentBoxNotificationListViewObject__Init(this, initMode, callbackFunc, delay, *(UnityEngine_Vector3_o *)&v5, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PresentBoxNotificationListViewObject__Init_45261916(
        PresentBoxNotificationListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  float v4; // s0
  int v5; // s1

  if ( !byte_4A55CE1 )
  {
    sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE1 = 1;
  }
  PresentBoxNotificationListViewObject__Init(this, initMode, callbackFunc, v4, *(UnityEngine_Vector3_o *)&v5, method);
}


void __fastcall PresentBoxNotificationListViewObject__OnDestroy(
        PresentBoxNotificationListViewObject_o *this,
        const MethodInfo *method)
{
  ServantStatusBattleListViewItem_o *p_dragObject; // x19
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_GameObject_o *dragObject; // t1
  UnityEngine_Object_o *klass; // x20
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_4A5EC23 & 1) == 0 )
  {
    sub_1B885B0(&NGUITools_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5EC23 = 1;
  }
  dragObject = this->fields.dragObject;
  p_dragObject = (ServantStatusBattleListViewItem_o *)&this->fields.dragObject;
  v4 = (UnityEngine_Object_o *)dragObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v4, 0LL, 0LL) )
  {
    klass = (UnityEngine_Object_o *)p_dragObject->klass;
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    NGUITools__Destroy(klass, 0LL);
    p_dragObject->klass = 0LL;
    sub_1B88554(p_dragObject, 0, v7, v8);
  }
}


void __fastcall PresentBoxNotificationListViewObject__SetInput(
        PresentBoxNotificationListViewObject_o *this,
        bool isInput,
        const MethodInfo *method)
{
  UnityEngine_Object_o *itemDraw; // x20
  _BOOL8 v6; // x0
  __int64 v7; // x1

  if ( (byte_4A5EC25 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&PresentBoxNotificationListViewItem_TypeInfo);
    byte_4A5EC25 = 1;
  }
  ListViewObject__SetInput((ListViewObject_o *)this, isInput, 0LL);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL);
  if ( v6 && !this->fields.itemDraw )
    sub_1B8880C(v6, v7);
}


void __fastcall PresentBoxNotificationListViewObject__SetItem(
        PresentBoxNotificationListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  this->fields.state = 0;
  ListViewObject__SetItem_40756536((ListViewObject_o *)this, item, seed, 0LL);
}


void __fastcall PresentBoxNotificationListViewObject__SetupDisp(
        PresentBoxNotificationListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x20
  __int64 methodPtr_low; // x10
  bool v5; // w1
  UnityEngine_Object_o *itemDraw; // x21
  __int64 v7; // x1
  const MethodInfo *v8; // x3
  PresentBoxNotificationListViewItemDraw_o *v9; // x0

  if ( (byte_4A5EC28 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&PresentBoxNotificationListViewItem_TypeInfo);
    byte_4A5EC28 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    goto LABEL_7;
  methodPtr_low = LOBYTE(PresentBoxNotificationListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (PresentBoxNotificationListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] != PresentBoxNotificationListViewItem_TypeInfo )
  {
    linkItem = 0LL;
LABEL_7:
    v5 = 0;
    goto LABEL_8;
  }
  v5 = this->fields.dispMode != 0;
LABEL_8:
  ListViewObject__SetVisible((ListViewObject_o *)this, v5, 0LL);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    v9 = this->fields.itemDraw;
    if ( !v9 )
      sub_1B8880C(0LL, v7);
    PresentBoxNotificationListViewItemDraw__SetItem(
      v9,
      (PresentBoxNotificationListViewItem_o *)linkItem,
      this->fields.dispMode,
      v8);
  }
}


void __fastcall PresentBoxNotificationListViewObject__Start(
        PresentBoxNotificationListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.state )
    PresentBoxNotificationListViewObject__Init_45260536(this, 2, v2);
}


System_String_o *__fastcall PresentBoxNotificationListViewObject__ToString(
        PresentBoxNotificationListViewObject_o *this,
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

  if ( (byte_4A5EC29 & 1) == 0 )
  {
    sub_1B885B0(&PresentBoxNotificationListViewItemDraw_DispMode_TypeInfo);
    sub_1B885B0(&StringLiteral_117/*" "*/);
    byte_4A5EC29 = 1;
  }
  v11 = 0.0;
  v10 = 0LL;
  v8.klass = (System_Enum_c *)PresentBoxNotificationListViewItemDraw_DispMode_TypeInfo;
  v8.monitor = (void *)-1LL;
  dispMode = this->fields.dispMode;
  v3 = System_Enum__ToString(&v8, 0LL);
  z = this->fields.basePosition.fields.z;
  v5 = v3;
  v10 = *(_QWORD *)&this->fields.basePosition.fields.x;
  v11 = z;
  v6 = (System_String_o *)sub_1DC2B8C(&v10, 0LL, 0LL, 0LL);
  return System_String__Concat_61718292(v5, (System_String_o *)StringLiteral_117/*" "*/, v6, 0LL);
}


void __fastcall PresentBoxNotificationListViewObject__add_callbackFunc(
        PresentBoxNotificationListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  PresentBoxNotificationListViewObject_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4A5EC20 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    byte_4A5EC20 = 1;
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
    v9 = sub_1BC3AA0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1B88ACC(v8);
  PresentBoxNotificationListViewObject__remove_callbackFunc(v11, v12, v13);
}


void __fastcall PresentBoxNotificationListViewObject__remove_callbackFunc(
        PresentBoxNotificationListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  PresentBoxNotificationListViewObject_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4A5EC21 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    byte_4A5EC21 = 1;
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
    v9 = sub_1BC3AA0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1B88ACC(v8);
  PresentBoxNotificationListViewObject__Awake(v11, v12);
}