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
      v20 = sub_B0D9A8(this);
      sub_B0D948(v20, 0LL);
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
      sub_B0D97C(this);
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct UISprite_array *faceSpriteCostumeIconList; // x8
  UnityEngine_Object_o *v11; // x22
  struct UISprite_array *v12; // x8
  struct UISprite_array *v13; // x8
  int32_t v14; // w21
  int32_t iconId; // t1
  struct UISprite_array *v16; // x8
  UISprite_o *v17; // x22
  System_String_o *v18; // x0
  System_String_o *v19; // x21
  struct UISprite_array *v20; // x8
  struct UISprite_array *v21; // x8
  struct UISprite_array *v22; // x8
  struct UISprite_array *v23; // x8
  struct UISprite_array *v24; // x8
  __int64 v25; // x0
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4

  v6 = this;
  if ( (byte_42186AF & 1) == 0 )
  {
    sub_B0D8A4(&AtlasManager_TypeInfo, *(_QWORD *)&index);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v7);
    sub_B0D8A4(&StringLiteral_22551/*"svt_costume_icon_"*/, v8);
    this = (ServantStatusListViewItemDrawFace_o *)sub_B0D8A4(&StringLiteral_1/*""*/, v9);
    byte_42186AF = 1;
  }
  faceSpriteCostumeIconList = v6->fields.faceSpriteCostumeIconList;
  if ( !faceSpriteCostumeIconList )
    goto LABEL_41;
  if ( faceSpriteCostumeIconList->max_length <= index )
  {
LABEL_42:
    v25 = sub_B0D9A8(this);
    sub_B0D948(v25, 0LL);
  }
  v11 = (UnityEngine_Object_o *)faceSpriteCostumeIconList->m_Items[index];
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (ServantStatusListViewItemDrawFace_o *)UnityEngine_Object__op_Inequality(v11, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v12 = v6->fields.faceSpriteCostumeIconList;
    if ( !v12 )
      goto LABEL_41;
    if ( v12->max_length <= index )
      goto LABEL_42;
    this = (ServantStatusListViewItemDrawFace_o *)v12->m_Items[index];
    if ( !this )
      goto LABEL_41;
    UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    v13 = v6->fields.faceSpriteCostumeIconList;
    if ( !v13 )
      goto LABEL_41;
    if ( v13->max_length <= index )
      goto LABEL_42;
    this = (ServantStatusListViewItemDrawFace_o *)v13->m_Items[index];
    if ( !this )
      goto LABEL_41;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0LL);
    if ( svtCostumeEntity )
    {
      iconId = svtCostumeEntity->fields.iconId;
      v14 = (_DWORD)svtCostumeEntity + 92;
      if ( iconId >= 1 )
      {
        v16 = v6->fields.faceSpriteCostumeIconList;
        if ( !v16 )
          goto LABEL_41;
        if ( v16->max_length <= index )
          goto LABEL_42;
        v17 = v16->m_Items[index];
        v18 = System_Int32__ToString(v14, 0LL);
        v19 = System_String__Concat_43849904((System_String_o *)StringLiteral_22551/*"svt_costume_icon_"*/, v18, 0LL);
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        this = (ServantStatusListViewItemDrawFace_o *)AtlasManager__SetEventSprite(v17, v19, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          v20 = v6->fields.faceSpriteCostumeIconList;
          if ( !v20 )
            goto LABEL_41;
          if ( v20->max_length > index )
          {
            this = (ServantStatusListViewItemDrawFace_o *)v20->m_Items[index];
            if ( !this )
              goto LABEL_41;
            UIWidget__set_pivot((UIWidget_o *)this, 4, 0LL);
            v21 = v6->fields.faceSpriteCostumeIconList;
            if ( !v21 )
              goto LABEL_41;
            if ( v21->max_length > index )
            {
              this = (ServantStatusListViewItemDrawFace_o *)v21->m_Items[index];
              if ( !this )
                goto LABEL_41;
              UIWidget__set_width((UIWidget_o *)this, 32, 0LL);
              v22 = v6->fields.faceSpriteCostumeIconList;
              if ( !v22 )
                goto LABEL_41;
              if ( v22->max_length > index )
              {
                this = (ServantStatusListViewItemDrawFace_o *)v22->m_Items[index];
                if ( !this )
                  goto LABEL_41;
                UIWidget__set_height((UIWidget_o *)this, 32, 0LL);
                v23 = v6->fields.faceSpriteCostumeIconList;
                if ( !v23 )
                  goto LABEL_41;
                if ( v23->max_length > index )
                {
                  this = (ServantStatusListViewItemDrawFace_o *)v23->m_Items[index];
                  if ( !this )
                    goto LABEL_41;
                  this = (ServantStatusListViewItemDrawFace_o *)UnityEngine_Component__get_transform(
                                                                  (UnityEngine_Component_o *)this,
                                                                  0LL);
                  if ( !this )
                    goto LABEL_41;
                  v26.fields.x = -42.0;
                  v26.fields.z = 0.0;
                  v26.fields.y = -42.0;
                  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v26, 0LL);
                  v24 = v6->fields.faceSpriteCostumeIconList;
                  if ( !v24 )
                    goto LABEL_41;
                  if ( v24->max_length > index )
                  {
                    this = (ServantStatusListViewItemDrawFace_o *)v24->m_Items[index];
                    if ( this )
                    {
                      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 1, 0LL);
                      return;
                    }
LABEL_41:
                    sub_B0D97C(this);
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  ServantLimitImageMaster_o *Master_WarQuestSelectionMaster; // x21
  UILabel_o *explanationLabel; // x22
  UISprite_o *ServantStatusExplanationText; // x0
  struct UserServantEntity_o *userSvtEntity; // x8
  __int64 v25; // x22
  __int64 v26; // x23
  UILabel_o *v27; // x22
  struct UserServantCollectionEntity_o *userSvtCollectionEntity; // x8
  UILabel_o *v29; // x22
  struct ServantLeaderInfo_o *servantLeaderInfo; // x8
  int32_t v31; // w22
  struct UILabel_o *v32; // x23
  System_String_o *mText; // x25
  System_String_o *v34; // x24
  Il2CppObject *LimitCountSealedServantName; // x0
  System_String_o *v36; // x0
  System_String_o *v37; // x0
  int v38; // w23
  struct System_Int32_array *iconSelectList; // x28
  __int64 v40; // x8
  signed __int64 maxIconLimitCount; // x22
  int32_t facePitch; // w9
  float x; // s8
  float y; // s9
  float z; // s10
  UnityEngine_Object_o *baseCollider; // x21
  int v47; // w8
  int v48; // w8
  int v49; // w8
  int v50; // w24
  float v51; // s9
  double v52; // d0
  double v53; // d0
  int v54; // w21
  float v55; // s8
  float v56; // s11
  float v57; // s9
  float v58; // s10
  float v59; // s8
  float v60; // s11
  float v61; // s9
  float v62; // s8
  float v63; // s10
  float v64; // s9
  const MethodInfo *v65; // x3
  ServantCostumeMaster_o *v66; // x21
  unsigned __int64 v67; // x24
  int32_t *v68; // x23
  struct UISprite_array *faceSpriteList; // x9
  char v70; // w8
  UISprite_o *v71; // x25
  AtlasManager_c *v72; // x0
  struct UISprite_array *faceFrameSpriteList; // x8
  bool v74; // w1
  int v75; // w8
  int32_t v76; // w25
  int32_t SvtId; // w26
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v78; // kr00_16
  ServantLimitImageMaster_o *v79; // x25
  struct UISprite_array *v80; // x8
  UISprite_o *v81; // x26
  int32_t v82; // w25
  int32_t v83; // w27
  const MethodInfo *v84; // x3
  struct UISprite_array *v85; // x8
  struct UISprite_array *v86; // x8
  struct UISprite_array *v88; // x8
  __int64 v89; // x26
  int32_t *v90; // x27
  unsigned int v91; // w22
  struct UISprite_array *v92; // x8
  ServantLimitImageMaster_o *v93; // x23
  struct UISprite_array *v94; // x8
  UISprite_o *v95; // x24
  int32_t v96; // w23
  int32_t v97; // w25
  ServantCostumeEntity_o *v98; // x0
  const MethodInfo *v99; // x3
  struct UISprite_array *v100; // x8
  bool v101; // w1
  struct UISprite_array *v102; // x8
  const MethodInfo *v103; // x2
  __int64 v104; // x0
  ServantLimitSpoilerProtectionMaster_o *MasterData_WarQuestSelectionMaster; // [xsp+8h] [xbp-88h]
  int32_t v106; // [xsp+14h] [xbp-7Ch]
  ServantCostumeEntity_o *entity; // [xsp+18h] [xbp-78h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v108; // 0:x0.16
  UnityEngine_Vector3_o v109; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v110; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v111; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v112; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42186AE & 1) == 0 )
  {
    sub_B0D8A4(&AtlasManager_TypeInfo, item);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantCostumeMaster___, v7);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v8);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___, v9);
    sub_B0D8A4(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v10);
    sub_B0D8A4(&DataManager_TypeInfo, v11);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v12);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v13);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
    sub_B0D8A4(&OptionManager_TypeInfo, v15);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_B0D8A4(&StringLiteral_12005/*"SERVANT_STATUS_EXPLANATION_FACE"*/, v17);
    sub_B0D8A4(&StringLiteral_12007/*"SERVANT_STATUS_EXPLANATION_FACE3"*/, v18);
    sub_B0D8A4(&StringLiteral_12006/*"SERVANT_STATUS_EXPLANATION_FACE2"*/, v19);
    sub_B0D8A4(&StringLiteral_12008/*"SERVANT_STATUS_EXPLANATION_FACE_LIMIT_COUNT_SEALED_MSG"*/, v20);
    byte_42186AE = 1;
  }
  entity = 0LL;
  ServantStatusListViewItemDraw__SetItem((ServantStatusListViewItemDraw_o *)this, item, mode, 0LL);
  if ( !item || !mode )
    return;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (ServantLimitImageMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  if ( item->fields.userSvtEntity )
  {
    explanationLabel = this->fields.explanationLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    ServantStatusExplanationText = (UISprite_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12005/*"SERVANT_STATUS_EXPLANATION_FACE"*/, 0LL);
    if ( !explanationLabel )
      goto LABEL_160;
    UILabel__set_text(explanationLabel, (System_String_o *)ServantStatusExplanationText, 0LL);
    userSvtEntity = item->fields.userSvtEntity;
    if ( !userSvtEntity )
      goto LABEL_160;
    v26 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
    v25 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
  }
  else if ( item->fields.userSvtCollectionEntity )
  {
    v27 = this->fields.explanationLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    ServantStatusExplanationText = (UISprite_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12006/*"SERVANT_STATUS_EXPLANATION_FACE2"*/, 0LL);
    if ( !v27 )
      goto LABEL_160;
    UILabel__set_text(v27, (System_String_o *)ServantStatusExplanationText, 0LL);
    userSvtCollectionEntity = item->fields.userSvtCollectionEntity;
    if ( !userSvtCollectionEntity )
      goto LABEL_160;
    v26 = *(_QWORD *)&userSvtCollectionEntity->fields.svtId.fields.currentCryptoKey;
    v25 = *(_QWORD *)&userSvtCollectionEntity->fields.svtId.fields.fakeValue;
  }
  else
  {
    v29 = this->fields.explanationLabel;
    if ( !item->fields.servantLeaderInfo )
    {
      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      ServantStatusExplanationText = (UISprite_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12007/*"SERVANT_STATUS_EXPLANATION_FACE3"*/, 0LL);
      if ( !v29 )
        goto LABEL_160;
      UILabel__set_text(v29, (System_String_o *)ServantStatusExplanationText, 0LL);
      goto LABEL_42;
    }
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    ServantStatusExplanationText = (UISprite_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12007/*"SERVANT_STATUS_EXPLANATION_FACE3"*/, 0LL);
    if ( !v29 )
      goto LABEL_160;
    UILabel__set_text(v29, (System_String_o *)ServantStatusExplanationText, 0LL);
    servantLeaderInfo = item->fields.servantLeaderInfo;
    if ( !servantLeaderInfo )
      goto LABEL_160;
    v26 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.currentCryptoKey;
    v25 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.fakeValue;
  }
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v108.fields.currentCryptoKey = v26;
  *(_QWORD *)&v108.fields.fakeValue = v25;
  ServantStatusExplanationText = (UISprite_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                                                 v108,
                                                 0LL);
  if ( !(_DWORD)ServantStatusExplanationText )
    goto LABEL_42;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_160;
  v31 = (int)ServantStatusExplanationText;
  if ( !ServantLimitImageMaster__IsServantLimitCountSeal(
          Master_WarQuestSelectionMaster,
          (int32_t)ServantStatusExplanationText,
          3,
          0LL) )
  {
LABEL_42:
    v38 = 0;
    goto LABEL_43;
  }
  ServantStatusExplanationText = (UISprite_o *)ServantLimitImageMaster__GetServantStatusExplanationText(
                                                 Master_WarQuestSelectionMaster,
                                                 (System_String_o *)StringLiteral_12008/*"SERVANT_STATUS_EXPLANATION_FACE_LIMIT_COUNT_SEALED_MSG"*/,
                                                 v31,
                                                 0LL);
  v32 = this->fields.explanationLabel;
  if ( !v32 )
    goto LABEL_160;
  mText = v32->fields.mText;
  v34 = (System_String_o *)ServantStatusExplanationText;
  LimitCountSealedServantName = (Il2CppObject *)ServantLimitImageMaster__GetLimitCountSealedServantName(
                                                  Master_WarQuestSelectionMaster,
                                                  v31,
                                                  3,
                                                  0LL);
  v36 = System_String__Format(v34, LimitCountSealedServantName, 0LL);
  v37 = System_String__Concat_43849904(mText, v36, 0LL);
  UILabel__set_text(v32, v37, 0LL);
  v38 = 1;
LABEL_43:
  ServantStatusExplanationText = (UISprite_o *)ServantStatusListViewItem__get_ConvertOverwriteIconLimitCount(item, 0LL);
  iconSelectList = item->fields.iconSelectList;
  v106 = (int)ServantStatusExplanationText;
  if ( !iconSelectList )
    goto LABEL_160;
  v40 = *(_QWORD *)&iconSelectList->max_length;
  maxIconLimitCount = item->fields.maxIconLimitCount;
  if ( (int)v40 < 5 )
    facePitch = 0;
  else
    facePitch = this->fields.facePitch;
  x = this->fields.baseSize.fields.x;
  y = this->fields.baseSize.fields.y;
  z = this->fields.baseSize.fields.z;
  baseCollider = (UnityEngine_Object_o *)this->fields.baseCollider;
  v47 = (int)v40 / 4;
  if ( (*(_QWORD *)&iconSelectList->max_length & 3LL) != 0 )
    ++v47;
  if ( v47 < 3 )
    v48 = 1;
  else
    v48 = v47 - 1;
  v49 = facePitch * v48;
  if ( v38 )
    v50 = v49 + 32;
  else
    v50 = v49;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v51 = y + (float)v50;
  if ( UnityEngine_Object__op_Inequality(baseCollider, 0LL, 0LL) )
  {
    ServantStatusExplanationText = (UISprite_o *)this->fields.baseCollider;
    if ( !ServantStatusExplanationText )
      goto LABEL_160;
    v109.fields.x = x;
    v109.fields.y = v51;
    v109.fields.z = z;
    UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)ServantStatusExplanationText, v109, 0LL);
  }
  ServantStatusExplanationText = this->fields.baseSprite;
  if ( !ServantStatusExplanationText )
    goto LABEL_160;
  v52 = x;
  if ( x == INFINITY )
    v52 = -x;
  UIWidget__set_width((UIWidget_o *)ServantStatusExplanationText, (int)v52, 0LL);
  ServantStatusExplanationText = this->fields.baseSprite;
  if ( !ServantStatusExplanationText )
    goto LABEL_160;
  v53 = v51;
  if ( v51 == INFINITY )
    v53 = -INFINITY;
  UIWidget__set_height((UIWidget_o *)ServantStatusExplanationText, (int)v53, 0LL);
  ServantStatusExplanationText = this->fields.titleSprite;
  v54 = v50 >= 0 ? v50 : v50 + 1;
  if ( !ServantStatusExplanationText )
    goto LABEL_160;
  v55 = this->fields.titleBasePosition.fields.x;
  v56 = this->fields.titleBasePosition.fields.y;
  v57 = this->fields.titleBasePosition.fields.z;
  ServantStatusExplanationText = (UISprite_o *)UnityEngine_Component__get_transform(
                                                 (UnityEngine_Component_o *)ServantStatusExplanationText,
                                                 0LL);
  if ( !ServantStatusExplanationText )
    goto LABEL_160;
  v58 = (float)(v54 >> 1);
  v110.fields.y = v56 + v58;
  v110.fields.x = v55;
  v110.fields.z = v57;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)ServantStatusExplanationText, v110, 0LL);
  ServantStatusExplanationText = (UISprite_o *)this->fields.faceBase;
  if ( !ServantStatusExplanationText )
    goto LABEL_160;
  v59 = this->fields.faceBasePosition.fields.x;
  v60 = this->fields.faceBasePosition.fields.y;
  v61 = this->fields.faceBasePosition.fields.z;
  ServantStatusExplanationText = (UISprite_o *)UnityEngine_GameObject__get_transform(
                                                 (UnityEngine_GameObject_o *)ServantStatusExplanationText,
                                                 0LL);
  if ( !ServantStatusExplanationText )
    goto LABEL_160;
  v111.fields.y = v60 + v58;
  v111.fields.x = v59;
  v111.fields.z = v61;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)ServantStatusExplanationText, v111, 0LL);
  ServantStatusExplanationText = (UISprite_o *)this->fields.explanationLabel;
  v62 = v38
      ? (float)(this->fields.explanationBasePosition.fields.y - v58) + 16.0
      : this->fields.explanationBasePosition.fields.y - v58;
  if ( !ServantStatusExplanationText )
    goto LABEL_160;
  v63 = this->fields.explanationBasePosition.fields.x;
  v64 = this->fields.explanationBasePosition.fields.z;
  ServantStatusExplanationText = (UISprite_o *)UnityEngine_Component__get_transform(
                                                 (UnityEngine_Component_o *)ServantStatusExplanationText,
                                                 0LL);
  if ( !ServantStatusExplanationText
    || (v112.fields.x = v63,
        v112.fields.y = v62,
        v112.fields.z = v64,
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)ServantStatusExplanationText, v112, 0LL),
        (ServantStatusExplanationText = (UISprite_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (MasterData_WarQuestSelectionMaster = (ServantLimitSpoilerProtectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)ServantStatusExplanationText,
                                                                                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___),
        (ServantStatusExplanationText = (UISprite_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL) )
  {
LABEL_160:
    sub_B0D97C(ServantStatusExplanationText);
  }
  v66 = (ServantCostumeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    (DataManager_o *)ServantStatusExplanationText,
                                    (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
  v67 = 0LL;
  v68 = &iconSelectList->m_Items[1];
  do
  {
    ServantStatusListViewItemDrawFace__SetCostumeIcon(this, v67, 0LL, v65);
    if ( (__int64)v67 > maxIconLimitCount )
      goto LABEL_86;
    ServantStatusExplanationText = (UISprite_o *)ServantStatusListViewItem__get_IsMine(item, 0LL);
    if ( ((unsigned __int8)ServantStatusExplanationText & 1) == 0 )
    {
      if ( v67 >= iconSelectList->max_length )
        goto LABEL_163;
      if ( v68[v67] > v106 )
      {
LABEL_86:
        ServantStatusExplanationText = (UISprite_o *)ServantStatusListViewItem__get_IsMine(item, 0LL);
        faceSpriteList = this->fields.faceSpriteList;
        if ( !faceSpriteList )
          goto LABEL_160;
        if ( v67 >= faceSpriteList->max_length )
          goto LABEL_163;
        v70 = (char)ServantStatusExplanationText;
        v71 = faceSpriteList->m_Items[v67];
        v72 = AtlasManager_TypeInfo;
        if ( (v70 & 1) != 0 )
        {
          if ( (WORD1(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !AtlasManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          }
          ServantStatusExplanationText = (UISprite_o *)AtlasManager__SetNoMountFace(v71, 0LL);
          faceFrameSpriteList = this->fields.faceFrameSpriteList;
          if ( !faceFrameSpriteList )
            goto LABEL_160;
          if ( v67 >= faceFrameSpriteList->max_length )
            goto LABEL_163;
          ServantStatusExplanationText = faceFrameSpriteList->m_Items[v67];
          if ( !ServantStatusExplanationText )
            goto LABEL_160;
          v74 = 0;
          goto LABEL_132;
        }
        if ( (WORD1(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) == 0 )
          goto LABEL_127;
LABEL_122:
        if ( !v72->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v72);
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
    if ( v67 >= iconSelectList->max_length )
      goto LABEL_163;
    v75 = v68[v67];
    if ( v75 >= 11 )
      v76 = v68[v67];
    else
      v76 = v75 + 1;
    SvtId = ServantStatusListViewItem__get_SvtId(item, 0LL);
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    v78 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(SvtId, 0LL);
    ServantStatusExplanationText = (UISprite_o *)MasterData_WarQuestSelectionMaster;
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_160;
    ServantStatusExplanationText = (UISprite_o *)ServantLimitSpoilerProtectionMaster__IsSpoilerLimitCount(
                                                   MasterData_WarQuestSelectionMaster,
                                                   v78,
                                                   v76,
                                                   0LL);
    if ( ((unsigned __int8)ServantStatusExplanationText & 1) != 0 )
    {
LABEL_110:
      ServantStatusExplanationText = (UISprite_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !ServantStatusExplanationText )
        goto LABEL_160;
      v79 = (ServantLimitImageMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)ServantStatusExplanationText,
                                           (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
      ServantStatusExplanationText = (UISprite_o *)ServantStatusListViewItem__get_SvtId(item, 0LL);
      if ( v67 >= iconSelectList->max_length )
        goto LABEL_163;
      if ( !v79 )
        goto LABEL_160;
      ServantStatusExplanationText = (UISprite_o *)ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                                     v79,
                                                     (int32_t)ServantStatusExplanationText,
                                                     v68[v67],
                                                     0LL);
      v80 = this->fields.faceSpriteList;
      if ( !v80 )
        goto LABEL_160;
      if ( v67 >= v80->max_length )
        goto LABEL_163;
      v81 = v80->m_Items[v67];
      v82 = (int)ServantStatusExplanationText;
      v83 = ServantStatusListViewItem__get_SvtId(item, 0LL);
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetFaceImage(v81, v83, v82, 0LL);
      ServantStatusExplanationText = (UISprite_o *)ServantStatusListViewItem__get_SvtId(item, 0LL);
      if ( v67 >= iconSelectList->max_length )
      {
LABEL_163:
        v104 = sub_B0D9A8(ServantStatusExplanationText);
        sub_B0D948(v104, 0LL);
      }
      if ( !v66 )
        goto LABEL_160;
      ServantCostumeMaster__TryGetEntity(v66, &entity, (int32_t)ServantStatusExplanationText, v68[v67], 0LL);
      ServantStatusListViewItemDrawFace__SetCostumeIcon(this, v67, entity, v84);
      goto LABEL_128;
    }
    v85 = this->fields.faceSpriteList;
    if ( !v85 )
      goto LABEL_160;
    if ( v67 >= v85->max_length )
      goto LABEL_163;
    v71 = v85->m_Items[v67];
    v72 = AtlasManager_TypeInfo;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 )
      goto LABEL_122;
LABEL_127:
    ServantStatusExplanationText = (UISprite_o *)AtlasManager__SetNotOpenFace(v71, 0LL);
LABEL_128:
    v86 = this->fields.faceFrameSpriteList;
    if ( !v86 )
      goto LABEL_160;
    if ( v67 >= v86->max_length )
      goto LABEL_163;
    ServantStatusExplanationText = v86->m_Items[v67];
    if ( !ServantStatusExplanationText )
      goto LABEL_160;
    v74 = 1;
LABEL_132:
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)ServantStatusExplanationText, v74, 0LL);
  }
  while ( v67++ < 3 );
  v88 = this->fields.faceSpriteList;
  if ( !v88 )
    goto LABEL_160;
  v89 = 0LL;
  v90 = &iconSelectList->m_Items[5];
  while ( 1 )
  {
    v91 = v89 + 4;
    if ( (int)v89 + 4 >= (signed int)v88->max_length )
      break;
    ServantStatusListViewItemDrawFace__SetCostumeIcon(this, v91, 0LL, v65);
    v92 = this->fields.faceSpriteList;
    if ( !v92 )
      goto LABEL_160;
    if ( v91 >= v92->max_length )
      goto LABEL_163;
    ServantStatusExplanationText = v92->m_Items[v89 + 4];
    if ( !ServantStatusExplanationText )
      goto LABEL_160;
    if ( (signed int)v91 >= (signed int)iconSelectList->max_length )
    {
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)ServantStatusExplanationText, 0, 0LL);
      v102 = this->fields.faceFrameSpriteList;
      if ( !v102 )
        goto LABEL_160;
      if ( v91 >= v102->max_length )
        goto LABEL_163;
      ServantStatusExplanationText = v102->m_Items[v89 + 4];
      if ( !ServantStatusExplanationText )
        goto LABEL_160;
      v101 = 0;
    }
    else
    {
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)ServantStatusExplanationText, 1, 0LL);
      ServantStatusExplanationText = (UISprite_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !ServantStatusExplanationText )
        goto LABEL_160;
      v93 = (ServantLimitImageMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)ServantStatusExplanationText,
                                           (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
      ServantStatusExplanationText = (UISprite_o *)ServantStatusListViewItem__get_SvtId(item, 0LL);
      if ( v91 >= iconSelectList->max_length )
        goto LABEL_163;
      if ( !v93 )
        goto LABEL_160;
      ServantStatusExplanationText = (UISprite_o *)ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                                     v93,
                                                     (int32_t)ServantStatusExplanationText,
                                                     v90[v89],
                                                     0LL);
      v94 = this->fields.faceSpriteList;
      if ( !v94 )
        goto LABEL_160;
      if ( v91 >= v94->max_length )
        goto LABEL_163;
      v95 = v94->m_Items[v89 + 4];
      v96 = (int)ServantStatusExplanationText;
      v97 = ServantStatusListViewItem__get_SvtId(item, 0LL);
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetFaceImage(v95, v97, v96, 0LL);
      ServantStatusExplanationText = (UISprite_o *)ServantStatusListViewItem__get_SvtId(item, 0LL);
      if ( v91 >= iconSelectList->max_length )
        goto LABEL_163;
      if ( !v66 )
        goto LABEL_160;
      v98 = ServantCostumeMaster__GetEntity(v66, (int32_t)ServantStatusExplanationText, v90[v89], 0LL);
      ServantStatusListViewItemDrawFace__SetCostumeIcon(this, v91, v98, v99);
      v100 = this->fields.faceFrameSpriteList;
      if ( !v100 )
        goto LABEL_160;
      if ( v91 >= v100->max_length )
        goto LABEL_163;
      ServantStatusExplanationText = v100->m_Items[v89 + 4];
      if ( !ServantStatusExplanationText )
        goto LABEL_160;
      v101 = 1;
    }
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)ServantStatusExplanationText, v101, 0LL);
    v88 = this->fields.faceSpriteList;
    ++v89;
    if ( !v88 )
      goto LABEL_160;
  }
  ServantStatusListViewItemDrawFace__SetupButton(this, item, 1, v65);
  ServantStatusListViewItemDrawFace__SetupMask(this, item, v103);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusListViewItemDrawFace__SetupButton(
        ServantStatusListViewItemDrawFace_o *this,
        ServantStatusListViewItem_o *item,
        bool isInit,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  UICommonButton_o *Instance; // x0
  _BOOL4 v17; // w23
  int32_t ConvertOverwriteIconLimitCount; // w0
  __int64 v19; // x1
  int32_t maxIconLimitCount; // w22
  LocalizationManager_c *v21; // x0
  float *static_fields; // x8
  float v23; // s8
  float v24; // s9
  float v25; // s10
  float v26; // s11
  struct System_Int32_array *v27; // x20
  float *v28; // x8
  float v29; // s12
  float v30; // s13
  float v31; // s14
  float v32; // s15
  ServantLimitImageMaster_o *v33; // x25
  int v34; // w8
  int v35; // w9
  _BOOL4 v36; // w19
  struct UIRangeLabel_array *charaLevelTitleRangeLabelList; // x10
  UIRangeLabel_o *v38; // x26
  int v39; // w20
  System_String_o *v40; // x0
  int v41; // w8
  float v42; // s3
  float v43; // s2
  float v44; // s1
  float v45; // s0
  System_String_o *v46; // x0
  System_String_o *v47; // x27
  System_String_o *v48; // x0
  struct UISprite_array *charaLevelSpriteList; // x8
  __int64 *v50; // x8
  struct UICommonButton_array *faceButtonList; // x8
  bool v52; // w19
  struct UICommonButton_array *charaLevelButtonList; // x8
  char v54; // w26
  bool v55; // w19
  struct UICommonButton_array *v56; // x8
  struct UILabel_array *limitCountSealLabel; // x8
  UnityEngine_Object_o *v58; // x26
  struct UnityEngine_GameObject_array *limitCountSealObjList; // x8
  UnityEngine_Object_o *v60; // x27
  System_String_o *v61; // x1
  bool v62; // nf
  struct UICommonButton_array *v63; // x8
  __int64 v64; // x22
  il2cpp_array_size_t v65; // w27
  int max_length; // w19
  _BOOL4 v67; // w20
  struct UIRangeLabel_array *v68; // x9
  UIRangeLabel_o *v69; // x25
  int v70; // w23
  int32_t v71; // w1
  ServantCostumeEntity_o *Entity; // x0
  __int64 v73; // x1
  System_String_o *v74; // x26
  int v75; // w8
  float v76; // s3
  float v77; // s2
  float v78; // s1
  float v79; // s0
  struct UISprite_array *v80; // x8
  __int64 *v81; // x8
  struct UICommonButton_array *v82; // x8
  bool v83; // w19
  struct UICommonButton_array *v84; // x8
  char v85; // w25
  bool v86; // w19
  struct UICommonButton_array *v87; // x8
  struct UICommonButton_array *v88; // x8
  __int64 v89; // x0
  ServantCostumeMaster_o *v90; // [xsp+8h] [xbp-B8h]
  bool v91; // [xsp+14h] [xbp-ACh]
  int32_t v92; // [xsp+18h] [xbp-A8h]
  struct System_Int32_array *iconSelectList; // [xsp+20h] [xbp-A0h]
  unsigned int v95; // [xsp+2Ch] [xbp-94h] BYREF
  UnityEngine_Color_o v96; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42186B0 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantCostumeMaster___, item);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v6);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v7);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v8);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_B0D8A4(&StringLiteral_8410/*"LIMIT_COUNT_SELECT_SEALED"*/, v10);
    sub_B0D8A4(&StringLiteral_12025/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_"*/, v11);
    sub_B0D8A4(&StringLiteral_17016/*"btn_bg_20"*/, v12);
    sub_B0D8A4(&StringLiteral_12026/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_CLOSE"*/, v13);
    sub_B0D8A4(&StringLiteral_1/*""*/, v14);
    sub_B0D8A4(&StringLiteral_17017/*"btn_bg_21"*/, v15);
    byte_42186B0 = 1;
  }
  v95 = 0;
  Instance = (UICommonButton_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_182;
  Instance = (UICommonButton_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                   (DataManager_o *)Instance,
                                   (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
  if ( !item )
    goto LABEL_182;
  v90 = (ServantCostumeMaster_o *)Instance;
  if ( item->fields.isConvertOverwriteImage )
  {
    v17 = 0;
  }
  else if ( item->fields.userSvtEntity )
  {
    v17 = 1;
  }
  else
  {
    v17 = item->fields.userSvtCollectionEntity != 0LL;
  }
  ConvertOverwriteIconLimitCount = ServantStatusListViewItem__get_ConvertOverwriteIconLimitCount(item, 0LL);
  maxIconLimitCount = item->fields.maxIconLimitCount;
  v92 = ConvertOverwriteIconLimitCount;
  iconSelectList = item->fields.iconSelectList;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  if ( !byte_4211435 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, v19);
    byte_4211435 = 1;
  }
  v21 = LocalizationManager_TypeInfo;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v21 = LocalizationManager_TypeInfo;
  }
  static_fields = (float *)v21->static_fields;
  v23 = static_fields[20];
  v24 = static_fields[21];
  v25 = static_fields[22];
  v26 = static_fields[23];
  if ( !byte_4211436 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, v19);
    v21 = LocalizationManager_TypeInfo;
    byte_4211436 = 1;
  }
  if ( (BYTE3(v21->vtable._0_Equals.methodPtr) & 4) != 0 )
  {
    v27 = iconSelectList;
    if ( !v21->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v21);
      v21 = LocalizationManager_TypeInfo;
    }
  }
  else
  {
    v27 = iconSelectList;
  }
  v28 = (float *)v21->static_fields;
  v29 = v28[24];
  v30 = v28[25];
  v31 = v28[26];
  v32 = v28[27];
  Instance = (UICommonButton_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_182:
    sub_B0D97C(Instance);
  Instance = (UICommonButton_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                   (DataManager_o *)Instance,
                                   (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  v95 = 0;
  v33 = (ServantLimitImageMaster_o *)Instance;
  v34 = 0;
  do
  {
    if ( v34 <= maxIconLimitCount )
    {
      if ( !v27 )
        goto LABEL_182;
      if ( v34 >= v27->max_length )
        goto LABEL_184;
      v36 = v27->m_Items[v34 + 1] == v92;
      v35 = 1;
    }
    else
    {
      v35 = 0;
      v36 = 0;
    }
    charaLevelTitleRangeLabelList = this->fields.charaLevelTitleRangeLabelList;
    if ( !charaLevelTitleRangeLabelList )
      goto LABEL_182;
    if ( v34 >= charaLevelTitleRangeLabelList->max_length )
    {
LABEL_184:
      v89 = sub_B0D9A8(Instance);
      sub_B0D948(v89, 0LL);
    }
    v38 = charaLevelTitleRangeLabelList->m_Items[v34];
    v39 = v35 & v17;
    if ( v35
      || (Instance = (UICommonButton_o *)ServantStatusListViewItem__get_IsMine(item, 0LL),
          ((unsigned __int8)Instance & 1) == 0) )
    {
      if ( !v38 )
        goto LABEL_182;
      v41 = v36 & v39;
      if ( (v36 & v39) != 0 )
        v42 = v32;
      else
        v42 = v26;
      if ( v41 )
        v43 = v31;
      else
        v43 = v25;
      if ( v41 )
        v44 = v30;
      else
        v44 = v24;
      if ( v41 )
        v45 = v29;
      else
        v45 = v23;
      UIRangeLabel__set_effectColor(v38, *(UnityEngine_Color_o *)(&v42 - 3), 0LL);
      v46 = System_Int32__ToString((int32_t)&v95, 0LL);
      v47 = System_String__Concat_43849904((System_String_o *)StringLiteral_12025/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_"*/, v46, 0LL);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v40 = v47;
    }
    else
    {
      if ( !v38 )
        goto LABEL_182;
      v96.fields.r = v23;
      v96.fields.g = v24;
      v96.fields.b = v25;
      v96.fields.a = v26;
      UIRangeLabel__set_effectColor(v38, v96, 0LL);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v40 = (System_String_o *)StringLiteral_12026/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_CLOSE"*/;
    }
    v48 = LocalizationManager__Get(v40, 0LL);
    UIRangeLabel__Set(v38, v48, 0LL, 1, 0, 0LL);
    charaLevelSpriteList = this->fields.charaLevelSpriteList;
    if ( !charaLevelSpriteList )
      goto LABEL_182;
    if ( v95 >= charaLevelSpriteList->max_length )
      goto LABEL_184;
    Instance = (UICommonButton_o *)charaLevelSpriteList->m_Items[v95];
    if ( !Instance )
      goto LABEL_182;
    v50 = &StringLiteral_17016/*"btn_bg_20"*/;
    if ( v36 )
      v50 = &StringLiteral_17017/*"btn_bg_21"*/;
    UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v50, 0LL);
    faceButtonList = this->fields.faceButtonList;
    if ( !faceButtonList )
      goto LABEL_182;
    if ( v95 >= faceButtonList->max_length )
      goto LABEL_184;
    Instance = faceButtonList->m_Items[v95];
    if ( (v36 & v39) != 0 )
    {
      if ( !Instance )
        goto LABEL_182;
      v52 = v39 == 0 || isInit;
      UICommonButton__SetColliderEnable(Instance, 0, v39 == 0 || isInit, 0LL);
      charaLevelButtonList = this->fields.charaLevelButtonList;
      if ( !charaLevelButtonList )
        goto LABEL_182;
      v27 = iconSelectList;
      if ( v95 >= charaLevelButtonList->max_length )
        goto LABEL_184;
      Instance = charaLevelButtonList->m_Items[v95];
      if ( !Instance )
        goto LABEL_182;
      UICommonButton__SetColliderEnable(Instance, 0, v52, 0LL);
    }
    else
    {
      if ( !Instance )
        goto LABEL_182;
      v54 = v39 & ~v36;
      v55 = v39 == 0 || isInit;
      UICommonButton__SetButtonEnable(Instance, v54, v39 == 0 || isInit, 0LL);
      v56 = this->fields.charaLevelButtonList;
      if ( !v56 )
        goto LABEL_182;
      v27 = iconSelectList;
      if ( v95 >= v56->max_length )
        goto LABEL_184;
      Instance = v56->m_Items[v95];
      if ( !Instance )
        goto LABEL_182;
      UICommonButton__SetButtonEnable(Instance, v54, v55, 0LL);
    }
    limitCountSealLabel = this->fields.limitCountSealLabel;
    if ( limitCountSealLabel )
    {
      if ( v95 >= limitCountSealLabel->max_length )
        goto LABEL_184;
      v58 = (UnityEngine_Object_o *)limitCountSealLabel->m_Items[v95];
    }
    else
    {
      v58 = 0LL;
    }
    limitCountSealObjList = this->fields.limitCountSealObjList;
    if ( limitCountSealObjList )
    {
      if ( v95 >= limitCountSealObjList->max_length )
        goto LABEL_184;
      v60 = (UnityEngine_Object_o *)limitCountSealObjList->m_Items[v95];
    }
    else
    {
      v60 = 0LL;
    }
    Instance = (UICommonButton_o *)ServantStatusListViewItem__get_SvtId(item, 0LL);
    if ( !v27 )
      goto LABEL_182;
    if ( v95 >= v27->max_length )
      goto LABEL_184;
    if ( !v33 )
      goto LABEL_182;
    if ( ServantLimitImageMaster__IsServantLimitCountSeal(v33, (int32_t)Instance, v27->m_Items[v95 + 1] + 1, 0LL) )
    {
      if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      Instance = (UICommonButton_o *)UnityEngine_Object__op_Inequality(v60, 0LL, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v60 )
          goto LABEL_182;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v60, 1, 0LL);
      }
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      Instance = (UICommonButton_o *)UnityEngine_Object__op_Inequality(v58, 0LL, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        Instance = (UICommonButton_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8410/*"LIMIT_COUNT_SELECT_SEALED"*/, 0LL);
        if ( !v58 )
          goto LABEL_182;
        v61 = (System_String_o *)Instance;
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
      Instance = (UICommonButton_o *)UnityEngine_Object__op_Inequality(v60, 0LL, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v60 )
          goto LABEL_182;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v60, 0, 0LL);
      }
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      Instance = (UICommonButton_o *)UnityEngine_Object__op_Inequality(v58, 0LL, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v58 )
          goto LABEL_182;
        v61 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_114:
        UILabel__set_text((UILabel_o *)v58, v61, 0LL);
      }
    }
    v62 = (int)(v95 - 3) < 0;
    v34 = ++v95;
  }
  while ( v62 != __OFSUB__(v95, 4) );
  v63 = this->fields.charaLevelButtonList;
  if ( !v63 )
    goto LABEL_182;
  v64 = 12LL;
  v91 = v17;
  while ( 1 )
  {
    v65 = v64 - 8;
    if ( (int)v64 - 8 >= (signed int)v63->max_length )
      break;
    max_length = v27->max_length;
    if ( (int)v65 >= max_length )
    {
      v67 = 0;
    }
    else
    {
      if ( v65 >= max_length )
        goto LABEL_184;
      v67 = *((_DWORD *)&v27->obj.klass + v64) == v92;
    }
    v68 = this->fields.charaLevelTitleRangeLabelList;
    if ( !v68 )
      goto LABEL_182;
    if ( v65 >= v68->max_length )
      goto LABEL_184;
    v69 = v68->m_Items[v65];
    v70 = v17 && (int)v65 < max_length;
    if ( (int)v65 >= max_length )
    {
      if ( !v69 )
        goto LABEL_182;
      UIRangeLabel__Clear(v68->m_Items[v65], 0LL);
    }
    else
    {
      Instance = (UICommonButton_o *)ServantStatusListViewItem__get_SvtId(item, 0LL);
      if ( v65 >= iconSelectList->max_length )
        goto LABEL_184;
      v71 = (int)Instance;
      Instance = (UICommonButton_o *)v90;
      if ( !v90 )
        goto LABEL_182;
      Entity = ServantCostumeMaster__GetEntity(v90, v71, iconSelectList->m_Items[v65 + 1], 0LL);
      if ( Entity )
      {
        Instance = (UICommonButton_o *)ServantCostumeEntity__getShortName(Entity, 0LL);
        v74 = (System_String_o *)Instance;
        if ( !v69 )
          goto LABEL_182;
      }
      else
      {
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        if ( !byte_4212885 )
        {
          sub_B0D8A4(&LocalizationManager_TypeInfo, v73);
          byte_4212885 = 1;
        }
        Instance = (UICommonButton_o *)LocalizationManager_TypeInfo;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          Instance = (UICommonButton_o *)LocalizationManager_TypeInfo;
        }
        v74 = *(System_String_o **)(*(_QWORD *)&Instance[1].fields.specifyPressedColor.fields.b + 32LL);
        if ( !v69 )
          goto LABEL_182;
      }
      v75 = v67 & v70;
      if ( (v67 & v70) != 0 )
        v76 = v32;
      else
        v76 = v26;
      if ( v75 )
        v77 = v31;
      else
        v77 = v25;
      if ( v75 )
        v78 = v30;
      else
        v78 = v24;
      if ( v75 )
        v79 = v29;
      else
        v79 = v23;
      UIRangeLabel__set_effectColor(v69, *(UnityEngine_Color_o *)(&v76 - 3), 0LL);
      UIRangeLabel__Set(v69, v74, 0LL, 1, 0, 0LL);
    }
    v80 = this->fields.charaLevelSpriteList;
    if ( !v80 )
      goto LABEL_182;
    if ( v65 >= v80->max_length )
      goto LABEL_184;
    Instance = (UICommonButton_o *)v80->m_Items[v65];
    if ( !Instance )
      goto LABEL_182;
    v81 = &StringLiteral_17016/*"btn_bg_20"*/;
    if ( v67 )
      v81 = &StringLiteral_17017/*"btn_bg_21"*/;
    UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v81, 0LL);
    v82 = this->fields.faceButtonList;
    if ( !v82 )
      goto LABEL_182;
    if ( v65 >= v82->max_length )
      goto LABEL_184;
    Instance = v82->m_Items[v65];
    if ( (v67 & v70) != 0 )
    {
      if ( !Instance )
        goto LABEL_182;
      v83 = v70 == 0 || isInit;
      UICommonButton__SetColliderEnable(Instance, 0, v70 == 0 || isInit, 0LL);
      v84 = this->fields.charaLevelButtonList;
      v27 = iconSelectList;
      if ( !v84 )
        goto LABEL_182;
      LOBYTE(v17) = v91;
      if ( v65 >= v84->max_length )
        goto LABEL_184;
      Instance = v84->m_Items[v65];
      if ( !Instance )
        goto LABEL_182;
      UICommonButton__SetColliderEnable(Instance, 0, v83, 0LL);
    }
    else if ( (int)v65 >= max_length )
    {
      if ( !Instance )
        goto LABEL_182;
      Instance = (UICommonButton_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      LOBYTE(v17) = v91;
      v27 = iconSelectList;
      if ( !Instance )
        goto LABEL_182;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
      v88 = this->fields.charaLevelButtonList;
      if ( !v88 )
        goto LABEL_182;
      if ( v65 >= v88->max_length )
        goto LABEL_184;
      Instance = v88->m_Items[v65];
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
      v85 = v70 & ~v67;
      v86 = v70 == 0 || isInit;
      UICommonButton__SetButtonEnable(Instance, v85, v70 == 0 || isInit, 0LL);
      v87 = this->fields.charaLevelButtonList;
      if ( !v87 )
        goto LABEL_182;
      LOBYTE(v17) = v91;
      v27 = iconSelectList;
      if ( v65 >= v87->max_length )
        goto LABEL_184;
      Instance = v87->m_Items[v65];
      if ( !Instance )
        goto LABEL_182;
      UICommonButton__SetButtonEnable(Instance, v85, v86, 0LL);
    }
    v63 = this->fields.charaLevelButtonList;
    ++v64;
    if ( !v63 )
      goto LABEL_182;
  }
}


