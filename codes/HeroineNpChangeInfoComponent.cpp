void __fastcall HeroineNpChangeInfoComponent___ctor(HeroineNpChangeInfoComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall HeroineNpChangeInfoComponent__Setup(
        HeroineNpChangeInfoComponent_o *this,
        int32_t treasureDvcId,
        int32_t treasureDvcLv,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  WarEntity_o *Entity; // x0
  WarEntity_o *v12; // x21
  UILabel_o *rubyLabel; // x0
  UILabel_o *nameLabel; // x0
  UILabel_o *lvLabel; // x21
  System_String_o *v16; // x0
  WebViewManager_o *v17; // x0
  TreasureDvcLvMaster_o *v18; // x0
  TreasureDvcLvEntity_o *v19; // x0
  UILabel_o *detailLabel; // x20
  System_String_o *DetalShort; // x0
  struct UILabel_o *v22; // x8
  int32_t lv; // [xsp+Ch] [xbp-24h] BYREF

  lv = treasureDvcLv;
  if ( (byte_40FC163 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___, *(_QWORD *)&treasureDvcId);
    sub_B16FFC(&Method_DataManager_GetMasterData_TreasureDvcMaster___, v6);
    sub_B16FFC(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_40FC163 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_14;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             MasterData_WarQuestSelectionMaster,
             treasureDvcId,
             (const MethodInfo_266F388 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
  if ( !Entity )
    goto LABEL_14;
  v12 = Entity;
  rubyLabel = this->fields.rubyLabel;
  if ( !rubyLabel )
    goto LABEL_14;
  UILabel__set_text(rubyLabel, v12->fields.name, 0LL);
  nameLabel = this->fields.nameLabel;
  if ( !nameLabel )
    goto LABEL_14;
  UILabel__set_text(nameLabel, v12->fields.age, 0LL);
  lvLabel = this->fields.lvLabel;
  v16 = System_Int32__ToString((int32_t)&lv, 0LL);
  if ( !lvLabel
    || (UILabel__set_text(lvLabel, v16, 0LL),
        (v17 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (v18 = (TreasureDvcLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)v17,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___)) == 0LL
    || (v19 = TreasureDvcLvMaster__GetEntity(v18, treasureDvcId, lv, 0LL)) == 0LL
    || (detailLabel = this->fields.detailLabel,
        DetalShort = TreasureDvcLvEntity__getDetalShort(v19, 0LL),
        (v22 = this->fields.detailLabel) == 0LL) )
  {
LABEL_14:
    sub_B170D4();
  }
  WrapControlText__textAdjust(detailLabel, DetalShort, v22->fields.mFontSize, 0, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall HeroineNpChangeInfoComponent__SetupForNpChange(
        HeroineNpChangeInfoComponent_o *this,
        int32_t treasureDvcId,
        int32_t treasureDvcLv,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  WarEntity_o *Entity; // x0
  System_String_o **v13; // x22
  UILabel_o *rubyLabel; // x0
  UILabel_o *nameLabel; // x0
  UILabel_o *lvLabel; // x0
  WebViewManager_o *v17; // x0
  TreasureDvcLvMaster_o *v18; // x0
  TreasureDvcLvEntity_o *v19; // x0
  UILabel_o *detailLabel; // x20
  System_String_o *DetalShort; // x0
  struct UILabel_o *v22; // x8

  if ( (byte_40FC164 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___, *(_QWORD *)&treasureDvcId);
    sub_B16FFC(&Method_DataManager_GetMasterData_TreasureDvcMaster___, v7);
    sub_B16FFC(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__, v8);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_40FC164 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_14;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             MasterData_WarQuestSelectionMaster,
             treasureDvcId,
             (const MethodInfo_266F388 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
  if ( !Entity )
    goto LABEL_14;
  v13 = (System_String_o **)Entity;
  rubyLabel = this->fields.rubyLabel;
  if ( !rubyLabel )
    goto LABEL_14;
  UILabel__set_text(rubyLabel, v13[4], 0LL);
  nameLabel = this->fields.nameLabel;
  if ( !nameLabel )
    goto LABEL_14;
  UILabel__set_text(nameLabel, v13[3], 0LL);
  lvLabel = this->fields.lvLabel;
  if ( !lvLabel
    || (UILabel__set_text(lvLabel, v13[5], 0LL),
        (v17 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (v18 = (TreasureDvcLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)v17,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___)) == 0LL
    || (v19 = TreasureDvcLvMaster__GetEntity(v18, treasureDvcId, treasureDvcLv, 0LL)) == 0LL
    || (detailLabel = this->fields.detailLabel,
        DetalShort = TreasureDvcLvEntity__getDetalShort(v19, 0LL),
        (v22 = this->fields.detailLabel) == 0LL) )
  {
LABEL_14:
    sub_B170D4();
  }
  WrapControlText__textAdjust(detailLabel, DetalShort, v22->fields.mFontSize, 0, 0, 0LL);
}