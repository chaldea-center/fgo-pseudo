void __fastcall NpInfoAddResultComponent___ctor(NpInfoAddResultComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall NpInfoAddResultComponent__SetDisplay(
        NpInfoAddResultComponent_o *this,
        ServantTreasureDeviceAddEntity_o *tdAddEntity,
        int32_t index,
        int32_t beforeLv,
        int32_t afterLv,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  DataManager_o *Instance; // x0
  __int64 v19; // x1
  DataManager_o *v20; // x22
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x24
  WarQuestSelectionMaster_o *v22; // x0
  UILabel_o *beforeLvLabel; // x23
  TreasureDvcLvMaster_o *v24; // x22
  UILabel_o *afterLvLabel; // x23
  struct System_Int32_array *treasureDeviceIds; // x8
  int32_t v27; // w23
  DataManager_o *v28; // x24
  TreasureDvcLvEntity_o *v29; // x25
  UILabel_o *beforeDetailLabel; // x24
  struct UILabel_o *v31; // x8
  struct System_String_array *titles; // x8
  UILabel_o *afterDetailLabel; // x20
  struct UILabel_o *v34; // x8
  __int64 v35; // x0
  int32_t v36; // [xsp+8h] [xbp-48h] BYREF
  int32_t lv; // [xsp+Ch] [xbp-44h] BYREF

  v36 = afterLv;
  lv = beforeLv;
  if ( (byte_42E91FC & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataManager_GetMasterData_TreasureDvcLvMaster___,
      (_DWORD)tdAddEntity,
      index,
      *(_QWORD *)&beforeLv);
    sub_B5D5C4(&Method_DataManager_GetMasterData_TreasureDvcMaster___, v9, v10, v11);
    sub_B5D5C4(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__, v12, v13, v14);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15, v16, v17);
    byte_42E91FC = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  v20 = Instance;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        Instance,
                                                                                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
  v22 = DataManager__GetMasterData_WarQuestSelectionMaster_(
          v20,
          (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
  beforeLvLabel = this->fields.beforeLvLabel;
  v24 = (TreasureDvcLvMaster_o *)v22;
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)&lv, 0LL);
  if ( !beforeLvLabel )
    goto LABEL_22;
  UILabel__set_text(beforeLvLabel, (System_String_o *)Instance, 0LL);
  afterLvLabel = this->fields.afterLvLabel;
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)&v36, 0LL);
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
  v27 = treasureDeviceIds->m_Items[index + 1];
  Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                MasterData_WarQuestSelectionMaster,
                                v27,
                                (const MethodInfo_23FAE10 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
  if ( !v24 )
    goto LABEL_22;
  v28 = Instance;
  Instance = (DataManager_o *)TreasureDvcLvMaster__GetEntity(v24, v27, lv, 0LL);
  if ( !v28 )
    goto LABEL_22;
  v29 = (TreasureDvcLvEntity_o *)Instance;
  Instance = (DataManager_o *)this->fields.rubyLabel;
  if ( !Instance )
    goto LABEL_22;
  UILabel__set_text((UILabel_o *)Instance, (System_String_o *)v28->fields.lookup, 0LL);
  Instance = (DataManager_o *)this->fields.nameLabel;
  if ( !Instance
    || (UILabel__set_text((UILabel_o *)Instance, (System_String_o *)v28->fields.datalist, 0LL), !v29)
    || (beforeDetailLabel = this->fields.beforeDetailLabel,
        Instance = (DataManager_o *)TreasureDvcLvEntity__getDetalShort(v29, 0LL),
        (v31 = this->fields.beforeDetailLabel) == 0LL)
    || (Instance = (DataManager_o *)WrapControlText__textAdjust(
                                      beforeDetailLabel,
                                      (System_String_o *)Instance,
                                      v31->fields.mFontSize,
                                      0,
                                      0,
                                      0LL),
        (titles = tdAddEntity->fields.titles) == 0LL) )
  {
LABEL_22:
    sub_B5D69C(Instance, v19);
  }
  if ( titles->max_length <= index )
  {
LABEL_23:
    v35 = sub_B5D6C8(Instance);
    sub_B5D668(v35, 0LL);
  }
  Instance = (DataManager_o *)this->fields.titleLabel;
  if ( !Instance )
    goto LABEL_22;
  UILabel__set_text((UILabel_o *)Instance, titles->m_Items[index], 0LL);
  Instance = (DataManager_o *)TreasureDvcLvMaster__GetEntity(v24, v27, v36, 0LL);
  if ( !Instance )
    goto LABEL_22;
  afterDetailLabel = this->fields.afterDetailLabel;
  Instance = (DataManager_o *)TreasureDvcLvEntity__getDetalShort((TreasureDvcLvEntity_o *)Instance, 0LL);
  v34 = this->fields.afterDetailLabel;
  if ( !v34 )
    goto LABEL_22;
  WrapControlText__textAdjust(afterDetailLabel, (System_String_o *)Instance, v34->fields.mFontSize, 0, 0, 0LL);
}