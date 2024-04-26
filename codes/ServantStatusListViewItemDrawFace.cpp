void __fastcall ServantStatusListViewItemDrawFace___ctor(
        ServantStatusListViewItemDrawFace_o *this,
        const MethodInfo *method)
{
  *(&this->fields.MASK_LABEL_MAX_WIDTH + 1) = 550;
  ServantStatusListViewItemDraw___ctor((ServantStatusListViewItemDraw_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusListViewItemDrawFace__Awake(
        ServantStatusListViewItemDrawFace_o *this,
        const MethodInfo *method)
{
  struct UISprite_array *charaLevelSpriteList; // x8
  ServantStatusListViewItemDrawFace_o *v3; // x19
  int32_t facePitch; // w20
  float v5; // s1
  struct UISprite_array *v6; // x8
  float v7; // s8
  float v8; // s0
  double v9; // d0
  struct UISprite_o *baseSprite; // x9
  int max_length; // w8
  int32_t mHeight; // w10
  bool v13; // cc
  int v14; // w8
  float v15; // s0
  float v16; // s1
  float v17; // s2
  int v18; // w8
  float v19; // s8
  __int64 v20; // x0
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4

  charaLevelSpriteList = this->fields.charaLevelSpriteList;
  if ( !charaLevelSpriteList )
    goto LABEL_28;
  v3 = this;
  if ( (int)charaLevelSpriteList->max_length > 4 )
  {
    this = (ServantStatusListViewItemDrawFace_o *)charaLevelSpriteList->m_Items[0];
    if ( !this )
      goto LABEL_28;
    this = (ServantStatusListViewItemDrawFace_o *)UnityEngine_Component__get_transform(
                                                    (UnityEngine_Component_o *)this,
                                                    0LL);
    if ( !this )
      goto LABEL_28;
    *(UnityEngine_Vector3_o *)(&v5 - 1) = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
    v6 = v3->fields.charaLevelSpriteList;
    if ( !v6 )
      goto LABEL_28;
    if ( v6->max_length <= 4 )
    {
      v20 = sub_B70798(this);
      sub_B70738(v20, 0LL);
    }
    this = (ServantStatusListViewItemDrawFace_o *)v6->m_Items[4];
    if ( !this )
      goto LABEL_28;
    v7 = v5;
    this = (ServantStatusListViewItemDrawFace_o *)UnityEngine_Component__get_transform(
                                                    (UnityEngine_Component_o *)this,
                                                    0LL);
    if ( !this )
      goto LABEL_28;
    localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
    v8 = v7 - localPosition.fields.y;
    charaLevelSpriteList = v3->fields.charaLevelSpriteList;
    v9 = (float)(v7 - localPosition.fields.y) == INFINITY ? -v8 : v8;
    facePitch = (int)v9;
    v3->fields.facePitch = (int)v9;
    if ( !charaLevelSpriteList )
LABEL_28:
      sub_B7076C(this, method);
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
  this = (ServantStatusListViewItemDrawFace_o *)v3->fields.titleSprite;
  v13 = max_length < 12;
  v14 = max_length / 4 - 1;
  if ( v13 )
    v14 = 1;
  v3->fields.baseSize.fields.x = (float)baseSprite->fields.mWidth;
  v3->fields.baseSize.fields.y = (float)(mHeight - v14 * facePitch);
  v3->fields.baseSize.fields.z = 0.0;
  if ( !this )
    goto LABEL_28;
  this = (ServantStatusListViewItemDrawFace_o *)UnityEngine_Component__get_transform(
                                                  (UnityEngine_Component_o *)this,
                                                  0LL);
  if ( !this )
    goto LABEL_28;
  *(UnityEngine_Vector3_o *)&v15 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  this = (ServantStatusListViewItemDrawFace_o *)v3->fields.faceBase;
  v18 = facePitch >= 0 ? facePitch : facePitch + 1;
  v19 = (float)(v18 >> 1);
  v3->fields.titleBasePosition.fields.x = v15;
  v3->fields.titleBasePosition.fields.y = v16 - v19;
  v3->fields.titleBasePosition.fields.z = v17;
  if ( !this )
    goto LABEL_28;
  this = (ServantStatusListViewItemDrawFace_o *)UnityEngine_GameObject__get_transform(
                                                  (UnityEngine_GameObject_o *)this,
                                                  0LL);
  if ( !this )
    goto LABEL_28;
  v22 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  this = (ServantStatusListViewItemDrawFace_o *)v3->fields.explanationLabel;
  v3->fields.faceBasePosition.fields.x = v22.fields.x;
  v3->fields.faceBasePosition.fields.y = v22.fields.y - v19;
  v3->fields.faceBasePosition.fields.z = v22.fields.z;
  if ( !this )
    goto LABEL_28;
  this = (ServantStatusListViewItemDrawFace_o *)UnityEngine_Component__get_transform(
                                                  (UnityEngine_Component_o *)this,
                                                  0LL);
  if ( !this )
    goto LABEL_28;
  v23 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  v3->fields.explanationBasePosition.fields.x = v23.fields.x;
  v3->fields.explanationBasePosition.fields.y = v23.fields.y + v19;
  v3->fields.explanationBasePosition.fields.z = v23.fields.z;
}


int32_t __fastcall ServantStatusListViewItemDrawFace__GetKind(
        ServantStatusListViewItemDrawFace_o *this,
        const MethodInfo *method)
{
  return 9;
}


void __fastcall ServantStatusListViewItemDrawFace__ModifyFace(
        ServantStatusListViewItemDrawFace_o *this,
        ServantStatusListViewItem_o *item,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  ServantStatusListViewItemDrawFace__SetupButton(this, item, 0, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusListViewItemDrawFace__SetCostumeIcon(
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
  __int64 v22; // x0
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4

  v6 = this;
  if ( (byte_4355DFC & 1) == 0 )
  {
    sub_B70694(&AtlasManager_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&StringLiteral_22851/*"svt_costume_icon_"*/);
    this = (ServantStatusListViewItemDrawFace_o *)sub_B70694(&StringLiteral_1/*""*/);
    byte_4355DFC = 1;
  }
  faceSpriteCostumeIconList = v6->fields.faceSpriteCostumeIconList;
  if ( !faceSpriteCostumeIconList )
    goto LABEL_41;
  if ( faceSpriteCostumeIconList->max_length <= index )
  {
LABEL_42:
    v22 = sub_B70798(this);
    sub_B70738(v22, 0LL);
  }
  v8 = (UnityEngine_Object_o *)faceSpriteCostumeIconList->m_Items[index];
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (ServantStatusListViewItemDrawFace_o *)UnityEngine_Object__op_Inequality(v8, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v9 = v6->fields.faceSpriteCostumeIconList;
    if ( !v9 )
      goto LABEL_41;
    if ( v9->max_length <= index )
      goto LABEL_42;
    this = (ServantStatusListViewItemDrawFace_o *)v9->m_Items[index];
    if ( !this )
      goto LABEL_41;
    UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    v10 = v6->fields.faceSpriteCostumeIconList;
    if ( !v10 )
      goto LABEL_41;
    if ( v10->max_length <= index )
      goto LABEL_42;
    this = (ServantStatusListViewItemDrawFace_o *)v10->m_Items[index];
    if ( !this )
      goto LABEL_41;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0LL);
    if ( svtCostumeEntity )
    {
      iconId = svtCostumeEntity->fields.iconId;
      v11 = (_DWORD)svtCostumeEntity + 92;
      if ( iconId >= 1 )
      {
        v13 = v6->fields.faceSpriteCostumeIconList;
        if ( !v13 )
          goto LABEL_41;
        if ( v13->max_length <= index )
          goto LABEL_42;
        v14 = v13->m_Items[index];
        v15 = System_Int32__ToString(v11, 0LL);
        v16 = System_String__Concat_44758168((System_String_o *)StringLiteral_22851/*"svt_costume_icon_"*/, v15, 0LL);
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        this = (ServantStatusListViewItemDrawFace_o *)AtlasManager__SetEventSprite(v14, v16, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          v17 = v6->fields.faceSpriteCostumeIconList;
          if ( !v17 )
            goto LABEL_41;
          if ( v17->max_length > index )
          {
            this = (ServantStatusListViewItemDrawFace_o *)v17->m_Items[index];
            if ( !this )
              goto LABEL_41;
            UIWidget__set_pivot((UIWidget_o *)this, 4, 0LL);
            v18 = v6->fields.faceSpriteCostumeIconList;
            if ( !v18 )
              goto LABEL_41;
            if ( v18->max_length > index )
            {
              this = (ServantStatusListViewItemDrawFace_o *)v18->m_Items[index];
              if ( !this )
                goto LABEL_41;
              UIWidget__set_width((UIWidget_o *)this, 32, 0LL);
              v19 = v6->fields.faceSpriteCostumeIconList;
              if ( !v19 )
                goto LABEL_41;
              if ( v19->max_length > index )
              {
                this = (ServantStatusListViewItemDrawFace_o *)v19->m_Items[index];
                if ( !this )
                  goto LABEL_41;
                UIWidget__set_height((UIWidget_o *)this, 32, 0LL);
                v20 = v6->fields.faceSpriteCostumeIconList;
                if ( !v20 )
                  goto LABEL_41;
                if ( v20->max_length > index )
                {
                  this = (ServantStatusListViewItemDrawFace_o *)v20->m_Items[index];
                  if ( !this )
                    goto LABEL_41;
                  this = (ServantStatusListViewItemDrawFace_o *)UnityEngine_Component__get_transform(
                                                                  (UnityEngine_Component_o *)this,
                                                                  0LL);
                  if ( !this )
                    goto LABEL_41;
                  v23.fields.x = -42.0;
                  v23.fields.z = 0.0;
                  v23.fields.y = -42.0;
                  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v23, 0LL);
                  v21 = v6->fields.faceSpriteCostumeIconList;
                  if ( !v21 )
                    goto LABEL_41;
                  if ( v21->max_length > index )
                  {
                    this = (ServantStatusListViewItemDrawFace_o *)v21->m_Items[index];
                    if ( this )
                    {
                      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 1, 0LL);
                      return;
                    }
LABEL_41:
                    sub_B7076C(this, *(_QWORD *)&index);
                  }
                }
              }
            }
          }
          goto LABEL_42;
        }
      }
    }
  }
}


void __fastcall ServantStatusListViewItemDrawFace__SetItem(
        ServantStatusListViewItemDrawFace_o *this,
        ServantStatusListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  ServantLimitImageMaster_o *Master_WarQuestSelectionMaster; // x21
  UILabel_o *explanationLabel; // x22
  UISprite_o *ServantStatusExplanationText; // x0
  __int64 v10; // x1
  struct UserServantEntity_o *userSvtEntity; // x8
  __int64 v12; // x22
  __int64 v13; // x23
  UILabel_o *v14; // x22
  struct UserServantCollectionEntity_o *userSvtCollectionEntity; // x8
  UILabel_o *v16; // x22
  struct ServantLeaderInfo_o *servantLeaderInfo; // x8
  int32_t v18; // w22
  struct UILabel_o *v19; // x23
  System_String_o *mText; // x25
  System_String_o *v21; // x24
  Il2CppObject *LimitCountSealedServantName; // x0
  System_String_o *v23; // x0
  System_String_o *v24; // x0
  int v25; // w23
  struct System_Int32_array *iconSelectList; // x28
  __int64 v27; // x8
  signed __int64 maxIconLimitCount; // x22
  int32_t facePitch; // w9
  float x; // s8
  float y; // s9
  float z; // s10
  UnityEngine_Object_o *baseCollider; // x21
  int v34; // w8
  int v35; // w8
  int v36; // w8
  int v37; // w24
  float v38; // s9
  double v39; // d0
  double v40; // d0
  int v41; // w21
  float v42; // s8
  float v43; // s11
  float v44; // s9
  float v45; // s10
  float v46; // s8
  float v47; // s11
  float v48; // s9
  float v49; // s8
  float v50; // s10
  float v51; // s9
  const MethodInfo *v52; // x3
  ServantCostumeMaster_o *v53; // x21
  unsigned __int64 v54; // x24
  int32_t *v55; // x23
  struct UISprite_array *faceSpriteList; // x9
  char v57; // w8
  UISprite_o *v58; // x25
  AtlasManager_c *v59; // x0
  struct UISprite_array *faceFrameSpriteList; // x8
  bool v61; // w1
  int v62; // w8
  int32_t v63; // w25
  int32_t SvtId; // w26
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v65; // kr00_16
  ServantLimitImageMaster_o *v66; // x25
  struct UISprite_array *v67; // x8
  UISprite_o *v68; // x26
  int32_t v69; // w25
  int32_t v70; // w27
  const MethodInfo *v71; // x3
  struct UISprite_array *v72; // x8
  struct UISprite_array *v73; // x8
  struct UISprite_array *v75; // x8
  __int64 v76; // x26
  int32_t *v77; // x27
  unsigned int v78; // w22
  struct UISprite_array *v79; // x8
  ServantLimitImageMaster_o *v80; // x23
  struct UISprite_array *v81; // x8
  UISprite_o *v82; // x24
  int32_t v83; // w23
  int32_t v84; // w25
  ServantCostumeEntity_o *v85; // x0
  const MethodInfo *v86; // x3
  struct UISprite_array *v87; // x8
  bool v88; // w1
  struct UISprite_array *v89; // x8
  const MethodInfo *v90; // x2
  __int64 v91; // x0
  ServantLimitSpoilerProtectionMaster_o *MasterData_WarQuestSelectionMaster; // [xsp+8h] [xbp-88h]
  int32_t v93; // [xsp+14h] [xbp-7Ch]
  ServantCostumeEntity_o *entity; // [xsp+18h] [xbp-78h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v95; // 0:x0.16
  UnityEngine_Vector3_o v96; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v97; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v98; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v99; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4355DFB & 1) == 0 )
  {
    sub_B70694(&AtlasManager_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_ServantCostumeMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___);
    sub_B70694(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B70694(&OptionManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&StringLiteral_12138/*"SERVANT_STATUS_EXPLANATION_FACE"*/);
    sub_B70694(&StringLiteral_12140/*"SERVANT_STATUS_EXPLANATION_FACE3"*/);
    sub_B70694(&StringLiteral_12139/*"SERVANT_STATUS_EXPLANATION_FACE2"*/);
    sub_B70694(&StringLiteral_12141/*"SERVANT_STATUS_EXPLANATION_FACE_LIMIT_COUNT_SEALED_MSG"*/);
    byte_4355DFB = 1;
  }
  entity = 0LL;
  ServantStatusListViewItemDraw__SetItem((ServantStatusListViewItemDraw_o *)this, item, mode, 0LL);
  if ( !item || !mode )
    return;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (ServantLimitImageMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  if ( item->fields.userSvtEntity )
  {
    explanationLabel = this->fields.explanationLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    ServantStatusExplanationText = (UISprite_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12138/*"SERVANT_STATUS_EXPLANATION_FACE"*/, 0LL);
    if ( !explanationLabel )
      goto LABEL_160;
    UILabel__set_text(explanationLabel, (System_String_o *)ServantStatusExplanationText, 0LL);
    userSvtEntity = item->fields.userSvtEntity;
    if ( !userSvtEntity )
      goto LABEL_160;
    v13 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
    v12 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
  }
  else if ( item->fields.userSvtCollectionEntity )
  {
    v14 = this->fields.explanationLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    ServantStatusExplanationText = (UISprite_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12139/*"SERVANT_STATUS_EXPLANATION_FACE2"*/, 0LL);
    if ( !v14 )
      goto LABEL_160;
    UILabel__set_text(v14, (System_String_o *)ServantStatusExplanationText, 0LL);
    userSvtCollectionEntity = item->fields.userSvtCollectionEntity;
    if ( !userSvtCollectionEntity )
      goto LABEL_160;
    v13 = *(_QWORD *)&userSvtCollectionEntity->fields.svtId.fields.currentCryptoKey;
    v12 = *(_QWORD *)&userSvtCollectionEntity->fields.svtId.fields.fakeValue;
  }
  else
  {
    v16 = this->fields.explanationLabel;
    if ( !item->fields.servantLeaderInfo )
    {
      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      ServantStatusExplanationText = (UISprite_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12140/*"SERVANT_STATUS_EXPLANATION_FACE3"*/, 0LL);
      if ( !v16 )
        goto LABEL_160;
      UILabel__set_text(v16, (System_String_o *)ServantStatusExplanationText, 0LL);
      goto LABEL_42;
    }
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    ServantStatusExplanationText = (UISprite_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12140/*"SERVANT_STATUS_EXPLANATION_FACE3"*/, 0LL);
    if ( !v16 )
      goto LABEL_160;
    UILabel__set_text(v16, (System_String_o *)ServantStatusExplanationText, 0LL);
    servantLeaderInfo = item->fields.servantLeaderInfo;
    if ( !servantLeaderInfo )
      goto LABEL_160;
    v13 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.currentCryptoKey;
    v12 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.fakeValue;
  }
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v95.fields.currentCryptoKey = v13;
  *(_QWORD *)&v95.fields.fakeValue = v12;
  ServantStatusExplanationText = (UISprite_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(
                                                 v95,
                                                 0LL);
  if ( !(_DWORD)ServantStatusExplanationText )
    goto LABEL_42;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_160;
  v18 = (int)ServantStatusExplanationText;
  if ( !ServantLimitImageMaster__IsServantLimitCountSeal(
          Master_WarQuestSelectionMaster,
          (int32_t)ServantStatusExplanationText,
          3,
          0LL) )
  {
LABEL_42:
    v25 = 0;
    goto LABEL_43;
  }
  ServantStatusExplanationText = (UISprite_o *)ServantLimitImageMaster__GetServantStatusExplanationText(
                                                 Master_WarQuestSelectionMaster,
                                                 (System_String_o *)StringLiteral_12141/*"SERVANT_STATUS_EXPLANATION_FACE_LIMIT_COUNT_SEALED_MSG"*/,
                                                 v18,
                                                 0LL);
  v19 = this->fields.explanationLabel;
  if ( !v19 )
    goto LABEL_160;
  mText = v19->fields.mText;
  v21 = (System_String_o *)ServantStatusExplanationText;
  LimitCountSealedServantName = (Il2CppObject *)ServantLimitImageMaster__GetLimitCountSealedServantName(
                                                  Master_WarQuestSelectionMaster,
                                                  v18,
                                                  3,
                                                  0LL);
  v23 = System_String__Format(v21, LimitCountSealedServantName, 0LL);
  v24 = System_String__Concat_44758168(mText, v23, 0LL);
  UILabel__set_text(v19, v24, 0LL);
  v25 = 1;
LABEL_43:
  ServantStatusExplanationText = (UISprite_o *)ServantStatusListViewItem__get_ConvertOverwriteIconLimitCount(item, 0LL);
  iconSelectList = item->fields.iconSelectList;
  v93 = (int)ServantStatusExplanationText;
  if ( !iconSelectList )
    goto LABEL_160;
  v27 = *(_QWORD *)&iconSelectList->max_length;
  maxIconLimitCount = item->fields.maxIconLimitCount;
  if ( (int)v27 < 5 )
    facePitch = 0;
  else
    facePitch = this->fields.facePitch;
  x = this->fields.baseSize.fields.x;
  y = this->fields.baseSize.fields.y;
  z = this->fields.baseSize.fields.z;
  baseCollider = (UnityEngine_Object_o *)this->fields.baseCollider;
  v34 = (int)v27 / 4;
  if ( (*(_QWORD *)&iconSelectList->max_length & 3LL) != 0 )
    ++v34;
  if ( v34 < 3 )
    v35 = 1;
  else
    v35 = v34 - 1;
  v36 = facePitch * v35;
  if ( v25 )
    v37 = v36 + 32;
  else
    v37 = v36;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v38 = y + (float)v37;
  if ( UnityEngine_Object__op_Inequality(baseCollider, 0LL, 0LL) )
  {
    ServantStatusExplanationText = (UISprite_o *)this->fields.baseCollider;
    if ( !ServantStatusExplanationText )
      goto LABEL_160;
    v96.fields.x = x;
    v96.fields.y = v38;
    v96.fields.z = z;
    UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)ServantStatusExplanationText, v96, 0LL);
  }
  ServantStatusExplanationText = this->fields.baseSprite;
  if ( !ServantStatusExplanationText )
    goto LABEL_160;
  v39 = x;
  if ( x == INFINITY )
    v39 = -x;
  UIWidget__set_width((UIWidget_o *)ServantStatusExplanationText, (int)v39, 0LL);
  ServantStatusExplanationText = this->fields.baseSprite;
  if ( !ServantStatusExplanationText )
    goto LABEL_160;
  v40 = v38;
  if ( v38 == INFINITY )
    v40 = -INFINITY;
  UIWidget__set_height((UIWidget_o *)ServantStatusExplanationText, (int)v40, 0LL);
  ServantStatusExplanationText = this->fields.titleSprite;
  v41 = v37 >= 0 ? v37 : v37 + 1;
  if ( !ServantStatusExplanationText )
    goto LABEL_160;
  v42 = this->fields.titleBasePosition.fields.x;
  v43 = this->fields.titleBasePosition.fields.y;
  v44 = this->fields.titleBasePosition.fields.z;
  ServantStatusExplanationText = (UISprite_o *)UnityEngine_Component__get_transform(
                                                 (UnityEngine_Component_o *)ServantStatusExplanationText,
                                                 0LL);
  if ( !ServantStatusExplanationText )
    goto LABEL_160;
  v45 = (float)(v41 >> 1);
  v97.fields.y = v43 + v45;
  v97.fields.x = v42;
  v97.fields.z = v44;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)ServantStatusExplanationText, v97, 0LL);
  ServantStatusExplanationText = (UISprite_o *)this->fields.faceBase;
  if ( !ServantStatusExplanationText )
    goto LABEL_160;
  v46 = this->fields.faceBasePosition.fields.x;
  v47 = this->fields.faceBasePosition.fields.y;
  v48 = this->fields.faceBasePosition.fields.z;
  ServantStatusExplanationText = (UISprite_o *)UnityEngine_GameObject__get_transform(
                                                 (UnityEngine_GameObject_o *)ServantStatusExplanationText,
                                                 0LL);
  if ( !ServantStatusExplanationText )
    goto LABEL_160;
  v98.fields.y = v47 + v45;
  v98.fields.x = v46;
  v98.fields.z = v48;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)ServantStatusExplanationText, v98, 0LL);
  ServantStatusExplanationText = (UISprite_o *)this->fields.explanationLabel;
  v49 = v25
      ? (float)(this->fields.explanationBasePosition.fields.y - v45) + 16.0
      : this->fields.explanationBasePosition.fields.y - v45;
  if ( !ServantStatusExplanationText )
    goto LABEL_160;
  v50 = this->fields.explanationBasePosition.fields.x;
  v51 = this->fields.explanationBasePosition.fields.z;
  ServantStatusExplanationText = (UISprite_o *)UnityEngine_Component__get_transform(
                                                 (UnityEngine_Component_o *)ServantStatusExplanationText,
                                                 0LL);
  if ( !ServantStatusExplanationText
    || (v99.fields.x = v50,
        v99.fields.y = v49,
        v99.fields.z = v51,
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)ServantStatusExplanationText, v99, 0LL),
        (ServantStatusExplanationText = (UISprite_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (MasterData_WarQuestSelectionMaster = (ServantLimitSpoilerProtectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)ServantStatusExplanationText,
                                                                                        (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___),
        (ServantStatusExplanationText = (UISprite_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL) )
  {
LABEL_160:
    sub_B7076C(ServantStatusExplanationText, v10);
  }
  v53 = (ServantCostumeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    (DataManager_o *)ServantStatusExplanationText,
                                    (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
  v54 = 0LL;
  v55 = &iconSelectList->m_Items[1];
  do
  {
    ServantStatusListViewItemDrawFace__SetCostumeIcon(this, v54, 0LL, v52);
    if ( (__int64)v54 > maxIconLimitCount )
      goto LABEL_86;
    ServantStatusExplanationText = (UISprite_o *)ServantStatusListViewItem__get_IsMine(item, 0LL);
    if ( ((unsigned __int8)ServantStatusExplanationText & 1) == 0 )
    {
      if ( v54 >= iconSelectList->max_length )
        goto LABEL_163;
      if ( v55[v54] > v93 )
      {
LABEL_86:
        ServantStatusExplanationText = (UISprite_o *)ServantStatusListViewItem__get_IsMine(item, 0LL);
        faceSpriteList = this->fields.faceSpriteList;
        if ( !faceSpriteList )
          goto LABEL_160;
        if ( v54 >= faceSpriteList->max_length )
          goto LABEL_163;
        v57 = (char)ServantStatusExplanationText;
        v58 = faceSpriteList->m_Items[v54];
        v59 = AtlasManager_TypeInfo;
        if ( (v57 & 1) != 0 )
        {
          if ( (WORD1(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !AtlasManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          }
          ServantStatusExplanationText = (UISprite_o *)AtlasManager__SetNoMountFace(v58, 0LL);
          faceFrameSpriteList = this->fields.faceFrameSpriteList;
          if ( !faceFrameSpriteList )
            goto LABEL_160;
          if ( v54 >= faceFrameSpriteList->max_length )
            goto LABEL_163;
          ServantStatusExplanationText = faceFrameSpriteList->m_Items[v54];
          if ( !ServantStatusExplanationText )
            goto LABEL_160;
          v61 = 0;
          goto LABEL_132;
        }
        if ( (WORD1(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) == 0 )
          goto LABEL_127;
LABEL_122:
        if ( !v59->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v59);
        goto LABEL_127;
      }
    }
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    }
    if ( OptionManager__GetSpoilerSetting(0LL) )
      goto LABEL_110;
    ServantStatusExplanationText = (UISprite_o *)ServantStatusListViewItem__get_IsMine(item, 0LL);
    if ( ((unsigned __int8)ServantStatusExplanationText & 1) != 0 )
      goto LABEL_110;
    if ( v54 >= iconSelectList->max_length )
      goto LABEL_163;
    v62 = v55[v54];
    if ( v62 >= 11 )
      v63 = v55[v54];
    else
      v63 = v62 + 1;
    SvtId = ServantStatusListViewItem__get_SvtId(item, 0LL);
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    v65 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(SvtId, 0LL);
    v10 = *(_QWORD *)&v65.fields.fakeValue;
    ServantStatusExplanationText = (UISprite_o *)MasterData_WarQuestSelectionMaster;
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_160;
    ServantStatusExplanationText = (UISprite_o *)ServantLimitSpoilerProtectionMaster__IsSpoilerLimitCount(
                                                   MasterData_WarQuestSelectionMaster,
                                                   v65,
                                                   v63,
                                                   0LL);
    if ( ((unsigned __int8)ServantStatusExplanationText & 1) != 0 )
    {
LABEL_110:
      ServantStatusExplanationText = (UISprite_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !ServantStatusExplanationText )
        goto LABEL_160;
      v66 = (ServantLimitImageMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)ServantStatusExplanationText,
                                           (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
      ServantStatusExplanationText = (UISprite_o *)ServantStatusListViewItem__get_SvtId(item, 0LL);
      if ( v54 >= iconSelectList->max_length )
        goto LABEL_163;
      if ( !v66 )
        goto LABEL_160;
      ServantStatusExplanationText = (UISprite_o *)ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                                     v66,
                                                     (int32_t)ServantStatusExplanationText,
                                                     v55[v54],
                                                     0LL);
      v67 = this->fields.faceSpriteList;
      if ( !v67 )
        goto LABEL_160;
      if ( v54 >= v67->max_length )
        goto LABEL_163;
      v68 = v67->m_Items[v54];
      v69 = (int)ServantStatusExplanationText;
      v70 = ServantStatusListViewItem__get_SvtId(item, 0LL);
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetFaceImage(v68, v70, v69, 0LL);
      ServantStatusExplanationText = (UISprite_o *)ServantStatusListViewItem__get_SvtId(item, 0LL);
      if ( v54 >= iconSelectList->max_length )
      {
LABEL_163:
        v91 = sub_B70798(ServantStatusExplanationText);
        sub_B70738(v91, 0LL);
      }
      if ( !v53 )
        goto LABEL_160;
      ServantCostumeMaster__TryGetEntity(v53, &entity, (int32_t)ServantStatusExplanationText, v55[v54], 0LL);
      ServantStatusListViewItemDrawFace__SetCostumeIcon(this, v54, entity, v71);
      goto LABEL_128;
    }
    v72 = this->fields.faceSpriteList;
    if ( !v72 )
      goto LABEL_160;
    if ( v54 >= v72->max_length )
      goto LABEL_163;
    v58 = v72->m_Items[v54];
    v59 = AtlasManager_TypeInfo;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 )
      goto LABEL_122;
LABEL_127:
    ServantStatusExplanationText = (UISprite_o *)AtlasManager__SetNotOpenFace(v58, 0LL);
LABEL_128:
    v73 = this->fields.faceFrameSpriteList;
    if ( !v73 )
      goto LABEL_160;
    if ( v54 >= v73->max_length )
      goto LABEL_163;
    ServantStatusExplanationText = v73->m_Items[v54];
    if ( !ServantStatusExplanationText )
      goto LABEL_160;
    v61 = 1;
LABEL_132:
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)ServantStatusExplanationText, v61, 0LL);
  }
  while ( v54++ < 3 );
  v75 = this->fields.faceSpriteList;
  if ( !v75 )
    goto LABEL_160;
  v76 = 0LL;
  v77 = &iconSelectList->m_Items[5];
  while ( 1 )
  {
    v78 = v76 + 4;
    if ( (int)v76 + 4 >= (signed int)v75->max_length )
      break;
    ServantStatusListViewItemDrawFace__SetCostumeIcon(this, v78, 0LL, v52);
    v79 = this->fields.faceSpriteList;
    if ( !v79 )
      goto LABEL_160;
    if ( v78 >= v79->max_length )
      goto LABEL_163;
    ServantStatusExplanationText = v79->m_Items[v76 + 4];
    if ( !ServantStatusExplanationText )
      goto LABEL_160;
    if ( (signed int)v78 >= (signed int)iconSelectList->max_length )
    {
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)ServantStatusExplanationText, 0, 0LL);
      v89 = this->fields.faceFrameSpriteList;
      if ( !v89 )
        goto LABEL_160;
      if ( v78 >= v89->max_length )
        goto LABEL_163;
      ServantStatusExplanationText = v89->m_Items[v76 + 4];
      if ( !ServantStatusExplanationText )
        goto LABEL_160;
      v88 = 0;
    }
    else
    {
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)ServantStatusExplanationText, 1, 0LL);
      ServantStatusExplanationText = (UISprite_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !ServantStatusExplanationText )
        goto LABEL_160;
      v80 = (ServantLimitImageMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)ServantStatusExplanationText,
                                           (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
      ServantStatusExplanationText = (UISprite_o *)ServantStatusListViewItem__get_SvtId(item, 0LL);
      if ( v78 >= iconSelectList->max_length )
        goto LABEL_163;
      if ( !v80 )
        goto LABEL_160;
      ServantStatusExplanationText = (UISprite_o *)ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                                     v80,
                                                     (int32_t)ServantStatusExplanationText,
                                                     v77[v76],
                                                     0LL);
      v81 = this->fields.faceSpriteList;
      if ( !v81 )
        goto LABEL_160;
      if ( v78 >= v81->max_length )
        goto LABEL_163;
      v82 = v81->m_Items[v76 + 4];
      v83 = (int)ServantStatusExplanationText;
      v84 = ServantStatusListViewItem__get_SvtId(item, 0LL);
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetFaceImage(v82, v84, v83, 0LL);
      ServantStatusExplanationText = (UISprite_o *)ServantStatusListViewItem__get_SvtId(item, 0LL);
      if ( v78 >= iconSelectList->max_length )
        goto LABEL_163;
      if ( !v53 )
        goto LABEL_160;
      v85 = ServantCostumeMaster__GetEntity(v53, (int32_t)ServantStatusExplanationText, v77[v76], 0LL);
      ServantStatusListViewItemDrawFace__SetCostumeIcon(this, v78, v85, v86);
      v87 = this->fields.faceFrameSpriteList;
      if ( !v87 )
        goto LABEL_160;
      if ( v78 >= v87->max_length )
        goto LABEL_163;
      ServantStatusExplanationText = v87->m_Items[v76 + 4];
      if ( !ServantStatusExplanationText )
        goto LABEL_160;
      v88 = 1;
    }
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)ServantStatusExplanationText, v88, 0LL);
    v75 = this->fields.faceSpriteList;
    ++v76;
    if ( !v75 )
      goto LABEL_160;
  }
  ServantStatusListViewItemDrawFace__SetupButton(this, item, 1, v52);
  ServantStatusListViewItemDrawFace__SetupMask(this, item, v90);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusListViewItemDrawFace__SetupButton(
        ServantStatusListViewItemDrawFace_o *this,
        ServantStatusListViewItem_o *item,
        bool isInit,
        const MethodInfo *method)
{
  UICommonButton_o *Instance; // x0
  __int64 v7; // x1
  _BOOL4 v8; // w23
  int32_t ConvertOverwriteIconLimitCount; // w0
  int32_t maxIconLimitCount; // w22
  LocalizationManager_c *v11; // x0
  float *static_fields; // x8
  float v13; // s8
  float v14; // s9
  float v15; // s10
  float v16; // s11
  struct System_Int32_array *v17; // x20
  float *v18; // x8
  float v19; // s12
  float v20; // s13
  float v21; // s14
  float v22; // s15
  ServantLimitImageMaster_o *v23; // x25
  int v24; // w8
  int v25; // w9
  _BOOL4 v26; // w19
  struct UIRangeLabel_array *charaLevelTitleRangeLabelList; // x10
  UIRangeLabel_o *v28; // x26
  int v29; // w20
  System_String_o *v30; // x0
  int v31; // w8
  float v32; // s3
  float v33; // s2
  float v34; // s1
  float v35; // s0
  System_String_o *v36; // x0
  System_String_o *v37; // x27
  System_String_o *v38; // x0
  struct UISprite_array *charaLevelSpriteList; // x8
  __int64 *v40; // x8
  struct UICommonButton_array *faceButtonList; // x8
  bool v42; // w19
  struct UICommonButton_array *charaLevelButtonList; // x8
  char v44; // w26
  bool v45; // w19
  struct UICommonButton_array *v46; // x8
  struct UILabel_array *limitCountSealLabel; // x8
  UnityEngine_Object_o *v48; // x26
  struct UnityEngine_GameObject_array *limitCountSealObjList; // x8
  UnityEngine_Object_o *v50; // x27
  System_String_o *v51; // x1
  bool v52; // nf
  struct UICommonButton_array *v53; // x8
  __int64 v54; // x22
  il2cpp_array_size_t v55; // w27
  int max_length; // w19
  _BOOL4 v57; // w20
  struct UIRangeLabel_array *v58; // x9
  UIRangeLabel_o *v59; // x25
  int v60; // w23
  ServantCostumeEntity_o *Entity; // x0
  System_String_o *v62; // x26
  int v63; // w8
  float v64; // s3
  float v65; // s2
  float v66; // s1
  float v67; // s0
  struct UISprite_array *v68; // x8
  __int64 *v69; // x8
  struct UICommonButton_array *v70; // x8
  bool v71; // w19
  struct UICommonButton_array *v72; // x8
  char v73; // w25
  bool v74; // w19
  struct UICommonButton_array *v75; // x8
  struct UICommonButton_array *v76; // x8
  __int64 v77; // x0
  ServantCostumeMaster_o *v78; // [xsp+8h] [xbp-B8h]
  bool v79; // [xsp+14h] [xbp-ACh]
  int32_t v80; // [xsp+18h] [xbp-A8h]
  struct System_Int32_array *iconSelectList; // [xsp+20h] [xbp-A0h]
  unsigned int v83; // [xsp+2Ch] [xbp-94h] BYREF
  UnityEngine_Color_o v84; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4355DFD & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_ServantCostumeMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&StringLiteral_8488/*"LIMIT_COUNT_SELECT_SEALED"*/);
    sub_B70694(&StringLiteral_12158/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_"*/);
    sub_B70694(&StringLiteral_17221/*"btn_bg_20"*/);
    sub_B70694(&StringLiteral_12159/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_CLOSE"*/);
    sub_B70694(&StringLiteral_1/*""*/);
    sub_B70694(&StringLiteral_17222/*"btn_bg_21"*/);
    byte_4355DFD = 1;
  }
  v83 = 0;
  Instance = (UICommonButton_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_182;
  Instance = (UICommonButton_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                   (DataManager_o *)Instance,
                                   (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
  if ( !item )
    goto LABEL_182;
  v78 = (ServantCostumeMaster_o *)Instance;
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
    v8 = item->fields.userSvtCollectionEntity != 0LL;
  }
  ConvertOverwriteIconLimitCount = ServantStatusListViewItem__get_ConvertOverwriteIconLimitCount(item, 0LL);
  maxIconLimitCount = item->fields.maxIconLimitCount;
  v80 = ConvertOverwriteIconLimitCount;
  iconSelectList = item->fields.iconSelectList;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  if ( !byte_434E9FD )
  {
    sub_B70694(&LocalizationManager_TypeInfo);
    byte_434E9FD = 1;
  }
  v11 = LocalizationManager_TypeInfo;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v11 = LocalizationManager_TypeInfo;
  }
  static_fields = (float *)v11->static_fields;
  v13 = static_fields[20];
  v14 = static_fields[21];
  v15 = static_fields[22];
  v16 = static_fields[23];
  if ( !byte_434E9FE )
  {
    sub_B70694(&LocalizationManager_TypeInfo);
    v11 = LocalizationManager_TypeInfo;
    byte_434E9FE = 1;
  }
  if ( (BYTE3(v11->vtable._0_Equals.methodPtr) & 4) != 0 )
  {
    v17 = iconSelectList;
    if ( !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      v11 = LocalizationManager_TypeInfo;
    }
  }
  else
  {
    v17 = iconSelectList;
  }
  v18 = (float *)v11->static_fields;
  v19 = v18[24];
  v20 = v18[25];
  v21 = v18[26];
  v22 = v18[27];
  Instance = (UICommonButton_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_182:
    sub_B7076C(Instance, v7);
  Instance = (UICommonButton_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                   (DataManager_o *)Instance,
                                   (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  v83 = 0;
  v23 = (ServantLimitImageMaster_o *)Instance;
  v24 = 0;
  do
  {
    if ( v24 <= maxIconLimitCount )
    {
      if ( !v17 )
        goto LABEL_182;
      if ( v24 >= v17->max_length )
        goto LABEL_184;
      v26 = v17->m_Items[v24 + 1] == v80;
      v25 = 1;
    }
    else
    {
      v25 = 0;
      v26 = 0;
    }
    charaLevelTitleRangeLabelList = this->fields.charaLevelTitleRangeLabelList;
    if ( !charaLevelTitleRangeLabelList )
      goto LABEL_182;
    if ( v24 >= charaLevelTitleRangeLabelList->max_length )
    {
LABEL_184:
      v77 = sub_B70798(Instance);
      sub_B70738(v77, 0LL);
    }
    v28 = charaLevelTitleRangeLabelList->m_Items[v24];
    v29 = v25 & v8;
    if ( v25
      || (Instance = (UICommonButton_o *)ServantStatusListViewItem__get_IsMine(item, 0LL),
          ((unsigned __int8)Instance & 1) == 0) )
    {
      if ( !v28 )
        goto LABEL_182;
      v31 = v26 & v29;
      if ( (v26 & v29) != 0 )
        v32 = v22;
      else
        v32 = v16;
      if ( v31 )
        v33 = v21;
      else
        v33 = v15;
      if ( v31 )
        v34 = v20;
      else
        v34 = v14;
      if ( v31 )
        v35 = v19;
      else
        v35 = v13;
      UIRangeLabel__set_effectColor(v28, *(UnityEngine_Color_o *)(&v32 - 3), 0LL);
      v36 = System_Int32__ToString((int32_t)&v83, 0LL);
      v37 = System_String__Concat_44758168((System_String_o *)StringLiteral_12158/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_"*/, v36, 0LL);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v30 = v37;
    }
    else
    {
      if ( !v28 )
        goto LABEL_182;
      v84.fields.r = v13;
      v84.fields.g = v14;
      v84.fields.b = v15;
      v84.fields.a = v16;
      UIRangeLabel__set_effectColor(v28, v84, 0LL);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v30 = (System_String_o *)StringLiteral_12159/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_CLOSE"*/;
    }
    v38 = LocalizationManager__Get(v30, 0LL);
    UIRangeLabel__Set(v28, v38, 0LL, 1, 0, 0LL);
    charaLevelSpriteList = this->fields.charaLevelSpriteList;
    if ( !charaLevelSpriteList )
      goto LABEL_182;
    if ( v83 >= charaLevelSpriteList->max_length )
      goto LABEL_184;
    Instance = (UICommonButton_o *)charaLevelSpriteList->m_Items[v83];
    if ( !Instance )
      goto LABEL_182;
    v40 = &StringLiteral_17221/*"btn_bg_20"*/;
    if ( v26 )
      v40 = &StringLiteral_17222/*"btn_bg_21"*/;
    UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v40, 0LL);
    faceButtonList = this->fields.faceButtonList;
    if ( !faceButtonList )
      goto LABEL_182;
    if ( v83 >= faceButtonList->max_length )
      goto LABEL_184;
    Instance = faceButtonList->m_Items[v83];
    if ( (v26 & v29) != 0 )
    {
      if ( !Instance )
        goto LABEL_182;
      v42 = v29 == 0 || isInit;
      UICommonButton__SetColliderEnable(Instance, 0, v29 == 0 || isInit, 0LL);
      charaLevelButtonList = this->fields.charaLevelButtonList;
      if ( !charaLevelButtonList )
        goto LABEL_182;
      v17 = iconSelectList;
      if ( v83 >= charaLevelButtonList->max_length )
        goto LABEL_184;
      Instance = charaLevelButtonList->m_Items[v83];
      if ( !Instance )
        goto LABEL_182;
      UICommonButton__SetColliderEnable(Instance, 0, v42, 0LL);
    }
    else
    {
      if ( !Instance )
        goto LABEL_182;
      v44 = v29 & ~v26;
      v45 = v29 == 0 || isInit;
      UICommonButton__SetButtonEnable(Instance, v44, v29 == 0 || isInit, 0LL);
      v46 = this->fields.charaLevelButtonList;
      if ( !v46 )
        goto LABEL_182;
      v17 = iconSelectList;
      if ( v83 >= v46->max_length )
        goto LABEL_184;
      Instance = v46->m_Items[v83];
      if ( !Instance )
        goto LABEL_182;
      UICommonButton__SetButtonEnable(Instance, v44, v45, 0LL);
    }
    limitCountSealLabel = this->fields.limitCountSealLabel;
    if ( limitCountSealLabel )
    {
      if ( v83 >= limitCountSealLabel->max_length )
        goto LABEL_184;
      v48 = (UnityEngine_Object_o *)limitCountSealLabel->m_Items[v83];
    }
    else
    {
      v48 = 0LL;
    }
    limitCountSealObjList = this->fields.limitCountSealObjList;
    if ( limitCountSealObjList )
    {
      if ( v83 >= limitCountSealObjList->max_length )
        goto LABEL_184;
      v50 = (UnityEngine_Object_o *)limitCountSealObjList->m_Items[v83];
    }
    else
    {
      v50 = 0LL;
    }
    Instance = (UICommonButton_o *)ServantStatusListViewItem__get_SvtId(item, 0LL);
    if ( !v17 )
      goto LABEL_182;
    if ( v83 >= v17->max_length )
      goto LABEL_184;
    if ( !v23 )
      goto LABEL_182;
    if ( ServantLimitImageMaster__IsServantLimitCountSeal(v23, (int32_t)Instance, v17->m_Items[v83 + 1] + 1, 0LL) )
    {
      if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      Instance = (UICommonButton_o *)UnityEngine_Object__op_Inequality(v50, 0LL, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v50 )
          goto LABEL_182;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v50, 1, 0LL);
      }
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      Instance = (UICommonButton_o *)UnityEngine_Object__op_Inequality(v48, 0LL, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        Instance = (UICommonButton_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8488/*"LIMIT_COUNT_SELECT_SEALED"*/, 0LL);
        if ( !v48 )
          goto LABEL_182;
        v51 = (System_String_o *)Instance;
        goto LABEL_114;
      }
    }
    else
    {
      if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      Instance = (UICommonButton_o *)UnityEngine_Object__op_Inequality(v50, 0LL, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v50 )
          goto LABEL_182;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v50, 0, 0LL);
      }
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      Instance = (UICommonButton_o *)UnityEngine_Object__op_Inequality(v48, 0LL, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v48 )
          goto LABEL_182;
        v51 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_114:
        UILabel__set_text((UILabel_o *)v48, v51, 0LL);
      }
    }
    v52 = (int)(v83 - 3) < 0;
    v24 = ++v83;
  }
  while ( v52 != __OFSUB__(v83, 4) );
  v53 = this->fields.charaLevelButtonList;
  if ( !v53 )
    goto LABEL_182;
  v54 = 12LL;
  v79 = v8;
  while ( 1 )
  {
    v55 = v54 - 8;
    if ( (int)v54 - 8 >= (signed int)v53->max_length )
      break;
    max_length = v17->max_length;
    if ( (int)v55 >= max_length )
    {
      v57 = 0;
    }
    else
    {
      if ( v55 >= max_length )
        goto LABEL_184;
      v57 = *((_DWORD *)&v17->obj.klass + v54) == v80;
    }
    v58 = this->fields.charaLevelTitleRangeLabelList;
    if ( !v58 )
      goto LABEL_182;
    if ( v55 >= v58->max_length )
      goto LABEL_184;
    v59 = v58->m_Items[v55];
    v60 = v8 && (int)v55 < max_length;
    if ( (int)v55 >= max_length )
    {
      if ( !v59 )
        goto LABEL_182;
      UIRangeLabel__Clear(v58->m_Items[v55], 0LL);
    }
    else
    {
      Instance = (UICommonButton_o *)ServantStatusListViewItem__get_SvtId(item, 0LL);
      if ( v55 >= iconSelectList->max_length )
        goto LABEL_184;
      v7 = (unsigned int)Instance;
      Instance = (UICommonButton_o *)v78;
      if ( !v78 )
        goto LABEL_182;
      Entity = ServantCostumeMaster__GetEntity(v78, v7, iconSelectList->m_Items[v55 + 1], 0LL);
      if ( Entity )
      {
        Instance = (UICommonButton_o *)ServantCostumeEntity__getShortName(Entity, 0LL);
        v62 = (System_String_o *)Instance;
        if ( !v59 )
          goto LABEL_182;
      }
      else
      {
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        if ( !byte_434F6FF )
        {
          sub_B70694(&LocalizationManager_TypeInfo);
          byte_434F6FF = 1;
        }
        Instance = (UICommonButton_o *)LocalizationManager_TypeInfo;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          Instance = (UICommonButton_o *)LocalizationManager_TypeInfo;
        }
        v62 = *(System_String_o **)(*(_QWORD *)&Instance[1].fields.specifyPressedColor.fields.b + 32LL);
        if ( !v59 )
          goto LABEL_182;
      }
      v63 = v57 & v60;
      if ( (v57 & v60) != 0 )
        v64 = v22;
      else
        v64 = v16;
      if ( v63 )
        v65 = v21;
      else
        v65 = v15;
      if ( v63 )
        v66 = v20;
      else
        v66 = v14;
      if ( v63 )
        v67 = v19;
      else
        v67 = v13;
      UIRangeLabel__set_effectColor(v59, *(UnityEngine_Color_o *)(&v64 - 3), 0LL);
      UIRangeLabel__Set(v59, v62, 0LL, 1, 0, 0LL);
    }
    v68 = this->fields.charaLevelSpriteList;
    if ( !v68 )
      goto LABEL_182;
    if ( v55 >= v68->max_length )
      goto LABEL_184;
    Instance = (UICommonButton_o *)v68->m_Items[v55];
    if ( !Instance )
      goto LABEL_182;
    v69 = &StringLiteral_17221/*"btn_bg_20"*/;
    if ( v57 )
      v69 = &StringLiteral_17222/*"btn_bg_21"*/;
    UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v69, 0LL);
    v70 = this->fields.faceButtonList;
    if ( !v70 )
      goto LABEL_182;
    if ( v55 >= v70->max_length )
      goto LABEL_184;
    Instance = v70->m_Items[v55];
    if ( (v57 & v60) != 0 )
    {
      if ( !Instance )
        goto LABEL_182;
      v71 = v60 == 0 || isInit;
      UICommonButton__SetColliderEnable(Instance, 0, v60 == 0 || isInit, 0LL);
      v72 = this->fields.charaLevelButtonList;
      v17 = iconSelectList;
      if ( !v72 )
        goto LABEL_182;
      LOBYTE(v8) = v79;
      if ( v55 >= v72->max_length )
        goto LABEL_184;
      Instance = v72->m_Items[v55];
      if ( !Instance )
        goto LABEL_182;
      UICommonButton__SetColliderEnable(Instance, 0, v71, 0LL);
    }
    else if ( (int)v55 >= max_length )
    {
      if ( !Instance )
        goto LABEL_182;
      Instance = (UICommonButton_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      LOBYTE(v8) = v79;
      v17 = iconSelectList;
      if ( !Instance )
        goto LABEL_182;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
      v76 = this->fields.charaLevelButtonList;
      if ( !v76 )
        goto LABEL_182;
      if ( v55 >= v76->max_length )
        goto LABEL_184;
      Instance = v76->m_Items[v55];
      if ( !Instance )
        goto LABEL_182;
      Instance = (UICommonButton_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      if ( !Instance )
        goto LABEL_182;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
    }
    else
    {
      if ( !Instance )
        goto LABEL_182;
      v73 = v60 & ~v57;
      v74 = v60 == 0 || isInit;
      UICommonButton__SetButtonEnable(Instance, v73, v60 == 0 || isInit, 0LL);
      v75 = this->fields.charaLevelButtonList;
      if ( !v75 )
        goto LABEL_182;
      LOBYTE(v8) = v79;
      v17 = iconSelectList;
      if ( v55 >= v75->max_length )
        goto LABEL_184;
      Instance = v75->m_Items[v55];
      if ( !Instance )
        goto LABEL_182;
      UICommonButton__SetButtonEnable(Instance, v73, v74, 0LL);
    }
    v53 = this->fields.charaLevelButtonList;
    ++v54;
    if ( !v53 )
      goto LABEL_182;
  }
}


