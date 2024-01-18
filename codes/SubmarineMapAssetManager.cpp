void __fastcall SubmarineMapAssetManager___ctor(SubmarineMapAssetManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x0
  __int64 v5; // x1
  struct System_String_array *v6; // x20
  __int64 v7; // x0
  __int64 v8; // x1
  __int64 v9; // x0
  __int64 v10; // x0

  if ( (byte_41857AB & 1) == 0 )
  {
    sub_B2C35C(&string___TypeInfo, method);
    sub_B2C35C(&StringLiteral_6150/*"Event/Submarine"*/, v3);
    byte_41857AB = 1;
  }
  v4 = sub_B2C374(string___TypeInfo, 1LL);
  if ( !v4 )
    sub_B2C434(0LL, v5);
  v6 = (struct System_String_array *)v4;
  v7 = StringLiteral_6150/*"Event/Submarine"*/;
  if ( StringLiteral_6150/*"Event/Submarine"*/ )
  {
    v7 = sub_B2C41C(StringLiteral_6150/*"Event/Submarine"*/, v6->obj.klass->_1.element_class);
    if ( !v7 )
    {
      v10 = sub_B2C454();
      sub_B2C400(v10, 0LL);
    }
    v8 = StringLiteral_6150/*"Event/Submarine"*/;
  }
  else
  {
    v8 = 0LL;
  }
  if ( !v6->max_length )
  {
    v9 = sub_B2C460(v7);
    sub_B2C400(v9, 0LL);
  }
  v6->m_Items[0] = (System_String_o *)v8;
  sub_B2C2F8(v6->m_Items, v8);
  this->fields.loadAssetNames = v6;
  sub_B2C2F8(&this->fields.loadAssetNames, v6);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_IEnumerator_o *__fastcall SubmarineMapAssetManager__CoLoadAssets(
        SubmarineMapAssetManager_o *this,
        int32_t eventId,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  SubmarineMapAssetManager__CoLoadAssets_d__69_o *v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1

  if ( (byte_41857A7 & 1) == 0 )
  {
    sub_B2C35C(&SubmarineMapAssetManager__CoLoadAssets_d__69_TypeInfo, *(_QWORD *)&eventId);
    byte_41857A7 = 1;
  }
  v7 = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)sub_B2C42C(SubmarineMapAssetManager__CoLoadAssets_d__69_TypeInfo);
  SubmarineMapAssetManager__CoLoadAssets_d__69___ctor(v7, 0, 0LL);
  if ( !v7 )
    sub_B2C434(v8, v9);
  v7->fields.__4__this = this;
  sub_B2C2F8(&v7->fields.__4__this, this);
  v7->fields.eventId = eventId;
  v7->fields.finishCallback = finishCallback;
  sub_B2C2F8(&v7->fields.finishCallback, finishCallback);
  return (System_Collections_IEnumerator_o *)v7;
}


