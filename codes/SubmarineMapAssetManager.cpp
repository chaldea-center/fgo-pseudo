void __fastcall SubmarineMapAssetManager___ctor(SubmarineMapAssetManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  struct System_String_array *v11; // x20
  int64_t v12; // x1
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7

  if ( (byte_4BD90F8 & 1) == 0 )
  {
    sub_1C21E38(&string___TypeInfo);
    sub_1C21E38(&StringLiteral_6329/*"Event/Submarine"*/);
    byte_4BD90F8 = 1;
  }
  v3 = sub_1C21EE0(string___TypeInfo, 1LL);
  if ( !v3 )
    sub_1C22094(0LL, v4);
  v11 = (struct System_String_array *)v3;
  if ( !*(_DWORD *)(v3 + 24) )
    sub_1C2209C(v3, v4);
  v12 = StringLiteral_6329/*"Event/Submarine"*/;
  *(_QWORD *)(v3 + 32) = StringLiteral_6329/*"Event/Submarine"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v3 + 32), v12, v5, v6, v7, v8, v9, v10);
  this->fields.loadAssetNames = v11;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.loadAssetNames, (int64_t)v11, v13, v14, v15, v16, v17, v18);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


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

  if ( (byte_4BD90F4 & 1) == 0 )
  {
    sub_1C21E38(&SubmarineMapAssetManager__CoLoadAssets_d__69_TypeInfo);
    byte_4BD90F4 = 1;
  }
  v7 = sub_1C22084(SubmarineMapAssetManager__CoLoadAssets_d__69_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 32) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v7 + 32), (int64_t)this, v8, v9, v10, v11, v12, v13);
  *(_DWORD *)(v7 + 40) = eventId;
  *(_QWORD *)(v7 + 48) = finishCallback;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v7 + 48), (int64_t)finishCallback, v14, v15, v16, v17, v18, v19);
  return (System_Collections_IEnumerator_o *)v7;
}


void __fastcall SubmarineMapAssetManager__Finish(SubmarineMapAssetManager_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_int__GameObject__o *scannerPrefabDict; // x0
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
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
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  int64_t v58; // x2
  int32_t v59; // w3
  System_String_o *v60; // x4
  BattleSetupInfo_o *v61; // x5
  FollowerInfo_o *v62; // x6
  PartyListViewItem_o *v63; // x7
  int64_t v64; // x2
  int32_t v65; // w3
  System_String_o *v66; // x4
  BattleSetupInfo_o *v67; // x5
  FollowerInfo_o *v68; // x6
  PartyListViewItem_o *v69; // x7
  int64_t v70; // x2
  int32_t v71; // w3
  System_String_o *v72; // x4
  BattleSetupInfo_o *v73; // x5
  FollowerInfo_o *v74; // x6
  PartyListViewItem_o *v75; // x7
  int64_t v76; // x2
  int32_t v77; // w3
  System_String_o *v78; // x4
  BattleSetupInfo_o *v79; // x5
  FollowerInfo_o *v80; // x6
  PartyListViewItem_o *v81; // x7
  int64_t v82; // x2
  int32_t v83; // w3
  System_String_o *v84; // x4
  BattleSetupInfo_o *v85; // x5
  FollowerInfo_o *v86; // x6
  PartyListViewItem_o *v87; // x7
  int64_t v88; // x2
  int32_t v89; // w3
  System_String_o *v90; // x4
  BattleSetupInfo_o *v91; // x5
  FollowerInfo_o *v92; // x6
  PartyListViewItem_o *v93; // x7
  PartyOrganizationUtility_o *p_AnimationSkipEFfectPrefab_k__BackingField; // x19
  int64_t v95; // x2
  int32_t v96; // w3
  System_String_o *v97; // x4
  BattleSetupInfo_o *v98; // x5
  FollowerInfo_o *v99; // x6
  PartyListViewItem_o *v100; // x7
  System_String_array *normalFollowerInfo; // x19

  if ( (byte_4BD90F7 & 1) == 0 )
  {
    sub_1C21E38(&AssetManager_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__GameObject__Clear__);
    byte_4BD90F7 = 1;
  }
  scannerPrefabDict = this->fields.scannerPrefabDict;
  if ( !scannerPrefabDict
    || (System_Collections_Generic_Dictionary_int__object___Clear(
          (System_Collections_Generic_Dictionary_int__object__o *)scannerPrefabDict,
          (const MethodInfo_32B5BD4 *)Method_System_Collections_Generic_Dictionary_int__GameObject__Clear__),
        (scannerPrefabDict = this->fields.scanRangeNotificatorPrefabDict) == 0LL) )
  {
    sub_1C22094(scannerPrefabDict, method);
  }
  System_Collections_Generic_Dictionary_int__object___Clear(
    (System_Collections_Generic_Dictionary_int__object__o *)scannerPrefabDict,
    (const MethodInfo_32B5BD4 *)Method_System_Collections_Generic_Dictionary_int__GameObject__Clear__);
  this->fields._PanelPrefab_k__BackingField = 0LL;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields, 0LL, v4, v5, v6, v7, v8, v9);
  this->fields._GridLinePrefab_k__BackingField = 0LL;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields._GridLinePrefab_k__BackingField,
    0LL,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  this->fields._PanelContainerPrefab_k__BackingField = 0LL;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields._PanelContainerPrefab_k__BackingField,
    0LL,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  this->fields._EffectContainerPrefab_k__BackingField = 0LL;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields._EffectContainerPrefab_k__BackingField,
    0LL,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  this->fields._ClosedPanelTexture_k__BackingField = 0LL;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields._ClosedPanelTexture_k__BackingField,
    0LL,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  this->fields._GridTexture_k__BackingField = 0LL;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields._GridTexture_k__BackingField,
    0LL,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  this->fields._EffectScannedPanelPrefab_k__BackingField = 0LL;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields._EffectScannedPanelPrefab_k__BackingField,
    0LL,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
  this->fields._EffectSelectedPanelPrefab_k__BackingField = 0LL;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields._EffectSelectedPanelPrefab_k__BackingField,
    0LL,
    v46,
    v47,
    v48,
    v49,
    v50,
    v51);
  this->fields._EffectScannablePanelPrafab_k__BackingField = 0LL;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields._EffectScannablePanelPrafab_k__BackingField,
    0LL,
    v52,
    v53,
    v54,
    v55,
    v56,
    v57);
  this->fields._EffectScanObstaclePanelPrafab_k__BackingField = 0LL;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields._EffectScanObstaclePanelPrafab_k__BackingField,
    0LL,
    v58,
    v59,
    v60,
    v61,
    v62,
    v63);
  this->fields._ScanProcessPreventedPrafab_k__BackingField = 0LL;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields._ScanProcessPreventedPrafab_k__BackingField,
    0LL,
    v64,
    v65,
    v66,
    v67,
    v68,
    v69);
  this->fields._SelectScannerDialogPrefab_k__BackingField = 0LL;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields._SelectScannerDialogPrefab_k__BackingField,
    0LL,
    v70,
    v71,
    v72,
    v73,
    v74,
    v75);
  this->fields._ScanConfirmDialogPrefab_k__BackingField = 0LL;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields._ScanConfirmDialogPrefab_k__BackingField,
    0LL,
    v76,
    v77,
    v78,
    v79,
    v80,
    v81);
  this->fields._NewScannerDialogPrefab_k__BackingField = 0LL;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields._NewScannerDialogPrefab_k__BackingField,
    0LL,
    v82,
    v83,
    v84,
    v85,
    v86,
    v87);
  this->fields._Settings_k__BackingField = 0LL;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields._Settings_k__BackingField, 0LL, v88, v89, v90, v91, v92, v93);
  this->fields._AnimationSkipEFfectPrefab_k__BackingField = 0LL;
  p_AnimationSkipEFfectPrefab_k__BackingField = (PartyOrganizationUtility_o *)&this->fields._AnimationSkipEFfectPrefab_k__BackingField;
  sub_1C21DDC(p_AnimationSkipEFfectPrefab_k__BackingField, 0LL, v95, v96, v97, v98, v99, v100);
  normalFollowerInfo = (System_String_array *)p_AnimationSkipEFfectPrefab_k__BackingField->fields._normalFollowerInfo;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAssetStorage_39043848(normalFollowerInfo, 0LL);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall SubmarineMapAssetManager__GetScanAnimObjectPrefab(
        SubmarineMapAssetManager_o *this,
        int32_t scanObjectId,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_int__GameObject__o *scannerPrefabDict; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4BD90F5 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__GameObject__TryGetValue__);
    byte_4BD90F5 = 1;
  }
  value = 0LL;
  scannerPrefabDict = this->fields.scannerPrefabDict;
  if ( !scannerPrefabDict )
    sub_1C22094(0LL, *(_QWORD *)&scanObjectId);
  System_Collections_Generic_Dictionary_int__object___TryGetValue(
    (System_Collections_Generic_Dictionary_int__object__o *)scannerPrefabDict,
    scanObjectId,
    &value,
    (const MethodInfo_32B71D8 *)Method_System_Collections_Generic_Dictionary_int__GameObject__TryGetValue__);
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

  if ( (byte_4BD90F6 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__GameObject__TryGetValue__);
    byte_4BD90F6 = 1;
  }
  value = 0LL;
  scanRangeNotificatorPrefabDict = this->fields.scanRangeNotificatorPrefabDict;
  if ( !scanRangeNotificatorPrefabDict )
    sub_1C22094(0LL, *(_QWORD *)&scanObjectId);
  System_Collections_Generic_Dictionary_int__object___TryGetValue(
    (System_Collections_Generic_Dictionary_int__object__o *)scanRangeNotificatorPrefabDict,
    scanObjectId,
    &value,
    (const MethodInfo_32B71D8 *)Method_System_Collections_Generic_Dictionary_int__GameObject__TryGetValue__);
  return (UnityEngine_GameObject_o *)value;
}


void __fastcall SubmarineMapAssetManager__Initialize(SubmarineMapAssetManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *v3; // x20
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7
  System_Collections_Generic_Dictionary_int__object__o *v10; // x20
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7

  if ( (byte_4BD90F2 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__GameObject___ctor__);
    sub_1C21E38(&System_Collections_Generic_Dictionary_int__GameObject__TypeInfo);
    byte_4BD90F2 = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C22084(System_Collections_Generic_Dictionary_int__GameObject__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v3,
    (const MethodInfo_32B5078 *)Method_System_Collections_Generic_Dictionary_int__GameObject___ctor__);
  this->fields.scannerPrefabDict = (struct System_Collections_Generic_Dictionary_int__GameObject__o *)v3;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.scannerPrefabDict, (int64_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C22084(System_Collections_Generic_Dictionary_int__GameObject__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v10,
    (const MethodInfo_32B5078 *)Method_System_Collections_Generic_Dictionary_int__GameObject___ctor__);
  this->fields.scanRangeNotificatorPrefabDict = (struct System_Collections_Generic_Dictionary_int__GameObject__o *)v10;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.scanRangeNotificatorPrefabDict,
    (int64_t)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SubmarineMapAssetManager__LoadMapObject(
        SubmarineMapAssetManager_o *this,
        AssetData_o *assetData,
        int32_t mapId,
        const MethodInfo *method)
{
  __int64 v4; // x4
  Il2CppObject *v8; // x0
  System_String_o *v9; // x0
  __int64 v10; // x1
  Il2CppObject *Object_object__49880776; // x0
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  int32_t v18; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4BD90F3 & 1) == 0 )
  {
    sub_1C21E38(&Method_AssetData_GetObject_Texture2D____77626312);
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&StringLiteral_25398/*"{0:D6}_ClosedPanelTexture"*/);
    byte_4BD90F3 = 1;
  }
  v18 = mapId;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v18, *(_QWORD *)&mapId, method, v4);
  v9 = System_String__Format((System_String_o *)StringLiteral_25398/*"{0:D6}_ClosedPanelTexture"*/, v8, 0LL);
  if ( !assetData )
    sub_1C22094(v9, v10);
  Object_object__49880776 = AssetData__GetObject_object__49880776(
                              assetData,
                              v9,
                              (const MethodInfo_2F91EC8 *)Method_AssetData_GetObject_Texture2D____77626312);
  this->fields._ClosedPanelTexture_k__BackingField = (struct UnityEngine_Texture2D_o *)Object_object__49880776;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields._ClosedPanelTexture_k__BackingField,
    (int64_t)Object_object__49880776,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
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
  sub_1C21DDC(
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
  sub_1C21DDC(
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
  sub_1C21DDC(
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
  sub_1C21DDC(
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
  sub_1C21DDC(
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
  sub_1C21DDC(
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
  sub_1C21DDC(
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
  sub_1C21DDC(
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
  sub_1C21DDC(
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
  sub_1C21DDC(
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
  sub_1C21DDC(
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
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields, (int64_t)value, (int64_t)method, v3, v4, v5, v6, v7);
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
  sub_1C21DDC(
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
  sub_1C21DDC(
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
  sub_1C21DDC(
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
  sub_1C21DDC(
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
  SubmarineMapAssetManager__CoLoadAssets_d__69_o *v2; // x24
  int32_t _1__state; // w8
  struct SubmarineMapAssetManager_o *_4__this; // x26
  __int64 v5; // x20
  System_String_array *v6; // x22
  System_Action_o *v7; // x23
  bool v8; // w21
  System_Func_bool__o *v9; // x22
  UnityEngine_WaitUntil_o *v10; // x20
  PartyOrganizationUtility_o *p__2__current; // x24
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  System_String_array *loadAssetNames; // x20
  AssetData_o *v19; // x20
  Il2CppObject *Object_object__49880776; // x0
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  Il2CppObject *v27; // x0
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  Il2CppObject *v34; // x0
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  Il2CppObject *v41; // x0
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  Il2CppObject *v48; // x0
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  Il2CppObject *v55; // x0
  int64_t v56; // x2
  int32_t v57; // w3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7
  Il2CppObject *v62; // x0
  int64_t v63; // x2
  int32_t v64; // w3
  System_String_o *v65; // x4
  BattleSetupInfo_o *v66; // x5
  FollowerInfo_o *v67; // x6
  PartyListViewItem_o *v68; // x7
  Il2CppObject *v69; // x0
  int64_t v70; // x2
  int32_t v71; // w3
  System_String_o *v72; // x4
  BattleSetupInfo_o *v73; // x5
  FollowerInfo_o *v74; // x6
  PartyListViewItem_o *v75; // x7
  Il2CppObject *v76; // x0
  int64_t v77; // x2
  int32_t v78; // w3
  System_String_o *v79; // x4
  BattleSetupInfo_o *v80; // x5
  FollowerInfo_o *v81; // x6
  PartyListViewItem_o *v82; // x7
  Il2CppObject *v83; // x0
  int64_t v84; // x2
  int32_t v85; // w3
  System_String_o *v86; // x4
  BattleSetupInfo_o *v87; // x5
  FollowerInfo_o *v88; // x6
  PartyListViewItem_o *v89; // x7
  int64_t v90; // x2
  int32_t v91; // w3
  System_String_o *v92; // x4
  BattleSetupInfo_o *v93; // x5
  FollowerInfo_o *v94; // x6
  PartyListViewItem_o *v95; // x7
  Il2CppObject *v96; // x0
  int64_t v97; // x2
  int32_t v98; // w3
  System_String_o *v99; // x4
  BattleSetupInfo_o *v100; // x5
  FollowerInfo_o *v101; // x6
  PartyListViewItem_o *v102; // x7
  Il2CppObject *v103; // x0
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
  System_Collections_Generic_IEnumerable_TSource__o *ListByEventId; // x21
  SubmarineMapAssetManager___c_c *v125; // x8
  System_Func_object__int__o *_9__69_2; // x22
  Il2CppObject *v127; // x23
  struct SubmarineMapAssetManager___c_StaticFields *static_fields; // x0
  int64_t v129; // x2
  int32_t v130; // w3
  System_String_o *v131; // x4
  BattleSetupInfo_o *v132; // x5
  FollowerInfo_o *v133; // x6
  PartyListViewItem_o *v134; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v135; // x21
  System_Text_RegularExpressions_Regex_o *v136; // x22
  Il2CppObject *_2__current; // x8
  SubmarineMapAssetManager__CoLoadAssets_d__69_o *v138; // x23
  unsigned __int64 v139; // x29
  struct SubmarineMapAssetManager_o **v140; // x28
  System_String_o *v141; // x24
  SubmarineMapAssetManager__CoLoadAssets_d__69_o *v142; // x25
  System_String_o *v143; // x0
  int32_t v144; // w25
  Il2CppObject *v145; // x24
  System_Text_RegularExpressions_Regex_o *v146; // x22
  Il2CppObject *v147; // x8
  SubmarineMapAssetManager__CoLoadAssets_d__69_o *v148; // x23
  unsigned __int64 v149; // x28
  struct SubmarineMapAssetManager_o **p__4__this; // x29
  System_String_o *v151; // x24
  SubmarineMapAssetManager__CoLoadAssets_d__69_o *v152; // x25
  System_String_o *Value; // x0
  int32_t v154; // w25
  Il2CppObject *v155; // x24
  System_Action_o *finishCallback; // x0
  SubmarineMapAssetManager__CoLoadAssets_d__69_o *v158; // [xsp+8h] [xbp-68h]

  v2 = this;
  if ( (byte_4BD90FA & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_AssetData_GetObject_GameObject____77626288);
    sub_1C21E38(&Method_AssetData_GetObject_SubmarineSettings___);
    sub_1C21E38(&Method_AssetData_GetObject_Texture2D____77626312);
    sub_1C21E38(&AssetManager_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_EventPanelScanMaster___);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__GameObject__set_Item__);
    sub_1C21E38(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C21E38(&Method_System_Linq_Enumerable_Select_EventPanelScanEntity__int___);
    sub_1C21E38(&System_Func_bool__TypeInfo);
    sub_1C21E38(&System_Func_EventPanelScanEntity__int__TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&System_Text_RegularExpressions_Regex_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&Method_SubmarineMapAssetManager___c__CoLoadAssets_b__69_2__);
    sub_1C21E38(&Method_SubmarineMapAssetManager___c__DisplayClass69_0__CoLoadAssets_b__0__);
    sub_1C21E38(&Method_SubmarineMapAssetManager___c__DisplayClass69_0__CoLoadAssets_b__1__);
    sub_1C21E38(&SubmarineMapAssetManager___c__DisplayClass69_0_TypeInfo);
    sub_1C21E38(&SubmarineMapAssetManager___c_TypeInfo);
    sub_1C21E38(&UnityEngine_WaitUntil_TypeInfo);
    sub_1C21E38(&StringLiteral_6037/*"EffectScannedPanel"*/);
    sub_1C21E38(&StringLiteral_12754/*"Scanner_(?<ID>\\d+)"*/);
    sub_1C21E38(&StringLiteral_13313/*"SubmarineScanConfirmDialog"*/);
    sub_1C21E38(&StringLiteral_19122/*"ef_animation_skip"*/);
    sub_1C21E38(&StringLiteral_13311/*"SubmarinePanel"*/);
    sub_1C21E38(&StringLiteral_13315/*"SubmarineSelectScannerDialog"*/);
    sub_1C21E38(&StringLiteral_13304/*"SubmarineEffectScanObstaclePanel"*/);
    sub_1C21E38(&StringLiteral_13307/*"SubmarineGridLine"*/);
    sub_1C21E38(&StringLiteral_13312/*"SubmarinePanelContainer"*/);
    sub_1C21E38(&StringLiteral_13314/*"SubmarineScanRangeNotificator_(?<ID>\\d+)"*/);
    sub_1C21E38(&StringLiteral_13310/*"SubmarineNewScannerDialog"*/);
    sub_1C21E38(&StringLiteral_13308/*"SubmarineGridTexture"*/);
    sub_1C21E38(&StringLiteral_13306/*"SubmarineEffectSelectedPanel"*/);
    sub_1C21E38(&StringLiteral_13303/*"SubmarineEffectContainer"*/);
    sub_1C21E38(&StringLiteral_13305/*"SubmarineEffectScannablePanel"*/);
    sub_1C21E38(&StringLiteral_7513/*"ID"*/);
    this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)sub_1C21E38(&StringLiteral_13316/*"SubmarineSettings"*/);
    byte_4BD90FA = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 1 )
  {
    v2->fields.__1__state = -1;
    if ( _4__this )
    {
      loadAssetNames = _4__this->fields.loadAssetNames;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)AssetManager__getAssetStorage_39042880(
                                                                 loadAssetNames,
                                                                 0LL);
      if ( this )
      {
        if ( !LODWORD(this->fields.__2__current) )
          goto LABEL_61;
        v19 = (AssetData_o *)this->fields.__4__this;
        if ( v19 )
        {
          Object_object__49880776 = AssetData__GetObject_object__49880776(
                                      (AssetData_o *)this->fields.__4__this,
                                      (System_String_o *)StringLiteral_13311/*"SubmarinePanel"*/,
                                      (const MethodInfo_2F91EC8 *)Method_AssetData_GetObject_GameObject____77626288);
          _4__this->fields._PanelPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)Object_object__49880776;
          sub_1C21DDC(
            (PartyOrganizationUtility_o *)&_4__this->fields,
            (int64_t)Object_object__49880776,
            v21,
            v22,
            v23,
            v24,
            v25,
            v26);
          v27 = AssetData__GetObject_object__49880776(
                  v19,
                  (System_String_o *)StringLiteral_13307/*"SubmarineGridLine"*/,
                  (const MethodInfo_2F91EC8 *)Method_AssetData_GetObject_GameObject____77626288);
          _4__this->fields._GridLinePrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v27;
          sub_1C21DDC(
            (PartyOrganizationUtility_o *)&_4__this->fields._GridLinePrefab_k__BackingField,
            (int64_t)v27,
            v28,
            v29,
            v30,
            v31,
            v32,
            v33);
          v34 = AssetData__GetObject_object__49880776(
                  v19,
                  (System_String_o *)StringLiteral_13312/*"SubmarinePanelContainer"*/,
                  (const MethodInfo_2F91EC8 *)Method_AssetData_GetObject_GameObject____77626288);
          _4__this->fields._PanelContainerPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v34;
          sub_1C21DDC(
            (PartyOrganizationUtility_o *)&_4__this->fields._PanelContainerPrefab_k__BackingField,
            (int64_t)v34,
            v35,
            v36,
            v37,
            v38,
            v39,
            v40);
          v41 = AssetData__GetObject_object__49880776(
                  v19,
                  (System_String_o *)StringLiteral_13303/*"SubmarineEffectContainer"*/,
                  (const MethodInfo_2F91EC8 *)Method_AssetData_GetObject_GameObject____77626288);
          _4__this->fields._EffectContainerPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v41;
          sub_1C21DDC(
            (PartyOrganizationUtility_o *)&_4__this->fields._EffectContainerPrefab_k__BackingField,
            (int64_t)v41,
            v42,
            v43,
            v44,
            v45,
            v46,
            v47);
          v48 = AssetData__GetObject_object__49880776(
                  v19,
                  (System_String_o *)StringLiteral_6037/*"EffectScannedPanel"*/,
                  (const MethodInfo_2F91EC8 *)Method_AssetData_GetObject_GameObject____77626288);
          _4__this->fields._EffectScannedPanelPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v48;
          sub_1C21DDC(
            (PartyOrganizationUtility_o *)&_4__this->fields._EffectScannedPanelPrefab_k__BackingField,
            (int64_t)v48,
            v49,
            v50,
            v51,
            v52,
            v53,
            v54);
          v55 = AssetData__GetObject_object__49880776(
                  v19,
                  (System_String_o *)StringLiteral_13306/*"SubmarineEffectSelectedPanel"*/,
                  (const MethodInfo_2F91EC8 *)Method_AssetData_GetObject_GameObject____77626288);
          _4__this->fields._EffectSelectedPanelPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v55;
          sub_1C21DDC(
            (PartyOrganizationUtility_o *)&_4__this->fields._EffectSelectedPanelPrefab_k__BackingField,
            (int64_t)v55,
            v56,
            v57,
            v58,
            v59,
            v60,
            v61);
          v62 = AssetData__GetObject_object__49880776(
                  v19,
                  (System_String_o *)StringLiteral_13305/*"SubmarineEffectScannablePanel"*/,
                  (const MethodInfo_2F91EC8 *)Method_AssetData_GetObject_GameObject____77626288);
          _4__this->fields._EffectScannablePanelPrafab_k__BackingField = (struct UnityEngine_GameObject_o *)v62;
          sub_1C21DDC(
            (PartyOrganizationUtility_o *)&_4__this->fields._EffectScannablePanelPrafab_k__BackingField,
            (int64_t)v62,
            v63,
            v64,
            v65,
            v66,
            v67,
            v68);
          v69 = AssetData__GetObject_object__49880776(
                  v19,
                  (System_String_o *)StringLiteral_13304/*"SubmarineEffectScanObstaclePanel"*/,
                  (const MethodInfo_2F91EC8 *)Method_AssetData_GetObject_GameObject____77626288);
          _4__this->fields._EffectScanObstaclePanelPrafab_k__BackingField = (struct UnityEngine_GameObject_o *)v69;
          sub_1C21DDC(
            (PartyOrganizationUtility_o *)&_4__this->fields._EffectScanObstaclePanelPrafab_k__BackingField,
            (int64_t)v69,
            v70,
            v71,
            v72,
            v73,
            v74,
            v75);
          v76 = AssetData__GetObject_object__49880776(
                  v19,
                  (System_String_o *)StringLiteral_13308/*"SubmarineGridTexture"*/,
                  (const MethodInfo_2F91EC8 *)Method_AssetData_GetObject_Texture2D____77626312);
          _4__this->fields._GridTexture_k__BackingField = (struct UnityEngine_Texture2D_o *)v76;
          sub_1C21DDC(
            (PartyOrganizationUtility_o *)&_4__this->fields._GridTexture_k__BackingField,
            (int64_t)v76,
            v77,
            v78,
            v79,
            v80,
            v81,
            v82);
          v83 = AssetData__GetObject_object__49880776(
                  v19,
                  (System_String_o *)StringLiteral_13316/*"SubmarineSettings"*/,
                  (const MethodInfo_2F91EC8 *)Method_AssetData_GetObject_SubmarineSettings___);
          _4__this->fields._Settings_k__BackingField = (struct SubmarineSettings_o *)v83;
          sub_1C21DDC(
            (PartyOrganizationUtility_o *)&_4__this->fields._Settings_k__BackingField,
            (int64_t)v83,
            v84,
            v85,
            v86,
            v87,
            v88,
            v89);
          _4__this->fields._ScanProcessPreventedPrafab_k__BackingField = 0LL;
          sub_1C21DDC(
            (PartyOrganizationUtility_o *)&_4__this->fields._ScanProcessPreventedPrafab_k__BackingField,
            0LL,
            v90,
            v91,
            v92,
            v93,
            v94,
            v95);
          v96 = AssetData__GetObject_object__49880776(
                  v19,
                  (System_String_o *)StringLiteral_19122/*"ef_animation_skip"*/,
                  (const MethodInfo_2F91EC8 *)Method_AssetData_GetObject_GameObject____77626288);
          _4__this->fields._AnimationSkipEFfectPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v96;
          sub_1C21DDC(
            (PartyOrganizationUtility_o *)&_4__this->fields._AnimationSkipEFfectPrefab_k__BackingField,
            (int64_t)v96,
            v97,
            v98,
            v99,
            v100,
            v101,
            v102);
          v103 = AssetData__GetObject_object__49880776(
                   v19,
                   (System_String_o *)StringLiteral_13315/*"SubmarineSelectScannerDialog"*/,
                   (const MethodInfo_2F91EC8 *)Method_AssetData_GetObject_GameObject____77626288);
          _4__this->fields._SelectScannerDialogPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v103;
          sub_1C21DDC(
            (PartyOrganizationUtility_o *)&_4__this->fields._SelectScannerDialogPrefab_k__BackingField,
            (int64_t)v103,
            v104,
            v105,
            v106,
            v107,
            v108,
            v109);
          v110 = AssetData__GetObject_object__49880776(
                   v19,
                   (System_String_o *)StringLiteral_13313/*"SubmarineScanConfirmDialog"*/,
                   (const MethodInfo_2F91EC8 *)Method_AssetData_GetObject_GameObject____77626288);
          _4__this->fields._ScanConfirmDialogPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v110;
          sub_1C21DDC(
            (PartyOrganizationUtility_o *)&_4__this->fields._ScanConfirmDialogPrefab_k__BackingField,
            (int64_t)v110,
            v111,
            v112,
            v113,
            v114,
            v115,
            v116);
          v117 = AssetData__GetObject_object__49880776(
                   v19,
                   (System_String_o *)StringLiteral_13310/*"SubmarineNewScannerDialog"*/,
                   (const MethodInfo_2F91EC8 *)Method_AssetData_GetObject_GameObject____77626288);
          _4__this->fields._NewScannerDialogPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v117;
          sub_1C21DDC(
            (PartyOrganizationUtility_o *)&_4__this->fields._NewScannerDialogPrefab_k__BackingField,
            (int64_t)v117,
            v118,
            v119,
            v120,
            v121,
            v122,
            v123);
          this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( this )
          {
            this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)DataManager__GetMasterData_object_(
                                                                       (DataManager_o *)this,
                                                                       (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_EventPanelScanMaster___);
            if ( this )
            {
              ListByEventId = (System_Collections_Generic_IEnumerable_TSource__o *)EventPanelScanMaster__GetListByEventId(
                                                                                     (EventPanelScanMaster_o *)this,
                                                                                     v2->fields.eventId,
                                                                                     0LL);
              v125 = SubmarineMapAssetManager___c_TypeInfo;
              if ( !SubmarineMapAssetManager___c_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(SubmarineMapAssetManager___c_TypeInfo);
                v125 = SubmarineMapAssetManager___c_TypeInfo;
              }
              _9__69_2 = (System_Func_object__int__o *)v125->static_fields->__9__69_2;
              if ( !_9__69_2 )
              {
                if ( !v125->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(v125);
                  v125 = SubmarineMapAssetManager___c_TypeInfo;
                }
                v127 = (Il2CppObject *)v125->static_fields->__9;
                _9__69_2 = (System_Func_object__int__o *)sub_1C22084(System_Func_EventPanelScanEntity__int__TypeInfo);
                System_Func_object__int____ctor(
                  _9__69_2,
                  v127,
                  Method_SubmarineMapAssetManager___c__CoLoadAssets_b__69_2__,
                  0LL);
                static_fields = SubmarineMapAssetManager___c_TypeInfo->static_fields;
                static_fields->__9__69_2 = (struct System_Func_EventPanelScanEntity__int__o *)_9__69_2;
                sub_1C21DDC(
                  (PartyOrganizationUtility_o *)&static_fields->__9__69_2,
                  (int64_t)_9__69_2,
                  v129,
                  v130,
                  v131,
                  v132,
                  v133,
                  v134);
              }
              v135 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                            ListByEventId,
                                                                            (System_Func_TSource__TResult__o *)_9__69_2,
                                                                            (const MethodInfo_2FE0CDC *)Method_System_Linq_Enumerable_Select_EventPanelScanEntity__int___);
              v136 = (System_Text_RegularExpressions_Regex_o *)sub_1C22084(System_Text_RegularExpressions_Regex_TypeInfo);
              System_Text_RegularExpressions_Regex___ctor(v136, (System_String_o *)StringLiteral_12754/*"Scanner_(?<ID>\\d+)"*/, 0LL);
              this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)AssetData__GetObjectNameList(v19, 0LL);
              if ( this )
              {
                _2__current = this->fields.__2__current;
                v138 = this;
                v158 = v2;
                if ( (int)_2__current < 1 )
                {
LABEL_40:
                  v146 = (System_Text_RegularExpressions_Regex_o *)sub_1C22084(System_Text_RegularExpressions_Regex_TypeInfo);
                  System_Text_RegularExpressions_Regex___ctor(v146, (System_String_o *)StringLiteral_13314/*"SubmarineScanRangeNotificator_(?<ID>\\d+)"*/, 0LL);
                  this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)AssetData__GetObjectNameList(v19, 0LL);
                  if ( !this )
                    goto LABEL_60;
                  v147 = this->fields.__2__current;
                  v148 = this;
                  if ( (int)v147 < 1 )
                  {
LABEL_56:
                    finishCallback = v158->fields.finishCallback;
                    if ( finishCallback )
                      ActionExtensions__Call(finishCallback, 0LL);
                    return 0;
                  }
                  v149 = 0LL;
                  p__4__this = &this->fields.__4__this;
                  while ( v149 < (unsigned int)v147 )
                  {
                    if ( !v146 )
                      goto LABEL_60;
                    v151 = (System_String_o *)p__4__this[v149];
                    this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)System_Text_RegularExpressions_Regex__Match_69672404(
                                                                               v146,
                                                                               v151,
                                                                               0LL);
                    if ( !this )
                      goto LABEL_60;
                    v152 = this;
                    this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)System_Text_RegularExpressions_Group__get_Success(
                                                                               (System_Text_RegularExpressions_Group_o *)this,
                                                                               0LL);
                    if ( ((unsigned __int8)this & 1) != 0 )
                    {
                      this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)((__int64 (__fastcall *)(SubmarineMapAssetManager__CoLoadAssets_d__69_o *, Il2CppMethodPointer))v152->klass->vtable._5_System_IDisposable_Dispose.method)(
                                                                                 v152,
                                                                                 v152->klass->vtable._6_MoveNext.methodPtr);
                      if ( !this )
                        goto LABEL_60;
                      this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)System_Text_RegularExpressions_GroupCollection__get_Item_69655448(
                                                                                 (System_Text_RegularExpressions_GroupCollection_o *)this,
                                                                                 (System_String_o *)StringLiteral_7513/*"ID"*/,
                                                                                 0LL);
                      if ( !this )
                        goto LABEL_60;
                      Value = System_Text_RegularExpressions_Capture__get_Value(
                                (System_Text_RegularExpressions_Capture_o *)this,
                                0LL);
                      v154 = System_Int32__Parse(Value, 0LL);
                      this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)System_Linq_Enumerable__Contains_int_(
                                                                                 v135,
                                                                                 v154,
                                                                                 (const MethodInfo_2FC7E00 *)Method_System_Linq_Enumerable_Contains_int___);
                      if ( ((unsigned __int8)this & 1) != 0 )
                      {
                        v155 = AssetData__GetObject_object__49880776(
                                 v19,
                                 v151,
                                 (const MethodInfo_2F91EC8 *)Method_AssetData_GetObject_GameObject____77626288);
                        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                        this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)UnityEngine_Object__op_Equality(
                                                                                   (UnityEngine_Object_o *)v155,
                                                                                   0LL,
                                                                                   0LL);
                        if ( ((unsigned __int8)this & 1) == 0 )
                        {
                          this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)_4__this->fields.scanRangeNotificatorPrefabDict;
                          if ( !this )
                            goto LABEL_60;
                          System_Collections_Generic_Dictionary_int__object___set_Item(
                            (System_Collections_Generic_Dictionary_int__object__o *)this,
                            v154,
                            v155,
                            (const MethodInfo_32B5A38 *)Method_System_Collections_Generic_Dictionary_int__GameObject__set_Item__);
                        }
                      }
                    }
                    LODWORD(v147) = v148->fields.__2__current;
                    if ( (__int64)++v149 >= (int)v147 )
                      goto LABEL_56;
                  }
                }
                else
                {
                  v139 = 0LL;
                  v140 = &this->fields.__4__this;
                  while ( v139 < (unsigned int)_2__current )
                  {
                    if ( !v136 )
                      goto LABEL_60;
                    v141 = (System_String_o *)v140[v139];
                    this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)System_Text_RegularExpressions_Regex__Match_69672404(
                                                                               v136,
                                                                               v141,
                                                                               0LL);
                    if ( !this )
                      goto LABEL_60;
                    v142 = this;
                    this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)System_Text_RegularExpressions_Group__get_Success(
                                                                               (System_Text_RegularExpressions_Group_o *)this,
                                                                               0LL);
                    if ( ((unsigned __int8)this & 1) != 0 )
                    {
                      this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)((__int64 (__fastcall *)(SubmarineMapAssetManager__CoLoadAssets_d__69_o *, Il2CppMethodPointer))v142->klass->vtable._5_System_IDisposable_Dispose.method)(
                                                                                 v142,
                                                                                 v142->klass->vtable._6_MoveNext.methodPtr);
                      if ( !this )
                        goto LABEL_60;
                      this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)System_Text_RegularExpressions_GroupCollection__get_Item_69655448(
                                                                                 (System_Text_RegularExpressions_GroupCollection_o *)this,
                                                                                 (System_String_o *)StringLiteral_7513/*"ID"*/,
                                                                                 0LL);
                      if ( !this )
                        goto LABEL_60;
                      v143 = System_Text_RegularExpressions_Capture__get_Value(
                               (System_Text_RegularExpressions_Capture_o *)this,
                               0LL);
                      v144 = System_Int32__Parse(v143, 0LL);
                      this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)System_Linq_Enumerable__Contains_int_(
                                                                                 v135,
                                                                                 v144,
                                                                                 (const MethodInfo_2FC7E00 *)Method_System_Linq_Enumerable_Contains_int___);
                      if ( ((unsigned __int8)this & 1) != 0 )
                      {
                        v145 = AssetData__GetObject_object__49880776(
                                 v19,
                                 v141,
                                 (const MethodInfo_2F91EC8 *)Method_AssetData_GetObject_GameObject____77626288);
                        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                        this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)UnityEngine_Object__op_Equality(
                                                                                   (UnityEngine_Object_o *)v145,
                                                                                   0LL,
                                                                                   0LL);
                        if ( ((unsigned __int8)this & 1) == 0 )
                        {
                          this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)_4__this->fields.scannerPrefabDict;
                          if ( !this )
                            goto LABEL_60;
                          System_Collections_Generic_Dictionary_int__object___set_Item(
                            (System_Collections_Generic_Dictionary_int__object__o *)this,
                            v144,
                            v145,
                            (const MethodInfo_32B5A38 *)Method_System_Collections_Generic_Dictionary_int__GameObject__set_Item__);
                        }
                      }
                    }
                    LODWORD(_2__current) = v138->fields.__2__current;
                    if ( (__int64)++v139 >= (int)_2__current )
                      goto LABEL_40;
                  }
                }
LABEL_61:
                sub_1C2209C(this, method);
              }
            }
          }
        }
      }
    }
