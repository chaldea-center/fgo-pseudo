void __fastcall ServantStatusListViewItemDrawFace___ctor(
        ServantStatusListViewItemDrawFace_o *this,
        const MethodInfo *method)
{
  this->fields.MASK_LABEL_MAX_WIDTH = 550;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusListViewItemDrawFace__Awake(
        ServantStatusListViewItemDrawFace_o *this,
        const MethodInfo *method)
{
  struct UISprite_array *charaLevelSpriteList; // x8
  ServantStatusListViewItemDrawFace_o *v3; // x19
  int32_t facePitch; // w20
  __int64 v5; // x2
  float v6; // s1
  struct UISprite_array *v7; // x8
  float v8; // s8
  float v9; // s1
  struct UISprite_o *baseSprite; // x9
  int max_length; // w8
  int32_t mHeight; // w11
  bool v13; // cc
  int v14; // w8
  float v15; // s0
  float v16; // s1
  float v17; // s2
  int v18; // w8
  float v19; // s8
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4

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
    *(UnityEngine_Vector3_o *)(&v6 - 1) = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
    v7 = v3->fields.charaLevelSpriteList;
    if ( !v7 )
      goto LABEL_28;
    if ( v7->max_length <= 4 )
      sub_1BDBADC(this, method, v5);
    if ( (this = (ServantStatusListViewItemDrawFace_o *)v7->m_Items[4]) == 0LL
      || (v8 = v6,
          (this = (ServantStatusListViewItemDrawFace_o *)UnityEngine_Component__get_transform(
                                                           (UnityEngine_Component_o *)this,
                                                           0LL)) == 0LL)
      || ((*(UnityEngine_Vector3_o *)(&v9 - 1) = UnityEngine_Transform__get_localPosition(
                                                   (UnityEngine_Transform_o *)this,
                                                   0LL),
           charaLevelSpriteList = v3->fields.charaLevelSpriteList,
           (float)(v8 - v9) != INFINITY)
        ? (facePitch = (int)(float)(v8 - v9))
        : (facePitch = 0x80000000),
          v3->fields.facePitch = facePitch,
          !charaLevelSpriteList) )
    {
LABEL_28:
      sub_1BDBAD4(this, method);
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
  v13 = max_length < 12;
  this = (ServantStatusListViewItemDrawFace_o *)v3->fields.titleSprite;
  v14 = 1 - max_length / 4;
  if ( v13 )
    v14 = -1;
  v3->fields.baseSize.fields.x = (float)baseSprite->fields.mWidth;
  v3->fields.baseSize.fields.y = (float)(mHeight + v14 * facePitch);
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
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  this = (ServantStatusListViewItemDrawFace_o *)v3->fields.explanationLabel;
  v3->fields.faceBasePosition.fields.x = localPosition.fields.x;
  v3->fields.faceBasePosition.fields.y = localPosition.fields.y - v19;
  v3->fields.faceBasePosition.fields.z = localPosition.fields.z;
  if ( !this )
    goto LABEL_28;
  this = (ServantStatusListViewItemDrawFace_o *)UnityEngine_Component__get_transform(
                                                  (UnityEngine_Component_o *)this,
                                                  0LL);
  if ( !this )
    goto LABEL_28;
  v21 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  v3->fields.explanationBasePosition.fields.x = v21.fields.x;
  v3->fields.explanationBasePosition.fields.y = v21.fields.y + v19;
  v3->fields.explanationBasePosition.fields.z = v21.fields.z;
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
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4

  v6 = this;
  if ( (byte_4B41C24 & 1) == 0 )
  {
    sub_1BDB878(&AtlasManager_TypeInfo, *(_QWORD *)&index);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v7);
    sub_1BDB878(&StringLiteral_23908/*"svt_costume_icon_"*/, v8);
    this = (ServantStatusListViewItemDrawFace_o *)sub_1BDB878(&StringLiteral_1/*""*/, v9);
    byte_4B41C24 = 1;
  }
  faceSpriteCostumeIconList = v6->fields.faceSpriteCostumeIconList;
  if ( !faceSpriteCostumeIconList )
    goto LABEL_39;
  if ( faceSpriteCostumeIconList->max_length <= index )
LABEL_40:
    sub_1BDBADC(this, *(_QWORD *)&index, svtCostumeEntity);
  v11 = (UnityEngine_Object_o *)faceSpriteCostumeIconList->m_Items[index];
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (ServantStatusListViewItemDrawFace_o *)UnityEngine_Object__op_Inequality(v11, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v12 = v6->fields.faceSpriteCostumeIconList;
    if ( !v12 )
      goto LABEL_39;
    if ( v12->max_length <= index )
      goto LABEL_40;
    this = (ServantStatusListViewItemDrawFace_o *)v12->m_Items[index];
    if ( !this )
      goto LABEL_39;
    UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    v13 = v6->fields.faceSpriteCostumeIconList;
    if ( !v13 )
      goto LABEL_39;
    if ( v13->max_length <= index )
      goto LABEL_40;
    this = (ServantStatusListViewItemDrawFace_o *)v13->m_Items[index];
    if ( !this )
      goto LABEL_39;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0LL);
    if ( svtCostumeEntity )
    {
      iconId = svtCostumeEntity->fields.iconId;
      v14 = (_DWORD)svtCostumeEntity + 92;
      if ( iconId >= 1 )
      {
        v16 = v6->fields.faceSpriteCostumeIconList;
        if ( !v16 )
          goto LABEL_39;
        if ( v16->max_length <= index )
          goto LABEL_40;
        v17 = v16->m_Items[index];
        v18 = System_Int32__ToString(v14, 0LL);
        v19 = System_String__Concat_62572260((System_String_o *)StringLiteral_23908/*"svt_costume_icon_"*/, v18, 0LL);
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        this = (ServantStatusListViewItemDrawFace_o *)AtlasManager__SetEventSprite(v17, v19, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          v20 = v6->fields.faceSpriteCostumeIconList;
          if ( !v20 )
            goto LABEL_39;
          if ( v20->max_length > index )
          {
            this = (ServantStatusListViewItemDrawFace_o *)v20->m_Items[index];
            if ( !this )
              goto LABEL_39;
            UIWidget__set_pivot((UIWidget_o *)this, 4, 0LL);
            v21 = v6->fields.faceSpriteCostumeIconList;
            if ( !v21 )
              goto LABEL_39;
            if ( v21->max_length > index )
            {
              this = (ServantStatusListViewItemDrawFace_o *)v21->m_Items[index];
              if ( !this )
                goto LABEL_39;
              UIWidget__set_width((UIWidget_o *)this, 32, 0LL);
              v22 = v6->fields.faceSpriteCostumeIconList;
              if ( !v22 )
                goto LABEL_39;
              if ( v22->max_length > index )
              {
                this = (ServantStatusListViewItemDrawFace_o *)v22->m_Items[index];
                if ( !this )
                  goto LABEL_39;
                UIWidget__set_height((UIWidget_o *)this, 32, 0LL);
                v23 = v6->fields.faceSpriteCostumeIconList;
                if ( !v23 )
                  goto LABEL_39;
                if ( v23->max_length > index )
                {
                  this = (ServantStatusListViewItemDrawFace_o *)v23->m_Items[index];
                  if ( !this )
                    goto LABEL_39;
                  this = (ServantStatusListViewItemDrawFace_o *)UnityEngine_Component__get_transform(
                                                                  (UnityEngine_Component_o *)this,
                                                                  0LL);
                  if ( !this )
                    goto LABEL_39;
                  v25.fields.x = -42.0;
                  v25.fields.z = 0.0;
                  v25.fields.y = -42.0;
                  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v25, 0LL);
                  v24 = v6->fields.faceSpriteCostumeIconList;
                  if ( !v24 )
                    goto LABEL_39;
                  if ( v24->max_length > index )
                  {
                    this = (ServantStatusListViewItemDrawFace_o *)v24->m_Items[index];
                    if ( this )
                    {
                      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 1, 0LL);
                      return;
                    }
LABEL_39:
                    sub_1BDBAD4(this, *(_QWORD *)&index);
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
  Il2CppObject *Master_object; // x21
  UILabel_o *explanationLabel; // x22
  UISprite_o *ServantStatusExplanationText; // x0
  __int64 v24; // x1
  struct UserServantEntity_o *userSvtEntity; // x8
  __int64 v26; // x22
  __int64 v27; // x23
  UILabel_o *v28; // x22
  struct UserServantCollectionEntity_o *userSvtCollectionEntity; // x8
  UILabel_o *servantLeaderInfo; // x23
  UILabel_o *v31; // x22
  struct ServantLeaderInfo_o *v32; // x8
  int32_t v33; // w22
  System_String_o *mText; // x25
  System_String_o *v35; // x24
  Il2CppObject *LimitCountSealedServantName; // x0
  System_String_o *v37; // x0
  System_String_o *v38; // x0
  struct System_Int32_array *iconSelectList; // x28
  __int64 v40; // x8
  int32_t v41; // w25
  int32_t facePitch; // w9
  signed __int64 maxIconLimitCount; // x21
  float x; // s8
  float y; // s9
  float z; // s10
  UnityEngine_Object_o *baseCollider; // x22
  int v48; // w8
  int v49; // w8
  int v50; // w8
  int v51; // w24
  float v52; // s9
  int32_t v53; // w1
  int32_t v54; // w1
  int v55; // w22
  float v56; // s8
  float v57; // s11
  float v58; // s9
  float v59; // s10
  float v60; // s8
  float v61; // s11
  float v62; // s9
  int32_t v63; // w22
  float v64; // s8
  float v65; // s10
  float v66; // s9
  const MethodInfo_3916288 **v67; // x29
  unsigned __int64 v68; // x24
  int32_t *v69; // x23
  const MethodInfo *v70; // x3
  __int64 v71; // x2
  struct UISprite_array *v72; // x8
  char v73; // w25
  UISprite_o *v74; // x26
  UISprite_o *v75; // x0
  struct UISprite_array *faceFrameSpriteList; // x8
  bool v77; // w1
  int v78; // w8
  int32_t v79; // w25
  int32_t SvtId; // w26
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v81; // kr00_16
  Il2CppObject *v82; // x25
  struct UISprite_array *faceSpriteList; // x8
  UISprite_o *v84; // x26
  int32_t v85; // w25
  int32_t v86; // w27
  int32_t v87; // w2
  const MethodInfo *v88; // x3
  struct UISprite_array *v89; // x8
  UISprite_o *v90; // x25
  struct UISprite_array *v91; // x8
  struct UISprite_array *v92; // x8
  int32_t v93; // w21
  struct UISprite_array *v94; // x8
  signed int max_length; // w26
  Il2CppObject *v96; // x23
  const MethodInfo_3916288 **v97; // x22
  int32_t *v98; // x29
  struct UISprite_array *v99; // x8
  UISprite_o *v100; // x24
  int32_t v101; // w23
  int32_t v102; // w25
  ServantCostumeEntity_o *v103; // x0
  const MethodInfo *v104; // x3
  struct UISprite_array *v105; // x8
  const MethodInfo *v106; // x2
  ServantLimitSpoilerProtectionMaster_o *MasterData_object; // [xsp+8h] [xbp-98h]
  ServantCostumeMaster_o *v108; // [xsp+10h] [xbp-90h]
  ServantCostumeEntity_o *entity; // [xsp+18h] [xbp-88h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v110; // 0:x0.16
  UnityEngine_Vector3_o v111; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v112; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v113; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v114; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B41C23 & 1) == 0 )
  {
    sub_1BDB878(&AtlasManager_TypeInfo, item);
    sub_1BDB878(&Method_DataManager_GetMasterData_ServantCostumeMaster___, v7);
    sub_1BDB878(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v8);
    sub_1BDB878(&Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___, v9);
    sub_1BDB878(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v10);
    sub_1BDB878(&DataManager_TypeInfo, v11);
    sub_1BDB878(&LocalizationManager_TypeInfo, v12);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v13);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
    sub_1BDB878(&OptionManager_TypeInfo, v15);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_1BDB878(&StringLiteral_11887/*"SERVANT_STATUS_EXPLANATION_FACE"*/, v17);
    sub_1BDB878(&StringLiteral_11889/*"SERVANT_STATUS_EXPLANATION_FACE3"*/, v18);
    sub_1BDB878(&StringLiteral_11888/*"SERVANT_STATUS_EXPLANATION_FACE2"*/, v19);
    sub_1BDB878(&StringLiteral_11890/*"SERVANT_STATUS_EXPLANATION_FACE_LIMIT_COUNT_SEALED_MSG"*/, v20);
    byte_4B41C23 = 1;
  }
  entity = 0LL;
  this->fields.dispMode = mode;
  if ( !item || !mode )
    return;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  if ( item->fields.userSvtEntity )
  {
    explanationLabel = this->fields.explanationLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    ServantStatusExplanationText = (UISprite_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11887/*"SERVANT_STATUS_EXPLANATION_FACE"*/, 0LL);
    if ( !explanationLabel )
      goto LABEL_142;
    UILabel__set_text(explanationLabel, (System_String_o *)ServantStatusExplanationText, 0LL);
    userSvtEntity = item->fields.userSvtEntity;
    if ( !userSvtEntity )
      goto LABEL_142;
    v27 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
    v26 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
  }
  else if ( item->fields.userSvtCollectionEntity )
  {
    v28 = this->fields.explanationLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    ServantStatusExplanationText = (UISprite_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11888/*"SERVANT_STATUS_EXPLANATION_FACE2"*/, 0LL);
    if ( !v28 )
      goto LABEL_142;
    UILabel__set_text(v28, (System_String_o *)ServantStatusExplanationText, 0LL);
    userSvtCollectionEntity = item->fields.userSvtCollectionEntity;
    if ( !userSvtCollectionEntity )
      goto LABEL_142;
    v27 = *(_QWORD *)&userSvtCollectionEntity->fields.svtId.fields.currentCryptoKey;
    v26 = *(_QWORD *)&userSvtCollectionEntity->fields.svtId.fields.fakeValue;
  }
  else
  {
    servantLeaderInfo = (UILabel_o *)item->fields.servantLeaderInfo;
    v31 = this->fields.explanationLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    ServantStatusExplanationText = (UISprite_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11889/*"SERVANT_STATUS_EXPLANATION_FACE3"*/, 0LL);
    if ( !v31 )
      goto LABEL_142;
    UILabel__set_text(v31, (System_String_o *)ServantStatusExplanationText, 0LL);
    if ( !servantLeaderInfo )
      goto LABEL_33;
    v32 = item->fields.servantLeaderInfo;
    if ( !v32 )
      goto LABEL_142;
    v27 = *(_QWORD *)&v32->fields.svtId.fields.currentCryptoKey;
    v26 = *(_QWORD *)&v32->fields.svtId.fields.fakeValue;
  }
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v110.fields.currentCryptoKey = v27;
  *(_QWORD *)&v110.fields.fakeValue = v26;
  ServantStatusExplanationText = (UISprite_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(
                                                 v110,
                                                 0LL);
  if ( !(_DWORD)ServantStatusExplanationText )
    goto LABEL_32;
  if ( !Master_object )
    goto LABEL_142;
  v33 = (int)ServantStatusExplanationText;
  if ( ServantLimitImageMaster__IsServantLimitCountSeal(
         (ServantLimitImageMaster_o *)Master_object,
         (int32_t)ServantStatusExplanationText,
         3,
         0LL) )
  {
    ServantStatusExplanationText = (UISprite_o *)ServantLimitImageMaster__GetServantStatusExplanationText(
                                                   (ServantLimitImageMaster_o *)Master_object,
                                                   (System_String_o *)StringLiteral_11890/*"SERVANT_STATUS_EXPLANATION_FACE_LIMIT_COUNT_SEALED_MSG"*/,
                                                   v33,
                                                   0LL);
    servantLeaderInfo = this->fields.explanationLabel;
    if ( !servantLeaderInfo )
      goto LABEL_142;
    mText = servantLeaderInfo->fields.mText;
    v35 = (System_String_o *)ServantStatusExplanationText;
    LimitCountSealedServantName = (Il2CppObject *)ServantLimitImageMaster__GetLimitCountSealedServantName(
                                                    (ServantLimitImageMaster_o *)Master_object,
                                                    v33,
                                                    3,
                                                    0,
                                                    0LL);
    v37 = System_String__Format(v35, LimitCountSealedServantName, 0LL);
    v38 = System_String__Concat_62572260(mText, v37, 0LL);
    UILabel__set_text(servantLeaderInfo, v38, 0LL);
    LODWORD(servantLeaderInfo) = 1;
  }
  else
  {
LABEL_32:
    LODWORD(servantLeaderInfo) = 0;
  }
LABEL_33:
  ServantStatusExplanationText = (UISprite_o *)ServantStatusListViewItem__get_ConvertOverwriteIconLimitCount(item, 0LL);
  iconSelectList = item->fields.iconSelectList;
  if ( !iconSelectList )
    goto LABEL_142;
  v40 = *(_QWORD *)&iconSelectList->max_length;
  v41 = (int)ServantStatusExplanationText;
  if ( (int)v40 < 5 )
    facePitch = 0;
  else
    facePitch = this->fields.facePitch;
  maxIconLimitCount = item->fields.maxIconLimitCount;
  x = this->fields.baseSize.fields.x;
  y = this->fields.baseSize.fields.y;
  z = this->fields.baseSize.fields.z;
  baseCollider = (UnityEngine_Object_o *)this->fields.baseCollider;
  v48 = (int)v40 / 4;
  if ( (*(_QWORD *)&iconSelectList->max_length & 3LL) != 0 )
    ++v48;
  if ( v48 < 3 )
    v49 = 1;
  else
    v49 = v48 - 1;
  v50 = facePitch * v49;
  if ( (_DWORD)servantLeaderInfo )
    v51 = v50 + 32;
  else
    v51 = v50;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v52 = y + (float)v51;
  if ( UnityEngine_Object__op_Inequality(baseCollider, 0LL, 0LL) )
  {
    ServantStatusExplanationText = (UISprite_o *)this->fields.baseCollider;
    if ( !ServantStatusExplanationText )
      goto LABEL_142;
    v111.fields.x = x;
    v111.fields.y = v52;
    v111.fields.z = z;
    UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)ServantStatusExplanationText, v111, 0LL);
  }
  ServantStatusExplanationText = this->fields.baseSprite;
  if ( !ServantStatusExplanationText )
    goto LABEL_142;
  v53 = x == INFINITY ? 0x80000000 : (int)x;
  UIWidget__set_width((UIWidget_o *)ServantStatusExplanationText, v53, 0LL);
  ServantStatusExplanationText = this->fields.baseSprite;
  if ( !ServantStatusExplanationText )
    goto LABEL_142;
  v54 = v52 == INFINITY ? 0x80000000 : (int)v52;
  UIWidget__set_height((UIWidget_o *)ServantStatusExplanationText, v54, 0LL);
  ServantStatusExplanationText = this->fields.titleSprite;
  v55 = v51 >= 0 ? v51 : v51 + 1;
  if ( !ServantStatusExplanationText )
    goto LABEL_142;
  v56 = this->fields.titleBasePosition.fields.x;
  v57 = this->fields.titleBasePosition.fields.y;
  v58 = this->fields.titleBasePosition.fields.z;
  ServantStatusExplanationText = (UISprite_o *)UnityEngine_Component__get_transform(
                                                 (UnityEngine_Component_o *)ServantStatusExplanationText,
                                                 0LL);
  if ( !ServantStatusExplanationText )
    goto LABEL_142;
  v59 = (float)(v55 >> 1);
  v112.fields.y = v57 + v59;
  v112.fields.x = v56;
  v112.fields.z = v58;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)ServantStatusExplanationText, v112, 0LL);
  ServantStatusExplanationText = (UISprite_o *)this->fields.faceBase;
  if ( !ServantStatusExplanationText )
    goto LABEL_142;
  v60 = this->fields.faceBasePosition.fields.x;
  v61 = this->fields.faceBasePosition.fields.y;
  v62 = this->fields.faceBasePosition.fields.z;
  ServantStatusExplanationText = (UISprite_o *)UnityEngine_GameObject__get_transform(
                                                 (UnityEngine_GameObject_o *)ServantStatusExplanationText,
                                                 0LL);
  if ( !ServantStatusExplanationText )
    goto LABEL_142;
  v113.fields.y = v61 + v59;
  v113.fields.x = v60;
  v113.fields.z = v62;
  v63 = v41;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)ServantStatusExplanationText, v113, 0LL);
  ServantStatusExplanationText = (UISprite_o *)this->fields.explanationLabel;
  v64 = (_DWORD)servantLeaderInfo
      ? (float)(this->fields.explanationBasePosition.fields.y - v59) + 16.0
      : this->fields.explanationBasePosition.fields.y - v59;
  if ( !ServantStatusExplanationText )
    goto LABEL_142;
  v65 = this->fields.explanationBasePosition.fields.x;
  v66 = this->fields.explanationBasePosition.fields.z;
  ServantStatusExplanationText = (UISprite_o *)UnityEngine_Component__get_transform(
                                                 (UnityEngine_Component_o *)ServantStatusExplanationText,
                                                 0LL);
  if ( !ServantStatusExplanationText )
    goto LABEL_142;
  v114.fields.x = v65;
  v114.fields.y = v64;
  v114.fields.z = v66;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)ServantStatusExplanationText, v114, 0LL);
  v67 = (const MethodInfo_3916288 **)&Method_SingletonMonoBehaviour_DataManager__get_Instance__;
  ServantStatusExplanationText = (UISprite_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !ServantStatusExplanationText
    || (MasterData_object = (ServantLimitSpoilerProtectionMaster_o *)DataManager__GetMasterData_object_(
                                                                       (DataManager_o *)ServantStatusExplanationText,
                                                                       (const MethodInfo_303395C *)Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___),
        (ServantStatusExplanationText = (UISprite_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL) )
  {
LABEL_142:
    sub_1BDBAD4(ServantStatusExplanationText, v24);
  }
  v68 = 0LL;
  v69 = &iconSelectList->m_Items[1];
  v108 = (ServantCostumeMaster_o *)DataManager__GetMasterData_object_(
                                     (DataManager_o *)ServantStatusExplanationText,
                                     (const MethodInfo_303395C *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
  do
  {
    ServantStatusListViewItemDrawFace__SetCostumeIcon(this, v68, 0LL, v70);
    if ( (__int64)v68 > maxIconLimitCount )
      goto LABEL_74;
    ServantStatusExplanationText = (UISprite_o *)ServantStatusListViewItem__get_IsMine(item, 0LL);
    if ( ((unsigned __int8)ServantStatusExplanationText & 1) != 0 )
      goto LABEL_148;
    if ( v68 >= iconSelectList->max_length )
      goto LABEL_145;
    if ( v69[v68] <= v63 )
    {
LABEL_148:
      if ( !OptionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      if ( OptionManager__GetSpoilerSetting(0LL) )
        goto LABEL_98;
      ServantStatusExplanationText = (UISprite_o *)ServantStatusListViewItem__get_IsMine(item, 0LL);
      if ( ((unsigned __int8)ServantStatusExplanationText & 1) != 0 )
        goto LABEL_98;
      if ( v68 >= iconSelectList->max_length )
        goto LABEL_145;
      v78 = v69[v68];
      if ( v78 >= 11 )
        v79 = v69[v68];
      else
        v79 = v78 + 1;
      SvtId = ServantStatusListViewItem__get_SvtId(item, 0LL);
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      v81 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(SvtId, 0LL);
      v24 = *(_QWORD *)&v81.fields.fakeValue;
      ServantStatusExplanationText = (UISprite_o *)MasterData_object;
      if ( !MasterData_object )
        goto LABEL_142;
      ServantStatusExplanationText = (UISprite_o *)ServantLimitSpoilerProtectionMaster__IsSpoilerLimitCount(
                                                     MasterData_object,
                                                     v81,
                                                     v79,
                                                     0LL);
      if ( ((unsigned __int8)ServantStatusExplanationText & 1) != 0 )
      {
LABEL_98:
        ServantStatusExplanationText = (UISprite_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !ServantStatusExplanationText )
          goto LABEL_142;
        v82 = DataManager__GetMasterData_object_(
                (DataManager_o *)ServantStatusExplanationText,
                (const MethodInfo_303395C *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
        ServantStatusExplanationText = (UISprite_o *)ServantStatusListViewItem__get_SvtId(item, 0LL);
        if ( v68 >= iconSelectList->max_length )
          goto LABEL_145;
        if ( !v82 )
          goto LABEL_142;
        ServantStatusExplanationText = (UISprite_o *)ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                                       (ServantLimitImageMaster_o *)v82,
                                                       (int32_t)ServantStatusExplanationText,
                                                       v69[v68],
                                                       0LL);
        faceSpriteList = this->fields.faceSpriteList;
        if ( !faceSpriteList )
          goto LABEL_142;
        if ( v68 >= faceSpriteList->max_length )
          goto LABEL_145;
        v84 = faceSpriteList->m_Items[v68];
        v85 = (int)ServantStatusExplanationText;
        v86 = ServantStatusListViewItem__get_SvtId(item, 0LL);
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        AtlasManager__SetFaceImage(v84, v86, v85, 1, 0LL, 0LL);
        ServantStatusExplanationText = (UISprite_o *)ServantStatusListViewItem__get_SvtId(item, 0LL);
        if ( v68 >= iconSelectList->max_length )
LABEL_145:
          sub_1BDBADC(ServantStatusExplanationText, v24, v71);
        v87 = (int)ServantStatusExplanationText;
        ServantStatusExplanationText = (UISprite_o *)v108;
        if ( !v108 )
          goto LABEL_142;
        ServantCostumeMaster__TryGetEntity(v108, &entity, v87, v69[v68], 0LL);
        ServantStatusListViewItemDrawFace__SetCostumeIcon(this, v68, entity, v88);
        goto LABEL_114;
      }
      v89 = this->fields.faceSpriteList;
      if ( !v89 )
        goto LABEL_142;
      if ( v68 >= v89->max_length )
        goto LABEL_145;
      v90 = v89->m_Items[v68];
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      v75 = v90;
    }
    else
    {
LABEL_74:
      ServantStatusExplanationText = (UISprite_o *)ServantStatusListViewItem__get_IsMine(item, 0LL);
      v72 = this->fields.faceSpriteList;
      if ( !v72 )
        goto LABEL_142;
      if ( v68 >= v72->max_length )
        goto LABEL_145;
      v73 = (char)ServantStatusExplanationText;
      v74 = v72->m_Items[v68];
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      v75 = v74;
      if ( (v73 & 1) != 0 )
      {
        ServantStatusExplanationText = (UISprite_o *)AtlasManager__SetNoMountFace(v74, 0LL);
        faceFrameSpriteList = this->fields.faceFrameSpriteList;
        if ( !faceFrameSpriteList )
          goto LABEL_142;
        if ( v68 >= faceFrameSpriteList->max_length )
          goto LABEL_145;
        ServantStatusExplanationText = faceFrameSpriteList->m_Items[v68];
        if ( !ServantStatusExplanationText )
          goto LABEL_142;
        v77 = 0;
        goto LABEL_118;
      }
    }
    ServantStatusExplanationText = (UISprite_o *)AtlasManager__SetNotOpenFace(v75, 0LL);
LABEL_114:
    v91 = this->fields.faceFrameSpriteList;
    if ( !v91 )
      goto LABEL_142;
    if ( v68 >= v91->max_length )
      goto LABEL_145;
    ServantStatusExplanationText = v91->m_Items[v68];
    if ( !ServantStatusExplanationText )
      goto LABEL_142;
    v77 = 1;
LABEL_118:
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)ServantStatusExplanationText, v77, 0LL);
    ++v68;
  }
  while ( v68 != 4 );
  v92 = this->fields.faceSpriteList;
  if ( !v92 )
    goto LABEL_142;
  v93 = 4;
  while ( v93 < (signed int)v92->max_length )
  {
    ServantStatusListViewItemDrawFace__SetCostumeIcon(this, v93, 0LL, v70);
    v94 = this->fields.faceSpriteList;
    if ( !v94 )
      goto LABEL_142;
    if ( v93 >= v94->max_length )
      goto LABEL_145;
    ServantStatusExplanationText = v94->m_Items[v93];
    if ( !ServantStatusExplanationText )
      goto LABEL_142;
    max_length = iconSelectList->max_length;
    if ( v93 >= max_length )
    {
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)ServantStatusExplanationText, 0, 0LL);
      v105 = this->fields.faceFrameSpriteList;
      if ( !v105 )
        goto LABEL_142;
      if ( v93 >= v105->max_length )
        goto LABEL_145;
    }
    else
    {
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)ServantStatusExplanationText, 1, 0LL);
      ServantStatusExplanationText = (UISprite_o *)SingletonMonoBehaviour_object___get_Instance(*v67);
      if ( !ServantStatusExplanationText )
        goto LABEL_142;
      v96 = DataManager__GetMasterData_object_(
              (DataManager_o *)ServantStatusExplanationText,
              (const MethodInfo_303395C *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
      ServantStatusExplanationText = (UISprite_o *)ServantStatusListViewItem__get_SvtId(item, 0LL);
      if ( v93 >= iconSelectList->max_length )
        goto LABEL_145;
      if ( !v96 )
        goto LABEL_142;
      v97 = v67;
      v98 = &iconSelectList->m_Items[v93 + 1];
      ServantStatusExplanationText = (UISprite_o *)ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                                     (ServantLimitImageMaster_o *)v96,
                                                     (int32_t)ServantStatusExplanationText,
                                                     *v98,
                                                     0LL);
      v99 = this->fields.faceSpriteList;
      if ( !v99 )
        goto LABEL_142;
      if ( v93 >= v99->max_length )
        goto LABEL_145;
      v100 = v99->m_Items[v93];
      v101 = (int)ServantStatusExplanationText;
      v102 = ServantStatusListViewItem__get_SvtId(item, 0LL);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetFaceImage(v100, v102, v101, 1, 0LL, 0LL);
      ServantStatusExplanationText = (UISprite_o *)ServantStatusListViewItem__get_SvtId(item, 0LL);
      if ( v93 >= iconSelectList->max_length )
        goto LABEL_145;
      v24 = (unsigned int)ServantStatusExplanationText;
      ServantStatusExplanationText = (UISprite_o *)v108;
      if ( !v108 )
        goto LABEL_142;
      v103 = ServantCostumeMaster__GetEntity(v108, v24, *v98, 0LL);
      ServantStatusListViewItemDrawFace__SetCostumeIcon(this, v93, v103, v104);
      v105 = this->fields.faceFrameSpriteList;
      if ( !v105 )
        goto LABEL_142;
      if ( v93 >= v105->max_length )
        goto LABEL_145;
      v67 = v97;
    }
    ServantStatusExplanationText = v105->m_Items[v93];
    if ( ServantStatusExplanationText )
    {
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)ServantStatusExplanationText, v93 < max_length, 0LL);
      v92 = this->fields.faceSpriteList;
      ++v93;
      if ( v92 )
        continue;
    }
    goto LABEL_142;
  }
  ServantStatusListViewItemDrawFace__SetupButton(this, item, 1, v70);
  ServantStatusListViewItemDrawFace__SetupMask(this, item, v106);
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
  bool v18; // w29
  int32_t ConvertOverwriteIconLimitCount; // w0
  __int64 v20; // x1
  int32_t maxIconLimitCount; // w22
  struct System_Int32_array *iconSelectList; // x23
  LocalizationManager_c *v23; // x0
  float *static_fields; // x8
  float v25; // s8
  float v26; // s9
  float v27; // s10
  float v28; // s11
  struct LocalizationManager_StaticFields *v29; // x8
  float r; // s12
  float g; // s13
  float b; // s14
  float a; // s15
  __int64 v34; // x2
  ServantLimitImageMaster_o *v35; // x25
  int v36; // w8
  _BOOL4 v37; // w19
  struct UIRangeLabel_array *charaLevelTitleRangeLabelList; // x10
  UIRangeLabel_o *v39; // x26
  int v40; // w28
  System_String_o *v41; // x27
  float v42; // s3
  float v43; // s2
  float v44; // s1
  float v45; // s0
  System_String_o *v46; // x0
  System_String_o *v47; // x0
  struct UISprite_array *charaLevelSpriteList; // x8
  __int64 *v49; // x8
  struct UICommonButton_array *faceButtonList; // x8
  struct UICommonButton_array *charaLevelButtonList; // x8
  char v52; // w26
  struct UICommonButton_array *v53; // x8
  struct UILabel_array *limitCountSealLabel; // x8
  UnityEngine_Object_o *v55; // x26
  struct UnityEngine_GameObject_array *limitCountSealObjList; // x8
  UnityEngine_Object_o *v57; // x27
  bool IsServantLimitCountSeal; // w28
  System_String_o *v59; // x1
  bool v60; // nf
  struct UICommonButton_array *v61; // x8
  int v62; // w22
  int max_length; // w27
  _BOOL4 v64; // w24
  struct UIRangeLabel_array *v65; // x9
  UIRangeLabel_o *v66; // x25
  int v67; // w19
  ServantCostumeEntity_o *Entity; // x0
  System_String_o *v69; // x26
  float v70; // s3
  float v71; // s2
  float v72; // s1
  float v73; // s0
  struct UISprite_array *v74; // x8
  __int64 *v75; // x8
  struct UICommonButton_array *v76; // x8
  bool v77; // w19
  struct UICommonButton_array *v78; // x8
  char v79; // w25
  bool v80; // w19
  struct UICommonButton_array *v81; // x8
  struct UICommonButton_array *v82; // x8
  ServantCostumeMaster_o *v83; // [xsp+8h] [xbp-B8h]
  int32_t v84; // [xsp+14h] [xbp-ACh]
  unsigned int v86; // [xsp+1Ch] [xbp-A4h] BYREF
  UnityEngine_Color_o v87; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B41C25 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMasterData_ServantCostumeMaster___, item);
    sub_1BDB878(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v6);
    sub_1BDB878(&LocalizationManager_TypeInfo, v7);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v8);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_1BDB878(&StringLiteral_8264/*"LIMIT_COUNT_SELECT_SEALED"*/, v10);
    sub_1BDB878(&StringLiteral_11908/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_"*/, v11);
    sub_1BDB878(&StringLiteral_17464/*"btn_bg_20"*/, v12);
    sub_1BDB878(&StringLiteral_11909/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_CLOSE"*/, v13);
    sub_1BDB878(&StringLiteral_1/*""*/, v14);
    sub_1BDB878(&StringLiteral_17465/*"btn_bg_21"*/, v15);
    byte_4B41C25 = 1;
  }
  v86 = 0;
  Instance = (UICommonButton_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_146;
  Instance = (UICommonButton_o *)DataManager__GetMasterData_object_(
                                   (DataManager_o *)Instance,
                                   (const MethodInfo_303395C *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
  if ( !item )
    goto LABEL_146;
  v83 = (ServantCostumeMaster_o *)Instance;
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
  iconSelectList = item->fields.iconSelectList;
  v84 = ConvertOverwriteIconLimitCount;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !byte_4B3F3AF )
  {
    sub_1BDB878(&LocalizationManager_TypeInfo, v20);
    byte_4B3F3AF = 1;
  }
  v23 = LocalizationManager_TypeInfo;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v23 = LocalizationManager_TypeInfo;
  }
  static_fields = (float *)v23->static_fields;
  v25 = static_fields[20];
  v26 = static_fields[21];
  v27 = static_fields[22];
  v28 = static_fields[23];
  if ( !byte_4B3F3B0 )
  {
    sub_1BDB878(&LocalizationManager_TypeInfo, v20);
    v23 = LocalizationManager_TypeInfo;
    byte_4B3F3B0 = 1;
  }
  if ( !v23->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v23);
    v23 = LocalizationManager_TypeInfo;
  }
  v29 = v23->static_fields;
  r = v29->selectEffectColor.fields.r;
  g = v29->selectEffectColor.fields.g;
  b = v29->selectEffectColor.fields.b;
  a = v29->selectEffectColor.fields.a;
  Instance = (UICommonButton_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_146:
    sub_1BDBAD4(Instance, v17);
  Instance = (UICommonButton_o *)DataManager__GetMasterData_object_(
                                   (DataManager_o *)Instance,
                                   (const MethodInfo_303395C *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  v35 = (ServantLimitImageMaster_o *)Instance;
  v36 = 0;
  v86 = 0;
  do
  {
    if ( v36 <= maxIconLimitCount )
    {
      if ( !iconSelectList )
        goto LABEL_146;
      if ( v36 >= iconSelectList->max_length )
        goto LABEL_148;
      v37 = iconSelectList->m_Items[v36 + 1] == v84;
    }
    else
    {
      v37 = 0;
    }
    charaLevelTitleRangeLabelList = this->fields.charaLevelTitleRangeLabelList;
    if ( !charaLevelTitleRangeLabelList )
      goto LABEL_146;
    if ( v36 >= charaLevelTitleRangeLabelList->max_length )
      goto LABEL_148;
    v39 = charaLevelTitleRangeLabelList->m_Items[v36];
    v40 = v18 && v36 <= maxIconLimitCount;
    if ( v36 > maxIconLimitCount
      && (Instance = (UICommonButton_o *)ServantStatusListViewItem__get_IsMine(item, 0LL),
          ((unsigned __int8)Instance & 1) != 0) )
    {
      if ( !v39 )
        goto LABEL_146;
      v87.fields.r = v25;
      v87.fields.g = v26;
      v87.fields.b = v27;
      v87.fields.a = v28;
      UIRangeLabel__set_effectColor(v39, v87, 0LL);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v41 = (System_String_o *)StringLiteral_11909/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_CLOSE"*/;
    }
    else
    {
      v42 = v28;
      v43 = v27;
      v44 = v26;
      v45 = v25;
      if ( (v37 & v40) != 0 )
      {
        v42 = a;
        v43 = b;
        v44 = g;
        v45 = r;
      }
      if ( !v39 )
        goto LABEL_146;
      UIRangeLabel__set_effectColor(v39, *(UnityEngine_Color_o *)&v45, 0LL);
      v46 = System_Int32__ToString((int32_t)&v86, 0LL);
      v41 = System_String__Concat_62572260((System_String_o *)StringLiteral_11908/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_"*/, v46, 0LL);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v47 = LocalizationManager__Get(v41, 0LL);
    UIRangeLabel__Set(v39, v47, 0LL, 1, 0, 0, 0LL);
    charaLevelSpriteList = this->fields.charaLevelSpriteList;
    if ( !charaLevelSpriteList )
      goto LABEL_146;
    if ( v86 >= charaLevelSpriteList->max_length )
LABEL_148:
      sub_1BDBADC(Instance, v17, v34);
    Instance = (UICommonButton_o *)charaLevelSpriteList->m_Items[v86];
    if ( !Instance )
      goto LABEL_146;
    v49 = &StringLiteral_17464/*"btn_bg_20"*/;
    if ( v37 )
      v49 = &StringLiteral_17465/*"btn_bg_21"*/;
    UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v49, 0LL);
    faceButtonList = this->fields.faceButtonList;
    if ( !faceButtonList )
      goto LABEL_146;
    if ( v86 >= faceButtonList->max_length )
      goto LABEL_148;
    Instance = faceButtonList->m_Items[v86];
    if ( (v37 & v40) != 0 )
    {
      if ( !Instance )
        goto LABEL_146;
      UICommonButton__SetColliderEnable(Instance, 0, v40 == 0 || isInit, 0LL);
      charaLevelButtonList = this->fields.charaLevelButtonList;
      if ( !charaLevelButtonList )
        goto LABEL_146;
      if ( v86 >= charaLevelButtonList->max_length )
        goto LABEL_148;
      Instance = charaLevelButtonList->m_Items[v86];
      if ( !Instance )
        goto LABEL_146;
      UICommonButton__SetColliderEnable(Instance, 0, v40 == 0 || isInit, 0LL);
    }
    else
    {
      if ( !Instance )
        goto LABEL_146;
      v52 = v40 & ~v37;
      UICommonButton__SetButtonEnable(Instance, v52, v40 == 0 || isInit, 0LL);
      v53 = this->fields.charaLevelButtonList;
      if ( !v53 )
        goto LABEL_146;
      if ( v86 >= v53->max_length )
        goto LABEL_148;
      Instance = v53->m_Items[v86];
      if ( !Instance )
        goto LABEL_146;
      UICommonButton__SetButtonEnable(Instance, v52, v40 == 0 || isInit, 0LL);
    }
    limitCountSealLabel = this->fields.limitCountSealLabel;
    if ( limitCountSealLabel )
    {
      if ( v86 >= limitCountSealLabel->max_length )
        goto LABEL_148;
      v55 = (UnityEngine_Object_o *)limitCountSealLabel->m_Items[v86];
    }
    else
    {
      v55 = 0LL;
    }
    limitCountSealObjList = this->fields.limitCountSealObjList;
    if ( limitCountSealObjList )
    {
      if ( v86 >= limitCountSealObjList->max_length )
        goto LABEL_148;
      v57 = (UnityEngine_Object_o *)limitCountSealObjList->m_Items[v86];
    }
    else
    {
      v57 = 0LL;
    }
    Instance = (UICommonButton_o *)ServantStatusListViewItem__get_SvtId(item, 0LL);
    if ( !iconSelectList )
      goto LABEL_146;
    if ( v86 >= iconSelectList->max_length )
      goto LABEL_148;
    if ( !v35 )
      goto LABEL_146;
    IsServantLimitCountSeal = ServantLimitImageMaster__IsServantLimitCountSeal(
                                v35,
                                (int32_t)Instance,
                                iconSelectList->m_Items[v86 + 1] + 1,
                                0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Instance = (UICommonButton_o *)UnityEngine_Object__op_Inequality(v57, 0LL, 0LL);
    if ( IsServantLimitCountSeal )
    {
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v57 )
          goto LABEL_146;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v57, 1, 0LL);
      }
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Instance = (UICommonButton_o *)UnityEngine_Object__op_Inequality(v55, 0LL, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        Instance = (UICommonButton_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8264/*"LIMIT_COUNT_SELECT_SEALED"*/, 0LL);
        if ( !v55 )
          goto LABEL_146;
        v59 = (System_String_o *)Instance;
        goto LABEL_90;
      }
    }
    else
    {
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v57 )
          goto LABEL_146;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v57, 0, 0LL);
      }
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Instance = (UICommonButton_o *)UnityEngine_Object__op_Inequality(v55, 0LL, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v55 )
          goto LABEL_146;
        v59 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_90:
        UILabel__set_text((UILabel_o *)v55, v59, 0LL);
      }
    }
    v60 = (int)(v86 - 3) < 0;
    v36 = ++v86;
  }
  while ( v60 != __OFSUB__(v86, 4) );
  v61 = this->fields.charaLevelButtonList;
  if ( !v61 )
    goto LABEL_146;
  v62 = 4;
  while ( v62 < (signed int)v61->max_length )
  {
    max_length = iconSelectList->max_length;
    if ( v62 >= max_length )
    {
      v64 = 0;
    }
    else
    {
      if ( v62 >= (unsigned int)max_length )
        goto LABEL_148;
      v64 = iconSelectList->m_Items[v62 + 1] == v84;
    }
    v65 = this->fields.charaLevelTitleRangeLabelList;
    if ( !v65 )
      goto LABEL_146;
    if ( v62 >= v65->max_length )
      goto LABEL_148;
    v66 = v65->m_Items[v62];
    v67 = v18 && v62 < max_length;
    if ( v62 >= max_length )
    {
      if ( !v66 )
        goto LABEL_146;
      UIRangeLabel__Clear(v65->m_Items[v62], 0LL);
    }
    else
    {
      Instance = (UICommonButton_o *)ServantStatusListViewItem__get_SvtId(item, 0LL);
      if ( v62 >= iconSelectList->max_length )
        goto LABEL_148;
      v17 = (unsigned int)Instance;
      Instance = (UICommonButton_o *)v83;
      if ( !v83 )
        goto LABEL_146;
      Entity = ServantCostumeMaster__GetEntity(v83, v17, iconSelectList->m_Items[v62 + 1], 0LL);
      if ( Entity )
      {
        Instance = (UICommonButton_o *)ServantCostumeEntity__getShortName(Entity, 0LL);
        v69 = (System_String_o *)Instance;
      }
      else
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        if ( !byte_4B3FEFD )
        {
          sub_1BDB878(&LocalizationManager_TypeInfo, v17);
          byte_4B3FEFD = 1;
        }
        Instance = (UICommonButton_o *)LocalizationManager_TypeInfo;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          Instance = (UICommonButton_o *)LocalizationManager_TypeInfo;
        }
        v69 = *(System_String_o **)(*(_QWORD *)&Instance[1].fields.specifyHoverColor.fields.b + 32LL);
      }
      v70 = v28;
      v71 = v27;
      v72 = v26;
      v73 = v25;
      if ( (v64 & v67) != 0 )
      {
        v70 = a;
        v71 = b;
        v72 = g;
        v73 = r;
      }
      if ( !v66 )
        goto LABEL_146;
      UIRangeLabel__set_effectColor(v66, *(UnityEngine_Color_o *)&v73, 0LL);
      UIRangeLabel__Set(v66, v69, 0LL, 1, 0, 0, 0LL);
    }
    v74 = this->fields.charaLevelSpriteList;
    if ( !v74 )
      goto LABEL_146;
    if ( v62 >= v74->max_length )
      goto LABEL_148;
    Instance = (UICommonButton_o *)v74->m_Items[v62];
    if ( !Instance )
      goto LABEL_146;
    v75 = &StringLiteral_17464/*"btn_bg_20"*/;
    if ( v64 )
      v75 = &StringLiteral_17465/*"btn_bg_21"*/;
    UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v75, 0LL);
    v76 = this->fields.faceButtonList;
    if ( !v76 )
      goto LABEL_146;
    if ( v62 >= v76->max_length )
      goto LABEL_148;
    Instance = v76->m_Items[v62];
    if ( (v64 & v67) != 0 )
    {
      if ( !Instance )
        goto LABEL_146;
      v77 = v67 == 0 || isInit;
      UICommonButton__SetColliderEnable(Instance, 0, v77, 0LL);
      v78 = this->fields.charaLevelButtonList;
      if ( !v78 )
        goto LABEL_146;
      if ( v62 >= v78->max_length )
        goto LABEL_148;
      Instance = v78->m_Items[v62];
      if ( !Instance )
        goto LABEL_146;
      UICommonButton__SetColliderEnable(Instance, 0, v77, 0LL);
    }
    else if ( v62 >= max_length )
    {
      if ( !Instance )
        goto LABEL_146;
      Instance = (UICommonButton_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      if ( !Instance )
        goto LABEL_146;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
      v82 = this->fields.charaLevelButtonList;
      if ( !v82 )
        goto LABEL_146;
      if ( v62 >= v82->max_length )
        goto LABEL_148;
      Instance = v82->m_Items[v62];
      if ( !Instance )
        goto LABEL_146;
      Instance = (UICommonButton_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      if ( !Instance )
        goto LABEL_146;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
    }
    else
    {
      if ( !Instance )
        goto LABEL_146;
      v79 = v67 & ~v64;
      v80 = v67 == 0 || isInit;
      UICommonButton__SetButtonEnable(Instance, v79, v80, 0LL);
      v81 = this->fields.charaLevelButtonList;
      if ( !v81 )
        goto LABEL_146;
      if ( v62 >= v81->max_length )
        goto LABEL_148;
      Instance = v81->m_Items[v62];
      if ( !Instance )
        goto LABEL_146;
      UICommonButton__SetButtonEnable(Instance, v79, v80, 0LL);
    }
    v61 = this->fields.charaLevelButtonList;
    ++v62;
    if ( !v61 )
      goto LABEL_146;
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
  struct UISprite_o *baseSprite; // x8
  ServantStatusListViewItemDrawFace_o *v8; // x21
  System_String_o *Empty; // x20
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_4B41C26 & 1) == 0 )
  {
    sub_1BDB878(&LocalizationManager_TypeInfo, item);
    sub_1BDB878(&string_TypeInfo, v5);
    this = (ServantStatusListViewItemDrawFace_o *)sub_1BDB878(&StringLiteral_11931/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_INFO_OWN_SETTING_FACE"*/, v6);
    byte_4B41C26 = 1;
  }
  if ( !item )
LABEL_24:
    sub_1BDBAD4(this, item);
  if ( !item->fields.userSvtEntity )
  {
    this = (ServantStatusListViewItemDrawFace_o *)v4->fields.maskBase;
    if ( !this )
      goto LABEL_24;
LABEL_18:
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    return;
  }
  this = (ServantStatusListViewItemDrawFace_o *)v4->fields.maskBase;
  if ( !this )
    goto LABEL_24;
  if ( !item->fields.isEnableOwnRandomSetting )
    goto LABEL_18;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  baseSprite = v4->fields.baseSprite;
  if ( !baseSprite )
    goto LABEL_24;
  this = (ServantStatusListViewItemDrawFace_o *)v4->fields.maskSprite;
  if ( !this )
    goto LABEL_24;
  UIWidget__set_height((UIWidget_o *)this, baseSprite->fields.mHeight, 0LL);
  this = (ServantStatusListViewItemDrawFace_o *)v4->fields.maskSprite;
  if ( !this )
    goto LABEL_24;
  UIWidget__ResizeCollider((UIWidget_o *)this, 0LL);
  this = (ServantStatusListViewItemDrawFace_o *)v4->fields.maskSprite;
  if ( !this )
    goto LABEL_24;
  this = (ServantStatusListViewItemDrawFace_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)this,
                                                  0LL);
  if ( !v4->fields.baseSprite )
    goto LABEL_24;
  v8 = this;
  this = (ServantStatusListViewItemDrawFace_o *)UnityEngine_Component__get_transform(
                                                  (UnityEngine_Component_o *)v4->fields.baseSprite,
                                                  0LL);
  if ( !this )
    goto LABEL_24;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  GameObjectExtensions__SetLocalPositionY((UnityEngine_GameObject_o *)v8, localPosition.fields.y, 0LL);
  if ( item->fields.isEnableOwnRandomSetting )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Empty = LocalizationManager__Get((System_String_o *)StringLiteral_11931/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_INFO_OWN_SETTING_FACE"*/, 0LL);
  }
  else
  {
    Empty = string_TypeInfo->static_fields->Empty;
  }
  this = (ServantStatusListViewItemDrawFace_o *)v4->fields.maskInfoLabel;
  if ( !this )
    goto LABEL_24;
  UILabel__set_overflowMethod((UILabel_o *)this, 2, 0LL);
  this = (ServantStatusListViewItemDrawFace_o *)v4->fields.maskInfoLabel;
  if ( !this )
    goto LABEL_24;
  UILabel__set_text((UILabel_o *)this, Empty, 0LL);
  this = (ServantStatusListViewItemDrawFace_o *)v4->fields.maskInfoLabel;
  if ( !this )
    goto LABEL_24;
  UILabel__SetCondensedScale((UILabel_o *)this, v4->fields.MASK_LABEL_MAX_WIDTH, 0, 0LL);
}