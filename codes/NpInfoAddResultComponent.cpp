void NpInfoAddResultComponent___ctor(NpInfoAddResultComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void NpInfoAddResultComponent__SetDisplay(
        NpInfoAddResultComponent_o *this,
        Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *npAddManager,
        int32_t index,
        System_String_o *titleText,
        bool isRankUp,
        int32_t transformCount,
        const MethodInfo *method)
{
  void *Instance; // x0
  DataManager_o *v14; // x27
  Il2CppObject *MasterData_object; // x23
  Il2CppObject *v16; // x22
  _DWORD *v17; // x26
  System_String_o **v18; // x24
  TreasureDvcLvEntity_o *v19; // x25
  int32_t v20; // w27
  UILabel_o *beforeLvLabel; // x26
  UILabel_o *beforeDetailLabel; // x24
  struct UILabel_o *v23; // x8
  _DWORD *v24; // x24
  Il2CppObject *Entity; // x21
  TreasureDvcLvEntity_o *v26; // x0
  UILabel_o *afterLvLabel; // x22
  TreasureDvcLvEntity_o *v28; // x20
  UILabel_o *afterDetailLabel; // x21
  struct UILabel_o *v30; // x8

  if ( (byte_4C3BA51 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_TreasureDvcMaster___);
    sub_1C32C20(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C3BA51 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  v14 = (DataManager_o *)Instance;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
  v16 = DataManager__GetMasterData_object_(
          v14,
          (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
  DataManager__GetMasterData_object_(v14, (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( transformCount >= 2 )
  {
    Instance = this->fields.transformTitle;
    if ( Instance )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
      Instance = this->fields.transformTitleLabel;
      if ( Instance )
        goto LABEL_10;
    }
LABEL_30:
    sub_1C32E7C(Instance);
  }
  Instance = this->fields.title;
  if ( !Instance )
    goto LABEL_30;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
  Instance = this->fields.titleLabel;
  if ( !Instance )
    goto LABEL_30;
LABEL_10:
  UILabel__set_text((UILabel_o *)Instance, titleText, 0);
  Instance = this->fields.lvInfo;
  if ( !Instance )
    goto LABEL_30;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, !isRankUp, 0);
  Instance = this->fields.rankInfo;
  if ( !Instance )
    goto LABEL_30;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, isRankUp, 0);
  if ( !npAddManager )
    goto LABEL_30;
  Instance = Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager__GetBeforeNp(npAddManager, index, 0);
  if ( !Instance )
    goto LABEL_30;
  if ( !MasterData_object )
    goto LABEL_30;
  v17 = Instance;
  Instance = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
               *((_DWORD *)Instance + 6),
               (const MethodInfo_3396838 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
  if ( !v16 )
    goto LABEL_30;
  v18 = (System_String_o **)Instance;
  Instance = TreasureDvcLvMaster__GetEntity((TreasureDvcLvMaster_o *)v16, v17[6], v17[7], 0);
  if ( !v18 )
    goto LABEL_30;
  v19 = (TreasureDvcLvEntity_o *)Instance;
  Instance = this->fields.rubyLabel;
  if ( !Instance )
    goto LABEL_30;
  UILabel__set_text((UILabel_o *)Instance, v18[4], 0);
  Instance = this->fields.nameLabel;
  if ( !Instance )
    goto LABEL_30;
  v20 = (_DWORD)v17 + 28;
  UILabel__set_text((UILabel_o *)Instance, v18[3], 0);
  beforeLvLabel = this->fields.beforeLvLabel;
  Instance = System_Int32__ToString(v20, 0);
  if ( !beforeLvLabel )
    goto LABEL_30;
  UILabel__set_text(beforeLvLabel, (System_String_o *)Instance, 0);
  Instance = this->fields.beforeRankLabel;
  if ( !Instance )
    goto LABEL_30;
  UILabel__set_text((UILabel_o *)Instance, v18[5], 0);
  if ( !v19 )
    goto LABEL_30;
  beforeDetailLabel = this->fields.beforeDetailLabel;
  Instance = TreasureDvcLvEntity__getDetalShort(v19, 0);
  v23 = this->fields.beforeDetailLabel;
  if ( !v23 )
    goto LABEL_30;
  WrapControlText__textAdjust(beforeDetailLabel, (System_String_o *)Instance, v23->fields.mFontSize, 0, 0);
  Instance = Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager__GetAfterNp(npAddManager, index, 0);
  if ( !Instance )
    goto LABEL_30;
  v24 = Instance;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
             *((_DWORD *)Instance + 6),
             (const MethodInfo_3396838 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
  v26 = TreasureDvcLvMaster__GetEntity((TreasureDvcLvMaster_o *)v16, v24[6], v24[7], 0);
  afterLvLabel = this->fields.afterLvLabel;
  v28 = v26;
  Instance = System_Int32__ToString((int)v24 + 28, 0);
  if ( !afterLvLabel )
    goto LABEL_30;
  UILabel__set_text(afterLvLabel, (System_String_o *)Instance, 0);
  if ( !Entity )
    goto LABEL_30;
  Instance = this->fields.afterRankLabel;
  if ( !Instance )
    goto LABEL_30;
  UILabel__set_text((UILabel_o *)Instance, (System_String_o *)Entity[2].monitor, 0);
  if ( !v28 )
    goto LABEL_30;
  afterDetailLabel = this->fields.afterDetailLabel;
  Instance = TreasureDvcLvEntity__getDetalShort(v28, 0);
  v30 = this->fields.afterDetailLabel;
  if ( !v30 )
    goto LABEL_30;
  WrapControlText__textAdjust(afterDetailLabel, (System_String_o *)Instance, v30->fields.mFontSize, 0, 0);
}