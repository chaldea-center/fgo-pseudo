void __fastcall SubmarineMapAssetManager___ctor(SubmarineMapAssetManager_o *this, const MethodInfo *method)
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

  if ( (byte_4B12E26 & 1) == 0 )
  {
    sub_1BCA7E0(&string___TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_6281/*"Event/Submarine"*/, v4, v5);
    byte_4B12E26 = 1;
  }
  v6 = sub_1BCA888(string___TypeInfo, 1LL);
  if ( !v6 )
    sub_1BCAA3C(0LL, v7);
  v14 = (struct System_String_array *)v6;
  if ( !*(_DWORD *)(v6 + 24) )
    sub_1BCAA44(v6, v7);
  v15 = StringLiteral_6281/*"Event/Submarine"*/;
  *(_QWORD *)(v6 + 32) = StringLiteral_6281/*"Event/Submarine"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v6 + 32), v15, v8, v9, v10, v11, v12, v13);
  this->fields.loadAssetNames = v14;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.loadAssetNames, (int64_t)v14, v16, v17, v18, v19, v20, v21);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_IEnumerator_o *__fastcall SubmarineMapAssetManager__CoLoadAssets(
        SubmarineMapAssetManager_o *this,
        int32_t eventId,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v7; // x22
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7

  if ( (byte_4B12E22 & 1) == 0 )
  {
    sub_1BCA7E0(&SubmarineMapAssetManager__CoLoadAssets_d__69_TypeInfo, *(_QWORD *)&eventId, finishCallback);
    byte_4B12E22 = 1;
  }
  v7 = sub_1BCAA2C(SubmarineMapAssetManager__CoLoadAssets_d__69_TypeInfo, *(_QWORD *)&eventId, finishCallback, method);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 32) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v7 + 32), (int64_t)this, v8, v9, v10, v11, v12, v13);
  *(_DWORD *)(v7 + 40) = eventId;
  *(_QWORD *)(v7 + 48) = finishCallback;
  sub_1BCA784((PartyOrganizationUtility_o *)(v7 + 48), (int64_t)finishCallback, v14, v15, v16, v17, v18, v19);
  return (System_Collections_IEnumerator_o *)v7;
}


void __fastcall SubmarineMapAssetManager__Finish(SubmarineMapAssetManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  struct System_Collections_Generic_Dictionary_int__GameObject__o *scannerPrefabDict; // x0
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  int64_t v55; // x2
  int32_t v56; // w3
  System_String_o *v57; // x4
  BattleSetupInfo_o *v58; // x5
  FollowerInfo_o *v59; // x6
  PartyListViewItem_o *v60; // x7
  int64_t v61; // x2
  int32_t v62; // w3
  System_String_o *v63; // x4
  BattleSetupInfo_o *v64; // x5
  FollowerInfo_o *v65; // x6
  PartyListViewItem_o *v66; // x7
  int64_t v67; // x2
  int32_t v68; // w3
  System_String_o *v69; // x4
  BattleSetupInfo_o *v70; // x5
  FollowerInfo_o *v71; // x6
  PartyListViewItem_o *v72; // x7
  int64_t v73; // x2
  int32_t v74; // w3
  System_String_o *v75; // x4
  BattleSetupInfo_o *v76; // x5
  FollowerInfo_o *v77; // x6
  PartyListViewItem_o *v78; // x7
  int64_t v79; // x2
  int32_t v80; // w3
  System_String_o *v81; // x4
  BattleSetupInfo_o *v82; // x5
  FollowerInfo_o *v83; // x6
  PartyListViewItem_o *v84; // x7
  int64_t v85; // x2
  int32_t v86; // w3
  System_String_o *v87; // x4
  BattleSetupInfo_o *v88; // x5
  FollowerInfo_o *v89; // x6
  PartyListViewItem_o *v90; // x7
  int64_t v91; // x2
  int32_t v92; // w3
  System_String_o *v93; // x4
  BattleSetupInfo_o *v94; // x5
  FollowerInfo_o *v95; // x6
  PartyListViewItem_o *v96; // x7
  PartyOrganizationUtility_o *p_AnimationSkipEFfectPrefab_k__BackingField; // x19
  int64_t v98; // x2
  int32_t v99; // w3
  System_String_o *v100; // x4
  BattleSetupInfo_o *v101; // x5
  FollowerInfo_o *v102; // x6
  PartyListViewItem_o *v103; // x7
  __int64 v104; // x1
  System_String_array *normalFollowerInfo; // x19

  if ( (byte_4B12E25 & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__GameObject__Clear__, v4, v5);
    byte_4B12E25 = 1;
  }
  scannerPrefabDict = this->fields.scannerPrefabDict;
  if ( !scannerPrefabDict
    || (System_Collections_Generic_Dictionary_int__object___Clear(
          (System_Collections_Generic_Dictionary_int__object__o *)scannerPrefabDict,
          (const MethodInfo_320606C *)Method_System_Collections_Generic_Dictionary_int__GameObject__Clear__),
        (scannerPrefabDict = this->fields.scanRangeNotificatorPrefabDict) == 0LL) )
  {
    sub_1BCAA3C(scannerPrefabDict, method);
  }
  System_Collections_Generic_Dictionary_int__object___Clear(
    (System_Collections_Generic_Dictionary_int__object__o *)scannerPrefabDict,
    (const MethodInfo_320606C *)Method_System_Collections_Generic_Dictionary_int__GameObject__Clear__);
  this->fields._PanelPrefab_k__BackingField = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, 0LL, v7, v8, v9, v10, v11, v12);
  this->fields._GridLinePrefab_k__BackingField = 0LL;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._GridLinePrefab_k__BackingField,
    0LL,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  this->fields._PanelContainerPrefab_k__BackingField = 0LL;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._PanelContainerPrefab_k__BackingField,
    0LL,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  this->fields._EffectContainerPrefab_k__BackingField = 0LL;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._EffectContainerPrefab_k__BackingField,
    0LL,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  this->fields._ClosedPanelTexture_k__BackingField = 0LL;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._ClosedPanelTexture_k__BackingField,
    0LL,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  this->fields._GridTexture_k__BackingField = 0LL;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._GridTexture_k__BackingField,
    0LL,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  this->fields._EffectScannedPanelPrefab_k__BackingField = 0LL;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._EffectScannedPanelPrefab_k__BackingField,
    0LL,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48);
  this->fields._EffectSelectedPanelPrefab_k__BackingField = 0LL;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._EffectSelectedPanelPrefab_k__BackingField,
    0LL,
    v49,
    v50,
    v51,
    v52,
    v53,
    v54);
  this->fields._EffectScannablePanelPrafab_k__BackingField = 0LL;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._EffectScannablePanelPrafab_k__BackingField,
    0LL,
    v55,
    v56,
    v57,
    v58,
    v59,
    v60);
  this->fields._EffectScanObstaclePanelPrafab_k__BackingField = 0LL;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._EffectScanObstaclePanelPrafab_k__BackingField,
    0LL,
    v61,
    v62,
    v63,
    v64,
    v65,
    v66);
  this->fields._ScanProcessPreventedPrafab_k__BackingField = 0LL;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._ScanProcessPreventedPrafab_k__BackingField,
    0LL,
    v67,
    v68,
    v69,
    v70,
    v71,
    v72);
  this->fields._SelectScannerDialogPrefab_k__BackingField = 0LL;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._SelectScannerDialogPrefab_k__BackingField,
    0LL,
    v73,
    v74,
    v75,
    v76,
    v77,
    v78);
  this->fields._ScanConfirmDialogPrefab_k__BackingField = 0LL;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._ScanConfirmDialogPrefab_k__BackingField,
    0LL,
    v79,
    v80,
    v81,
    v82,
    v83,
    v84);
  this->fields._NewScannerDialogPrefab_k__BackingField = 0LL;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._NewScannerDialogPrefab_k__BackingField,
    0LL,
    v85,
    v86,
    v87,
    v88,
    v89,
    v90);
  this->fields._Settings_k__BackingField = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields._Settings_k__BackingField, 0LL, v91, v92, v93, v94, v95, v96);
  this->fields._AnimationSkipEFfectPrefab_k__BackingField = 0LL;
  p_AnimationSkipEFfectPrefab_k__BackingField = (PartyOrganizationUtility_o *)&this->fields._AnimationSkipEFfectPrefab_k__BackingField;
  sub_1BCA784(p_AnimationSkipEFfectPrefab_k__BackingField, 0LL, v98, v99, v100, v101, v102, v103);
  normalFollowerInfo = (System_String_array *)p_AnimationSkipEFfectPrefab_k__BackingField->fields._normalFollowerInfo;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v104);
  AssetManager__releaseAssetStorage_38514680(normalFollowerInfo, 0LL);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall SubmarineMapAssetManager__GetScanAnimObjectPrefab(
        SubmarineMapAssetManager_o *this,
        int32_t scanObjectId,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_int__GameObject__o *scannerPrefabDict; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B12E23 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_int__GameObject__TryGetValue__,
      *(_QWORD *)&scanObjectId,
      method);
    byte_4B12E23 = 1;
  }
  value = 0LL;
  scannerPrefabDict = this->fields.scannerPrefabDict;
  if ( !scannerPrefabDict )
    sub_1BCAA3C(0LL, *(_QWORD *)&scanObjectId);
  System_Collections_Generic_Dictionary_int__object___TryGetValue(
    (System_Collections_Generic_Dictionary_int__object__o *)scannerPrefabDict,
    scanObjectId,
    &value,
    (const MethodInfo_3207670 *)Method_System_Collections_Generic_Dictionary_int__GameObject__TryGetValue__);
  return (UnityEngine_GameObject_o *)value;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall SubmarineMapAssetManager__GetScanRangeNotificatorPrefab(
        SubmarineMapAssetManager_o *this,
        int32_t scanObjectId,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_int__GameObject__o *scanRangeNotificatorPrefabDict; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B12E24 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_int__GameObject__TryGetValue__,
      *(_QWORD *)&scanObjectId,
      method);
    byte_4B12E24 = 1;
  }
  value = 0LL;
  scanRangeNotificatorPrefabDict = this->fields.scanRangeNotificatorPrefabDict;
  if ( !scanRangeNotificatorPrefabDict )
    sub_1BCAA3C(0LL, *(_QWORD *)&scanObjectId);
  System_Collections_Generic_Dictionary_int__object___TryGetValue(
    (System_Collections_Generic_Dictionary_int__object__o *)scanRangeNotificatorPrefabDict,
    scanObjectId,
    &value,
    (const MethodInfo_3207670 *)Method_System_Collections_Generic_Dictionary_int__GameObject__TryGetValue__);
  return (UnityEngine_GameObject_o *)value;
}


void __fastcall SubmarineMapAssetManager__Initialize(SubmarineMapAssetManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  System_Collections_Generic_Dictionary_int__object__o *v7; // x20
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  System_Collections_Generic_Dictionary_int__object__o *v17; // x20
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7

  if ( (byte_4B12E20 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__GameObject___ctor__, method, v2);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_int__GameObject__TypeInfo, v5, v6);
    byte_4B12E20 = 1;
  }
  v7 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BCAA2C(
                                                                 System_Collections_Generic_Dictionary_int__GameObject__TypeInfo,
                                                                 method,
                                                                 v2,
                                                                 v3);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v7,
    (const MethodInfo_3205510 *)Method_System_Collections_Generic_Dictionary_int__GameObject___ctor__);
  this->fields.scannerPrefabDict = (struct System_Collections_Generic_Dictionary_int__GameObject__o *)v7;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.scannerPrefabDict, (int64_t)v7, v8, v9, v10, v11, v12, v13);
  v17 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BCAA2C(
                                                                  System_Collections_Generic_Dictionary_int__GameObject__TypeInfo,
                                                                  v14,
                                                                  v15,
                                                                  v16);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v17,
    (const MethodInfo_3205510 *)Method_System_Collections_Generic_Dictionary_int__GameObject___ctor__);
  this->fields.scanRangeNotificatorPrefabDict = (struct System_Collections_Generic_Dictionary_int__GameObject__o *)v17;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.scanRangeNotificatorPrefabDict,
    (int64_t)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SubmarineMapAssetManager__LoadMapObject(
        SubmarineMapAssetManager_o *this,
        AssetData_o *assetData,
        int32_t mapId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  Il2CppObject *v11; // x0
  System_String_o *v12; // x0
  __int64 v13; // x1
  Il2CppObject *Object_object__49237568; // x0
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  int32_t v21; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B12E21 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AssetData_GetObject_Texture2D____76836720, assetData, *(_QWORD *)&mapId);
    sub_1BCA7E0(&int_TypeInfo, v7, v8);
    sub_1BCA7E0(&StringLiteral_25209/*"{0:D6}_ClosedPanelTexture"*/, v9, v10);
    byte_4B12E21 = 1;
  }
  v21 = mapId;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v21);
  v12 = System_String__Format((System_String_o *)StringLiteral_25209/*"{0:D6}_ClosedPanelTexture"*/, v11, 0LL);
  if ( !assetData )
    sub_1BCAA3C(v12, v13);
  Object_object__49237568 = AssetData__GetObject_object__49237568(
                              assetData,
                              v12,
                              (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_Texture2D____76836720);
  this->fields._ClosedPanelTexture_k__BackingField = (struct UnityEngine_Texture2D_o *)Object_object__49237568;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._ClosedPanelTexture_k__BackingField,
    (int64_t)Object_object__49237568,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
}


