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
    UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)this, v3, 0LL);
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

  if ( (byte_4B16A2E & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, *(_QWORD *)&itemId, spriteData);
    byte_4B16A2E = 1;
  }
  this->fields._itemId_k__BackingField = itemId;
  if ( spriteData )
  {
    baseSprite = this->fields.baseSprite;
    spriteName = spriteData->fields.spriteName;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, *(_QWORD *)&itemId);
    AtlasManager__SetEventUI(baseSprite, spriteName, 0LL);
    v10 = this->fields.baseSprite;
    if ( !v10 )
      sub_1BCAA3C(0LL, v9);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  UILabel_o *itemNumLabel; // x23
  System_String_o *v16; // x24
  Il2CppObject *v17; // x0
  System_String_o *v18; // x0
  __int64 v19; // x1
  UILabel_o *productNumLabel; // x22
  System_String_o *v21; // x23
  Il2CppObject *v22; // x0
  int v23; // [xsp+8h] [xbp-48h] BYREF
  int32_t v24; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4B16A2F & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, *(_QWORD *)&itemNum, *(_QWORD *)&productNum);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&StringLiteral_5669/*"EVENT_CONQUEST_ITEM_FORMAT"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_5672/*"EVENT_CONQUEST_PRODUCT_FORMAT"*/, v13, v14);
    byte_4B16A2F = 1;
  }
  itemNumLabel = this->fields.itemNumLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&itemNum);
  v16 = LocalizationManager__Get((System_String_o *)StringLiteral_5669/*"EVENT_CONQUEST_ITEM_FORMAT"*/, 0LL);
  v24 = itemNum;
  v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v24);
  v18 = System_String__Format(v16, v17, 0LL);
  if ( !itemNumLabel )
    goto LABEL_10;
  UILabel__set_text(itemNumLabel, v18, 0LL);
  productNumLabel = this->fields.productNumLabel;
  v21 = LocalizationManager__Get((System_String_o *)StringLiteral_5672/*"EVENT_CONQUEST_PRODUCT_FORMAT"*/, 0LL);
  v23 = productNum - addNum;
  v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v23);
  v18 = System_String__Format(v21, v22, 0LL);
  if ( !productNumLabel
    || (UILabel__set_text(productNumLabel, v18, 0LL), (v18 = (System_String_o *)this->fields.itemNumLabel) == 0LL)
    || (UILabel__SetCondensedScale((UILabel_o *)v18, this->fields.numLabelMaxWidth, 0LL),
        (v18 = (System_String_o *)this->fields.productNumLabel) == 0LL) )
  {
LABEL_10:
    sub_1BCAA3C(v18, v19);
  }
  UILabel__SetCondensedScale((UILabel_o *)v18, this->fields.numLabelMaxWidth, 0LL);
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
    ((void (__fastcall *)(EventInfoConquestItemCounterComponent_o *, _QWORD, _QWORD, _QWORD, void *))klass->vtable._5_SetLabel.method)(
      this,
      (unsigned int)itemNum,
      (unsigned int)productNum,
      (unsigned int)addProductNum,
      klass[1]._1.image);
  }
}


void __fastcall EventInfoConquestItemCounterComponent__Start(
        EventInfoConquestItemCounterComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  UnityEngine_Object_o *itemNumTitleLabel; // x20
  __int64 v11; // x1
  UILabel_o *v12; // x20
  System_String_o *v13; // x0
  __int64 v14; // x1
  UnityEngine_Object_o *productNumTitleLabel; // x20
  __int64 v16; // x1
  UILabel_o *v17; // x20

  if ( (byte_4B16A2D & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    sub_1BCA7E0(&StringLiteral_5673/*"EVENT_CONQUEST_PRODUCT_NUM"*/, v6, v7);
    sub_1BCA7E0(&StringLiteral_5670/*"EVENT_CONQUEST_ITEM_NUM"*/, v8, v9);
    byte_4B16A2D = 1;
  }
  itemNumTitleLabel = (UnityEngine_Object_o *)this->fields.itemNumTitleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(itemNumTitleLabel, 0LL, 0LL) )
  {
    v12 = this->fields.itemNumTitleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v11);
    v13 = LocalizationManager__Get((System_String_o *)StringLiteral_5670/*"EVENT_CONQUEST_ITEM_NUM"*/, 0LL);
    if ( !v12 )
      goto LABEL_20;
    UILabel__set_text(v12, v13, 0LL);
    v13 = (System_String_o *)this->fields.itemNumTitleLabel;
    if ( !v13 )
      goto LABEL_20;
    UILabel__SetCondensedScale((UILabel_o *)v13, this->fields.titleLabelMaxWidth, 0LL);
  }
  productNumTitleLabel = (UnityEngine_Object_o *)this->fields.productNumTitleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
  if ( UnityEngine_Object__op_Inequality(productNumTitleLabel, 0LL, 0LL) )
  {
    v17 = this->fields.productNumTitleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v16);
    v13 = LocalizationManager__Get((System_String_o *)StringLiteral_5673/*"EVENT_CONQUEST_PRODUCT_NUM"*/, 0LL);
    if ( v17 )
    {
      UILabel__set_text(v17, v13, 0LL);
      v13 = (System_String_o *)this->fields.productNumTitleLabel;
      if ( v13 )
      {
        UILabel__SetCondensedScale((UILabel_o *)v13, this->fields.titleLabelMaxWidth, 0LL);
        goto LABEL_19;
      }
    }
