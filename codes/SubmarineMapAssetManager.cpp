void __fastcall SubmarineMapAssetManager___ctor(SubmarineMapAssetManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  struct System_String_array *v11; // x20
  __int64 v12; // x0
  System_Int32_array **v13; // x1
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  __int64 v20; // x0
  __int64 v21; // x0

  if ( (byte_4350E48 & 1) == 0 )
  {
    sub_B70694(&string___TypeInfo);
    sub_B70694(&StringLiteral_6242/*"Event/Submarine"*/);
    byte_4350E48 = 1;
  }
  v3 = sub_B706AC(string___TypeInfo, 1LL);
  if ( !v3 )
    sub_B7076C(0LL, v4);
  v11 = (struct System_String_array *)v3;
  v12 = StringLiteral_6242/*"Event/Submarine"*/;
  if ( StringLiteral_6242/*"Event/Submarine"*/ )
  {
    v12 = sub_B70754(StringLiteral_6242/*"Event/Submarine"*/, v11->obj.klass->_1.element_class);
    if ( !v12 )
    {
      v21 = sub_B7078C(0LL);
      sub_B70738(v21, 0LL);
    }
    v13 = (System_Int32_array **)StringLiteral_6242/*"Event/Submarine"*/;
  }
  else
  {
    v13 = 0LL;
  }
  if ( !v11->max_length )
  {
    v20 = sub_B70798(v12);
    sub_B70738(v20, 0LL);
  }
  v11->m_Items[0] = (System_String_o *)v13;
  sub_B70630((BattleServantConfConponent_o *)v11->m_Items, v13, v5, v6, v7, v8, v9, v10);
  this->fields.loadAssetNames = v11;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.loadAssetNames,
    (System_Int32_array **)v11,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_Collections_IEnumerator_o *__fastcall SubmarineMapAssetManager__CoLoadAssets(
        SubmarineMapAssetManager_o *this,
        int32_t eventId,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7

  if ( (byte_4350E44 & 1) == 0 )
  {
    sub_B70694(&SubmarineMapAssetManager__CoLoadAssets_d__69_TypeInfo);
    byte_4350E44 = 1;
  }
  v7 = sub_B70764(SubmarineMapAssetManager__CoLoadAssets_d__69_TypeInfo);
  SubmarineMapAssetManager__CoLoadAssets_d__69___ctor((SubmarineMapAssetManager__CoLoadAssets_d__69_o *)v7, 0, 0LL);
  if ( !v7 )
    sub_B7076C(v8, v9);
  *(_QWORD *)(v7 + 32) = this;
  sub_B70630((BattleServantConfConponent_o *)(v7 + 32), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_DWORD *)(v7 + 40) = eventId;
  *(_QWORD *)(v7 + 48) = finishCallback;
  sub_B70630(
    (BattleServantConfConponent_o *)(v7 + 48),
    (System_Int32_array **)finishCallback,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  return (System_Collections_IEnumerator_o *)v7;
}


void __fastcall SubmarineMapAssetManager__Finish(SubmarineMapAssetManager_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_int__GameObject__o *scannerPrefabDict; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  System_String_array **v76; // x2
  System_String_array **v77; // x3
  System_Boolean_array **v78; // x4
  System_Int32_array **v79; // x5
  System_Int32_array *v80; // x6
  System_Int32_array *v81; // x7
  System_String_array **v82; // x2
  System_String_array **v83; // x3
  System_Boolean_array **v84; // x4
  System_Int32_array **v85; // x5
  System_Int32_array *v86; // x6
  System_Int32_array *v87; // x7
  System_String_array **v88; // x2
  System_String_array **v89; // x3
  System_Boolean_array **v90; // x4
  System_Int32_array **v91; // x5
  System_Int32_array *v92; // x6
  System_Int32_array *v93; // x7
  BattleServantConfConponent_o *p_AnimationSkipEFfectPrefab_k__BackingField; // x19
  System_String_array **v95; // x2
  System_String_array **v96; // x3
  System_Boolean_array **v97; // x4
  System_Int32_array **v98; // x5
  System_Int32_array *v99; // x6
  System_Int32_array *v100; // x7
  System_String_array *closeBtnObject; // x19

  if ( (byte_4350E47 & 1) == 0 )
  {
    sub_B70694(&AssetManager_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__GameObject__Clear__);
    byte_4350E47 = 1;
  }
  scannerPrefabDict = this->fields.scannerPrefabDict;
  if ( !scannerPrefabDict
    || (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Clear(
          (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)scannerPrefabDict,
          (const MethodInfo_2FC6744 *)Method_System_Collections_Generic_Dictionary_int__GameObject__Clear__),
        (scannerPrefabDict = this->fields.scanRangeNotificatorPrefabDict) == 0LL) )
  {
    sub_B7076C(scannerPrefabDict, method);
  }
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Clear(
    (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)scannerPrefabDict,
    (const MethodInfo_2FC6744 *)Method_System_Collections_Generic_Dictionary_int__GameObject__Clear__);
  this->fields._PanelPrefab_k__BackingField = 0LL;
  sub_B70630((BattleServantConfConponent_o *)&this->fields, 0LL, v4, v5, v6, v7, v8, v9);
  this->fields._GridLinePrefab_k__BackingField = 0LL;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields._GridLinePrefab_k__BackingField,
    0LL,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  this->fields._PanelContainerPrefab_k__BackingField = 0LL;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields._PanelContainerPrefab_k__BackingField,
    0LL,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  this->fields._EffectContainerPrefab_k__BackingField = 0LL;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields._EffectContainerPrefab_k__BackingField,
    0LL,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  this->fields._ClosedPanelTexture_k__BackingField = 0LL;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields._ClosedPanelTexture_k__BackingField,
    0LL,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  this->fields._GridTexture_k__BackingField = 0LL;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields._GridTexture_k__BackingField,
    0LL,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  this->fields._EffectScannedPanelPrefab_k__BackingField = 0LL;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields._EffectScannedPanelPrefab_k__BackingField,
    0LL,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
  this->fields._EffectSelectedPanelPrefab_k__BackingField = 0LL;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields._EffectSelectedPanelPrefab_k__BackingField,
    0LL,
    v46,
    v47,
    v48,
    v49,
    v50,
    v51);
  this->fields._EffectScannablePanelPrafab_k__BackingField = 0LL;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields._EffectScannablePanelPrafab_k__BackingField,
    0LL,
    v52,
    v53,
    v54,
    v55,
    v56,
    v57);
  this->fields._EffectScanObstaclePanelPrafab_k__BackingField = 0LL;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields._EffectScanObstaclePanelPrafab_k__BackingField,
    0LL,
    v58,
    v59,
    v60,
    v61,
    v62,
    v63);
  this->fields._ScanProcessPreventedPrafab_k__BackingField = 0LL;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields._ScanProcessPreventedPrafab_k__BackingField,
    0LL,
    v64,
    v65,
    v66,
    v67,
    v68,
    v69);
  this->fields._SelectScannerDialogPrefab_k__BackingField = 0LL;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields._SelectScannerDialogPrefab_k__BackingField,
    0LL,
    v70,
    v71,
    v72,
    v73,
    v74,
    v75);
  this->fields._ScanConfirmDialogPrefab_k__BackingField = 0LL;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields._ScanConfirmDialogPrefab_k__BackingField,
    0LL,
    v76,
    v77,
    v78,
    v79,
    v80,
    v81);
  this->fields._NewScannerDialogPrefab_k__BackingField = 0LL;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields._NewScannerDialogPrefab_k__BackingField,
    0LL,
    v82,
    v83,
    v84,
    v85,
    v86,
    v87);
  this->fields._Settings_k__BackingField = 0LL;
  sub_B70630((BattleServantConfConponent_o *)&this->fields._Settings_k__BackingField, 0LL, v88, v89, v90, v91, v92, v93);
  this->fields._AnimationSkipEFfectPrefab_k__BackingField = 0LL;
  p_AnimationSkipEFfectPrefab_k__BackingField = (BattleServantConfConponent_o *)&this->fields._AnimationSkipEFfectPrefab_k__BackingField;
  sub_B70630(p_AnimationSkipEFfectPrefab_k__BackingField, 0LL, v95, v96, v97, v98, v99, v100);
  closeBtnObject = (System_String_array *)p_AnimationSkipEFfectPrefab_k__BackingField->fields._closeBtnObject;
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAssetStorage_31205608(closeBtnObject, 0LL);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall SubmarineMapAssetManager__GetScanAnimObjectPrefab(
        SubmarineMapAssetManager_o *this,
        int32_t scanObjectId,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_int__GameObject__o *scannerPrefabDict; // x0
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4350E45 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__GameObject__TryGetValue__);
    byte_4350E45 = 1;
  }
  value = 0LL;
  scannerPrefabDict = this->fields.scannerPrefabDict;
  if ( !scannerPrefabDict )
    sub_B7076C(0LL, *(_QWORD *)&scanObjectId);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)scannerPrefabDict,
    scanObjectId,
    &value,
    (const MethodInfo_2FC828C *)Method_System_Collections_Generic_Dictionary_int__GameObject__TryGetValue__);
  return (UnityEngine_GameObject_o *)value;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall SubmarineMapAssetManager__GetScanRangeNotificatorPrefab(
        SubmarineMapAssetManager_o *this,
        int32_t scanObjectId,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_int__GameObject__o *scanRangeNotificatorPrefabDict; // x0
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4350E46 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__GameObject__TryGetValue__);
    byte_4350E46 = 1;
  }
  value = 0LL;
  scanRangeNotificatorPrefabDict = this->fields.scanRangeNotificatorPrefabDict;
  if ( !scanRangeNotificatorPrefabDict )
    sub_B7076C(0LL, *(_QWORD *)&scanObjectId);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)scanRangeNotificatorPrefabDict,
    scanObjectId,
    &value,
    (const MethodInfo_2FC828C *)Method_System_Collections_Generic_Dictionary_int__GameObject__TryGetValue__);
  return (UnityEngine_GameObject_o *)value;
}


