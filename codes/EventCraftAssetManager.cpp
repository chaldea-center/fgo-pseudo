void __fastcall EventCraftAssetManager___ctor(EventCraftAssetManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  const MethodInfo *v7; // x3
  struct System_String_array *v8; // x20
  int32_t v9; // w1
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4B20756 & 1) == 0 )
  {
    sub_1BCAFF8(&string___TypeInfo, method);
    sub_1BCAFF8(&StringLiteral_6217/*"EventUI/Prefabs/"*/, v3);
    byte_4B20756 = 1;
  }
  v4 = sub_1BCB0A0(string___TypeInfo, 1LL);
  if ( !v4 )
    sub_1BCB254(0LL, v5);
  v8 = (struct System_String_array *)v4;
  if ( !*(_DWORD *)(v4 + 24) )
    sub_1BCB25C(v4, v5, v6);
  v9 = StringLiteral_6217/*"EventUI/Prefabs/"*/;
  *(_QWORD *)(v4 + 32) = StringLiteral_6217/*"EventUI/Prefabs/"*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v4 + 32), v9, v6, v7);
  this->fields.loadAssetNames = v8;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.loadAssetNames, (int32_t)v8, v10, v11);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventCraftAssetManager__LoadAssets(
        EventCraftAssetManager_o *this,
        int32_t eventId,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x19
  __int64 v11; // x0
  __int64 v12; // x1
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  __int64 v17; // x2
  struct System_String_array *loadAssetNames; // x8
  System_String_o *v19; // x20
  System_String_o *v20; // x0
  System_String_o *v21; // x20
  AssetLoader_LoadEndDataHandler_o *v22; // x21

  if ( (byte_4B20754 & 1) == 0 )
  {
    sub_1BCAFF8(&AssetManager_TypeInfo, *(_QWORD *)&eventId);
    sub_1BCAFF8(&AssetLoader_LoadEndDataHandler_TypeInfo, v7);
    sub_1BCAFF8(&Method_EventCraftAssetManager___c__DisplayClass25_0__LoadAssets_b__0__, v8);
    sub_1BCAFF8(&EventCraftAssetManager___c__DisplayClass25_0_TypeInfo, v9);
    byte_4B20754 = 1;
  }
  v10 = sub_1BCB244(EventCraftAssetManager___c__DisplayClass25_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10
    || (*(_QWORD *)(v10 + 16) = this,
        sub_1BCAF9C((CGThumbnailListItem_o *)(v10 + 16), (int32_t)this, v13, v14),
        *(_DWORD *)(v10 + 24) = eventId,
        *(_QWORD *)(v10 + 32) = finishCallback,
        sub_1BCAF9C((CGThumbnailListItem_o *)(v10 + 32), (int32_t)finishCallback, v15, v16),
        (loadAssetNames = this->fields.loadAssetNames) == 0LL) )
  {
    sub_1BCB254(v11, v12);
  }
  if ( !loadAssetNames->max_length )
    sub_1BCB25C(v11, v12, v17);
  v19 = loadAssetNames->m_Items[0];
  v20 = System_Int32__ToString((int)v10 + 24, 0LL);
  v21 = System_String__Concat_62450424(v19, v20, 0LL);
  v22 = (AssetLoader_LoadEndDataHandler_o *)sub_1BCB244(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v22,
    (Il2CppObject *)v10,
    Method_EventCraftAssetManager___c__DisplayClass25_0__LoadAssets_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v21, v22, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventCraftAssetManager__Release(
        EventCraftAssetManager_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w2
  const MethodInfo *v16; // x3

  if ( (byte_4B20755 & 1) == 0 )
  {
    sub_1BCAFF8(&AtlasManager_TypeInfo, *(_QWORD *)&eventId);
    byte_4B20755 = 1;
  }
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__ReleaseEventUI_39794596(eventId, 0LL);
  this->fields._CraftItemNumConfirmDialog_k__BackingField = 0LL;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields, 0, v5, v6);
  this->fields._CraftItemWithdrawConfirmDialog_k__BackingField = 0LL;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields._CraftItemWithdrawConfirmDialog_k__BackingField, 0, v7, v8);
  this->fields._CraftRewardDialog_k__BackingField = 0LL;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields._CraftRewardDialog_k__BackingField, 0, v9, v10);
  this->fields._CraftButtonBlinkEffect_k__BackingField = 0LL;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields._CraftButtonBlinkEffect_k__BackingField, 0, v11, v12);
  this->fields._CraftUseSupportToolDialog_k__BackingField = 0LL;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields._CraftUseSupportToolDialog_k__BackingField, 0, v13, v14);
  this->fields._CraftFirstTimeSupportToolDialog_k__BackingField = 0LL;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields._CraftFirstTimeSupportToolDialog_k__BackingField, 0, v15, v16);
}


UnityEngine_GameObject_o *__fastcall EventCraftAssetManager__get_CraftButtonBlinkEffect(
        EventCraftAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._CraftButtonBlinkEffect_k__BackingField;
}


UnityEngine_GameObject_o *__fastcall EventCraftAssetManager__get_CraftFirstTimeSupportToolDialog(
        EventCraftAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._CraftFirstTimeSupportToolDialog_k__BackingField;
}


UnityEngine_GameObject_o *__fastcall EventCraftAssetManager__get_CraftItemNumConfirmDialog(
        EventCraftAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._CraftItemNumConfirmDialog_k__BackingField;
}


UnityEngine_GameObject_o *__fastcall EventCraftAssetManager__get_CraftItemWithdrawConfirmDialog(
        EventCraftAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._CraftItemWithdrawConfirmDialog_k__BackingField;
}


UnityEngine_GameObject_o *__fastcall EventCraftAssetManager__get_CraftRewardDialog(
        EventCraftAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._CraftRewardDialog_k__BackingField;
}


UnityEngine_GameObject_o *__fastcall EventCraftAssetManager__get_CraftUseSupportToolDialog(
        EventCraftAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._CraftUseSupportToolDialog_k__BackingField;
}


void __fastcall EventCraftAssetManager__set_CraftButtonBlinkEffect(
        EventCraftAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._CraftButtonBlinkEffect_k__BackingField = value;
  sub_1BCAF9C(
    (CGThumbnailListItem_o *)&this->fields._CraftButtonBlinkEffect_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall EventCraftAssetManager__set_CraftFirstTimeSupportToolDialog(
        EventCraftAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._CraftFirstTimeSupportToolDialog_k__BackingField = value;
  sub_1BCAF9C(
    (CGThumbnailListItem_o *)&this->fields._CraftFirstTimeSupportToolDialog_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall EventCraftAssetManager__set_CraftItemNumConfirmDialog(
        EventCraftAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._CraftItemNumConfirmDialog_k__BackingField = value;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields, (int32_t)value, (int32_t)method, v3);
}


void __fastcall EventCraftAssetManager__set_CraftItemWithdrawConfirmDialog(
        EventCraftAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._CraftItemWithdrawConfirmDialog_k__BackingField = value;
  sub_1BCAF9C(
    (CGThumbnailListItem_o *)&this->fields._CraftItemWithdrawConfirmDialog_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall EventCraftAssetManager__set_CraftRewardDialog(
        EventCraftAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._CraftRewardDialog_k__BackingField = value;
  sub_1BCAF9C(
    (CGThumbnailListItem_o *)&this->fields._CraftRewardDialog_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall EventCraftAssetManager__set_CraftUseSupportToolDialog(
        EventCraftAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._CraftUseSupportToolDialog_k__BackingField = value;
  sub_1BCAF9C(
    (CGThumbnailListItem_o *)&this->fields._CraftUseSupportToolDialog_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall EventCraftAssetManager___c__DisplayClass25_0___ctor(
        EventCraftAssetManager___c__DisplayClass25_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventCraftAssetManager___c__DisplayClass25_0___LoadAssets_b__0(
        EventCraftAssetManager___c__DisplayClass25_0_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  EventCraftAssetManager___c__DisplayClass25_0_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  struct EventCraftAssetManager_o *_4__this; // x21
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  struct EventCraftAssetManager_o *v17; // x21
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  struct EventCraftAssetManager_o *v20; // x21
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  struct EventCraftAssetManager_o *v23; // x21
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  struct EventCraftAssetManager_o *v26; // x21
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  struct EventCraftAssetManager_o *v29; // x21
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  System_Action_o *_9__1; // x21
  int32_t eventId; // w20
  int32_t v34; // w2
  const MethodInfo *v35; // x3

  v4 = this;
  if ( (byte_4B20757 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, assetData);
    sub_1BCAFF8(&Method_AssetData_GetObject_GameObject____76915336, v5);
    sub_1BCAFF8(&AtlasManager_TypeInfo, v6);
    sub_1BCAFF8(&Method_EventCraftAssetManager___c__DisplayClass25_0__LoadAssets_b__1__, v7);
    sub_1BCAFF8(&StringLiteral_17050/*"bit_craft_blink"*/, v8);
    sub_1BCAFF8(&StringLiteral_6153/*"EventCraftItemNumConfirmDialog"*/, v9);
    sub_1BCAFF8(&StringLiteral_6156/*"EventCraftUseSupportToolDialog"*/, v10);
    sub_1BCAFF8(&StringLiteral_6155/*"EventCraftRewardDialog"*/, v11);
    sub_1BCAFF8(&StringLiteral_6152/*"EventCraftFirstTimeSupportToolDialog"*/, v12);
    this = (EventCraftAssetManager___c__DisplayClass25_0_o *)sub_1BCAFF8(&StringLiteral_6154/*"EventCraftItemWithdrawConfirmDialog"*/, v13);
    byte_4B20757 = 1;
  }
  if ( !assetData )
    goto LABEL_15;
  _4__this = v4->fields.__4__this;
  this = (EventCraftAssetManager___c__DisplayClass25_0_o *)AssetData__GetObject_object__50315216(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_6153/*"EventCraftItemNumConfirmDialog"*/,
                                                             (const MethodInfo_2FFBFD0 *)Method_AssetData_GetObject_GameObject____76915336);
  if ( !_4__this )
    goto LABEL_15;
  _4__this->fields._CraftItemNumConfirmDialog_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1BCAF9C((CGThumbnailListItem_o *)&_4__this->fields, (int32_t)this, v15, v16);
  v17 = v4->fields.__4__this;
  this = (EventCraftAssetManager___c__DisplayClass25_0_o *)AssetData__GetObject_object__50315216(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_6154/*"EventCraftItemWithdrawConfirmDialog"*/,
                                                             (const MethodInfo_2FFBFD0 *)Method_AssetData_GetObject_GameObject____76915336);
  if ( !v17 )
    goto LABEL_15;
  v17->fields._CraftItemWithdrawConfirmDialog_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1BCAF9C(
    (CGThumbnailListItem_o *)&v17->fields._CraftItemWithdrawConfirmDialog_k__BackingField,
    (int32_t)this,
    v18,
    v19);
  v20 = v4->fields.__4__this;
  this = (EventCraftAssetManager___c__DisplayClass25_0_o *)AssetData__GetObject_object__50315216(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_6155/*"EventCraftRewardDialog"*/,
                                                             (const MethodInfo_2FFBFD0 *)Method_AssetData_GetObject_GameObject____76915336);
  if ( !v20 )
    goto LABEL_15;
  v20->fields._CraftRewardDialog_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v20->fields._CraftRewardDialog_k__BackingField, (int32_t)this, v21, v22);
  v23 = v4->fields.__4__this;
  this = (EventCraftAssetManager___c__DisplayClass25_0_o *)AssetData__GetObject_object__50315216(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_6156/*"EventCraftUseSupportToolDialog"*/,
                                                             (const MethodInfo_2FFBFD0 *)Method_AssetData_GetObject_GameObject____76915336);
  if ( !v23 )
    goto LABEL_15;
  v23->fields._CraftUseSupportToolDialog_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v23->fields._CraftUseSupportToolDialog_k__BackingField, (int32_t)this, v24, v25);
  v26 = v4->fields.__4__this;
  this = (EventCraftAssetManager___c__DisplayClass25_0_o *)AssetData__GetObject_object__50315216(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_6152/*"EventCraftFirstTimeSupportToolDialog"*/,
                                                             (const MethodInfo_2FFBFD0 *)Method_AssetData_GetObject_GameObject____76915336);
  if ( !v26
    || (v26->fields._CraftFirstTimeSupportToolDialog_k__BackingField = (struct UnityEngine_GameObject_o *)this,
        sub_1BCAF9C(
          (CGThumbnailListItem_o *)&v26->fields._CraftFirstTimeSupportToolDialog_k__BackingField,
          (int32_t)this,
          v27,
          v28),
        v29 = v4->fields.__4__this,
        this = (EventCraftAssetManager___c__DisplayClass25_0_o *)AssetData__GetObject_object__50315216(
                                                                   assetData,
                                                                   (System_String_o *)StringLiteral_17050/*"bit_craft_blink"*/,
                                                                   (const MethodInfo_2FFBFD0 *)Method_AssetData_GetObject_GameObject____76915336),
        !v29) )
  {
LABEL_15:
    sub_1BCB254(this, assetData);
  }
  v29->fields._CraftButtonBlinkEffect_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v29->fields._CraftButtonBlinkEffect_k__BackingField, (int32_t)this, v30, v31);
  _9__1 = v4->fields.__9__1;
  eventId = v4->fields.eventId;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v4,
      Method_EventCraftAssetManager___c__DisplayClass25_0__LoadAssets_b__1__,
      0LL);
    v4->fields.__9__1 = _9__1;
    sub_1BCAF9C((CGThumbnailListItem_o *)&v4->fields.__9__1, (int32_t)_9__1, v34, v35);
  }
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadEventUI_39794424(eventId, _9__1, 1, 0LL);
}


void __fastcall EventCraftAssetManager___c__DisplayClass25_0___LoadAssets_b__1(
        EventCraftAssetManager___c__DisplayClass25_0_o *this,
        const MethodInfo *method)
{
  System_Action_o *finishCallback; // x0

  finishCallback = this->fields.finishCallback;
  if ( finishCallback )
    ActionExtensions__Call(finishCallback, 0LL);
}