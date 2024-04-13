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
      v20 = sub_B5D6C8(this);
      sub_B5D668(v20, 0LL);
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
      sub_B5D69C(this, method);
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  struct UISprite_array *faceSpriteCostumeIconList; // x8
  UnityEngine_Object_o *v17; // x22
  struct UISprite_array *v18; // x8
  struct UISprite_array *v19; // x8
  int32_t v20; // w21
  int32_t iconId; // t1
  struct UISprite_array *v22; // x8
  UISprite_o *v23; // x22
  System_String_o *v24; // x0
  System_String_o *v25; // x21
  struct UISprite_array *v26; // x8
  struct UISprite_array *v27; // x8
  struct UISprite_array *v28; // x8
  struct UISprite_array *v29; // x8
  struct UISprite_array *v30; // x8
  __int64 v31; // x0
  UnityEngine_Vector3_o v32; // 0:s0.4,4:s1.4,8:s2.4

  v6 = this;
  if ( (byte_42ECB5A & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, index, (_DWORD)svtCostumeEntity, method);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&StringLiteral_22780/*"svt_costume_icon_"*/, v10, v11, v12);
    this = (ServantStatusListViewItemDrawFace_o *)sub_B5D5C4(&StringLiteral_1/*""*/, v13, v14, v15);
    byte_42ECB5A = 1;
  }
  faceSpriteCostumeIconList = v6->fields.faceSpriteCostumeIconList;
  if ( !faceSpriteCostumeIconList )
    goto LABEL_41;
  if ( faceSpriteCostumeIconList->max_length <= index )
  {
LABEL_42:
    v31 = sub_B5D6C8(this);
    sub_B5D668(v31, 0LL);
  }
  v17 = (UnityEngine_Object_o *)faceSpriteCostumeIconList->m_Items[index];
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (ServantStatusListViewItemDrawFace_o *)UnityEngine_Object__op_Inequality(v17, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v18 = v6->fields.faceSpriteCostumeIconList;
    if ( !v18 )
      goto LABEL_41;
    if ( v18->max_length <= index )
      goto LABEL_42;
    this = (ServantStatusListViewItemDrawFace_o *)v18->m_Items[index];
    if ( !this )
      goto LABEL_41;
    UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    v19 = v6->fields.faceSpriteCostumeIconList;
    if ( !v19 )
      goto LABEL_41;
    if ( v19->max_length <= index )
      goto LABEL_42;
    this = (ServantStatusListViewItemDrawFace_o *)v19->m_Items[index];
    if ( !this )
      goto LABEL_41;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0LL);
    if ( svtCostumeEntity )
    {
      iconId = svtCostumeEntity->fields.iconId;
      v20 = (_DWORD)svtCostumeEntity + 92;
      if ( iconId >= 1 )
      {
        v22 = v6->fields.faceSpriteCostumeIconList;
        if ( !v22 )
          goto LABEL_41;
        if ( v22->max_length <= index )
          goto LABEL_42;
        v23 = v22->m_Items[index];
        v24 = System_Int32__ToString(v20, 0LL);
        v25 = System_String__Concat_44577788((System_String_o *)StringLiteral_22780/*"svt_costume_icon_"*/, v24, 0LL);
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        this = (ServantStatusListViewItemDrawFace_o *)AtlasManager__SetEventSprite(v23, v25, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          v26 = v6->fields.faceSpriteCostumeIconList;
          if ( !v26 )
            goto LABEL_41;
          if ( v26->max_length > index )
          {
            this = (ServantStatusListViewItemDrawFace_o *)v26->m_Items[index];
            if ( !this )
              goto LABEL_41;
            UIWidget__set_pivot((UIWidget_o *)this, 4, 0LL);
            v27 = v6->fields.faceSpriteCostumeIconList;
            if ( !v27 )
              goto LABEL_41;
            if ( v27->max_length > index )
            {
              this = (ServantStatusListViewItemDrawFace_o *)v27->m_Items[index];
              if ( !this )
                goto LABEL_41;
              UIWidget__set_width((UIWidget_o *)this, 32, 0LL);
              v28 = v6->fields.faceSpriteCostumeIconList;
              if ( !v28 )
                goto LABEL_41;
              if ( v28->max_length > index )
              {
                this = (ServantStatusListViewItemDrawFace_o *)v28->m_Items[index];
                if ( !this )
                  goto LABEL_41;
                UIWidget__set_height((UIWidget_o *)this, 32, 0LL);
                v29 = v6->fields.faceSpriteCostumeIconList;
                if ( !v29 )
                  goto LABEL_41;
                if ( v29->max_length > index )
                {
                  this = (ServantStatusListViewItemDrawFace_o *)v29->m_Items[index];
                  if ( !this )
                    goto LABEL_41;
                  this = (ServantStatusListViewItemDrawFace_o *)UnityEngine_Component__get_transform(
                                                                  (UnityEngine_Component_o *)this,
                                                                  0LL);
                  if ( !this )
                    goto LABEL_41;
                  v32.fields.x = -42.0;
                  v32.fields.z = 0.0;
                  v32.fields.y = -42.0;
                  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v32, 0LL);
                  v30 = v6->fields.faceSpriteCostumeIconList;
                  if ( !v30 )
                    goto LABEL_41;
                  if ( v30->max_length > index )
                  {
                    this = (ServantStatusListViewItemDrawFace_o *)v30->m_Items[index];
                    if ( this )
                    {
                      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 1, 0LL);
                      return;
                    }
LABEL_41:
                    sub_B5D69C(this, *(_QWORD *)&index);
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  int v43; // w1
  int v44; // w2
  __int64 v45; // x3
  int v46; // w1
  int v47; // w2
  __int64 v48; // x3
  ServantLimitImageMaster_o *Master_WarQuestSelectionMaster; // x21
  UILabel_o *explanationLabel; // x22
  UISprite_o *ServantStatusExplanationText; // x0
  __int64 v52; // x1
  struct UserServantEntity_o *userSvtEntity; // x8
  __int64 v54; // x22
  __int64 v55; // x23
  UILabel_o *v56; // x22
  struct UserServantCollectionEntity_o *userSvtCollectionEntity; // x8
  UILabel_o *v58; // x22
  struct ServantLeaderInfo_o *servantLeaderInfo; // x8
  int32_t v60; // w22
  struct UILabel_o *v61; // x23
  System_String_o *mText; // x25
  System_String_o *v63; // x24
  Il2CppObject *LimitCountSealedServantName; // x0
  System_String_o *v65; // x0
  System_String_o *v66; // x0
  int v67; // w23
  struct System_Int32_array *iconSelectList; // x28
  __int64 v69; // x8
  signed __int64 maxIconLimitCount; // x22
  int32_t facePitch; // w9
  float x; // s8
  float y; // s9
  float z; // s10
  UnityEngine_Object_o *baseCollider; // x21
  int v76; // w8
  int v77; // w8
  int v78; // w8
  int v79; // w24
  float v80; // s9
  double v81; // d0
  double v82; // d0
  int v83; // w21
  float v84; // s8
  float v85; // s11
  float v86; // s9
  float v87; // s10
  float v88; // s8
  float v89; // s11
  float v90; // s9
  float v91; // s8
  float v92; // s10
  float v93; // s9
  const MethodInfo *v94; // x3
  ServantCostumeMaster_o *v95; // x21
  unsigned __int64 v96; // x24
  int32_t *v97; // x23
  struct UISprite_array *faceSpriteList; // x9
  char v99; // w8
  UISprite_o *v100; // x25
  AtlasManager_c *v101; // x0
  struct UISprite_array *faceFrameSpriteList; // x8
  bool v103; // w1
  int v104; // w8
  int32_t v105; // w25
  int32_t SvtId; // w26
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v107; // kr00_16
  ServantLimitImageMaster_o *v108; // x25
  struct UISprite_array *v109; // x8
  UISprite_o *v110; // x26
  int32_t v111; // w25
  int32_t v112; // w27
  const MethodInfo *v113; // x3
  struct UISprite_array *v114; // x8
  struct UISprite_array *v115; // x8
  struct UISprite_array *v117; // x8
  __int64 v118; // x26
  int32_t *v119; // x27
  unsigned int v120; // w22
  struct UISprite_array *v121; // x8
  ServantLimitImageMaster_o *v122; // x23
  struct UISprite_array *v123; // x8
  UISprite_o *v124; // x24
  int32_t v125; // w23
  int32_t v126; // w25
  ServantCostumeEntity_o *v127; // x0
  const MethodInfo *v128; // x3
  struct UISprite_array *v129; // x8
  bool v130; // w1
  struct UISprite_array *v131; // x8
  const MethodInfo *v132; // x2
  __int64 v133; // x0
  ServantLimitSpoilerProtectionMaster_o *MasterData_WarQuestSelectionMaster; // [xsp+8h] [xbp-88h]
  int32_t v135; // [xsp+14h] [xbp-7Ch]
  ServantCostumeEntity_o *entity; // [xsp+18h] [xbp-78h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v137; // 0:x0.16
  UnityEngine_Vector3_o v138; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v139; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v140; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v141; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42ECB59 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)item, mode, method);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantCostumeMaster___, v7, v8, v9);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v10, v11, v12);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___, v13, v14, v15);
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v16, v17, v18);
    sub_B5D5C4(&DataManager_TypeInfo, v19, v20, v21);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v22, v23, v24);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v25, v26, v27);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v28, v29, v30);
    sub_B5D5C4(&OptionManager_TypeInfo, v31, v32, v33);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v34, v35, v36);
    sub_B5D5C4(&StringLiteral_12117/*"SERVANT_STATUS_EXPLANATION_FACE"*/, v37, v38, v39);
    sub_B5D5C4(&StringLiteral_12119/*"SERVANT_STATUS_EXPLANATION_FACE3"*/, v40, v41, v42);
    sub_B5D5C4(&StringLiteral_12118/*"SERVANT_STATUS_EXPLANATION_FACE2"*/, v43, v44, v45);
    sub_B5D5C4(&StringLiteral_12120/*"SERVANT_STATUS_EXPLANATION_FACE_LIMIT_COUNT_SEALED_MSG"*/, v46, v47, v48);
    byte_42ECB59 = 1;
  }
  entity = 0LL;
  ServantStatusListViewItemDraw__SetItem((ServantStatusListViewItemDraw_o *)this, item, mode, 0LL);
  if ( !item || !mode )
    return;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (ServantLimitImageMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  if ( item->fields.userSvtEntity )
  {
    explanationLabel = this->fields.explanationLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    ServantStatusExplanationText = (UISprite_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12117/*"SERVANT_STATUS_EXPLANATION_FACE"*/, 0LL);
    if ( !explanationLabel )
      goto LABEL_160;
    UILabel__set_text(explanationLabel, (System_String_o *)ServantStatusExplanationText, 0LL);
    userSvtEntity = item->fields.userSvtEntity;
    if ( !userSvtEntity )
      goto LABEL_160;
    v55 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
    v54 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
  }
  else if ( item->fields.userSvtCollectionEntity )
  {
    v56 = this->fields.explanationLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    ServantStatusExplanationText = (UISprite_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12118/*"SERVANT_STATUS_EXPLANATION_FACE2"*/, 0LL);
    if ( !v56 )
      goto LABEL_160;
    UILabel__set_text(v56, (System_String_o *)ServantStatusExplanationText, 0LL);
    userSvtCollectionEntity = item->fields.userSvtCollectionEntity;
    if ( !userSvtCollectionEntity )
      goto LABEL_160;
    v55 = *(_QWORD *)&userSvtCollectionEntity->fields.svtId.fields.currentCryptoKey;
    v54 = *(_QWORD *)&userSvtCollectionEntity->fields.svtId.fields.fakeValue;
  }
  else
  {
    v58 = this->fields.explanationLabel;
    if ( !item->fields.servantLeaderInfo )
    {
      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      ServantStatusExplanationText = (UISprite_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12119/*"SERVANT_STATUS_EXPLANATION_FACE3"*/, 0LL);
      if ( !v58 )
        goto LABEL_160;
      UILabel__set_text(v58, (System_String_o *)ServantStatusExplanationText, 0LL);
      goto LABEL_42;
    }
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    ServantStatusExplanationText = (UISprite_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12119/*"SERVANT_STATUS_EXPLANATION_FACE3"*/, 0LL);
    if ( !v58 )
      goto LABEL_160;
    UILabel__set_text(v58, (System_String_o *)ServantStatusExplanationText, 0LL);
    servantLeaderInfo = item->fields.servantLeaderInfo;
    if ( !servantLeaderInfo )
      goto LABEL_160;
    v55 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.currentCryptoKey;
    v54 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.fakeValue;
  }
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v137.fields.currentCryptoKey = v55;
  *(_QWORD *)&v137.fields.fakeValue = v54;
  ServantStatusExplanationText = (UISprite_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                                 v137,
                                                 0LL);
  if ( !(_DWORD)ServantStatusExplanationText )
    goto LABEL_42;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_160;
  v60 = (int)ServantStatusExplanationText;
  if ( !ServantLimitImageMaster__IsServantLimitCountSeal(
          Master_WarQuestSelectionMaster,
          (int32_t)ServantStatusExplanationText,
          3,
          0LL) )
  {
LABEL_42:
    v67 = 0;
    goto LABEL_43;
  }
  ServantStatusExplanationText = (UISprite_o *)ServantLimitImageMaster__GetServantStatusExplanationText(
                                                 Master_WarQuestSelectionMaster,
                                                 (System_String_o *)StringLiteral_12120/*"SERVANT_STATUS_EXPLANATION_FACE_LIMIT_COUNT_SEALED_MSG"*/,
                                                 v60,
                                                 0LL);
  v61 = this->fields.explanationLabel;
  if ( !v61 )
    goto LABEL_160;
  mText = v61->fields.mText;
  v63 = (System_String_o *)ServantStatusExplanationText;
  LimitCountSealedServantName = (Il2CppObject *)ServantLimitImageMaster__GetLimitCountSealedServantName(
                                                  Master_WarQuestSelectionMaster,
                                                  v60,
                                                  3,
                                                  0LL);
  v65 = System_String__Format(v63, LimitCountSealedServantName, 0LL);
  v66 = System_String__Concat_44577788(mText, v65, 0LL);
  UILabel__set_text(v61, v66, 0LL);
  v67 = 1;
LABEL_43:
  ServantStatusExplanationText = (UISprite_o *)ServantStatusListViewItem__get_ConvertOverwriteIconLimitCount(item, 0LL);
  iconSelectList = item->fields.iconSelectList;
  v135 = (int)ServantStatusExplanationText;
  if ( !iconSelectList )
    goto LABEL_160;
  v69 = *(_QWORD *)&iconSelectList->max_length;
  maxIconLimitCount = item->fields.maxIconLimitCount;
  if ( (int)v69 < 5 )
    facePitch = 0;
  else
    facePitch = this->fields.facePitch;
  x = this->fields.baseSize.fields.x;
  y = this->fields.baseSize.fields.y;
  z = this->fields.baseSize.fields.z;
  baseCollider = (UnityEngine_Object_o *)this->fields.baseCollider;
  v76 = (int)v69 / 4;
  if ( (*(_QWORD *)&iconSelectList->max_length & 3LL) != 0 )
    ++v76;
  if ( v76 < 3 )
    v77 = 1;
  else
    v77 = v76 - 1;
  v78 = facePitch * v77;
  if ( v67 )
    v79 = v78 + 32;
  else
    v79 = v78;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v80 = y + (float)v79;
  if ( UnityEngine_Object__op_Inequality(baseCollider, 0LL, 0LL) )
  {
    ServantStatusExplanationText = (UISprite_o *)this->fields.baseCollider;
    if ( !ServantStatusExplanationText )
      goto LABEL_160;
    v138.fields.x = x;
    v138.fields.y = v80;
    v138.fields.z = z;
    UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)ServantStatusExplanationText, v138, 0LL);
  }
  ServantStatusExplanationText = this->fields.baseSprite;
  if ( !ServantStatusExplanationText )
    goto LABEL_160;
  v81 = x;
  if ( x == INFINITY )
    v81 = -x;
  UIWidget__set_width((UIWidget_o *)ServantStatusExplanationText, (int)v81, 0LL);
  ServantStatusExplanationText = this->fields.baseSprite;
  if ( !ServantStatusExplanationText )
    goto LABEL_160;
  v82 = v80;
  if ( v80 == INFINITY )
    v82 = -INFINITY;
  UIWidget__set_height((UIWidget_o *)ServantStatusExplanationText, (int)v82, 0LL);
  ServantStatusExplanationText = this->fields.titleSprite;
  v83 = v79 >= 0 ? v79 : v79 + 1;
  if ( !ServantStatusExplanationText )
    goto LABEL_160;
  v84 = this->fields.titleBasePosition.fields.x;
  v85 = this->fields.titleBasePosition.fields.y;
  v86 = this->fields.titleBasePosition.fields.z;
  ServantStatusExplanationText = (UISprite_o *)UnityEngine_Component__get_transform(
                                                 (UnityEngine_Component_o *)ServantStatusExplanationText,
                                                 0LL);
  if ( !ServantStatusExplanationText )
    goto LABEL_160;
  v87 = (float)(v83 >> 1);
  v139.fields.y = v85 + v87;
  v139.fields.x = v84;
  v139.fields.z = v86;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)ServantStatusExplanationText, v139, 0LL);
  ServantStatusExplanationText = (UISprite_o *)this->fields.faceBase;
  if ( !ServantStatusExplanationText )
    goto LABEL_160;
  v88 = this->fields.faceBasePosition.fields.x;
  v89 = this->fields.faceBasePosition.fields.y;
  v90 = this->fields.faceBasePosition.fields.z;
  ServantStatusExplanationText = (UISprite_o *)UnityEngine_GameObject__get_transform(
                                                 (UnityEngine_GameObject_o *)ServantStatusExplanationText,
                                                 0LL);
  if ( !ServantStatusExplanationText )
    goto LABEL_160;
  v140.fields.y = v89 + v87;
  v140.fields.x = v88;
  v140.fields.z = v90;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)ServantStatusExplanationText, v140, 0LL);
  ServantStatusExplanationText = (UISprite_o *)this->fields.explanationLabel;
  v91 = v67
      ? (float)(this->fields.explanationBasePosition.fields.y - v87) + 16.0
      : this->fields.explanationBasePosition.fields.y - v87;
  if ( !ServantStatusExplanationText )
    goto LABEL_160;
  v92 = this->fields.explanationBasePosition.fields.x;
  v93 = this->fields.explanationBasePosition.fields.z;
  ServantStatusExplanationText = (UISprite_o *)UnityEngine_Component__get_transform(
                                                 (UnityEngine_Component_o *)ServantStatusExplanationText,
                                                 0LL);
  if ( !ServantStatusExplanationText
    || (v141.fields.x = v92,
        v141.fields.y = v91,
        v141.fields.z = v93,
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)ServantStatusExplanationText, v141, 0LL),
        (ServantStatusExplanationText = (UISprite_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (MasterData_WarQuestSelectionMaster = (ServantLimitSpoilerProtectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)ServantStatusExplanationText,
                                                                                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___),
        (ServantStatusExplanationText = (UISprite_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL) )
  {
LABEL_160:
    sub_B5D69C(ServantStatusExplanationText, v52);
  }
  v95 = (ServantCostumeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    (DataManager_o *)ServantStatusExplanationText,
                                    (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
  v96 = 0LL;
  v97 = &iconSelectList->m_Items[1];
  do
  {
    ServantStatusListViewItemDrawFace__SetCostumeIcon(this, v96, 0LL, v94);
    if ( (__int64)v96 > maxIconLimitCount )
      goto LABEL_86;
    ServantStatusExplanationText = (UISprite_o *)ServantStatusListViewItem__get_IsMine(item, 0LL);
    if ( ((unsigned __int8)ServantStatusExplanationText & 1) == 0 )
    {
      if ( v96 >= iconSelectList->max_length )
        goto LABEL_163;
      if ( v97[v96] > v135 )
      {
LABEL_86:
        ServantStatusExplanationText = (UISprite_o *)ServantStatusListViewItem__get_IsMine(item, 0LL);
        faceSpriteList = this->fields.faceSpriteList;
        if ( !faceSpriteList )
          goto LABEL_160;
        if ( v96 >= faceSpriteList->max_length )
          goto LABEL_163;
        v99 = (char)ServantStatusExplanationText;
        v100 = faceSpriteList->m_Items[v96];
        v101 = AtlasManager_TypeInfo;
        if ( (v99 & 1) != 0 )
        {
          if ( (WORD1(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !AtlasManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          }
          ServantStatusExplanationText = (UISprite_o *)AtlasManager__SetNoMountFace(v100, 0LL);
          faceFrameSpriteList = this->fields.faceFrameSpriteList;
          if ( !faceFrameSpriteList )
            goto LABEL_160;
          if ( v96 >= faceFrameSpriteList->max_length )
            goto LABEL_163;
          ServantStatusExplanationText = faceFrameSpriteList->m_Items[v96];
          if ( !ServantStatusExplanationText )
            goto LABEL_160;
          v103 = 0;
          goto LABEL_132;
        }
        if ( (WORD1(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) == 0 )
          goto LABEL_127;
LABEL_122:
        if ( !v101->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v101);
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
    if ( v96 >= iconSelectList->max_length )
      goto LABEL_163;
    v104 = v97[v96];
    if ( v104 >= 11 )
      v105 = v97[v96];
    else
      v105 = v104 + 1;
    SvtId = ServantStatusListViewItem__get_SvtId(item, 0LL);
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    v107 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(SvtId, 0LL);
    v52 = *(_QWORD *)&v107.fields.fakeValue;
    ServantStatusExplanationText = (UISprite_o *)MasterData_WarQuestSelectionMaster;
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_160;
    ServantStatusExplanationText = (UISprite_o *)ServantLimitSpoilerProtectionMaster__IsSpoilerLimitCount(
                                                   MasterData_WarQuestSelectionMaster,
                                                   v107,
                                                   v105,
                                                   0LL);
    if ( ((unsigned __int8)ServantStatusExplanationText & 1) != 0 )
    {
LABEL_110:
      ServantStatusExplanationText = (UISprite_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !ServantStatusExplanationText )
        goto LABEL_160;
      v108 = (ServantLimitImageMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                            (DataManager_o *)ServantStatusExplanationText,
                                            (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
      ServantStatusExplanationText = (UISprite_o *)ServantStatusListViewItem__get_SvtId(item, 0LL);
      if ( v96 >= iconSelectList->max_length )
        goto LABEL_163;
      if ( !v108 )
        goto LABEL_160;
      ServantStatusExplanationText = (UISprite_o *)ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                                     v108,
                                                     (int32_t)ServantStatusExplanationText,
                                                     v97[v96],
                                                     0LL);
      v109 = this->fields.faceSpriteList;
      if ( !v109 )
        goto LABEL_160;
      if ( v96 >= v109->max_length )
        goto LABEL_163;
      v110 = v109->m_Items[v96];
      v111 = (int)ServantStatusExplanationText;
      v112 = ServantStatusListViewItem__get_SvtId(item, 0LL);
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetFaceImage(v110, v112, v111, 0LL);
      ServantStatusExplanationText = (UISprite_o *)ServantStatusListViewItem__get_SvtId(item, 0LL);
      if ( v96 >= iconSelectList->max_length )
      {
LABEL_163:
        v133 = sub_B5D6C8(ServantStatusExplanationText);
        sub_B5D668(v133, 0LL);
      }
      if ( !v95 )
        goto LABEL_160;
      ServantCostumeMaster__TryGetEntity(v95, &entity, (int32_t)ServantStatusExplanationText, v97[v96], 0LL);
      ServantStatusListViewItemDrawFace__SetCostumeIcon(this, v96, entity, v113);
      goto LABEL_128;
    }
    v114 = this->fields.faceSpriteList;
    if ( !v114 )
      goto LABEL_160;
    if ( v96 >= v114->max_length )
      goto LABEL_163;
    v100 = v114->m_Items[v96];
    v101 = AtlasManager_TypeInfo;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 )
      goto LABEL_122;
LABEL_127:
    ServantStatusExplanationText = (UISprite_o *)AtlasManager__SetNotOpenFace(v100, 0LL);
LABEL_128:
    v115 = this->fields.faceFrameSpriteList;
    if ( !v115 )
      goto LABEL_160;
    if ( v96 >= v115->max_length )
      goto LABEL_163;
    ServantStatusExplanationText = v115->m_Items[v96];
    if ( !ServantStatusExplanationText )
      goto LABEL_160;
    v103 = 1;
LABEL_132:
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)ServantStatusExplanationText, v103, 0LL);
  }
  while ( v96++ < 3 );
  v117 = this->fields.faceSpriteList;
  if ( !v117 )
    goto LABEL_160;
  v118 = 0LL;
  v119 = &iconSelectList->m_Items[5];
  while ( 1 )
  {
    v120 = v118 + 4;
    if ( (int)v118 + 4 >= (signed int)v117->max_length )
      break;
    ServantStatusListViewItemDrawFace__SetCostumeIcon(this, v120, 0LL, v94);
    v121 = this->fields.faceSpriteList;
    if ( !v121 )
      goto LABEL_160;
    if ( v120 >= v121->max_length )
      goto LABEL_163;
    ServantStatusExplanationText = v121->m_Items[v118 + 4];
    if ( !ServantStatusExplanationText )
      goto LABEL_160;
    if ( (signed int)v120 >= (signed int)iconSelectList->max_length )
    {
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)ServantStatusExplanationText, 0, 0LL);
      v131 = this->fields.faceFrameSpriteList;
      if ( !v131 )
        goto LABEL_160;
      if ( v120 >= v131->max_length )
        goto LABEL_163;
      ServantStatusExplanationText = v131->m_Items[v118 + 4];
      if ( !ServantStatusExplanationText )
        goto LABEL_160;
      v130 = 0;
    }
    else
    {
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)ServantStatusExplanationText, 1, 0LL);
      ServantStatusExplanationText = (UISprite_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !ServantStatusExplanationText )
        goto LABEL_160;
      v122 = (ServantLimitImageMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                            (DataManager_o *)ServantStatusExplanationText,
                                            (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
      ServantStatusExplanationText = (UISprite_o *)ServantStatusListViewItem__get_SvtId(item, 0LL);
      if ( v120 >= iconSelectList->max_length )
        goto LABEL_163;
      if ( !v122 )
        goto LABEL_160;
      ServantStatusExplanationText = (UISprite_o *)ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                                     v122,
                                                     (int32_t)ServantStatusExplanationText,
                                                     v119[v118],
                                                     0LL);
      v123 = this->fields.faceSpriteList;
      if ( !v123 )
        goto LABEL_160;
      if ( v120 >= v123->max_length )
        goto LABEL_163;
      v124 = v123->m_Items[v118 + 4];
      v125 = (int)ServantStatusExplanationText;
      v126 = ServantStatusListViewItem__get_SvtId(item, 0LL);
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetFaceImage(v124, v126, v125, 0LL);
      ServantStatusExplanationText = (UISprite_o *)ServantStatusListViewItem__get_SvtId(item, 0LL);
      if ( v120 >= iconSelectList->max_length )
        goto LABEL_163;
      if ( !v95 )
        goto LABEL_160;
      v127 = ServantCostumeMaster__GetEntity(v95, (int32_t)ServantStatusExplanationText, v119[v118], 0LL);
      ServantStatusListViewItemDrawFace__SetCostumeIcon(this, v120, v127, v128);
      v129 = this->fields.faceFrameSpriteList;
      if ( !v129 )
        goto LABEL_160;
      if ( v120 >= v129->max_length )
        goto LABEL_163;
      ServantStatusExplanationText = v129->m_Items[v118 + 4];
      if ( !ServantStatusExplanationText )
        goto LABEL_160;
      v130 = 1;
    }
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)ServantStatusExplanationText, v130, 0LL);
    v117 = this->fields.faceSpriteList;
    ++v118;
    if ( !v117 )
      goto LABEL_160;
  }
  ServantStatusListViewItemDrawFace__SetupButton(this, item, 1, v94);
  ServantStatusListViewItemDrawFace__SetupMask(this, item, v132);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusListViewItemDrawFace__SetupButton(
        ServantStatusListViewItemDrawFace_o *this,
        ServantStatusListViewItem_o *item,
        bool isInit,
        const MethodInfo *method)
{
  int v6; // w1
  char v7; // w2
  __int64 v8; // x3
  int v9; // w1
  char v10; // w2
  __int64 v11; // x3
  int v12; // w1
  char v13; // w2
  __int64 v14; // x3
  int v15; // w1
  char v16; // w2
  __int64 v17; // x3
  int v18; // w1
  char v19; // w2
  __int64 v20; // x3
  int v21; // w1
  char v22; // w2
  __int64 v23; // x3
  int v24; // w1
  char v25; // w2
  __int64 v26; // x3
  int v27; // w1
  char v28; // w2
  __int64 v29; // x3
  int v30; // w1
  char v31; // w2
  __int64 v32; // x3
  int v33; // w1
  char v34; // w2
  __int64 v35; // x3
  UICommonButton_o *Instance; // x0
  __int64 v37; // x1
  _BOOL4 v38; // w23
  int32_t ConvertOverwriteIconLimitCount; // w0
  int v40; // w1
  char v41; // w2
  __int64 v42; // x3
  int32_t maxIconLimitCount; // w22
  LocalizationManager_c *v44; // x0
  float *static_fields; // x8
  float v46; // s8
  float v47; // s9
  float v48; // s10
  float v49; // s11
  struct System_Int32_array *v50; // x20
  float *v51; // x8
  float v52; // s12
  float v53; // s13
  float v54; // s14
  float v55; // s15
  ServantLimitImageMaster_o *v56; // x25
  int v57; // w8
  int v58; // w9
  _BOOL4 v59; // w19
  struct UIRangeLabel_array *charaLevelTitleRangeLabelList; // x10
  UIRangeLabel_o *v61; // x26
  int v62; // w20
  System_String_o *v63; // x0
  int v64; // w8
  float v65; // s3
  float v66; // s2
  float v67; // s1
  float v68; // s0
  System_String_o *v69; // x0
  System_String_o *v70; // x27
  System_String_o *v71; // x0
  struct UISprite_array *charaLevelSpriteList; // x8
  __int64 *v73; // x8
  struct UICommonButton_array *faceButtonList; // x8
  bool v75; // w19
  struct UICommonButton_array *charaLevelButtonList; // x8
  char v77; // w26
  bool v78; // w19
  struct UICommonButton_array *v79; // x8
  struct UILabel_array *limitCountSealLabel; // x8
  UnityEngine_Object_o *v81; // x26
  struct UnityEngine_GameObject_array *limitCountSealObjList; // x8
  UnityEngine_Object_o *v83; // x27
  System_String_o *v84; // x1
  bool v85; // nf
  struct UICommonButton_array *v86; // x8
  __int64 v87; // x22
  il2cpp_array_size_t v88; // w27
  int max_length; // w19
  _BOOL4 v90; // w20
  struct UIRangeLabel_array *v91; // x9
  UIRangeLabel_o *v92; // x25
  int v93; // w23
  ServantCostumeEntity_o *Entity; // x0
  char v95; // w2
  __int64 v96; // x3
  System_String_o *v97; // x26
  int v98; // w8
  float v99; // s3
  float v100; // s2
  float v101; // s1
  float v102; // s0
  struct UISprite_array *v103; // x8
  __int64 *v104; // x8
  struct UICommonButton_array *v105; // x8
  bool v106; // w19
  struct UICommonButton_array *v107; // x8
  char v108; // w25
  bool v109; // w19
  struct UICommonButton_array *v110; // x8
  struct UICommonButton_array *v111; // x8
  __int64 v112; // x0
  ServantCostumeMaster_o *v113; // [xsp+8h] [xbp-B8h]
  bool v114; // [xsp+14h] [xbp-ACh]
  int32_t v115; // [xsp+18h] [xbp-A8h]
  struct System_Int32_array *iconSelectList; // [xsp+20h] [xbp-A0h]
  unsigned int v118; // [xsp+2Ch] [xbp-94h] BYREF
  UnityEngine_Color_o v119; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42ECB5B & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantCostumeMaster___, (_DWORD)item, isInit, method);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v6, v7, v8);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_8473/*"LIMIT_COUNT_SELECT_SEALED"*/, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_12137/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_"*/, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_17174/*"btn_bg_20"*/, v24, v25, v26);
    sub_B5D5C4(&StringLiteral_12138/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_CLOSE"*/, v27, v28, v29);
    sub_B5D5C4(&StringLiteral_1/*""*/, v30, v31, v32);
    sub_B5D5C4(&StringLiteral_17175/*"btn_bg_21"*/, v33, v34, v35);
    byte_42ECB5B = 1;
  }
  v118 = 0;
  Instance = (UICommonButton_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_182;
  Instance = (UICommonButton_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                   (DataManager_o *)Instance,
                                   (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
  if ( !item )
    goto LABEL_182;
  v113 = (ServantCostumeMaster_o *)Instance;
  if ( item->fields.isConvertOverwriteImage )
  {
    v38 = 0;
  }
  else if ( item->fields.userSvtEntity )
  {
    v38 = 1;
  }
  else
  {
    v38 = item->fields.userSvtCollectionEntity != 0LL;
  }
  ConvertOverwriteIconLimitCount = ServantStatusListViewItem__get_ConvertOverwriteIconLimitCount(item, 0LL);
  maxIconLimitCount = item->fields.maxIconLimitCount;
  v115 = ConvertOverwriteIconLimitCount;
  iconSelectList = item->fields.iconSelectList;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  if ( !byte_42E563C )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, v40, v41, v42);
    byte_42E563C = 1;
  }
  v44 = LocalizationManager_TypeInfo;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v44 = LocalizationManager_TypeInfo;
  }
  static_fields = (float *)v44->static_fields;
  v46 = static_fields[20];
  v47 = static_fields[21];
  v48 = static_fields[22];
  v49 = static_fields[23];
  if ( !byte_42E563D )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, v40, v41, v42);
    v44 = LocalizationManager_TypeInfo;
    byte_42E563D = 1;
  }
  if ( (BYTE3(v44->vtable._0_Equals.methodPtr) & 4) != 0 )
  {
    v50 = iconSelectList;
    if ( !v44->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v44);
      v44 = LocalizationManager_TypeInfo;
    }
  }
  else
  {
    v50 = iconSelectList;
  }
  v51 = (float *)v44->static_fields;
  v52 = v51[24];
  v53 = v51[25];
  v54 = v51[26];
  v55 = v51[27];
  Instance = (UICommonButton_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_182:
    sub_B5D69C(Instance, v37);
  Instance = (UICommonButton_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                   (DataManager_o *)Instance,
                                   (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  v118 = 0;
  v56 = (ServantLimitImageMaster_o *)Instance;
  v57 = 0;
  do
  {
    if ( v57 <= maxIconLimitCount )
    {
      if ( !v50 )
        goto LABEL_182;
      if ( v57 >= v50->max_length )
        goto LABEL_184;
      v59 = v50->m_Items[v57 + 1] == v115;
      v58 = 1;
    }
    else
    {
      v58 = 0;
      v59 = 0;
    }
    charaLevelTitleRangeLabelList = this->fields.charaLevelTitleRangeLabelList;
    if ( !charaLevelTitleRangeLabelList )
      goto LABEL_182;
    if ( v57 >= charaLevelTitleRangeLabelList->max_length )
    {
LABEL_184:
      v112 = sub_B5D6C8(Instance);
      sub_B5D668(v112, 0LL);
    }
    v61 = charaLevelTitleRangeLabelList->m_Items[v57];
    v62 = v58 & v38;
    if ( v58
      || (Instance = (UICommonButton_o *)ServantStatusListViewItem__get_IsMine(item, 0LL),
          ((unsigned __int8)Instance & 1) == 0) )
    {
      if ( !v61 )
        goto LABEL_182;
      v64 = v59 & v62;
      if ( (v59 & v62) != 0 )
        v65 = v55;
      else
        v65 = v49;
      if ( v64 )
        v66 = v54;
      else
        v66 = v48;
      if ( v64 )
        v67 = v53;
      else
        v67 = v47;
      if ( v64 )
        v68 = v52;
      else
        v68 = v46;
      UIRangeLabel__set_effectColor(v61, *(UnityEngine_Color_o *)(&v65 - 3), 0LL);
      v69 = System_Int32__ToString((int32_t)&v118, 0LL);
      v70 = System_String__Concat_44577788((System_String_o *)StringLiteral_12137/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_"*/, v69, 0LL);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v63 = v70;
    }
    else
    {
      if ( !v61 )
        goto LABEL_182;
      v119.fields.r = v46;
      v119.fields.g = v47;
      v119.fields.b = v48;
      v119.fields.a = v49;
      UIRangeLabel__set_effectColor(v61, v119, 0LL);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v63 = (System_String_o *)StringLiteral_12138/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_CLOSE"*/;
    }
    v71 = LocalizationManager__Get(v63, 0LL);
    UIRangeLabel__Set(v61, v71, 0LL, 1, 0, 0LL);
    charaLevelSpriteList = this->fields.charaLevelSpriteList;
    if ( !charaLevelSpriteList )
      goto LABEL_182;
    if ( v118 >= charaLevelSpriteList->max_length )
      goto LABEL_184;
    Instance = (UICommonButton_o *)charaLevelSpriteList->m_Items[v118];
    if ( !Instance )
      goto LABEL_182;
    v73 = &StringLiteral_17174/*"btn_bg_20"*/;
    if ( v59 )
      v73 = &StringLiteral_17175/*"btn_bg_21"*/;
    UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v73, 0LL);
    faceButtonList = this->fields.faceButtonList;
    if ( !faceButtonList )
      goto LABEL_182;
    if ( v118 >= faceButtonList->max_length )
      goto LABEL_184;
    Instance = faceButtonList->m_Items[v118];
    if ( (v59 & v62) != 0 )
    {
      if ( !Instance )
        goto LABEL_182;
      v75 = v62 == 0 || isInit;
      UICommonButton__SetColliderEnable(Instance, 0, v62 == 0 || isInit, 0LL);
      charaLevelButtonList = this->fields.charaLevelButtonList;
      if ( !charaLevelButtonList )
        goto LABEL_182;
      v50 = iconSelectList;
      if ( v118 >= charaLevelButtonList->max_length )
        goto LABEL_184;
      Instance = charaLevelButtonList->m_Items[v118];
      if ( !Instance )
        goto LABEL_182;
      UICommonButton__SetColliderEnable(Instance, 0, v75, 0LL);
    }
    else
    {
      if ( !Instance )
        goto LABEL_182;
      v77 = v62 & ~v59;
      v78 = v62 == 0 || isInit;
      UICommonButton__SetButtonEnable(Instance, v77, v62 == 0 || isInit, 0LL);
      v79 = this->fields.charaLevelButtonList;
      if ( !v79 )
        goto LABEL_182;
      v50 = iconSelectList;
      if ( v118 >= v79->max_length )
        goto LABEL_184;
      Instance = v79->m_Items[v118];
      if ( !Instance )
        goto LABEL_182;
      UICommonButton__SetButtonEnable(Instance, v77, v78, 0LL);
    }
    limitCountSealLabel = this->fields.limitCountSealLabel;
    if ( limitCountSealLabel )
    {
      if ( v118 >= limitCountSealLabel->max_length )
        goto LABEL_184;
      v81 = (UnityEngine_Object_o *)limitCountSealLabel->m_Items[v118];
    }
    else
    {
      v81 = 0LL;
    }
    limitCountSealObjList = this->fields.limitCountSealObjList;
    if ( limitCountSealObjList )
    {
      if ( v118 >= limitCountSealObjList->max_length )
        goto LABEL_184;
      v83 = (UnityEngine_Object_o *)limitCountSealObjList->m_Items[v118];
    }
    else
    {
      v83 = 0LL;
    }
    Instance = (UICommonButton_o *)ServantStatusListViewItem__get_SvtId(item, 0LL);
    if ( !v50 )
      goto LABEL_182;
    if ( v118 >= v50->max_length )
      goto LABEL_184;
    if ( !v56 )
      goto LABEL_182;
    if ( ServantLimitImageMaster__IsServantLimitCountSeal(v56, (int32_t)Instance, v50->m_Items[v118 + 1] + 1, 0LL) )
    {
      if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      Instance = (UICommonButton_o *)UnityEngine_Object__op_Inequality(v83, 0LL, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v83 )
          goto LABEL_182;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v83, 1, 0LL);
      }
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      Instance = (UICommonButton_o *)UnityEngine_Object__op_Inequality(v81, 0LL, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        Instance = (UICommonButton_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8473/*"LIMIT_COUNT_SELECT_SEALED"*/, 0LL);
        if ( !v81 )
          goto LABEL_182;
        v84 = (System_String_o *)Instance;
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
      Instance = (UICommonButton_o *)UnityEngine_Object__op_Inequality(v83, 0LL, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v83 )
          goto LABEL_182;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v83, 0, 0LL);
      }
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      Instance = (UICommonButton_o *)UnityEngine_Object__op_Inequality(v81, 0LL, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v81 )
          goto LABEL_182;
        v84 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_114:
        UILabel__set_text((UILabel_o *)v81, v84, 0LL);
      }
    }
    v85 = (int)(v118 - 3) < 0;
    v57 = ++v118;
  }
  while ( v85 != __OFSUB__(v118, 4) );
  v86 = this->fields.charaLevelButtonList;
  if ( !v86 )
    goto LABEL_182;
  v87 = 12LL;
  v114 = v38;
  while ( 1 )
  {
    v88 = v87 - 8;
    if ( (int)v87 - 8 >= (signed int)v86->max_length )
      break;
    max_length = v50->max_length;
    if ( (int)v88 >= max_length )
    {
      v90 = 0;
    }
    else
    {
      if ( v88 >= max_length )
        goto LABEL_184;
      v90 = *((_DWORD *)&v50->obj.klass + v87) == v115;
    }
    v91 = this->fields.charaLevelTitleRangeLabelList;
    if ( !v91 )
      goto LABEL_182;
    if ( v88 >= v91->max_length )
      goto LABEL_184;
    v92 = v91->m_Items[v88];
    v93 = v38 && (int)v88 < max_length;
    if ( (int)v88 >= max_length )
    {
      if ( !v92 )
        goto LABEL_182;
      UIRangeLabel__Clear(v91->m_Items[v88], 0LL);
    }
    else
    {
      Instance = (UICommonButton_o *)ServantStatusListViewItem__get_SvtId(item, 0LL);
      if ( v88 >= iconSelectList->max_length )
        goto LABEL_184;
      v37 = (unsigned int)Instance;
      Instance = (UICommonButton_o *)v113;
      if ( !v113 )
        goto LABEL_182;
      Entity = ServantCostumeMaster__GetEntity(v113, v37, iconSelectList->m_Items[v88 + 1], 0LL);
      if ( Entity )
      {
        Instance = (UICommonButton_o *)ServantCostumeEntity__getShortName(Entity, 0LL);
        v97 = (System_String_o *)Instance;
        if ( !v92 )
          goto LABEL_182;
      }
      else
      {
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        if ( !byte_42E6772 )
        {
          sub_B5D5C4(&LocalizationManager_TypeInfo, v37, v95, v96);
          byte_42E6772 = 1;
        }
        Instance = (UICommonButton_o *)LocalizationManager_TypeInfo;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          Instance = (UICommonButton_o *)LocalizationManager_TypeInfo;
        }
        v97 = *(System_String_o **)(*(_QWORD *)&Instance[1].fields.specifyPressedColor.fields.b + 32LL);
        if ( !v92 )
          goto LABEL_182;
      }
      v98 = v90 & v93;
      if ( (v90 & v93) != 0 )
        v99 = v55;
      else
        v99 = v49;
      if ( v98 )
        v100 = v54;
      else
        v100 = v48;
      if ( v98 )
        v101 = v53;
      else
        v101 = v47;
      if ( v98 )
        v102 = v52;
      else
        v102 = v46;
      UIRangeLabel__set_effectColor(v92, *(UnityEngine_Color_o *)(&v99 - 3), 0LL);
      UIRangeLabel__Set(v92, v97, 0LL, 1, 0, 0LL);
    }
    v103 = this->fields.charaLevelSpriteList;
    if ( !v103 )
      goto LABEL_182;
    if ( v88 >= v103->max_length )
      goto LABEL_184;
    Instance = (UICommonButton_o *)v103->m_Items[v88];
    if ( !Instance )
      goto LABEL_182;
    v104 = &StringLiteral_17174/*"btn_bg_20"*/;
    if ( v90 )
      v104 = &StringLiteral_17175/*"btn_bg_21"*/;
    UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v104, 0LL);
    v105 = this->fields.faceButtonList;
    if ( !v105 )
      goto LABEL_182;
    if ( v88 >= v105->max_length )
      goto LABEL_184;
    Instance = v105->m_Items[v88];
    if ( (v90 & v93) != 0 )
    {
      if ( !Instance )
        goto LABEL_182;
      v106 = v93 == 0 || isInit;
      UICommonButton__SetColliderEnable(Instance, 0, v93 == 0 || isInit, 0LL);
      v107 = this->fields.charaLevelButtonList;
      v50 = iconSelectList;
      if ( !v107 )
        goto LABEL_182;
      LOBYTE(v38) = v114;
      if ( v88 >= v107->max_length )
        goto LABEL_184;
      Instance = v107->m_Items[v88];
      if ( !Instance )
        goto LABEL_182;
      UICommonButton__SetColliderEnable(Instance, 0, v106, 0LL);
    }
    else if ( (int)v88 >= max_length )
    {
      if ( !Instance )
        goto LABEL_182;
      Instance = (UICommonButton_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      LOBYTE(v38) = v114;
      v50 = iconSelectList;
      if ( !Instance )
        goto LABEL_182;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
      v111 = this->fields.charaLevelButtonList;
      if ( !v111 )
        goto LABEL_182;
      if ( v88 >= v111->max_length )
        goto LABEL_184;
      Instance = v111->m_Items[v88];
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
      v108 = v93 & ~v90;
      v109 = v93 == 0 || isInit;
      UICommonButton__SetButtonEnable(Instance, v108, v93 == 0 || isInit, 0LL);
      v110 = this->fields.charaLevelButtonList;
      if ( !v110 )
        goto LABEL_182;
      LOBYTE(v38) = v114;
      v50 = iconSelectList;
      if ( v88 >= v110->max_length )
        goto LABEL_184;
      Instance = v110->m_Items[v88];
      if ( !Instance )
        goto LABEL_182;
      UICommonButton__SetButtonEnable(Instance, v108, v109, 0LL);
    }
    v86 = this->fields.charaLevelButtonList;
    ++v87;
    if ( !v86 )
      goto LABEL_182;
  }
}


