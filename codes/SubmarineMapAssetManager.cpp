void __fastcall SubmarineMapAssetManager___ctor(SubmarineMapAssetManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  const MethodInfo *v7; // x3
  struct System_String_array *v8; // x20
  int32_t v9; // w1
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4AFEA6F & 1) == 0 )
  {
    sub_1BC3008(&string___TypeInfo, method);
    sub_1BC3008(&StringLiteral_6143/*"Event/Submarine"*/, v3);
    byte_4AFEA6F = 1;
  }
  v4 = sub_1BC30B0(string___TypeInfo, 1LL);
  if ( !v4 )
    sub_1BC3264(0LL, v5);
  v8 = (struct System_String_array *)v4;
  if ( !*(_DWORD *)(v4 + 24) )
    sub_1BC326C(v4, v5, v6);
  v9 = StringLiteral_6143/*"Event/Submarine"*/;
  *(_QWORD *)(v4 + 32) = StringLiteral_6143/*"Event/Submarine"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v4 + 32), v9, v6, v7);
  this->fields.loadAssetNames = v8;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.loadAssetNames, (int32_t)v8, v10, v11);
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
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4AFEA6B & 1) == 0 )
  {
    sub_1BC3008(&SubmarineMapAssetManager__CoLoadAssets_d__69_TypeInfo, *(_QWORD *)&eventId);
    byte_4AFEA6B = 1;
  }
  v7 = sub_1BC3254(SubmarineMapAssetManager__CoLoadAssets_d__69_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 32) = this;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v7 + 32), (int32_t)this, v8, v9);
  *(_DWORD *)(v7 + 40) = eventId;
  *(_QWORD *)(v7 + 48) = finishCallback;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v7 + 48), (int32_t)finishCallback, v10, v11);
  return (System_Collections_IEnumerator_o *)v7;
}


void __fastcall SubmarineMapAssetManager__Finish(SubmarineMapAssetManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_Dictionary_int__GameObject__o *scannerPrefabDict; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  struct UnityEngine_GameObject_o **p_AnimationSkipEFfectPrefab_k__BackingField; // x19
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  System_String_array *v38; // x19

  if ( (byte_4AFEA6E & 1) == 0 )
  {
    sub_1BC3008(&AssetManager_TypeInfo, method);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_int__GameObject__Clear__, v3);
    byte_4AFEA6E = 1;
  }
  scannerPrefabDict = this->fields.scannerPrefabDict;
  if ( !scannerPrefabDict
    || (System_Collections_Generic_Dictionary_int__object___Clear(
          (System_Collections_Generic_Dictionary_int__object__o *)scannerPrefabDict,
          (const MethodInfo_33086DC *)Method_System_Collections_Generic_Dictionary_int__GameObject__Clear__),
        (scannerPrefabDict = this->fields.scanRangeNotificatorPrefabDict) == 0LL) )
  {
    sub_1BC3264(scannerPrefabDict, method);
  }
  System_Collections_Generic_Dictionary_int__object___Clear(
    (System_Collections_Generic_Dictionary_int__object__o *)scannerPrefabDict,
    (const MethodInfo_33086DC *)Method_System_Collections_Generic_Dictionary_int__GameObject__Clear__);
  this->fields._PanelPrefab_k__BackingField = 0LL;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields, 0, v5, v6);
  this->fields._GridLinePrefab_k__BackingField = 0LL;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields._GridLinePrefab_k__BackingField, 0, v7, v8);
  this->fields._PanelContainerPrefab_k__BackingField = 0LL;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields._PanelContainerPrefab_k__BackingField, 0, v9, v10);
  this->fields._EffectContainerPrefab_k__BackingField = 0LL;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields._EffectContainerPrefab_k__BackingField, 0, v11, v12);
  this->fields._ClosedPanelTexture_k__BackingField = 0LL;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields._ClosedPanelTexture_k__BackingField, 0, v13, v14);
  this->fields._GridTexture_k__BackingField = 0LL;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields._GridTexture_k__BackingField, 0, v15, v16);
  this->fields._EffectScannedPanelPrefab_k__BackingField = 0LL;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields._EffectScannedPanelPrefab_k__BackingField, 0, v17, v18);
  this->fields._EffectSelectedPanelPrefab_k__BackingField = 0LL;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields._EffectSelectedPanelPrefab_k__BackingField, 0, v19, v20);
  this->fields._EffectScannablePanelPrafab_k__BackingField = 0LL;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields._EffectScannablePanelPrafab_k__BackingField, 0, v21, v22);
  this->fields._EffectScanObstaclePanelPrafab_k__BackingField = 0LL;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields._EffectScanObstaclePanelPrafab_k__BackingField, 0, v23, v24);
  this->fields._ScanProcessPreventedPrafab_k__BackingField = 0LL;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields._ScanProcessPreventedPrafab_k__BackingField, 0, v25, v26);
  this->fields._SelectScannerDialogPrefab_k__BackingField = 0LL;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields._SelectScannerDialogPrefab_k__BackingField, 0, v27, v28);
  this->fields._ScanConfirmDialogPrefab_k__BackingField = 0LL;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields._ScanConfirmDialogPrefab_k__BackingField, 0, v29, v30);
  this->fields._NewScannerDialogPrefab_k__BackingField = 0LL;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields._NewScannerDialogPrefab_k__BackingField, 0, v31, v32);
  this->fields._Settings_k__BackingField = 0LL;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields._Settings_k__BackingField, 0, v33, v34);
  this->fields._AnimationSkipEFfectPrefab_k__BackingField = 0LL;
  p_AnimationSkipEFfectPrefab_k__BackingField = &this->fields._AnimationSkipEFfectPrefab_k__BackingField;
  sub_1BC2FAC((CGThumbnailListItem_o *)p_AnimationSkipEFfectPrefab_k__BackingField, 0, v36, v37);
  v38 = (System_String_array *)p_AnimationSkipEFfectPrefab_k__BackingField[3];
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAssetStorage_39580320(v38, 0LL);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall SubmarineMapAssetManager__GetScanAnimObjectPrefab(
        SubmarineMapAssetManager_o *this,
        int32_t scanObjectId,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_int__GameObject__o *scannerPrefabDict; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4AFEA6C & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_int__GameObject__TryGetValue__, *(_QWORD *)&scanObjectId);
    byte_4AFEA6C = 1;
  }
  value = 0LL;
  scannerPrefabDict = this->fields.scannerPrefabDict;
  if ( !scannerPrefabDict )
    sub_1BC3264(0LL, *(_QWORD *)&scanObjectId);
  System_Collections_Generic_Dictionary_int__object___TryGetValue(
    (System_Collections_Generic_Dictionary_int__object__o *)scannerPrefabDict,
    scanObjectId,
    &value,
    (const MethodInfo_3309CE0 *)Method_System_Collections_Generic_Dictionary_int__GameObject__TryGetValue__);
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

  if ( (byte_4AFEA6D & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_int__GameObject__TryGetValue__, *(_QWORD *)&scanObjectId);
    byte_4AFEA6D = 1;
  }
  value = 0LL;
  scanRangeNotificatorPrefabDict = this->fields.scanRangeNotificatorPrefabDict;
  if ( !scanRangeNotificatorPrefabDict )
    sub_1BC3264(0LL, *(_QWORD *)&scanObjectId);
  System_Collections_Generic_Dictionary_int__object___TryGetValue(
    (System_Collections_Generic_Dictionary_int__object__o *)scanRangeNotificatorPrefabDict,
    scanObjectId,
    &value,
    (const MethodInfo_3309CE0 *)Method_System_Collections_Generic_Dictionary_int__GameObject__TryGetValue__);
  return (UnityEngine_GameObject_o *)value;
}


void __fastcall SubmarineMapAssetManager__Initialize(SubmarineMapAssetManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_Dictionary_int__object__o *v4; // x20
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  System_Collections_Generic_Dictionary_int__object__o *v7; // x20
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4AFEA69 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_int__GameObject___ctor__, method);
    sub_1BC3008(&System_Collections_Generic_Dictionary_int__GameObject__TypeInfo, v3);
    byte_4AFEA69 = 1;
  }
  v4 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BC3254(System_Collections_Generic_Dictionary_int__GameObject__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v4,
    (const MethodInfo_3307B80 *)Method_System_Collections_Generic_Dictionary_int__GameObject___ctor__);
  this->fields.scannerPrefabDict = (struct System_Collections_Generic_Dictionary_int__GameObject__o *)v4;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.scannerPrefabDict, (int32_t)v4, v5, v6);
  v7 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BC3254(System_Collections_Generic_Dictionary_int__GameObject__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v7,
    (const MethodInfo_3307B80 *)Method_System_Collections_Generic_Dictionary_int__GameObject___ctor__);
  this->fields.scanRangeNotificatorPrefabDict = (struct System_Collections_Generic_Dictionary_int__GameObject__o *)v7;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.scanRangeNotificatorPrefabDict, (int32_t)v7, v8, v9);
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
  Il2CppObject *Object_object__50213776; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t v16; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4AFEA6A & 1) == 0 )
  {
    sub_1BC3008(&Method_AssetData_GetObject_Texture2D____76809696, assetData);
    sub_1BC3008(&int_TypeInfo, v8);
    sub_1BC3008(&StringLiteral_24834/*"{0:D6}_ClosedPanelTexture"*/, v9);
    byte_4AFEA6A = 1;
  }
  v16 = mapId;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v16, *(_QWORD *)&mapId, method, v4);
  v11 = System_String__Format((System_String_o *)StringLiteral_24834/*"{0:D6}_ClosedPanelTexture"*/, v10, 0LL);
  if ( !assetData )
    sub_1BC3264(v11, v12);
  Object_object__50213776 = AssetData__GetObject_object__50213776(
                              assetData,
                              v11,
                              (const MethodInfo_2FE3390 *)Method_AssetData_GetObject_Texture2D____76809696);
  this->fields._ClosedPanelTexture_k__BackingField = (struct UnityEngine_Texture2D_o *)Object_object__50213776;
  sub_1BC2FAC(
    (CGThumbnailListItem_o *)&this->fields._ClosedPanelTexture_k__BackingField,
    (int32_t)Object_object__50213776,
    v14,
    v15);
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
  const MethodInfo *v3; // x3

  this->fields._AnimationSkipEFfectPrefab_k__BackingField = value;
  sub_1BC2FAC(
    (CGThumbnailListItem_o *)&this->fields._AnimationSkipEFfectPrefab_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall SubmarineMapAssetManager__set_ClosedPanelTexture(
        SubmarineMapAssetManager_o *this,
        UnityEngine_Texture2D_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._ClosedPanelTexture_k__BackingField = value;
  sub_1BC2FAC(
    (CGThumbnailListItem_o *)&this->fields._ClosedPanelTexture_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall SubmarineMapAssetManager__set_EffectContainerPrefab(
        SubmarineMapAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._EffectContainerPrefab_k__BackingField = value;
  sub_1BC2FAC(
    (CGThumbnailListItem_o *)&this->fields._EffectContainerPrefab_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall SubmarineMapAssetManager__set_EffectScanObstaclePanelPrafab(
        SubmarineMapAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._EffectScanObstaclePanelPrafab_k__BackingField = value;
  sub_1BC2FAC(
    (CGThumbnailListItem_o *)&this->fields._EffectScanObstaclePanelPrafab_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall SubmarineMapAssetManager__set_EffectScannablePanelPrafab(
        SubmarineMapAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._EffectScannablePanelPrafab_k__BackingField = value;
  sub_1BC2FAC(
    (CGThumbnailListItem_o *)&this->fields._EffectScannablePanelPrafab_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall SubmarineMapAssetManager__set_EffectScannedPanelPrefab(
        SubmarineMapAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._EffectScannedPanelPrefab_k__BackingField = value;
  sub_1BC2FAC(
    (CGThumbnailListItem_o *)&this->fields._EffectScannedPanelPrefab_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall SubmarineMapAssetManager__set_EffectSelectedPanelPrefab(
        SubmarineMapAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._EffectSelectedPanelPrefab_k__BackingField = value;
  sub_1BC2FAC(
    (CGThumbnailListItem_o *)&this->fields._EffectSelectedPanelPrefab_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall SubmarineMapAssetManager__set_GridLinePrefab(
        SubmarineMapAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._GridLinePrefab_k__BackingField = value;
  sub_1BC2FAC(
    (CGThumbnailListItem_o *)&this->fields._GridLinePrefab_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall SubmarineMapAssetManager__set_GridTexture(
        SubmarineMapAssetManager_o *this,
        UnityEngine_Texture2D_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._GridTexture_k__BackingField = value;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields._GridTexture_k__BackingField, (int32_t)value, (int32_t)method, v3);
}


void __fastcall SubmarineMapAssetManager__set_NewScannerDialogPrefab(
        SubmarineMapAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._NewScannerDialogPrefab_k__BackingField = value;
  sub_1BC2FAC(
    (CGThumbnailListItem_o *)&this->fields._NewScannerDialogPrefab_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall SubmarineMapAssetManager__set_PanelContainerPrefab(
        SubmarineMapAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._PanelContainerPrefab_k__BackingField = value;
  sub_1BC2FAC(
    (CGThumbnailListItem_o *)&this->fields._PanelContainerPrefab_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall SubmarineMapAssetManager__set_PanelPrefab(
        SubmarineMapAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._PanelPrefab_k__BackingField = value;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields, (int32_t)value, (int32_t)method, v3);
}


void __fastcall SubmarineMapAssetManager__set_ScanConfirmDialogPrefab(
        SubmarineMapAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._ScanConfirmDialogPrefab_k__BackingField = value;
  sub_1BC2FAC(
    (CGThumbnailListItem_o *)&this->fields._ScanConfirmDialogPrefab_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall SubmarineMapAssetManager__set_ScanProcessPreventedPrafab(
        SubmarineMapAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._ScanProcessPreventedPrafab_k__BackingField = value;
  sub_1BC2FAC(
    (CGThumbnailListItem_o *)&this->fields._ScanProcessPreventedPrafab_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall SubmarineMapAssetManager__set_SelectScannerDialogPrefab(
        SubmarineMapAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._SelectScannerDialogPrefab_k__BackingField = value;
  sub_1BC2FAC(
    (CGThumbnailListItem_o *)&this->fields._SelectScannerDialogPrefab_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall SubmarineMapAssetManager__set_Settings(
        SubmarineMapAssetManager_o *this,
        SubmarineSettings_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._Settings_k__BackingField = value;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields._Settings_k__BackingField, (int32_t)value, (int32_t)method, v3);
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
  CGThumbnailListItem_o *p__2__current; // x24
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  System_String_array *loadAssetNames; // x20
  __int64 v51; // x2
  AssetData_o *v52; // x20
  Il2CppObject *Object_object__50213776; // x0
  int32_t v54; // w2
  const MethodInfo *v55; // x3
  Il2CppObject *v56; // x0
  int32_t v57; // w2
  const MethodInfo *v58; // x3
  Il2CppObject *v59; // x0
  int32_t v60; // w2
  const MethodInfo *v61; // x3
  Il2CppObject *v62; // x0
  int32_t v63; // w2
  const MethodInfo *v64; // x3
  Il2CppObject *v65; // x0
  int32_t v66; // w2
  const MethodInfo *v67; // x3
  Il2CppObject *v68; // x0
  int32_t v69; // w2
  const MethodInfo *v70; // x3
  Il2CppObject *v71; // x0
  int32_t v72; // w2
  const MethodInfo *v73; // x3
  Il2CppObject *v74; // x0
  int32_t v75; // w2
  const MethodInfo *v76; // x3
  Il2CppObject *v77; // x0
  int32_t v78; // w2
  const MethodInfo *v79; // x3
  Il2CppObject *v80; // x0
  int32_t v81; // w2
  const MethodInfo *v82; // x3
  int32_t v83; // w2
  const MethodInfo *v84; // x3
  Il2CppObject *v85; // x0
  int32_t v86; // w2
  const MethodInfo *v87; // x3
  Il2CppObject *v88; // x0
  int32_t v89; // w2
  const MethodInfo *v90; // x3
  Il2CppObject *v91; // x0
  int32_t v92; // w2
  const MethodInfo *v93; // x3
  Il2CppObject *v94; // x0
  int32_t v95; // w2
  const MethodInfo *v96; // x3
  System_Collections_Generic_IEnumerable_TSource__o *ListByEventId; // x21
  SubmarineMapAssetManager___c_c *v98; // x8
  System_Func_object__int__o *_9__69_2; // x22
  Il2CppObject *v100; // x23
  struct SubmarineMapAssetManager___c_StaticFields *static_fields; // x0
  int32_t v102; // w2
  const MethodInfo *v103; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v104; // x21
  System_Text_RegularExpressions_Regex_o *v105; // x22
  Il2CppObject *_2__current; // x8
  SubmarineMapAssetManager__CoLoadAssets_d__69_o *v107; // x23
  unsigned __int64 v108; // x29
  struct SubmarineMapAssetManager_o **v109; // x28
  System_String_o *v110; // x24
  SubmarineMapAssetManager__CoLoadAssets_d__69_o *v111; // x25
  System_String_o *v112; // x0
  int32_t v113; // w25
  Il2CppObject *v114; // x24
  System_Text_RegularExpressions_Regex_o *v115; // x22
  Il2CppObject *v116; // x8
  SubmarineMapAssetManager__CoLoadAssets_d__69_o *v117; // x23
  unsigned __int64 v118; // x28
  struct SubmarineMapAssetManager_o **p__4__this; // x29
  System_String_o *v120; // x24
  SubmarineMapAssetManager__CoLoadAssets_d__69_o *v121; // x25
  System_String_o *Value; // x0
  int32_t v123; // w25
  Il2CppObject *v124; // x24
  System_Action_o *finishCallback; // x0
  SubmarineMapAssetManager__CoLoadAssets_d__69_o *v127; // [xsp+8h] [xbp-68h]

  v2 = this;
  if ( (byte_4AFEA71 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, method);
    sub_1BC3008(&Method_AssetData_GetObject_GameObject____76809672, v3);
    sub_1BC3008(&Method_AssetData_GetObject_SubmarineSettings___, v4);
    sub_1BC3008(&Method_AssetData_GetObject_Texture2D____76809696, v5);
    sub_1BC3008(&AssetManager_TypeInfo, v6);
    sub_1BC3008(&Method_DataManager_GetMasterData_EventPanelScanMaster___, v7);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_int__GameObject__set_Item__, v8);
    sub_1BC3008(&Method_System_Linq_Enumerable_Contains_int___, v9);
    sub_1BC3008(&Method_System_Linq_Enumerable_Select_EventPanelScanEntity__int___, v10);
    sub_1BC3008(&System_Func_bool__TypeInfo, v11);
    sub_1BC3008(&System_Func_EventPanelScanEntity__int__TypeInfo, v12);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v13);
    sub_1BC3008(&System_Text_RegularExpressions_Regex_TypeInfo, v14);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_1BC3008(&Method_SubmarineMapAssetManager___c__CoLoadAssets_b__69_2__, v16);
    sub_1BC3008(&Method_SubmarineMapAssetManager___c__DisplayClass69_0__CoLoadAssets_b__0__, v17);
    sub_1BC3008(&Method_SubmarineMapAssetManager___c__DisplayClass69_0__CoLoadAssets_b__1__, v18);
    sub_1BC3008(&SubmarineMapAssetManager___c__DisplayClass69_0_TypeInfo, v19);
    sub_1BC3008(&SubmarineMapAssetManager___c_TypeInfo, v20);
    sub_1BC3008(&UnityEngine_WaitUntil_TypeInfo, v21);
    sub_1BC3008(&StringLiteral_5870/*"EffectScannedPanel"*/, v22);
    sub_1BC3008(&StringLiteral_12490/*"Scanner_(?<ID>\\d+)"*/, v23);
    sub_1BC3008(&StringLiteral_13026/*"SubmarineScanConfirmDialog"*/, v24);
    sub_1BC3008(&StringLiteral_18621/*"ef_animation_skip"*/, v25);
    sub_1BC3008(&StringLiteral_13024/*"SubmarinePanel"*/, v26);
    sub_1BC3008(&StringLiteral_13028/*"SubmarineSelectScannerDialog"*/, v27);
    sub_1BC3008(&StringLiteral_13017/*"SubmarineEffectScanObstaclePanel"*/, v28);
    sub_1BC3008(&StringLiteral_13020/*"SubmarineGridLine"*/, v29);
    sub_1BC3008(&StringLiteral_13025/*"SubmarinePanelContainer"*/, v30);
    sub_1BC3008(&StringLiteral_13027/*"SubmarineScanRangeNotificator_(?<ID>\\d+)"*/, v31);
    sub_1BC3008(&StringLiteral_13023/*"SubmarineNewScannerDialog"*/, v32);
    sub_1BC3008(&StringLiteral_13021/*"SubmarineGridTexture"*/, v33);
    sub_1BC3008(&StringLiteral_13019/*"SubmarineEffectSelectedPanel"*/, v34);
    sub_1BC3008(&StringLiteral_13016/*"SubmarineEffectContainer"*/, v35);
    sub_1BC3008(&StringLiteral_13018/*"SubmarineEffectScannablePanel"*/, v36);
    sub_1BC3008(&StringLiteral_7349/*"ID"*/, v37);
    this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)sub_1BC3008(&StringLiteral_13029/*"SubmarineSettings"*/, v38);
    byte_4AFEA71 = 1;
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
      this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)AssetManager__getAssetStorage_39579352(
                                                                 loadAssetNames,
                                                                 0LL);
      if ( this )
      {
        if ( !LODWORD(this->fields.__2__current) )
          goto LABEL_61;
        v52 = (AssetData_o *)this->fields.__4__this;
        if ( v52 )
        {
          Object_object__50213776 = AssetData__GetObject_object__50213776(
                                      (AssetData_o *)this->fields.__4__this,
                                      (System_String_o *)StringLiteral_13024/*"SubmarinePanel"*/,
                                      (const MethodInfo_2FE3390 *)Method_AssetData_GetObject_GameObject____76809672);
          _4__this->fields._PanelPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)Object_object__50213776;
          sub_1BC2FAC((CGThumbnailListItem_o *)&_4__this->fields, (int32_t)Object_object__50213776, v54, v55);
          v56 = AssetData__GetObject_object__50213776(
                  v52,
                  (System_String_o *)StringLiteral_13020/*"SubmarineGridLine"*/,
                  (const MethodInfo_2FE3390 *)Method_AssetData_GetObject_GameObject____76809672);
          _4__this->fields._GridLinePrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v56;
          sub_1BC2FAC(
            (CGThumbnailListItem_o *)&_4__this->fields._GridLinePrefab_k__BackingField,
            (int32_t)v56,
            v57,
            v58);
          v59 = AssetData__GetObject_object__50213776(
                  v52,
                  (System_String_o *)StringLiteral_13025/*"SubmarinePanelContainer"*/,
                  (const MethodInfo_2FE3390 *)Method_AssetData_GetObject_GameObject____76809672);
          _4__this->fields._PanelContainerPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v59;
          sub_1BC2FAC(
            (CGThumbnailListItem_o *)&_4__this->fields._PanelContainerPrefab_k__BackingField,
            (int32_t)v59,
            v60,
            v61);
          v62 = AssetData__GetObject_object__50213776(
                  v52,
                  (System_String_o *)StringLiteral_13016/*"SubmarineEffectContainer"*/,
                  (const MethodInfo_2FE3390 *)Method_AssetData_GetObject_GameObject____76809672);
          _4__this->fields._EffectContainerPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v62;
          sub_1BC2FAC(
            (CGThumbnailListItem_o *)&_4__this->fields._EffectContainerPrefab_k__BackingField,
            (int32_t)v62,
            v63,
            v64);
          v65 = AssetData__GetObject_object__50213776(
                  v52,
                  (System_String_o *)StringLiteral_5870/*"EffectScannedPanel"*/,
                  (const MethodInfo_2FE3390 *)Method_AssetData_GetObject_GameObject____76809672);
          _4__this->fields._EffectScannedPanelPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v65;
          sub_1BC2FAC(
            (CGThumbnailListItem_o *)&_4__this->fields._EffectScannedPanelPrefab_k__BackingField,
            (int32_t)v65,
            v66,
            v67);
          v68 = AssetData__GetObject_object__50213776(
                  v52,
                  (System_String_o *)StringLiteral_13019/*"SubmarineEffectSelectedPanel"*/,
                  (const MethodInfo_2FE3390 *)Method_AssetData_GetObject_GameObject____76809672);
          _4__this->fields._EffectSelectedPanelPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v68;
          sub_1BC2FAC(
            (CGThumbnailListItem_o *)&_4__this->fields._EffectSelectedPanelPrefab_k__BackingField,
            (int32_t)v68,
            v69,
            v70);
          v71 = AssetData__GetObject_object__50213776(
                  v52,
                  (System_String_o *)StringLiteral_13018/*"SubmarineEffectScannablePanel"*/,
                  (const MethodInfo_2FE3390 *)Method_AssetData_GetObject_GameObject____76809672);
          _4__this->fields._EffectScannablePanelPrafab_k__BackingField = (struct UnityEngine_GameObject_o *)v71;
          sub_1BC2FAC(
            (CGThumbnailListItem_o *)&_4__this->fields._EffectScannablePanelPrafab_k__BackingField,
            (int32_t)v71,
            v72,
            v73);
          v74 = AssetData__GetObject_object__50213776(
                  v52,
                  (System_String_o *)StringLiteral_13017/*"SubmarineEffectScanObstaclePanel"*/,
                  (const MethodInfo_2FE3390 *)Method_AssetData_GetObject_GameObject____76809672);
          _4__this->fields._EffectScanObstaclePanelPrafab_k__BackingField = (struct UnityEngine_GameObject_o *)v74;
          sub_1BC2FAC(
            (CGThumbnailListItem_o *)&_4__this->fields._EffectScanObstaclePanelPrafab_k__BackingField,
            (int32_t)v74,
            v75,
            v76);
          v77 = AssetData__GetObject_object__50213776(
                  v52,
                  (System_String_o *)StringLiteral_13021/*"SubmarineGridTexture"*/,
                  (const MethodInfo_2FE3390 *)Method_AssetData_GetObject_Texture2D____76809696);
          _4__this->fields._GridTexture_k__BackingField = (struct UnityEngine_Texture2D_o *)v77;
          sub_1BC2FAC((CGThumbnailListItem_o *)&_4__this->fields._GridTexture_k__BackingField, (int32_t)v77, v78, v79);
          v80 = AssetData__GetObject_object__50213776(
                  v52,
                  (System_String_o *)StringLiteral_13029/*"SubmarineSettings"*/,
                  (const MethodInfo_2FE3390 *)Method_AssetData_GetObject_SubmarineSettings___);
          _4__this->fields._Settings_k__BackingField = (struct SubmarineSettings_o *)v80;
          sub_1BC2FAC((CGThumbnailListItem_o *)&_4__this->fields._Settings_k__BackingField, (int32_t)v80, v81, v82);
          _4__this->fields._ScanProcessPreventedPrafab_k__BackingField = 0LL;
          sub_1BC2FAC(
            (CGThumbnailListItem_o *)&_4__this->fields._ScanProcessPreventedPrafab_k__BackingField,
            0,
            v83,
            v84);
          v85 = AssetData__GetObject_object__50213776(
                  v52,
                  (System_String_o *)StringLiteral_18621/*"ef_animation_skip"*/,
                  (const MethodInfo_2FE3390 *)Method_AssetData_GetObject_GameObject____76809672);
          _4__this->fields._AnimationSkipEFfectPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v85;
          sub_1BC2FAC(
            (CGThumbnailListItem_o *)&_4__this->fields._AnimationSkipEFfectPrefab_k__BackingField,
            (int32_t)v85,
            v86,
            v87);
          v88 = AssetData__GetObject_object__50213776(
                  v52,
                  (System_String_o *)StringLiteral_13028/*"SubmarineSelectScannerDialog"*/,
                  (const MethodInfo_2FE3390 *)Method_AssetData_GetObject_GameObject____76809672);
          _4__this->fields._SelectScannerDialogPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v88;
          sub_1BC2FAC(
            (CGThumbnailListItem_o *)&_4__this->fields._SelectScannerDialogPrefab_k__BackingField,
            (int32_t)v88,
            v89,
            v90);
          v91 = AssetData__GetObject_object__50213776(
                  v52,
                  (System_String_o *)StringLiteral_13026/*"SubmarineScanConfirmDialog"*/,
                  (const MethodInfo_2FE3390 *)Method_AssetData_GetObject_GameObject____76809672);
          _4__this->fields._ScanConfirmDialogPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v91;
          sub_1BC2FAC(
            (CGThumbnailListItem_o *)&_4__this->fields._ScanConfirmDialogPrefab_k__BackingField,
            (int32_t)v91,
            v92,
            v93);
          v94 = AssetData__GetObject_object__50213776(
                  v52,
                  (System_String_o *)StringLiteral_13023/*"SubmarineNewScannerDialog"*/,
                  (const MethodInfo_2FE3390 *)Method_AssetData_GetObject_GameObject____76809672);
          _4__this->fields._NewScannerDialogPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v94;
          sub_1BC2FAC(
            (CGThumbnailListItem_o *)&_4__this->fields._NewScannerDialogPrefab_k__BackingField,
            (int32_t)v94,
            v95,
            v96);
          this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( this )
          {
            this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)DataManager__GetMasterData_object_(
                                                                       (DataManager_o *)this,
                                                                       (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_EventPanelScanMaster___);
            if ( this )
            {
              ListByEventId = (System_Collections_Generic_IEnumerable_TSource__o *)EventPanelScanMaster__GetListByEventId(
                                                                                     (EventPanelScanMaster_o *)this,
                                                                                     v2->fields.eventId,
                                                                                     0LL);
              v98 = SubmarineMapAssetManager___c_TypeInfo;
              if ( !SubmarineMapAssetManager___c_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(SubmarineMapAssetManager___c_TypeInfo);
                v98 = SubmarineMapAssetManager___c_TypeInfo;
              }
              _9__69_2 = (System_Func_object__int__o *)v98->static_fields->__9__69_2;
              if ( !_9__69_2 )
              {
                if ( !v98->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(v98);
                  v98 = SubmarineMapAssetManager___c_TypeInfo;
                }
                v100 = (Il2CppObject *)v98->static_fields->__9;
                _9__69_2 = (System_Func_object__int__o *)sub_1BC3254(System_Func_EventPanelScanEntity__int__TypeInfo);
                System_Func_object__int____ctor(
                  _9__69_2,
                  v100,
                  Method_SubmarineMapAssetManager___c__CoLoadAssets_b__69_2__,
                  0LL);
                static_fields = SubmarineMapAssetManager___c_TypeInfo->static_fields;
                static_fields->__9__69_2 = (struct System_Func_EventPanelScanEntity__int__o *)_9__69_2;
                sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->__9__69_2, (int32_t)_9__69_2, v102, v103);
              }
              v104 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                            ListByEventId,
                                                                            (System_Func_TSource__TResult__o *)_9__69_2,
                                                                            (const MethodInfo_3035A44 *)Method_System_Linq_Enumerable_Select_EventPanelScanEntity__int___);
              v105 = (System_Text_RegularExpressions_Regex_o *)sub_1BC3254(System_Text_RegularExpressions_Regex_TypeInfo);
              System_Text_RegularExpressions_Regex___ctor(v105, (System_String_o *)StringLiteral_12490/*"Scanner_(?<ID>\\d+)"*/, 0LL);
              this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)AssetData__GetObjectNameList(v52, 0LL);
              if ( this )
              {
                _2__current = this->fields.__2__current;
                v107 = this;
                v127 = v2;
                if ( (int)_2__current < 1 )
                {
LABEL_40:
                  v115 = (System_Text_RegularExpressions_Regex_o *)sub_1BC3254(System_Text_RegularExpressions_Regex_TypeInfo);
                  System_Text_RegularExpressions_Regex___ctor(v115, (System_String_o *)StringLiteral_13027/*"SubmarineScanRangeNotificator_(?<ID>\\d+)"*/, 0LL);
                  this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)AssetData__GetObjectNameList(v52, 0LL);
                  if ( !this )
                    goto LABEL_60;
                  v116 = this->fields.__2__current;
                  v117 = this;
                  if ( (int)v116 < 1 )
                  {
LABEL_56:
                    finishCallback = v127->fields.finishCallback;
                    if ( finishCallback )
                      ActionExtensions__Call(finishCallback, 0LL);
                    return 0;
                  }
                  v118 = 0LL;
                  p__4__this = &this->fields.__4__this;
                  while ( v118 < (unsigned int)v116 )
                  {
                    if ( !v115 )
                      goto LABEL_60;
                    v120 = (System_String_o *)p__4__this[v118];
                    this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)System_Text_RegularExpressions_Regex__Match_68861036(
                                                                               v115,
                                                                               v120,
                                                                               0LL);
                    if ( !this )
                      goto LABEL_60;
                    v121 = this;
                    this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)System_Text_RegularExpressions_Group__get_Success(
                                                                               (System_Text_RegularExpressions_Group_o *)this,
                                                                               0LL);
                    if ( ((unsigned __int8)this & 1) != 0 )
                    {
                      this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)((__int64 (__fastcall *)(SubmarineMapAssetManager__CoLoadAssets_d__69_o *, Il2CppMethodPointer))v121->klass->vtable._5_System_IDisposable_Dispose.method)(
                                                                                 v121,
                                                                                 v121->klass->vtable._6_MoveNext.methodPtr);
                      if ( !this )
                        goto LABEL_60;
                      this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)System_Text_RegularExpressions_GroupCollection__get_Item_68844080(
                                                                                 (System_Text_RegularExpressions_GroupCollection_o *)this,
                                                                                 (System_String_o *)StringLiteral_7349/*"ID"*/,
                                                                                 0LL);
                      if ( !this )
                        goto LABEL_60;
                      Value = System_Text_RegularExpressions_Capture__get_Value(
                                (System_Text_RegularExpressions_Capture_o *)this,
                                0LL);
                      v123 = System_Int32__Parse(Value, 0LL);
                      this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)System_Linq_Enumerable__Contains_int_(
                                                                                 v104,
                                                                                 v123,
                                                                                 (const MethodInfo_301AE3C *)Method_System_Linq_Enumerable_Contains_int___);
                      if ( ((unsigned __int8)this & 1) != 0 )
                      {
                        v124 = AssetData__GetObject_object__50213776(
                                 v52,
                                 v120,
                                 (const MethodInfo_2FE3390 *)Method_AssetData_GetObject_GameObject____76809672);
                        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                        this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)UnityEngine_Object__op_Equality(
                                                                                   (UnityEngine_Object_o *)v124,
                                                                                   0LL,
                                                                                   0LL);
                        if ( ((unsigned __int8)this & 1) == 0 )
                        {
                          this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)_4__this->fields.scanRangeNotificatorPrefabDict;
                          if ( !this )
                            goto LABEL_60;
                          System_Collections_Generic_Dictionary_int__object___set_Item(
                            (System_Collections_Generic_Dictionary_int__object__o *)this,
                            v123,
                            v124,
                            (const MethodInfo_3308540 *)Method_System_Collections_Generic_Dictionary_int__GameObject__set_Item__);
                        }
                      }
                    }
                    LODWORD(v116) = v117->fields.__2__current;
                    if ( (__int64)++v118 >= (int)v116 )
                      goto LABEL_56;
                  }
                }
                else
                {
                  v108 = 0LL;
                  v109 = &this->fields.__4__this;
                  while ( v108 < (unsigned int)_2__current )
                  {
                    if ( !v105 )
                      goto LABEL_60;
                    v110 = (System_String_o *)v109[v108];
                    this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)System_Text_RegularExpressions_Regex__Match_68861036(
                                                                               v105,
                                                                               v110,
                                                                               0LL);
                    if ( !this )
                      goto LABEL_60;
                    v111 = this;
                    this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)System_Text_RegularExpressions_Group__get_Success(
                                                                               (System_Text_RegularExpressions_Group_o *)this,
                                                                               0LL);
                    if ( ((unsigned __int8)this & 1) != 0 )
                    {
                      this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)((__int64 (__fastcall *)(SubmarineMapAssetManager__CoLoadAssets_d__69_o *, Il2CppMethodPointer))v111->klass->vtable._5_System_IDisposable_Dispose.method)(
                                                                                 v111,
                                                                                 v111->klass->vtable._6_MoveNext.methodPtr);
                      if ( !this )
                        goto LABEL_60;
                      this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)System_Text_RegularExpressions_GroupCollection__get_Item_68844080(
                                                                                 (System_Text_RegularExpressions_GroupCollection_o *)this,
                                                                                 (System_String_o *)StringLiteral_7349/*"ID"*/,
                                                                                 0LL);
                      if ( !this )
                        goto LABEL_60;
                      v112 = System_Text_RegularExpressions_Capture__get_Value(
                               (System_Text_RegularExpressions_Capture_o *)this,
                               0LL);
                      v113 = System_Int32__Parse(v112, 0LL);
                      this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)System_Linq_Enumerable__Contains_int_(
                                                                                 v104,
                                                                                 v113,
                                                                                 (const MethodInfo_301AE3C *)Method_System_Linq_Enumerable_Contains_int___);
                      if ( ((unsigned __int8)this & 1) != 0 )
                      {
                        v114 = AssetData__GetObject_object__50213776(
                                 v52,
                                 v110,
                                 (const MethodInfo_2FE3390 *)Method_AssetData_GetObject_GameObject____76809672);
                        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                        this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)UnityEngine_Object__op_Equality(
                                                                                   (UnityEngine_Object_o *)v114,
                                                                                   0LL,
                                                                                   0LL);
                        if ( ((unsigned __int8)this & 1) == 0 )
                        {
                          this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)_4__this->fields.scannerPrefabDict;
                          if ( !this )
                            goto LABEL_60;
                          System_Collections_Generic_Dictionary_int__object___set_Item(
                            (System_Collections_Generic_Dictionary_int__object__o *)this,
                            v113,
                            v114,
                            (const MethodInfo_3308540 *)Method_System_Collections_Generic_Dictionary_int__GameObject__set_Item__);
                        }
                      }
                    }
                    LODWORD(_2__current) = v107->fields.__2__current;
                    if ( (__int64)++v108 >= (int)_2__current )
                      goto LABEL_40;
                  }
                }
LABEL_61:
                sub_1BC326C(this, method, v51);
              }
            }
          }
        }
      }
    }
