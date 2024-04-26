void __fastcall NpInfoAddResultComponent___ctor(NpInfoAddResultComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall NpInfoAddResultComponent__SetDisplay(
        NpInfoAddResultComponent_o *this,
        ServantTreasureDeviceAddEntity_o *tdAddEntity,
        int32_t index,
        int32_t beforeLv,
        int32_t afterLv,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  DataManager_o *v11; // x22
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x24
  WarQuestSelectionMaster_o *v13; // x0
  UILabel_o *beforeLvLabel; // x23
  TreasureDvcLvMaster_o *v15; // x22
  UILabel_o *afterLvLabel; // x23
  struct System_Int32_array *treasureDeviceIds; // x8
  int32_t v18; // w23
  DataManager_o *v19; // x24
  TreasureDvcLvEntity_o *v20; // x25
  UILabel_o *beforeDetailLabel; // x24
  struct UILabel_o *v22; // x8
  struct System_String_array *titles; // x8
  UILabel_o *afterDetailLabel; // x20
  struct UILabel_o *v25; // x8
  __int64 v26; // x0
  int32_t v27; // [xsp+8h] [xbp-48h] BYREF
  int32_t lv; // [xsp+Ch] [xbp-44h] BYREF

  v27 = afterLv;
  lv = beforeLv;
  if ( (byte_4352445 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_TreasureDvcMaster___);
    sub_B70694(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4352445 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  v11 = Instance;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        Instance,
                                                                                        (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
  v13 = DataManager__GetMasterData_WarQuestSelectionMaster_(
          v11,
          (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
  beforeLvLabel = this->fields.beforeLvLabel;
  v15 = (TreasureDvcLvMaster_o *)v13;
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)&lv, 0LL);
  if ( !beforeLvLabel )
    goto LABEL_22;
  UILabel__set_text(beforeLvLabel, (System_String_o *)Instance, 0LL);
  afterLvLabel = this->fields.afterLvLabel;
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)&v27, 0LL);
  if ( !afterLvLabel )
    goto LABEL_22;
  UILabel__set_text(afterLvLabel, (System_String_o *)Instance, 0LL);
  if ( !tdAddEntity )
    goto LABEL_22;
  treasureDeviceIds = tdAddEntity->fields.treasureDeviceIds;
  if ( !treasureDeviceIds )
    goto LABEL_22;
  if ( treasureDeviceIds->max_length <= index )
    goto LABEL_23;
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_22;
  v18 = treasureDeviceIds->m_Items[index + 1];
  Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                MasterData_WarQuestSelectionMaster,
                                v18,
                                (const MethodInfo_21C0440 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
  if ( !v15 )
    goto LABEL_22;
  v19 = Instance;
  Instance = (DataManager_o *)TreasureDvcLvMaster__GetEntity(v15, v18, lv, 0LL);
  if ( !v19 )
    goto LABEL_22;
  v20 = (TreasureDvcLvEntity_o *)Instance;
  Instance = (DataManager_o *)this->fields.rubyLabel;
  if ( !Instance )
    goto LABEL_22;
  UILabel__set_text((UILabel_o *)Instance, (System_String_o *)v19->fields.lookup, 0LL);
  Instance = (DataManager_o *)this->fields.nameLabel;
  if ( !Instance
    || (UILabel__set_text((UILabel_o *)Instance, (System_String_o *)v19->fields.datalist, 0LL), !v20)
    || (beforeDetailLabel = this->fields.beforeDetailLabel,
        Instance = (DataManager_o *)TreasureDvcLvEntity__getDetalShort(v20, 0LL),
        (v22 = this->fields.beforeDetailLabel) == 0LL)
    || (Instance = (DataManager_o *)WrapControlText__textAdjust(
                                      beforeDetailLabel,
                                      (System_String_o *)Instance,
                                      v22->fields.mFontSize,
                                      0,
                                      0,
                                      0LL),
        (titles = tdAddEntity->fields.titles) == 0LL) )
  {
LABEL_22:
    sub_B7076C(Instance, v10);
  }
  if ( titles->max_length <= index )
  {
LABEL_23:
    v26 = sub_B70798(Instance);
    sub_B70738(v26, 0LL);
  }
  Instance = (DataManager_o *)this->fields.titleLabel;
  if ( !Instance )
    goto LABEL_22;
  UILabel__set_text((UILabel_o *)Instance, titles->m_Items[index], 0LL);
  Instance = (DataManager_o *)TreasureDvcLvMaster__GetEntity(v15, v18, v27, 0LL);
  if ( !Instance )
    goto LABEL_22;
  afterDetailLabel = this->fields.afterDetailLabel;
  Instance = (DataManager_o *)TreasureDvcLvEntity__getDetalShort((TreasureDvcLvEntity_o *)Instance, 0LL);
  v25 = this->fields.afterDetailLabel;
  if ( !v25 )
    goto LABEL_22;
  WrapControlText__textAdjust(afterDetailLabel, (System_String_o *)Instance, v25->fields.mFontSize, 0, 0, 0LL);
}


void __fastcall NpInfoAddResultComponent__SetDisplay_26017564(
        NpInfoAddResultComponent_o *this,
        int32_t npIdBefore,
        int32_t npIdAfter,
        int32_t beforeLv,
        int32_t afterLv,
        System_String_o *titleText,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  DataManager_o *v13; // x25
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x21
  TreasureDvcLvMaster_o *v15; // x22
  UILabel_o *beforeLvLabel; // x25
  UILabel_o *afterLvLabel; // x25
  DataManager_o *v18; // x25
  TreasureDvcLvEntity_o *v19; // x24
  UILabel_o *beforeDetailLabel; // x23
  struct UILabel_o *v21; // x8
  UILabel_o *afterDetailLabel; // x20
  struct UILabel_o *v23; // x8
  int32_t v24; // [xsp+8h] [xbp-48h] BYREF
  int32_t lv; // [xsp+Ch] [xbp-44h] BYREF

  v24 = afterLv;
  lv = beforeLv;
  if ( (byte_4352446 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_TreasureDvcMaster___);
    sub_B70694(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4352446 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  v13 = Instance;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        Instance,
                                                                                        (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
  v15 = (TreasureDvcLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                   v13,
                                   (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
  DataManager__GetMasterData_WarQuestSelectionMaster_(
    v13,
    (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantMaster___);
  beforeLvLabel = this->fields.beforeLvLabel;
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)&lv, 0LL);
  if ( !beforeLvLabel )
    goto LABEL_17;
  UILabel__set_text(beforeLvLabel, (System_String_o *)Instance, 0LL);
  afterLvLabel = this->fields.afterLvLabel;
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)&v24, 0LL);
  if ( !afterLvLabel )
    goto LABEL_17;
  UILabel__set_text(afterLvLabel, (System_String_o *)Instance, 0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_17;
  Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                MasterData_WarQuestSelectionMaster,
                                npIdBefore,
                                (const MethodInfo_21C0440 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
  if ( !v15 )
    goto LABEL_17;
  v18 = Instance;
  Instance = (DataManager_o *)TreasureDvcLvMaster__GetEntity(v15, npIdBefore, lv, 0LL);
  if ( !this->fields.titleLabel )
    goto LABEL_17;
  v19 = (TreasureDvcLvEntity_o *)Instance;
  UILabel__set_text(this->fields.titleLabel, titleText, 0LL);
  if ( !v18 )
    goto LABEL_17;
  Instance = (DataManager_o *)this->fields.rubyLabel;
  if ( !Instance )
    goto LABEL_17;
  UILabel__set_text((UILabel_o *)Instance, (System_String_o *)v18->fields.lookup, 0LL);
  Instance = (DataManager_o *)this->fields.nameLabel;
  if ( !Instance )
    goto LABEL_17;
  UILabel__set_text((UILabel_o *)Instance, (System_String_o *)v18->fields.datalist, 0LL);
  if ( !v19 )
    goto LABEL_17;
  beforeDetailLabel = this->fields.beforeDetailLabel;
  Instance = (DataManager_o *)TreasureDvcLvEntity__getDetalShort(v19, 0LL);
  v21 = this->fields.beforeDetailLabel;
  if ( !v21
    || (WrapControlText__textAdjust(beforeDetailLabel, (System_String_o *)Instance, v21->fields.mFontSize, 0, 0, 0LL),
        DataMasterBase_WarMaster__WarEntity__int___GetEntity(
          MasterData_WarQuestSelectionMaster,
          npIdAfter,
          (const MethodInfo_21C0440 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__),
        (Instance = (DataManager_o *)TreasureDvcLvMaster__GetEntity(v15, npIdAfter, v24, 0LL)) == 0LL)
    || (afterDetailLabel = this->fields.afterDetailLabel,
        Instance = (DataManager_o *)TreasureDvcLvEntity__getDetalShort((TreasureDvcLvEntity_o *)Instance, 0LL),
        (v23 = this->fields.afterDetailLabel) == 0LL) )
  {
LABEL_17:
    sub_B7076C(Instance, v12);
  }
  WrapControlText__textAdjust(afterDetailLabel, (System_String_o *)Instance, v23->fields.mFontSize, 0, 0, 0LL);
}