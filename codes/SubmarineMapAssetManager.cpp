void __fastcall SubmarineMapAssetManager___ctor(SubmarineMapAssetManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x0
  __int64 v5; // x1
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  struct System_String_array *v12; // x20
  int64_t v13; // x1
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7

  if ( (byte_4B33DB0 & 1) == 0 )
  {
    sub_1BD3458(&string___TypeInfo, method);
    sub_1BD3458(&StringLiteral_6293/*"Event/Submarine"*/, v3);
    byte_4B33DB0 = 1;
  }
  v4 = sub_1BD3500(string___TypeInfo, 1LL);
  if ( !v4 )
    sub_1BD36B4(0LL, v5);
  v12 = (struct System_String_array *)v4;
  if ( !*(_DWORD *)(v4 + 24) )
    sub_1BD36BC(v4, v5);
  v13 = StringLiteral_6293/*"Event/Submarine"*/;
  *(_QWORD *)(v4 + 32) = StringLiteral_6293/*"Event/Submarine"*/;
  sub_1BD33FC((PartyOrganizationUtility_o *)(v4 + 32), v13, v6, v7, v8, v9, v10, v11);
  this->fields.loadAssetNames = v12;
  sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.loadAssetNames, (int64_t)v12, v14, v15, v16, v17, v18, v19);
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

  if ( (byte_4B33DAC & 1) == 0 )
  {
    sub_1BD3458(&SubmarineMapAssetManager__CoLoadAssets_d__69_TypeInfo, *(_QWORD *)&eventId);
    byte_4B33DAC = 1;
  }
  v7 = sub_1BD36A4(SubmarineMapAssetManager__CoLoadAssets_d__69_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 32) = this;
  sub_1BD33FC((PartyOrganizationUtility_o *)(v7 + 32), (int64_t)this, v8, v9, v10, v11, v12, v13);
  *(_DWORD *)(v7 + 40) = eventId;
  *(_QWORD *)(v7 + 48) = finishCallback;
  sub_1BD33FC((PartyOrganizationUtility_o *)(v7 + 48), (int64_t)finishCallback, v14, v15, v16, v17, v18, v19);
  return (System_Collections_IEnumerator_o *)v7;
}


