void __fastcall SubmarineMapAssetManager___ctor(SubmarineMapAssetManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  __int64 v8; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  struct System_String_array *v16; // x20
  __int64 v17; // x0
  System_Int32_array **v18; // x1
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  __int64 v25; // x0
  __int64 v26; // x0

  if ( (byte_42E7B37 & 1) == 0 )
  {
    sub_B5D5C4(&string___TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_6229/*"Event/Submarine"*/, v5, v6, v7);
    byte_42E7B37 = 1;
  }
  v8 = sub_B5D5DC(string___TypeInfo, 1LL);
  if ( !v8 )
    sub_B5D69C(0LL, v9);
  v16 = (struct System_String_array *)v8;
  v17 = StringLiteral_6229/*"Event/Submarine"*/;
  if ( StringLiteral_6229/*"Event/Submarine"*/ )
  {
    v17 = sub_B5D684(StringLiteral_6229/*"Event/Submarine"*/, v16->obj.klass->_1.element_class);
    if ( !v17 )
    {
      v26 = sub_B5D6BC(0LL);
      sub_B5D668(v26, 0LL);
    }
    v18 = (System_Int32_array **)StringLiteral_6229/*"Event/Submarine"*/;
  }
  else
  {
    v18 = 0LL;
  }
  if ( !v16->max_length )
  {
    v25 = sub_B5D6C8(v17);
    sub_B5D668(v25, 0LL);
  }
  v16->m_Items[0] = (System_String_o *)v18;
  sub_B5D560((BattleServantConfConponent_o *)v16->m_Items, v18, v10, v11, v12, v13, v14, v15);
  this->fields.loadAssetNames = v16;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.loadAssetNames,
    (System_Int32_array **)v16,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
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

  if ( (byte_42E7B33 & 1) == 0 )
  {
    sub_B5D5C4(&SubmarineMapAssetManager__CoLoadAssets_d__69_TypeInfo, eventId, (_DWORD)finishCallback, method);
    byte_42E7B33 = 1;
  }
  v7 = sub_B5D694(SubmarineMapAssetManager__CoLoadAssets_d__69_TypeInfo);
  SubmarineMapAssetManager__CoLoadAssets_d__69___ctor((SubmarineMapAssetManager__CoLoadAssets_d__69_o *)v7, 0, 0LL);
  if ( !v7 )
    sub_B5D69C(v8, v9);
  *(_QWORD *)(v7 + 32) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v7 + 32), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_DWORD *)(v7 + 40) = eventId;
  *(_QWORD *)(v7 + 48) = finishCallback;
  sub_B5D560(
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct System_Collections_Generic_Dictionary_int__GameObject__o *scannerPrefabDict; // x0
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
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  System_String_array **v69; // x2
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7
  System_String_array **v75; // x2
  System_String_array **v76; // x3
  System_Boolean_array **v77; // x4
  System_Int32_array **v78; // x5
  System_Int32_array *v79; // x6
  System_Int32_array *v80; // x7
  System_String_array **v81; // x2
  System_String_array **v82; // x3
  System_Boolean_array **v83; // x4
  System_Int32_array **v84; // x5
  System_Int32_array *v85; // x6
  System_Int32_array *v86; // x7
  System_String_array **v87; // x2
  System_String_array **v88; // x3
  System_Boolean_array **v89; // x4
  System_Int32_array **v90; // x5
  System_Int32_array *v91; // x6
  System_Int32_array *v92; // x7
  System_String_array **v93; // x2
  System_String_array **v94; // x3
  System_Boolean_array **v95; // x4
  System_Int32_array **v96; // x5
  System_Int32_array *v97; // x6
  System_Int32_array *v98; // x7
  BattleServantConfConponent_o *p_AnimationSkipEFfectPrefab_k__BackingField; // x19
  System_String_array **v100; // x2
  System_String_array **v101; // x3
  System_Boolean_array **v102; // x4
  System_Int32_array **v103; // x5
  System_Int32_array *v104; // x6
  System_Int32_array *v105; // x7
  System_String_array *closeBtnObject; // x19

  if ( (byte_42E7B36 & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__GameObject__Clear__, v5, v6, v7);
    byte_42E7B36 = 1;
  }
  scannerPrefabDict = this->fields.scannerPrefabDict;
  if ( !scannerPrefabDict
    || (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Clear(
          (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)scannerPrefabDict,
          (const MethodInfo_2F322A0 *)Method_System_Collections_Generic_Dictionary_int__GameObject__Clear__),
        (scannerPrefabDict = this->fields.scanRangeNotificatorPrefabDict) == 0LL) )
  {
    sub_B5D69C(scannerPrefabDict, method);
  }
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Clear(
    (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)scannerPrefabDict,
    (const MethodInfo_2F322A0 *)Method_System_Collections_Generic_Dictionary_int__GameObject__Clear__);
  this->fields._PanelPrefab_k__BackingField = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields, 0LL, v9, v10, v11, v12, v13, v14);
  this->fields._GridLinePrefab_k__BackingField = 0LL;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._GridLinePrefab_k__BackingField,
    0LL,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  this->fields._PanelContainerPrefab_k__BackingField = 0LL;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._PanelContainerPrefab_k__BackingField,
    0LL,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  this->fields._EffectContainerPrefab_k__BackingField = 0LL;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._EffectContainerPrefab_k__BackingField,
    0LL,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  this->fields._ClosedPanelTexture_k__BackingField = 0LL;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._ClosedPanelTexture_k__BackingField,
    0LL,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  this->fields._GridTexture_k__BackingField = 0LL;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._GridTexture_k__BackingField,
    0LL,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  this->fields._EffectScannedPanelPrefab_k__BackingField = 0LL;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._EffectScannedPanelPrefab_k__BackingField,
    0LL,
    v45,
    v46,
    v47,
    v48,
    v49,
    v50);
  this->fields._EffectSelectedPanelPrefab_k__BackingField = 0LL;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._EffectSelectedPanelPrefab_k__BackingField,
    0LL,
    v51,
    v52,
    v53,
    v54,
    v55,
    v56);
  this->fields._EffectScannablePanelPrafab_k__BackingField = 0LL;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._EffectScannablePanelPrafab_k__BackingField,
    0LL,
    v57,
    v58,
    v59,
    v60,
    v61,
    v62);
  this->fields._EffectScanObstaclePanelPrafab_k__BackingField = 0LL;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._EffectScanObstaclePanelPrafab_k__BackingField,
    0LL,
    v63,
    v64,
    v65,
    v66,
    v67,
    v68);
  this->fields._ScanProcessPreventedPrafab_k__BackingField = 0LL;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._ScanProcessPreventedPrafab_k__BackingField,
    0LL,
    v69,
    v70,
    v71,
    v72,
    v73,
    v74);
  this->fields._SelectScannerDialogPrefab_k__BackingField = 0LL;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._SelectScannerDialogPrefab_k__BackingField,
    0LL,
    v75,
    v76,
    v77,
    v78,
    v79,
    v80);
  this->fields._ScanConfirmDialogPrefab_k__BackingField = 0LL;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._ScanConfirmDialogPrefab_k__BackingField,
    0LL,
    v81,
    v82,
    v83,
    v84,
    v85,
    v86);
  this->fields._NewScannerDialogPrefab_k__BackingField = 0LL;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._NewScannerDialogPrefab_k__BackingField,
    0LL,
    v87,
    v88,
    v89,
    v90,
    v91,
    v92);
  this->fields._Settings_k__BackingField = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields._Settings_k__BackingField, 0LL, v93, v94, v95, v96, v97, v98);
  this->fields._AnimationSkipEFfectPrefab_k__BackingField = 0LL;
  p_AnimationSkipEFfectPrefab_k__BackingField = (BattleServantConfConponent_o *)&this->fields._AnimationSkipEFfectPrefab_k__BackingField;
  sub_B5D560(p_AnimationSkipEFfectPrefab_k__BackingField, 0LL, v100, v101, v102, v103, v104, v105);
  closeBtnObject = (System_String_array *)p_AnimationSkipEFfectPrefab_k__BackingField->fields._closeBtnObject;
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAssetStorage_30666128(closeBtnObject, 0LL);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall SubmarineMapAssetManager__GetScanAnimObjectPrefab(
        SubmarineMapAssetManager_o *this,
        int32_t scanObjectId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct System_Collections_Generic_Dictionary_int__GameObject__o *scannerPrefabDict; // x0
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42E7B34 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__GameObject__TryGetValue__,
      scanObjectId,
      (_DWORD)method,
      v3);
    byte_42E7B34 = 1;
  }
  value = 0LL;
  scannerPrefabDict = this->fields.scannerPrefabDict;
  if ( !scannerPrefabDict )
    sub_B5D69C(0LL, *(_QWORD *)&scanObjectId);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)scannerPrefabDict,
    scanObjectId,
    &value,
    (const MethodInfo_2F33DE8 *)Method_System_Collections_Generic_Dictionary_int__GameObject__TryGetValue__);
  return (UnityEngine_GameObject_o *)value;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall SubmarineMapAssetManager__GetScanRangeNotificatorPrefab(
        SubmarineMapAssetManager_o *this,
        int32_t scanObjectId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct System_Collections_Generic_Dictionary_int__GameObject__o *scanRangeNotificatorPrefabDict; // x0
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42E7B35 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__GameObject__TryGetValue__,
      scanObjectId,
      (_DWORD)method,
      v3);
    byte_42E7B35 = 1;
  }
  value = 0LL;
  scanRangeNotificatorPrefabDict = this->fields.scanRangeNotificatorPrefabDict;
  if ( !scanRangeNotificatorPrefabDict )
    sub_B5D69C(0LL, *(_QWORD *)&scanObjectId);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)scanRangeNotificatorPrefabDict,
    scanObjectId,
    &value,
    (const MethodInfo_2F33DE8 *)Method_System_Collections_Generic_Dictionary_int__GameObject__TryGetValue__);
  return (UnityEngine_GameObject_o *)value;
}


