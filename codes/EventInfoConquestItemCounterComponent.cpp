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
    UnityEngine_MonoBehaviour__StartCoroutine_35611808((UnityEngine_MonoBehaviour_o *)this, v3, 0LL);
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

  if ( (byte_42B0DBE & 1) == 0 )
  {
    sub_B52984(&AtlasManager_TypeInfo);
    byte_42B0DBE = 1;
  }
  this->fields._itemId_k__BackingField = itemId;
  baseSprite = this->fields.baseSprite;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(baseSprite, spriteName, 0LL);
  v9 = this->fields.baseSprite;
  if ( !v9 )
    sub_B52A5C(0LL, v8);
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
  Il2CppObject *v11; // x0
  System_String_o *v12; // x0
  __int64 v13; // x1
  UILabel_o *productNumLabel; // x22
  System_String_o *v15; // x23
  Il2CppObject *v16; // x0
  int v17; // [xsp+8h] [xbp-38h] BYREF
  int32_t v18; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_42B0DBF & 1) == 0 )
  {
    sub_B52984(&int_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&StringLiteral_5640/*"EVENT_CONQUEST_ITEM_FORMAT"*/);
    sub_B52984(&StringLiteral_5643/*"EVENT_CONQUEST_PRODUCT_FORMAT"*/);
    byte_42B0DBF = 1;
  }
  itemNumLabel = this->fields.itemNumLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_5640/*"EVENT_CONQUEST_ITEM_FORMAT"*/, 0LL);
  v18 = itemNum;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v18);
  v12 = System_String__Format(v10, v11, 0LL);
  if ( !itemNumLabel )
    goto LABEL_11;
  UILabel__set_text(itemNumLabel, v12, 0LL);
  productNumLabel = this->fields.productNumLabel;
  v15 = LocalizationManager__Get((System_String_o *)StringLiteral_5643/*"EVENT_CONQUEST_PRODUCT_FORMAT"*/, 0LL);
  v17 = productNum - addNum;
  v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v17);
  v12 = System_String__Format(v15, v16, 0LL);
  if ( !productNumLabel
    || (UILabel__set_text(productNumLabel, v12, 0LL), (v12 = (System_String_o *)this->fields.itemNumLabel) == 0LL)
    || (UILabel__SetCondensedScale((UILabel_o *)v12, this->fields.numLabelMaxWidth, 0LL),
        (v12 = (System_String_o *)this->fields.productNumLabel) == 0LL) )
  {
LABEL_11:
    sub_B52A5C(v12, v13);
  }
  UILabel__SetCondensedScale((UILabel_o *)v12, this->fields.numLabelMaxWidth, 0LL);
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

  if ( (byte_42B0DBD & 1) == 0 )
  {
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&StringLiteral_5644/*"EVENT_CONQUEST_PRODUCT_NUM"*/);
    sub_B52984(&StringLiteral_5641/*"EVENT_CONQUEST_ITEM_NUM"*/);
    byte_42B0DBD = 1;
  }
  itemNumTitleLabel = this->fields.itemNumTitleLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_5641/*"EVENT_CONQUEST_ITEM_NUM"*/, 0LL);
  if ( !itemNumTitleLabel
    || (UILabel__set_text(itemNumTitleLabel, v4, 0LL),
        productNumTitleLabel = this->fields.productNumTitleLabel,
        v4 = LocalizationManager__Get((System_String_o *)StringLiteral_5644/*"EVENT_CONQUEST_PRODUCT_NUM"*/, 0LL),
        !productNumTitleLabel)
    || (UILabel__set_text(productNumTitleLabel, v4, 0LL), (v4 = (System_String_o *)this->fields.itemNumTitleLabel) == 0LL)
    || (UILabel__SetCondensedScale((UILabel_o *)v4, this->fields.titleLabelMaxWidth, 0LL),
        (v4 = (System_String_o *)this->fields.productNumTitleLabel) == 0LL) )
  {
    sub_B52A5C(v4, v5);
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

  if ( (byte_42B0DC0 & 1) == 0 )
  {
    sub_B52984(&EventInfoConquestItemCounterComponent__anim_d__21_TypeInfo);
    byte_42B0DC0 = 1;
  }
  v3 = sub_B52A54(EventInfoConquestItemCounterComponent__anim_d__21_TypeInfo);
  EventInfoConquestItemCounterComponent__anim_d__21___ctor(
    (EventInfoConquestItemCounterComponent__anim_d__21_o *)v3,
    0,
    0LL);
  if ( !v3 )
    sub_B52A5C(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_B52920((BattleServantConfConponent_o *)(v3 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
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
  bool result; // w0
  int32_t itemId_k__BackingField; // w1
  int32_t itemNum; // w2
  int32_t productNum; // w3
  int v13; // [xsp+Ch] [xbp-14h] BYREF

  v2 = this;
  if ( (byte_42AD8F2 & 1) == 0 )
  {
    this = (EventInfoConquestItemCounterComponent__anim_d__21_o *)sub_B52984(&int_TypeInfo);
    byte_42AD8F2 = 1;
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
    sub_B52A5C(this, method);
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
  v13 = 0;
  v2->fields.__2__current = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v13);
  sub_B52920(&v2->fields.__2__current);
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

  v2 = sub_B52988(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B52A54(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B52988(&Method_EventInfoConquestItemCounterComponent__anim_d__21_System_Collections_IEnumerator_Reset__);
  sub_B52A28(v3, v4);
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