void ServantStatusListViewItemDrawFace___ctor(ServantStatusListViewItemDrawFace_o *this, const MethodInfo *method)
{
  this->fields.MASK_LABEL_MAX_WIDTH = 550;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ServantStatusListViewItemDrawFace__Awake(ServantStatusListViewItemDrawFace_o *this, const MethodInfo *method)
{
  struct UISprite_array *charaLevelSpriteList; // x8
  ServantStatusListViewItemDrawFace_o *v3; // x19
  int32_t facePitch; // w20
  __int64 v5; // x2
  struct UISprite_array *v6; // x8
  float y; // s8
  struct UISprite_o *baseSprite; // x9
  int max_length; // w8
  int32_t mHeight; // w11
  bool v11; // cc
  int v12; // w8
  int v13; // w8
  float v14; // s8
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v16; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v17; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4

  charaLevelSpriteList = this->fields.charaLevelSpriteList;
  if ( !charaLevelSpriteList )
    goto LABEL_28;
  v3 = this;
  if ( SLODWORD(charaLevelSpriteList->max_length) > 4 )
  {
    this = (ServantStatusListViewItemDrawFace_o *)charaLevelSpriteList->m_Items[0];
    if ( !this )
      goto LABEL_28;
    this = (ServantStatusListViewItemDrawFace_o *)UnityEngine_Component__get_transform(
                                                    (UnityEngine_Component_o *)this,
                                                    0);
    if ( !this )
      goto LABEL_28;
    localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
    v6 = v3->fields.charaLevelSpriteList;
    if ( !v6 )
      goto LABEL_28;
    if ( LODWORD(v6->max_length) <= 4 )
      sub_1C2D6F4(this, method, v5);
    if ( (this = (ServantStatusListViewItemDrawFace_o *)v6->m_Items[4]) == 0
      || (y = localPosition.fields.y,
          (this = (ServantStatusListViewItemDrawFace_o *)UnityEngine_Component__get_transform(
                                                           (UnityEngine_Component_o *)this,
                                                           0)) == 0)
      || ((v16 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0),
           charaLevelSpriteList = v3->fields.charaLevelSpriteList,
           (float)(y - v16.fields.y) != INFINITY)
        ? (facePitch = (int)(float)(y - v16.fields.y))
        : (facePitch = 0x80000000),
          v3->fields.facePitch = facePitch,
          !charaLevelSpriteList) )
    {
LABEL_28:
      sub_1C2D6EC(this, method);
    }
  }
  else
  {
    facePitch = this->fields.facePitch;
  }
  baseSprite = v3->fields.baseSprite;
  if ( !baseSprite )
    goto LABEL_28;
  max_length = charaLevelSpriteList->max_length;
  mHeight = baseSprite->fields.mHeight;
  v11 = max_length < 12;
  this = (ServantStatusListViewItemDrawFace_o *)v3->fields.titleSprite;
  v12 = 1 - max_length / 4;
  if ( v11 )
    v12 = -1;
  v3->fields.baseSize.fields.x = (float)baseSprite->fields.mWidth;
  v3->fields.baseSize.fields.y = (float)(mHeight + v12 * facePitch);
  v3->fields.baseSize.fields.z = 0.0;
  if ( !this )
    goto LABEL_28;
  this = (ServantStatusListViewItemDrawFace_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_28;
  v17 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
  this = (ServantStatusListViewItemDrawFace_o *)v3->fields.faceBase;
  v13 = facePitch >= 0 ? facePitch : facePitch + 1;
  v14 = (float)(v13 >> 1);
  v3->fields.titleBasePosition.fields.x = v17.fields.x;
  v3->fields.titleBasePosition.fields.y = v17.fields.y - v14;
  v3->fields.titleBasePosition.fields.z = v17.fields.z;
  if ( !this )
    goto LABEL_28;
  this = (ServantStatusListViewItemDrawFace_o *)UnityEngine_GameObject__get_transform(
                                                  (UnityEngine_GameObject_o *)this,
                                                  0);
  if ( !this )
    goto LABEL_28;
  v18 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
  this = (ServantStatusListViewItemDrawFace_o *)v3->fields.explanationLabel;
  v3->fields.faceBasePosition.fields.x = v18.fields.x;
  v3->fields.faceBasePosition.fields.y = v18.fields.y - v14;
  v3->fields.faceBasePosition.fields.z = v18.fields.z;
  if ( !this )
    goto LABEL_28;
  this = (ServantStatusListViewItemDrawFace_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_28;
  v19 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
  v3->fields.explanationBasePosition.fields.x = v19.fields.x;
  v3->fields.explanationBasePosition.fields.y = v19.fields.y + v14;
  v3->fields.explanationBasePosition.fields.z = v19.fields.z;
}


int32_t ServantStatusListViewItemDrawFace__GetKind(ServantStatusListViewItemDrawFace_o *this, const MethodInfo *method)
{
  return 9;
}


void ServantStatusListViewItemDrawFace__ModifyFace(
        ServantStatusListViewItemDrawFace_o *this,
        ServantStatusListViewItem_o *item,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  ServantStatusListViewItemDrawFace__SetupButton(this, item, 0, v3);
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusListViewItemDrawFace__SetCostumeIcon(
        ServantStatusListViewItemDrawFace_o *this,
        int32_t index,
        ServantCostumeEntity_o *svtCostumeEntity,
        const MethodInfo *method)
{
  ServantStatusListViewItemDrawFace_o *v6; // x20
  struct UISprite_array *faceSpriteCostumeIconList; // x8
  UnityEngine_Object_o *v8; // x22
  struct UISprite_array *v9; // x8
  struct UISprite_array *v10; // x8
  int32_t v11; // w21
  int32_t iconId; // t1
  struct UISprite_array *v13; // x8
  UISprite_o *v14; // x22
  System_String_o *v15; // x0
  System_String_o *v16; // x21
  struct UISprite_array *v17; // x8
  struct UISprite_array *v18; // x8
  struct UISprite_array *v19; // x8
  struct UISprite_array *v20; // x8
  struct UISprite_array *v21; // x8
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4

  v6 = this;
  if ( (byte_4C23FCC & 1) == 0 )
  {
    sub_1C2D490(&AtlasManager_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_23855/*"svt_costume_icon_"*/);
    this = (ServantStatusListViewItemDrawFace_o *)sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C23FCC = 1;
  }
  faceSpriteCostumeIconList = v6->fields.faceSpriteCostumeIconList;
  if ( !faceSpriteCostumeIconList )
    goto LABEL_39;
  if ( LODWORD(faceSpriteCostumeIconList->max_length) <= index )
LABEL_40:
    sub_1C2D6F4(this, *(_QWORD *)&index, svtCostumeEntity);
  v8 = (UnityEngine_Object_o *)faceSpriteCostumeIconList->m_Items[index];
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (ServantStatusListViewItemDrawFace_o *)UnityEngine_Object__op_Inequality(v8, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v9 = v6->fields.faceSpriteCostumeIconList;
    if ( !v9 )
      goto LABEL_39;
    if ( LODWORD(v9->max_length) <= index )
      goto LABEL_40;
    this = (ServantStatusListViewItemDrawFace_o *)v9->m_Items[index];
    if ( !this )
      goto LABEL_39;
    UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0);
    v10 = v6->fields.faceSpriteCostumeIconList;
    if ( !v10 )
      goto LABEL_39;
    if ( LODWORD(v10->max_length) <= index )
      goto LABEL_40;
    this = (ServantStatusListViewItemDrawFace_o *)v10->m_Items[index];
    if ( !this )
      goto LABEL_39;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0);
    if ( svtCostumeEntity )
    {
      iconId = svtCostumeEntity->fields.iconId;
      v11 = (_DWORD)svtCostumeEntity + 92;
      if ( iconId >= 1 )
      {
        v13 = v6->fields.faceSpriteCostumeIconList;
        if ( !v13 )
          goto LABEL_39;
        if ( LODWORD(v13->max_length) <= index )
          goto LABEL_40;
        v14 = v13->m_Items[index];
        v15 = System_Int32__ToString(v11, 0);
        v16 = System_String__Concat_63457864((System_String_o *)StringLiteral_23855/*"svt_costume_icon_"*/, v15, 0);
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        this = (ServantStatusListViewItemDrawFace_o *)AtlasManager__SetEventSprite(v14, v16, 0);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          v17 = v6->fields.faceSpriteCostumeIconList;
          if ( !v17 )
            goto LABEL_39;
          if ( LODWORD(v17->max_length) > index )
          {
            this = (ServantStatusListViewItemDrawFace_o *)v17->m_Items[index];
            if ( !this )
              goto LABEL_39;
            UIWidget__set_pivot((UIWidget_o *)this, 4, 0);
            v18 = v6->fields.faceSpriteCostumeIconList;
            if ( !v18 )
              goto LABEL_39;
            if ( LODWORD(v18->max_length) > index )
            {
              this = (ServantStatusListViewItemDrawFace_o *)v18->m_Items[index];
              if ( !this )
                goto LABEL_39;
              UIWidget__set_width((UIWidget_o *)this, 32, 0);
              v19 = v6->fields.faceSpriteCostumeIconList;
              if ( !v19 )
                goto LABEL_39;
              if ( LODWORD(v19->max_length) > index )
              {
                this = (ServantStatusListViewItemDrawFace_o *)v19->m_Items[index];
                if ( !this )
                  goto LABEL_39;
                UIWidget__set_height((UIWidget_o *)this, 32, 0);
                v20 = v6->fields.faceSpriteCostumeIconList;
                if ( !v20 )
                  goto LABEL_39;
                if ( LODWORD(v20->max_length) > index )
                {
                  this = (ServantStatusListViewItemDrawFace_o *)v20->m_Items[index];
                  if ( !this )
                    goto LABEL_39;
                  this = (ServantStatusListViewItemDrawFace_o *)UnityEngine_Component__get_transform(
                                                                  (UnityEngine_Component_o *)this,
                                                                  0);
                  if ( !this )
                    goto LABEL_39;
                  v22.fields.x = -42.0;
                  v22.fields.z = 0.0;
                  v22.fields.y = -42.0;
                  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v22, 0);
                  v21 = v6->fields.faceSpriteCostumeIconList;
                  if ( !v21 )
                    goto LABEL_39;
                  if ( LODWORD(v21->max_length) > index )
                  {
                    this = (ServantStatusListViewItemDrawFace_o *)v21->m_Items[index];
                    if ( this )
                    {
                      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 1, 0);
                      return;
                    }
LABEL_39:
                    sub_1C2D6EC(this, *(_QWORD *)&index);
                  }
                }
              }
            }
          }
          goto LABEL_40;
        }
      }
    }
  }
}


