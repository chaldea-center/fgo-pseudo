void __fastcall EventInfoConquestItemCounterComponent___ctor(
        EventInfoConquestItemCounterComponent_o *this,
        const MethodInfo *method)
{
  *(_QWORD *)&this->fields.titleLabelMaxWidth = 0x4800000022LL;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EventInfoConquestItemCounterComponent__PlayAnim(
        EventInfoConquestItemCounterComponent_o *this,
        const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v3; // x1

  if ( this->fields.addProductNum )
  {
    v3 = EventInfoConquestItemCounterComponent__anim(this, method);
    UnityEngine_MonoBehaviour__StartCoroutine_34804316((UnityEngine_MonoBehaviour_o *)this, v3, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoConquestItemCounterComponent__SetItem(
        EventInfoConquestItemCounterComponent_o *this,
        int32_t itemId,
        System_String_o *spriteName,
        const MethodInfo *method)
{
  UISprite_o *baseSprite; // x21
  struct UISprite_o *v8; // x0

  if ( (byte_40FA0FE & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, *(_QWORD *)&itemId);
    byte_40FA0FE = 1;
  }
  this->fields._itemId_k__BackingField = itemId;
  baseSprite = this->fields.baseSprite;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(baseSprite, spriteName, 0LL);
  v8 = this->fields.baseSprite;
  if ( !v8 )
    sub_B170D4();
  ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v8->klass->vtable._33_MakePixelPerfect.method)(
    v8,
    v8->klass->vtable._34_get_minWidth.methodPtr);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoConquestItemCounterComponent__SetLabel(
        EventInfoConquestItemCounterComponent_o *this,
        int32_t itemNum,
        int32_t productNum,
        int32_t addNum,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  UILabel_o *itemNumLabel; // x23
  System_String_o *v13; // x24
  Il2CppObject *v14; // x0
  System_String_o *v15; // x0
  UILabel_o *productNumLabel; // x22
  System_String_o *v17; // x23
  Il2CppObject *v18; // x0
  System_String_o *v19; // x0
  UILabel_o *v20; // x0
  UILabel_o *v21; // x0
  int v22; // [xsp+8h] [xbp-38h] BYREF
  int32_t v23; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_40FA0FF & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, *(_QWORD *)&itemNum);
    sub_B16FFC(&LocalizationManager_TypeInfo, v9);
    sub_B16FFC(&StringLiteral_5583, v10);
    sub_B16FFC(&StringLiteral_5586, v11);
    byte_40FA0FF = 1;
  }
  itemNumLabel = this->fields.itemNumLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v13 = LocalizationManager__Get((System_String_o *)StringLiteral_5583, 0LL);
  v23 = itemNum;
  v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v23);
  v15 = System_String__Format(v13, v14, 0LL);
  if ( !itemNumLabel )
    goto LABEL_11;
  UILabel__set_text(itemNumLabel, v15, 0LL);
  productNumLabel = this->fields.productNumLabel;
  v17 = LocalizationManager__Get((System_String_o *)StringLiteral_5586, 0LL);
  v22 = productNum - addNum;
  v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v22);
  v19 = System_String__Format(v17, v18, 0LL);
  if ( !productNumLabel
    || (UILabel__set_text(productNumLabel, v19, 0LL), (v20 = this->fields.itemNumLabel) == 0LL)
    || (UILabel__SetCondensedScale(v20, this->fields.numLabelMaxWidth, 0LL), (v21 = this->fields.productNumLabel) == 0LL) )
  {
LABEL_11:
    sub_B170D4();
  }
  UILabel__SetCondensedScale(v21, this->fields.numLabelMaxWidth, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoConquestItemCounterComponent__SetNum(
        EventInfoConquestItemCounterComponent_o *this,
        int32_t itemId,
        int32_t itemNum,
        int32_t productNum,
        int32_t addProductNum,
        const MethodInfo *method)
{
  if ( this->fields._itemId_k__BackingField == itemId )
  {
    this->fields.addProductNum = addProductNum;
    this->fields.productNum = productNum;
    this->fields.itemNum = itemNum;
    EventInfoConquestItemCounterComponent__SetLabel(
      this,
      itemNum,
      productNum,
      addProductNum,
      *(const MethodInfo **)&addProductNum);
  }
}


void __fastcall EventInfoConquestItemCounterComponent__Start(
        EventInfoConquestItemCounterComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UILabel_o *itemNumTitleLabel; // x20
  System_String_o *v6; // x0
  UILabel_o *productNumTitleLabel; // x20
  System_String_o *v8; // x0
  UILabel_o *v9; // x0
  UILabel_o *v10; // x0
  const MethodInfo *v11; // x4

  if ( (byte_40FA0FD & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_5587, v3);
    sub_B16FFC(&StringLiteral_5584, v4);
    byte_40FA0FD = 1;
  }
  itemNumTitleLabel = this->fields.itemNumTitleLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_5584, 0LL);
  if ( !itemNumTitleLabel
    || (UILabel__set_text(itemNumTitleLabel, v6, 0LL),
        productNumTitleLabel = this->fields.productNumTitleLabel,
        v8 = LocalizationManager__Get((System_String_o *)StringLiteral_5587, 0LL),
        !productNumTitleLabel)
    || (UILabel__set_text(productNumTitleLabel, v8, 0LL), (v9 = this->fields.itemNumTitleLabel) == 0LL)
    || (UILabel__SetCondensedScale(v9, this->fields.titleLabelMaxWidth, 0LL),
        (v10 = this->fields.productNumTitleLabel) == 0LL) )
  {
    sub_B170D4();
  }
  UILabel__SetCondensedScale(v10, this->fields.titleLabelMaxWidth, 0LL);
  EventInfoConquestItemCounterComponent__SetLabel(
    this,
    this->fields.itemNum,
    this->fields.productNum,
    this->fields.addProductNum,
    v11);
}


System_Collections_IEnumerator_o *__fastcall EventInfoConquestItemCounterComponent__anim(
        EventInfoConquestItemCounterComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40FA100 & 1) == 0 )
  {
    sub_B16FFC(&EventInfoConquestItemCounterComponent__anim_d__21_TypeInfo, method);
    byte_40FA100 = 1;
  }
  v6 = sub_B170CC(EventInfoConquestItemCounterComponent__anim_d__21_TypeInfo, method, v2, v3, v4);
  EventInfoConquestItemCounterComponent__anim_d__21___ctor(
    (EventInfoConquestItemCounterComponent__anim_d__21_o *)v6,
    0,
    0LL);
  if ( !v6 )
    sub_B170D4();
  *(_QWORD *)(v6 + 32) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v6 + 32), (System_Int32_array **)this, v7, v8, v9, v10, v11, v12);
  return (System_Collections_IEnumerator_o *)v6;
}


