void SubmarineMapAssetManager___ctor(SubmarineMapAssetManager_o *this, const MethodInfo *method)
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

  if ( (byte_596CF96 & 1) == 0 )
  {
    sub_2213A60(&string___TypeInfo);
    sub_2213A60(&StringLiteral_6459/*"Event/Submarine"*/);
    byte_596CF96 = 1;
  }
  v3 = sub_2213B20(string___TypeInfo, 1);
  if ( !v3 )
    sub_2213CDC(0, v4);
  v11 = (struct System_String_array *)v3;
  if ( !*(_DWORD *)(v3 + 24) )
    sub_2213CE4(v3);
  v12 = StringLiteral_6459/*"Event/Submarine"*/;
  *(_QWORD *)(v3 + 32) = StringLiteral_6459/*"Event/Submarine"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 32), v12, v5, v6, v7, v8, v9, v10);
  this->fields.loadAssetNames = v11;
  sub_2213A04(
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


System_Collections_IEnumerator_o *SubmarineMapAssetManager__CoLoadAssets(
        SubmarineMapAssetManager_o *this,
        int32_t eventId,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v7; // x22
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7

  if ( (byte_596CF92 & 1) == 0 )
  {
    sub_2213A60(&SubmarineMapAssetManager__CoLoadAssets_d__69_TypeInfo);
    byte_596CF92 = 1;
  }
  v7 = sub_2213CCC(SubmarineMapAssetManager__CoLoadAssets_d__69_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 32) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 32), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_DWORD *)(v7 + 40) = eventId;
  *(_QWORD *)(v7 + 48) = finishCallback;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 48), (int32_t)finishCallback, v14, v15, v16, v17, v18, v19);
  return (System_Collections_IEnumerator_o *)v7;
}


void SubmarineMapAssetManager__Finish(SubmarineMapAssetManager_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_int__GameObject__o *scannerPrefabDict; // x0
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
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
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  System_String_o *v40; // x2
  System_String_o *v41; // x3
  int32_t v42; // w4
  int32_t v43; // w5
  bool v44; // w6
  bool v45; // w7
  System_String_o *v46; // x2
  System_String_o *v47; // x3
  int32_t v48; // w4
  int32_t v49; // w5
  bool v50; // w6
  bool v51; // w7
  System_String_o *v52; // x2
  System_String_o *v53; // x3
  int32_t v54; // w4
  int32_t v55; // w5
  bool v56; // w6
  bool v57; // w7
  System_String_o *v58; // x2
  System_String_o *v59; // x3
  int32_t v60; // w4
  int32_t v61; // w5
  bool v62; // w6
  bool v63; // w7
  System_String_o *v64; // x2
  System_String_o *v65; // x3
  int32_t v66; // w4
  int32_t v67; // w5
  bool v68; // w6
  bool v69; // w7
  System_String_o *v70; // x2
  System_String_o *v71; // x3
  int32_t v72; // w4
  int32_t v73; // w5
  bool v74; // w6
  bool v75; // w7
  System_String_o *v76; // x2
  System_String_o *v77; // x3
  int32_t v78; // w4
  int32_t v79; // w5
  bool v80; // w6
  bool v81; // w7
  System_String_o *v82; // x2
  System_String_o *v83; // x3
  int32_t v84; // w4
  int32_t v85; // w5
  bool v86; // w6
  bool v87; // w7
  System_String_o *v88; // x2
  System_String_o *v89; // x3
  int32_t v90; // w4
  int32_t v91; // w5
  bool v92; // w6
  bool v93; // w7
  struct UnityEngine_GameObject_o **p_AnimationSkipEFfectPrefab_k__BackingField; // x19
  System_String_o *v95; // x2
  System_String_o *v96; // x3
  int32_t v97; // w4
  int32_t v98; // w5
  bool v99; // w6
  bool v100; // w7
  __int64 v101; // x1
  __int64 v102; // x2
  System_String_array *v103; // x19

  if ( (byte_596CF95 & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__GameObject__Clear__);
    byte_596CF95 = 1;
  }
  scannerPrefabDict = this->fields.scannerPrefabDict;
  if ( !scannerPrefabDict
    || (System_Collections_Generic_Dictionary_int__object___Clear(
          (System_Collections_Generic_Dictionary_int__object__o *)scannerPrefabDict,
          (const MethodInfo_3F9C638 *)Method_System_Collections_Generic_Dictionary_int__GameObject__Clear__),
        (scannerPrefabDict = this->fields.scanRangeNotificatorPrefabDict) == 0) )
  {
    sub_2213CDC(scannerPrefabDict, method);
  }
  System_Collections_Generic_Dictionary_int__object___Clear(
    (System_Collections_Generic_Dictionary_int__object__o *)scannerPrefabDict,
    (const MethodInfo_3F9C638 *)Method_System_Collections_Generic_Dictionary_int__GameObject__Clear__);
  this->fields._PanelPrefab_k__BackingField = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields, 0, v4, v5, v6, v7, v8, v9);
  this->fields._GridLinePrefab_k__BackingField = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._GridLinePrefab_k__BackingField,
    0,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  this->fields._PanelContainerPrefab_k__BackingField = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._PanelContainerPrefab_k__BackingField,
    0,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  this->fields._EffectContainerPrefab_k__BackingField = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._EffectContainerPrefab_k__BackingField,
    0,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  this->fields._ClosedPanelTexture_k__BackingField = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._ClosedPanelTexture_k__BackingField,
    0,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  this->fields._GridTexture_k__BackingField = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._GridTexture_k__BackingField,
    0,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  this->fields._EffectScannedPanelPrefab_k__BackingField = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._EffectScannedPanelPrefab_k__BackingField,
    0,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
  this->fields._EffectSelectedPanelPrefab_k__BackingField = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._EffectSelectedPanelPrefab_k__BackingField,
    0,
    v46,
    v47,
    v48,
    v49,
    v50,
    v51);
  this->fields._EffectScannablePanelPrafab_k__BackingField = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._EffectScannablePanelPrafab_k__BackingField,
    0,
    v52,
    v53,
    v54,
    v55,
    v56,
    v57);
  this->fields._EffectScanObstaclePanelPrafab_k__BackingField = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._EffectScanObstaclePanelPrafab_k__BackingField,
    0,
    v58,
    v59,
    v60,
    v61,
    v62,
    v63);
  this->fields._ScanProcessPreventedPrafab_k__BackingField = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._ScanProcessPreventedPrafab_k__BackingField,
    0,
    v64,
    v65,
    v66,
    v67,
    v68,
    v69);
  this->fields._SelectScannerDialogPrefab_k__BackingField = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._SelectScannerDialogPrefab_k__BackingField,
    0,
    v70,
    v71,
    v72,
    v73,
    v74,
    v75);
  this->fields._ScanConfirmDialogPrefab_k__BackingField = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._ScanConfirmDialogPrefab_k__BackingField,
    0,
    v76,
    v77,
    v78,
    v79,
    v80,
    v81);
  this->fields._NewScannerDialogPrefab_k__BackingField = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._NewScannerDialogPrefab_k__BackingField,
    0,
    v82,
    v83,
    v84,
    v85,
    v86,
    v87);
  this->fields._Settings_k__BackingField = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._Settings_k__BackingField,
    0,
    v88,
    v89,
    v90,
    v91,
    v92,
    v93);
  this->fields._AnimationSkipEFfectPrefab_k__BackingField = 0;
  p_AnimationSkipEFfectPrefab_k__BackingField = &this->fields._AnimationSkipEFfectPrefab_k__BackingField;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)p_AnimationSkipEFfectPrefab_k__BackingField,
    0,
    v95,
    v96,
    v97,
    v98,
    v99,
    v100);
  v103 = (System_String_array *)p_AnimationSkipEFfectPrefab_k__BackingField[3];
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v101, v102);
  AssetManager__releaseAssetStorage_47506132(v103, 0);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *SubmarineMapAssetManager__GetScanAnimObjectPrefab(
        SubmarineMapAssetManager_o *this,
        int32_t scanObjectId,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_int__GameObject__o *scannerPrefabDict; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_596CF93 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__GameObject__TryGetValue__);
    byte_596CF93 = 1;
  }
  scannerPrefabDict = this->fields.scannerPrefabDict;
  value = 0;
  if ( !scannerPrefabDict )
    sub_2213CDC(0, *(_QWORD *)&scanObjectId);
  System_Collections_Generic_Dictionary_int__object___TryGetValue(
    (System_Collections_Generic_Dictionary_int__object__o *)scannerPrefabDict,
    scanObjectId,
    &value,
    (const MethodInfo_3F9DF8C *)Method_System_Collections_Generic_Dictionary_int__GameObject__TryGetValue__);
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

  if ( (byte_596CF94 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__GameObject__TryGetValue__);
    byte_596CF94 = 1;
  }
  scanRangeNotificatorPrefabDict = this->fields.scanRangeNotificatorPrefabDict;
  value = 0;
  if ( !scanRangeNotificatorPrefabDict )
    sub_2213CDC(0, *(_QWORD *)&scanObjectId);
  System_Collections_Generic_Dictionary_int__object___TryGetValue(
    (System_Collections_Generic_Dictionary_int__object__o *)scanRangeNotificatorPrefabDict,
    scanObjectId,
    &value,
    (const MethodInfo_3F9DF8C *)Method_System_Collections_Generic_Dictionary_int__GameObject__TryGetValue__);
  return (UnityEngine_GameObject_o *)value;
}


void SubmarineMapAssetManager__Initialize(SubmarineMapAssetManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  System_Collections_Generic_Dictionary_int__object__o *v10; // x20
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7

  if ( (byte_596CF90 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__GameObject___ctor__);
    sub_2213A60(&System_Collections_Generic_Dictionary_int__GameObject__TypeInfo);
    byte_596CF90 = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_int__object__o *)sub_2213CCC(System_Collections_Generic_Dictionary_int__GameObject__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v3,
    (const MethodInfo_3F9BAFC *)Method_System_Collections_Generic_Dictionary_int__GameObject___ctor__);
  this->fields.scannerPrefabDict = (struct System_Collections_Generic_Dictionary_int__GameObject__o *)v3;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.scannerPrefabDict, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = (System_Collections_Generic_Dictionary_int__object__o *)sub_2213CCC(System_Collections_Generic_Dictionary_int__GameObject__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v10,
    (const MethodInfo_3F9BAFC *)Method_System_Collections_Generic_Dictionary_int__GameObject___ctor__);
  this->fields.scanRangeNotificatorPrefabDict = (struct System_Collections_Generic_Dictionary_int__GameObject__o *)v10;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.scanRangeNotificatorPrefabDict,
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
  Il2CppObject *Object_object__58532980; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  int32_t v17; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_596CF91 & 1) == 0 )
  {
    sub_2213A60(&Method_AssetData_GetObject_Texture2D____91708360);
    sub_2213A60(&StringLiteral_26456/*"{0:D6}_ClosedPanelTexture"*/);
    byte_596CF91 = 1;
  }
  v17 = mapId;
  v7 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v17);
  v8 = System_String__Format((System_String_o *)StringLiteral_26456/*"{0:D6}_ClosedPanelTexture"*/, v7, 0);
  if ( !assetData )
    sub_2213CDC(v8, v9);
  Object_object__58532980 = AssetData__GetObject_object__58532980(
                              assetData,
                              v8,
                              (const MethodInfo_37D2474 *)Method_AssetData_GetObject_Texture2D____91708360);
  this->fields._ClosedPanelTexture_k__BackingField = (struct UnityEngine_Texture2D_o *)Object_object__58532980;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._ClosedPanelTexture_k__BackingField,
    (int32_t)Object_object__58532980,
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._AnimationSkipEFfectPrefab_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._AnimationSkipEFfectPrefab_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._ClosedPanelTexture_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._ClosedPanelTexture_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._EffectContainerPrefab_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._EffectContainerPrefab_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._EffectScanObstaclePanelPrafab_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._EffectScanObstaclePanelPrafab_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._EffectScannablePanelPrafab_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._EffectScannablePanelPrafab_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._EffectScannedPanelPrefab_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._EffectScannedPanelPrefab_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._EffectSelectedPanelPrefab_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._EffectSelectedPanelPrefab_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._GridLinePrefab_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._GridLinePrefab_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._GridTexture_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._GridTexture_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._NewScannerDialogPrefab_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._NewScannerDialogPrefab_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._PanelContainerPrefab_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._PanelContainerPrefab_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._PanelPrefab_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void SubmarineMapAssetManager__set_ScanConfirmDialogPrefab(
        SubmarineMapAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._ScanConfirmDialogPrefab_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._ScanConfirmDialogPrefab_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._ScanProcessPreventedPrafab_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._ScanProcessPreventedPrafab_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._SelectScannerDialogPrefab_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._SelectScannerDialogPrefab_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._Settings_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._Settings_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
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
  __int64 v2; // x2
  SubmarineMapAssetManager__CoLoadAssets_d__69_o *v3; // x24
  int _1__state; // w25
  struct SubmarineMapAssetManager_o *_4__this; // x27
  System_String_array *v6; // x20
  AssetData_o *v7; // x20
  Il2CppObject *Object_object__58532980; // x0
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  Il2CppObject *v15; // x0
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  Il2CppObject *v22; // x0
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  Il2CppObject *v29; // x0
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  Il2CppObject *v36; // x0
  System_String_o *v37; // x2
  System_String_o *v38; // x3
  int32_t v39; // w4
  int32_t v40; // w5
  bool v41; // w6
  bool v42; // w7
  Il2CppObject *v43; // x0
  System_String_o *v44; // x2
  System_String_o *v45; // x3
  int32_t v46; // w4
  int32_t v47; // w5
  bool v48; // w6
  bool v49; // w7
  Il2CppObject *v50; // x0
  System_String_o *v51; // x2
  System_String_o *v52; // x3
  int32_t v53; // w4
  int32_t v54; // w5
  bool v55; // w6
  bool v56; // w7
  Il2CppObject *v57; // x0
  System_String_o *v58; // x2
  System_String_o *v59; // x3
  int32_t v60; // w4
  int32_t v61; // w5
  bool v62; // w6
  bool v63; // w7
  Il2CppObject *v64; // x0
  System_String_o *v65; // x2
  System_String_o *v66; // x3
  int32_t v67; // w4
  int32_t v68; // w5
  bool v69; // w6
  bool v70; // w7
  Il2CppObject *v71; // x0
  System_String_o *v72; // x2
  System_String_o *v73; // x3
  int32_t v74; // w4
  int32_t v75; // w5
  bool v76; // w6
  bool v77; // w7
  System_String_o *v78; // x2
  System_String_o *v79; // x3
  int32_t v80; // w4
  int32_t v81; // w5
  bool v82; // w6
  bool v83; // w7
  Il2CppObject *v84; // x0
  System_String_o *v85; // x2
  System_String_o *v86; // x3
  int32_t v87; // w4
  int32_t v88; // w5
  bool v89; // w6
  bool v90; // w7
  Il2CppObject *v91; // x0
  System_String_o *v92; // x2
  System_String_o *v93; // x3
  int32_t v94; // w4
  int32_t v95; // w5
  bool v96; // w6
  bool v97; // w7
  Il2CppObject *v98; // x0
  System_String_o *v99; // x2
  System_String_o *v100; // x3
  int32_t v101; // w4
  int32_t v102; // w5
  bool v103; // w6
  bool v104; // w7
  Il2CppObject *v105; // x0
  System_String_o *v106; // x2
  System_String_o *v107; // x3
  int32_t v108; // w4
  int32_t v109; // w5
  bool v110; // w6
  bool v111; // w7
  __int64 v112; // x1
  __int64 v113; // x2
  System_Collections_Generic_IEnumerable_TSource__o *ListByEventId; // x21
  SubmarineMapAssetManager___c_c *v115; // x8
  struct SubmarineMapAssetManager___c_StaticFields *static_fields; // x9
  System_Func_object__int__o *_9__69_2; // x22
  Il2CppObject *v118; // x23
  struct SubmarineMapAssetManager___c_StaticFields *v119; // x0
  System_String_o *v120; // x2
  System_String_o *v121; // x3
  int32_t v122; // w4
  int32_t v123; // w5
  bool v124; // w6
  bool v125; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v126; // x21
  System_Text_RegularExpressions_Regex_o *v127; // x22
  Il2CppObject *_2__current; // x8
  SubmarineMapAssetManager__CoLoadAssets_d__69_o *v129; // x23
  unsigned __int64 v130; // x29
  struct SubmarineMapAssetManager_o **p__4__this; // x19
  System_String_o *v132; // x24
  SubmarineMapAssetManager__CoLoadAssets_d__69_o *v133; // x25
  System_String_o *Value; // x0
  int32_t v135; // w25
  __int64 v136; // x1
  __int64 v137; // x2
  Il2CppObject *v138; // x24
  System_Text_RegularExpressions_Regex_o *v139; // x22
  Il2CppObject *v140; // x8
  SubmarineMapAssetManager__CoLoadAssets_d__69_o *v141; // x23
  unsigned __int64 v142; // x29
  struct SubmarineMapAssetManager_o **v143; // x19
  System_String_o *v144; // x24
  SubmarineMapAssetManager__CoLoadAssets_d__69_o *v145; // x25
  System_String_o *v146; // x0
  int32_t v147; // w25
  __int64 v148; // x1
  __int64 v149; // x2
  Il2CppObject *v150; // x24
  System_Action_o *finishCallback; // x0
  __int64 v152; // x20
  System_String_array *loadAssetNames; // x21
  System_Action_o *v154; // x22
  __int64 v155; // x1
  __int64 v156; // x2
  System_Func_bool__o *v157; // x21
  UnityEngine_WaitUntil_o *v158; // x20
  MissionNaviTransitionBoardItem_o *p__2__current; // x24
  System_String_o *v160; // x2
  System_String_o *v161; // x3
  int32_t v162; // w4
  int32_t v163; // w5
  bool v164; // w6
  bool v165; // w7
  SubmarineMapAssetManager__CoLoadAssets_d__69_o *v167; // [xsp+8h] [xbp-68h]

  v3 = this;
  if ( (byte_596CF98 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_AssetData_GetObject_GameObject____91708320);
    sub_2213A60(&Method_AssetData_GetObject_SubmarineSettings___);
    sub_2213A60(&Method_AssetData_GetObject_Texture2D____91708360);
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_EventPanelScanMaster___);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__GameObject__set_Item__);
    sub_2213A60(&Method_System_Linq_Enumerable_Contains_int___);
    sub_2213A60(&Method_System_Linq_Enumerable_Select_EventPanelScanEntity__int___);
    sub_2213A60(&System_Func_bool__TypeInfo);
    sub_2213A60(&System_Func_EventPanelScanEntity__int__TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&System_Text_RegularExpressions_Regex_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_SubmarineMapAssetManager___c__CoLoadAssets_b__69_2__);
    sub_2213A60(&Method_SubmarineMapAssetManager___c__DisplayClass69_0__CoLoadAssets_b__0__);
    sub_2213A60(&Method_SubmarineMapAssetManager___c__DisplayClass69_0__CoLoadAssets_b__1__);
    sub_2213A60(&SubmarineMapAssetManager___c__DisplayClass69_0_TypeInfo);
    sub_2213A60(&SubmarineMapAssetManager___c_TypeInfo);
    sub_2213A60(&UnityEngine_WaitUntil_TypeInfo);
    sub_2213A60(&StringLiteral_6175/*"EffectScannedPanel"*/);
    sub_2213A60(&StringLiteral_13142/*"Scanner_(?<ID>\\d+)"*/);
    sub_2213A60(&StringLiteral_13705/*"SubmarineScanConfirmDialog"*/);
    sub_2213A60(&StringLiteral_19655/*"ef_animation_skip"*/);
    sub_2213A60(&StringLiteral_13703/*"SubmarinePanel"*/);
    sub_2213A60(&StringLiteral_13707/*"SubmarineSelectScannerDialog"*/);
    sub_2213A60(&StringLiteral_13696/*"SubmarineEffectScanObstaclePanel"*/);
    sub_2213A60(&StringLiteral_13699/*"SubmarineGridLine"*/);
    sub_2213A60(&StringLiteral_13704/*"SubmarinePanelContainer"*/);
    sub_2213A60(&StringLiteral_13706/*"SubmarineScanRangeNotificator_(?<ID>\\d+)"*/);
    sub_2213A60(&StringLiteral_13702/*"SubmarineNewScannerDialog"*/);
    sub_2213A60(&StringLiteral_13700/*"SubmarineGridTexture"*/);
    sub_2213A60(&StringLiteral_13698/*"SubmarineEffectSelectedPanel"*/);
    sub_2213A60(&StringLiteral_13695/*"SubmarineEffectContainer"*/);
    sub_2213A60(&StringLiteral_13697/*"SubmarineEffectScannablePanel"*/);
    sub_2213A60(&StringLiteral_7742/*"ID"*/);
    this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)sub_2213A60(&StringLiteral_13708/*"SubmarineSettings"*/);
    byte_596CF98 = 1;
  }
  _1__state = v3->fields.__1__state;
  _4__this = v3->fields.__4__this;
  if ( !_1__state )
  {
    v3->fields.__1__state = -1;
    v152 = sub_2213CCC(SubmarineMapAssetManager___c__DisplayClass69_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v152, 0);
    if ( v152 )
    {
      *(_BYTE *)(v152 + 16) = 0;
      if ( _4__this )
      {
        loadAssetNames = _4__this->fields.loadAssetNames;
        v154 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
        System_Action___ctor(
          v154,
          (Il2CppObject *)v152,
          Method_SubmarineMapAssetManager___c__DisplayClass69_0__CoLoadAssets_b__0__,
          0);
        if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v155, v156);
        AssetManager__loadAssetStorage_47503780(loadAssetNames, v154, 1, 0);
        v157 = (System_Func_bool__o *)sub_2213CCC(System_Func_bool__TypeInfo);
        System_Func_bool____ctor(
          v157,
          (Il2CppObject *)v152,
          Method_SubmarineMapAssetManager___c__DisplayClass69_0__CoLoadAssets_b__1__,
          0);
        v158 = (UnityEngine_WaitUntil_o *)sub_2213CCC(UnityEngine_WaitUntil_TypeInfo);
        UnityEngine_WaitUntil___ctor(v158, v157, 0);
        v3->fields.__2__current = (Il2CppObject *)v158;
        p__2__current = (MissionNaviTransitionBoardItem_o *)&v3->fields.__2__current;
        sub_2213A04(p__2__current, (int32_t)v158, v160, v161, v162, v163, v164, v165);
        p__2__current[-1].fields._BoardType_k__BackingField = 1;
        return _1__state == 0;
      }
    }
