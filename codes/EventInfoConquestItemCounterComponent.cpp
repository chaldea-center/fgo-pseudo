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
    UnityEngine_MonoBehaviour__StartCoroutine_36062060((UnityEngine_MonoBehaviour_o *)this, v3, 0LL);
  }
}


void __fastcall EventInfoConquestItemCounterComponent__SetItem(
        EventInfoConquestItemCounterComponent_o *this,
        int32_t itemId,
        System_String_o *spriteName,
        const MethodInfo *method)
{
  UISprite_o *baseSprite; // x21
  __int64 v8; // x1
  struct UISprite_o *v9; // x0

  if ( (byte_43529EA & 1) == 0 )
  {
    sub_B70694(&AtlasManager_TypeInfo);
    byte_43529EA = 1;
  }
  this->fields._itemId_k__BackingField = itemId;
  baseSprite = this->fields.baseSprite;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(baseSprite, spriteName, 0LL);
  v9 = this->fields.baseSprite;
  if ( !v9 )
    sub_B7076C(0LL, v8);
  ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v9->klass->vtable._33_MakePixelPerfect.method)(
    v9,
    v9->klass->vtable._34_get_minWidth.methodPtr);
}


void __fastcall EventInfoConquestItemCounterComponent__SetLabel(
        EventInfoConquestItemCounterComponent_o *this,
        int32_t itemNum,
        int32_t productNum,
        int32_t addNum,
        const MethodInfo *method)
{
  UILabel_o *itemNumLabel; // x23
  System_String_o *v10; // x24
  __int64 v11; // x2
  Il2CppObject *v12; // x0
  System_String_o *v13; // x0
  __int64 v14; // x1
  UILabel_o *productNumLabel; // x22
  System_String_o *v16; // x23
  __int64 v17; // x2
  Il2CppObject *v18; // x0
  int v19; // [xsp+8h] [xbp-38h] BYREF
  int32_t v20; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_43529EB & 1) == 0 )
  {
    sub_B70694(&int_TypeInfo);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&StringLiteral_5686/*"EVENT_CONQUEST_ITEM_FORMAT"*/);
    sub_B70694(&StringLiteral_5689/*"EVENT_CONQUEST_PRODUCT_FORMAT"*/);
    byte_43529EB = 1;
  }
  itemNumLabel = this->fields.itemNumLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_5686/*"EVENT_CONQUEST_ITEM_FORMAT"*/, 0LL);
  v20 = itemNum;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v20, v11);
  v13 = System_String__Format(v10, v12, 0LL);
  if ( !itemNumLabel )
    goto LABEL_11;
  UILabel__set_text(itemNumLabel, v13, 0LL);
  productNumLabel = this->fields.productNumLabel;
  v16 = LocalizationManager__Get((System_String_o *)StringLiteral_5689/*"EVENT_CONQUEST_PRODUCT_FORMAT"*/, 0LL);
  v19 = productNum - addNum;
  v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v19, v17);
  v13 = System_String__Format(v16, v18, 0LL);
  if ( !productNumLabel
    || (UILabel__set_text(productNumLabel, v13, 0LL), (v13 = (System_String_o *)this->fields.itemNumLabel) == 0LL)
    || (UILabel__SetCondensedScale((UILabel_o *)v13, this->fields.numLabelMaxWidth, 0LL),
        (v13 = (System_String_o *)this->fields.productNumLabel) == 0LL) )
  {
LABEL_11:
    sub_B7076C(v13, v14);
  }
  UILabel__SetCondensedScale((UILabel_o *)v13, this->fields.numLabelMaxWidth, 0LL);
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
  UILabel_o *itemNumTitleLabel; // x20
  System_String_o *v4; // x0
  __int64 v5; // x1
  UILabel_o *productNumTitleLabel; // x20
  const MethodInfo *v7; // x4

  if ( (byte_43529E9 & 1) == 0 )
  {
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&StringLiteral_5690/*"EVENT_CONQUEST_PRODUCT_NUM"*/);
    sub_B70694(&StringLiteral_5687/*"EVENT_CONQUEST_ITEM_NUM"*/);
    byte_43529E9 = 1;
  }
  itemNumTitleLabel = this->fields.itemNumTitleLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_5687/*"EVENT_CONQUEST_ITEM_NUM"*/, 0LL);
  if ( !itemNumTitleLabel
    || (UILabel__set_text(itemNumTitleLabel, v4, 0LL),
        productNumTitleLabel = this->fields.productNumTitleLabel,
        v4 = LocalizationManager__Get((System_String_o *)StringLiteral_5690/*"EVENT_CONQUEST_PRODUCT_NUM"*/, 0LL),
        !productNumTitleLabel)
    || (UILabel__set_text(productNumTitleLabel, v4, 0LL), (v4 = (System_String_o *)this->fields.itemNumTitleLabel) == 0LL)
    || (UILabel__SetCondensedScale((UILabel_o *)v4, this->fields.titleLabelMaxWidth, 0LL),
        (v4 = (System_String_o *)this->fields.productNumTitleLabel) == 0LL) )
  {
    sub_B7076C(v4, v5);
  }
  UILabel__SetCondensedScale((UILabel_o *)v4, this->fields.titleLabelMaxWidth, 0LL);
  EventInfoConquestItemCounterComponent__SetLabel(
    this,
    this->fields.itemNum,
    this->fields.productNum,
    this->fields.addProductNum,
    v7);
}


