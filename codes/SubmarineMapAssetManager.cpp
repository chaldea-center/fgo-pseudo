void __fastcall SubmarineMapAssetManager___ctor(SubmarineMapAssetManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x0
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

  if ( (byte_42135F4 & 1) == 0 )
  {
    sub_B0D8A4(&string___TypeInfo, method);
    sub_B0D8A4(&StringLiteral_6167/*"Event/Submarine"*/, v3);
    byte_42135F4 = 1;
  }
  v4 = sub_B0D8BC(string___TypeInfo, 1LL);
  if ( !v4 )
    sub_B0D97C(0LL);
  v11 = (struct System_String_array *)v4;
  v12 = StringLiteral_6167/*"Event/Submarine"*/;
  if ( StringLiteral_6167/*"Event/Submarine"*/ )
  {
    v12 = sub_B0D964(StringLiteral_6167/*"Event/Submarine"*/, v11->obj.klass->_1.element_class);
    if ( !v12 )
    {
      v21 = sub_B0D99C();
      sub_B0D948(v21, 0LL);
    }
    v13 = (System_Int32_array **)StringLiteral_6167/*"Event/Submarine"*/;
  }
  else
  {
    v13 = 0LL;
  }
  if ( !v11->max_length )
  {
    v20 = sub_B0D9A8(v12);
    sub_B0D948(v20, 0LL);
  }
  v11->m_Items[0] = (System_String_o *)v13;
  sub_B0D840((BattleServantConfConponent_o *)v11->m_Items, v13, v5, v6, v7, v8, v9, v10);
  this->fields.loadAssetNames = v11;
  sub_B0D840(
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


// local variable allocation has failed, the output may be wrong!
System_Collections_IEnumerator_o *__fastcall SubmarineMapAssetManager__CoLoadAssets(
        SubmarineMapAssetManager_o *this,
        int32_t eventId,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  if ( (byte_42135F0 & 1) == 0 )
  {
    sub_B0D8A4(&SubmarineMapAssetManager__CoLoadAssets_d__69_TypeInfo, *(_QWORD *)&eventId);
    byte_42135F0 = 1;
  }
  v7 = sub_B0D974(SubmarineMapAssetManager__CoLoadAssets_d__69_TypeInfo, *(_QWORD *)&eventId, finishCallback);
  SubmarineMapAssetManager__CoLoadAssets_d__69___ctor((SubmarineMapAssetManager__CoLoadAssets_d__69_o *)v7, 0, 0LL);
  if ( !v7 )
    sub_B0D97C(v8);
  *(_QWORD *)(v7 + 32) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v7 + 32), (System_Int32_array **)this, v9, v10, v11, v12, v13, v14);
  *(_DWORD *)(v7 + 40) = eventId;
  *(_QWORD *)(v7 + 48) = finishCallback;
  sub_B0D840(
    (BattleServantConfConponent_o *)(v7 + 48),
    (System_Int32_array **)finishCallback,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  return (System_Collections_IEnumerator_o *)v7;
}


void __fastcall SubmarineMapAssetManager__Finish(SubmarineMapAssetManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_Dictionary_int__GameObject__o *scannerPrefabDict; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  System_String_array **v65; // x2
  System_String_array **v66; // x3
  System_Boolean_array **v67; // x4
  System_Int32_array **v68; // x5
  System_Int32_array *v69; // x6
  System_Int32_array *v70; // x7
  System_String_array **v71; // x2
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7
  System_String_array **v77; // x2
  System_String_array **v78; // x3
  System_Boolean_array **v79; // x4
  System_Int32_array **v80; // x5
  System_Int32_array *v81; // x6
  System_Int32_array *v82; // x7
  System_String_array **v83; // x2
  System_String_array **v84; // x3
  System_Boolean_array **v85; // x4
  System_Int32_array **v86; // x5
  System_Int32_array *v87; // x6
  System_Int32_array *v88; // x7
  System_String_array **v89; // x2
  System_String_array **v90; // x3
  System_Boolean_array **v91; // x4
  System_Int32_array **v92; // x5
  System_Int32_array *v93; // x6
  System_Int32_array *v94; // x7
  BattleServantConfConponent_o *p_AnimationSkipEFfectPrefab_k__BackingField; // x19
  System_String_array **v96; // x2
  System_String_array **v97; // x3
  System_Boolean_array **v98; // x4
  System_Int32_array **v99; // x5
  System_Int32_array *v100; // x6
  System_Int32_array *v101; // x7
  System_String_array *closeBtnObject; // x19

  if ( (byte_42135F3 & 1) == 0 )
  {
    sub_B0D8A4(&AssetManager_TypeInfo, method);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__GameObject__Clear__, v3);
    byte_42135F3 = 1;
  }
  scannerPrefabDict = this->fields.scannerPrefabDict;
  if ( !scannerPrefabDict
    || (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Clear(
          (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)scannerPrefabDict,
          (const MethodInfo_2E90604 *)Method_System_Collections_Generic_Dictionary_int__GameObject__Clear__),
        (scannerPrefabDict = this->fields.scanRangeNotificatorPrefabDict) == 0LL) )
  {
    sub_B0D97C(scannerPrefabDict);
  }
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Clear(
    (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)scannerPrefabDict,
    (const MethodInfo_2E90604 *)Method_System_Collections_Generic_Dictionary_int__GameObject__Clear__);
  this->fields._PanelPrefab_k__BackingField = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields, 0LL, v5, v6, v7, v8, v9, v10);
  this->fields._GridLinePrefab_k__BackingField = 0LL;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._GridLinePrefab_k__BackingField,
    0LL,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  this->fields._PanelContainerPrefab_k__BackingField = 0LL;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._PanelContainerPrefab_k__BackingField,
    0LL,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  this->fields._EffectContainerPrefab_k__BackingField = 0LL;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._EffectContainerPrefab_k__BackingField,
    0LL,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  this->fields._ClosedPanelTexture_k__BackingField = 0LL;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._ClosedPanelTexture_k__BackingField,
    0LL,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  this->fields._GridTexture_k__BackingField = 0LL;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._GridTexture_k__BackingField,
    0LL,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  this->fields._EffectScannedPanelPrefab_k__BackingField = 0LL;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._EffectScannedPanelPrefab_k__BackingField,
    0LL,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  this->fields._EffectSelectedPanelPrefab_k__BackingField = 0LL;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._EffectSelectedPanelPrefab_k__BackingField,
    0LL,
    v47,
    v48,
    v49,
    v50,
    v51,
    v52);
  this->fields._EffectScannablePanelPrafab_k__BackingField = 0LL;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._EffectScannablePanelPrafab_k__BackingField,
    0LL,
    v53,
    v54,
    v55,
    v56,
    v57,
    v58);
  this->fields._EffectScanObstaclePanelPrafab_k__BackingField = 0LL;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._EffectScanObstaclePanelPrafab_k__BackingField,
    0LL,
    v59,
    v60,
    v61,
    v62,
    v63,
    v64);
  this->fields._ScanProcessPreventedPrafab_k__BackingField = 0LL;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._ScanProcessPreventedPrafab_k__BackingField,
    0LL,
    v65,
    v66,
    v67,
    v68,
    v69,
    v70);
  this->fields._SelectScannerDialogPrefab_k__BackingField = 0LL;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._SelectScannerDialogPrefab_k__BackingField,
    0LL,
    v71,
    v72,
    v73,
    v74,
    v75,
    v76);
  this->fields._ScanConfirmDialogPrefab_k__BackingField = 0LL;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._ScanConfirmDialogPrefab_k__BackingField,
    0LL,
    v77,
    v78,
    v79,
    v80,
    v81,
    v82);
  this->fields._NewScannerDialogPrefab_k__BackingField = 0LL;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._NewScannerDialogPrefab_k__BackingField,
    0LL,
    v83,
    v84,
    v85,
    v86,
    v87,
    v88);
  this->fields._Settings_k__BackingField = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields._Settings_k__BackingField, 0LL, v89, v90, v91, v92, v93, v94);
  this->fields._AnimationSkipEFfectPrefab_k__BackingField = 0LL;
  p_AnimationSkipEFfectPrefab_k__BackingField = (BattleServantConfConponent_o *)&this->fields._AnimationSkipEFfectPrefab_k__BackingField;
  sub_B0D840(p_AnimationSkipEFfectPrefab_k__BackingField, 0LL, v96, v97, v98, v99, v100, v101);
  closeBtnObject = (System_String_array *)p_AnimationSkipEFfectPrefab_k__BackingField->fields._closeBtnObject;
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAssetStorage_29524964(closeBtnObject, 0LL);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall SubmarineMapAssetManager__GetScanAnimObjectPrefab(
        SubmarineMapAssetManager_o *this,
        int32_t scanObjectId,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_int__GameObject__o *scannerPrefabDict; // x0
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42135F1 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__GameObject__TryGetValue__, *(_QWORD *)&scanObjectId);
    byte_42135F1 = 1;
  }
  value = 0LL;
  scannerPrefabDict = this->fields.scannerPrefabDict;
  if ( !scannerPrefabDict )
    sub_B0D97C(0LL);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)scannerPrefabDict,
    scanObjectId,
    &value,
    (const MethodInfo_2E9214C *)Method_System_Collections_Generic_Dictionary_int__GameObject__TryGetValue__);
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

  if ( (byte_42135F2 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__GameObject__TryGetValue__, *(_QWORD *)&scanObjectId);
    byte_42135F2 = 1;
  }
  value = 0LL;
  scanRangeNotificatorPrefabDict = this->fields.scanRangeNotificatorPrefabDict;
  if ( !scanRangeNotificatorPrefabDict )
    sub_B0D97C(0LL);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)scanRangeNotificatorPrefabDict,
    scanObjectId,
    &value,
    (const MethodInfo_2E9214C *)Method_System_Collections_Generic_Dictionary_int__GameObject__TryGetValue__);
  return (UnityEngine_GameObject_o *)value;
}


