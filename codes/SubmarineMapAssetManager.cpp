void __fastcall SubmarineMapAssetManager___ctor(SubmarineMapAssetManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  struct System_String_array *v8; // x20
  int32_t v9; // w1
  int32_t v10; // w2
  int32_t v11; // w3

  if ( (byte_48DF5F3 & 1) == 0 )
  {
    sub_1B00CCC(&string___TypeInfo, method);
    sub_1B00CCC(&StringLiteral_6103/*"Event/Submarine"*/, v3);
    byte_48DF5F3 = 1;
  }
  v4 = sub_1B00D74(string___TypeInfo, 1LL);
  if ( !v4 )
    sub_1B00F28(0LL, v5);
  v8 = (struct System_String_array *)v4;
  if ( !*(_DWORD *)(v4 + 24) )
    sub_1B00F30(v4, v5);
  v9 = StringLiteral_6103/*"Event/Submarine"*/;
  *(_QWORD *)(v4 + 32) = StringLiteral_6103/*"Event/Submarine"*/;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v4 + 32), v9, v6, v7);
  this->fields.loadAssetNames = v8;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.loadAssetNames, (int32_t)v8, v10, v11);
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
  int32_t v9; // w3
  int32_t v10; // w2
  int32_t v11; // w3

  if ( (byte_48DF5EF & 1) == 0 )
  {
    sub_1B00CCC(&SubmarineMapAssetManager__CoLoadAssets_d__69_TypeInfo, *(_QWORD *)&eventId);
    byte_48DF5EF = 1;
  }
  v7 = sub_1B00F18(SubmarineMapAssetManager__CoLoadAssets_d__69_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 32) = this;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v7 + 32), (int32_t)this, v8, v9);
  *(_DWORD *)(v7 + 40) = eventId;
  *(_QWORD *)(v7 + 48) = finishCallback;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v7 + 48), (int32_t)finishCallback, v10, v11);
  return (System_Collections_IEnumerator_o *)v7;
}