void __fastcall SubmarineMapAssetManager__Initialize(SubmarineMapAssetManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v8; // x20
  struct System_Collections_Generic_Dictionary_int__GameObject__o **p_scannerPrefabDict; // x19
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v16; // x20
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7

  if ( (byte_42E7B31 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__GameObject___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_int__GameObject__TypeInfo, v5, v6, v7);
    byte_42E7B31 = 1;
  }
  v8 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B5D694(System_Collections_Generic_Dictionary_int__GameObject__TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v8,
    (const MethodInfo_2F31510 *)Method_System_Collections_Generic_Dictionary_int__GameObject___ctor__);
  this->fields.scannerPrefabDict = (struct System_Collections_Generic_Dictionary_int__GameObject__o *)v8;
  p_scannerPrefabDict = &this->fields.scannerPrefabDict;
  sub_B5D560(
    (BattleServantConfConponent_o *)p_scannerPrefabDict,
    (System_Int32_array **)v8,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  v16 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B5D694(System_Collections_Generic_Dictionary_int__GameObject__TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v16,
    (const MethodInfo_2F31510 *)Method_System_Collections_Generic_Dictionary_int__GameObject___ctor__);
  p_scannerPrefabDict[1] = (struct System_Collections_Generic_Dictionary_int__GameObject__o *)v16;
  sub_B5D560(
    (BattleServantConfConponent_o *)(p_scannerPrefabDict + 1),
    (System_Int32_array **)v16,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
}


void __fastcall SubmarineMapAssetManager__LoadMapObject(
        SubmarineMapAssetManager_o *this,
        AssetData_o *assetData,
        int32_t mapId,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  Il2CppObject *v13; // x0
  System_String_o *v14; // x0
  __int64 v15; // x1
  struct UnityEngine_Texture2D_o *Object_WarBoardWaitTimeSetting; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  int32_t v23; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42E7B32 & 1) == 0 )
  {
    sub_B5D5C4(&Method_AssetData_GetObject_Texture2D____68807528, (_DWORD)assetData, mapId, method);
    sub_B5D5C4(&int_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&StringLiteral_23821/*"{0:D6}_ClosedPanelTexture"*/, v10, v11, v12);
    byte_42E7B32 = 1;
  }
  v23 = mapId;
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v23);
  v14 = System_String__Format((System_String_o *)StringLiteral_23821/*"{0:D6}_ClosedPanelTexture"*/, v13, 0LL);
  if ( !assetData )
    sub_B5D69C(v14, v15);
  Object_WarBoardWaitTimeSetting = (struct UnityEngine_Texture2D_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                       assetData,
                                                                       v14,
                                                                       (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_Texture2D____68807528);
  this->fields._ClosedPanelTexture_k__BackingField = Object_WarBoardWaitTimeSetting;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._ClosedPanelTexture_k__BackingField,
    (System_Int32_array **)Object_WarBoardWaitTimeSetting,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
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
  sub_B5D560(
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
  sub_B5D560(
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
  sub_B5D560(
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
  sub_B5D560(
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
  sub_B5D560(
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
  sub_B5D560(
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
  sub_B5D560(
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
  sub_B5D560(
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
  sub_B5D560(
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
  sub_B5D560(
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
  sub_B5D560(
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
  sub_B5D560(
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
  sub_B5D560(
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
  sub_B5D560(
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
  sub_B5D560(
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
  sub_B5D560(
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
  int v2; // w2
  __int64 v3; // x3
  SubmarineMapAssetManager__CoLoadAssets_d__69_o *v4; // x24
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  int v56; // w1
  int v57; // w2
  __int64 v58; // x3
  int v59; // w1
  int v60; // w2
  __int64 v61; // x3
  int v62; // w1
  int v63; // w2
  __int64 v64; // x3
  int v65; // w1
  int v66; // w2
  __int64 v67; // x3
  int v68; // w1
  int v69; // w2
  __int64 v70; // x3
  int v71; // w1
  int v72; // w2
  __int64 v73; // x3
  int v74; // w1
  int v75; // w2
  __int64 v76; // x3
  int v77; // w1
  int v78; // w2
  __int64 v79; // x3
  int v80; // w1
  int v81; // w2
  __int64 v82; // x3
  int v83; // w1
  int v84; // w2
  __int64 v85; // x3
  int v86; // w1
  int v87; // w2
  __int64 v88; // x3
  int v89; // w1
  int v90; // w2
  __int64 v91; // x3
  int v92; // w1
  int v93; // w2
  __int64 v94; // x3
  int v95; // w1
  int v96; // w2
  __int64 v97; // x3
  int v98; // w1
  int v99; // w2
  __int64 v100; // x3
  int v101; // w1
  int v102; // w2
  __int64 v103; // x3
  int v104; // w1
  int v105; // w2
  __int64 v106; // x3
  int v107; // w1
  int v108; // w2
  __int64 v109; // x3
  int v110; // w1
  int v111; // w2
  __int64 v112; // x3
  int v113; // w1
  int v114; // w2
  __int64 v115; // x3
  int v116; // w1
  int v117; // w2
  __int64 v118; // x3
  int32_t _1__state; // w8
  struct SubmarineMapAssetManager_o *_4__this; // x26
  __int64 v121; // x20
  System_String_array *v122; // x22
  System_Action_o *v123; // x23
  bool v124; // w21
  System_Func_bool__o *v125; // x22
  UnityEngine_WaitUntil_o *v126; // x20
  Il2CppObject **p__2__current; // x24
  System_String_array *loadAssetNames; // x20
  AssetData_o *v129; // x20
  System_Collections_Generic_IEnumerable_TSource__o *ListByEventId; // x21
  SubmarineMapAssetManager___c_c *v131; // x8
  struct SubmarineMapAssetManager___c_StaticFields *static_fields; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__69_2; // x22
  Il2CppObject *v134; // x23
  struct SubmarineMapAssetManager___c_StaticFields *v135; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v136; // x21
  System_Text_RegularExpressions_Regex_o *v137; // x22
  Il2CppObject *_2__current; // x8
  SubmarineMapAssetManager__CoLoadAssets_d__69_o *v139; // x23
  unsigned __int64 v140; // x28
  struct SubmarineMapAssetManager_o **v141; // x27
  System_String_o *v142; // x24
  SubmarineMapAssetManager__CoLoadAssets_d__69_o *v143; // x25
  System_String_o *v144; // x0
  int32_t v145; // w25
  UnityEngine_Object_o *v146; // x24
  System_Text_RegularExpressions_Regex_o *v147; // x22
  Il2CppObject *v148; // x8
  SubmarineMapAssetManager__CoLoadAssets_d__69_o *v149; // x23
  unsigned __int64 v150; // x28
  struct SubmarineMapAssetManager_o **p__4__this; // x27
  System_String_o *v152; // x24
  SubmarineMapAssetManager__CoLoadAssets_d__69_o *v153; // x25
  System_String_o *Value; // x0
  int32_t v155; // w25
  UnityEngine_Object_o *Object_WarBoardWaitTimeSetting; // x24
  System_Action_o *finishCallback; // x0
  __int64 v159; // x0
  SubmarineMapAssetManager__CoLoadAssets_d__69_o *v160; // [xsp+8h] [xbp-58h]

  v4 = this;
  if ( (byte_42E6453 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_AssetData_GetObject_GameObject____68807504, v5, v6, v7);
    sub_B5D5C4(&Method_AssetData_GetObject_SubmarineSettings___, v8, v9, v10);
    sub_B5D5C4(&Method_AssetData_GetObject_Texture2D____68807528, v11, v12, v13);
    sub_B5D5C4(&AssetManager_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventPanelScanMaster___, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__GameObject__set_Item__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Contains_int___, v23, v24, v25);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Select_EventPanelScanEntity__int___, v26, v27, v28);
    sub_B5D5C4(&Method_System_Func_bool___ctor__, v29, v30, v31);
    sub_B5D5C4(&System_Func_bool__TypeInfo, v32, v33, v34);
    sub_B5D5C4(&Method_System_Func_EventPanelScanEntity__int___ctor__, v35, v36, v37);
    sub_B5D5C4(&System_Func_EventPanelScanEntity__int__TypeInfo, v38, v39, v40);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v41, v42, v43);
    sub_B5D5C4(&System_Text_RegularExpressions_Regex_TypeInfo, v44, v45, v46);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v47, v48, v49);
    sub_B5D5C4(&Method_SubmarineMapAssetManager___c__CoLoadAssets_b__69_2__, v50, v51, v52);
    sub_B5D5C4(&Method_SubmarineMapAssetManager___c__DisplayClass69_0__CoLoadAssets_b__0__, v53, v54, v55);
    sub_B5D5C4(&Method_SubmarineMapAssetManager___c__DisplayClass69_0__CoLoadAssets_b__1__, v56, v57, v58);
    sub_B5D5C4(&SubmarineMapAssetManager___c__DisplayClass69_0_TypeInfo, v59, v60, v61);
    sub_B5D5C4(&SubmarineMapAssetManager___c_TypeInfo, v62, v63, v64);
    sub_B5D5C4(&UnityEngine_WaitUntil_TypeInfo, v65, v66, v67);
    sub_B5D5C4(&StringLiteral_5954/*"EffectScannedPanel"*/, v68, v69, v70);
    sub_B5D5C4(&StringLiteral_12750/*"Scanner_(?<ID>\\d+)"*/, v71, v72, v73);
    sub_B5D5C4(&StringLiteral_13294/*"SubmarineScanConfirmDialog"*/, v74, v75, v76);
    sub_B5D5C4(&StringLiteral_18384/*"ef_animation_skip"*/, v77, v78, v79);
    sub_B5D5C4(&StringLiteral_13292/*"SubmarinePanel"*/, v80, v81, v82);
    sub_B5D5C4(&StringLiteral_13296/*"SubmarineSelectScannerDialog"*/, v83, v84, v85);
    sub_B5D5C4(&StringLiteral_13285/*"SubmarineEffectScanObstaclePanel"*/, v86, v87, v88);
    sub_B5D5C4(&StringLiteral_13288/*"SubmarineGridLine"*/, v89, v90, v91);
    sub_B5D5C4(&StringLiteral_13293/*"SubmarinePanelContainer"*/, v92, v93, v94);
    sub_B5D5C4(&StringLiteral_13295/*"SubmarineScanRangeNotificator_(?<ID>\\d+)"*/, v95, v96, v97);
    sub_B5D5C4(&StringLiteral_13291/*"SubmarineNewScannerDialog"*/, v98, v99, v100);
    sub_B5D5C4(&StringLiteral_13289/*"SubmarineGridTexture"*/, v101, v102, v103);
    sub_B5D5C4(&StringLiteral_13287/*"SubmarineEffectSelectedPanel"*/, v104, v105, v106);
    sub_B5D5C4(&StringLiteral_13284/*"SubmarineEffectContainer"*/, v107, v108, v109);
    sub_B5D5C4(&StringLiteral_13286/*"SubmarineEffectScannablePanel"*/, v110, v111, v112);
    sub_B5D5C4(&StringLiteral_7341/*"ID"*/, v113, v114, v115);
    this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)sub_B5D5C4(&StringLiteral_13297/*"SubmarineSettings"*/, v116, v117, v118);
    byte_42E6453 = 1;
  }
  _1__state = v4->fields.__1__state;
  _4__this = v4->fields.__4__this;
  if ( _1__state == 1 )
  {
    v4->fields.__1__state = -1;
    if ( _4__this )
    {
      loadAssetNames = _4__this->fields.loadAssetNames;
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      }
      this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)AssetManager__getAssetStorage_30665292(
                                                                 loadAssetNames,
                                                                 0LL);
      if ( this )
      {
        if ( !LODWORD(this->fields.__2__current) )
          goto LABEL_67;
        v129 = (AssetData_o *)this->fields.__4__this;
        if ( v129 )
        {
          _4__this->fields._PanelPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                                               (AssetData_o *)this->fields.__4__this,
                                                                                               (System_String_o *)StringLiteral_13292/*"SubmarinePanel"*/,
                                                                                               (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
          sub_B5D560(&_4__this->fields);
          _4__this->fields._GridLinePrefab_k__BackingField = (struct UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                                                  v129,
                                                                                                  (System_String_o *)StringLiteral_13288/*"SubmarineGridLine"*/,
                                                                                                  (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
          sub_B5D560(&_4__this->fields._GridLinePrefab_k__BackingField);
          _4__this->fields._PanelContainerPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(v129, (System_String_o *)StringLiteral_13293/*"SubmarinePanelContainer"*/, (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
          sub_B5D560(&_4__this->fields._PanelContainerPrefab_k__BackingField);
          _4__this->fields._EffectContainerPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(v129, (System_String_o *)StringLiteral_13284/*"SubmarineEffectContainer"*/, (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
          sub_B5D560(&_4__this->fields._EffectContainerPrefab_k__BackingField);
          _4__this->fields._EffectScannedPanelPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(v129, (System_String_o *)StringLiteral_5954/*"EffectScannedPanel"*/, (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
          sub_B5D560(&_4__this->fields._EffectScannedPanelPrefab_k__BackingField);
          _4__this->fields._EffectSelectedPanelPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(v129, (System_String_o *)StringLiteral_13287/*"SubmarineEffectSelectedPanel"*/, (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
          sub_B5D560(&_4__this->fields._EffectSelectedPanelPrefab_k__BackingField);
          _4__this->fields._EffectScannablePanelPrafab_k__BackingField = (struct UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(v129, (System_String_o *)StringLiteral_13286/*"SubmarineEffectScannablePanel"*/, (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
          sub_B5D560(&_4__this->fields._EffectScannablePanelPrafab_k__BackingField);
          _4__this->fields._EffectScanObstaclePanelPrafab_k__BackingField = (struct UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(v129, (System_String_o *)StringLiteral_13285/*"SubmarineEffectScanObstaclePanel"*/, (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
          sub_B5D560(&_4__this->fields._EffectScanObstaclePanelPrafab_k__BackingField);
          _4__this->fields._GridTexture_k__BackingField = (struct UnityEngine_Texture2D_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                                              v129,
                                                                                              (System_String_o *)StringLiteral_13289/*"SubmarineGridTexture"*/,
                                                                                              (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_Texture2D____68807528);
          sub_B5D560(&_4__this->fields._GridTexture_k__BackingField);
          _4__this->fields._Settings_k__BackingField = (struct SubmarineSettings_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                                       v129,
                                                                                       (System_String_o *)StringLiteral_13297/*"SubmarineSettings"*/,
                                                                                       (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_SubmarineSettings___);
          sub_B5D560(&_4__this->fields._Settings_k__BackingField);
          _4__this->fields._ScanProcessPreventedPrafab_k__BackingField = 0LL;
          sub_B5D560(&_4__this->fields._ScanProcessPreventedPrafab_k__BackingField);
          _4__this->fields._AnimationSkipEFfectPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(v129, (System_String_o *)StringLiteral_18384/*"ef_animation_skip"*/, (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
          sub_B5D560(&_4__this->fields._AnimationSkipEFfectPrefab_k__BackingField);
          _4__this->fields._SelectScannerDialogPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(v129, (System_String_o *)StringLiteral_13296/*"SubmarineSelectScannerDialog"*/, (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
          sub_B5D560(&_4__this->fields._SelectScannerDialogPrefab_k__BackingField);
          _4__this->fields._ScanConfirmDialogPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(v129, (System_String_o *)StringLiteral_13294/*"SubmarineScanConfirmDialog"*/, (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
          sub_B5D560(&_4__this->fields._ScanConfirmDialogPrefab_k__BackingField);
          _4__this->fields._NewScannerDialogPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(v129, (System_String_o *)StringLiteral_13291/*"SubmarineNewScannerDialog"*/, (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
          sub_B5D560(&_4__this->fields._NewScannerDialogPrefab_k__BackingField);
          this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( this )
          {
            this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                       (DataManager_o *)this,
                                                                       (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventPanelScanMaster___);
            if ( this )
            {
              ListByEventId = (System_Collections_Generic_IEnumerable_TSource__o *)EventPanelScanMaster__GetListByEventId(
                                                                                     (EventPanelScanMaster_o *)this,
                                                                                     v4->fields.eventId,
                                                                                     0LL);
              v131 = SubmarineMapAssetManager___c_TypeInfo;
              if ( (BYTE3(SubmarineMapAssetManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !SubmarineMapAssetManager___c_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(SubmarineMapAssetManager___c_TypeInfo);
                v131 = SubmarineMapAssetManager___c_TypeInfo;
              }
              static_fields = v131->static_fields;
              _9__69_2 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__69_2;
              if ( !_9__69_2 )
              {
                if ( (BYTE3(v131->vtable._0_Equals.methodPtr) & 4) != 0 && !v131->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(v131);
                  static_fields = SubmarineMapAssetManager___c_TypeInfo->static_fields;
                }
                v134 = (Il2CppObject *)static_fields->__9;
                _9__69_2 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B5D694(System_Func_EventPanelScanEntity__int__TypeInfo);
                System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
                  _9__69_2,
                  v134,
                  Method_SubmarineMapAssetManager___c__CoLoadAssets_b__69_2__,
                  (const MethodInfo_2C2F87C *)Method_System_Func_EventPanelScanEntity__int___ctor__);
                v135 = SubmarineMapAssetManager___c_TypeInfo->static_fields;
                v135->__9__69_2 = (struct System_Func_EventPanelScanEntity__int__o *)_9__69_2;
                sub_B5D560(&v135->__9__69_2);
              }
              v136 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                                            ListByEventId,
                                                                            (System_Func_TSource__TResult__o *)_9__69_2,
                                                                            (const MethodInfo_1CB2FF4 *)Method_System_Linq_Enumerable_Select_EventPanelScanEntity__int___);
              v137 = (System_Text_RegularExpressions_Regex_o *)sub_B5D694(System_Text_RegularExpressions_Regex_TypeInfo);
              System_Text_RegularExpressions_Regex___ctor_48772328(v137, (System_String_o *)StringLiteral_12750/*"Scanner_(?<ID>\\d+)"*/, 0LL);
              this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)AssetData__GetObjectNameList(v129, 0LL);
              if ( this )
              {
                _2__current = this->fields.__2__current;
                v139 = this;
                v160 = v4;
                if ( (int)_2__current < 1 )
                {
LABEL_45:
                  v147 = (System_Text_RegularExpressions_Regex_o *)sub_B5D694(System_Text_RegularExpressions_Regex_TypeInfo);
                  System_Text_RegularExpressions_Regex___ctor_48772328(
                    v147,
                    (System_String_o *)StringLiteral_13295/*"SubmarineScanRangeNotificator_(?<ID>\\d+)"*/,
                    0LL);
                  this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)AssetData__GetObjectNameList(v129, 0LL);
                  if ( !this )
                    goto LABEL_66;
                  v148 = this->fields.__2__current;
                  v149 = this;
                  if ( (int)v148 < 1 )
                  {
LABEL_62:
                    finishCallback = v160->fields.finishCallback;
                    if ( finishCallback )
                      ActionExtensions__Call(finishCallback, 0LL);
                    return 0;
                  }
                  v150 = 0LL;
                  p__4__this = &this->fields.__4__this;
                  while ( v150 < (unsigned int)v148 )
                  {
                    if ( !v147 )
                      goto LABEL_66;
                    v152 = (System_String_o *)p__4__this[v150];
                    this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)System_Text_RegularExpressions_Regex__Match_48779992(
                                                                               v147,
                                                                               v152,
                                                                               0LL);
                    if ( !this )
                      goto LABEL_66;
                    v153 = this;
                    this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)System_Text_RegularExpressions_Group__get_Success(
                                                                               (System_Text_RegularExpressions_Group_o *)this,
                                                                               0LL);
                    if ( ((unsigned __int8)this & 1) != 0 )
                    {
                      this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)((__int64 (__fastcall *)(SubmarineMapAssetManager__CoLoadAssets_d__69_o *, Il2CppMethodPointer))v153->klass->vtable._5_System_IDisposable_Dispose.method)(
                                                                                 v153,
                                                                                 v153->klass->vtable._6_MoveNext.methodPtr);
                      if ( !this )
                        goto LABEL_66;
                      this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)System_Text_RegularExpressions_GroupCollection__get_Item_38133928(
                                                                                 (System_Text_RegularExpressions_GroupCollection_o *)this,
                                                                                 (System_String_o *)StringLiteral_7341/*"ID"*/,
                                                                                 0LL);
                      if ( !this )
                        goto LABEL_66;
                      Value = System_Text_RegularExpressions_Capture__get_Value(
                                (System_Text_RegularExpressions_Capture_o *)this,
                                0LL);
                      v155 = System_Int32__Parse(Value, 0LL);
                      this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)System_Linq_Enumerable__Contains_int_(
                                                                                 v136,
                                                                                 v155,
                                                                                 (const MethodInfo_1CA4E8C *)Method_System_Linq_Enumerable_Contains_int___);
                      if ( ((unsigned __int8)this & 1) != 0 )
                      {
                        Object_WarBoardWaitTimeSetting = (UnityEngine_Object_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                                   v129,
                                                                                   v152,
                                                                                   (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
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
                            v155,
                            (WarBoardAIRoute_RouteData_o *)Object_WarBoardWaitTimeSetting,
                            (const MethodInfo_2F3209C *)Method_System_Collections_Generic_Dictionary_int__GameObject__set_Item__);
                        }
                      }
                    }
                    LODWORD(v148) = v149->fields.__2__current;
                    if ( (__int64)++v150 >= (int)v148 )
                      goto LABEL_62;
                  }
                }
                else
                {
                  v140 = 0LL;
                  v141 = &this->fields.__4__this;
                  while ( v140 < (unsigned int)_2__current )
                  {
                    if ( !v137 )
                      goto LABEL_66;
                    v142 = (System_String_o *)v141[v140];
                    this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)System_Text_RegularExpressions_Regex__Match_48779992(
                                                                               v137,
                                                                               v142,
                                                                               0LL);
                    if ( !this )
                      goto LABEL_66;
                    v143 = this;
                    this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)System_Text_RegularExpressions_Group__get_Success(
                                                                               (System_Text_RegularExpressions_Group_o *)this,
                                                                               0LL);
                    if ( ((unsigned __int8)this & 1) != 0 )
                    {
                      this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)((__int64 (__fastcall *)(SubmarineMapAssetManager__CoLoadAssets_d__69_o *, Il2CppMethodPointer))v143->klass->vtable._5_System_IDisposable_Dispose.method)(
                                                                                 v143,
                                                                                 v143->klass->vtable._6_MoveNext.methodPtr);
                      if ( !this )
                        goto LABEL_66;
                      this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)System_Text_RegularExpressions_GroupCollection__get_Item_38133928(
                                                                                 (System_Text_RegularExpressions_GroupCollection_o *)this,
                                                                                 (System_String_o *)StringLiteral_7341/*"ID"*/,
                                                                                 0LL);
                      if ( !this )
                        goto LABEL_66;
                      v144 = System_Text_RegularExpressions_Capture__get_Value(
                               (System_Text_RegularExpressions_Capture_o *)this,
                               0LL);
                      v145 = System_Int32__Parse(v144, 0LL);
                      this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)System_Linq_Enumerable__Contains_int_(
                                                                                 v136,
                                                                                 v145,
                                                                                 (const MethodInfo_1CA4E8C *)Method_System_Linq_Enumerable_Contains_int___);
                      if ( ((unsigned __int8)this & 1) != 0 )
                      {
                        v146 = (UnityEngine_Object_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                         v129,
                                                         v142,
                                                         (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
                        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                        }
                        this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)UnityEngine_Object__op_Equality(
                                                                                   v146,
                                                                                   0LL,
                                                                                   0LL);
                        if ( ((unsigned __int8)this & 1) == 0 )
                        {
                          this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)_4__this->fields.scannerPrefabDict;
                          if ( !this )
                            goto LABEL_66;
                          System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
                            (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)this,
                            v145,
                            (WarBoardAIRoute_RouteData_o *)v146,
                            (const MethodInfo_2F3209C *)Method_System_Collections_Generic_Dictionary_int__GameObject__set_Item__);
                        }
                      }
                    }
                    LODWORD(_2__current) = v139->fields.__2__current;
                    if ( (__int64)++v140 >= (int)_2__current )
                      goto LABEL_45;
                  }
                }
LABEL_67:
                v159 = sub_B5D6C8(this);
                sub_B5D668(v159, 0LL);
              }
            }
          }
        }
      }
    }
LABEL_66:
    sub_B5D69C(this, method);
  }
  if ( _1__state )
    return 0;
  v4->fields.__1__state = -1;
  v121 = sub_B5D694(SubmarineMapAssetManager___c__DisplayClass69_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v121, 0LL);
  if ( !v121 )
    goto LABEL_66;
  *(_BYTE *)(v121 + 16) = 0;
  if ( !_4__this )
    goto LABEL_66;
  v122 = _4__this->fields.loadAssetNames;
  v123 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v123,
    (Il2CppObject *)v121,
    Method_SubmarineMapAssetManager___c__DisplayClass69_0__CoLoadAssets_b__0__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  v124 = 1;
  AssetManager__loadAssetStorage_30664084(v122, v123, 1, 0LL);
  v125 = (System_Func_bool__o *)sub_B5D694(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v125,
    (Il2CppObject *)v121,
    Method_SubmarineMapAssetManager___c__DisplayClass69_0__CoLoadAssets_b__1__,
    (const MethodInfo_278D9C4 *)Method_System_Func_bool___ctor__);
  v126 = (UnityEngine_WaitUntil_o *)sub_B5D694(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v126, v125, 0LL);
  v4->fields.__2__current = (Il2CppObject *)v126;
  p__2__current = &v4->fields.__2__current;
  sub_B5D560(p__2__current);
  *((_DWORD *)p__2__current - 2) = 1;
  return v124;
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

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_SubmarineMapAssetManager__CoLoadAssets_d__69_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
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
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct SubmarineMapAssetManager___c_StaticFields *static_fields; // x0

  if ( (byte_42E6452 & 1) == 0 )
  {
    sub_B5D5C4(&SubmarineMapAssetManager___c_TypeInfo, v1, v2, v3);
    byte_42E6452 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(SubmarineMapAssetManager___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = SubmarineMapAssetManager___c_TypeInfo->static_fields;
  static_fields->__9 = (struct SubmarineMapAssetManager___c_o *)v4;
  sub_B5D560(static_fields);
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
    sub_B5D69C(this, 0LL);
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