void __fastcall SubmarineMapAssetManager__Initialize(SubmarineMapAssetManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v5; // x20
  struct System_Collections_Generic_Dictionary_int__GameObject__o **p_scannerPrefabDict; // x19
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  __int64 v13; // x1
  __int64 v14; // x2
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v15; // x20
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7

  if ( (byte_42135EE & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__GameObject___ctor__, method);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_int__GameObject__TypeInfo, v4);
    byte_42135EE = 1;
  }
  v5 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_Dictionary_int__GameObject__TypeInfo,
                                                                                                  method,
                                                                                                  v2);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v5,
    (const MethodInfo_2E8F874 *)Method_System_Collections_Generic_Dictionary_int__GameObject___ctor__);
  this->fields.scannerPrefabDict = (struct System_Collections_Generic_Dictionary_int__GameObject__o *)v5;
  p_scannerPrefabDict = &this->fields.scannerPrefabDict;
  sub_B0D840((BattleServantConfConponent_o *)p_scannerPrefabDict, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
  v15 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B0D974(
                                                                                                   System_Collections_Generic_Dictionary_int__GameObject__TypeInfo,
                                                                                                   v13,
                                                                                                   v14);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v15,
    (const MethodInfo_2E8F874 *)Method_System_Collections_Generic_Dictionary_int__GameObject___ctor__);
  p_scannerPrefabDict[1] = (struct System_Collections_Generic_Dictionary_int__GameObject__o *)v15;
  sub_B0D840(
    (BattleServantConfConponent_o *)(p_scannerPrefabDict + 1),
    (System_Int32_array **)v15,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
}