System_Collections_IEnumerator_o *__fastcall EventInfoConquestItemCounterComponent__anim(
        EventInfoConquestItemCounterComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_43529EC & 1) == 0 )
  {
    sub_B70694(&EventInfoConquestItemCounterComponent__anim_d__21_TypeInfo);
    byte_43529EC = 1;
  }
  v3 = sub_B70764(EventInfoConquestItemCounterComponent__anim_d__21_TypeInfo);
  EventInfoConquestItemCounterComponent__anim_d__21___ctor(
    (EventInfoConquestItemCounterComponent__anim_d__21_o *)v3,
    0,
    0LL);
  if ( !v3 )
    sub_B7076C(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_B70630((BattleServantConfConponent_o *)(v3 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v3;
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
  EventInfoConquestItemCounterComponent__anim_d__21_o *v2; // x19
  int32_t _1__state; // w8
  EventInfoConquestItemCounterComponent_o *_4__this; // x20
  int addProductNum; // s8
  int32_t i_5__3; // w8
  float v7; // s0
  double v8; // d0
  __int64 v9; // x2
  bool result; // w0
  int32_t itemId_k__BackingField; // w1
  int32_t itemNum; // w2
  int32_t productNum; // w3
  int v14; // [xsp+Ch] [xbp-14h] BYREF

  v2 = this;
  if ( (byte_434F07C & 1) == 0 )
  {
    this = (EventInfoConquestItemCounterComponent__anim_d__21_o *)sub_B70694(&int_TypeInfo);
    byte_434F07C = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state != 1 )
  {
    if ( _1__state )
      return 0;
    v2->fields.__1__state = -1;
    if ( _4__this )
    {
      addProductNum = _4__this->fields.addProductNum;
      v2->fields._add_5__2 = (float)addProductNum / (float)UnityEngine_Application__get_targetFrameRate(0LL);
      LODWORD(this) = UnityEngine_Application__get_targetFrameRate(0LL);
      v2->fields._i_5__3 = (int)this;
      goto LABEL_8;
    }
LABEL_15:
    sub_B7076C(this, method);
  }
  i_5__3 = v2->fields._i_5__3;
  v2->fields.__1__state = -1;
  this = (EventInfoConquestItemCounterComponent__anim_d__21_o *)(unsigned int)(i_5__3 - 1);
  v2->fields._i_5__3 = (int)this;
  if ( !_4__this )
    goto LABEL_15;
LABEL_8:
  if ( (int)this <= 0 )
  {
    itemId_k__BackingField = _4__this->fields._itemId_k__BackingField;
    itemNum = _4__this->fields.itemNum;
    productNum = _4__this->fields.productNum;
    _4__this->fields.addProductNum = 0;
    EventInfoConquestItemCounterComponent__SetNum(_4__this, itemId_k__BackingField, itemNum, productNum, 0, 0LL);
    return 0;
  }
  v7 = v2->fields._add_5__2 * (float)(int)this;
  if ( v7 == INFINITY )
    v8 = -v7;
  else
    v8 = v7;
  EventInfoConquestItemCounterComponent__SetLabel(
    _4__this,
    _4__this->fields.itemNum,
    _4__this->fields.productNum,
    (int)v8,
    0LL);
  v14 = 0;
  v2->fields.__2__current = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v14, v9);
  sub_B70630(&v2->fields.__2__current);
  result = 1;
  v2->fields.__1__state = 1;
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
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B70698(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B70764(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B70698(&Method_EventInfoConquestItemCounterComponent__anim_d__21_System_Collections_IEnumerator_Reset__);
  sub_B70738(v3, v4);
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