void __fastcall EventCraftAssetManager___ctor(EventCraftAssetManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x0
  __int64 v7; // x1
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  struct System_String_array *v14; // x20
  int64_t v15; // x1
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7

  if ( (byte_4B19FAF & 1) == 0 )
  {
    sub_1BCA7E0(&string___TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_6348/*"EventUI/Prefabs/"*/, v4, v5);
    byte_4B19FAF = 1;
  }
  v6 = sub_1BCA888(string___TypeInfo, 1LL);
  if ( !v6 )
    sub_1BCAA3C(0LL, v7);
  v14 = (struct System_String_array *)v6;
  if ( !*(_DWORD *)(v6 + 24) )
    sub_1BCAA44(v6, v7);
  v15 = StringLiteral_6348/*"EventUI/Prefabs/"*/;
  *(_QWORD *)(v6 + 32) = StringLiteral_6348/*"EventUI/Prefabs/"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v6 + 32), v15, v8, v9, v10, v11, v12, v13);
  this->fields.loadAssetNames = v14;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.loadAssetNames, (int64_t)v14, v16, v17, v18, v19, v20, v21);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventCraftAssetManager__LoadAssets(
        EventCraftAssetManager_o *this,
        int32_t eventId,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x19
  __int64 v14; // x0
  __int64 v15; // x1
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  struct System_String_array *loadAssetNames; // x8
  System_String_o *v29; // x20
  System_String_o *v30; // x0
  System_String_o *v31; // x20
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  AssetLoader_LoadEndDataHandler_o *v35; // x21
  __int64 v36; // x1

  if ( (byte_4B19FAD & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, *(_QWORD *)&eventId, finishCallback);
    sub_1BCA7E0(&AssetLoader_LoadEndDataHandler_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_EventCraftAssetManager___c__DisplayClass25_0__LoadAssets_b__0__, v9, v10);
    sub_1BCA7E0(&EventCraftAssetManager___c__DisplayClass25_0_TypeInfo, v11, v12);
    byte_4B19FAD = 1;
  }
  v13 = sub_1BCAA2C(EventCraftAssetManager___c__DisplayClass25_0_TypeInfo, *(_QWORD *)&eventId, finishCallback, method);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13
    || (*(_QWORD *)(v13 + 16) = this,
        sub_1BCA784((PartyOrganizationUtility_o *)(v13 + 16), (int64_t)this, v16, v17, v18, v19, v20, v21),
        *(_DWORD *)(v13 + 24) = eventId,
        *(_QWORD *)(v13 + 32) = finishCallback,
        sub_1BCA784((PartyOrganizationUtility_o *)(v13 + 32), (int64_t)finishCallback, v22, v23, v24, v25, v26, v27),
        (loadAssetNames = this->fields.loadAssetNames) == 0LL) )
  {
    sub_1BCAA3C(v14, v15);
  }
  if ( !loadAssetNames->max_length )
    sub_1BCAA44(v14, v15);
  v29 = loadAssetNames->m_Items[0];
  v30 = System_Int32__ToString((int)v13 + 24, 0LL);
  v31 = System_String__Concat_62401220(v29, v30, 0LL);
  v35 = (AssetLoader_LoadEndDataHandler_o *)sub_1BCAA2C(AssetLoader_LoadEndDataHandler_TypeInfo, v32, v33, v34);
  AssetLoader_LoadEndDataHandler___ctor(
    v35,
    (Il2CppObject *)v13,
    Method_EventCraftAssetManager___c__DisplayClass25_0__LoadAssets_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v36);
  AssetManager__loadAssetStorage(v31, v35, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventCraftAssetManager__Release(
        EventCraftAssetManager_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7

  if ( (byte_4B19FAE & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, *(_QWORD *)&eventId, method);
    byte_4B19FAE = 1;
  }
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, *(_QWORD *)&eventId);
  AtlasManager__ReleaseEventUI_38574456(eventId, 0LL);
  this->fields._CraftItemNumConfirmDialog_k__BackingField = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, 0LL, v5, v6, v7, v8, v9, v10);
  this->fields._CraftItemWithdrawConfirmDialog_k__BackingField = 0LL;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._CraftItemWithdrawConfirmDialog_k__BackingField,
    0LL,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  this->fields._CraftRewardDialog_k__BackingField = 0LL;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._CraftRewardDialog_k__BackingField,
    0LL,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  this->fields._CraftButtonBlinkEffect_k__BackingField = 0LL;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._CraftButtonBlinkEffect_k__BackingField,
    0LL,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  this->fields._CraftUseSupportToolDialog_k__BackingField = 0LL;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._CraftUseSupportToolDialog_k__BackingField,
    0LL,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  this->fields._CraftFirstTimeSupportToolDialog_k__BackingField = 0LL;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._CraftFirstTimeSupportToolDialog_k__BackingField,
    0LL,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
}


UnityEngine_GameObject_o *__fastcall EventCraftAssetManager__get_CraftButtonBlinkEffect(
        EventCraftAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._CraftButtonBlinkEffect_k__BackingField;
}


UnityEngine_GameObject_o *__fastcall EventCraftAssetManager__get_CraftFirstTimeSupportToolDialog(
        EventCraftAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._CraftFirstTimeSupportToolDialog_k__BackingField;
}


UnityEngine_GameObject_o *__fastcall EventCraftAssetManager__get_CraftItemNumConfirmDialog(
        EventCraftAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._CraftItemNumConfirmDialog_k__BackingField;
}


UnityEngine_GameObject_o *__fastcall EventCraftAssetManager__get_CraftItemWithdrawConfirmDialog(
        EventCraftAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._CraftItemWithdrawConfirmDialog_k__BackingField;
}


UnityEngine_GameObject_o *__fastcall EventCraftAssetManager__get_CraftRewardDialog(
        EventCraftAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._CraftRewardDialog_k__BackingField;
}


UnityEngine_GameObject_o *__fastcall EventCraftAssetManager__get_CraftUseSupportToolDialog(
        EventCraftAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._CraftUseSupportToolDialog_k__BackingField;
}


void __fastcall EventCraftAssetManager__set_CraftButtonBlinkEffect(
        EventCraftAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._CraftButtonBlinkEffect_k__BackingField = value;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._CraftButtonBlinkEffect_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall EventCraftAssetManager__set_CraftFirstTimeSupportToolDialog(
        EventCraftAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._CraftFirstTimeSupportToolDialog_k__BackingField = value;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._CraftFirstTimeSupportToolDialog_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall EventCraftAssetManager__set_CraftItemNumConfirmDialog(
        EventCraftAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._CraftItemNumConfirmDialog_k__BackingField = value;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)value, (int64_t)method, v3, v4, v5, v6, v7);
}


void __fastcall EventCraftAssetManager__set_CraftItemWithdrawConfirmDialog(
        EventCraftAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._CraftItemWithdrawConfirmDialog_k__BackingField = value;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._CraftItemWithdrawConfirmDialog_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall EventCraftAssetManager__set_CraftRewardDialog(
        EventCraftAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._CraftRewardDialog_k__BackingField = value;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._CraftRewardDialog_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall EventCraftAssetManager__set_CraftUseSupportToolDialog(
        EventCraftAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._CraftUseSupportToolDialog_k__BackingField = value;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._CraftUseSupportToolDialog_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall EventCraftAssetManager___c__DisplayClass25_0___ctor(
        EventCraftAssetManager___c__DisplayClass25_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventCraftAssetManager___c__DisplayClass25_0___LoadAssets_b__0(
        EventCraftAssetManager___c__DisplayClass25_0_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  EventCraftAssetManager___c__DisplayClass25_0_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  struct EventCraftAssetManager_o *_4__this; // x21
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  struct EventCraftAssetManager_o *v30; // x21
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  struct EventCraftAssetManager_o *v37; // x21
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  struct EventCraftAssetManager_o *v44; // x21
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  struct EventCraftAssetManager_o *v51; // x21
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  struct EventCraftAssetManager_o *v58; // x21
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7
  __int64 v65; // x1
  __int64 v66; // x2
  __int64 v67; // x3
  System_Action_o *_9__1; // x21
  int32_t eventId; // w20
  int64_t v70; // x2
  int32_t v71; // w3
  System_String_o *v72; // x4
  BattleSetupInfo_o *v73; // x5
  FollowerInfo_o *v74; // x6
  PartyListViewItem_o *v75; // x7

  v4 = this;
  if ( (byte_4B19FB0 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, assetData, method);
    sub_1BCA7E0(&Method_AssetData_GetObject_GameObject____76836696, v5, v6);
    sub_1BCA7E0(&AtlasManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_EventCraftAssetManager___c__DisplayClass25_0__LoadAssets_b__1__, v9, v10);
    sub_1BCA7E0(&StringLiteral_17391/*"bit_craft_blink"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_6287/*"EventCraftItemNumConfirmDialog"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_6290/*"EventCraftUseSupportToolDialog"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_6289/*"EventCraftRewardDialog"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_6286/*"EventCraftFirstTimeSupportToolDialog"*/, v19, v20);
    this = (EventCraftAssetManager___c__DisplayClass25_0_o *)sub_1BCA7E0(&StringLiteral_6288/*"EventCraftItemWithdrawConfirmDialog"*/, v21, v22);
    byte_4B19FB0 = 1;
  }
  if ( !assetData )
    goto LABEL_15;
  _4__this = v4->fields.__4__this;
  this = (EventCraftAssetManager___c__DisplayClass25_0_o *)AssetData__GetObject_object__49237568(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_6287/*"EventCraftItemNumConfirmDialog"*/,
                                                             (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696);
  if ( !_4__this )
    goto LABEL_15;
  _4__this->fields._CraftItemNumConfirmDialog_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1BCA784((PartyOrganizationUtility_o *)&_4__this->fields, (int64_t)this, v24, v25, v26, v27, v28, v29);
  v30 = v4->fields.__4__this;
  this = (EventCraftAssetManager___c__DisplayClass25_0_o *)AssetData__GetObject_object__49237568(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_6288/*"EventCraftItemWithdrawConfirmDialog"*/,
                                                             (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696);
  if ( !v30 )
    goto LABEL_15;
  v30->fields._CraftItemWithdrawConfirmDialog_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v30->fields._CraftItemWithdrawConfirmDialog_k__BackingField,
    (int64_t)this,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  v37 = v4->fields.__4__this;
  this = (EventCraftAssetManager___c__DisplayClass25_0_o *)AssetData__GetObject_object__49237568(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_6289/*"EventCraftRewardDialog"*/,
                                                             (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696);
  if ( !v37 )
    goto LABEL_15;
  v37->fields._CraftRewardDialog_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v37->fields._CraftRewardDialog_k__BackingField,
    (int64_t)this,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
  v44 = v4->fields.__4__this;
  this = (EventCraftAssetManager___c__DisplayClass25_0_o *)AssetData__GetObject_object__49237568(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_6290/*"EventCraftUseSupportToolDialog"*/,
                                                             (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696);
  if ( !v44 )
    goto LABEL_15;
  v44->fields._CraftUseSupportToolDialog_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v44->fields._CraftUseSupportToolDialog_k__BackingField,
    (int64_t)this,
    v45,
    v46,
    v47,
    v48,
    v49,
    v50);
  v51 = v4->fields.__4__this;
  this = (EventCraftAssetManager___c__DisplayClass25_0_o *)AssetData__GetObject_object__49237568(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_6286/*"EventCraftFirstTimeSupportToolDialog"*/,
                                                             (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696);
  if ( !v51
    || (v51->fields._CraftFirstTimeSupportToolDialog_k__BackingField = (struct UnityEngine_GameObject_o *)this,
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&v51->fields._CraftFirstTimeSupportToolDialog_k__BackingField,
          (int64_t)this,
          v52,
          v53,
          v54,
          v55,
          v56,
          v57),
        v58 = v4->fields.__4__this,
        this = (EventCraftAssetManager___c__DisplayClass25_0_o *)AssetData__GetObject_object__49237568(
                                                                   assetData,
                                                                   (System_String_o *)StringLiteral_17391/*"bit_craft_blink"*/,
                                                                   (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696),
        !v58) )
  {
LABEL_15:
    sub_1BCAA3C(this, assetData);
  }
  v58->fields._CraftButtonBlinkEffect_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v58->fields._CraftButtonBlinkEffect_k__BackingField,
    (int64_t)this,
    v59,
    v60,
    v61,
    v62,
    v63,
    v64);
  _9__1 = v4->fields.__9__1;
  eventId = v4->fields.eventId;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v65, v66, v67);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v4,
      Method_EventCraftAssetManager___c__DisplayClass25_0__LoadAssets_b__1__,
      0LL);
    v4->fields.__9__1 = _9__1;
    sub_1BCA784((PartyOrganizationUtility_o *)&v4->fields.__9__1, (int64_t)_9__1, v70, v71, v72, v73, v74, v75);
  }
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v65);
  AtlasManager__LoadEventUI_38574292(eventId, _9__1, 1, 0LL);
}


void __fastcall EventCraftAssetManager___c__DisplayClass25_0___LoadAssets_b__1(
        EventCraftAssetManager___c__DisplayClass25_0_o *this,
        const MethodInfo *method)
{
  System_Action_o *finishCallback; // x0

  finishCallback = this->fields.finishCallback;
  if ( finishCallback )
    ActionExtensions__Call(finishCallback, 0LL);
}