bool __fastcall EventInfoConquestItemCounterComponent__get_IsAnimFinished(
        EventInfoConquestItemCounterComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.addProductNum == 0;
}


int32_t __fastcall EventInfoConquestItemCounterComponent__get_itemId(
        EventInfoConquestItemCounterComponent_o *this,
        const MethodInfo *method)
{
  return this->fields._itemId_k__BackingField;
}


void __fastcall EventInfoConquestItemCounterComponent__set_itemId(
        EventInfoConquestItemCounterComponent_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._itemId_k__BackingField = value;
}


void __fastcall EventInfoConquestItemCounterComponent__anim_d__21___ctor(
        EventInfoConquestItemCounterComponent__anim_d__21_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall EventInfoConquestItemCounterComponent__anim_d__21__MoveNext(
        EventInfoConquestItemCounterComponent__anim_d__21_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  struct EventInfoConquestItemCounterComponent_o *_4__this; // x20
  int addProductNum; // s8
  int targetFrameRate; // w0
  int32_t i_5__3; // w8
  float v8; // s0
  double v9; // d0
  Il2CppObject *v10; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  bool result; // w0
  int32_t itemId_k__BackingField; // w1
  int32_t itemNum; // w2
  int32_t productNum; // w3
  int v21; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_40F6FCA & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, method);
    byte_40F6FCA = 1;
  }
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  if ( _1__state != 1 )
  {
    if ( _1__state )
      return 0;
    this->fields.__1__state = -1;
    if ( _4__this )
    {
      addProductNum = _4__this->fields.addProductNum;
      this->fields._add_5__2 = (float)addProductNum / (float)UnityEngine_Application__get_targetFrameRate(0LL);
      targetFrameRate = UnityEngine_Application__get_targetFrameRate(0LL);
      this->fields._i_5__3 = targetFrameRate;
      goto LABEL_8;
    }
LABEL_15:
    sub_B170D4();
  }
  i_5__3 = this->fields._i_5__3;
  this->fields.__1__state = -1;
  targetFrameRate = i_5__3 - 1;
  this->fields._i_5__3 = i_5__3 - 1;
  if ( !_4__this )
    goto LABEL_15;
LABEL_8:
  if ( targetFrameRate <= 0 )
  {
    itemId_k__BackingField = _4__this->fields._itemId_k__BackingField;
    itemNum = _4__this->fields.itemNum;
    productNum = _4__this->fields.productNum;
    _4__this->fields.addProductNum = 0;
    EventInfoConquestItemCounterComponent__SetNum(_4__this, itemId_k__BackingField, itemNum, productNum, 0, 0LL);
    return 0;
  }
  v8 = this->fields._add_5__2 * (float)targetFrameRate;
  if ( v8 == INFINITY )
    v9 = -v8;
  else
    v9 = v8;
  EventInfoConquestItemCounterComponent__SetLabel(
    _4__this,
    _4__this->fields.itemNum,
    _4__this->fields.productNum,
    (int)v9,
    0LL);
  v21 = 0;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v21);
  this->fields.__2__current = v10;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.__2__current,
    (System_Int32_array **)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  result = 1;
  this->fields.__1__state = 1;
  return result;
}


Il2CppObject *__fastcall EventInfoConquestItemCounterComponent__anim_d__21__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        EventInfoConquestItemCounterComponent__anim_d__21_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn EventInfoConquestItemCounterComponent__anim_d__21__System_Collections_IEnumerator_Reset(
        EventInfoConquestItemCounterComponent__anim_d__21_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0
  __int64 v8; // x1

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo, method);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_EventInfoConquestItemCounterComponent__anim_d__21_System_Collections_IEnumerator_Reset__, v8);
  sub_B170A0();
}


Il2CppObject *__fastcall EventInfoConquestItemCounterComponent__anim_d__21__System_Collections_IEnumerator_get_Current(
        EventInfoConquestItemCounterComponent__anim_d__21_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall EventInfoConquestItemCounterComponent__anim_d__21__System_IDisposable_Dispose(
        EventInfoConquestItemCounterComponent__anim_d__21_o *this,
        const MethodInfo *method)
{
  ;
}