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
  struct UISprite_array *v5; // x8
  float y; // s8
  struct UISprite_o *baseSprite; // x9
  int max_length; // w8
  int32_t mHeight; // w11
  bool v10; // cc
  int v11; // w8
  int v12; // w8
  float v13; // s8
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v15; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v16; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v17; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4

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
    v5 = v3->fields.charaLevelSpriteList;
    if ( !v5 )
      goto LABEL_28;
    if ( LODWORD(v5->max_length) <= 4 )
      sub_1C32E84(this);
    if ( (this = (ServantStatusListViewItemDrawFace_o *)v5->m_Items[4]) == 0
      || (y = localPosition.fields.y,
          (this = (ServantStatusListViewItemDrawFace_o *)UnityEngine_Component__get_transform(
                                                           (UnityEngine_Component_o *)this,
                                                           0)) == 0)
      || ((v15 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0),
           charaLevelSpriteList = v3->fields.charaLevelSpriteList,
           (float)(y - v15.fields.y) != INFINITY)
        ? (facePitch = (int)(float)(y - v15.fields.y))
        : (facePitch = 0x80000000),
          v3->fields.facePitch = facePitch,
          !charaLevelSpriteList) )
    {
LABEL_28:
      sub_1C32E7C(this);
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
  v10 = max_length < 12;
  this = (ServantStatusListViewItemDrawFace_o *)v3->fields.titleSprite;
  v11 = 1 - max_length / 4;
  if ( v10 )
    v11 = -1;
  v3->fields.baseSize.fields.x = (float)baseSprite->fields.mWidth;
  v3->fields.baseSize.fields.y = (float)(mHeight + v11 * facePitch);
  v3->fields.baseSize.fields.z = 0.0;
  if ( !this )
    goto LABEL_28;
  this = (ServantStatusListViewItemDrawFace_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_28;
  v16 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
  this = (ServantStatusListViewItemDrawFace_o *)v3->fields.faceBase;
  v12 = facePitch >= 0 ? facePitch : facePitch + 1;
  v13 = (float)(v12 >> 1);
  v3->fields.titleBasePosition.fields.x = v16.fields.x;
  v3->fields.titleBasePosition.fields.y = v16.fields.y - v13;
  v3->fields.titleBasePosition.fields.z = v16.fields.z;
  if ( !this )
    goto LABEL_28;
  this = (ServantStatusListViewItemDrawFace_o *)UnityEngine_GameObject__get_transform(
                                                  (UnityEngine_GameObject_o *)this,
                                                  0);
  if ( !this )
    goto LABEL_28;
  v17 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
  this = (ServantStatusListViewItemDrawFace_o *)v3->fields.explanationLabel;
  v3->fields.faceBasePosition.fields.x = v17.fields.x;
  v3->fields.faceBasePosition.fields.y = v17.fields.y - v13;
  v3->fields.faceBasePosition.fields.z = v17.fields.z;
  if ( !this )
    goto LABEL_28;
  this = (ServantStatusListViewItemDrawFace_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_28;
  v18 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
  v3->fields.explanationBasePosition.fields.x = v18.fields.x;
  v3->fields.explanationBasePosition.fields.y = v18.fields.y + v13;
  v3->fields.explanationBasePosition.fields.z = v18.fields.z;
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
  if ( (byte_4C345E5 & 1) == 0 )
  {
    sub_1C32C20(&AtlasManager_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&StringLiteral_23873/*"svt_costume_icon_"*/);
    this = (ServantStatusListViewItemDrawFace_o *)sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C345E5 = 1;
  }
  faceSpriteCostumeIconList = v6->fields.faceSpriteCostumeIconList;
  if ( !faceSpriteCostumeIconList )
    goto LABEL_39;
  if ( LODWORD(faceSpriteCostumeIconList->max_length) <= index )
LABEL_40:
    sub_1C32E84(this);
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
        v16 = System_String__Concat_63518544((System_String_o *)StringLiteral_23873/*"svt_costume_icon_"*/, v15, 0);
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
                    sub_1C32E7C(this);
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
  struct UserServantEntity_o *userSvtEntity; // x8
  __int64 v11; // x22
  __int64 v12; // x23
  UILabel_o *v13; // x22
  struct UserServantCollectionEntity_o *userSvtCollectionEntity; // x8
  UILabel_o *servantLeaderInfo; // x23
  UILabel_o *v16; // x22
  struct ServantLeaderInfo_o *v17; // x8
  int32_t v18; // w22
  System_String_o *mText; // x25
  System_String_o *v20; // x24
  Il2CppObject *LimitCountSealedServantName; // x0
  System_String_o *v22; // x0
  System_String_o *v23; // x0
  struct System_Int32_array *iconSelectList; // x28
  il2cpp_array_size_t max_length; // x8
  int32_t v26; // w25
  int32_t facePitch; // w9
  signed __int64 maxIconLimitCount; // x21
  float x; // s8
  float y; // s9
  float z; // s10
  UnityEngine_Object_o *baseCollider; // x22
  int v33; // w8
  int v34; // w8
  int v35; // w8
  int v36; // w24
  float v37; // s9
  int32_t v38; // w1
  int32_t v39; // w1
  int v40; // w22
  float v41; // s8
  float v42; // s11
  float v43; // s9
  float v44; // s10
  float v45; // s8
  float v46; // s11
  float v47; // s9
  int32_t v48; // w22
  float v49; // s8
  float v50; // s10
  float v51; // s9
  const MethodInfo_39E2904 **v52; // x29
  unsigned __int64 v53; // x24
  int32_t *m_Items; // x23
  const MethodInfo *v55; // x3
  struct UISprite_array *v56; // x8
  char v57; // w25
  UISprite_o *v58; // x26
  UISprite_o *v59; // x0
  struct UISprite_array *faceFrameSpriteList; // x8
  bool v61; // w1
  int v62; // w8
  int32_t v63; // w25
  int32_t SvtId; // w26
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v65; // kr00_16
  Il2CppObject *v66; // x25
  struct UISprite_array *faceSpriteList; // x8
  UISprite_o *v68; // x26
  int32_t v69; // w25
  int32_t v70; // w27
  int32_t v71; // w2
  const MethodInfo *v72; // x3
  struct UISprite_array *v73; // x8
  UISprite_o *v74; // x25
  struct UISprite_array *v75; // x8
  struct UISprite_array *v76; // x8
  int32_t v77; // w21
  struct UISprite_array *v78; // x8
  int32_t v79; // w26
  Il2CppObject *v80; // x23
  const MethodInfo_39E2904 **v81; // x22
  int32_t *v82; // x29
  struct UISprite_array *v83; // x8
  UISprite_o *v84; // x24
  int32_t v85; // w23
  int32_t v86; // w25
  int32_t v87; // w1
  ServantCostumeEntity_o *v88; // x0
  const MethodInfo *v89; // x3
  struct UISprite_array *v90; // x8
  const MethodInfo *v91; // x2
  ServantLimitSpoilerProtectionMaster_o *MasterData_object; // [xsp+8h] [xbp-98h]
  ServantCostumeMaster_o *v93; // [xsp+10h] [xbp-90h]
  ServantCostumeEntity_o *entity; // [xsp+18h] [xbp-88h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v95; // 0:x0.16
  UnityEngine_Vector3_o v96; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v97; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v98; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v99; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C345E4 & 1) == 0 )
  {
    sub_1C32C20(&AtlasManager_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_ServantCostumeMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C32C20(&OptionManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&StringLiteral_11917/*"SERVANT_STATUS_EXPLANATION_FACE"*/);
    sub_1C32C20(&StringLiteral_11919/*"SERVANT_STATUS_EXPLANATION_FACE3"*/);
    sub_1C32C20(&StringLiteral_11918/*"SERVANT_STATUS_EXPLANATION_FACE2"*/);
    sub_1C32C20(&StringLiteral_11920/*"SERVANT_STATUS_EXPLANATION_FACE_LIMIT_COUNT_SEALED_MSG"*/);
    byte_4C345E4 = 1;
  }
  entity = 0;
  this->fields.dispMode = mode;
  if ( !item || !mode )
    return;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  if ( item->fields.userSvtEntity )
  {
    explanationLabel = this->fields.explanationLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    ServantStatusExplanationText = (UISprite_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11917/*"SERVANT_STATUS_EXPLANATION_FACE"*/, 0);
    if ( !explanationLabel )
      goto LABEL_142;
    UILabel__set_text(explanationLabel, (System_String_o *)ServantStatusExplanationText, 0);
    userSvtEntity = item->fields.userSvtEntity;
    if ( !userSvtEntity )
      goto LABEL_142;
    v12 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
    v11 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
  }
  else if ( item->fields.userSvtCollectionEntity )
  {
    v13 = this->fields.explanationLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    ServantStatusExplanationText = (UISprite_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11918/*"SERVANT_STATUS_EXPLANATION_FACE2"*/, 0);
    if ( !v13 )
      goto LABEL_142;
    UILabel__set_text(v13, (System_String_o *)ServantStatusExplanationText, 0);
    userSvtCollectionEntity = item->fields.userSvtCollectionEntity;
    if ( !userSvtCollectionEntity )
      goto LABEL_142;
    v12 = *(_QWORD *)&userSvtCollectionEntity->fields.svtId.fields.currentCryptoKey;
    v11 = *(_QWORD *)&userSvtCollectionEntity->fields.svtId.fields.fakeValue;
  }
  else
  {
    servantLeaderInfo = (UILabel_o *)item->fields.servantLeaderInfo;
    v16 = this->fields.explanationLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    ServantStatusExplanationText = (UISprite_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11919/*"SERVANT_STATUS_EXPLANATION_FACE3"*/, 0);
    if ( !v16 )
      goto LABEL_142;
    UILabel__set_text(v16, (System_String_o *)ServantStatusExplanationText, 0);
    if ( !servantLeaderInfo )
      goto LABEL_33;
    v17 = item->fields.servantLeaderInfo;
    if ( !v17 )
      goto LABEL_142;
    v12 = *(_QWORD *)&v17->fields.svtId.fields.currentCryptoKey;
    v11 = *(_QWORD *)&v17->fields.svtId.fields.fakeValue;
  }
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v95.fields.currentCryptoKey = v12;
  *(_QWORD *)&v95.fields.fakeValue = v11;
  ServantStatusExplanationText = (UISprite_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(
                                                 v95,
                                                 0);
  if ( !(_DWORD)ServantStatusExplanationText )
    goto LABEL_32;
  if ( !Master_object )
    goto LABEL_142;
  v18 = (int)ServantStatusExplanationText;
  if ( ServantLimitImageMaster__IsServantLimitCountSeal(
         (ServantLimitImageMaster_o *)Master_object,
         (int32_t)ServantStatusExplanationText,
         3,
         0) )
  {
    ServantStatusExplanationText = (UISprite_o *)ServantLimitImageMaster__GetServantStatusExplanationText(
                                                   (ServantLimitImageMaster_o *)Master_object,
                                                   (System_String_o *)StringLiteral_11920/*"SERVANT_STATUS_EXPLANATION_FACE_LIMIT_COUNT_SEALED_MSG"*/,
                                                   v18,
                                                   0);
    servantLeaderInfo = this->fields.explanationLabel;
    if ( !servantLeaderInfo )
      goto LABEL_142;
    mText = servantLeaderInfo->fields.mText;
    v20 = (System_String_o *)ServantStatusExplanationText;
    LimitCountSealedServantName = (Il2CppObject *)ServantLimitImageMaster__GetLimitCountSealedServantName(
                                                    (ServantLimitImageMaster_o *)Master_object,
                                                    v18,
                                                    3,
                                                    0,
                                                    0);
    v22 = System_String__Format(v20, LimitCountSealedServantName, 0);
    v23 = System_String__Concat_63518544(mText, v22, 0);
    UILabel__set_text(servantLeaderInfo, v23, 0);
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
  v26 = (int)ServantStatusExplanationText;
  if ( (int)max_length < 5 )
    facePitch = 0;
  else
    facePitch = this->fields.facePitch;
  maxIconLimitCount = item->fields.maxIconLimitCount;
  x = this->fields.baseSize.fields.x;
  y = this->fields.baseSize.fields.y;
  z = this->fields.baseSize.fields.z;
  baseCollider = (UnityEngine_Object_o *)this->fields.baseCollider;
  v33 = (int)max_length / 4;
  if ( (iconSelectList->max_length & 3) != 0 )
    ++v33;
  if ( v33 < 3 )
    v34 = 1;
  else
    v34 = v33 - 1;
  v35 = facePitch * v34;
  if ( (_DWORD)servantLeaderInfo )
    v36 = v35 + 32;
  else
    v36 = v35;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v37 = y + (float)v36;
  if ( UnityEngine_Object__op_Inequality(baseCollider, 0, 0) )
  {
    ServantStatusExplanationText = (UISprite_o *)this->fields.baseCollider;
    if ( !ServantStatusExplanationText )
      goto LABEL_142;
    v96.fields.x = x;
    v96.fields.y = v37;
    v96.fields.z = z;
    UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)ServantStatusExplanationText, v96, 0);
  }
  ServantStatusExplanationText = this->fields.baseSprite;
  if ( !ServantStatusExplanationText )
    goto LABEL_142;
  v38 = x == INFINITY ? 0x80000000 : (int)x;
  UIWidget__set_width((UIWidget_o *)ServantStatusExplanationText, v38, 0);
  ServantStatusExplanationText = this->fields.baseSprite;
  if ( !ServantStatusExplanationText )
    goto LABEL_142;
  v39 = v37 == INFINITY ? 0x80000000 : (int)v37;
  UIWidget__set_height((UIWidget_o *)ServantStatusExplanationText, v39, 0);
  ServantStatusExplanationText = this->fields.titleSprite;
  v40 = v36 >= 0 ? v36 : v36 + 1;
  if ( !ServantStatusExplanationText )
    goto LABEL_142;
  v41 = this->fields.titleBasePosition.fields.x;
  v42 = this->fields.titleBasePosition.fields.y;
  v43 = this->fields.titleBasePosition.fields.z;
  ServantStatusExplanationText = (UISprite_o *)UnityEngine_Component__get_transform(
                                                 (UnityEngine_Component_o *)ServantStatusExplanationText,
                                                 0);
  if ( !ServantStatusExplanationText )
    goto LABEL_142;
  v44 = (float)(v40 >> 1);
  v97.fields.y = v42 + v44;
  v97.fields.x = v41;
  v97.fields.z = v43;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)ServantStatusExplanationText, v97, 0);
  ServantStatusExplanationText = (UISprite_o *)this->fields.faceBase;
  if ( !ServantStatusExplanationText )
    goto LABEL_142;
  v45 = this->fields.faceBasePosition.fields.x;
  v46 = this->fields.faceBasePosition.fields.y;
  v47 = this->fields.faceBasePosition.fields.z;
  ServantStatusExplanationText = (UISprite_o *)UnityEngine_GameObject__get_transform(
                                                 (UnityEngine_GameObject_o *)ServantStatusExplanationText,
                                                 0);
  if ( !ServantStatusExplanationText )
    goto LABEL_142;
  v98.fields.y = v46 + v44;
  v98.fields.x = v45;
  v98.fields.z = v47;
  v48 = v26;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)ServantStatusExplanationText, v98, 0);
  ServantStatusExplanationText = (UISprite_o *)this->fields.explanationLabel;
  v49 = (_DWORD)servantLeaderInfo
      ? (float)(this->fields.explanationBasePosition.fields.y - v44) + 16.0
      : this->fields.explanationBasePosition.fields.y - v44;
  if ( !ServantStatusExplanationText )
    goto LABEL_142;
  v50 = this->fields.explanationBasePosition.fields.x;
  v51 = this->fields.explanationBasePosition.fields.z;
  ServantStatusExplanationText = (UISprite_o *)UnityEngine_Component__get_transform(
                                                 (UnityEngine_Component_o *)ServantStatusExplanationText,
                                                 0);
  if ( !ServantStatusExplanationText )
    goto LABEL_142;
  v99.fields.x = v50;
  v99.fields.y = v49;
  v99.fields.z = v51;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)ServantStatusExplanationText, v99, 0);
  v52 = (const MethodInfo_39E2904 **)&Method_SingletonMonoBehaviour_DataManager__get_Instance__;
  ServantStatusExplanationText = (UISprite_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !ServantStatusExplanationText
    || (MasterData_object = (ServantLimitSpoilerProtectionMaster_o *)DataManager__GetMasterData_object_(
                                                                       (DataManager_o *)ServantStatusExplanationText,
                                                                       (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___),
        (ServantStatusExplanationText = (UISprite_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0) )
  {
LABEL_142:
    sub_1C32E7C(ServantStatusExplanationText);
  }
  v53 = 0;
  m_Items = iconSelectList->m_Items;
  v93 = (ServantCostumeMaster_o *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)ServantStatusExplanationText,
                                    (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
  do
  {
    ServantStatusListViewItemDrawFace__SetCostumeIcon(this, v53, 0, v55);
    if ( (__int64)v53 > maxIconLimitCount )
      goto LABEL_74;
    ServantStatusExplanationText = (UISprite_o *)ServantStatusListViewItem__get_IsMine(item, 0);
    if ( ((unsigned __int8)ServantStatusExplanationText & 1) != 0 )
      goto LABEL_148;
    if ( v53 >= LODWORD(iconSelectList->max_length) )
      goto LABEL_145;
    if ( m_Items[v53] <= v48 )
    {
LABEL_148:
      if ( !OptionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      if ( OptionManager__GetSpoilerSetting(0) )
        goto LABEL_98;
      ServantStatusExplanationText = (UISprite_o *)ServantStatusListViewItem__get_IsMine(item, 0);
      if ( ((unsigned __int8)ServantStatusExplanationText & 1) != 0 )
        goto LABEL_98;
      if ( v53 >= LODWORD(iconSelectList->max_length) )
        goto LABEL_145;
      v62 = m_Items[v53];
      if ( v62 >= 11 )
        v63 = m_Items[v53];
      else
        v63 = v62 + 1;
      SvtId = ServantStatusListViewItem__get_SvtId(item, 0);
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      v65 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(SvtId, 0);
      ServantStatusExplanationText = (UISprite_o *)MasterData_object;
      if ( !MasterData_object )
        goto LABEL_142;
      ServantStatusExplanationText = (UISprite_o *)ServantLimitSpoilerProtectionMaster__IsSpoilerLimitCount(
                                                     MasterData_object,
                                                     v65,
                                                     v63,
                                                     0);
      if ( ((unsigned __int8)ServantStatusExplanationText & 1) != 0 )
      {
LABEL_98:
        ServantStatusExplanationText = (UISprite_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !ServantStatusExplanationText )
          goto LABEL_142;
        v66 = DataManager__GetMasterData_object_(
                (DataManager_o *)ServantStatusExplanationText,
                (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
        ServantStatusExplanationText = (UISprite_o *)ServantStatusListViewItem__get_SvtId(item, 0);
        if ( v53 >= LODWORD(iconSelectList->max_length) )
          goto LABEL_145;
        if ( !v66 )
          goto LABEL_142;
        ServantStatusExplanationText = (UISprite_o *)ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                                       (ServantLimitImageMaster_o *)v66,
                                                       (int32_t)ServantStatusExplanationText,
                                                       m_Items[v53],
                                                       0);
        faceSpriteList = this->fields.faceSpriteList;
        if ( !faceSpriteList )
          goto LABEL_142;
        if ( v53 >= LODWORD(faceSpriteList->max_length) )
          goto LABEL_145;
        v68 = faceSpriteList->m_Items[v53];
        v69 = (int)ServantStatusExplanationText;
        v70 = ServantStatusListViewItem__get_SvtId(item, 0);
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        AtlasManager__SetFaceImage(v68, v70, v69, 1, 0, 0);
        ServantStatusExplanationText = (UISprite_o *)ServantStatusListViewItem__get_SvtId(item, 0);
        if ( v53 >= LODWORD(iconSelectList->max_length) )
LABEL_145:
          sub_1C32E84(ServantStatusExplanationText);
        v71 = (int)ServantStatusExplanationText;
        ServantStatusExplanationText = (UISprite_o *)v93;
        if ( !v93 )
          goto LABEL_142;
        ServantCostumeMaster__TryGetEntity(v93, &entity, v71, m_Items[v53], 0);
        ServantStatusListViewItemDrawFace__SetCostumeIcon(this, v53, entity, v72);
        goto LABEL_114;
      }
      v73 = this->fields.faceSpriteList;
      if ( !v73 )
        goto LABEL_142;
      if ( v53 >= LODWORD(v73->max_length) )
        goto LABEL_145;
      v74 = v73->m_Items[v53];
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      v59 = v74;
    }
    else
    {
LABEL_74:
      ServantStatusExplanationText = (UISprite_o *)ServantStatusListViewItem__get_IsMine(item, 0);
      v56 = this->fields.faceSpriteList;
      if ( !v56 )
        goto LABEL_142;
      if ( v53 >= LODWORD(v56->max_length) )
        goto LABEL_145;
      v57 = (char)ServantStatusExplanationText;
      v58 = v56->m_Items[v53];
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      v59 = v58;
      if ( (v57 & 1) != 0 )
      {
        ServantStatusExplanationText = (UISprite_o *)AtlasManager__SetNoMountFace(v58, 0);
        faceFrameSpriteList = this->fields.faceFrameSpriteList;
        if ( !faceFrameSpriteList )
          goto LABEL_142;
        if ( v53 >= LODWORD(faceFrameSpriteList->max_length) )
          goto LABEL_145;
        ServantStatusExplanationText = faceFrameSpriteList->m_Items[v53];
        if ( !ServantStatusExplanationText )
          goto LABEL_142;
        v61 = 0;
        goto LABEL_118;
      }
    }
    ServantStatusExplanationText = (UISprite_o *)AtlasManager__SetNotOpenFace(v59, 0);
LABEL_114:
    v75 = this->fields.faceFrameSpriteList;
    if ( !v75 )
      goto LABEL_142;
    if ( v53 >= LODWORD(v75->max_length) )
      goto LABEL_145;
    ServantStatusExplanationText = v75->m_Items[v53];
    if ( !ServantStatusExplanationText )
      goto LABEL_142;
    v61 = 1;
LABEL_118:
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)ServantStatusExplanationText, v61, 0);
    ++v53;
  }
  while ( v53 != 4 );
  v76 = this->fields.faceSpriteList;
  if ( !v76 )
    goto LABEL_142;
  v77 = 4;
  while ( v77 < SLODWORD(v76->max_length) )
  {
    ServantStatusListViewItemDrawFace__SetCostumeIcon(this, v77, 0, v55);
    v78 = this->fields.faceSpriteList;
    if ( !v78 )
      goto LABEL_142;
    if ( (unsigned int)v77 >= LODWORD(v78->max_length) )
      goto LABEL_145;
    ServantStatusExplanationText = v78->m_Items[v77];
    if ( !ServantStatusExplanationText )
      goto LABEL_142;
    v79 = iconSelectList->max_length;
    if ( v77 >= v79 )
    {
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)ServantStatusExplanationText, 0, 0);
      v90 = this->fields.faceFrameSpriteList;
      if ( !v90 )
        goto LABEL_142;
      if ( (unsigned int)v77 >= LODWORD(v90->max_length) )
        goto LABEL_145;
    }
    else
    {
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)ServantStatusExplanationText, 1, 0);
      ServantStatusExplanationText = (UISprite_o *)SingletonMonoBehaviour_object___get_Instance(*v52);
      if ( !ServantStatusExplanationText )
        goto LABEL_142;
      v80 = DataManager__GetMasterData_object_(
              (DataManager_o *)ServantStatusExplanationText,
              (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
      ServantStatusExplanationText = (UISprite_o *)ServantStatusListViewItem__get_SvtId(item, 0);
      if ( (unsigned int)v77 >= LODWORD(iconSelectList->max_length) )
        goto LABEL_145;
      if ( !v80 )
        goto LABEL_142;
      v81 = v52;
      v82 = &iconSelectList->m_Items[v77];
      ServantStatusExplanationText = (UISprite_o *)ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                                     (ServantLimitImageMaster_o *)v80,
                                                     (int32_t)ServantStatusExplanationText,
                                                     *v82,
                                                     0);
      v83 = this->fields.faceSpriteList;
      if ( !v83 )
        goto LABEL_142;
      if ( (unsigned int)v77 >= LODWORD(v83->max_length) )
        goto LABEL_145;
      v84 = v83->m_Items[v77];
      v85 = (int)ServantStatusExplanationText;
      v86 = ServantStatusListViewItem__get_SvtId(item, 0);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetFaceImage(v84, v86, v85, 1, 0, 0);
      ServantStatusExplanationText = (UISprite_o *)ServantStatusListViewItem__get_SvtId(item, 0);
      if ( (unsigned int)v77 >= LODWORD(iconSelectList->max_length) )
        goto LABEL_145;
      v87 = (int)ServantStatusExplanationText;
      ServantStatusExplanationText = (UISprite_o *)v93;
      if ( !v93 )
        goto LABEL_142;
      v88 = ServantCostumeMaster__GetEntity(v93, v87, *v82, 0);
      ServantStatusListViewItemDrawFace__SetCostumeIcon(this, v77, v88, v89);
      v90 = this->fields.faceFrameSpriteList;
      if ( !v90 )
        goto LABEL_142;
      if ( (unsigned int)v77 >= LODWORD(v90->max_length) )
        goto LABEL_145;
      v52 = v81;
    }
    ServantStatusExplanationText = v90->m_Items[v77];
    if ( ServantStatusExplanationText )
    {
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)ServantStatusExplanationText, v77 < v79, 0);
      v76 = this->fields.faceSpriteList;
      ++v77;
      if ( v76 )
        continue;
    }
    goto LABEL_142;
  }
  ServantStatusListViewItemDrawFace__SetupButton(this, item, 1, v55);
  ServantStatusListViewItemDrawFace__SetupMask(this, item, v91);
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusListViewItemDrawFace__SetupButton(
        ServantStatusListViewItemDrawFace_o *this,
        ServantStatusListViewItem_o *item,
        bool isInit,
        const MethodInfo *method)
{
  UICommonButton_o *Instance; // x0
  bool v7; // w29
  int32_t ConvertOverwriteIconLimitCount; // w0
  int32_t maxIconLimitCount; // w22
  struct System_Int32_array *iconSelectList; // x23
  LocalizationManager_c *v11; // x0
  float *static_fields; // x8
  float v13; // s8
  float v14; // s9
  float v15; // s10
  float v16; // s11
  struct LocalizationManager_StaticFields *v17; // x8
  float r; // s12
  float g; // s13
  float b; // s14
  float a; // s15
  ServantLimitImageMaster_o *v22; // x25
  int32_t v23; // w8
  _BOOL4 v24; // w19
  struct UIRangeLabel_array *charaLevelTitleRangeLabelList; // x10
  UIRangeLabel_o *v26; // x26
  int v27; // w28
  System_String_o *v28; // x27
  float v29; // s3
  float v30; // s2
  float v31; // s1
  float v32; // s0 OVERLAPPED
  System_String_o *v33; // x0
  System_String_o *v34; // x0
  struct UISprite_array *charaLevelSpriteList; // x8
  __int64 *v36; // x8
  struct UICommonButton_array *faceButtonList; // x8
  struct UICommonButton_array *charaLevelButtonList; // x8
  char v39; // w26
  struct UICommonButton_array *v40; // x8
  struct UILabel_array *limitCountSealLabel; // x8
  UnityEngine_Object_o *v42; // x26
  struct UnityEngine_GameObject_array *limitCountSealObjList; // x8
  UnityEngine_Object_o *v44; // x27
  bool IsServantLimitCountSeal; // w28
  System_String_o *v46; // x1
  bool v47; // nf
  struct UICommonButton_array *v48; // x8
  int v49; // w22
  int max_length; // w27
  _BOOL4 v51; // w24
  struct UIRangeLabel_array *v52; // x9
  UIRangeLabel_o *v53; // x25
  int v54; // w19
  int32_t v55; // w1
  ServantCostumeEntity_o *Entity; // x0
  System_String_o *v57; // x26
  float v58; // s3
  float v59; // s2
  float v60; // s1
  float v61; // s0 OVERLAPPED
  struct UISprite_array *v62; // x8
  __int64 *v63; // x8
  struct UICommonButton_array *v64; // x8
  bool v65; // w19
  struct UICommonButton_array *v66; // x8
  char v67; // w25
  bool v68; // w19
  struct UICommonButton_array *v69; // x8
  struct UICommonButton_array *v70; // x8
  ServantCostumeMaster_o *v71; // [xsp+8h] [xbp-B8h]
  int32_t v72; // [xsp+14h] [xbp-ACh]
  unsigned int v74; // [xsp+1Ch] [xbp-A4h] BYREF
  UnityEngine_Color_o v75; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C345E6 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_ServantCostumeMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&StringLiteral_8274/*"LIMIT_COUNT_SELECT_SEALED"*/);
    sub_1C32C20(&StringLiteral_11939/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_"*/);
    sub_1C32C20(&StringLiteral_17445/*"btn_bg_20"*/);
    sub_1C32C20(&StringLiteral_11940/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_CLOSE"*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    sub_1C32C20(&StringLiteral_17446/*"btn_bg_21"*/);
    byte_4C345E6 = 1;
  }
  v74 = 0;
  Instance = (UICommonButton_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_146;
  Instance = (UICommonButton_o *)DataManager__GetMasterData_object_(
                                   (DataManager_o *)Instance,
                                   (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
  if ( !item )
    goto LABEL_146;
  v71 = (ServantCostumeMaster_o *)Instance;
  if ( item->fields.isConvertOverwriteImage )
  {
    v7 = 0;
  }
  else if ( item->fields.userSvtEntity )
  {
    v7 = 1;
  }
  else
  {
    v7 = item->fields.userSvtCollectionEntity != 0;
  }
  ConvertOverwriteIconLimitCount = ServantStatusListViewItem__get_ConvertOverwriteIconLimitCount(item, 0);
  maxIconLimitCount = item->fields.maxIconLimitCount;
  iconSelectList = item->fields.iconSelectList;
  v72 = ConvertOverwriteIconLimitCount;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !byte_4C32194 )
  {
    sub_1C32C20(&LocalizationManager_TypeInfo);
    byte_4C32194 = 1;
  }
  v11 = LocalizationManager_TypeInfo;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v11 = LocalizationManager_TypeInfo;
  }
  static_fields = (float *)v11->static_fields;
  v13 = static_fields[20];
  v14 = static_fields[21];
  v15 = static_fields[22];
  v16 = static_fields[23];
  if ( !byte_4C32195 )
  {
    sub_1C32C20(&LocalizationManager_TypeInfo);
    v11 = LocalizationManager_TypeInfo;
    byte_4C32195 = 1;
  }
  if ( !v11->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v11);
    v11 = LocalizationManager_TypeInfo;
  }
  v17 = v11->static_fields;
  r = v17->selectEffectColor.fields.r;
  g = v17->selectEffectColor.fields.g;
  b = v17->selectEffectColor.fields.b;
  a = v17->selectEffectColor.fields.a;
  Instance = (UICommonButton_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_146:
    sub_1C32E7C(Instance);
  Instance = (UICommonButton_o *)DataManager__GetMasterData_object_(
                                   (DataManager_o *)Instance,
                                   (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  v22 = (ServantLimitImageMaster_o *)Instance;
  v23 = 0;
  v74 = 0;
  do
  {
    if ( v23 <= maxIconLimitCount )
    {
      if ( !iconSelectList )
        goto LABEL_146;
      if ( (unsigned int)v23 >= LODWORD(iconSelectList->max_length) )
        goto LABEL_148;
      v24 = iconSelectList->m_Items[v23] == v72;
    }
    else
    {
      v24 = 0;
    }
    charaLevelTitleRangeLabelList = this->fields.charaLevelTitleRangeLabelList;
    if ( !charaLevelTitleRangeLabelList )
      goto LABEL_146;
    if ( (unsigned int)v23 >= LODWORD(charaLevelTitleRangeLabelList->max_length) )
      goto LABEL_148;
    v26 = charaLevelTitleRangeLabelList->m_Items[v23];
    v27 = v7 && v23 <= maxIconLimitCount;
    if ( v23 > maxIconLimitCount
      && (Instance = (UICommonButton_o *)ServantStatusListViewItem__get_IsMine(item, 0),
          ((unsigned __int8)Instance & 1) != 0) )
    {
      if ( !v26 )
        goto LABEL_146;
      v75.fields.r = v13;
      v75.fields.g = v14;
      v75.fields.b = v15;
      v75.fields.a = v16;
      UIRangeLabel__set_effectColor(v26, v75, 0);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v28 = (System_String_o *)StringLiteral_11940/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_CLOSE"*/;
    }
    else
    {
      v29 = v16;
      v30 = v15;
      v31 = v14;
      v32 = v13;
      if ( (v24 & v27) != 0 )
      {
        v29 = a;
        v30 = b;
        v31 = g;
        v32 = r;
      }
      if ( !v26 )
        goto LABEL_146;
      UIRangeLabel__set_effectColor(v26, *(UnityEngine_Color_o *)&v32, 0);
      v33 = System_Int32__ToString((int32_t)&v74, 0);
      v28 = System_String__Concat_63518544((System_String_o *)StringLiteral_11939/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_"*/, v33, 0);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v34 = LocalizationManager__Get(v28, 0);
    UIRangeLabel__Set(v26, v34, 0, 1, 0, 0, 0);
    charaLevelSpriteList = this->fields.charaLevelSpriteList;
    if ( !charaLevelSpriteList )
      goto LABEL_146;
    if ( v74 >= LODWORD(charaLevelSpriteList->max_length) )
LABEL_148:
      sub_1C32E84(Instance);
    Instance = (UICommonButton_o *)charaLevelSpriteList->m_Items[v74];
    if ( !Instance )
      goto LABEL_146;
    v36 = &StringLiteral_17445/*"btn_bg_20"*/;
    if ( v24 )
      v36 = &StringLiteral_17446/*"btn_bg_21"*/;
    UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v36, 0);
    faceButtonList = this->fields.faceButtonList;
    if ( !faceButtonList )
      goto LABEL_146;
    if ( v74 >= LODWORD(faceButtonList->max_length) )
      goto LABEL_148;
    Instance = faceButtonList->m_Items[v74];
    if ( (v24 & v27) != 0 )
    {
      if ( !Instance )
        goto LABEL_146;
      UICommonButton__SetColliderEnable(Instance, 0, v27 == 0 || isInit, 0);
      charaLevelButtonList = this->fields.charaLevelButtonList;
      if ( !charaLevelButtonList )
        goto LABEL_146;
      if ( v74 >= LODWORD(charaLevelButtonList->max_length) )
        goto LABEL_148;
      Instance = charaLevelButtonList->m_Items[v74];
      if ( !Instance )
        goto LABEL_146;
      UICommonButton__SetColliderEnable(Instance, 0, v27 == 0 || isInit, 0);
    }
    else
    {
      if ( !Instance )
        goto LABEL_146;
      v39 = v27 & ~v24;
      UICommonButton__SetButtonEnable(Instance, v39, v27 == 0 || isInit, 0);
      v40 = this->fields.charaLevelButtonList;
      if ( !v40 )
        goto LABEL_146;
      if ( v74 >= LODWORD(v40->max_length) )
        goto LABEL_148;
      Instance = v40->m_Items[v74];
      if ( !Instance )
        goto LABEL_146;
      UICommonButton__SetButtonEnable(Instance, v39, v27 == 0 || isInit, 0);
    }
    limitCountSealLabel = this->fields.limitCountSealLabel;
    if ( limitCountSealLabel )
    {
      if ( v74 >= LODWORD(limitCountSealLabel->max_length) )
        goto LABEL_148;
      v42 = (UnityEngine_Object_o *)limitCountSealLabel->m_Items[v74];
    }
    else
    {
      v42 = 0;
    }
    limitCountSealObjList = this->fields.limitCountSealObjList;
    if ( limitCountSealObjList )
    {
      if ( v74 >= LODWORD(limitCountSealObjList->max_length) )
        goto LABEL_148;
      v44 = (UnityEngine_Object_o *)limitCountSealObjList->m_Items[v74];
    }
    else
    {
      v44 = 0;
    }
    Instance = (UICommonButton_o *)ServantStatusListViewItem__get_SvtId(item, 0);
    if ( !iconSelectList )
      goto LABEL_146;
    if ( v74 >= LODWORD(iconSelectList->max_length) )
      goto LABEL_148;
    if ( !v22 )
      goto LABEL_146;
    IsServantLimitCountSeal = ServantLimitImageMaster__IsServantLimitCountSeal(
                                v22,
                                (int32_t)Instance,
                                iconSelectList->m_Items[v74] + 1,
                                0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Instance = (UICommonButton_o *)UnityEngine_Object__op_Inequality(v44, 0, 0);
    if ( IsServantLimitCountSeal )
    {
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v44 )
          goto LABEL_146;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v44, 1, 0);
      }
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Instance = (UICommonButton_o *)UnityEngine_Object__op_Inequality(v42, 0, 0);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        Instance = (UICommonButton_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8274/*"LIMIT_COUNT_SELECT_SEALED"*/, 0);
        if ( !v42 )
          goto LABEL_146;
        v46 = (System_String_o *)Instance;
        goto LABEL_90;
      }
    }
    else
    {
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v44 )
          goto LABEL_146;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v44, 0, 0);
      }
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Instance = (UICommonButton_o *)UnityEngine_Object__op_Inequality(v42, 0, 0);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v42 )
          goto LABEL_146;
        v46 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_90:
        UILabel__set_text((UILabel_o *)v42, v46, 0);
      }
    }
    v47 = (int)(v74 - 3) < 0;
    v23 = ++v74;
  }
  while ( v47 != __OFSUB__(v74, 4) );
  v48 = this->fields.charaLevelButtonList;
  if ( !v48 )
    goto LABEL_146;
  v49 = 4;
  while ( v49 < SLODWORD(v48->max_length) )
  {
    max_length = iconSelectList->max_length;
    if ( v49 >= max_length )
    {
      v51 = 0;
    }
    else
    {
      if ( v49 >= (unsigned int)max_length )
        goto LABEL_148;
      v51 = iconSelectList->m_Items[v49] == v72;
    }
    v52 = this->fields.charaLevelTitleRangeLabelList;
    if ( !v52 )
      goto LABEL_146;
    if ( (unsigned int)v49 >= LODWORD(v52->max_length) )
      goto LABEL_148;
    v53 = v52->m_Items[v49];
    v54 = v7 && v49 < max_length;
    if ( v49 >= max_length )
    {
      if ( !v53 )
        goto LABEL_146;
      UIRangeLabel__Clear(v52->m_Items[v49], 0);
    }
    else
    {
      Instance = (UICommonButton_o *)ServantStatusListViewItem__get_SvtId(item, 0);
      if ( (unsigned int)v49 >= LODWORD(iconSelectList->max_length) )
        goto LABEL_148;
      v55 = (int)Instance;
      Instance = (UICommonButton_o *)v71;
      if ( !v71 )
        goto LABEL_146;
      Entity = ServantCostumeMaster__GetEntity(v71, v55, iconSelectList->m_Items[v49], 0);
      if ( Entity )
      {
        Instance = (UICommonButton_o *)ServantCostumeEntity__getShortName(Entity, 0);
        v57 = (System_String_o *)Instance;
      }
      else
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        if ( !byte_4C32D4C )
        {
          sub_1C32C20(&LocalizationManager_TypeInfo);
          byte_4C32D4C = 1;
        }
        Instance = (UICommonButton_o *)LocalizationManager_TypeInfo;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          Instance = (UICommonButton_o *)LocalizationManager_TypeInfo;
        }
        v57 = *(System_String_o **)(*(_QWORD *)&Instance[1].fields.specifyHoverColor.fields.b + 32LL);
      }
      v58 = v16;
      v59 = v15;
      v60 = v14;
      v61 = v13;
      if ( (v51 & v54) != 0 )
      {
        v58 = a;
        v59 = b;
        v60 = g;
        v61 = r;
      }
      if ( !v53 )
        goto LABEL_146;
      UIRangeLabel__set_effectColor(v53, *(UnityEngine_Color_o *)&v61, 0);
      UIRangeLabel__Set(v53, v57, 0, 1, 0, 0, 0);
    }
    v62 = this->fields.charaLevelSpriteList;
    if ( !v62 )
      goto LABEL_146;
    if ( (unsigned int)v49 >= LODWORD(v62->max_length) )
      goto LABEL_148;
    Instance = (UICommonButton_o *)v62->m_Items[v49];
    if ( !Instance )
      goto LABEL_146;
    v63 = &StringLiteral_17445/*"btn_bg_20"*/;
    if ( v51 )
      v63 = &StringLiteral_17446/*"btn_bg_21"*/;
    UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v63, 0);
    v64 = this->fields.faceButtonList;
    if ( !v64 )
      goto LABEL_146;
    if ( (unsigned int)v49 >= LODWORD(v64->max_length) )
      goto LABEL_148;
    Instance = v64->m_Items[v49];
    if ( (v51 & v54) != 0 )
    {
      if ( !Instance )
        goto LABEL_146;
      v65 = v54 == 0 || isInit;
      UICommonButton__SetColliderEnable(Instance, 0, v65, 0);
      v66 = this->fields.charaLevelButtonList;
      if ( !v66 )
        goto LABEL_146;
      if ( (unsigned int)v49 >= LODWORD(v66->max_length) )
        goto LABEL_148;
      Instance = v66->m_Items[v49];
      if ( !Instance )
        goto LABEL_146;
      UICommonButton__SetColliderEnable(Instance, 0, v65, 0);
    }
    else if ( v49 >= max_length )
    {
      if ( !Instance )
        goto LABEL_146;
      Instance = (UICommonButton_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
      if ( !Instance )
        goto LABEL_146;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
      v70 = this->fields.charaLevelButtonList;
      if ( !v70 )
        goto LABEL_146;
      if ( (unsigned int)v49 >= LODWORD(v70->max_length) )
        goto LABEL_148;
      Instance = v70->m_Items[v49];
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
      v67 = v54 & ~v51;
      v68 = v54 == 0 || isInit;
      UICommonButton__SetButtonEnable(Instance, v67, v68, 0);
      v69 = this->fields.charaLevelButtonList;
      if ( !v69 )
        goto LABEL_146;
      if ( (unsigned int)v49 >= LODWORD(v69->max_length) )
        goto LABEL_148;
      Instance = v69->m_Items[v49];
      if ( !Instance )
        goto LABEL_146;
      UICommonButton__SetButtonEnable(Instance, v67, v68, 0);
    }
    v48 = this->fields.charaLevelButtonList;
    ++v49;
    if ( !v48 )
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
  if ( (byte_4C345E7 & 1) == 0 )
  {
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&string_TypeInfo);
    this = (ServantStatusListViewItemDrawFace_o *)sub_1C32C20(&StringLiteral_11962/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_INFO_OWN_SETTING_FACE"*/);
    byte_4C345E7 = 1;
  }
  if ( !item )
LABEL_24:
    sub_1C32E7C(this);
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
    Empty = LocalizationManager__Get((System_String_o *)StringLiteral_11962/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_INFO_OWN_SETTING_FACE"*/, 0);
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