void __fastcall SubmarineMapAssetManager___ctor(SubmarineMapAssetManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  int32_t v5; // w2
  int32_t v6; // w3
  struct System_String_array *v7; // x20
  int32_t v8; // w1
  int32_t v9; // w2
  int32_t v10; // w3

  if ( (byte_4A57E75 & 1) == 0 )
  {
    sub_1B885B0(&string___TypeInfo);
    sub_1B885B0(&StringLiteral_6167/*"Event/Submarine"*/);
    byte_4A57E75 = 1;
  }
  v3 = sub_1B88658(string___TypeInfo, 1LL);
  if ( !v3 )
    sub_1B8880C(0LL, v4);
  v7 = (struct System_String_array *)v3;
  if ( !*(_DWORD *)(v3 + 24) )
    sub_1B88814(v3, v4);
  v8 = StringLiteral_6167/*"Event/Submarine"*/;
  *(_QWORD *)(v3 + 32) = StringLiteral_6167/*"Event/Submarine"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v3 + 32), v8, v5, v6);
  this->fields.loadAssetNames = v7;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.loadAssetNames, (int32_t)v7, v9, v10);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


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

  if ( (byte_4A57E71 & 1) == 0 )
  {
    sub_1B885B0(&SubmarineMapAssetManager__CoLoadAssets_d__69_TypeInfo);
    byte_4A57E71 = 1;
  }
  v7 = sub_1B887FC(SubmarineMapAssetManager__CoLoadAssets_d__69_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 32) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 32), (int32_t)this, v8, v9);
  *(_DWORD *)(v7 + 40) = eventId;
  *(_QWORD *)(v7 + 48) = finishCallback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 48), (int32_t)finishCallback, v10, v11);
  return (System_Collections_IEnumerator_o *)v7;
}


void __fastcall SubmarineMapAssetManager__Finish(SubmarineMapAssetManager_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_int__GameObject__o *scannerPrefabDict; // x0
  int32_t v4; // w2
  int32_t v5; // w3
  int32_t v6; // w2
  int32_t v7; // w3
  int32_t v8; // w2
  int32_t v9; // w3
  int32_t v10; // w2
  int32_t v11; // w3
  int32_t v12; // w2
  int32_t v13; // w3
  int32_t v14; // w2
  int32_t v15; // w3
  int32_t v16; // w2
  int32_t v17; // w3
  int32_t v18; // w2
  int32_t v19; // w3
  int32_t v20; // w2
  int32_t v21; // w3
  int32_t v22; // w2
  int32_t v23; // w3
  int32_t v24; // w2
  int32_t v25; // w3
  int32_t v26; // w2
  int32_t v27; // w3
  int32_t v28; // w2
  int32_t v29; // w3
  int32_t v30; // w2
  int32_t v31; // w3
  int32_t v32; // w2
  int32_t v33; // w3
  struct UnityEngine_GameObject_o **p_AnimationSkipEFfectPrefab_k__BackingField; // x19
  int32_t v35; // w2
  int32_t v36; // w3
  System_String_array *v37; // x19

  if ( (byte_4A57E74 & 1) == 0 )
  {
    sub_1B885B0(&AssetManager_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__GameObject__Clear__);
    byte_4A57E74 = 1;
  }
  scannerPrefabDict = this->fields.scannerPrefabDict;
  if ( !scannerPrefabDict
    || (System_Collections_Generic_Dictionary_int__object___Clear(
          (System_Collections_Generic_Dictionary_int__object__o *)scannerPrefabDict,
          (const MethodInfo_316DAE0 *)Method_System_Collections_Generic_Dictionary_int__GameObject__Clear__),
        (scannerPrefabDict = this->fields.scanRangeNotificatorPrefabDict) == 0LL) )
  {
    sub_1B8880C(scannerPrefabDict, method);
  }
  System_Collections_Generic_Dictionary_int__object___Clear(
    (System_Collections_Generic_Dictionary_int__object__o *)scannerPrefabDict,
    (const MethodInfo_316DAE0 *)Method_System_Collections_Generic_Dictionary_int__GameObject__Clear__);
  this->fields._PanelPrefab_k__BackingField = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields, 0, v4, v5);
  this->fields._GridLinePrefab_k__BackingField = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields._GridLinePrefab_k__BackingField, 0, v6, v7);
  this->fields._PanelContainerPrefab_k__BackingField = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields._PanelContainerPrefab_k__BackingField, 0, v8, v9);
  this->fields._EffectContainerPrefab_k__BackingField = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields._EffectContainerPrefab_k__BackingField, 0, v10, v11);
  this->fields._ClosedPanelTexture_k__BackingField = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields._ClosedPanelTexture_k__BackingField, 0, v12, v13);
  this->fields._GridTexture_k__BackingField = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields._GridTexture_k__BackingField, 0, v14, v15);
  this->fields._EffectScannedPanelPrefab_k__BackingField = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields._EffectScannedPanelPrefab_k__BackingField, 0, v16, v17);
  this->fields._EffectSelectedPanelPrefab_k__BackingField = 0LL;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._EffectSelectedPanelPrefab_k__BackingField,
    0,
    v18,
    v19);
  this->fields._EffectScannablePanelPrafab_k__BackingField = 0LL;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._EffectScannablePanelPrafab_k__BackingField,
    0,
    v20,
    v21);
  this->fields._EffectScanObstaclePanelPrafab_k__BackingField = 0LL;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._EffectScanObstaclePanelPrafab_k__BackingField,
    0,
    v22,
    v23);
  this->fields._ScanProcessPreventedPrafab_k__BackingField = 0LL;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._ScanProcessPreventedPrafab_k__BackingField,
    0,
    v24,
    v25);
  this->fields._SelectScannerDialogPrefab_k__BackingField = 0LL;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._SelectScannerDialogPrefab_k__BackingField,
    0,
    v26,
    v27);
  this->fields._ScanConfirmDialogPrefab_k__BackingField = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields._ScanConfirmDialogPrefab_k__BackingField, 0, v28, v29);
  this->fields._NewScannerDialogPrefab_k__BackingField = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields._NewScannerDialogPrefab_k__BackingField, 0, v30, v31);
  this->fields._Settings_k__BackingField = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields._Settings_k__BackingField, 0, v32, v33);
  this->fields._AnimationSkipEFfectPrefab_k__BackingField = 0LL;
  p_AnimationSkipEFfectPrefab_k__BackingField = &this->fields._AnimationSkipEFfectPrefab_k__BackingField;
  sub_1B88554((ServantStatusBattleListViewItem_o *)p_AnimationSkipEFfectPrefab_k__BackingField, 0, v35, v36);
  v37 = (System_String_array *)p_AnimationSkipEFfectPrefab_k__BackingField[3];
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAssetStorage_37799632(v37, 0LL);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall SubmarineMapAssetManager__GetScanAnimObjectPrefab(
        SubmarineMapAssetManager_o *this,
        int32_t scanObjectId,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_int__GameObject__o *scannerPrefabDict; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A57E72 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__GameObject__TryGetValue__);
    byte_4A57E72 = 1;
  }
  value = 0LL;
  scannerPrefabDict = this->fields.scannerPrefabDict;
  if ( !scannerPrefabDict )
    sub_1B8880C(0LL, *(_QWORD *)&scanObjectId);
  System_Collections_Generic_Dictionary_int__object___TryGetValue(
    (System_Collections_Generic_Dictionary_int__object__o *)scannerPrefabDict,
    scanObjectId,
    &value,
    (const MethodInfo_316F0E4 *)Method_System_Collections_Generic_Dictionary_int__GameObject__TryGetValue__);
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

  if ( (byte_4A57E73 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__GameObject__TryGetValue__);
    byte_4A57E73 = 1;
  }
  value = 0LL;
  scanRangeNotificatorPrefabDict = this->fields.scanRangeNotificatorPrefabDict;
  if ( !scanRangeNotificatorPrefabDict )
    sub_1B8880C(0LL, *(_QWORD *)&scanObjectId);
  System_Collections_Generic_Dictionary_int__object___TryGetValue(
    (System_Collections_Generic_Dictionary_int__object__o *)scanRangeNotificatorPrefabDict,
    scanObjectId,
    &value,
    (const MethodInfo_316F0E4 *)Method_System_Collections_Generic_Dictionary_int__GameObject__TryGetValue__);
  return (UnityEngine_GameObject_o *)value;
}


void __fastcall SubmarineMapAssetManager__Initialize(SubmarineMapAssetManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_Collections_Generic_Dictionary_int__object__o *v6; // x20
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_4A57E6F & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__GameObject___ctor__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_int__GameObject__TypeInfo);
    byte_4A57E6F = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B887FC(System_Collections_Generic_Dictionary_int__GameObject__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v3,
    (const MethodInfo_316CF84 *)Method_System_Collections_Generic_Dictionary_int__GameObject___ctor__);
  this->fields.scannerPrefabDict = (struct System_Collections_Generic_Dictionary_int__GameObject__o *)v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.scannerPrefabDict, (int32_t)v3, v4, v5);
  v6 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B887FC(System_Collections_Generic_Dictionary_int__GameObject__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v6,
    (const MethodInfo_316CF84 *)Method_System_Collections_Generic_Dictionary_int__GameObject___ctor__);
  this->fields.scanRangeNotificatorPrefabDict = (struct System_Collections_Generic_Dictionary_int__GameObject__o *)v6;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.scanRangeNotificatorPrefabDict, (int32_t)v6, v7, v8);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SubmarineMapAssetManager__LoadMapObject(
        SubmarineMapAssetManager_o *this,
        AssetData_o *assetData,
        int32_t mapId,
        const MethodInfo *method)
{
  __int64 v4; // x4
  Il2CppObject *v8; // x0
  System_String_o *v9; // x0
  __int64 v10; // x1
  Il2CppObject *Object_object__48635516; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  int32_t v14; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4A57E70 & 1) == 0 )
  {
    sub_1B885B0(&Method_AssetData_GetObject_Texture2D____76085376);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&StringLiteral_24954/*"{0:D6}_ClosedPanelTexture"*/);
    byte_4A57E70 = 1;
  }
  v14 = mapId;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v14, *(_QWORD *)&mapId, method, v4);
  v9 = System_String__Format((System_String_o *)StringLiteral_24954/*"{0:D6}_ClosedPanelTexture"*/, v8, 0LL);
  if ( !assetData )
    sub_1B8880C(v9, v10);
  Object_object__48635516 = AssetData__GetObject_object__48635516(
                              assetData,
                              v9,
                              (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_Texture2D____76085376);
  this->fields._ClosedPanelTexture_k__BackingField = (struct UnityEngine_Texture2D_o *)Object_object__48635516;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._ClosedPanelTexture_k__BackingField,
    (int32_t)Object_object__48635516,
    v12,
    v13);
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
  sub_1B88554(
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
  sub_1B88554(
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
  sub_1B88554(
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
  sub_1B88554(
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
  sub_1B88554(
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
  sub_1B88554(
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
  sub_1B88554(
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
  sub_1B88554(
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
  sub_1B88554(
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
  sub_1B88554(
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
  sub_1B88554(
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
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)value, (int32_t)method, v3);
}


void __fastcall SubmarineMapAssetManager__set_ScanConfirmDialogPrefab(
        SubmarineMapAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._ScanConfirmDialogPrefab_k__BackingField = value;
  sub_1B88554(
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
  sub_1B88554(
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
  sub_1B88554(
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
  sub_1B88554(
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
  int32_t _1__state; // w8
  struct SubmarineMapAssetManager_o *_4__this; // x26
  __int64 v5; // x20
  System_String_array *v6; // x22
  System_Action_o *v7; // x23
  bool v8; // w21
  System_Func_bool__o *v9; // x22
  UnityEngine_WaitUntil_o *v10; // x20
  ServantStatusBattleListViewItem_o *p__2__current; // x24
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_array *loadAssetNames; // x20
  AssetData_o *v15; // x20
  Il2CppObject *Object_object__48635516; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  Il2CppObject *v19; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  Il2CppObject *v22; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  Il2CppObject *v25; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  Il2CppObject *v28; // x0
  int32_t v29; // w2
  int32_t v30; // w3
  Il2CppObject *v31; // x0
  int32_t v32; // w2
  int32_t v33; // w3
  Il2CppObject *v34; // x0
  int32_t v35; // w2
  int32_t v36; // w3
  Il2CppObject *v37; // x0
  int32_t v38; // w2
  int32_t v39; // w3
  Il2CppObject *v40; // x0
  int32_t v41; // w2
  int32_t v42; // w3
  Il2CppObject *v43; // x0
  int32_t v44; // w2
  int32_t v45; // w3
  int32_t v46; // w2
  int32_t v47; // w3
  Il2CppObject *v48; // x0
  int32_t v49; // w2
  int32_t v50; // w3
  Il2CppObject *v51; // x0
  int32_t v52; // w2
  int32_t v53; // w3
  Il2CppObject *v54; // x0
  int32_t v55; // w2
  int32_t v56; // w3
  Il2CppObject *v57; // x0
  int32_t v58; // w2
  int32_t v59; // w3
  System_Collections_Generic_IEnumerable_TSource__o *ListByEventId; // x21
  SubmarineMapAssetManager___c_c *v61; // x8
  System_Func_object__int__o *_9__69_2; // x22
  Il2CppObject *v63; // x23
  struct SubmarineMapAssetManager___c_StaticFields *static_fields; // x0
  int32_t v65; // w2
  int32_t v66; // w3
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
  if ( (byte_4A57E77 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_AssetData_GetObject_GameObject____76085352);
    sub_1B885B0(&Method_AssetData_GetObject_SubmarineSettings___);
    sub_1B885B0(&Method_AssetData_GetObject_Texture2D____76085376);
    sub_1B885B0(&AssetManager_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventPanelScanMaster___);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__GameObject__set_Item__);
    sub_1B885B0(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Select_EventPanelScanEntity__int___);
    sub_1B885B0(&System_Func_bool__TypeInfo);
    sub_1B885B0(&System_Func_EventPanelScanEntity__int__TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&System_Text_RegularExpressions_Regex_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_SubmarineMapAssetManager___c__CoLoadAssets_b__69_2__);
    sub_1B885B0(&Method_SubmarineMapAssetManager___c__DisplayClass69_0__CoLoadAssets_b__0__);
    sub_1B885B0(&Method_SubmarineMapAssetManager___c__DisplayClass69_0__CoLoadAssets_b__1__);
    sub_1B885B0(&SubmarineMapAssetManager___c__DisplayClass69_0_TypeInfo);
    sub_1B885B0(&SubmarineMapAssetManager___c_TypeInfo);
    sub_1B885B0(&UnityEngine_WaitUntil_TypeInfo);
    sub_1B885B0(&StringLiteral_5880/*"EffectScannedPanel"*/);
    sub_1B885B0(&StringLiteral_12509/*"Scanner_(?<ID>\\d+)"*/);
    sub_1B885B0(&StringLiteral_13060/*"SubmarineScanConfirmDialog"*/);
    sub_1B885B0(&StringLiteral_18799/*"ef_animation_skip"*/);
    sub_1B885B0(&StringLiteral_13058/*"SubmarinePanel"*/);
    sub_1B885B0(&StringLiteral_13062/*"SubmarineSelectScannerDialog"*/);
    sub_1B885B0(&StringLiteral_13051/*"SubmarineEffectScanObstaclePanel"*/);
    sub_1B885B0(&StringLiteral_13054/*"SubmarineGridLine"*/);
    sub_1B885B0(&StringLiteral_13059/*"SubmarinePanelContainer"*/);
    sub_1B885B0(&StringLiteral_13061/*"SubmarineScanRangeNotificator_(?<ID>\\d+)"*/);
    sub_1B885B0(&StringLiteral_13057/*"SubmarineNewScannerDialog"*/);
    sub_1B885B0(&StringLiteral_13055/*"SubmarineGridTexture"*/);
    sub_1B885B0(&StringLiteral_13053/*"SubmarineEffectSelectedPanel"*/);
    sub_1B885B0(&StringLiteral_13050/*"SubmarineEffectContainer"*/);
    sub_1B885B0(&StringLiteral_13052/*"SubmarineEffectScannablePanel"*/);
    sub_1B885B0(&StringLiteral_7336/*"ID"*/);
    this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)sub_1B885B0(&StringLiteral_13063/*"SubmarineSettings"*/);
    byte_4A57E77 = 1;
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
      this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)AssetManager__getAssetStorage_37798664(
                                                                 loadAssetNames,
                                                                 0LL);
      if ( this )
      {
        if ( !LODWORD(this->fields.__2__current) )
          goto LABEL_61;
        v15 = (AssetData_o *)this->fields.__4__this;
        if ( v15 )
        {
          Object_object__48635516 = AssetData__GetObject_object__48635516(
                                      (AssetData_o *)this->fields.__4__this,
                                      (System_String_o *)StringLiteral_13058/*"SubmarinePanel"*/,
                                      (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_GameObject____76085352);
          _4__this->fields._PanelPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)Object_object__48635516;
          sub_1B88554(
            (ServantStatusBattleListViewItem_o *)&_4__this->fields,
            (int32_t)Object_object__48635516,
            v17,
            v18);
          v19 = AssetData__GetObject_object__48635516(
                  v15,
                  (System_String_o *)StringLiteral_13054/*"SubmarineGridLine"*/,
                  (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_GameObject____76085352);
          _4__this->fields._GridLinePrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v19;
          sub_1B88554(
            (ServantStatusBattleListViewItem_o *)&_4__this->fields._GridLinePrefab_k__BackingField,
            (int32_t)v19,
            v20,
            v21);
          v22 = AssetData__GetObject_object__48635516(
                  v15,
                  (System_String_o *)StringLiteral_13059/*"SubmarinePanelContainer"*/,
                  (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_GameObject____76085352);
          _4__this->fields._PanelContainerPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v22;
          sub_1B88554(
            (ServantStatusBattleListViewItem_o *)&_4__this->fields._PanelContainerPrefab_k__BackingField,
            (int32_t)v22,
            v23,
            v24);
          v25 = AssetData__GetObject_object__48635516(
                  v15,
                  (System_String_o *)StringLiteral_13050/*"SubmarineEffectContainer"*/,
                  (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_GameObject____76085352);
          _4__this->fields._EffectContainerPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v25;
          sub_1B88554(
            (ServantStatusBattleListViewItem_o *)&_4__this->fields._EffectContainerPrefab_k__BackingField,
            (int32_t)v25,
            v26,
            v27);
          v28 = AssetData__GetObject_object__48635516(
                  v15,
                  (System_String_o *)StringLiteral_5880/*"EffectScannedPanel"*/,
                  (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_GameObject____76085352);
          _4__this->fields._EffectScannedPanelPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v28;
          sub_1B88554(
            (ServantStatusBattleListViewItem_o *)&_4__this->fields._EffectScannedPanelPrefab_k__BackingField,
            (int32_t)v28,
            v29,
            v30);
          v31 = AssetData__GetObject_object__48635516(
                  v15,
                  (System_String_o *)StringLiteral_13053/*"SubmarineEffectSelectedPanel"*/,
                  (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_GameObject____76085352);
          _4__this->fields._EffectSelectedPanelPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v31;
          sub_1B88554(
            (ServantStatusBattleListViewItem_o *)&_4__this->fields._EffectSelectedPanelPrefab_k__BackingField,
            (int32_t)v31,
            v32,
            v33);
          v34 = AssetData__GetObject_object__48635516(
                  v15,
                  (System_String_o *)StringLiteral_13052/*"SubmarineEffectScannablePanel"*/,
                  (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_GameObject____76085352);
          _4__this->fields._EffectScannablePanelPrafab_k__BackingField = (struct UnityEngine_GameObject_o *)v34;
          sub_1B88554(
            (ServantStatusBattleListViewItem_o *)&_4__this->fields._EffectScannablePanelPrafab_k__BackingField,
            (int32_t)v34,
            v35,
            v36);
          v37 = AssetData__GetObject_object__48635516(
                  v15,
                  (System_String_o *)StringLiteral_13051/*"SubmarineEffectScanObstaclePanel"*/,
                  (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_GameObject____76085352);
          _4__this->fields._EffectScanObstaclePanelPrafab_k__BackingField = (struct UnityEngine_GameObject_o *)v37;
          sub_1B88554(
            (ServantStatusBattleListViewItem_o *)&_4__this->fields._EffectScanObstaclePanelPrafab_k__BackingField,
            (int32_t)v37,
            v38,
            v39);
          v40 = AssetData__GetObject_object__48635516(
                  v15,
                  (System_String_o *)StringLiteral_13055/*"SubmarineGridTexture"*/,
                  (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_Texture2D____76085376);
          _4__this->fields._GridTexture_k__BackingField = (struct UnityEngine_Texture2D_o *)v40;
          sub_1B88554(
            (ServantStatusBattleListViewItem_o *)&_4__this->fields._GridTexture_k__BackingField,
            (int32_t)v40,
            v41,
            v42);
          v43 = AssetData__GetObject_object__48635516(
                  v15,
                  (System_String_o *)StringLiteral_13063/*"SubmarineSettings"*/,
                  (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_SubmarineSettings___);
          _4__this->fields._Settings_k__BackingField = (struct SubmarineSettings_o *)v43;
          sub_1B88554(
            (ServantStatusBattleListViewItem_o *)&_4__this->fields._Settings_k__BackingField,
            (int32_t)v43,
            v44,
            v45);
          _4__this->fields._ScanProcessPreventedPrafab_k__BackingField = 0LL;
          sub_1B88554(
            (ServantStatusBattleListViewItem_o *)&_4__this->fields._ScanProcessPreventedPrafab_k__BackingField,
            0,
            v46,
            v47);
          v48 = AssetData__GetObject_object__48635516(
                  v15,
                  (System_String_o *)StringLiteral_18799/*"ef_animation_skip"*/,
                  (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_GameObject____76085352);
          _4__this->fields._AnimationSkipEFfectPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v48;
          sub_1B88554(
            (ServantStatusBattleListViewItem_o *)&_4__this->fields._AnimationSkipEFfectPrefab_k__BackingField,
            (int32_t)v48,
            v49,
            v50);
          v51 = AssetData__GetObject_object__48635516(
                  v15,
                  (System_String_o *)StringLiteral_13062/*"SubmarineSelectScannerDialog"*/,
                  (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_GameObject____76085352);
          _4__this->fields._SelectScannerDialogPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v51;
          sub_1B88554(
            (ServantStatusBattleListViewItem_o *)&_4__this->fields._SelectScannerDialogPrefab_k__BackingField,
            (int32_t)v51,
            v52,
            v53);
          v54 = AssetData__GetObject_object__48635516(
                  v15,
                  (System_String_o *)StringLiteral_13060/*"SubmarineScanConfirmDialog"*/,
                  (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_GameObject____76085352);
          _4__this->fields._ScanConfirmDialogPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v54;
          sub_1B88554(
            (ServantStatusBattleListViewItem_o *)&_4__this->fields._ScanConfirmDialogPrefab_k__BackingField,
            (int32_t)v54,
            v55,
            v56);
          v57 = AssetData__GetObject_object__48635516(
                  v15,
                  (System_String_o *)StringLiteral_13057/*"SubmarineNewScannerDialog"*/,
                  (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_GameObject____76085352);
          _4__this->fields._NewScannerDialogPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v57;
          sub_1B88554(
            (ServantStatusBattleListViewItem_o *)&_4__this->fields._NewScannerDialogPrefab_k__BackingField,
            (int32_t)v57,
            v58,
            v59);
          this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( this )
          {
            this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)DataManager__GetMasterData_object_(
                                                                       (DataManager_o *)this,
                                                                       (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventPanelScanMaster___);
            if ( this )
            {
              ListByEventId = (System_Collections_Generic_IEnumerable_TSource__o *)EventPanelScanMaster__GetListByEventId(
                                                                                     (EventPanelScanMaster_o *)this,
                                                                                     v2->fields.eventId,
                                                                                     0LL);
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
                _9__69_2 = (System_Func_object__int__o *)sub_1B887FC(System_Func_EventPanelScanEntity__int__TypeInfo);
                System_Func_object__int____ctor(
                  _9__69_2,
                  v63,
                  Method_SubmarineMapAssetManager___c__CoLoadAssets_b__69_2__,
                  0LL);
                static_fields = SubmarineMapAssetManager___c_TypeInfo->static_fields;
                static_fields->__9__69_2 = (struct System_Func_EventPanelScanEntity__int__o *)_9__69_2;
                sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__69_2, (int32_t)_9__69_2, v65, v66);
              }
              v67 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                           ListByEventId,
                                                                           (System_Func_TSource__TResult__o *)_9__69_2,
                                                                           (const MethodInfo_2EAFB30 *)Method_System_Linq_Enumerable_Select_EventPanelScanEntity__int___);
              v68 = (System_Text_RegularExpressions_Regex_o *)sub_1B887FC(System_Text_RegularExpressions_Regex_TypeInfo);
              System_Text_RegularExpressions_Regex___ctor(v68, (System_String_o *)StringLiteral_12509/*"Scanner_(?<ID>\\d+)"*/, 0LL);
              this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)AssetData__GetObjectNameList(v15, 0LL);
              if ( this )
              {
                _2__current = this->fields.__2__current;
                v70 = this;
                v90 = v2;
                if ( (int)_2__current < 1 )
                {
LABEL_40:
                  v78 = (System_Text_RegularExpressions_Regex_o *)sub_1B887FC(System_Text_RegularExpressions_Regex_TypeInfo);
                  System_Text_RegularExpressions_Regex___ctor(v78, (System_String_o *)StringLiteral_13061/*"SubmarineScanRangeNotificator_(?<ID>\\d+)"*/, 0LL);
                  this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)AssetData__GetObjectNameList(v15, 0LL);
                  if ( !this )
                    goto LABEL_60;
                  v79 = this->fields.__2__current;
                  v80 = this;
                  if ( (int)v79 < 1 )
                  {
LABEL_56:
                    finishCallback = v90->fields.finishCallback;
                    if ( finishCallback )
                      ActionExtensions__Call(finishCallback, 0LL);
                    return 0;
                  }
                  v81 = 0LL;
                  p__4__this = &this->fields.__4__this;
                  while ( v81 < (unsigned int)v79 )
                  {
                    if ( !v78 )
                      goto LABEL_60;
                    v83 = (System_String_o *)p__4__this[v81];
                    this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)System_Text_RegularExpressions_Regex__Match_68263256(
                                                                               v78,
                                                                               v83,
                                                                               0LL);
                    if ( !this )
                      goto LABEL_60;
                    v84 = this;
                    this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)System_Text_RegularExpressions_Group__get_Success(
                                                                               (System_Text_RegularExpressions_Group_o *)this,
                                                                               0LL);
                    if ( ((unsigned __int8)this & 1) != 0 )
                    {
                      this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)((__int64 (__fastcall *)(SubmarineMapAssetManager__CoLoadAssets_d__69_o *, Il2CppMethodPointer))v84->klass->vtable._5_System_IDisposable_Dispose.method)(
                                                                                 v84,
                                                                                 v84->klass->vtable._6_MoveNext.methodPtr);
                      if ( !this )
                        goto LABEL_60;
                      this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)System_Text_RegularExpressions_GroupCollection__get_Item_68246300(
                                                                                 (System_Text_RegularExpressions_GroupCollection_o *)this,
                                                                                 (System_String_o *)StringLiteral_7336/*"ID"*/,
                                                                                 0LL);
                      if ( !this )
                        goto LABEL_60;
                      Value = System_Text_RegularExpressions_Capture__get_Value(
                                (System_Text_RegularExpressions_Capture_o *)this,
                                0LL);
                      v86 = System_Int32__Parse(Value, 0LL);
                      this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)System_Linq_Enumerable__Contains_int_(
                                                                                 v67,
                                                                                 v86,
                                                                                 (const MethodInfo_2E99A14 *)Method_System_Linq_Enumerable_Contains_int___);
                      if ( ((unsigned __int8)this & 1) != 0 )
                      {
                        v87 = AssetData__GetObject_object__48635516(
                                v15,
                                v83,
                                (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_GameObject____76085352);
                        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                        this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)UnityEngine_Object__op_Equality(
                                                                                   (UnityEngine_Object_o *)v87,
                                                                                   0LL,
                                                                                   0LL);
                        if ( ((unsigned __int8)this & 1) == 0 )
                        {
                          this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)_4__this->fields.scanRangeNotificatorPrefabDict;
                          if ( !this )
                            goto LABEL_60;
                          System_Collections_Generic_Dictionary_int__object___set_Item(
                            (System_Collections_Generic_Dictionary_int__object__o *)this,
                            v86,
                            v87,
                            (const MethodInfo_316D944 *)Method_System_Collections_Generic_Dictionary_int__GameObject__set_Item__);
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
                  v71 = 0LL;
                  v72 = &this->fields.__4__this;
                  while ( v71 < (unsigned int)_2__current )
                  {
                    if ( !v68 )
                      goto LABEL_60;
                    v73 = (System_String_o *)v72[v71];
                    this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)System_Text_RegularExpressions_Regex__Match_68263256(
                                                                               v68,
                                                                               v73,
                                                                               0LL);
                    if ( !this )
                      goto LABEL_60;
                    v74 = this;
                    this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)System_Text_RegularExpressions_Group__get_Success(
                                                                               (System_Text_RegularExpressions_Group_o *)this,
                                                                               0LL);
                    if ( ((unsigned __int8)this & 1) != 0 )
                    {
                      this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)((__int64 (__fastcall *)(SubmarineMapAssetManager__CoLoadAssets_d__69_o *, Il2CppMethodPointer))v74->klass->vtable._5_System_IDisposable_Dispose.method)(
                                                                                 v74,
                                                                                 v74->klass->vtable._6_MoveNext.methodPtr);
                      if ( !this )
                        goto LABEL_60;
                      this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)System_Text_RegularExpressions_GroupCollection__get_Item_68246300(
                                                                                 (System_Text_RegularExpressions_GroupCollection_o *)this,
                                                                                 (System_String_o *)StringLiteral_7336/*"ID"*/,
                                                                                 0LL);
                      if ( !this )
                        goto LABEL_60;
                      v75 = System_Text_RegularExpressions_Capture__get_Value(
                              (System_Text_RegularExpressions_Capture_o *)this,
                              0LL);
                      v76 = System_Int32__Parse(v75, 0LL);
                      this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)System_Linq_Enumerable__Contains_int_(
                                                                                 v67,
                                                                                 v76,
                                                                                 (const MethodInfo_2E99A14 *)Method_System_Linq_Enumerable_Contains_int___);
                      if ( ((unsigned __int8)this & 1) != 0 )
                      {
                        v77 = AssetData__GetObject_object__48635516(
                                v15,
                                v73,
                                (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_GameObject____76085352);
                        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                        this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)UnityEngine_Object__op_Equality(
                                                                                   (UnityEngine_Object_o *)v77,
                                                                                   0LL,
                                                                                   0LL);
                        if ( ((unsigned __int8)this & 1) == 0 )
                        {
                          this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)_4__this->fields.scannerPrefabDict;
                          if ( !this )
                            goto LABEL_60;
                          System_Collections_Generic_Dictionary_int__object___set_Item(
                            (System_Collections_Generic_Dictionary_int__object__o *)this,
                            v76,
                            v77,
                            (const MethodInfo_316D944 *)Method_System_Collections_Generic_Dictionary_int__GameObject__set_Item__);
                        }
                      }
                    }
                    LODWORD(_2__current) = v70->fields.__2__current;
                    if ( (__int64)++v71 >= (int)_2__current )
                      goto LABEL_40;
                  }
                }
LABEL_61:
                sub_1B88814(this, method);
              }
            }
          }
        }
      }
    }
LABEL_60:
    sub_1B8880C(this, method);
  }
  if ( _1__state )
    return 0;
  v2->fields.__1__state = -1;
  v5 = sub_1B887FC(SubmarineMapAssetManager___c__DisplayClass69_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    goto LABEL_60;
  *(_BYTE *)(v5 + 16) = 0;
  if ( !_4__this )
    goto LABEL_60;
  v6 = _4__this->fields.loadAssetNames;
  v7 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(
    v7,
    (Il2CppObject *)v5,
    Method_SubmarineMapAssetManager___c__DisplayClass69_0__CoLoadAssets_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  v8 = 1;
  AssetManager__loadAssetStorage_37797288(v6, v7, 1, 0LL);
  v9 = (System_Func_bool__o *)sub_1B887FC(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_SubmarineMapAssetManager___c__DisplayClass69_0__CoLoadAssets_b__1__,
    0LL);
  v10 = (UnityEngine_WaitUntil_o *)sub_1B887FC(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v10, v9, 0LL);
  v2->fields.__2__current = (Il2CppObject *)v10;
  p__2__current = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
  sub_1B88554(p__2__current, (int32_t)v10, v12, v13);
  *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
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

  v2 = sub_1B885C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B887FC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B885C4(&Method_SubmarineMapAssetManager__CoLoadAssets_d__69_System_Collections_IEnumerator_Reset__);
  sub_1B886D8(v3, v4);
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
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A57E76 & 1) == 0 )
  {
    sub_1B885B0(&SubmarineMapAssetManager___c_TypeInfo);
    byte_4A57E76 = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(SubmarineMapAssetManager___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  SubmarineMapAssetManager___c_TypeInfo->static_fields->__9 = (struct SubmarineMapAssetManager___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)SubmarineMapAssetManager___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
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
    sub_1B8880C(this, 0LL);
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