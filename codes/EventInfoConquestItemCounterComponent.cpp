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
    UnityEngine_MonoBehaviour__StartCoroutine_69113008((UnityEngine_MonoBehaviour_o *)this, v3, 0LL);
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

  if ( (byte_49FCF95 & 1) == 0 )
  {
    sub_1B640C8(&AtlasManager_TypeInfo, *(_QWORD *)&itemId);
    byte_49FCF95 = 1;
  }
  this->fields._itemId_k__BackingField = itemId;
  baseSprite = this->fields.baseSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(baseSprite, spriteName, 0LL);
  v8 = this->fields.baseSprite;
  if ( !v8 )
    sub_1B64324(0LL);
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
  int v19; // [xsp+8h] [xbp-48h] BYREF
  int32_t v20; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_49FCF96 & 1) == 0 )
  {
    sub_1B640C8(&int_TypeInfo, *(_QWORD *)&itemNum);
    sub_1B640C8(&LocalizationManager_TypeInfo, v9);
    sub_1B640C8(&StringLiteral_5564/*"EVENT_CONQUEST_ITEM_FORMAT"*/, v10);
    sub_1B640C8(&StringLiteral_5567/*"EVENT_CONQUEST_PRODUCT_FORMAT"*/, v11);
    byte_49FCF96 = 1;
  }
  itemNumLabel = this->fields.itemNumLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v13 = LocalizationManager__Get((System_String_o *)StringLiteral_5564/*"EVENT_CONQUEST_ITEM_FORMAT"*/, 0LL);
  v20 = itemNum;
  v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v20);
  v15 = System_String__Format(v13, v14, 0LL);
  if ( !itemNumLabel )
    goto LABEL_10;
  UILabel__set_text(itemNumLabel, v15, 0LL);
  productNumLabel = this->fields.productNumLabel;
  v17 = LocalizationManager__Get((System_String_o *)StringLiteral_5567/*"EVENT_CONQUEST_PRODUCT_FORMAT"*/, 0LL);
  v19 = productNum - addNum;
  v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v19);
  v15 = System_String__Format(v17, v18, 0LL);
  if ( !productNumLabel
    || (UILabel__set_text(productNumLabel, v15, 0LL), (v15 = (System_String_o *)this->fields.itemNumLabel) == 0LL)
    || (UILabel__SetCondensedScale((UILabel_o *)v15, this->fields.numLabelMaxWidth, 0LL),
        (v15 = (System_String_o *)this->fields.productNumLabel) == 0LL) )
  {
LABEL_10:
    sub_1B64324(v15);
  }
  UILabel__SetCondensedScale((UILabel_o *)v15, this->fields.numLabelMaxWidth, 0LL);
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
  const MethodInfo *v8; // x4

  if ( (byte_49FCF94 & 1) == 0 )
  {
    sub_1B640C8(&LocalizationManager_TypeInfo, method);
    sub_1B640C8(&StringLiteral_5568/*"EVENT_CONQUEST_PRODUCT_NUM"*/, v3);
    sub_1B640C8(&StringLiteral_5565/*"EVENT_CONQUEST_ITEM_NUM"*/, v4);
    byte_49FCF94 = 1;
  }
  itemNumTitleLabel = this->fields.itemNumTitleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_5565/*"EVENT_CONQUEST_ITEM_NUM"*/, 0LL);
  if ( !itemNumTitleLabel
    || (UILabel__set_text(itemNumTitleLabel, v6, 0LL),
        productNumTitleLabel = this->fields.productNumTitleLabel,
        v6 = LocalizationManager__Get((System_String_o *)StringLiteral_5568/*"EVENT_CONQUEST_PRODUCT_NUM"*/, 0LL),
        !productNumTitleLabel)
    || (UILabel__set_text(productNumTitleLabel, v6, 0LL), (v6 = (System_String_o *)this->fields.itemNumTitleLabel) == 0LL)
    || (UILabel__SetCondensedScale((UILabel_o *)v6, this->fields.titleLabelMaxWidth, 0LL),
        (v6 = (System_String_o *)this->fields.productNumTitleLabel) == 0LL) )
  {
    sub_1B64324(v6);
  }
  UILabel__SetCondensedScale((UILabel_o *)v6, this->fields.titleLabelMaxWidth, 0LL);
  EventInfoConquestItemCounterComponent__SetLabel(
    this,
    this->fields.itemNum,
    this->fields.productNum,
    this->fields.addProductNum,
    v8);
}


