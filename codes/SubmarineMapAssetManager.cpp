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

  if ( (byte_49F9135 & 1) == 0 )
  {
    sub_1B640C8(&string___TypeInfo, method);
    sub_1B640C8(&StringLiteral_6140/*"Event/Submarine"*/, v3);
    byte_49F9135 = 1;
  }
  v4 = sub_1B64170(string___TypeInfo, 1LL);
  if ( !v4 )
    sub_1B64324(0LL);
  v8 = (struct System_String_array *)v4;
  if ( !*(_DWORD *)(v4 + 24) )
    sub_1B6432C(v4, v5);
  v9 = StringLiteral_6140/*"Event/Submarine"*/;
  *(_QWORD *)(v4 + 32) = StringLiteral_6140/*"Event/Submarine"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v4 + 32), v9, v6, v7);
  this->fields.loadAssetNames = v8;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.loadAssetNames, (int32_t)v8, v10, v11);
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

  if ( (byte_49F9131 & 1) == 0 )
  {
    sub_1B640C8(&SubmarineMapAssetManager__CoLoadAssets_d__69_TypeInfo, *(_QWORD *)&eventId);
    byte_49F9131 = 1;
  }
  v7 = sub_1B64314(SubmarineMapAssetManager__CoLoadAssets_d__69_TypeInfo, *(_QWORD *)&eventId, finishCallback);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 32) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v7 + 32), (int32_t)this, v8, v9);
  *(_DWORD *)(v7 + 40) = eventId;
  *(_QWORD *)(v7 + 48) = finishCallback;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v7 + 48), (int32_t)finishCallback, v10, v11);
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

  if ( (byte_49F9134 & 1) == 0 )
  {
    sub_1B640C8(&AssetManager_TypeInfo, method);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__GameObject__Clear__, v3);
    byte_49F9134 = 1;
  }
  scannerPrefabDict = this->fields.scannerPrefabDict;
  if ( !scannerPrefabDict
    || (System_Collections_Generic_Dictionary_int__object___Clear(
          (System_Collections_Generic_Dictionary_int__object__o *)scannerPrefabDict,
          (const MethodInfo_3123B0C *)Method_System_Collections_Generic_Dictionary_int__GameObject__Clear__),
        (scannerPrefabDict = this->fields.scanRangeNotificatorPrefabDict) == 0LL) )
  {
    sub_1B64324(scannerPrefabDict);
  }
  System_Collections_Generic_Dictionary_int__object___Clear(
    (System_Collections_Generic_Dictionary_int__object__o *)scannerPrefabDict,
    (const MethodInfo_3123B0C *)Method_System_Collections_Generic_Dictionary_int__GameObject__Clear__);
  this->fields._PanelPrefab_k__BackingField = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields, 0, v5, v6);
  this->fields._GridLinePrefab_k__BackingField = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields._GridLinePrefab_k__BackingField, 0, v7, v8);
  this->fields._PanelContainerPrefab_k__BackingField = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields._PanelContainerPrefab_k__BackingField, 0, v9, v10);
  this->fields._EffectContainerPrefab_k__BackingField = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields._EffectContainerPrefab_k__BackingField, 0, v11, v12);
  this->fields._ClosedPanelTexture_k__BackingField = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields._ClosedPanelTexture_k__BackingField, 0, v13, v14);
  this->fields._GridTexture_k__BackingField = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields._GridTexture_k__BackingField, 0, v15, v16);
  this->fields._EffectScannedPanelPrefab_k__BackingField = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields._EffectScannedPanelPrefab_k__BackingField, 0, v17, v18);
  this->fields._EffectSelectedPanelPrefab_k__BackingField = 0LL;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields._EffectSelectedPanelPrefab_k__BackingField,
    0,
    v19,
    v20);
  this->fields._EffectScannablePanelPrafab_k__BackingField = 0LL;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields._EffectScannablePanelPrafab_k__BackingField,
    0,
    v21,
    v22);
  this->fields._EffectScanObstaclePanelPrafab_k__BackingField = 0LL;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields._EffectScanObstaclePanelPrafab_k__BackingField,
    0,
    v23,
    v24);
  this->fields._ScanProcessPreventedPrafab_k__BackingField = 0LL;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields._ScanProcessPreventedPrafab_k__BackingField,
    0,
    v25,
    v26);
  this->fields._SelectScannerDialogPrefab_k__BackingField = 0LL;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields._SelectScannerDialogPrefab_k__BackingField,
    0,
    v27,
    v28);
  this->fields._ScanConfirmDialogPrefab_k__BackingField = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields._ScanConfirmDialogPrefab_k__BackingField, 0, v29, v30);
  this->fields._NewScannerDialogPrefab_k__BackingField = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields._NewScannerDialogPrefab_k__BackingField, 0, v31, v32);
  this->fields._Settings_k__BackingField = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields._Settings_k__BackingField, 0, v33, v34);
  this->fields._AnimationSkipEFfectPrefab_k__BackingField = 0LL;
  p_AnimationSkipEFfectPrefab_k__BackingField = &this->fields._AnimationSkipEFfectPrefab_k__BackingField;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)p_AnimationSkipEFfectPrefab_k__BackingField, 0, v36, v37);
  v38 = (System_String_array *)p_AnimationSkipEFfectPrefab_k__BackingField[3];
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAssetStorage_37486440(v38, 0LL);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall SubmarineMapAssetManager__GetScanAnimObjectPrefab(
        SubmarineMapAssetManager_o *this,
        int32_t scanObjectId,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_int__GameObject__o *scannerPrefabDict; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49F9132 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__GameObject__TryGetValue__, *(_QWORD *)&scanObjectId);
    byte_49F9132 = 1;
  }
  value = 0LL;
  scannerPrefabDict = this->fields.scannerPrefabDict;
  if ( !scannerPrefabDict )
    sub_1B64324(0LL);
  System_Collections_Generic_Dictionary_int__object___TryGetValue(
    (System_Collections_Generic_Dictionary_int__object__o *)scannerPrefabDict,
    scanObjectId,
    &value,
    (const MethodInfo_3125110 *)Method_System_Collections_Generic_Dictionary_int__GameObject__TryGetValue__);
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

  if ( (byte_49F9133 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__GameObject__TryGetValue__, *(_QWORD *)&scanObjectId);
    byte_49F9133 = 1;
  }
  value = 0LL;
  scanRangeNotificatorPrefabDict = this->fields.scanRangeNotificatorPrefabDict;
  if ( !scanRangeNotificatorPrefabDict )
    sub_1B64324(0LL);
  System_Collections_Generic_Dictionary_int__object___TryGetValue(
    (System_Collections_Generic_Dictionary_int__object__o *)scanRangeNotificatorPrefabDict,
    scanObjectId,
    &value,
    (const MethodInfo_3125110 *)Method_System_Collections_Generic_Dictionary_int__GameObject__TryGetValue__);
  return (UnityEngine_GameObject_o *)value;
}


void __fastcall SubmarineMapAssetManager__Initialize(SubmarineMapAssetManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_Collections_Generic_Dictionary_int__object__o *v5; // x20
  int32_t v6; // w2
  int32_t v7; // w3
  __int64 v8; // x1
  __int64 v9; // x2
  System_Collections_Generic_Dictionary_int__object__o *v10; // x20
  int32_t v11; // w2
  int32_t v12; // w3

  if ( (byte_49F912F & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__GameObject___ctor__, method);
    sub_1B640C8(&System_Collections_Generic_Dictionary_int__GameObject__TypeInfo, v4);
    byte_49F912F = 1;
  }
  v5 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B64314(
                                                                 System_Collections_Generic_Dictionary_int__GameObject__TypeInfo,
                                                                 method,
                                                                 v2);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v5,
    (const MethodInfo_3122FB0 *)Method_System_Collections_Generic_Dictionary_int__GameObject___ctor__);
  this->fields.scannerPrefabDict = (struct System_Collections_Generic_Dictionary_int__GameObject__o *)v5;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.scannerPrefabDict, (int32_t)v5, v6, v7);
  v10 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B64314(
                                                                  System_Collections_Generic_Dictionary_int__GameObject__TypeInfo,
                                                                  v8,
                                                                  v9);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v10,
    (const MethodInfo_3122FB0 *)Method_System_Collections_Generic_Dictionary_int__GameObject___ctor__);
  this->fields.scanRangeNotificatorPrefabDict = (struct System_Collections_Generic_Dictionary_int__GameObject__o *)v10;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.scanRangeNotificatorPrefabDict, (int32_t)v10, v11, v12);
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
  Il2CppObject *Object_object__48347676; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  int32_t v14; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_49F9130 & 1) == 0 )
  {
    sub_1B640C8(&Method_AssetData_GetObject_Texture2D____75705984, assetData);
    sub_1B640C8(&int_TypeInfo, v7);
    sub_1B640C8(&StringLiteral_24854/*"{0:D6}_ClosedPanelTexture"*/, v8);
    byte_49F9130 = 1;
  }
  v14 = mapId;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v14);
  v10 = System_String__Format((System_String_o *)StringLiteral_24854/*"{0:D6}_ClosedPanelTexture"*/, v9, 0LL);
  if ( !assetData )
    sub_1B64324(v10);
  Object_object__48347676 = AssetData__GetObject_object__48347676(
                              assetData,
                              v10,
                              (const MethodInfo_2E1BA1C *)Method_AssetData_GetObject_Texture2D____75705984);
  this->fields._ClosedPanelTexture_k__BackingField = (struct UnityEngine_Texture2D_o *)Object_object__48347676;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields._ClosedPanelTexture_k__BackingField,
    (int32_t)Object_object__48347676,
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
  sub_1B6406C(
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
  sub_1B6406C(
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
  sub_1B6406C(
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
  sub_1B6406C(
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
  sub_1B6406C(
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
  sub_1B6406C(
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
  sub_1B6406C(
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
  sub_1B6406C(
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
  sub_1B6406C(
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
  sub_1B6406C(
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
  sub_1B6406C(
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)value, (int32_t)method, v3);
}


void __fastcall SubmarineMapAssetManager__set_ScanConfirmDialogPrefab(
        SubmarineMapAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._ScanConfirmDialogPrefab_k__BackingField = value;
  sub_1B6406C(
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
  sub_1B6406C(
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
  sub_1B6406C(
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
  sub_1B6406C(
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
  int32_t _1__state; // w8
  struct SubmarineMapAssetManager_o *_4__this; // x26
  __int64 v42; // x20
  __int64 v43; // x1
  __int64 v44; // x2
  System_String_array *v45; // x22
  System_Action_o *v46; // x23
  bool v47; // w21
  __int64 v48; // x1
  __int64 v49; // x2
  System_Func_bool__o *v50; // x22
  __int64 v51; // x1
  __int64 v52; // x2
  UnityEngine_WaitUntil_o *v53; // x20
  ServantStatusBattleListViewItem_o *p__2__current; // x24
  int32_t v55; // w2
  int32_t v56; // w3
  System_String_array *loadAssetNames; // x20
  __int64 v58; // x1
  AssetData_o *v59; // x20
  Il2CppObject *Object_object__48347676; // x0
  int32_t v61; // w2
  int32_t v62; // w3
  Il2CppObject *v63; // x0
  int32_t v64; // w2
  int32_t v65; // w3
  Il2CppObject *v66; // x0
  int32_t v67; // w2
  int32_t v68; // w3
  Il2CppObject *v69; // x0
  int32_t v70; // w2
  int32_t v71; // w3
  Il2CppObject *v72; // x0
  int32_t v73; // w2
  int32_t v74; // w3
  Il2CppObject *v75; // x0
  int32_t v76; // w2
  int32_t v77; // w3
  Il2CppObject *v78; // x0
  int32_t v79; // w2
  int32_t v80; // w3
  Il2CppObject *v81; // x0
  int32_t v82; // w2
  int32_t v83; // w3
  Il2CppObject *v84; // x0
  int32_t v85; // w2
  int32_t v86; // w3
  Il2CppObject *v87; // x0
  int32_t v88; // w2
  int32_t v89; // w3
  int32_t v90; // w2
  int32_t v91; // w3
  Il2CppObject *v92; // x0
  int32_t v93; // w2
  int32_t v94; // w3
  Il2CppObject *v95; // x0
  int32_t v96; // w2
  int32_t v97; // w3
  Il2CppObject *v98; // x0
  int32_t v99; // w2
  int32_t v100; // w3
  Il2CppObject *v101; // x0
  int32_t v102; // w2
  int32_t v103; // w3
  __int64 v104; // x1
  __int64 v105; // x2
  System_Collections_Generic_IEnumerable_TSource__o *ListByEventId; // x21
  SubmarineMapAssetManager___c_c *v107; // x8
  System_Func_object__int__o *_9__69_2; // x22
  Il2CppObject *v109; // x23
  struct SubmarineMapAssetManager___c_StaticFields *static_fields; // x0
  int32_t v111; // w2
  int32_t v112; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v113; // x21
  __int64 v114; // x1
  __int64 v115; // x2
  System_Text_RegularExpressions_Regex_o *v116; // x22
  __int64 v117; // x2
  Il2CppObject *_2__current; // x8
  SubmarineMapAssetManager__CoLoadAssets_d__69_o *v119; // x23
  unsigned __int64 v120; // x29
  struct SubmarineMapAssetManager_o **v121; // x28
  System_String_o *v122; // x24
  SubmarineMapAssetManager__CoLoadAssets_d__69_o *v123; // x25
  System_String_o *v124; // x0
  int32_t v125; // w25
  Il2CppObject *v126; // x24
  System_Text_RegularExpressions_Regex_o *v127; // x22
  Il2CppObject *v128; // x8
  SubmarineMapAssetManager__CoLoadAssets_d__69_o *v129; // x23
  unsigned __int64 v130; // x28
  struct SubmarineMapAssetManager_o **p__4__this; // x29
  System_String_o *v132; // x24
  SubmarineMapAssetManager__CoLoadAssets_d__69_o *v133; // x25
  System_String_o *Value; // x0
  int32_t v135; // w25
  Il2CppObject *v136; // x24
  System_Action_o *finishCallback; // x0
  SubmarineMapAssetManager__CoLoadAssets_d__69_o *v139; // [xsp+8h] [xbp-68h]

  v3 = this;
  if ( (byte_49F9137 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_AssetData_GetObject_GameObject____75705960, v4);
    sub_1B640C8(&Method_AssetData_GetObject_SubmarineSettings___, v5);
    sub_1B640C8(&Method_AssetData_GetObject_Texture2D____75705984, v6);
    sub_1B640C8(&AssetManager_TypeInfo, v7);
    sub_1B640C8(&Method_DataManager_GetMasterData_EventPanelScanMaster___, v8);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__GameObject__set_Item__, v9);
    sub_1B640C8(&Method_System_Linq_Enumerable_Contains_int___, v10);
    sub_1B640C8(&Method_System_Linq_Enumerable_Select_EventPanelScanEntity__int___, v11);
    sub_1B640C8(&System_Func_bool__TypeInfo, v12);
    sub_1B640C8(&System_Func_EventPanelScanEntity__int__TypeInfo, v13);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v14);
    sub_1B640C8(&System_Text_RegularExpressions_Regex_TypeInfo, v15);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_1B640C8(&Method_SubmarineMapAssetManager___c__CoLoadAssets_b__69_2__, v17);
    sub_1B640C8(&Method_SubmarineMapAssetManager___c__DisplayClass69_0__CoLoadAssets_b__0__, v18);
    sub_1B640C8(&Method_SubmarineMapAssetManager___c__DisplayClass69_0__CoLoadAssets_b__1__, v19);
    sub_1B640C8(&SubmarineMapAssetManager___c__DisplayClass69_0_TypeInfo, v20);
    sub_1B640C8(&SubmarineMapAssetManager___c_TypeInfo, v21);
    sub_1B640C8(&UnityEngine_WaitUntil_TypeInfo, v22);
    sub_1B640C8(&StringLiteral_5854/*"EffectScannedPanel"*/, v23);
    sub_1B640C8(&StringLiteral_12454/*"Scanner_(?<ID>\\d+)"*/, v24);
    sub_1B640C8(&StringLiteral_12996/*"SubmarineScanConfirmDialog"*/, v25);
    sub_1B640C8(&StringLiteral_18726/*"ef_animation_skip"*/, v26);
    sub_1B640C8(&StringLiteral_12994/*"SubmarinePanel"*/, v27);
    sub_1B640C8(&StringLiteral_12998/*"SubmarineSelectScannerDialog"*/, v28);
    sub_1B640C8(&StringLiteral_12987/*"SubmarineEffectScanObstaclePanel"*/, v29);
    sub_1B640C8(&StringLiteral_12990/*"SubmarineGridLine"*/, v30);
    sub_1B640C8(&StringLiteral_12995/*"SubmarinePanelContainer"*/, v31);
    sub_1B640C8(&StringLiteral_12997/*"SubmarineScanRangeNotificator_(?<ID>\\d+)"*/, v32);
    sub_1B640C8(&StringLiteral_12993/*"SubmarineNewScannerDialog"*/, v33);
    sub_1B640C8(&StringLiteral_12991/*"SubmarineGridTexture"*/, v34);
    sub_1B640C8(&StringLiteral_12989/*"SubmarineEffectSelectedPanel"*/, v35);
    sub_1B640C8(&StringLiteral_12986/*"SubmarineEffectContainer"*/, v36);
    sub_1B640C8(&StringLiteral_12988/*"SubmarineEffectScannablePanel"*/, v37);
    sub_1B640C8(&StringLiteral_7306/*"ID"*/, v38);
    this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)sub_1B640C8(&StringLiteral_12999/*"SubmarineSettings"*/, v39);
    byte_49F9137 = 1;
  }
  _1__state = v3->fields.__1__state;
  _4__this = v3->fields.__4__this;
  if ( _1__state == 1 )
  {
    v3->fields.__1__state = -1;
    if ( _4__this )
    {
      loadAssetNames = _4__this->fields.loadAssetNames;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)AssetManager__getAssetStorage_37485472(
                                                                 loadAssetNames,
                                                                 0LL);
      if ( this )
      {
        if ( !LODWORD(this->fields.__2__current) )
          goto LABEL_61;
        v59 = (AssetData_o *)this->fields.__4__this;
        if ( v59 )
        {
          Object_object__48347676 = AssetData__GetObject_object__48347676(
                                      (AssetData_o *)this->fields.__4__this,
                                      (System_String_o *)StringLiteral_12994/*"SubmarinePanel"*/,
                                      (const MethodInfo_2E1BA1C *)Method_AssetData_GetObject_GameObject____75705960);
          _4__this->fields._PanelPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)Object_object__48347676;
          sub_1B6406C(
            (ServantStatusBattleListViewItem_o *)&_4__this->fields,
            (int32_t)Object_object__48347676,
            v61,
            v62);
          v63 = AssetData__GetObject_object__48347676(
                  v59,
                  (System_String_o *)StringLiteral_12990/*"SubmarineGridLine"*/,
                  (const MethodInfo_2E1BA1C *)Method_AssetData_GetObject_GameObject____75705960);
          _4__this->fields._GridLinePrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v63;
          sub_1B6406C(
            (ServantStatusBattleListViewItem_o *)&_4__this->fields._GridLinePrefab_k__BackingField,
            (int32_t)v63,
            v64,
            v65);
          v66 = AssetData__GetObject_object__48347676(
                  v59,
                  (System_String_o *)StringLiteral_12995/*"SubmarinePanelContainer"*/,
                  (const MethodInfo_2E1BA1C *)Method_AssetData_GetObject_GameObject____75705960);
          _4__this->fields._PanelContainerPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v66;
          sub_1B6406C(
            (ServantStatusBattleListViewItem_o *)&_4__this->fields._PanelContainerPrefab_k__BackingField,
            (int32_t)v66,
            v67,
            v68);
          v69 = AssetData__GetObject_object__48347676(
                  v59,
                  (System_String_o *)StringLiteral_12986/*"SubmarineEffectContainer"*/,
                  (const MethodInfo_2E1BA1C *)Method_AssetData_GetObject_GameObject____75705960);
          _4__this->fields._EffectContainerPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v69;
          sub_1B6406C(
            (ServantStatusBattleListViewItem_o *)&_4__this->fields._EffectContainerPrefab_k__BackingField,
            (int32_t)v69,
            v70,
            v71);
          v72 = AssetData__GetObject_object__48347676(
                  v59,
                  (System_String_o *)StringLiteral_5854/*"EffectScannedPanel"*/,
                  (const MethodInfo_2E1BA1C *)Method_AssetData_GetObject_GameObject____75705960);
          _4__this->fields._EffectScannedPanelPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v72;
          sub_1B6406C(
            (ServantStatusBattleListViewItem_o *)&_4__this->fields._EffectScannedPanelPrefab_k__BackingField,
            (int32_t)v72,
            v73,
            v74);
          v75 = AssetData__GetObject_object__48347676(
                  v59,
                  (System_String_o *)StringLiteral_12989/*"SubmarineEffectSelectedPanel"*/,
                  (const MethodInfo_2E1BA1C *)Method_AssetData_GetObject_GameObject____75705960);
          _4__this->fields._EffectSelectedPanelPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v75;
          sub_1B6406C(
            (ServantStatusBattleListViewItem_o *)&_4__this->fields._EffectSelectedPanelPrefab_k__BackingField,
            (int32_t)v75,
            v76,
            v77);
          v78 = AssetData__GetObject_object__48347676(
                  v59,
                  (System_String_o *)StringLiteral_12988/*"SubmarineEffectScannablePanel"*/,
                  (const MethodInfo_2E1BA1C *)Method_AssetData_GetObject_GameObject____75705960);
          _4__this->fields._EffectScannablePanelPrafab_k__BackingField = (struct UnityEngine_GameObject_o *)v78;
          sub_1B6406C(
            (ServantStatusBattleListViewItem_o *)&_4__this->fields._EffectScannablePanelPrafab_k__BackingField,
            (int32_t)v78,
            v79,
            v80);
          v81 = AssetData__GetObject_object__48347676(
                  v59,
                  (System_String_o *)StringLiteral_12987/*"SubmarineEffectScanObstaclePanel"*/,
                  (const MethodInfo_2E1BA1C *)Method_AssetData_GetObject_GameObject____75705960);
          _4__this->fields._EffectScanObstaclePanelPrafab_k__BackingField = (struct UnityEngine_GameObject_o *)v81;
          sub_1B6406C(
            (ServantStatusBattleListViewItem_o *)&_4__this->fields._EffectScanObstaclePanelPrafab_k__BackingField,
            (int32_t)v81,
            v82,
            v83);
          v84 = AssetData__GetObject_object__48347676(
                  v59,
                  (System_String_o *)StringLiteral_12991/*"SubmarineGridTexture"*/,
                  (const MethodInfo_2E1BA1C *)Method_AssetData_GetObject_Texture2D____75705984);
          _4__this->fields._GridTexture_k__BackingField = (struct UnityEngine_Texture2D_o *)v84;
          sub_1B6406C(
            (ServantStatusBattleListViewItem_o *)&_4__this->fields._GridTexture_k__BackingField,
            (int32_t)v84,
            v85,
            v86);
          v87 = AssetData__GetObject_object__48347676(
                  v59,
                  (System_String_o *)StringLiteral_12999/*"SubmarineSettings"*/,
                  (const MethodInfo_2E1BA1C *)Method_AssetData_GetObject_SubmarineSettings___);
          _4__this->fields._Settings_k__BackingField = (struct SubmarineSettings_o *)v87;
          sub_1B6406C(
            (ServantStatusBattleListViewItem_o *)&_4__this->fields._Settings_k__BackingField,
            (int32_t)v87,
            v88,
            v89);
          _4__this->fields._ScanProcessPreventedPrafab_k__BackingField = 0LL;
          sub_1B6406C(
            (ServantStatusBattleListViewItem_o *)&_4__this->fields._ScanProcessPreventedPrafab_k__BackingField,
            0,
            v90,
            v91);
          v92 = AssetData__GetObject_object__48347676(
                  v59,
                  (System_String_o *)StringLiteral_18726/*"ef_animation_skip"*/,
                  (const MethodInfo_2E1BA1C *)Method_AssetData_GetObject_GameObject____75705960);
          _4__this->fields._AnimationSkipEFfectPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v92;
          sub_1B6406C(
            (ServantStatusBattleListViewItem_o *)&_4__this->fields._AnimationSkipEFfectPrefab_k__BackingField,
            (int32_t)v92,
            v93,
            v94);
          v95 = AssetData__GetObject_object__48347676(
                  v59,
                  (System_String_o *)StringLiteral_12998/*"SubmarineSelectScannerDialog"*/,
                  (const MethodInfo_2E1BA1C *)Method_AssetData_GetObject_GameObject____75705960);
          _4__this->fields._SelectScannerDialogPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v95;
          sub_1B6406C(
            (ServantStatusBattleListViewItem_o *)&_4__this->fields._SelectScannerDialogPrefab_k__BackingField,
            (int32_t)v95,
            v96,
            v97);
          v98 = AssetData__GetObject_object__48347676(
                  v59,
                  (System_String_o *)StringLiteral_12996/*"SubmarineScanConfirmDialog"*/,
                  (const MethodInfo_2E1BA1C *)Method_AssetData_GetObject_GameObject____75705960);
          _4__this->fields._ScanConfirmDialogPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v98;
          sub_1B6406C(
            (ServantStatusBattleListViewItem_o *)&_4__this->fields._ScanConfirmDialogPrefab_k__BackingField,
            (int32_t)v98,
            v99,
            v100);
          v101 = AssetData__GetObject_object__48347676(
                   v59,
                   (System_String_o *)StringLiteral_12993/*"SubmarineNewScannerDialog"*/,
                   (const MethodInfo_2E1BA1C *)Method_AssetData_GetObject_GameObject____75705960);
          _4__this->fields._NewScannerDialogPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v101;
          sub_1B6406C(
            (ServantStatusBattleListViewItem_o *)&_4__this->fields._NewScannerDialogPrefab_k__BackingField,
            (int32_t)v101,
            v102,
            v103);
          this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( this )
          {
            this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)DataManager__GetMasterData_object_(
                                                                       (DataManager_o *)this,
                                                                       (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventPanelScanMaster___);
            if ( this )
            {
              ListByEventId = (System_Collections_Generic_IEnumerable_TSource__o *)EventPanelScanMaster__GetListByEventId(
                                                                                     (EventPanelScanMaster_o *)this,
                                                                                     v3->fields.eventId,
                                                                                     0LL);
              v107 = SubmarineMapAssetManager___c_TypeInfo;
              if ( !SubmarineMapAssetManager___c_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(SubmarineMapAssetManager___c_TypeInfo);
                v107 = SubmarineMapAssetManager___c_TypeInfo;
              }
              _9__69_2 = (System_Func_object__int__o *)v107->static_fields->__9__69_2;
              if ( !_9__69_2 )
              {
                if ( !v107->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(v107);
                  v107 = SubmarineMapAssetManager___c_TypeInfo;
                }
                v109 = (Il2CppObject *)v107->static_fields->__9;
                _9__69_2 = (System_Func_object__int__o *)sub_1B64314(
                                                           System_Func_EventPanelScanEntity__int__TypeInfo,
                                                           v104,
                                                           v105);
                System_Func_object__int____ctor(
                  _9__69_2,
                  v109,
                  Method_SubmarineMapAssetManager___c__CoLoadAssets_b__69_2__,
                  0LL);
                static_fields = SubmarineMapAssetManager___c_TypeInfo->static_fields;
                static_fields->__9__69_2 = (struct System_Func_EventPanelScanEntity__int__o *)_9__69_2;
                sub_1B6406C(
                  (ServantStatusBattleListViewItem_o *)&static_fields->__9__69_2,
                  (int32_t)_9__69_2,
                  v111,
                  v112);
              }
              v113 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                            ListByEventId,
                                                                            (System_Func_TSource__TResult__o *)_9__69_2,
                                                                            (const MethodInfo_2E68AD0 *)Method_System_Linq_Enumerable_Select_EventPanelScanEntity__int___);
              v116 = (System_Text_RegularExpressions_Regex_o *)sub_1B64314(
                                                                 System_Text_RegularExpressions_Regex_TypeInfo,
                                                                 v114,
                                                                 v115);
              System_Text_RegularExpressions_Regex___ctor(v116, (System_String_o *)StringLiteral_12454/*"Scanner_(?<ID>\\d+)"*/, 0LL);
              this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)AssetData__GetObjectNameList(v59, 0LL);
              if ( this )
              {
                _2__current = this->fields.__2__current;
                v119 = this;
                v139 = v3;
                if ( (int)_2__current < 1 )
                {
LABEL_40:
                  v127 = (System_Text_RegularExpressions_Regex_o *)sub_1B64314(
                                                                     System_Text_RegularExpressions_Regex_TypeInfo,
                                                                     v58,
                                                                     v117);
                  System_Text_RegularExpressions_Regex___ctor(v127, (System_String_o *)StringLiteral_12997/*"SubmarineScanRangeNotificator_(?<ID>\\d+)"*/, 0LL);
                  this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)AssetData__GetObjectNameList(v59, 0LL);
                  if ( !this )
                    goto LABEL_60;
                  v128 = this->fields.__2__current;
                  v129 = this;
                  if ( (int)v128 < 1 )
                  {
LABEL_56:
                    finishCallback = v139->fields.finishCallback;
                    if ( finishCallback )
                      ActionExtensions__Call(finishCallback, 0LL);
                    return 0;
                  }
                  v130 = 0LL;
                  p__4__this = &this->fields.__4__this;
                  while ( v130 < (unsigned int)v128 )
                  {
                    if ( !v127 )
                      goto LABEL_60;
                    v132 = (System_String_o *)p__4__this[v130];
                    this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)System_Text_RegularExpressions_Regex__Match_67931612(
                                                                               v127,
                                                                               v132,
                                                                               0LL);
                    if ( !this )
                      goto LABEL_60;
                    v133 = this;
                    this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)System_Text_RegularExpressions_Group__get_Success(
                                                                               (System_Text_RegularExpressions_Group_o *)this,
                                                                               0LL);
                    if ( ((unsigned __int8)this & 1) != 0 )
                    {
                      this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)((__int64 (__fastcall *)(SubmarineMapAssetManager__CoLoadAssets_d__69_o *, Il2CppMethodPointer))v133->klass->vtable._5_System_IDisposable_Dispose.method)(
                                                                                 v133,
                                                                                 v133->klass->vtable._6_MoveNext.methodPtr);
                      if ( !this )
                        goto LABEL_60;
                      this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)System_Text_RegularExpressions_GroupCollection__get_Item_67914656(
                                                                                 (System_Text_RegularExpressions_GroupCollection_o *)this,
                                                                                 (System_String_o *)StringLiteral_7306/*"ID"*/,
                                                                                 0LL);
                      if ( !this )
                        goto LABEL_60;
                      Value = System_Text_RegularExpressions_Capture__get_Value(
                                (System_Text_RegularExpressions_Capture_o *)this,
                                0LL);
                      v135 = System_Int32__Parse(Value, 0LL);
                      this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)System_Linq_Enumerable__Contains_int_(
                                                                                 v113,
                                                                                 v135,
                                                                                 (const MethodInfo_2E52CA8 *)Method_System_Linq_Enumerable_Contains_int___);
                      if ( ((unsigned __int8)this & 1) != 0 )
                      {
                        v136 = AssetData__GetObject_object__48347676(
                                 v59,
                                 v132,
                                 (const MethodInfo_2E1BA1C *)Method_AssetData_GetObject_GameObject____75705960);
                        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                        this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)UnityEngine_Object__op_Equality(
                                                                                   (UnityEngine_Object_o *)v136,
                                                                                   0LL,
                                                                                   0LL);
                        if ( ((unsigned __int8)this & 1) == 0 )
                        {
                          this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)_4__this->fields.scanRangeNotificatorPrefabDict;
                          if ( !this )
                            goto LABEL_60;
                          System_Collections_Generic_Dictionary_int__object___set_Item(
                            (System_Collections_Generic_Dictionary_int__object__o *)this,
                            v135,
                            v136,
                            (const MethodInfo_3123970 *)Method_System_Collections_Generic_Dictionary_int__GameObject__set_Item__);
                        }
                      }
                    }
                    LODWORD(v128) = v129->fields.__2__current;
                    if ( (__int64)++v130 >= (int)v128 )
                      goto LABEL_56;
                  }
                }
                else
                {
                  v120 = 0LL;
                  v121 = &this->fields.__4__this;
                  while ( v120 < (unsigned int)_2__current )
                  {
                    if ( !v116 )
                      goto LABEL_60;
                    v122 = (System_String_o *)v121[v120];
                    this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)System_Text_RegularExpressions_Regex__Match_67931612(
                                                                               v116,
                                                                               v122,
                                                                               0LL);
                    if ( !this )
                      goto LABEL_60;
                    v123 = this;
                    this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)System_Text_RegularExpressions_Group__get_Success(
                                                                               (System_Text_RegularExpressions_Group_o *)this,
                                                                               0LL);
                    if ( ((unsigned __int8)this & 1) != 0 )
                    {
                      this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)((__int64 (__fastcall *)(SubmarineMapAssetManager__CoLoadAssets_d__69_o *, Il2CppMethodPointer))v123->klass->vtable._5_System_IDisposable_Dispose.method)(
                                                                                 v123,
                                                                                 v123->klass->vtable._6_MoveNext.methodPtr);
                      if ( !this )
                        goto LABEL_60;
                      this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)System_Text_RegularExpressions_GroupCollection__get_Item_67914656(
                                                                                 (System_Text_RegularExpressions_GroupCollection_o *)this,
                                                                                 (System_String_o *)StringLiteral_7306/*"ID"*/,
                                                                                 0LL);
                      if ( !this )
                        goto LABEL_60;
                      v124 = System_Text_RegularExpressions_Capture__get_Value(
                               (System_Text_RegularExpressions_Capture_o *)this,
                               0LL);
                      v125 = System_Int32__Parse(v124, 0LL);
                      this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)System_Linq_Enumerable__Contains_int_(
                                                                                 v113,
                                                                                 v125,
                                                                                 (const MethodInfo_2E52CA8 *)Method_System_Linq_Enumerable_Contains_int___);
                      if ( ((unsigned __int8)this & 1) != 0 )
                      {
                        v126 = AssetData__GetObject_object__48347676(
                                 v59,
                                 v122,
                                 (const MethodInfo_2E1BA1C *)Method_AssetData_GetObject_GameObject____75705960);
                        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                        this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)UnityEngine_Object__op_Equality(
                                                                                   (UnityEngine_Object_o *)v126,
                                                                                   0LL,
                                                                                   0LL);
                        if ( ((unsigned __int8)this & 1) == 0 )
                        {
                          this = (SubmarineMapAssetManager__CoLoadAssets_d__69_o *)_4__this->fields.scannerPrefabDict;
                          if ( !this )
                            goto LABEL_60;
                          System_Collections_Generic_Dictionary_int__object___set_Item(
                            (System_Collections_Generic_Dictionary_int__object__o *)this,
                            v125,
                            v126,
                            (const MethodInfo_3123970 *)Method_System_Collections_Generic_Dictionary_int__GameObject__set_Item__);
                        }
                      }
                    }
                    LODWORD(_2__current) = v119->fields.__2__current;
                    if ( (__int64)++v120 >= (int)_2__current )
                      goto LABEL_40;
                  }
                }
