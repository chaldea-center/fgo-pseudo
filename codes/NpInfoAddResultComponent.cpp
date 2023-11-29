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
  WebViewManager_o *Instance; // x0
  DataManager_o *v13; // x22
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x24
  WarQuestSelectionMaster_o *v15; // x0
  UILabel_o *beforeLvLabel; // x23
  TreasureDvcLvMaster_o *v17; // x22
  System_String_o *v18; // x0
  UILabel_o *afterLvLabel; // x23
  System_String_o *v20; // x0
  __int64 v21; // x0
  __int64 v22; // x1
  __int64 v23; // x2
  struct System_Int32_array *treasureDeviceIds; // x8
  int32_t v25; // w23
  WarEntity_o *Entity; // x0
  WarEntity_o *v27; // x24
  TreasureDvcLvEntity_o *v28; // x0
  TreasureDvcLvEntity_o *v29; // x25
  UILabel_o *rubyLabel; // x0
  UILabel_o *nameLabel; // x0
  UILabel_o *beforeDetailLabel; // x24
  System_String_o *DetalShort; // x0
  struct UILabel_o *v34; // x8
  struct System_String_array *titles; // x8
  UILabel_o *titleLabel; // x0
  TreasureDvcLvEntity_o *v37; // x0
  UILabel_o *afterDetailLabel; // x20
  System_String_o *v39; // x0
  struct UILabel_o *v40; // x8
  int32_t v41; // [xsp+8h] [xbp-48h] BYREF
  int32_t lv; // [xsp+Ch] [xbp-44h] BYREF

  v41 = afterLv;
  lv = beforeLv;
  if ( (byte_40F93A0 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___, tdAddEntity);
    sub_B16FFC(&Method_DataManager_GetMasterData_TreasureDvcMaster___, v9);
    sub_B16FFC(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__, v10);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_40F93A0 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  v13 = (DataManager_o *)Instance;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
  v15 = DataManager__GetMasterData_WarQuestSelectionMaster_(
          v13,
          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
  beforeLvLabel = this->fields.beforeLvLabel;
  v17 = (TreasureDvcLvMaster_o *)v15;
  v18 = System_Int32__ToString((int32_t)&lv, 0LL);
  if ( !beforeLvLabel )
    goto LABEL_22;
  UILabel__set_text(beforeLvLabel, v18, 0LL);
  afterLvLabel = this->fields.afterLvLabel;
  v20 = System_Int32__ToString((int32_t)&v41, 0LL);
  if ( !afterLvLabel )
    goto LABEL_22;
  UILabel__set_text(afterLvLabel, v20, 0LL);
  if ( !tdAddEntity )
    goto LABEL_22;
  treasureDeviceIds = tdAddEntity->fields.treasureDeviceIds;
  if ( !treasureDeviceIds )
    goto LABEL_22;
  if ( treasureDeviceIds->max_length <= index )
    goto LABEL_23;
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_22;
  v25 = treasureDeviceIds->m_Items[index + 1];
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             MasterData_WarQuestSelectionMaster,
             v25,
             (const MethodInfo_266F388 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
  if ( !v17 )
    goto LABEL_22;
  v27 = Entity;
  v28 = TreasureDvcLvMaster__GetEntity(v17, v25, lv, 0LL);
  if ( !v27 )
    goto LABEL_22;
  v29 = v28;
  rubyLabel = this->fields.rubyLabel;
  if ( !rubyLabel )
    goto LABEL_22;
  UILabel__set_text(rubyLabel, v27->fields.name, 0LL);
  nameLabel = this->fields.nameLabel;
  if ( !nameLabel
    || (UILabel__set_text(nameLabel, v27->fields.age, 0LL), !v29)
    || (beforeDetailLabel = this->fields.beforeDetailLabel,
        DetalShort = TreasureDvcLvEntity__getDetalShort(v29, 0LL),
        (v34 = this->fields.beforeDetailLabel) == 0LL)
    || (v21 = WrapControlText__textAdjust(beforeDetailLabel, DetalShort, v34->fields.mFontSize, 0, 0, 0LL),
        (titles = tdAddEntity->fields.titles) == 0LL) )
  {
LABEL_22:
    sub_B170D4();
  }
  if ( titles->max_length <= index )
  {
LABEL_23:
    sub_B17100(v21, v22, v23);
    sub_B170A0();
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_22;
  UILabel__set_text(titleLabel, titles->m_Items[index], 0LL);
  v37 = TreasureDvcLvMaster__GetEntity(v17, v25, v41, 0LL);
  if ( !v37 )
    goto LABEL_22;
  afterDetailLabel = this->fields.afterDetailLabel;
  v39 = TreasureDvcLvEntity__getDetalShort(v37, 0LL);
  v40 = this->fields.afterDetailLabel;
  if ( !v40 )
    goto LABEL_22;
  WrapControlText__textAdjust(afterDetailLabel, v39, v40->fields.mFontSize, 0, 0, 0LL);
}