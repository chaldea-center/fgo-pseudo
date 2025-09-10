void EventInfoConquestItemCounterComponent___ctor(
        EventInfoConquestItemCounterComponent_o *this,
        const MethodInfo *method)
{
  *(_QWORD *)&this->fields.titleLabelMaxWidth = 0x4800000022LL;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void EventInfoConquestItemCounterComponent__PlayAnim(
        EventInfoConquestItemCounterComponent_o *this,
        const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v3; // x1

  if ( this->fields.addProductNum )
  {
    v3 = EventInfoConquestItemCounterComponent__anim(this, method);
    UnityEngine_MonoBehaviour__StartCoroutine_71149276((UnityEngine_MonoBehaviour_o *)this, v3, 0);
  }
}


void EventInfoConquestItemCounterComponent__SetItem(
        EventInfoConquestItemCounterComponent_o *this,
        int32_t itemId,
        EventInfoConquestItemCounterControl_ItemSpriteData_o *spriteData,
        const MethodInfo *method)
{
  UISprite_o *baseSprite; // x21
  System_String_o *spriteName; // x20
  __int64 v9; // x1
  struct UISprite_o *v10; // x0

  if ( (byte_4C27742 & 1) == 0 )
  {
    sub_1C2D490(&AtlasManager_TypeInfo);
    byte_4C27742 = 1;
  }
  this->fields._itemId_k__BackingField = itemId;
  if ( spriteData )
  {
    baseSprite = this->fields.baseSprite;
    spriteName = spriteData->fields.spriteName;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventUI(baseSprite, spriteName, 0);
    v10 = this->fields.baseSprite;
    if ( !v10 )
      sub_1C2D6EC(0, v9);
    ((void (__fastcall *)(struct UISprite_o *, const MethodInfo *))v10->klass->vtable._33_MakePixelPerfect.methodPtr)(
      v10,
      v10->klass->vtable._33_MakePixelPerfect.method);
  }
}


void EventInfoConquestItemCounterComponent__SetLabel(
        EventInfoConquestItemCounterComponent_o *this,
        int64_t itemNum,
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
  int v23; // [xsp+4h] [xbp-4Ch] BYREF
  int64_t v24; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C27743 & 1) == 0 )
  {
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&long_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&StringLiteral_5559/*"EVENT_CONQUEST_ITEM_FORMAT"*/);
    sub_1C2D490(&StringLiteral_5562/*"EVENT_CONQUEST_PRODUCT_FORMAT"*/);
    byte_4C27743 = 1;
  }
  itemNumLabel = this->fields.itemNumLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_5559/*"EVENT_CONQUEST_ITEM_FORMAT"*/, 0);
  v24 = itemNum;
  v14 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v24, v11, v12, v13);
  v15 = System_String__Format(v10, v14, 0);
  if ( !itemNumLabel )
    goto LABEL_10;
  UILabel__set_text(itemNumLabel, v15, 0);
  productNumLabel = this->fields.productNumLabel;
  v18 = LocalizationManager__Get((System_String_o *)StringLiteral_5562/*"EVENT_CONQUEST_PRODUCT_FORMAT"*/, 0);
  v23 = productNum - addNum;
  v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v23, v19, v20, v21);
  v15 = System_String__Format(v18, v22, 0);
  if ( !productNumLabel
    || (UILabel__set_text(productNumLabel, v15, 0), (v15 = (System_String_o *)this->fields.itemNumLabel) == 0)
    || (UILabel__SetCondensedScale((UILabel_o *)v15, this->fields.numLabelMaxWidth, 0, 0),
        (v15 = (System_String_o *)this->fields.productNumLabel) == 0) )
  {
LABEL_10:
    sub_1C2D6EC(v15, v16);
  }
  UILabel__SetCondensedScale((UILabel_o *)v15, this->fields.numLabelMaxWidth, 0, 0);
}


