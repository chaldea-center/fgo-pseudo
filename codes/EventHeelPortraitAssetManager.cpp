void __fastcall EventHeelPortraitAssetManager___ctor(EventHeelPortraitAssetManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  struct System_String_array *v11; // x20
  __int64 v12; // x0
  System_Int32_array **v13; // x1
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  __int64 v20; // x0
  __int64 v21; // x0

  if ( (byte_438CBF4 & 1) == 0 )
  {
    sub_B775C4(&string___TypeInfo);
    sub_B775C4(&StringLiteral_6350/*"EventUI/Prefabs/"*/);
    byte_438CBF4 = 1;
  }
  v3 = sub_B775DC(string___TypeInfo, 1LL);
  if ( !v3 )
    sub_B7769C(0LL, v4);
  v11 = (struct System_String_array *)v3;
  v12 = StringLiteral_6350/*"EventUI/Prefabs/"*/;
  if ( StringLiteral_6350/*"EventUI/Prefabs/"*/ )
  {
    v12 = sub_B77684(StringLiteral_6350/*"EventUI/Prefabs/"*/, v11->obj.klass->_1.element_class);
    if ( !v12 )
    {
      v21 = sub_B776BC(0LL);
      sub_B77668(v21, 0LL);
    }
    v13 = (System_Int32_array **)StringLiteral_6350/*"EventUI/Prefabs/"*/;
  }
  else
  {
    v13 = 0LL;
  }
  if ( !v11->max_length )
  {
    v20 = sub_B776C8(v12);
    sub_B77668(v20, 0LL);
  }
  v11->m_Items[0] = (System_String_o *)v13;
  sub_B77560((BattleServantConfConponent_o *)v11->m_Items, v13, v5, v6, v7, v8, v9, v10);
  this->fields.loadAssetNames = v11;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.loadAssetNames,
    (System_Int32_array **)v11,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
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
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  struct System_String_array *loadAssetNames; // x8
  System_String_o *v23; // x20
  System_String_o *v24; // x0
  System_String_o *v25; // x20
  AssetLoader_LoadEndDataHandler_o *v26; // x21
  __int64 v27; // x0

  if ( (byte_438CBF2 & 1) == 0 )
  {
    sub_B775C4(&AssetManager_TypeInfo);
    sub_B775C4(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_B775C4(&Method_EventHeelPortraitAssetManager___c__DisplayClass5_0__GetAssets_b__0__);
    sub_B775C4(&EventHeelPortraitAssetManager___c__DisplayClass5_0_TypeInfo);
    byte_438CBF2 = 1;
  }
  v7 = sub_B77694(EventHeelPortraitAssetManager___c__DisplayClass5_0_TypeInfo);
  EventHeelPortraitAssetManager___c__DisplayClass5_0___ctor(
    (EventHeelPortraitAssetManager___c__DisplayClass5_0_o *)v7,
    0LL);
  if ( !v7
    || (*(_QWORD *)(v7 + 16) = this,
        sub_B77560((BattleServantConfConponent_o *)(v7 + 16), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15),
        *(_DWORD *)(v7 + 24) = eventId,
        *(_QWORD *)(v7 + 32) = finishCallback,
        sub_B77560(
          (BattleServantConfConponent_o *)(v7 + 32),
          (System_Int32_array **)finishCallback,
          v16,
          v17,
          v18,
          v19,
          v20,
          v21),
        (loadAssetNames = this->fields.loadAssetNames) == 0LL) )
  {
    sub_B7769C(v8, v9);
  }
  if ( !loadAssetNames->max_length )
  {
    v27 = sub_B776C8(v8);
    sub_B77668(v27, 0LL);
  }
  v23 = loadAssetNames->m_Items[0];
  v24 = System_Int32__ToString((int)v7 + 24, 0LL);
  v25 = System_String__Concat_44901936(v23, v24, 0LL);
  v26 = (AssetLoader_LoadEndDataHandler_o *)sub_B77694(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v26,
    (Il2CppObject *)v7,
    Method_EventHeelPortraitAssetManager___c__DisplayClass5_0__GetAssets_b__0__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v25, v26, 1, 0LL);
}


void __fastcall EventHeelPortraitAssetManager__Release(
        EventHeelPortraitAssetManager_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_438CBF3 & 1) == 0 )
  {
    sub_B775C4(&AtlasManager_TypeInfo);
    byte_438CBF3 = 1;
  }
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__ReleaseEventUI_24479600(eventId, 0LL);
  this->fields._heelPortraitDetailDialog_k__BackingField = 0LL;
  sub_B77560((BattleServantConfConponent_o *)&this->fields, 0LL, v5, v6, v7, v8, v9, v10);
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
  sub_B77560(
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
  EventHeelPortraitAssetManager___c__DisplayClass5_0_o *v4; // x19
  struct EventHeelPortraitAssetManager_o *_4__this; // x21
  System_Action_o *_9__1; // x21
  int32_t eventId; // w20

  v4 = this;
  if ( (byte_4388645 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_AssetData_GetObject_GameObject____69465408);
    sub_B775C4(&AtlasManager_TypeInfo);
    sub_B775C4(&Method_EventHeelPortraitAssetManager___c__DisplayClass5_0__GetAssets_b__1__);
    this = (EventHeelPortraitAssetManager___c__DisplayClass5_0_o *)sub_B775C4(&StringLiteral_7296/*"HeelPortraitDetailDialog"*/);
    byte_4388645 = 1;
  }
  if ( !assetData
    || (_4__this = v4->fields.__4__this,
        this = (EventHeelPortraitAssetManager___c__DisplayClass5_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                         assetData,
                                                                         (System_String_o *)StringLiteral_7296/*"HeelPortraitDetailDialog"*/,
                                                                         (const MethodInfo_1C5FDDC *)Method_AssetData_GetObject_GameObject____69465408),
        !_4__this) )
  {
    sub_B7769C(this, assetData);
  }
  _4__this->fields._heelPortraitDetailDialog_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_B77560(&_4__this->fields);
  _9__1 = v4->fields.__9__1;
  eventId = v4->fields.eventId;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v4,
      Method_EventHeelPortraitAssetManager___c__DisplayClass5_0__GetAssets_b__1__,
      0LL);
    v4->fields.__9__1 = _9__1;
    sub_B77560(&v4->fields.__9__1);
  }
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadEventUI_24479412(eventId, _9__1, 1, 0LL);
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