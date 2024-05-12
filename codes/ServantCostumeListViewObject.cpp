void __fastcall ServantCostumeListViewObject___ctor(ServantCostumeListViewObject_o *this, const MethodInfo *method)
{
  if ( (byte_438E8A0 & 1) == 0 )
  {
    sub_B775C4(&ListViewObject_TypeInfo);
    byte_438E8A0 = 1;
  }
  if ( (BYTE3(ListViewObject_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ListViewObject_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  }
  ListViewObject___ctor((ListViewObject_o *)this, 0LL);
}


void __fastcall ServantCostumeListViewObject__Awake(ServantCostumeListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  struct ServantCostumeListViewItemDraw_o *Component_srcLineSprite; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_438E898 & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_ServantCostumeListViewItemDraw___);
    byte_438E898 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_B7769C(0LL, v3);
  Component_srcLineSprite = (struct ServantCostumeListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                         dispObject,
                                                                         (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_ServantCostumeListViewItemDraw___);
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


ServantCostumeListViewItem_o *__fastcall ServantCostumeListViewObject__GetItem(
        ServantCostumeListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 v4; // x11

  if ( (byte_438E899 & 1) == 0 )
  {
    sub_B775C4(&ServantCostumeListViewItem_TypeInfo);
    byte_438E899 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0LL;
  v4 = *(&ServantCostumeListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v4 )
    return 0LL;
  if ( (ServantCostumeListViewItem_c *)linkItem->klass->_2.typeHierarchy[v4 - 1] == ServantCostumeListViewItem_TypeInfo )
    return (ServantCostumeListViewItem_o *)this->fields.linkItem;
  return 0LL;
}


void __fastcall ServantCostumeListViewObject__Init(
        ServantCostumeListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        UnityEngine_Vector3_o position,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x9
  int32_t dispMode; // w22
  __int64 v11; // x12
  struct ListViewItem_o *v12; // x10
  char v13; // w23
  __int64 v14; // x12
  bool v15; // w25
  int32_t v16; // w24
  UnityEngine_Transform_o *transform; // x0
  __int64 v18; // x1
  char v19; // w23
  BattleServantConfConponent_o *p_callbackFunc; // x21
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  const MethodInfo *v27; // x1
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  int32_t v34; // w9
  System_Action_o *klass; // x19

  if ( (byte_438E89B & 1) == 0 )
  {
    sub_B775C4(&ServantCostumeListViewItem_TypeInfo);
    byte_438E89B = 1;
  }
  linkItem = this->fields.linkItem;
  dispMode = this->fields.dispMode;
  if ( linkItem )
  {
    v11 = *(&ServantCostumeListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v11 )
    {
      if ( (ServantCostumeListViewItem_c *)linkItem->klass->_2.typeHierarchy[v11 - 1] == ServantCostumeListViewItem_TypeInfo )
        v12 = this->fields.linkItem;
      else
        v12 = 0LL;
    }
    else
    {
      v12 = 0LL;
    }
    if ( initMode != 4 )
    {
      v14 = *(&ServantCostumeListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v14 )
      {
        v13 = 0;
        v12 = 0LL;
      }
      else
      {
        v13 = 0;
        if ( (ServantCostumeListViewItem_c *)linkItem->klass->_2.typeHierarchy[v14 - 1] == ServantCostumeListViewItem_TypeInfo )
          v12 = this->fields.linkItem;
        else
          v12 = 0LL;
      }
      goto LABEL_18;
    }
  }
  else
  {
    v12 = 0LL;
    if ( initMode != 4 )
    {
      v13 = 0;
      goto LABEL_18;
    }
  }
  v13 = 1;
LABEL_18:
  v15 = this->fields.state == 0;
  if ( v12 )
    v16 = initMode;
  else
    v16 = 0;
  ListViewObject__SetVisible((ListViewObject_o *)this, v16 != 0, 0LL);
  ((void (__fastcall *)(ServantCostumeListViewObject_o *, bool, Il2CppMethodPointer))this->klass->vtable._9_SetInput.method)(
    this,
    v16 == 3,
    this->klass->vtable._10_Invalidation.methodPtr);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0LL),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_B7769C(transform, v18);
  }
  v19 = v15 | v13;
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0LL);
  this->fields.callbackFunc = callbackFunc;
  p_callbackFunc = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callbackFunc,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  if ( (unsigned int)v16 <= 4 )
  {
    v34 = dword_332FEA0[v16];
    this->fields.dispMode = dword_332FE80[v16];
    this->fields.state = v34;
  }
  if ( (v19 & 1) != 0 || dispMode != this->fields.dispMode )
    ServantCostumeListViewObject__SetupDisp(this, v27);
  klass = (System_Action_o *)p_callbackFunc->klass;
  if ( p_callbackFunc->klass )
  {
    p_callbackFunc->klass = 0LL;
    sub_B77560(p_callbackFunc, 0LL, v28, v29, v30, v31, v32, v33);
    System_Action__Invoke(klass, 0LL);
  }
}


void __fastcall ServantCostumeListViewObject__InitItem(ServantCostumeListViewObject_o *this, const MethodInfo *method)
{
  this->fields.state = 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCostumeListViewObject__Init_31695888(
        ServantCostumeListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  zero = UnityEngine_Vector3__get_zero(0LL);
  ServantCostumeListViewObject__Init(this, initMode, 0LL, zero.fields.x, *(UnityEngine_Vector3_o *)&zero.fields.y, v5);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCostumeListViewObject__Init_31696732(
        ServantCostumeListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  zero = UnityEngine_Vector3__get_zero(0LL);
  ServantCostumeListViewObject__Init(
    this,
    initMode,
    callbackFunc,
    zero.fields.x,
    *(UnityEngine_Vector3_o *)&zero.fields.y,
    v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCostumeListViewObject__Init_31701840(
        ServantCostumeListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        const MethodInfo *method)
{
  const MethodInfo *v8; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  zero = UnityEngine_Vector3__get_zero(0LL);
  ServantCostumeListViewObject__Init(
    this,
    initMode,
    callbackFunc,
    zero.fields.x,
    *(UnityEngine_Vector3_o *)&zero.fields.y,
    v8);
}


void __fastcall ServantCostumeListViewObject__OnClickSelect(
        ServantCostumeListViewObject_o *this,
        const MethodInfo *method)
{
  ServantCostumeListViewItem_o *linkItem; // x0
  __int64 v4; // x10

  if ( (byte_438E89E & 1) == 0 )
  {
    sub_B775C4(&ServantCostumeListViewItem_TypeInfo);
    sub_B775C4(&SoundManager_TypeInfo);
    sub_B775C4(&StringLiteral_10151/*"OnClickSelectBase"*/);
    byte_438E89E = 1;
  }
  linkItem = (ServantCostumeListViewItem_o *)this->fields.linkItem;
  if ( linkItem )
  {
    v4 = *(&ServantCostumeListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v4
      && (ServantCostumeListViewItem_c *)linkItem->klass->_2.typeHierarchy[v4 - 1] == ServantCostumeListViewItem_TypeInfo )
    {
      if ( ServantCostumeListViewItem__get_IsCanNotSelect(linkItem, method) )
      {
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playSystemSe(2, 0LL);
        return;
      }
      linkItem = (ServantCostumeListViewItem_o *)this->fields.manager;
      if ( linkItem )
      {
        ListViewManager__ClearScrollBarValue((ListViewManager_o *)linkItem, 1, 0LL);
        linkItem = (ServantCostumeListViewItem_o *)this->fields.manager;
        if ( linkItem )
        {
          UnityEngine_Component__SendMessage(
            (UnityEngine_Component_o *)linkItem,
            (System_String_o *)StringLiteral_10151/*"OnClickSelectBase"*/,
            (Il2CppObject *)this,
            0LL);
          return;
        }
      }
    }
    sub_B7769C(linkItem, method);
  }
}


void __fastcall ServantCostumeListViewObject__OnLongPush(
        ServantCostumeListViewObject_o *this,
        const MethodInfo *method)
{
  ServantCostumeListViewObject_o *v2; // x19
  struct ListViewItem_o *linkItem; // x8
  __int64 v4; // x11
  _QWORD *monitor; // x8

  v2 = this;
  if ( (byte_438E89F & 1) == 0 )
  {
    sub_B775C4(&ServantCostumeListViewItem_TypeInfo);
    sub_B775C4(&StringLiteral_10205/*"OnLongPushListView"*/);
    this = (ServantCostumeListViewObject_o *)sub_B775C4(&StringLiteral_10223/*"OnPressCancel"*/);
    byte_438E89F = 1;
  }
  linkItem = v2->fields.linkItem;
  if ( linkItem )
  {
    v4 = *(&ServantCostumeListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v4 )
      goto LABEL_12;
    if ( (ServantCostumeListViewItem_c *)linkItem->klass->_2.typeHierarchy[v4 - 1] != ServantCostumeListViewItem_TypeInfo )
      goto LABEL_12;
    monitor = linkItem[1].monitor;
    if ( !monitor )
      goto LABEL_12;
    if ( monitor[2] )
    {
      this = (ServantCostumeListViewObject_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v2, 0LL);
      if ( this )
      {
        UnityEngine_GameObject__SendMessage_41438608(
          (UnityEngine_GameObject_o *)this,
          (System_String_o *)StringLiteral_10223/*"OnPressCancel"*/,
          0LL);
        this = (ServantCostumeListViewObject_o *)v2->fields.manager;
        if ( this )
        {
          UnityEngine_Component__SendMessage(
            (UnityEngine_Component_o *)this,
            (System_String_o *)StringLiteral_10205/*"OnLongPushListView"*/,
            (Il2CppObject *)v2,
            0LL);
          return;
        }
      }
LABEL_12:
      sub_B7769C(this, method);
    }
  }
}


void __fastcall ServantCostumeListViewObject__SetInput(
        ServantCostumeListViewObject_o *this,
        bool isInput,
        const MethodInfo *method)
{
  UnityEngine_Object_o *itemDraw; // x20
  const MethodInfo *v6; // x2
  struct ListViewItem_o *linkItem; // x8
  __int64 v8; // x11
  struct ListViewItem_o *v9; // x1
  ServantCostumeListViewItemDraw_o *v10; // x0

  if ( (byte_438E89A & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&ServantCostumeListViewItem_TypeInfo);
    byte_438E89A = 1;
  }
  ListViewObject__SetInput((ListViewObject_o *)this, isInput, 0LL);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    linkItem = this->fields.linkItem;
    if ( linkItem
      && (v8 = *(&ServantCostumeListViewItem_TypeInfo->_2.bitflags2 + 1),
          *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v8) )
    {
      if ( (ServantCostumeListViewItem_c *)linkItem->klass->_2.typeHierarchy[v8 - 1] == ServantCostumeListViewItem_TypeInfo )
        v9 = this->fields.linkItem;
      else
        v9 = 0LL;
    }
    else
    {
      v9 = 0LL;
    }
    v10 = this->fields.itemDraw;
    if ( !v10 )
      sub_B7769C(0LL, v9);
    ServantCostumeListViewItemDraw__SetInput(v10, (ServantCostumeListViewItem_o *)v9, v6);
  }
}


void __fastcall ServantCostumeListViewObject__SetItem(
        ServantCostumeListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  ListViewObject__SetItem_34301308((ListViewObject_o *)this, item, seed, 0LL);
  this->fields.state = 0;
}


void __fastcall ServantCostumeListViewObject__SetItem_31700736(
        ServantCostumeListViewObject_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ListViewObject__SetItem((ListViewObject_o *)this, item, 0LL);
  this->fields.state = 0;
}


void __fastcall ServantCostumeListViewObject__SetupDisp(ServantCostumeListViewObject_o *this, const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x20
  __int64 v4; // x10
  bool v5; // w1
  UnityEngine_Object_o *itemDraw; // x21
  __int64 v7; // x1
  const MethodInfo *v8; // x3
  ServantCostumeListViewItemDraw_o *v9; // x0

  if ( (byte_438E89C & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&ServantCostumeListViewItem_TypeInfo);
    byte_438E89C = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    v4 = *(&ServantCostumeListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v4
      && (ServantCostumeListViewItem_c *)linkItem->klass->_2.typeHierarchy[v4 - 1] == ServantCostumeListViewItem_TypeInfo )
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
    ServantCostumeListViewItemDraw__SetItem(v9, (ServantCostumeListViewItem_o *)linkItem, this->fields.dispMode, v8);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCostumeListViewObject__Start(ServantCostumeListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( !this->fields.state )
  {
    zero = UnityEngine_Vector3__get_zero(0LL);
    ServantCostumeListViewObject__Init(this, 2, 0LL, zero.fields.x, *(UnityEngine_Vector3_o *)&zero.fields.y, v3);
  }
}


System_String_o *__fastcall ServantCostumeListViewObject__ToString(
        ServantCostumeListViewObject_o *this,
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

  if ( (byte_438E89D & 1) == 0 )
  {
    sub_B775C4(&ServantCostumeListViewItemDraw_DispMode_TypeInfo);
    sub_B775C4(&StringLiteral_82/*" "*/);
    byte_438E89D = 1;
  }
  v14 = 0.0;
  v13 = 0LL;
  v4 = j_il2cpp_value_box_0(ServantCostumeListViewItemDraw_DispMode_TypeInfo, &this->fields.dispMode, v2);
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


void __fastcall ServantCostumeListViewObject__add_callbackFunc(
        ServantCostumeListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  ServantCostumeListViewObject_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_438E896 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    byte_438E896 = 1;
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
  sub_B77990(v8);
  ServantCostumeListViewObject__remove_callbackFunc(v11, v12, v13);
}


void __fastcall ServantCostumeListViewObject__remove_callbackFunc(
        ServantCostumeListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  ServantCostumeListViewObject_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_438E897 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    byte_438E897 = 1;
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
  sub_B77990(v8);
  ServantCostumeListViewObject__Awake(v11, v12);
}