LABEL_60:
    sub_1C22094(this, method);
  }
  if ( _1__state )
    return 0;
  v2->fields.__1__state = -1;
  v5 = sub_1C22084(SubmarineMapAssetManager___c__DisplayClass69_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    goto LABEL_60;
  *(_BYTE *)(v5 + 16) = 0;
  if ( !_4__this )
    goto LABEL_60;
  v6 = _4__this->fields.loadAssetNames;
  v7 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(
    v7,
    (Il2CppObject *)v5,
    Method_SubmarineMapAssetManager___c__DisplayClass69_0__CoLoadAssets_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  v8 = 1;
  AssetManager__loadAssetStorage_39041504(v6, v7, 1, 0LL);
  v9 = (System_Func_bool__o *)sub_1C22084(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_SubmarineMapAssetManager___c__DisplayClass69_0__CoLoadAssets_b__1__,
    0LL);
  v10 = (UnityEngine_WaitUntil_o *)sub_1C22084(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v10, v9, 0LL);
  v2->fields.__2__current = (Il2CppObject *)v10;
  p__2__current = (PartyOrganizationUtility_o *)&v2->fields.__2__current;
  sub_1C21DDC(p__2__current, (int64_t)v10, v12, v13, v14, v15, v16, v17);
  *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
  return v8;
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
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C21E4C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C22084(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C21E4C(&Method_SubmarineMapAssetManager__CoLoadAssets_d__69_System_Collections_IEnumerator_Reset__);
  sub_1C21F60(v3, v4);
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
  Il2CppObject *v1; // x19
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  if ( (byte_4BD90F9 & 1) == 0 )
  {
    sub_1C21E38(&SubmarineMapAssetManager___c_TypeInfo);
    byte_4BD90F9 = 1;
  }
  v1 = (Il2CppObject *)sub_1C22084(SubmarineMapAssetManager___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  SubmarineMapAssetManager___c_TypeInfo->static_fields->__9 = (struct SubmarineMapAssetManager___c_o *)v1;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)SubmarineMapAssetManager___c_TypeInfo->static_fields,
    (int64_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_1C22094(this, 0LL);
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