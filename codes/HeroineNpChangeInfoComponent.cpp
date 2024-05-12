void __fastcall HeroineNpChangeInfoComponent___ctor(HeroineNpChangeInfoComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall HeroineNpChangeInfoComponent__Setup(
        HeroineNpChangeInfoComponent_o *this,
        int32_t treasureDvcId,
        int32_t treasureDvcLv,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  DataManager_o *v8; // x21
  UILabel_o *lvLabel; // x21
  UILabel_o *detailLabel; // x20
  struct UILabel_o *v11; // x8
  int32_t lv; // [xsp+Ch] [xbp-24h] BYREF

  lv = treasureDvcLv;
  if ( (byte_438C926 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_TreasureDvcMaster___);
    sub_B775C4(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438C926 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
  if ( !Instance )
    goto LABEL_14;
  Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                treasureDvcId,
                                (const MethodInfo_21FB894 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_14;
  v8 = Instance;
  Instance = (DataManager_o *)this->fields.rubyLabel;
  if ( !Instance )
    goto LABEL_14;
  UILabel__set_text((UILabel_o *)Instance, (System_String_o *)v8->fields.lookup, 0LL);
  Instance = (DataManager_o *)this->fields.nameLabel;
  if ( !Instance )
    goto LABEL_14;
  UILabel__set_text((UILabel_o *)Instance, (System_String_o *)v8->fields.datalist, 0LL);
  lvLabel = this->fields.lvLabel;
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)&lv, 0LL);
  if ( !lvLabel
    || (UILabel__set_text(lvLabel, (System_String_o *)Instance, 0LL),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___)) == 0LL
    || (Instance = (DataManager_o *)TreasureDvcLvMaster__GetEntity(
                                      (TreasureDvcLvMaster_o *)Instance,
                                      treasureDvcId,
                                      lv,
                                      0LL)) == 0LL
    || (detailLabel = this->fields.detailLabel,
        Instance = (DataManager_o *)TreasureDvcLvEntity__getDetalShort((TreasureDvcLvEntity_o *)Instance, 0LL),
        (v11 = this->fields.detailLabel) == 0LL) )
  {
LABEL_14:
    sub_B7769C(Instance, v7);
  }
  WrapControlText__textAdjust(detailLabel, (System_String_o *)Instance, v11->fields.mFontSize, 0, 0, 0LL);
}


void __fastcall HeroineNpChangeInfoComponent__SetupForNpChange(
        HeroineNpChangeInfoComponent_o *this,
        int32_t treasureDvcId,
        int32_t treasureDvcLv,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v8; // x1
  System_String_o **v9; // x22
  UILabel_o *detailLabel; // x20
  struct UILabel_o *v11; // x8

  if ( (byte_438C927 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_TreasureDvcMaster___);
    sub_B775C4(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438C927 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
  if ( !Instance )
    goto LABEL_14;
  Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                treasureDvcId,
                                (const MethodInfo_21FB894 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_14;
  v9 = (System_String_o **)Instance;
  Instance = (DataManager_o *)this->fields.rubyLabel;
  if ( !Instance )
    goto LABEL_14;
  UILabel__set_text((UILabel_o *)Instance, v9[4], 0LL);
  Instance = (DataManager_o *)this->fields.nameLabel;
  if ( !Instance )
    goto LABEL_14;
  UILabel__set_text((UILabel_o *)Instance, v9[3], 0LL);
  Instance = (DataManager_o *)this->fields.lvLabel;
  if ( !Instance
    || (UILabel__set_text((UILabel_o *)Instance, v9[5], 0LL),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___)) == 0LL
    || (Instance = (DataManager_o *)TreasureDvcLvMaster__GetEntity(
                                      (TreasureDvcLvMaster_o *)Instance,
                                      treasureDvcId,
                                      treasureDvcLv,
                                      0LL)) == 0LL
    || (detailLabel = this->fields.detailLabel,
        Instance = (DataManager_o *)TreasureDvcLvEntity__getDetalShort((TreasureDvcLvEntity_o *)Instance, 0LL),
        (v11 = this->fields.detailLabel) == 0LL) )
  {
LABEL_14:
    sub_B7769C(Instance, v8);
  }
  WrapControlText__textAdjust(detailLabel, (System_String_o *)Instance, v11->fields.mFontSize, 0, 0, 0LL);
}