void __fastcall SubmarineMapAssetManager__Finish(SubmarineMapAssetManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_Dictionary_int__GameObject__o *scannerPrefabDict; // x0
  struct UnityEngine_GameObject_o **p_AnimationSkipEFfectPrefab_k__BackingField; // x19
  System_String_array *v6; // x19

  if ( (byte_41857AA & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, method);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__GameObject__Clear__, v3);
    byte_41857AA = 1;
  }
  scannerPrefabDict = this->fields.scannerPrefabDict;
  if ( !scannerPrefabDict
    || (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Clear(
          (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)scannerPrefabDict,
          (const MethodInfo_2E64928 *)Method_System_Collections_Generic_Dictionary_int__GameObject__Clear__),
        (scannerPrefabDict = this->fields.scanRangeNotificatorPrefabDict) == 0LL) )
  {
    sub_B2C434(scannerPrefabDict, method);
  }
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Clear(
    (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)scannerPrefabDict,
    (const MethodInfo_2E64928 *)Method_System_Collections_Generic_Dictionary_int__GameObject__Clear__);
  this->fields._PanelPrefab_k__BackingField = 0LL;
  sub_B2C2F8(&this->fields, 0LL);
  this->fields._GridLinePrefab_k__BackingField = 0LL;
  sub_B2C2F8(&this->fields._GridLinePrefab_k__BackingField, 0LL);
  this->fields._PanelContainerPrefab_k__BackingField = 0LL;
  sub_B2C2F8(&this->fields._PanelContainerPrefab_k__BackingField, 0LL);
  this->fields._EffectContainerPrefab_k__BackingField = 0LL;
  sub_B2C2F8(&this->fields._EffectContainerPrefab_k__BackingField, 0LL);
  this->fields._ClosedPanelTexture_k__BackingField = 0LL;
  sub_B2C2F8(&this->fields._ClosedPanelTexture_k__BackingField, 0LL);
  this->fields._GridTexture_k__BackingField = 0LL;
  sub_B2C2F8(&this->fields._GridTexture_k__BackingField, 0LL);
  this->fields._EffectScannedPanelPrefab_k__BackingField = 0LL;
  sub_B2C2F8(&this->fields._EffectScannedPanelPrefab_k__BackingField, 0LL);
  this->fields._EffectSelectedPanelPrefab_k__BackingField = 0LL;
  sub_B2C2F8(&this->fields._EffectSelectedPanelPrefab_k__BackingField, 0LL);
  this->fields._EffectScannablePanelPrafab_k__BackingField = 0LL;
  sub_B2C2F8(&this->fields._EffectScannablePanelPrafab_k__BackingField, 0LL);
  this->fields._EffectScanObstaclePanelPrafab_k__BackingField = 0LL;
  sub_B2C2F8(&this->fields._EffectScanObstaclePanelPrafab_k__BackingField, 0LL);
  this->fields._ScanProcessPreventedPrafab_k__BackingField = 0LL;
  sub_B2C2F8(&this->fields._ScanProcessPreventedPrafab_k__BackingField, 0LL);
  this->fields._SelectScannerDialogPrefab_k__BackingField = 0LL;
  sub_B2C2F8(&this->fields._SelectScannerDialogPrefab_k__BackingField, 0LL);
  this->fields._ScanConfirmDialogPrefab_k__BackingField = 0LL;
  sub_B2C2F8(&this->fields._ScanConfirmDialogPrefab_k__BackingField, 0LL);
  this->fields._NewScannerDialogPrefab_k__BackingField = 0LL;
  sub_B2C2F8(&this->fields._NewScannerDialogPrefab_k__BackingField, 0LL);
  this->fields._Settings_k__BackingField = 0LL;
  sub_B2C2F8(&this->fields._Settings_k__BackingField, 0LL);
  this->fields._AnimationSkipEFfectPrefab_k__BackingField = 0LL;
  p_AnimationSkipEFfectPrefab_k__BackingField = &this->fields._AnimationSkipEFfectPrefab_k__BackingField;
  sub_B2C2F8(p_AnimationSkipEFfectPrefab_k__BackingField, 0LL);
  v6 = (System_String_array *)p_AnimationSkipEFfectPrefab_k__BackingField[3];
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAssetStorage_30161248(v6, 0LL);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall SubmarineMapAssetManager__GetScanAnimObjectPrefab(
        SubmarineMapAssetManager_o *this,
        int32_t scanObjectId,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_int__GameObject__o *scannerPrefabDict; // x0
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_41857A8 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__GameObject__TryGetValue__, *(_QWORD *)&scanObjectId);
    byte_41857A8 = 1;
  }
  value = 0LL;
  scannerPrefabDict = this->fields.scannerPrefabDict;
  if ( !scannerPrefabDict )
    sub_B2C434(0LL, *(_QWORD *)&scanObjectId);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)scannerPrefabDict,
    scanObjectId,
    &value,
    (const MethodInfo_2E66470 *)Method_System_Collections_Generic_Dictionary_int__GameObject__TryGetValue__);
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

  if ( (byte_41857A9 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__GameObject__TryGetValue__, *(_QWORD *)&scanObjectId);
    byte_41857A9 = 1;
  }
  value = 0LL;
  scanRangeNotificatorPrefabDict = this->fields.scanRangeNotificatorPrefabDict;
  if ( !scanRangeNotificatorPrefabDict )
    sub_B2C434(0LL, *(_QWORD *)&scanObjectId);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)scanRangeNotificatorPrefabDict,
    scanObjectId,
    &value,
    (const MethodInfo_2E66470 *)Method_System_Collections_Generic_Dictionary_int__GameObject__TryGetValue__);
  return (UnityEngine_GameObject_o *)value;
}


void __fastcall SubmarineMapAssetManager__Initialize(SubmarineMapAssetManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v4; // x20
  struct System_Collections_Generic_Dictionary_int__GameObject__o **p_scannerPrefabDict; // x19
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v6; // x20

  if ( (byte_41857A5 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__GameObject___ctor__, method);
    sub_B2C35C(&System_Collections_Generic_Dictionary_int__GameObject__TypeInfo, v3);
    byte_41857A5 = 1;
  }
  v4 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B2C42C(System_Collections_Generic_Dictionary_int__GameObject__TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v4,
    (const MethodInfo_2E63B98 *)Method_System_Collections_Generic_Dictionary_int__GameObject___ctor__);
  this->fields.scannerPrefabDict = (struct System_Collections_Generic_Dictionary_int__GameObject__o *)v4;
  p_scannerPrefabDict = &this->fields.scannerPrefabDict;
  sub_B2C2F8(p_scannerPrefabDict, v4);
  v6 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B2C42C(System_Collections_Generic_Dictionary_int__GameObject__TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v6,
    (const MethodInfo_2E63B98 *)Method_System_Collections_Generic_Dictionary_int__GameObject___ctor__);
  p_scannerPrefabDict[1] = (struct System_Collections_Generic_Dictionary_int__GameObject__o *)v6;
  sub_B2C2F8(p_scannerPrefabDict + 1, v6);
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
  __int64 v11; // x1
  struct UnityEngine_Texture2D_o *Object_WarBoardWaitTimeSetting; // x0
  int32_t v13; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_41857A6 & 1) == 0 )
  {
    sub_B2C35C(&Method_AssetData_GetObject_Texture2D____67377648, assetData);
    sub_B2C35C(&int_TypeInfo, v7);
    sub_B2C35C(&StringLiteral_23510/*"{0:D6}_ClosedPanelTexture"*/, v8);
    byte_41857A6 = 1;
  }
  v13 = mapId;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v13);
  v10 = System_String__Format((System_String_o *)StringLiteral_23510/*"{0:D6}_ClosedPanelTexture"*/, v9, 0LL);
  if ( !assetData )
    sub_B2C434(v10, v11);
  Object_WarBoardWaitTimeSetting = (struct UnityEngine_Texture2D_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                       assetData,
                                                                       v10,
                                                                       (const MethodInfo_1720344 *)Method_AssetData_GetObject_Texture2D____67377648);
  this->fields._ClosedPanelTexture_k__BackingField = Object_WarBoardWaitTimeSetting;
  sub_B2C2F8(&this->fields._ClosedPanelTexture_k__BackingField, Object_WarBoardWaitTimeSetting);
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
  this->fields._AnimationSkipEFfectPrefab_k__BackingField = value;
  sub_B2C2F8(&this->fields._AnimationSkipEFfectPrefab_k__BackingField, value);
}