LABEL_59:
    sub_2213CDC(this, method);
  }
  if ( _1__state != 1 )
    return _1__state == 0;
  v3->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_59;
  v6 = _4__this->fields.loadAssetNames;
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, method, v2);
  this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)AssetManager__getAssetStorage_47505140(v6, 0);
  if ( !this )
    goto LABEL_59;
  if ( !LODWORD(this->fields.__2__current) )
    goto LABEL_60;
  v7 = (AssetData_o *)this->fields.__4__this;
  if ( !v7 )
    goto LABEL_59;
  Object_object__58532980 = AssetData__GetObject_object__58532980(
                              (AssetData_o *)this->fields.__4__this,
                              (System_String_o *)StringLiteral_13703/*"SubmarinePanel"*/,
                              (const MethodInfo_37D2474 *)Method_AssetData_GetObject_GameObject____91708320);
  _4__this->fields._PanelPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)Object_object__58532980;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&_4__this->fields,
    (int32_t)Object_object__58532980,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  v15 = AssetData__GetObject_object__58532980(
          v7,
          (System_String_o *)StringLiteral_13699/*"SubmarineGridLine"*/,
          (const MethodInfo_37D2474 *)Method_AssetData_GetObject_GameObject____91708320);
  _4__this->fields._GridLinePrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v15;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&_4__this->fields._GridLinePrefab_k__BackingField,
    (int32_t)v15,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  v22 = AssetData__GetObject_object__58532980(
          v7,
          (System_String_o *)StringLiteral_13704/*"SubmarinePanelContainer"*/,
          (const MethodInfo_37D2474 *)Method_AssetData_GetObject_GameObject____91708320);
  _4__this->fields._PanelContainerPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v22;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&_4__this->fields._PanelContainerPrefab_k__BackingField,
    (int32_t)v22,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  v29 = AssetData__GetObject_object__58532980(
          v7,
          (System_String_o *)StringLiteral_13695/*"SubmarineEffectContainer"*/,
          (const MethodInfo_37D2474 *)Method_AssetData_GetObject_GameObject____91708320);
  _4__this->fields._EffectContainerPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v29;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&_4__this->fields._EffectContainerPrefab_k__BackingField,
    (int32_t)v29,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  v36 = AssetData__GetObject_object__58532980(
          v7,
          (System_String_o *)StringLiteral_6175/*"EffectScannedPanel"*/,
          (const MethodInfo_37D2474 *)Method_AssetData_GetObject_GameObject____91708320);
  _4__this->fields._EffectScannedPanelPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v36;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&_4__this->fields._EffectScannedPanelPrefab_k__BackingField,
    (int32_t)v36,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  v43 = AssetData__GetObject_object__58532980(
          v7,
          (System_String_o *)StringLiteral_13698/*"SubmarineEffectSelectedPanel"*/,
          (const MethodInfo_37D2474 *)Method_AssetData_GetObject_GameObject____91708320);
  _4__this->fields._EffectSelectedPanelPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v43;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&_4__this->fields._EffectSelectedPanelPrefab_k__BackingField,
    (int32_t)v43,
    v44,
    v45,
    v46,
    v47,
    v48,
    v49);
  v50 = AssetData__GetObject_object__58532980(
          v7,
          (System_String_o *)StringLiteral_13697/*"SubmarineEffectScannablePanel"*/,
          (const MethodInfo_37D2474 *)Method_AssetData_GetObject_GameObject____91708320);
  _4__this->fields._EffectScannablePanelPrafab_k__BackingField = (struct UnityEngine_GameObject_o *)v50;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&_4__this->fields._EffectScannablePanelPrafab_k__BackingField,
    (int32_t)v50,
    v51,
    v52,
    v53,
    v54,
    v55,
    v56);
  v57 = AssetData__GetObject_object__58532980(
          v7,
          (System_String_o *)StringLiteral_13696/*"SubmarineEffectScanObstaclePanel"*/,
          (const MethodInfo_37D2474 *)Method_AssetData_GetObject_GameObject____91708320);
  _4__this->fields._EffectScanObstaclePanelPrafab_k__BackingField = (struct UnityEngine_GameObject_o *)v57;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&_4__this->fields._EffectScanObstaclePanelPrafab_k__BackingField,
    (int32_t)v57,
    v58,
    v59,
    v60,
    v61,
    v62,
    v63);
  v64 = AssetData__GetObject_object__58532980(
          v7,
          (System_String_o *)StringLiteral_13700/*"SubmarineGridTexture"*/,
          (const MethodInfo_37D2474 *)Method_AssetData_GetObject_Texture2D____91708360);
  _4__this->fields._GridTexture_k__BackingField = (struct UnityEngine_Texture2D_o *)v64;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&_4__this->fields._GridTexture_k__BackingField,
    (int32_t)v64,
    v65,
    v66,
    v67,
    v68,
    v69,
    v70);
  v71 = AssetData__GetObject_object__58532980(
          v7,
          (System_String_o *)StringLiteral_13708/*"SubmarineSettings"*/,
          (const MethodInfo_37D2474 *)Method_AssetData_GetObject_SubmarineSettings___);
  _4__this->fields._Settings_k__BackingField = (struct SubmarineSettings_o *)v71;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&_4__this->fields._Settings_k__BackingField,
    (int32_t)v71,
    v72,
    v73,
    v74,
    v75,
    v76,
    v77);
  _4__this->fields._ScanProcessPreventedPrafab_k__BackingField = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&_4__this->fields._ScanProcessPreventedPrafab_k__BackingField,
    0,
    v78,
    v79,
    v80,
    v81,
    v82,
    v83);
  v84 = AssetData__GetObject_object__58532980(
          v7,
          (System_String_o *)StringLiteral_19655/*"ef_animation_skip"*/,
          (const MethodInfo_37D2474 *)Method_AssetData_GetObject_GameObject____91708320);
  _4__this->fields._AnimationSkipEFfectPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v84;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&_4__this->fields._AnimationSkipEFfectPrefab_k__BackingField,
    (int32_t)v84,
    v85,
    v86,
    v87,
    v88,
    v89,
    v90);
  v91 = AssetData__GetObject_object__58532980(
          v7,
          (System_String_o *)StringLiteral_13707/*"SubmarineSelectScannerDialog"*/,
          (const MethodInfo_37D2474 *)Method_AssetData_GetObject_GameObject____91708320);
  _4__this->fields._SelectScannerDialogPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v91;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&_4__this->fields._SelectScannerDialogPrefab_k__BackingField,
    (int32_t)v91,
    v92,
    v93,
    v94,
    v95,
    v96,
    v97);
  v98 = AssetData__GetObject_object__58532980(
          v7,
          (System_String_o *)StringLiteral_13705/*"SubmarineScanConfirmDialog"*/,
          (const MethodInfo_37D2474 *)Method_AssetData_GetObject_GameObject____91708320);
  _4__this->fields._ScanConfirmDialogPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v98;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&_4__this->fields._ScanConfirmDialogPrefab_k__BackingField,
    (int32_t)v98,
    v99,
    v100,
    v101,
    v102,
    v103,
    v104);
  v105 = AssetData__GetObject_object__58532980(
           v7,
           (System_String_o *)StringLiteral_13702/*"SubmarineNewScannerDialog"*/,
           (const MethodInfo_37D2474 *)Method_AssetData_GetObject_GameObject____91708320);
  _4__this->fields._NewScannerDialogPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v105;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&_4__this->fields._NewScannerDialogPrefab_k__BackingField,
    (int32_t)v105,
    v106,
    v107,
    v108,
    v109,
    v110,
    v111);
  this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_59;
  this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)DataManager__GetMasterData_object_(
                                                             (DataManager_o *)this,
                                                             (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventPanelScanMaster___);
  if ( !this )
    goto LABEL_59;
  ListByEventId = (System_Collections_Generic_IEnumerable_TSource__o *)EventPanelScanMaster__GetListByEventId(
                                                                         (EventPanelScanMaster_o *)this,
                                                                         v3->fields.eventId,
                                                                         0);
  v115 = SubmarineMapAssetManager___c_TypeInfo;
  if ( !*(&SubmarineMapAssetManager___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(SubmarineMapAssetManager___c_TypeInfo, v112, v113);
    v115 = SubmarineMapAssetManager___c_TypeInfo;
  }
  static_fields = v115->static_fields;
  _9__69_2 = (System_Func_object__int__o *)static_fields->__9__69_2;
  if ( !_9__69_2 )
  {
    if ( !*(&v115->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v115, v112, v113);
      static_fields = SubmarineMapAssetManager___c_TypeInfo->static_fields;
    }
    v118 = (Il2CppObject *)static_fields->__9;
    _9__69_2 = (System_Func_object__int__o *)sub_2213CCC(System_Func_EventPanelScanEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__69_2, v118, Method_SubmarineMapAssetManager___c__CoLoadAssets_b__69_2__, 0);
    v119 = SubmarineMapAssetManager___c_TypeInfo->static_fields;
    v119->__9__69_2 = (struct System_Func_EventPanelScanEntity__int__o *)_9__69_2;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v119->__9__69_2,
      (int32_t)_9__69_2,
      v120,
      v121,
      v122,
      v123,
      v124,
      v125);
  }
  v126 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                ListByEventId,
                                                                (System_Func_TSource__TResult__o *)_9__69_2,
                                                                (const MethodInfo_389085C *)Method_System_Linq_Enumerable_Select_EventPanelScanEntity__int___);
  v127 = (System_Text_RegularExpressions_Regex_o *)sub_2213CCC(System_Text_RegularExpressions_Regex_TypeInfo);
  System_Text_RegularExpressions_Regex___ctor_82059832(v127, (System_String_o *)StringLiteral_13142/*"Scanner_(?<ID>\\d+)"*/, 0);
  this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)AssetData__GetObjectNameList(v7, 0);
  if ( !this )
    goto LABEL_59;
  _2__current = this->fields.__2__current;
  v129 = this;
  v167 = v3;
  if ( (int)_2__current >= 1 )
  {
    v130 = 0;
    p__4__this = &this->fields.__4__this;
    while ( v130 < (unsigned int)_2__current )
    {
      if ( !v127 )
        goto LABEL_59;
      v132 = (System_String_o *)p__4__this[v130];
      this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)System_Text_RegularExpressions_Regex__Match_82055472(
                                                                 v127,
                                                                 v132,
                                                                 0);
      if ( !this )
        goto LABEL_59;
      v133 = this;
      this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)System_Text_RegularExpressions_Group__get_Success(
                                                                 (System_Text_RegularExpressions_Group_o *)this,
                                                                 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)((__int64 (__fastcall *)(SubmarineMapAssetManager__CoLoadAssets_d__69_o *, const MethodInfo *))v133->klass->vtable._5_System_IDisposable_Dispose.methodPtr)(
                                                                   v133,
                                                                   v133->klass->vtable._5_System_IDisposable_Dispose.method);
        if ( !this )
          goto LABEL_59;
        this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)System_Text_RegularExpressions_GroupCollection__get_Item_82038680(
                                                                   (System_Text_RegularExpressions_GroupCollection_o *)this,
                                                                   (System_String_o *)StringLiteral_7742/*"ID"*/,
                                                                   0);
        if ( !this )
          goto LABEL_59;
        Value = System_Text_RegularExpressions_Capture__get_Value((System_Text_RegularExpressions_Capture_o *)this, 0);
        v135 = System_Int32__Parse(Value, 0);
        this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)System_Linq_Enumerable__Contains_int_(
                                                                   v126,
                                                                   v135,
                                                                   (const MethodInfo_3876640 *)Method_System_Linq_Enumerable_Contains_int___);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          v138 = AssetData__GetObject_object__58532980(
                   v7,
                   v132,
                   (const MethodInfo_37D2474 *)Method_AssetData_GetObject_GameObject____91708320);
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v136, v137);
          this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)UnityEngine_Object__op_Equality(
                                                                     (UnityEngine_Object_o *)v138,
                                                                     0,
                                                                     0);
          if ( ((unsigned __int8)this & 1) == 0 )
          {
            this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)_4__this->fields.scannerPrefabDict;
            if ( !this )
              goto LABEL_59;
            System_Collections_Generic_Dictionary_int__object___set_Item(
              (System_Collections_Generic_Dictionary_int__object__o *)this,
              v135,
              v138,
              (const MethodInfo_3F9C49C *)Method_System_Collections_Generic_Dictionary_int__GameObject__set_Item__);
          }
        }
      }
      LODWORD(_2__current) = v129->fields.__2__current;
      if ( (__int64)++v130 >= (int)_2__current )
        goto LABEL_35;
    }
