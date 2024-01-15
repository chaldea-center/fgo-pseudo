void __fastcall SubmarineMapAssetManager___ctor(SubmarineMapAssetManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  struct System_String_array *v12; // x20
  __int64 v13; // x0
  System_Int32_array **v14; // x1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  if ( (byte_40F7C3F & 1) == 0 )
  {
    sub_B16FFC(&string___TypeInfo, method);
    sub_B16FFC(&StringLiteral_6132/*"Event/Submarine"*/, v4);
    byte_40F7C3F = 1;
  }
  v5 = sub_B17014(string___TypeInfo, 1LL, v2);
  if ( !v5 )
    sub_B170D4();
  v12 = (struct System_String_array *)v5;
  v13 = StringLiteral_6132/*"Event/Submarine"*/;
  if ( StringLiteral_6132/*"Event/Submarine"*/ )
  {
    v13 = sub_B170BC(StringLiteral_6132/*"Event/Submarine"*/, v12->obj.klass->_1.element_class);
    if ( !v13 )
    {
      sub_B170F4(0LL);
      sub_B170A0();
    }
    v14 = (System_Int32_array **)StringLiteral_6132/*"Event/Submarine"*/;
  }
  else
  {
    v14 = 0LL;
  }
  if ( !v12->max_length )
  {
    sub_B17100(v13, v14, v6);
    sub_B170A0();
  }
  v12->m_Items[0] = (System_String_o *)v14;
  sub_B16F98((BattleServantConfConponent_o *)v12->m_Items, v14, v6, v7, v8, v9, v10, v11);
  this->fields.loadAssetNames = v12;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.loadAssetNames,
    (System_Int32_array **)v12,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_IEnumerator_o *__fastcall SubmarineMapAssetManager__CoLoadAssets(
        SubmarineMapAssetManager_o *this,
        int32_t eventId,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x22
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

  if ( (byte_40F7C3B & 1) == 0 )
  {
    sub_B16FFC(&SubmarineMapAssetManager__CoLoadAssets_d__69_TypeInfo, *(_QWORD *)&eventId);
    byte_40F7C3B = 1;
  }
  v8 = sub_B170CC(
         SubmarineMapAssetManager__CoLoadAssets_d__69_TypeInfo,
         *(_QWORD *)&eventId,
         finishCallback,
         method,
         v4);
  SubmarineMapAssetManager__CoLoadAssets_d__69___ctor((SubmarineMapAssetManager__CoLoadAssets_d__69_o *)v8, 0, 0LL);
  if ( !v8 )
    sub_B170D4();
  *(_QWORD *)(v8 + 32) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v8 + 32), (System_Int32_array **)this, v9, v10, v11, v12, v13, v14);
  *(_DWORD *)(v8 + 40) = eventId;
  *(_QWORD *)(v8 + 48) = finishCallback;
  sub_B16F98(
    (BattleServantConfConponent_o *)(v8 + 48),
    (System_Int32_array **)finishCallback,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  return (System_Collections_IEnumerator_o *)v8;
}


