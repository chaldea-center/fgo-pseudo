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
        UserServantEntity_o *baseUserServantEntity,
        const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v14; // x1
  DataManager_o *v15; // x28
  Il2CppObject *MasterData_object; // x26
  Il2CppObject *v17; // x25
  _DWORD *v18; // x29
  System_String_o **v19; // x27
  TreasureDvcLvEntity_o *v20; // x28
  int32_t v21; // w20
  UILabel_o *beforeLvLabel; // x29
  UILabel_o *beforeDetailLabelScroll; // x20
  System_String_o *DetalShort; // x0
  void *v25; // x24
  Il2CppObject *Entity; // x26
  TreasureDvcLvEntity_o *v27; // x0
  UILabel_o *afterLvLabel; // x27
  TreasureDvcLvEntity_o *v29; // x25
  UILabel_o *afterDetailLabelScroll; // x20
  System_String_o *v31; // x0
  const MethodInfo *v32; // x3
  ServantTreasureDeviceAddEntity_o *tdAddEntity_k__BackingField; // x0
  UIWidget_o *v34; // x20
  System_String_o *v35; // x22
  UIWidget_o *transformTitleSprite; // x20
  System_String_o *CondSpriteColor; // x0
  ServantTransformMaster_o *v38; // x21
  __int64 v39; // x23
  __int64 v40; // x24
  int32_t v41; // w0
  __int64 v42; // x8
  int32_t v43; // w22
  ServantTransformEntity_o *v44; // x21
  UIWidget_o *transformTitleLabel; // x20
  System_String_o *CondLabelColor; // x22
  System_String_o *v47; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v50; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v51; // 0:x0.16
  UnityEngine_Color_o v52; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v53; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o DefaultCondTitleLabelColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v55; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o DefaultCondTitleSpriteColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v57; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4D34BDE & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_TreasureDvcMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_ServantTransformMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D34BDE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_45;
  v15 = (DataManager_o *)Instance;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
  v17 = DataManager__GetMasterData_object_(
          v15,
          (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
  DataManager__GetMasterData_object_(v15, (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ServantMaster___);
  Instance = this->fields.lvInfo;
  if ( !Instance )
    goto LABEL_45;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, !isRankUp, 0);
  Instance = this->fields.rankInfo;
  if ( !Instance )
    goto LABEL_45;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, isRankUp, 0);
  if ( !npAddManager )
    goto LABEL_45;
  Instance = Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager__GetBeforeNp(npAddManager, index, 0);
  if ( !Instance )
    goto LABEL_45;
  if ( !MasterData_object )
    goto LABEL_45;
  v18 = Instance;
  Instance = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
               *((_DWORD *)Instance + 6),
               (const MethodInfo_3463274 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
  if ( !v17 )
    goto LABEL_45;
  v19 = (System_String_o **)Instance;
  Instance = TreasureDvcLvMaster__GetEntity((TreasureDvcLvMaster_o *)v17, v18[6], v18[7], 0);
  if ( !v19 )
    goto LABEL_45;
  v20 = (TreasureDvcLvEntity_o *)Instance;
  Instance = this->fields.rubyLabel;
  if ( !Instance )
    goto LABEL_45;
  UILabel__set_text((UILabel_o *)Instance, v19[4], 0);
  Instance = this->fields.nameLabel;
  if ( !Instance )
    goto LABEL_45;
  v21 = (_DWORD)v18 + 28;
  UILabel__set_text((UILabel_o *)Instance, v19[3], 0);
  beforeLvLabel = this->fields.beforeLvLabel;
  Instance = System_Int32__ToString(v21, 0);
  if ( !beforeLvLabel )
    goto LABEL_45;
  UILabel__set_text(beforeLvLabel, (System_String_o *)Instance, 0);
  Instance = this->fields.beforeRankLabel;
  if ( !Instance )
    goto LABEL_45;
  UILabel__set_text((UILabel_o *)Instance, v19[5], 0);
  if ( !v20 )
    goto LABEL_45;
  beforeDetailLabelScroll = this->fields.beforeDetailLabelScroll;
  DetalShort = TreasureDvcLvEntity__getDetalShort(v20, 0);
  UILabelHelper__SetLabelWithScroll(beforeDetailLabelScroll, DetalShort, 4, 0);
  Instance = Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager__GetAfterNp(npAddManager, index, 0);
  if ( !Instance )
    goto LABEL_45;
  v25 = Instance;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
             *((_DWORD *)Instance + 6),
             (const MethodInfo_3463274 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
  v27 = TreasureDvcLvMaster__GetEntity((TreasureDvcLvMaster_o *)v17, *((_DWORD *)v25 + 6), *((_DWORD *)v25 + 7), 0);
  afterLvLabel = this->fields.afterLvLabel;
  v29 = v27;
  Instance = System_Int32__ToString((int)v25 + 28, 0);
  if ( !afterLvLabel )
    goto LABEL_45;
  UILabel__set_text(afterLvLabel, (System_String_o *)Instance, 0);
  if ( !Entity )
    goto LABEL_45;
  Instance = this->fields.afterRankLabel;
  if ( !Instance )
    goto LABEL_45;
  UILabel__set_text((UILabel_o *)Instance, (System_String_o *)Entity[2].monitor, 0);
  if ( !v29 )
    goto LABEL_45;
  afterDetailLabelScroll = this->fields.afterDetailLabelScroll;
  v31 = TreasureDvcLvEntity__getDetalShort(v29, 0);
  UILabelHelper__SetLabelWithScroll(afterDetailLabelScroll, v31, 4, 0);
  NpInfoAddResultComponent__SetMask(this, *((_BYTE *)v25 + 84), *((System_String_o **)v25 + 11), v32);
  if ( transformCount >= 2 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Instance = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ServantTransformMaster___);
    if ( !baseUserServantEntity )
      goto LABEL_45;
    v38 = (ServantTransformMaster_o *)Instance;
    v40 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.currentCryptoKey;
    v39 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v50.fields.currentCryptoKey = v40;
    *(_QWORD *)&v50.fields.fakeValue = v39;
    v41 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v50, 0);
    v42 = *(_QWORD *)&baseUserServantEntity->fields.dispLimitCount.fields.currentCryptoKey;
    *(_QWORD *)&v51.fields.fakeValue = *(_QWORD *)&baseUserServantEntity->fields.dispLimitCount.fields.fakeValue;
    v43 = v41;
    *(_QWORD *)&v51.fields.currentCryptoKey = v42;
    Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v51, 0);
    if ( !v38 )
      goto LABEL_45;
    Instance = ServantTransformMaster__GetEntity(v38, v43, (int32_t)Instance, 0);
    if ( !this->fields.transformTitleLabel )
      goto LABEL_45;
    v44 = (ServantTransformEntity_o *)Instance;
    UILabel__set_text(this->fields.transformTitleLabel, titleText, 0);
    if ( !v44 )
      goto LABEL_45;
    transformTitleLabel = (UIWidget_o *)this->fields.transformTitleLabel;
    CondLabelColor = ServantTransformEntity__GetCondLabelColor(v44, 0);
    DefaultCondTitleLabelColor = TransformHelper__get_DefaultCondTitleLabelColor(0);
    v55 = ColorHelper__ParseColorCode_44837332(CondLabelColor, DefaultCondTitleLabelColor, 0);
    if ( !transformTitleLabel )
      goto LABEL_45;
    UIWidget__set_color(transformTitleLabel, v55, 0);
    transformTitleSprite = (UIWidget_o *)this->fields.transformTitleSprite;
    CondSpriteColor = ServantTransformEntity__GetCondSpriteColor(v44, 0);
    goto LABEL_39;
  }
  tdAddEntity_k__BackingField = npAddManager->fields._tdAddEntity_k__BackingField;
  if ( tdAddEntity_k__BackingField
    && ServantTreasureDeviceAddEntity__HasKeyCondLabelColorOrCondSpriteColor(tdAddEntity_k__BackingField, 0) )
  {
    Instance = this->fields.transformTitleLabel;
    if ( !Instance )
      goto LABEL_45;
    UILabel__set_text((UILabel_o *)Instance, titleText, 0);
    Instance = npAddManager->fields._tdAddEntity_k__BackingField;
    if ( !Instance )
      goto LABEL_45;
    v34 = (UIWidget_o *)this->fields.transformTitleLabel;
    v35 = ServantTreasureDeviceAddEntity__GetCondLabelColor((ServantTreasureDeviceAddEntity_o *)Instance, 0);
    v52 = TransformHelper__get_DefaultCondTitleLabelColor(0);
    v53 = ColorHelper__ParseColorCode_44837332(v35, v52, 0);
    if ( !v34 )
      goto LABEL_45;
    UIWidget__set_color(v34, v53, 0);
    Instance = npAddManager->fields._tdAddEntity_k__BackingField;
    if ( !Instance )
      goto LABEL_45;
    transformTitleSprite = (UIWidget_o *)this->fields.transformTitleSprite;
    CondSpriteColor = ServantTreasureDeviceAddEntity__GetCondSpriteColor(
                        (ServantTreasureDeviceAddEntity_o *)Instance,
                        0);
LABEL_39:
    v47 = CondSpriteColor;
    DefaultCondTitleSpriteColor = TransformHelper__get_DefaultCondTitleSpriteColor(0);
    v57 = ColorHelper__ParseColorCode_44837332(v47, DefaultCondTitleSpriteColor, 0);
    if ( transformTitleSprite )
    {
      UIWidget__set_color(transformTitleSprite, v57, 0);
      Instance = this->fields.transformTitle;
      if ( Instance )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
        return;
      }
    }
