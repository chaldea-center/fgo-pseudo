void SubmarineMapAssetManager___ctor(SubmarineMapAssetManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  struct System_String_array *v11; // x20
  int32_t v12; // w1
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7

  if ( (byte_4D290C1 & 1) == 0 )
  {
    sub_1C94098(&string___TypeInfo);
    sub_1C94098(&StringLiteral_6204/*"Event/Submarine"*/);
    byte_4D290C1 = 1;
  }
  v3 = sub_1C94140(string___TypeInfo, 1);
  if ( !v3 )
    sub_1C942F0(0, v4);
  v11 = (struct System_String_array *)v3;
  if ( !*(_DWORD *)(v3 + 24) )
    sub_1C942F8(v3);
  v12 = StringLiteral_6204/*"Event/Submarine"*/;
  *(_QWORD *)(v3 + 32) = StringLiteral_6204/*"Event/Submarine"*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v3 + 32), v12, v5, v6, v7, v8, v9, v10);
  this->fields.loadAssetNames = v11;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.loadAssetNames, (int32_t)v11, v13, v14, v15, v16, v17, v18);
  System_Object___ctor((Il2CppObject *)this, 0);
}


System_Collections_IEnumerator_o *SubmarineMapAssetManager__CoLoadAssets(
        SubmarineMapAssetManager_o *this,
        int32_t eventId,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v7; // x22
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7

  if ( (byte_4D290BD & 1) == 0 )
  {
    sub_1C94098(&SubmarineMapAssetManager__CoLoadAssets_d__69_TypeInfo);
    byte_4D290BD = 1;
  }
  v7 = sub_1C942E4(SubmarineMapAssetManager__CoLoadAssets_d__69_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 32) = this;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v7 + 32), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_DWORD *)(v7 + 40) = eventId;
  *(_QWORD *)(v7 + 48) = finishCallback;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v7 + 48), (int32_t)finishCallback, v14, v15, v16, v17, v18, v19);
  return (System_Collections_IEnumerator_o *)v7;
}


void SubmarineMapAssetManager__Finish(SubmarineMapAssetManager_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_int__GameObject__o *scannerPrefabDict; // x0
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  int32_t v34; // w2
  int32_t v35; // w3
  System_String_o *v36; // x4
  int32_t v37; // w5
  int64_t v38; // x6
  System_String_o *v39; // x7
  int32_t v40; // w2
  int32_t v41; // w3
  System_String_o *v42; // x4
  int32_t v43; // w5
  int64_t v44; // x6
  System_String_o *v45; // x7
  int32_t v46; // w2
  int32_t v47; // w3
  System_String_o *v48; // x4
  int32_t v49; // w5
  int64_t v50; // x6
  System_String_o *v51; // x7
  int32_t v52; // w2
  int32_t v53; // w3
  System_String_o *v54; // x4
  int32_t v55; // w5
  int64_t v56; // x6
  System_String_o *v57; // x7
  int32_t v58; // w2
  int32_t v59; // w3
  System_String_o *v60; // x4
  int32_t v61; // w5
  int64_t v62; // x6
  System_String_o *v63; // x7
  int32_t v64; // w2
  int32_t v65; // w3
  System_String_o *v66; // x4
  int32_t v67; // w5
  int64_t v68; // x6
  System_String_o *v69; // x7
  int32_t v70; // w2
  int32_t v71; // w3
  System_String_o *v72; // x4
  int32_t v73; // w5
  int64_t v74; // x6
  System_String_o *v75; // x7
  int32_t v76; // w2
  int32_t v77; // w3
  System_String_o *v78; // x4
  int32_t v79; // w5
  int64_t v80; // x6
  System_String_o *v81; // x7
  int32_t v82; // w2
  int32_t v83; // w3
  System_String_o *v84; // x4
  int32_t v85; // w5
  int64_t v86; // x6
  System_String_o *v87; // x7
  int32_t v88; // w2
  int32_t v89; // w3
  System_String_o *v90; // x4
  int32_t v91; // w5
  int64_t v92; // x6
  System_String_o *v93; // x7
  struct UnityEngine_GameObject_o **p_AnimationSkipEFfectPrefab_k__BackingField; // x19
  int32_t v95; // w2
  int32_t v96; // w3
  System_String_o *v97; // x4
  int32_t v98; // w5
  int64_t v99; // x6
  System_String_o *v100; // x7
  System_String_array *v101; // x19

  if ( (byte_4D290C0 & 1) == 0 )
  {
    sub_1C94098(&AssetManager_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__GameObject__Clear__);
    byte_4D290C0 = 1;
  }
  scannerPrefabDict = this->fields.scannerPrefabDict;
  if ( !scannerPrefabDict
    || (System_Collections_Generic_Dictionary_int__object___Clear(
          (System_Collections_Generic_Dictionary_int__object__o *)scannerPrefabDict,
          (const MethodInfo_34B4A5C *)Method_System_Collections_Generic_Dictionary_int__GameObject__Clear__),
        (scannerPrefabDict = this->fields.scanRangeNotificatorPrefabDict) == 0) )
  {
    sub_1C942F0(scannerPrefabDict, method);
  }
  System_Collections_Generic_Dictionary_int__object___Clear(
    (System_Collections_Generic_Dictionary_int__object__o *)scannerPrefabDict,
    (const MethodInfo_34B4A5C *)Method_System_Collections_Generic_Dictionary_int__GameObject__Clear__);
  this->fields._PanelPrefab_k__BackingField = 0;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields, 0, v4, v5, v6, v7, v8, v9);
  this->fields._GridLinePrefab_k__BackingField = 0;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields._GridLinePrefab_k__BackingField,
    0,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  this->fields._PanelContainerPrefab_k__BackingField = 0;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields._PanelContainerPrefab_k__BackingField,
    0,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  this->fields._EffectContainerPrefab_k__BackingField = 0;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields._EffectContainerPrefab_k__BackingField,
    0,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  this->fields._ClosedPanelTexture_k__BackingField = 0;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields._ClosedPanelTexture_k__BackingField,
    0,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  this->fields._GridTexture_k__BackingField = 0;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields._GridTexture_k__BackingField,
    0,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  this->fields._EffectScannedPanelPrefab_k__BackingField = 0;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields._EffectScannedPanelPrefab_k__BackingField,
    0,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
  this->fields._EffectSelectedPanelPrefab_k__BackingField = 0;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields._EffectSelectedPanelPrefab_k__BackingField,
    0,
    v46,
    v47,
    v48,
    v49,
    v50,
    v51);
  this->fields._EffectScannablePanelPrafab_k__BackingField = 0;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields._EffectScannablePanelPrafab_k__BackingField,
    0,
    v52,
    v53,
    v54,
    v55,
    v56,
    v57);
  this->fields._EffectScanObstaclePanelPrafab_k__BackingField = 0;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields._EffectScanObstaclePanelPrafab_k__BackingField,
    0,
    v58,
    v59,
    v60,
    v61,
    v62,
    v63);
  this->fields._ScanProcessPreventedPrafab_k__BackingField = 0;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields._ScanProcessPreventedPrafab_k__BackingField,
    0,
    v64,
    v65,
    v66,
    v67,
    v68,
    v69);
  this->fields._SelectScannerDialogPrefab_k__BackingField = 0;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields._SelectScannerDialogPrefab_k__BackingField,
    0,
    v70,
    v71,
    v72,
    v73,
    v74,
    v75);
  this->fields._ScanConfirmDialogPrefab_k__BackingField = 0;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields._ScanConfirmDialogPrefab_k__BackingField,
    0,
    v76,
    v77,
    v78,
    v79,
    v80,
    v81);
  this->fields._NewScannerDialogPrefab_k__BackingField = 0;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields._NewScannerDialogPrefab_k__BackingField,
    0,
    v82,
    v83,
    v84,
    v85,
    v86,
    v87);
  this->fields._Settings_k__BackingField = 0;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields._Settings_k__BackingField, 0, v88, v89, v90, v91, v92, v93);
  this->fields._AnimationSkipEFfectPrefab_k__BackingField = 0;
  p_AnimationSkipEFfectPrefab_k__BackingField = &this->fields._AnimationSkipEFfectPrefab_k__BackingField;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)p_AnimationSkipEFfectPrefab_k__BackingField,
    0,
    v95,
    v96,
    v97,
    v98,
    v99,
    v100);
  v101 = (System_String_array *)p_AnimationSkipEFfectPrefab_k__BackingField[3];
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAssetStorage_41294468(v101, 0);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *SubmarineMapAssetManager__GetScanAnimObjectPrefab(
        SubmarineMapAssetManager_o *this,
        int32_t scanObjectId,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_int__GameObject__o *scannerPrefabDict; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4D290BE & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__GameObject__TryGetValue__);
    byte_4D290BE = 1;
  }
  value = 0;
  scannerPrefabDict = this->fields.scannerPrefabDict;
  if ( !scannerPrefabDict )
    sub_1C942F0(0, *(_QWORD *)&scanObjectId);
  System_Collections_Generic_Dictionary_int__object___TryGetValue(
    (System_Collections_Generic_Dictionary_int__object__o *)scannerPrefabDict,
    scanObjectId,
    &value,
    (const MethodInfo_34B6060 *)Method_System_Collections_Generic_Dictionary_int__GameObject__TryGetValue__);
  return (UnityEngine_GameObject_o *)value;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *SubmarineMapAssetManager__GetScanRangeNotificatorPrefab(
        SubmarineMapAssetManager_o *this,
        int32_t scanObjectId,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_int__GameObject__o *scanRangeNotificatorPrefabDict; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4D290BF & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__GameObject__TryGetValue__);
    byte_4D290BF = 1;
  }
  value = 0;
  scanRangeNotificatorPrefabDict = this->fields.scanRangeNotificatorPrefabDict;
  if ( !scanRangeNotificatorPrefabDict )
    sub_1C942F0(0, *(_QWORD *)&scanObjectId);
  System_Collections_Generic_Dictionary_int__object___TryGetValue(
    (System_Collections_Generic_Dictionary_int__object__o *)scanRangeNotificatorPrefabDict,
    scanObjectId,
    &value,
    (const MethodInfo_34B6060 *)Method_System_Collections_Generic_Dictionary_int__GameObject__TryGetValue__);
  return (UnityEngine_GameObject_o *)value;
}


void SubmarineMapAssetManager__Initialize(SubmarineMapAssetManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  System_Collections_Generic_Dictionary_int__object__o *v10; // x20
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7

  if ( (byte_4D290BB & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__GameObject___ctor__);
    sub_1C94098(&System_Collections_Generic_Dictionary_int__GameObject__TypeInfo);
    byte_4D290BB = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C942E4(System_Collections_Generic_Dictionary_int__GameObject__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v3,
    (const MethodInfo_34B3F00 *)Method_System_Collections_Generic_Dictionary_int__GameObject___ctor__);
  this->fields.scannerPrefabDict = (struct System_Collections_Generic_Dictionary_int__GameObject__o *)v3;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.scannerPrefabDict, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C942E4(System_Collections_Generic_Dictionary_int__GameObject__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v10,
    (const MethodInfo_34B3F00 *)Method_System_Collections_Generic_Dictionary_int__GameObject___ctor__);
  this->fields.scanRangeNotificatorPrefabDict = (struct System_Collections_Generic_Dictionary_int__GameObject__o *)v10;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.scanRangeNotificatorPrefabDict,
    (int32_t)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
}


void SubmarineMapAssetManager__LoadMapObject(
        SubmarineMapAssetManager_o *this,
        AssetData_o *assetData,
        int32_t mapId,
        const MethodInfo *method)
{
  Il2CppObject *v7; // x0
  System_String_o *v8; // x0
  __int64 v9; // x1
  Il2CppObject *Object_object__51893132; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  int32_t v17; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4D290BC & 1) == 0 )
  {
    sub_1C94098(&Method_AssetData_GetObject_Texture2D____79044848);
    sub_1C94098(&int_TypeInfo);
    sub_1C94098(&StringLiteral_25327/*"{0:D6}_ClosedPanelTexture"*/);
    byte_4D290BC = 1;
  }
  v17 = mapId;
  v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v17);
  v8 = System_String__Format((System_String_o *)StringLiteral_25327/*"{0:D6}_ClosedPanelTexture"*/, v7, 0);
  if ( !assetData )
    sub_1C942F0(v8, v9);
  Object_object__51893132 = AssetData__GetObject_object__51893132(
                              assetData,
                              v8,
                              (const MethodInfo_317D38C *)Method_AssetData_GetObject_Texture2D____79044848);
  this->fields._ClosedPanelTexture_k__BackingField = (struct UnityEngine_Texture2D_o *)Object_object__51893132;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields._ClosedPanelTexture_k__BackingField,
    (int32_t)Object_object__51893132,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
}


