void NpInfoAddResultComponent___ctor(NpInfoAddResultComponent_o *this, const MethodInfo *method)
{
  __asm { FMOV            V1.4S, #1.0 }
  this->fields.defaultTransformTitleLabelColor = _Q1;
  this->fields.defaultTransformTitleLabelSpriteColor = (struct UnityEngine_Color_o)xmmword_CFEFF0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
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
  __int64 v13; // x1
  DataManager_o *v14; // x27
  Il2CppObject *MasterData_object; // x25
  Il2CppObject *v16; // x24
  _DWORD *v17; // x28
  System_String_o **v18; // x26
  TreasureDvcLvEntity_o *v19; // x27
  int32_t v20; // w29
  UILabel_o *beforeLvLabel; // x28
  UILabel_o *beforeDetailLabelScroll; // x26
  System_String_o *DetalShort; // x0
  _DWORD *v24; // x26
  Il2CppObject *Entity; // x25
  TreasureDvcLvEntity_o *v26; // x0
  UILabel_o *afterLvLabel; // x24
  TreasureDvcLvEntity_o *v28; // x23
  UILabel_o *afterDetailLabelScroll; // x24
  System_String_o *v30; // x0
  ServantTreasureDeviceAddEntity_o *tdAddEntity_k__BackingField; // x0
  Il2CppObject *ComponentInChildren_object__51981160; // x22
  float r; // s0 OVERLAPPED
  float g; // s1
  float b; // s2
  float a; // s3
  UIWidget_o *transformTitleLabel; // x22
  float v38; // s0 OVERLAPPED
  float v39; // s1
  float v40; // s2
  float v41; // s3

  if ( (byte_4D30A66 & 1) == 0 )
  {
    sub_1C94098(&Method_UnityEngine_Component_GetComponentInChildren_UISprite___);
    sub_1C94098(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_TreasureDvcMaster___);
    sub_1C94098(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D30A66 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_42;
  v14 = (DataManager_o *)Instance;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
  v16 = DataManager__GetMasterData_object_(
          v14,
          (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
  DataManager__GetMasterData_object_(v14, (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_ServantMaster___);
  Instance = this->fields.lvInfo;
  if ( !Instance )
    goto LABEL_42;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, !isRankUp, 0);
  Instance = this->fields.rankInfo;
  if ( !Instance )
    goto LABEL_42;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, isRankUp, 0);
  if ( !npAddManager )
    goto LABEL_42;
  Instance = Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager__GetBeforeNp(npAddManager, index, 0);
  if ( !Instance )
    goto LABEL_42;
  if ( !MasterData_object )
    goto LABEL_42;
  v17 = Instance;
  Instance = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
               *((_DWORD *)Instance + 6),
               (const MethodInfo_345B4C0 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
  if ( !v16 )
    goto LABEL_42;
  v18 = (System_String_o **)Instance;
  Instance = TreasureDvcLvMaster__GetEntity((TreasureDvcLvMaster_o *)v16, v17[6], v17[7], 0);
  if ( !v18 )
    goto LABEL_42;
  v19 = (TreasureDvcLvEntity_o *)Instance;
  Instance = this->fields.rubyLabel;
  if ( !Instance )
    goto LABEL_42;
  UILabel__set_text((UILabel_o *)Instance, v18[4], 0);
  Instance = this->fields.nameLabel;
  if ( !Instance )
    goto LABEL_42;
  v20 = (_DWORD)v17 + 28;
  UILabel__set_text((UILabel_o *)Instance, v18[3], 0);
  beforeLvLabel = this->fields.beforeLvLabel;
  Instance = System_Int32__ToString(v20, 0);
  if ( !beforeLvLabel )
    goto LABEL_42;
  UILabel__set_text(beforeLvLabel, (System_String_o *)Instance, 0);
  Instance = this->fields.beforeRankLabel;
  if ( !Instance )
    goto LABEL_42;
  UILabel__set_text((UILabel_o *)Instance, v18[5], 0);
  if ( !v19 )
    goto LABEL_42;
  beforeDetailLabelScroll = this->fields.beforeDetailLabelScroll;
  DetalShort = TreasureDvcLvEntity__getDetalShort(v19, 0);
  UILabelHelper__SetLabelWithScroll(beforeDetailLabelScroll, DetalShort, 4, 0);
  Instance = Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager__GetAfterNp(npAddManager, index, 0);
  if ( !Instance )
    goto LABEL_42;
  v24 = Instance;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
             *((_DWORD *)Instance + 6),
             (const MethodInfo_345B4C0 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
  v26 = TreasureDvcLvMaster__GetEntity((TreasureDvcLvMaster_o *)v16, v24[6], v24[7], 0);
  afterLvLabel = this->fields.afterLvLabel;
  v28 = v26;
  Instance = System_Int32__ToString((int)v24 + 28, 0);
  if ( !afterLvLabel )
    goto LABEL_42;
  UILabel__set_text(afterLvLabel, (System_String_o *)Instance, 0);
  if ( !Entity )
    goto LABEL_42;
  Instance = this->fields.afterRankLabel;
  if ( !Instance )
    goto LABEL_42;
  UILabel__set_text((UILabel_o *)Instance, (System_String_o *)Entity[2].monitor, 0);
  if ( !v28 )
    goto LABEL_42;
  afterDetailLabelScroll = this->fields.afterDetailLabelScroll;
  v30 = TreasureDvcLvEntity__getDetalShort(v28, 0);
  UILabelHelper__SetLabelWithScroll(afterDetailLabelScroll, v30, 4, 0);
  if ( transformCount > 1
    || (tdAddEntity_k__BackingField = npAddManager->fields._tdAddEntity_k__BackingField) != 0
    && ServantTreasureDeviceAddEntity__HasKeyCondLabelColorOrCondSpriteColor(tdAddEntity_k__BackingField, 0) )
  {
    Instance = this->fields.transformTitle;
    if ( !Instance )
      goto LABEL_42;
    Instance = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0);
    if ( !Instance )
      goto LABEL_42;
    ComponentInChildren_object__51981160 = UnityEngine_Component__GetComponentInChildren_object__51981160(
                                             (UnityEngine_Component_o *)Instance,
                                             (const MethodInfo_3192B68 *)Method_UnityEngine_Component_GetComponentInChildren_UISprite___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)ComponentInChildren_object__51981160, 0, 0) )
    {
      Instance = npAddManager->fields._tdAddEntity_k__BackingField;
      r = this->fields.defaultTransformTitleLabelSpriteColor.fields.r;
      g = this->fields.defaultTransformTitleLabelSpriteColor.fields.g;
      b = this->fields.defaultTransformTitleLabelSpriteColor.fields.b;
      a = this->fields.defaultTransformTitleLabelSpriteColor.fields.a;
      if ( Instance )
        *(UnityEngine_Color_o *)&r = ServantTreasureDeviceAddEntity__GetCondSpriteColor(
                                       (ServantTreasureDeviceAddEntity_o *)Instance,
                                       *(UnityEngine_Color_o *)&r,
                                       0);
      if ( !ComponentInChildren_object__51981160 )
        goto LABEL_42;
      UIWidget__set_color((UIWidget_o *)ComponentInChildren_object__51981160, *(UnityEngine_Color_o *)&r, 0);
    }
    transformTitleLabel = (UIWidget_o *)this->fields.transformTitleLabel;
    Instance = npAddManager->fields._tdAddEntity_k__BackingField;
    v38 = this->fields.defaultTransformTitleLabelColor.fields.r;
    v39 = this->fields.defaultTransformTitleLabelColor.fields.g;
    v40 = this->fields.defaultTransformTitleLabelColor.fields.b;
    v41 = this->fields.defaultTransformTitleLabelColor.fields.a;
    if ( Instance )
      *(UnityEngine_Color_o *)&v38 = ServantTreasureDeviceAddEntity__GetCondLabelColor(
                                       (ServantTreasureDeviceAddEntity_o *)Instance,
                                       *(UnityEngine_Color_o *)&v38,
                                       0);
    if ( transformTitleLabel )
    {
      UIWidget__set_color(transformTitleLabel, *(UnityEngine_Color_o *)&v38, 0);
      Instance = this->fields.transformTitleLabel;
      if ( Instance )
      {
        UILabel__set_text((UILabel_o *)Instance, titleText, 0);
        Instance = this->fields.transformTitle;
        if ( Instance )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
          return;
        }
      }
    }
LABEL_42:
    sub_1C942F0(Instance, v13);
  }
  Instance = this->fields.title;
  if ( !Instance )
    goto LABEL_42;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
  Instance = this->fields.titleLabel;
  if ( !Instance )
    goto LABEL_42;
  UILabel__set_text((UILabel_o *)Instance, titleText, 0);
}