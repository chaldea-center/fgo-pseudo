void __fastcall EventHeelPortraitAssetManager___ctor(EventHeelPortraitAssetManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x0
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  struct System_String_array *v12; // x20
  __int64 v13; // x0
  System_Int32_array **v14; // x1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  __int64 v21; // x0
  __int64 v22; // x0

  if ( (byte_41890E1 & 1) == 0 )
  {
    sub_B2C35C(&string___TypeInfo, method);
    sub_B2C35C(&StringLiteral_6202/*"EventUI/Prefabs/"*/, v3);
    byte_41890E1 = 1;
  }
  v4 = sub_B2C374(string___TypeInfo, 1LL);
  if ( !v4 )
    sub_B2C434(0LL, v5);
  v12 = (struct System_String_array *)v4;
  v13 = StringLiteral_6202/*"EventUI/Prefabs/"*/;
  if ( StringLiteral_6202/*"EventUI/Prefabs/"*/ )
  {
    v13 = sub_B2C41C(StringLiteral_6202/*"EventUI/Prefabs/"*/, v12->obj.klass->_1.element_class);
    if ( !v13 )
    {
      v22 = sub_B2C454(0LL);
      sub_B2C400(v22, 0LL);
    }
    v14 = (System_Int32_array **)StringLiteral_6202/*"EventUI/Prefabs/"*/;
  }
  else
  {
    v14 = 0LL;
  }
  if ( !v12->max_length )
  {
    v21 = sub_B2C460(v13);
    sub_B2C400(v21, 0LL);
  }
  v12->m_Items[0] = (System_String_o *)v14;
  sub_B2C2F8((BattleServantConfConponent_o *)v12->m_Items, v14, v6, v7, v8, v9, v10, v11);
  this->fields.loadAssetNames = v12;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.loadAssetNames,
    (System_Int32_array **)v12,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
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
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  struct System_String_array *loadAssetNames; // x8
  System_String_o *v26; // x20
  System_String_o *v27; // x0
  System_String_o *v28; // x20
  AssetLoader_LoadEndDataHandler_o *v29; // x21
  __int64 v30; // x0

  if ( (byte_41890DF & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, *(_QWORD *)&eventId);
    sub_B2C35C(&AssetLoader_LoadEndDataHandler_TypeInfo, v7);
    sub_B2C35C(&Method_EventHeelPortraitAssetManager___c__DisplayClass5_0__GetAssets_b__0__, v8);
    sub_B2C35C(&EventHeelPortraitAssetManager___c__DisplayClass5_0_TypeInfo, v9);
    byte_41890DF = 1;
  }
  v10 = sub_B2C42C(EventHeelPortraitAssetManager___c__DisplayClass5_0_TypeInfo);
  EventHeelPortraitAssetManager___c__DisplayClass5_0___ctor(
    (EventHeelPortraitAssetManager___c__DisplayClass5_0_o *)v10,
    0LL);
  if ( !v10
    || (*(_QWORD *)(v10 + 16) = this,
        sub_B2C2F8(
          (BattleServantConfConponent_o *)(v10 + 16),
          (System_Int32_array **)this,
          v13,
          v14,
          v15,
          v16,
          v17,
          v18),
        *(_DWORD *)(v10 + 24) = eventId,
        *(_QWORD *)(v10 + 32) = finishCallback,
        sub_B2C2F8(
          (BattleServantConfConponent_o *)(v10 + 32),
          (System_Int32_array **)finishCallback,
          v19,
          v20,
          v21,
          v22,
          v23,
          v24),
        (loadAssetNames = this->fields.loadAssetNames) == 0LL) )
  {
    sub_B2C434(v11, v12);
  }
  if ( !loadAssetNames->max_length )
  {
    v30 = sub_B2C460(v11);
    sub_B2C400(v30, 0LL);
  }
  v26 = loadAssetNames->m_Items[0];
  v27 = System_Int32__ToString((int)v10 + 24, 0LL);
  v28 = System_String__Concat_44305532(v26, v27, 0LL);
  v29 = (AssetLoader_LoadEndDataHandler_o *)sub_B2C42C(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v29,
    (Il2CppObject *)v10,
    Method_EventHeelPortraitAssetManager___c__DisplayClass5_0__GetAssets_b__0__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v28, v29, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_41890E0 & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, *(_QWORD *)&eventId);
    byte_41890E0 = 1;
  }
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__ReleaseEventUI_28451204(eventId, 0LL);
  this->fields._heelPortraitDetailDialog_k__BackingField = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields, 0LL, v5, v6, v7, v8, v9, v10);
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
  sub_B2C2F8(
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct EventHeelPortraitAssetManager_o *_4__this; // x21
  System_Action_o *_9__1; // x21
  int32_t eventId; // w20

  v4 = this;
  if ( (byte_4184AE6 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, assetData);
    sub_B2C35C(&Method_AssetData_GetObject_GameObject____67377624, v5);
    sub_B2C35C(&AtlasManager_TypeInfo, v6);
    sub_B2C35C(&Method_EventHeelPortraitAssetManager___c__DisplayClass5_0__GetAssets_b__1__, v7);
    this = (EventHeelPortraitAssetManager___c__DisplayClass5_0_o *)sub_B2C35C(&StringLiteral_7143/*"HeelPortraitDetailDialog"*/, v8);
    byte_4184AE6 = 1;
  }
  if ( !assetData
    || (_4__this = v4->fields.__4__this,
        this = (EventHeelPortraitAssetManager___c__DisplayClass5_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                         assetData,
                                                                         (System_String_o *)StringLiteral_7143/*"HeelPortraitDetailDialog"*/,
                                                                         (const MethodInfo_1720344 *)Method_AssetData_GetObject_GameObject____67377624),
        !_4__this) )
  {
    sub_B2C434(this, assetData);
  }
  _4__this->fields._heelPortraitDetailDialog_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_B2C2F8(&_4__this->fields, this);
  _9__1 = v4->fields.__9__1;
  eventId = v4->fields.eventId;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v4,
      Method_EventHeelPortraitAssetManager___c__DisplayClass5_0__GetAssets_b__1__,
      0LL);
    v4->fields.__9__1 = _9__1;
    sub_B2C2F8(&v4->fields.__9__1, _9__1);
  }
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadEventUI_28451024(eventId, _9__1, 1, 0LL);
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