void ServantStatusListViewItemDrawFace__SetItem(
        ServantStatusListViewItemDrawFace_o *this,
        ServantStatusListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x21
  UILabel_o *explanationLabel; // x22
  UISprite_o *ServantStatusExplanationText; // x0
  __int64 v10; // x1
  struct UserServantEntity_o *userSvtEntity; // x8
  __int64 v12; // x22
  __int64 v13; // x23
  UILabel_o *v14; // x22
  struct UserServantCollectionEntity_o *userSvtCollectionEntity; // x8
  UILabel_o *servantLeaderInfo; // x23
  UILabel_o *v17; // x22
  struct ServantLeaderInfo_o *v18; // x8
  int32_t v19; // w22
  System_String_o *mText; // x25
  System_String_o *v21; // x24
  Il2CppObject *LimitCountSealedServantName; // x0
  System_String_o *v23; // x0
  System_String_o *v24; // x0
  struct System_Int32_array *iconSelectList; // x28
  il2cpp_array_size_t max_length; // x8
  int32_t v27; // w25
  int32_t facePitch; // w9
  signed __int64 maxIconLimitCount; // x21
  float x; // s8
  float y; // s9
  float z; // s10
  UnityEngine_Object_o *baseCollider; // x22
  int v34; // w8
  int v35; // w8
  int v36; // w8
  int v37; // w24
  float v38; // s9
  int32_t v39; // w1
  int32_t v40; // w1
  int v41; // w22
  float v42; // s8
  float v43; // s11
  float v44; // s9
  float v45; // s10
  float v46; // s8
  float v47; // s11
  float v48; // s9
  int32_t v49; // w22
  float v50; // s8
  float v51; // s10
  float v52; // s9
  const MethodInfo_39D3CCC **v53; // x29
  unsigned __int64 v54; // x24
  int32_t *m_Items; // x23
  const MethodInfo *v56; // x3
  __int64 v57; // x2
  struct UISprite_array *v58; // x8
  char v59; // w25
  UISprite_o *v60; // x26
  UISprite_o *v61; // x0
  struct UISprite_array *faceFrameSpriteList; // x8
  bool v63; // w1
  int v64; // w8
  int32_t v65; // w25
  int32_t SvtId; // w26
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v67; // kr00_16
  Il2CppObject *v68; // x25
  struct UISprite_array *faceSpriteList; // x8
  UISprite_o *v70; // x26
  int32_t v71; // w25
  int32_t v72; // w27
  int32_t v73; // w2
  const MethodInfo *v74; // x3
  struct UISprite_array *v75; // x8
  UISprite_o *v76; // x25
  struct UISprite_array *v77; // x8
  struct UISprite_array *v78; // x8
  int32_t v79; // w21
  struct UISprite_array *v80; // x8
  int32_t v81; // w26
  Il2CppObject *v82; // x23
  const MethodInfo_39D3CCC **v83; // x22
  int32_t *v84; // x29
  struct UISprite_array *v85; // x8
  UISprite_o *v86; // x24
  int32_t v87; // w23
  int32_t v88; // w25
  ServantCostumeEntity_o *v89; // x0
  const MethodInfo *v90; // x3
  struct UISprite_array *v91; // x8
  const MethodInfo *v92; // x2
  ServantLimitSpoilerProtectionMaster_o *MasterData_object; // [xsp+8h] [xbp-98h]
  ServantCostumeMaster_o *v94; // [xsp+10h] [xbp-90h]
  ServantCostumeEntity_o *entity; // [xsp+18h] [xbp-88h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v96; // 0:x0.16
  UnityEngine_Vector3_o v97; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v98; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v99; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v100; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C23FCB & 1) == 0 )
  {
    sub_1C2D490(&AtlasManager_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantCostumeMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&OptionManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&StringLiteral_11911/*"SERVANT_STATUS_EXPLANATION_FACE"*/);
    sub_1C2D490(&StringLiteral_11913/*"SERVANT_STATUS_EXPLANATION_FACE3"*/);
    sub_1C2D490(&StringLiteral_11912/*"SERVANT_STATUS_EXPLANATION_FACE2"*/);
    sub_1C2D490(&StringLiteral_11914/*"SERVANT_STATUS_EXPLANATION_FACE_LIMIT_COUNT_SEALED_MSG"*/);
    byte_4C23FCB = 1;
  }
  entity = 0;
  this->fields.dispMode = mode;
  if ( !item || !mode )
    return;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  if ( item->fields.userSvtEntity )
  {
    explanationLabel = this->fields.explanationLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    ServantStatusExplanationText = (UISprite_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11911/*"SERVANT_STATUS_EXPLANATION_FACE"*/, 0);
    if ( !explanationLabel )
      goto LABEL_142;
    UILabel__set_text(explanationLabel, (System_String_o *)ServantStatusExplanationText, 0);
    userSvtEntity = item->fields.userSvtEntity;
    if ( !userSvtEntity )
      goto LABEL_142;
    v13 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
    v12 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
  }
  else if ( item->fields.userSvtCollectionEntity )
  {
    v14 = this->fields.explanationLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    ServantStatusExplanationText = (UISprite_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11912/*"SERVANT_STATUS_EXPLANATION_FACE2"*/, 0);
    if ( !v14 )
      goto LABEL_142;
    UILabel__set_text(v14, (System_String_o *)ServantStatusExplanationText, 0);
    userSvtCollectionEntity = item->fields.userSvtCollectionEntity;
    if ( !userSvtCollectionEntity )
      goto LABEL_142;
    v13 = *(_QWORD *)&userSvtCollectionEntity->fields.svtId.fields.currentCryptoKey;
    v12 = *(_QWORD *)&userSvtCollectionEntity->fields.svtId.fields.fakeValue;
  }
  else
  {
    servantLeaderInfo = (UILabel_o *)item->fields.servantLeaderInfo;
    v17 = this->fields.explanationLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    ServantStatusExplanationText = (UISprite_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11913/*"SERVANT_STATUS_EXPLANATION_FACE3"*/, 0);
    if ( !v17 )
      goto LABEL_142;
    UILabel__set_text(v17, (System_String_o *)ServantStatusExplanationText, 0);
    if ( !servantLeaderInfo )
      goto LABEL_33;
    v18 = item->fields.servantLeaderInfo;
    if ( !v18 )
      goto LABEL_142;
    v13 = *(_QWORD *)&v18->fields.svtId.fields.currentCryptoKey;
    v12 = *(_QWORD *)&v18->fields.svtId.fields.fakeValue;
  }
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v96.fields.currentCryptoKey = v13;
  *(_QWORD *)&v96.fields.fakeValue = v12;
  ServantStatusExplanationText = (UISprite_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
                                                 v96,
                                                 0);
  if ( !(_DWORD)ServantStatusExplanationText )
    goto LABEL_32;
  if ( !Master_object )
    goto LABEL_142;
  v19 = (int)ServantStatusExplanationText;
  if ( ServantLimitImageMaster__IsServantLimitCountSeal(
         (ServantLimitImageMaster_o *)Master_object,
         (int32_t)ServantStatusExplanationText,
         3,
         0) )
  {
    ServantStatusExplanationText = (UISprite_o *)ServantLimitImageMaster__GetServantStatusExplanationText(
                                                   (ServantLimitImageMaster_o *)Master_object,
                                                   (System_String_o *)StringLiteral_11914/*"SERVANT_STATUS_EXPLANATION_FACE_LIMIT_COUNT_SEALED_MSG"*/,
                                                   v19,
                                                   0);
    servantLeaderInfo = this->fields.explanationLabel;
    if ( !servantLeaderInfo )
      goto LABEL_142;
    mText = servantLeaderInfo->fields.mText;
    v21 = (System_String_o *)ServantStatusExplanationText;
    LimitCountSealedServantName = (Il2CppObject *)ServantLimitImageMaster__GetLimitCountSealedServantName(
                                                    (ServantLimitImageMaster_o *)Master_object,
                                                    v19,
                                                    3,
                                                    0,
                                                    0);
    v23 = System_String__Format(v21, LimitCountSealedServantName, 0);
    v24 = System_String__Concat_63457864(mText, v23, 0);
    UILabel__set_text(servantLeaderInfo, v24, 0);
    LODWORD(servantLeaderInfo) = 1;
  }
  else
  {
LABEL_32:
    LODWORD(servantLeaderInfo) = 0;
  }