void __fastcall SubmarineMapAssetManager__set_ClosedPanelTexture(
        SubmarineMapAssetManager_o *this,
        UnityEngine_Texture2D_o *value,
        const MethodInfo *method)
{
  this->fields._ClosedPanelTexture_k__BackingField = value;
  sub_B2C2F8(&this->fields._ClosedPanelTexture_k__BackingField, value);
}


void __fastcall SubmarineMapAssetManager__set_EffectContainerPrefab(
        SubmarineMapAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  this->fields._EffectContainerPrefab_k__BackingField = value;
  sub_B2C2F8(&this->fields._EffectContainerPrefab_k__BackingField, value);
}


void __fastcall SubmarineMapAssetManager__set_EffectScanObstaclePanelPrafab(
        SubmarineMapAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  this->fields._EffectScanObstaclePanelPrafab_k__BackingField = value;
  sub_B2C2F8(&this->fields._EffectScanObstaclePanelPrafab_k__BackingField, value);
}


void __fastcall SubmarineMapAssetManager__set_EffectScannablePanelPrafab(
        SubmarineMapAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  this->fields._EffectScannablePanelPrafab_k__BackingField = value;
  sub_B2C2F8(&this->fields._EffectScannablePanelPrafab_k__BackingField, value);
}


void __fastcall SubmarineMapAssetManager__set_EffectScannedPanelPrefab(
        SubmarineMapAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  this->fields._EffectScannedPanelPrefab_k__BackingField = value;
  sub_B2C2F8(&this->fields._EffectScannedPanelPrefab_k__BackingField, value);
}


void __fastcall SubmarineMapAssetManager__set_EffectSelectedPanelPrefab(
        SubmarineMapAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  this->fields._EffectSelectedPanelPrefab_k__BackingField = value;
  sub_B2C2F8(&this->fields._EffectSelectedPanelPrefab_k__BackingField, value);
}


void __fastcall SubmarineMapAssetManager__set_GridLinePrefab(
        SubmarineMapAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  this->fields._GridLinePrefab_k__BackingField = value;
  sub_B2C2F8(&this->fields._GridLinePrefab_k__BackingField, value);
}


void __fastcall SubmarineMapAssetManager__set_GridTexture(
        SubmarineMapAssetManager_o *this,
        UnityEngine_Texture2D_o *value,
        const MethodInfo *method)
{
  this->fields._GridTexture_k__BackingField = value;
  sub_B2C2F8(&this->fields._GridTexture_k__BackingField, value);
}


void __fastcall SubmarineMapAssetManager__set_NewScannerDialogPrefab(
        SubmarineMapAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  this->fields._NewScannerDialogPrefab_k__BackingField = value;
  sub_B2C2F8(&this->fields._NewScannerDialogPrefab_k__BackingField, value);
}


void __fastcall SubmarineMapAssetManager__set_PanelContainerPrefab(
        SubmarineMapAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  this->fields._PanelContainerPrefab_k__BackingField = value;
  sub_B2C2F8(&this->fields._PanelContainerPrefab_k__BackingField, value);
}


void __fastcall SubmarineMapAssetManager__set_PanelPrefab(
        SubmarineMapAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  this->fields._PanelPrefab_k__BackingField = value;
  sub_B2C2F8(&this->fields, value);
}


void __fastcall SubmarineMapAssetManager__set_ScanConfirmDialogPrefab(
        SubmarineMapAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  this->fields._ScanConfirmDialogPrefab_k__BackingField = value;
  sub_B2C2F8(&this->fields._ScanConfirmDialogPrefab_k__BackingField, value);
}


void __fastcall SubmarineMapAssetManager__set_ScanProcessPreventedPrafab(
        SubmarineMapAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  this->fields._ScanProcessPreventedPrafab_k__BackingField = value;
  sub_B2C2F8(&this->fields._ScanProcessPreventedPrafab_k__BackingField, value);
}


void __fastcall SubmarineMapAssetManager__set_SelectScannerDialogPrefab(
        SubmarineMapAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  this->fields._SelectScannerDialogPrefab_k__BackingField = value;
  sub_B2C2F8(&this->fields._SelectScannerDialogPrefab_k__BackingField, value);
}