void __fastcall SubmarineMapAssetManager__Finish(SubmarineMapAssetManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_Dictionary_int__GameObject__o *scannerPrefabDict; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  int32_t v7; // w2
  int32_t v8; // w3
  int32_t v9; // w2
  int32_t v10; // w3
  int32_t v11; // w2
  int32_t v12; // w3
  int32_t v13; // w2
  int32_t v14; // w3
  int32_t v15; // w2
  int32_t v16; // w3
  int32_t v17; // w2
  int32_t v18; // w3
  int32_t v19; // w2
  int32_t v20; // w3
  int32_t v21; // w2
  int32_t v22; // w3
  int32_t v23; // w2
  int32_t v24; // w3
  int32_t v25; // w2
  int32_t v26; // w3
  int32_t v27; // w2
  int32_t v28; // w3
  int32_t v29; // w2
  int32_t v30; // w3
  int32_t v31; // w2
  int32_t v32; // w3
  int32_t v33; // w2
  int32_t v34; // w3
  struct UnityEngine_GameObject_o **p_AnimationSkipEFfectPrefab_k__BackingField; // x19
  int32_t v36; // w2
  int32_t v37; // w3
  System_String_array *v38; // x19

  if ( (byte_48DF5F2 & 1) == 0 )
  {
    sub_1B00CCC(&AssetManager_TypeInfo, method);
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_int__GameObject__Clear__, v3);
    byte_48DF5F2 = 1;
  }
  scannerPrefabDict = this->fields.scannerPrefabDict;
  if ( !scannerPrefabDict
    || (System_Collections_Generic_Dictionary_int__object___Clear(
          (System_Collections_Generic_Dictionary_int__object__o *)scannerPrefabDict,
          (const MethodInfo_30366B4 *)Method_System_Collections_Generic_Dictionary_int__GameObject__Clear__),
        (scannerPrefabDict = this->fields.scanRangeNotificatorPrefabDict) == 0LL) )
  {
    sub_1B00F28(scannerPrefabDict, method);
  }
  System_Collections_Generic_Dictionary_int__object___Clear(
    (System_Collections_Generic_Dictionary_int__object__o *)scannerPrefabDict,
    (const MethodInfo_30366B4 *)Method_System_Collections_Generic_Dictionary_int__GameObject__Clear__);
  this->fields._PanelPrefab_k__BackingField = 0LL;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields, 0, v5, v6);
  this->fields._GridLinePrefab_k__BackingField = 0LL;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields._GridLinePrefab_k__BackingField, 0, v7, v8);
  this->fields._PanelContainerPrefab_k__BackingField = 0LL;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields._PanelContainerPrefab_k__BackingField, 0, v9, v10);
  this->fields._EffectContainerPrefab_k__BackingField = 0LL;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields._EffectContainerPrefab_k__BackingField, 0, v11, v12);
  this->fields._ClosedPanelTexture_k__BackingField = 0LL;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields._ClosedPanelTexture_k__BackingField, 0, v13, v14);
  this->fields._GridTexture_k__BackingField = 0LL;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields._GridTexture_k__BackingField, 0, v15, v16);
  this->fields._EffectScannedPanelPrefab_k__BackingField = 0LL;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields._EffectScannedPanelPrefab_k__BackingField, 0, v17, v18);
  this->fields._EffectSelectedPanelPrefab_k__BackingField = 0LL;
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)&this->fields._EffectSelectedPanelPrefab_k__BackingField,
    0,
    v19,
    v20);
  this->fields._EffectScannablePanelPrafab_k__BackingField = 0LL;
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)&this->fields._EffectScannablePanelPrafab_k__BackingField,
    0,
    v21,
    v22);
  this->fields._EffectScanObstaclePanelPrafab_k__BackingField = 0LL;
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)&this->fields._EffectScanObstaclePanelPrafab_k__BackingField,
    0,
    v23,
    v24);
  this->fields._ScanProcessPreventedPrafab_k__BackingField = 0LL;
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)&this->fields._ScanProcessPreventedPrafab_k__BackingField,
    0,
    v25,
    v26);
  this->fields._SelectScannerDialogPrefab_k__BackingField = 0LL;
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)&this->fields._SelectScannerDialogPrefab_k__BackingField,
    0,
    v27,
    v28);
  this->fields._ScanConfirmDialogPrefab_k__BackingField = 0LL;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields._ScanConfirmDialogPrefab_k__BackingField, 0, v29, v30);
  this->fields._NewScannerDialogPrefab_k__BackingField = 0LL;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields._NewScannerDialogPrefab_k__BackingField, 0, v31, v32);
  this->fields._Settings_k__BackingField = 0LL;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields._Settings_k__BackingField, 0, v33, v34);
  this->fields._AnimationSkipEFfectPrefab_k__BackingField = 0LL;
  p_AnimationSkipEFfectPrefab_k__BackingField = &this->fields._AnimationSkipEFfectPrefab_k__BackingField;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)p_AnimationSkipEFfectPrefab_k__BackingField, 0, v36, v37);
  v38 = (System_String_array *)p_AnimationSkipEFfectPrefab_k__BackingField[3];
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAssetStorage_36598596(v38, 0LL);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall SubmarineMapAssetManager__GetScanAnimObjectPrefab(
        SubmarineMapAssetManager_o *this,
        int32_t scanObjectId,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_int__GameObject__o *scannerPrefabDict; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_48DF5F0 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_int__GameObject__TryGetValue__, *(_QWORD *)&scanObjectId);
    byte_48DF5F0 = 1;
  }
  value = 0LL;
  scannerPrefabDict = this->fields.scannerPrefabDict;
  if ( !scannerPrefabDict )
    sub_1B00F28(0LL, *(_QWORD *)&scanObjectId);
  System_Collections_Generic_Dictionary_int__object___TryGetValue(
    (System_Collections_Generic_Dictionary_int__object__o *)scannerPrefabDict,
    scanObjectId,
    &value,
    (const MethodInfo_3037CB8 *)Method_System_Collections_Generic_Dictionary_int__GameObject__TryGetValue__);
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

  if ( (byte_48DF5F1 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_int__GameObject__TryGetValue__, *(_QWORD *)&scanObjectId);
    byte_48DF5F1 = 1;
  }
  value = 0LL;
  scanRangeNotificatorPrefabDict = this->fields.scanRangeNotificatorPrefabDict;
  if ( !scanRangeNotificatorPrefabDict )
    sub_1B00F28(0LL, *(_QWORD *)&scanObjectId);
  System_Collections_Generic_Dictionary_int__object___TryGetValue(
    (System_Collections_Generic_Dictionary_int__object__o *)scanRangeNotificatorPrefabDict,
    scanObjectId,
    &value,
    (const MethodInfo_3037CB8 *)Method_System_Collections_Generic_Dictionary_int__GameObject__TryGetValue__);
  return (UnityEngine_GameObject_o *)value;
}


