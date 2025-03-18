void __fastcall EventHeelPortraitAssetManager___ctor(EventHeelPortraitAssetManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x0
  __int64 v5; // x1
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  struct System_String_array *v12; // x20
  int64_t v13; // x1
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7

  if ( (byte_4C261E9 & 1) == 0 )
  {
    sub_1C3B764(&string___TypeInfo, method);
    sub_1C3B764(&StringLiteral_6390/*"FORTUNE_BONUS_RESULT_BUTTON"*/, v3);
    byte_4C261E9 = 1;
  }
  v4 = sub_1C3B80C(string___TypeInfo, 1LL);
  if ( !v4 )
    sub_1C3B9C0(0LL, v5);
  v12 = (struct System_String_array *)v4;
  if ( !*(_DWORD *)(v4 + 24) )
    sub_1C3B9C8(v4, v5);
  v13 = StringLiteral_6390/*"FORTUNE_BONUS_RESULT_BUTTON"*/;
  *(_QWORD *)(v4 + 32) = StringLiteral_6390/*"FORTUNE_BONUS_RESULT_BUTTON"*/;
  sub_1C3B708((PartyOrganizationUtility_o *)(v4 + 32), v13, v6, v7, v8, v9, v10, v11);
  this->fields.loadAssetNames = v12;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.loadAssetNames, (int64_t)v12, v14, v15, v16, v17, v18, v19);
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
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  struct System_String_array *loadAssetNames; // x8
  System_String_o *v26; // x20
  System_String_o *v27; // x0
  System_String_o *v28; // x20
  AssetLoader_LoadEndDataHandler_o *v29; // x21

  if ( (byte_4C261E7 & 1) == 0 )
  {
    sub_1C3B764(&AssetManager_TypeInfo, *(_QWORD *)&eventId);
    sub_1C3B764(&AssetLoader_LoadEndDataHandler_TypeInfo, v7);
    sub_1C3B764(&Method_EventHeelPortraitAssetManager___c__DisplayClass5_0__GetAssets_b__0__, v8);
    sub_1C3B764(&EventHeelPortraitAssetManager___c__DisplayClass5_0_TypeInfo, v9);
    byte_4C261E7 = 1;
  }
  v10 = sub_1C3B9B0(EventHeelPortraitAssetManager___c__DisplayClass5_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10
    || (*(_QWORD *)(v10 + 16) = this,
        sub_1C3B708((PartyOrganizationUtility_o *)(v10 + 16), (int64_t)this, v13, v14, v15, v16, v17, v18),
        *(_DWORD *)(v10 + 24) = eventId,
        *(_QWORD *)(v10 + 32) = finishCallback,
        sub_1C3B708((PartyOrganizationUtility_o *)(v10 + 32), (int64_t)finishCallback, v19, v20, v21, v22, v23, v24),
        (loadAssetNames = this->fields.loadAssetNames) == 0LL) )
  {
    sub_1C3B9C0(v11, v12);
  }
  if ( !loadAssetNames->max_length )
    sub_1C3B9C8(v11, v12);
  v26 = loadAssetNames->m_Items[0];
  v27 = System_Int32__ToString((int)v10 + 24, 0LL);
  v28 = System_String__Concat_63368612(v26, v27, 0LL);
  v29 = (AssetLoader_LoadEndDataHandler_o *)sub_1C3B9B0(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v29,
    (Il2CppObject *)v10,
    Method_EventHeelPortraitAssetManager___c__DisplayClass5_0__GetAssets_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v28, v29, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventHeelPortraitAssetManager__Release(
        EventHeelPortraitAssetManager_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4C261E8 & 1) == 0 )
  {
    sub_1C3B764(&AtlasManager_TypeInfo, *(_QWORD *)&eventId);
    byte_4C261E8 = 1;
  }
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__ReleaseEventUI_39282512(eventId, 0LL);
  this->fields._heelPortraitDetailDialog_k__BackingField = 0LL;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields, 0LL, v5, v6, v7, v8, v9, v10);
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._heelPortraitDetailDialog_k__BackingField = value;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields, (int64_t)value, (int64_t)method, v3, v4, v5, v6, v7);
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
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  System_Action_o *_9__1; // x21
  int32_t eventId; // w20
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7

  v4 = this;
  if ( (byte_4C261EA & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, assetData);
    sub_1C3B764(&Method_AssetData_GetObject_GameObject____77902856, v5);
    sub_1C3B764(&AtlasManager_TypeInfo, v6);
    sub_1C3B764(&Method_EventHeelPortraitAssetManager___c__DisplayClass5_0__GetAssets_b__1__, v7);
    this = (EventHeelPortraitAssetManager___c__DisplayClass5_0_o *)sub_1C3B764(&StringLiteral_7379/*"Incompatible handle: Trying to assign a playable data of type `{0}` that is not compatible with the PlayableBehaviour of type `{1}`."*/, v8);
    byte_4C261EA = 1;
  }
  if ( !assetData
    || (_4__this = v4->fields.__4__this,
        this = (EventHeelPortraitAssetManager___c__DisplayClass5_0_o *)AssetData__GetObject_object__50142412(
                                                                         assetData,
                                                                         (System_String_o *)StringLiteral_7379/*"Incompatible handle: Trying to assign a playable data of type `{0}` that is not compatible with the PlayableBehaviour of type `{1}`."*/,
                                                                         (const MethodInfo_2FD1CCC *)Method_AssetData_GetObject_GameObject____77902856),
        !_4__this) )
  {
    sub_1C3B9C0(this, assetData);
  }
  _4__this->fields._heelPortraitDetailDialog_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1C3B708((PartyOrganizationUtility_o *)&_4__this->fields, (int64_t)this, v10, v11, v12, v13, v14, v15);
  _9__1 = v4->fields.__9__1;
  eventId = v4->fields.eventId;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v4,
      Method_EventHeelPortraitAssetManager___c__DisplayClass5_0__GetAssets_b__1__,
      0LL);
    v4->fields.__9__1 = _9__1;
    sub_1C3B708((PartyOrganizationUtility_o *)&v4->fields.__9__1, (int64_t)_9__1, v18, v19, v20, v21, v22, v23);
  }
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadEventUI_39282348(eventId, _9__1, 1, 0LL);
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