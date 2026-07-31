void EventHeelPortraitAssetManager___ctor(EventHeelPortraitAssetManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  struct System_String_array *v11; // x20
  int32_t v12; // w1
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7

  if ( (byte_5932835 & 1) == 0 )
  {
    sub_21FFC50(&string___TypeInfo);
    sub_21FFC50(&StringLiteral_6520/*"EventUI/Prefabs/"*/);
    byte_5932835 = 1;
  }
  v3 = sub_21FFD10(string___TypeInfo, 1);
  if ( !v3 )
    sub_21FFECC(0, v4);
  v11 = (struct System_String_array *)v3;
  if ( !*(_DWORD *)(v3 + 24) )
    sub_21FFED4(v3);
  v12 = StringLiteral_6520/*"EventUI/Prefabs/"*/;
  *(_QWORD *)(v3 + 32) = StringLiteral_6520/*"EventUI/Prefabs/"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v3 + 32), v12, v5, v6, v7, v8, v9, v10);
  this->fields.loadAssetNames = v11;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.loadAssetNames,
    (int32_t)v11,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
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
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  struct System_String_array *loadAssetNames; // x8
  System_String_o *v23; // x20
  System_String_o *v24; // x0
  System_String_o *v25; // x20
  AssetLoader_LoadEndDataHandler_o *v26; // x21
  __int64 v27; // x1
  __int64 v28; // x2

  if ( (byte_5932833 & 1) == 0 )
  {
    sub_21FFC50(&AssetManager_TypeInfo);
    sub_21FFC50(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_21FFC50(&Method_EventHeelPortraitAssetManager___c__DisplayClass5_0__GetAssets_b__0__);
    sub_21FFC50(&EventHeelPortraitAssetManager___c__DisplayClass5_0_TypeInfo);
    byte_5932833 = 1;
  }
  v7 = sub_21FFEBC(EventHeelPortraitAssetManager___c__DisplayClass5_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7
    || (*(_QWORD *)(v7 + 16) = this,
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15),
        *(_DWORD *)(v7 + 24) = eventId,
        *(_QWORD *)(v7 + 32) = finishCallback,
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)(v7 + 32),
          (int32_t)finishCallback,
          v16,
          v17,
          v18,
          v19,
          v20,
          v21),
        (loadAssetNames = this->fields.loadAssetNames) == 0) )
  {
    sub_21FFECC(v8, v9);
  }
  if ( !LODWORD(loadAssetNames->max_length) )
    sub_21FFED4(v8);
  v23 = loadAssetNames->m_Items[0];
  v24 = System_Int32__ToString((int)v7 + 24, 0);
  v25 = System_String__Concat_75438412(v23, v24, 0);
  v26 = (AssetLoader_LoadEndDataHandler_o *)sub_21FFEBC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v26,
    (Il2CppObject *)v7,
    Method_EventHeelPortraitAssetManager___c__DisplayClass5_0__GetAssets_b__0__,
    0);
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v27, v28);
  AssetManager__loadAssetStorage(v25, v26, 1, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void EventHeelPortraitAssetManager__Release(
        EventHeelPortraitAssetManager_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  if ( (byte_5932834 & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    byte_5932834 = 1;
  }
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, *(_QWORD *)&eventId, method);
  AtlasManager__ReleaseEventUI_47538200(eventId, 0);
  this->fields._heelPortraitDetailDialog_k__BackingField = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields, 0, v5, v6, v7, v8, v9, v10);
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._heelPortraitDetailDialog_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  __int64 v12; // x1
  __int64 v13; // x2
  System_Action_o *_9__1; // x21
  int32_t eventId; // w20
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7

  v4 = this;
  if ( (byte_5932836 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_AssetData_GetObject_GameObject____91482112);
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&Method_EventHeelPortraitAssetManager___c__DisplayClass5_0__GetAssets_b__1__);
    this = (EventHeelPortraitAssetManager___c__DisplayClass5_0_o *)sub_21FFC50(&StringLiteral_7591/*"HeelPortraitDetailDialog"*/);
    byte_5932836 = 1;
  }
  if ( !assetData
    || (_4__this = v4->fields.__4__this,
        this = (EventHeelPortraitAssetManager___c__DisplayClass5_0_o *)AssetData__GetObject_object__58323140(
                                                                         assetData,
                                                                         (System_String_o *)StringLiteral_7591/*"HeelPortraitDetailDialog"*/,
                                                                         (const MethodInfo_379F0C4 *)Method_AssetData_GetObject_GameObject____91482112),
        !_4__this) )
  {
    sub_21FFECC(this, assetData);
  }
  _4__this->fields._heelPortraitDetailDialog_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&_4__this->fields, (int32_t)this, v6, v7, v8, v9, v10, v11);
  _9__1 = v4->fields.__9__1;
  eventId = v4->fields.eventId;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v4,
      Method_EventHeelPortraitAssetManager___c__DisplayClass5_0__GetAssets_b__1__,
      0);
    v4->fields.__9__1 = _9__1;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v4->fields.__9__1, (int32_t)_9__1, v16, v17, v18, v19, v20, v21);
  }
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v12, v13);
  AtlasManager__LoadEventUI_47538036(eventId, _9__1, 1, 0);
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