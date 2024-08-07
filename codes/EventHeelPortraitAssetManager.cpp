void __fastcall EventHeelPortraitAssetManager___ctor(EventHeelPortraitAssetManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  struct System_String_array *v8; // x20
  int32_t v9; // w1
  int32_t v10; // w2
  int32_t v11; // w3

  if ( (byte_4A02A06 & 1) == 0 )
  {
    sub_1B64A00(&string___TypeInfo, method);
    sub_1B64A00(&StringLiteral_6202/*"EventUI/Prefabs/"*/, v3);
    byte_4A02A06 = 1;
  }
  v4 = sub_1B64AA8(string___TypeInfo, 1LL);
  if ( !v4 )
    sub_1B64C5C(0LL, v5);
  v8 = (struct System_String_array *)v4;
  if ( !*(_DWORD *)(v4 + 24) )
    sub_1B64C64(v4, v5);
  v9 = StringLiteral_6202/*"EventUI/Prefabs/"*/;
  *(_QWORD *)(v4 + 32) = StringLiteral_6202/*"EventUI/Prefabs/"*/;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v4 + 32), v9, v6, v7);
  this->fields.loadAssetNames = v8;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.loadAssetNames, (int32_t)v8, v10, v11);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventHeelPortraitAssetManager__GetAssets(
        EventHeelPortraitAssetManager_o *this,
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
  int32_t v14; // w3
  int32_t v15; // w2
  int32_t v16; // w3
  struct System_String_array *loadAssetNames; // x8
  System_String_o *v18; // x20
  System_String_o *v19; // x0
  System_String_o *v20; // x20
  AssetLoader_LoadEndDataHandler_o *v21; // x21

  if ( (byte_4A02A04 & 1) == 0 )
  {
    sub_1B64A00(&AssetManager_TypeInfo, *(_QWORD *)&eventId);
    sub_1B64A00(&AssetLoader_LoadEndDataHandler_TypeInfo, v7);
    sub_1B64A00(&Method_EventHeelPortraitAssetManager___c__DisplayClass5_0__GetAssets_b__0__, v8);
    sub_1B64A00(&EventHeelPortraitAssetManager___c__DisplayClass5_0_TypeInfo, v9);
    byte_4A02A04 = 1;
  }
  v10 = sub_1B64C4C(EventHeelPortraitAssetManager___c__DisplayClass5_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10
    || (*(_QWORD *)(v10 + 16) = this,
        sub_1B649A4((ServantStatusBattleListViewItem_o *)(v10 + 16), (int32_t)this, v13, v14),
        *(_DWORD *)(v10 + 24) = eventId,
        *(_QWORD *)(v10 + 32) = finishCallback,
        sub_1B649A4((ServantStatusBattleListViewItem_o *)(v10 + 32), (int32_t)finishCallback, v15, v16),
        (loadAssetNames = this->fields.loadAssetNames) == 0LL) )
  {
    sub_1B64C5C(v11, v12);
  }
  if ( !loadAssetNames->max_length )
    sub_1B64C64(v11, v12);
  v18 = loadAssetNames->m_Items[0];
  v19 = System_Int32__ToString((int)v10 + 24, 0LL);
  v20 = System_String__Concat_61385136(v18, v19, 0LL);
  v21 = (AssetLoader_LoadEndDataHandler_o *)sub_1B64C4C(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v21,
    (Il2CppObject *)v10,
    Method_EventHeelPortraitAssetManager___c__DisplayClass5_0__GetAssets_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v20, v21, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventHeelPortraitAssetManager__Release(
        EventHeelPortraitAssetManager_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_4A02A05 & 1) == 0 )
  {
    sub_1B64A00(&AtlasManager_TypeInfo, *(_QWORD *)&eventId);
    byte_4A02A05 = 1;
  }
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__ReleaseEventUI_37549300(eventId, 0LL);
  this->fields._heelPortraitDetailDialog_k__BackingField = 0LL;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields, 0, v5, v6);
}


UnityEngine_GameObject_o *__fastcall EventHeelPortraitAssetManager__get_heelPortraitDetailDialog(
        EventHeelPortraitAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._heelPortraitDetailDialog_k__BackingField;
}


void __fastcall EventHeelPortraitAssetManager__set_heelPortraitDetailDialog(
        EventHeelPortraitAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._heelPortraitDetailDialog_k__BackingField = value;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)value, (int32_t)method, v3);
}


void __fastcall EventHeelPortraitAssetManager___c__DisplayClass5_0___ctor(
        EventHeelPortraitAssetManager___c__DisplayClass5_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventHeelPortraitAssetManager___c__DisplayClass5_0___GetAssets_b__0(
        EventHeelPortraitAssetManager___c__DisplayClass5_0_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  EventHeelPortraitAssetManager___c__DisplayClass5_0_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct EventHeelPortraitAssetManager_o *_4__this; // x21
  int32_t v10; // w2
  int32_t v11; // w3
  System_Action_o *_9__1; // x21
  int32_t eventId; // w20
  int32_t v14; // w2
  int32_t v15; // w3

  v4 = this;
  if ( (byte_4A02A07 & 1) == 0 )
  {
    sub_1B64A00(&System_Action_TypeInfo, assetData);
    sub_1B64A00(&Method_AssetData_GetObject_GameObject____75715992, v5);
    sub_1B64A00(&AtlasManager_TypeInfo, v6);
    sub_1B64A00(&Method_EventHeelPortraitAssetManager___c__DisplayClass5_0__GetAssets_b__1__, v7);
    this = (EventHeelPortraitAssetManager___c__DisplayClass5_0_o *)sub_1B64A00(&StringLiteral_7180/*"HeelPortraitDetailDialog"*/, v8);
    byte_4A02A07 = 1;
  }
  if ( !assetData
    || (_4__this = v4->fields.__4__this,
        this = (EventHeelPortraitAssetManager___c__DisplayClass5_0_o *)AssetData__GetObject_object__48358160(
                                                                         assetData,
                                                                         (System_String_o *)StringLiteral_7180/*"HeelPortraitDetailDialog"*/,
                                                                         (const MethodInfo_2E1E310 *)Method_AssetData_GetObject_GameObject____75715992),
        !_4__this) )
  {
    sub_1B64C5C(this, assetData);
  }
  _4__this->fields._heelPortraitDetailDialog_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&_4__this->fields, (int32_t)this, v10, v11);
  _9__1 = v4->fields.__9__1;
  eventId = v4->fields.eventId;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1B64C4C(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v4,
      Method_EventHeelPortraitAssetManager___c__DisplayClass5_0__GetAssets_b__1__,
      0LL);
    v4->fields.__9__1 = _9__1;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)&v4->fields.__9__1, (int32_t)_9__1, v14, v15);
  }
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadEventUI_37549128(eventId, _9__1, 1, 0LL);
}


void __fastcall EventHeelPortraitAssetManager___c__DisplayClass5_0___GetAssets_b__1(
        EventHeelPortraitAssetManager___c__DisplayClass5_0_o *this,
        const MethodInfo *method)
{
  System_Action_o *finishCallback; // x0

  finishCallback = this->fields.finishCallback;
  if ( finishCallback )
    ActionExtensions__Call(finishCallback, 0LL);
}