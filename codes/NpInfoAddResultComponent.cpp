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
  __int64 v14; // x1
  DataManager_o *v15; // x27
  Il2CppObject *MasterData_object; // x23
  Il2CppObject *v17; // x22
  _DWORD *v18; // x26
  System_String_o **v19; // x24
  TreasureDvcLvEntity_o *v20; // x25
  int32_t v21; // w27
  UILabel_o *beforeLvLabel; // x26
  UILabel_o *beforeDetailLabelScroll; // x24
  System_String_o *DetalShort; // x0
  _DWORD *v25; // x24
  Il2CppObject *Entity; // x21
  TreasureDvcLvEntity_o *v27; // x0
  UILabel_o *afterLvLabel; // x22
  TreasureDvcLvEntity_o *v29; // x20
  UILabel_o *afterDetailLabelScroll; // x19
  System_String_o *v31; // x1

  if ( (byte_4CBA432 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_TreasureDvcMaster___);
    sub_1C6BA08(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CBA432 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  v15 = (DataManager_o *)Instance;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
  v17 = DataManager__GetMasterData_object_(
          v15,
          (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
  DataManager__GetMasterData_object_(v15, (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ServantMaster___);
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
LABEL_28:
    sub_1C6BC60(Instance, v14);
  }
  Instance = this->fields.title;
  if ( !Instance )
    goto LABEL_28;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
  Instance = this->fields.titleLabel;
  if ( !Instance )
    goto LABEL_28;
LABEL_10:
  UILabel__set_text((UILabel_o *)Instance, titleText, 0);
  Instance = this->fields.lvInfo;
  if ( !Instance )
    goto LABEL_28;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, !isRankUp, 0);
  Instance = this->fields.rankInfo;
  if ( !Instance )
    goto LABEL_28;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, isRankUp, 0);
  if ( !npAddManager )
    goto LABEL_28;
  Instance = Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager__GetBeforeNp(npAddManager, index, 0);
  if ( !Instance )
    goto LABEL_28;
  if ( !MasterData_object )
    goto LABEL_28;
  v18 = Instance;
  Instance = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
               *((_DWORD *)Instance + 6),
               (const MethodInfo_33F90DC *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
  if ( !v17 )
    goto LABEL_28;
  v19 = (System_String_o **)Instance;
  Instance = TreasureDvcLvMaster__GetEntity((TreasureDvcLvMaster_o *)v17, v18[6], v18[7], 0);
  if ( !v19 )
    goto LABEL_28;
  v20 = (TreasureDvcLvEntity_o *)Instance;
  Instance = this->fields.rubyLabel;
  if ( !Instance )
    goto LABEL_28;
  UILabel__set_text((UILabel_o *)Instance, v19[4], 0);
  Instance = this->fields.nameLabel;
  if ( !Instance )
    goto LABEL_28;
  v21 = (_DWORD)v18 + 28;
  UILabel__set_text((UILabel_o *)Instance, v19[3], 0);
  beforeLvLabel = this->fields.beforeLvLabel;
  Instance = System_Int32__ToString(v21, 0);
  if ( !beforeLvLabel )
    goto LABEL_28;
  UILabel__set_text(beforeLvLabel, (System_String_o *)Instance, 0);
  Instance = this->fields.beforeRankLabel;
  if ( !Instance )
    goto LABEL_28;
  UILabel__set_text((UILabel_o *)Instance, v19[5], 0);
  if ( !v20 )
    goto LABEL_28;
  beforeDetailLabelScroll = this->fields.beforeDetailLabelScroll;
  DetalShort = TreasureDvcLvEntity__getDetalShort(v20, 0);
  UILabelHelper__SetLabelWithScroll(beforeDetailLabelScroll, DetalShort, 4, 0);
  Instance = Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager__GetAfterNp(npAddManager, index, 0);
  if ( !Instance )
    goto LABEL_28;
  v25 = Instance;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
             *((_DWORD *)Instance + 6),
             (const MethodInfo_33F90DC *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
  v27 = TreasureDvcLvMaster__GetEntity((TreasureDvcLvMaster_o *)v17, v25[6], v25[7], 0);
  afterLvLabel = this->fields.afterLvLabel;
  v29 = v27;
  Instance = System_Int32__ToString((int)v25 + 28, 0);
  if ( !afterLvLabel )
    goto LABEL_28;
  UILabel__set_text(afterLvLabel, (System_String_o *)Instance, 0);
  if ( !Entity )
    goto LABEL_28;
  Instance = this->fields.afterRankLabel;
  if ( !Instance )
    goto LABEL_28;
  UILabel__set_text((UILabel_o *)Instance, (System_String_o *)Entity[2].monitor, 0);
  if ( !v29 )
    goto LABEL_28;
  afterDetailLabelScroll = this->fields.afterDetailLabelScroll;
  v31 = TreasureDvcLvEntity__getDetalShort(v29, 0);
  UILabelHelper__SetLabelWithScroll(afterDetailLabelScroll, v31, 4, 0);
}