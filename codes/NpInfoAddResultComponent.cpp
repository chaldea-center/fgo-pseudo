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
  UILabel_o *beforeLvLabel; // x22
  UILabel_o *beforeDetailLabelScroll; // x22
  System_String_o *DetalShort; // x0
  void *v24; // x27
  Il2CppObject *Entity; // x26
  TreasureDvcLvEntity_o *v26; // x0
  UILabel_o *afterLvLabel; // x28
  TreasureDvcLvEntity_o *v28; // x25
  UILabel_o *afterDetailLabelScroll; // x22
  System_String_o *v30; // x0
  const MethodInfo *v31; // x3
  ServantTreasureDeviceAddEntity_o *tdAddEntity_k__BackingField; // x0
  UIWidget_o *v33; // x20
  System_String_o *v34; // x22
  UIWidget_o *v35; // x20
  System_String_o *CondSpriteColor; // x21
  __int64 v37; // x1
  __int64 v38; // x2
  ServantEntity_TransformInfo_o *TransformInfo; // x0
  UIWidget_o *transformTitleLabel; // x21
  System_String_o *klass; // x20
  System_String_o *v42; // x22
  __int64 v43; // x1
  __int64 v44; // x2
  Il2CppObject *Master_object; // x21
  __int64 v46; // x22
  __int64 v47; // x23
  int32_t v48; // w0
  __int64 v49; // x8
  int32_t v50; // w20
  UIWidget_o *v51; // x21
  ServantTransformEntity_o *v52; // x20
  System_String_o *CondLabelColor; // x22
  UIWidget_o *transformTitleSprite; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v57; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v58; // 0:x0.16
  UnityEngine_Color_o v59; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v60; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v61; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v62; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v63; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v64; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o DefaultCondTitleLabelColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v66; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o DefaultCondTitleSpriteColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v68; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_5932079 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_TreasureDvcMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_ServantTransformMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5932079 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_55;
  v15 = (DataManager_o *)Instance;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
  v17 = DataManager__GetMasterData_object_(
          v15,
          (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
  DataManager__GetMasterData_object_(v15, (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantMaster___);
  Instance = this->fields.lvInfo;
  if ( !Instance )
    goto LABEL_55;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, !isRankUp, 0);
  Instance = this->fields.rankInfo;
  if ( !Instance )
    goto LABEL_55;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, isRankUp, 0);
  if ( !npAddManager )
    goto LABEL_55;
  Instance = Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager__GetBeforeNp(npAddManager, index, 0);
  if ( !Instance )
    goto LABEL_55;
  if ( !MasterData_object )
    goto LABEL_55;
  v18 = Instance;
  Instance = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
               *((_DWORD *)Instance + 6),
               (const MethodInfo_3EDD388 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
  if ( !v17 )
    goto LABEL_55;
  v19 = (System_String_o **)Instance;
  Instance = TreasureDvcLvMaster__GetEntity((TreasureDvcLvMaster_o *)v17, v18[6], v18[7], 0);
  if ( !v19 )
    goto LABEL_55;
  v20 = (TreasureDvcLvEntity_o *)Instance;
  Instance = this->fields.rubyLabel;
  if ( !Instance )
    goto LABEL_55;
  UILabel__set_text((UILabel_o *)Instance, v19[4], 0);
  Instance = this->fields.nameLabel;
  if ( !Instance )
    goto LABEL_55;
  UILabel__set_text((UILabel_o *)Instance, v19[3], 0);
  beforeLvLabel = this->fields.beforeLvLabel;
  Instance = System_Int32__ToString((int)v18 + 28, 0);
  if ( !beforeLvLabel )
    goto LABEL_55;
  UILabel__set_text(beforeLvLabel, (System_String_o *)Instance, 0);
  Instance = this->fields.beforeRankLabel;
  if ( !Instance )
    goto LABEL_55;
  UILabel__set_text((UILabel_o *)Instance, v19[5], 0);
  if ( !v20 )
    goto LABEL_55;
  beforeDetailLabelScroll = this->fields.beforeDetailLabelScroll;
  DetalShort = TreasureDvcLvEntity__getDetalShort(v20, 0);
  UILabelHelper__SetLabelWithScroll(beforeDetailLabelScroll, DetalShort, 4, 0);
  Instance = Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager__GetAfterNp(npAddManager, index, 0);
  if ( !Instance )
    goto LABEL_55;
  v24 = Instance;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
             *((_DWORD *)Instance + 6),
             (const MethodInfo_3EDD388 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
  v26 = TreasureDvcLvMaster__GetEntity((TreasureDvcLvMaster_o *)v17, *((_DWORD *)v24 + 6), *((_DWORD *)v24 + 7), 0);
  afterLvLabel = this->fields.afterLvLabel;
  v28 = v26;
  Instance = System_Int32__ToString((int)v24 + 28, 0);
  if ( !afterLvLabel )
    goto LABEL_55;
  UILabel__set_text(afterLvLabel, (System_String_o *)Instance, 0);
  if ( !Entity )
    goto LABEL_55;
  Instance = this->fields.afterRankLabel;
  if ( !Instance )
    goto LABEL_55;
  UILabel__set_text((UILabel_o *)Instance, (System_String_o *)Entity[2].monitor, 0);
  if ( !v28 )
    goto LABEL_55;
  afterDetailLabelScroll = this->fields.afterDetailLabelScroll;
  v30 = TreasureDvcLvEntity__getDetalShort(v28, 0);
  UILabelHelper__SetLabelWithScroll(afterDetailLabelScroll, v30, 4, 0);
  NpInfoAddResultComponent__SetMask(this, *((_BYTE *)v24 + 84), *((System_String_o **)v24 + 11), v31);
  if ( transformCount >= 2 )
  {
    Instance = this->fields.transformTitleLabel;
    if ( !Instance )
      goto LABEL_55;
    UILabel__set_text((UILabel_o *)Instance, titleText, 0);
    Instance = this->fields.transformTitle;
    if ( !Instance )
      goto LABEL_55;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
    if ( !baseUserServantEntity )
      goto LABEL_55;
    if ( UserServantEntity__get_IsSaveTransformServant(baseUserServantEntity, 0) )
    {
      Instance = UserServantEntity__GetServantEntity(baseUserServantEntity, index, 0);
      if ( !Instance )
        goto LABEL_55;
      TransformInfo = ServantEntity__GetTransformInfo((ServantEntity_o *)Instance, 0);
      transformTitleLabel = (UIWidget_o *)this->fields.transformTitleLabel;
      klass = (System_String_o *)TransformInfo;
      v42 = TransformInfo ? TransformInfo->fields.condLabelColor : 0LL;
      DefaultCondTitleLabelColor = TransformHelper__get_DefaultCondTitleLabelColor(0);
      v66 = ColorHelper__ParseColorCode_51093332(v42, DefaultCondTitleLabelColor, 0);
      if ( !transformTitleLabel )
        goto LABEL_55;
      UIWidget__set_color(transformTitleLabel, v66, 0);
      transformTitleSprite = (UIWidget_o *)this->fields.transformTitleSprite;
      if ( klass )
        klass = (System_String_o *)klass[1].klass;
    }
    else
    {
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v37, v38);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ServantTransformMaster___);
      v46 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.currentCryptoKey;
      v47 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.fakeValue;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v43, v44);
      *(_QWORD *)&v57.fields.currentCryptoKey = v46;
      *(_QWORD *)&v57.fields.fakeValue = v47;
      v48 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v57, 0);
      v49 = *(_QWORD *)&baseUserServantEntity->fields.dispLimitCount.fields.currentCryptoKey;
      *(_QWORD *)&v58.fields.fakeValue = *(_QWORD *)&baseUserServantEntity->fields.dispLimitCount.fields.fakeValue;
      v50 = v48;
      *(_QWORD *)&v58.fields.currentCryptoKey = v49;
      Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v58, 0);
      if ( !Master_object )
        goto LABEL_55;
      Instance = ServantTransformMaster__GetEntity((ServantTransformMaster_o *)Master_object, v50, (int32_t)Instance, 0);
      if ( !Instance )
        goto LABEL_55;
      v51 = (UIWidget_o *)this->fields.transformTitleLabel;
      v52 = (ServantTransformEntity_o *)Instance;
      CondLabelColor = ServantTransformEntity__GetCondLabelColor((ServantTransformEntity_o *)Instance, 0);
      v63 = TransformHelper__get_DefaultCondTitleLabelColor(0);
      v64 = ColorHelper__ParseColorCode_51093332(CondLabelColor, v63, 0);
      if ( !v51 )
        goto LABEL_55;
      UIWidget__set_color(v51, v64, 0);
      transformTitleSprite = (UIWidget_o *)this->fields.transformTitleSprite;
      klass = ServantTransformEntity__GetCondSpriteColor(v52, 0);
    }
    DefaultCondTitleSpriteColor = TransformHelper__get_DefaultCondTitleSpriteColor(0);
    v68 = ColorHelper__ParseColorCode_51093332(klass, DefaultCondTitleSpriteColor, 0);
    if ( !transformTitleSprite )
      goto LABEL_55;
    UIWidget__set_color(transformTitleSprite, v68, 0);
  }
  else
  {
    tdAddEntity_k__BackingField = npAddManager->fields._tdAddEntity_k__BackingField;
    if ( tdAddEntity_k__BackingField
      && ServantTreasureDeviceAddEntity__HasKeyCondLabelColorOrCondSpriteColor(tdAddEntity_k__BackingField, 0) )
    {
      Instance = this->fields.transformTitleLabel;
      if ( Instance )
      {
        UILabel__set_text((UILabel_o *)Instance, titleText, 0);
        Instance = npAddManager->fields._tdAddEntity_k__BackingField;
        if ( Instance )
        {
          v33 = (UIWidget_o *)this->fields.transformTitleLabel;
          v34 = ServantTreasureDeviceAddEntity__GetCondLabelColor((ServantTreasureDeviceAddEntity_o *)Instance, 0);
          v59 = TransformHelper__get_DefaultCondTitleLabelColor(0);
          v60 = ColorHelper__ParseColorCode_51093332(v34, v59, 0);
          if ( v33 )
          {
            UIWidget__set_color(v33, v60, 0);
            Instance = npAddManager->fields._tdAddEntity_k__BackingField;
            if ( Instance )
            {
              v35 = (UIWidget_o *)this->fields.transformTitleSprite;
              CondSpriteColor = ServantTreasureDeviceAddEntity__GetCondSpriteColor(
                                  (ServantTreasureDeviceAddEntity_o *)Instance,
                                  0);
              v61 = TransformHelper__get_DefaultCondTitleSpriteColor(0);
              v62 = ColorHelper__ParseColorCode_51093332(CondSpriteColor, v61, 0);
              if ( v35 )
              {
                UIWidget__set_color(v35, v62, 0);
                Instance = this->fields.transformTitle;
                if ( Instance )
                {
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
                  return;
                }
              }
            }
          }
        }
      }
LABEL_55:
      sub_21FFECC(Instance, v14);
    }
    Instance = this->fields.title;
    if ( !Instance )
      goto LABEL_55;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
    Instance = this->fields.titleLabel;
    if ( !Instance )
      goto LABEL_55;
    UILabel__set_text((UILabel_o *)Instance, titleText, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void NpInfoAddResultComponent__SetMask(
        NpInfoAddResultComponent_o *this,
        bool maskFlag,
        System_String_o *closedMessage,
        const MethodInfo *method)
{
  UnityEngine_Object_o *maskObject; // x22
  __int64 v8; // x1
  __int64 v9; // x2
  UnityEngine_Object_o *maskLabel; // x22
  __int64 v11; // x1
  UnityEngine_GameObject_o *v12; // x0

  if ( (byte_593207A & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593207A = 1;
  }
  maskObject = (UnityEngine_Object_o *)this->fields.maskObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, maskFlag, closedMessage);
  if ( !UnityEngine_Object__op_Equality(maskObject, 0, 0) )
  {
    maskLabel = (UnityEngine_Object_o *)this->fields.maskLabel;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v9);
    if ( !UnityEngine_Object__op_Equality(maskLabel, 0, 0) )
    {
      v12 = this->fields.maskObject;
      if ( maskFlag )
      {
        if ( v12 )
        {
          UnityEngine_GameObject__SetActive(v12, 1, 0);
          v12 = (UnityEngine_GameObject_o *)this->fields.maskLabel;
          if ( v12 )
          {
            UILabel__set_text((UILabel_o *)v12, closedMessage, 0);
            return;
          }
        }
      }
      else if ( v12 )
      {
        UnityEngine_GameObject__SetActive(v12, 0, 0);
        return;
      }
      sub_21FFECC(v12, v11);
    }
  }
}