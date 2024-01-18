void __fastcall SoundPlayerListViewObject___ctor(SoundPlayerListViewObject_o *this, const MethodInfo *method)
{
  if ( (byte_4187708 & 1) == 0 )
  {
    sub_B2C35C(&ListViewObject_TypeInfo, method);
    byte_4187708 = 1;
  }
  if ( (BYTE3(ListViewObject_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ListViewObject_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  }
  ListViewObject___ctor((ListViewObject_o *)this, 0LL);
}


void __fastcall SoundPlayerListViewObject__Awake(SoundPlayerListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  struct SoundPlayerListViewItemDraw_o *Component_srcLineSprite; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_4187702 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_SoundPlayerListViewItemDraw___, method);
    byte_4187702 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_B2C434(0LL, v3);
  Component_srcLineSprite = (struct SoundPlayerListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                      dispObject,
                                                                      (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_SoundPlayerListViewItemDraw___);
  this->fields.itemDraw = Component_srcLineSprite;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.itemDraw,
    (System_Int32_array **)Component_srcLineSprite,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
}


SoundPlayerListViewItem_o *__fastcall SoundPlayerListViewObject__GetItem(
        SoundPlayerListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 v4; // x11

  if ( (byte_4187703 & 1) == 0 )
  {
    sub_B2C35C(&SoundPlayerListViewItem_TypeInfo, method);
    byte_4187703 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0LL;
  v4 = *(&SoundPlayerListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v4 )
    return 0LL;
  if ( (SoundPlayerListViewItem_c *)linkItem->klass->_2.typeHierarchy[v4 - 1] == SoundPlayerListViewItem_TypeInfo )
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
  int32_t dispMode; // w22
  int32_t state; // w23
  __int64 v12; // x10
  int32_t v13; // w24
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
  int32_t v30; // w9
  int32_t v31; // w8
  System_Action_o *klass; // x19

  if ( (byte_4187705 & 1) == 0 )
  {
    sub_B2C35C(&SoundPlayerListViewItem_TypeInfo, *(_QWORD *)&initMode);
    byte_4187705 = 1;
  }
  linkItem = this->fields.linkItem;
  state = this->fields.state;
  dispMode = this->fields.dispMode;
  if ( linkItem
    && (v12 = *(&SoundPlayerListViewItem_TypeInfo->_2.bitflags2 + 1),
        *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v12) )
  {
    if ( (SoundPlayerListViewItem_c *)linkItem->klass->_2.typeHierarchy[v12 - 1] == SoundPlayerListViewItem_TypeInfo )
      v13 = initMode;
    else
      v13 = 0;
  }
  else
  {
    v13 = 0;
  }
  ListViewObject__SetVisible((ListViewObject_o *)this, v13 != 0, 0LL);
  ((void (__fastcall *)(SoundPlayerListViewObject_o *, bool, Il2CppMethodPointer))this->klass->vtable._9_SetInput.method)(
    this,
    v13 == 3,
    this->klass->vtable._10_Invalidation.methodPtr);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0LL),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_B2C434(transform, v15);
  }
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0LL);
  this->fields.callbackFunc = callbackFunc;
  p_callbackFunc = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callbackFunc,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  v30 = 1;
  v31 = v13;
  switch ( v13 )
  {
    case 0:
    case 2:
      goto LABEL_16;
    case 1:
      v31 = v13;
      goto LABEL_15;
    case 3:
      v31 = 2;
LABEL_15:
      v30 = v13;
LABEL_16:
      this->fields.state = v30;
      this->fields.dispMode = v31;
      goto LABEL_17;
    case 4:
      *(_QWORD *)&this->fields.state = 0x200000001LL;
      goto LABEL_19;
    default:
LABEL_17:
      if ( !state || dispMode != this->fields.dispMode )
LABEL_19:
        SoundPlayerListViewObject__SetupDisp(this, v23);
      klass = (System_Action_o *)p_callbackFunc->klass;
      if ( p_callbackFunc->klass )
      {
        p_callbackFunc->klass = 0LL;
        sub_B2C2F8(p_callbackFunc, 0LL, v24, v25, v26, v27, v28, v29);
        System_Action__Invoke(klass, 0LL);
      }
      return;
  }
}


