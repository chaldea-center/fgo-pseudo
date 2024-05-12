void __fastcall ServantCheckEquipListViewObject___ctor(
        ServantCheckEquipListViewObject_o *this,
        const MethodInfo *method)
{
  if ( (byte_438C6EC & 1) == 0 )
  {
    sub_B775C4(&ListViewObject_TypeInfo);
    byte_438C6EC = 1;
  }
  if ( (BYTE3(ListViewObject_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ListViewObject_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  }
  ListViewObject___ctor((ListViewObject_o *)this, 0LL);
}


void __fastcall ServantCheckEquipListViewObject__Awake(
        ServantCheckEquipListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  struct ServantCheckEquipListViewItemDraw_o *Component_srcLineSprite; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_438C6E6 & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_ServantCheckEquipListViewItemDraw___);
    byte_438C6E6 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_B7769C(0LL, v3);
  Component_srcLineSprite = (struct ServantCheckEquipListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                            dispObject,
                                                                            (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_ServantCheckEquipListViewItemDraw___);
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
}


ServantCheckEquipListViewItem_o *__fastcall ServantCheckEquipListViewObject__GetItem(
        ServantCheckEquipListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 v4; // x11

  if ( (byte_438C6E7 & 1) == 0 )
  {
    sub_B775C4(&ServantCheckEquipListViewItem_TypeInfo);
    byte_438C6E7 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0LL;
  v4 = *(&ServantCheckEquipListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v4 )
    return 0LL;
  if ( (ServantCheckEquipListViewItem_c *)linkItem->klass->_2.typeHierarchy[v4 - 1] == ServantCheckEquipListViewItem_TypeInfo )
    return (ServantCheckEquipListViewItem_o *)this->fields.linkItem;
  return 0LL;
}


void __fastcall ServantCheckEquipListViewObject__Init(
        ServantCheckEquipListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        UnityEngine_Vector3_o position,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  int32_t dispMode; // w22
  int32_t state; // w23
  __int64 v12; // x10
  unsigned int v13; // w24
  UnityEngine_Transform_o *transform; // x0
  __int64 v15; // x1
  BattleServantConfConponent_o *p_callbackFunc; // x21
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  const MethodInfo *v23; // x1
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  int32_t v30; // w8
  System_Action_o *klass; // x19

  if ( (byte_438C6E9 & 1) == 0 )
  {
    sub_B775C4(&ServantCheckEquipListViewItem_TypeInfo);
    byte_438C6E9 = 1;
  }
  linkItem = this->fields.linkItem;
  state = this->fields.state;
  dispMode = this->fields.dispMode;
  if ( linkItem
    && (v12 = *(&ServantCheckEquipListViewItem_TypeInfo->_2.bitflags2 + 1),
        *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v12) )
  {
    if ( (ServantCheckEquipListViewItem_c *)linkItem->klass->_2.typeHierarchy[v12 - 1] == ServantCheckEquipListViewItem_TypeInfo )
      v13 = initMode;
    else
      v13 = 0;
  }
  else
  {
    v13 = 0;
  }
  ListViewObject__SetVisible((ListViewObject_o *)this, v13 != 0, 0LL);
  ((void (__fastcall *)(ServantCheckEquipListViewObject_o *, bool, Il2CppMethodPointer))this->klass->vtable._9_SetInput.method)(
    this,
    v13 == 3,
    this->klass->vtable._10_Invalidation.methodPtr);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0LL),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_B7769C(transform, v15);
  }
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0LL);
  this->fields.callbackFunc = callbackFunc;
  p_callbackFunc = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callbackFunc,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  if ( v13 <= 3 )
  {
    v30 = dword_331B27C[v13];
    this->fields.state = dword_331ED50[v13];
    this->fields.dispMode = v30;
  }
  if ( !state || dispMode != this->fields.dispMode )
    ServantCheckEquipListViewObject__SetupDisp(this, v23);
  klass = (System_Action_o *)p_callbackFunc->klass;
  if ( p_callbackFunc->klass )
  {
    p_callbackFunc->klass = 0LL;
    sub_B77560(p_callbackFunc, 0LL, v24, v25, v26, v27, v28, v29);
    System_Action__Invoke(klass, 0LL);
  }
}