void __fastcall SubmarineMapAssetManager__Finish(SubmarineMapAssetManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_Dictionary_int__GameObject__o *scannerPrefabDict; // x0
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
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7
  int64_t v65; // x2
  int32_t v66; // w3
  System_String_o *v67; // x4
  BattleSetupInfo_o *v68; // x5
  FollowerInfo_o *v69; // x6
  PartyListViewItem_o *v70; // x7
  int64_t v71; // x2
  int32_t v72; // w3
  System_String_o *v73; // x4
  BattleSetupInfo_o *v74; // x5
  FollowerInfo_o *v75; // x6
  PartyListViewItem_o *v76; // x7
  int64_t v77; // x2
  int32_t v78; // w3
  System_String_o *v79; // x4
  BattleSetupInfo_o *v80; // x5
  FollowerInfo_o *v81; // x6
  PartyListViewItem_o *v82; // x7
  int64_t v83; // x2
  int32_t v84; // w3
  System_String_o *v85; // x4
  BattleSetupInfo_o *v86; // x5
  FollowerInfo_o *v87; // x6
  PartyListViewItem_o *v88; // x7
  int64_t v89; // x2
  int32_t v90; // w3
  System_String_o *v91; // x4
  BattleSetupInfo_o *v92; // x5
  FollowerInfo_o *v93; // x6
  PartyListViewItem_o *v94; // x7
  PartyOrganizationUtility_o *p_AnimationSkipEFfectPrefab_k__BackingField; // x19
  int64_t v96; // x2
  int32_t v97; // w3
  System_String_o *v98; // x4
  BattleSetupInfo_o *v99; // x5
  FollowerInfo_o *v100; // x6
  PartyListViewItem_o *v101; // x7
  System_String_array *normalFollowerInfo; // x19

  if ( (byte_4B33DAF & 1) == 0 )
  {
    sub_1BD3458(&AssetManager_TypeInfo, method);
    sub_1BD3458(&Method_System_Collections_Generic_Dictionary_int__GameObject__Clear__, v3);
    byte_4B33DAF = 1;
  }
  scannerPrefabDict = this->fields.scannerPrefabDict;
  if ( !scannerPrefabDict
    || (System_Collections_Generic_Dictionary_int__object___Clear(
          (System_Collections_Generic_Dictionary_int__object__o *)scannerPrefabDict,
          (const MethodInfo_322511C *)Method_System_Collections_Generic_Dictionary_int__GameObject__Clear__),
        (scannerPrefabDict = this->fields.scanRangeNotificatorPrefabDict) == 0LL) )
  {
    sub_1BD36B4(scannerPrefabDict, method);
  }
  System_Collections_Generic_Dictionary_int__object___Clear(
    (System_Collections_Generic_Dictionary_int__object__o *)scannerPrefabDict,
    (const MethodInfo_322511C *)Method_System_Collections_Generic_Dictionary_int__GameObject__Clear__);
  this->fields._PanelPrefab_k__BackingField = 0LL;
  sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields, 0LL, v5, v6, v7, v8, v9, v10);
  this->fields._GridLinePrefab_k__BackingField = 0LL;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)&this->fields._GridLinePrefab_k__BackingField,
    0LL,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  this->fields._PanelContainerPrefab_k__BackingField = 0LL;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)&this->fields._PanelContainerPrefab_k__BackingField,
    0LL,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  this->fields._EffectContainerPrefab_k__BackingField = 0LL;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)&this->fields._EffectContainerPrefab_k__BackingField,
    0LL,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  this->fields._ClosedPanelTexture_k__BackingField = 0LL;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)&this->fields._ClosedPanelTexture_k__BackingField,
    0LL,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  this->fields._GridTexture_k__BackingField = 0LL;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)&this->fields._GridTexture_k__BackingField,
    0LL,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  this->fields._EffectScannedPanelPrefab_k__BackingField = 0LL;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)&this->fields._EffectScannedPanelPrefab_k__BackingField,
    0LL,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  this->fields._EffectSelectedPanelPrefab_k__BackingField = 0LL;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)&this->fields._EffectSelectedPanelPrefab_k__BackingField,
    0LL,
    v47,
    v48,
    v49,
    v50,
    v51,
    v52);
  this->fields._EffectScannablePanelPrafab_k__BackingField = 0LL;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)&this->fields._EffectScannablePanelPrafab_k__BackingField,
    0LL,
    v53,
    v54,
    v55,
    v56,
    v57,
    v58);
  this->fields._EffectScanObstaclePanelPrafab_k__BackingField = 0LL;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)&this->fields._EffectScanObstaclePanelPrafab_k__BackingField,
    0LL,
    v59,
    v60,
    v61,
    v62,
    v63,
    v64);
  this->fields._ScanProcessPreventedPrafab_k__BackingField = 0LL;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)&this->fields._ScanProcessPreventedPrafab_k__BackingField,
    0LL,
    v65,
    v66,
    v67,
    v68,
    v69,
    v70);
  this->fields._SelectScannerDialogPrefab_k__BackingField = 0LL;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)&this->fields._SelectScannerDialogPrefab_k__BackingField,
    0LL,
    v71,
    v72,
    v73,
    v74,
    v75,
    v76);
  this->fields._ScanConfirmDialogPrefab_k__BackingField = 0LL;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)&this->fields._ScanConfirmDialogPrefab_k__BackingField,
    0LL,
    v77,
    v78,
    v79,
    v80,
    v81,
    v82);
  this->fields._NewScannerDialogPrefab_k__BackingField = 0LL;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)&this->fields._NewScannerDialogPrefab_k__BackingField,
    0LL,
    v83,
    v84,
    v85,
    v86,
    v87,
    v88);
  this->fields._Settings_k__BackingField = 0LL;
  sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields._Settings_k__BackingField, 0LL, v89, v90, v91, v92, v93, v94);
  this->fields._AnimationSkipEFfectPrefab_k__BackingField = 0LL;
  p_AnimationSkipEFfectPrefab_k__BackingField = (PartyOrganizationUtility_o *)&this->fields._AnimationSkipEFfectPrefab_k__BackingField;
  sub_1BD33FC(p_AnimationSkipEFfectPrefab_k__BackingField, 0LL, v96, v97, v98, v99, v100, v101);
  normalFollowerInfo = (System_String_array *)p_AnimationSkipEFfectPrefab_k__BackingField->fields._normalFollowerInfo;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAssetStorage_38582992(normalFollowerInfo, 0LL);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall SubmarineMapAssetManager__GetScanAnimObjectPrefab(
        SubmarineMapAssetManager_o *this,
        int32_t scanObjectId,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_int__GameObject__o *scannerPrefabDict; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B33DAD & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_Generic_Dictionary_int__GameObject__TryGetValue__, *(_QWORD *)&scanObjectId);
    byte_4B33DAD = 1;
  }
  value = 0LL;
  scannerPrefabDict = this->fields.scannerPrefabDict;
  if ( !scannerPrefabDict )
    sub_1BD36B4(0LL, *(_QWORD *)&scanObjectId);
  System_Collections_Generic_Dictionary_int__object___TryGetValue(
    (System_Collections_Generic_Dictionary_int__object__o *)scannerPrefabDict,
    scanObjectId,
    &value,
    (const MethodInfo_3226720 *)Method_System_Collections_Generic_Dictionary_int__GameObject__TryGetValue__);
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

  if ( (byte_4B33DAE & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_Generic_Dictionary_int__GameObject__TryGetValue__, *(_QWORD *)&scanObjectId);
    byte_4B33DAE = 1;
  }
  value = 0LL;
  scanRangeNotificatorPrefabDict = this->fields.scanRangeNotificatorPrefabDict;
  if ( !scanRangeNotificatorPrefabDict )
    sub_1BD36B4(0LL, *(_QWORD *)&scanObjectId);
  System_Collections_Generic_Dictionary_int__object___TryGetValue(
    (System_Collections_Generic_Dictionary_int__object__o *)scanRangeNotificatorPrefabDict,
    scanObjectId,
    &value,
    (const MethodInfo_3226720 *)Method_System_Collections_Generic_Dictionary_int__GameObject__TryGetValue__);
  return (UnityEngine_GameObject_o *)value;
}


