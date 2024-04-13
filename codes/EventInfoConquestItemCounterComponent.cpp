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
    UnityEngine_MonoBehaviour__StartCoroutine_35615088((UnityEngine_MonoBehaviour_o *)this, v3, 0LL);
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

  if ( (byte_42E94AF & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, itemId, (_DWORD)spriteName, method);
    byte_42E94AF = 1;
  }
  this->fields._itemId_k__BackingField = itemId;
  baseSprite = this->fields.baseSprite;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(baseSprite, spriteName, 0LL);
  v9 = this->fields.baseSprite;
  if ( !v9 )
    sub_B5D69C(0LL, v8);
  ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v9->klass->vtable._33_MakePixelPerfect.method)(
    v9,
    v9->klass->vtable._34_get_minWidth.methodPtr);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoConquestItemCounterComponent__SetLabel(
        EventInfoConquestItemCounterComponent_o *this,
        int32_t itemNum,
        int32_t productNum,
        int32_t addNum,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  UILabel_o *itemNumLabel; // x23
  System_String_o *v19; // x24
  Il2CppObject *v20; // x0
  System_String_o *v21; // x0
  __int64 v22; // x1
  UILabel_o *productNumLabel; // x22
  System_String_o *v24; // x23
  Il2CppObject *v25; // x0
  int v26; // [xsp+8h] [xbp-38h] BYREF
  int32_t v27; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_42E94B0 & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, itemNum, productNum, *(_QWORD *)&addNum);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_5675/*"EVENT_CONQUEST_ITEM_FORMAT"*/, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_5678/*"EVENT_CONQUEST_PRODUCT_FORMAT"*/, v15, v16, v17);
    byte_42E94B0 = 1;
  }
  itemNumLabel = this->fields.itemNumLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v19 = LocalizationManager__Get((System_String_o *)StringLiteral_5675/*"EVENT_CONQUEST_ITEM_FORMAT"*/, 0LL);
  v27 = itemNum;
  v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v27);
  v21 = System_String__Format(v19, v20, 0LL);
  if ( !itemNumLabel )
    goto LABEL_11;
  UILabel__set_text(itemNumLabel, v21, 0LL);
  productNumLabel = this->fields.productNumLabel;
  v24 = LocalizationManager__Get((System_String_o *)StringLiteral_5678/*"EVENT_CONQUEST_PRODUCT_FORMAT"*/, 0LL);
  v26 = productNum - addNum;
  v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v26);
  v21 = System_String__Format(v24, v25, 0LL);
  if ( !productNumLabel
    || (UILabel__set_text(productNumLabel, v21, 0LL), (v21 = (System_String_o *)this->fields.itemNumLabel) == 0LL)
    || (UILabel__SetCondensedScale((UILabel_o *)v21, this->fields.numLabelMaxWidth, 0LL),
        (v21 = (System_String_o *)this->fields.productNumLabel) == 0LL) )
  {
LABEL_11:
    sub_B5D69C(v21, v22);
  }
  UILabel__SetCondensedScale((UILabel_o *)v21, this->fields.numLabelMaxWidth, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  UILabel_o *itemNumTitleLabel; // x20
  System_String_o *v12; // x0
  __int64 v13; // x1
  UILabel_o *productNumTitleLabel; // x20
  const MethodInfo *v15; // x4

  if ( (byte_42E94AE & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_5679/*"EVENT_CONQUEST_PRODUCT_NUM"*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_5676/*"EVENT_CONQUEST_ITEM_NUM"*/, v8, v9, v10);
    byte_42E94AE = 1;
  }
  itemNumTitleLabel = this->fields.itemNumTitleLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_5676/*"EVENT_CONQUEST_ITEM_NUM"*/, 0LL);
  if ( !itemNumTitleLabel
    || (UILabel__set_text(itemNumTitleLabel, v12, 0LL),
        productNumTitleLabel = this->fields.productNumTitleLabel,
        v12 = LocalizationManager__Get((System_String_o *)StringLiteral_5679/*"EVENT_CONQUEST_PRODUCT_NUM"*/, 0LL),
        !productNumTitleLabel)
    || (UILabel__set_text(productNumTitleLabel, v12, 0LL),
        (v12 = (System_String_o *)this->fields.itemNumTitleLabel) == 0LL)
    || (UILabel__SetCondensedScale((UILabel_o *)v12, this->fields.titleLabelMaxWidth, 0LL),
        (v12 = (System_String_o *)this->fields.productNumTitleLabel) == 0LL) )
  {
    sub_B5D69C(v12, v13);
  }
  UILabel__SetCondensedScale((UILabel_o *)v12, this->fields.titleLabelMaxWidth, 0LL);
  EventInfoConquestItemCounterComponent__SetLabel(
    this,
    this->fields.itemNum,
    this->fields.productNum,
    this->fields.addProductNum,
    v15);
}