void __fastcall SubmarineMapAssetManager__Initialize(SubmarineMapAssetManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_Dictionary_int__object__o *v4; // x20
  int32_t v5; // w2
  int32_t v6; // w3
  System_Collections_Generic_Dictionary_int__object__o *v7; // x20
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_48DF5ED & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_int__GameObject___ctor__, method);
    sub_1B00CCC(&System_Collections_Generic_Dictionary_int__GameObject__TypeInfo, v3);
    byte_48DF5ED = 1;
  }
  v4 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B00F18(System_Collections_Generic_Dictionary_int__GameObject__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v4,
    (const MethodInfo_3035B58 *)Method_System_Collections_Generic_Dictionary_int__GameObject___ctor__);
  this->fields.scannerPrefabDict = (struct System_Collections_Generic_Dictionary_int__GameObject__o *)v4;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.scannerPrefabDict, (int32_t)v4, v5, v6);
  v7 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B00F18(System_Collections_Generic_Dictionary_int__GameObject__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v7,
    (const MethodInfo_3035B58 *)Method_System_Collections_Generic_Dictionary_int__GameObject___ctor__);
  this->fields.scanRangeNotificatorPrefabDict = (struct System_Collections_Generic_Dictionary_int__GameObject__o *)v7;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.scanRangeNotificatorPrefabDict, (int32_t)v7, v8, v9);
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
  Il2CppObject *Object_object__47470892; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  int32_t v16; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_48DF5EE & 1) == 0 )
  {
    sub_1B00CCC(&Method_AssetData_GetObject_Texture2D____74577960, assetData);
    sub_1B00CCC(&int_TypeInfo, v8);
    sub_1B00CCC(&StringLiteral_24589/*"{0:D6}_ClosedPanelTexture"*/, v9);
    byte_48DF5EE = 1;
  }
  v16 = mapId;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v16, *(_QWORD *)&mapId, method, v4);
  v11 = System_String__Format((System_String_o *)StringLiteral_24589/*"{0:D6}_ClosedPanelTexture"*/, v10, 0LL);
  if ( !assetData )
    sub_1B00F28(v11, v12);
  Object_object__47470892 = AssetData__GetObject_object__47470892(
                              assetData,
                              v11,
                              (const MethodInfo_2D4592C *)Method_AssetData_GetObject_Texture2D____74577960);
  this->fields._ClosedPanelTexture_k__BackingField = (struct UnityEngine_Texture2D_o *)Object_object__47470892;
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)&this->fields._ClosedPanelTexture_k__BackingField,
    (int32_t)Object_object__47470892,
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
  int32_t v3; // w3

  this->fields._AnimationSkipEFfectPrefab_k__BackingField = value;
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)&this->fields._AnimationSkipEFfectPrefab_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall SubmarineMapAssetManager__set_ClosedPanelTexture(
        SubmarineMapAssetManager_o *this,
        UnityEngine_Texture2D_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._ClosedPanelTexture_k__BackingField = value;
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)&this->fields._ClosedPanelTexture_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall SubmarineMapAssetManager__set_EffectContainerPrefab(
        SubmarineMapAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._EffectContainerPrefab_k__BackingField = value;
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)&this->fields._EffectContainerPrefab_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall SubmarineMapAssetManager__set_EffectScanObstaclePanelPrafab(
        SubmarineMapAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._EffectScanObstaclePanelPrafab_k__BackingField = value;
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)&this->fields._EffectScanObstaclePanelPrafab_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall SubmarineMapAssetManager__set_EffectScannablePanelPrafab(
        SubmarineMapAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._EffectScannablePanelPrafab_k__BackingField = value;
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)&this->fields._EffectScannablePanelPrafab_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall SubmarineMapAssetManager__set_EffectScannedPanelPrefab(
        SubmarineMapAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._EffectScannedPanelPrefab_k__BackingField = value;
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)&this->fields._EffectScannedPanelPrefab_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall SubmarineMapAssetManager__set_EffectSelectedPanelPrefab(
        SubmarineMapAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._EffectSelectedPanelPrefab_k__BackingField = value;
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)&this->fields._EffectSelectedPanelPrefab_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall SubmarineMapAssetManager__set_GridLinePrefab(
        SubmarineMapAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._GridLinePrefab_k__BackingField = value;
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)&this->fields._GridLinePrefab_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall SubmarineMapAssetManager__set_GridTexture(
        SubmarineMapAssetManager_o *this,
        UnityEngine_Texture2D_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._GridTexture_k__BackingField = value;
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)&this->fields._GridTexture_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall SubmarineMapAssetManager__set_NewScannerDialogPrefab(
        SubmarineMapAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._NewScannerDialogPrefab_k__BackingField = value;
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)&this->fields._NewScannerDialogPrefab_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall SubmarineMapAssetManager__set_PanelContainerPrefab(
        SubmarineMapAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._PanelContainerPrefab_k__BackingField = value;
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)&this->fields._PanelContainerPrefab_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall SubmarineMapAssetManager__set_PanelPrefab(
        SubmarineMapAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._PanelPrefab_k__BackingField = value;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)value, (int32_t)method, v3);
}


