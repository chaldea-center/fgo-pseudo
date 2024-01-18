void __fastcall CombineCommandCodeListViewObject___ctor(
        CombineCommandCodeListViewObject_o *this,
        const MethodInfo *method)
{
  if ( (byte_4186181 & 1) == 0 )
  {
    sub_B2C35C(&ListViewObject_TypeInfo, method);
    byte_4186181 = 1;
  }
  if ( (BYTE3(ListViewObject_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ListViewObject_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  }
  ListViewObject___ctor((ListViewObject_o *)this, 0LL);
}


void __fastcall CombineCommandCodeListViewObject__Awake(
        CombineCommandCodeListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  struct CombineCommandCodeListViewItemDraw_o *Component_srcLineSprite; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_4186179 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_CombineCommandCodeListViewItemDraw___, method);
    byte_4186179 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_B2C434(0LL, v3);
  Component_srcLineSprite = (struct CombineCommandCodeListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                             dispObject,
                                                                             (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_CombineCommandCodeListViewItemDraw___);
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


CombineCommandCodeListViewItem_o *__fastcall CombineCommandCodeListViewObject__GetItem(
        CombineCommandCodeListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 v4; // x11

  if ( (byte_418617A & 1) == 0 )
  {
    sub_B2C35C(&CombineCommandCodeListViewItem_TypeInfo, method);
    byte_418617A = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0LL;
  v4 = *(&CombineCommandCodeListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v4 )
    return 0LL;
  if ( (CombineCommandCodeListViewItem_c *)linkItem->klass->_2.typeHierarchy[v4 - 1] == CombineCommandCodeListViewItem_TypeInfo )
    return (CombineCommandCodeListViewItem_o *)this->fields.linkItem;
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineCommandCodeListViewObject__Init(
        CombineCommandCodeListViewObject_o *this,
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
  int32_t v30; // w8
  System_Action_o *klass; // x19

  if ( (byte_418617C & 1) == 0 )
  {
    sub_B2C35C(&CombineCommandCodeListViewItem_TypeInfo, *(_QWORD *)&initMode);
    byte_418617C = 1;
  }
  linkItem = this->fields.linkItem;
  state = this->fields.state;
  dispMode = this->fields.dispMode;
  if ( linkItem
    && (v12 = *(&CombineCommandCodeListViewItem_TypeInfo->_2.bitflags2 + 1),
        *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v12) )
  {
    if ( (CombineCommandCodeListViewItem_c *)linkItem->klass->_2.typeHierarchy[v12 - 1] == CombineCommandCodeListViewItem_TypeInfo )
      v13 = initMode;
    else
      v13 = 0;
  }
  else
  {
    v13 = 0;
  }
  ListViewObject__SetVisible((ListViewObject_o *)this, v13 != 0, 0LL);
  ((void (__fastcall *)(CombineCommandCodeListViewObject_o *, bool, Il2CppMethodPointer))this->klass->vtable._9_SetInput.method)(
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
  if ( (unsigned int)v13 <= 3 )
  {
    v30 = *((_DWORD *)&xmmword_31A04E0 + v13);
    this->fields.state = dword_31A04D0[v13];
    this->fields.dispMode = v30;
  }
  if ( !state || dispMode != this->fields.dispMode )
    CombineCommandCodeListViewObject__SetupDisp(this, v23);
  klass = (System_Action_o *)p_callbackFunc->klass;
  if ( p_callbackFunc->klass )
  {
    p_callbackFunc->klass = 0LL;
    sub_B2C2F8(p_callbackFunc, 0LL, v24, v25, v26, v27, v28, v29);
    System_Action__Invoke(klass, 0LL);
  }
}


void __fastcall CombineCommandCodeListViewObject__InitItem(
        CombineCommandCodeListViewObject_o *this,
        const MethodInfo *method)
{
  this->fields.state = 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineCommandCodeListViewObject__Init_21941572(
        CombineCommandCodeListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  zero = UnityEngine_Vector3__get_zero(0LL);
  CombineCommandCodeListViewObject__Init(
    this,
    initMode,
    0LL,
    zero.fields.x,
    *(UnityEngine_Vector3_o *)&zero.fields.y,
    v5);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineCommandCodeListViewObject__Init_21942360(
        CombineCommandCodeListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  zero = UnityEngine_Vector3__get_zero(0LL);
  CombineCommandCodeListViewObject__Init(
    this,
    initMode,
    callbackFunc,
    zero.fields.x,
    *(UnityEngine_Vector3_o *)&zero.fields.y,
    v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineCommandCodeListViewObject__Init_21950504(
        CombineCommandCodeListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        const MethodInfo *method)
{
  const MethodInfo *v8; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  zero = UnityEngine_Vector3__get_zero(0LL);
  CombineCommandCodeListViewObject__Init(
    this,
    initMode,
    callbackFunc,
    zero.fields.x,
    *(UnityEngine_Vector3_o *)&zero.fields.y,
    v8);
}


void __fastcall CombineCommandCodeListViewObject__OnClickSelect(
        CombineCommandCodeListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *manager; // x21
  CombineCommandCodeListViewObject_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  CombineCommandCodeListViewItem_o *linkItem; // x20
  CombineCommandCodeListViewItem_c *v8; // x1
  __int64 v9; // x9
  __int64 v10; // x9
  int monitor; // w8
  const MethodInfo *v12; // x1

  v3 = this;
  if ( (byte_418617E & 1) == 0 )
  {
    sub_B2C35C(&CombineCommandCodeListViewItem_TypeInfo, method);
    sub_B2C35C(&CombineCommandCodeListViewManager_TypeInfo, v4);
    sub_B2C35C(&SoundManager_TypeInfo, v5);
    this = (CombineCommandCodeListViewObject_o *)sub_B2C35C(&StringLiteral_9954/*"OnClickListView"*/, v6);
    byte_418617E = 1;
  }
  linkItem = (CombineCommandCodeListViewItem_o *)v3->fields.linkItem;
  if ( !linkItem )
    return;
  v8 = CombineCommandCodeListViewItem_TypeInfo;
  v9 = *(&CombineCommandCodeListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v9
    || (CombineCommandCodeListViewItem_c *)linkItem->klass->_2.typeHierarchy[v9 - 1] != CombineCommandCodeListViewItem_TypeInfo )
  {
    sub_B2C728(v3->fields.linkItem);
    goto LABEL_28;
  }
  manager = (UnityEngine_Component_o *)v3->fields.manager;
  if ( !manager )
    goto LABEL_29;
  v10 = *(&CombineCommandCodeListViewManager_TypeInfo->_2.bitflags2 + 1);
  if ( *(&manager->klass->_2.bitflags2 + 1) < (unsigned int)v10
    || (CombineCommandCodeListViewManager_c *)manager->klass->_2.typeHierarchy[v10 - 1] != CombineCommandCodeListViewManager_TypeInfo )
  {
LABEL_28:
    this = (CombineCommandCodeListViewObject_o *)sub_B2C728(manager);
LABEL_29:
    sub_B2C434(this, v8);
  }
  ListViewManager__ClearScrollBarValue(v3->fields.manager, 1, 0LL);
  monitor = (int)manager[22].monitor;
  if ( monitor == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    CombineCommandCodeListViewItem__SwapChoice(linkItem, 0LL);
    goto LABEL_20;
  }
  if ( monitor == 1 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(11, 0LL);
    CombineCommandCodeListViewItem__SwapLock(linkItem, 0LL);
LABEL_20:
    CombineCommandCodeListViewObject__SetupDisp(v3, v12);
    return;
  }
  if ( CombineCommandCodeListViewItem__get_CanNotSelect(linkItem, 0LL) )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(2, 0LL);
  }
  else
  {
    UnityEngine_Component__SendMessage(
      manager,
      (System_String_o *)StringLiteral_9954/*"OnClickListView"*/,
      (Il2CppObject *)v3->fields.linkItem,
      0LL);
  }
}


void __fastcall CombineCommandCodeListViewObject__OnLongPush(
        CombineCommandCodeListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *linkItem; // x2
  UnityEngine_Component_o *manager; // x0
  __int64 v6; // x9

  if ( (byte_418617F & 1) == 0 )
  {
    sub_B2C35C(&CombineCommandCodeListViewManager_TypeInfo, method);
    sub_B2C35C(&StringLiteral_10023/*"OnLongPushListView"*/, v3);
    byte_418617F = 1;
  }
  linkItem = (Il2CppObject *)this->fields.linkItem;
  if ( linkItem )
  {
    manager = (UnityEngine_Component_o *)this->fields.manager;
    if ( manager )
    {
      v6 = *(&CombineCommandCodeListViewManager_TypeInfo->_2.bitflags2 + 1);
      if ( *(&manager->klass->_2.bitflags2 + 1) >= (unsigned int)v6
        && (CombineCommandCodeListViewManager_c *)manager->klass->_2.typeHierarchy[v6 - 1] == CombineCommandCodeListViewManager_TypeInfo )
      {
        UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_10023/*"OnLongPushListView"*/, linkItem, 0LL);
        return;
      }
      manager = (UnityEngine_Component_o *)sub_B2C728(manager);
    }
    sub_B2C434(manager, method);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineCommandCodeListViewObject__SetInput(
        CombineCommandCodeListViewObject_o *this,
        bool isInput,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Object_o *itemDraw; // x20
  struct ListViewItem_o *linkItem; // x8
  __int64 v8; // x11
  struct ListViewItem_o *v9; // x1
  CombineCommandCodeListViewItemDraw_o *v10; // x0

  if ( (byte_418617B & 1) == 0 )
  {
    sub_B2C35C(&CombineCommandCodeListViewItem_TypeInfo, isInput);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v5);
    byte_418617B = 1;
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
      && (v8 = *(&CombineCommandCodeListViewItem_TypeInfo->_2.bitflags2 + 1),
          *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v8) )
    {
      if ( (CombineCommandCodeListViewItem_c *)linkItem->klass->_2.typeHierarchy[v8 - 1] == CombineCommandCodeListViewItem_TypeInfo )
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
      sub_B2C434(0LL, v9);
    CombineCommandCodeListViewItemDraw__SetInput(v10, (CombineCommandCodeListViewItem_o *)v9, 0LL);
  }
}


void __fastcall CombineCommandCodeListViewObject__SetItem(
        CombineCommandCodeListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  ListViewObject__SetItem_33907092((ListViewObject_o *)this, item, seed, 0LL);
  this->fields.state = 0;
}


void __fastcall CombineCommandCodeListViewObject__SetItem_21949536(
        CombineCommandCodeListViewObject_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ListViewObject__SetItem((ListViewObject_o *)this, item, 0LL);
  this->fields.state = 0;
}


void __fastcall CombineCommandCodeListViewObject__SetupDisp(
        CombineCommandCodeListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  struct ListViewItem_o *linkItem; // x20
  __int64 v5; // x10
  bool v6; // w1
  UnityEngine_Object_o *itemDraw; // x21
  __int64 v8; // x1
  CombineCommandCodeListViewItemDraw_o *v9; // x0

  if ( (byte_418617D & 1) == 0 )
  {
    sub_B2C35C(&CombineCommandCodeListViewItem_TypeInfo, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    byte_418617D = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    v5 = *(&CombineCommandCodeListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v5
      && (CombineCommandCodeListViewItem_c *)linkItem->klass->_2.typeHierarchy[v5 - 1] == CombineCommandCodeListViewItem_TypeInfo )
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
    v9 = this->fields.itemDraw;
    if ( !v9 )
      sub_B2C434(0LL, v8);
    CombineCommandCodeListViewItemDraw__SetItem(
      v9,
      (CombineCommandCodeListViewItem_o *)linkItem,
      this->fields.dispMode,
      0LL);
  }
}


System_String_o *__fastcall CombineCommandCodeListViewObject__ToString(
        CombineCommandCodeListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
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

  if ( (byte_4186180 & 1) == 0 )
  {
    sub_B2C35C(&CombineCommandCodeListViewItemDraw_DispMode_TypeInfo, method);
    sub_B2C35C(&StringLiteral_80/*" "*/, v3);
    byte_4186180 = 1;
  }
  v14 = 0.0;
  v13 = 0LL;
  v4 = j_il2cpp_value_box_0(CombineCommandCodeListViewItemDraw_DispMode_TypeInfo, &this->fields.dispMode);
  if ( !v4 )
    sub_B2C434(0LL, v5);
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
  return System_String__Concat_44307816(v7, (System_String_o *)StringLiteral_80/*" "*/, v11, 0LL);
}


void __fastcall CombineCommandCodeListViewObject__add_callbackFunc(
        CombineCommandCodeListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  CombineCommandCodeListViewObject_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4186177 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, value);
    byte_4186177 = 1;
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
  v11 = (CombineCommandCodeListViewObject_o *)sub_B2C728(v8);
  CombineCommandCodeListViewObject__remove_callbackFunc(v11, v12, v13);
}


void __fastcall CombineCommandCodeListViewObject__remove_callbackFunc(
        CombineCommandCodeListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  CombineCommandCodeListViewObject_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4186178 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, value);
    byte_4186178 = 1;
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
  v11 = (CombineCommandCodeListViewObject_o *)sub_B2C728(v8);
  CombineCommandCodeListViewObject__Awake(v11, v12);
}