System_Collections_IEnumerator_o *__fastcall EventInfoConquestItemCounterComponent__anim(
        EventInfoConquestItemCounterComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x20
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_49FCF97 & 1) == 0 )
  {
    sub_1B640C8(&EventInfoConquestItemCounterComponent__anim_d__21_TypeInfo, method);
    byte_49FCF97 = 1;
  }
  v4 = sub_1B64314(EventInfoConquestItemCounterComponent__anim_d__21_TypeInfo, method, v2);
  System_Object___ctor((Il2CppObject *)v4, 0LL);
  *(_DWORD *)(v4 + 16) = 0;
  *(_QWORD *)(v4 + 32) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v4 + 32), (int32_t)this, v5, v6);
  return (System_Collections_IEnumerator_o *)v4;
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
  const MethodInfo *v2; // x4
  EventInfoConquestItemCounterComponent__anim_d__21_o *v3; // x19
  __int64 v4; // x1
  int32_t _1__state; // w8
  EventInfoConquestItemCounterComponent_o *_4__this; // x20
  int addProductNum; // w21
  int32_t i_5__3; // w8
  float v9; // s0
  int32_t v10; // w3
  __int64 v11; // x0
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  int32_t v13; // w2
  int32_t v14; // w3
  bool result; // w0
  int32_t itemNum; // w1
  int32_t productNum; // w2
  int v18; // [xsp+Ch] [xbp-24h] BYREF

  v3 = this;
  if ( (byte_49FCF98 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Application_TypeInfo, method);
    this = (EventInfoConquestItemCounterComponent__anim_d__21_o *)sub_1B640C8(&int_TypeInfo, v4);
    byte_49FCF98 = 1;
  }
  _1__state = v3->fields.__1__state;
  _4__this = v3->fields.__4__this;
  if ( _1__state == 1 )
  {
    i_5__3 = v3->fields._i_5__3;
    v3->fields.__1__state = -1;
    this = (EventInfoConquestItemCounterComponent__anim_d__21_o *)(unsigned int)(i_5__3 - 1);
    v3->fields._i_5__3 = (int)this;
    if ( _4__this )
      goto LABEL_10;
LABEL_18:
    sub_1B64324(this);
  }
  if ( _1__state )
    return 0;
  v3->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_18;
  addProductNum = _4__this->fields.addProductNum;
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  v3->fields._add_5__2 = (float)addProductNum / (float)UnityEngine_Application__get_targetFrameRate(0LL);
  LODWORD(this) = UnityEngine_Application__get_targetFrameRate(0LL);
  v3->fields._i_5__3 = (int)this;
LABEL_10:
  if ( (int)this <= 0 )
  {
    itemNum = _4__this->fields.itemNum;
    productNum = _4__this->fields.productNum;
    _4__this->fields.addProductNum = 0;
    EventInfoConquestItemCounterComponent__SetLabel(_4__this, itemNum, productNum, 0, v2);
    return 0;
  }
  v9 = v3->fields._add_5__2 * (float)(int)this;
  if ( v9 == INFINITY )
    v10 = 0x80000000;
  else
    v10 = (int)v9;
  EventInfoConquestItemCounterComponent__SetLabel(
    _4__this,
    _4__this->fields.itemNum,
    _4__this->fields.productNum,
    v10,
    v2);
  v18 = 0;
  v11 = j_il2cpp_value_box_0(int_TypeInfo, &v18);
  v3->fields.__2__current = (Il2CppObject *)v11;
  p__2__current = (ServantStatusBattleListViewItem_o *)&v3->fields.__2__current;
  sub_1B6406C(p__2__current, v11, v13, v14);
  result = 1;
  *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
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
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_1B640DC(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_1B64314(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_1B640DC(&Method_EventInfoConquestItemCounterComponent__anim_d__21_System_Collections_IEnumerator_Reset__);
  sub_1B641F0(v5, v6);
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