void __fastcall SubmarineMapAssetManager__Initialize(SubmarineMapAssetManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_Dictionary_int__object__o *v4; // x20
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  System_Collections_Generic_Dictionary_int__object__o *v11; // x20
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7

  if ( (byte_4B33DAA & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_Generic_Dictionary_int__GameObject___ctor__, method);
    sub_1BD3458(&System_Collections_Generic_Dictionary_int__GameObject__TypeInfo, v3);
    byte_4B33DAA = 1;
  }
  v4 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BD36A4(System_Collections_Generic_Dictionary_int__GameObject__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v4,
    (const MethodInfo_32245C0 *)Method_System_Collections_Generic_Dictionary_int__GameObject___ctor__);
  this->fields.scannerPrefabDict = (struct System_Collections_Generic_Dictionary_int__GameObject__o *)v4;
  sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.scannerPrefabDict, (int64_t)v4, v5, v6, v7, v8, v9, v10);
  v11 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BD36A4(System_Collections_Generic_Dictionary_int__GameObject__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v11,
    (const MethodInfo_32245C0 *)Method_System_Collections_Generic_Dictionary_int__GameObject___ctor__);
  this->fields.scanRangeNotificatorPrefabDict = (struct System_Collections_Generic_Dictionary_int__GameObject__o *)v11;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)&this->fields.scanRangeNotificatorPrefabDict,
    (int64_t)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SubmarineMapAssetManager__LoadMapObject(
        SubmarineMapAssetManager_o *this,
        AssetData_o *assetData,
        int32_t mapId,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  Il2CppObject *v10; // x0
  System_String_o *v11; // x0
  __int64 v12; // x1
  Il2CppObject *Object_object__49362760; // x0
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  int32_t v20; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B33DAB & 1) == 0 )
  {
    sub_1BD3458(&Method_AssetData_GetObject_Texture2D____76969064, assetData);
    sub_1BD3458(&int_TypeInfo, v8);
    sub_1BD3458(&StringLiteral_25244/*"{0:D6}_ClosedPanelTexture"*/, v9);
    byte_4B33DAB = 1;
  }
  v20 = mapId;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v20, *(_QWORD *)&mapId, method, v4);
  v11 = System_String__Format((System_String_o *)StringLiteral_25244/*"{0:D6}_ClosedPanelTexture"*/, v10, 0LL);
  if ( !assetData )
    sub_1BD36B4(v11, v12);
  Object_object__49362760 = AssetData__GetObject_object__49362760(
                              assetData,
                              v11,
                              (const MethodInfo_2F13748 *)Method_AssetData_GetObject_Texture2D____76969064);
  this->fields._ClosedPanelTexture_k__BackingField = (struct UnityEngine_Texture2D_o *)Object_object__49362760;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)&this->fields._ClosedPanelTexture_k__BackingField,
    (int64_t)Object_object__49362760,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
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
  sub_1BD33FC(
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
  sub_1BD33FC(
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
  sub_1BD33FC(
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
  sub_1BD33FC(
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
  sub_1BD33FC(
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
  sub_1BD33FC(
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
  sub_1BD33FC(
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
  sub_1BD33FC(
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
  sub_1BD33FC(
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
  sub_1BD33FC(
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
  sub_1BD33FC(
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
  sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields, (int64_t)value, (int64_t)method, v3, v4, v5, v6, v7);
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
  sub_1BD33FC(
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
  sub_1BD33FC(
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
  sub_1BD33FC(
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
  sub_1BD33FC(
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x1
  __int64 v35; // x1
  __int64 v36; // x1
  __int64 v37; // x1
  __int64 v38; // x1
  int32_t _1__state; // w8
  struct SubmarineMapAssetManager_o *_4__this; // x26
  __int64 v41; // x20
  System_String_array *v42; // x22
  System_Action_o *v43; // x23
  bool v44; // w21
  System_Func_bool__o *v45; // x22
  UnityEngine_WaitUntil_o *v46; // x20
  PartyOrganizationUtility_o *p__2__current; // x24
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  System_String_array *loadAssetNames; // x20
  AssetData_o *v55; // x20
  Il2CppObject *Object_object__49362760; // x0
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  Il2CppObject *v63; // x0
  int64_t v64; // x2
  int32_t v65; // w3
  System_String_o *v66; // x4
  BattleSetupInfo_o *v67; // x5
  FollowerInfo_o *v68; // x6
  PartyListViewItem_o *v69; // x7
  Il2CppObject *v70; // x0
  int64_t v71; // x2
  int32_t v72; // w3
  System_String_o *v73; // x4
  BattleSetupInfo_o *v74; // x5
  FollowerInfo_o *v75; // x6
  PartyListViewItem_o *v76; // x7
  Il2CppObject *v77; // x0
  int64_t v78; // x2
  int32_t v79; // w3
  System_String_o *v80; // x4
  BattleSetupInfo_o *v81; // x5
  FollowerInfo_o *v82; // x6
  PartyListViewItem_o *v83; // x7
  Il2CppObject *v84; // x0
  int64_t v85; // x2
  int32_t v86; // w3
  System_String_o *v87; // x4
  BattleSetupInfo_o *v88; // x5
  FollowerInfo_o *v89; // x6
  PartyListViewItem_o *v90; // x7
  Il2CppObject *v91; // x0
  int64_t v92; // x2
  int32_t v93; // w3
  System_String_o *v94; // x4
  BattleSetupInfo_o *v95; // x5
  FollowerInfo_o *v96; // x6
  PartyListViewItem_o *v97; // x7
  Il2CppObject *v98; // x0
  int64_t v99; // x2
  int32_t v100; // w3
  System_String_o *v101; // x4
  BattleSetupInfo_o *v102; // x5
  FollowerInfo_o *v103; // x6
  PartyListViewItem_o *v104; // x7
  Il2CppObject *v105; // x0
  int64_t v106; // x2
  int32_t v107; // w3
  System_String_o *v108; // x4
  BattleSetupInfo_o *v109; // x5
  FollowerInfo_o *v110; // x6
  PartyListViewItem_o *v111; // x7
  Il2CppObject *v112; // x0
  int64_t v113; // x2
  int32_t v114; // w3
  System_String_o *v115; // x4
  BattleSetupInfo_o *v116; // x5
  FollowerInfo_o *v117; // x6
  PartyListViewItem_o *v118; // x7
  Il2CppObject *v119; // x0
  int64_t v120; // x2
  int32_t v121; // w3
  System_String_o *v122; // x4
  BattleSetupInfo_o *v123; // x5
  FollowerInfo_o *v124; // x6
  PartyListViewItem_o *v125; // x7
  int64_t v126; // x2
  int32_t v127; // w3
  System_String_o *v128; // x4
  BattleSetupInfo_o *v129; // x5
  FollowerInfo_o *v130; // x6
  PartyListViewItem_o *v131; // x7
  Il2CppObject *v132; // x0
  int64_t v133; // x2
  int32_t v134; // w3
  System_String_o *v135; // x4
  BattleSetupInfo_o *v136; // x5
  FollowerInfo_o *v137; // x6
  PartyListViewItem_o *v138; // x7
  Il2CppObject *v139; // x0
  int64_t v140; // x2
  int32_t v141; // w3
  System_String_o *v142; // x4
  BattleSetupInfo_o *v143; // x5
  FollowerInfo_o *v144; // x6
  PartyListViewItem_o *v145; // x7
  Il2CppObject *v146; // x0
  int64_t v147; // x2
  int32_t v148; // w3
  System_String_o *v149; // x4
  BattleSetupInfo_o *v150; // x5
  FollowerInfo_o *v151; // x6
  PartyListViewItem_o *v152; // x7
  Il2CppObject *v153; // x0
  int64_t v154; // x2
  int32_t v155; // w3
  System_String_o *v156; // x4
  BattleSetupInfo_o *v157; // x5
  FollowerInfo_o *v158; // x6
  PartyListViewItem_o *v159; // x7
  System_Collections_Generic_IEnumerable_TSource__o *ListByEventId; // x21
  SubmarineMapAssetManager___c_c *v161; // x8
  System_Func_object__int__o *_9__69_2; // x22
  Il2CppObject *v163; // x23
  struct SubmarineMapAssetManager___c_StaticFields *static_fields; // x0
  int64_t v165; // x2
  int32_t v166; // w3
  System_String_o *v167; // x4
  BattleSetupInfo_o *v168; // x5
  FollowerInfo_o *v169; // x6
  PartyListViewItem_o *v170; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v171; // x21
  System_Text_RegularExpressions_Regex_o *v172; // x22
  Il2CppObject *_2__current; // x8
  SubmarineMapAssetManager__CoLoadAssets_d__69_o *v174; // x23
  unsigned __int64 v175; // x29
  struct SubmarineMapAssetManager_o **v176; // x28
  System_String_o *v177; // x24
  SubmarineMapAssetManager__CoLoadAssets_d__69_o *v178; // x25
  System_String_o *v179; // x0
  int32_t v180; // w25
  Il2CppObject *v181; // x24
  System_Text_RegularExpressions_Regex_o *v182; // x22
  Il2CppObject *v183; // x8
  SubmarineMapAssetManager__CoLoadAssets_d__69_o *v184; // x23
  unsigned __int64 v185; // x28
  struct SubmarineMapAssetManager_o **p__4__this; // x29
  System_String_o *v187; // x24
  SubmarineMapAssetManager__CoLoadAssets_d__69_o *v188; // x25
  System_String_o *Value; // x0
  int32_t v190; // w25
  Il2CppObject *v191; // x24
  System_Action_o *finishCallback; // x0
  SubmarineMapAssetManager__CoLoadAssets_d__69_o *v194; // [xsp+8h] [xbp-68h]

  v2 = this;
  if ( (byte_4B33DB2 & 1) == 0 )
  {
    sub_1BD3458(&System_Action_TypeInfo, method);
    sub_1BD3458(&Method_AssetData_GetObject_GameObject____76969040, v3);
    sub_1BD3458(&Method_AssetData_GetObject_SubmarineSettings___, v4);
    sub_1BD3458(&Method_AssetData_GetObject_Texture2D____76969064, v5);
    sub_1BD3458(&AssetManager_TypeInfo, v6);
    sub_1BD3458(&Method_DataManager_GetMasterData_EventPanelScanMaster___, v7);
    sub_1BD3458(&Method_System_Collections_Generic_Dictionary_int__GameObject__set_Item__, v8);
    sub_1BD3458(&Method_System_Linq_Enumerable_Contains_int___, v9);
    sub_1BD3458(&Method_System_Linq_Enumerable_Select_EventPanelScanEntity__int___, v10);
    sub_1BD3458(&System_Func_bool__TypeInfo, v11);
    sub_1BD3458(&System_Func_EventPanelScanEntity__int__TypeInfo, v12);
    sub_1BD3458(&UnityEngine_Object_TypeInfo, v13);
    sub_1BD3458(&System_Text_RegularExpressions_Regex_TypeInfo, v14);
    sub_1BD3458(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_1BD3458(&Method_SubmarineMapAssetManager___c__CoLoadAssets_b__69_2__, v16);
    sub_1BD3458(&Method_SubmarineMapAssetManager___c__DisplayClass69_0__CoLoadAssets_b__0__, v17);
    sub_1BD3458(&Method_SubmarineMapAssetManager___c__DisplayClass69_0__CoLoadAssets_b__1__, v18);
    sub_1BD3458(&SubmarineMapAssetManager___c__DisplayClass69_0_TypeInfo, v19);
    sub_1BD3458(&SubmarineMapAssetManager___c_TypeInfo, v20);
    sub_1BD3458(&UnityEngine_WaitUntil_TypeInfo, v21);
    sub_1BD3458(&StringLiteral_6003/*"EffectScannedPanel"*/, v22);
    sub_1BD3458(&StringLiteral_12684/*"Scanner_(?<ID>\\d+)"*/, v23);
    sub_1BD3458(&StringLiteral_13239/*"SubmarineScanConfirmDialog"*/, v24);
    sub_1BD3458(&StringLiteral_19022/*"ef_animation_skip"*/, v25);
    sub_1BD3458(&StringLiteral_13237/*"SubmarinePanel"*/, v26);
    sub_1BD3458(&StringLiteral_13241/*"SubmarineSelectScannerDialog"*/, v27);
    sub_1BD3458(&StringLiteral_13230/*"SubmarineEffectScanObstaclePanel"*/, v28);
    sub_1BD3458(&StringLiteral_13233/*"SubmarineGridLine"*/, v29);
    sub_1BD3458(&StringLiteral_13238/*"SubmarinePanelContainer"*/, v30);
    sub_1BD3458(&StringLiteral_13240/*"SubmarineScanRangeNotificator_(?<ID>\\d+)"*/, v31);
    sub_1BD3458(&StringLiteral_13236/*"SubmarineNewScannerDialog"*/, v32);
    sub_1BD3458(&StringLiteral_13234/*"SubmarineGridTexture"*/, v33);
    sub_1BD3458(&StringLiteral_13232/*"SubmarineEffectSelectedPanel"*/, v34);
    sub_1BD3458(&StringLiteral_13229/*"SubmarineEffectContainer"*/, v35);
    sub_1BD3458(&StringLiteral_13231/*"SubmarineEffectScannablePanel"*/, v36);
    sub_1BD3458(&StringLiteral_7474/*"ID"*/, v37);
    this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)sub_1BD3458(&StringLiteral_13242/*"SubmarineSettings"*/, v38);
    byte_4B33DB2 = 1;
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
      this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)AssetManager__getAssetStorage_38582024(
                                                                 loadAssetNames,
                                                                 0LL);
      if ( this )
      {
        if ( !LODWORD(this->fields.__2__current) )
          goto LABEL_61;
        v55 = (AssetData_o *)this->fields.__4__this;
        if ( v55 )
        {
          Object_object__49362760 = AssetData__GetObject_object__49362760(
                                      (AssetData_o *)this->fields.__4__this,
                                      (System_String_o *)StringLiteral_13237/*"SubmarinePanel"*/,
                                      (const MethodInfo_2F13748 *)Method_AssetData_GetObject_GameObject____76969040);
          _4__this->fields._PanelPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)Object_object__49362760;
          sub_1BD33FC(
            (PartyOrganizationUtility_o *)&_4__this->fields,
            (int64_t)Object_object__49362760,
            v57,
            v58,
            v59,
            v60,
            v61,
            v62);
          v63 = AssetData__GetObject_object__49362760(
                  v55,
                  (System_String_o *)StringLiteral_13233/*"SubmarineGridLine"*/,
                  (const MethodInfo_2F13748 *)Method_AssetData_GetObject_GameObject____76969040);
          _4__this->fields._GridLinePrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v63;
          sub_1BD33FC(
            (PartyOrganizationUtility_o *)&_4__this->fields._GridLinePrefab_k__BackingField,
            (int64_t)v63,
            v64,
            v65,
            v66,
            v67,
            v68,
            v69);
          v70 = AssetData__GetObject_object__49362760(
                  v55,
                  (System_String_o *)StringLiteral_13238/*"SubmarinePanelContainer"*/,
                  (const MethodInfo_2F13748 *)Method_AssetData_GetObject_GameObject____76969040);
          _4__this->fields._PanelContainerPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v70;
          sub_1BD33FC(
            (PartyOrganizationUtility_o *)&_4__this->fields._PanelContainerPrefab_k__BackingField,
            (int64_t)v70,
            v71,
            v72,
            v73,
            v74,
            v75,
            v76);
          v77 = AssetData__GetObject_object__49362760(
                  v55,
                  (System_String_o *)StringLiteral_13229/*"SubmarineEffectContainer"*/,
                  (const MethodInfo_2F13748 *)Method_AssetData_GetObject_GameObject____76969040);
          _4__this->fields._EffectContainerPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v77;
          sub_1BD33FC(
            (PartyOrganizationUtility_o *)&_4__this->fields._EffectContainerPrefab_k__BackingField,
            (int64_t)v77,
            v78,
            v79,
            v80,
            v81,
            v82,
            v83);
          v84 = AssetData__GetObject_object__49362760(
                  v55,
                  (System_String_o *)StringLiteral_6003/*"EffectScannedPanel"*/,
                  (const MethodInfo_2F13748 *)Method_AssetData_GetObject_GameObject____76969040);
          _4__this->fields._EffectScannedPanelPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v84;
          sub_1BD33FC(
            (PartyOrganizationUtility_o *)&_4__this->fields._EffectScannedPanelPrefab_k__BackingField,
            (int64_t)v84,
            v85,
            v86,
            v87,
            v88,
            v89,
            v90);
          v91 = AssetData__GetObject_object__49362760(
                  v55,
                  (System_String_o *)StringLiteral_13232/*"SubmarineEffectSelectedPanel"*/,
                  (const MethodInfo_2F13748 *)Method_AssetData_GetObject_GameObject____76969040);
          _4__this->fields._EffectSelectedPanelPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v91;
          sub_1BD33FC(
            (PartyOrganizationUtility_o *)&_4__this->fields._EffectSelectedPanelPrefab_k__BackingField,
            (int64_t)v91,
            v92,
            v93,
            v94,
            v95,
            v96,
            v97);
          v98 = AssetData__GetObject_object__49362760(
                  v55,
                  (System_String_o *)StringLiteral_13231/*"SubmarineEffectScannablePanel"*/,
                  (const MethodInfo_2F13748 *)Method_AssetData_GetObject_GameObject____76969040);
          _4__this->fields._EffectScannablePanelPrafab_k__BackingField = (struct UnityEngine_GameObject_o *)v98;
          sub_1BD33FC(
            (PartyOrganizationUtility_o *)&_4__this->fields._EffectScannablePanelPrafab_k__BackingField,
            (int64_t)v98,
            v99,
            v100,
            v101,
            v102,
            v103,
            v104);
          v105 = AssetData__GetObject_object__49362760(
                   v55,
                   (System_String_o *)StringLiteral_13230/*"SubmarineEffectScanObstaclePanel"*/,
                   (const MethodInfo_2F13748 *)Method_AssetData_GetObject_GameObject____76969040);
          _4__this->fields._EffectScanObstaclePanelPrafab_k__BackingField = (struct UnityEngine_GameObject_o *)v105;
          sub_1BD33FC(
            (PartyOrganizationUtility_o *)&_4__this->fields._EffectScanObstaclePanelPrafab_k__BackingField,
            (int64_t)v105,
            v106,
            v107,
            v108,
            v109,
            v110,
            v111);
          v112 = AssetData__GetObject_object__49362760(
                   v55,
                   (System_String_o *)StringLiteral_13234/*"SubmarineGridTexture"*/,
                   (const MethodInfo_2F13748 *)Method_AssetData_GetObject_Texture2D____76969064);
          _4__this->fields._GridTexture_k__BackingField = (struct UnityEngine_Texture2D_o *)v112;
          sub_1BD33FC(
            (PartyOrganizationUtility_o *)&_4__this->fields._GridTexture_k__BackingField,
            (int64_t)v112,
            v113,
            v114,
            v115,
            v116,
            v117,
            v118);
          v119 = AssetData__GetObject_object__49362760(
                   v55,
                   (System_String_o *)StringLiteral_13242/*"SubmarineSettings"*/,
                   (const MethodInfo_2F13748 *)Method_AssetData_GetObject_SubmarineSettings___);
          _4__this->fields._Settings_k__BackingField = (struct SubmarineSettings_o *)v119;
          sub_1BD33FC(
            (PartyOrganizationUtility_o *)&_4__this->fields._Settings_k__BackingField,
            (int64_t)v119,
            v120,
            v121,
            v122,
            v123,
            v124,
            v125);
          _4__this->fields._ScanProcessPreventedPrafab_k__BackingField = 0LL;
          sub_1BD33FC(
            (PartyOrganizationUtility_o *)&_4__this->fields._ScanProcessPreventedPrafab_k__BackingField,
            0LL,
            v126,
            v127,
            v128,
            v129,
            v130,
            v131);
          v132 = AssetData__GetObject_object__49362760(
                   v55,
                   (System_String_o *)StringLiteral_19022/*"ef_animation_skip"*/,
                   (const MethodInfo_2F13748 *)Method_AssetData_GetObject_GameObject____76969040);
          _4__this->fields._AnimationSkipEFfectPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v132;
          sub_1BD33FC(
            (PartyOrganizationUtility_o *)&_4__this->fields._AnimationSkipEFfectPrefab_k__BackingField,
            (int64_t)v132,
            v133,
            v134,
            v135,
            v136,
            v137,
            v138);
          v139 = AssetData__GetObject_object__49362760(
                   v55,
                   (System_String_o *)StringLiteral_13241/*"SubmarineSelectScannerDialog"*/,
                   (const MethodInfo_2F13748 *)Method_AssetData_GetObject_GameObject____76969040);
          _4__this->fields._SelectScannerDialogPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v139;
          sub_1BD33FC(
            (PartyOrganizationUtility_o *)&_4__this->fields._SelectScannerDialogPrefab_k__BackingField,
            (int64_t)v139,
            v140,
            v141,
            v142,
            v143,
            v144,
            v145);
          v146 = AssetData__GetObject_object__49362760(
                   v55,
                   (System_String_o *)StringLiteral_13239/*"SubmarineScanConfirmDialog"*/,
                   (const MethodInfo_2F13748 *)Method_AssetData_GetObject_GameObject____76969040);
          _4__this->fields._ScanConfirmDialogPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v146;
          sub_1BD33FC(
            (PartyOrganizationUtility_o *)&_4__this->fields._ScanConfirmDialogPrefab_k__BackingField,
            (int64_t)v146,
            v147,
            v148,
            v149,
            v150,
            v151,
            v152);
          v153 = AssetData__GetObject_object__49362760(
                   v55,
                   (System_String_o *)StringLiteral_13236/*"SubmarineNewScannerDialog"*/,
                   (const MethodInfo_2F13748 *)Method_AssetData_GetObject_GameObject____76969040);
          _4__this->fields._NewScannerDialogPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v153;
          sub_1BD33FC(
            (PartyOrganizationUtility_o *)&_4__this->fields._NewScannerDialogPrefab_k__BackingField,
            (int64_t)v153,
            v154,
            v155,
            v156,
            v157,
            v158,
            v159);
          this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( this )
          {
            this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)DataManager__GetMasterData_object_(
                                                                       (DataManager_o *)this,
                                                                       (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_EventPanelScanMaster___);
            if ( this )
            {
              ListByEventId = (System_Collections_Generic_IEnumerable_TSource__o *)EventPanelScanMaster__GetListByEventId(
                                                                                     (EventPanelScanMaster_o *)this,
                                                                                     v2->fields.eventId,
                                                                                     0LL);
              v161 = SubmarineMapAssetManager___c_TypeInfo;
              if ( !SubmarineMapAssetManager___c_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(SubmarineMapAssetManager___c_TypeInfo);
                v161 = SubmarineMapAssetManager___c_TypeInfo;
              }
              _9__69_2 = (System_Func_object__int__o *)v161->static_fields->__9__69_2;
              if ( !_9__69_2 )
              {
                if ( !v161->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(v161);
                  v161 = SubmarineMapAssetManager___c_TypeInfo;
                }
                v163 = (Il2CppObject *)v161->static_fields->__9;
                _9__69_2 = (System_Func_object__int__o *)sub_1BD36A4(System_Func_EventPanelScanEntity__int__TypeInfo);
                System_Func_object__int____ctor(
                  _9__69_2,
                  v163,
                  Method_SubmarineMapAssetManager___c__CoLoadAssets_b__69_2__,
                  0LL);
                static_fields = SubmarineMapAssetManager___c_TypeInfo->static_fields;
                static_fields->__9__69_2 = (struct System_Func_EventPanelScanEntity__int__o *)_9__69_2;
                sub_1BD33FC(
                  (PartyOrganizationUtility_o *)&static_fields->__9__69_2,
                  (int64_t)_9__69_2,
                  v165,
                  v166,
                  v167,
                  v168,
                  v169,
                  v170);
              }
              v171 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                            ListByEventId,
                                                                            (System_Func_TSource__TResult__o *)_9__69_2,
                                                                            (const MethodInfo_2F62540 *)Method_System_Linq_Enumerable_Select_EventPanelScanEntity__int___);
              v172 = (System_Text_RegularExpressions_Regex_o *)sub_1BD36A4(System_Text_RegularExpressions_Regex_TypeInfo);
              System_Text_RegularExpressions_Regex___ctor(v172, (System_String_o *)StringLiteral_12684/*"Scanner_(?<ID>\\d+)"*/, 0LL);
              this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)AssetData__GetObjectNameList(v55, 0LL);
              if ( this )
              {
                _2__current = this->fields.__2__current;
                v174 = this;
                v194 = v2;
                if ( (int)_2__current < 1 )
                {
LABEL_40:
                  v182 = (System_Text_RegularExpressions_Regex_o *)sub_1BD36A4(System_Text_RegularExpressions_Regex_TypeInfo);
                  System_Text_RegularExpressions_Regex___ctor(v182, (System_String_o *)StringLiteral_13240/*"SubmarineScanRangeNotificator_(?<ID>\\d+)"*/, 0LL);
                  this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)AssetData__GetObjectNameList(v55, 0LL);
                  if ( !this )
                    goto LABEL_60;
                  v183 = this->fields.__2__current;
                  v184 = this;
                  if ( (int)v183 < 1 )
                  {
LABEL_56:
                    finishCallback = v194->fields.finishCallback;
                    if ( finishCallback )
                      ActionExtensions__Call(finishCallback, 0LL);
                    return 0;
                  }
                  v185 = 0LL;
                  p__4__this = &this->fields.__4__this;
                  while ( v185 < (unsigned int)v183 )
                  {
                    if ( !v182 )
                      goto LABEL_60;
                    v187 = (System_String_o *)p__4__this[v185];
                    this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)System_Text_RegularExpressions_Regex__Match_69081916(
                                                                               v182,
                                                                               v187,
                                                                               0LL);
                    if ( !this )
                      goto LABEL_60;
                    v188 = this;
                    this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)System_Text_RegularExpressions_Group__get_Success(
                                                                               (System_Text_RegularExpressions_Group_o *)this,
                                                                               0LL);
                    if ( ((unsigned __int8)this & 1) != 0 )
                    {
                      this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)((__int64 (__fastcall *)(SubmarineMapAssetManager__CoLoadAssets_d__69_o *, Il2CppMethodPointer))v188->klass->vtable._5_System_IDisposable_Dispose.method)(
                                                                                 v188,
                                                                                 v188->klass->vtable._6_MoveNext.methodPtr);
                      if ( !this )
                        goto LABEL_60;
                      this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)System_Text_RegularExpressions_GroupCollection__get_Item_69064960(
                                                                                 (System_Text_RegularExpressions_GroupCollection_o *)this,
                                                                                 (System_String_o *)StringLiteral_7474/*"ID"*/,
                                                                                 0LL);
                      if ( !this )
                        goto LABEL_60;
                      Value = System_Text_RegularExpressions_Capture__get_Value(
                                (System_Text_RegularExpressions_Capture_o *)this,
                                0LL);
                      v190 = System_Int32__Parse(Value, 0LL);
                      this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)System_Linq_Enumerable__Contains_int_(
                                                                                 v171,
                                                                                 v190,
                                                                                 (const MethodInfo_2F49970 *)Method_System_Linq_Enumerable_Contains_int___);
                      if ( ((unsigned __int8)this & 1) != 0 )
                      {
                        v191 = AssetData__GetObject_object__49362760(
                                 v55,
                                 v187,
                                 (const MethodInfo_2F13748 *)Method_AssetData_GetObject_GameObject____76969040);
                        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                        this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)UnityEngine_Object__op_Equality(
                                                                                   (UnityEngine_Object_o *)v191,
                                                                                   0LL,
                                                                                   0LL);
                        if ( ((unsigned __int8)this & 1) == 0 )
                        {
                          this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)_4__this->fields.scanRangeNotificatorPrefabDict;
                          if ( !this )
                            goto LABEL_60;
                          System_Collections_Generic_Dictionary_int__object___set_Item(
                            (System_Collections_Generic_Dictionary_int__object__o *)this,
                            v190,
                            v191,
                            (const MethodInfo_3224F80 *)Method_System_Collections_Generic_Dictionary_int__GameObject__set_Item__);
                        }
                      }
                    }
                    LODWORD(v183) = v184->fields.__2__current;
                    if ( (__int64)++v185 >= (int)v183 )
                      goto LABEL_56;
                  }
                }
                else
                {
                  v175 = 0LL;
                  v176 = &this->fields.__4__this;
                  while ( v175 < (unsigned int)_2__current )
                  {
                    if ( !v172 )
                      goto LABEL_60;
                    v177 = (System_String_o *)v176[v175];
                    this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)System_Text_RegularExpressions_Regex__Match_69081916(
                                                                               v172,
                                                                               v177,
                                                                               0LL);
                    if ( !this )
                      goto LABEL_60;
                    v178 = this;
                    this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)System_Text_RegularExpressions_Group__get_Success(
                                                                               (System_Text_RegularExpressions_Group_o *)this,
                                                                               0LL);
                    if ( ((unsigned __int8)this & 1) != 0 )
                    {
                      this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)((__int64 (__fastcall *)(SubmarineMapAssetManager__CoLoadAssets_d__69_o *, Il2CppMethodPointer))v178->klass->vtable._5_System_IDisposable_Dispose.method)(
                                                                                 v178,
                                                                                 v178->klass->vtable._6_MoveNext.methodPtr);
                      if ( !this )
                        goto LABEL_60;
                      this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)System_Text_RegularExpressions_GroupCollection__get_Item_69064960(
                                                                                 (System_Text_RegularExpressions_GroupCollection_o *)this,
                                                                                 (System_String_o *)StringLiteral_7474/*"ID"*/,
                                                                                 0LL);
                      if ( !this )
                        goto LABEL_60;
                      v179 = System_Text_RegularExpressions_Capture__get_Value(
                               (System_Text_RegularExpressions_Capture_o *)this,
                               0LL);
                      v180 = System_Int32__Parse(v179, 0LL);
                      this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)System_Linq_Enumerable__Contains_int_(
                                                                                 v171,
                                                                                 v180,
                                                                                 (const MethodInfo_2F49970 *)Method_System_Linq_Enumerable_Contains_int___);
                      if ( ((unsigned __int8)this & 1) != 0 )
                      {
                        v181 = AssetData__GetObject_object__49362760(
                                 v55,
                                 v177,
                                 (const MethodInfo_2F13748 *)Method_AssetData_GetObject_GameObject____76969040);
                        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                        this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)UnityEngine_Object__op_Equality(
                                                                                   (UnityEngine_Object_o *)v181,
                                                                                   0LL,
                                                                                   0LL);
                        if ( ((unsigned __int8)this & 1) == 0 )
                        {
                          this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)_4__this->fields.scannerPrefabDict;
                          if ( !this )
                            goto LABEL_60;
                          System_Collections_Generic_Dictionary_int__object___set_Item(
                            (System_Collections_Generic_Dictionary_int__object__o *)this,
                            v180,
                            v181,
                            (const MethodInfo_3224F80 *)Method_System_Collections_Generic_Dictionary_int__GameObject__set_Item__);
                        }
                      }
                    }
                    LODWORD(_2__current) = v174->fields.__2__current;
                    if ( (__int64)++v175 >= (int)_2__current )
                      goto LABEL_40;
                  }
                }
LABEL_61:
                sub_1BD36BC(this, method);
              }
            }
          }
        }
      }
    }
