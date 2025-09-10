void SubmarineMapAssetManager___ctor(SubmarineMapAssetManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  const MethodInfo *v6; // x3
  struct System_String_array *v7; // x20
  int32_t v8; // w1
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4C23CBB & 1) == 0 )
  {
    sub_1C2D490(&string___TypeInfo);
    sub_1C2D490(&StringLiteral_6190/*"Event/Submarine"*/);
    byte_4C23CBB = 1;
  }
  v3 = sub_1C2D538(string___TypeInfo, 1);
  if ( !v3 )
    sub_1C2D6EC(0, v4);
  v7 = (struct System_String_array *)v3;
  if ( !*(_DWORD *)(v3 + 24) )
    sub_1C2D6F4(v3, v4, v5);
  v8 = StringLiteral_6190/*"Event/Submarine"*/;
  *(_QWORD *)(v3 + 32) = StringLiteral_6190/*"Event/Submarine"*/;
  sub_1C2D434((CGThumbnailListItem_o *)(v3 + 32), v8, v5, v6);
  this->fields.loadAssetNames = v7;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.loadAssetNames, (int32_t)v7, v9, v10);
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

  if ( (byte_4C23CB7 & 1) == 0 )
  {
    sub_1C2D490(&SubmarineMapAssetManager__CoLoadAssets_d__69_TypeInfo);
    byte_4C23CB7 = 1;
  }
  v7 = sub_1C2D6DC(SubmarineMapAssetManager__CoLoadAssets_d__69_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 32) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v7 + 32), (int32_t)this, v8, v9);
  *(_DWORD *)(v7 + 40) = eventId;
  *(_QWORD *)(v7 + 48) = finishCallback;
  sub_1C2D434((CGThumbnailListItem_o *)(v7 + 48), (int32_t)finishCallback, v10, v11);
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

  if ( (byte_4C23CBA & 1) == 0 )
  {
    sub_1C2D490(&AssetManager_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__GameObject__Clear__);
    byte_4C23CBA = 1;
  }
  scannerPrefabDict = this->fields.scannerPrefabDict;
  if ( !scannerPrefabDict
    || (System_Collections_Generic_Dictionary_int__object___Clear(
          (System_Collections_Generic_Dictionary_int__object__o *)scannerPrefabDict,
          (const MethodInfo_33E1404 *)Method_System_Collections_Generic_Dictionary_int__GameObject__Clear__),
        (scannerPrefabDict = this->fields.scanRangeNotificatorPrefabDict) == 0) )
  {
    sub_1C2D6EC(scannerPrefabDict, method);
  }
  System_Collections_Generic_Dictionary_int__object___Clear(
    (System_Collections_Generic_Dictionary_int__object__o *)scannerPrefabDict,
    (const MethodInfo_33E1404 *)Method_System_Collections_Generic_Dictionary_int__GameObject__Clear__);
  this->fields._PanelPrefab_k__BackingField = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields, 0, v4, v5);
  this->fields._GridLinePrefab_k__BackingField = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields._GridLinePrefab_k__BackingField, 0, v6, v7);
  this->fields._PanelContainerPrefab_k__BackingField = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields._PanelContainerPrefab_k__BackingField, 0, v8, v9);
  this->fields._EffectContainerPrefab_k__BackingField = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields._EffectContainerPrefab_k__BackingField, 0, v10, v11);
  this->fields._ClosedPanelTexture_k__BackingField = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields._ClosedPanelTexture_k__BackingField, 0, v12, v13);
  this->fields._GridTexture_k__BackingField = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields._GridTexture_k__BackingField, 0, v14, v15);
  this->fields._EffectScannedPanelPrefab_k__BackingField = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields._EffectScannedPanelPrefab_k__BackingField, 0, v16, v17);
  this->fields._EffectSelectedPanelPrefab_k__BackingField = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields._EffectSelectedPanelPrefab_k__BackingField, 0, v18, v19);
  this->fields._EffectScannablePanelPrafab_k__BackingField = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields._EffectScannablePanelPrafab_k__BackingField, 0, v20, v21);
  this->fields._EffectScanObstaclePanelPrafab_k__BackingField = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields._EffectScanObstaclePanelPrafab_k__BackingField, 0, v22, v23);
  this->fields._ScanProcessPreventedPrafab_k__BackingField = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields._ScanProcessPreventedPrafab_k__BackingField, 0, v24, v25);
  this->fields._SelectScannerDialogPrefab_k__BackingField = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields._SelectScannerDialogPrefab_k__BackingField, 0, v26, v27);
  this->fields._ScanConfirmDialogPrefab_k__BackingField = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields._ScanConfirmDialogPrefab_k__BackingField, 0, v28, v29);
  this->fields._NewScannerDialogPrefab_k__BackingField = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields._NewScannerDialogPrefab_k__BackingField, 0, v30, v31);
  this->fields._Settings_k__BackingField = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields._Settings_k__BackingField, 0, v32, v33);
  this->fields._AnimationSkipEFfectPrefab_k__BackingField = 0;
  p_AnimationSkipEFfectPrefab_k__BackingField = &this->fields._AnimationSkipEFfectPrefab_k__BackingField;
  sub_1C2D434((CGThumbnailListItem_o *)p_AnimationSkipEFfectPrefab_k__BackingField, 0, v35, v36);
  v37 = (System_String_array *)p_AnimationSkipEFfectPrefab_k__BackingField[3];
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAssetStorage_40322260(v37, 0);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *SubmarineMapAssetManager__GetScanAnimObjectPrefab(
        SubmarineMapAssetManager_o *this,
        int32_t scanObjectId,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_int__GameObject__o *scannerPrefabDict; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C23CB8 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__GameObject__TryGetValue__);
    byte_4C23CB8 = 1;
  }
  value = 0;
  scannerPrefabDict = this->fields.scannerPrefabDict;
  if ( !scannerPrefabDict )
    sub_1C2D6EC(0, *(_QWORD *)&scanObjectId);
  System_Collections_Generic_Dictionary_int__object___TryGetValue(
    (System_Collections_Generic_Dictionary_int__object__o *)scannerPrefabDict,
    scanObjectId,
    &value,
    (const MethodInfo_33E2A08 *)Method_System_Collections_Generic_Dictionary_int__GameObject__TryGetValue__);
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

  if ( (byte_4C23CB9 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__GameObject__TryGetValue__);
    byte_4C23CB9 = 1;
  }
  value = 0;
  scanRangeNotificatorPrefabDict = this->fields.scanRangeNotificatorPrefabDict;
  if ( !scanRangeNotificatorPrefabDict )
    sub_1C2D6EC(0, *(_QWORD *)&scanObjectId);
  System_Collections_Generic_Dictionary_int__object___TryGetValue(
    (System_Collections_Generic_Dictionary_int__object__o *)scanRangeNotificatorPrefabDict,
    scanObjectId,
    &value,
    (const MethodInfo_33E2A08 *)Method_System_Collections_Generic_Dictionary_int__GameObject__TryGetValue__);
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

  if ( (byte_4C23CB5 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__GameObject___ctor__);
    sub_1C2D490(&System_Collections_Generic_Dictionary_int__GameObject__TypeInfo);
    byte_4C23CB5 = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C2D6DC(System_Collections_Generic_Dictionary_int__GameObject__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v3,
    (const MethodInfo_33E08A8 *)Method_System_Collections_Generic_Dictionary_int__GameObject___ctor__);
  this->fields.scannerPrefabDict = (struct System_Collections_Generic_Dictionary_int__GameObject__o *)v3;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.scannerPrefabDict, (int32_t)v3, v4, v5);
  v6 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C2D6DC(System_Collections_Generic_Dictionary_int__GameObject__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v6,
    (const MethodInfo_33E08A8 *)Method_System_Collections_Generic_Dictionary_int__GameObject___ctor__);
  this->fields.scanRangeNotificatorPrefabDict = (struct System_Collections_Generic_Dictionary_int__GameObject__o *)v6;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.scanRangeNotificatorPrefabDict, (int32_t)v6, v7, v8);
}