void __fastcall SubmarineMapAssetManager__Finish(SubmarineMapAssetManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_Dictionary_int__GameObject__o *scannerPrefabDict; // x0
  struct System_Collections_Generic_Dictionary_int__GameObject__o *scanRangeNotificatorPrefabDict; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  System_String_array **v72; // x2
  System_String_array **v73; // x3
  System_Boolean_array **v74; // x4
  System_Int32_array **v75; // x5
  System_Int32_array *v76; // x6
  System_Int32_array *v77; // x7
  System_String_array **v78; // x2
  System_String_array **v79; // x3
  System_Boolean_array **v80; // x4
  System_Int32_array **v81; // x5
  System_Int32_array *v82; // x6
  System_Int32_array *v83; // x7
  System_String_array **v84; // x2
  System_String_array **v85; // x3
  System_Boolean_array **v86; // x4
  System_Int32_array **v87; // x5
  System_Int32_array *v88; // x6
  System_Int32_array *v89; // x7
  System_String_array **v90; // x2
  System_String_array **v91; // x3
  System_Boolean_array **v92; // x4
  System_Int32_array **v93; // x5
  System_Int32_array *v94; // x6
  System_Int32_array *v95; // x7
  BattleServantConfConponent_o *p_AnimationSkipEFfectPrefab_k__BackingField; // x19
  System_String_array **v97; // x2
  System_String_array **v98; // x3
  System_Boolean_array **v99; // x4
  System_Int32_array **v100; // x5
  System_Int32_array *v101; // x6
  System_Int32_array *v102; // x7
  System_String_array *closeBtnObject; // x19

  if ( (byte_40F7C3E & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, method);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__GameObject__Clear__, v3);
    byte_40F7C3E = 1;
  }
  scannerPrefabDict = this->fields.scannerPrefabDict;
  if ( !scannerPrefabDict
    || (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Clear(
          (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)scannerPrefabDict,
          (const MethodInfo_2DE9598 *)Method_System_Collections_Generic_Dictionary_int__GameObject__Clear__),
        (scanRangeNotificatorPrefabDict = this->fields.scanRangeNotificatorPrefabDict) == 0LL) )
  {
    sub_B170D4();
  }
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Clear(
    (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)scanRangeNotificatorPrefabDict,
    (const MethodInfo_2DE9598 *)Method_System_Collections_Generic_Dictionary_int__GameObject__Clear__);
  this->fields._PanelPrefab_k__BackingField = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields, 0LL, v6, v7, v8, v9, v10, v11);
  this->fields._GridLinePrefab_k__BackingField = 0LL;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._GridLinePrefab_k__BackingField,
    0LL,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  this->fields._PanelContainerPrefab_k__BackingField = 0LL;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._PanelContainerPrefab_k__BackingField,
    0LL,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  this->fields._EffectContainerPrefab_k__BackingField = 0LL;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._EffectContainerPrefab_k__BackingField,
    0LL,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  this->fields._ClosedPanelTexture_k__BackingField = 0LL;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._ClosedPanelTexture_k__BackingField,
    0LL,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  this->fields._GridTexture_k__BackingField = 0LL;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._GridTexture_k__BackingField,
    0LL,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
  this->fields._EffectScannedPanelPrefab_k__BackingField = 0LL;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._EffectScannedPanelPrefab_k__BackingField,
    0LL,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
  this->fields._EffectSelectedPanelPrefab_k__BackingField = 0LL;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._EffectSelectedPanelPrefab_k__BackingField,
    0LL,
    v48,
    v49,
    v50,
    v51,
    v52,
    v53);
  this->fields._EffectScannablePanelPrafab_k__BackingField = 0LL;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._EffectScannablePanelPrafab_k__BackingField,
    0LL,
    v54,
    v55,
    v56,
    v57,
    v58,
    v59);
  this->fields._EffectScanObstaclePanelPrafab_k__BackingField = 0LL;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._EffectScanObstaclePanelPrafab_k__BackingField,
    0LL,
    v60,
    v61,
    v62,
    v63,
    v64,
    v65);
  this->fields._ScanProcessPreventedPrafab_k__BackingField = 0LL;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._ScanProcessPreventedPrafab_k__BackingField,
    0LL,
    v66,
    v67,
    v68,
    v69,
    v70,
    v71);
  this->fields._SelectScannerDialogPrefab_k__BackingField = 0LL;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._SelectScannerDialogPrefab_k__BackingField,
    0LL,
    v72,
    v73,
    v74,
    v75,
    v76,
    v77);
  this->fields._ScanConfirmDialogPrefab_k__BackingField = 0LL;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._ScanConfirmDialogPrefab_k__BackingField,
    0LL,
    v78,
    v79,
    v80,
    v81,
    v82,
    v83);
  this->fields._NewScannerDialogPrefab_k__BackingField = 0LL;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._NewScannerDialogPrefab_k__BackingField,
    0LL,
    v84,
    v85,
    v86,
    v87,
    v88,
    v89);
  this->fields._Settings_k__BackingField = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields._Settings_k__BackingField, 0LL, v90, v91, v92, v93, v94, v95);
  this->fields._AnimationSkipEFfectPrefab_k__BackingField = 0LL;
  p_AnimationSkipEFfectPrefab_k__BackingField = (BattleServantConfConponent_o *)&this->fields._AnimationSkipEFfectPrefab_k__BackingField;
  sub_B16F98(p_AnimationSkipEFfectPrefab_k__BackingField, 0LL, v97, v98, v99, v100, v101, v102);
  closeBtnObject = (System_String_array *)p_AnimationSkipEFfectPrefab_k__BackingField->fields._closeBtnObject;
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAssetStorage_29955940(closeBtnObject, 0LL);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall SubmarineMapAssetManager__GetScanAnimObjectPrefab(
        SubmarineMapAssetManager_o *this,
        int32_t scanObjectId,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_int__GameObject__o *scannerPrefabDict; // x0
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40F7C3C & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__GameObject__TryGetValue__, *(_QWORD *)&scanObjectId);
    byte_40F7C3C = 1;
  }
  value = 0LL;
  scannerPrefabDict = this->fields.scannerPrefabDict;
  if ( !scannerPrefabDict )
    sub_B170D4();
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)scannerPrefabDict,
    scanObjectId,
    &value,
    (const MethodInfo_2DEB0E0 *)Method_System_Collections_Generic_Dictionary_int__GameObject__TryGetValue__);
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

  if ( (byte_40F7C3D & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__GameObject__TryGetValue__, *(_QWORD *)&scanObjectId);
    byte_40F7C3D = 1;
  }
  value = 0LL;
  scanRangeNotificatorPrefabDict = this->fields.scanRangeNotificatorPrefabDict;
  if ( !scanRangeNotificatorPrefabDict )
    sub_B170D4();
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)scanRangeNotificatorPrefabDict,
    scanObjectId,
    &value,
    (const MethodInfo_2DEB0E0 *)Method_System_Collections_Generic_Dictionary_int__GameObject__TryGetValue__);
  return (UnityEngine_GameObject_o *)value;
}