UnityEngine_GameObject_o *__fastcall SubmarineMapAssetManager__get_AnimationSkipEFfectPrefab(
        SubmarineMapAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._AnimationSkipEFfectPrefab_k__BackingField;
}


UnityEngine_Texture2D_o *__fastcall SubmarineMapAssetManager__get_ClosedPanelTexture(
        SubmarineMapAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._ClosedPanelTexture_k__BackingField;
}


UnityEngine_GameObject_o *__fastcall SubmarineMapAssetManager__get_EffectContainerPrefab(
        SubmarineMapAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._EffectContainerPrefab_k__BackingField;
}


UnityEngine_GameObject_o *__fastcall SubmarineMapAssetManager__get_EffectScanObstaclePanelPrafab(
        SubmarineMapAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._EffectScanObstaclePanelPrafab_k__BackingField;
}


UnityEngine_GameObject_o *__fastcall SubmarineMapAssetManager__get_EffectScannablePanelPrafab(
        SubmarineMapAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._EffectScannablePanelPrafab_k__BackingField;
}


UnityEngine_GameObject_o *__fastcall SubmarineMapAssetManager__get_EffectScannedPanelPrefab(
        SubmarineMapAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._EffectScannedPanelPrefab_k__BackingField;
}


UnityEngine_GameObject_o *__fastcall SubmarineMapAssetManager__get_EffectSelectedPanelPrefab(
        SubmarineMapAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._EffectSelectedPanelPrefab_k__BackingField;
}