System_Collections_IEnumerator_o *__fastcall EventInfoConquestItemCounterComponent__anim(
        EventInfoConquestItemCounterComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_42E94B1 & 1) == 0 )
  {
    sub_B5D5C4(&EventInfoConquestItemCounterComponent__anim_d__21_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E94B1 = 1;
  }
  v5 = sub_B5D694(EventInfoConquestItemCounterComponent__anim_d__21_TypeInfo);
  EventInfoConquestItemCounterComponent__anim_d__21___ctor(
    (EventInfoConquestItemCounterComponent__anim_d__21_o *)v5,
    0,
    0LL);
  if ( !v5 )
    sub_B5D69C(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  return (System_Collections_IEnumerator_o *)v5;
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
  int v2; // w2
  __int64 v3; // x3
  EventInfoConquestItemCounterComponent__anim_d__21_o *v4; // x19
  int32_t _1__state; // w8
  EventInfoConquestItemCounterComponent_o *_4__this; // x20
  int addProductNum; // s8
  int32_t i_5__3; // w8
  float v9; // s0
  double v10; // d0
  bool result; // w0
  int32_t itemId_k__BackingField; // w1
  int32_t itemNum; // w2
  int32_t productNum; // w3
  int v15; // [xsp+Ch] [xbp-14h] BYREF

  v4 = this;
  if ( (byte_42E6530 & 1) == 0 )
  {
    this = (EventInfoConquestItemCounterComponent__anim_d__21_o *)sub_B5D5C4(&int_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E6530 = 1;
  }
  _1__state = v4->fields.__1__state;
  _4__this = v4->fields.__4__this;
  if ( _1__state != 1 )
  {
    if ( _1__state )
      return 0;
    v4->fields.__1__state = -1;
    if ( _4__this )
    {
      addProductNum = _4__this->fields.addProductNum;
      v4->fields._add_5__2 = (float)addProductNum / (float)UnityEngine_Application__get_targetFrameRate(0LL);
      LODWORD(this) = UnityEngine_Application__get_targetFrameRate(0LL);
      v4->fields._i_5__3 = (int)this;
      goto LABEL_8;
    }
LABEL_15:
    sub_B5D69C(this, method);
  }
  i_5__3 = v4->fields._i_5__3;
  v4->fields.__1__state = -1;
  this = (EventInfoConquestItemCounterComponent__anim_d__21_o *)(unsigned int)(i_5__3 - 1);
  v4->fields._i_5__3 = (int)this;
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
  v9 = v4->fields._add_5__2 * (float)(int)this;
  if ( v9 == INFINITY )
    v10 = -v9;
  else
    v10 = v9;
  EventInfoConquestItemCounterComponent__SetLabel(
    _4__this,
    _4__this->fields.itemNum,
    _4__this->fields.productNum,
    (int)v10,
    0LL);
  v15 = 0;
  v4->fields.__2__current = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v15);
  sub_B5D560(&v4->fields.__2__current);
  result = 1;
  v4->fields.__1__state = 1;
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

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_EventInfoConquestItemCounterComponent__anim_d__21_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
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