void __fastcall SoundPlayerListViewObject__InitItem(SoundPlayerListViewObject_o *this, const MethodInfo *method)
{
  this->fields.state = 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SoundPlayerListViewObject__Init_24833788(
        SoundPlayerListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  zero = UnityEngine_Vector3__get_zero(0LL);
  SoundPlayerListViewObject__Init(this, initMode, 0LL, zero.fields.x, *(UnityEngine_Vector3_o *)&zero.fields.y, v5);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SoundPlayerListViewObject__Init_24835252(
        SoundPlayerListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        const MethodInfo *method)
{
  const MethodInfo *v8; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  zero = UnityEngine_Vector3__get_zero(0LL);
  SoundPlayerListViewObject__Init(
    this,
    initMode,
    callbackFunc,
    zero.fields.x,
    *(UnityEngine_Vector3_o *)&zero.fields.y,
    v8);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SoundPlayerListViewObject__Init_24835316(
        SoundPlayerListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  zero = UnityEngine_Vector3__get_zero(0LL);
  SoundPlayerListViewObject__Init(
    this,
    initMode,
    callbackFunc,
    zero.fields.x,
    *(UnityEngine_Vector3_o *)&zero.fields.y,
    v7);
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

  if ( (byte_4187704 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, isInput);
    sub_B2C35C(&SoundPlayerListViewItem_TypeInfo, v5);
    byte_4187704 = 1;
  }
  ListViewObject__SetInput((ListViewObject_o *)this, isInput, 0LL);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v7 = UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL);
  if ( v7 && !this->fields.itemDraw )
    sub_B2C434(v7, v8);
}


void __fastcall SoundPlayerListViewObject__SetItem(
        SoundPlayerListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  ListViewObject__SetItem_33907092((ListViewObject_o *)this, item, seed, 0LL);
  this->fields.state = 0;
}


void __fastcall SoundPlayerListViewObject__SetItem_24836372(
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
  __int64 v5; // x10
  bool v6; // w1
  UnityEngine_Object_o *itemDraw; // x21
  __int64 v8; // x1
  const MethodInfo *v9; // x3
  SoundPlayerListViewItemDraw_o *v10; // x0

  if ( (byte_4187706 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    sub_B2C35C(&SoundPlayerListViewItem_TypeInfo, v3);
    byte_4187706 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    v5 = *(&SoundPlayerListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v5
      && (SoundPlayerListViewItem_c *)linkItem->klass->_2.typeHierarchy[v5 - 1] == SoundPlayerListViewItem_TypeInfo )
    {
      v6 = this->fields.dispMode != 0;
      goto LABEL_8;
    }
    linkItem = 0LL;
  }
  v6 = 0;
LABEL_8:
  ListViewObject__SetVisible((ListViewObject_o *)this, v6, 0LL);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    v10 = this->fields.itemDraw;
    if ( !v10 )
      sub_B2C434(0LL, v8);
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

  if ( (byte_4187700 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, value);
    byte_4187700 = 1;
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
    v9 = sub_B20D74(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (SoundPlayerListViewObject_o *)sub_B2C728(v8);
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
  __int64 v7; // x11
  int32_t sortIndex; // w8
  __int64 *v9; // x8

  v2 = this;
  if ( (byte_4187707 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    sub_B2C35C(&SoundPlayerListViewItem_TypeInfo, v3);
    sub_B2C35C(&StringLiteral_21237/*"onClickSelectListView"*/, v4);
    this = (SoundPlayerListViewObject_o *)sub_B2C35C(&StringLiteral_21233/*"onClickCheckListView"*/, v5);
    byte_4187707 = 1;
  }
  linkItem = v2->fields.linkItem;
  if ( linkItem )
  {
    v7 = *(&SoundPlayerListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v7
      || (SoundPlayerListViewItem_c *)linkItem->klass->_2.typeHierarchy[v7 - 1] != SoundPlayerListViewItem_TypeInfo )
    {
      goto LABEL_19;
    }
    sortIndex = linkItem[1].fields.sortIndex;
    switch ( sortIndex )
    {
      case 2:
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playSystemSe(2, method);
        break;
      case 1:
        this = (SoundPlayerListViewObject_o *)v2->fields.manager;
        if ( this )
        {
          v9 = &StringLiteral_21233/*"onClickCheckListView"*/;
          goto LABEL_18;
        }
LABEL_19:
        sub_B2C434(this, method);
      case 0:
        this = (SoundPlayerListViewObject_o *)v2->fields.manager;
        if ( this )
        {
          v9 = &StringLiteral_21237/*"onClickSelectListView"*/;
LABEL_18:
          UnityEngine_Component__SendMessage(
            (UnityEngine_Component_o *)this,
            (System_String_o *)*v9,
            (Il2CppObject *)v2,
            0LL);
          return;
        }
        goto LABEL_19;
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

  if ( (byte_4187701 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, value);
    byte_4187701 = 1;
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
    v9 = sub_B20D74(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (SoundPlayerListViewObject_o *)sub_B2C728(v8);
  SoundPlayerListViewObject__Awake(v11, v12);
}