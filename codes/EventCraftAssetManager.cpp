void EventCraftAssetManager___ctor(EventCraftAssetManager_o *this, const MethodInfo *method)
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

  if ( (byte_59323EC & 1) == 0 )
  {
    sub_21FFC50(&string___TypeInfo);
    sub_21FFC50(&StringLiteral_6520/*"EventUI/Prefabs/"*/);
    byte_59323EC = 1;
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


void EventCraftAssetManager__LoadAssets(
        EventCraftAssetManager_o *this,
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

  if ( (byte_59323EA & 1) == 0 )
  {
    sub_21FFC50(&AssetManager_TypeInfo);
    sub_21FFC50(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_21FFC50(&Method_EventCraftAssetManager___c__DisplayClass25_0__LoadAssets_b__0__);
    sub_21FFC50(&EventCraftAssetManager___c__DisplayClass25_0_TypeInfo);
    byte_59323EA = 1;
  }
  v7 = sub_21FFEBC(EventCraftAssetManager___c__DisplayClass25_0_TypeInfo);
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
    Method_EventCraftAssetManager___c__DisplayClass25_0__LoadAssets_b__0__,
    0);
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v27, v28);
  AssetManager__loadAssetStorage(v25, v26, 1, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void EventCraftAssetManager__Release(EventCraftAssetManager_o *this, int32_t eventId, const MethodInfo *method)
{
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7

  if ( (byte_59323EB & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    byte_59323EB = 1;
  }
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, *(_QWORD *)&eventId, method);
  AtlasManager__ReleaseEventUI_47538200(eventId, 0);
  this->fields._CraftItemNumConfirmDialog_k__BackingField = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields, 0, v5, v6, v7, v8, v9, v10);
  this->fields._CraftItemWithdrawConfirmDialog_k__BackingField = 0;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._CraftItemWithdrawConfirmDialog_k__BackingField,
    0,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  this->fields._CraftRewardDialog_k__BackingField = 0;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._CraftRewardDialog_k__BackingField,
    0,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  this->fields._CraftButtonBlinkEffect_k__BackingField = 0;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._CraftButtonBlinkEffect_k__BackingField,
    0,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  this->fields._CraftUseSupportToolDialog_k__BackingField = 0;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._CraftUseSupportToolDialog_k__BackingField,
    0,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  this->fields._CraftFirstTimeSupportToolDialog_k__BackingField = 0;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._CraftFirstTimeSupportToolDialog_k__BackingField,
    0,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
}


UnityEngine_GameObject_o *EventCraftAssetManager__get_CraftButtonBlinkEffect(
        EventCraftAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._CraftButtonBlinkEffect_k__BackingField;
}


UnityEngine_GameObject_o *EventCraftAssetManager__get_CraftFirstTimeSupportToolDialog(
        EventCraftAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._CraftFirstTimeSupportToolDialog_k__BackingField;
}


UnityEngine_GameObject_o *EventCraftAssetManager__get_CraftItemNumConfirmDialog(
        EventCraftAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._CraftItemNumConfirmDialog_k__BackingField;
}


UnityEngine_GameObject_o *EventCraftAssetManager__get_CraftItemWithdrawConfirmDialog(
        EventCraftAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._CraftItemWithdrawConfirmDialog_k__BackingField;
}


UnityEngine_GameObject_o *EventCraftAssetManager__get_CraftRewardDialog(
        EventCraftAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._CraftRewardDialog_k__BackingField;
}


UnityEngine_GameObject_o *EventCraftAssetManager__get_CraftUseSupportToolDialog(
        EventCraftAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._CraftUseSupportToolDialog_k__BackingField;
}


void EventCraftAssetManager__set_CraftButtonBlinkEffect(
        EventCraftAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._CraftButtonBlinkEffect_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._CraftButtonBlinkEffect_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void EventCraftAssetManager__set_CraftFirstTimeSupportToolDialog(
        EventCraftAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._CraftFirstTimeSupportToolDialog_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._CraftFirstTimeSupportToolDialog_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void EventCraftAssetManager__set_CraftItemNumConfirmDialog(
        EventCraftAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._CraftItemNumConfirmDialog_k__BackingField = value;
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


void EventCraftAssetManager__set_CraftItemWithdrawConfirmDialog(
        EventCraftAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._CraftItemWithdrawConfirmDialog_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._CraftItemWithdrawConfirmDialog_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void EventCraftAssetManager__set_CraftRewardDialog(
        EventCraftAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._CraftRewardDialog_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._CraftRewardDialog_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void EventCraftAssetManager__set_CraftUseSupportToolDialog(
        EventCraftAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._CraftUseSupportToolDialog_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._CraftUseSupportToolDialog_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void EventCraftAssetManager___c__DisplayClass25_0___ctor(
        EventCraftAssetManager___c__DisplayClass25_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventCraftAssetManager___c__DisplayClass25_0___LoadAssets_b__0(
        EventCraftAssetManager___c__DisplayClass25_0_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  EventCraftAssetManager___c__DisplayClass25_0_o *v4; // x19
  struct EventCraftAssetManager_o *_4__this; // x21
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  struct EventCraftAssetManager_o *v12; // x21
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  struct EventCraftAssetManager_o *v19; // x21
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  struct EventCraftAssetManager_o *v26; // x21
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  struct EventCraftAssetManager_o *v33; // x21
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  struct EventCraftAssetManager_o *v40; // x21
  System_String_o *v41; // x2
  System_String_o *v42; // x3
  int32_t v43; // w4
  int32_t v44; // w5
  bool v45; // w6
  bool v46; // w7
  __int64 v47; // x1
  __int64 v48; // x2
  System_Action_o *_9__1; // x21
  int32_t eventId; // w20
  System_String_o *v51; // x2
  System_String_o *v52; // x3
  int32_t v53; // w4
  int32_t v54; // w5
  bool v55; // w6
  bool v56; // w7

  v4 = this;
  if ( (byte_59323ED & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_AssetData_GetObject_GameObject____91482112);
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&Method_EventCraftAssetManager___c__DisplayClass25_0__LoadAssets_b__1__);
    sub_21FFC50(&StringLiteral_17891/*"bit_craft_blink"*/);
    sub_21FFC50(&StringLiteral_6453/*"EventCraftItemNumConfirmDialog"*/);
    sub_21FFC50(&StringLiteral_6456/*"EventCraftUseSupportToolDialog"*/);
    sub_21FFC50(&StringLiteral_6455/*"EventCraftRewardDialog"*/);
    sub_21FFC50(&StringLiteral_6452/*"EventCraftFirstTimeSupportToolDialog"*/);
    this = (EventCraftAssetManager___c__DisplayClass25_0_o *)sub_21FFC50(&StringLiteral_6454/*"EventCraftItemWithdrawConfirmDialog"*/);
    byte_59323ED = 1;
  }
  if ( !assetData )
    goto LABEL_15;
  _4__this = v4->fields.__4__this;
  this = (EventCraftAssetManager___c__DisplayClass25_0_o *)AssetData__GetObject_object__58323140(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_6453/*"EventCraftItemNumConfirmDialog"*/,
                                                             (const MethodInfo_379F0C4 *)Method_AssetData_GetObject_GameObject____91482112);
  if ( !_4__this )
    goto LABEL_15;
  _4__this->fields._CraftItemNumConfirmDialog_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&_4__this->fields, (int32_t)this, v6, v7, v8, v9, v10, v11);
  v12 = v4->fields.__4__this;
  this = (EventCraftAssetManager___c__DisplayClass25_0_o *)AssetData__GetObject_object__58323140(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_6454/*"EventCraftItemWithdrawConfirmDialog"*/,
                                                             (const MethodInfo_379F0C4 *)Method_AssetData_GetObject_GameObject____91482112);
  if ( !v12 )
    goto LABEL_15;
  v12->fields._CraftItemWithdrawConfirmDialog_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v12->fields._CraftItemWithdrawConfirmDialog_k__BackingField,
    (int32_t)this,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v19 = v4->fields.__4__this;
  this = (EventCraftAssetManager___c__DisplayClass25_0_o *)AssetData__GetObject_object__58323140(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_6455/*"EventCraftRewardDialog"*/,
                                                             (const MethodInfo_379F0C4 *)Method_AssetData_GetObject_GameObject____91482112);
  if ( !v19 )
    goto LABEL_15;
  v19->fields._CraftRewardDialog_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v19->fields._CraftRewardDialog_k__BackingField,
    (int32_t)this,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  v26 = v4->fields.__4__this;
  this = (EventCraftAssetManager___c__DisplayClass25_0_o *)AssetData__GetObject_object__58323140(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_6456/*"EventCraftUseSupportToolDialog"*/,
                                                             (const MethodInfo_379F0C4 *)Method_AssetData_GetObject_GameObject____91482112);
  if ( !v26 )
    goto LABEL_15;
  v26->fields._CraftUseSupportToolDialog_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v26->fields._CraftUseSupportToolDialog_k__BackingField,
    (int32_t)this,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  v33 = v4->fields.__4__this;
  this = (EventCraftAssetManager___c__DisplayClass25_0_o *)AssetData__GetObject_object__58323140(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_6452/*"EventCraftFirstTimeSupportToolDialog"*/,
                                                             (const MethodInfo_379F0C4 *)Method_AssetData_GetObject_GameObject____91482112);
  if ( !v33
    || (v33->fields._CraftFirstTimeSupportToolDialog_k__BackingField = (struct UnityEngine_GameObject_o *)this,
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&v33->fields._CraftFirstTimeSupportToolDialog_k__BackingField,
          (int32_t)this,
          v34,
          v35,
          v36,
          v37,
          v38,
          v39),
        v40 = v4->fields.__4__this,
        this = (EventCraftAssetManager___c__DisplayClass25_0_o *)AssetData__GetObject_object__58323140(
                                                                   assetData,
                                                                   (System_String_o *)StringLiteral_17891/*"bit_craft_blink"*/,
                                                                   (const MethodInfo_379F0C4 *)Method_AssetData_GetObject_GameObject____91482112),
        !v40) )
  {
LABEL_15:
    sub_21FFECC(this, assetData);
  }
  v40->fields._CraftButtonBlinkEffect_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v40->fields._CraftButtonBlinkEffect_k__BackingField,
    (int32_t)this,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  _9__1 = v4->fields.__9__1;
  eventId = v4->fields.eventId;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v4,
      Method_EventCraftAssetManager___c__DisplayClass25_0__LoadAssets_b__1__,
      0);
    v4->fields.__9__1 = _9__1;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v4->fields.__9__1, (int32_t)_9__1, v51, v52, v53, v54, v55, v56);
  }
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v47, v48);
  AtlasManager__LoadEventUI_47538036(eventId, _9__1, 1, 0);
}


void EventCraftAssetManager___c__DisplayClass25_0___LoadAssets_b__1(
        EventCraftAssetManager___c__DisplayClass25_0_o *this,
        const MethodInfo *method)
{
  System_Action_o *finishCallback; // x0

  finishCallback = this->fields.finishCallback;
  if ( finishCallback )
    ActionExtensions__Call(finishCallback, 0);
}