void __fastcall ServantCheckEquipListViewObject__InitItem(
        ServantCheckEquipListViewObject_o *this,
        const MethodInfo *method)
{
  this->fields.state = 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCheckEquipListViewObject__Init_27768440(
        ServantCheckEquipListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  zero = UnityEngine_Vector3__get_zero(0LL);
  ServantCheckEquipListViewObject__Init(
    this,
    initMode,
    0LL,
    zero.fields.x,
    *(UnityEngine_Vector3_o *)&zero.fields.y,
    v5);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCheckEquipListViewObject__Init_27769064(
        ServantCheckEquipListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  zero = UnityEngine_Vector3__get_zero(0LL);
  ServantCheckEquipListViewObject__Init(
    this,
    initMode,
    callbackFunc,
    zero.fields.x,
    *(UnityEngine_Vector3_o *)&zero.fields.y,
    v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCheckEquipListViewObject__Init_27771276(
        ServantCheckEquipListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        const MethodInfo *method)
{
  const MethodInfo *v8; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  zero = UnityEngine_Vector3__get_zero(0LL);
  ServantCheckEquipListViewObject__Init(
    this,
    initMode,
    callbackFunc,
    zero.fields.x,
    *(UnityEngine_Vector3_o *)&zero.fields.y,
    v8);
}


void __fastcall ServantCheckEquipListViewObject__SetInput(
        ServantCheckEquipListViewObject_o *this,
        bool isInput,
        const MethodInfo *method)
{
  UnityEngine_Object_o *itemDraw; // x20
  _BOOL8 v6; // x0
  __int64 v7; // x1

  if ( (byte_438C6E8 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&ServantCheckEquipListViewItem_TypeInfo);
    byte_438C6E8 = 1;
  }
  ListViewObject__SetInput((ListViewObject_o *)this, isInput, 0LL);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v6 = UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL);
  if ( v6 && !this->fields.itemDraw )
    sub_B7769C(v6, v7);
}


void __fastcall ServantCheckEquipListViewObject__SetItem(
        ServantCheckEquipListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  ListViewObject__SetItem_34301308((ListViewObject_o *)this, item, seed, 0LL);
  this->fields.state = 0;
}


void __fastcall ServantCheckEquipListViewObject__SetItem_27770400(
        ServantCheckEquipListViewObject_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ListViewObject__SetItem((ListViewObject_o *)this, item, 0LL);
  this->fields.state = 0;
}


void __fastcall ServantCheckEquipListViewObject__SetupDisp(
        ServantCheckEquipListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x20
  __int64 v4; // x10
  bool v5; // w1
  UnityEngine_Object_o *itemDraw; // x21
  __int64 v7; // x1
  const MethodInfo *v8; // x3
  ServantCheckEquipListViewItemDraw_o *v9; // x0

  if ( (byte_438C6EA & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&ServantCheckEquipListViewItem_TypeInfo);
    byte_438C6EA = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    v4 = *(&ServantCheckEquipListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v4
      && (ServantCheckEquipListViewItem_c *)linkItem->klass->_2.typeHierarchy[v4 - 1] == ServantCheckEquipListViewItem_TypeInfo )
    {
      v5 = this->fields.dispMode != 0;
      goto LABEL_8;
    }
    linkItem = 0LL;
  }
  v5 = 0;
LABEL_8:
  ListViewObject__SetVisible((ListViewObject_o *)this, v5, 0LL);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    v9 = this->fields.itemDraw;
    if ( !v9 )
      sub_B7769C(0LL, v7);
    ServantCheckEquipListViewItemDraw__SetItem(
      v9,
      (ServantCheckEquipListViewItem_o *)linkItem,
      this->fields.dispMode,
      v8);
  }
}


System_String_o *__fastcall ServantCheckEquipListViewObject__ToString(
        ServantCheckEquipListViewObject_o *this,
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

  if ( (byte_438C6EB & 1) == 0 )
  {
    sub_B775C4(&ServantCheckEquipListViewItemDraw_DispMode_TypeInfo);
    sub_B775C4(&StringLiteral_82/*" "*/);
    byte_438C6EB = 1;
  }
  v14 = 0.0;
  v13 = 0LL;
  v4 = j_il2cpp_value_box_0(ServantCheckEquipListViewItemDraw_DispMode_TypeInfo, &this->fields.dispMode, v2);
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


void __fastcall ServantCheckEquipListViewObject__add_callbackFunc(
        ServantCheckEquipListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  ServantCheckEquipListViewObject_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_438C6E4 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    byte_438C6E4 = 1;
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
  v11 = (ServantCheckEquipListViewObject_o *)sub_B77990(v8);
  ServantCheckEquipListViewObject__remove_callbackFunc(v11, v12, v13);
}


void __fastcall ServantCheckEquipListViewObject__remove_callbackFunc(
        ServantCheckEquipListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  ServantCheckEquipListViewObject_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_438C6E5 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    byte_438C6E5 = 1;
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
  v11 = (ServantCheckEquipListViewObject_o *)sub_B77990(v8);
  ServantCheckEquipListViewObject__Awake(v11, v12);
}