LABEL_20:
    sub_1BCAA3C(v13, v14);
  }
LABEL_19:
  ((void (__fastcall *)(EventInfoConquestItemCounterComponent_o *, _QWORD, _QWORD, _QWORD, void *))this->klass->vtable._5_SetLabel.method)(
    this,
    (unsigned int)this->fields.itemNum,
    (unsigned int)this->fields.productNum,
    (unsigned int)this->fields.addProductNum,
    this->klass[1]._1.image);
}


System_Collections_IEnumerator_o *__fastcall EventInfoConquestItemCounterComponent__anim(
        EventInfoConquestItemCounterComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x20
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4B16A30 & 1) == 0 )
  {
    sub_1BCA7E0(&EventInfoConquestItemCounterComponent__anim_d__21_TypeInfo, method, v2);
    byte_4B16A30 = 1;
  }
  v5 = sub_1BCAA2C(EventInfoConquestItemCounterComponent__anim_d__21_TypeInfo, method, v2, v3);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v5 + 32), (int64_t)this, v6, v7, v8, v9, v10, v11);
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
  __int64 v2; // x2
  EventInfoConquestItemCounterComponent__anim_d__21_o *v3; // x19
  int32_t _1__state; // w8
  unsigned int *_4__this; // x20
  int v6; // w21
  int32_t i_5__3; // w8
  float v8; // s0
  __int64 v9; // x3
  PartyOrganizationUtility_o *p__2__current; // x19
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  bool result; // w0
  __int64 v18; // x8

  v3 = this;
  if ( (byte_4B16A31 & 1) == 0 )
  {
    this = (EventInfoConquestItemCounterComponent__anim_d__21_o *)sub_1BCA7E0(
                                                                    &UnityEngine_Application_TypeInfo,
                                                                    method,
                                                                    v2);
    byte_4B16A31 = 1;
  }
  _1__state = v3->fields.__1__state;
  _4__this = (unsigned int *)v3->fields.__4__this;
  if ( _1__state == 1 )
  {
    i_5__3 = v3->fields._i_5__3;
    v3->fields.__1__state = -1;
    this = (EventInfoConquestItemCounterComponent__anim_d__21_o *)(unsigned int)(i_5__3 - 1);
    v3->fields._i_5__3 = (int)this;
    if ( _4__this )
      goto LABEL_10;
LABEL_17:
    sub_1BCAA3C(this, method);
  }
  if ( _1__state )
    return 0;
  v3->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_17;
  v6 = _4__this[22];
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo, method);
  v3->fields._add_5__2 = (float)v6 / (float)UnityEngine_Application__get_targetFrameRate(0LL);
  LODWORD(this) = UnityEngine_Application__get_targetFrameRate(0LL);
  v3->fields._i_5__3 = (int)this;
LABEL_10:
  if ( (int)this <= 0 )
  {
    v18 = *(_QWORD *)_4__this;
    _4__this[22] = 0;
    (*(void (__fastcall **)(unsigned int *, _QWORD, _QWORD, _QWORD, _QWORD))(v18 + 392))(
      _4__this,
      _4__this[21],
      _4__this[23],
      0LL,
      *(_QWORD *)(v18 + 400));
    return 0;
  }
  v8 = v3->fields._add_5__2 * (float)(int)this;
  if ( v8 == INFINITY )
    v9 = 0x80000000LL;
  else
    v9 = (unsigned int)(int)v8;
  (*(void (__fastcall **)(unsigned int *, _QWORD, _QWORD, __int64, _QWORD))(*(_QWORD *)_4__this + 392LL))(
    _4__this,
    _4__this[21],
    _4__this[23],
    v9,
    *(_QWORD *)(*(_QWORD *)_4__this + 400LL));
  v3->fields.__2__current = 0LL;
  p__2__current = (PartyOrganizationUtility_o *)&v3->fields.__2__current;
  sub_1BCA784(p__2__current, 0LL, v11, v12, v13, v14, v15, v16);
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
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(&Method_EventInfoConquestItemCounterComponent__anim_d__21_System_Collections_IEnumerator_Reset__, v7);
  sub_1BCA908(v6, v8);
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