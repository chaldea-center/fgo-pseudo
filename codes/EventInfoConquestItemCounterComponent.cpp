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
    UnityEngine_MonoBehaviour__StartCoroutine_70779684((UnityEngine_MonoBehaviour_o *)this, v3, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoConquestItemCounterComponent__SetItem(
        EventInfoConquestItemCounterComponent_o *this,
        int32_t itemId,
        EventInfoConquestItemCounterControl_ItemSpriteData_o *spriteData,
        const MethodInfo *method)
{
  UISprite_o *baseSprite; // x21
  System_String_o *spriteName; // x20
  __int64 v9; // x1
  struct UISprite_o *v10; // x0

  if ( (byte_4BC82DF & 1) == 0 )
  {
    sub_1C1ABD4(&AtlasManager_TypeInfo, *(_QWORD *)&itemId);
    byte_4BC82DF = 1;
  }
  this->fields._itemId_k__BackingField = itemId;
  if ( spriteData )
  {
    baseSprite = this->fields.baseSprite;
    spriteName = spriteData->fields.spriteName;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventUI(baseSprite, spriteName, 0LL);
    v10 = this->fields.baseSprite;
    if ( !v10 )
      sub_1C1AE30(0LL, v9);
    ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v10->klass->vtable._33_MakePixelPerfect.method)(
      v10,
      v10->klass->vtable._34_get_minWidth.methodPtr);
  }
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
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  Il2CppObject *v17; // x0
  System_String_o *v18; // x0
  __int64 v19; // x1
  UILabel_o *productNumLabel; // x22
  System_String_o *v21; // x23
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  Il2CppObject *v25; // x0
  int v26; // [xsp+8h] [xbp-48h] BYREF
  int32_t v27; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4BC82E0 & 1) == 0 )
  {
    sub_1C1ABD4(&int_TypeInfo, *(_QWORD *)&itemNum);
    sub_1C1ABD4(&LocalizationManager_TypeInfo, v9);
    sub_1C1ABD4(&StringLiteral_5698/*"EVENT_CONQUEST_ITEM_FORMAT"*/, v10);
    sub_1C1ABD4(&StringLiteral_5701/*"EVENT_CONQUEST_PRODUCT_FORMAT"*/, v11);
    byte_4BC82E0 = 1;
  }
  itemNumLabel = this->fields.itemNumLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v13 = LocalizationManager__Get((System_String_o *)StringLiteral_5698/*"EVENT_CONQUEST_ITEM_FORMAT"*/, 0LL);
  v27 = itemNum;
  v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v27, v14, v15, v16);
  v18 = System_String__Format(v13, v17, 0LL);
  if ( !itemNumLabel )
    goto LABEL_10;
  UILabel__set_text(itemNumLabel, v18, 0LL);
  productNumLabel = this->fields.productNumLabel;
  v21 = LocalizationManager__Get((System_String_o *)StringLiteral_5701/*"EVENT_CONQUEST_PRODUCT_FORMAT"*/, 0LL);
  v26 = productNum - addNum;
  v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v26, v22, v23, v24);
  v18 = System_String__Format(v21, v25, 0LL);
  if ( !productNumLabel
    || (UILabel__set_text(productNumLabel, v18, 0LL), (v18 = (System_String_o *)this->fields.itemNumLabel) == 0LL)
    || (UILabel__SetCondensedScale((UILabel_o *)v18, this->fields.numLabelMaxWidth, 0, 0LL),
        (v18 = (System_String_o *)this->fields.productNumLabel) == 0LL) )
  {
LABEL_10:
    sub_1C1AE30(v18, v19);
  }
  UILabel__SetCondensedScale((UILabel_o *)v18, this->fields.numLabelMaxWidth, 0, 0LL);
}


void __fastcall EventInfoConquestItemCounterComponent__SetNum(
        EventInfoConquestItemCounterComponent_o *this,
        int32_t itemId,
        int32_t itemNum,
        int32_t productNum,
        int32_t addProductNum,
        const MethodInfo *method)
{
  EventInfoConquestItemCounterComponent_c *klass; // x8

  if ( this->fields._itemId_k__BackingField == itemId )
  {
    klass = this->klass;
    this->fields.addProductNum = addProductNum;
    this->fields.productNum = productNum;
    this->fields.itemNum = itemNum;
    ((void (__fastcall *)(EventInfoConquestItemCounterComponent_o *, _QWORD, _QWORD, _QWORD, Il2CppMethodPointer))klass->vtable._5_SetLabel.method)(
      this,
      (unsigned int)itemNum,
      (unsigned int)productNum,
      (unsigned int)addProductNum,
      klass->vtable._6_PlayAnim.methodPtr);
  }
}