UnityEngine_GameObject_o *SubmarineMapAssetManager__get_AnimationSkipEFfectPrefab(
        SubmarineMapAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._AnimationSkipEFfectPrefab_k__BackingField;
}


UnityEngine_Texture2D_o *SubmarineMapAssetManager__get_ClosedPanelTexture(
        SubmarineMapAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._ClosedPanelTexture_k__BackingField;
}


UnityEngine_GameObject_o *SubmarineMapAssetManager__get_EffectContainerPrefab(
        SubmarineMapAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._EffectContainerPrefab_k__BackingField;
}


UnityEngine_GameObject_o *SubmarineMapAssetManager__get_EffectScanObstaclePanelPrafab(
        SubmarineMapAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._EffectScanObstaclePanelPrafab_k__BackingField;
}


UnityEngine_GameObject_o *SubmarineMapAssetManager__get_EffectScannablePanelPrafab(
        SubmarineMapAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._EffectScannablePanelPrafab_k__BackingField;
}


UnityEngine_GameObject_o *SubmarineMapAssetManager__get_EffectScannedPanelPrefab(
        SubmarineMapAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._EffectScannedPanelPrefab_k__BackingField;
}


UnityEngine_GameObject_o *SubmarineMapAssetManager__get_EffectSelectedPanelPrefab(
        SubmarineMapAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._EffectSelectedPanelPrefab_k__BackingField;
}


