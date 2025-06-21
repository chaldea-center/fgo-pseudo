void __fastcall EventHeelPortraitAssetManager___ctor(EventHeelPortraitAssetManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x3
  struct System_String_array *v8; // x20

  if ( (byte_4B16B76 & 1) == 0 )
  {
    sub_1BCAFF8(&string___TypeInfo, method);
    sub_1BCAFF8(&StringLiteral_6217/*"EventUI/Prefabs/"*/, v3);
    byte_4B16B76 = 1;
  }
  v4 = sub_1BCB0A0(string___TypeInfo, 1LL);
  if ( !v4 )
    sub_1BCB254(0LL, v5);
  v8 = (struct System_String_array *)v4;
  if ( !*(_DWORD *)(v4 + 24) )
    sub_1BCB25C(v4, v5, v6, v7);
  *(_QWORD *)(v4 + 32) = StringLiteral_6217/*"EventUI/Prefabs/"*/;
  sub_1BCAF9C(v4 + 32);
  this->fields.loadAssetNames = v8;
  sub_1BCAF9C(&this->fields.loadAssetNames);
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
  __int64 v13; // x2
  __int64 v14; // x3
  struct System_String_array *loadAssetNames; // x8
  System_String_o *v16; // x20
  System_String_o *v17; // x0
  System_String_o *v18; // x20
  AssetLoader_LoadEndDataHandler_o *v19; // x21

  if ( (byte_4B16B74 & 1) == 0 )
  {
    sub_1BCAFF8(&AssetManager_TypeInfo, *(_QWORD *)&eventId);
    sub_1BCAFF8(&AssetLoader_LoadEndDataHandler_TypeInfo, v7);
    sub_1BCAFF8(&Method_EventHeelPortraitAssetManager___c__DisplayClass5_0__GetAssets_b__0__, v8);
    sub_1BCAFF8(&EventHeelPortraitAssetManager___c__DisplayClass5_0_TypeInfo, v9);
    byte_4B16B74 = 1;
  }
  v10 = sub_1BCB244(EventHeelPortraitAssetManager___c__DisplayClass5_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10
    || (*(_QWORD *)(v10 + 16) = this,
        sub_1BCAF9C(v10 + 16),
        *(_DWORD *)(v10 + 24) = eventId,
        *(_QWORD *)(v10 + 32) = finishCallback,
        v11 = sub_1BCAF9C(v10 + 32),
        (loadAssetNames = this->fields.loadAssetNames) == 0LL) )
  {
    sub_1BCB254(v11, v12);
  }
  if ( !loadAssetNames->max_length )
    sub_1BCB25C(v11, v12, v13, v14);
  v16 = loadAssetNames->m_Items[0];
  v17 = System_Int32__ToString((int)v10 + 24, 0LL);
  v18 = System_String__Concat_62450424(v16, v17, 0LL);
  v19 = (AssetLoader_LoadEndDataHandler_o *)sub_1BCB244(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v19,
    (Il2CppObject *)v10,
    Method_EventHeelPortraitAssetManager___c__DisplayClass5_0__GetAssets_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v18, v19, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventHeelPortraitAssetManager__Release(
        EventHeelPortraitAssetManager_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  if ( (byte_4B16B75 & 1) == 0 )
  {
    sub_1BCAFF8(&AtlasManager_TypeInfo, *(_QWORD *)&eventId);
    byte_4B16B75 = 1;
  }
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__ReleaseEventUI_39794596(eventId, 0LL);
  this->fields._heelPortraitDetailDialog_k__BackingField = 0LL;
  sub_1BCAF9C(&this->fields);
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
  this->fields._heelPortraitDetailDialog_k__BackingField = value;
  sub_1BCAF9C(&this->fields);
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
  System_Action_o *_9__1; // x21
  int32_t eventId; // w20

  v4 = this;
  if ( (byte_4B16B77 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, assetData);
    sub_1BCAFF8(&Method_AssetData_GetObject_GameObject____76915336, v5);
    sub_1BCAFF8(&AtlasManager_TypeInfo, v6);
    sub_1BCAFF8(&Method_EventHeelPortraitAssetManager___c__DisplayClass5_0__GetAssets_b__1__, v7);
    this = (EventHeelPortraitAssetManager___c__DisplayClass5_0_o *)sub_1BCAFF8(&StringLiteral_7232/*"HeelPortraitDetailDialog"*/, v8);
    byte_4B16B77 = 1;
  }
  if ( !assetData
    || (_4__this = v4->fields.__4__this,
        this = (EventHeelPortraitAssetManager___c__DisplayClass5_0_o *)AssetData__GetObject_object__50315216(
                                                                         assetData,
                                                                         (System_String_o *)StringLiteral_7232/*"HeelPortraitDetailDialog"*/,
                                                                         (const MethodInfo_2FFBFD0 *)Method_AssetData_GetObject_GameObject____76915336),
        !_4__this) )
  {
    sub_1BCB254(this, assetData);
  }
  _4__this->fields._heelPortraitDetailDialog_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1BCAF9C(&_4__this->fields);
  _9__1 = v4->fields.__9__1;
  eventId = v4->fields.eventId;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v4,
      Method_EventHeelPortraitAssetManager___c__DisplayClass5_0__GetAssets_b__1__,
      0LL);
    v4->fields.__9__1 = _9__1;
    sub_1BCAF9C(&v4->fields.__9__1);
  }
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadEventUI_39794424(eventId, _9__1, 1, 0LL);
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