void __fastcall SubmarineMapAssetManager__set_Settings(
        SubmarineMapAssetManager_o *this,
        SubmarineSettings_o *value,
        const MethodInfo *method)
{
  this->fields._Settings_k__BackingField = value;
  sub_B2C2F8(&this->fields._Settings_k__BackingField, value);
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
  __int64 v39; // x1
  __int64 v40; // x1
  int32_t _1__state; // w8
  struct SubmarineMapAssetManager_o *_4__this; // x26
  __int64 v43; // x20
  System_String_array *v44; // x22
  System_Action_o *v45; // x23
  bool v46; // w21
  System_Func_bool__o *v47; // x22
  UnityEngine_WaitUntil_o *v48; // x20
  Il2CppObject **p__2__current; // x24
  System_String_array *loadAssetNames; // x20
  AssetData_o *v51; // x20
  WarBoardWaitTimeSetting_o *Object_WarBoardWaitTimeSetting; // x0
  WarBoardWaitTimeSetting_o *v53; // x0
  WarBoardWaitTimeSetting_o *v54; // x0
  WarBoardWaitTimeSetting_o *v55; // x0
  WarBoardWaitTimeSetting_o *v56; // x0
  WarBoardWaitTimeSetting_o *v57; // x0
  WarBoardWaitTimeSetting_o *v58; // x0
  WarBoardWaitTimeSetting_o *v59; // x0
  WarBoardWaitTimeSetting_o *v60; // x0
  WarBoardWaitTimeSetting_o *v61; // x0
  WarBoardWaitTimeSetting_o *v62; // x0
  WarBoardWaitTimeSetting_o *v63; // x0
  WarBoardWaitTimeSetting_o *v64; // x0
  WarBoardWaitTimeSetting_o *v65; // x0
  System_Collections_Generic_IEnumerable_TSource__o *ListByEventId; // x21
  SubmarineMapAssetManager___c_c *v67; // x8
  struct SubmarineMapAssetManager___c_StaticFields *static_fields; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__69_2; // x22
  Il2CppObject *v70; // x23
  struct SubmarineMapAssetManager___c_StaticFields *v71; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v72; // x21
  System_Text_RegularExpressions_Regex_o *v73; // x22
  Il2CppObject *_2__current; // x8
  SubmarineMapAssetManager__CoLoadAssets_d__69_o *v75; // x23
  unsigned __int64 v76; // x28
  struct SubmarineMapAssetManager_o **v77; // x27
  System_String_o *v78; // x24
  SubmarineMapAssetManager__CoLoadAssets_d__69_o *v79; // x25
  System_String_o *v80; // x0
  int32_t v81; // w25
  UnityEngine_Object_o *v82; // x24
  System_Text_RegularExpressions_Regex_o *v83; // x22
  Il2CppObject *v84; // x8
  SubmarineMapAssetManager__CoLoadAssets_d__69_o *v85; // x23
  unsigned __int64 v86; // x28
  struct SubmarineMapAssetManager_o **p__4__this; // x27
  System_String_o *v88; // x24
  SubmarineMapAssetManager__CoLoadAssets_d__69_o *v89; // x25
  System_String_o *Value; // x0
  int32_t v91; // w25
  UnityEngine_Object_o *v92; // x24
  System_Action_o *finishCallback; // x0
  __int64 v95; // x0
  SubmarineMapAssetManager__CoLoadAssets_d__69_o *v96; // [xsp+8h] [xbp-58h]

  v2 = this;
  if ( (byte_418479D & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_AssetData_GetObject_GameObject____67377624, v3);
    sub_B2C35C(&Method_AssetData_GetObject_SubmarineSettings___, v4);
    sub_B2C35C(&Method_AssetData_GetObject_Texture2D____67377648, v5);
    sub_B2C35C(&AssetManager_TypeInfo, v6);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventPanelScanMaster___, v7);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__GameObject__set_Item__, v8);
    sub_B2C35C(&Method_System_Linq_Enumerable_Contains_int___, v9);
    sub_B2C35C(&Method_System_Linq_Enumerable_Select_EventPanelScanEntity__int___, v10);
    sub_B2C35C(&Method_System_Func_bool___ctor__, v11);
    sub_B2C35C(&System_Func_bool__TypeInfo, v12);
    sub_B2C35C(&Method_System_Func_EventPanelScanEntity__int___ctor__, v13);
    sub_B2C35C(&System_Func_EventPanelScanEntity__int__TypeInfo, v14);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v15);
    sub_B2C35C(&System_Text_RegularExpressions_Regex_TypeInfo, v16);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_B2C35C(&Method_SubmarineMapAssetManager___c__CoLoadAssets_b__69_2__, v18);
    sub_B2C35C(&Method_SubmarineMapAssetManager___c__DisplayClass69_0__CoLoadAssets_b__0__, v19);
    sub_B2C35C(&Method_SubmarineMapAssetManager___c__DisplayClass69_0__CoLoadAssets_b__1__, v20);
    sub_B2C35C(&SubmarineMapAssetManager___c__DisplayClass69_0_TypeInfo, v21);
    sub_B2C35C(&SubmarineMapAssetManager___c_TypeInfo, v22);
    sub_B2C35C(&UnityEngine_WaitUntil_TypeInfo, v23);
    sub_B2C35C(&StringLiteral_5875/*"EffectScannedPanel"*/, v24);
    sub_B2C35C(&StringLiteral_12601/*"Scanner_(?<ID>\\d+)"*/, v25);
    sub_B2C35C(&StringLiteral_13138/*"SubmarineScanConfirmDialog"*/, v26);
    sub_B2C35C(&StringLiteral_18156/*"ef_animation_skip"*/, v27);
    sub_B2C35C(&StringLiteral_13136/*"SubmarinePanel"*/, v28);
    sub_B2C35C(&StringLiteral_13140/*"SubmarineSelectScannerDialog"*/, v29);
    sub_B2C35C(&StringLiteral_13129/*"SubmarineEffectScanObstaclePanel"*/, v30);
    sub_B2C35C(&StringLiteral_13132/*"SubmarineGridLine"*/, v31);
    sub_B2C35C(&StringLiteral_13137/*"SubmarinePanelContainer"*/, v32);
    sub_B2C35C(&StringLiteral_13139/*"SubmarineScanRangeNotificator_(?<ID>\\d+)"*/, v33);
    sub_B2C35C(&StringLiteral_13135/*"SubmarineNewScannerDialog"*/, v34);
    sub_B2C35C(&StringLiteral_13133/*"SubmarineGridTexture"*/, v35);
    sub_B2C35C(&StringLiteral_13131/*"SubmarineEffectSelectedPanel"*/, v36);
    sub_B2C35C(&StringLiteral_13128/*"SubmarineEffectContainer"*/, v37);
    sub_B2C35C(&StringLiteral_13130/*"SubmarineEffectScannablePanel"*/, v38);
    sub_B2C35C(&StringLiteral_7259/*"ID"*/, v39);
    this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)sub_B2C35C(&StringLiteral_13141/*"SubmarineSettings"*/, v40);
    byte_418479D = 1;
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
      this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)AssetManager__getAssetStorage_30160412(
                                                                 loadAssetNames,
                                                                 0LL);
      if ( this )
      {
        if ( !LODWORD(this->fields.__2__current) )
          goto LABEL_67;
        v51 = (AssetData_o *)this->fields.__4__this;
        if ( v51 )
        {
          Object_WarBoardWaitTimeSetting = AssetData__GetObject_WarBoardWaitTimeSetting_(
                                             (AssetData_o *)this->fields.__4__this,
                                             (System_String_o *)StringLiteral_13136/*"SubmarinePanel"*/,
                                             (const MethodInfo_1720344 *)Method_AssetData_GetObject_GameObject____67377624);
          _4__this->fields._PanelPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)Object_WarBoardWaitTimeSetting;
          sub_B2C2F8(&_4__this->fields, Object_WarBoardWaitTimeSetting);
          v53 = AssetData__GetObject_WarBoardWaitTimeSetting_(
                  v51,
                  (System_String_o *)StringLiteral_13132/*"SubmarineGridLine"*/,
                  (const MethodInfo_1720344 *)Method_AssetData_GetObject_GameObject____67377624);
          _4__this->fields._GridLinePrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v53;
          sub_B2C2F8(&_4__this->fields._GridLinePrefab_k__BackingField, v53);
          v54 = AssetData__GetObject_WarBoardWaitTimeSetting_(
                  v51,
                  (System_String_o *)StringLiteral_13137/*"SubmarinePanelContainer"*/,
                  (const MethodInfo_1720344 *)Method_AssetData_GetObject_GameObject____67377624);
          _4__this->fields._PanelContainerPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v54;
          sub_B2C2F8(&_4__this->fields._PanelContainerPrefab_k__BackingField, v54);
          v55 = AssetData__GetObject_WarBoardWaitTimeSetting_(
                  v51,
                  (System_String_o *)StringLiteral_13128/*"SubmarineEffectContainer"*/,
                  (const MethodInfo_1720344 *)Method_AssetData_GetObject_GameObject____67377624);
          _4__this->fields._EffectContainerPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v55;
          sub_B2C2F8(&_4__this->fields._EffectContainerPrefab_k__BackingField, v55);
          v56 = AssetData__GetObject_WarBoardWaitTimeSetting_(
                  v51,
                  (System_String_o *)StringLiteral_5875/*"EffectScannedPanel"*/,
                  (const MethodInfo_1720344 *)Method_AssetData_GetObject_GameObject____67377624);
          _4__this->fields._EffectScannedPanelPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v56;
          sub_B2C2F8(&_4__this->fields._EffectScannedPanelPrefab_k__BackingField, v56);
          v57 = AssetData__GetObject_WarBoardWaitTimeSetting_(
                  v51,
                  (System_String_o *)StringLiteral_13131/*"SubmarineEffectSelectedPanel"*/,
                  (const MethodInfo_1720344 *)Method_AssetData_GetObject_GameObject____67377624);
          _4__this->fields._EffectSelectedPanelPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v57;
          sub_B2C2F8(&_4__this->fields._EffectSelectedPanelPrefab_k__BackingField, v57);
          v58 = AssetData__GetObject_WarBoardWaitTimeSetting_(
                  v51,
                  (System_String_o *)StringLiteral_13130/*"SubmarineEffectScannablePanel"*/,
                  (const MethodInfo_1720344 *)Method_AssetData_GetObject_GameObject____67377624);
          _4__this->fields._EffectScannablePanelPrafab_k__BackingField = (struct UnityEngine_GameObject_o *)v58;
          sub_B2C2F8(&_4__this->fields._EffectScannablePanelPrafab_k__BackingField, v58);
          v59 = AssetData__GetObject_WarBoardWaitTimeSetting_(
                  v51,
                  (System_String_o *)StringLiteral_13129/*"SubmarineEffectScanObstaclePanel"*/,
                  (const MethodInfo_1720344 *)Method_AssetData_GetObject_GameObject____67377624);
          _4__this->fields._EffectScanObstaclePanelPrafab_k__BackingField = (struct UnityEngine_GameObject_o *)v59;
          sub_B2C2F8(&_4__this->fields._EffectScanObstaclePanelPrafab_k__BackingField, v59);
          v60 = AssetData__GetObject_WarBoardWaitTimeSetting_(
                  v51,
                  (System_String_o *)StringLiteral_13133/*"SubmarineGridTexture"*/,
                  (const MethodInfo_1720344 *)Method_AssetData_GetObject_Texture2D____67377648);
          _4__this->fields._GridTexture_k__BackingField = (struct UnityEngine_Texture2D_o *)v60;
          sub_B2C2F8(&_4__this->fields._GridTexture_k__BackingField, v60);
          v61 = AssetData__GetObject_WarBoardWaitTimeSetting_(
                  v51,
                  (System_String_o *)StringLiteral_13141/*"SubmarineSettings"*/,
                  (const MethodInfo_1720344 *)Method_AssetData_GetObject_SubmarineSettings___);
          _4__this->fields._Settings_k__BackingField = (struct SubmarineSettings_o *)v61;
          sub_B2C2F8(&_4__this->fields._Settings_k__BackingField, v61);
          _4__this->fields._ScanProcessPreventedPrafab_k__BackingField = 0LL;
          sub_B2C2F8(&_4__this->fields._ScanProcessPreventedPrafab_k__BackingField, 0LL);
          v62 = AssetData__GetObject_WarBoardWaitTimeSetting_(
                  v51,
                  (System_String_o *)StringLiteral_18156/*"ef_animation_skip"*/,
                  (const MethodInfo_1720344 *)Method_AssetData_GetObject_GameObject____67377624);
          _4__this->fields._AnimationSkipEFfectPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v62;
          sub_B2C2F8(&_4__this->fields._AnimationSkipEFfectPrefab_k__BackingField, v62);
          v63 = AssetData__GetObject_WarBoardWaitTimeSetting_(
                  v51,
                  (System_String_o *)StringLiteral_13140/*"SubmarineSelectScannerDialog"*/,
                  (const MethodInfo_1720344 *)Method_AssetData_GetObject_GameObject____67377624);
          _4__this->fields._SelectScannerDialogPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v63;
          sub_B2C2F8(&_4__this->fields._SelectScannerDialogPrefab_k__BackingField, v63);
          v64 = AssetData__GetObject_WarBoardWaitTimeSetting_(
                  v51,
                  (System_String_o *)StringLiteral_13138/*"SubmarineScanConfirmDialog"*/,
                  (const MethodInfo_1720344 *)Method_AssetData_GetObject_GameObject____67377624);
          _4__this->fields._ScanConfirmDialogPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v64;
          sub_B2C2F8(&_4__this->fields._ScanConfirmDialogPrefab_k__BackingField, v64);
          v65 = AssetData__GetObject_WarBoardWaitTimeSetting_(
                  v51,
                  (System_String_o *)StringLiteral_13135/*"SubmarineNewScannerDialog"*/,
                  (const MethodInfo_1720344 *)Method_AssetData_GetObject_GameObject____67377624);
          _4__this->fields._NewScannerDialogPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v65;
          sub_B2C2F8(&_4__this->fields._NewScannerDialogPrefab_k__BackingField, v65);
          this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( this )
          {
            this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                       (DataManager_o *)this,
                                                                       (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventPanelScanMaster___);
            if ( this )
            {
              ListByEventId = (System_Collections_Generic_IEnumerable_TSource__o *)EventPanelScanMaster__GetListByEventId(
                                                                                     (EventPanelScanMaster_o *)this,
                                                                                     v2->fields.eventId,
                                                                                     0LL);
              v67 = SubmarineMapAssetManager___c_TypeInfo;
              if ( (BYTE3(SubmarineMapAssetManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !SubmarineMapAssetManager___c_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(SubmarineMapAssetManager___c_TypeInfo);
                v67 = SubmarineMapAssetManager___c_TypeInfo;
              }
              static_fields = v67->static_fields;
              _9__69_2 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__69_2;
              if ( !_9__69_2 )
              {
                if ( (BYTE3(v67->vtable._0_Equals.methodPtr) & 4) != 0 && !v67->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(v67);
                  static_fields = SubmarineMapAssetManager___c_TypeInfo->static_fields;
                }
                v70 = (Il2CppObject *)static_fields->__9;
                _9__69_2 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B2C42C(System_Func_EventPanelScanEntity__int__TypeInfo);
                System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
                  _9__69_2,
                  v70,
                  Method_SubmarineMapAssetManager___c__CoLoadAssets_b__69_2__,
                  (const MethodInfo_27127B0 *)Method_System_Func_EventPanelScanEntity__int___ctor__);
                v71 = SubmarineMapAssetManager___c_TypeInfo->static_fields;
                v71->__9__69_2 = (struct System_Func_EventPanelScanEntity__int__o *)_9__69_2;
                sub_B2C2F8(&v71->__9__69_2, _9__69_2);
              }
              v72 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                                           ListByEventId,
                                                                           (System_Func_TSource__TResult__o *)_9__69_2,
                                                                           (const MethodInfo_1A967E8 *)Method_System_Linq_Enumerable_Select_EventPanelScanEntity__int___);
              v73 = (System_Text_RegularExpressions_Regex_o *)sub_B2C42C(System_Text_RegularExpressions_Regex_TypeInfo);
              System_Text_RegularExpressions_Regex___ctor_16107524(v73, (System_String_o *)StringLiteral_12601/*"Scanner_(?<ID>\\d+)"*/, 0LL);
              this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)AssetData__GetObjectNameList(v51, 0LL);
              if ( this )
              {
                _2__current = this->fields.__2__current;
                v75 = this;
                v96 = v2;
                if ( (int)_2__current < 1 )
                {
LABEL_45:
                  v83 = (System_Text_RegularExpressions_Regex_o *)sub_B2C42C(System_Text_RegularExpressions_Regex_TypeInfo);
                  System_Text_RegularExpressions_Regex___ctor_16107524(v83, (System_String_o *)StringLiteral_13139/*"SubmarineScanRangeNotificator_(?<ID>\\d+)"*/, 0LL);
                  this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)AssetData__GetObjectNameList(v51, 0LL);
                  if ( !this )
                    goto LABEL_66;
                  v84 = this->fields.__2__current;
                  v85 = this;
                  if ( (int)v84 < 1 )
                  {
LABEL_62:
                    finishCallback = v96->fields.finishCallback;
                    if ( finishCallback )
                      ActionExtensions__Call(finishCallback, 0LL);
                    return 0;
                  }
                  v86 = 0LL;
                  p__4__this = &this->fields.__4__this;
                  while ( v86 < (unsigned int)v84 )
                  {
                    if ( !v83 )
                      goto LABEL_66;
                    v88 = (System_String_o *)p__4__this[v86];
                    this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)System_Text_RegularExpressions_Regex__Match_16115188(
                                                                               v83,
                                                                               v88,
                                                                               0LL);
                    if ( !this )
                      goto LABEL_66;
                    v89 = this;
                    this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)System_Text_RegularExpressions_Group__get_Success(
                                                                               (System_Text_RegularExpressions_Group_o *)this,
                                                                               0LL);
                    if ( ((unsigned __int8)this & 1) != 0 )
                    {
                      this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)((__int64 (__fastcall *)(SubmarineMapAssetManager__CoLoadAssets_d__69_o *, Il2CppMethodPointer))v89->klass->vtable._5_System_IDisposable_Dispose.method)(
                                                                                 v89,
                                                                                 v89->klass->vtable._6_MoveNext.methodPtr);
                      if ( !this )
                        goto LABEL_66;
                      this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)System_Text_RegularExpressions_GroupCollection__get_Item_37155292(
                                                                                 (System_Text_RegularExpressions_GroupCollection_o *)this,
                                                                                 (System_String_o *)StringLiteral_7259/*"ID"*/,
                                                                                 0LL);
                      if ( !this )
                        goto LABEL_66;
                      Value = System_Text_RegularExpressions_Capture__get_Value(
                                (System_Text_RegularExpressions_Capture_o *)this,
                                0LL);
                      v91 = System_Int32__Parse(Value, 0LL);
                      this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)System_Linq_Enumerable__Contains_int_(
                                                                                 v72,
                                                                                 v91,
                                                                                 (const MethodInfo_1A8A3F4 *)Method_System_Linq_Enumerable_Contains_int___);
                      if ( ((unsigned __int8)this & 1) != 0 )
                      {
                        v92 = (UnityEngine_Object_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                        v51,
                                                        v88,
                                                        (const MethodInfo_1720344 *)Method_AssetData_GetObject_GameObject____67377624);
                        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                        }
                        this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)UnityEngine_Object__op_Equality(
                                                                                   v92,
                                                                                   0LL,
                                                                                   0LL);
                        if ( ((unsigned __int8)this & 1) == 0 )
                        {
                          this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)_4__this->fields.scanRangeNotificatorPrefabDict;
                          if ( !this )
                            goto LABEL_66;
                          System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
                            (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)this,
                            v91,
                            (WarBoardAIRoute_RouteData_o *)v92,
                            (const MethodInfo_2E64724 *)Method_System_Collections_Generic_Dictionary_int__GameObject__set_Item__);
                        }
                      }
                    }
                    LODWORD(v84) = v85->fields.__2__current;
                    if ( (__int64)++v86 >= (int)v84 )
                      goto LABEL_62;
                  }
                }
                else
                {
                  v76 = 0LL;
                  v77 = &this->fields.__4__this;
                  while ( v76 < (unsigned int)_2__current )
                  {
                    if ( !v73 )
                      goto LABEL_66;
                    v78 = (System_String_o *)v77[v76];
                    this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)System_Text_RegularExpressions_Regex__Match_16115188(
                                                                               v73,
                                                                               v78,
                                                                               0LL);
                    if ( !this )
                      goto LABEL_66;
                    v79 = this;
                    this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)System_Text_RegularExpressions_Group__get_Success(
                                                                               (System_Text_RegularExpressions_Group_o *)this,
                                                                               0LL);
                    if ( ((unsigned __int8)this & 1) != 0 )
                    {
                      this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)((__int64 (__fastcall *)(SubmarineMapAssetManager__CoLoadAssets_d__69_o *, Il2CppMethodPointer))v79->klass->vtable._5_System_IDisposable_Dispose.method)(
                                                                                 v79,
                                                                                 v79->klass->vtable._6_MoveNext.methodPtr);
                      if ( !this )
                        goto LABEL_66;
                      this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)System_Text_RegularExpressions_GroupCollection__get_Item_37155292(
                                                                                 (System_Text_RegularExpressions_GroupCollection_o *)this,
                                                                                 (System_String_o *)StringLiteral_7259/*"ID"*/,
                                                                                 0LL);
                      if ( !this )
                        goto LABEL_66;
                      v80 = System_Text_RegularExpressions_Capture__get_Value(
                              (System_Text_RegularExpressions_Capture_o *)this,
                              0LL);
                      v81 = System_Int32__Parse(v80, 0LL);
                      this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)System_Linq_Enumerable__Contains_int_(
                                                                                 v72,
                                                                                 v81,
                                                                                 (const MethodInfo_1A8A3F4 *)Method_System_Linq_Enumerable_Contains_int___);
                      if ( ((unsigned __int8)this & 1) != 0 )
                      {
                        v82 = (UnityEngine_Object_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                        v51,
                                                        v78,
                                                        (const MethodInfo_1720344 *)Method_AssetData_GetObject_GameObject____67377624);
                        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                        }
                        this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)UnityEngine_Object__op_Equality(
                                                                                   v82,
                                                                                   0LL,
                                                                                   0LL);
                        if ( ((unsigned __int8)this & 1) == 0 )
                        {
                          this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)_4__this->fields.scannerPrefabDict;
                          if ( !this )
                            goto LABEL_66;
                          System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
                            (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)this,
                            v81,
                            (WarBoardAIRoute_RouteData_o *)v82,
                            (const MethodInfo_2E64724 *)Method_System_Collections_Generic_Dictionary_int__GameObject__set_Item__);
                        }
                      }
                    }
                    LODWORD(_2__current) = v75->fields.__2__current;
                    if ( (__int64)++v76 >= (int)_2__current )
                      goto LABEL_45;
                  }
                }