LABEL_45:
    sub_1C93D2C(Instance, v14);
  }
  Instance = this->fields.title;
  if ( !Instance )
    goto LABEL_45;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
  Instance = this->fields.titleLabel;
  if ( !Instance )
    goto LABEL_45;
  UILabel__set_text((UILabel_o *)Instance, titleText, 0);
}


void NpInfoAddResultComponent__SetMask(
        NpInfoAddResultComponent_o *this,
        bool maskFlag,
        System_String_o *closedMessage,
        const MethodInfo *method)
{
  UnityEngine_Object_o *maskObject; // x22
  UnityEngine_Object_o *maskLabel; // x22
  __int64 v9; // x1
  UnityEngine_GameObject_o *v10; // x0

  if ( (byte_4D34BDF & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D34BDF = 1;
  }
  maskObject = (UnityEngine_Object_o *)this->fields.maskObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(maskObject, 0, 0) )
  {
    maskLabel = (UnityEngine_Object_o *)this->fields.maskLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(maskLabel, 0, 0) )
    {
      v10 = this->fields.maskObject;
      if ( v10 )
      {
        if ( !maskFlag )
        {
          UnityEngine_GameObject__SetActive(v10, 0, 0);
          return;
        }
        UnityEngine_GameObject__SetActive(v10, 1, 0);
        v10 = (UnityEngine_GameObject_o *)this->fields.maskLabel;
        if ( v10 )
        {
          UILabel__set_text((UILabel_o *)v10, closedMessage, 0);
          return;
        }
      }
      sub_1C93D2C(v10, v9);
    }
  }
}