LABEL_60:
    sub_2213CE4(this);
  }
LABEL_35:
  v139 = (System_Text_RegularExpressions_Regex_o *)sub_2213CCC(System_Text_RegularExpressions_Regex_TypeInfo);
  System_Text_RegularExpressions_Regex___ctor_82059832(v139, (System_String_o *)StringLiteral_13706/*"SubmarineScanRangeNotificator_(?<ID>\\d+)"*/, 0);
  this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)AssetData__GetObjectNameList(v7, 0);
  if ( !this )
    goto LABEL_59;
  v140 = this->fields.__2__current;
  v141 = this;
  if ( (int)v140 >= 1 )
  {
    v142 = 0;
    v143 = &this->fields.__4__this;
    while ( v142 < (unsigned int)v140 )
    {
      if ( !v139 )
        goto LABEL_59;
      v144 = (System_String_o *)v143[v142];
      this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)System_Text_RegularExpressions_Regex__Match_82055472(
                                                                 v139,
                                                                 v144,
                                                                 0);
      if ( !this )
        goto LABEL_59;
      v145 = this;
      this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)System_Text_RegularExpressions_Group__get_Success(
                                                                 (System_Text_RegularExpressions_Group_o *)this,
                                                                 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)((__int64 (__fastcall *)(SubmarineMapAssetManager__CoLoadAssets_d__69_o *, const MethodInfo *))v145->klass->vtable._5_System_IDisposable_Dispose.methodPtr)(
                                                                   v145,
                                                                   v145->klass->vtable._5_System_IDisposable_Dispose.method);
        if ( !this )
          goto LABEL_59;
        this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)System_Text_RegularExpressions_GroupCollection__get_Item_82038680(
                                                                   (System_Text_RegularExpressions_GroupCollection_o *)this,
                                                                   (System_String_o *)StringLiteral_7742/*"ID"*/,
                                                                   0);
        if ( !this )
          goto LABEL_59;
        v146 = System_Text_RegularExpressions_Capture__get_Value((System_Text_RegularExpressions_Capture_o *)this, 0);
        v147 = System_Int32__Parse(v146, 0);
        this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)System_Linq_Enumerable__Contains_int_(
                                                                   v126,
                                                                   v147,
                                                                   (const MethodInfo_3876640 *)Method_System_Linq_Enumerable_Contains_int___);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          v150 = AssetData__GetObject_object__58532980(
                   v7,
                   v144,
                   (const MethodInfo_37D2474 *)Method_AssetData_GetObject_GameObject____91708320);
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v148, v149);
          this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)UnityEngine_Object__op_Equality(
                                                                     (UnityEngine_Object_o *)v150,
                                                                     0,
                                                                     0);
          if ( ((unsigned __int8)this & 1) == 0 )
          {
            this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)_4__this->fields.scanRangeNotificatorPrefabDict;
            if ( !this )
              goto LABEL_59;
            System_Collections_Generic_Dictionary_int__object___set_Item(
              (System_Collections_Generic_Dictionary_int__object__o *)this,
              v147,
              v150,
              (const MethodInfo_3F9C49C *)Method_System_Collections_Generic_Dictionary_int__GameObject__set_Item__);
          }
        }
      }
      LODWORD(v140) = v141->fields.__2__current;
      if ( (__int64)++v142 >= (int)v140 )
        goto LABEL_51;
    }
    goto LABEL_60;
  }
LABEL_51:
  _1__state = 1;
  finishCallback = v167->fields.finishCallback;
  if ( finishCallback )
    ActionExtensions__Call(finishCallback, 0);
  return _1__state == 0;
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

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_SubmarineMapAssetManager__CoLoadAssets_d__69_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_596CF97 & 1) == 0 )
  {
    sub_2213A60(&SubmarineMapAssetManager___c_TypeInfo);
    byte_596CF97 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(SubmarineMapAssetManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  SubmarineMapAssetManager___c_TypeInfo->static_fields->__9 = (struct SubmarineMapAssetManager___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)SubmarineMapAssetManager___c_TypeInfo->static_fields,
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
    sub_2213CDC(this, 0);
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