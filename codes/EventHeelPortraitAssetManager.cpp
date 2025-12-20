void EventHeelPortraitAssetManager___ctor(EventHeelPortraitAssetManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  struct System_String_array *v5; // x20
  __int64 v6; // x1

  if ( (byte_4D26C2E & 1) == 0 )
  {
    sub_1C94098(&string___TypeInfo);
    sub_1C94098(&StringLiteral_6273/*"EventUI/Prefabs/"*/);
    byte_4D26C2E = 1;
  }
  v3 = sub_1C94140(string___TypeInfo, 1);
  if ( !v3 )
    sub_1C942F0(0, v4);
  v5 = (struct System_String_array *)v3;
  if ( !*(_DWORD *)(v3 + 24) )
    sub_1C942F8(v3);
  v6 = StringLiteral_6273/*"EventUI/Prefabs/"*/;
  *(_QWORD *)(v3 + 32) = StringLiteral_6273/*"EventUI/Prefabs/"*/;
  sub_1C9403C(v3 + 32, v6);
  this->fields.loadAssetNames = v5;
  sub_1C9403C(&this->fields.loadAssetNames, v5);
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
  struct System_String_array *loadAssetNames; // x8
  System_String_o *v11; // x20
  System_String_o *v12; // x0
  System_String_o *v13; // x20
  AssetLoader_LoadEndDataHandler_o *v14; // x21

  if ( (byte_4D26C2C & 1) == 0 )
  {
    sub_1C94098(&AssetManager_TypeInfo);
    sub_1C94098(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C94098(&Method_EventHeelPortraitAssetManager___c__DisplayClass5_0__GetAssets_b__0__);
    sub_1C94098(&EventHeelPortraitAssetManager___c__DisplayClass5_0_TypeInfo);
    byte_4D26C2C = 1;
  }
  v7 = sub_1C942E4(EventHeelPortraitAssetManager___c__DisplayClass5_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7
    || (*(_QWORD *)(v7 + 16) = this,
        sub_1C9403C(v7 + 16, this),
        *(_DWORD *)(v7 + 24) = eventId,
        *(_QWORD *)(v7 + 32) = finishCallback,
        v8 = sub_1C9403C(v7 + 32, finishCallback),
        (loadAssetNames = this->fields.loadAssetNames) == 0) )
  {
    sub_1C942F0(v8, v9);
  }
  if ( !LODWORD(loadAssetNames->max_length) )
    sub_1C942F8(v8);
  v11 = loadAssetNames->m_Items[0];
  v12 = System_Int32__ToString((int)v7 + 24, 0);
  v13 = System_String__Concat_64417744(v11, v12, 0);
  v14 = (AssetLoader_LoadEndDataHandler_o *)sub_1C942E4(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v14,
    (Il2CppObject *)v7,
    Method_EventHeelPortraitAssetManager___c__DisplayClass5_0__GetAssets_b__0__,
    0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v13, v14, 1, 0);
}


void EventHeelPortraitAssetManager__Release(
        EventHeelPortraitAssetManager_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  if ( (byte_4D26C2D & 1) == 0 )
  {
    sub_1C94098(&AtlasManager_TypeInfo);
    byte_4D26C2D = 1;
  }
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__ReleaseEventUI_41357488(eventId, 0);
  this->fields._heelPortraitDetailDialog_k__BackingField = 0;
  sub_1C9403C(&this->fields, 0);
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
  sub_1C9403C(&this->fields, value);
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
  if ( (byte_4D26C2F & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_AssetData_GetObject_GameObject____79044816);
    sub_1C94098(&AtlasManager_TypeInfo);
    sub_1C94098(&Method_EventHeelPortraitAssetManager___c__DisplayClass5_0__GetAssets_b__1__);
    this = (EventHeelPortraitAssetManager___c__DisplayClass5_0_o *)sub_1C94098(&StringLiteral_7312/*"HeelPortraitDetailDialog"*/);
    byte_4D26C2F = 1;
  }
  if ( !assetData
    || (_4__this = v4->fields.__4__this,
        this = (EventHeelPortraitAssetManager___c__DisplayClass5_0_o *)AssetData__GetObject_object__51893132(
                                                                         assetData,
                                                                         (System_String_o *)StringLiteral_7312/*"HeelPortraitDetailDialog"*/,
                                                                         (const MethodInfo_317D38C *)Method_AssetData_GetObject_GameObject____79044816),
        !_4__this) )
  {
    sub_1C942F0(this, assetData);
  }
  _4__this->fields._heelPortraitDetailDialog_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1C9403C(&_4__this->fields, this);
  _9__1 = v4->fields.__9__1;
  eventId = v4->fields.eventId;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v4,
      Method_EventHeelPortraitAssetManager___c__DisplayClass5_0__GetAssets_b__1__,
      0);
    v4->fields.__9__1 = _9__1;
    sub_1C9403C(&v4->fields.__9__1, _9__1);
  }
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadEventUI_41357316(eventId, _9__1, 1, 0);
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