void __fastcall ServantStatusListViewItemDrawFace__SetupMask(
        ServantStatusListViewItemDrawFace_o *this,
        ServantStatusListViewItem_o *item,
        const MethodInfo *method)
{
  ServantStatusListViewItemDrawFace_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct UISprite_o *baseSprite; // x8
  UnityEngine_GameObject_o *v10; // x21
  System_String_o *Empty; // x21
  __int64 *v12; // x8
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_42186B1 & 1) == 0 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, item);
    sub_B0D8A4(&OptionManager_TypeInfo, v5);
    sub_B0D8A4(&string_TypeInfo, v6);
    sub_B0D8A4(&StringLiteral_12047/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_INFO_ALL_SETTING_FACE"*/, v7);
    this = (ServantStatusListViewItemDrawFace_o *)sub_B0D8A4(&StringLiteral_12051/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_INFO_OWN_SETTING_FACE"*/, v8);
    byte_42186B1 = 1;
  }
  if ( !item )
    goto LABEL_37;
  if ( !item->fields.userSvtEntity )
    goto LABEL_25;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  if ( !OptionManager__GetRandomLimitCountOwn(0LL) && !item->fields.isEnableOwnRandomSetting )
  {
LABEL_25:
    this = (ServantStatusListViewItemDrawFace_o *)v4->fields.maskBase;
    if ( this )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      return;
    }
LABEL_37:
    sub_B0D97C(this);
  }
  this = (ServantStatusListViewItemDrawFace_o *)v4->fields.maskBase;
  if ( !this )
    goto LABEL_37;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  baseSprite = v4->fields.baseSprite;
  if ( !baseSprite )
    goto LABEL_37;
  this = (ServantStatusListViewItemDrawFace_o *)v4->fields.maskSprite;
  if ( !this )
    goto LABEL_37;
  UIWidget__set_height((UIWidget_o *)this, baseSprite->fields.mHeight, 0LL);
  this = (ServantStatusListViewItemDrawFace_o *)v4->fields.maskSprite;
  if ( !this )
    goto LABEL_37;
  UIWidget__ResizeCollider((UIWidget_o *)this, 0LL);
  this = (ServantStatusListViewItemDrawFace_o *)v4->fields.maskSprite;
  if ( !this )
    goto LABEL_37;
  this = (ServantStatusListViewItemDrawFace_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)this,
                                                  0LL);
  if ( !v4->fields.baseSprite )
    goto LABEL_37;
  v10 = (UnityEngine_GameObject_o *)this;
  this = (ServantStatusListViewItemDrawFace_o *)UnityEngine_Component__get_transform(
                                                  (UnityEngine_Component_o *)v4->fields.baseSprite,
                                                  0LL);
  if ( !this )
    goto LABEL_37;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  GameObjectExtensions__SetLocalPositionY(v10, localPosition.fields.y, 0LL);
  Empty = string_TypeInfo->static_fields->Empty;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  if ( OptionManager__GetRandomLimitCountOwn(0LL) )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v12 = &StringLiteral_12047/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_INFO_ALL_SETTING_FACE"*/;
LABEL_32:
    Empty = LocalizationManager__Get((System_String_o *)*v12, 0LL);
    goto LABEL_33;
  }
  if ( item->fields.isEnableOwnRandomSetting )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v12 = &StringLiteral_12051/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_INFO_OWN_SETTING_FACE"*/;
    goto LABEL_32;
  }
LABEL_33:
  this = (ServantStatusListViewItemDrawFace_o *)v4->fields.maskInfoLabel;
  if ( !this )
    goto LABEL_37;
  UILabel__set_overflowMethod((UILabel_o *)this, 2, 0LL);
  this = (ServantStatusListViewItemDrawFace_o *)v4->fields.maskInfoLabel;
  if ( !this )
    goto LABEL_37;
  UILabel__set_text((UILabel_o *)this, Empty, 0LL);
  this = (ServantStatusListViewItemDrawFace_o *)v4->fields.maskInfoLabel;
  if ( !this )
    goto LABEL_37;
  UILabel__SetCondensedScale((UILabel_o *)this, *(&v4->fields.MASK_LABEL_MAX_WIDTH + 1), 0LL);
}