LABEL_33:
  ServantStatusExplanationText = (UISprite_o *)ServantStatusListViewItem__get_ConvertOverwriteIconLimitCount(item, 0);
  iconSelectList = item->fields.iconSelectList;
  if ( !iconSelectList )
    goto LABEL_142;
  max_length = iconSelectList->max_length;
  v27 = (int)ServantStatusExplanationText;
  if ( (int)max_length < 5 )
    facePitch = 0;
  else
    facePitch = this->fields.facePitch;
  maxIconLimitCount = item->fields.maxIconLimitCount;
  x = this->fields.baseSize.fields.x;
  y = this->fields.baseSize.fields.y;
  z = this->fields.baseSize.fields.z;
  baseCollider = (UnityEngine_Object_o *)this->fields.baseCollider;
  v34 = (int)max_length / 4;
  if ( (iconSelectList->max_length & 3) != 0 )
    ++v34;
  if ( v34 < 3 )
    v35 = 1;
  else
    v35 = v34 - 1;
  v36 = facePitch * v35;
  if ( (_DWORD)servantLeaderInfo )
    v37 = v36 + 32;
  else
    v37 = v36;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v38 = y + (float)v37;
  if ( UnityEngine_Object__op_Inequality(baseCollider, 0, 0) )
  {
    ServantStatusExplanationText = (UISprite_o *)this->fields.baseCollider;
    if ( !ServantStatusExplanationText )
      goto LABEL_142;
    v97.fields.x = x;
    v97.fields.y = v38;
    v97.fields.z = z;
    UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)ServantStatusExplanationText, v97, 0);
  }
  ServantStatusExplanationText = this->fields.baseSprite;
  if ( !ServantStatusExplanationText )
    goto LABEL_142;
  v39 = x == INFINITY ? 0x80000000 : (int)x;
  UIWidget__set_width((UIWidget_o *)ServantStatusExplanationText, v39, 0);
  ServantStatusExplanationText = this->fields.baseSprite;
  if ( !ServantStatusExplanationText )
    goto LABEL_142;
  v40 = v38 == INFINITY ? 0x80000000 : (int)v38;
  UIWidget__set_height((UIWidget_o *)ServantStatusExplanationText, v40, 0);
  ServantStatusExplanationText = this->fields.titleSprite;
  v41 = v37 >= 0 ? v37 : v37 + 1;
  if ( !ServantStatusExplanationText )
    goto LABEL_142;
  v42 = this->fields.titleBasePosition.fields.x;
  v43 = this->fields.titleBasePosition.fields.y;
  v44 = this->fields.titleBasePosition.fields.z;
  ServantStatusExplanationText = (UISprite_o *)UnityEngine_Component__get_transform(
                                                 (UnityEngine_Component_o *)ServantStatusExplanationText,
                                                 0);
  if ( !ServantStatusExplanationText )
    goto LABEL_142;
  v45 = (float)(v41 >> 1);
  v98.fields.y = v43 + v45;
  v98.fields.x = v42;
  v98.fields.z = v44;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)ServantStatusExplanationText, v98, 0);
  ServantStatusExplanationText = (UISprite_o *)this->fields.faceBase;
  if ( !ServantStatusExplanationText )
    goto LABEL_142;
  v46 = this->fields.faceBasePosition.fields.x;
  v47 = this->fields.faceBasePosition.fields.y;
  v48 = this->fields.faceBasePosition.fields.z;
  ServantStatusExplanationText = (UISprite_o *)UnityEngine_GameObject__get_transform(
                                                 (UnityEngine_GameObject_o *)ServantStatusExplanationText,
                                                 0);
  if ( !ServantStatusExplanationText )
    goto LABEL_142;
  v99.fields.y = v47 + v45;
  v99.fields.x = v46;
  v99.fields.z = v48;
  v49 = v27;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)ServantStatusExplanationText, v99, 0);
  ServantStatusExplanationText = (UISprite_o *)this->fields.explanationLabel;
  v50 = (_DWORD)servantLeaderInfo
      ? (float)(this->fields.explanationBasePosition.fields.y - v45) + 16.0
      : this->fields.explanationBasePosition.fields.y - v45;
  if ( !ServantStatusExplanationText )
    goto LABEL_142;
  v51 = this->fields.explanationBasePosition.fields.x;
  v52 = this->fields.explanationBasePosition.fields.z;
  ServantStatusExplanationText = (UISprite_o *)UnityEngine_Component__get_transform(
                                                 (UnityEngine_Component_o *)ServantStatusExplanationText,
                                                 0);
  if ( !ServantStatusExplanationText )
    goto LABEL_142;
  v100.fields.x = v51;
  v100.fields.y = v50;
  v100.fields.z = v52;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)ServantStatusExplanationText, v100, 0);
  v53 = (const MethodInfo_39D3CCC **)&Method_SingletonMonoBehaviour_DataManager__get_Instance__;
  ServantStatusExplanationText = (UISprite_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !ServantStatusExplanationText
    || (MasterData_object = (ServantLimitSpoilerProtectionMaster_o *)DataManager__GetMasterData_object_(
                                                                       (DataManager_o *)ServantStatusExplanationText,
                                                                       (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___),
        (ServantStatusExplanationText = (UISprite_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0) )
  {
LABEL_142:
    sub_1C2D6EC(ServantStatusExplanationText, v10);
  }
  v54 = 0;
  m_Items = iconSelectList->m_Items;
  v94 = (ServantCostumeMaster_o *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)ServantStatusExplanationText,
                                    (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
  do
  {
    ServantStatusListViewItemDrawFace__SetCostumeIcon(this, v54, 0, v56);
    if ( (__int64)v54 > maxIconLimitCount )
      goto LABEL_74;
    ServantStatusExplanationText = (UISprite_o *)ServantStatusListViewItem__get_IsMine(item, 0);
    if ( ((unsigned __int8)ServantStatusExplanationText & 1) != 0 )
      goto LABEL_148;
    if ( v54 >= LODWORD(iconSelectList->max_length) )
      goto LABEL_145;
    if ( m_Items[v54] <= v49 )
    {
LABEL_148:
      if ( !OptionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      if ( OptionManager__GetSpoilerSetting(0) )
        goto LABEL_98;
      ServantStatusExplanationText = (UISprite_o *)ServantStatusListViewItem__get_IsMine(item, 0);
      if ( ((unsigned __int8)ServantStatusExplanationText & 1) != 0 )
        goto LABEL_98;
      if ( v54 >= LODWORD(iconSelectList->max_length) )
        goto LABEL_145;
      v64 = m_Items[v54];
      if ( v64 >= 11 )
        v65 = m_Items[v54];
      else
        v65 = v64 + 1;
      SvtId = ServantStatusListViewItem__get_SvtId(item, 0);
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      v67 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(SvtId, 0);
      v10 = *(_QWORD *)&v67.fields.fakeValue;
      ServantStatusExplanationText = (UISprite_o *)MasterData_object;
      if ( !MasterData_object )
        goto LABEL_142;
      ServantStatusExplanationText = (UISprite_o *)ServantLimitSpoilerProtectionMaster__IsSpoilerLimitCount(
                                                     MasterData_object,
                                                     v67,
                                                     v65,
                                                     0);
      if ( ((unsigned __int8)ServantStatusExplanationText & 1) != 0 )
      {
LABEL_98:
        ServantStatusExplanationText = (UISprite_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !ServantStatusExplanationText )
          goto LABEL_142;
        v68 = DataManager__GetMasterData_object_(
                (DataManager_o *)ServantStatusExplanationText,
                (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
        ServantStatusExplanationText = (UISprite_o *)ServantStatusListViewItem__get_SvtId(item, 0);
        if ( v54 >= LODWORD(iconSelectList->max_length) )
          goto LABEL_145;
        if ( !v68 )
          goto LABEL_142;
        ServantStatusExplanationText = (UISprite_o *)ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                                       (ServantLimitImageMaster_o *)v68,
                                                       (int32_t)ServantStatusExplanationText,
                                                       m_Items[v54],
                                                       0);
        faceSpriteList = this->fields.faceSpriteList;
        if ( !faceSpriteList )
          goto LABEL_142;
        if ( v54 >= LODWORD(faceSpriteList->max_length) )
          goto LABEL_145;
        v70 = faceSpriteList->m_Items[v54];
        v71 = (int)ServantStatusExplanationText;
        v72 = ServantStatusListViewItem__get_SvtId(item, 0);
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        AtlasManager__SetFaceImage(v70, v72, v71, 1, 0, 0);
        ServantStatusExplanationText = (UISprite_o *)ServantStatusListViewItem__get_SvtId(item, 0);
        if ( v54 >= LODWORD(iconSelectList->max_length) )
LABEL_145:
          sub_1C2D6F4(ServantStatusExplanationText, v10, v57);
        v73 = (int)ServantStatusExplanationText;
        ServantStatusExplanationText = (UISprite_o *)v94;
        if ( !v94 )
          goto LABEL_142;
        ServantCostumeMaster__TryGetEntity(v94, &entity, v73, m_Items[v54], 0);
        ServantStatusListViewItemDrawFace__SetCostumeIcon(this, v54, entity, v74);
        goto LABEL_114;
      }
      v75 = this->fields.faceSpriteList;
      if ( !v75 )
        goto LABEL_142;
      if ( v54 >= LODWORD(v75->max_length) )
        goto LABEL_145;
      v76 = v75->m_Items[v54];
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      v61 = v76;
    }
    else
    {
LABEL_74:
      ServantStatusExplanationText = (UISprite_o *)ServantStatusListViewItem__get_IsMine(item, 0);
      v58 = this->fields.faceSpriteList;
      if ( !v58 )
        goto LABEL_142;
      if ( v54 >= LODWORD(v58->max_length) )
        goto LABEL_145;
      v59 = (char)ServantStatusExplanationText;
      v60 = v58->m_Items[v54];
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      v61 = v60;
      if ( (v59 & 1) != 0 )
      {
        ServantStatusExplanationText = (UISprite_o *)AtlasManager__SetNoMountFace(v60, 0);
        faceFrameSpriteList = this->fields.faceFrameSpriteList;
        if ( !faceFrameSpriteList )
          goto LABEL_142;
        if ( v54 >= LODWORD(faceFrameSpriteList->max_length) )
          goto LABEL_145;
        ServantStatusExplanationText = faceFrameSpriteList->m_Items[v54];
        if ( !ServantStatusExplanationText )
          goto LABEL_142;
        v63 = 0;
        goto LABEL_118;
      }
    }
    ServantStatusExplanationText = (UISprite_o *)AtlasManager__SetNotOpenFace(v61, 0);
LABEL_114:
    v77 = this->fields.faceFrameSpriteList;
    if ( !v77 )
      goto LABEL_142;
    if ( v54 >= LODWORD(v77->max_length) )
      goto LABEL_145;
    ServantStatusExplanationText = v77->m_Items[v54];
    if ( !ServantStatusExplanationText )
      goto LABEL_142;
    v63 = 1;
LABEL_118:
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)ServantStatusExplanationText, v63, 0);
    ++v54;
  }
  while ( v54 != 4 );
  v78 = this->fields.faceSpriteList;
  if ( !v78 )
    goto LABEL_142;
  v79 = 4;
  while ( v79 < SLODWORD(v78->max_length) )
  {
    ServantStatusListViewItemDrawFace__SetCostumeIcon(this, v79, 0, v56);
    v80 = this->fields.faceSpriteList;
    if ( !v80 )
      goto LABEL_142;
    if ( (unsigned int)v79 >= LODWORD(v80->max_length) )
      goto LABEL_145;
    ServantStatusExplanationText = v80->m_Items[v79];
    if ( !ServantStatusExplanationText )
      goto LABEL_142;
    v81 = iconSelectList->max_length;
    if ( v79 >= v81 )
    {
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)ServantStatusExplanationText, 0, 0);
      v91 = this->fields.faceFrameSpriteList;
      if ( !v91 )
        goto LABEL_142;
      if ( (unsigned int)v79 >= LODWORD(v91->max_length) )
        goto LABEL_145;
    }
    else
    {
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)ServantStatusExplanationText, 1, 0);
      ServantStatusExplanationText = (UISprite_o *)SingletonMonoBehaviour_object___get_Instance(*v53);
      if ( !ServantStatusExplanationText )
        goto LABEL_142;
      v82 = DataManager__GetMasterData_object_(
              (DataManager_o *)ServantStatusExplanationText,
              (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
      ServantStatusExplanationText = (UISprite_o *)ServantStatusListViewItem__get_SvtId(item, 0);
      if ( (unsigned int)v79 >= LODWORD(iconSelectList->max_length) )
        goto LABEL_145;
      if ( !v82 )
        goto LABEL_142;
      v83 = v53;
      v84 = &iconSelectList->m_Items[v79];
      ServantStatusExplanationText = (UISprite_o *)ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                                     (ServantLimitImageMaster_o *)v82,
                                                     (int32_t)ServantStatusExplanationText,
                                                     *v84,
                                                     0);
      v85 = this->fields.faceSpriteList;
      if ( !v85 )
        goto LABEL_142;
      if ( (unsigned int)v79 >= LODWORD(v85->max_length) )
        goto LABEL_145;
      v86 = v85->m_Items[v79];
      v87 = (int)ServantStatusExplanationText;
      v88 = ServantStatusListViewItem__get_SvtId(item, 0);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetFaceImage(v86, v88, v87, 1, 0, 0);
      ServantStatusExplanationText = (UISprite_o *)ServantStatusListViewItem__get_SvtId(item, 0);
      if ( (unsigned int)v79 >= LODWORD(iconSelectList->max_length) )
        goto LABEL_145;
      v10 = (unsigned int)ServantStatusExplanationText;
      ServantStatusExplanationText = (UISprite_o *)v94;
      if ( !v94 )
        goto LABEL_142;
      v89 = ServantCostumeMaster__GetEntity(v94, v10, *v84, 0);
      ServantStatusListViewItemDrawFace__SetCostumeIcon(this, v79, v89, v90);
      v91 = this->fields.faceFrameSpriteList;
      if ( !v91 )
        goto LABEL_142;
      if ( (unsigned int)v79 >= LODWORD(v91->max_length) )
        goto LABEL_145;
      v53 = v83;
    }
    ServantStatusExplanationText = v91->m_Items[v79];
    if ( ServantStatusExplanationText )
    {
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)ServantStatusExplanationText, v79 < v81, 0);
      v78 = this->fields.faceSpriteList;
      ++v79;
      if ( v78 )
        continue;
    }
    goto LABEL_142;
  }
  ServantStatusListViewItemDrawFace__SetupButton(this, item, 1, v56);
  ServantStatusListViewItemDrawFace__SetupMask(this, item, v92);
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusListViewItemDrawFace__SetupButton(
        ServantStatusListViewItemDrawFace_o *this,
        ServantStatusListViewItem_o *item,
        bool isInit,
        const MethodInfo *method)
{
  UICommonButton_o *Instance; // x0
  __int64 v7; // x1
  bool v8; // w29
  int32_t ConvertOverwriteIconLimitCount; // w0
  int32_t maxIconLimitCount; // w22
  struct System_Int32_array *iconSelectList; // x23
  LocalizationManager_c *v12; // x0
  float *static_fields; // x8
  float v14; // s8
  float v15; // s9
  float v16; // s10
  float v17; // s11
  struct LocalizationManager_StaticFields *v18; // x8
  float r; // s12
  float g; // s13
  float b; // s14
  float a; // s15
  __int64 v23; // x2
  ServantLimitImageMaster_o *v24; // x25
  int32_t v25; // w8
  _BOOL4 v26; // w19
  struct UIRangeLabel_array *charaLevelTitleRangeLabelList; // x10
  UIRangeLabel_o *v28; // x26
  int v29; // w28
  System_String_o *v30; // x27
  float v31; // s3
  float v32; // s2
  float v33; // s1
  float v34; // s0 OVERLAPPED
  System_String_o *v35; // x0
  System_String_o *v36; // x0
  struct UISprite_array *charaLevelSpriteList; // x8
  __int64 *v38; // x8
  struct UICommonButton_array *faceButtonList; // x8
  struct UICommonButton_array *charaLevelButtonList; // x8
  char v41; // w26
  struct UICommonButton_array *v42; // x8
  struct UILabel_array *limitCountSealLabel; // x8
  UnityEngine_Object_o *v44; // x26
  struct UnityEngine_GameObject_array *limitCountSealObjList; // x8
  UnityEngine_Object_o *v46; // x27
  bool IsServantLimitCountSeal; // w28
  System_String_o *v48; // x1
  bool v49; // nf
  struct UICommonButton_array *v50; // x8
  int v51; // w22
  int max_length; // w27
  _BOOL4 v53; // w24
  struct UIRangeLabel_array *v54; // x9
  UIRangeLabel_o *v55; // x25
  int v56; // w19
  ServantCostumeEntity_o *Entity; // x0
  System_String_o *v58; // x26
  float v59; // s3
  float v60; // s2
  float v61; // s1
  float v62; // s0 OVERLAPPED
  struct UISprite_array *v63; // x8
  __int64 *v64; // x8
  struct UICommonButton_array *v65; // x8
  bool v66; // w19
  struct UICommonButton_array *v67; // x8
  char v68; // w25
  bool v69; // w19
  struct UICommonButton_array *v70; // x8
  struct UICommonButton_array *v71; // x8
  ServantCostumeMaster_o *v72; // [xsp+8h] [xbp-B8h]
  int32_t v73; // [xsp+14h] [xbp-ACh]
  unsigned int v75; // [xsp+1Ch] [xbp-A4h] BYREF
  UnityEngine_Color_o v76; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C23FCD & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantCostumeMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&StringLiteral_8268/*"LIMIT_COUNT_SELECT_SEALED"*/);
    sub_1C2D490(&StringLiteral_11933/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_"*/);
    sub_1C2D490(&StringLiteral_17441/*"btn_bg_20"*/);
    sub_1C2D490(&StringLiteral_11934/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_CLOSE"*/);
    sub_1C2D490(&StringLiteral_1/*""*/);
    sub_1C2D490(&StringLiteral_17442/*"btn_bg_21"*/);
    byte_4C23FCD = 1;
  }
  v75 = 0;
  Instance = (UICommonButton_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_146;
  Instance = (UICommonButton_o *)DataManager__GetMasterData_object_(
                                   (DataManager_o *)Instance,
                                   (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
  if ( !item )
    goto LABEL_146;
  v72 = (ServantCostumeMaster_o *)Instance;
  if ( item->fields.isConvertOverwriteImage )
  {
    v8 = 0;
  }
  else if ( item->fields.userSvtEntity )
  {
    v8 = 1;
  }
  else
  {
    v8 = item->fields.userSvtCollectionEntity != 0;
  }
  ConvertOverwriteIconLimitCount = ServantStatusListViewItem__get_ConvertOverwriteIconLimitCount(item, 0);
  maxIconLimitCount = item->fields.maxIconLimitCount;
  iconSelectList = item->fields.iconSelectList;
  v73 = ConvertOverwriteIconLimitCount;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !byte_4C21AC5 )
  {
    sub_1C2D490(&LocalizationManager_TypeInfo);
    byte_4C21AC5 = 1;
  }
  v12 = LocalizationManager_TypeInfo;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v12 = LocalizationManager_TypeInfo;
  }
  static_fields = (float *)v12->static_fields;
  v14 = static_fields[20];
  v15 = static_fields[21];
  v16 = static_fields[22];
  v17 = static_fields[23];
  if ( !byte_4C21AC6 )
  {
    sub_1C2D490(&LocalizationManager_TypeInfo);
    v12 = LocalizationManager_TypeInfo;
    byte_4C21AC6 = 1;
  }
  if ( !v12->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v12);
    v12 = LocalizationManager_TypeInfo;
  }
  v18 = v12->static_fields;
  r = v18->selectEffectColor.fields.r;
  g = v18->selectEffectColor.fields.g;
  b = v18->selectEffectColor.fields.b;
  a = v18->selectEffectColor.fields.a;
  Instance = (UICommonButton_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_146:
    sub_1C2D6EC(Instance, v7);
  Instance = (UICommonButton_o *)DataManager__GetMasterData_object_(
                                   (DataManager_o *)Instance,
                                   (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  v24 = (ServantLimitImageMaster_o *)Instance;
  v25 = 0;
  v75 = 0;
  do
  {
    if ( v25 <= maxIconLimitCount )
    {
      if ( !iconSelectList )
        goto LABEL_146;
      if ( (unsigned int)v25 >= LODWORD(iconSelectList->max_length) )
        goto LABEL_148;
      v26 = iconSelectList->m_Items[v25] == v73;
    }
    else
    {
      v26 = 0;
    }
    charaLevelTitleRangeLabelList = this->fields.charaLevelTitleRangeLabelList;
    if ( !charaLevelTitleRangeLabelList )
      goto LABEL_146;
    if ( (unsigned int)v25 >= LODWORD(charaLevelTitleRangeLabelList->max_length) )
      goto LABEL_148;
    v28 = charaLevelTitleRangeLabelList->m_Items[v25];
    v29 = v8 && v25 <= maxIconLimitCount;
    if ( v25 > maxIconLimitCount
      && (Instance = (UICommonButton_o *)ServantStatusListViewItem__get_IsMine(item, 0),
          ((unsigned __int8)Instance & 1) != 0) )
    {
      if ( !v28 )
        goto LABEL_146;
      v76.fields.r = v14;
      v76.fields.g = v15;
      v76.fields.b = v16;
      v76.fields.a = v17;
      UIRangeLabel__set_effectColor(v28, v76, 0);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v30 = (System_String_o *)StringLiteral_11934/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_CLOSE"*/;
    }
    else
    {
      v31 = v17;
      v32 = v16;
      v33 = v15;
      v34 = v14;
      if ( (v26 & v29) != 0 )
      {
        v31 = a;
        v32 = b;
        v33 = g;
        v34 = r;
      }
      if ( !v28 )
        goto LABEL_146;
      UIRangeLabel__set_effectColor(v28, *(UnityEngine_Color_o *)&v34, 0);
      v35 = System_Int32__ToString((int32_t)&v75, 0);
      v30 = System_String__Concat_63457864((System_String_o *)StringLiteral_11933/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_"*/, v35, 0);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v36 = LocalizationManager__Get(v30, 0);
    UIRangeLabel__Set(v28, v36, 0, 1, 0, 0, 0);
    charaLevelSpriteList = this->fields.charaLevelSpriteList;
    if ( !charaLevelSpriteList )
      goto LABEL_146;
    if ( v75 >= LODWORD(charaLevelSpriteList->max_length) )
LABEL_148:
      sub_1C2D6F4(Instance, v7, v23);
    Instance = (UICommonButton_o *)charaLevelSpriteList->m_Items[v75];
    if ( !Instance )
      goto LABEL_146;
    v38 = &StringLiteral_17441/*"btn_bg_20"*/;
    if ( v26 )
      v38 = &StringLiteral_17442/*"btn_bg_21"*/;
    UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v38, 0);
    faceButtonList = this->fields.faceButtonList;
    if ( !faceButtonList )
      goto LABEL_146;
    if ( v75 >= LODWORD(faceButtonList->max_length) )
      goto LABEL_148;
    Instance = faceButtonList->m_Items[v75];
    if ( (v26 & v29) != 0 )
    {
      if ( !Instance )
        goto LABEL_146;
      UICommonButton__SetColliderEnable(Instance, 0, v29 == 0 || isInit, 0);
      charaLevelButtonList = this->fields.charaLevelButtonList;
      if ( !charaLevelButtonList )
        goto LABEL_146;
      if ( v75 >= LODWORD(charaLevelButtonList->max_length) )
        goto LABEL_148;
      Instance = charaLevelButtonList->m_Items[v75];
      if ( !Instance )
        goto LABEL_146;
      UICommonButton__SetColliderEnable(Instance, 0, v29 == 0 || isInit, 0);
    }
    else
    {
      if ( !Instance )
        goto LABEL_146;
      v41 = v29 & ~v26;
      UICommonButton__SetButtonEnable(Instance, v41, v29 == 0 || isInit, 0);
      v42 = this->fields.charaLevelButtonList;
      if ( !v42 )
        goto LABEL_146;
      if ( v75 >= LODWORD(v42->max_length) )
        goto LABEL_148;
      Instance = v42->m_Items[v75];
      if ( !Instance )
        goto LABEL_146;
      UICommonButton__SetButtonEnable(Instance, v41, v29 == 0 || isInit, 0);
    }
    limitCountSealLabel = this->fields.limitCountSealLabel;
    if ( limitCountSealLabel )
    {
      if ( v75 >= LODWORD(limitCountSealLabel->max_length) )
        goto LABEL_148;
      v44 = (UnityEngine_Object_o *)limitCountSealLabel->m_Items[v75];
    }
    else
    {
      v44 = 0;
    }
    limitCountSealObjList = this->fields.limitCountSealObjList;
    if ( limitCountSealObjList )
    {
      if ( v75 >= LODWORD(limitCountSealObjList->max_length) )
        goto LABEL_148;
      v46 = (UnityEngine_Object_o *)limitCountSealObjList->m_Items[v75];
    }
    else
    {
      v46 = 0;
    }
    Instance = (UICommonButton_o *)ServantStatusListViewItem__get_SvtId(item, 0);
    if ( !iconSelectList )
      goto LABEL_146;
    if ( v75 >= LODWORD(iconSelectList->max_length) )
      goto LABEL_148;
    if ( !v24 )
      goto LABEL_146;
    IsServantLimitCountSeal = ServantLimitImageMaster__IsServantLimitCountSeal(
                                v24,
                                (int32_t)Instance,
                                iconSelectList->m_Items[v75] + 1,
                                0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Instance = (UICommonButton_o *)UnityEngine_Object__op_Inequality(v46, 0, 0);
    if ( IsServantLimitCountSeal )
    {
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v46 )
          goto LABEL_146;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v46, 1, 0);
      }
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Instance = (UICommonButton_o *)UnityEngine_Object__op_Inequality(v44, 0, 0);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        Instance = (UICommonButton_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8268/*"LIMIT_COUNT_SELECT_SEALED"*/, 0);
        if ( !v44 )
          goto LABEL_146;
        v48 = (System_String_o *)Instance;
        goto LABEL_90;
      }
    }
    else
    {
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v46 )
          goto LABEL_146;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v46, 0, 0);
      }
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Instance = (UICommonButton_o *)UnityEngine_Object__op_Inequality(v44, 0, 0);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v44 )
          goto LABEL_146;
        v48 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_90:
        UILabel__set_text((UILabel_o *)v44, v48, 0);
      }
    }
    v49 = (int)(v75 - 3) < 0;
    v25 = ++v75;
  }
  while ( v49 != __OFSUB__(v75, 4) );
  v50 = this->fields.charaLevelButtonList;
  if ( !v50 )
    goto LABEL_146;
  v51 = 4;
  while ( v51 < SLODWORD(v50->max_length) )
  {
    max_length = iconSelectList->max_length;
    if ( v51 >= max_length )
    {
      v53 = 0;
    }
    else
    {
      if ( v51 >= (unsigned int)max_length )
        goto LABEL_148;
      v53 = iconSelectList->m_Items[v51] == v73;
    }
    v54 = this->fields.charaLevelTitleRangeLabelList;
    if ( !v54 )
      goto LABEL_146;
    if ( (unsigned int)v51 >= LODWORD(v54->max_length) )
      goto LABEL_148;
    v55 = v54->m_Items[v51];
    v56 = v8 && v51 < max_length;
    if ( v51 >= max_length )
    {
      if ( !v55 )
        goto LABEL_146;
      UIRangeLabel__Clear(v54->m_Items[v51], 0);
    }
    else
    {
      Instance = (UICommonButton_o *)ServantStatusListViewItem__get_SvtId(item, 0);
      if ( (unsigned int)v51 >= LODWORD(iconSelectList->max_length) )
        goto LABEL_148;
      v7 = (unsigned int)Instance;
      Instance = (UICommonButton_o *)v72;
      if ( !v72 )
        goto LABEL_146;
      Entity = ServantCostumeMaster__GetEntity(v72, v7, iconSelectList->m_Items[v51], 0);
      if ( Entity )
      {
        Instance = (UICommonButton_o *)ServantCostumeEntity__getShortName(Entity, 0);
        v58 = (System_String_o *)Instance;
      }
      else
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        if ( !byte_4C2267D )
        {
          sub_1C2D490(&LocalizationManager_TypeInfo);
          byte_4C2267D = 1;
        }
        Instance = (UICommonButton_o *)LocalizationManager_TypeInfo;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          Instance = (UICommonButton_o *)LocalizationManager_TypeInfo;
        }
        v58 = *(System_String_o **)(*(_QWORD *)&Instance[1].fields.specifyHoverColor.fields.b + 32LL);
      }
      v59 = v17;
      v60 = v16;
      v61 = v15;
      v62 = v14;
      if ( (v53 & v56) != 0 )
      {
        v59 = a;
        v60 = b;
        v61 = g;
        v62 = r;
      }
      if ( !v55 )
        goto LABEL_146;
      UIRangeLabel__set_effectColor(v55, *(UnityEngine_Color_o *)&v62, 0);
      UIRangeLabel__Set(v55, v58, 0, 1, 0, 0, 0);
    }
    v63 = this->fields.charaLevelSpriteList;
    if ( !v63 )
      goto LABEL_146;
    if ( (unsigned int)v51 >= LODWORD(v63->max_length) )
      goto LABEL_148;
    Instance = (UICommonButton_o *)v63->m_Items[v51];
    if ( !Instance )
      goto LABEL_146;
    v64 = &StringLiteral_17441/*"btn_bg_20"*/;
    if ( v53 )
      v64 = &StringLiteral_17442/*"btn_bg_21"*/;
    UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v64, 0);
    v65 = this->fields.faceButtonList;
    if ( !v65 )
      goto LABEL_146;
    if ( (unsigned int)v51 >= LODWORD(v65->max_length) )
      goto LABEL_148;
    Instance = v65->m_Items[v51];
    if ( (v53 & v56) != 0 )
    {
      if ( !Instance )
        goto LABEL_146;
      v66 = v56 == 0 || isInit;
      UICommonButton__SetColliderEnable(Instance, 0, v66, 0);
      v67 = this->fields.charaLevelButtonList;
      if ( !v67 )
        goto LABEL_146;
      if ( (unsigned int)v51 >= LODWORD(v67->max_length) )
        goto LABEL_148;
      Instance = v67->m_Items[v51];
      if ( !Instance )
        goto LABEL_146;
      UICommonButton__SetColliderEnable(Instance, 0, v66, 0);
    }
    else if ( v51 >= max_length )
    {
      if ( !Instance )
        goto LABEL_146;
      Instance = (UICommonButton_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
      if ( !Instance )
        goto LABEL_146;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
      v71 = this->fields.charaLevelButtonList;
      if ( !v71 )
        goto LABEL_146;
      if ( (unsigned int)v51 >= LODWORD(v71->max_length) )
        goto LABEL_148;
      Instance = v71->m_Items[v51];
      if ( !Instance )
        goto LABEL_146;
      Instance = (UICommonButton_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
      if ( !Instance )
        goto LABEL_146;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
    }
    else
    {
      if ( !Instance )
        goto LABEL_146;
      v68 = v56 & ~v53;
      v69 = v56 == 0 || isInit;
      UICommonButton__SetButtonEnable(Instance, v68, v69, 0);
      v70 = this->fields.charaLevelButtonList;
      if ( !v70 )
        goto LABEL_146;
      if ( (unsigned int)v51 >= LODWORD(v70->max_length) )
        goto LABEL_148;
      Instance = v70->m_Items[v51];
      if ( !Instance )
        goto LABEL_146;
      UICommonButton__SetButtonEnable(Instance, v68, v69, 0);
    }
    v50 = this->fields.charaLevelButtonList;
    ++v51;
    if ( !v50 )
      goto LABEL_146;
  }
}


