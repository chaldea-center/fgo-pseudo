void __fastcall EventHeelPortraitAssetManager___ctor(EventHeelPortraitAssetManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  __int64 v8; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  struct System_String_array *v16; // x20
  __int64 v17; // x0
  System_Int32_array **v18; // x1
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  __int64 v25; // x0
  __int64 v26; // x0

  if ( (byte_42E9F7A & 1) == 0 )
  {
    sub_B5D5C4(&string___TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_6281/*"EventUI/Prefabs/"*/, v5, v6, v7);
    byte_42E9F7A = 1;
  }
  v8 = sub_B5D5DC(string___TypeInfo, 1LL);
  if ( !v8 )
    sub_B5D69C(0LL, v9);
  v16 = (struct System_String_array *)v8;
  v17 = StringLiteral_6281/*"EventUI/Prefabs/"*/;
  if ( StringLiteral_6281/*"EventUI/Prefabs/"*/ )
  {
    v17 = sub_B5D684(StringLiteral_6281/*"EventUI/Prefabs/"*/, v16->obj.klass->_1.element_class);
    if ( !v17 )
    {
      v26 = sub_B5D6BC(0LL);
      sub_B5D668(v26, 0LL);
    }
    v18 = (System_Int32_array **)StringLiteral_6281/*"EventUI/Prefabs/"*/;
  }
  else
  {
    v18 = 0LL;
  }
  if ( !v16->max_length )
  {
    v25 = sub_B5D6C8(v17);
    sub_B5D668(v25, 0LL);
  }
  v16->m_Items[0] = (System_String_o *)v18;
  sub_B5D560((BattleServantConfConponent_o *)v16->m_Items, v18, v10, v11, v12, v13, v14, v15);
  this->fields.loadAssetNames = v16;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.loadAssetNames,
    (System_Int32_array **)v16,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventHeelPortraitAssetManager__GetAssets(
        EventHeelPortraitAssetManager_o *this,
        int32_t eventId,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  __int64 v16; // x19
  __int64 v17; // x0
  __int64 v18; // x1
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  struct System_String_array *loadAssetNames; // x8
  System_String_o *v32; // x20
  System_String_o *v33; // x0
  System_String_o *v34; // x20
  AssetLoader_LoadEndDataHandler_o *v35; // x21
  __int64 v36; // x0

  if ( (byte_42E9F78 & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, eventId, (_DWORD)finishCallback, method);
    sub_B5D5C4(&AssetLoader_LoadEndDataHandler_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&Method_EventHeelPortraitAssetManager___c__DisplayClass5_0__GetAssets_b__0__, v10, v11, v12);
    sub_B5D5C4(&EventHeelPortraitAssetManager___c__DisplayClass5_0_TypeInfo, v13, v14, v15);
    byte_42E9F78 = 1;
  }
  v16 = sub_B5D694(EventHeelPortraitAssetManager___c__DisplayClass5_0_TypeInfo);
  EventHeelPortraitAssetManager___c__DisplayClass5_0___ctor(
    (EventHeelPortraitAssetManager___c__DisplayClass5_0_o *)v16,
    0LL);
  if ( !v16
    || (*(_QWORD *)(v16 + 16) = this,
        sub_B5D560(
          (BattleServantConfConponent_o *)(v16 + 16),
          (System_Int32_array **)this,
          v19,
          v20,
          v21,
          v22,
          v23,
          v24),
        *(_DWORD *)(v16 + 24) = eventId,
        *(_QWORD *)(v16 + 32) = finishCallback,
        sub_B5D560(
          (BattleServantConfConponent_o *)(v16 + 32),
          (System_Int32_array **)finishCallback,
          v25,
          v26,
          v27,
          v28,
          v29,
          v30),
        (loadAssetNames = this->fields.loadAssetNames) == 0LL) )
  {
    sub_B5D69C(v17, v18);
  }
  if ( !loadAssetNames->max_length )
  {
    v36 = sub_B5D6C8(v17);
    sub_B5D668(v36, 0LL);
  }
  v32 = loadAssetNames->m_Items[0];
  v33 = System_Int32__ToString((int)v16 + 24, 0LL);
  v34 = System_String__Concat_44577788(v32, v33, 0LL);
  v35 = (AssetLoader_LoadEndDataHandler_o *)sub_B5D694(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v35,
    (Il2CppObject *)v16,
    Method_EventHeelPortraitAssetManager___c__DisplayClass5_0__GetAssets_b__0__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v34, v35, 1, 0LL);
}


void __fastcall EventHeelPortraitAssetManager__Release(
        EventHeelPortraitAssetManager_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42E9F79 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, eventId, (_DWORD)method, v3);
    byte_42E9F79 = 1;
  }
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__ReleaseEventUI_31190280(eventId, 0LL);
  this->fields._heelPortraitDetailDialog_k__BackingField = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields, 0LL, v6, v7, v8, v9, v10, v11);
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._heelPortraitDetailDialog_k__BackingField = value;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  __int64 v3; // x3
  EventHeelPortraitAssetManager___c__DisplayClass5_0_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  struct EventHeelPortraitAssetManager_o *_4__this; // x21
  System_Action_o *_9__1; // x21
  int32_t eventId; // w20

  v5 = this;
  if ( (byte_42E6519 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)assetData, (_DWORD)method, v3);
    sub_B5D5C4(&Method_AssetData_GetObject_GameObject____68807504, v6, v7, v8);
    sub_B5D5C4(&AtlasManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_EventHeelPortraitAssetManager___c__DisplayClass5_0__GetAssets_b__1__, v12, v13, v14);
    this = (EventHeelPortraitAssetManager___c__DisplayClass5_0_o *)sub_B5D5C4(&StringLiteral_7225/*"HeelPortraitDetailDialog"*/, v15, v16, v17);
    byte_42E6519 = 1;
  }
  if ( !assetData
    || (_4__this = v5->fields.__4__this,
        this = (EventHeelPortraitAssetManager___c__DisplayClass5_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                         assetData,
                                                                         (System_String_o *)StringLiteral_7225/*"HeelPortraitDetailDialog"*/,
                                                                         (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504),
        !_4__this) )
  {
    sub_B5D69C(this, assetData);
  }
  _4__this->fields._heelPortraitDetailDialog_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_B5D560(&_4__this->fields);
  _9__1 = v5->fields.__9__1;
  eventId = v5->fields.eventId;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v5,
      Method_EventHeelPortraitAssetManager___c__DisplayClass5_0__GetAssets_b__1__,
      0LL);
    v5->fields.__9__1 = _9__1;
    sub_B5D560(&v5->fields.__9__1);
  }
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadEventUI_31190100(eventId, _9__1, 1, 0LL);
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