void EventInfoConquestItemCounterComponent__SetNum(
        EventInfoConquestItemCounterComponent_o *this,
        int32_t itemId,
        int64_t itemNum,
        int32_t productNum,
        int32_t addProductNum,
        const MethodInfo *method)
{
  EventInfoConquestItemCounterComponent_c *klass; // x8

  if ( this->fields._itemId_k__BackingField == itemId )
  {
    klass = this->klass;
    this->fields.itemNum = itemNum;
    this->fields.addProductNum = addProductNum;
    this->fields.productNum = productNum;
    ((void (__fastcall *)(EventInfoConquestItemCounterComponent_o *, int64_t, _QWORD, _QWORD, const MethodInfo *))klass->vtable._5_SetLabel.methodPtr)(
      this,
      itemNum,
      (unsigned int)productNum,
      (unsigned int)addProductNum,
      klass->vtable._5_SetLabel.method);
  }
}


void EventInfoConquestItemCounterComponent__Start(
        EventInfoConquestItemCounterComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *itemNumTitleLabel; // x20
  UILabel_o *v4; // x20
  System_String_o *v5; // x0
  __int64 v6; // x1
  UnityEngine_Object_o *productNumTitleLabel; // x20
  UILabel_o *v8; // x20

  if ( (byte_4C27741 & 1) == 0 )
  {
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_5563/*"EVENT_CONQUEST_PRODUCT_NUM"*/);
    sub_1C2D490(&StringLiteral_5560/*"EVENT_CONQUEST_ITEM_NUM"*/);
    byte_4C27741 = 1;
  }
  itemNumTitleLabel = (UnityEngine_Object_o *)this->fields.itemNumTitleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemNumTitleLabel, 0, 0) )
  {
    v4 = this->fields.itemNumTitleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v5 = LocalizationManager__Get((System_String_o *)StringLiteral_5560/*"EVENT_CONQUEST_ITEM_NUM"*/, 0);
    if ( !v4 )
      goto LABEL_20;
    UILabel__set_text(v4, v5, 0);
    v5 = (System_String_o *)this->fields.itemNumTitleLabel;
    if ( !v5 )
      goto LABEL_20;
    UILabel__SetCondensedScale((UILabel_o *)v5, this->fields.titleLabelMaxWidth, 0, 0);
  }
  productNumTitleLabel = (UnityEngine_Object_o *)this->fields.productNumTitleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(productNumTitleLabel, 0, 0) )
  {
    v8 = this->fields.productNumTitleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v5 = LocalizationManager__Get((System_String_o *)StringLiteral_5563/*"EVENT_CONQUEST_PRODUCT_NUM"*/, 0);
    if ( v8 )
    {
      UILabel__set_text(v8, v5, 0);
      v5 = (System_String_o *)this->fields.productNumTitleLabel;
      if ( v5 )
      {
        UILabel__SetCondensedScale((UILabel_o *)v5, this->fields.titleLabelMaxWidth, 0, 0);
        goto LABEL_19;
      }
    }
LABEL_20:
    sub_1C2D6EC(v5, v6);
  }
LABEL_19:
  ((void (__fastcall *)(EventInfoConquestItemCounterComponent_o *, int64_t, _QWORD, _QWORD, const MethodInfo *))this->klass->vtable._5_SetLabel.methodPtr)(
    this,
    this->fields.itemNum,
    (unsigned int)this->fields.productNum,
    (unsigned int)this->fields.addProductNum,
    this->klass->vtable._5_SetLabel.method);
}


System_Collections_IEnumerator_o *EventInfoConquestItemCounterComponent__anim(
        EventInfoConquestItemCounterComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C27744 & 1) == 0 )
  {
    sub_1C2D490(&EventInfoConquestItemCounterComponent__anim_d__21_TypeInfo);
    byte_4C27744 = 1;
  }
  v3 = sub_1C2D6DC(EventInfoConquestItemCounterComponent__anim_d__21_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v4, v5);
  return (System_Collections_IEnumerator_o *)v3;
}


bool EventInfoConquestItemCounterComponent__get_IsAnimFinished(
        EventInfoConquestItemCounterComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.addProductNum == 0;
}


int32_t EventInfoConquestItemCounterComponent__get_itemId(
        EventInfoConquestItemCounterComponent_o *this,
        const MethodInfo *method)
{
  return this->fields._itemId_k__BackingField;
}


void EventInfoConquestItemCounterComponent__set_itemId(
        EventInfoConquestItemCounterComponent_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._itemId_k__BackingField = value;
}


