void HeroineNpChangeInfoComponent___ctor(HeroineNpChangeInfoComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void HeroineNpChangeInfoComponent__Setup(
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
  if ( (byte_4CF27D9 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_TreasureDvcMaster___);
    sub_1C7BAE8(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CF27D9 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
  if ( !Instance )
    goto LABEL_14;
  Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                treasureDvcId,
                                (const MethodInfo_342E2FC *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_14;
  v8 = Instance;
  Instance = (DataManager_o *)this->fields.rubyLabel;
  if ( !Instance )
    goto LABEL_14;
  UILabel__set_text((UILabel_o *)Instance, *(System_String_o **)&v8->fields._DispLog, 0);
  Instance = (DataManager_o *)this->fields.nameLabel;
  if ( !Instance )
    goto LABEL_14;
  UILabel__set_text((UILabel_o *)Instance, (System_String_o *)v8->fields.m_CancellationTokenSource, 0);
  lvLabel = this->fields.lvLabel;
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)&lv, 0);
  if ( !lvLabel
    || (UILabel__set_text(lvLabel, (System_String_o *)Instance, 0),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0)
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___)) == 0
    || (Instance = (DataManager_o *)TreasureDvcLvMaster__GetEntity(
                                      (TreasureDvcLvMaster_o *)Instance,
                                      treasureDvcId,
                                      lv,
                                      0)) == 0
    || (detailLabel = this->fields.detailLabel,
        Instance = (DataManager_o *)TreasureDvcLvEntity__getDetalShort((TreasureDvcLvEntity_o *)Instance, 0),
        (v11 = this->fields.detailLabel) == 0) )
  {
LABEL_14:
    sub_1C7BD40(Instance, v7);
  }
  WrapControlText__textAdjust(detailLabel, (System_String_o *)Instance, v11->fields.mFontSize, 0, 0);
}


void HeroineNpChangeInfoComponent__SetupForNpChange(
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

  if ( (byte_4CF27DA & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_TreasureDvcMaster___);
    sub_1C7BAE8(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CF27DA = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
  if ( !Instance )
    goto LABEL_14;
  Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                treasureDvcId,
                                (const MethodInfo_342E2FC *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_14;
  v9 = (System_String_o **)Instance;
  Instance = (DataManager_o *)this->fields.rubyLabel;
  if ( !Instance )
    goto LABEL_14;
  UILabel__set_text((UILabel_o *)Instance, v9[4], 0);
  Instance = (DataManager_o *)this->fields.nameLabel;
  if ( !Instance )
    goto LABEL_14;
  UILabel__set_text((UILabel_o *)Instance, v9[3], 0);
  Instance = (DataManager_o *)this->fields.lvLabel;
  if ( !Instance
    || (UILabel__set_text((UILabel_o *)Instance, v9[5], 0),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0)
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___)) == 0
    || (Instance = (DataManager_o *)TreasureDvcLvMaster__GetEntity(
                                      (TreasureDvcLvMaster_o *)Instance,
                                      treasureDvcId,
                                      treasureDvcLv,
                                      0)) == 0
    || (detailLabel = this->fields.detailLabel,
        Instance = (DataManager_o *)TreasureDvcLvEntity__getDetalShort((TreasureDvcLvEntity_o *)Instance, 0),
        (v11 = this->fields.detailLabel) == 0) )
  {
LABEL_14:
    sub_1C7BD40(Instance, v8);
  }
  WrapControlText__textAdjust(detailLabel, (System_String_o *)Instance, v11->fields.mFontSize, 0, 0);
}