// local variable allocation has failed, the output may be wrong!
void SubmarineMapAssetManager__LoadMapObject(
        SubmarineMapAssetManager_o *this,
        AssetData_o *assetData,
        int32_t mapId,
        const MethodInfo *method)
{
  __int64 v4; // x4
  Il2CppObject *v8; // x0
  System_String_o *v9; // x0
  __int64 v10; // x1
  Il2CppObject *Object_object__51051712; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C23CB6 & 1) == 0 )
  {
    sub_1C2D490(&Method_AssetData_GetObject_Texture2D____77994112);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&StringLiteral_25052/*"{0:D6}_ClosedPanelTexture"*/);
    byte_4C23CB6 = 1;
  }
  v14 = mapId;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v14, *(_QWORD *)&mapId, method, v4);
  v9 = System_String__Format((System_String_o *)StringLiteral_25052/*"{0:D6}_ClosedPanelTexture"*/, v8, 0);
  if ( !assetData )
    sub_1C2D6EC(v9, v10);
  Object_object__51051712 = AssetData__GetObject_object__51051712(
                              assetData,
                              v9,
                              (const MethodInfo_30AFCC0 *)Method_AssetData_GetObject_Texture2D____77994112);
  this->fields._ClosedPanelTexture_k__BackingField = (struct UnityEngine_Texture2D_o *)Object_object__51051712;
  sub_1C2D434(
    (CGThumbnailListItem_o *)&this->fields._ClosedPanelTexture_k__BackingField,
    (int32_t)Object_object__51051712,
    v12,
    v13);
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
  sub_1C2D434(
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
  sub_1C2D434(
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
  sub_1C2D434(
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
  sub_1C2D434(
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
  sub_1C2D434(
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
  sub_1C2D434(
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
  sub_1C2D434(
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
  sub_1C2D434(
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
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields._GridTexture_k__BackingField, (int32_t)value, (int32_t)method, v3);
}


void SubmarineMapAssetManager__set_NewScannerDialogPrefab(
        SubmarineMapAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._NewScannerDialogPrefab_k__BackingField = value;
  sub_1C2D434(
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
  sub_1C2D434(
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
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields, (int32_t)value, (int32_t)method, v3);
}


void SubmarineMapAssetManager__set_ScanConfirmDialogPrefab(
        SubmarineMapAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._ScanConfirmDialogPrefab_k__BackingField = value;
  sub_1C2D434(
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
  sub_1C2D434(
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
  sub_1C2D434(
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
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields._Settings_k__BackingField, (int32_t)value, (int32_t)method, v3);
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
  __int64 v15; // x2
  AssetData_o *v16; // x20
  Il2CppObject *Object_object__51051712; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  Il2CppObject *v20; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  Il2CppObject *v23; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  Il2CppObject *v26; // x0
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  Il2CppObject *v29; // x0
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  Il2CppObject *v32; // x0
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  Il2CppObject *v35; // x0
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  Il2CppObject *v38; // x0
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  Il2CppObject *v41; // x0
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  Il2CppObject *v44; // x0
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  int32_t v47; // w2
  const MethodInfo *v48; // x3
  Il2CppObject *v49; // x0
  int32_t v50; // w2
  const MethodInfo *v51; // x3
  Il2CppObject *v52; // x0
  int32_t v53; // w2
  const MethodInfo *v54; // x3
  Il2CppObject *v55; // x0
  int32_t v56; // w2
  const MethodInfo *v57; // x3
  Il2CppObject *v58; // x0
  int32_t v59; // w2
  const MethodInfo *v60; // x3
  System_Collections_Generic_IEnumerable_TSource__o *ListByEventId; // x21
  SubmarineMapAssetManager___c_c *v62; // x8
  System_Func_object__int__o *_9__69_2; // x22
  Il2CppObject *v64; // x23
  struct SubmarineMapAssetManager___c_StaticFields *static_fields; // x0
  int32_t v66; // w2
  const MethodInfo *v67; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v68; // x21
  System_Text_RegularExpressions_Regex_o *v69; // x22
  Il2CppObject *_2__current; // x8
  SubmarineMapAssetManager__CoLoadAssets_d__69_o *v71; // x23
  unsigned __int64 v72; // x29
  struct SubmarineMapAssetManager_o **v73; // x28
  System_String_o *v74; // x24
  SubmarineMapAssetManager__CoLoadAssets_d__69_o *v75; // x25
  System_String_o *v76; // x0
  int32_t v77; // w25
  Il2CppObject *v78; // x24
  System_Text_RegularExpressions_Regex_o *v79; // x22
  Il2CppObject *v80; // x8
  SubmarineMapAssetManager__CoLoadAssets_d__69_o *v81; // x23
  unsigned __int64 v82; // x28
  struct SubmarineMapAssetManager_o **p__4__this; // x29
  System_String_o *v84; // x24
  SubmarineMapAssetManager__CoLoadAssets_d__69_o *v85; // x25
  System_String_o *Value; // x0
  int32_t v87; // w25
  Il2CppObject *v88; // x24
  System_Action_o *finishCallback; // x0
  SubmarineMapAssetManager__CoLoadAssets_d__69_o *v91; // [xsp+8h] [xbp-68h]

  v2 = this;
  if ( (byte_4C23CBD & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_AssetData_GetObject_GameObject____77994080);
    sub_1C2D490(&Method_AssetData_GetObject_SubmarineSettings___);
    sub_1C2D490(&Method_AssetData_GetObject_Texture2D____77994112);
    sub_1C2D490(&AssetManager_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_EventPanelScanMaster___);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__GameObject__set_Item__);
    sub_1C2D490(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C2D490(&Method_System_Linq_Enumerable_Select_EventPanelScanEntity__int___);
    sub_1C2D490(&System_Func_bool__TypeInfo);
    sub_1C2D490(&System_Func_EventPanelScanEntity__int__TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&System_Text_RegularExpressions_Regex_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&Method_SubmarineMapAssetManager___c__CoLoadAssets_b__69_2__);
    sub_1C2D490(&Method_SubmarineMapAssetManager___c__DisplayClass69_0__CoLoadAssets_b__0__);
    sub_1C2D490(&Method_SubmarineMapAssetManager___c__DisplayClass69_0__CoLoadAssets_b__1__);
    sub_1C2D490(&SubmarineMapAssetManager___c__DisplayClass69_0_TypeInfo);
    sub_1C2D490(&SubmarineMapAssetManager___c_TypeInfo);
    sub_1C2D490(&UnityEngine_WaitUntil_TypeInfo);
    sub_1C2D490(&StringLiteral_5916/*"EffectScannedPanel"*/);
    sub_1C2D490(&StringLiteral_12609/*"Scanner_(?<ID>\\d+)"*/);
    sub_1C2D490(&StringLiteral_13150/*"SubmarineScanConfirmDialog"*/);
    sub_1C2D490(&StringLiteral_18785/*"ef_animation_skip"*/);
    sub_1C2D490(&StringLiteral_13148/*"SubmarinePanel"*/);
    sub_1C2D490(&StringLiteral_13152/*"SubmarineSelectScannerDialog"*/);
    sub_1C2D490(&StringLiteral_13141/*"SubmarineEffectScanObstaclePanel"*/);
    sub_1C2D490(&StringLiteral_13144/*"SubmarineGridLine"*/);
    sub_1C2D490(&StringLiteral_13149/*"SubmarinePanelContainer"*/);
    sub_1C2D490(&StringLiteral_13151/*"SubmarineScanRangeNotificator_(?<ID>\\d+)"*/);
    sub_1C2D490(&StringLiteral_13147/*"SubmarineNewScannerDialog"*/);
    sub_1C2D490(&StringLiteral_13145/*"SubmarineGridTexture"*/);
    sub_1C2D490(&StringLiteral_13143/*"SubmarineEffectSelectedPanel"*/);
    sub_1C2D490(&StringLiteral_13140/*"SubmarineEffectContainer"*/);
    sub_1C2D490(&StringLiteral_13142/*"SubmarineEffectScannablePanel"*/);
    sub_1C2D490(&StringLiteral_7419/*"ID"*/);
    this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)sub_1C2D490(&StringLiteral_13153/*"SubmarineSettings"*/);
    byte_4C23CBD = 1;
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
      this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)AssetManager__getAssetStorage_40321272(loadAssetNames, 0);
      if ( this )
      {
        if ( !LODWORD(this->fields.__2__current) )
          goto LABEL_61;
        v16 = (AssetData_o *)this->fields.__4__this;
        if ( v16 )
        {
          Object_object__51051712 = AssetData__GetObject_object__51051712(
                                      (AssetData_o *)this->fields.__4__this,
                                      (System_String_o *)StringLiteral_13148/*"SubmarinePanel"*/,
                                      (const MethodInfo_30AFCC0 *)Method_AssetData_GetObject_GameObject____77994080);
          _4__this->fields._PanelPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)Object_object__51051712;
          sub_1C2D434((CGThumbnailListItem_o *)&_4__this->fields, (int32_t)Object_object__51051712, v18, v19);
          v20 = AssetData__GetObject_object__51051712(
                  v16,
                  (System_String_o *)StringLiteral_13144/*"SubmarineGridLine"*/,
                  (const MethodInfo_30AFCC0 *)Method_AssetData_GetObject_GameObject____77994080);
          _4__this->fields._GridLinePrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v20;
          sub_1C2D434(
            (CGThumbnailListItem_o *)&_4__this->fields._GridLinePrefab_k__BackingField,
            (int32_t)v20,
            v21,
            v22);
          v23 = AssetData__GetObject_object__51051712(
                  v16,
                  (System_String_o *)StringLiteral_13149/*"SubmarinePanelContainer"*/,
                  (const MethodInfo_30AFCC0 *)Method_AssetData_GetObject_GameObject____77994080);
          _4__this->fields._PanelContainerPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v23;
          sub_1C2D434(
            (CGThumbnailListItem_o *)&_4__this->fields._PanelContainerPrefab_k__BackingField,
            (int32_t)v23,
            v24,
            v25);
          v26 = AssetData__GetObject_object__51051712(
                  v16,
                  (System_String_o *)StringLiteral_13140/*"SubmarineEffectContainer"*/,
                  (const MethodInfo_30AFCC0 *)Method_AssetData_GetObject_GameObject____77994080);
          _4__this->fields._EffectContainerPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v26;
          sub_1C2D434(
            (CGThumbnailListItem_o *)&_4__this->fields._EffectContainerPrefab_k__BackingField,
            (int32_t)v26,
            v27,
            v28);
          v29 = AssetData__GetObject_object__51051712(
                  v16,
                  (System_String_o *)StringLiteral_5916/*"EffectScannedPanel"*/,
                  (const MethodInfo_30AFCC0 *)Method_AssetData_GetObject_GameObject____77994080);
          _4__this->fields._EffectScannedPanelPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v29;
          sub_1C2D434(
            (CGThumbnailListItem_o *)&_4__this->fields._EffectScannedPanelPrefab_k__BackingField,
            (int32_t)v29,
            v30,
            v31);
          v32 = AssetData__GetObject_object__51051712(
                  v16,
                  (System_String_o *)StringLiteral_13143/*"SubmarineEffectSelectedPanel"*/,
                  (const MethodInfo_30AFCC0 *)Method_AssetData_GetObject_GameObject____77994080);
          _4__this->fields._EffectSelectedPanelPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v32;
          sub_1C2D434(
            (CGThumbnailListItem_o *)&_4__this->fields._EffectSelectedPanelPrefab_k__BackingField,
            (int32_t)v32,
            v33,
            v34);
          v35 = AssetData__GetObject_object__51051712(
                  v16,
                  (System_String_o *)StringLiteral_13142/*"SubmarineEffectScannablePanel"*/,
                  (const MethodInfo_30AFCC0 *)Method_AssetData_GetObject_GameObject____77994080);
          _4__this->fields._EffectScannablePanelPrafab_k__BackingField = (struct UnityEngine_GameObject_o *)v35;
          sub_1C2D434(
            (CGThumbnailListItem_o *)&_4__this->fields._EffectScannablePanelPrafab_k__BackingField,
            (int32_t)v35,
            v36,
            v37);
          v38 = AssetData__GetObject_object__51051712(
                  v16,
                  (System_String_o *)StringLiteral_13141/*"SubmarineEffectScanObstaclePanel"*/,
                  (const MethodInfo_30AFCC0 *)Method_AssetData_GetObject_GameObject____77994080);
          _4__this->fields._EffectScanObstaclePanelPrafab_k__BackingField = (struct UnityEngine_GameObject_o *)v38;
          sub_1C2D434(
            (CGThumbnailListItem_o *)&_4__this->fields._EffectScanObstaclePanelPrafab_k__BackingField,
            (int32_t)v38,
            v39,
            v40);
          v41 = AssetData__GetObject_object__51051712(
                  v16,
                  (System_String_o *)StringLiteral_13145/*"SubmarineGridTexture"*/,
                  (const MethodInfo_30AFCC0 *)Method_AssetData_GetObject_Texture2D____77994112);
          _4__this->fields._GridTexture_k__BackingField = (struct UnityEngine_Texture2D_o *)v41;
          sub_1C2D434((CGThumbnailListItem_o *)&_4__this->fields._GridTexture_k__BackingField, (int32_t)v41, v42, v43);
          v44 = AssetData__GetObject_object__51051712(
                  v16,
                  (System_String_o *)StringLiteral_13153/*"SubmarineSettings"*/,
                  (const MethodInfo_30AFCC0 *)Method_AssetData_GetObject_SubmarineSettings___);
          _4__this->fields._Settings_k__BackingField = (struct SubmarineSettings_o *)v44;
          sub_1C2D434((CGThumbnailListItem_o *)&_4__this->fields._Settings_k__BackingField, (int32_t)v44, v45, v46);
          _4__this->fields._ScanProcessPreventedPrafab_k__BackingField = 0;
          sub_1C2D434(
            (CGThumbnailListItem_o *)&_4__this->fields._ScanProcessPreventedPrafab_k__BackingField,
            0,
            v47,
            v48);
          v49 = AssetData__GetObject_object__51051712(
                  v16,
                  (System_String_o *)StringLiteral_18785/*"ef_animation_skip"*/,
                  (const MethodInfo_30AFCC0 *)Method_AssetData_GetObject_GameObject____77994080);
          _4__this->fields._AnimationSkipEFfectPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v49;
          sub_1C2D434(
            (CGThumbnailListItem_o *)&_4__this->fields._AnimationSkipEFfectPrefab_k__BackingField,
            (int32_t)v49,
            v50,
            v51);
          v52 = AssetData__GetObject_object__51051712(
                  v16,
                  (System_String_o *)StringLiteral_13152/*"SubmarineSelectScannerDialog"*/,
                  (const MethodInfo_30AFCC0 *)Method_AssetData_GetObject_GameObject____77994080);
          _4__this->fields._SelectScannerDialogPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v52;
          sub_1C2D434(
            (CGThumbnailListItem_o *)&_4__this->fields._SelectScannerDialogPrefab_k__BackingField,
            (int32_t)v52,
            v53,
            v54);
          v55 = AssetData__GetObject_object__51051712(
                  v16,
                  (System_String_o *)StringLiteral_13150/*"SubmarineScanConfirmDialog"*/,
                  (const MethodInfo_30AFCC0 *)Method_AssetData_GetObject_GameObject____77994080);
          _4__this->fields._ScanConfirmDialogPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v55;
          sub_1C2D434(
            (CGThumbnailListItem_o *)&_4__this->fields._ScanConfirmDialogPrefab_k__BackingField,
            (int32_t)v55,
            v56,
            v57);
          v58 = AssetData__GetObject_object__51051712(
                  v16,
                  (System_String_o *)StringLiteral_13147/*"SubmarineNewScannerDialog"*/,
                  (const MethodInfo_30AFCC0 *)Method_AssetData_GetObject_GameObject____77994080);
          _4__this->fields._NewScannerDialogPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v58;
          sub_1C2D434(
            (CGThumbnailListItem_o *)&_4__this->fields._NewScannerDialogPrefab_k__BackingField,
            (int32_t)v58,
            v59,
            v60);
          this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( this )
          {
            this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)DataManager__GetMasterData_object_(
                                                                       (DataManager_o *)this,
                                                                       (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_EventPanelScanMaster___);
            if ( this )
            {
              ListByEventId = (System_Collections_Generic_IEnumerable_TSource__o *)EventPanelScanMaster__GetListByEventId(
                                                                                     (EventPanelScanMaster_o *)this,
                                                                                     v2->fields.eventId,
                                                                                     0);
              v62 = SubmarineMapAssetManager___c_TypeInfo;
              if ( !SubmarineMapAssetManager___c_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(SubmarineMapAssetManager___c_TypeInfo);
                v62 = SubmarineMapAssetManager___c_TypeInfo;
              }
              _9__69_2 = (System_Func_object__int__o *)v62->static_fields->__9__69_2;
              if ( !_9__69_2 )
              {
                if ( !v62->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(v62);
                  v62 = SubmarineMapAssetManager___c_TypeInfo;
                }
                v64 = (Il2CppObject *)v62->static_fields->__9;
                _9__69_2 = (System_Func_object__int__o *)sub_1C2D6DC(System_Func_EventPanelScanEntity__int__TypeInfo);
                System_Func_object__int____ctor(
                  _9__69_2,
                  v64,
                  Method_SubmarineMapAssetManager___c__CoLoadAssets_b__69_2__,
                  0);
                static_fields = SubmarineMapAssetManager___c_TypeInfo->static_fields;
                static_fields->__9__69_2 = (struct System_Func_EventPanelScanEntity__int__o *)_9__69_2;
                sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__69_2, (int32_t)_9__69_2, v66, v67);
              }
              v68 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                           ListByEventId,
                                                                           (System_Func_TSource__TResult__o *)_9__69_2,
                                                                           (const MethodInfo_3104740 *)Method_System_Linq_Enumerable_Select_EventPanelScanEntity__int___);
              v69 = (System_Text_RegularExpressions_Regex_o *)sub_1C2D6DC(System_Text_RegularExpressions_Regex_TypeInfo);
              System_Text_RegularExpressions_Regex___ctor(v69, (System_String_o *)StringLiteral_12609/*"Scanner_(?<ID>\\d+)"*/, 0);
              this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)AssetData__GetObjectNameList(v16, 0);
              if ( this )
              {
                _2__current = this->fields.__2__current;
                v71 = this;
                v91 = v2;
                if ( (int)_2__current < 1 )
                {
LABEL_40:
                  v79 = (System_Text_RegularExpressions_Regex_o *)sub_1C2D6DC(System_Text_RegularExpressions_Regex_TypeInfo);
                  System_Text_RegularExpressions_Regex___ctor(v79, (System_String_o *)StringLiteral_13151/*"SubmarineScanRangeNotificator_(?<ID>\\d+)"*/, 0);
                  this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)AssetData__GetObjectNameList(v16, 0);
                  if ( !this )
                    goto LABEL_60;
                  v80 = this->fields.__2__current;
                  v81 = this;
                  if ( (int)v80 < 1 )
                  {
LABEL_56:
                    finishCallback = v91->fields.finishCallback;
                    if ( finishCallback )
                      ActionExtensions__Call(finishCallback, 0);
                    return 0;
                  }
                  v82 = 0;
                  p__4__this = &this->fields.__4__this;
                  while ( v82 < (unsigned int)v80 )
                  {
                    if ( !v79 )
                      goto LABEL_60;
                    v84 = (System_String_o *)p__4__this[v82];
                    this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)System_Text_RegularExpressions_Regex__Match_69994104(
                                                                               v79,
                                                                               v84,
                                                                               0);
                    if ( !this )
                      goto LABEL_60;
                    v85 = this;
                    this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)System_Text_RegularExpressions_Group__get_Success(
                                                                               (System_Text_RegularExpressions_Group_o *)this,
                                                                               0);
                    if ( ((unsigned __int8)this & 1) != 0 )
                    {
                      this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)((__int64 (__fastcall *)(SubmarineMapAssetManager__CoLoadAssets_d__69_o *, const MethodInfo *))v85->klass->vtable._5_System_IDisposable_Dispose.methodPtr)(
                                                                                 v85,
                                                                                 v85->klass->vtable._5_System_IDisposable_Dispose.method);
                      if ( !this )
                        goto LABEL_60;
                      this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)System_Text_RegularExpressions_GroupCollection__get_Item_69977148(
                                                                                 (System_Text_RegularExpressions_GroupCollection_o *)this,
                                                                                 (System_String_o *)StringLiteral_7419/*"ID"*/,
                                                                                 0);
                      if ( !this )
                        goto LABEL_60;
                      Value = System_Text_RegularExpressions_Capture__get_Value(
                                (System_Text_RegularExpressions_Capture_o *)this,
                                0);
                      v87 = System_Int32__Parse(Value, 0);
                      this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)System_Linq_Enumerable__Contains_int_(
                                                                                 v68,
                                                                                 v87,
                                                                                 (const MethodInfo_30EB900 *)Method_System_Linq_Enumerable_Contains_int___);
                      if ( ((unsigned __int8)this & 1) != 0 )
                      {
                        v88 = AssetData__GetObject_object__51051712(
                                v16,
                                v84,
                                (const MethodInfo_30AFCC0 *)Method_AssetData_GetObject_GameObject____77994080);
                        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                        this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)UnityEngine_Object__op_Equality(
                                                                                   (UnityEngine_Object_o *)v88,
                                                                                   0,
                                                                                   0);
                        if ( ((unsigned __int8)this & 1) == 0 )
                        {
                          this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)_4__this->fields.scanRangeNotificatorPrefabDict;
                          if ( !this )
                            goto LABEL_60;
                          System_Collections_Generic_Dictionary_int__object___set_Item(
                            (System_Collections_Generic_Dictionary_int__object__o *)this,
                            v87,
                            v88,
                            (const MethodInfo_33E1268 *)Method_System_Collections_Generic_Dictionary_int__GameObject__set_Item__);
                        }
                      }
                    }
                    LODWORD(v80) = v81->fields.__2__current;
                    if ( (__int64)++v82 >= (int)v80 )
                      goto LABEL_56;
                  }
                }
                else
                {
                  v72 = 0;
                  v73 = &this->fields.__4__this;
                  while ( v72 < (unsigned int)_2__current )
                  {
                    if ( !v69 )
                      goto LABEL_60;
                    v74 = (System_String_o *)v73[v72];
                    this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)System_Text_RegularExpressions_Regex__Match_69994104(
                                                                               v69,
                                                                               v74,
                                                                               0);
                    if ( !this )
                      goto LABEL_60;
                    v75 = this;
                    this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)System_Text_RegularExpressions_Group__get_Success(
                                                                               (System_Text_RegularExpressions_Group_o *)this,
                                                                               0);
                    if ( ((unsigned __int8)this & 1) != 0 )
                    {
                      this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)((__int64 (__fastcall *)(SubmarineMapAssetManager__CoLoadAssets_d__69_o *, const MethodInfo *))v75->klass->vtable._5_System_IDisposable_Dispose.methodPtr)(
                                                                                 v75,
                                                                                 v75->klass->vtable._5_System_IDisposable_Dispose.method);
                      if ( !this )
                        goto LABEL_60;
                      this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)System_Text_RegularExpressions_GroupCollection__get_Item_69977148(
                                                                                 (System_Text_RegularExpressions_GroupCollection_o *)this,
                                                                                 (System_String_o *)StringLiteral_7419/*"ID"*/,
                                                                                 0);
                      if ( !this )
                        goto LABEL_60;
                      v76 = System_Text_RegularExpressions_Capture__get_Value(
                              (System_Text_RegularExpressions_Capture_o *)this,
                              0);
                      v77 = System_Int32__Parse(v76, 0);
                      this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)System_Linq_Enumerable__Contains_int_(
                                                                                 v68,
                                                                                 v77,
                                                                                 (const MethodInfo_30EB900 *)Method_System_Linq_Enumerable_Contains_int___);
                      if ( ((unsigned __int8)this & 1) != 0 )
                      {
                        v78 = AssetData__GetObject_object__51051712(
                                v16,
                                v74,
                                (const MethodInfo_30AFCC0 *)Method_AssetData_GetObject_GameObject____77994080);
                        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                        this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)UnityEngine_Object__op_Equality(
                                                                                   (UnityEngine_Object_o *)v78,
                                                                                   0,
                                                                                   0);
                        if ( ((unsigned __int8)this & 1) == 0 )
                        {
                          this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)_4__this->fields.scannerPrefabDict;
                          if ( !this )
                            goto LABEL_60;
                          System_Collections_Generic_Dictionary_int__object___set_Item(
                            (System_Collections_Generic_Dictionary_int__object__o *)this,
                            v77,
                            v78,
                            (const MethodInfo_33E1268 *)Method_System_Collections_Generic_Dictionary_int__GameObject__set_Item__);
                        }
                      }
                    }
                    LODWORD(_2__current) = v71->fields.__2__current;
                    if ( (__int64)++v72 >= (int)_2__current )
                      goto LABEL_40;
                  }
                }