void __fastcall SubmarineMapAssetManager__Initialize(SubmarineMapAssetManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v7; // x20
  struct System_Collections_Generic_Dictionary_int__GameObject__o **p_scannerPrefabDict; // x19
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v19; // x20
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7

  if ( (byte_40F7C39 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__GameObject___ctor__, method);
    sub_B16FFC(&System_Collections_Generic_Dictionary_int__GameObject__TypeInfo, v6);
    byte_40F7C39 = 1;
  }
  v7 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_Dictionary_int__GameObject__TypeInfo,
                                                                                                  method,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v7,
    (const MethodInfo_2DE8808 *)Method_System_Collections_Generic_Dictionary_int__GameObject___ctor__);
  this->fields.scannerPrefabDict = (struct System_Collections_Generic_Dictionary_int__GameObject__o *)v7;
  p_scannerPrefabDict = &this->fields.scannerPrefabDict;
  sub_B16F98(
    (BattleServantConfConponent_o *)p_scannerPrefabDict,
    (System_Int32_array **)v7,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  v19 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B170CC(
                                                                                                   System_Collections_Generic_Dictionary_int__GameObject__TypeInfo,
                                                                                                   v15,
                                                                                                   v16,
                                                                                                   v17,
                                                                                                   v18);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v19,
    (const MethodInfo_2DE8808 *)Method_System_Collections_Generic_Dictionary_int__GameObject___ctor__);
  p_scannerPrefabDict[1] = (struct System_Collections_Generic_Dictionary_int__GameObject__o *)v19;
  sub_B16F98(
    (BattleServantConfConponent_o *)(p_scannerPrefabDict + 1),
    (System_Int32_array **)v19,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
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

  if ( (byte_40F7C3A & 1) == 0 )
  {
    sub_B16FFC(&Method_AssetData_GetObject_Texture2D____66802808, assetData);
    sub_B16FFC(&int_TypeInfo, v7);
    sub_B16FFC(&StringLiteral_23416/*"{0:D6}_ClosedPanelTexture"*/, v8);
    byte_40F7C3A = 1;
  }
  v18 = mapId;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v18);
  v10 = System_String__Format((System_String_o *)StringLiteral_23416/*"{0:D6}_ClosedPanelTexture"*/, v9, 0LL);
  if ( !assetData )
    sub_B170D4();
  Object_WarBoardWaitTimeSetting = (struct UnityEngine_Texture2D_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                       assetData,
                                                                       v10,
                                                                       (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_Texture2D____66802808);
  this->fields._ClosedPanelTexture_k__BackingField = Object_WarBoardWaitTimeSetting;
  sub_B16F98(
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
  sub_B16F98(
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
  sub_B16F98(
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
  sub_B16F98(
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
  sub_B16F98(
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
  sub_B16F98(
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
  sub_B16F98(
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
  sub_B16F98(
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
  sub_B16F98(
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
  sub_B16F98(
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
  sub_B16F98(
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
  sub_B16F98(
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
  sub_B16F98(
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
  sub_B16F98(
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
  sub_B16F98(
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
  sub_B16F98(
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
  sub_B16F98(
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
  __int64 v3; // x3
  __int64 v4; // x4
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
  __int64 v42; // x1
  __int64 v43; // x1
  int32_t _1__state; // w8
  struct SubmarineMapAssetManager_o *_4__this; // x26
  __int64 v46; // x20
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x3
  __int64 v50; // x4
  System_String_array *v51; // x22
  System_Action_o *v52; // x23
  bool v53; // w21
  __int64 v54; // x1
  __int64 v55; // x2
  __int64 v56; // x3
  __int64 v57; // x4
  System_Func_bool__o *v58; // x22
  __int64 v59; // x1
  __int64 v60; // x2
  __int64 v61; // x3
  __int64 v62; // x4
  UnityEngine_WaitUntil_o *v63; // x20
  Il2CppObject **p__2__current; // x24
  System_String_array **v65; // x2
  System_String_array **v66; // x3
  System_Boolean_array **v67; // x4
  System_Int32_array **v68; // x5
  System_Int32_array *v69; // x6
  System_Int32_array *v70; // x7
  System_String_array *loadAssetNames; // x20
  void *AssetStorage_29955104; // x0
  __int64 v73; // x1
  __int64 v74; // x2
  AssetData_o *v75; // x20
  System_Int32_array **Object_WarBoardWaitTimeSetting; // x0
  System_String_array **v77; // x2
  System_String_array **v78; // x3
  System_Boolean_array **v79; // x4
  System_Int32_array **v80; // x5
  System_Int32_array *v81; // x6
  System_Int32_array *v82; // x7
  System_Int32_array **v83; // x0
  System_String_array **v84; // x2
  System_String_array **v85; // x3
  System_Boolean_array **v86; // x4
  System_Int32_array **v87; // x5
  System_Int32_array *v88; // x6
  System_Int32_array *v89; // x7
  System_Int32_array **v90; // x0
  System_String_array **v91; // x2
  System_String_array **v92; // x3
  System_Boolean_array **v93; // x4
  System_Int32_array **v94; // x5
  System_Int32_array *v95; // x6
  System_Int32_array *v96; // x7
  System_Int32_array **v97; // x0
  System_String_array **v98; // x2
  System_String_array **v99; // x3
  System_Boolean_array **v100; // x4
  System_Int32_array **v101; // x5
  System_Int32_array *v102; // x6
  System_Int32_array *v103; // x7
  System_Int32_array **v104; // x0
  System_String_array **v105; // x2
  System_String_array **v106; // x3
  System_Boolean_array **v107; // x4
  System_Int32_array **v108; // x5
  System_Int32_array *v109; // x6
  System_Int32_array *v110; // x7
  System_Int32_array **v111; // x0
  System_String_array **v112; // x2
  System_String_array **v113; // x3
  System_Boolean_array **v114; // x4
  System_Int32_array **v115; // x5
  System_Int32_array *v116; // x6
  System_Int32_array *v117; // x7
  System_Int32_array **v118; // x0
  System_String_array **v119; // x2
  System_String_array **v120; // x3
  System_Boolean_array **v121; // x4
  System_Int32_array **v122; // x5
  System_Int32_array *v123; // x6
  System_Int32_array *v124; // x7
  System_Int32_array **v125; // x0
  System_String_array **v126; // x2
  System_String_array **v127; // x3
  System_Boolean_array **v128; // x4
  System_Int32_array **v129; // x5
  System_Int32_array *v130; // x6
  System_Int32_array *v131; // x7
  System_Int32_array **v132; // x0
  System_String_array **v133; // x2
  System_String_array **v134; // x3
  System_Boolean_array **v135; // x4
  System_Int32_array **v136; // x5
  System_Int32_array *v137; // x6
  System_Int32_array *v138; // x7
  System_Int32_array **v139; // x0
  System_String_array **v140; // x2
  System_String_array **v141; // x3
  System_Boolean_array **v142; // x4
  System_Int32_array **v143; // x5
  System_Int32_array *v144; // x6
  System_Int32_array *v145; // x7
  System_String_array **v146; // x2
  System_String_array **v147; // x3
  System_Boolean_array **v148; // x4
  System_Int32_array **v149; // x5
  System_Int32_array *v150; // x6
  System_Int32_array *v151; // x7
  System_Int32_array **v152; // x0
  System_String_array **v153; // x2
  System_String_array **v154; // x3
  System_Boolean_array **v155; // x4
  System_Int32_array **v156; // x5
  System_Int32_array *v157; // x6
  System_Int32_array *v158; // x7
  System_Int32_array **v159; // x0
  System_String_array **v160; // x2
  System_String_array **v161; // x3
  System_Boolean_array **v162; // x4
  System_Int32_array **v163; // x5
  System_Int32_array *v164; // x6
  System_Int32_array *v165; // x7
  System_Int32_array **v166; // x0
  System_String_array **v167; // x2
  System_String_array **v168; // x3
  System_Boolean_array **v169; // x4
  System_Int32_array **v170; // x5
  System_Int32_array *v171; // x6
  System_Int32_array *v172; // x7
  System_Int32_array **v173; // x0
  System_String_array **v174; // x2
  System_String_array **v175; // x3
  System_Boolean_array **v176; // x4
  System_Int32_array **v177; // x5
  System_Int32_array *v178; // x6
  System_Int32_array *v179; // x7
  WebViewManager_o *Instance; // x0
  EventPanelScanMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v182; // x1
  __int64 v183; // x2
  __int64 v184; // x3
  __int64 v185; // x4
  System_Collections_Generic_IEnumerable_TSource__o *ListByEventId; // x21
  SubmarineMapAssetManager___c_c *v187; // x8
  struct SubmarineMapAssetManager___c_StaticFields *static_fields; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__69_2; // x22
  Il2CppObject *v190; // x23
  struct SubmarineMapAssetManager___c_StaticFields *v191; // x0
  System_String_array **v192; // x2
  System_String_array **v193; // x3
  System_Boolean_array **v194; // x4
  System_Int32_array **v195; // x5
  System_Int32_array *v196; // x6
  System_Int32_array *v197; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v198; // x21
  __int64 v199; // x1
  __int64 v200; // x2
  __int64 v201; // x3
  __int64 v202; // x4
  System_Text_RegularExpressions_Regex_o *v203; // x22
  __int64 v204; // x3
  __int64 v205; // x4
  __int64 v206; // x8
  _DWORD *v207; // x23
  unsigned __int64 v208; // x28
  char *v209; // x27
  System_String_o *v210; // x24
  System_Text_RegularExpressions_Group_o *v211; // x0
  System_Text_RegularExpressions_Group_o *v212; // x25
  System_Text_RegularExpressions_GroupCollection_o *v213; // x0
  System_Text_RegularExpressions_Capture_o *v214; // x0
  System_String_o *v215; // x0
  int32_t v216; // w25
  UnityEngine_Object_o *v217; // x24
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *scannerPrefabDict; // x0
  System_Text_RegularExpressions_Regex_o *v219; // x22
  __int64 v220; // x8
  _DWORD *v221; // x23
  unsigned __int64 v222; // x28
  char *v223; // x27
  System_String_o *v224; // x24
  System_Text_RegularExpressions_Group_o *matched; // x0
  System_Text_RegularExpressions_Group_o *v226; // x25
  System_Text_RegularExpressions_GroupCollection_o *v227; // x0
  System_Text_RegularExpressions_Capture_o *Item_36906384; // x0
  System_String_o *Value; // x0
  int32_t v230; // w25
  UnityEngine_Object_o *v231; // x24
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *scanRangeNotificatorPrefabDict; // x0
  System_Action_o *finishCallback; // x0
  SubmarineMapAssetManager__CoLoadAssets_d__69_o *v235; // [xsp+8h] [xbp-58h]

  if ( (byte_40F7A6C & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_AssetData_GetObject_GameObject____66802784, v6);
    sub_B16FFC(&Method_AssetData_GetObject_SubmarineSettings___, v7);
    sub_B16FFC(&Method_AssetData_GetObject_Texture2D____66802808, v8);
    sub_B16FFC(&AssetManager_TypeInfo, v9);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventPanelScanMaster___, v10);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__GameObject__set_Item__, v11);
    sub_B16FFC(&Method_System_Linq_Enumerable_Contains_int___, v12);
    sub_B16FFC(&Method_System_Linq_Enumerable_Select_EventPanelScanEntity__int___, v13);
    sub_B16FFC(&Method_System_Func_bool___ctor__, v14);
    sub_B16FFC(&System_Func_bool__TypeInfo, v15);
    sub_B16FFC(&Method_System_Func_EventPanelScanEntity__int___ctor__, v16);
    sub_B16FFC(&System_Func_EventPanelScanEntity__int__TypeInfo, v17);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v18);
    sub_B16FFC(&System_Text_RegularExpressions_Regex_TypeInfo, v19);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20);
    sub_B16FFC(&Method_SubmarineMapAssetManager___c__CoLoadAssets_b__69_2__, v21);
    sub_B16FFC(&Method_SubmarineMapAssetManager___c__DisplayClass69_0__CoLoadAssets_b__0__, v22);
    sub_B16FFC(&Method_SubmarineMapAssetManager___c__DisplayClass69_0__CoLoadAssets_b__1__, v23);
    sub_B16FFC(&SubmarineMapAssetManager___c__DisplayClass69_0_TypeInfo, v24);
    sub_B16FFC(&SubmarineMapAssetManager___c_TypeInfo, v25);
    sub_B16FFC(&UnityEngine_WaitUntil_TypeInfo, v26);
    sub_B16FFC(&StringLiteral_5858/*"EffectScannedPanel"*/, v27);
    sub_B16FFC(&StringLiteral_12545/*"Scanner_(?<ID>\\d+)"*/, v28);
    sub_B16FFC(&StringLiteral_13082/*"SubmarineScanConfirmDialog"*/, v29);
    sub_B16FFC(&StringLiteral_18088/*"ef_animation_skip"*/, v30);
    sub_B16FFC(&StringLiteral_13080/*"SubmarinePanel"*/, v31);
    sub_B16FFC(&StringLiteral_13084/*"SubmarineSelectScannerDialog"*/, v32);
    sub_B16FFC(&StringLiteral_13073/*"SubmarineEffectScanObstaclePanel"*/, v33);
    sub_B16FFC(&StringLiteral_13076/*"SubmarineGridLine"*/, v34);
    sub_B16FFC(&StringLiteral_13081/*"SubmarinePanelContainer"*/, v35);
    sub_B16FFC(&StringLiteral_13083/*"SubmarineScanRangeNotificator_(?<ID>\\d+)"*/, v36);
    sub_B16FFC(&StringLiteral_13079/*"SubmarineNewScannerDialog"*/, v37);
    sub_B16FFC(&StringLiteral_13077/*"SubmarineGridTexture"*/, v38);
    sub_B16FFC(&StringLiteral_13075/*"SubmarineEffectSelectedPanel"*/, v39);
    sub_B16FFC(&StringLiteral_13072/*"SubmarineEffectContainer"*/, v40);
    sub_B16FFC(&StringLiteral_13074/*"SubmarineEffectScannablePanel"*/, v41);
    sub_B16FFC(&StringLiteral_7231/*"ID"*/, v42);
    sub_B16FFC(&StringLiteral_13085/*"SubmarineSettings"*/, v43);
    byte_40F7A6C = 1;
  }
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    if ( _4__this )
    {
      loadAssetNames = _4__this->fields.loadAssetNames;
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      }
      AssetStorage_29955104 = AssetManager__getAssetStorage_29955104(loadAssetNames, 0LL);
      if ( AssetStorage_29955104 )
      {
        if ( !*((_DWORD *)AssetStorage_29955104 + 6) )
          goto LABEL_67;
        v75 = (AssetData_o *)*((_QWORD *)AssetStorage_29955104 + 4);
        if ( v75 )
        {
          Object_WarBoardWaitTimeSetting = (System_Int32_array **)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                    *((AssetData_o **)AssetStorage_29955104 + 4),
                                                                    (System_String_o *)StringLiteral_13080/*"SubmarinePanel"*/,
                                                                    (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784);
          _4__this->fields._PanelPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)Object_WarBoardWaitTimeSetting;
          sub_B16F98(
            (BattleServantConfConponent_o *)&_4__this->fields,
            Object_WarBoardWaitTimeSetting,
            v77,
            v78,
            v79,
            v80,
            v81,
            v82);
          v83 = (System_Int32_array **)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                         v75,
                                         (System_String_o *)StringLiteral_13076/*"SubmarineGridLine"*/,
                                         (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784);
          _4__this->fields._GridLinePrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v83;
          sub_B16F98(
            (BattleServantConfConponent_o *)&_4__this->fields._GridLinePrefab_k__BackingField,
            v83,
            v84,
            v85,
            v86,
            v87,
            v88,
            v89);
          v90 = (System_Int32_array **)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                         v75,
                                         (System_String_o *)StringLiteral_13081/*"SubmarinePanelContainer"*/,
                                         (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784);
          _4__this->fields._PanelContainerPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v90;
          sub_B16F98(
            (BattleServantConfConponent_o *)&_4__this->fields._PanelContainerPrefab_k__BackingField,
            v90,
            v91,
            v92,
            v93,
            v94,
            v95,
            v96);
          v97 = (System_Int32_array **)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                         v75,
                                         (System_String_o *)StringLiteral_13072/*"SubmarineEffectContainer"*/,
                                         (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784);
          _4__this->fields._EffectContainerPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v97;
          sub_B16F98(
            (BattleServantConfConponent_o *)&_4__this->fields._EffectContainerPrefab_k__BackingField,
            v97,
            v98,
            v99,
            v100,
            v101,
            v102,
            v103);
          v104 = (System_Int32_array **)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                          v75,
                                          (System_String_o *)StringLiteral_5858/*"EffectScannedPanel"*/,
                                          (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784);
          _4__this->fields._EffectScannedPanelPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v104;
          sub_B16F98(
            (BattleServantConfConponent_o *)&_4__this->fields._EffectScannedPanelPrefab_k__BackingField,
            v104,
            v105,
            v106,
            v107,
            v108,
            v109,
            v110);
          v111 = (System_Int32_array **)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                          v75,
                                          (System_String_o *)StringLiteral_13075/*"SubmarineEffectSelectedPanel"*/,
                                          (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784);
          _4__this->fields._EffectSelectedPanelPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v111;
          sub_B16F98(
            (BattleServantConfConponent_o *)&_4__this->fields._EffectSelectedPanelPrefab_k__BackingField,
            v111,
            v112,
            v113,
            v114,
            v115,
            v116,
            v117);
          v118 = (System_Int32_array **)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                          v75,
                                          (System_String_o *)StringLiteral_13074/*"SubmarineEffectScannablePanel"*/,
                                          (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784);
          _4__this->fields._EffectScannablePanelPrafab_k__BackingField = (struct UnityEngine_GameObject_o *)v118;
          sub_B16F98(
            (BattleServantConfConponent_o *)&_4__this->fields._EffectScannablePanelPrafab_k__BackingField,
            v118,
            v119,
            v120,
            v121,
            v122,
            v123,
            v124);
          v125 = (System_Int32_array **)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                          v75,
                                          (System_String_o *)StringLiteral_13073/*"SubmarineEffectScanObstaclePanel"*/,
                                          (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784);
          _4__this->fields._EffectScanObstaclePanelPrafab_k__BackingField = (struct UnityEngine_GameObject_o *)v125;
          sub_B16F98(
            (BattleServantConfConponent_o *)&_4__this->fields._EffectScanObstaclePanelPrafab_k__BackingField,
            v125,
            v126,
            v127,
            v128,
            v129,
            v130,
            v131);
          v132 = (System_Int32_array **)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                          v75,
                                          (System_String_o *)StringLiteral_13077/*"SubmarineGridTexture"*/,
                                          (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_Texture2D____66802808);
          _4__this->fields._GridTexture_k__BackingField = (struct UnityEngine_Texture2D_o *)v132;
          sub_B16F98(
            (BattleServantConfConponent_o *)&_4__this->fields._GridTexture_k__BackingField,
            v132,
            v133,
            v134,
            v135,
            v136,
            v137,
            v138);
          v139 = (System_Int32_array **)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                          v75,
                                          (System_String_o *)StringLiteral_13085/*"SubmarineSettings"*/,
                                          (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_SubmarineSettings___);
          _4__this->fields._Settings_k__BackingField = (struct SubmarineSettings_o *)v139;
          sub_B16F98(
            (BattleServantConfConponent_o *)&_4__this->fields._Settings_k__BackingField,
            v139,
            v140,
            v141,
            v142,
            v143,
            v144,
            v145);
          _4__this->fields._ScanProcessPreventedPrafab_k__BackingField = 0LL;
          sub_B16F98(
            (BattleServantConfConponent_o *)&_4__this->fields._ScanProcessPreventedPrafab_k__BackingField,
            0LL,
            v146,
            v147,
            v148,
            v149,
            v150,
            v151);
          v152 = (System_Int32_array **)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                          v75,
                                          (System_String_o *)StringLiteral_18088/*"ef_animation_skip"*/,
                                          (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784);
          _4__this->fields._AnimationSkipEFfectPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v152;
          sub_B16F98(
            (BattleServantConfConponent_o *)&_4__this->fields._AnimationSkipEFfectPrefab_k__BackingField,
            v152,
            v153,
            v154,
            v155,
            v156,
            v157,
            v158);
          v159 = (System_Int32_array **)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                          v75,
                                          (System_String_o *)StringLiteral_13084/*"SubmarineSelectScannerDialog"*/,
                                          (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784);
          _4__this->fields._SelectScannerDialogPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v159;
          sub_B16F98(
            (BattleServantConfConponent_o *)&_4__this->fields._SelectScannerDialogPrefab_k__BackingField,
            v159,
            v160,
            v161,
            v162,
            v163,
            v164,
            v165);
          v166 = (System_Int32_array **)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                          v75,
                                          (System_String_o *)StringLiteral_13082/*"SubmarineScanConfirmDialog"*/,
                                          (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784);
          _4__this->fields._ScanConfirmDialogPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v166;
          sub_B16F98(
            (BattleServantConfConponent_o *)&_4__this->fields._ScanConfirmDialogPrefab_k__BackingField,
            v166,
            v167,
            v168,
            v169,
            v170,
            v171,
            v172);
          v173 = (System_Int32_array **)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                          v75,
                                          (System_String_o *)StringLiteral_13079/*"SubmarineNewScannerDialog"*/,
                                          (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784);
          _4__this->fields._NewScannerDialogPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v173;
          sub_B16F98(
            (BattleServantConfConponent_o *)&_4__this->fields._NewScannerDialogPrefab_k__BackingField,
            v173,
            v174,
            v175,
            v176,
            v177,
            v178,
            v179);
          Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( Instance )
          {
            MasterData_WarQuestSelectionMaster = (EventPanelScanMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                             (DataManager_o *)Instance,
                                                                             (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventPanelScanMaster___);
            if ( MasterData_WarQuestSelectionMaster )
            {
              ListByEventId = (System_Collections_Generic_IEnumerable_TSource__o *)EventPanelScanMaster__GetListByEventId(
                                                                                     MasterData_WarQuestSelectionMaster,
                                                                                     this->fields.eventId,
                                                                                     0LL);
              v187 = SubmarineMapAssetManager___c_TypeInfo;
              if ( (BYTE3(SubmarineMapAssetManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !SubmarineMapAssetManager___c_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(SubmarineMapAssetManager___c_TypeInfo);
                v187 = SubmarineMapAssetManager___c_TypeInfo;
              }
              static_fields = v187->static_fields;
              _9__69_2 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__69_2;
              if ( !_9__69_2 )
              {
                if ( (BYTE3(v187->vtable._0_Equals.methodPtr) & 4) != 0 && !v187->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(v187);
                  static_fields = SubmarineMapAssetManager___c_TypeInfo->static_fields;
                }
                v190 = (Il2CppObject *)static_fields->__9;
                _9__69_2 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B170CC(
                                                                                             System_Func_EventPanelScanEntity__int__TypeInfo,
                                                                                             v182,
                                                                                             v183,
                                                                                             v184,
                                                                                             v185);
                System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
                  _9__69_2,
                  v190,
                  Method_SubmarineMapAssetManager___c__CoLoadAssets_b__69_2__,
                  (const MethodInfo_2B6B6EC *)Method_System_Func_EventPanelScanEntity__int___ctor__);
                v191 = SubmarineMapAssetManager___c_TypeInfo->static_fields;
                v191->__9__69_2 = (struct System_Func_EventPanelScanEntity__int__o *)_9__69_2;
                sub_B16F98(
                  (BattleServantConfConponent_o *)&v191->__9__69_2,
                  (System_Int32_array **)_9__69_2,
                  v192,
                  v193,
                  v194,
                  v195,
                  v196,
                  v197);
              }
              v198 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                                            ListByEventId,
                                                                            (System_Func_TSource__TResult__o *)_9__69_2,
                                                                            (const MethodInfo_19C05C4 *)Method_System_Linq_Enumerable_Select_EventPanelScanEntity__int___);
              v203 = (System_Text_RegularExpressions_Regex_o *)sub_B170CC(
                                                                 System_Text_RegularExpressions_Regex_TypeInfo,
                                                                 v199,
                                                                 v200,
                                                                 v201,
                                                                 v202);
              System_Text_RegularExpressions_Regex___ctor_16009552(v203, (System_String_o *)StringLiteral_12545/*"Scanner_(?<ID>\\d+)"*/, 0LL);
              AssetStorage_29955104 = AssetData__GetObjectNameList(v75, 0LL);
              if ( AssetStorage_29955104 )
              {
                v206 = *((_QWORD *)AssetStorage_29955104 + 3);
                v207 = AssetStorage_29955104;
                v235 = this;
                if ( (int)v206 < 1 )
                {
LABEL_45:
                  v219 = (System_Text_RegularExpressions_Regex_o *)sub_B170CC(
                                                                     System_Text_RegularExpressions_Regex_TypeInfo,
                                                                     v73,
                                                                     v74,
                                                                     v204,
                                                                     v205);
                  System_Text_RegularExpressions_Regex___ctor_16009552(
                    v219,
                    (System_String_o *)StringLiteral_13083/*"SubmarineScanRangeNotificator_(?<ID>\\d+)"*/,
                    0LL);
                  AssetStorage_29955104 = AssetData__GetObjectNameList(v75, 0LL);
                  if ( !AssetStorage_29955104 )
                    goto LABEL_66;
                  v220 = *((_QWORD *)AssetStorage_29955104 + 3);
                  v221 = AssetStorage_29955104;
                  if ( (int)v220 < 1 )
                  {
LABEL_62:
                    finishCallback = v235->fields.finishCallback;
                    if ( finishCallback )
                      ActionExtensions__Call(finishCallback, 0LL);
                    return 0;
                  }
                  v222 = 0LL;
                  v223 = (char *)AssetStorage_29955104 + 32;
                  while ( v222 < (unsigned int)v220 )
                  {
                    if ( !v219 )
                      goto LABEL_66;
                    v224 = *(System_String_o **)&v223[8 * v222];
                    matched = (System_Text_RegularExpressions_Group_o *)System_Text_RegularExpressions_Regex__Match_16017216(
                                                                          v219,
                                                                          v224,
                                                                          0LL);
                    if ( !matched )
                      goto LABEL_66;
                    v226 = matched;
                    AssetStorage_29955104 = (void *)System_Text_RegularExpressions_Group__get_Success(matched, 0LL);
                    if ( ((unsigned __int8)AssetStorage_29955104 & 1) != 0 )
                    {
                      v227 = (System_Text_RegularExpressions_GroupCollection_o *)((__int64 (__fastcall *)(System_Text_RegularExpressions_Group_o *, void *))v226->klass[1]._1.namespaze)(
                                                                                   v226,
                                                                                   v226->klass[1]._1.byval_arg.data);
                      if ( !v227 )
                        goto LABEL_66;
                      Item_36906384 = (System_Text_RegularExpressions_Capture_o *)System_Text_RegularExpressions_GroupCollection__get_Item_36906384(
                                                                                    v227,
                                                                                    (System_String_o *)StringLiteral_7231/*"ID"*/,
                                                                                    0LL);
                      if ( !Item_36906384 )
                        goto LABEL_66;
                      Value = System_Text_RegularExpressions_Capture__get_Value(Item_36906384, 0LL);
                      v230 = System_Int32__Parse(Value, 0LL);
                      AssetStorage_29955104 = (void *)System_Linq_Enumerable__Contains_int_(
                                                        v198,
                                                        v230,
                                                        (const MethodInfo_18D1B3C *)Method_System_Linq_Enumerable_Contains_int___);
                      if ( ((unsigned __int8)AssetStorage_29955104 & 1) != 0 )
                      {
                        v231 = (UnityEngine_Object_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                         v75,
                                                         v224,
                                                         (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784);
                        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                        }
                        AssetStorage_29955104 = (void *)UnityEngine_Object__op_Equality(v231, 0LL, 0LL);
                        if ( ((unsigned __int8)AssetStorage_29955104 & 1) == 0 )
                        {
                          scanRangeNotificatorPrefabDict = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)_4__this->fields.scanRangeNotificatorPrefabDict;
                          if ( !scanRangeNotificatorPrefabDict )
                            goto LABEL_66;
                          System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
                            scanRangeNotificatorPrefabDict,
                            v230,
                            (WarBoardAIRoute_RouteData_o *)v231,
                            (const MethodInfo_2DE9394 *)Method_System_Collections_Generic_Dictionary_int__GameObject__set_Item__);
                        }
                      }
                    }
                    LODWORD(v220) = v221[6];
                    if ( (__int64)++v222 >= (int)v220 )
                      goto LABEL_62;
                  }
                }
                else
                {
                  v208 = 0LL;
                  v209 = (char *)AssetStorage_29955104 + 32;
                  while ( v208 < (unsigned int)v206 )
                  {
                    if ( !v203 )
                      goto LABEL_66;
                    v210 = *(System_String_o **)&v209[8 * v208];
                    v211 = (System_Text_RegularExpressions_Group_o *)System_Text_RegularExpressions_Regex__Match_16017216(
                                                                       v203,
                                                                       v210,
                                                                       0LL);
                    if ( !v211 )
                      goto LABEL_66;
                    v212 = v211;
                    AssetStorage_29955104 = (void *)System_Text_RegularExpressions_Group__get_Success(v211, 0LL);
                    if ( ((unsigned __int8)AssetStorage_29955104 & 1) != 0 )
                    {
                      v213 = (System_Text_RegularExpressions_GroupCollection_o *)((__int64 (__fastcall *)(System_Text_RegularExpressions_Group_o *, void *))v212->klass[1]._1.namespaze)(
                                                                                   v212,
                                                                                   v212->klass[1]._1.byval_arg.data);
                      if ( !v213 )
                        goto LABEL_66;
                      v214 = (System_Text_RegularExpressions_Capture_o *)System_Text_RegularExpressions_GroupCollection__get_Item_36906384(
                                                                           v213,
                                                                           (System_String_o *)StringLiteral_7231/*"ID"*/,
                                                                           0LL);
                      if ( !v214 )
                        goto LABEL_66;
                      v215 = System_Text_RegularExpressions_Capture__get_Value(v214, 0LL);
                      v216 = System_Int32__Parse(v215, 0LL);
                      AssetStorage_29955104 = (void *)System_Linq_Enumerable__Contains_int_(
                                                        v198,
                                                        v216,
                                                        (const MethodInfo_18D1B3C *)Method_System_Linq_Enumerable_Contains_int___);
                      if ( ((unsigned __int8)AssetStorage_29955104 & 1) != 0 )
                      {
                        v217 = (UnityEngine_Object_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                         v75,
                                                         v210,
                                                         (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784);
                        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                        }
                        AssetStorage_29955104 = (void *)UnityEngine_Object__op_Equality(v217, 0LL, 0LL);
                        if ( ((unsigned __int8)AssetStorage_29955104 & 1) == 0 )
                        {
                          scannerPrefabDict = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)_4__this->fields.scannerPrefabDict;
                          if ( !scannerPrefabDict )
                            goto LABEL_66;
                          System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
                            scannerPrefabDict,
                            v216,
                            (WarBoardAIRoute_RouteData_o *)v217,
                            (const MethodInfo_2DE9394 *)Method_System_Collections_Generic_Dictionary_int__GameObject__set_Item__);
                        }
                      }
                    }
                    LODWORD(v206) = v207[6];
                    if ( (__int64)++v208 >= (int)v206 )
                      goto LABEL_45;
                  }
                }
LABEL_67:
                sub_B17100(AssetStorage_29955104, v73, v74);
                sub_B170A0();
              }
            }
          }
        }
      }
    }
LABEL_66:
    sub_B170D4();
  }
  if ( _1__state )
    return 0;
  this->fields.__1__state = -1;
  v46 = sub_B170CC(SubmarineMapAssetManager___c__DisplayClass69_0_TypeInfo, method, v2, v3, v4);
  System_Object___ctor((Il2CppObject *)v46, 0LL);
  if ( !v46 )
    goto LABEL_66;
  *(_BYTE *)(v46 + 16) = 0;
  if ( !_4__this )
    goto LABEL_66;
  v51 = _4__this->fields.loadAssetNames;
  v52 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v47, v48, v49, v50);
  System_Action___ctor(
    v52,
    (Il2CppObject *)v46,
    Method_SubmarineMapAssetManager___c__DisplayClass69_0__CoLoadAssets_b__0__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  v53 = 1;
  AssetManager__loadAssetStorage_29953896(v51, v52, 1, 0LL);
  v58 = (System_Func_bool__o *)sub_B170CC(System_Func_bool__TypeInfo, v54, v55, v56, v57);
  System_Func_bool____ctor(
    v58,
    (Il2CppObject *)v46,
    Method_SubmarineMapAssetManager___c__DisplayClass69_0__CoLoadAssets_b__1__,
    (const MethodInfo_284E7D0 *)Method_System_Func_bool___ctor__);
  v63 = (UnityEngine_WaitUntil_o *)sub_B170CC(UnityEngine_WaitUntil_TypeInfo, v59, v60, v61, v62);
  UnityEngine_WaitUntil___ctor(v63, v58, 0LL);
  this->fields.__2__current = (Il2CppObject *)v63;
  p__2__current = &this->fields.__2__current;
  sub_B16F98((BattleServantConfConponent_o *)p__2__current, (System_Int32_array **)v63, v65, v66, v67, v68, v69, v70);
  *((_DWORD *)p__2__current - 2) = 1;
  return v53;
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
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0
  __int64 v8; // x1

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo, method);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_SubmarineMapAssetManager__CoLoadAssets_d__69_System_Collections_IEnumerator_Reset__, v8);
  sub_B170A0();
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
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F7A6B & 1) == 0 )
  {
    sub_B16FFC(&SubmarineMapAssetManager___c_TypeInfo, v1);
    byte_40F7A6B = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(SubmarineMapAssetManager___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)SubmarineMapAssetManager___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
    sub_B170D4();
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