void __fastcall SubmarineMapAssetManager__LoadMapObject(
        SubmarineMapAssetManager_o *this,
        AssetData_o *assetData,
        int32_t mapId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  Il2CppObject *v9; // x0
  System_String_o *v10; // x0
  struct UnityEngine_Texture2D_o *Object_WarBoardWaitTimeSetting; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  int32_t v18; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42135EF & 1) == 0 )
  {
    sub_B0D8A4(&Method_AssetData_GetObject_Texture2D____67951464, assetData);
    sub_B0D8A4(&int_TypeInfo, v7);
    sub_B0D8A4(&StringLiteral_23588/*"{0:D6}_ClosedPanelTexture"*/, v8);
    byte_42135EF = 1;
  }
  v18 = mapId;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v18);
  v10 = System_String__Format((System_String_o *)StringLiteral_23588/*"{0:D6}_ClosedPanelTexture"*/, v9, 0LL);
  if ( !assetData )
    sub_B0D97C(v10);
  Object_WarBoardWaitTimeSetting = (struct UnityEngine_Texture2D_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                       assetData,
                                                                       v10,
                                                                       (const MethodInfo_1700DD0 *)Method_AssetData_GetObject_Texture2D____67951464);
  this->fields._ClosedPanelTexture_k__BackingField = Object_WarBoardWaitTimeSetting;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._ClosedPanelTexture_k__BackingField,
    (System_Int32_array **)Object_WarBoardWaitTimeSetting,
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._AnimationSkipEFfectPrefab_k__BackingField = value;
  sub_B0D840(
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
  sub_B0D840(
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
  sub_B0D840(
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
  sub_B0D840(
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
  sub_B0D840(
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
  sub_B0D840(
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
  sub_B0D840(
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
  sub_B0D840(
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
  sub_B0D840(
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
  sub_B0D840(
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
  sub_B0D840(
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
  sub_B0D840(
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
  sub_B0D840(
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
  sub_B0D840(
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
  sub_B0D840(
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
  sub_B0D840(
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
  __int64 v2; // x2
  SubmarineMapAssetManager__CoLoadAssets_d__69_o *v3; // x24
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
  __int64 v39; // x1
  __int64 v40; // x1
  __int64 v41; // x1
  int32_t _1__state; // w8
  struct SubmarineMapAssetManager_o *_4__this; // x26
  __int64 v44; // x20
  __int64 v45; // x1
  __int64 v46; // x2
  System_String_array *v47; // x22
  System_Action_o *v48; // x23
  bool v49; // w21
  __int64 v50; // x1
  __int64 v51; // x2
  System_Func_bool__o *v52; // x22
  __int64 v53; // x1
  __int64 v54; // x2
  UnityEngine_WaitUntil_o *v55; // x20
  Il2CppObject **p__2__current; // x24
  System_String_array *loadAssetNames; // x20
  AssetData_o *v58; // x20
  WarBoardWaitTimeSetting_o *Object_WarBoardWaitTimeSetting; // x0
  WarBoardWaitTimeSetting_o *v60; // x0
  WarBoardWaitTimeSetting_o *v61; // x0
  WarBoardWaitTimeSetting_o *v62; // x0
  WarBoardWaitTimeSetting_o *v63; // x0
  WarBoardWaitTimeSetting_o *v64; // x0
  WarBoardWaitTimeSetting_o *v65; // x0
  WarBoardWaitTimeSetting_o *v66; // x0
  WarBoardWaitTimeSetting_o *v67; // x0
  WarBoardWaitTimeSetting_o *v68; // x0
  WarBoardWaitTimeSetting_o *v69; // x0
  WarBoardWaitTimeSetting_o *v70; // x0
  WarBoardWaitTimeSetting_o *v71; // x0
  WarBoardWaitTimeSetting_o *v72; // x0
  __int64 v73; // x1
  __int64 v74; // x2
  System_Collections_Generic_IEnumerable_TSource__o *ListByEventId; // x21
  SubmarineMapAssetManager___c_c *v76; // x8
  struct SubmarineMapAssetManager___c_StaticFields *static_fields; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__69_2; // x22
  Il2CppObject *v79; // x23
  struct SubmarineMapAssetManager___c_StaticFields *v80; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v81; // x21
  __int64 v82; // x1
  __int64 v83; // x2
  System_Text_RegularExpressions_Regex_o *v84; // x22
  __int64 v85; // x1
  __int64 v86; // x2
  Il2CppObject *_2__current; // x8
  SubmarineMapAssetManager__CoLoadAssets_d__69_o *v88; // x23
  unsigned __int64 v89; // x28
  struct SubmarineMapAssetManager_o **v90; // x27
  System_String_o *v91; // x24
  SubmarineMapAssetManager__CoLoadAssets_d__69_o *v92; // x25
  System_String_o *v93; // x0
  int32_t v94; // w25
  UnityEngine_Object_o *v95; // x24
  System_Text_RegularExpressions_Regex_o *v96; // x22
  Il2CppObject *v97; // x8
  SubmarineMapAssetManager__CoLoadAssets_d__69_o *v98; // x23
  unsigned __int64 v99; // x28
  struct SubmarineMapAssetManager_o **p__4__this; // x27
  System_String_o *v101; // x24
  SubmarineMapAssetManager__CoLoadAssets_d__69_o *v102; // x25
  System_String_o *Value; // x0
  int32_t v104; // w25
  UnityEngine_Object_o *v105; // x24
  System_Action_o *finishCallback; // x0
  __int64 v108; // x0
  SubmarineMapAssetManager__CoLoadAssets_d__69_o *v109; // [xsp+8h] [xbp-58h]

  v3 = this;
  if ( (byte_4211732 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_AssetData_GetObject_GameObject____67951440, v4);
    sub_B0D8A4(&Method_AssetData_GetObject_SubmarineSettings___, v5);
    sub_B0D8A4(&Method_AssetData_GetObject_Texture2D____67951464, v6);
    sub_B0D8A4(&AssetManager_TypeInfo, v7);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventPanelScanMaster___, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__GameObject__set_Item__, v9);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Contains_int___, v10);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Select_EventPanelScanEntity__int___, v11);
    sub_B0D8A4(&Method_System_Func_bool___ctor__, v12);
    sub_B0D8A4(&System_Func_bool__TypeInfo, v13);
    sub_B0D8A4(&Method_System_Func_EventPanelScanEntity__int___ctor__, v14);
    sub_B0D8A4(&System_Func_EventPanelScanEntity__int__TypeInfo, v15);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v16);
    sub_B0D8A4(&System_Text_RegularExpressions_Regex_TypeInfo, v17);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    sub_B0D8A4(&Method_SubmarineMapAssetManager___c__CoLoadAssets_b__69_2__, v19);
    sub_B0D8A4(&Method_SubmarineMapAssetManager___c__DisplayClass69_0__CoLoadAssets_b__0__, v20);
    sub_B0D8A4(&Method_SubmarineMapAssetManager___c__DisplayClass69_0__CoLoadAssets_b__1__, v21);
    sub_B0D8A4(&SubmarineMapAssetManager___c__DisplayClass69_0_TypeInfo, v22);
    sub_B0D8A4(&SubmarineMapAssetManager___c_TypeInfo, v23);
    sub_B0D8A4(&UnityEngine_WaitUntil_TypeInfo, v24);
    sub_B0D8A4(&StringLiteral_5892/*"EffectScannedPanel"*/, v25);
    sub_B0D8A4(&StringLiteral_12639/*"Scanner_(?<ID>\\d+)"*/, v26);
    sub_B0D8A4(&StringLiteral_13182/*"SubmarineScanConfirmDialog"*/, v27);
    sub_B0D8A4(&StringLiteral_18212/*"ef_animation_skip"*/, v28);
    sub_B0D8A4(&StringLiteral_13180/*"SubmarinePanel"*/, v29);
    sub_B0D8A4(&StringLiteral_13184/*"SubmarineSelectScannerDialog"*/, v30);
    sub_B0D8A4(&StringLiteral_13173/*"SubmarineEffectScanObstaclePanel"*/, v31);
    sub_B0D8A4(&StringLiteral_13176/*"SubmarineGridLine"*/, v32);
    sub_B0D8A4(&StringLiteral_13181/*"SubmarinePanelContainer"*/, v33);
    sub_B0D8A4(&StringLiteral_13183/*"SubmarineScanRangeNotificator_(?<ID>\\d+)"*/, v34);
    sub_B0D8A4(&StringLiteral_13179/*"SubmarineNewScannerDialog"*/, v35);
    sub_B0D8A4(&StringLiteral_13177/*"SubmarineGridTexture"*/, v36);
    sub_B0D8A4(&StringLiteral_13175/*"SubmarineEffectSelectedPanel"*/, v37);
    sub_B0D8A4(&StringLiteral_13172/*"SubmarineEffectContainer"*/, v38);
    sub_B0D8A4(&StringLiteral_13174/*"SubmarineEffectScannablePanel"*/, v39);
    sub_B0D8A4(&StringLiteral_7279/*"ID"*/, v40);
    this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)sub_B0D8A4(&StringLiteral_13185/*"SubmarineSettings"*/, v41);
    byte_4211732 = 1;
  }
  _1__state = v3->fields.__1__state;
  _4__this = v3->fields.__4__this;
  if ( _1__state == 1 )
  {
    v3->fields.__1__state = -1;
    if ( _4__this )
    {
      loadAssetNames = _4__this->fields.loadAssetNames;
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      }
      this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)AssetManager__getAssetStorage_29524128(
                                                                 loadAssetNames,
                                                                 0LL);
      if ( this )
      {
        if ( !LODWORD(this->fields.__2__current) )
          goto LABEL_67;
        v58 = (AssetData_o *)this->fields.__4__this;
        if ( v58 )
        {
          Object_WarBoardWaitTimeSetting = AssetData__GetObject_WarBoardWaitTimeSetting_(
                                             (AssetData_o *)this->fields.__4__this,
                                             (System_String_o *)StringLiteral_13180/*"SubmarinePanel"*/,
                                             (const MethodInfo_1700DD0 *)Method_AssetData_GetObject_GameObject____67951440);
          _4__this->fields._PanelPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)Object_WarBoardWaitTimeSetting;
          sub_B0D840(&_4__this->fields, Object_WarBoardWaitTimeSetting);
          v60 = AssetData__GetObject_WarBoardWaitTimeSetting_(
                  v58,
                  (System_String_o *)StringLiteral_13176/*"SubmarineGridLine"*/,
                  (const MethodInfo_1700DD0 *)Method_AssetData_GetObject_GameObject____67951440);
          _4__this->fields._GridLinePrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v60;
          sub_B0D840(&_4__this->fields._GridLinePrefab_k__BackingField, v60);
          v61 = AssetData__GetObject_WarBoardWaitTimeSetting_(
                  v58,
                  (System_String_o *)StringLiteral_13181/*"SubmarinePanelContainer"*/,
                  (const MethodInfo_1700DD0 *)Method_AssetData_GetObject_GameObject____67951440);
          _4__this->fields._PanelContainerPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v61;
          sub_B0D840(&_4__this->fields._PanelContainerPrefab_k__BackingField, v61);
          v62 = AssetData__GetObject_WarBoardWaitTimeSetting_(
                  v58,
                  (System_String_o *)StringLiteral_13172/*"SubmarineEffectContainer"*/,
                  (const MethodInfo_1700DD0 *)Method_AssetData_GetObject_GameObject____67951440);
          _4__this->fields._EffectContainerPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v62;
          sub_B0D840(&_4__this->fields._EffectContainerPrefab_k__BackingField, v62);
          v63 = AssetData__GetObject_WarBoardWaitTimeSetting_(
                  v58,
                  (System_String_o *)StringLiteral_5892/*"EffectScannedPanel"*/,
                  (const MethodInfo_1700DD0 *)Method_AssetData_GetObject_GameObject____67951440);
          _4__this->fields._EffectScannedPanelPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v63;
          sub_B0D840(&_4__this->fields._EffectScannedPanelPrefab_k__BackingField, v63);
          v64 = AssetData__GetObject_WarBoardWaitTimeSetting_(
                  v58,
                  (System_String_o *)StringLiteral_13175/*"SubmarineEffectSelectedPanel"*/,
                  (const MethodInfo_1700DD0 *)Method_AssetData_GetObject_GameObject____67951440);
          _4__this->fields._EffectSelectedPanelPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v64;
          sub_B0D840(&_4__this->fields._EffectSelectedPanelPrefab_k__BackingField, v64);
          v65 = AssetData__GetObject_WarBoardWaitTimeSetting_(
                  v58,
                  (System_String_o *)StringLiteral_13174/*"SubmarineEffectScannablePanel"*/,
                  (const MethodInfo_1700DD0 *)Method_AssetData_GetObject_GameObject____67951440);
          _4__this->fields._EffectScannablePanelPrafab_k__BackingField = (struct UnityEngine_GameObject_o *)v65;
          sub_B0D840(&_4__this->fields._EffectScannablePanelPrafab_k__BackingField, v65);
          v66 = AssetData__GetObject_WarBoardWaitTimeSetting_(
                  v58,
                  (System_String_o *)StringLiteral_13173/*"SubmarineEffectScanObstaclePanel"*/,
                  (const MethodInfo_1700DD0 *)Method_AssetData_GetObject_GameObject____67951440);
          _4__this->fields._EffectScanObstaclePanelPrafab_k__BackingField = (struct UnityEngine_GameObject_o *)v66;
          sub_B0D840(&_4__this->fields._EffectScanObstaclePanelPrafab_k__BackingField, v66);
          v67 = AssetData__GetObject_WarBoardWaitTimeSetting_(
                  v58,
                  (System_String_o *)StringLiteral_13177/*"SubmarineGridTexture"*/,
                  (const MethodInfo_1700DD0 *)Method_AssetData_GetObject_Texture2D____67951464);
          _4__this->fields._GridTexture_k__BackingField = (struct UnityEngine_Texture2D_o *)v67;
          sub_B0D840(&_4__this->fields._GridTexture_k__BackingField, v67);
          v68 = AssetData__GetObject_WarBoardWaitTimeSetting_(
                  v58,
                  (System_String_o *)StringLiteral_13185/*"SubmarineSettings"*/,
                  (const MethodInfo_1700DD0 *)Method_AssetData_GetObject_SubmarineSettings___);
          _4__this->fields._Settings_k__BackingField = (struct SubmarineSettings_o *)v68;
          sub_B0D840(&_4__this->fields._Settings_k__BackingField, v68);
          _4__this->fields._ScanProcessPreventedPrafab_k__BackingField = 0LL;
          sub_B0D840(&_4__this->fields._ScanProcessPreventedPrafab_k__BackingField, 0LL);
          v69 = AssetData__GetObject_WarBoardWaitTimeSetting_(
                  v58,
                  (System_String_o *)StringLiteral_18212/*"ef_animation_skip"*/,
                  (const MethodInfo_1700DD0 *)Method_AssetData_GetObject_GameObject____67951440);
          _4__this->fields._AnimationSkipEFfectPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v69;
          sub_B0D840(&_4__this->fields._AnimationSkipEFfectPrefab_k__BackingField, v69);
          v70 = AssetData__GetObject_WarBoardWaitTimeSetting_(
                  v58,
                  (System_String_o *)StringLiteral_13184/*"SubmarineSelectScannerDialog"*/,
                  (const MethodInfo_1700DD0 *)Method_AssetData_GetObject_GameObject____67951440);
          _4__this->fields._SelectScannerDialogPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v70;
          sub_B0D840(&_4__this->fields._SelectScannerDialogPrefab_k__BackingField, v70);
          v71 = AssetData__GetObject_WarBoardWaitTimeSetting_(
                  v58,
                  (System_String_o *)StringLiteral_13182/*"SubmarineScanConfirmDialog"*/,
                  (const MethodInfo_1700DD0 *)Method_AssetData_GetObject_GameObject____67951440);
          _4__this->fields._ScanConfirmDialogPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v71;
          sub_B0D840(&_4__this->fields._ScanConfirmDialogPrefab_k__BackingField, v71);
          v72 = AssetData__GetObject_WarBoardWaitTimeSetting_(
                  v58,
                  (System_String_o *)StringLiteral_13179/*"SubmarineNewScannerDialog"*/,
                  (const MethodInfo_1700DD0 *)Method_AssetData_GetObject_GameObject____67951440);
          _4__this->fields._NewScannerDialogPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v72;
          sub_B0D840(&_4__this->fields._NewScannerDialogPrefab_k__BackingField, v72);
          this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( this )
          {
            this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                       (DataManager_o *)this,
                                                                       (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventPanelScanMaster___);
            if ( this )
            {
              ListByEventId = (System_Collections_Generic_IEnumerable_TSource__o *)EventPanelScanMaster__GetListByEventId(
                                                                                     (EventPanelScanMaster_o *)this,
                                                                                     v3->fields.eventId,
                                                                                     0LL);
              v76 = SubmarineMapAssetManager___c_TypeInfo;
              if ( (BYTE3(SubmarineMapAssetManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !SubmarineMapAssetManager___c_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(SubmarineMapAssetManager___c_TypeInfo);
                v76 = SubmarineMapAssetManager___c_TypeInfo;
              }
              static_fields = v76->static_fields;
              _9__69_2 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__69_2;
              if ( !_9__69_2 )
              {
                if ( (BYTE3(v76->vtable._0_Equals.methodPtr) & 4) != 0 && !v76->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(v76);
                  static_fields = SubmarineMapAssetManager___c_TypeInfo->static_fields;
                }
                v79 = (Il2CppObject *)static_fields->__9;
                _9__69_2 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B0D974(
                                                                                             System_Func_EventPanelScanEntity__int__TypeInfo,
                                                                                             v73,
                                                                                             v74);
                System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
                  _9__69_2,
                  v79,
                  Method_SubmarineMapAssetManager___c__CoLoadAssets_b__69_2__,
                  (const MethodInfo_2619564 *)Method_System_Func_EventPanelScanEntity__int___ctor__);
                v80 = SubmarineMapAssetManager___c_TypeInfo->static_fields;
                v80->__9__69_2 = (struct System_Func_EventPanelScanEntity__int__o *)_9__69_2;
                sub_B0D840(&v80->__9__69_2, _9__69_2);
              }
              v81 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                                           ListByEventId,
                                                                           (System_Func_TSource__TResult__o *)_9__69_2,
                                                                           (const MethodInfo_1B51AB4 *)Method_System_Linq_Enumerable_Select_EventPanelScanEntity__int___);
              v84 = (System_Text_RegularExpressions_Regex_o *)sub_B0D974(
                                                                System_Text_RegularExpressions_Regex_TypeInfo,
                                                                v82,
                                                                v83);
              System_Text_RegularExpressions_Regex___ctor_47931116(v84, (System_String_o *)StringLiteral_12639/*"Scanner_(?<ID>\\d+)"*/, 0LL);
              this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)AssetData__GetObjectNameList(v58, 0LL);
              if ( this )
              {
                _2__current = this->fields.__2__current;
                v88 = this;
                v109 = v3;
                if ( (int)_2__current < 1 )
                {
LABEL_45:
                  v96 = (System_Text_RegularExpressions_Regex_o *)sub_B0D974(
                                                                    System_Text_RegularExpressions_Regex_TypeInfo,
                                                                    v85,
                                                                    v86);
                  System_Text_RegularExpressions_Regex___ctor_47931116(v96, (System_String_o *)StringLiteral_13183/*"SubmarineScanRangeNotificator_(?<ID>\\d+)"*/, 0LL);
                  this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)AssetData__GetObjectNameList(v58, 0LL);
                  if ( !this )
                    goto LABEL_66;
                  v97 = this->fields.__2__current;
                  v98 = this;
                  if ( (int)v97 < 1 )
                  {
LABEL_62:
                    finishCallback = v109->fields.finishCallback;
                    if ( finishCallback )
                      ActionExtensions__Call(finishCallback, 0LL);
                    return 0;
                  }
                  v99 = 0LL;
                  p__4__this = &this->fields.__4__this;
                  while ( v99 < (unsigned int)v97 )
                  {
                    if ( !v96 )
                      goto LABEL_66;
                    v101 = (System_String_o *)p__4__this[v99];
                    this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)System_Text_RegularExpressions_Regex__Match_47938780(
                                                                               v96,
                                                                               v101,
                                                                               0LL);
                    if ( !this )
                      goto LABEL_66;
                    v102 = this;
                    this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)System_Text_RegularExpressions_Group__get_Success(
                                                                               (System_Text_RegularExpressions_Group_o *)this,
                                                                               0LL);
                    if ( ((unsigned __int8)this & 1) != 0 )
                    {
                      this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)((__int64 (__fastcall *)(SubmarineMapAssetManager__CoLoadAssets_d__69_o *, Il2CppMethodPointer))v102->klass->vtable._5_System_IDisposable_Dispose.method)(
                                                                                 v102,
                                                                                 v102->klass->vtable._6_MoveNext.methodPtr);
                      if ( !this )
                        goto LABEL_66;
                      this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)System_Text_RegularExpressions_GroupCollection__get_Item_37056304(
                                                                                 (System_Text_RegularExpressions_GroupCollection_o *)this,
                                                                                 (System_String_o *)StringLiteral_7279/*"ID"*/,
                                                                                 0LL);
                      if ( !this )
                        goto LABEL_66;
                      Value = System_Text_RegularExpressions_Capture__get_Value(
                                (System_Text_RegularExpressions_Capture_o *)this,
                                0LL);
                      v104 = System_Int32__Parse(Value, 0LL);
                      this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)System_Linq_Enumerable__Contains_int_(
                                                                                 v81,
                                                                                 v104,
                                                                                 (const MethodInfo_1B451E8 *)Method_System_Linq_Enumerable_Contains_int___);
                      if ( ((unsigned __int8)this & 1) != 0 )
                      {
                        v105 = (UnityEngine_Object_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                         v58,
                                                         v101,
                                                         (const MethodInfo_1700DD0 *)Method_AssetData_GetObject_GameObject____67951440);
                        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                        }
                        this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)UnityEngine_Object__op_Equality(
                                                                                   v105,
                                                                                   0LL,
                                                                                   0LL);
                        if ( ((unsigned __int8)this & 1) == 0 )
                        {
                          this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)_4__this->fields.scanRangeNotificatorPrefabDict;
                          if ( !this )
                            goto LABEL_66;
                          System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
                            (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)this,
                            v104,
                            (WarBoardAIRoute_RouteData_o *)v105,
                            (const MethodInfo_2E90400 *)Method_System_Collections_Generic_Dictionary_int__GameObject__set_Item__);
                        }
                      }
                    }
                    LODWORD(v97) = v98->fields.__2__current;
                    if ( (__int64)++v99 >= (int)v97 )
                      goto LABEL_62;
                  }
                }
                else
                {
                  v89 = 0LL;
                  v90 = &this->fields.__4__this;
                  while ( v89 < (unsigned int)_2__current )
                  {
                    if ( !v84 )
                      goto LABEL_66;
                    v91 = (System_String_o *)v90[v89];
                    this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)System_Text_RegularExpressions_Regex__Match_47938780(
                                                                               v84,
                                                                               v91,
                                                                               0LL);
                    if ( !this )
                      goto LABEL_66;
                    v92 = this;
                    this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)System_Text_RegularExpressions_Group__get_Success(
                                                                               (System_Text_RegularExpressions_Group_o *)this,
                                                                               0LL);
                    if ( ((unsigned __int8)this & 1) != 0 )
                    {
                      this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)((__int64 (__fastcall *)(SubmarineMapAssetManager__CoLoadAssets_d__69_o *, Il2CppMethodPointer))v92->klass->vtable._5_System_IDisposable_Dispose.method)(
                                                                                 v92,
                                                                                 v92->klass->vtable._6_MoveNext.methodPtr);
                      if ( !this )
                        goto LABEL_66;
                      this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)System_Text_RegularExpressions_GroupCollection__get_Item_37056304(
                                                                                 (System_Text_RegularExpressions_GroupCollection_o *)this,
                                                                                 (System_String_o *)StringLiteral_7279/*"ID"*/,
                                                                                 0LL);
                      if ( !this )
                        goto LABEL_66;
                      v93 = System_Text_RegularExpressions_Capture__get_Value(
                              (System_Text_RegularExpressions_Capture_o *)this,
                              0LL);
                      v94 = System_Int32__Parse(v93, 0LL);
                      this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)System_Linq_Enumerable__Contains_int_(
                                                                                 v81,
                                                                                 v94,
                                                                                 (const MethodInfo_1B451E8 *)Method_System_Linq_Enumerable_Contains_int___);
                      if ( ((unsigned __int8)this & 1) != 0 )
                      {
                        v95 = (UnityEngine_Object_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                        v58,
                                                        v91,
                                                        (const MethodInfo_1700DD0 *)Method_AssetData_GetObject_GameObject____67951440);
                        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                        }
                        this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)UnityEngine_Object__op_Equality(
                                                                                   v95,
                                                                                   0LL,
                                                                                   0LL);
                        if ( ((unsigned __int8)this & 1) == 0 )
                        {
                          this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)_4__this->fields.scannerPrefabDict;
                          if ( !this )
                            goto LABEL_66;
                          System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
                            (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)this,
                            v94,
                            (WarBoardAIRoute_RouteData_o *)v95,
                            (const MethodInfo_2E90400 *)Method_System_Collections_Generic_Dictionary_int__GameObject__set_Item__);
                        }
                      }
                    }
                    LODWORD(_2__current) = v88->fields.__2__current;
                    if ( (__int64)++v89 >= (int)_2__current )
                      goto LABEL_45;
                  }
                }
