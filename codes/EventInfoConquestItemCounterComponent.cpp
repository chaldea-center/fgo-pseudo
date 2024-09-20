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
    UnityEngine_MonoBehaviour__StartCoroutine_69444652((UnityEngine_MonoBehaviour_o *)this, v3, 0LL);
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

  if ( (byte_4A5BB01 & 1) == 0 )
  {
    sub_1B885B0(&AtlasManager_TypeInfo);
    byte_4A5BB01 = 1;
  }
  this->fields._itemId_k__BackingField = itemId;
  baseSprite = this->fields.baseSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(baseSprite, spriteName, 0LL);
  v9 = this->fields.baseSprite;
  if ( !v9 )
    sub_1B8880C(0LL, v8);
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
  __int64 v12; // x3
  __int64 v13; // x4
  Il2CppObject *v14; // x0
  System_String_o *v15; // x0
  __int64 v16; // x1
  UILabel_o *productNumLabel; // x22
  System_String_o *v18; // x23
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  Il2CppObject *v22; // x0
  int v23; // [xsp+8h] [xbp-48h] BYREF
  int32_t v24; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4A5BB02 & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_5590/*"EVENT_CONQUEST_ITEM_FORMAT"*/);
    sub_1B885B0(&StringLiteral_5593/*"EVENT_CONQUEST_PRODUCT_FORMAT"*/);
    byte_4A5BB02 = 1;
  }
  itemNumLabel = this->fields.itemNumLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_5590/*"EVENT_CONQUEST_ITEM_FORMAT"*/, 0LL);
  v24 = itemNum;
  v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v24, v11, v12, v13);
  v15 = System_String__Format(v10, v14, 0LL);
  if ( !itemNumLabel )
    goto LABEL_10;
  UILabel__set_text(itemNumLabel, v15, 0LL);
  productNumLabel = this->fields.productNumLabel;
  v18 = LocalizationManager__Get((System_String_o *)StringLiteral_5593/*"EVENT_CONQUEST_PRODUCT_FORMAT"*/, 0LL);
  v23 = productNum - addNum;
  v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v23, v19, v20, v21);
  v15 = System_String__Format(v18, v22, 0LL);
  if ( !productNumLabel
    || (UILabel__set_text(productNumLabel, v15, 0LL), (v15 = (System_String_o *)this->fields.itemNumLabel) == 0LL)
    || (UILabel__SetCondensedScale((UILabel_o *)v15, this->fields.numLabelMaxWidth, 0LL),
        (v15 = (System_String_o *)this->fields.productNumLabel) == 0LL) )
  {
LABEL_10:
    sub_1B8880C(v15, v16);
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
  UILabel_o *itemNumTitleLabel; // x20
  System_String_o *v4; // x0
  __int64 v5; // x1
  UILabel_o *productNumTitleLabel; // x20
  const MethodInfo *v7; // x4

  if ( (byte_4A5BB00 & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_5594/*"EVENT_CONQUEST_PRODUCT_NUM"*/);
    sub_1B885B0(&StringLiteral_5591/*"EVENT_CONQUEST_ITEM_NUM"*/);
    byte_4A5BB00 = 1;
  }
  itemNumTitleLabel = this->fields.itemNumTitleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_5591/*"EVENT_CONQUEST_ITEM_NUM"*/, 0LL);
  if ( !itemNumTitleLabel
    || (UILabel__set_text(itemNumTitleLabel, v4, 0LL),
        productNumTitleLabel = this->fields.productNumTitleLabel,
        v4 = LocalizationManager__Get((System_String_o *)StringLiteral_5594/*"EVENT_CONQUEST_PRODUCT_NUM"*/, 0LL),
        !productNumTitleLabel)
    || (UILabel__set_text(productNumTitleLabel, v4, 0LL), (v4 = (System_String_o *)this->fields.itemNumTitleLabel) == 0LL)
    || (UILabel__SetCondensedScale((UILabel_o *)v4, this->fields.titleLabelMaxWidth, 0LL),
        (v4 = (System_String_o *)this->fields.productNumTitleLabel) == 0LL) )
  {
    sub_1B8880C(v4, v5);
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
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4A5BB03 & 1) == 0 )
  {
    sub_1B885B0(&EventInfoConquestItemCounterComponent__anim_d__21_TypeInfo);
    byte_4A5BB03 = 1;
  }
  v3 = sub_1B887FC(EventInfoConquestItemCounterComponent__anim_d__21_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v3 + 32), (int32_t)this, v4, v5);
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
  const MethodInfo *v2; // x4
  EventInfoConquestItemCounterComponent__anim_d__21_o *v3; // x19
  int32_t _1__state; // w8
  EventInfoConquestItemCounterComponent_o *_4__this; // x20
  int addProductNum; // w21
  int32_t i_5__3; // w8
  float v8; // s0
  int32_t v9; // w3
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  int32_t v11; // w2
  int32_t v12; // w3
  bool result; // w0
  int32_t itemNum; // w1
  int32_t productNum; // w2

  v3 = this;
  if ( (byte_4A5BB04 & 1) == 0 )
  {
    this = (EventInfoConquestItemCounterComponent__anim_d__21_o *)sub_1B885B0(&UnityEngine_Application_TypeInfo);
    byte_4A5BB04 = 1;
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
LABEL_17:
    sub_1B8880C(this, method);
  }
  if ( _1__state )
    return 0;
  v3->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_17;
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
  v8 = v3->fields._add_5__2 * (float)(int)this;
  if ( v8 == INFINITY )
    v9 = 0x80000000;
  else
    v9 = (int)v8;
  EventInfoConquestItemCounterComponent__SetLabel(
    _4__this,
    _4__this->fields.itemNum,
    _4__this->fields.productNum,
    v9,
    v2);
  v3->fields.__2__current = 0LL;
  p__2__current = (ServantStatusBattleListViewItem_o *)&v3->fields.__2__current;
  sub_1B88554(p__2__current, 0, v11, v12);
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
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B885C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B887FC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B885C4(&Method_EventInfoConquestItemCounterComponent__anim_d__21_System_Collections_IEnumerator_Reset__);
  sub_1B886D8(v3, v4);
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