void ServantStatusListViewItemDrawFace__SetupMask(
        ServantStatusListViewItemDrawFace_o *this,
        ServantStatusListViewItem_o *item,
        const MethodInfo *method)
{
  ServantStatusListViewItemDrawFace_o *v4; // x19
  struct UISprite_o *baseSprite; // x8
  ServantStatusListViewItemDrawFace_o *v6; // x21
  System_String_o *Empty; // x20
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_4C23FCE & 1) == 0 )
  {
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&string_TypeInfo);
    this = (ServantStatusListViewItemDrawFace_o *)sub_1C2D490(&StringLiteral_11956/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_INFO_OWN_SETTING_FACE"*/);
    byte_4C23FCE = 1;
  }
  if ( !item )
LABEL_24:
    sub_1C2D6EC(this, item);
  if ( !item->fields.userSvtEntity )
  {
    this = (ServantStatusListViewItemDrawFace_o *)v4->fields.maskBase;
    if ( !this )
      goto LABEL_24;
LABEL_18:
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
    return;
  }
  this = (ServantStatusListViewItemDrawFace_o *)v4->fields.maskBase;
  if ( !this )
    goto LABEL_24;
  if ( !item->fields.isEnableOwnRandomSetting )
    goto LABEL_18;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
  baseSprite = v4->fields.baseSprite;
  if ( !baseSprite )
    goto LABEL_24;
  this = (ServantStatusListViewItemDrawFace_o *)v4->fields.maskSprite;
  if ( !this )
    goto LABEL_24;
  UIWidget__set_height((UIWidget_o *)this, baseSprite->fields.mHeight, 0);
  this = (ServantStatusListViewItemDrawFace_o *)v4->fields.maskSprite;
  if ( !this )
    goto LABEL_24;
  UIWidget__ResizeCollider((UIWidget_o *)this, 0);
  this = (ServantStatusListViewItemDrawFace_o *)v4->fields.maskSprite;
  if ( !this )
    goto LABEL_24;
  this = (ServantStatusListViewItemDrawFace_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)this,
                                                  0);
  if ( !v4->fields.baseSprite )
    goto LABEL_24;
  v6 = this;
  this = (ServantStatusListViewItemDrawFace_o *)UnityEngine_Component__get_transform(
                                                  (UnityEngine_Component_o *)v4->fields.baseSprite,
                                                  0);
  if ( !this )
    goto LABEL_24;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
  GameObjectExtensions__SetLocalPositionY((UnityEngine_GameObject_o *)v6, localPosition.fields.y, 0);
  if ( item->fields.isEnableOwnRandomSetting )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Empty = LocalizationManager__Get((System_String_o *)StringLiteral_11956/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_INFO_OWN_SETTING_FACE"*/, 0);
  }
  else
  {
    Empty = string_TypeInfo->static_fields->Empty;
  }
  this = (ServantStatusListViewItemDrawFace_o *)v4->fields.maskInfoLabel;
  if ( !this )
    goto LABEL_24;
  UILabel__set_overflowMethod((UILabel_o *)this, 2, 0);
  this = (ServantStatusListViewItemDrawFace_o *)v4->fields.maskInfoLabel;
  if ( !this )
    goto LABEL_24;
  UILabel__set_text((UILabel_o *)this, Empty, 0);
  this = (ServantStatusListViewItemDrawFace_o *)v4->fields.maskInfoLabel;
  if ( !this )
    goto LABEL_24;
  UILabel__SetCondensedScale((UILabel_o *)this, v4->fields.MASK_LABEL_MAX_WIDTH, 0, 0);
}