UnityEngine_GameObject_o *__fastcall SubmarineMapAssetManager__get_GridLinePrefab(
        SubmarineMapAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._GridLinePrefab_k__BackingField;
}


UnityEngine_Texture2D_o *__fastcall SubmarineMapAssetManager__get_GridTexture(
        SubmarineMapAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._GridTexture_k__BackingField;
}


UnityEngine_GameObject_o *__fastcall SubmarineMapAssetManager__get_NewScannerDialogPrefab(
        SubmarineMapAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._NewScannerDialogPrefab_k__BackingField;
}


UnityEngine_GameObject_o *__fastcall SubmarineMapAssetManager__get_PanelContainerPrefab(
        SubmarineMapAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._PanelContainerPrefab_k__BackingField;
}


UnityEngine_GameObject_o *__fastcall SubmarineMapAssetManager__get_PanelPrefab(
        SubmarineMapAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._PanelPrefab_k__BackingField;
}


UnityEngine_GameObject_o *__fastcall SubmarineMapAssetManager__get_ScanConfirmDialogPrefab(
        SubmarineMapAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._ScanConfirmDialogPrefab_k__BackingField;
}


UnityEngine_GameObject_o *__fastcall SubmarineMapAssetManager__get_ScanProcessPreventedPrafab(
        SubmarineMapAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._ScanProcessPreventedPrafab_k__BackingField;
}


UnityEngine_GameObject_o *__fastcall SubmarineMapAssetManager__get_SelectScannerDialogPrefab(
        SubmarineMapAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._SelectScannerDialogPrefab_k__BackingField;
}


SubmarineSettings_o *__fastcall SubmarineMapAssetManager__get_Settings(
        SubmarineMapAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._Settings_k__BackingField;
}