void __fastcall SubmarineMapAssetManager__Initialize(SubmarineMapAssetManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v3; // x20
  struct System_Collections_Generic_Dictionary_int__GameObject__o **p_scannerPrefabDict; // x19
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v11; // x20
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  if ( (byte_4350E42 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__GameObject___ctor__);
    sub_B70694(&System_Collections_Generic_Dictionary_int__GameObject__TypeInfo);
    byte_4350E42 = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B70764(System_Collections_Generic_Dictionary_int__GameObject__TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v3,
    (const MethodInfo_2FC59B4 *)Method_System_Collections_Generic_Dictionary_int__GameObject___ctor__);
  this->fields.scannerPrefabDict = (struct System_Collections_Generic_Dictionary_int__GameObject__o *)v3;
  p_scannerPrefabDict = &this->fields.scannerPrefabDict;
  sub_B70630((BattleServantConfConponent_o *)p_scannerPrefabDict, (System_Int32_array **)v3, v5, v6, v7, v8, v9, v10);
  v11 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B70764(System_Collections_Generic_Dictionary_int__GameObject__TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v11,
    (const MethodInfo_2FC59B4 *)Method_System_Collections_Generic_Dictionary_int__GameObject___ctor__);
  p_scannerPrefabDict[1] = (struct System_Collections_Generic_Dictionary_int__GameObject__o *)v11;
  sub_B70630(
    (BattleServantConfConponent_o *)(p_scannerPrefabDict + 1),
    (System_Int32_array **)v11,
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
  Il2CppObject *v7; // x0
  System_String_o *v8; // x0
  __int64 v9; // x1
  struct UnityEngine_Texture2D_o *Object_WarBoardWaitTimeSetting; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  int32_t v17; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4350E43 & 1) == 0 )
  {
    sub_B70694(&Method_AssetData_GetObject_Texture2D____69232744);
    sub_B70694(&int_TypeInfo);
    sub_B70694(&StringLiteral_23893/*"{0:D6}_ClosedPanelTexture"*/);
    byte_4350E43 = 1;
  }
  v17 = mapId;
  v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v17, *(_QWORD *)&mapId);
  v8 = System_String__Format((System_String_o *)StringLiteral_23893/*"{0:D6}_ClosedPanelTexture"*/, v7, 0LL);
  if ( !assetData )
    sub_B7076C(v8, v9);
  Object_WarBoardWaitTimeSetting = (struct UnityEngine_Texture2D_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                       assetData,
                                                                       v8,
                                                                       (const MethodInfo_1BD6720 *)Method_AssetData_GetObject_Texture2D____69232744);
  this->fields._ClosedPanelTexture_k__BackingField = Object_WarBoardWaitTimeSetting;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields._ClosedPanelTexture_k__BackingField,
    (System_Int32_array **)Object_WarBoardWaitTimeSetting,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._AnimationSkipEFfectPrefab_k__BackingField = value;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields._AnimationSkipEFfectPrefab_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._ClosedPanelTexture_k__BackingField = value;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields._ClosedPanelTexture_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._EffectContainerPrefab_k__BackingField = value;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields._EffectContainerPrefab_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._EffectScanObstaclePanelPrafab_k__BackingField = value;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields._EffectScanObstaclePanelPrafab_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._EffectScannablePanelPrafab_k__BackingField = value;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields._EffectScannablePanelPrafab_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._EffectScannedPanelPrefab_k__BackingField = value;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields._EffectScannedPanelPrefab_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._EffectSelectedPanelPrefab_k__BackingField = value;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields._EffectSelectedPanelPrefab_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._GridLinePrefab_k__BackingField = value;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields._GridLinePrefab_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._GridTexture_k__BackingField = value;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields._GridTexture_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._NewScannerDialogPrefab_k__BackingField = value;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields._NewScannerDialogPrefab_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._PanelContainerPrefab_k__BackingField = value;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields._PanelContainerPrefab_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._PanelPrefab_k__BackingField = value;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall SubmarineMapAssetManager__set_ScanConfirmDialogPrefab(
        SubmarineMapAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._ScanConfirmDialogPrefab_k__BackingField = value;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields._ScanConfirmDialogPrefab_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._ScanProcessPreventedPrafab_k__BackingField = value;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields._ScanProcessPreventedPrafab_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._SelectScannerDialogPrefab_k__BackingField = value;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields._SelectScannerDialogPrefab_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._Settings_k__BackingField = value;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields._Settings_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
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
  Il2CppObject **p__2__current; // x24
  System_String_array *loadAssetNames; // x20
  AssetData_o *v13; // x20
  System_Collections_Generic_IEnumerable_TSource__o *ListByEventId; // x21
  SubmarineMapAssetManager___c_c *v15; // x8
  struct SubmarineMapAssetManager___c_StaticFields *static_fields; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__69_2; // x22
  Il2CppObject *v18; // x23
  struct SubmarineMapAssetManager___c_StaticFields *v19; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x21
  System_Text_RegularExpressions_Regex_o *v21; // x22
  Il2CppObject *_2__current; // x8
  SubmarineMapAssetManager__CoLoadAssets_d__69_o *v23; // x23
  unsigned __int64 v24; // x28
  struct SubmarineMapAssetManager_o **v25; // x27
  System_String_o *v26; // x24
  SubmarineMapAssetManager__CoLoadAssets_d__69_o *v27; // x25
  System_String_o *v28; // x0
  int32_t v29; // w25
  UnityEngine_Object_o *v30; // x24
  System_Text_RegularExpressions_Regex_o *v31; // x22
  Il2CppObject *v32; // x8
  SubmarineMapAssetManager__CoLoadAssets_d__69_o *v33; // x23
  unsigned __int64 v34; // x28
  struct SubmarineMapAssetManager_o **p__4__this; // x27
  System_String_o *v36; // x24
  SubmarineMapAssetManager__CoLoadAssets_d__69_o *v37; // x25
  System_String_o *Value; // x0
  int32_t v39; // w25
  UnityEngine_Object_o *Object_WarBoardWaitTimeSetting; // x24
  System_Action_o *finishCallback; // x0
  __int64 v43; // x0
  SubmarineMapAssetManager__CoLoadAssets_d__69_o *v44; // [xsp+8h] [xbp-58h]

  v2 = this;
  if ( (byte_434F0C2 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_AssetData_GetObject_GameObject____69232720);
    sub_B70694(&Method_AssetData_GetObject_SubmarineSettings___);
    sub_B70694(&Method_AssetData_GetObject_Texture2D____69232744);
    sub_B70694(&AssetManager_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_EventPanelScanMaster___);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__GameObject__set_Item__);
    sub_B70694(&Method_System_Linq_Enumerable_Contains_int___);
    sub_B70694(&Method_System_Linq_Enumerable_Select_EventPanelScanEntity__int___);
    sub_B70694(&Method_System_Func_bool___ctor__);
    sub_B70694(&System_Func_bool__TypeInfo);
    sub_B70694(&Method_System_Func_EventPanelScanEntity__int___ctor__);
    sub_B70694(&System_Func_EventPanelScanEntity__int__TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&System_Text_RegularExpressions_Regex_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&Method_SubmarineMapAssetManager___c__CoLoadAssets_b__69_2__);
    sub_B70694(&Method_SubmarineMapAssetManager___c__DisplayClass69_0__CoLoadAssets_b__0__);
    sub_B70694(&Method_SubmarineMapAssetManager___c__DisplayClass69_0__CoLoadAssets_b__1__);
    sub_B70694(&SubmarineMapAssetManager___c__DisplayClass69_0_TypeInfo);
    sub_B70694(&SubmarineMapAssetManager___c_TypeInfo);
    sub_B70694(&UnityEngine_WaitUntil_TypeInfo);
    sub_B70694(&StringLiteral_5967/*"EffectScannedPanel"*/);
    sub_B70694(&StringLiteral_12771/*"Scanner_(?<ID>\\d+)"*/);
    sub_B70694(&StringLiteral_13322/*"SubmarineScanConfirmDialog"*/);
    sub_B70694(&StringLiteral_18431/*"ef_animation_skip"*/);
    sub_B70694(&StringLiteral_13320/*"SubmarinePanel"*/);
    sub_B70694(&StringLiteral_13324/*"SubmarineSelectScannerDialog"*/);
    sub_B70694(&StringLiteral_13313/*"SubmarineEffectScanObstaclePanel"*/);
    sub_B70694(&StringLiteral_13316/*"SubmarineGridLine"*/);
    sub_B70694(&StringLiteral_13321/*"SubmarinePanelContainer"*/);
    sub_B70694(&StringLiteral_13323/*"SubmarineScanRangeNotificator_(?<ID>\\d+)"*/);
    sub_B70694(&StringLiteral_13319/*"SubmarineNewScannerDialog"*/);
    sub_B70694(&StringLiteral_13317/*"SubmarineGridTexture"*/);
    sub_B70694(&StringLiteral_13315/*"SubmarineEffectSelectedPanel"*/);
    sub_B70694(&StringLiteral_13312/*"SubmarineEffectContainer"*/);
    sub_B70694(&StringLiteral_13314/*"SubmarineEffectScannablePanel"*/);
    sub_B70694(&StringLiteral_7356/*"ID"*/);
    this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)sub_B70694(&StringLiteral_13325/*"SubmarineSettings"*/);
    byte_434F0C2 = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 1 )
  {
    v2->fields.__1__state = -1;
    if ( _4__this )
    {
      loadAssetNames = _4__this->fields.loadAssetNames;
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      }
      this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)AssetManager__getAssetStorage_31204772(
                                                                 loadAssetNames,
                                                                 0LL);
      if ( this )
      {
        if ( !LODWORD(this->fields.__2__current) )
          goto LABEL_67;
        v13 = (AssetData_o *)this->fields.__4__this;
        if ( v13 )
        {
          _4__this->fields._PanelPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                                               (AssetData_o *)this->fields.__4__this,
                                                                                               (System_String_o *)StringLiteral_13320/*"SubmarinePanel"*/,
                                                                                               (const MethodInfo_1BD6720 *)Method_AssetData_GetObject_GameObject____69232720);
          sub_B70630(&_4__this->fields);
          _4__this->fields._GridLinePrefab_k__BackingField = (struct UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                                                  v13,
                                                                                                  (System_String_o *)StringLiteral_13316/*"SubmarineGridLine"*/,
                                                                                                  (const MethodInfo_1BD6720 *)Method_AssetData_GetObject_GameObject____69232720);
          sub_B70630(&_4__this->fields._GridLinePrefab_k__BackingField);
          _4__this->fields._PanelContainerPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(v13, (System_String_o *)StringLiteral_13321/*"SubmarinePanelContainer"*/, (const MethodInfo_1BD6720 *)Method_AssetData_GetObject_GameObject____69232720);
          sub_B70630(&_4__this->fields._PanelContainerPrefab_k__BackingField);
          _4__this->fields._EffectContainerPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(v13, (System_String_o *)StringLiteral_13312/*"SubmarineEffectContainer"*/, (const MethodInfo_1BD6720 *)Method_AssetData_GetObject_GameObject____69232720);
          sub_B70630(&_4__this->fields._EffectContainerPrefab_k__BackingField);
          _4__this->fields._EffectScannedPanelPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(v13, (System_String_o *)StringLiteral_5967/*"EffectScannedPanel"*/, (const MethodInfo_1BD6720 *)Method_AssetData_GetObject_GameObject____69232720);
          sub_B70630(&_4__this->fields._EffectScannedPanelPrefab_k__BackingField);
          _4__this->fields._EffectSelectedPanelPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(v13, (System_String_o *)StringLiteral_13315/*"SubmarineEffectSelectedPanel"*/, (const MethodInfo_1BD6720 *)Method_AssetData_GetObject_GameObject____69232720);
          sub_B70630(&_4__this->fields._EffectSelectedPanelPrefab_k__BackingField);
          _4__this->fields._EffectScannablePanelPrafab_k__BackingField = (struct UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(v13, (System_String_o *)StringLiteral_13314/*"SubmarineEffectScannablePanel"*/, (const MethodInfo_1BD6720 *)Method_AssetData_GetObject_GameObject____69232720);
          sub_B70630(&_4__this->fields._EffectScannablePanelPrafab_k__BackingField);
          _4__this->fields._EffectScanObstaclePanelPrafab_k__BackingField = (struct UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(v13, (System_String_o *)StringLiteral_13313/*"SubmarineEffectScanObstaclePanel"*/, (const MethodInfo_1BD6720 *)Method_AssetData_GetObject_GameObject____69232720);
          sub_B70630(&_4__this->fields._EffectScanObstaclePanelPrafab_k__BackingField);
          _4__this->fields._GridTexture_k__BackingField = (struct UnityEngine_Texture2D_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                                              v13,
                                                                                              (System_String_o *)StringLiteral_13317/*"SubmarineGridTexture"*/,
                                                                                              (const MethodInfo_1BD6720 *)Method_AssetData_GetObject_Texture2D____69232744);
          sub_B70630(&_4__this->fields._GridTexture_k__BackingField);
          _4__this->fields._Settings_k__BackingField = (struct SubmarineSettings_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                                       v13,
                                                                                       (System_String_o *)StringLiteral_13325/*"SubmarineSettings"*/,
                                                                                       (const MethodInfo_1BD6720 *)Method_AssetData_GetObject_SubmarineSettings___);
          sub_B70630(&_4__this->fields._Settings_k__BackingField);
          _4__this->fields._ScanProcessPreventedPrafab_k__BackingField = 0LL;
          sub_B70630(&_4__this->fields._ScanProcessPreventedPrafab_k__BackingField);
          _4__this->fields._AnimationSkipEFfectPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(v13, (System_String_o *)StringLiteral_18431/*"ef_animation_skip"*/, (const MethodInfo_1BD6720 *)Method_AssetData_GetObject_GameObject____69232720);
          sub_B70630(&_4__this->fields._AnimationSkipEFfectPrefab_k__BackingField);
          _4__this->fields._SelectScannerDialogPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(v13, (System_String_o *)StringLiteral_13324/*"SubmarineSelectScannerDialog"*/, (const MethodInfo_1BD6720 *)Method_AssetData_GetObject_GameObject____69232720);
          sub_B70630(&_4__this->fields._SelectScannerDialogPrefab_k__BackingField);
          _4__this->fields._ScanConfirmDialogPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(v13, (System_String_o *)StringLiteral_13322/*"SubmarineScanConfirmDialog"*/, (const MethodInfo_1BD6720 *)Method_AssetData_GetObject_GameObject____69232720);
          sub_B70630(&_4__this->fields._ScanConfirmDialogPrefab_k__BackingField);
          _4__this->fields._NewScannerDialogPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(v13, (System_String_o *)StringLiteral_13319/*"SubmarineNewScannerDialog"*/, (const MethodInfo_1BD6720 *)Method_AssetData_GetObject_GameObject____69232720);
          sub_B70630(&_4__this->fields._NewScannerDialogPrefab_k__BackingField);
          this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( this )
          {
            this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                       (DataManager_o *)this,
                                                                       (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EventPanelScanMaster___);
            if ( this )
            {
              ListByEventId = (System_Collections_Generic_IEnumerable_TSource__o *)EventPanelScanMaster__GetListByEventId(
                                                                                     (EventPanelScanMaster_o *)this,
                                                                                     v2->fields.eventId,
                                                                                     0LL);
              v15 = SubmarineMapAssetManager___c_TypeInfo;
              if ( (BYTE3(SubmarineMapAssetManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !SubmarineMapAssetManager___c_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(SubmarineMapAssetManager___c_TypeInfo);
                v15 = SubmarineMapAssetManager___c_TypeInfo;
              }
              static_fields = v15->static_fields;
              _9__69_2 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__69_2;
              if ( !_9__69_2 )
              {
                if ( (BYTE3(v15->vtable._0_Equals.methodPtr) & 4) != 0 && !v15->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(v15);
                  static_fields = SubmarineMapAssetManager___c_TypeInfo->static_fields;
                }
                v18 = (Il2CppObject *)static_fields->__9;
                _9__69_2 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B70764(System_Func_EventPanelScanEntity__int__TypeInfo);
                System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
                  _9__69_2,
                  v18,
                  Method_SubmarineMapAssetManager___c__CoLoadAssets_b__69_2__,
                  (const MethodInfo_29AD124 *)Method_System_Func_EventPanelScanEntity__int___ctor__);
                v19 = SubmarineMapAssetManager___c_TypeInfo->static_fields;
                v19->__9__69_2 = (struct System_Func_EventPanelScanEntity__int__o *)_9__69_2;
                sub_B70630(&v19->__9__69_2);
              }
              v20 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                                           ListByEventId,
                                                                           (System_Func_TSource__TResult__o *)_9__69_2,
                                                                           (const MethodInfo_1CC3CC0 *)Method_System_Linq_Enumerable_Select_EventPanelScanEntity__int___);
              v21 = (System_Text_RegularExpressions_Regex_o *)sub_B70764(System_Text_RegularExpressions_Regex_TypeInfo);
              System_Text_RegularExpressions_Regex___ctor_49153652(v21, (System_String_o *)StringLiteral_12771/*"Scanner_(?<ID>\\d+)"*/, 0LL);
              this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)AssetData__GetObjectNameList(v13, 0LL);
              if ( this )
              {
                _2__current = this->fields.__2__current;
                v23 = this;
                v44 = v2;
                if ( (int)_2__current < 1 )
                {
LABEL_45:
                  v31 = (System_Text_RegularExpressions_Regex_o *)sub_B70764(System_Text_RegularExpressions_Regex_TypeInfo);
                  System_Text_RegularExpressions_Regex___ctor_49153652(v31, (System_String_o *)StringLiteral_13323/*"SubmarineScanRangeNotificator_(?<ID>\\d+)"*/, 0LL);
                  this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)AssetData__GetObjectNameList(v13, 0LL);
                  if ( !this )
                    goto LABEL_66;
                  v32 = this->fields.__2__current;
                  v33 = this;
                  if ( (int)v32 < 1 )
                  {
LABEL_62:
                    finishCallback = v44->fields.finishCallback;
                    if ( finishCallback )
                      ActionExtensions__Call(finishCallback, 0LL);
                    return 0;
                  }
                  v34 = 0LL;
                  p__4__this = &this->fields.__4__this;
                  while ( v34 < (unsigned int)v32 )
                  {
                    if ( !v31 )
                      goto LABEL_66;
                    v36 = (System_String_o *)p__4__this[v34];
                    this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)System_Text_RegularExpressions_Regex__Match_49161316(
                                                                               v31,
                                                                               v36,
                                                                               0LL);
                    if ( !this )
                      goto LABEL_66;
                    v37 = this;
                    this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)System_Text_RegularExpressions_Group__get_Success(
                                                                               (System_Text_RegularExpressions_Group_o *)this,
                                                                               0LL);
                    if ( ((unsigned __int8)this & 1) != 0 )
                    {
                      this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)((__int64 (__fastcall *)(SubmarineMapAssetManager__CoLoadAssets_d__69_o *, Il2CppMethodPointer))v37->klass->vtable._5_System_IDisposable_Dispose.method)(
                                                                                 v37,
                                                                                 v37->klass->vtable._6_MoveNext.methodPtr);
                      if ( !this )
                        goto LABEL_66;
                      this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)System_Text_RegularExpressions_GroupCollection__get_Item_38181172(
                                                                                 (System_Text_RegularExpressions_GroupCollection_o *)this,
                                                                                 (System_String_o *)StringLiteral_7356/*"ID"*/,
                                                                                 0LL);
                      if ( !this )
                        goto LABEL_66;
                      Value = System_Text_RegularExpressions_Capture__get_Value(
                                (System_Text_RegularExpressions_Capture_o *)this,
                                0LL);
                      v39 = System_Int32__Parse(Value, 0LL);
                      this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)System_Linq_Enumerable__Contains_int_(
                                                                                 v20,
                                                                                 v39,
                                                                                 (const MethodInfo_1CB57D0 *)Method_System_Linq_Enumerable_Contains_int___);
                      if ( ((unsigned __int8)this & 1) != 0 )
                      {
                        Object_WarBoardWaitTimeSetting = (UnityEngine_Object_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                                   v13,
                                                                                   v36,
                                                                                   (const MethodInfo_1BD6720 *)Method_AssetData_GetObject_GameObject____69232720);
                        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                        }
                        this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)UnityEngine_Object__op_Equality(
                                                                                   Object_WarBoardWaitTimeSetting,
                                                                                   0LL,
                                                                                   0LL);
                        if ( ((unsigned __int8)this & 1) == 0 )
                        {
                          this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)_4__this->fields.scanRangeNotificatorPrefabDict;
                          if ( !this )
                            goto LABEL_66;
                          System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
                            (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)this,
                            v39,
                            (WarBoardAIRoute_RouteData_o *)Object_WarBoardWaitTimeSetting,
                            (const MethodInfo_2FC6540 *)Method_System_Collections_Generic_Dictionary_int__GameObject__set_Item__);
                        }
                      }
                    }
                    LODWORD(v32) = v33->fields.__2__current;
                    if ( (__int64)++v34 >= (int)v32 )
                      goto LABEL_62;
                  }
                }
                else
                {
                  v24 = 0LL;
                  v25 = &this->fields.__4__this;
                  while ( v24 < (unsigned int)_2__current )
                  {
                    if ( !v21 )
                      goto LABEL_66;
                    v26 = (System_String_o *)v25[v24];
                    this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)System_Text_RegularExpressions_Regex__Match_49161316(
                                                                               v21,
                                                                               v26,
                                                                               0LL);
                    if ( !this )
                      goto LABEL_66;
                    v27 = this;
                    this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)System_Text_RegularExpressions_Group__get_Success(
                                                                               (System_Text_RegularExpressions_Group_o *)this,
                                                                               0LL);
                    if ( ((unsigned __int8)this & 1) != 0 )
                    {
                      this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)((__int64 (__fastcall *)(SubmarineMapAssetManager__CoLoadAssets_d__69_o *, Il2CppMethodPointer))v27->klass->vtable._5_System_IDisposable_Dispose.method)(
                                                                                 v27,
                                                                                 v27->klass->vtable._6_MoveNext.methodPtr);
                      if ( !this )
                        goto LABEL_66;
                      this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)System_Text_RegularExpressions_GroupCollection__get_Item_38181172(
                                                                                 (System_Text_RegularExpressions_GroupCollection_o *)this,
                                                                                 (System_String_o *)StringLiteral_7356/*"ID"*/,
                                                                                 0LL);
                      if ( !this )
                        goto LABEL_66;
                      v28 = System_Text_RegularExpressions_Capture__get_Value(
                              (System_Text_RegularExpressions_Capture_o *)this,
                              0LL);
                      v29 = System_Int32__Parse(v28, 0LL);
                      this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)System_Linq_Enumerable__Contains_int_(
                                                                                 v20,
                                                                                 v29,
                                                                                 (const MethodInfo_1CB57D0 *)Method_System_Linq_Enumerable_Contains_int___);
                      if ( ((unsigned __int8)this & 1) != 0 )
                      {
                        v30 = (UnityEngine_Object_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                        v13,
                                                        v26,
                                                        (const MethodInfo_1BD6720 *)Method_AssetData_GetObject_GameObject____69232720);
                        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                        }
                        this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)UnityEngine_Object__op_Equality(
                                                                                   v30,
                                                                                   0LL,
                                                                                   0LL);
                        if ( ((unsigned __int8)this & 1) == 0 )
                        {
                          this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)_4__this->fields.scannerPrefabDict;
                          if ( !this )
                            goto LABEL_66;
                          System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
                            (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)this,
                            v29,
                            (WarBoardAIRoute_RouteData_o *)v30,
                            (const MethodInfo_2FC6540 *)Method_System_Collections_Generic_Dictionary_int__GameObject__set_Item__);
                        }
                      }
                    }
                    LODWORD(_2__current) = v23->fields.__2__current;
                    if ( (__int64)++v24 >= (int)_2__current )
                      goto LABEL_45;
                  }
                }