void __fastcall ServantStatusListViewItemDrawFace__SetupMask(
        ServantStatusListViewItemDrawFace_o *this,
        ServantStatusListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v3; // x3
  ServantStatusListViewItemDrawFace_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  struct UISprite_o *baseSprite; // x8
  UnityEngine_GameObject_o *v13; // x21
  System_String_o *Empty; // x20
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  v5 = this;
  if ( (byte_42ECB5C & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)item, (_DWORD)method, v3);
    sub_B5D5C4(&string_TypeInfo, v6, v7, v8);
    this = (ServantStatusListViewItemDrawFace_o *)sub_B5D5C4(&StringLiteral_12159/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_INFO_OWN_SETTING_FACE"*/, v9, v10, v11);
    byte_42ECB5C = 1;
  }
  if ( !item )
LABEL_25:
    sub_B5D69C(this, item);
  if ( !item->fields.userSvtEntity )
  {
    this = (ServantStatusListViewItemDrawFace_o *)v5->fields.maskBase;
    if ( !this )
      goto LABEL_25;
LABEL_19:
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    return;
  }
  this = (ServantStatusListViewItemDrawFace_o *)v5->fields.maskBase;
  if ( !this )
    goto LABEL_25;
  if ( !item->fields.isEnableOwnRandomSetting )
    goto LABEL_19;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  baseSprite = v5->fields.baseSprite;
  if ( !baseSprite )
    goto LABEL_25;
  this = (ServantStatusListViewItemDrawFace_o *)v5->fields.maskSprite;
  if ( !this )
    goto LABEL_25;
  UIWidget__set_height((UIWidget_o *)this, baseSprite->fields.mHeight, 0LL);
  this = (ServantStatusListViewItemDrawFace_o *)v5->fields.maskSprite;
  if ( !this )
    goto LABEL_25;
  UIWidget__ResizeCollider((UIWidget_o *)this, 0LL);
  this = (ServantStatusListViewItemDrawFace_o *)v5->fields.maskSprite;
  if ( !this )
    goto LABEL_25;
  this = (ServantStatusListViewItemDrawFace_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)this,
                                                  0LL);
  if ( !v5->fields.baseSprite )
    goto LABEL_25;
  v13 = (UnityEngine_GameObject_o *)this;
  this = (ServantStatusListViewItemDrawFace_o *)UnityEngine_Component__get_transform(
                                                  (UnityEngine_Component_o *)v5->fields.baseSprite,
                                                  0LL);
  if ( !this )
    goto LABEL_25;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  GameObjectExtensions__SetLocalPositionY(v13, localPosition.fields.y, 0LL);
  if ( item->fields.isEnableOwnRandomSetting )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    Empty = LocalizationManager__Get((System_String_o *)StringLiteral_12159/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_INFO_OWN_SETTING_FACE"*/, 0LL);
  }
  else
  {
    Empty = string_TypeInfo->static_fields->Empty;
  }
  this = (ServantStatusListViewItemDrawFace_o *)v5->fields.maskInfoLabel;
  if ( !this )
    goto LABEL_25;
  UILabel__set_overflowMethod((UILabel_o *)this, 2, 0LL);
  this = (ServantStatusListViewItemDrawFace_o *)v5->fields.maskInfoLabel;
  if ( !this )
    goto LABEL_25;
  UILabel__set_text((UILabel_o *)this, Empty, 0LL);
  this = (ServantStatusListViewItemDrawFace_o *)v5->fields.maskInfoLabel;
  if ( !this )
    goto LABEL_25;
  UILabel__SetCondensedScale((UILabel_o *)this, *(&v5->fields.MASK_LABEL_MAX_WIDTH + 1), 0LL);
}