UnityEngine_GameObject_o *SubmarineMapAssetManager__get_GridLinePrefab(
        SubmarineMapAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._GridLinePrefab_k__BackingField;
}


UnityEngine_Texture2D_o *SubmarineMapAssetManager__get_GridTexture(
        SubmarineMapAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._GridTexture_k__BackingField;
}


UnityEngine_GameObject_o *SubmarineMapAssetManager__get_NewScannerDialogPrefab(
        SubmarineMapAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._NewScannerDialogPrefab_k__BackingField;
}


UnityEngine_GameObject_o *SubmarineMapAssetManager__get_PanelContainerPrefab(
        SubmarineMapAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._PanelContainerPrefab_k__BackingField;
}


UnityEngine_GameObject_o *SubmarineMapAssetManager__get_PanelPrefab(
        SubmarineMapAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._PanelPrefab_k__BackingField;
}


UnityEngine_GameObject_o *SubmarineMapAssetManager__get_ScanConfirmDialogPrefab(
        SubmarineMapAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._ScanConfirmDialogPrefab_k__BackingField;
}


UnityEngine_GameObject_o *SubmarineMapAssetManager__get_ScanProcessPreventedPrafab(
        SubmarineMapAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._ScanProcessPreventedPrafab_k__BackingField;
}


UnityEngine_GameObject_o *SubmarineMapAssetManager__get_SelectScannerDialogPrefab(
        SubmarineMapAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._SelectScannerDialogPrefab_k__BackingField;
}


SubmarineSettings_o *SubmarineMapAssetManager__get_Settings(SubmarineMapAssetManager_o *this, const MethodInfo *method)
{
  return this->fields._Settings_k__BackingField;
}