LABEL_61:
                sub_1B6432C(this, v58);
              }
            }
          }
        }
      }
    }
LABEL_60:
    sub_1B64324(this);
  }
  if ( _1__state )
    return 0;
  v3->fields.__1__state = -1;
  v42 = sub_1B64314(SubmarineMapAssetManager___c__DisplayClass69_0_TypeInfo, method, v2);
  System_Object___ctor((Il2CppObject *)v42, 0LL);
  if ( !v42 )
    goto LABEL_60;
  *(_BYTE *)(v42 + 16) = 0;
  if ( !_4__this )
    goto LABEL_60;
  v45 = _4__this->fields.loadAssetNames;
  v46 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v43, v44);
  System_Action___ctor(
    v46,
    (Il2CppObject *)v42,
    Method_SubmarineMapAssetManager___c__DisplayClass69_0__CoLoadAssets_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  v47 = 1;
  AssetManager__loadAssetStorage_37484096(v45, v46, 1, 0LL);
  v50 = (System_Func_bool__o *)sub_1B64314(System_Func_bool__TypeInfo, v48, v49);
  System_Func_bool____ctor(
    v50,
    (Il2CppObject *)v42,
    Method_SubmarineMapAssetManager___c__DisplayClass69_0__CoLoadAssets_b__1__,
    0LL);
  v53 = (UnityEngine_WaitUntil_o *)sub_1B64314(UnityEngine_WaitUntil_TypeInfo, v51, v52);
  UnityEngine_WaitUntil___ctor(v53, v50, 0LL);
  v3->fields.__2__current = (Il2CppObject *)v53;
  p__2__current = (ServantStatusBattleListViewItem_o *)&v3->fields.__2__current;
  sub_1B6406C(p__2__current, (int32_t)v53, v55, v56);
  *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
  return v47;
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

  v2 = sub_1B640DC(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_1B64314(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_1B640DC(&Method_SubmarineMapAssetManager__CoLoadAssets_d__69_System_Collections_IEnumerator_Reset__);
  sub_1B641F0(v5, v6);
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
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49F9136 & 1) == 0 )
  {
    sub_1B640C8(&SubmarineMapAssetManager___c_TypeInfo, v1);
    byte_49F9136 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(SubmarineMapAssetManager___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  SubmarineMapAssetManager___c_TypeInfo->static_fields->__9 = (struct SubmarineMapAssetManager___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)SubmarineMapAssetManager___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
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
    sub_1B64324(this);
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