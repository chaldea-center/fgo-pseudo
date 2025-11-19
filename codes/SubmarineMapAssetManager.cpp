void SubmarineMapAssetManager___ctor(SubmarineMapAssetManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  struct System_String_array *v7; // x20
  int32_t v8; // w1
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4CB2C64 & 1) == 0 )
  {
    sub_1C6BA08(&string___TypeInfo);
    sub_1C6BA08(&StringLiteral_6189/*"Event/Submarine"*/);
    byte_4CB2C64 = 1;
  }
  v3 = sub_1C6BAB0(string___TypeInfo, 1);
  if ( !v3 )
    sub_1C6BC60(0, v4);
  v7 = (struct System_String_array *)v3;
  if ( !*(_DWORD *)(v3 + 24) )
    sub_1C6BC68(v3);
  v8 = StringLiteral_6189/*"Event/Submarine"*/;
  *(_QWORD *)(v3 + 32) = StringLiteral_6189/*"Event/Submarine"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v3 + 32), v8, v5, v6);
  this->fields.loadAssetNames = v7;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.loadAssetNames, (int32_t)v7, v9, v10);
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
  const MethodInfo *v9; // x3
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4CB2C60 & 1) == 0 )
  {
    sub_1C6BA08(&SubmarineMapAssetManager__CoLoadAssets_d__69_TypeInfo);
    byte_4CB2C60 = 1;
  }
  v7 = sub_1C6BC54(SubmarineMapAssetManager__CoLoadAssets_d__69_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 32) = this;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v7 + 32), (int32_t)this, v8, v9);
  *(_DWORD *)(v7 + 40) = eventId;
  *(_QWORD *)(v7 + 48) = finishCallback;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v7 + 48), (int32_t)finishCallback, v10, v11);
  return (System_Collections_IEnumerator_o *)v7;
}


void SubmarineMapAssetManager__Finish(SubmarineMapAssetManager_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_int__GameObject__o *scannerPrefabDict; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  struct UnityEngine_GameObject_o **p_AnimationSkipEFfectPrefab_k__BackingField; // x19
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  System_String_array *v37; // x19

  if ( (byte_4CB2C63 & 1) == 0 )
  {
    sub_1C6BA08(&AssetManager_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_int__GameObject__Clear__);
    byte_4CB2C63 = 1;
  }
  scannerPrefabDict = this->fields.scannerPrefabDict;
  if ( !scannerPrefabDict
    || (System_Collections_Generic_Dictionary_int__object___Clear(
          (System_Collections_Generic_Dictionary_int__object__o *)scannerPrefabDict,
          (const MethodInfo_3452678 *)Method_System_Collections_Generic_Dictionary_int__GameObject__Clear__),
        (scannerPrefabDict = this->fields.scanRangeNotificatorPrefabDict) == 0) )
  {
    sub_1C6BC60(scannerPrefabDict, method);
  }
  System_Collections_Generic_Dictionary_int__object___Clear(
    (System_Collections_Generic_Dictionary_int__object__o *)scannerPrefabDict,
    (const MethodInfo_3452678 *)Method_System_Collections_Generic_Dictionary_int__GameObject__Clear__);
  this->fields._PanelPrefab_k__BackingField = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields, 0, v4, v5);
  this->fields._GridLinePrefab_k__BackingField = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields._GridLinePrefab_k__BackingField, 0, v6, v7);
  this->fields._PanelContainerPrefab_k__BackingField = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields._PanelContainerPrefab_k__BackingField, 0, v8, v9);
  this->fields._EffectContainerPrefab_k__BackingField = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields._EffectContainerPrefab_k__BackingField, 0, v10, v11);
  this->fields._ClosedPanelTexture_k__BackingField = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields._ClosedPanelTexture_k__BackingField, 0, v12, v13);
  this->fields._GridTexture_k__BackingField = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields._GridTexture_k__BackingField, 0, v14, v15);
  this->fields._EffectScannedPanelPrefab_k__BackingField = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields._EffectScannedPanelPrefab_k__BackingField, 0, v16, v17);
  this->fields._EffectSelectedPanelPrefab_k__BackingField = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields._EffectSelectedPanelPrefab_k__BackingField, 0, v18, v19);
  this->fields._EffectScannablePanelPrafab_k__BackingField = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields._EffectScannablePanelPrafab_k__BackingField, 0, v20, v21);
  this->fields._EffectScanObstaclePanelPrafab_k__BackingField = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields._EffectScanObstaclePanelPrafab_k__BackingField, 0, v22, v23);
  this->fields._ScanProcessPreventedPrafab_k__BackingField = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields._ScanProcessPreventedPrafab_k__BackingField, 0, v24, v25);
  this->fields._SelectScannerDialogPrefab_k__BackingField = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields._SelectScannerDialogPrefab_k__BackingField, 0, v26, v27);
  this->fields._ScanConfirmDialogPrefab_k__BackingField = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields._ScanConfirmDialogPrefab_k__BackingField, 0, v28, v29);
  this->fields._NewScannerDialogPrefab_k__BackingField = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields._NewScannerDialogPrefab_k__BackingField, 0, v30, v31);
  this->fields._Settings_k__BackingField = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields._Settings_k__BackingField, 0, v32, v33);
  this->fields._AnimationSkipEFfectPrefab_k__BackingField = 0;
  p_AnimationSkipEFfectPrefab_k__BackingField = &this->fields._AnimationSkipEFfectPrefab_k__BackingField;
  sub_1C6B9AC((CGThumbnailListItem_o *)p_AnimationSkipEFfectPrefab_k__BackingField, 0, v35, v36);
  v37 = (System_String_array *)p_AnimationSkipEFfectPrefab_k__BackingField[3];
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAssetStorage_40774692(v37, 0);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *SubmarineMapAssetManager__GetScanAnimObjectPrefab(
        SubmarineMapAssetManager_o *this,
        int32_t scanObjectId,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_int__GameObject__o *scannerPrefabDict; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4CB2C61 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_int__GameObject__TryGetValue__);
    byte_4CB2C61 = 1;
  }
  value = 0;
  scannerPrefabDict = this->fields.scannerPrefabDict;
  if ( !scannerPrefabDict )
    sub_1C6BC60(0, *(_QWORD *)&scanObjectId);
  System_Collections_Generic_Dictionary_int__object___TryGetValue(
    (System_Collections_Generic_Dictionary_int__object__o *)scannerPrefabDict,
    scanObjectId,
    &value,
    (const MethodInfo_3453C7C *)Method_System_Collections_Generic_Dictionary_int__GameObject__TryGetValue__);
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

  if ( (byte_4CB2C62 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_int__GameObject__TryGetValue__);
    byte_4CB2C62 = 1;
  }
  value = 0;
  scanRangeNotificatorPrefabDict = this->fields.scanRangeNotificatorPrefabDict;
  if ( !scanRangeNotificatorPrefabDict )
    sub_1C6BC60(0, *(_QWORD *)&scanObjectId);
  System_Collections_Generic_Dictionary_int__object___TryGetValue(
    (System_Collections_Generic_Dictionary_int__object__o *)scanRangeNotificatorPrefabDict,
    scanObjectId,
    &value,
    (const MethodInfo_3453C7C *)Method_System_Collections_Generic_Dictionary_int__GameObject__TryGetValue__);
  return (UnityEngine_GameObject_o *)value;
}


void SubmarineMapAssetManager__Initialize(SubmarineMapAssetManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  System_Collections_Generic_Dictionary_int__object__o *v6; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4CB2C5E & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_int__GameObject___ctor__);
    sub_1C6BA08(&System_Collections_Generic_Dictionary_int__GameObject__TypeInfo);
    byte_4CB2C5E = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C6BC54(System_Collections_Generic_Dictionary_int__GameObject__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v3,
    (const MethodInfo_3451B1C *)Method_System_Collections_Generic_Dictionary_int__GameObject___ctor__);
  this->fields.scannerPrefabDict = (struct System_Collections_Generic_Dictionary_int__GameObject__o *)v3;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.scannerPrefabDict, (int32_t)v3, v4, v5);
  v6 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C6BC54(System_Collections_Generic_Dictionary_int__GameObject__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v6,
    (const MethodInfo_3451B1C *)Method_System_Collections_Generic_Dictionary_int__GameObject___ctor__);
  this->fields.scanRangeNotificatorPrefabDict = (struct System_Collections_Generic_Dictionary_int__GameObject__o *)v6;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.scanRangeNotificatorPrefabDict, (int32_t)v6, v7, v8);
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
  Il2CppObject *Object_object__51495936; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4CB2C5F & 1) == 0 )
  {
    sub_1C6BA08(&Method_AssetData_GetObject_Texture2D____78568232);
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&StringLiteral_25185/*"{0:D6}_ClosedPanelTexture"*/);
    byte_4CB2C5F = 1;
  }
  v13 = mapId;
  v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v13);
  v8 = System_String__Format((System_String_o *)StringLiteral_25185/*"{0:D6}_ClosedPanelTexture"*/, v7, 0);
  if ( !assetData )
    sub_1C6BC60(v8, v9);
  Object_object__51495936 = AssetData__GetObject_object__51495936(
                              assetData,
                              v8,
                              (const MethodInfo_311C400 *)Method_AssetData_GetObject_Texture2D____78568232);
  this->fields._ClosedPanelTexture_k__BackingField = (struct UnityEngine_Texture2D_o *)Object_object__51495936;
  sub_1C6B9AC(
    (CGThumbnailListItem_o *)&this->fields._ClosedPanelTexture_k__BackingField,
    (int32_t)Object_object__51495936,
    v11,
    v12);
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
  const MethodInfo *v3; // x3

  this->fields._AnimationSkipEFfectPrefab_k__BackingField = value;
  sub_1C6B9AC(
    (CGThumbnailListItem_o *)&this->fields._AnimationSkipEFfectPrefab_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void SubmarineMapAssetManager__set_ClosedPanelTexture(
        SubmarineMapAssetManager_o *this,
        UnityEngine_Texture2D_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._ClosedPanelTexture_k__BackingField = value;
  sub_1C6B9AC(
    (CGThumbnailListItem_o *)&this->fields._ClosedPanelTexture_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void SubmarineMapAssetManager__set_EffectContainerPrefab(
        SubmarineMapAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._EffectContainerPrefab_k__BackingField = value;
  sub_1C6B9AC(
    (CGThumbnailListItem_o *)&this->fields._EffectContainerPrefab_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void SubmarineMapAssetManager__set_EffectScanObstaclePanelPrafab(
        SubmarineMapAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._EffectScanObstaclePanelPrafab_k__BackingField = value;
  sub_1C6B9AC(
    (CGThumbnailListItem_o *)&this->fields._EffectScanObstaclePanelPrafab_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void SubmarineMapAssetManager__set_EffectScannablePanelPrafab(
        SubmarineMapAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._EffectScannablePanelPrafab_k__BackingField = value;
  sub_1C6B9AC(
    (CGThumbnailListItem_o *)&this->fields._EffectScannablePanelPrafab_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void SubmarineMapAssetManager__set_EffectScannedPanelPrefab(
        SubmarineMapAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._EffectScannedPanelPrefab_k__BackingField = value;
  sub_1C6B9AC(
    (CGThumbnailListItem_o *)&this->fields._EffectScannedPanelPrefab_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void SubmarineMapAssetManager__set_EffectSelectedPanelPrefab(
        SubmarineMapAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._EffectSelectedPanelPrefab_k__BackingField = value;
  sub_1C6B9AC(
    (CGThumbnailListItem_o *)&this->fields._EffectSelectedPanelPrefab_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void SubmarineMapAssetManager__set_GridLinePrefab(
        SubmarineMapAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._GridLinePrefab_k__BackingField = value;
  sub_1C6B9AC(
    (CGThumbnailListItem_o *)&this->fields._GridLinePrefab_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void SubmarineMapAssetManager__set_GridTexture(
        SubmarineMapAssetManager_o *this,
        UnityEngine_Texture2D_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._GridTexture_k__BackingField = value;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields._GridTexture_k__BackingField, (int32_t)value, (int32_t)method, v3);
}


void SubmarineMapAssetManager__set_NewScannerDialogPrefab(
        SubmarineMapAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._NewScannerDialogPrefab_k__BackingField = value;
  sub_1C6B9AC(
    (CGThumbnailListItem_o *)&this->fields._NewScannerDialogPrefab_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void SubmarineMapAssetManager__set_PanelContainerPrefab(
        SubmarineMapAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._PanelContainerPrefab_k__BackingField = value;
  sub_1C6B9AC(
    (CGThumbnailListItem_o *)&this->fields._PanelContainerPrefab_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void SubmarineMapAssetManager__set_PanelPrefab(
        SubmarineMapAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._PanelPrefab_k__BackingField = value;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields, (int32_t)value, (int32_t)method, v3);
}


void SubmarineMapAssetManager__set_ScanConfirmDialogPrefab(
        SubmarineMapAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._ScanConfirmDialogPrefab_k__BackingField = value;
  sub_1C6B9AC(
    (CGThumbnailListItem_o *)&this->fields._ScanConfirmDialogPrefab_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void SubmarineMapAssetManager__set_ScanProcessPreventedPrafab(
        SubmarineMapAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._ScanProcessPreventedPrafab_k__BackingField = value;
  sub_1C6B9AC(
    (CGThumbnailListItem_o *)&this->fields._ScanProcessPreventedPrafab_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void SubmarineMapAssetManager__set_SelectScannerDialogPrefab(
        SubmarineMapAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._SelectScannerDialogPrefab_k__BackingField = value;
  sub_1C6B9AC(
    (CGThumbnailListItem_o *)&this->fields._SelectScannerDialogPrefab_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void SubmarineMapAssetManager__set_Settings(
        SubmarineMapAssetManager_o *this,
        SubmarineSettings_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._Settings_k__BackingField = value;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields._Settings_k__BackingField, (int32_t)value, (int32_t)method, v3);
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
  CGThumbnailListItem_o *p__2__current; // x24
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  System_String_array *loadAssetNames; // x20
  AssetData_o *v15; // x20
  Il2CppObject *Object_object__51495936; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  Il2CppObject *v19; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  Il2CppObject *v22; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  Il2CppObject *v25; // x0
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  Il2CppObject *v28; // x0
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  Il2CppObject *v31; // x0
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  Il2CppObject *v34; // x0
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  Il2CppObject *v37; // x0
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  Il2CppObject *v40; // x0
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  Il2CppObject *v43; // x0
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  Il2CppObject *v48; // x0
  int32_t v49; // w2
  const MethodInfo *v50; // x3
  Il2CppObject *v51; // x0
  int32_t v52; // w2
  const MethodInfo *v53; // x3
  Il2CppObject *v54; // x0
  int32_t v55; // w2
  const MethodInfo *v56; // x3
  Il2CppObject *v57; // x0
  int32_t v58; // w2
  const MethodInfo *v59; // x3
  System_Collections_Generic_IEnumerable_TSource__o *ListByEventId; // x21
  SubmarineMapAssetManager___c_c *v61; // x8
  System_Func_object__int__o *_9__69_2; // x22
  Il2CppObject *v63; // x23
  struct SubmarineMapAssetManager___c_StaticFields *static_fields; // x0
  int32_t v65; // w2
  const MethodInfo *v66; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v67; // x21
  System_Text_RegularExpressions_Regex_o *v68; // x22
  Il2CppObject *_2__current; // x8
  SubmarineMapAssetManager__CoLoadAssets_d__69_o *v70; // x23
  unsigned __int64 v71; // x29
  struct SubmarineMapAssetManager_o **v72; // x28
  System_String_o *v73; // x24
  SubmarineMapAssetManager__CoLoadAssets_d__69_o *v74; // x25
  System_String_o *v75; // x0
  int32_t v76; // w25
  Il2CppObject *v77; // x24
  System_Text_RegularExpressions_Regex_o *v78; // x22
  Il2CppObject *v79; // x8
  SubmarineMapAssetManager__CoLoadAssets_d__69_o *v80; // x23
  unsigned __int64 v81; // x28
  struct SubmarineMapAssetManager_o **p__4__this; // x29
  System_String_o *v83; // x24
  SubmarineMapAssetManager__CoLoadAssets_d__69_o *v84; // x25
  System_String_o *Value; // x0
  int32_t v86; // w25
  Il2CppObject *v87; // x24
  System_Action_o *finishCallback; // x0
  SubmarineMapAssetManager__CoLoadAssets_d__69_o *v90; // [xsp+8h] [xbp-68h]

  v2 = this;
  if ( (byte_4CB2C66 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_AssetData_GetObject_GameObject____78568200);
    sub_1C6BA08(&Method_AssetData_GetObject_SubmarineSettings___);
    sub_1C6BA08(&Method_AssetData_GetObject_Texture2D____78568232);
    sub_1C6BA08(&AssetManager_TypeInfo);
    sub_1C6BA08(&Method_DataManager_GetMasterData_EventPanelScanMaster___);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_int__GameObject__set_Item__);
    sub_1C6BA08(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_Select_EventPanelScanEntity__int___);
    sub_1C6BA08(&System_Func_bool__TypeInfo);
    sub_1C6BA08(&System_Func_EventPanelScanEntity__int__TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&System_Text_RegularExpressions_Regex_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C6BA08(&Method_SubmarineMapAssetManager___c__CoLoadAssets_b__69_2__);
    sub_1C6BA08(&Method_SubmarineMapAssetManager___c__DisplayClass69_0__CoLoadAssets_b__0__);
    sub_1C6BA08(&Method_SubmarineMapAssetManager___c__DisplayClass69_0__CoLoadAssets_b__1__);
    sub_1C6BA08(&SubmarineMapAssetManager___c__DisplayClass69_0_TypeInfo);
    sub_1C6BA08(&SubmarineMapAssetManager___c_TypeInfo);
    sub_1C6BA08(&UnityEngine_WaitUntil_TypeInfo);
    sub_1C6BA08(&StringLiteral_5915/*"EffectScannedPanel"*/);
    sub_1C6BA08(&StringLiteral_12617/*"Scanner_(?<ID>\\d+)"*/);
    sub_1C6BA08(&StringLiteral_13155/*"SubmarineScanConfirmDialog"*/);
    sub_1C6BA08(&StringLiteral_18833/*"ef_animation_skip"*/);
    sub_1C6BA08(&StringLiteral_13153/*"SubmarinePanel"*/);
    sub_1C6BA08(&StringLiteral_13157/*"SubmarineSelectScannerDialog"*/);
    sub_1C6BA08(&StringLiteral_13146/*"SubmarineEffectScanObstaclePanel"*/);
    sub_1C6BA08(&StringLiteral_13149/*"SubmarineGridLine"*/);
    sub_1C6BA08(&StringLiteral_13154/*"SubmarinePanelContainer"*/);
    sub_1C6BA08(&StringLiteral_13156/*"SubmarineScanRangeNotificator_(?<ID>\\d+)"*/);
    sub_1C6BA08(&StringLiteral_13152/*"SubmarineNewScannerDialog"*/);
    sub_1C6BA08(&StringLiteral_13150/*"SubmarineGridTexture"*/);
    sub_1C6BA08(&StringLiteral_13148/*"SubmarineEffectSelectedPanel"*/);
    sub_1C6BA08(&StringLiteral_13145/*"SubmarineEffectContainer"*/);
    sub_1C6BA08(&StringLiteral_13147/*"SubmarineEffectScannablePanel"*/);
    sub_1C6BA08(&StringLiteral_7418/*"ID"*/);
    this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)sub_1C6BA08(&StringLiteral_13158/*"SubmarineSettings"*/);
    byte_4CB2C66 = 1;
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
      this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)AssetManager__getAssetStorage_40773704(loadAssetNames, 0);
      if ( this )
      {
        if ( !LODWORD(this->fields.__2__current) )
          goto LABEL_61;
        v15 = (AssetData_o *)this->fields.__4__this;
        if ( v15 )
        {
          Object_object__51495936 = AssetData__GetObject_object__51495936(
                                      (AssetData_o *)this->fields.__4__this,
                                      (System_String_o *)StringLiteral_13153/*"SubmarinePanel"*/,
                                      (const MethodInfo_311C400 *)Method_AssetData_GetObject_GameObject____78568200);
          _4__this->fields._PanelPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)Object_object__51495936;
          sub_1C6B9AC((CGThumbnailListItem_o *)&_4__this->fields, (int32_t)Object_object__51495936, v17, v18);
          v19 = AssetData__GetObject_object__51495936(
                  v15,
                  (System_String_o *)StringLiteral_13149/*"SubmarineGridLine"*/,
                  (const MethodInfo_311C400 *)Method_AssetData_GetObject_GameObject____78568200);
          _4__this->fields._GridLinePrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v19;
          sub_1C6B9AC(
            (CGThumbnailListItem_o *)&_4__this->fields._GridLinePrefab_k__BackingField,
            (int32_t)v19,
            v20,
            v21);
          v22 = AssetData__GetObject_object__51495936(
                  v15,
                  (System_String_o *)StringLiteral_13154/*"SubmarinePanelContainer"*/,
                  (const MethodInfo_311C400 *)Method_AssetData_GetObject_GameObject____78568200);
          _4__this->fields._PanelContainerPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v22;
          sub_1C6B9AC(
            (CGThumbnailListItem_o *)&_4__this->fields._PanelContainerPrefab_k__BackingField,
            (int32_t)v22,
            v23,
            v24);
          v25 = AssetData__GetObject_object__51495936(
                  v15,
                  (System_String_o *)StringLiteral_13145/*"SubmarineEffectContainer"*/,
                  (const MethodInfo_311C400 *)Method_AssetData_GetObject_GameObject____78568200);
          _4__this->fields._EffectContainerPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v25;
          sub_1C6B9AC(
            (CGThumbnailListItem_o *)&_4__this->fields._EffectContainerPrefab_k__BackingField,
            (int32_t)v25,
            v26,
            v27);
          v28 = AssetData__GetObject_object__51495936(
                  v15,
                  (System_String_o *)StringLiteral_5915/*"EffectScannedPanel"*/,
                  (const MethodInfo_311C400 *)Method_AssetData_GetObject_GameObject____78568200);
          _4__this->fields._EffectScannedPanelPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v28;
          sub_1C6B9AC(
            (CGThumbnailListItem_o *)&_4__this->fields._EffectScannedPanelPrefab_k__BackingField,
            (int32_t)v28,
            v29,
            v30);
          v31 = AssetData__GetObject_object__51495936(
                  v15,
                  (System_String_o *)StringLiteral_13148/*"SubmarineEffectSelectedPanel"*/,
                  (const MethodInfo_311C400 *)Method_AssetData_GetObject_GameObject____78568200);
          _4__this->fields._EffectSelectedPanelPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v31;
          sub_1C6B9AC(
            (CGThumbnailListItem_o *)&_4__this->fields._EffectSelectedPanelPrefab_k__BackingField,
            (int32_t)v31,
            v32,
            v33);
          v34 = AssetData__GetObject_object__51495936(
                  v15,
                  (System_String_o *)StringLiteral_13147/*"SubmarineEffectScannablePanel"*/,
                  (const MethodInfo_311C400 *)Method_AssetData_GetObject_GameObject____78568200);
          _4__this->fields._EffectScannablePanelPrafab_k__BackingField = (struct UnityEngine_GameObject_o *)v34;
          sub_1C6B9AC(
            (CGThumbnailListItem_o *)&_4__this->fields._EffectScannablePanelPrafab_k__BackingField,
            (int32_t)v34,
            v35,
            v36);
          v37 = AssetData__GetObject_object__51495936(
                  v15,
                  (System_String_o *)StringLiteral_13146/*"SubmarineEffectScanObstaclePanel"*/,
                  (const MethodInfo_311C400 *)Method_AssetData_GetObject_GameObject____78568200);
          _4__this->fields._EffectScanObstaclePanelPrafab_k__BackingField = (struct UnityEngine_GameObject_o *)v37;
          sub_1C6B9AC(
            (CGThumbnailListItem_o *)&_4__this->fields._EffectScanObstaclePanelPrafab_k__BackingField,
            (int32_t)v37,
            v38,
            v39);
          v40 = AssetData__GetObject_object__51495936(
                  v15,
                  (System_String_o *)StringLiteral_13150/*"SubmarineGridTexture"*/,
                  (const MethodInfo_311C400 *)Method_AssetData_GetObject_Texture2D____78568232);
          _4__this->fields._GridTexture_k__BackingField = (struct UnityEngine_Texture2D_o *)v40;
          sub_1C6B9AC((CGThumbnailListItem_o *)&_4__this->fields._GridTexture_k__BackingField, (int32_t)v40, v41, v42);
          v43 = AssetData__GetObject_object__51495936(
                  v15,
                  (System_String_o *)StringLiteral_13158/*"SubmarineSettings"*/,
                  (const MethodInfo_311C400 *)Method_AssetData_GetObject_SubmarineSettings___);
          _4__this->fields._Settings_k__BackingField = (struct SubmarineSettings_o *)v43;
          sub_1C6B9AC((CGThumbnailListItem_o *)&_4__this->fields._Settings_k__BackingField, (int32_t)v43, v44, v45);
          _4__this->fields._ScanProcessPreventedPrafab_k__BackingField = 0;
          sub_1C6B9AC(
            (CGThumbnailListItem_o *)&_4__this->fields._ScanProcessPreventedPrafab_k__BackingField,
            0,
            v46,
            v47);
          v48 = AssetData__GetObject_object__51495936(
                  v15,
                  (System_String_o *)StringLiteral_18833/*"ef_animation_skip"*/,
                  (const MethodInfo_311C400 *)Method_AssetData_GetObject_GameObject____78568200);
          _4__this->fields._AnimationSkipEFfectPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v48;
          sub_1C6B9AC(
            (CGThumbnailListItem_o *)&_4__this->fields._AnimationSkipEFfectPrefab_k__BackingField,
            (int32_t)v48,
            v49,
            v50);
          v51 = AssetData__GetObject_object__51495936(
                  v15,
                  (System_String_o *)StringLiteral_13157/*"SubmarineSelectScannerDialog"*/,
                  (const MethodInfo_311C400 *)Method_AssetData_GetObject_GameObject____78568200);
          _4__this->fields._SelectScannerDialogPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v51;
          sub_1C6B9AC(
            (CGThumbnailListItem_o *)&_4__this->fields._SelectScannerDialogPrefab_k__BackingField,
            (int32_t)v51,
            v52,
            v53);
          v54 = AssetData__GetObject_object__51495936(
                  v15,
                  (System_String_o *)StringLiteral_13155/*"SubmarineScanConfirmDialog"*/,
                  (const MethodInfo_311C400 *)Method_AssetData_GetObject_GameObject____78568200);
          _4__this->fields._ScanConfirmDialogPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v54;
          sub_1C6B9AC(
            (CGThumbnailListItem_o *)&_4__this->fields._ScanConfirmDialogPrefab_k__BackingField,
            (int32_t)v54,
            v55,
            v56);
          v57 = AssetData__GetObject_object__51495936(
                  v15,
                  (System_String_o *)StringLiteral_13152/*"SubmarineNewScannerDialog"*/,
                  (const MethodInfo_311C400 *)Method_AssetData_GetObject_GameObject____78568200);
          _4__this->fields._NewScannerDialogPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v57;
          sub_1C6B9AC(
            (CGThumbnailListItem_o *)&_4__this->fields._NewScannerDialogPrefab_k__BackingField,
            (int32_t)v57,
            v58,
            v59);
          this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( this )
          {
            this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)DataManager__GetMasterData_object_(
                                                                       (DataManager_o *)this,
                                                                       (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_EventPanelScanMaster___);
            if ( this )
            {
              ListByEventId = (System_Collections_Generic_IEnumerable_TSource__o *)EventPanelScanMaster__GetListByEventId(
                                                                                     (EventPanelScanMaster_o *)this,
                                                                                     v2->fields.eventId,
                                                                                     0);
              v61 = SubmarineMapAssetManager___c_TypeInfo;
              if ( !SubmarineMapAssetManager___c_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(SubmarineMapAssetManager___c_TypeInfo);
                v61 = SubmarineMapAssetManager___c_TypeInfo;
              }
              _9__69_2 = (System_Func_object__int__o *)v61->static_fields->__9__69_2;
              if ( !_9__69_2 )
              {
                if ( !v61->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(v61);
                  v61 = SubmarineMapAssetManager___c_TypeInfo;
                }
                v63 = (Il2CppObject *)v61->static_fields->__9;
                _9__69_2 = (System_Func_object__int__o *)sub_1C6BC54(System_Func_EventPanelScanEntity__int__TypeInfo);
                System_Func_object__int____ctor(
                  _9__69_2,
                  v63,
                  Method_SubmarineMapAssetManager___c__CoLoadAssets_b__69_2__,
                  0);
                static_fields = SubmarineMapAssetManager___c_TypeInfo->static_fields;
                static_fields->__9__69_2 = (struct System_Func_EventPanelScanEntity__int__o *)_9__69_2;
                sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__69_2, (int32_t)_9__69_2, v65, v66);
              }
              v67 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                           ListByEventId,
                                                                           (System_Func_TSource__TResult__o *)_9__69_2,
                                                                           (const MethodInfo_3171234 *)Method_System_Linq_Enumerable_Select_EventPanelScanEntity__int___);
              v68 = (System_Text_RegularExpressions_Regex_o *)sub_1C6BC54(System_Text_RegularExpressions_Regex_TypeInfo);
              System_Text_RegularExpressions_Regex___ctor_70487100(v68, (System_String_o *)StringLiteral_12617/*"Scanner_(?<ID>\\d+)"*/, 0);
              this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)AssetData__GetObjectNameList(v15, 0);
              if ( this )
              {
                _2__current = this->fields.__2__current;
                v70 = this;
                v90 = v2;
                if ( (int)_2__current < 1 )
                {
LABEL_40:
                  v78 = (System_Text_RegularExpressions_Regex_o *)sub_1C6BC54(System_Text_RegularExpressions_Regex_TypeInfo);
                  System_Text_RegularExpressions_Regex___ctor_70487100(v78, (System_String_o *)StringLiteral_13156/*"SubmarineScanRangeNotificator_(?<ID>\\d+)"*/, 0);
                  this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)AssetData__GetObjectNameList(v15, 0);
                  if ( !this )
                    goto LABEL_60;
                  v79 = this->fields.__2__current;
                  v80 = this;
                  if ( (int)v79 < 1 )
                  {
LABEL_56:
                    finishCallback = v90->fields.finishCallback;
                    if ( finishCallback )
                      ActionExtensions__Call(finishCallback, 0);
                    return 0;
                  }
                  v81 = 0;
                  p__4__this = &this->fields.__4__this;
                  while ( v81 < (unsigned int)v79 )
                  {
                    if ( !v78 )
                      goto LABEL_60;
                    v83 = (System_String_o *)p__4__this[v81];
                    this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)System_Text_RegularExpressions_Regex__Match_70482720(
                                                                               v78,
                                                                               v83,
                                                                               0);
                    if ( !this )
                      goto LABEL_60;
                    v84 = this;
                    this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)System_Text_RegularExpressions_Group__get_Success(
                                                                               (System_Text_RegularExpressions_Group_o *)this,
                                                                               0);
                    if ( ((unsigned __int8)this & 1) != 0 )
                    {
                      this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)((__int64 (__fastcall *)(SubmarineMapAssetManager__CoLoadAssets_d__69_o *, const MethodInfo *))v84->klass->vtable._5_System_IDisposable_Dispose.methodPtr)(
                                                                                 v84,
                                                                                 v84->klass->vtable._5_System_IDisposable_Dispose.method);
                      if ( !this )
                        goto LABEL_60;
                      this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)System_Text_RegularExpressions_GroupCollection__get_Item_70465764(
                                                                                 (System_Text_RegularExpressions_GroupCollection_o *)this,
                                                                                 (System_String_o *)StringLiteral_7418/*"ID"*/,
                                                                                 0);
                      if ( !this )
                        goto LABEL_60;
                      Value = System_Text_RegularExpressions_Capture__get_Value(
                                (System_Text_RegularExpressions_Capture_o *)this,
                                0);
                      v86 = System_Int32__Parse(Value, 0);
                      this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)System_Linq_Enumerable__Contains_int_(
                                                                                 v67,
                                                                                 v86,
                                                                                 (const MethodInfo_31583F4 *)Method_System_Linq_Enumerable_Contains_int___);
                      if ( ((unsigned __int8)this & 1) != 0 )
                      {
                        v87 = AssetData__GetObject_object__51495936(
                                v15,
                                v83,
                                (const MethodInfo_311C400 *)Method_AssetData_GetObject_GameObject____78568200);
                        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                        this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)UnityEngine_Object__op_Equality(
                                                                                   (UnityEngine_Object_o *)v87,
                                                                                   0,
                                                                                   0);
                        if ( ((unsigned __int8)this & 1) == 0 )
                        {
                          this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)_4__this->fields.scanRangeNotificatorPrefabDict;
                          if ( !this )
                            goto LABEL_60;
                          System_Collections_Generic_Dictionary_int__object___set_Item(
                            (System_Collections_Generic_Dictionary_int__object__o *)this,
                            v86,
                            v87,
                            (const MethodInfo_34524DC *)Method_System_Collections_Generic_Dictionary_int__GameObject__set_Item__);
                        }
                      }
                    }
                    LODWORD(v79) = v80->fields.__2__current;
                    if ( (__int64)++v81 >= (int)v79 )
                      goto LABEL_56;
                  }
                }
                else
                {
                  v71 = 0;
                  v72 = &this->fields.__4__this;
                  while ( v71 < (unsigned int)_2__current )
                  {
                    if ( !v68 )
                      goto LABEL_60;
                    v73 = (System_String_o *)v72[v71];
                    this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)System_Text_RegularExpressions_Regex__Match_70482720(
                                                                               v68,
                                                                               v73,
                                                                               0);
                    if ( !this )
                      goto LABEL_60;
                    v74 = this;
                    this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)System_Text_RegularExpressions_Group__get_Success(
                                                                               (System_Text_RegularExpressions_Group_o *)this,
                                                                               0);
                    if ( ((unsigned __int8)this & 1) != 0 )
                    {
                      this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)((__int64 (__fastcall *)(SubmarineMapAssetManager__CoLoadAssets_d__69_o *, const MethodInfo *))v74->klass->vtable._5_System_IDisposable_Dispose.methodPtr)(
                                                                                 v74,
                                                                                 v74->klass->vtable._5_System_IDisposable_Dispose.method);
                      if ( !this )
                        goto LABEL_60;
                      this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)System_Text_RegularExpressions_GroupCollection__get_Item_70465764(
                                                                                 (System_Text_RegularExpressions_GroupCollection_o *)this,
                                                                                 (System_String_o *)StringLiteral_7418/*"ID"*/,
                                                                                 0);
                      if ( !this )
                        goto LABEL_60;
                      v75 = System_Text_RegularExpressions_Capture__get_Value(
                              (System_Text_RegularExpressions_Capture_o *)this,
                              0);
                      v76 = System_Int32__Parse(v75, 0);
                      this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)System_Linq_Enumerable__Contains_int_(
                                                                                 v67,
                                                                                 v76,
                                                                                 (const MethodInfo_31583F4 *)Method_System_Linq_Enumerable_Contains_int___);
                      if ( ((unsigned __int8)this & 1) != 0 )
                      {
                        v77 = AssetData__GetObject_object__51495936(
                                v15,
                                v73,
                                (const MethodInfo_311C400 *)Method_AssetData_GetObject_GameObject____78568200);
                        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                        this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)UnityEngine_Object__op_Equality(
                                                                                   (UnityEngine_Object_o *)v77,
                                                                                   0,
                                                                                   0);
                        if ( ((unsigned __int8)this & 1) == 0 )
                        {
                          this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)_4__this->fields.scannerPrefabDict;
                          if ( !this )
                            goto LABEL_60;
                          System_Collections_Generic_Dictionary_int__object___set_Item(
                            (System_Collections_Generic_Dictionary_int__object__o *)this,
                            v76,
                            v77,
                            (const MethodInfo_34524DC *)Method_System_Collections_Generic_Dictionary_int__GameObject__set_Item__);
                        }
                      }
                    }
                    LODWORD(_2__current) = v70->fields.__2__current;
                    if ( (__int64)++v71 >= (int)_2__current )
                      goto LABEL_40;
                  }
                }
LABEL_61:
                sub_1C6BC68(this);
              }
            }
          }
        }
      }
    }
LABEL_60:
    sub_1C6BC60(this, method);
  }
  if ( _1__state )
    return 0;
  v2->fields.__1__state = -1;
  v5 = sub_1C6BC54(SubmarineMapAssetManager___c__DisplayClass69_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_60;
  *(_BYTE *)(v5 + 16) = 0;
  if ( !_4__this )
    goto LABEL_60;
  v6 = _4__this->fields.loadAssetNames;
  v7 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
  System_Action___ctor(
    v7,
    (Il2CppObject *)v5,
    Method_SubmarineMapAssetManager___c__DisplayClass69_0__CoLoadAssets_b__0__,
    0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  v8 = 1;
  AssetManager__loadAssetStorage_40772344(v6, v7, 1, 0);
  v9 = (System_Func_bool__o *)sub_1C6BC54(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_SubmarineMapAssetManager___c__DisplayClass69_0__CoLoadAssets_b__1__,
    0);
  v10 = (UnityEngine_WaitUntil_o *)sub_1C6BC54(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v10, v9, 0);
  v2->fields.__2__current = (Il2CppObject *)v10;
  p__2__current = (CGThumbnailListItem_o *)&v2->fields.__2__current;
  sub_1C6B9AC(p__2__current, (int32_t)v10, v12, v13);
  LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
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

  v2 = sub_1C6BA1C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C6BC54(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C6BA1C(&Method_SubmarineMapAssetManager__CoLoadAssets_d__69_System_Collections_IEnumerator_Reset__);
  sub_1C6BB30(v3, v4);
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
  const MethodInfo *v3; // x3

  if ( (byte_4CB2C65 & 1) == 0 )
  {
    sub_1C6BA08(&SubmarineMapAssetManager___c_TypeInfo);
    byte_4CB2C65 = 1;
  }
  v1 = (Il2CppObject *)sub_1C6BC54(SubmarineMapAssetManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  SubmarineMapAssetManager___c_TypeInfo->static_fields->__9 = (struct SubmarineMapAssetManager___c_o *)v1;
  sub_1C6B9AC((CGThumbnailListItem_o *)SubmarineMapAssetManager___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1C6BC60(this, 0);
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