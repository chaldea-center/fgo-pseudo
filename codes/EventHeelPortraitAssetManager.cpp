void EventHeelPortraitAssetManager___ctor(EventHeelPortraitAssetManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x3
  struct System_String_array *v7; // x20

  if ( (byte_4C21875 & 1) == 0 )
  {
    sub_1C2D490(&string___TypeInfo);
    sub_1C2D490(&StringLiteral_6259/*"EventUI/Prefabs/"*/);
    byte_4C21875 = 1;
  }
  v3 = sub_1C2D538(string___TypeInfo, 1);
  if ( !v3 )
    sub_1C2D6EC(0, v4);
  v7 = (struct System_String_array *)v3;
  if ( !*(_DWORD *)(v3 + 24) )
    sub_1C2D6F4(v3, v4, v5, v6);
  *(_QWORD *)(v3 + 32) = StringLiteral_6259/*"EventUI/Prefabs/"*/;
  sub_1C2D434(v3 + 32);
  this->fields.loadAssetNames = v7;
  sub_1C2D434(&this->fields.loadAssetNames);
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventHeelPortraitAssetManager__GetAssets(
        EventHeelPortraitAssetManager_o *this,
        int32_t eventId,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v7; // x19
  __int64 v8; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  struct System_String_array *loadAssetNames; // x8
  System_String_o *v13; // x20
  System_String_o *v14; // x0
  System_String_o *v15; // x20
  AssetLoader_LoadEndDataHandler_o *v16; // x21

  if ( (byte_4C21873 & 1) == 0 )
  {
    sub_1C2D490(&AssetManager_TypeInfo);
    sub_1C2D490(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C2D490(&Method_EventHeelPortraitAssetManager___c__DisplayClass5_0__GetAssets_b__0__);
    sub_1C2D490(&EventHeelPortraitAssetManager___c__DisplayClass5_0_TypeInfo);
    byte_4C21873 = 1;
  }
  v7 = sub_1C2D6DC(EventHeelPortraitAssetManager___c__DisplayClass5_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7
    || (*(_QWORD *)(v7 + 16) = this,
        sub_1C2D434(v7 + 16),
        *(_DWORD *)(v7 + 24) = eventId,
        *(_QWORD *)(v7 + 32) = finishCallback,
        v8 = sub_1C2D434(v7 + 32),
        (loadAssetNames = this->fields.loadAssetNames) == 0) )
  {
    sub_1C2D6EC(v8, v9);
  }
  if ( !LODWORD(loadAssetNames->max_length) )
    sub_1C2D6F4(v8, v9, v10, v11);
  v13 = loadAssetNames->m_Items[0];
  v14 = System_Int32__ToString((int)v7 + 24, 0);
  v15 = System_String__Concat_63457864(v13, v14, 0);
  v16 = (AssetLoader_LoadEndDataHandler_o *)sub_1C2D6DC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v16,
    (Il2CppObject *)v7,
    Method_EventHeelPortraitAssetManager___c__DisplayClass5_0__GetAssets_b__0__,
    0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v15, v16, 1, 0);
}


void EventHeelPortraitAssetManager__Release(
        EventHeelPortraitAssetManager_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  if ( (byte_4C21874 & 1) == 0 )
  {
    sub_1C2D490(&AtlasManager_TypeInfo);
    byte_4C21874 = 1;
  }
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__ReleaseEventUI_40385248(eventId, 0);
  this->fields._heelPortraitDetailDialog_k__BackingField = 0;
  sub_1C2D434(&this->fields);
}


UnityEngine_GameObject_o *EventHeelPortraitAssetManager__get_heelPortraitDetailDialog(
        EventHeelPortraitAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._heelPortraitDetailDialog_k__BackingField;
}


void EventHeelPortraitAssetManager__set_heelPortraitDetailDialog(
        EventHeelPortraitAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  this->fields._heelPortraitDetailDialog_k__BackingField = value;
  sub_1C2D434(&this->fields);
}


void EventHeelPortraitAssetManager___c__DisplayClass5_0___ctor(
        EventHeelPortraitAssetManager___c__DisplayClass5_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventHeelPortraitAssetManager___c__DisplayClass5_0___GetAssets_b__0(
        EventHeelPortraitAssetManager___c__DisplayClass5_0_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  EventHeelPortraitAssetManager___c__DisplayClass5_0_o *v4; // x19
  struct EventHeelPortraitAssetManager_o *_4__this; // x21
  System_Action_o *_9__1; // x21
  int32_t eventId; // w20

  v4 = this;
  if ( (byte_4C21876 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_AssetData_GetObject_GameObject____77994080);
    sub_1C2D490(&AtlasManager_TypeInfo);
    sub_1C2D490(&Method_EventHeelPortraitAssetManager___c__DisplayClass5_0__GetAssets_b__1__);
    this = (EventHeelPortraitAssetManager___c__DisplayClass5_0_o *)sub_1C2D490(&StringLiteral_7293/*"HeelPortraitDetailDialog"*/);
    byte_4C21876 = 1;
  }
  if ( !assetData
    || (_4__this = v4->fields.__4__this,
        this = (EventHeelPortraitAssetManager___c__DisplayClass5_0_o *)AssetData__GetObject_object__51051712(
                                                                         assetData,
                                                                         (System_String_o *)StringLiteral_7293/*"HeelPortraitDetailDialog"*/,
                                                                         (const MethodInfo_30AFCC0 *)Method_AssetData_GetObject_GameObject____77994080),
        !_4__this) )
  {
    sub_1C2D6EC(this, assetData);
  }
  _4__this->fields._heelPortraitDetailDialog_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1C2D434(&_4__this->fields);
  _9__1 = v4->fields.__9__1;
  eventId = v4->fields.eventId;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v4,
      Method_EventHeelPortraitAssetManager___c__DisplayClass5_0__GetAssets_b__1__,
      0);
    v4->fields.__9__1 = _9__1;
    sub_1C2D434(&v4->fields.__9__1);
  }
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadEventUI_40385076(eventId, _9__1, 1, 0);
}


void EventHeelPortraitAssetManager___c__DisplayClass5_0___GetAssets_b__1(
        EventHeelPortraitAssetManager___c__DisplayClass5_0_o *this,
        const MethodInfo *method)
{
  System_Action_o *finishCallback; // x0

  finishCallback = this->fields.finishCallback;
  if ( finishCallback )
    ActionExtensions__Call(finishCallback, 0);
}