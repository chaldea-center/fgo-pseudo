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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  DataManager_o *Instance; // x0
  DataManager_o *v13; // x22
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x24
  WarQuestSelectionMaster_o *v15; // x0
  UILabel_o *beforeLvLabel; // x23
  TreasureDvcLvMaster_o *v17; // x22
  UILabel_o *afterLvLabel; // x23
  struct System_Int32_array *treasureDeviceIds; // x8
  int32_t v20; // w23
  DataManager_o *v21; // x24
  TreasureDvcLvEntity_o *v22; // x25
  UILabel_o *beforeDetailLabel; // x24
  struct UILabel_o *v24; // x8
  struct System_String_array *titles; // x8
  UILabel_o *afterDetailLabel; // x20
  struct UILabel_o *v27; // x8
  __int64 v28; // x0
  int32_t v29; // [xsp+8h] [xbp-48h] BYREF
  int32_t lv; // [xsp+Ch] [xbp-44h] BYREF

  v29 = afterLv;
  lv = beforeLv;
  if ( (byte_4215073 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___, tdAddEntity);
    sub_B0D8A4(&Method_DataManager_GetMasterData_TreasureDvcMaster___, v9);
    sub_B0D8A4(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__, v10);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_4215073 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  v13 = Instance;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        Instance,
                                                                                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
  v15 = DataManager__GetMasterData_WarQuestSelectionMaster_(
          v13,
          (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
  beforeLvLabel = this->fields.beforeLvLabel;
  v17 = (TreasureDvcLvMaster_o *)v15;
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)&lv, 0LL);
  if ( !beforeLvLabel )
    goto LABEL_22;
  UILabel__set_text(beforeLvLabel, (System_String_o *)Instance, 0LL);
  afterLvLabel = this->fields.afterLvLabel;
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)&v29, 0LL);
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
  v20 = treasureDeviceIds->m_Items[index + 1];
  Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                MasterData_WarQuestSelectionMaster,
                                v20,
                                (const MethodInfo_2669BD4 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
  if ( !v17 )
    goto LABEL_22;
  v21 = Instance;
  Instance = (DataManager_o *)TreasureDvcLvMaster__GetEntity(v17, v20, lv, 0LL);
  if ( !v21 )
    goto LABEL_22;
  v22 = (TreasureDvcLvEntity_o *)Instance;
  Instance = (DataManager_o *)this->fields.rubyLabel;
  if ( !Instance )
    goto LABEL_22;
  UILabel__set_text((UILabel_o *)Instance, (System_String_o *)v21->fields.lookup, 0LL);
  Instance = (DataManager_o *)this->fields.nameLabel;
  if ( !Instance
    || (UILabel__set_text((UILabel_o *)Instance, (System_String_o *)v21->fields.datalist, 0LL), !v22)
    || (beforeDetailLabel = this->fields.beforeDetailLabel,
        Instance = (DataManager_o *)TreasureDvcLvEntity__getDetalShort(v22, 0LL),
        (v24 = this->fields.beforeDetailLabel) == 0LL)
    || (Instance = (DataManager_o *)WrapControlText__textAdjust(
                                      beforeDetailLabel,
                                      (System_String_o *)Instance,
                                      v24->fields.mFontSize,
                                      0,
                                      0,
                                      0LL),
        (titles = tdAddEntity->fields.titles) == 0LL) )
  {
LABEL_22:
    sub_B0D97C(Instance);
  }
  if ( titles->max_length <= index )
  {
LABEL_23:
    v28 = sub_B0D9A8(Instance);
    sub_B0D948(v28, 0LL);
  }
  Instance = (DataManager_o *)this->fields.titleLabel;
  if ( !Instance )
    goto LABEL_22;
  UILabel__set_text((UILabel_o *)Instance, titles->m_Items[index], 0LL);
  Instance = (DataManager_o *)TreasureDvcLvMaster__GetEntity(v17, v20, v29, 0LL);
  if ( !Instance )
    goto LABEL_22;
  afterDetailLabel = this->fields.afterDetailLabel;
  Instance = (DataManager_o *)TreasureDvcLvEntity__getDetalShort((TreasureDvcLvEntity_o *)Instance, 0LL);
  v27 = this->fields.afterDetailLabel;
  if ( !v27 )
    goto LABEL_22;
  WrapControlText__textAdjust(afterDetailLabel, (System_String_o *)Instance, v27->fields.mFontSize, 0, 0, 0LL);
}