void __fastcall SubmarineMapAssetManager__set_AnimationSkipEFfectPrefab(
        SubmarineMapAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._AnimationSkipEFfectPrefab_k__BackingField = value;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._AnimationSkipEFfectPrefab_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall SubmarineMapAssetManager__set_ClosedPanelTexture(
        SubmarineMapAssetManager_o *this,
        UnityEngine_Texture2D_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._ClosedPanelTexture_k__BackingField = value;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._ClosedPanelTexture_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall SubmarineMapAssetManager__set_EffectContainerPrefab(
        SubmarineMapAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._EffectContainerPrefab_k__BackingField = value;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._EffectContainerPrefab_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall SubmarineMapAssetManager__set_EffectScanObstaclePanelPrafab(
        SubmarineMapAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._EffectScanObstaclePanelPrafab_k__BackingField = value;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._EffectScanObstaclePanelPrafab_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall SubmarineMapAssetManager__set_EffectScannablePanelPrafab(
        SubmarineMapAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._EffectScannablePanelPrafab_k__BackingField = value;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._EffectScannablePanelPrafab_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall SubmarineMapAssetManager__set_EffectScannedPanelPrefab(
        SubmarineMapAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._EffectScannedPanelPrefab_k__BackingField = value;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._EffectScannedPanelPrefab_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall SubmarineMapAssetManager__set_EffectSelectedPanelPrefab(
        SubmarineMapAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._EffectSelectedPanelPrefab_k__BackingField = value;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._EffectSelectedPanelPrefab_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall SubmarineMapAssetManager__set_GridLinePrefab(
        SubmarineMapAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._GridLinePrefab_k__BackingField = value;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._GridLinePrefab_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall SubmarineMapAssetManager__set_GridTexture(
        SubmarineMapAssetManager_o *this,
        UnityEngine_Texture2D_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._GridTexture_k__BackingField = value;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._GridTexture_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall SubmarineMapAssetManager__set_NewScannerDialogPrefab(
        SubmarineMapAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._NewScannerDialogPrefab_k__BackingField = value;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._NewScannerDialogPrefab_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall SubmarineMapAssetManager__set_PanelContainerPrefab(
        SubmarineMapAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._PanelContainerPrefab_k__BackingField = value;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._PanelContainerPrefab_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall SubmarineMapAssetManager__set_PanelPrefab(
        SubmarineMapAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._PanelPrefab_k__BackingField = value;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)value, (int64_t)method, v3, v4, v5, v6, v7);
}


void __fastcall SubmarineMapAssetManager__set_ScanConfirmDialogPrefab(
        SubmarineMapAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._ScanConfirmDialogPrefab_k__BackingField = value;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._ScanConfirmDialogPrefab_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall SubmarineMapAssetManager__set_ScanProcessPreventedPrafab(
        SubmarineMapAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._ScanProcessPreventedPrafab_k__BackingField = value;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._ScanProcessPreventedPrafab_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall SubmarineMapAssetManager__set_SelectScannerDialogPrefab(
        SubmarineMapAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._SelectScannerDialogPrefab_k__BackingField = value;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._SelectScannerDialogPrefab_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall SubmarineMapAssetManager__set_Settings(
        SubmarineMapAssetManager_o *this,
        SubmarineSettings_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._Settings_k__BackingField = value;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._Settings_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall SubmarineMapAssetManager__CoLoadAssets_d__69___ctor(
        SubmarineMapAssetManager__CoLoadAssets_d__69_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall SubmarineMapAssetManager__CoLoadAssets_d__69__MoveNext(
        SubmarineMapAssetManager__CoLoadAssets_d__69_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  SubmarineMapAssetManager__CoLoadAssets_d__69_o *v4; // x24
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
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x1
  __int64 v58; // x2
  __int64 v59; // x1
  __int64 v60; // x2
  __int64 v61; // x1
  __int64 v62; // x2
  __int64 v63; // x1
  __int64 v64; // x2
  __int64 v65; // x1
  __int64 v66; // x2
  __int64 v67; // x1
  __int64 v68; // x2
  __int64 v69; // x1
  __int64 v70; // x2
  __int64 v71; // x1
  __int64 v72; // x2
  __int64 v73; // x1
  __int64 v74; // x2
  __int64 v75; // x1
  __int64 v76; // x2
  int32_t _1__state; // w8
  struct SubmarineMapAssetManager_o *_4__this; // x26
  __int64 v79; // x20
  __int64 v80; // x2
  __int64 v81; // x3
  System_String_array *v82; // x22
  System_Action_o *v83; // x23
  __int64 v84; // x1
  bool v85; // w21
  __int64 v86; // x1
  __int64 v87; // x2
  __int64 v88; // x3
  System_Func_bool__o *v89; // x22
  __int64 v90; // x1
  __int64 v91; // x2
  __int64 v92; // x3
  UnityEngine_WaitUntil_o *v93; // x20
  PartyOrganizationUtility_o *p__2__current; // x24
  int64_t v95; // x2
  int32_t v96; // w3
  System_String_o *v97; // x4
  BattleSetupInfo_o *v98; // x5
  FollowerInfo_o *v99; // x6
  PartyListViewItem_o *v100; // x7
  System_String_array *loadAssetNames; // x20
  AssetData_o *v102; // x20
  Il2CppObject *Object_object__49237568; // x0
  int64_t v104; // x2
  int32_t v105; // w3
  System_String_o *v106; // x4
  BattleSetupInfo_o *v107; // x5
  FollowerInfo_o *v108; // x6
  PartyListViewItem_o *v109; // x7
  Il2CppObject *v110; // x0
  int64_t v111; // x2
  int32_t v112; // w3
  System_String_o *v113; // x4
  BattleSetupInfo_o *v114; // x5
  FollowerInfo_o *v115; // x6
  PartyListViewItem_o *v116; // x7
  Il2CppObject *v117; // x0
  int64_t v118; // x2
  int32_t v119; // w3
  System_String_o *v120; // x4
  BattleSetupInfo_o *v121; // x5
  FollowerInfo_o *v122; // x6
  PartyListViewItem_o *v123; // x7
  Il2CppObject *v124; // x0
  int64_t v125; // x2
  int32_t v126; // w3
  System_String_o *v127; // x4
  BattleSetupInfo_o *v128; // x5
  FollowerInfo_o *v129; // x6
  PartyListViewItem_o *v130; // x7
  Il2CppObject *v131; // x0
  int64_t v132; // x2
  int32_t v133; // w3
  System_String_o *v134; // x4
  BattleSetupInfo_o *v135; // x5
  FollowerInfo_o *v136; // x6
  PartyListViewItem_o *v137; // x7
  Il2CppObject *v138; // x0
  int64_t v139; // x2
  int32_t v140; // w3
  System_String_o *v141; // x4
  BattleSetupInfo_o *v142; // x5
  FollowerInfo_o *v143; // x6
  PartyListViewItem_o *v144; // x7
  Il2CppObject *v145; // x0
  int64_t v146; // x2
  int32_t v147; // w3
  System_String_o *v148; // x4
  BattleSetupInfo_o *v149; // x5
  FollowerInfo_o *v150; // x6
  PartyListViewItem_o *v151; // x7
  Il2CppObject *v152; // x0
  int64_t v153; // x2
  int32_t v154; // w3
  System_String_o *v155; // x4
  BattleSetupInfo_o *v156; // x5
  FollowerInfo_o *v157; // x6
  PartyListViewItem_o *v158; // x7
  Il2CppObject *v159; // x0
  int64_t v160; // x2
  int32_t v161; // w3
  System_String_o *v162; // x4
  BattleSetupInfo_o *v163; // x5
  FollowerInfo_o *v164; // x6
  PartyListViewItem_o *v165; // x7
  Il2CppObject *v166; // x0
  int64_t v167; // x2
  int32_t v168; // w3
  System_String_o *v169; // x4
  BattleSetupInfo_o *v170; // x5
  FollowerInfo_o *v171; // x6
  PartyListViewItem_o *v172; // x7
  int64_t v173; // x2
  int32_t v174; // w3
  System_String_o *v175; // x4
  BattleSetupInfo_o *v176; // x5
  FollowerInfo_o *v177; // x6
  PartyListViewItem_o *v178; // x7
  Il2CppObject *v179; // x0
  int64_t v180; // x2
  int32_t v181; // w3
  System_String_o *v182; // x4
  BattleSetupInfo_o *v183; // x5
  FollowerInfo_o *v184; // x6
  PartyListViewItem_o *v185; // x7
  Il2CppObject *v186; // x0
  int64_t v187; // x2
  int32_t v188; // w3
  System_String_o *v189; // x4
  BattleSetupInfo_o *v190; // x5
  FollowerInfo_o *v191; // x6
  PartyListViewItem_o *v192; // x7
  Il2CppObject *v193; // x0
  int64_t v194; // x2
  int32_t v195; // w3
  System_String_o *v196; // x4
  BattleSetupInfo_o *v197; // x5
  FollowerInfo_o *v198; // x6
  PartyListViewItem_o *v199; // x7
  Il2CppObject *v200; // x0
  int64_t v201; // x2
  int32_t v202; // w3
  System_String_o *v203; // x4
  BattleSetupInfo_o *v204; // x5
  FollowerInfo_o *v205; // x6
  PartyListViewItem_o *v206; // x7
  __int64 v207; // x1
  __int64 v208; // x2
  __int64 v209; // x3
  System_Collections_Generic_IEnumerable_TSource__o *ListByEventId; // x21
  SubmarineMapAssetManager___c_c *v211; // x8
  System_Func_object__int__o *_9__69_2; // x22
  Il2CppObject *v213; // x23
  struct SubmarineMapAssetManager___c_StaticFields *static_fields; // x0
  int64_t v215; // x2
  int32_t v216; // w3
  System_String_o *v217; // x4
  BattleSetupInfo_o *v218; // x5
  FollowerInfo_o *v219; // x6
  PartyListViewItem_o *v220; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v221; // x21
  __int64 v222; // x1
  __int64 v223; // x2
  __int64 v224; // x3
  System_Text_RegularExpressions_Regex_o *v225; // x22
  __int64 v226; // x2
  __int64 v227; // x3
  Il2CppObject *_2__current; // x8
  SubmarineMapAssetManager__CoLoadAssets_d__69_o *v229; // x23
  unsigned __int64 v230; // x29
  struct SubmarineMapAssetManager_o **v231; // x28
  System_String_o *v232; // x24
  SubmarineMapAssetManager__CoLoadAssets_d__69_o *v233; // x25
  System_String_o *v234; // x0
  int32_t v235; // w25
  __int64 v236; // x1
  Il2CppObject *v237; // x24
  System_Text_RegularExpressions_Regex_o *v238; // x22
  Il2CppObject *v239; // x8
  SubmarineMapAssetManager__CoLoadAssets_d__69_o *v240; // x23
  unsigned __int64 v241; // x28
  struct SubmarineMapAssetManager_o **p__4__this; // x29
  System_String_o *v243; // x24
  SubmarineMapAssetManager__CoLoadAssets_d__69_o *v244; // x25
  System_String_o *Value; // x0
  int32_t v246; // w25
  __int64 v247; // x1
  Il2CppObject *v248; // x24
  System_Action_o *finishCallback; // x0
  SubmarineMapAssetManager__CoLoadAssets_d__69_o *v251; // [xsp+8h] [xbp-68h]

  v4 = this;
  if ( (byte_4B12E28 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_AssetData_GetObject_GameObject____76836696, v5, v6);
    sub_1BCA7E0(&Method_AssetData_GetObject_SubmarineSettings___, v7, v8);
    sub_1BCA7E0(&Method_AssetData_GetObject_Texture2D____76836720, v9, v10);
    sub_1BCA7E0(&AssetManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventPanelScanMaster___, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__GameObject__set_Item__, v15, v16);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Contains_int___, v17, v18);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Select_EventPanelScanEntity__int___, v19, v20);
    sub_1BCA7E0(&System_Func_bool__TypeInfo, v21, v22);
    sub_1BCA7E0(&System_Func_EventPanelScanEntity__int__TypeInfo, v23, v24);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v25, v26);
    sub_1BCA7E0(&System_Text_RegularExpressions_Regex_TypeInfo, v27, v28);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v29, v30);
    sub_1BCA7E0(&Method_SubmarineMapAssetManager___c__CoLoadAssets_b__69_2__, v31, v32);
    sub_1BCA7E0(&Method_SubmarineMapAssetManager___c__DisplayClass69_0__CoLoadAssets_b__0__, v33, v34);
    sub_1BCA7E0(&Method_SubmarineMapAssetManager___c__DisplayClass69_0__CoLoadAssets_b__1__, v35, v36);
    sub_1BCA7E0(&SubmarineMapAssetManager___c__DisplayClass69_0_TypeInfo, v37, v38);
    sub_1BCA7E0(&SubmarineMapAssetManager___c_TypeInfo, v39, v40);
    sub_1BCA7E0(&UnityEngine_WaitUntil_TypeInfo, v41, v42);
    sub_1BCA7E0(&StringLiteral_5993/*"EffectScannedPanel"*/, v43, v44);
    sub_1BCA7E0(&StringLiteral_12665/*"Scanner_(?<ID>\\d+)"*/, v45, v46);
    sub_1BCA7E0(&StringLiteral_13220/*"SubmarineScanConfirmDialog"*/, v47, v48);
    sub_1BCA7E0(&StringLiteral_18993/*"ef_animation_skip"*/, v49, v50);
    sub_1BCA7E0(&StringLiteral_13218/*"SubmarinePanel"*/, v51, v52);
    sub_1BCA7E0(&StringLiteral_13222/*"SubmarineSelectScannerDialog"*/, v53, v54);
    sub_1BCA7E0(&StringLiteral_13211/*"SubmarineEffectScanObstaclePanel"*/, v55, v56);
    sub_1BCA7E0(&StringLiteral_13214/*"SubmarineGridLine"*/, v57, v58);
    sub_1BCA7E0(&StringLiteral_13219/*"SubmarinePanelContainer"*/, v59, v60);
    sub_1BCA7E0(&StringLiteral_13221/*"SubmarineScanRangeNotificator_(?<ID>\\d+)"*/, v61, v62);
    sub_1BCA7E0(&StringLiteral_13217/*"SubmarineNewScannerDialog"*/, v63, v64);
    sub_1BCA7E0(&StringLiteral_13215/*"SubmarineGridTexture"*/, v65, v66);
    sub_1BCA7E0(&StringLiteral_13213/*"SubmarineEffectSelectedPanel"*/, v67, v68);
    sub_1BCA7E0(&StringLiteral_13210/*"SubmarineEffectContainer"*/, v69, v70);
    sub_1BCA7E0(&StringLiteral_13212/*"SubmarineEffectScannablePanel"*/, v71, v72);
    sub_1BCA7E0(&StringLiteral_7461/*"ID"*/, v73, v74);
    this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)sub_1BCA7E0(&StringLiteral_13223/*"SubmarineSettings"*/, v75, v76);
    byte_4B12E28 = 1;
  }
  _1__state = v4->fields.__1__state;
  _4__this = v4->fields.__4__this;
  if ( _1__state == 1 )
  {
    v4->fields.__1__state = -1;
    if ( _4__this )
    {
      loadAssetNames = _4__this->fields.loadAssetNames;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, method);
      this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)AssetManager__getAssetStorage_38513712(
                                                                 loadAssetNames,
                                                                 0LL);
      if ( this )
      {
        if ( !LODWORD(this->fields.__2__current) )
          goto LABEL_61;
        v102 = (AssetData_o *)this->fields.__4__this;
        if ( v102 )
        {
          Object_object__49237568 = AssetData__GetObject_object__49237568(
                                      (AssetData_o *)this->fields.__4__this,
                                      (System_String_o *)StringLiteral_13218/*"SubmarinePanel"*/,
                                      (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696);
          _4__this->fields._PanelPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)Object_object__49237568;
          sub_1BCA784(
            (PartyOrganizationUtility_o *)&_4__this->fields,
            (int64_t)Object_object__49237568,
            v104,
            v105,
            v106,
            v107,
            v108,
            v109);
          v110 = AssetData__GetObject_object__49237568(
                   v102,
                   (System_String_o *)StringLiteral_13214/*"SubmarineGridLine"*/,
                   (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696);
          _4__this->fields._GridLinePrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v110;
          sub_1BCA784(
            (PartyOrganizationUtility_o *)&_4__this->fields._GridLinePrefab_k__BackingField,
            (int64_t)v110,
            v111,
            v112,
            v113,
            v114,
            v115,
            v116);
          v117 = AssetData__GetObject_object__49237568(
                   v102,
                   (System_String_o *)StringLiteral_13219/*"SubmarinePanelContainer"*/,
                   (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696);
          _4__this->fields._PanelContainerPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v117;
          sub_1BCA784(
            (PartyOrganizationUtility_o *)&_4__this->fields._PanelContainerPrefab_k__BackingField,
            (int64_t)v117,
            v118,
            v119,
            v120,
            v121,
            v122,
            v123);
          v124 = AssetData__GetObject_object__49237568(
                   v102,
                   (System_String_o *)StringLiteral_13210/*"SubmarineEffectContainer"*/,
                   (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696);
          _4__this->fields._EffectContainerPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v124;
          sub_1BCA784(
            (PartyOrganizationUtility_o *)&_4__this->fields._EffectContainerPrefab_k__BackingField,
            (int64_t)v124,
            v125,
            v126,
            v127,
            v128,
            v129,
            v130);
          v131 = AssetData__GetObject_object__49237568(
                   v102,
                   (System_String_o *)StringLiteral_5993/*"EffectScannedPanel"*/,
                   (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696);
          _4__this->fields._EffectScannedPanelPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v131;
          sub_1BCA784(
            (PartyOrganizationUtility_o *)&_4__this->fields._EffectScannedPanelPrefab_k__BackingField,
            (int64_t)v131,
            v132,
            v133,
            v134,
            v135,
            v136,
            v137);
          v138 = AssetData__GetObject_object__49237568(
                   v102,
                   (System_String_o *)StringLiteral_13213/*"SubmarineEffectSelectedPanel"*/,
                   (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696);
          _4__this->fields._EffectSelectedPanelPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v138;
          sub_1BCA784(
            (PartyOrganizationUtility_o *)&_4__this->fields._EffectSelectedPanelPrefab_k__BackingField,
            (int64_t)v138,
            v139,
            v140,
            v141,
            v142,
            v143,
            v144);
          v145 = AssetData__GetObject_object__49237568(
                   v102,
                   (System_String_o *)StringLiteral_13212/*"SubmarineEffectScannablePanel"*/,
                   (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696);
          _4__this->fields._EffectScannablePanelPrafab_k__BackingField = (struct UnityEngine_GameObject_o *)v145;
          sub_1BCA784(
            (PartyOrganizationUtility_o *)&_4__this->fields._EffectScannablePanelPrafab_k__BackingField,
            (int64_t)v145,
            v146,
            v147,
            v148,
            v149,
            v150,
            v151);
          v152 = AssetData__GetObject_object__49237568(
                   v102,
                   (System_String_o *)StringLiteral_13211/*"SubmarineEffectScanObstaclePanel"*/,
                   (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696);
          _4__this->fields._EffectScanObstaclePanelPrafab_k__BackingField = (struct UnityEngine_GameObject_o *)v152;
          sub_1BCA784(
            (PartyOrganizationUtility_o *)&_4__this->fields._EffectScanObstaclePanelPrafab_k__BackingField,
            (int64_t)v152,
            v153,
            v154,
            v155,
            v156,
            v157,
            v158);
          v159 = AssetData__GetObject_object__49237568(
                   v102,
                   (System_String_o *)StringLiteral_13215/*"SubmarineGridTexture"*/,
                   (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_Texture2D____76836720);
          _4__this->fields._GridTexture_k__BackingField = (struct UnityEngine_Texture2D_o *)v159;
          sub_1BCA784(
            (PartyOrganizationUtility_o *)&_4__this->fields._GridTexture_k__BackingField,
            (int64_t)v159,
            v160,
            v161,
            v162,
            v163,
            v164,
            v165);
          v166 = AssetData__GetObject_object__49237568(
                   v102,
                   (System_String_o *)StringLiteral_13223/*"SubmarineSettings"*/,
                   (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_SubmarineSettings___);
          _4__this->fields._Settings_k__BackingField = (struct SubmarineSettings_o *)v166;
          sub_1BCA784(
            (PartyOrganizationUtility_o *)&_4__this->fields._Settings_k__BackingField,
            (int64_t)v166,
            v167,
            v168,
            v169,
            v170,
            v171,
            v172);
          _4__this->fields._ScanProcessPreventedPrafab_k__BackingField = 0LL;
          sub_1BCA784(
            (PartyOrganizationUtility_o *)&_4__this->fields._ScanProcessPreventedPrafab_k__BackingField,
            0LL,
            v173,
            v174,
            v175,
            v176,
            v177,
            v178);
          v179 = AssetData__GetObject_object__49237568(
                   v102,
                   (System_String_o *)StringLiteral_18993/*"ef_animation_skip"*/,
                   (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696);
          _4__this->fields._AnimationSkipEFfectPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v179;
          sub_1BCA784(
            (PartyOrganizationUtility_o *)&_4__this->fields._AnimationSkipEFfectPrefab_k__BackingField,
            (int64_t)v179,
            v180,
            v181,
            v182,
            v183,
            v184,
            v185);
          v186 = AssetData__GetObject_object__49237568(
                   v102,
                   (System_String_o *)StringLiteral_13222/*"SubmarineSelectScannerDialog"*/,
                   (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696);
          _4__this->fields._SelectScannerDialogPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v186;
          sub_1BCA784(
            (PartyOrganizationUtility_o *)&_4__this->fields._SelectScannerDialogPrefab_k__BackingField,
            (int64_t)v186,
            v187,
            v188,
            v189,
            v190,
            v191,
            v192);
          v193 = AssetData__GetObject_object__49237568(
                   v102,
                   (System_String_o *)StringLiteral_13220/*"SubmarineScanConfirmDialog"*/,
                   (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696);
          _4__this->fields._ScanConfirmDialogPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v193;
          sub_1BCA784(
            (PartyOrganizationUtility_o *)&_4__this->fields._ScanConfirmDialogPrefab_k__BackingField,
            (int64_t)v193,
            v194,
            v195,
            v196,
            v197,
            v198,
            v199);
          v200 = AssetData__GetObject_object__49237568(
                   v102,
                   (System_String_o *)StringLiteral_13217/*"SubmarineNewScannerDialog"*/,
                   (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696);
          _4__this->fields._NewScannerDialogPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v200;
          sub_1BCA784(
            (PartyOrganizationUtility_o *)&_4__this->fields._NewScannerDialogPrefab_k__BackingField,
            (int64_t)v200,
            v201,
            v202,
            v203,
            v204,
            v205,
            v206);
          this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( this )
          {
            this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)DataManager__GetMasterData_object_(
                                                                       (DataManager_o *)this,
                                                                       (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventPanelScanMaster___);
            if ( this )
            {
              ListByEventId = (System_Collections_Generic_IEnumerable_TSource__o *)EventPanelScanMaster__GetListByEventId(
                                                                                     (EventPanelScanMaster_o *)this,
                                                                                     v4->fields.eventId,
                                                                                     0LL);
              v211 = SubmarineMapAssetManager___c_TypeInfo;
              if ( !SubmarineMapAssetManager___c_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(SubmarineMapAssetManager___c_TypeInfo, v207);
                v211 = SubmarineMapAssetManager___c_TypeInfo;
              }
              _9__69_2 = (System_Func_object__int__o *)v211->static_fields->__9__69_2;
              if ( !_9__69_2 )
              {
                if ( !v211->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(v211, v207);
                  v211 = SubmarineMapAssetManager___c_TypeInfo;
                }
                v213 = (Il2CppObject *)v211->static_fields->__9;
                _9__69_2 = (System_Func_object__int__o *)sub_1BCAA2C(
                                                           System_Func_EventPanelScanEntity__int__TypeInfo,
                                                           v207,
                                                           v208,
                                                           v209);
                System_Func_object__int____ctor(
                  _9__69_2,
                  v213,
                  Method_SubmarineMapAssetManager___c__CoLoadAssets_b__69_2__,
                  0LL);
                static_fields = SubmarineMapAssetManager___c_TypeInfo->static_fields;
                static_fields->__9__69_2 = (struct System_Func_EventPanelScanEntity__int__o *)_9__69_2;
                sub_1BCA784(
                  (PartyOrganizationUtility_o *)&static_fields->__9__69_2,
                  (int64_t)_9__69_2,
                  v215,
                  v216,
                  v217,
                  v218,
                  v219,
                  v220);
              }
              v221 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                            ListByEventId,
                                                                            (System_Func_TSource__TResult__o *)_9__69_2,
                                                                            (const MethodInfo_2F43194 *)Method_System_Linq_Enumerable_Select_EventPanelScanEntity__int___);
              v225 = (System_Text_RegularExpressions_Regex_o *)sub_1BCAA2C(
                                                                 System_Text_RegularExpressions_Regex_TypeInfo,
                                                                 v222,
                                                                 v223,
                                                                 v224);
              System_Text_RegularExpressions_Regex___ctor(v225, (System_String_o *)StringLiteral_12665/*"Scanner_(?<ID>\\d+)"*/, 0LL);
              this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)AssetData__GetObjectNameList(v102, 0LL);
              if ( this )
              {
                _2__current = this->fields.__2__current;
                v229 = this;
                v251 = v4;
                if ( (int)_2__current < 1 )
                {
LABEL_40:
                  v238 = (System_Text_RegularExpressions_Regex_o *)sub_1BCAA2C(
                                                                     System_Text_RegularExpressions_Regex_TypeInfo,
                                                                     method,
                                                                     v226,
                                                                     v227);
                  System_Text_RegularExpressions_Regex___ctor(v238, (System_String_o *)StringLiteral_13221/*"SubmarineScanRangeNotificator_(?<ID>\\d+)"*/, 0LL);
                  this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)AssetData__GetObjectNameList(v102, 0LL);
                  if ( !this )
                    goto LABEL_60;
                  v239 = this->fields.__2__current;
                  v240 = this;
                  if ( (int)v239 < 1 )
                  {
LABEL_56:
                    finishCallback = v251->fields.finishCallback;
                    if ( finishCallback )
                      ActionExtensions__Call(finishCallback, 0LL);
                    return 0;
                  }
                  v241 = 0LL;
                  p__4__this = &this->fields.__4__this;
                  while ( v241 < (unsigned int)v239 )
                  {
                    if ( !v238 )
                      goto LABEL_60;
                    v243 = (System_String_o *)p__4__this[v241];
                    this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)System_Text_RegularExpressions_Regex__Match_68957888(
                                                                               v238,
                                                                               v243,
                                                                               0LL);
                    if ( !this )
                      goto LABEL_60;
                    v244 = this;
                    this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)System_Text_RegularExpressions_Group__get_Success(
                                                                               (System_Text_RegularExpressions_Group_o *)this,
                                                                               0LL);
                    if ( ((unsigned __int8)this & 1) != 0 )
                    {
                      this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)((__int64 (__fastcall *)(SubmarineMapAssetManager__CoLoadAssets_d__69_o *, Il2CppMethodPointer))v244->klass->vtable._5_System_IDisposable_Dispose.method)(
                                                                                 v244,
                                                                                 v244->klass->vtable._6_MoveNext.methodPtr);
                      if ( !this )
                        goto LABEL_60;
                      this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)System_Text_RegularExpressions_GroupCollection__get_Item_68940932(
                                                                                 (System_Text_RegularExpressions_GroupCollection_o *)this,
                                                                                 (System_String_o *)StringLiteral_7461/*"ID"*/,
                                                                                 0LL);
                      if ( !this )
                        goto LABEL_60;
                      Value = System_Text_RegularExpressions_Capture__get_Value(
                                (System_Text_RegularExpressions_Capture_o *)this,
                                0LL);
                      v246 = System_Int32__Parse(Value, 0LL);
                      this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)System_Linq_Enumerable__Contains_int_(
                                                                                 v221,
                                                                                 v246,
                                                                                 (const MethodInfo_2F2AF7C *)Method_System_Linq_Enumerable_Contains_int___);
                      if ( ((unsigned __int8)this & 1) != 0 )
                      {
                        v248 = AssetData__GetObject_object__49237568(
                                 v102,
                                 v243,
                                 (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696);
                        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v247);
                        this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)UnityEngine_Object__op_Equality(
                                                                                   (UnityEngine_Object_o *)v248,
                                                                                   0LL,
                                                                                   0LL);
                        if ( ((unsigned __int8)this & 1) == 0 )
                        {
                          this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)_4__this->fields.scanRangeNotificatorPrefabDict;
                          if ( !this )
                            goto LABEL_60;
                          System_Collections_Generic_Dictionary_int__object___set_Item(
                            (System_Collections_Generic_Dictionary_int__object__o *)this,
                            v246,
                            v248,
                            (const MethodInfo_3205ED0 *)Method_System_Collections_Generic_Dictionary_int__GameObject__set_Item__);
                        }
                      }
                    }
                    LODWORD(v239) = v240->fields.__2__current;
                    if ( (__int64)++v241 >= (int)v239 )
                      goto LABEL_56;
                  }
                }
                else
                {
                  v230 = 0LL;
                  v231 = &this->fields.__4__this;
                  while ( v230 < (unsigned int)_2__current )
                  {
                    if ( !v225 )
                      goto LABEL_60;
                    v232 = (System_String_o *)v231[v230];
                    this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)System_Text_RegularExpressions_Regex__Match_68957888(
                                                                               v225,
                                                                               v232,
                                                                               0LL);
                    if ( !this )
                      goto LABEL_60;
                    v233 = this;
                    this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)System_Text_RegularExpressions_Group__get_Success(
                                                                               (System_Text_RegularExpressions_Group_o *)this,
                                                                               0LL);
                    if ( ((unsigned __int8)this & 1) != 0 )
                    {
                      this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)((__int64 (__fastcall *)(SubmarineMapAssetManager__CoLoadAssets_d__69_o *, Il2CppMethodPointer))v233->klass->vtable._5_System_IDisposable_Dispose.method)(
                                                                                 v233,
                                                                                 v233->klass->vtable._6_MoveNext.methodPtr);
                      if ( !this )
                        goto LABEL_60;
                      this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)System_Text_RegularExpressions_GroupCollection__get_Item_68940932(
                                                                                 (System_Text_RegularExpressions_GroupCollection_o *)this,
                                                                                 (System_String_o *)StringLiteral_7461/*"ID"*/,
                                                                                 0LL);
                      if ( !this )
                        goto LABEL_60;
                      v234 = System_Text_RegularExpressions_Capture__get_Value(
                               (System_Text_RegularExpressions_Capture_o *)this,
                               0LL);
                      v235 = System_Int32__Parse(v234, 0LL);
                      this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)System_Linq_Enumerable__Contains_int_(
                                                                                 v221,
                                                                                 v235,
                                                                                 (const MethodInfo_2F2AF7C *)Method_System_Linq_Enumerable_Contains_int___);
                      if ( ((unsigned __int8)this & 1) != 0 )
                      {
                        v237 = AssetData__GetObject_object__49237568(
                                 v102,
                                 v232,
                                 (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696);
                        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v236);
                        this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)UnityEngine_Object__op_Equality(
                                                                                   (UnityEngine_Object_o *)v237,
                                                                                   0LL,
                                                                                   0LL);
                        if ( ((unsigned __int8)this & 1) == 0 )
                        {
                          this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)_4__this->fields.scannerPrefabDict;
                          if ( !this )
                            goto LABEL_60;
                          System_Collections_Generic_Dictionary_int__object___set_Item(
                            (System_Collections_Generic_Dictionary_int__object__o *)this,
                            v235,
                            v237,
                            (const MethodInfo_3205ED0 *)Method_System_Collections_Generic_Dictionary_int__GameObject__set_Item__);
                        }
                      }
                    }
                    LODWORD(_2__current) = v229->fields.__2__current;
                    if ( (__int64)++v230 >= (int)_2__current )
                      goto LABEL_40;
                  }
                }
LABEL_61:
                sub_1BCAA44(this, method);
              }
            }
          }
        }
      }
    }
LABEL_60:
    sub_1BCAA3C(this, method);
  }
  if ( _1__state )
    return 0;
  v4->fields.__1__state = -1;
  v79 = sub_1BCAA2C(SubmarineMapAssetManager___c__DisplayClass69_0_TypeInfo, method, v2, v3);
  System_Object___ctor((Il2CppObject *)v79, 0LL);
  if ( !v79 )
    goto LABEL_60;
  *(_BYTE *)(v79 + 16) = 0;
  if ( !_4__this )
    goto LABEL_60;
  v82 = _4__this->fields.loadAssetNames;
  v83 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v80, v81);
  System_Action___ctor(
    v83,
    (Il2CppObject *)v79,
    Method_SubmarineMapAssetManager___c__DisplayClass69_0__CoLoadAssets_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v84);
  v85 = 1;
  AssetManager__loadAssetStorage_38512336(v82, v83, 1, 0LL);
  v89 = (System_Func_bool__o *)sub_1BCAA2C(System_Func_bool__TypeInfo, v86, v87, v88);
  System_Func_bool____ctor(
    v89,
    (Il2CppObject *)v79,
    Method_SubmarineMapAssetManager___c__DisplayClass69_0__CoLoadAssets_b__1__,
    0LL);
  v93 = (UnityEngine_WaitUntil_o *)sub_1BCAA2C(UnityEngine_WaitUntil_TypeInfo, v90, v91, v92);
  UnityEngine_WaitUntil___ctor(v93, v89, 0LL);
  v4->fields.__2__current = (Il2CppObject *)v93;
  p__2__current = (PartyOrganizationUtility_o *)&v4->fields.__2__current;
  sub_1BCA784(p__2__current, (int64_t)v93, v95, v96, v97, v98, v99, v100);
  *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
  return v85;
}


Il2CppObject *__fastcall SubmarineMapAssetManager__CoLoadAssets_d__69__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        SubmarineMapAssetManager__CoLoadAssets_d__69_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn SubmarineMapAssetManager__CoLoadAssets_d__69__System_Collections_IEnumerator_Reset(
        SubmarineMapAssetManager__CoLoadAssets_d__69_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(&Method_SubmarineMapAssetManager__CoLoadAssets_d__69_System_Collections_IEnumerator_Reset__, v7);
  sub_1BCA908(v6, v8);
}


Il2CppObject *__fastcall SubmarineMapAssetManager__CoLoadAssets_d__69__System_Collections_IEnumerator_get_Current(
        SubmarineMapAssetManager__CoLoadAssets_d__69_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall SubmarineMapAssetManager__CoLoadAssets_d__69__System_IDisposable_Dispose(
        SubmarineMapAssetManager__CoLoadAssets_d__69_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall SubmarineMapAssetManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B12E27 & 1) == 0 )
  {
    sub_1BCA7E0(&SubmarineMapAssetManager___c_TypeInfo, v1, v2);
    byte_4B12E27 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(SubmarineMapAssetManager___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  SubmarineMapAssetManager___c_TypeInfo->static_fields->__9 = (struct SubmarineMapAssetManager___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)SubmarineMapAssetManager___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall SubmarineMapAssetManager___c___ctor(SubmarineMapAssetManager___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall SubmarineMapAssetManager___c___CoLoadAssets_b__69_2(
        SubmarineMapAssetManager___c_o *this,
        EventPanelScanEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  return x->fields.objectId;
}


void __fastcall SubmarineMapAssetManager___c__DisplayClass69_0___ctor(
        SubmarineMapAssetManager___c__DisplayClass69_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SubmarineMapAssetManager___c__DisplayClass69_0___CoLoadAssets_b__0(
        SubmarineMapAssetManager___c__DisplayClass69_0_o *this,
        const MethodInfo *method)
{
  this->fields.loadEnd = 1;
}


bool __fastcall SubmarineMapAssetManager___c__DisplayClass69_0___CoLoadAssets_b__1(
        SubmarineMapAssetManager___c__DisplayClass69_0_o *this,
        const MethodInfo *method)
{
  return this->fields.loadEnd;
}