void __fastcall SubmarineMapAssetManager__set_ScanConfirmDialogPrefab(
        SubmarineMapAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._ScanConfirmDialogPrefab_k__BackingField = value;
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)&this->fields._ScanConfirmDialogPrefab_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall SubmarineMapAssetManager__set_ScanProcessPreventedPrafab(
        SubmarineMapAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._ScanProcessPreventedPrafab_k__BackingField = value;
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)&this->fields._ScanProcessPreventedPrafab_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall SubmarineMapAssetManager__set_SelectScannerDialogPrefab(
        SubmarineMapAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._SelectScannerDialogPrefab_k__BackingField = value;
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)&this->fields._SelectScannerDialogPrefab_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall SubmarineMapAssetManager__set_Settings(
        SubmarineMapAssetManager_o *this,
        SubmarineSettings_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._Settings_k__BackingField = value;
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)&this->fields._Settings_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
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
  ServantStatusBattleListViewItem_o *p__2__current; // x24
  int32_t v48; // w2
  int32_t v49; // w3
  System_String_array *loadAssetNames; // x20
  AssetData_o *v51; // x20
  Il2CppObject *Object_object__47470892; // x0
  int32_t v53; // w2
  int32_t v54; // w3
  Il2CppObject *v55; // x0
  int32_t v56; // w2
  int32_t v57; // w3
  Il2CppObject *v58; // x0
  int32_t v59; // w2
  int32_t v60; // w3
  Il2CppObject *v61; // x0
  int32_t v62; // w2
  int32_t v63; // w3
  Il2CppObject *v64; // x0
  int32_t v65; // w2
  int32_t v66; // w3
  Il2CppObject *v67; // x0
  int32_t v68; // w2
  int32_t v69; // w3
  Il2CppObject *v70; // x0
  int32_t v71; // w2
  int32_t v72; // w3
  Il2CppObject *v73; // x0
  int32_t v74; // w2
  int32_t v75; // w3
  Il2CppObject *v76; // x0
  int32_t v77; // w2
  int32_t v78; // w3
  Il2CppObject *v79; // x0
  int32_t v80; // w2
  int32_t v81; // w3
  int32_t v82; // w2
  int32_t v83; // w3
  Il2CppObject *v84; // x0
  int32_t v85; // w2
  int32_t v86; // w3
  Il2CppObject *v87; // x0
  int32_t v88; // w2
  int32_t v89; // w3
  Il2CppObject *v90; // x0
  int32_t v91; // w2
  int32_t v92; // w3
  Il2CppObject *v93; // x0
  int32_t v94; // w2
  int32_t v95; // w3
  System_Collections_Generic_IEnumerable_TSource__o *ListByEventId; // x21
  SubmarineMapAssetManager___c_c *v97; // x8
  System_Func_object__int__o *_9__69_2; // x22
  Il2CppObject *v99; // x23
  struct SubmarineMapAssetManager___c_StaticFields *static_fields; // x0
  int32_t v101; // w2
  int32_t v102; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v103; // x21
  System_Text_RegularExpressions_Regex_o *v104; // x22
  Il2CppObject *_2__current; // x8
  SubmarineMapAssetManager__CoLoadAssets_d__69_o *v106; // x23
  unsigned __int64 v107; // x29
  struct SubmarineMapAssetManager_o **v108; // x28
  System_String_o *v109; // x24
  SubmarineMapAssetManager__CoLoadAssets_d__69_o *v110; // x25
  System_String_o *v111; // x0
  int32_t v112; // w25
  Il2CppObject *v113; // x24
  System_Text_RegularExpressions_Regex_o *v114; // x22
  Il2CppObject *v115; // x8
  SubmarineMapAssetManager__CoLoadAssets_d__69_o *v116; // x23
  unsigned __int64 v117; // x28
  struct SubmarineMapAssetManager_o **p__4__this; // x29
  System_String_o *v119; // x24
  SubmarineMapAssetManager__CoLoadAssets_d__69_o *v120; // x25
  System_String_o *Value; // x0
  int32_t v122; // w25
  Il2CppObject *v123; // x24
  System_Action_o *finishCallback; // x0
  SubmarineMapAssetManager__CoLoadAssets_d__69_o *v126; // [xsp+8h] [xbp-68h]

  v2 = this;
  if ( (byte_48DF5F5 & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, method);
    sub_1B00CCC(&Method_AssetData_GetObject_GameObject____74577936, v3);
    sub_1B00CCC(&Method_AssetData_GetObject_SubmarineSettings___, v4);
    sub_1B00CCC(&Method_AssetData_GetObject_Texture2D____74577960, v5);
    sub_1B00CCC(&AssetManager_TypeInfo, v6);
    sub_1B00CCC(&Method_DataManager_GetMasterData_EventPanelScanMaster___, v7);
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_int__GameObject__set_Item__, v8);
    sub_1B00CCC(&Method_System_Linq_Enumerable_Contains_int___, v9);
    sub_1B00CCC(&Method_System_Linq_Enumerable_Select_EventPanelScanEntity__int___, v10);
    sub_1B00CCC(&System_Func_bool__TypeInfo, v11);
    sub_1B00CCC(&System_Func_EventPanelScanEntity__int__TypeInfo, v12);
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, v13);
    sub_1B00CCC(&System_Text_RegularExpressions_Regex_TypeInfo, v14);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_1B00CCC(&Method_SubmarineMapAssetManager___c__CoLoadAssets_b__69_2__, v16);
    sub_1B00CCC(&Method_SubmarineMapAssetManager___c__DisplayClass69_0__CoLoadAssets_b__0__, v17);
    sub_1B00CCC(&Method_SubmarineMapAssetManager___c__DisplayClass69_0__CoLoadAssets_b__1__, v18);
    sub_1B00CCC(&SubmarineMapAssetManager___c__DisplayClass69_0_TypeInfo, v19);
    sub_1B00CCC(&SubmarineMapAssetManager___c_TypeInfo, v20);
    sub_1B00CCC(&UnityEngine_WaitUntil_TypeInfo, v21);
    sub_1B00CCC(&StringLiteral_5817/*"EffectScannedPanel"*/, v22);
    sub_1B00CCC(&StringLiteral_12305/*"Scanner_(?<ID>\\d+)"*/, v23);
    sub_1B00CCC(&StringLiteral_12844/*"SubmarineScanConfirmDialog"*/, v24);
    sub_1B00CCC(&StringLiteral_18548/*"ef_animation_skip"*/, v25);
    sub_1B00CCC(&StringLiteral_12842/*"SubmarinePanel"*/, v26);
    sub_1B00CCC(&StringLiteral_12846/*"SubmarineSelectScannerDialog"*/, v27);
    sub_1B00CCC(&StringLiteral_12835/*"SubmarineEffectScanObstaclePanel"*/, v28);
    sub_1B00CCC(&StringLiteral_12838/*"SubmarineGridLine"*/, v29);
    sub_1B00CCC(&StringLiteral_12843/*"SubmarinePanelContainer"*/, v30);
    sub_1B00CCC(&StringLiteral_12845/*"SubmarineScanRangeNotificator_(?<ID>\\d+)"*/, v31);
    sub_1B00CCC(&StringLiteral_12841/*"SubmarineNewScannerDialog"*/, v32);
    sub_1B00CCC(&StringLiteral_12839/*"SubmarineGridTexture"*/, v33);
    sub_1B00CCC(&StringLiteral_12837/*"SubmarineEffectSelectedPanel"*/, v34);
    sub_1B00CCC(&StringLiteral_12834/*"SubmarineEffectContainer"*/, v35);
    sub_1B00CCC(&StringLiteral_12836/*"SubmarineEffectScannablePanel"*/, v36);
    sub_1B00CCC(&StringLiteral_7258/*"ID"*/, v37);
    this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)sub_1B00CCC(&StringLiteral_12847/*"SubmarineSettings"*/, v38);
    byte_48DF5F5 = 1;
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
      this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)AssetManager__getAssetStorage_36597628(
                                                                 loadAssetNames,
                                                                 0LL);
      if ( this )
      {
        if ( !LODWORD(this->fields.__2__current) )
          goto LABEL_61;
        v51 = (AssetData_o *)this->fields.__4__this;
        if ( v51 )
        {
          Object_object__47470892 = AssetData__GetObject_object__47470892(
                                      (AssetData_o *)this->fields.__4__this,
                                      (System_String_o *)StringLiteral_12842/*"SubmarinePanel"*/,
                                      (const MethodInfo_2D4592C *)Method_AssetData_GetObject_GameObject____74577936);
          _4__this->fields._PanelPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)Object_object__47470892;
          sub_1B00C70(
            (ServantStatusBattleListViewItem_o *)&_4__this->fields,
            (int32_t)Object_object__47470892,
            v53,
            v54);
          v55 = AssetData__GetObject_object__47470892(
                  v51,
                  (System_String_o *)StringLiteral_12838/*"SubmarineGridLine"*/,
                  (const MethodInfo_2D4592C *)Method_AssetData_GetObject_GameObject____74577936);
          _4__this->fields._GridLinePrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v55;
          sub_1B00C70(
            (ServantStatusBattleListViewItem_o *)&_4__this->fields._GridLinePrefab_k__BackingField,
            (int32_t)v55,
            v56,
            v57);
          v58 = AssetData__GetObject_object__47470892(
                  v51,
                  (System_String_o *)StringLiteral_12843/*"SubmarinePanelContainer"*/,
                  (const MethodInfo_2D4592C *)Method_AssetData_GetObject_GameObject____74577936);
          _4__this->fields._PanelContainerPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v58;
          sub_1B00C70(
            (ServantStatusBattleListViewItem_o *)&_4__this->fields._PanelContainerPrefab_k__BackingField,
            (int32_t)v58,
            v59,
            v60);
          v61 = AssetData__GetObject_object__47470892(
                  v51,
                  (System_String_o *)StringLiteral_12834/*"SubmarineEffectContainer"*/,
                  (const MethodInfo_2D4592C *)Method_AssetData_GetObject_GameObject____74577936);
          _4__this->fields._EffectContainerPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v61;
          sub_1B00C70(
            (ServantStatusBattleListViewItem_o *)&_4__this->fields._EffectContainerPrefab_k__BackingField,
            (int32_t)v61,
            v62,
            v63);
          v64 = AssetData__GetObject_object__47470892(
                  v51,
                  (System_String_o *)StringLiteral_5817/*"EffectScannedPanel"*/,
                  (const MethodInfo_2D4592C *)Method_AssetData_GetObject_GameObject____74577936);
          _4__this->fields._EffectScannedPanelPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v64;
          sub_1B00C70(
            (ServantStatusBattleListViewItem_o *)&_4__this->fields._EffectScannedPanelPrefab_k__BackingField,
            (int32_t)v64,
            v65,
            v66);
          v67 = AssetData__GetObject_object__47470892(
                  v51,
                  (System_String_o *)StringLiteral_12837/*"SubmarineEffectSelectedPanel"*/,
                  (const MethodInfo_2D4592C *)Method_AssetData_GetObject_GameObject____74577936);
          _4__this->fields._EffectSelectedPanelPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v67;
          sub_1B00C70(
            (ServantStatusBattleListViewItem_o *)&_4__this->fields._EffectSelectedPanelPrefab_k__BackingField,
            (int32_t)v67,
            v68,
            v69);
          v70 = AssetData__GetObject_object__47470892(
                  v51,
                  (System_String_o *)StringLiteral_12836/*"SubmarineEffectScannablePanel"*/,
                  (const MethodInfo_2D4592C *)Method_AssetData_GetObject_GameObject____74577936);
          _4__this->fields._EffectScannablePanelPrafab_k__BackingField = (struct UnityEngine_GameObject_o *)v70;
          sub_1B00C70(
            (ServantStatusBattleListViewItem_o *)&_4__this->fields._EffectScannablePanelPrafab_k__BackingField,
            (int32_t)v70,
            v71,
            v72);
          v73 = AssetData__GetObject_object__47470892(
                  v51,
                  (System_String_o *)StringLiteral_12835/*"SubmarineEffectScanObstaclePanel"*/,
                  (const MethodInfo_2D4592C *)Method_AssetData_GetObject_GameObject____74577936);
          _4__this->fields._EffectScanObstaclePanelPrafab_k__BackingField = (struct UnityEngine_GameObject_o *)v73;
          sub_1B00C70(
            (ServantStatusBattleListViewItem_o *)&_4__this->fields._EffectScanObstaclePanelPrafab_k__BackingField,
            (int32_t)v73,
            v74,
            v75);
          v76 = AssetData__GetObject_object__47470892(
                  v51,
                  (System_String_o *)StringLiteral_12839/*"SubmarineGridTexture"*/,
                  (const MethodInfo_2D4592C *)Method_AssetData_GetObject_Texture2D____74577960);
          _4__this->fields._GridTexture_k__BackingField = (struct UnityEngine_Texture2D_o *)v76;
          sub_1B00C70(
            (ServantStatusBattleListViewItem_o *)&_4__this->fields._GridTexture_k__BackingField,
            (int32_t)v76,
            v77,
            v78);
          v79 = AssetData__GetObject_object__47470892(
                  v51,
                  (System_String_o *)StringLiteral_12847/*"SubmarineSettings"*/,
                  (const MethodInfo_2D4592C *)Method_AssetData_GetObject_SubmarineSettings___);
          _4__this->fields._Settings_k__BackingField = (struct SubmarineSettings_o *)v79;
          sub_1B00C70(
            (ServantStatusBattleListViewItem_o *)&_4__this->fields._Settings_k__BackingField,
            (int32_t)v79,
            v80,
            v81);
          _4__this->fields._ScanProcessPreventedPrafab_k__BackingField = 0LL;
          sub_1B00C70(
            (ServantStatusBattleListViewItem_o *)&_4__this->fields._ScanProcessPreventedPrafab_k__BackingField,
            0,
            v82,
            v83);
          v84 = AssetData__GetObject_object__47470892(
                  v51,
                  (System_String_o *)StringLiteral_18548/*"ef_animation_skip"*/,
                  (const MethodInfo_2D4592C *)Method_AssetData_GetObject_GameObject____74577936);
          _4__this->fields._AnimationSkipEFfectPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v84;
          sub_1B00C70(
            (ServantStatusBattleListViewItem_o *)&_4__this->fields._AnimationSkipEFfectPrefab_k__BackingField,
            (int32_t)v84,
            v85,
            v86);
          v87 = AssetData__GetObject_object__47470892(
                  v51,
                  (System_String_o *)StringLiteral_12846/*"SubmarineSelectScannerDialog"*/,
                  (const MethodInfo_2D4592C *)Method_AssetData_GetObject_GameObject____74577936);
          _4__this->fields._SelectScannerDialogPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v87;
          sub_1B00C70(
            (ServantStatusBattleListViewItem_o *)&_4__this->fields._SelectScannerDialogPrefab_k__BackingField,
            (int32_t)v87,
            v88,
            v89);
          v90 = AssetData__GetObject_object__47470892(
                  v51,
                  (System_String_o *)StringLiteral_12844/*"SubmarineScanConfirmDialog"*/,
                  (const MethodInfo_2D4592C *)Method_AssetData_GetObject_GameObject____74577936);
          _4__this->fields._ScanConfirmDialogPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v90;
          sub_1B00C70(
            (ServantStatusBattleListViewItem_o *)&_4__this->fields._ScanConfirmDialogPrefab_k__BackingField,
            (int32_t)v90,
            v91,
            v92);
          v93 = AssetData__GetObject_object__47470892(
                  v51,
                  (System_String_o *)StringLiteral_12841/*"SubmarineNewScannerDialog"*/,
                  (const MethodInfo_2D4592C *)Method_AssetData_GetObject_GameObject____74577936);
          _4__this->fields._NewScannerDialogPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v93;
          sub_1B00C70(
            (ServantStatusBattleListViewItem_o *)&_4__this->fields._NewScannerDialogPrefab_k__BackingField,
            (int32_t)v93,
            v94,
            v95);
          this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( this )
          {
            this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)DataManager__GetMasterData_object_(
                                                                       (DataManager_o *)this,
                                                                       (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_EventPanelScanMaster___);
            if ( this )
            {
              ListByEventId = (System_Collections_Generic_IEnumerable_TSource__o *)EventPanelScanMaster__GetListByEventId(
                                                                                     (EventPanelScanMaster_o *)this,
                                                                                     v2->fields.eventId,
                                                                                     0LL);
              v97 = SubmarineMapAssetManager___c_TypeInfo;
              if ( !SubmarineMapAssetManager___c_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(SubmarineMapAssetManager___c_TypeInfo);
                v97 = SubmarineMapAssetManager___c_TypeInfo;
              }
              _9__69_2 = (System_Func_object__int__o *)v97->static_fields->__9__69_2;
              if ( !_9__69_2 )
              {
                if ( !v97->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(v97);
                  v97 = SubmarineMapAssetManager___c_TypeInfo;
                }
                v99 = (Il2CppObject *)v97->static_fields->__9;
                _9__69_2 = (System_Func_object__int__o *)sub_1B00F18(System_Func_EventPanelScanEntity__int__TypeInfo);
                System_Func_object__int____ctor(
                  _9__69_2,
                  v99,
                  Method_SubmarineMapAssetManager___c__CoLoadAssets_b__69_2__,
                  0LL);
                static_fields = SubmarineMapAssetManager___c_TypeInfo->static_fields;
                static_fields->__9__69_2 = (struct System_Func_EventPanelScanEntity__int__o *)_9__69_2;
                sub_1B00C70(
                  (ServantStatusBattleListViewItem_o *)&static_fields->__9__69_2,
                  (int32_t)_9__69_2,
                  v101,
                  v102);
              }
              v103 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                            ListByEventId,
                                                                            (System_Func_TSource__TResult__o *)_9__69_2,
                                                                            (const MethodInfo_2D8F428 *)Method_System_Linq_Enumerable_Select_EventPanelScanEntity__int___);
              v104 = (System_Text_RegularExpressions_Regex_o *)sub_1B00F18(System_Text_RegularExpressions_Regex_TypeInfo);
              System_Text_RegularExpressions_Regex___ctor(v104, (System_String_o *)StringLiteral_12305/*"Scanner_(?<ID>\\d+)"*/, 0LL);
              this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)AssetData__GetObjectNameList(v51, 0LL);
              if ( this )
              {
                _2__current = this->fields.__2__current;
                v106 = this;
                v126 = v2;
                if ( (int)_2__current < 1 )
                {
LABEL_40:
                  v114 = (System_Text_RegularExpressions_Regex_o *)sub_1B00F18(System_Text_RegularExpressions_Regex_TypeInfo);
                  System_Text_RegularExpressions_Regex___ctor(v114, (System_String_o *)StringLiteral_12845/*"SubmarineScanRangeNotificator_(?<ID>\\d+)"*/, 0LL);
                  this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)AssetData__GetObjectNameList(v51, 0LL);
                  if ( !this )
                    goto LABEL_60;
                  v115 = this->fields.__2__current;
                  v116 = this;
                  if ( (int)v115 < 1 )
                  {
LABEL_56:
                    finishCallback = v126->fields.finishCallback;
                    if ( finishCallback )
                      ActionExtensions__Call(finishCallback, 0LL);
                    return 0;
                  }
                  v117 = 0LL;
                  p__4__this = &this->fields.__4__this;
                  while ( v117 < (unsigned int)v115 )
                  {
                    if ( !v114 )
                      goto LABEL_60;
                    v119 = (System_String_o *)p__4__this[v117];
                    this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)System_Text_RegularExpressions_Regex__Match_66881532(
                                                                               v114,
                                                                               v119,
                                                                               0LL);
                    if ( !this )
                      goto LABEL_60;
                    v120 = this;
                    this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)System_Text_RegularExpressions_Group__get_Success(
                                                                               (System_Text_RegularExpressions_Group_o *)this,
                                                                               0LL);
                    if ( ((unsigned __int8)this & 1) != 0 )
                    {
                      this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)((__int64 (__fastcall *)(SubmarineMapAssetManager__CoLoadAssets_d__69_o *, Il2CppMethodPointer))v120->klass->vtable._5_System_IDisposable_Dispose.method)(
                                                                                 v120,
                                                                                 v120->klass->vtable._6_MoveNext.methodPtr);
                      if ( !this )
                        goto LABEL_60;
                      this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)System_Text_RegularExpressions_GroupCollection__get_Item_66864576(
                                                                                 (System_Text_RegularExpressions_GroupCollection_o *)this,
                                                                                 (System_String_o *)StringLiteral_7258/*"ID"*/,
                                                                                 0LL);
                      if ( !this )
                        goto LABEL_60;
                      Value = System_Text_RegularExpressions_Capture__get_Value(
                                (System_Text_RegularExpressions_Capture_o *)this,
                                0LL);
                      v122 = System_Int32__Parse(Value, 0LL);
                      this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)System_Linq_Enumerable__Contains_int_(
                                                                                 v103,
                                                                                 v122,
                                                                                 (const MethodInfo_2D7A61C *)Method_System_Linq_Enumerable_Contains_int___);
                      if ( ((unsigned __int8)this & 1) != 0 )
                      {
                        v123 = AssetData__GetObject_object__47470892(
                                 v51,
                                 v119,
                                 (const MethodInfo_2D4592C *)Method_AssetData_GetObject_GameObject____74577936);
                        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                        this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)UnityEngine_Object__op_Equality(
                                                                                   (UnityEngine_Object_o *)v123,
                                                                                   0LL,
                                                                                   0LL);
                        if ( ((unsigned __int8)this & 1) == 0 )
                        {
                          this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)_4__this->fields.scanRangeNotificatorPrefabDict;
                          if ( !this )
                            goto LABEL_60;
                          System_Collections_Generic_Dictionary_int__object___set_Item(
                            (System_Collections_Generic_Dictionary_int__object__o *)this,
                            v122,
                            v123,
                            (const MethodInfo_3036518 *)Method_System_Collections_Generic_Dictionary_int__GameObject__set_Item__);
                        }
                      }
                    }
                    LODWORD(v115) = v116->fields.__2__current;
                    if ( (__int64)++v117 >= (int)v115 )
                      goto LABEL_56;
                  }
                }
                else
                {
                  v107 = 0LL;
                  v108 = &this->fields.__4__this;
                  while ( v107 < (unsigned int)_2__current )
                  {
                    if ( !v104 )
                      goto LABEL_60;
                    v109 = (System_String_o *)v108[v107];
                    this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)System_Text_RegularExpressions_Regex__Match_66881532(
                                                                               v104,
                                                                               v109,
                                                                               0LL);
                    if ( !this )
                      goto LABEL_60;
                    v110 = this;
                    this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)System_Text_RegularExpressions_Group__get_Success(
                                                                               (System_Text_RegularExpressions_Group_o *)this,
                                                                               0LL);
                    if ( ((unsigned __int8)this & 1) != 0 )
                    {
                      this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)((__int64 (__fastcall *)(SubmarineMapAssetManager__CoLoadAssets_d__69_o *, Il2CppMethodPointer))v110->klass->vtable._5_System_IDisposable_Dispose.method)(
                                                                                 v110,
                                                                                 v110->klass->vtable._6_MoveNext.methodPtr);
                      if ( !this )
                        goto LABEL_60;
                      this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)System_Text_RegularExpressions_GroupCollection__get_Item_66864576(
                                                                                 (System_Text_RegularExpressions_GroupCollection_o *)this,
                                                                                 (System_String_o *)StringLiteral_7258/*"ID"*/,
                                                                                 0LL);
                      if ( !this )
                        goto LABEL_60;
                      v111 = System_Text_RegularExpressions_Capture__get_Value(
                               (System_Text_RegularExpressions_Capture_o *)this,
                               0LL);
                      v112 = System_Int32__Parse(v111, 0LL);
                      this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)System_Linq_Enumerable__Contains_int_(
                                                                                 v103,
                                                                                 v112,
                                                                                 (const MethodInfo_2D7A61C *)Method_System_Linq_Enumerable_Contains_int___);
                      if ( ((unsigned __int8)this & 1) != 0 )
                      {
                        v113 = AssetData__GetObject_object__47470892(
                                 v51,
                                 v109,
                                 (const MethodInfo_2D4592C *)Method_AssetData_GetObject_GameObject____74577936);
                        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                        this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)UnityEngine_Object__op_Equality(
                                                                                   (UnityEngine_Object_o *)v113,
                                                                                   0LL,
                                                                                   0LL);
                        if ( ((unsigned __int8)this & 1) == 0 )
                        {
                          this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)_4__this->fields.scannerPrefabDict;
                          if ( !this )
                            goto LABEL_60;
                          System_Collections_Generic_Dictionary_int__object___set_Item(
                            (System_Collections_Generic_Dictionary_int__object__o *)this,
                            v112,
                            v113,
                            (const MethodInfo_3036518 *)Method_System_Collections_Generic_Dictionary_int__GameObject__set_Item__);
                        }
                      }
                    }
                    LODWORD(_2__current) = v106->fields.__2__current;
                    if ( (__int64)++v107 >= (int)_2__current )
                      goto LABEL_40;
                  }
                }
