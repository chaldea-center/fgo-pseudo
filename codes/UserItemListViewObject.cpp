void __fastcall UserItemListViewObject___ctor(UserItemListViewObject_o *this, const MethodInfo *method)
{
  if ( (byte_4BAFAF2 & 1) == 0 )
  {
    sub_1C13D24(&ListViewObject_TypeInfo, method);
    byte_4BAFAF2 = 1;
  }
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  ListViewObject___ctor((ListViewObject_o *)this, 0LL);
}


void __fastcall UserItemListViewObject__Awake(UserItemListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0

  if ( (byte_4BAFAEC & 1) == 0 )
  {
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponent_UserItemListViewItemDraw___, method);
    byte_4BAFAEC = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1C13F80(0LL, v3);
  this->fields.itemDraw = (struct UserItemListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                 dispObject,
                                                                 (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_UserItemListViewItemDraw___);
  sub_1C13CC8(&this->fields.itemDraw);
}


UserItemListViewItem_o *__fastcall UserItemListViewObject__GetItem(
        UserItemListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x11

  if ( (byte_4BAFAED & 1) == 0 )
  {
    sub_1C13D24(&UserItemListViewItem_TypeInfo, method);
    byte_4BAFAED = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0LL;
  methodPtr_low = LOBYTE(UserItemListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
    return 0LL;
  if ( (UserItemListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == UserItemListViewItem_TypeInfo )
    return (UserItemListViewItem_o *)this->fields.linkItem;
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserItemListViewObject__Init(
        UserItemListViewObject_o *this,
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

  if ( (byte_4BAFAEF & 1) == 0 )
  {
    sub_1C13D24(&UserItemListViewItem_TypeInfo, *(_QWORD *)&initMode);
    byte_4BAFAEF = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem
    && (methodPtr_low = LOBYTE(UserItemListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
  {
    if ( (UserItemListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == UserItemListViewItem_TypeInfo )
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
  ((void (__fastcall *)(UserItemListViewObject_o *, bool, Il2CppMethodPointer))this->klass->vtable._9_SetInput.method)(
    this,
    v11 == 3,
    this->klass->vtable._10_Invalidation.methodPtr);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0LL),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_1C13F80(transform, v15);
  }
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0LL);
  this->fields.callbackFunc = callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  sub_1C13CC8(&this->fields.callbackFunc);
  if ( (unsigned int)v11 <= 3 )
  {
    v18 = dword_BF5D00[v11];
    this->fields.dispMode = *((_DWORD *)&xmmword_BF6910 + v11);
    this->fields.state = v18;
  }
  if ( !state || dispMode != this->fields.dispMode )
    UserItemListViewObject__SetupDisp(this, v17);
  v19 = *p_callbackFunc;
  if ( *p_callbackFunc )
  {
    *p_callbackFunc = 0LL;
    sub_1C13CC8(p_callbackFunc);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v19->fields.m_target)(
      v19->fields.original_method_info,
      *(_QWORD *)&v19->fields.extra_arg);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserItemListViewObject__Init_31992788(
        UserItemListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  float v4; // s0
  int v5; // s1

  if ( !byte_4BAEDA1 )
  {
    sub_1C13D24(&UnityEngine_Vector3_TypeInfo, *(_QWORD *)&initMode);
    byte_4BAEDA1 = 1;
  }
  UserItemListViewObject__Init(this, initMode, 0LL, v4, *(UnityEngine_Vector3_o *)&v5, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserItemListViewObject__Init_31994124(
        UserItemListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        const MethodInfo *method)
{
  int v5; // s1

  if ( !byte_4BAEDA1 )
  {
    sub_1C13D24(&UnityEngine_Vector3_TypeInfo, *(_QWORD *)&initMode);
    byte_4BAEDA1 = 1;
  }
  UserItemListViewObject__Init(this, initMode, callbackFunc, delay, *(UnityEngine_Vector3_o *)&v5, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserItemListViewObject__Init_31994208(
        UserItemListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  float v4; // s0
  int v5; // s1

  if ( !byte_4BAEDA1 )
  {
    sub_1C13D24(&UnityEngine_Vector3_TypeInfo, *(_QWORD *)&initMode);
    byte_4BAEDA1 = 1;
  }
  UserItemListViewObject__Init(this, initMode, callbackFunc, v4, *(UnityEngine_Vector3_o *)&v5, method);
}


void __fastcall UserItemListViewObject__OnClickSelect(UserItemListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x1
  UnityEngine_Component_o *manager; // x0

  if ( (byte_4BAFAF1 & 1) == 0 )
  {
    sub_1C13D24(&Method_UserItemListViewObject_OnClickSelect__, method);
    sub_1C13D24(&StringLiteral_10028/*"OnClickIcon"*/, v3);
    byte_4BAFAF1 = 1;
  }
  if ( this->fields.linkItem )
  {
    v4 = Method_UserItemListViewObject_OnClickSelect__;
    if ( (*((_BYTE *)Method_UserItemListViewObject_OnClickSelect__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1C13D3C(Method_UserItemListViewObject_OnClickSelect__);
    v5 = (System_Reflection_MethodBase_o *)sub_1C13D08(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0LL);
    manager = (UnityEngine_Component_o *)this->fields.manager;
    if ( !manager )
      sub_1C13F80(0LL, v6);
    UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_10028/*"OnClickIcon"*/, (Il2CppObject *)this, 0LL);
  }
}


void __fastcall UserItemListViewObject__OnDestroy(UserItemListViewObject_o *this, const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserItemListViewObject__SetInput(
        UserItemListViewObject_o *this,
        bool isInput,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Object_o *itemDraw; // x21
  const MethodInfo *v7; // x3
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x11
  struct ListViewItem_o *v10; // x1
  UserItemListViewItemDraw_o *v11; // x0

  if ( (byte_4BAFAEE & 1) == 0 )
  {
    sub_1C13D24(&UnityEngine_Object_TypeInfo, isInput);
    sub_1C13D24(&UserItemListViewItem_TypeInfo, v5);
    byte_4BAFAEE = 1;
  }
  ListViewObject__SetInput((ListViewObject_o *)this, isInput, 0LL);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    linkItem = this->fields.linkItem;
    if ( linkItem
      && (methodPtr_low = LOBYTE(UserItemListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
          LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
    {
      if ( (UserItemListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == UserItemListViewItem_TypeInfo )
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
      sub_1C13F80(0LL, v10);
    UserItemListViewItemDraw__SetInput(v11, (UserItemListViewItem_o *)v10, isInput, v7);
  }
}


void __fastcall UserItemListViewObject__SetItem(
        UserItemListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  this->fields.state = 0;
  ListViewObject__SetItem_41915964((ListViewObject_o *)this, item, seed, 0LL);
}


void __fastcall UserItemListViewObject__SetupDisp(UserItemListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct ListViewItem_o *linkItem; // x20
  __int64 methodPtr_low; // x10
  bool v6; // w1
  UnityEngine_Object_o *itemDraw; // x21
  __int64 v8; // x1
  const MethodInfo *v9; // x3
  UserItemListViewItemDraw_o *v10; // x0

  if ( (byte_4BAFAF0 & 1) == 0 )
  {
    sub_1C13D24(&UnityEngine_Object_TypeInfo, method);
    sub_1C13D24(&UserItemListViewItem_TypeInfo, v3);
    byte_4BAFAF0 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    goto LABEL_7;
  methodPtr_low = LOBYTE(UserItemListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (UserItemListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] != UserItemListViewItem_TypeInfo )
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
      sub_1C13F80(0LL, v8);
    UserItemListViewItemDraw__SetItem(v10, (UserItemListViewItem_o *)linkItem, this->fields.dispMode, v9);
  }
}


void __fastcall UserItemListViewObject__Start(UserItemListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.state )
    UserItemListViewObject__Init_31992788(this, 2, v2);
}


void __fastcall UserItemListViewObject__add_callbackFunc(
        UserItemListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  UserItemListViewObject_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4BAFAEA & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, value);
    byte_4BAFAEA = 1;
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
    v9 = sub_1C4F214(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (UserItemListViewObject_o *)sub_1C14240(v8);
  UserItemListViewObject__remove_callbackFunc(v11, v12, v13);
}


void __fastcall UserItemListViewObject__remove_callbackFunc(
        UserItemListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  UserItemListViewObject_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4BAFAEB & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, value);
    byte_4BAFAEB = 1;
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
    v9 = sub_1C4F214(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (UserItemListViewObject_o *)sub_1C14240(v8);
  UserItemListViewObject__Awake(v11, v12);
}