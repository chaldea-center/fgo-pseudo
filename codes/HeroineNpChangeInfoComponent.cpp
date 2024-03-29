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
  DataManager_o *Instance; // x0
  DataManager_o *v10; // x21
  UILabel_o *lvLabel; // x21
  UILabel_o *detailLabel; // x20
  struct UILabel_o *v13; // x8
  int32_t lv; // [xsp+Ch] [xbp-24h] BYREF

  lv = treasureDvcLv;
  if ( (byte_4215CB4 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___, *(_QWORD *)&treasureDvcId);
    sub_B0D8A4(&Method_DataManager_GetMasterData_TreasureDvcMaster___, v6);
    sub_B0D8A4(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__, v7);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4215CB4 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
  if ( !Instance )
    goto LABEL_14;
  Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                treasureDvcId,
                                (const MethodInfo_2669BD4 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_14;
  v10 = Instance;
  Instance = (DataManager_o *)this->fields.rubyLabel;
  if ( !Instance )
    goto LABEL_14;
  UILabel__set_text((UILabel_o *)Instance, (System_String_o *)v10->fields.lookup, 0LL);
  Instance = (DataManager_o *)this->fields.nameLabel;
  if ( !Instance )
    goto LABEL_14;
  UILabel__set_text((UILabel_o *)Instance, (System_String_o *)v10->fields.datalist, 0LL);
  lvLabel = this->fields.lvLabel;
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)&lv, 0LL);
  if ( !lvLabel
    || (UILabel__set_text(lvLabel, (System_String_o *)Instance, 0LL),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___)) == 0LL
    || (Instance = (DataManager_o *)TreasureDvcLvMaster__GetEntity(
                                      (TreasureDvcLvMaster_o *)Instance,
                                      treasureDvcId,
                                      lv,
                                      0LL)) == 0LL
    || (detailLabel = this->fields.detailLabel,
        Instance = (DataManager_o *)TreasureDvcLvEntity__getDetalShort((TreasureDvcLvEntity_o *)Instance, 0LL),
        (v13 = this->fields.detailLabel) == 0LL) )
  {
LABEL_14:
    sub_B0D97C(Instance);
  }
  WrapControlText__textAdjust(detailLabel, (System_String_o *)Instance, v13->fields.mFontSize, 0, 0, 0LL);
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
  DataManager_o *Instance; // x0
  System_String_o **v11; // x22
  UILabel_o *detailLabel; // x20
  struct UILabel_o *v13; // x8

  if ( (byte_4215CB5 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___, *(_QWORD *)&treasureDvcId);
    sub_B0D8A4(&Method_DataManager_GetMasterData_TreasureDvcMaster___, v7);
    sub_B0D8A4(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__, v8);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4215CB5 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
  if ( !Instance )
    goto LABEL_14;
  Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                treasureDvcId,
                                (const MethodInfo_2669BD4 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_14;
  v11 = (System_String_o **)Instance;
  Instance = (DataManager_o *)this->fields.rubyLabel;
  if ( !Instance )
    goto LABEL_14;
  UILabel__set_text((UILabel_o *)Instance, v11[4], 0LL);
  Instance = (DataManager_o *)this->fields.nameLabel;
  if ( !Instance )
    goto LABEL_14;
  UILabel__set_text((UILabel_o *)Instance, v11[3], 0LL);
  Instance = (DataManager_o *)this->fields.lvLabel;
  if ( !Instance
    || (UILabel__set_text((UILabel_o *)Instance, v11[5], 0LL),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___)) == 0LL
    || (Instance = (DataManager_o *)TreasureDvcLvMaster__GetEntity(
                                      (TreasureDvcLvMaster_o *)Instance,
                                      treasureDvcId,
                                      treasureDvcLv,
                                      0LL)) == 0LL
    || (detailLabel = this->fields.detailLabel,
        Instance = (DataManager_o *)TreasureDvcLvEntity__getDetalShort((TreasureDvcLvEntity_o *)Instance, 0LL),
        (v13 = this->fields.detailLabel) == 0LL) )
  {
LABEL_14:
    sub_B0D97C(Instance);
  }
  WrapControlText__textAdjust(detailLabel, (System_String_o *)Instance, v13->fields.mFontSize, 0, 0, 0LL);
}