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
  float v5; // s1
  struct UISprite_array *v6; // x8
  float v7; // s8
  float v8; // s1
  struct UISprite_o *baseSprite; // x9
  int max_length; // w8
  int32_t mHeight; // w11
  bool v12; // cc
  int v13; // w8
  float v14; // s0
  float v15; // s1
  float v16; // s2
  int v17; // w8
  float v18; // s8
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4

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
      sub_1BD36BC(this, method);
    if ( (this = (ServantStatusListViewItemDrawFace_o *)v6->m_Items[4]) == 0LL
      || (v7 = v5,
          (this = (ServantStatusListViewItemDrawFace_o *)UnityEngine_Component__get_transform(
                                                           (UnityEngine_Component_o *)this,
                                                           0LL)) == 0LL)
      || ((*(UnityEngine_Vector3_o *)(&v8 - 1) = UnityEngine_Transform__get_localPosition(
                                                   (UnityEngine_Transform_o *)this,
                                                   0LL),
           charaLevelSpriteList = v3->fields.charaLevelSpriteList,
           (float)(v7 - v8) != INFINITY)
        ? (facePitch = (int)(float)(v7 - v8))
        : (facePitch = 0x80000000),
          v3->fields.facePitch = facePitch,
          !charaLevelSpriteList) )
    {
LABEL_28:
      sub_1BD36B4(this, method);
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
  v12 = max_length < 12;
  this = (ServantStatusListViewItemDrawFace_o *)v3->fields.titleSprite;
  v13 = 1 - max_length / 4;
  if ( v12 )
    v13 = -1;
  v3->fields.baseSize.fields.x = (float)baseSprite->fields.mWidth;
  v3->fields.baseSize.fields.y = (float)(mHeight + v13 * facePitch);
  v3->fields.baseSize.fields.z = 0.0;
  if ( !this )
    goto LABEL_28;
  this = (ServantStatusListViewItemDrawFace_o *)UnityEngine_Component__get_transform(
                                                  (UnityEngine_Component_o *)this,
                                                  0LL);
  if ( !this )
    goto LABEL_28;
  *(UnityEngine_Vector3_o *)&v14 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  this = (ServantStatusListViewItemDrawFace_o *)v3->fields.faceBase;
  v17 = facePitch >= 0 ? facePitch : facePitch + 1;
  v18 = (float)(v17 >> 1);
  v3->fields.titleBasePosition.fields.x = v14;
  v3->fields.titleBasePosition.fields.y = v15 - v18;
  v3->fields.titleBasePosition.fields.z = v16;
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
  v3->fields.faceBasePosition.fields.y = localPosition.fields.y - v18;
  v3->fields.faceBasePosition.fields.z = localPosition.fields.z;
  if ( !this )
    goto LABEL_28;
  this = (ServantStatusListViewItemDrawFace_o *)UnityEngine_Component__get_transform(
                                                  (UnityEngine_Component_o *)this,
                                                  0LL);
  if ( !this )
    goto LABEL_28;
  v20 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  v3->fields.explanationBasePosition.fields.x = v20.fields.x;
  v3->fields.explanationBasePosition.fields.y = v20.fields.y + v18;
  v3->fields.explanationBasePosition.fields.z = v20.fields.z;
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
  if ( (byte_4B3418D & 1) == 0 )
  {
    sub_1BD3458(&AtlasManager_TypeInfo, *(_QWORD *)&index);
    sub_1BD3458(&UnityEngine_Object_TypeInfo, v7);
    sub_1BD3458(&StringLiteral_23998/*"svt_costume_icon_"*/, v8);
    this = (ServantStatusListViewItemDrawFace_o *)sub_1BD3458(&StringLiteral_1/*""*/, v9);
    byte_4B3418D = 1;
  }
  faceSpriteCostumeIconList = v6->fields.faceSpriteCostumeIconList;
  if ( !faceSpriteCostumeIconList )
    goto LABEL_39;
  if ( faceSpriteCostumeIconList->max_length <= index )
LABEL_40:
    sub_1BD36BC(this, *(_QWORD *)&index);
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
        v19 = System_String__Concat_62525248((System_String_o *)StringLiteral_23998/*"svt_costume_icon_"*/, v18, 0LL);
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
                    sub_1BD36B4(this, *(_QWORD *)&index);
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
  const MethodInfo_37FDC48 **v67; // x29
  unsigned __int64 v68; // x24
  int32_t *v69; // x23
  const MethodInfo *v70; // x3
  struct UISprite_array *v71; // x8
  char v72; // w25
  UISprite_o *v73; // x26
  UISprite_o *v74; // x0
  struct UISprite_array *faceFrameSpriteList; // x8
  bool v76; // w1
  int v77; // w8
  int32_t v78; // w25
  int32_t SvtId; // w26
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v80; // kr00_16
  Il2CppObject *v81; // x25
  struct UISprite_array *faceSpriteList; // x8
  UISprite_o *v83; // x26
  int32_t v84; // w25
  int32_t v85; // w27
  int32_t v86; // w2
  const MethodInfo *v87; // x3
  struct UISprite_array *v88; // x8
  UISprite_o *v89; // x25
  struct UISprite_array *v90; // x8
  struct UISprite_array *v91; // x8
  int32_t v92; // w21
  struct UISprite_array *v93; // x8
  signed int max_length; // w26
  Il2CppObject *v95; // x23
  const MethodInfo_37FDC48 **v96; // x22
  int32_t *v97; // x29
  struct UISprite_array *v98; // x8
  UISprite_o *v99; // x24
  int32_t v100; // w23
  int32_t v101; // w25
  ServantCostumeEntity_o *v102; // x0
  const MethodInfo *v103; // x3
  struct UISprite_array *v104; // x8
  const MethodInfo *v105; // x2
  ServantLimitSpoilerProtectionMaster_o *MasterData_object; // [xsp+8h] [xbp-98h]
  ServantCostumeMaster_o *v107; // [xsp+10h] [xbp-90h]
  ServantCostumeEntity_o *entity; // [xsp+18h] [xbp-88h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v109; // 0:x0.16
  UnityEngine_Vector3_o v110; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v111; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v112; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v113; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B3418C & 1) == 0 )
  {
    sub_1BD3458(&AtlasManager_TypeInfo, item);
    sub_1BD3458(&Method_DataManager_GetMasterData_ServantCostumeMaster___, v7);
    sub_1BD3458(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v8);
    sub_1BD3458(&Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___, v9);
    sub_1BD3458(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v10);
    sub_1BD3458(&DataManager_TypeInfo, v11);
    sub_1BD3458(&LocalizationManager_TypeInfo, v12);
    sub_1BD3458(&UnityEngine_Object_TypeInfo, v13);
    sub_1BD3458(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
    sub_1BD3458(&OptionManager_TypeInfo, v15);
    sub_1BD3458(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_1BD3458(&StringLiteral_12022/*"SERVANT_STATUS_EXPLANATION_FACE"*/, v17);
    sub_1BD3458(&StringLiteral_12024/*"SERVANT_STATUS_EXPLANATION_FACE3"*/, v18);
    sub_1BD3458(&StringLiteral_12023/*"SERVANT_STATUS_EXPLANATION_FACE2"*/, v19);
    sub_1BD3458(&StringLiteral_12025/*"SERVANT_STATUS_EXPLANATION_FACE_LIMIT_COUNT_SEALED_MSG"*/, v20);
    byte_4B3418C = 1;
  }
  entity = 0LL;
  this->fields.dispMode = mode;
  if ( !item || !mode )
    return;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F31630 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  if ( item->fields.userSvtEntity )
  {
    explanationLabel = this->fields.explanationLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    ServantStatusExplanationText = (UISprite_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12022/*"SERVANT_STATUS_EXPLANATION_FACE"*/, 0LL);
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
    ServantStatusExplanationText = (UISprite_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12023/*"SERVANT_STATUS_EXPLANATION_FACE2"*/, 0LL);
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
    ServantStatusExplanationText = (UISprite_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12024/*"SERVANT_STATUS_EXPLANATION_FACE3"*/, 0LL);
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
  *(_QWORD *)&v109.fields.currentCryptoKey = v27;
  *(_QWORD *)&v109.fields.fakeValue = v26;
  ServantStatusExplanationText = (UISprite_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47136620(
                                                 v109,
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
                                                   (System_String_o *)StringLiteral_12025/*"SERVANT_STATUS_EXPLANATION_FACE_LIMIT_COUNT_SEALED_MSG"*/,
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
                                                    0LL);
    v37 = System_String__Format(v35, LimitCountSealedServantName, 0LL);
    v38 = System_String__Concat_62525248(mText, v37, 0LL);
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
    v110.fields.x = x;
    v110.fields.y = v52;
    v110.fields.z = z;
    UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)ServantStatusExplanationText, v110, 0LL);
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
  v111.fields.y = v57 + v59;
  v111.fields.x = v56;
  v111.fields.z = v58;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)ServantStatusExplanationText, v111, 0LL);
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
  v112.fields.y = v61 + v59;
  v112.fields.x = v60;
  v112.fields.z = v62;
  v63 = v41;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)ServantStatusExplanationText, v112, 0LL);
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
  v113.fields.x = v65;
  v113.fields.y = v64;
  v113.fields.z = v66;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)ServantStatusExplanationText, v113, 0LL);
  v67 = (const MethodInfo_37FDC48 **)&Method_SingletonMonoBehaviour_DataManager__get_Instance__;
  ServantStatusExplanationText = (UISprite_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !ServantStatusExplanationText
    || (MasterData_object = (ServantLimitSpoilerProtectionMaster_o *)DataManager__GetMasterData_object_(
                                                                       (DataManager_o *)ServantStatusExplanationText,
                                                                       (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___),
        (ServantStatusExplanationText = (UISprite_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL) )
  {
LABEL_142:
    sub_1BD36B4(ServantStatusExplanationText, v24);
  }
  v68 = 0LL;
  v69 = &iconSelectList->m_Items[1];
  v107 = (ServantCostumeMaster_o *)DataManager__GetMasterData_object_(
                                     (DataManager_o *)ServantStatusExplanationText,
                                     (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
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
      v77 = v69[v68];
      if ( v77 >= 11 )
        v78 = v69[v68];
      else
        v78 = v77 + 1;
      SvtId = ServantStatusListViewItem__get_SvtId(item, 0LL);
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      v80 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(SvtId, 0LL);
      v24 = *(_QWORD *)&v80.fields.fakeValue;
      ServantStatusExplanationText = (UISprite_o *)MasterData_object;
      if ( !MasterData_object )
        goto LABEL_142;
      ServantStatusExplanationText = (UISprite_o *)ServantLimitSpoilerProtectionMaster__IsSpoilerLimitCount(
                                                     MasterData_object,
                                                     v80,
                                                     v78,
                                                     0LL);
      if ( ((unsigned __int8)ServantStatusExplanationText & 1) != 0 )
      {
LABEL_98:
        ServantStatusExplanationText = (UISprite_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !ServantStatusExplanationText )
          goto LABEL_142;
        v81 = DataManager__GetMasterData_object_(
                (DataManager_o *)ServantStatusExplanationText,
                (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
        ServantStatusExplanationText = (UISprite_o *)ServantStatusListViewItem__get_SvtId(item, 0LL);
        if ( v68 >= iconSelectList->max_length )
          goto LABEL_145;
        if ( !v81 )
          goto LABEL_142;
        ServantStatusExplanationText = (UISprite_o *)ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                                       (ServantLimitImageMaster_o *)v81,
                                                       (int32_t)ServantStatusExplanationText,
                                                       v69[v68],
                                                       0LL);
        faceSpriteList = this->fields.faceSpriteList;
        if ( !faceSpriteList )
          goto LABEL_142;
        if ( v68 >= faceSpriteList->max_length )
          goto LABEL_145;
        v83 = faceSpriteList->m_Items[v68];
        v84 = (int)ServantStatusExplanationText;
        v85 = ServantStatusListViewItem__get_SvtId(item, 0LL);
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        AtlasManager__SetFaceImage(v83, v85, v84, 0LL);
        ServantStatusExplanationText = (UISprite_o *)ServantStatusListViewItem__get_SvtId(item, 0LL);
        if ( v68 >= iconSelectList->max_length )
LABEL_145:
          sub_1BD36BC(ServantStatusExplanationText, v24);
        v86 = (int)ServantStatusExplanationText;
        ServantStatusExplanationText = (UISprite_o *)v107;
        if ( !v107 )
          goto LABEL_142;
        ServantCostumeMaster__TryGetEntity(v107, &entity, v86, v69[v68], 0LL);
        ServantStatusListViewItemDrawFace__SetCostumeIcon(this, v68, entity, v87);
        goto LABEL_114;
      }
      v88 = this->fields.faceSpriteList;
      if ( !v88 )
        goto LABEL_142;
      if ( v68 >= v88->max_length )
        goto LABEL_145;
      v89 = v88->m_Items[v68];
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      v74 = v89;
    }
    else
    {
LABEL_74:
      ServantStatusExplanationText = (UISprite_o *)ServantStatusListViewItem__get_IsMine(item, 0LL);
      v71 = this->fields.faceSpriteList;
      if ( !v71 )
        goto LABEL_142;
      if ( v68 >= v71->max_length )
        goto LABEL_145;
      v72 = (char)ServantStatusExplanationText;
      v73 = v71->m_Items[v68];
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      v74 = v73;
      if ( (v72 & 1) != 0 )
      {
        ServantStatusExplanationText = (UISprite_o *)AtlasManager__SetNoMountFace(v73, 0LL);
        faceFrameSpriteList = this->fields.faceFrameSpriteList;
        if ( !faceFrameSpriteList )
          goto LABEL_142;
        if ( v68 >= faceFrameSpriteList->max_length )
          goto LABEL_145;
        ServantStatusExplanationText = faceFrameSpriteList->m_Items[v68];
        if ( !ServantStatusExplanationText )
          goto LABEL_142;
        v76 = 0;
        goto LABEL_118;
      }
    }
    ServantStatusExplanationText = (UISprite_o *)AtlasManager__SetNotOpenFace(v74, 0LL);
LABEL_114:
    v90 = this->fields.faceFrameSpriteList;
    if ( !v90 )
      goto LABEL_142;
    if ( v68 >= v90->max_length )
      goto LABEL_145;
    ServantStatusExplanationText = v90->m_Items[v68];
    if ( !ServantStatusExplanationText )
      goto LABEL_142;
    v76 = 1;
LABEL_118:
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)ServantStatusExplanationText, v76, 0LL);
    ++v68;
  }
  while ( v68 != 4 );
  v91 = this->fields.faceSpriteList;
  if ( !v91 )
    goto LABEL_142;
  v92 = 4;
  while ( v92 < (signed int)v91->max_length )
  {
    ServantStatusListViewItemDrawFace__SetCostumeIcon(this, v92, 0LL, v70);
    v93 = this->fields.faceSpriteList;
    if ( !v93 )
      goto LABEL_142;
    if ( v92 >= v93->max_length )
      goto LABEL_145;
    ServantStatusExplanationText = v93->m_Items[v92];
    if ( !ServantStatusExplanationText )
      goto LABEL_142;
    max_length = iconSelectList->max_length;
    if ( v92 >= max_length )
    {
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)ServantStatusExplanationText, 0, 0LL);
      v104 = this->fields.faceFrameSpriteList;
      if ( !v104 )
        goto LABEL_142;
      if ( v92 >= v104->max_length )
        goto LABEL_145;
    }
    else
    {
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)ServantStatusExplanationText, 1, 0LL);
      ServantStatusExplanationText = (UISprite_o *)SingletonMonoBehaviour_object___get_Instance(*v67);
      if ( !ServantStatusExplanationText )
        goto LABEL_142;
      v95 = DataManager__GetMasterData_object_(
              (DataManager_o *)ServantStatusExplanationText,
              (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
      ServantStatusExplanationText = (UISprite_o *)ServantStatusListViewItem__get_SvtId(item, 0LL);
      if ( v92 >= iconSelectList->max_length )
        goto LABEL_145;
      if ( !v95 )
        goto LABEL_142;
      v96 = v67;
      v97 = &iconSelectList->m_Items[v92 + 1];
      ServantStatusExplanationText = (UISprite_o *)ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                                     (ServantLimitImageMaster_o *)v95,
                                                     (int32_t)ServantStatusExplanationText,
                                                     *v97,
                                                     0LL);
      v98 = this->fields.faceSpriteList;
      if ( !v98 )
        goto LABEL_142;
      if ( v92 >= v98->max_length )
        goto LABEL_145;
      v99 = v98->m_Items[v92];
      v100 = (int)ServantStatusExplanationText;
      v101 = ServantStatusListViewItem__get_SvtId(item, 0LL);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetFaceImage(v99, v101, v100, 0LL);
      ServantStatusExplanationText = (UISprite_o *)ServantStatusListViewItem__get_SvtId(item, 0LL);
      if ( v92 >= iconSelectList->max_length )
        goto LABEL_145;
      v24 = (unsigned int)ServantStatusExplanationText;
      ServantStatusExplanationText = (UISprite_o *)v107;
      if ( !v107 )
        goto LABEL_142;
      v102 = ServantCostumeMaster__GetEntity(v107, v24, *v97, 0LL);
      ServantStatusListViewItemDrawFace__SetCostumeIcon(this, v92, v102, v103);
      v104 = this->fields.faceFrameSpriteList;
      if ( !v104 )
        goto LABEL_142;
      if ( v92 >= v104->max_length )
        goto LABEL_145;
      v67 = v96;
    }
    ServantStatusExplanationText = v104->m_Items[v92];
    if ( ServantStatusExplanationText )
    {
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)ServantStatusExplanationText, v92 < max_length, 0LL);
      v91 = this->fields.faceSpriteList;
      ++v92;
      if ( v91 )
        continue;
    }
    goto LABEL_142;
  }
  ServantStatusListViewItemDrawFace__SetupButton(this, item, 1, v70);
  ServantStatusListViewItemDrawFace__SetupMask(this, item, v105);
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
  ServantLimitImageMaster_o *v34; // x25
  int v35; // w8
  _BOOL4 v36; // w19
  struct UIRangeLabel_array *charaLevelTitleRangeLabelList; // x10
  UIRangeLabel_o *v38; // x26
  int v39; // w28
  System_String_o *v40; // x27
  float v41; // s3
  float v42; // s2
  float v43; // s1
  float v44; // s0
  System_String_o *v45; // x0
  System_String_o *v46; // x0
  struct UISprite_array *charaLevelSpriteList; // x8
  __int64 *v48; // x8
  struct UICommonButton_array *faceButtonList; // x8
  struct UICommonButton_array *charaLevelButtonList; // x8
  char v51; // w26
  struct UICommonButton_array *v52; // x8
  struct UILabel_array *limitCountSealLabel; // x8
  UnityEngine_Object_o *v54; // x26
  struct UnityEngine_GameObject_array *limitCountSealObjList; // x8
  UnityEngine_Object_o *v56; // x27
  bool IsServantLimitCountSeal; // w28
  System_String_o *v58; // x1
  bool v59; // nf
  struct UICommonButton_array *v60; // x8
  int v61; // w22
  int max_length; // w27
  _BOOL4 v63; // w24
  struct UIRangeLabel_array *v64; // x9
  UIRangeLabel_o *v65; // x25
  int v66; // w19
  ServantCostumeEntity_o *Entity; // x0
  System_String_o *v68; // x26
  float v69; // s3
  float v70; // s2
  float v71; // s1
  float v72; // s0
  struct UISprite_array *v73; // x8
  __int64 *v74; // x8
  struct UICommonButton_array *v75; // x8
  bool v76; // w19
  struct UICommonButton_array *v77; // x8
  char v78; // w25
  bool v79; // w19
  struct UICommonButton_array *v80; // x8
  struct UICommonButton_array *v81; // x8
  ServantCostumeMaster_o *v82; // [xsp+8h] [xbp-B8h]
  int32_t v83; // [xsp+14h] [xbp-ACh]
  unsigned int v85; // [xsp+1Ch] [xbp-A4h] BYREF
  UnityEngine_Color_o v86; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B3418E & 1) == 0 )
  {
    sub_1BD3458(&Method_DataManager_GetMasterData_ServantCostumeMaster___, item);
    sub_1BD3458(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v6);
    sub_1BD3458(&LocalizationManager_TypeInfo, v7);
    sub_1BD3458(&UnityEngine_Object_TypeInfo, v8);
    sub_1BD3458(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_1BD3458(&StringLiteral_8388/*"LIMIT_COUNT_SELECT_SEALED"*/, v10);
    sub_1BD3458(&StringLiteral_12042/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_"*/, v11);
    sub_1BD3458(&StringLiteral_17678/*"btn_bg_20"*/, v12);
    sub_1BD3458(&StringLiteral_12043/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_CLOSE"*/, v13);
    sub_1BD3458(&StringLiteral_1/*""*/, v14);
    sub_1BD3458(&StringLiteral_17679/*"btn_bg_21"*/, v15);
    byte_4B3418E = 1;
  }
  v85 = 0;
  Instance = (UICommonButton_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_146;
  Instance = (UICommonButton_o *)DataManager__GetMasterData_object_(
                                   (DataManager_o *)Instance,
                                   (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
  if ( !item )
    goto LABEL_146;
  v82 = (ServantCostumeMaster_o *)Instance;
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
  v83 = ConvertOverwriteIconLimitCount;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !byte_4B320B5 )
  {
    sub_1BD3458(&LocalizationManager_TypeInfo, v20);
    byte_4B320B5 = 1;
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
  if ( !byte_4B320B6 )
  {
    sub_1BD3458(&LocalizationManager_TypeInfo, v20);
    v23 = LocalizationManager_TypeInfo;
    byte_4B320B6 = 1;
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
  Instance = (UICommonButton_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_146:
    sub_1BD36B4(Instance, v17);
  Instance = (UICommonButton_o *)DataManager__GetMasterData_object_(
                                   (DataManager_o *)Instance,
                                   (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  v34 = (ServantLimitImageMaster_o *)Instance;
  v35 = 0;
  v85 = 0;
  do
  {
    if ( v35 <= maxIconLimitCount )
    {
      if ( !iconSelectList )
        goto LABEL_146;
      if ( v35 >= iconSelectList->max_length )
        goto LABEL_148;
      v36 = iconSelectList->m_Items[v35 + 1] == v83;
    }
    else
    {
      v36 = 0;
    }
    charaLevelTitleRangeLabelList = this->fields.charaLevelTitleRangeLabelList;
    if ( !charaLevelTitleRangeLabelList )
      goto LABEL_146;
    if ( v35 >= charaLevelTitleRangeLabelList->max_length )
      goto LABEL_148;
    v38 = charaLevelTitleRangeLabelList->m_Items[v35];
    v39 = v18 && v35 <= maxIconLimitCount;
    if ( v35 > maxIconLimitCount
      && (Instance = (UICommonButton_o *)ServantStatusListViewItem__get_IsMine(item, 0LL),
          ((unsigned __int8)Instance & 1) != 0) )
    {
      if ( !v38 )
        goto LABEL_146;
      v86.fields.r = v25;
      v86.fields.g = v26;
      v86.fields.b = v27;
      v86.fields.a = v28;
      UIRangeLabel__set_effectColor(v38, v86, 0LL);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v40 = (System_String_o *)StringLiteral_12043/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_CLOSE"*/;
    }
    else
    {
      v41 = v28;
      v42 = v27;
      v43 = v26;
      v44 = v25;
      if ( (v36 & v39) != 0 )
      {
        v41 = a;
        v42 = b;
        v43 = g;
        v44 = r;
      }
      if ( !v38 )
        goto LABEL_146;
      UIRangeLabel__set_effectColor(v38, *(UnityEngine_Color_o *)&v44, 0LL);
      v45 = System_Int32__ToString((int32_t)&v85, 0LL);
      v40 = System_String__Concat_62525248((System_String_o *)StringLiteral_12042/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_"*/, v45, 0LL);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v46 = LocalizationManager__Get(v40, 0LL);
    UIRangeLabel__Set(v38, v46, 0LL, 1, 0, 0LL);
    charaLevelSpriteList = this->fields.charaLevelSpriteList;
    if ( !charaLevelSpriteList )
      goto LABEL_146;
    if ( v85 >= charaLevelSpriteList->max_length )
LABEL_148:
      sub_1BD36BC(Instance, v17);
    Instance = (UICommonButton_o *)charaLevelSpriteList->m_Items[v85];
    if ( !Instance )
      goto LABEL_146;
    v48 = &StringLiteral_17678/*"btn_bg_20"*/;
    if ( v36 )
      v48 = &StringLiteral_17679/*"btn_bg_21"*/;
    UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v48, 0LL);
    faceButtonList = this->fields.faceButtonList;
    if ( !faceButtonList )
      goto LABEL_146;
    if ( v85 >= faceButtonList->max_length )
      goto LABEL_148;
    Instance = faceButtonList->m_Items[v85];
    if ( (v36 & v39) != 0 )
    {
      if ( !Instance )
        goto LABEL_146;
      UICommonButton__SetColliderEnable(Instance, 0, v39 == 0 || isInit, 0LL);
      charaLevelButtonList = this->fields.charaLevelButtonList;
      if ( !charaLevelButtonList )
        goto LABEL_146;
      if ( v85 >= charaLevelButtonList->max_length )
        goto LABEL_148;
      Instance = charaLevelButtonList->m_Items[v85];
      if ( !Instance )
        goto LABEL_146;
      UICommonButton__SetColliderEnable(Instance, 0, v39 == 0 || isInit, 0LL);
    }
    else
    {
      if ( !Instance )
        goto LABEL_146;
      v51 = v39 & ~v36;
      UICommonButton__SetButtonEnable(Instance, v51, v39 == 0 || isInit, 0LL);
      v52 = this->fields.charaLevelButtonList;
      if ( !v52 )
        goto LABEL_146;
      if ( v85 >= v52->max_length )
        goto LABEL_148;
      Instance = v52->m_Items[v85];
      if ( !Instance )
        goto LABEL_146;
      UICommonButton__SetButtonEnable(Instance, v51, v39 == 0 || isInit, 0LL);
    }
    limitCountSealLabel = this->fields.limitCountSealLabel;
    if ( limitCountSealLabel )
    {
      if ( v85 >= limitCountSealLabel->max_length )
        goto LABEL_148;
      v54 = (UnityEngine_Object_o *)limitCountSealLabel->m_Items[v85];
    }
    else
    {
      v54 = 0LL;
    }
    limitCountSealObjList = this->fields.limitCountSealObjList;
    if ( limitCountSealObjList )
    {
      if ( v85 >= limitCountSealObjList->max_length )
        goto LABEL_148;
      v56 = (UnityEngine_Object_o *)limitCountSealObjList->m_Items[v85];
    }
    else
    {
      v56 = 0LL;
    }
    Instance = (UICommonButton_o *)ServantStatusListViewItem__get_SvtId(item, 0LL);
    if ( !iconSelectList )
      goto LABEL_146;
    if ( v85 >= iconSelectList->max_length )
      goto LABEL_148;
    if ( !v34 )
      goto LABEL_146;
    IsServantLimitCountSeal = ServantLimitImageMaster__IsServantLimitCountSeal(
                                v34,
                                (int32_t)Instance,
                                iconSelectList->m_Items[v85 + 1] + 1,
                                0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Instance = (UICommonButton_o *)UnityEngine_Object__op_Inequality(v56, 0LL, 0LL);
    if ( IsServantLimitCountSeal )
    {
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v56 )
          goto LABEL_146;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v56, 1, 0LL);
      }
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Instance = (UICommonButton_o *)UnityEngine_Object__op_Inequality(v54, 0LL, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        Instance = (UICommonButton_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8388/*"LIMIT_COUNT_SELECT_SEALED"*/, 0LL);
        if ( !v54 )
          goto LABEL_146;
        v58 = (System_String_o *)Instance;
        goto LABEL_90;
      }
    }
    else
    {
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v56 )
          goto LABEL_146;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v56, 0, 0LL);
      }
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Instance = (UICommonButton_o *)UnityEngine_Object__op_Inequality(v54, 0LL, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v54 )
          goto LABEL_146;
        v58 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_90:
        UILabel__set_text((UILabel_o *)v54, v58, 0LL);
      }
    }
    v59 = (int)(v85 - 3) < 0;
    v35 = ++v85;
  }
  while ( v59 != __OFSUB__(v85, 4) );
  v60 = this->fields.charaLevelButtonList;
  if ( !v60 )
    goto LABEL_146;
  v61 = 4;
  while ( v61 < (signed int)v60->max_length )
  {
    max_length = iconSelectList->max_length;
    if ( v61 >= max_length )
    {
      v63 = 0;
    }
    else
    {
      if ( v61 >= (unsigned int)max_length )
        goto LABEL_148;
      v63 = iconSelectList->m_Items[v61 + 1] == v83;
    }
    v64 = this->fields.charaLevelTitleRangeLabelList;
    if ( !v64 )
      goto LABEL_146;
    if ( v61 >= v64->max_length )
      goto LABEL_148;
    v65 = v64->m_Items[v61];
    v66 = v18 && v61 < max_length;
    if ( v61 >= max_length )
    {
      if ( !v65 )
        goto LABEL_146;
      UIRangeLabel__Clear(v64->m_Items[v61], 0LL);
    }
    else
    {
      Instance = (UICommonButton_o *)ServantStatusListViewItem__get_SvtId(item, 0LL);
      if ( v61 >= iconSelectList->max_length )
        goto LABEL_148;
      v17 = (unsigned int)Instance;
      Instance = (UICommonButton_o *)v82;
      if ( !v82 )
        goto LABEL_146;
      Entity = ServantCostumeMaster__GetEntity(v82, v17, iconSelectList->m_Items[v61 + 1], 0LL);
      if ( Entity )
      {
        Instance = (UICommonButton_o *)ServantCostumeEntity__getShortName(Entity, 0LL);
        v68 = (System_String_o *)Instance;
      }
      else
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        if ( !byte_4B32906 )
        {
          sub_1BD3458(&LocalizationManager_TypeInfo, v17);
          byte_4B32906 = 1;
        }
        Instance = (UICommonButton_o *)LocalizationManager_TypeInfo;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          Instance = (UICommonButton_o *)LocalizationManager_TypeInfo;
        }
        v68 = *(System_String_o **)(*(_QWORD *)&Instance[1].fields.specifyHoverColor.fields.b + 32LL);
      }
      v69 = v28;
      v70 = v27;
      v71 = v26;
      v72 = v25;
      if ( (v63 & v66) != 0 )
      {
        v69 = a;
        v70 = b;
        v71 = g;
        v72 = r;
      }
      if ( !v65 )
        goto LABEL_146;
      UIRangeLabel__set_effectColor(v65, *(UnityEngine_Color_o *)&v72, 0LL);
      UIRangeLabel__Set(v65, v68, 0LL, 1, 0, 0LL);
    }
    v73 = this->fields.charaLevelSpriteList;
    if ( !v73 )
      goto LABEL_146;
    if ( v61 >= v73->max_length )
      goto LABEL_148;
    Instance = (UICommonButton_o *)v73->m_Items[v61];
    if ( !Instance )
      goto LABEL_146;
    v74 = &StringLiteral_17678/*"btn_bg_20"*/;
    if ( v63 )
      v74 = &StringLiteral_17679/*"btn_bg_21"*/;
    UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v74, 0LL);
    v75 = this->fields.faceButtonList;
    if ( !v75 )
      goto LABEL_146;
    if ( v61 >= v75->max_length )
      goto LABEL_148;
    Instance = v75->m_Items[v61];
    if ( (v63 & v66) != 0 )
    {
      if ( !Instance )
        goto LABEL_146;
      v76 = v66 == 0 || isInit;
      UICommonButton__SetColliderEnable(Instance, 0, v76, 0LL);
      v77 = this->fields.charaLevelButtonList;
      if ( !v77 )
        goto LABEL_146;
      if ( v61 >= v77->max_length )
        goto LABEL_148;
      Instance = v77->m_Items[v61];
      if ( !Instance )
        goto LABEL_146;
      UICommonButton__SetColliderEnable(Instance, 0, v76, 0LL);
    }
    else if ( v61 >= max_length )
    {
      if ( !Instance )
        goto LABEL_146;
      Instance = (UICommonButton_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      if ( !Instance )
        goto LABEL_146;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
      v81 = this->fields.charaLevelButtonList;
      if ( !v81 )
        goto LABEL_146;
      if ( v61 >= v81->max_length )
        goto LABEL_148;
      Instance = v81->m_Items[v61];
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
      v78 = v66 & ~v63;
      v79 = v66 == 0 || isInit;
      UICommonButton__SetButtonEnable(Instance, v78, v79, 0LL);
      v80 = this->fields.charaLevelButtonList;
      if ( !v80 )
        goto LABEL_146;
      if ( v61 >= v80->max_length )
        goto LABEL_148;
      Instance = v80->m_Items[v61];
      if ( !Instance )
        goto LABEL_146;
      UICommonButton__SetButtonEnable(Instance, v78, v79, 0LL);
    }
    v60 = this->fields.charaLevelButtonList;
    ++v61;
    if ( !v60 )
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
  if ( (byte_4B3418F & 1) == 0 )
  {
    sub_1BD3458(&LocalizationManager_TypeInfo, item);
    sub_1BD3458(&string_TypeInfo, v5);
    this = (ServantStatusListViewItemDrawFace_o *)sub_1BD3458(&StringLiteral_12064/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_INFO_OWN_SETTING_FACE"*/, v6);
    byte_4B3418F = 1;
  }
  if ( !item )
LABEL_24:
    sub_1BD36B4(this, item);
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
    Empty = LocalizationManager__Get((System_String_o *)StringLiteral_12064/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_INFO_OWN_SETTING_FACE"*/, 0LL);
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
  UILabel__SetCondensedScale((UILabel_o *)this, v4->fields.MASK_LABEL_MAX_WIDTH, 0LL);
}