void __fastcall ServantStatusListViewItemDrawFace__SetupMask(
        ServantStatusListViewItemDrawFace_o *this,
        ServantStatusListViewItem_o *item,
        const MethodInfo *method)
{
  ServantStatusListViewItemDrawFace_o *v4; // x19
  struct UISprite_o *baseSprite; // x8
  UnityEngine_GameObject_o *v6; // x21
  System_String_o *Empty; // x20
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_4355DFE & 1) == 0 )
  {
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&string_TypeInfo);
    this = (ServantStatusListViewItemDrawFace_o *)sub_B70694(&StringLiteral_12180/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_INFO_OWN_SETTING_FACE"*/);
    byte_4355DFE = 1;
  }
  if ( !item )
LABEL_25:
    sub_B7076C(this, item);
  if ( !item->fields.userSvtEntity )
  {
    this = (ServantStatusListViewItemDrawFace_o *)v4->fields.maskBase;
    if ( !this )
      goto LABEL_25;
LABEL_19:
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    return;
  }
  this = (ServantStatusListViewItemDrawFace_o *)v4->fields.maskBase;
  if ( !this )
    goto LABEL_25;
  if ( !item->fields.isEnableOwnRandomSetting )
    goto LABEL_19;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  baseSprite = v4->fields.baseSprite;
  if ( !baseSprite )
    goto LABEL_25;
  this = (ServantStatusListViewItemDrawFace_o *)v4->fields.maskSprite;
  if ( !this )
    goto LABEL_25;
  UIWidget__set_height((UIWidget_o *)this, baseSprite->fields.mHeight, 0LL);
  this = (ServantStatusListViewItemDrawFace_o *)v4->fields.maskSprite;
  if ( !this )
    goto LABEL_25;
  UIWidget__ResizeCollider((UIWidget_o *)this, 0LL);
  this = (ServantStatusListViewItemDrawFace_o *)v4->fields.maskSprite;
  if ( !this )
    goto LABEL_25;
  this = (ServantStatusListViewItemDrawFace_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)this,
                                                  0LL);
  if ( !v4->fields.baseSprite )
    goto LABEL_25;
  v6 = (UnityEngine_GameObject_o *)this;
  this = (ServantStatusListViewItemDrawFace_o *)UnityEngine_Component__get_transform(
                                                  (UnityEngine_Component_o *)v4->fields.baseSprite,
                                                  0LL);
  if ( !this )
    goto LABEL_25;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  GameObjectExtensions__SetLocalPositionY(v6, localPosition.fields.y, 0LL);
  if ( item->fields.isEnableOwnRandomSetting )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    Empty = LocalizationManager__Get((System_String_o *)StringLiteral_12180/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_INFO_OWN_SETTING_FACE"*/, 0LL);
  }
  else
  {
    Empty = string_TypeInfo->static_fields->Empty;
  }
  this = (ServantStatusListViewItemDrawFace_o *)v4->fields.maskInfoLabel;
  if ( !this )
    goto LABEL_25;
  UILabel__set_overflowMethod((UILabel_o *)this, 2, 0LL);
  this = (ServantStatusListViewItemDrawFace_o *)v4->fields.maskInfoLabel;
  if ( !this )
    goto LABEL_25;
  UILabel__set_text((UILabel_o *)this, Empty, 0LL);
  this = (ServantStatusListViewItemDrawFace_o *)v4->fields.maskInfoLabel;
  if ( !this )
    goto LABEL_25;
  UILabel__SetCondensedScale((UILabel_o *)this, *(&v4->fields.MASK_LABEL_MAX_WIDTH + 1), 0LL);
}