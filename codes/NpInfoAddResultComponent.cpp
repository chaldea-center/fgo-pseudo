void __fastcall NpInfoAddResultComponent___ctor(NpInfoAddResultComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall NpInfoAddResultComponent__SetDisplay(
        NpInfoAddResultComponent_o *this,
        Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *npAddManager,
        int32_t index,
        System_String_o *titleText,
        bool isRankUp,
        int32_t transformCount,
        const MethodInfo *method)
{
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  void *Instance; // x0
  __int64 v22; // x1
  DataManager_o *v23; // x27
  Il2CppObject *MasterData_object; // x23
  Il2CppObject *v25; // x22
  _DWORD *v26; // x26
  System_String_o **v27; // x24
  TreasureDvcLvEntity_o *v28; // x25
  int32_t v29; // w27
  UILabel_o *beforeLvLabel; // x26
  UILabel_o *beforeDetailLabel; // x24
  struct UILabel_o *v32; // x8
  _DWORD *v33; // x24
  Il2CppObject *Entity; // x21
  TreasureDvcLvEntity_o *v35; // x0
  UILabel_o *afterLvLabel; // x22
  TreasureDvcLvEntity_o *v37; // x20
  UILabel_o *afterDetailLabel; // x21
  struct UILabel_o *v39; // x8

  if ( (byte_4B19BCE & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, npAddManager, *(_QWORD *)&index);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___, v13, v14);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_TreasureDvcMaster___, v15, v16);
    sub_1BCA7E0(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__, v17, v18);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19, v20);
    byte_4B19BCE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  v23 = (DataManager_o *)Instance;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
  v25 = DataManager__GetMasterData_object_(
          v23,
          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
  DataManager__GetMasterData_object_(v23, (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( transformCount >= 2 )
  {
    Instance = this->fields.transformTitle;
    if ( Instance )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
      Instance = this->fields.transformTitleLabel;
      if ( Instance )
        goto LABEL_10;
    }
LABEL_30:
    sub_1BCAA3C(Instance, v22);
  }
  Instance = this->fields.title;
  if ( !Instance )
    goto LABEL_30;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  Instance = this->fields.titleLabel;
  if ( !Instance )
    goto LABEL_30;
LABEL_10:
  UILabel__set_text((UILabel_o *)Instance, titleText, 0LL);
  Instance = this->fields.lvInfo;
  if ( !Instance )
    goto LABEL_30;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, !isRankUp, 0LL);
  Instance = this->fields.rankInfo;
  if ( !Instance )
    goto LABEL_30;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, isRankUp, 0LL);
  if ( !npAddManager )
    goto LABEL_30;
  Instance = Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager__GetBeforeNp(npAddManager, index, 0LL);
  if ( !Instance )
    goto LABEL_30;
  if ( !MasterData_object )
    goto LABEL_30;
  v26 = Instance;
  Instance = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
               *((_DWORD *)Instance + 6),
               (const MethodInfo_31B2E40 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
  if ( !v25 )
    goto LABEL_30;
  v27 = (System_String_o **)Instance;
  Instance = TreasureDvcLvMaster__GetEntity((TreasureDvcLvMaster_o *)v25, v26[6], v26[7], 0LL);
  if ( !v27 )
    goto LABEL_30;
  v28 = (TreasureDvcLvEntity_o *)Instance;
  Instance = this->fields.rubyLabel;
  if ( !Instance )
    goto LABEL_30;
  UILabel__set_text((UILabel_o *)Instance, v27[4], 0LL);
  Instance = this->fields.nameLabel;
  if ( !Instance )
    goto LABEL_30;
  v29 = (_DWORD)v26 + 28;
  UILabel__set_text((UILabel_o *)Instance, v27[3], 0LL);
  beforeLvLabel = this->fields.beforeLvLabel;
  Instance = System_Int32__ToString(v29, 0LL);
  if ( !beforeLvLabel )
    goto LABEL_30;
  UILabel__set_text(beforeLvLabel, (System_String_o *)Instance, 0LL);
  Instance = this->fields.beforeRankLabel;
  if ( !Instance )
    goto LABEL_30;
  UILabel__set_text((UILabel_o *)Instance, v27[5], 0LL);
  if ( !v28 )
    goto LABEL_30;
  beforeDetailLabel = this->fields.beforeDetailLabel;
  Instance = TreasureDvcLvEntity__getDetalShort(v28, 0LL);
  v32 = this->fields.beforeDetailLabel;
  if ( !v32 )
    goto LABEL_30;
  WrapControlText__textAdjust(beforeDetailLabel, (System_String_o *)Instance, v32->fields.mFontSize, 0, 0, 0LL);
  Instance = Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager__GetAfterNp(npAddManager, index, 0LL);
  if ( !Instance )
    goto LABEL_30;
  v33 = Instance;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
             *((_DWORD *)Instance + 6),
             (const MethodInfo_31B2E40 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
  v35 = TreasureDvcLvMaster__GetEntity((TreasureDvcLvMaster_o *)v25, v33[6], v33[7], 0LL);
  afterLvLabel = this->fields.afterLvLabel;
  v37 = v35;
  Instance = System_Int32__ToString((int)v33 + 28, 0LL);
  if ( !afterLvLabel )
    goto LABEL_30;
  UILabel__set_text(afterLvLabel, (System_String_o *)Instance, 0LL);
  if ( !Entity )
    goto LABEL_30;
  Instance = this->fields.afterRankLabel;
  if ( !Instance )
    goto LABEL_30;
  UILabel__set_text((UILabel_o *)Instance, (System_String_o *)Entity[2].monitor, 0LL);
  if ( !v37 )
    goto LABEL_30;
  afterDetailLabel = this->fields.afterDetailLabel;
  Instance = TreasureDvcLvEntity__getDetalShort(v37, 0LL);
  v39 = this->fields.afterDetailLabel;
  if ( !v39 )
    goto LABEL_30;
  WrapControlText__textAdjust(afterDetailLabel, (System_String_o *)Instance, v39->fields.mFontSize, 0, 0, 0LL);
}