LABEL_67:
                v95 = sub_B2C460(this);
                sub_B2C400(v95, 0LL);
              }
            }
          }
        }
      }
    }
LABEL_66:
    sub_B2C434(this, method);
  }
  if ( _1__state )
    return 0;
  v2->fields.__1__state = -1;
  v43 = sub_B2C42C(SubmarineMapAssetManager___c__DisplayClass69_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v43, 0LL);
  if ( !v43 )
    goto LABEL_66;
  *(_BYTE *)(v43 + 16) = 0;
  if ( !_4__this )
    goto LABEL_66;
  v44 = _4__this->fields.loadAssetNames;
  v45 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v45,
    (Il2CppObject *)v43,
    Method_SubmarineMapAssetManager___c__DisplayClass69_0__CoLoadAssets_b__0__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  v46 = 1;
  AssetManager__loadAssetStorage_30159204(v44, v45, 1, 0LL);
  v47 = (System_Func_bool__o *)sub_B2C42C(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v47,
    (Il2CppObject *)v43,
    Method_SubmarineMapAssetManager___c__DisplayClass69_0__CoLoadAssets_b__1__,
    (const MethodInfo_26FE8F8 *)Method_System_Func_bool___ctor__);
  v48 = (UnityEngine_WaitUntil_o *)sub_B2C42C(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v48, v47, 0LL);
  v2->fields.__2__current = (Il2CppObject *)v48;
  p__2__current = &v2->fields.__2__current;
  sub_B2C2F8(p__2__current, v48);
  *((_DWORD *)p__2__current - 2) = 1;
  return v46;
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

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_SubmarineMapAssetManager__CoLoadAssets_d__69_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
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
  struct SubmarineMapAssetManager___c_StaticFields *static_fields; // x0

  if ( (byte_418479C & 1) == 0 )
  {
    sub_B2C35C(&SubmarineMapAssetManager___c_TypeInfo, v1);
    byte_418479C = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(SubmarineMapAssetManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = SubmarineMapAssetManager___c_TypeInfo->static_fields;
  static_fields->__9 = (struct SubmarineMapAssetManager___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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
    sub_B2C434(this, 0LL);
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