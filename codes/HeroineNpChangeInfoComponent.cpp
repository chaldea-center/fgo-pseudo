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
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  DataManager_o *Instance; // x0
  __int64 v16; // x1
  DataManager_o *v17; // x21
  UILabel_o *lvLabel; // x21
  UILabel_o *detailLabel; // x20
  struct UILabel_o *v20; // x8
  int32_t lv; // [xsp+Ch] [xbp-24h] BYREF

  lv = treasureDvcLv;
  if ( (byte_42EA4A9 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___, treasureDvcId, treasureDvcLv, method);
    sub_B5D5C4(&Method_DataManager_GetMasterData_TreasureDvcMaster___, v6, v7, v8);
    sub_B5D5C4(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__, v9, v10, v11);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12, v13, v14);
    byte_42EA4A9 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
  if ( !Instance )
    goto LABEL_14;
  Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                treasureDvcId,
                                (const MethodInfo_23FAE10 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_14;
  v17 = Instance;
  Instance = (DataManager_o *)this->fields.rubyLabel;
  if ( !Instance )
    goto LABEL_14;
  UILabel__set_text((UILabel_o *)Instance, (System_String_o *)v17->fields.lookup, 0LL);
  Instance = (DataManager_o *)this->fields.nameLabel;
  if ( !Instance )
    goto LABEL_14;
  UILabel__set_text((UILabel_o *)Instance, (System_String_o *)v17->fields.datalist, 0LL);
  lvLabel = this->fields.lvLabel;
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)&lv, 0LL);
  if ( !lvLabel
    || (UILabel__set_text(lvLabel, (System_String_o *)Instance, 0LL),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___)) == 0LL
    || (Instance = (DataManager_o *)TreasureDvcLvMaster__GetEntity(
                                      (TreasureDvcLvMaster_o *)Instance,
                                      treasureDvcId,
                                      lv,
                                      0LL)) == 0LL
    || (detailLabel = this->fields.detailLabel,
        Instance = (DataManager_o *)TreasureDvcLvEntity__getDetalShort((TreasureDvcLvEntity_o *)Instance, 0LL),
        (v20 = this->fields.detailLabel) == 0LL) )
  {
LABEL_14:
    sub_B5D69C(Instance, v16);
  }
  WrapControlText__textAdjust(detailLabel, (System_String_o *)Instance, v20->fields.mFontSize, 0, 0, 0LL);
}


void __fastcall HeroineNpChangeInfoComponent__SetupForNpChange(
        HeroineNpChangeInfoComponent_o *this,
        int32_t treasureDvcId,
        int32_t treasureDvcLv,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  DataManager_o *Instance; // x0
  __int64 v17; // x1
  System_String_o **v18; // x22
  UILabel_o *detailLabel; // x20
  struct UILabel_o *v20; // x8

  if ( (byte_42EA4AA & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___, treasureDvcId, treasureDvcLv, method);
    sub_B5D5C4(&Method_DataManager_GetMasterData_TreasureDvcMaster___, v7, v8, v9);
    sub_B5D5C4(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__, v10, v11, v12);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13, v14, v15);
    byte_42EA4AA = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
  if ( !Instance )
    goto LABEL_14;
  Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                treasureDvcId,
                                (const MethodInfo_23FAE10 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_14;
  v18 = (System_String_o **)Instance;
  Instance = (DataManager_o *)this->fields.rubyLabel;
  if ( !Instance )
    goto LABEL_14;
  UILabel__set_text((UILabel_o *)Instance, v18[4], 0LL);
  Instance = (DataManager_o *)this->fields.nameLabel;
  if ( !Instance )
    goto LABEL_14;
  UILabel__set_text((UILabel_o *)Instance, v18[3], 0LL);
  Instance = (DataManager_o *)this->fields.lvLabel;
  if ( !Instance
    || (UILabel__set_text((UILabel_o *)Instance, v18[5], 0LL),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___)) == 0LL
    || (Instance = (DataManager_o *)TreasureDvcLvMaster__GetEntity(
                                      (TreasureDvcLvMaster_o *)Instance,
                                      treasureDvcId,
                                      treasureDvcLv,
                                      0LL)) == 0LL
    || (detailLabel = this->fields.detailLabel,
        Instance = (DataManager_o *)TreasureDvcLvEntity__getDetalShort((TreasureDvcLvEntity_o *)Instance, 0LL),
        (v20 = this->fields.detailLabel) == 0LL) )
  {
LABEL_14:
    sub_B5D69C(Instance, v17);
  }
  WrapControlText__textAdjust(detailLabel, (System_String_o *)Instance, v20->fields.mFontSize, 0, 0, 0LL);
}