void SubmarineMapAssetManager__set_AnimationSkipEFfectPrefab(
        SubmarineMapAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._AnimationSkipEFfectPrefab_k__BackingField = value;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields._AnimationSkipEFfectPrefab_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void SubmarineMapAssetManager__set_ClosedPanelTexture(
        SubmarineMapAssetManager_o *this,
        UnityEngine_Texture2D_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._ClosedPanelTexture_k__BackingField = value;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields._ClosedPanelTexture_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void SubmarineMapAssetManager__set_EffectContainerPrefab(
        SubmarineMapAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._EffectContainerPrefab_k__BackingField = value;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields._EffectContainerPrefab_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void SubmarineMapAssetManager__set_EffectScanObstaclePanelPrafab(
        SubmarineMapAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._EffectScanObstaclePanelPrafab_k__BackingField = value;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields._EffectScanObstaclePanelPrafab_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void SubmarineMapAssetManager__set_EffectScannablePanelPrafab(
        SubmarineMapAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._EffectScannablePanelPrafab_k__BackingField = value;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields._EffectScannablePanelPrafab_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void SubmarineMapAssetManager__set_EffectScannedPanelPrefab(
        SubmarineMapAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._EffectScannedPanelPrefab_k__BackingField = value;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields._EffectScannedPanelPrefab_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void SubmarineMapAssetManager__set_EffectSelectedPanelPrefab(
        SubmarineMapAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._EffectSelectedPanelPrefab_k__BackingField = value;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields._EffectSelectedPanelPrefab_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void SubmarineMapAssetManager__set_GridLinePrefab(
        SubmarineMapAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._GridLinePrefab_k__BackingField = value;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields._GridLinePrefab_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void SubmarineMapAssetManager__set_GridTexture(
        SubmarineMapAssetManager_o *this,
        UnityEngine_Texture2D_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._GridTexture_k__BackingField = value;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields._GridTexture_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void SubmarineMapAssetManager__set_NewScannerDialogPrefab(
        SubmarineMapAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._NewScannerDialogPrefab_k__BackingField = value;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields._NewScannerDialogPrefab_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void SubmarineMapAssetManager__set_PanelContainerPrefab(
        SubmarineMapAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._PanelContainerPrefab_k__BackingField = value;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields._PanelContainerPrefab_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void SubmarineMapAssetManager__set_PanelPrefab(
        SubmarineMapAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._PanelPrefab_k__BackingField = value;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)value, (int32_t)method, v3, v4, v5, v6, v7);
}


void SubmarineMapAssetManager__set_ScanConfirmDialogPrefab(
        SubmarineMapAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._ScanConfirmDialogPrefab_k__BackingField = value;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields._ScanConfirmDialogPrefab_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void SubmarineMapAssetManager__set_ScanProcessPreventedPrafab(
        SubmarineMapAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._ScanProcessPreventedPrafab_k__BackingField = value;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields._ScanProcessPreventedPrafab_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void SubmarineMapAssetManager__set_SelectScannerDialogPrefab(
        SubmarineMapAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._SelectScannerDialogPrefab_k__BackingField = value;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields._SelectScannerDialogPrefab_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void SubmarineMapAssetManager__set_Settings(
        SubmarineMapAssetManager_o *this,
        SubmarineSettings_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._Settings_k__BackingField = value;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields._Settings_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void SubmarineMapAssetManager__CoLoadAssets_d__69___ctor(
        SubmarineMapAssetManager__CoLoadAssets_d__69_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool SubmarineMapAssetManager__CoLoadAssets_d__69__MoveNext(
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
  GrandQuestFolderBoardItem_o *p__2__current; // x24
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  System_String_array *loadAssetNames; // x20
  AssetData_o *v19; // x20
  Il2CppObject *Object_object__51893132; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  Il2CppObject *v27; // x0
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  Il2CppObject *v34; // x0
  int32_t v35; // w2
  int32_t v36; // w3
  System_String_o *v37; // x4
  int32_t v38; // w5
  int64_t v39; // x6
  System_String_o *v40; // x7
  Il2CppObject *v41; // x0
  int32_t v42; // w2
  int32_t v43; // w3
  System_String_o *v44; // x4
  int32_t v45; // w5
  int64_t v46; // x6
  System_String_o *v47; // x7
  Il2CppObject *v48; // x0
  int32_t v49; // w2
  int32_t v50; // w3
  System_String_o *v51; // x4
  int32_t v52; // w5
  int64_t v53; // x6
  System_String_o *v54; // x7
  Il2CppObject *v55; // x0
  int32_t v56; // w2
  int32_t v57; // w3
  System_String_o *v58; // x4
  int32_t v59; // w5
  int64_t v60; // x6
  System_String_o *v61; // x7
  Il2CppObject *v62; // x0
  int32_t v63; // w2
  int32_t v64; // w3
  System_String_o *v65; // x4
  int32_t v66; // w5
  int64_t v67; // x6
  System_String_o *v68; // x7
  Il2CppObject *v69; // x0
  int32_t v70; // w2
  int32_t v71; // w3
  System_String_o *v72; // x4
  int32_t v73; // w5
  int64_t v74; // x6
  System_String_o *v75; // x7
  Il2CppObject *v76; // x0
  int32_t v77; // w2
  int32_t v78; // w3
  System_String_o *v79; // x4
  int32_t v80; // w5
  int64_t v81; // x6
  System_String_o *v82; // x7
  Il2CppObject *v83; // x0
  int32_t v84; // w2
  int32_t v85; // w3
  System_String_o *v86; // x4
  int32_t v87; // w5
  int64_t v88; // x6
  System_String_o *v89; // x7
  int32_t v90; // w2
  int32_t v91; // w3
  System_String_o *v92; // x4
  int32_t v93; // w5
  int64_t v94; // x6
  System_String_o *v95; // x7
  Il2CppObject *v96; // x0
  int32_t v97; // w2
  int32_t v98; // w3
  System_String_o *v99; // x4
  int32_t v100; // w5
  int64_t v101; // x6
  System_String_o *v102; // x7
  Il2CppObject *v103; // x0
  int32_t v104; // w2
  int32_t v105; // w3
  System_String_o *v106; // x4
  int32_t v107; // w5
  int64_t v108; // x6
  System_String_o *v109; // x7
  Il2CppObject *v110; // x0
  int32_t v111; // w2
  int32_t v112; // w3
  System_String_o *v113; // x4
  int32_t v114; // w5
  int64_t v115; // x6
  System_String_o *v116; // x7
  Il2CppObject *v117; // x0
  int32_t v118; // w2
  int32_t v119; // w3
  System_String_o *v120; // x4
  int32_t v121; // w5
  int64_t v122; // x6
  System_String_o *v123; // x7
  System_Collections_Generic_IEnumerable_TSource__o *ListByEventId; // x21
  SubmarineMapAssetManager___c_c *v125; // x8
  System_Func_object__int__o *_9__69_2; // x22
  Il2CppObject *v127; // x23
  struct SubmarineMapAssetManager___c_StaticFields *static_fields; // x0
  int32_t v129; // w2
  int32_t v130; // w3
  System_String_o *v131; // x4
  int32_t v132; // w5
  int64_t v133; // x6
  System_String_o *v134; // x7
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
  if ( (byte_4D290C3 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_AssetData_GetObject_GameObject____79044816);
    sub_1C94098(&Method_AssetData_GetObject_SubmarineSettings___);
    sub_1C94098(&Method_AssetData_GetObject_Texture2D____79044848);
    sub_1C94098(&AssetManager_TypeInfo);
    sub_1C94098(&Method_DataManager_GetMasterData_EventPanelScanMaster___);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__GameObject__set_Item__);
    sub_1C94098(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C94098(&Method_System_Linq_Enumerable_Select_EventPanelScanEntity__int___);
    sub_1C94098(&System_Func_bool__TypeInfo);
    sub_1C94098(&System_Func_EventPanelScanEntity__int__TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&System_Text_RegularExpressions_Regex_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C94098(&Method_SubmarineMapAssetManager___c__CoLoadAssets_b__69_2__);
    sub_1C94098(&Method_SubmarineMapAssetManager___c__DisplayClass69_0__CoLoadAssets_b__0__);
    sub_1C94098(&Method_SubmarineMapAssetManager___c__DisplayClass69_0__CoLoadAssets_b__1__);
    sub_1C94098(&SubmarineMapAssetManager___c__DisplayClass69_0_TypeInfo);
    sub_1C94098(&SubmarineMapAssetManager___c_TypeInfo);
    sub_1C94098(&UnityEngine_WaitUntil_TypeInfo);
    sub_1C94098(&StringLiteral_5930/*"EffectScannedPanel"*/);
    sub_1C94098(&StringLiteral_12667/*"Scanner_(?<ID>\\d+)"*/);
    sub_1C94098(&StringLiteral_13206/*"SubmarineScanConfirmDialog"*/);
    sub_1C94098(&StringLiteral_18912/*"ef_animation_skip"*/);
    sub_1C94098(&StringLiteral_13204/*"SubmarinePanel"*/);
    sub_1C94098(&StringLiteral_13208/*"SubmarineSelectScannerDialog"*/);
    sub_1C94098(&StringLiteral_13197/*"SubmarineEffectScanObstaclePanel"*/);
    sub_1C94098(&StringLiteral_13200/*"SubmarineGridLine"*/);
    sub_1C94098(&StringLiteral_13205/*"SubmarinePanelContainer"*/);
    sub_1C94098(&StringLiteral_13207/*"SubmarineScanRangeNotificator_(?<ID>\\d+)"*/);
    sub_1C94098(&StringLiteral_13203/*"SubmarineNewScannerDialog"*/);
    sub_1C94098(&StringLiteral_13201/*"SubmarineGridTexture"*/);
    sub_1C94098(&StringLiteral_13199/*"SubmarineEffectSelectedPanel"*/);
    sub_1C94098(&StringLiteral_13196/*"SubmarineEffectContainer"*/);
    sub_1C94098(&StringLiteral_13198/*"SubmarineEffectScannablePanel"*/);
    sub_1C94098(&StringLiteral_7438/*"ID"*/);
    this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)sub_1C94098(&StringLiteral_13209/*"SubmarineSettings"*/);
    byte_4D290C3 = 1;
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
      this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)AssetManager__getAssetStorage_41293480(loadAssetNames, 0);
      if ( this )
      {
        if ( !LODWORD(this->fields.__2__current) )
          goto LABEL_61;
        v19 = (AssetData_o *)this->fields.__4__this;
        if ( v19 )
        {
          Object_object__51893132 = AssetData__GetObject_object__51893132(
                                      (AssetData_o *)this->fields.__4__this,
                                      (System_String_o *)StringLiteral_13204/*"SubmarinePanel"*/,
                                      (const MethodInfo_317D38C *)Method_AssetData_GetObject_GameObject____79044816);
          _4__this->fields._PanelPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)Object_object__51893132;
          sub_1C9403C(
            (GrandQuestFolderBoardItem_o *)&_4__this->fields,
            (int32_t)Object_object__51893132,
            v21,
            v22,
            v23,
            v24,
            v25,
            v26);
          v27 = AssetData__GetObject_object__51893132(
                  v19,
                  (System_String_o *)StringLiteral_13200/*"SubmarineGridLine"*/,
                  (const MethodInfo_317D38C *)Method_AssetData_GetObject_GameObject____79044816);
          _4__this->fields._GridLinePrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v27;
          sub_1C9403C(
            (GrandQuestFolderBoardItem_o *)&_4__this->fields._GridLinePrefab_k__BackingField,
            (int32_t)v27,
            v28,
            v29,
            v30,
            v31,
            v32,
            v33);
          v34 = AssetData__GetObject_object__51893132(
                  v19,
                  (System_String_o *)StringLiteral_13205/*"SubmarinePanelContainer"*/,
                  (const MethodInfo_317D38C *)Method_AssetData_GetObject_GameObject____79044816);
          _4__this->fields._PanelContainerPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v34;
          sub_1C9403C(
            (GrandQuestFolderBoardItem_o *)&_4__this->fields._PanelContainerPrefab_k__BackingField,
            (int32_t)v34,
            v35,
            v36,
            v37,
            v38,
            v39,
            v40);
          v41 = AssetData__GetObject_object__51893132(
                  v19,
                  (System_String_o *)StringLiteral_13196/*"SubmarineEffectContainer"*/,
                  (const MethodInfo_317D38C *)Method_AssetData_GetObject_GameObject____79044816);
          _4__this->fields._EffectContainerPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v41;
          sub_1C9403C(
            (GrandQuestFolderBoardItem_o *)&_4__this->fields._EffectContainerPrefab_k__BackingField,
            (int32_t)v41,
            v42,
            v43,
            v44,
            v45,
            v46,
            v47);
          v48 = AssetData__GetObject_object__51893132(
                  v19,
                  (System_String_o *)StringLiteral_5930/*"EffectScannedPanel"*/,
                  (const MethodInfo_317D38C *)Method_AssetData_GetObject_GameObject____79044816);
          _4__this->fields._EffectScannedPanelPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v48;
          sub_1C9403C(
            (GrandQuestFolderBoardItem_o *)&_4__this->fields._EffectScannedPanelPrefab_k__BackingField,
            (int32_t)v48,
            v49,
            v50,
            v51,
            v52,
            v53,
            v54);
          v55 = AssetData__GetObject_object__51893132(
                  v19,
                  (System_String_o *)StringLiteral_13199/*"SubmarineEffectSelectedPanel"*/,
                  (const MethodInfo_317D38C *)Method_AssetData_GetObject_GameObject____79044816);
          _4__this->fields._EffectSelectedPanelPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v55;
          sub_1C9403C(
            (GrandQuestFolderBoardItem_o *)&_4__this->fields._EffectSelectedPanelPrefab_k__BackingField,
            (int32_t)v55,
            v56,
            v57,
            v58,
            v59,
            v60,
            v61);
          v62 = AssetData__GetObject_object__51893132(
                  v19,
                  (System_String_o *)StringLiteral_13198/*"SubmarineEffectScannablePanel"*/,
                  (const MethodInfo_317D38C *)Method_AssetData_GetObject_GameObject____79044816);
          _4__this->fields._EffectScannablePanelPrafab_k__BackingField = (struct UnityEngine_GameObject_o *)v62;
          sub_1C9403C(
            (GrandQuestFolderBoardItem_o *)&_4__this->fields._EffectScannablePanelPrafab_k__BackingField,
            (int32_t)v62,
            v63,
            v64,
            v65,
            v66,
            v67,
            v68);
          v69 = AssetData__GetObject_object__51893132(
                  v19,
                  (System_String_o *)StringLiteral_13197/*"SubmarineEffectScanObstaclePanel"*/,
                  (const MethodInfo_317D38C *)Method_AssetData_GetObject_GameObject____79044816);
          _4__this->fields._EffectScanObstaclePanelPrafab_k__BackingField = (struct UnityEngine_GameObject_o *)v69;
          sub_1C9403C(
            (GrandQuestFolderBoardItem_o *)&_4__this->fields._EffectScanObstaclePanelPrafab_k__BackingField,
            (int32_t)v69,
            v70,
            v71,
            v72,
            v73,
            v74,
            v75);
          v76 = AssetData__GetObject_object__51893132(
                  v19,
                  (System_String_o *)StringLiteral_13201/*"SubmarineGridTexture"*/,
                  (const MethodInfo_317D38C *)Method_AssetData_GetObject_Texture2D____79044848);
          _4__this->fields._GridTexture_k__BackingField = (struct UnityEngine_Texture2D_o *)v76;
          sub_1C9403C(
            (GrandQuestFolderBoardItem_o *)&_4__this->fields._GridTexture_k__BackingField,
            (int32_t)v76,
            v77,
            v78,
            v79,
            v80,
            v81,
            v82);
          v83 = AssetData__GetObject_object__51893132(
                  v19,
                  (System_String_o *)StringLiteral_13209/*"SubmarineSettings"*/,
                  (const MethodInfo_317D38C *)Method_AssetData_GetObject_SubmarineSettings___);
          _4__this->fields._Settings_k__BackingField = (struct SubmarineSettings_o *)v83;
          sub_1C9403C(
            (GrandQuestFolderBoardItem_o *)&_4__this->fields._Settings_k__BackingField,
            (int32_t)v83,
            v84,
            v85,
            v86,
            v87,
            v88,
            v89);
          _4__this->fields._ScanProcessPreventedPrafab_k__BackingField = 0;
          sub_1C9403C(
            (GrandQuestFolderBoardItem_o *)&_4__this->fields._ScanProcessPreventedPrafab_k__BackingField,
            0,
            v90,
            v91,
            v92,
            v93,
            v94,
            v95);
          v96 = AssetData__GetObject_object__51893132(
                  v19,
                  (System_String_o *)StringLiteral_18912/*"ef_animation_skip"*/,
                  (const MethodInfo_317D38C *)Method_AssetData_GetObject_GameObject____79044816);
          _4__this->fields._AnimationSkipEFfectPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v96;
          sub_1C9403C(
            (GrandQuestFolderBoardItem_o *)&_4__this->fields._AnimationSkipEFfectPrefab_k__BackingField,
            (int32_t)v96,
            v97,
            v98,
            v99,
            v100,
            v101,
            v102);
          v103 = AssetData__GetObject_object__51893132(
                   v19,
                   (System_String_o *)StringLiteral_13208/*"SubmarineSelectScannerDialog"*/,
                   (const MethodInfo_317D38C *)Method_AssetData_GetObject_GameObject____79044816);
          _4__this->fields._SelectScannerDialogPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v103;
          sub_1C9403C(
            (GrandQuestFolderBoardItem_o *)&_4__this->fields._SelectScannerDialogPrefab_k__BackingField,
            (int32_t)v103,
            v104,
            v105,
            v106,
            v107,
            v108,
            v109);
          v110 = AssetData__GetObject_object__51893132(
                   v19,
                   (System_String_o *)StringLiteral_13206/*"SubmarineScanConfirmDialog"*/,
                   (const MethodInfo_317D38C *)Method_AssetData_GetObject_GameObject____79044816);
          _4__this->fields._ScanConfirmDialogPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v110;
          sub_1C9403C(
            (GrandQuestFolderBoardItem_o *)&_4__this->fields._ScanConfirmDialogPrefab_k__BackingField,
            (int32_t)v110,
            v111,
            v112,
            v113,
            v114,
            v115,
            v116);
          v117 = AssetData__GetObject_object__51893132(
                   v19,
                   (System_String_o *)StringLiteral_13203/*"SubmarineNewScannerDialog"*/,
                   (const MethodInfo_317D38C *)Method_AssetData_GetObject_GameObject____79044816);
          _4__this->fields._NewScannerDialogPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v117;
          sub_1C9403C(
            (GrandQuestFolderBoardItem_o *)&_4__this->fields._NewScannerDialogPrefab_k__BackingField,
            (int32_t)v117,
            v118,
            v119,
            v120,
            v121,
            v122,
            v123);
          this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( this )
          {
            this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)DataManager__GetMasterData_object_(
                                                                       (DataManager_o *)this,
                                                                       (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_EventPanelScanMaster___);
            if ( this )
            {
              ListByEventId = (System_Collections_Generic_IEnumerable_TSource__o *)EventPanelScanMaster__GetListByEventId(
                                                                                     (EventPanelScanMaster_o *)this,
                                                                                     v2->fields.eventId,
                                                                                     0);
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
                _9__69_2 = (System_Func_object__int__o *)sub_1C942E4(System_Func_EventPanelScanEntity__int__TypeInfo);
                System_Func_object__int____ctor(
                  _9__69_2,
                  v127,
                  Method_SubmarineMapAssetManager___c__CoLoadAssets_b__69_2__,
                  0);
                static_fields = SubmarineMapAssetManager___c_TypeInfo->static_fields;
                static_fields->__9__69_2 = (struct System_Func_EventPanelScanEntity__int__o *)_9__69_2;
                sub_1C9403C(
                  (GrandQuestFolderBoardItem_o *)&static_fields->__9__69_2,
                  (int32_t)_9__69_2,
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
                                                                            (const MethodInfo_31D2810 *)Method_System_Linq_Enumerable_Select_EventPanelScanEntity__int___);
              v136 = (System_Text_RegularExpressions_Regex_o *)sub_1C942E4(System_Text_RegularExpressions_Regex_TypeInfo);
              System_Text_RegularExpressions_Regex___ctor_70938396(v136, (System_String_o *)StringLiteral_12667/*"Scanner_(?<ID>\\d+)"*/, 0);
              this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)AssetData__GetObjectNameList(v19, 0);
              if ( this )
              {
                _2__current = this->fields.__2__current;
                v138 = this;
                v158 = v2;
                if ( (int)_2__current < 1 )
                {
LABEL_40:
                  v146 = (System_Text_RegularExpressions_Regex_o *)sub_1C942E4(System_Text_RegularExpressions_Regex_TypeInfo);
                  System_Text_RegularExpressions_Regex___ctor_70938396(v146, (System_String_o *)StringLiteral_13207/*"SubmarineScanRangeNotificator_(?<ID>\\d+)"*/, 0);
                  this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)AssetData__GetObjectNameList(v19, 0);
                  if ( !this )
                    goto LABEL_60;
                  v147 = this->fields.__2__current;
                  v148 = this;
                  if ( (int)v147 < 1 )
                  {
LABEL_56:
                    finishCallback = v158->fields.finishCallback;
                    if ( finishCallback )
                      ActionExtensions__Call(finishCallback, 0);
                    return 0;
                  }
                  v149 = 0;
                  p__4__this = &this->fields.__4__this;
                  while ( v149 < (unsigned int)v147 )
                  {
                    if ( !v146 )
                      goto LABEL_60;
                    v151 = (System_String_o *)p__4__this[v149];
                    this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)System_Text_RegularExpressions_Regex__Match_70934016(
                                                                               v146,
                                                                               v151,
                                                                               0);
                    if ( !this )
                      goto LABEL_60;
                    v152 = this;
                    this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)System_Text_RegularExpressions_Group__get_Success(
                                                                               (System_Text_RegularExpressions_Group_o *)this,
                                                                               0);
                    if ( ((unsigned __int8)this & 1) != 0 )
                    {
                      this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)((__int64 (__fastcall *)(SubmarineMapAssetManager__CoLoadAssets_d__69_o *, const MethodInfo *))v152->klass->vtable._5_System_IDisposable_Dispose.methodPtr)(
                                                                                 v152,
                                                                                 v152->klass->vtable._5_System_IDisposable_Dispose.method);
                      if ( !this )
                        goto LABEL_60;
                      this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)System_Text_RegularExpressions_GroupCollection__get_Item_70917060(
                                                                                 (System_Text_RegularExpressions_GroupCollection_o *)this,
                                                                                 (System_String_o *)StringLiteral_7438/*"ID"*/,
                                                                                 0);
                      if ( !this )
                        goto LABEL_60;
                      Value = System_Text_RegularExpressions_Capture__get_Value(
                                (System_Text_RegularExpressions_Capture_o *)this,
                                0);
                      v154 = System_Int32__Parse(Value, 0);
                      this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)System_Linq_Enumerable__Contains_int_(
                                                                                 v135,
                                                                                 v154,
                                                                                 (const MethodInfo_31B9458 *)Method_System_Linq_Enumerable_Contains_int___);
                      if ( ((unsigned __int8)this & 1) != 0 )
                      {
                        v155 = AssetData__GetObject_object__51893132(
                                 v19,
                                 v151,
                                 (const MethodInfo_317D38C *)Method_AssetData_GetObject_GameObject____79044816);
                        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                        this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)UnityEngine_Object__op_Equality(
                                                                                   (UnityEngine_Object_o *)v155,
                                                                                   0,
                                                                                   0);
                        if ( ((unsigned __int8)this & 1) == 0 )
                        {
                          this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)_4__this->fields.scanRangeNotificatorPrefabDict;
                          if ( !this )
                            goto LABEL_60;
                          System_Collections_Generic_Dictionary_int__object___set_Item(
                            (System_Collections_Generic_Dictionary_int__object__o *)this,
                            v154,
                            v155,
                            (const MethodInfo_34B48C0 *)Method_System_Collections_Generic_Dictionary_int__GameObject__set_Item__);
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
                  v139 = 0;
                  v140 = &this->fields.__4__this;
                  while ( v139 < (unsigned int)_2__current )
                  {
                    if ( !v136 )
                      goto LABEL_60;
                    v141 = (System_String_o *)v140[v139];
                    this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)System_Text_RegularExpressions_Regex__Match_70934016(
                                                                               v136,
                                                                               v141,
                                                                               0);
                    if ( !this )
                      goto LABEL_60;
                    v142 = this;
                    this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)System_Text_RegularExpressions_Group__get_Success(
                                                                               (System_Text_RegularExpressions_Group_o *)this,
                                                                               0);
                    if ( ((unsigned __int8)this & 1) != 0 )
                    {
                      this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)((__int64 (__fastcall *)(SubmarineMapAssetManager__CoLoadAssets_d__69_o *, const MethodInfo *))v142->klass->vtable._5_System_IDisposable_Dispose.methodPtr)(
                                                                                 v142,
                                                                                 v142->klass->vtable._5_System_IDisposable_Dispose.method);
                      if ( !this )
                        goto LABEL_60;
                      this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)System_Text_RegularExpressions_GroupCollection__get_Item_70917060(
                                                                                 (System_Text_RegularExpressions_GroupCollection_o *)this,
                                                                                 (System_String_o *)StringLiteral_7438/*"ID"*/,
                                                                                 0);
                      if ( !this )
                        goto LABEL_60;
                      v143 = System_Text_RegularExpressions_Capture__get_Value(
                               (System_Text_RegularExpressions_Capture_o *)this,
                               0);
                      v144 = System_Int32__Parse(v143, 0);
                      this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)System_Linq_Enumerable__Contains_int_(
                                                                                 v135,
                                                                                 v144,
                                                                                 (const MethodInfo_31B9458 *)Method_System_Linq_Enumerable_Contains_int___);
                      if ( ((unsigned __int8)this & 1) != 0 )
                      {
                        v145 = AssetData__GetObject_object__51893132(
                                 v19,
                                 v141,
                                 (const MethodInfo_317D38C *)Method_AssetData_GetObject_GameObject____79044816);
                        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                        this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)UnityEngine_Object__op_Equality(
                                                                                   (UnityEngine_Object_o *)v145,
                                                                                   0,
                                                                                   0);
                        if ( ((unsigned __int8)this & 1) == 0 )
                        {
                          this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)_4__this->fields.scannerPrefabDict;
                          if ( !this )
                            goto LABEL_60;
                          System_Collections_Generic_Dictionary_int__object___set_Item(
                            (System_Collections_Generic_Dictionary_int__object__o *)this,
                            v144,
                            v145,
                            (const MethodInfo_34B48C0 *)Method_System_Collections_Generic_Dictionary_int__GameObject__set_Item__);
                        }
                      }
                    }
                    LODWORD(_2__current) = v138->fields.__2__current;
                    if ( (__int64)++v139 >= (int)_2__current )
                      goto LABEL_40;
                  }
                }
LABEL_61:
                sub_1C942F8(this);
              }
            }
          }
        }
      }
    }
LABEL_60:
    sub_1C942F0(this, method);
  }
  if ( _1__state )
    return 0;
  v2->fields.__1__state = -1;
  v5 = sub_1C942E4(SubmarineMapAssetManager___c__DisplayClass69_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_60;
  *(_BYTE *)(v5 + 16) = 0;
  if ( !_4__this )
    goto LABEL_60;
  v6 = _4__this->fields.loadAssetNames;
  v7 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
  System_Action___ctor(
    v7,
    (Il2CppObject *)v5,
    Method_SubmarineMapAssetManager___c__DisplayClass69_0__CoLoadAssets_b__0__,
    0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  v8 = 1;
  AssetManager__loadAssetStorage_41292120(v6, v7, 1, 0);
  v9 = (System_Func_bool__o *)sub_1C942E4(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_SubmarineMapAssetManager___c__DisplayClass69_0__CoLoadAssets_b__1__,
    0);
  v10 = (UnityEngine_WaitUntil_o *)sub_1C942E4(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v10, v9, 0);
  v2->fields.__2__current = (Il2CppObject *)v10;
  p__2__current = (GrandQuestFolderBoardItem_o *)&v2->fields.__2__current;
  sub_1C9403C(p__2__current, (int32_t)v10, v12, v13, v14, v15, v16, v17);
  LODWORD(p__2__current[-1].fields._ClosedMessage_k__BackingField) = 1;
  return v8;
}


Il2CppObject *SubmarineMapAssetManager__CoLoadAssets_d__69__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        SubmarineMapAssetManager__CoLoadAssets_d__69_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn SubmarineMapAssetManager__CoLoadAssets_d__69__System_Collections_IEnumerator_Reset(
        SubmarineMapAssetManager__CoLoadAssets_d__69_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C940AC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C942E4(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C940AC(&Method_SubmarineMapAssetManager__CoLoadAssets_d__69_System_Collections_IEnumerator_Reset__);
  sub_1C941C0(v3, v4);
}


Il2CppObject *SubmarineMapAssetManager__CoLoadAssets_d__69__System_Collections_IEnumerator_get_Current(
        SubmarineMapAssetManager__CoLoadAssets_d__69_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void SubmarineMapAssetManager__CoLoadAssets_d__69__System_IDisposable_Dispose(
        SubmarineMapAssetManager__CoLoadAssets_d__69_o *this,
        const MethodInfo *method)
{
  ;
}


void SubmarineMapAssetManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D290C2 & 1) == 0 )
  {
    sub_1C94098(&SubmarineMapAssetManager___c_TypeInfo);
    byte_4D290C2 = 1;
  }
  v1 = (Il2CppObject *)sub_1C942E4(SubmarineMapAssetManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  SubmarineMapAssetManager___c_TypeInfo->static_fields->__9 = (struct SubmarineMapAssetManager___c_o *)v1;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)SubmarineMapAssetManager___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void SubmarineMapAssetManager___c___ctor(SubmarineMapAssetManager___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t SubmarineMapAssetManager___c___CoLoadAssets_b__69_2(
        SubmarineMapAssetManager___c_o *this,
        EventPanelScanEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C942F0(this, 0);
  return x->fields.objectId;
}


void SubmarineMapAssetManager___c__DisplayClass69_0___ctor(
        SubmarineMapAssetManager___c__DisplayClass69_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SubmarineMapAssetManager___c__DisplayClass69_0___CoLoadAssets_b__0(
        SubmarineMapAssetManager___c__DisplayClass69_0_o *this,
        const MethodInfo *method)
{
  this->fields.loadEnd = 1;
}


bool SubmarineMapAssetManager___c__DisplayClass69_0___CoLoadAssets_b__1(
        SubmarineMapAssetManager___c__DisplayClass69_0_o *this,
        const MethodInfo *method)
{
  return this->fields.loadEnd;
}