LABEL_60:
    sub_1BC3264(this, method);
  }
  if ( _1__state )
    return 0;
  v2->fields.__1__state = -1;
  v41 = sub_1BC3254(SubmarineMapAssetManager___c__DisplayClass69_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v41, 0LL);
  if ( !v41 )
    goto LABEL_60;
  *(_BYTE *)(v41 + 16) = 0;
  if ( !_4__this )
    goto LABEL_60;
  v42 = _4__this->fields.loadAssetNames;
  v43 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
  System_Action___ctor(
    v43,
    (Il2CppObject *)v41,
    Method_SubmarineMapAssetManager___c__DisplayClass69_0__CoLoadAssets_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  v44 = 1;
  AssetManager__loadAssetStorage_39577976(v42, v43, 1, 0LL);
  v45 = (System_Func_bool__o *)sub_1BC3254(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v45,
    (Il2CppObject *)v41,
    Method_SubmarineMapAssetManager___c__DisplayClass69_0__CoLoadAssets_b__1__,
    0LL);
  v46 = (UnityEngine_WaitUntil_o *)sub_1BC3254(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v46, v45, 0LL);
  v2->fields.__2__current = (Il2CppObject *)v46;
  p__2__current = (CGThumbnailListItem_o *)&v2->fields.__2__current;
  sub_1BC2FAC(p__2__current, (int32_t)v46, v48, v49);
  LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
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

  v2 = sub_1BC301C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BC3254(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BC301C(&Method_SubmarineMapAssetManager__CoLoadAssets_d__69_System_Collections_IEnumerator_Reset__);
  sub_1BC3130(v3, v4);
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
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4AFEA70 & 1) == 0 )
  {
    sub_1BC3008(&SubmarineMapAssetManager___c_TypeInfo, v1);
    byte_4AFEA70 = 1;
  }
  v2 = (Il2CppObject *)sub_1BC3254(SubmarineMapAssetManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  SubmarineMapAssetManager___c_TypeInfo->static_fields->__9 = (struct SubmarineMapAssetManager___c_o *)v2;
  sub_1BC2FAC((CGThumbnailListItem_o *)SubmarineMapAssetManager___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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
    sub_1BC3264(this, 0LL);
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