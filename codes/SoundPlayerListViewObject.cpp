void __fastcall SoundPlayerListViewObject___ctor(SoundPlayerListViewObject_o *this, const MethodInfo *method)
{
  if ( (byte_4AFD82D & 1) == 0 )
  {
    sub_1BC3008(&ListViewObject_TypeInfo, method);
    byte_4AFD82D = 1;
  }
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  ListViewObject___ctor((ListViewObject_o *)this, 0LL);
}


void __fastcall SoundPlayerListViewObject__Awake(SoundPlayerListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4AFD827 & 1) == 0 )
  {
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_SoundPlayerListViewItemDraw___, method);
    byte_4AFD827 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1BC3264(0LL, v3);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_SoundPlayerListViewItemDraw___);
  this->fields.itemDraw = (struct SoundPlayerListViewItemDraw_o *)Component_object;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.itemDraw, (int32_t)Component_object, v6, v7);
}


SoundPlayerListViewItem_o *__fastcall SoundPlayerListViewObject__GetItem(
        SoundPlayerListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x11

  if ( (byte_4AFD828 & 1) == 0 )
  {
    sub_1BC3008(&SoundPlayerListViewItem_TypeInfo, method);
    byte_4AFD828 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0LL;
  methodPtr_low = LOBYTE(SoundPlayerListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
    return 0LL;
  if ( (SoundPlayerListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == SoundPlayerListViewItem_TypeInfo )
    return (SoundPlayerListViewItem_o *)this->fields.linkItem;
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SoundPlayerListViewObject__Init(
        SoundPlayerListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        UnityEngine_Vector3_o position,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x10
  int32_t v11; // w24
  int32_t dispMode; // w22
  int32_t state; // w23
  UnityEngine_Transform_o *transform; // x0
  __int64 v15; // x1
  CGThumbnailListItem_o *p_callbackFunc; // x21
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  const MethodInfo *v19; // x1
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  int32_t v22; // w9
  int32_t v23; // w8
  CGThumbnailListItem_c *klass; // x19

  if ( (byte_4AFD82A & 1) == 0 )
  {
    sub_1BC3008(&SoundPlayerListViewItem_TypeInfo, *(_QWORD *)&initMode);
    byte_4AFD82A = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem
    && (methodPtr_low = LOBYTE(SoundPlayerListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
  {
    if ( (SoundPlayerListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == SoundPlayerListViewItem_TypeInfo )
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
  ((void (__fastcall *)(SoundPlayerListViewObject_o *, bool, Il2CppMethodPointer))this->klass->vtable._9_SetInput.method)(
    this,
    v11 == 3,
    this->klass->vtable._10_Invalidation.methodPtr);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0LL),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_1BC3264(transform, v15);
  }
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0LL);
  this->fields.callbackFunc = callbackFunc;
  p_callbackFunc = (CGThumbnailListItem_o *)&this->fields.callbackFunc;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callbackFunc, v17, v18);
  v22 = 1;
  v23 = v11;
  switch ( v11 )
  {
    case 0:
    case 2:
      goto LABEL_15;
    case 1:
      v23 = v11;
      goto LABEL_14;
    case 3:
      v23 = 2;
LABEL_14:
      v22 = v11;
LABEL_15:
      this->fields.state = v22;
      this->fields.dispMode = v23;
      goto LABEL_16;
    case 4:
      *(_QWORD *)&this->fields.state = 0x200000001LL;
      goto LABEL_20;
    default:
LABEL_16:
      if ( !state || dispMode != this->fields.dispMode )
LABEL_20:
        SoundPlayerListViewObject__SetupDisp(this, v19);
      klass = p_callbackFunc->klass;
      if ( p_callbackFunc->klass )
      {
        p_callbackFunc->klass = 0LL;
        sub_1BC2FAC(p_callbackFunc, 0, v20, v21);
        ((void (__fastcall *)(Il2CppClass *, _QWORD))klass->_1.namespaze)(
          klass->_1.element_class,
          *(_QWORD *)&klass->_1.byval_arg.bits);
      }
      return;
  }
}


void __fastcall SoundPlayerListViewObject__InitItem(SoundPlayerListViewObject_o *this, const MethodInfo *method)
{
  this->fields.state = 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SoundPlayerListViewObject__Init_33031188(
        SoundPlayerListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  float v4; // s0
  int v5; // s1

  if ( !byte_4AFBDB1 )
  {
    sub_1BC3008(&UnityEngine_Vector3_TypeInfo, *(_QWORD *)&initMode);
    byte_4AFBDB1 = 1;
  }
  SoundPlayerListViewObject__Init(this, initMode, 0LL, v4, *(UnityEngine_Vector3_o *)&v5, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SoundPlayerListViewObject__Init_33032676(
        SoundPlayerListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        const MethodInfo *method)
{
  int v5; // s1

  if ( !byte_4AFBDB1 )
  {
    sub_1BC3008(&UnityEngine_Vector3_TypeInfo, *(_QWORD *)&initMode);
    byte_4AFBDB1 = 1;
  }
  SoundPlayerListViewObject__Init(this, initMode, callbackFunc, delay, *(UnityEngine_Vector3_o *)&v5, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SoundPlayerListViewObject__Init_33032760(
        SoundPlayerListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  float v4; // s0
  int v5; // s1

  if ( !byte_4AFBDB1 )
  {
    sub_1BC3008(&UnityEngine_Vector3_TypeInfo, *(_QWORD *)&initMode);
    byte_4AFBDB1 = 1;
  }
  SoundPlayerListViewObject__Init(this, initMode, callbackFunc, v4, *(UnityEngine_Vector3_o *)&v5, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SoundPlayerListViewObject__SetInput(
        SoundPlayerListViewObject_o *this,
        bool isInput,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Object_o *itemDraw; // x20
  _BOOL8 v7; // x0
  __int64 v8; // x1

  if ( (byte_4AFD829 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, isInput);
    sub_1BC3008(&SoundPlayerListViewItem_TypeInfo, v5);
    byte_4AFD829 = 1;
  }
  ListViewObject__SetInput((ListViewObject_o *)this, isInput, 0LL);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL);
  if ( v7 && !this->fields.itemDraw )
    sub_1BC3264(v7, v8);
}


void __fastcall SoundPlayerListViewObject__SetItem(
        SoundPlayerListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  ListViewObject__SetItem_42800124((ListViewObject_o *)this, item, seed, 0LL);
  this->fields.state = 0;
}


void __fastcall SoundPlayerListViewObject__SetItem_33034248(
        SoundPlayerListViewObject_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ListViewObject__SetItem((ListViewObject_o *)this, item, 0LL);
  this->fields.state = 0;
}


void __fastcall SoundPlayerListViewObject__SetupDisp(SoundPlayerListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct ListViewItem_o *linkItem; // x20
  __int64 methodPtr_low; // x10
  bool v6; // w1
  UnityEngine_Object_o *itemDraw; // x21
  __int64 v8; // x1
  const MethodInfo *v9; // x3
  SoundPlayerListViewItemDraw_o *v10; // x0

  if ( (byte_4AFD82B & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, method);
    sub_1BC3008(&SoundPlayerListViewItem_TypeInfo, v3);
    byte_4AFD82B = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    goto LABEL_7;
  methodPtr_low = LOBYTE(SoundPlayerListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (SoundPlayerListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] != SoundPlayerListViewItem_TypeInfo )
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
      sub_1BC3264(0LL, v8);
    SoundPlayerListViewItemDraw__SetItem(v10, (SoundPlayerListViewItem_o *)linkItem, this->fields.dispMode, v9);
  }
}


void __fastcall SoundPlayerListViewObject__add_callbackFunc(
        SoundPlayerListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  SoundPlayerListViewObject_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4AFD825 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, value);
    byte_4AFD825 = 1;
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
    v9 = sub_1BFD098(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (SoundPlayerListViewObject_o *)sub_1BC3524(v8);
  SoundPlayerListViewObject__remove_callbackFunc(v11, v12, v13);
}


SoundPlayerListViewItemDraw_o *__fastcall SoundPlayerListViewObject__getItemDraw(
        SoundPlayerListViewObject_o *this,
        const MethodInfo *method)
{
  return this->fields.itemDraw;
}


void __fastcall SoundPlayerListViewObject__onClickSelect(SoundPlayerListViewObject_o *this, const MethodInfo *method)
{
  SoundPlayerListViewObject_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x11
  int32_t sortIndex; // w8
  __int64 *v9; // x8
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0

  v2 = this;
  if ( (byte_4AFD82C & 1) == 0 )
  {
    sub_1BC3008(&SoundPlayerListViewItem_TypeInfo, method);
    sub_1BC3008(&Method_SoundPlayerListViewObject_onClickSelect__, v3);
    sub_1BC3008(&StringLiteral_22184/*"onClickSelectListView"*/, v4);
    this = (SoundPlayerListViewObject_o *)sub_1BC3008(&StringLiteral_22180/*"onClickCheckListView"*/, v5);
    byte_4AFD82C = 1;
  }
  linkItem = v2->fields.linkItem;
  if ( linkItem )
  {
    methodPtr_low = LOBYTE(SoundPlayerListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (SoundPlayerListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] != SoundPlayerListViewItem_TypeInfo )
    {
      goto LABEL_18;
    }
    sortIndex = linkItem[1].fields.sortIndex;
    switch ( sortIndex )
    {
      case 2:
        v10 = Method_SoundPlayerListViewObject_onClickSelect__;
        if ( (*((_BYTE *)Method_SoundPlayerListViewObject_onClickSelect__ + 83) & 2) != 0 )
          v10 = (_QWORD *)sub_1BC3020(Method_SoundPlayerListViewObject_onClickSelect__);
        v11 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v10, v10[4]);
        OverwriteAssetSoundName__PlaySystemSe(v11, 2, 0, 0LL);
        break;
      case 1:
        this = (SoundPlayerListViewObject_o *)v2->fields.manager;
        if ( this )
        {
          v9 = &StringLiteral_22180/*"onClickCheckListView"*/;
          goto LABEL_17;
        }
LABEL_18:
        sub_1BC3264(this, method);
      case 0:
        this = (SoundPlayerListViewObject_o *)v2->fields.manager;
        if ( this )
        {
          v9 = &StringLiteral_22184/*"onClickSelectListView"*/;
LABEL_17:
          UnityEngine_Component__SendMessage(
            (UnityEngine_Component_o *)this,
            (System_String_o *)*v9,
            (Il2CppObject *)v2,
            0LL);
          return;
        }
        goto LABEL_18;
    }
  }
}


void __fastcall SoundPlayerListViewObject__remove_callbackFunc(
        SoundPlayerListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  SoundPlayerListViewObject_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4AFD826 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, value);
    byte_4AFD826 = 1;
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
    v9 = sub_1BFD098(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (SoundPlayerListViewObject_o *)sub_1BC3524(v8);
  SoundPlayerListViewObject__Awake(v11, v12);
}