LABEL_60:
    sub_1BD36B4(this, method);
  }
  if ( _1__state )
    return 0;
  v2->fields.__1__state = -1;
  v41 = sub_1BD36A4(SubmarineMapAssetManager___c__DisplayClass69_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v41, 0LL);
  if ( !v41 )
    goto LABEL_60;
  *(_BYTE *)(v41 + 16) = 0;
  if ( !_4__this )
    goto LABEL_60;
  v42 = _4__this->fields.loadAssetNames;
  v43 = (System_Action_o *)sub_1BD36A4(System_Action_TypeInfo);
  System_Action___ctor(
    v43,
    (Il2CppObject *)v41,
    Method_SubmarineMapAssetManager___c__DisplayClass69_0__CoLoadAssets_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  v44 = 1;
  AssetManager__loadAssetStorage_38580648(v42, v43, 1, 0LL);
  v45 = (System_Func_bool__o *)sub_1BD36A4(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v45,
    (Il2CppObject *)v41,
    Method_SubmarineMapAssetManager___c__DisplayClass69_0__CoLoadAssets_b__1__,
    0LL);
  v46 = (UnityEngine_WaitUntil_o *)sub_1BD36A4(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v46, v45, 0LL);
  v2->fields.__2__current = (Il2CppObject *)v46;
  p__2__current = (PartyOrganizationUtility_o *)&v2->fields.__2__current;
  sub_1BD33FC(p__2__current, (int64_t)v46, v48, v49, v50, v51, v52, v53);
  *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
  return v44;
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

  v2 = sub_1BD346C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BD36A4(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BD346C(&Method_SubmarineMapAssetManager__CoLoadAssets_d__69_System_Collections_IEnumerator_Reset__);
  sub_1BD3580(v3, v4);
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
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4B33DB1 & 1) == 0 )
  {
    sub_1BD3458(&SubmarineMapAssetManager___c_TypeInfo, v1);
    byte_4B33DB1 = 1;
  }
  v2 = (Il2CppObject *)sub_1BD36A4(SubmarineMapAssetManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  SubmarineMapAssetManager___c_TypeInfo->static_fields->__9 = (struct SubmarineMapAssetManager___c_o *)v2;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)SubmarineMapAssetManager___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
    sub_1BD36B4(this, 0LL);
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