LABEL_61:
                sub_1B00F30(this, method);
              }
            }
          }
        }
      }
    }
LABEL_60:
    sub_1B00F28(this, method);
  }
  if ( _1__state )
    return 0;
  v2->fields.__1__state = -1;
  v41 = sub_1B00F18(SubmarineMapAssetManager___c__DisplayClass69_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v41, 0LL);
  if ( !v41 )
    goto LABEL_60;
  *(_BYTE *)(v41 + 16) = 0;
  if ( !_4__this )
    goto LABEL_60;
  v42 = _4__this->fields.loadAssetNames;
  v43 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
  System_Action___ctor(
    v43,
    (Il2CppObject *)v41,
    Method_SubmarineMapAssetManager___c__DisplayClass69_0__CoLoadAssets_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  v44 = 1;
  AssetManager__loadAssetStorage_36596448(v42, v43, 1, 0LL);
  v45 = (System_Func_bool__o *)sub_1B00F18(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v45,
    (Il2CppObject *)v41,
    Method_SubmarineMapAssetManager___c__DisplayClass69_0__CoLoadAssets_b__1__,
    0LL);
  v46 = (UnityEngine_WaitUntil_o *)sub_1B00F18(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v46, v45, 0LL);
  v2->fields.__2__current = (Il2CppObject *)v46;
  p__2__current = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
  sub_1B00C70(p__2__current, (int32_t)v46, v48, v49);
  *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
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

  v2 = sub_1B00CE0(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B00F18(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B00CE0(&Method_SubmarineMapAssetManager__CoLoadAssets_d__69_System_Collections_IEnumerator_Reset__);
  sub_1B00DF4(v3, v4);
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
  int32_t v4; // w3

  if ( (byte_48DF5F4 & 1) == 0 )
  {
    sub_1B00CCC(&SubmarineMapAssetManager___c_TypeInfo, v1);
    byte_48DF5F4 = 1;
  }
  v2 = (Il2CppObject *)sub_1B00F18(SubmarineMapAssetManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  SubmarineMapAssetManager___c_TypeInfo->static_fields->__9 = (struct SubmarineMapAssetManager___c_o *)v2;
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)SubmarineMapAssetManager___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
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
    sub_1B00F28(this, 0LL);
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