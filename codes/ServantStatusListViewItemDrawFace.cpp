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
      v20 = sub_B2C460(this);
      sub_B2C400(v20, 0LL);
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
      sub_B2C434(this, method);
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
  if ( (byte_418A7C6 & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, *(_QWORD *)&index);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v7);
    sub_B2C35C(&StringLiteral_22475/*"svt_costume_icon_"*/, v8);
    this = (ServantStatusListViewItemDrawFace_o *)sub_B2C35C(&StringLiteral_1/*""*/, v9);
    byte_418A7C6 = 1;
  }
  faceSpriteCostumeIconList = v6->fields.faceSpriteCostumeIconList;
  if ( !faceSpriteCostumeIconList )
    goto LABEL_41;
  if ( faceSpriteCostumeIconList->max_length <= index )
  {
LABEL_42:
    v25 = sub_B2C460(this);
    sub_B2C400(v25, 0LL);
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
        v19 = System_String__Concat_44305532((System_String_o *)StringLiteral_22475/*"svt_costume_icon_"*/, v18, 0LL);
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
                    sub_B2C434(this, *(_QWORD *)&index);
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
  __int64 v24; // x1
  struct UserServantEntity_o *userSvtEntity; // x8
  __int64 v26; // x22
  __int64 v27; // x23
  UILabel_o *v28; // x22
  struct UserServantCollectionEntity_o *userSvtCollectionEntity; // x8
  UILabel_o *v30; // x22
  struct ServantLeaderInfo_o *servantLeaderInfo; // x8
  int32_t v32; // w22
  struct UILabel_o *v33; // x23
  System_String_o *mText; // x25
  System_String_o *v35; // x24
  Il2CppObject *LimitCountSealedServantName; // x0
  System_String_o *v37; // x0
  System_String_o *v38; // x0
  int v39; // w23
  struct System_Int32_array *iconSelectList; // x28
  __int64 v41; // x8
  signed __int64 maxIconLimitCount; // x22
  int32_t facePitch; // w9
  float x; // s8
  float y; // s9
  float z; // s10
  UnityEngine_Object_o *baseCollider; // x21
  int v48; // w8
  int v49; // w8
  int v50; // w8
  int v51; // w24
  float v52; // s9
  double v53; // d0
  double v54; // d0
  int v55; // w21
  float v56; // s8
  float v57; // s11
  float v58; // s9
  float v59; // s10
  float v60; // s8
  float v61; // s11
  float v62; // s9
  float v63; // s8
  float v64; // s10
  float v65; // s9
  const MethodInfo *v66; // x3
  ServantCostumeMaster_o *v67; // x21
  unsigned __int64 v68; // x24
  int32_t *v69; // x23
  struct UISprite_array *faceSpriteList; // x9
  char v71; // w8
  UISprite_o *v72; // x25
  AtlasManager_c *v73; // x0
  struct UISprite_array *faceFrameSpriteList; // x8
  bool v75; // w1
  int v76; // w8
  int32_t v77; // w25
  int32_t SvtId; // w26
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v79; // kr00_16
  ServantLimitImageMaster_o *v80; // x25
  struct UISprite_array *v81; // x8
  UISprite_o *v82; // x26
  int32_t v83; // w25
  int32_t v84; // w27
  const MethodInfo *v85; // x3
  struct UISprite_array *v86; // x8
  struct UISprite_array *v87; // x8
  struct UISprite_array *v89; // x8
  __int64 v90; // x26
  int32_t *v91; // x27
  unsigned int v92; // w22
  struct UISprite_array *v93; // x8
  ServantLimitImageMaster_o *v94; // x23
  struct UISprite_array *v95; // x8
  UISprite_o *v96; // x24
  int32_t v97; // w23
  int32_t v98; // w25
  ServantCostumeEntity_o *v99; // x0
  const MethodInfo *v100; // x3
  struct UISprite_array *v101; // x8
  bool v102; // w1
  struct UISprite_array *v103; // x8
  const MethodInfo *v104; // x2
  __int64 v105; // x0
  ServantLimitSpoilerProtectionMaster_o *MasterData_WarQuestSelectionMaster; // [xsp+8h] [xbp-88h]
  int32_t v107; // [xsp+14h] [xbp-7Ch]
  ServantCostumeEntity_o *entity; // [xsp+18h] [xbp-78h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v109; // 0:x0.16
  UnityEngine_Vector3_o v110; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v111; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v112; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v113; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_418A7C5 & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, item);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantCostumeMaster___, v7);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v8);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___, v9);
    sub_B2C35C(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v10);
    sub_B2C35C(&DataManager_TypeInfo, v11);
    sub_B2C35C(&LocalizationManager_TypeInfo, v12);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v13);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
    sub_B2C35C(&OptionManager_TypeInfo, v15);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_B2C35C(&StringLiteral_11968/*"SERVANT_STATUS_EXPLANATION_FACE"*/, v17);
    sub_B2C35C(&StringLiteral_11970/*"SERVANT_STATUS_EXPLANATION_FACE3"*/, v18);
    sub_B2C35C(&StringLiteral_11969/*"SERVANT_STATUS_EXPLANATION_FACE2"*/, v19);
    sub_B2C35C(&StringLiteral_11971/*"SERVANT_STATUS_EXPLANATION_FACE_LIMIT_COUNT_SEALED_MSG"*/, v20);
    byte_418A7C5 = 1;
  }
  entity = 0LL;
  ServantStatusListViewItemDraw__SetItem((ServantStatusListViewItemDraw_o *)this, item, mode, 0LL);
  if ( !item || !mode )
    return;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (ServantLimitImageMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  if ( item->fields.userSvtEntity )
  {
    explanationLabel = this->fields.explanationLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    ServantStatusExplanationText = (UISprite_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11968/*"SERVANT_STATUS_EXPLANATION_FACE"*/, 0LL);
    if ( !explanationLabel )
      goto LABEL_160;
    UILabel__set_text(explanationLabel, (System_String_o *)ServantStatusExplanationText, 0LL);
    userSvtEntity = item->fields.userSvtEntity;
    if ( !userSvtEntity )
      goto LABEL_160;
    v27 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
    v26 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
  }
  else if ( item->fields.userSvtCollectionEntity )
  {
    v28 = this->fields.explanationLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    ServantStatusExplanationText = (UISprite_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11969/*"SERVANT_STATUS_EXPLANATION_FACE2"*/, 0LL);
    if ( !v28 )
      goto LABEL_160;
    UILabel__set_text(v28, (System_String_o *)ServantStatusExplanationText, 0LL);
    userSvtCollectionEntity = item->fields.userSvtCollectionEntity;
    if ( !userSvtCollectionEntity )
      goto LABEL_160;
    v27 = *(_QWORD *)&userSvtCollectionEntity->fields.svtId.fields.currentCryptoKey;
    v26 = *(_QWORD *)&userSvtCollectionEntity->fields.svtId.fields.fakeValue;
  }
  else
  {
    v30 = this->fields.explanationLabel;
    if ( !item->fields.servantLeaderInfo )
    {
      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      ServantStatusExplanationText = (UISprite_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11970/*"SERVANT_STATUS_EXPLANATION_FACE3"*/, 0LL);
      if ( !v30 )
        goto LABEL_160;
      UILabel__set_text(v30, (System_String_o *)ServantStatusExplanationText, 0LL);
      goto LABEL_42;
    }
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    ServantStatusExplanationText = (UISprite_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11970/*"SERVANT_STATUS_EXPLANATION_FACE3"*/, 0LL);
    if ( !v30 )
      goto LABEL_160;
    UILabel__set_text(v30, (System_String_o *)ServantStatusExplanationText, 0LL);
    servantLeaderInfo = item->fields.servantLeaderInfo;
    if ( !servantLeaderInfo )
      goto LABEL_160;
    v27 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.currentCryptoKey;
    v26 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.fakeValue;
  }
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v109.fields.currentCryptoKey = v27;
  *(_QWORD *)&v109.fields.fakeValue = v26;
  ServantStatusExplanationText = (UISprite_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                                 v109,
                                                 0LL);
  if ( !(_DWORD)ServantStatusExplanationText )
    goto LABEL_42;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_160;
  v32 = (int)ServantStatusExplanationText;
  if ( !ServantLimitImageMaster__IsServantLimitCountSeal(
          Master_WarQuestSelectionMaster,
          (int32_t)ServantStatusExplanationText,
          3,
          0LL) )
  {
LABEL_42:
    v39 = 0;
    goto LABEL_43;
  }
  ServantStatusExplanationText = (UISprite_o *)ServantLimitImageMaster__GetServantStatusExplanationText(
                                                 Master_WarQuestSelectionMaster,
                                                 (System_String_o *)StringLiteral_11971/*"SERVANT_STATUS_EXPLANATION_FACE_LIMIT_COUNT_SEALED_MSG"*/,
                                                 v32,
                                                 0LL);
  v33 = this->fields.explanationLabel;
  if ( !v33 )
    goto LABEL_160;
  mText = v33->fields.mText;
  v35 = (System_String_o *)ServantStatusExplanationText;
  LimitCountSealedServantName = (Il2CppObject *)ServantLimitImageMaster__GetLimitCountSealedServantName(
                                                  Master_WarQuestSelectionMaster,
                                                  v32,
                                                  3,
                                                  0LL);
  v37 = System_String__Format(v35, LimitCountSealedServantName, 0LL);
  v38 = System_String__Concat_44305532(mText, v37, 0LL);
  UILabel__set_text(v33, v38, 0LL);
  v39 = 1;
LABEL_43:
  ServantStatusExplanationText = (UISprite_o *)ServantStatusListViewItem__get_ConvertOverwriteIconLimitCount(item, 0LL);
  iconSelectList = item->fields.iconSelectList;
  v107 = (int)ServantStatusExplanationText;
  if ( !iconSelectList )
    goto LABEL_160;
  v41 = *(_QWORD *)&iconSelectList->max_length;
  maxIconLimitCount = item->fields.maxIconLimitCount;
  if ( (int)v41 < 5 )
    facePitch = 0;
  else
    facePitch = this->fields.facePitch;
  x = this->fields.baseSize.fields.x;
  y = this->fields.baseSize.fields.y;
  z = this->fields.baseSize.fields.z;
  baseCollider = (UnityEngine_Object_o *)this->fields.baseCollider;
  v48 = (int)v41 / 4;
  if ( (*(_QWORD *)&iconSelectList->max_length & 3LL) != 0 )
    ++v48;
  if ( v48 < 3 )
    v49 = 1;
  else
    v49 = v48 - 1;
  v50 = facePitch * v49;
  if ( v39 )
    v51 = v50 + 32;
  else
    v51 = v50;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v52 = y + (float)v51;
  if ( UnityEngine_Object__op_Inequality(baseCollider, 0LL, 0LL) )
  {
    ServantStatusExplanationText = (UISprite_o *)this->fields.baseCollider;
    if ( !ServantStatusExplanationText )
      goto LABEL_160;
    v110.fields.x = x;
    v110.fields.y = v52;
    v110.fields.z = z;
    UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)ServantStatusExplanationText, v110, 0LL);
  }
  ServantStatusExplanationText = this->fields.baseSprite;
  if ( !ServantStatusExplanationText )
    goto LABEL_160;
  v53 = x;
  if ( x == INFINITY )
    v53 = -x;
  UIWidget__set_width((UIWidget_o *)ServantStatusExplanationText, (int)v53, 0LL);
  ServantStatusExplanationText = this->fields.baseSprite;
  if ( !ServantStatusExplanationText )
    goto LABEL_160;
  v54 = v52;
  if ( v52 == INFINITY )
    v54 = -INFINITY;
  UIWidget__set_height((UIWidget_o *)ServantStatusExplanationText, (int)v54, 0LL);
  ServantStatusExplanationText = this->fields.titleSprite;
  v55 = v51 >= 0 ? v51 : v51 + 1;
  if ( !ServantStatusExplanationText )
    goto LABEL_160;
  v56 = this->fields.titleBasePosition.fields.x;
  v57 = this->fields.titleBasePosition.fields.y;
  v58 = this->fields.titleBasePosition.fields.z;
  ServantStatusExplanationText = (UISprite_o *)UnityEngine_Component__get_transform(
                                                 (UnityEngine_Component_o *)ServantStatusExplanationText,
                                                 0LL);
  if ( !ServantStatusExplanationText )
    goto LABEL_160;
  v59 = (float)(v55 >> 1);
  v111.fields.y = v57 + v59;
  v111.fields.x = v56;
  v111.fields.z = v58;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)ServantStatusExplanationText, v111, 0LL);
  ServantStatusExplanationText = (UISprite_o *)this->fields.faceBase;
  if ( !ServantStatusExplanationText )
    goto LABEL_160;
  v60 = this->fields.faceBasePosition.fields.x;
  v61 = this->fields.faceBasePosition.fields.y;
  v62 = this->fields.faceBasePosition.fields.z;
  ServantStatusExplanationText = (UISprite_o *)UnityEngine_GameObject__get_transform(
                                                 (UnityEngine_GameObject_o *)ServantStatusExplanationText,
                                                 0LL);
  if ( !ServantStatusExplanationText )
    goto LABEL_160;
  v112.fields.y = v61 + v59;
  v112.fields.x = v60;
  v112.fields.z = v62;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)ServantStatusExplanationText, v112, 0LL);
  ServantStatusExplanationText = (UISprite_o *)this->fields.explanationLabel;
  v63 = v39
      ? (float)(this->fields.explanationBasePosition.fields.y - v59) + 16.0
      : this->fields.explanationBasePosition.fields.y - v59;
  if ( !ServantStatusExplanationText )
    goto LABEL_160;
  v64 = this->fields.explanationBasePosition.fields.x;
  v65 = this->fields.explanationBasePosition.fields.z;
  ServantStatusExplanationText = (UISprite_o *)UnityEngine_Component__get_transform(
                                                 (UnityEngine_Component_o *)ServantStatusExplanationText,
                                                 0LL);
  if ( !ServantStatusExplanationText
    || (v113.fields.x = v64,
        v113.fields.y = v63,
        v113.fields.z = v65,
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)ServantStatusExplanationText, v113, 0LL),
        (ServantStatusExplanationText = (UISprite_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (MasterData_WarQuestSelectionMaster = (ServantLimitSpoilerProtectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)ServantStatusExplanationText,
                                                                                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___),
        (ServantStatusExplanationText = (UISprite_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL) )
  {
LABEL_160:
    sub_B2C434(ServantStatusExplanationText, v24);
  }
  v67 = (ServantCostumeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    (DataManager_o *)ServantStatusExplanationText,
                                    (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
  v68 = 0LL;
  v69 = &iconSelectList->m_Items[1];
  do
  {
    ServantStatusListViewItemDrawFace__SetCostumeIcon(this, v68, 0LL, v66);
    if ( (__int64)v68 > maxIconLimitCount )
      goto LABEL_86;
    ServantStatusExplanationText = (UISprite_o *)ServantStatusListViewItem__get_IsMine(item, 0LL);
    if ( ((unsigned __int8)ServantStatusExplanationText & 1) == 0 )
    {
      if ( v68 >= iconSelectList->max_length )
        goto LABEL_163;
      if ( v69[v68] > v107 )
      {
LABEL_86:
        ServantStatusExplanationText = (UISprite_o *)ServantStatusListViewItem__get_IsMine(item, 0LL);
        faceSpriteList = this->fields.faceSpriteList;
        if ( !faceSpriteList )
          goto LABEL_160;
        if ( v68 >= faceSpriteList->max_length )
          goto LABEL_163;
        v71 = (char)ServantStatusExplanationText;
        v72 = faceSpriteList->m_Items[v68];
        v73 = AtlasManager_TypeInfo;
        if ( (v71 & 1) != 0 )
        {
          if ( (WORD1(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !AtlasManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          }
          ServantStatusExplanationText = (UISprite_o *)AtlasManager__SetNoMountFace(v72, 0LL);
          faceFrameSpriteList = this->fields.faceFrameSpriteList;
          if ( !faceFrameSpriteList )
            goto LABEL_160;
          if ( v68 >= faceFrameSpriteList->max_length )
            goto LABEL_163;
          ServantStatusExplanationText = faceFrameSpriteList->m_Items[v68];
          if ( !ServantStatusExplanationText )
            goto LABEL_160;
          v75 = 0;
          goto LABEL_132;
        }
        if ( (WORD1(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) == 0 )
          goto LABEL_127;
LABEL_122:
        if ( !v73->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v73);
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
    if ( v68 >= iconSelectList->max_length )
      goto LABEL_163;
    v76 = v69[v68];
    if ( v76 >= 11 )
      v77 = v69[v68];
    else
      v77 = v76 + 1;
    SvtId = ServantStatusListViewItem__get_SvtId(item, 0LL);
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    v79 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(SvtId, 0LL);
    v24 = *(_QWORD *)&v79.fields.fakeValue;
    ServantStatusExplanationText = (UISprite_o *)MasterData_WarQuestSelectionMaster;
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_160;
    ServantStatusExplanationText = (UISprite_o *)ServantLimitSpoilerProtectionMaster__IsSpoilerLimitCount(
                                                   MasterData_WarQuestSelectionMaster,
                                                   v79,
                                                   v77,
                                                   0LL);
    if ( ((unsigned __int8)ServantStatusExplanationText & 1) != 0 )
    {
LABEL_110:
      ServantStatusExplanationText = (UISprite_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !ServantStatusExplanationText )
        goto LABEL_160;
      v80 = (ServantLimitImageMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)ServantStatusExplanationText,
                                           (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
      ServantStatusExplanationText = (UISprite_o *)ServantStatusListViewItem__get_SvtId(item, 0LL);
      if ( v68 >= iconSelectList->max_length )
        goto LABEL_163;
      if ( !v80 )
        goto LABEL_160;
      ServantStatusExplanationText = (UISprite_o *)ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                                     v80,
                                                     (int32_t)ServantStatusExplanationText,
                                                     v69[v68],
                                                     0LL);
      v81 = this->fields.faceSpriteList;
      if ( !v81 )
        goto LABEL_160;
      if ( v68 >= v81->max_length )
        goto LABEL_163;
      v82 = v81->m_Items[v68];
      v83 = (int)ServantStatusExplanationText;
      v84 = ServantStatusListViewItem__get_SvtId(item, 0LL);
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetFaceImage(v82, v84, v83, 0LL);
      ServantStatusExplanationText = (UISprite_o *)ServantStatusListViewItem__get_SvtId(item, 0LL);
      if ( v68 >= iconSelectList->max_length )
      {
LABEL_163:
        v105 = sub_B2C460(ServantStatusExplanationText);
        sub_B2C400(v105, 0LL);
      }
      if ( !v67 )
        goto LABEL_160;
      ServantCostumeMaster__TryGetEntity(v67, &entity, (int32_t)ServantStatusExplanationText, v69[v68], 0LL);
      ServantStatusListViewItemDrawFace__SetCostumeIcon(this, v68, entity, v85);
      goto LABEL_128;
    }
    v86 = this->fields.faceSpriteList;
    if ( !v86 )
      goto LABEL_160;
    if ( v68 >= v86->max_length )
      goto LABEL_163;
    v72 = v86->m_Items[v68];
    v73 = AtlasManager_TypeInfo;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 )
      goto LABEL_122;
LABEL_127:
    ServantStatusExplanationText = (UISprite_o *)AtlasManager__SetNotOpenFace(v72, 0LL);
LABEL_128:
    v87 = this->fields.faceFrameSpriteList;
    if ( !v87 )
      goto LABEL_160;
    if ( v68 >= v87->max_length )
      goto LABEL_163;
    ServantStatusExplanationText = v87->m_Items[v68];
    if ( !ServantStatusExplanationText )
      goto LABEL_160;
    v75 = 1;
LABEL_132:
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)ServantStatusExplanationText, v75, 0LL);
  }
  while ( v68++ < 3 );
  v89 = this->fields.faceSpriteList;
  if ( !v89 )
    goto LABEL_160;
  v90 = 0LL;
  v91 = &iconSelectList->m_Items[5];
  while ( 1 )
  {
    v92 = v90 + 4;
    if ( (int)v90 + 4 >= (signed int)v89->max_length )
      break;
    ServantStatusListViewItemDrawFace__SetCostumeIcon(this, v92, 0LL, v66);
    v93 = this->fields.faceSpriteList;
    if ( !v93 )
      goto LABEL_160;
    if ( v92 >= v93->max_length )
      goto LABEL_163;
    ServantStatusExplanationText = v93->m_Items[v90 + 4];
    if ( !ServantStatusExplanationText )
      goto LABEL_160;
    if ( (signed int)v92 >= (signed int)iconSelectList->max_length )
    {
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)ServantStatusExplanationText, 0, 0LL);
      v103 = this->fields.faceFrameSpriteList;
      if ( !v103 )
        goto LABEL_160;
      if ( v92 >= v103->max_length )
        goto LABEL_163;
      ServantStatusExplanationText = v103->m_Items[v90 + 4];
      if ( !ServantStatusExplanationText )
        goto LABEL_160;
      v102 = 0;
    }
    else
    {
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)ServantStatusExplanationText, 1, 0LL);
      ServantStatusExplanationText = (UISprite_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !ServantStatusExplanationText )
        goto LABEL_160;
      v94 = (ServantLimitImageMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)ServantStatusExplanationText,
                                           (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
      ServantStatusExplanationText = (UISprite_o *)ServantStatusListViewItem__get_SvtId(item, 0LL);
      if ( v92 >= iconSelectList->max_length )
        goto LABEL_163;
      if ( !v94 )
        goto LABEL_160;
      ServantStatusExplanationText = (UISprite_o *)ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                                     v94,
                                                     (int32_t)ServantStatusExplanationText,
                                                     v91[v90],
                                                     0LL);
      v95 = this->fields.faceSpriteList;
      if ( !v95 )
        goto LABEL_160;
      if ( v92 >= v95->max_length )
        goto LABEL_163;
      v96 = v95->m_Items[v90 + 4];
      v97 = (int)ServantStatusExplanationText;
      v98 = ServantStatusListViewItem__get_SvtId(item, 0LL);
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetFaceImage(v96, v98, v97, 0LL);
      ServantStatusExplanationText = (UISprite_o *)ServantStatusListViewItem__get_SvtId(item, 0LL);
      if ( v92 >= iconSelectList->max_length )
        goto LABEL_163;
      if ( !v67 )
        goto LABEL_160;
      v99 = ServantCostumeMaster__GetEntity(v67, (int32_t)ServantStatusExplanationText, v91[v90], 0LL);
      ServantStatusListViewItemDrawFace__SetCostumeIcon(this, v92, v99, v100);
      v101 = this->fields.faceFrameSpriteList;
      if ( !v101 )
        goto LABEL_160;
      if ( v92 >= v101->max_length )
        goto LABEL_163;
      ServantStatusExplanationText = v101->m_Items[v90 + 4];
      if ( !ServantStatusExplanationText )
        goto LABEL_160;
      v102 = 1;
    }
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)ServantStatusExplanationText, v102, 0LL);
    v89 = this->fields.faceSpriteList;
    ++v90;
    if ( !v89 )
      goto LABEL_160;
  }
  ServantStatusListViewItemDrawFace__SetupButton(this, item, 1, v66);
  ServantStatusListViewItemDrawFace__SetupMask(this, item, v104);
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
  __int64 v17; // x1
  _BOOL4 v18; // w23
  int32_t ConvertOverwriteIconLimitCount; // w0
  __int64 v20; // x1
  int32_t maxIconLimitCount; // w22
  LocalizationManager_c *v22; // x0
  float *static_fields; // x8
  float v24; // s8
  float v25; // s9
  float v26; // s10
  float v27; // s11
  struct System_Int32_array *v28; // x20
  float *v29; // x8
  float v30; // s12
  float v31; // s13
  float v32; // s14
  float v33; // s15
  ServantLimitImageMaster_o *v34; // x25
  int v35; // w8
  int v36; // w9
  _BOOL4 v37; // w19
  struct UIRangeLabel_array *charaLevelTitleRangeLabelList; // x10
  UIRangeLabel_o *v39; // x26
  int v40; // w20
  System_String_o *v41; // x0
  int v42; // w8
  float v43; // s3
  float v44; // s2
  float v45; // s1
  float v46; // s0
  System_String_o *v47; // x0
  System_String_o *v48; // x27
  System_String_o *v49; // x0
  struct UISprite_array *charaLevelSpriteList; // x8
  __int64 *v51; // x8
  struct UICommonButton_array *faceButtonList; // x8
  bool v53; // w19
  struct UICommonButton_array *charaLevelButtonList; // x8
  char v55; // w26
  bool v56; // w19
  struct UICommonButton_array *v57; // x8
  struct UILabel_array *limitCountSealLabel; // x8
  UnityEngine_Object_o *v59; // x26
  struct UnityEngine_GameObject_array *limitCountSealObjList; // x8
  UnityEngine_Object_o *v61; // x27
  System_String_o *v62; // x1
  bool v63; // nf
  struct UICommonButton_array *v64; // x8
  __int64 v65; // x22
  il2cpp_array_size_t v66; // w27
  int max_length; // w19
  _BOOL4 v68; // w20
  struct UIRangeLabel_array *v69; // x9
  UIRangeLabel_o *v70; // x25
  int v71; // w23
  ServantCostumeEntity_o *Entity; // x0
  System_String_o *v73; // x26
  int v74; // w8
  float v75; // s3
  float v76; // s2
  float v77; // s1
  float v78; // s0
  struct UISprite_array *v79; // x8
  __int64 *v80; // x8
  struct UICommonButton_array *v81; // x8
  bool v82; // w19
  struct UICommonButton_array *v83; // x8
  char v84; // w25
  bool v85; // w19
  struct UICommonButton_array *v86; // x8
  struct UICommonButton_array *v87; // x8
  __int64 v88; // x0
  ServantCostumeMaster_o *v89; // [xsp+8h] [xbp-B8h]
  bool v90; // [xsp+14h] [xbp-ACh]
  int32_t v91; // [xsp+18h] [xbp-A8h]
  struct System_Int32_array *iconSelectList; // [xsp+20h] [xbp-A0h]
  unsigned int v94; // [xsp+2Ch] [xbp-94h] BYREF
  UnityEngine_Color_o v95; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_418A7C7 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantCostumeMaster___, item);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v6);
    sub_B2C35C(&LocalizationManager_TypeInfo, v7);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v8);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_B2C35C(&StringLiteral_8389/*"LIMIT_COUNT_SELECT_SEALED"*/, v10);
    sub_B2C35C(&StringLiteral_11988/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_"*/, v11);
    sub_B2C35C(&StringLiteral_16965/*"btn_bg_20"*/, v12);
    sub_B2C35C(&StringLiteral_11989/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_CLOSE"*/, v13);
    sub_B2C35C(&StringLiteral_1/*""*/, v14);
    sub_B2C35C(&StringLiteral_16966/*"btn_bg_21"*/, v15);
    byte_418A7C7 = 1;
  }
  v94 = 0;
  Instance = (UICommonButton_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_182;
  Instance = (UICommonButton_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                   (DataManager_o *)Instance,
                                   (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
  if ( !item )
    goto LABEL_182;
  v89 = (ServantCostumeMaster_o *)Instance;
  if ( item->fields.isConvertOverwriteImage )
  {
    v18 = 0;
  }
  else if ( item->fields.userSvtEntity )
  {
    v18 = 1;
  }
  else
  {
    v18 = item->fields.userSvtCollectionEntity != 0LL;
  }
  ConvertOverwriteIconLimitCount = ServantStatusListViewItem__get_ConvertOverwriteIconLimitCount(item, 0LL);
  maxIconLimitCount = item->fields.maxIconLimitCount;
  v91 = ConvertOverwriteIconLimitCount;
  iconSelectList = item->fields.iconSelectList;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  if ( !byte_4184963 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, v20);
    byte_4184963 = 1;
  }
  v22 = LocalizationManager_TypeInfo;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v22 = LocalizationManager_TypeInfo;
  }
  static_fields = (float *)v22->static_fields;
  v24 = static_fields[20];
  v25 = static_fields[21];
  v26 = static_fields[22];
  v27 = static_fields[23];
  if ( !byte_4184964 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, v20);
    v22 = LocalizationManager_TypeInfo;
    byte_4184964 = 1;
  }
  if ( (BYTE3(v22->vtable._0_Equals.methodPtr) & 4) != 0 )
  {
    v28 = iconSelectList;
    if ( !v22->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v22);
      v22 = LocalizationManager_TypeInfo;
    }
  }
  else
  {
    v28 = iconSelectList;
  }
  v29 = (float *)v22->static_fields;
  v30 = v29[24];
  v31 = v29[25];
  v32 = v29[26];
  v33 = v29[27];
  Instance = (UICommonButton_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_182:
    sub_B2C434(Instance, v17);
  Instance = (UICommonButton_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                   (DataManager_o *)Instance,
                                   (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  v94 = 0;
  v34 = (ServantLimitImageMaster_o *)Instance;
  v35 = 0;
  do
  {
    if ( v35 <= maxIconLimitCount )
    {
      if ( !v28 )
        goto LABEL_182;
      if ( v35 >= v28->max_length )
        goto LABEL_184;
      v37 = v28->m_Items[v35 + 1] == v91;
      v36 = 1;
    }
    else
    {
      v36 = 0;
      v37 = 0;
    }
    charaLevelTitleRangeLabelList = this->fields.charaLevelTitleRangeLabelList;
    if ( !charaLevelTitleRangeLabelList )
      goto LABEL_182;
    if ( v35 >= charaLevelTitleRangeLabelList->max_length )
    {
LABEL_184:
      v88 = sub_B2C460(Instance);
      sub_B2C400(v88, 0LL);
    }
    v39 = charaLevelTitleRangeLabelList->m_Items[v35];
    v40 = v36 & v18;
    if ( v36
      || (Instance = (UICommonButton_o *)ServantStatusListViewItem__get_IsMine(item, 0LL),
          ((unsigned __int8)Instance & 1) == 0) )
    {
      if ( !v39 )
        goto LABEL_182;
      v42 = v37 & v40;
      if ( (v37 & v40) != 0 )
        v43 = v33;
      else
        v43 = v27;
      if ( v42 )
        v44 = v32;
      else
        v44 = v26;
      if ( v42 )
        v45 = v31;
      else
        v45 = v25;
      if ( v42 )
        v46 = v30;
      else
        v46 = v24;
      UIRangeLabel__set_effectColor(v39, *(UnityEngine_Color_o *)(&v43 - 3), 0LL);
      v47 = System_Int32__ToString((int32_t)&v94, 0LL);
      v48 = System_String__Concat_44305532((System_String_o *)StringLiteral_11988/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_"*/, v47, 0LL);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v41 = v48;
    }
    else
    {
      if ( !v39 )
        goto LABEL_182;
      v95.fields.r = v24;
      v95.fields.g = v25;
      v95.fields.b = v26;
      v95.fields.a = v27;
      UIRangeLabel__set_effectColor(v39, v95, 0LL);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v41 = (System_String_o *)StringLiteral_11989/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_CLOSE"*/;
    }
    v49 = LocalizationManager__Get(v41, 0LL);
    UIRangeLabel__Set(v39, v49, 0LL, 1, 0, 0LL);
    charaLevelSpriteList = this->fields.charaLevelSpriteList;
    if ( !charaLevelSpriteList )
      goto LABEL_182;
    if ( v94 >= charaLevelSpriteList->max_length )
      goto LABEL_184;
    Instance = (UICommonButton_o *)charaLevelSpriteList->m_Items[v94];
    if ( !Instance )
      goto LABEL_182;
    v51 = &StringLiteral_16965/*"btn_bg_20"*/;
    if ( v37 )
      v51 = &StringLiteral_16966/*"btn_bg_21"*/;
    UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v51, 0LL);
    faceButtonList = this->fields.faceButtonList;
    if ( !faceButtonList )
      goto LABEL_182;
    if ( v94 >= faceButtonList->max_length )
      goto LABEL_184;
    Instance = faceButtonList->m_Items[v94];
    if ( (v37 & v40) != 0 )
    {
      if ( !Instance )
        goto LABEL_182;
      v53 = v40 == 0 || isInit;
      UICommonButton__SetColliderEnable(Instance, 0, v40 == 0 || isInit, 0LL);
      charaLevelButtonList = this->fields.charaLevelButtonList;
      if ( !charaLevelButtonList )
        goto LABEL_182;
      v28 = iconSelectList;
      if ( v94 >= charaLevelButtonList->max_length )
        goto LABEL_184;
      Instance = charaLevelButtonList->m_Items[v94];
      if ( !Instance )
        goto LABEL_182;
      UICommonButton__SetColliderEnable(Instance, 0, v53, 0LL);
    }
    else
    {
      if ( !Instance )
        goto LABEL_182;
      v55 = v40 & ~v37;
      v56 = v40 == 0 || isInit;
      UICommonButton__SetButtonEnable(Instance, v55, v40 == 0 || isInit, 0LL);
      v57 = this->fields.charaLevelButtonList;
      if ( !v57 )
        goto LABEL_182;
      v28 = iconSelectList;
      if ( v94 >= v57->max_length )
        goto LABEL_184;
      Instance = v57->m_Items[v94];
      if ( !Instance )
        goto LABEL_182;
      UICommonButton__SetButtonEnable(Instance, v55, v56, 0LL);
    }
    limitCountSealLabel = this->fields.limitCountSealLabel;
    if ( limitCountSealLabel )
    {
      if ( v94 >= limitCountSealLabel->max_length )
        goto LABEL_184;
      v59 = (UnityEngine_Object_o *)limitCountSealLabel->m_Items[v94];
    }
    else
    {
      v59 = 0LL;
    }
    limitCountSealObjList = this->fields.limitCountSealObjList;
    if ( limitCountSealObjList )
    {
      if ( v94 >= limitCountSealObjList->max_length )
        goto LABEL_184;
      v61 = (UnityEngine_Object_o *)limitCountSealObjList->m_Items[v94];
    }
    else
    {
      v61 = 0LL;
    }
    Instance = (UICommonButton_o *)ServantStatusListViewItem__get_SvtId(item, 0LL);
    if ( !v28 )
      goto LABEL_182;
    if ( v94 >= v28->max_length )
      goto LABEL_184;
    if ( !v34 )
      goto LABEL_182;
    if ( ServantLimitImageMaster__IsServantLimitCountSeal(v34, (int32_t)Instance, v28->m_Items[v94 + 1] + 1, 0LL) )
    {
      if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      Instance = (UICommonButton_o *)UnityEngine_Object__op_Inequality(v61, 0LL, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v61 )
          goto LABEL_182;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v61, 1, 0LL);
      }
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      Instance = (UICommonButton_o *)UnityEngine_Object__op_Inequality(v59, 0LL, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        Instance = (UICommonButton_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8389/*"LIMIT_COUNT_SELECT_SEALED"*/, 0LL);
        if ( !v59 )
          goto LABEL_182;
        v62 = (System_String_o *)Instance;
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
      Instance = (UICommonButton_o *)UnityEngine_Object__op_Inequality(v61, 0LL, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v61 )
          goto LABEL_182;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v61, 0, 0LL);
      }
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      Instance = (UICommonButton_o *)UnityEngine_Object__op_Inequality(v59, 0LL, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v59 )
          goto LABEL_182;
        v62 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_114:
        UILabel__set_text((UILabel_o *)v59, v62, 0LL);
      }
    }
    v63 = (int)(v94 - 3) < 0;
    v35 = ++v94;
  }
  while ( v63 != __OFSUB__(v94, 4) );
  v64 = this->fields.charaLevelButtonList;
  if ( !v64 )
    goto LABEL_182;
  v65 = 12LL;
  v90 = v18;
  while ( 1 )
  {
    v66 = v65 - 8;
    if ( (int)v65 - 8 >= (signed int)v64->max_length )
      break;
    max_length = v28->max_length;
    if ( (int)v66 >= max_length )
    {
      v68 = 0;
    }
    else
    {
      if ( v66 >= max_length )
        goto LABEL_184;
      v68 = *((_DWORD *)&v28->obj.klass + v65) == v91;
    }
    v69 = this->fields.charaLevelTitleRangeLabelList;
    if ( !v69 )
      goto LABEL_182;
    if ( v66 >= v69->max_length )
      goto LABEL_184;
    v70 = v69->m_Items[v66];
    v71 = v18 && (int)v66 < max_length;
    if ( (int)v66 >= max_length )
    {
      if ( !v70 )
        goto LABEL_182;
      UIRangeLabel__Clear(v69->m_Items[v66], 0LL);
    }
    else
    {
      Instance = (UICommonButton_o *)ServantStatusListViewItem__get_SvtId(item, 0LL);
      if ( v66 >= iconSelectList->max_length )
        goto LABEL_184;
      v17 = (unsigned int)Instance;
      Instance = (UICommonButton_o *)v89;
      if ( !v89 )
        goto LABEL_182;
      Entity = ServantCostumeMaster__GetEntity(v89, v17, iconSelectList->m_Items[v66 + 1], 0LL);
      if ( Entity )
      {
        Instance = (UICommonButton_o *)ServantCostumeEntity__getShortName(Entity, 0LL);
        v73 = (System_String_o *)Instance;
        if ( !v70 )
          goto LABEL_182;
      }
      else
      {
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        if ( !byte_4185BC0 )
        {
          sub_B2C35C(&LocalizationManager_TypeInfo, v17);
          byte_4185BC0 = 1;
        }
        Instance = (UICommonButton_o *)LocalizationManager_TypeInfo;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          Instance = (UICommonButton_o *)LocalizationManager_TypeInfo;
        }
        v73 = *(System_String_o **)(*(_QWORD *)&Instance[1].fields.specifyPressedColor.fields.b + 32LL);
        if ( !v70 )
          goto LABEL_182;
      }
      v74 = v68 & v71;
      if ( (v68 & v71) != 0 )
        v75 = v33;
      else
        v75 = v27;
      if ( v74 )
        v76 = v32;
      else
        v76 = v26;
      if ( v74 )
        v77 = v31;
      else
        v77 = v25;
      if ( v74 )
        v78 = v30;
      else
        v78 = v24;
      UIRangeLabel__set_effectColor(v70, *(UnityEngine_Color_o *)(&v75 - 3), 0LL);
      UIRangeLabel__Set(v70, v73, 0LL, 1, 0, 0LL);
    }
    v79 = this->fields.charaLevelSpriteList;
    if ( !v79 )
      goto LABEL_182;
    if ( v66 >= v79->max_length )
      goto LABEL_184;
    Instance = (UICommonButton_o *)v79->m_Items[v66];
    if ( !Instance )
      goto LABEL_182;
    v80 = &StringLiteral_16965/*"btn_bg_20"*/;
    if ( v68 )
      v80 = &StringLiteral_16966/*"btn_bg_21"*/;
    UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v80, 0LL);
    v81 = this->fields.faceButtonList;
    if ( !v81 )
      goto LABEL_182;
    if ( v66 >= v81->max_length )
      goto LABEL_184;
    Instance = v81->m_Items[v66];
    if ( (v68 & v71) != 0 )
    {
      if ( !Instance )
        goto LABEL_182;
      v82 = v71 == 0 || isInit;
      UICommonButton__SetColliderEnable(Instance, 0, v71 == 0 || isInit, 0LL);
      v83 = this->fields.charaLevelButtonList;
      v28 = iconSelectList;
      if ( !v83 )
        goto LABEL_182;
      LOBYTE(v18) = v90;
      if ( v66 >= v83->max_length )
        goto LABEL_184;
      Instance = v83->m_Items[v66];
      if ( !Instance )
        goto LABEL_182;
      UICommonButton__SetColliderEnable(Instance, 0, v82, 0LL);
    }
    else if ( (int)v66 >= max_length )
    {
      if ( !Instance )
        goto LABEL_182;
      Instance = (UICommonButton_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      LOBYTE(v18) = v90;
      v28 = iconSelectList;
      if ( !Instance )
        goto LABEL_182;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
      v87 = this->fields.charaLevelButtonList;
      if ( !v87 )
        goto LABEL_182;
      if ( v66 >= v87->max_length )
        goto LABEL_184;
      Instance = v87->m_Items[v66];
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
      v84 = v71 & ~v68;
      v85 = v71 == 0 || isInit;
      UICommonButton__SetButtonEnable(Instance, v84, v71 == 0 || isInit, 0LL);
      v86 = this->fields.charaLevelButtonList;
      if ( !v86 )
        goto LABEL_182;
      LOBYTE(v18) = v90;
      v28 = iconSelectList;
      if ( v66 >= v86->max_length )
        goto LABEL_184;
      Instance = v86->m_Items[v66];
      if ( !Instance )
        goto LABEL_182;
      UICommonButton__SetButtonEnable(Instance, v84, v85, 0LL);
    }
    v64 = this->fields.charaLevelButtonList;
    ++v65;
    if ( !v64 )
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
  if ( (byte_418A7C8 & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, item);
    sub_B2C35C(&OptionManager_TypeInfo, v5);
    sub_B2C35C(&string_TypeInfo, v6);
    sub_B2C35C(&StringLiteral_12009/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_INFO_ALL_SETTING_FACE"*/, v7);
    this = (ServantStatusListViewItemDrawFace_o *)sub_B2C35C(&StringLiteral_12013/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_INFO_OWN_SETTING_FACE"*/, v8);
    byte_418A7C8 = 1;
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
    sub_B2C434(this, item);
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
    v12 = &StringLiteral_12009/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_INFO_ALL_SETTING_FACE"*/;
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
    v12 = &StringLiteral_12013/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_INFO_OWN_SETTING_FACE"*/;
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