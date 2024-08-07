void __fastcall NpInfoAddResultComponent___ctor(NpInfoAddResultComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall NpInfoAddResultComponent__SetDisplay(
        NpInfoAddResultComponent_o *this,
        Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *npAddManager,
        int32_t index,
        System_String_o *titleText,
        bool isRankUp,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  void *Instance; // x0
  __int64 v16; // x1
  DataManager_o *v17; // x26
  Il2CppObject *MasterData_object; // x23
  Il2CppObject *v19; // x22
  _DWORD *v20; // x26
  System_String_o **v21; // x24
  TreasureDvcLvEntity_o *v22; // x25
  int32_t v23; // w27
  UILabel_o *beforeLvLabel; // x26
  UILabel_o *beforeDetailLabel; // x24
  struct UILabel_o *v26; // x8
  _DWORD *v27; // x24
  Il2CppObject *Entity; // x21
  TreasureDvcLvEntity_o *v29; // x0
  UILabel_o *afterLvLabel; // x22
  TreasureDvcLvEntity_o *v31; // x20
  UILabel_o *afterDetailLabel; // x21
  struct UILabel_o *v33; // x8

  if ( (byte_4A023B7 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataManager_GetMasterData_ServantMaster___, npAddManager);
    sub_1B64A00(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___, v11);
    sub_1B64A00(&Method_DataManager_GetMasterData_TreasureDvcMaster___, v12);
    sub_1B64A00(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__, v13);
    sub_1B64A00(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_4A023B7 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  v17 = (DataManager_o *)Instance;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
  v19 = DataManager__GetMasterData_object_(
          v17,
          (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
  DataManager__GetMasterData_object_(v17, (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_ServantMaster___);
  Instance = this->fields.titleLabel;
  if ( !Instance )
    goto LABEL_25;
  UILabel__set_text((UILabel_o *)Instance, titleText, 0LL);
  Instance = this->fields.lvInfo;
  if ( !Instance )
    goto LABEL_25;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, !isRankUp, 0LL);
  Instance = this->fields.rankInfo;
  if ( !Instance )
    goto LABEL_25;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, isRankUp, 0LL);
  if ( !npAddManager )
    goto LABEL_25;
  Instance = Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager__GetBeforeNp(npAddManager, index, 0LL);
  if ( !Instance )
    goto LABEL_25;
  if ( !MasterData_object )
    goto LABEL_25;
  v20 = Instance;
  Instance = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
               *((_DWORD *)Instance + 6),
               (const MethodInfo_30D6798 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
  if ( !v19 )
    goto LABEL_25;
  v21 = (System_String_o **)Instance;
  Instance = TreasureDvcLvMaster__GetEntity((TreasureDvcLvMaster_o *)v19, v20[6], v20[7], 0LL);
  if ( !v21 )
    goto LABEL_25;
  v22 = (TreasureDvcLvEntity_o *)Instance;
  Instance = this->fields.rubyLabel;
  if ( !Instance )
    goto LABEL_25;
  UILabel__set_text((UILabel_o *)Instance, v21[4], 0LL);
  Instance = this->fields.nameLabel;
  if ( !Instance )
    goto LABEL_25;
  v23 = (_DWORD)v20 + 28;
  UILabel__set_text((UILabel_o *)Instance, v21[3], 0LL);
  beforeLvLabel = this->fields.beforeLvLabel;
  Instance = System_Int32__ToString(v23, 0LL);
  if ( !beforeLvLabel )
    goto LABEL_25;
  UILabel__set_text(beforeLvLabel, (System_String_o *)Instance, 0LL);
  Instance = this->fields.beforeRankLabel;
  if ( !Instance )
    goto LABEL_25;
  UILabel__set_text((UILabel_o *)Instance, v21[5], 0LL);
  if ( !v22 )
    goto LABEL_25;
  beforeDetailLabel = this->fields.beforeDetailLabel;
  Instance = TreasureDvcLvEntity__getDetalShort(v22, 0LL);
  v26 = this->fields.beforeDetailLabel;
  if ( !v26 )
    goto LABEL_25;
  WrapControlText__textAdjust(beforeDetailLabel, (System_String_o *)Instance, v26->fields.mFontSize, 0, 0, 0LL);
  Instance = Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager__GetAfterNp(npAddManager, index, 0LL);
  if ( !Instance )
    goto LABEL_25;
  v27 = Instance;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
             *((_DWORD *)Instance + 6),
             (const MethodInfo_30D6798 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
  v29 = TreasureDvcLvMaster__GetEntity((TreasureDvcLvMaster_o *)v19, v27[6], v27[7], 0LL);
  afterLvLabel = this->fields.afterLvLabel;
  v31 = v29;
  Instance = System_Int32__ToString((int)v27 + 28, 0LL);
  if ( !afterLvLabel
    || (UILabel__set_text(afterLvLabel, (System_String_o *)Instance, 0LL), !Entity)
    || (Instance = this->fields.afterRankLabel) == 0LL
    || (UILabel__set_text((UILabel_o *)Instance, (System_String_o *)Entity[2].monitor, 0LL), !v31)
    || (afterDetailLabel = this->fields.afterDetailLabel,
        Instance = TreasureDvcLvEntity__getDetalShort(v31, 0LL),
        (v33 = this->fields.afterDetailLabel) == 0LL) )
  {
LABEL_25:
    sub_1B64C5C(Instance, v16);
  }
  WrapControlText__textAdjust(afterDetailLabel, (System_String_o *)Instance, v33->fields.mFontSize, 0, 0, 0LL);
}