LABEL_61:
                sub_1C2D6F4(this, method, v15);
              }
            }
          }
        }
      }
    }
LABEL_60:
    sub_1C2D6EC(this, method);
  }
  if ( _1__state )
    return 0;
  v2->fields.__1__state = -1;
  v5 = sub_1C2D6DC(SubmarineMapAssetManager___c__DisplayClass69_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_60;
  *(_BYTE *)(v5 + 16) = 0;
  if ( !_4__this )
    goto LABEL_60;
  v6 = _4__this->fields.loadAssetNames;
  v7 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(
    v7,
    (Il2CppObject *)v5,
    Method_SubmarineMapAssetManager___c__DisplayClass69_0__CoLoadAssets_b__0__,
    0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  v8 = 1;
  AssetManager__loadAssetStorage_40319912(v6, v7, 1, 0);
  v9 = (System_Func_bool__o *)sub_1C2D6DC(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_SubmarineMapAssetManager___c__DisplayClass69_0__CoLoadAssets_b__1__,
    0);
  v10 = (UnityEngine_WaitUntil_o *)sub_1C2D6DC(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v10, v9, 0);
  v2->fields.__2__current = (Il2CppObject *)v10;
  p__2__current = (CGThumbnailListItem_o *)&v2->fields.__2__current;
  sub_1C2D434(p__2__current, (int32_t)v10, v12, v13);
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

  v2 = sub_1C2D4A4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C2D6DC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C2D4A4(&Method_SubmarineMapAssetManager__CoLoadAssets_d__69_System_Collections_IEnumerator_Reset__);
  sub_1C2D5B8(v3, v4);
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

  if ( (byte_4C23CBC & 1) == 0 )
  {
    sub_1C2D490(&SubmarineMapAssetManager___c_TypeInfo);
    byte_4C23CBC = 1;
  }
  v1 = (Il2CppObject *)sub_1C2D6DC(SubmarineMapAssetManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  SubmarineMapAssetManager___c_TypeInfo->static_fields->__9 = (struct SubmarineMapAssetManager___c_o *)v1;
  sub_1C2D434((CGThumbnailListItem_o *)SubmarineMapAssetManager___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1C2D6EC(this, 0);
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