LABEL_67:
                v43 = sub_B70798(this);
                sub_B70738(v43, 0LL);
              }
            }
          }
        }
      }
    }
LABEL_66:
    sub_B7076C(this, method);
  }
  if ( _1__state )
    return 0;
  v2->fields.__1__state = -1;
  v5 = sub_B70764(SubmarineMapAssetManager___c__DisplayClass69_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    goto LABEL_66;
  *(_BYTE *)(v5 + 16) = 0;
  if ( !_4__this )
    goto LABEL_66;
  v6 = _4__this->fields.loadAssetNames;
  v7 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(
    v7,
    (Il2CppObject *)v5,
    Method_SubmarineMapAssetManager___c__DisplayClass69_0__CoLoadAssets_b__0__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  v8 = 1;
  AssetManager__loadAssetStorage_31203564(v6, v7, 1, 0LL);
  v9 = (System_Func_bool__o *)sub_B70764(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_SubmarineMapAssetManager___c__DisplayClass69_0__CoLoadAssets_b__1__,
    (const MethodInfo_299432C *)Method_System_Func_bool___ctor__);
  v10 = (UnityEngine_WaitUntil_o *)sub_B70764(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v10, v9, 0LL);
  v2->fields.__2__current = (Il2CppObject *)v10;
  p__2__current = &v2->fields.__2__current;
  sub_B70630(p__2__current);
  *((_DWORD *)p__2__current - 2) = 1;
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

  v2 = sub_B70698(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B70764(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B70698(&Method_SubmarineMapAssetManager__CoLoadAssets_d__69_System_Collections_IEnumerator_Reset__);
  sub_B70738(v3, v4);
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
  struct SubmarineMapAssetManager___c_StaticFields *static_fields; // x0

  if ( (byte_434F0C1 & 1) == 0 )
  {
    sub_B70694(&SubmarineMapAssetManager___c_TypeInfo);
    byte_434F0C1 = 1;
  }
  v1 = (Il2CppObject *)sub_B70764(SubmarineMapAssetManager___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = SubmarineMapAssetManager___c_TypeInfo->static_fields;
  static_fields->__9 = (struct SubmarineMapAssetManager___c_o *)v1;
  sub_B70630(static_fields);
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
    sub_B7076C(this, 0LL);
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