void EventInfoConquestItemCounterComponent__anim_d__21___ctor(
        EventInfoConquestItemCounterComponent__anim_d__21_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool EventInfoConquestItemCounterComponent__anim_d__21__MoveNext(
        EventInfoConquestItemCounterComponent__anim_d__21_o *this,
        const MethodInfo *method)
{
  EventInfoConquestItemCounterComponent__anim_d__21_o *v2; // x19
  int32_t _1__state; // w8
  struct EventInfoConquestItemCounterComponent_o *_4__this; // x20
  int addProductNum; // w21
  int32_t i_5__3; // w8
  float v7; // s0
  __int64 v8; // x3
  CGThumbnailListItem_o *p__2__current; // x19
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  bool result; // w0
  EventInfoConquestItemCounterComponent_c *klass; // x8

  v2 = this;
  if ( (byte_4C27745 & 1) == 0 )
  {
    this = (EventInfoConquestItemCounterComponent__anim_d__21_o *)sub_1C2D490(&UnityEngine_Application_TypeInfo);
    byte_4C27745 = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 1 )
  {
    i_5__3 = v2->fields._i_5__3;
    v2->fields.__1__state = -1;
    this = (EventInfoConquestItemCounterComponent__anim_d__21_o *)(unsigned int)(i_5__3 - 1);
    v2->fields._i_5__3 = (int)this;
    if ( _4__this )
      goto LABEL_10;
LABEL_17:
    sub_1C2D6EC(this, method);
  }
  if ( _1__state )
    return 0;
  v2->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_17;
  addProductNum = _4__this->fields.addProductNum;
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  v2->fields._add_5__2 = (float)addProductNum / (float)UnityEngine_Application__get_targetFrameRate(0);
  LODWORD(this) = UnityEngine_Application__get_targetFrameRate(0);
  v2->fields._i_5__3 = (int)this;
LABEL_10:
  if ( (int)this <= 0 )
  {
    klass = _4__this->klass;
    _4__this->fields.addProductNum = 0;
    ((void (__fastcall *)(struct EventInfoConquestItemCounterComponent_o *, int64_t, _QWORD, _QWORD, const MethodInfo *))klass->vtable._5_SetLabel.methodPtr)(
      _4__this,
      _4__this->fields.itemNum,
      (unsigned int)_4__this->fields.productNum,
      0,
      klass->vtable._5_SetLabel.method);
    return 0;
  }
  v7 = v2->fields._add_5__2 * (float)(int)this;
  if ( v7 == INFINITY )
    v8 = 0x80000000LL;
  else
    v8 = (unsigned int)(int)v7;
  ((void (__fastcall *)(struct EventInfoConquestItemCounterComponent_o *, int64_t, _QWORD, __int64, const MethodInfo *))_4__this->klass->vtable._5_SetLabel.methodPtr)(
    _4__this,
    _4__this->fields.itemNum,
    (unsigned int)_4__this->fields.productNum,
    v8,
    _4__this->klass->vtable._5_SetLabel.method);
  v2->fields.__2__current = 0;
  p__2__current = (CGThumbnailListItem_o *)&v2->fields.__2__current;
  sub_1C2D434(p__2__current, 0, v10, v11);
  result = 1;
  LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
  return result;
}


Il2CppObject *EventInfoConquestItemCounterComponent__anim_d__21__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        EventInfoConquestItemCounterComponent__anim_d__21_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn EventInfoConquestItemCounterComponent__anim_d__21__System_Collections_IEnumerator_Reset(
        EventInfoConquestItemCounterComponent__anim_d__21_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C2D4A4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C2D6DC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C2D4A4(&Method_EventInfoConquestItemCounterComponent__anim_d__21_System_Collections_IEnumerator_Reset__);
  sub_1C2D5B8(v3, v4);
}


Il2CppObject *EventInfoConquestItemCounterComponent__anim_d__21__System_Collections_IEnumerator_get_Current(
        EventInfoConquestItemCounterComponent__anim_d__21_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void EventInfoConquestItemCounterComponent__anim_d__21__System_IDisposable_Dispose(
        EventInfoConquestItemCounterComponent__anim_d__21_o *this,
        const MethodInfo *method)
{
  ;
}