void __fastcall EventInfoConquestItemCounterComponent__Start(
        EventInfoConquestItemCounterComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_Object_o *itemNumTitleLabel; // x20
  UILabel_o *v7; // x20
  System_String_o *v8; // x0
  __int64 v9; // x1
  UnityEngine_Object_o *productNumTitleLabel; // x20
  UILabel_o *v11; // x20

  if ( (byte_4BC82DE & 1) == 0 )
  {
    sub_1C1ABD4(&LocalizationManager_TypeInfo, method);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v3);
    sub_1C1ABD4(&StringLiteral_5702/*"EVENT_CONQUEST_PRODUCT_NUM"*/, v4);
    sub_1C1ABD4(&StringLiteral_5699/*"EVENT_CONQUEST_ITEM_NUM"*/, v5);
    byte_4BC82DE = 1;
  }
  itemNumTitleLabel = (UnityEngine_Object_o *)this->fields.itemNumTitleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemNumTitleLabel, 0LL, 0LL) )
  {
    v7 = this->fields.itemNumTitleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v8 = LocalizationManager__Get((System_String_o *)StringLiteral_5699/*"EVENT_CONQUEST_ITEM_NUM"*/, 0LL);
    if ( !v7 )
      goto LABEL_20;
    UILabel__set_text(v7, v8, 0LL);
    v8 = (System_String_o *)this->fields.itemNumTitleLabel;
    if ( !v8 )
      goto LABEL_20;
    UILabel__SetCondensedScale((UILabel_o *)v8, this->fields.titleLabelMaxWidth, 0, 0LL);
  }
  productNumTitleLabel = (UnityEngine_Object_o *)this->fields.productNumTitleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(productNumTitleLabel, 0LL, 0LL) )
  {
    v11 = this->fields.productNumTitleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v8 = LocalizationManager__Get((System_String_o *)StringLiteral_5702/*"EVENT_CONQUEST_PRODUCT_NUM"*/, 0LL);
    if ( v11 )
    {
      UILabel__set_text(v11, v8, 0LL);
      v8 = (System_String_o *)this->fields.productNumTitleLabel;
      if ( v8 )
      {
        UILabel__SetCondensedScale((UILabel_o *)v8, this->fields.titleLabelMaxWidth, 0, 0LL);
        goto LABEL_19;
      }
    }
LABEL_20:
    sub_1C1AE30(v8, v9);
  }
LABEL_19:
  ((void (__fastcall *)(EventInfoConquestItemCounterComponent_o *, _QWORD, _QWORD, _QWORD, Il2CppMethodPointer))this->klass->vtable._5_SetLabel.method)(
    this,
    (unsigned int)this->fields.itemNum,
    (unsigned int)this->fields.productNum,
    (unsigned int)this->fields.addProductNum,
    this->klass->vtable._6_PlayAnim.methodPtr);
}


System_Collections_IEnumerator_o *__fastcall EventInfoConquestItemCounterComponent__anim(
        EventInfoConquestItemCounterComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7

  if ( (byte_4BC82E1 & 1) == 0 )
  {
    sub_1C1ABD4(&EventInfoConquestItemCounterComponent__anim_d__21_TypeInfo, method);
    byte_4BC82E1 = 1;
  }
  v3 = sub_1C1AE20(EventInfoConquestItemCounterComponent__anim_d__21_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v3 + 32), (int64_t)this, v4, v5, v6, v7, v8, v9);
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
  unsigned int *_4__this; // x20
  int v5; // w21
  int32_t i_5__3; // w8
  float v7; // s0
  __int64 v8; // x3
  PartyOrganizationUtility_o *p__2__current; // x19
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  bool result; // w0
  __int64 v17; // x8

  v2 = this;
  if ( (byte_4BC82E2 & 1) == 0 )
  {
    this = (EventInfoConquestItemCounterComponent__anim_d__21_o *)sub_1C1ABD4(&UnityEngine_Application_TypeInfo, method);
    byte_4BC82E2 = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = (unsigned int *)v2->fields.__4__this;
  if ( _1__state == 1 )
  {
    i_5__3 = v2->fields._i_5__3;
    v2->fields.__1__state = -1;
    this = (EventInfoConquestItemCounterComponent__anim_d__21_o *)(unsigned int)(i_5__3 - 1);
    v2->fields._i_5__3 = (int)this;
    if ( _4__this )
      goto LABEL_10;
LABEL_17:
    sub_1C1AE30(this, method);
  }
  if ( _1__state )
    return 0;
  v2->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_17;
  v5 = _4__this[22];
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  v2->fields._add_5__2 = (float)v5 / (float)UnityEngine_Application__get_targetFrameRate(0LL);
  LODWORD(this) = UnityEngine_Application__get_targetFrameRate(0LL);
  v2->fields._i_5__3 = (int)this;
LABEL_10:
  if ( (int)this <= 0 )
  {
    v17 = *(_QWORD *)_4__this;
    _4__this[22] = 0;
    (*(void (__fastcall **)(unsigned int *, _QWORD, _QWORD, _QWORD, _QWORD))(v17 + 392))(
      _4__this,
      _4__this[21],
      _4__this[23],
      0LL,
      *(_QWORD *)(v17 + 400));
    return 0;
  }
  v7 = v2->fields._add_5__2 * (float)(int)this;
  if ( v7 == INFINITY )
    v8 = 0x80000000LL;
  else
    v8 = (unsigned int)(int)v7;
  (*(void (__fastcall **)(unsigned int *, _QWORD, _QWORD, __int64, _QWORD))(*(_QWORD *)_4__this + 392LL))(
    _4__this,
    _4__this[21],
    _4__this[23],
    v8,
    *(_QWORD *)(*(_QWORD *)_4__this + 400LL));
  v2->fields.__2__current = 0LL;
  p__2__current = (PartyOrganizationUtility_o *)&v2->fields.__2__current;
  sub_1C1AB78(p__2__current, 0LL, v10, v11, v12, v13, v14, v15);
  result = 1;
  *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
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

  v2 = sub_1C1ABE8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C1AE20(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C1ABE8(&Method_EventInfoConquestItemCounterComponent__anim_d__21_System_Collections_IEnumerator_Reset__);
  sub_1C1ACFC(v3, v4);
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