LABEL_67:
                v108 = sub_B0D9A8(this);
                sub_B0D948(v108, 0LL);
              }
            }
          }
        }
      }
    }
LABEL_66:
    sub_B0D97C(this);
  }
  if ( _1__state )
    return 0;
  v3->fields.__1__state = -1;
  v44 = sub_B0D974(SubmarineMapAssetManager___c__DisplayClass69_0_TypeInfo, method, v2);
  System_Object___ctor((Il2CppObject *)v44, 0LL);
  if ( !v44 )
    goto LABEL_66;
  *(_BYTE *)(v44 + 16) = 0;
  if ( !_4__this )
    goto LABEL_66;
  v47 = _4__this->fields.loadAssetNames;
  v48 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v45, v46);
  System_Action___ctor(
    v48,
    (Il2CppObject *)v44,
    Method_SubmarineMapAssetManager___c__DisplayClass69_0__CoLoadAssets_b__0__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  v49 = 1;
  AssetManager__loadAssetStorage_29522920(v47, v48, 1, 0LL);
  v52 = (System_Func_bool__o *)sub_B0D974(System_Func_bool__TypeInfo, v50, v51);
  System_Func_bool____ctor(
    v52,
    (Il2CppObject *)v44,
    Method_SubmarineMapAssetManager___c__DisplayClass69_0__CoLoadAssets_b__1__,
    (const MethodInfo_26056AC *)Method_System_Func_bool___ctor__);
  v55 = (UnityEngine_WaitUntil_o *)sub_B0D974(UnityEngine_WaitUntil_TypeInfo, v53, v54);
  UnityEngine_WaitUntil___ctor(v55, v52, 0LL);
  v3->fields.__2__current = (Il2CppObject *)v55;
  p__2__current = &v3->fields.__2__current;
  sub_B0D840(p__2__current, v55);
  *((_DWORD *)p__2__current - 2) = 1;
  return v49;
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
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_B0D8A8(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_B0D974(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_B0D8A8(&Method_SubmarineMapAssetManager__CoLoadAssets_d__69_System_Collections_IEnumerator_Reset__);
  sub_B0D948(v5, v6);
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
  Il2CppObject *v3; // x19
  struct SubmarineMapAssetManager___c_StaticFields *static_fields; // x0

  if ( (byte_4211731 & 1) == 0 )
  {
    sub_B0D8A4(&SubmarineMapAssetManager___c_TypeInfo, v1);
    byte_4211731 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(SubmarineMapAssetManager___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = SubmarineMapAssetManager___c_TypeInfo->static_fields;
  static_fields->__9 = (struct SubmarineMapAssetManager___c_o *)v3;
  sub_B0D840(static_fields, v3);
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
    sub_B0D97C(this);
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