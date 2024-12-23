void __fastcall SoundPlayerListViewObject___ctor(SoundPlayerListViewObject_o *this, const MethodInfo *method)
{
  if ( (byte_4B625E3 & 1) == 0 )
  {
    sub_1BE4ACC(&ListViewObject_TypeInfo, method);
    byte_4B625E3 = 1;
  }
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  ListViewObject___ctor((ListViewObject_o *)this, 0LL);
}


void __fastcall SoundPlayerListViewObject__Awake(SoundPlayerListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0

  if ( (byte_4B625DD & 1) == 0 )
  {
    sub_1BE4ACC(&Method_UnityEngine_GameObject_GetComponent_SoundPlayerListViewItemDraw___, method);
    byte_4B625DD = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1BE4D28(0LL, v3);
  this->fields.itemDraw = (struct SoundPlayerListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                    dispObject,
                                                                    (const MethodInfo_2FA979C *)Method_UnityEngine_GameObject_GetComponent_SoundPlayerListViewItemDraw___);
  sub_1BE4A70(&this->fields.itemDraw);
}


SoundPlayerListViewItem_o *__fastcall SoundPlayerListViewObject__GetItem(
        SoundPlayerListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x11

  if ( (byte_4B625DE & 1) == 0 )
  {
    sub_1BE4ACC(&SoundPlayerListViewItem_TypeInfo, method);
    byte_4B625DE = 1;
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
  struct System_Action_o **p_callbackFunc; // x21
  const MethodInfo *v17; // x1
  int32_t v18; // w9
  int32_t v19; // w8
  struct System_Action_o *v20; // x19

  if ( (byte_4B625E0 & 1) == 0 )
  {
    sub_1BE4ACC(&SoundPlayerListViewItem_TypeInfo, *(_QWORD *)&initMode);
    byte_4B625E0 = 1;
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
    sub_1BE4D28(transform, v15);
  }
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0LL);
  this->fields.callbackFunc = callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  sub_1BE4A70(&this->fields.callbackFunc);
  v18 = 1;
  v19 = v11;
  switch ( v11 )
  {
    case 0:
    case 2:
      goto LABEL_15;
    case 1:
      v19 = v11;
      goto LABEL_14;
    case 3:
      v19 = 2;
LABEL_14:
      v18 = v11;
LABEL_15:
      this->fields.state = v18;
      this->fields.dispMode = v19;
      goto LABEL_16;
    case 4:
      *(_QWORD *)&this->fields.state = 0x200000001LL;
      goto LABEL_20;
    default:
LABEL_16:
      if ( !state || dispMode != this->fields.dispMode )
LABEL_20:
        SoundPlayerListViewObject__SetupDisp(this, v17);
      v20 = *p_callbackFunc;
      if ( *p_callbackFunc )
      {
        *p_callbackFunc = 0LL;
        sub_1BE4A70(p_callbackFunc);
        ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v20->fields.m_target)(
          v20->fields.original_method_info,
          *(_QWORD *)&v20->fields.extra_arg);
      }
      return;
  }
}


void __fastcall SoundPlayerListViewObject__InitItem(SoundPlayerListViewObject_o *this, const MethodInfo *method)
{
  this->fields.state = 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SoundPlayerListViewObject__Init_32425320(
        SoundPlayerListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  float v4; // s0
  int v5; // s1

  if ( !byte_4B612E1 )
  {
    sub_1BE4ACC(&UnityEngine_Vector3_TypeInfo, *(_QWORD *)&initMode);
    byte_4B612E1 = 1;
  }
  SoundPlayerListViewObject__Init(this, initMode, 0LL, v4, *(UnityEngine_Vector3_o *)&v5, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SoundPlayerListViewObject__Init_32426808(
        SoundPlayerListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        const MethodInfo *method)
{
  int v5; // s1

  if ( !byte_4B612E1 )
  {
    sub_1BE4ACC(&UnityEngine_Vector3_TypeInfo, *(_QWORD *)&initMode);
    byte_4B612E1 = 1;
  }
  SoundPlayerListViewObject__Init(this, initMode, callbackFunc, delay, *(UnityEngine_Vector3_o *)&v5, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SoundPlayerListViewObject__Init_32426892(
        SoundPlayerListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  float v4; // s0
  int v5; // s1

  if ( !byte_4B612E1 )
  {
    sub_1BE4ACC(&UnityEngine_Vector3_TypeInfo, *(_QWORD *)&initMode);
    byte_4B612E1 = 1;
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

  if ( (byte_4B625DF & 1) == 0 )
  {
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, isInput);
    sub_1BE4ACC(&SoundPlayerListViewItem_TypeInfo, v5);
    byte_4B625DF = 1;
  }
  ListViewObject__SetInput((ListViewObject_o *)this, isInput, 0LL);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL);
  if ( v7 && !this->fields.itemDraw )
    sub_1BE4D28(v7, v8);
}


void __fastcall SoundPlayerListViewObject__SetItem(
        SoundPlayerListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  ListViewObject__SetItem_41717728((ListViewObject_o *)this, item, seed, 0LL);
  this->fields.state = 0;
}


void __fastcall SoundPlayerListViewObject__SetItem_32428380(
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

  if ( (byte_4B625E1 & 1) == 0 )
  {
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, method);
    sub_1BE4ACC(&SoundPlayerListViewItem_TypeInfo, v3);
    byte_4B625E1 = 1;
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
      sub_1BE4D28(0LL, v8);
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

  if ( (byte_4B625DB & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, value);
    byte_4B625DB = 1;
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
    v9 = sub_1C1FFBC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (SoundPlayerListViewObject_o *)sub_1BE4FE8(v8);
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
  if ( (byte_4B625E2 & 1) == 0 )
  {
    sub_1BE4ACC(&SoundPlayerListViewItem_TypeInfo, method);
    sub_1BE4ACC(&Method_SoundPlayerListViewObject_onClickSelect__, v3);
    sub_1BE4ACC(&StringLiteral_22564/*"onClickSelectListView"*/, v4);
    this = (SoundPlayerListViewObject_o *)sub_1BE4ACC(&StringLiteral_22560/*"onClickCheckListView"*/, v5);
    byte_4B625E2 = 1;
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
          v10 = (_QWORD *)sub_1BE4AE4(Method_SoundPlayerListViewObject_onClickSelect__);
        v11 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v10, v10[4]);
        OverwriteAssetSoundName__PlaySystemSe(v11, 2, 0LL);
        break;
      case 1:
        this = (SoundPlayerListViewObject_o *)v2->fields.manager;
        if ( this )
        {
          v9 = &StringLiteral_22560/*"onClickCheckListView"*/;
          goto LABEL_17;
        }
LABEL_18:
        sub_1BE4D28(this, method);
      case 0:
        this = (SoundPlayerListViewObject_o *)v2->fields.manager;
        if ( this )
        {
          v9 = &StringLiteral_22564/*"onClickSelectListView"*/;
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

  if ( (byte_4B625DC & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, value);
    byte_4B625DC = 1;
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
    v9 = sub_1C1FFBC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (SoundPlayerListViewObject_o *)sub_1BE4FE8(v8);
  SoundPlayerListViewObject__Awake(v11, v12);
}