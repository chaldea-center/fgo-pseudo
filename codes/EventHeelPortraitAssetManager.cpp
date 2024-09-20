void __fastcall EventHeelPortraitAssetManager___ctor(EventHeelPortraitAssetManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  int32_t v5; // w2
  int32_t v6; // w3
  struct System_String_array *v7; // x20
  int32_t v8; // w1
  int32_t v9; // w2
  int32_t v10; // w3

  if ( (byte_4A5F0CF & 1) == 0 )
  {
    sub_1B885B0(&string___TypeInfo);
    sub_1B885B0(&StringLiteral_6228/*"EventUI/Prefabs/"*/);
    byte_4A5F0CF = 1;
  }
  v3 = sub_1B88658(string___TypeInfo, 1LL);
  if ( !v3 )
    sub_1B8880C(0LL, v4);
  v7 = (struct System_String_array *)v3;
  if ( !*(_DWORD *)(v3 + 24) )
    sub_1B88814(v3, v4);
  v8 = StringLiteral_6228/*"EventUI/Prefabs/"*/;
  *(_QWORD *)(v3 + 32) = StringLiteral_6228/*"EventUI/Prefabs/"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v3 + 32), v8, v5, v6);
  this->fields.loadAssetNames = v7;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.loadAssetNames, (int32_t)v7, v9, v10);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventHeelPortraitAssetManager__GetAssets(
        EventHeelPortraitAssetManager_o *this,
        int32_t eventId,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v7; // x19
  __int64 v8; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  int32_t v12; // w2
  int32_t v13; // w3
  struct System_String_array *loadAssetNames; // x8
  System_String_o *v15; // x20
  System_String_o *v16; // x0
  System_String_o *v17; // x20
  AssetLoader_LoadEndDataHandler_o *v18; // x21

  if ( (byte_4A5F0CD & 1) == 0 )
  {
    sub_1B885B0(&AssetManager_TypeInfo);
    sub_1B885B0(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1B885B0(&Method_EventHeelPortraitAssetManager___c__DisplayClass5_0__GetAssets_b__0__);
    sub_1B885B0(&EventHeelPortraitAssetManager___c__DisplayClass5_0_TypeInfo);
    byte_4A5F0CD = 1;
  }
  v7 = sub_1B887FC(EventHeelPortraitAssetManager___c__DisplayClass5_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7
    || (*(_QWORD *)(v7 + 16) = this,
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 16), (int32_t)this, v10, v11),
        *(_DWORD *)(v7 + 24) = eventId,
        *(_QWORD *)(v7 + 32) = finishCallback,
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 32), (int32_t)finishCallback, v12, v13),
        (loadAssetNames = this->fields.loadAssetNames) == 0LL) )
  {
    sub_1B8880C(v8, v9);
  }
  if ( !loadAssetNames->max_length )
    sub_1B88814(v8, v9);
  v15 = loadAssetNames->m_Items[0];
  v16 = System_Int32__ToString((int)v7 + 24, 0LL);
  v17 = System_String__Concat_61707032(v15, v16, 0LL);
  v18 = (AssetLoader_LoadEndDataHandler_o *)sub_1B887FC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v18,
    (Il2CppObject *)v7,
    Method_EventHeelPortraitAssetManager___c__DisplayClass5_0__GetAssets_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v17, v18, 1, 0LL);
}


void __fastcall EventHeelPortraitAssetManager__Release(
        EventHeelPortraitAssetManager_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_4A5F0CE & 1) == 0 )
  {
    sub_1B885B0(&AtlasManager_TypeInfo);
    byte_4A5F0CE = 1;
  }
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__ReleaseEventUI_37859248(eventId, 0LL);
  this->fields._heelPortraitDetailDialog_k__BackingField = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields, 0, v5, v6);
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
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)value, (int32_t)method, v3);
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
  struct EventHeelPortraitAssetManager_o *_4__this; // x21
  int32_t v6; // w2
  int32_t v7; // w3
  System_Action_o *_9__1; // x21
  int32_t eventId; // w20
  int32_t v10; // w2
  int32_t v11; // w3

  v4 = this;
  if ( (byte_4A5F0D0 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_AssetData_GetObject_GameObject____76085352);
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&Method_EventHeelPortraitAssetManager___c__DisplayClass5_0__GetAssets_b__1__);
    this = (EventHeelPortraitAssetManager___c__DisplayClass5_0_o *)sub_1B885B0(&StringLiteral_7209/*"HeelPortraitDetailDialog"*/);
    byte_4A5F0D0 = 1;
  }
  if ( !assetData
    || (_4__this = v4->fields.__4__this,
        this = (EventHeelPortraitAssetManager___c__DisplayClass5_0_o *)AssetData__GetObject_object__48635516(
                                                                         assetData,
                                                                         (System_String_o *)StringLiteral_7209/*"HeelPortraitDetailDialog"*/,
                                                                         (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_GameObject____76085352),
        !_4__this) )
  {
    sub_1B8880C(this, assetData);
  }
  _4__this->fields._heelPortraitDetailDialog_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&_4__this->fields, (int32_t)this, v6, v7);
  _9__1 = v4->fields.__9__1;
  eventId = v4->fields.eventId;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v4,
      Method_EventHeelPortraitAssetManager___c__DisplayClass5_0__GetAssets_b__1__,
      0LL);
    v4->fields.__9__1 = _9__1;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields.__9__1, (int32_t)_9__1, v10, v11);
  }
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadEventUI_37859084(eventId, _9__1, 1, 0LL);
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