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
      sub_1BCAA44(this, method);
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
      sub_1BCAA3C(this, method);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  struct UISprite_array *faceSpriteCostumeIconList; // x8
  UnityEngine_Object_o *v14; // x22
  struct UISprite_array *v15; // x8
  struct UISprite_array *v16; // x8
  int32_t v17; // w21
  int32_t iconId; // t1
  struct UISprite_array *v19; // x8
  UISprite_o *v20; // x22
  System_String_o *v21; // x0
  __int64 v22; // x1
  System_String_o *v23; // x21
  struct UISprite_array *v24; // x8
  struct UISprite_array *v25; // x8
  struct UISprite_array *v26; // x8
  struct UISprite_array *v27; // x8
  struct UISprite_array *v28; // x8
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4

  v6 = this;
  if ( (byte_4B13203 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, *(_QWORD *)&index, svtCostumeEntity);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v7, v8);
    sub_1BCA7E0(&StringLiteral_23963/*"svt_costume_icon_"*/, v9, v10);
    this = (ServantStatusListViewItemDrawFace_o *)sub_1BCA7E0(&StringLiteral_1/*""*/, v11, v12);
    byte_4B13203 = 1;
  }
  faceSpriteCostumeIconList = v6->fields.faceSpriteCostumeIconList;
  if ( !faceSpriteCostumeIconList )
    goto LABEL_39;
  if ( faceSpriteCostumeIconList->max_length <= index )
LABEL_40:
    sub_1BCAA44(this, *(_QWORD *)&index);
  v14 = (UnityEngine_Object_o *)faceSpriteCostumeIconList->m_Items[index];
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&index);
  this = (ServantStatusListViewItemDrawFace_o *)UnityEngine_Object__op_Inequality(v14, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v15 = v6->fields.faceSpriteCostumeIconList;
    if ( !v15 )
      goto LABEL_39;
    if ( v15->max_length <= index )
      goto LABEL_40;
    this = (ServantStatusListViewItemDrawFace_o *)v15->m_Items[index];
    if ( !this )
      goto LABEL_39;
    UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    v16 = v6->fields.faceSpriteCostumeIconList;
    if ( !v16 )
      goto LABEL_39;
    if ( v16->max_length <= index )
      goto LABEL_40;
    this = (ServantStatusListViewItemDrawFace_o *)v16->m_Items[index];
    if ( !this )
      goto LABEL_39;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0LL);
    if ( svtCostumeEntity )
    {
      iconId = svtCostumeEntity->fields.iconId;
      v17 = (_DWORD)svtCostumeEntity + 92;
      if ( iconId >= 1 )
      {
        v19 = v6->fields.faceSpriteCostumeIconList;
        if ( !v19 )
          goto LABEL_39;
        if ( v19->max_length <= index )
          goto LABEL_40;
        v20 = v19->m_Items[index];
        v21 = System_Int32__ToString(v17, 0LL);
        v23 = System_String__Concat_62401220((System_String_o *)StringLiteral_23963/*"svt_costume_icon_"*/, v21, 0LL);
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v22);
        this = (ServantStatusListViewItemDrawFace_o *)AtlasManager__SetEventSprite(v20, v23, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          v24 = v6->fields.faceSpriteCostumeIconList;
          if ( !v24 )
            goto LABEL_39;
          if ( v24->max_length > index )
          {
            this = (ServantStatusListViewItemDrawFace_o *)v24->m_Items[index];
            if ( !this )
              goto LABEL_39;
            UIWidget__set_pivot((UIWidget_o *)this, 4, 0LL);
            v25 = v6->fields.faceSpriteCostumeIconList;
            if ( !v25 )
              goto LABEL_39;
            if ( v25->max_length > index )
            {
              this = (ServantStatusListViewItemDrawFace_o *)v25->m_Items[index];
              if ( !this )
                goto LABEL_39;
              UIWidget__set_width((UIWidget_o *)this, 32, 0LL);
              v26 = v6->fields.faceSpriteCostumeIconList;
              if ( !v26 )
                goto LABEL_39;
              if ( v26->max_length > index )
              {
                this = (ServantStatusListViewItemDrawFace_o *)v26->m_Items[index];
                if ( !this )
                  goto LABEL_39;
                UIWidget__set_height((UIWidget_o *)this, 32, 0LL);
                v27 = v6->fields.faceSpriteCostumeIconList;
                if ( !v27 )
                  goto LABEL_39;
                if ( v27->max_length > index )
                {
                  this = (ServantStatusListViewItemDrawFace_o *)v27->m_Items[index];
                  if ( !this )
                    goto LABEL_39;
                  this = (ServantStatusListViewItemDrawFace_o *)UnityEngine_Component__get_transform(
                                                                  (UnityEngine_Component_o *)this,
                                                                  0LL);
                  if ( !this )
                    goto LABEL_39;
                  v29.fields.x = -42.0;
                  v29.fields.z = 0.0;
                  v29.fields.y = -42.0;
                  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v29, 0LL);
                  v28 = v6->fields.faceSpriteCostumeIconList;
                  if ( !v28 )
                    goto LABEL_39;
                  if ( v28->max_length > index )
                  {
                    this = (ServantStatusListViewItemDrawFace_o *)v28->m_Items[index];
                    if ( this )
                    {
                      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 1, 0LL);
                      return;
                    }
LABEL_39:
                    sub_1BCAA3C(this, *(_QWORD *)&index);
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


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusListViewItemDrawFace__SetItem(
        ServantStatusListViewItemDrawFace_o *this,
        ServantStatusListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  Il2CppObject *Master_object; // x21
  UILabel_o *explanationLabel; // x22
  UISprite_o *ServantStatusExplanationText; // x0
  __int64 v39; // x1
  struct UserServantEntity_o *userSvtEntity; // x8
  __int64 v41; // x22
  __int64 v42; // x23
  UILabel_o *v43; // x22
  struct UserServantCollectionEntity_o *userSvtCollectionEntity; // x8
  UILabel_o *servantLeaderInfo; // x23
  UILabel_o *v46; // x22
  struct ServantLeaderInfo_o *v47; // x8
  int32_t v48; // w22
  System_String_o *mText; // x25
  System_String_o *v50; // x24
  Il2CppObject *LimitCountSealedServantName; // x0
  System_String_o *v52; // x0
  System_String_o *v53; // x0
  struct System_Int32_array *iconSelectList; // x28
  __int64 v55; // x8
  int32_t v56; // w25
  int32_t facePitch; // w9
  signed __int64 maxIconLimitCount; // x21
  float x; // s8
  float y; // s9
  float z; // s10
  UnityEngine_Object_o *baseCollider; // x22
  int v63; // w8
  int v64; // w8
  int v65; // w8
  int v66; // w24
  float v67; // s9
  int32_t v68; // w1
  int32_t v69; // w1
  int v70; // w22
  float v71; // s8
  float v72; // s11
  float v73; // s9
  float v74; // s10
  float v75; // s8
  float v76; // s11
  float v77; // s9
  int32_t v78; // w22
  float v79; // s8
  float v80; // s10
  float v81; // s9
  const MethodInfo_37DEB14 **v82; // x29
  unsigned __int64 v83; // x24
  int32_t *v84; // x23
  const MethodInfo *v85; // x3
  struct UISprite_array *v86; // x8
  char v87; // w25
  UISprite_o *v88; // x26
  UISprite_o *v89; // x0
  struct UISprite_array *faceFrameSpriteList; // x8
  bool v91; // w1
  int v92; // w8
  int32_t v93; // w25
  __int64 v94; // x1
  int32_t SvtId; // w26
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v96; // kr00_16
  Il2CppObject *v97; // x25
  struct UISprite_array *faceSpriteList; // x8
  UISprite_o *v99; // x26
  int32_t v100; // w25
  __int64 v101; // x1
  int32_t v102; // w27
  int32_t v103; // w2
  const MethodInfo *v104; // x3
  struct UISprite_array *v105; // x8
  UISprite_o *v106; // x25
  struct UISprite_array *v107; // x8
  struct UISprite_array *v108; // x8
  int32_t v109; // w21
  struct UISprite_array *v110; // x8
  signed int max_length; // w26
  Il2CppObject *v112; // x23
  const MethodInfo_37DEB14 **v113; // x22
  int32_t *v114; // x29
  struct UISprite_array *v115; // x8
  UISprite_o *v116; // x24
  int32_t v117; // w23
  __int64 v118; // x1
  int32_t v119; // w25
  ServantCostumeEntity_o *v120; // x0
  const MethodInfo *v121; // x3
  struct UISprite_array *v122; // x8
  const MethodInfo *v123; // x2
  ServantLimitSpoilerProtectionMaster_o *MasterData_object; // [xsp+8h] [xbp-98h]
  ServantCostumeMaster_o *v125; // [xsp+10h] [xbp-90h]
  ServantCostumeEntity_o *entity; // [xsp+18h] [xbp-88h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v127; // 0:x0.16
  UnityEngine_Vector3_o v128; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v129; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v130; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v131; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B13202 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, item, *(_QWORD *)&mode);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantCostumeMaster___, v7, v8);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v9, v10);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___, v11, v12);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v13, v14);
    sub_1BCA7E0(&DataManager_TypeInfo, v15, v16);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v17, v18);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v19, v20);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v21, v22);
    sub_1BCA7E0(&OptionManager_TypeInfo, v23, v24);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v25, v26);
    sub_1BCA7E0(&StringLiteral_12003/*"SERVANT_STATUS_EXPLANATION_FACE"*/, v27, v28);
    sub_1BCA7E0(&StringLiteral_12005/*"SERVANT_STATUS_EXPLANATION_FACE3"*/, v29, v30);
    sub_1BCA7E0(&StringLiteral_12004/*"SERVANT_STATUS_EXPLANATION_FACE2"*/, v31, v32);
    sub_1BCA7E0(&StringLiteral_12006/*"SERVANT_STATUS_EXPLANATION_FACE_LIMIT_COUNT_SEALED_MSG"*/, v33, v34);
    byte_4B13202 = 1;
  }
  entity = 0LL;
  this->fields.dispMode = mode;
  if ( !item || !mode )
    return;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, item);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  if ( item->fields.userSvtEntity )
  {
    explanationLabel = this->fields.explanationLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v35);
    ServantStatusExplanationText = (UISprite_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12003/*"SERVANT_STATUS_EXPLANATION_FACE"*/, 0LL);
    if ( !explanationLabel )
      goto LABEL_142;
    UILabel__set_text(explanationLabel, (System_String_o *)ServantStatusExplanationText, 0LL);
    userSvtEntity = item->fields.userSvtEntity;
    if ( !userSvtEntity )
      goto LABEL_142;
    v42 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
    v41 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
  }
  else if ( item->fields.userSvtCollectionEntity )
  {
    v43 = this->fields.explanationLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v35);
    ServantStatusExplanationText = (UISprite_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12004/*"SERVANT_STATUS_EXPLANATION_FACE2"*/, 0LL);
    if ( !v43 )
      goto LABEL_142;
    UILabel__set_text(v43, (System_String_o *)ServantStatusExplanationText, 0LL);
    userSvtCollectionEntity = item->fields.userSvtCollectionEntity;
    if ( !userSvtCollectionEntity )
      goto LABEL_142;
    v42 = *(_QWORD *)&userSvtCollectionEntity->fields.svtId.fields.currentCryptoKey;
    v41 = *(_QWORD *)&userSvtCollectionEntity->fields.svtId.fields.fakeValue;
  }
  else
  {
    servantLeaderInfo = (UILabel_o *)item->fields.servantLeaderInfo;
    v46 = this->fields.explanationLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v35);
    ServantStatusExplanationText = (UISprite_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12005/*"SERVANT_STATUS_EXPLANATION_FACE3"*/, 0LL);
    if ( !v46 )
      goto LABEL_142;
    UILabel__set_text(v46, (System_String_o *)ServantStatusExplanationText, 0LL);
    if ( !servantLeaderInfo )
      goto LABEL_33;
    v47 = item->fields.servantLeaderInfo;
    if ( !v47 )
      goto LABEL_142;
    v42 = *(_QWORD *)&v47->fields.svtId.fields.currentCryptoKey;
    v41 = *(_QWORD *)&v47->fields.svtId.fields.fakeValue;
  }
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v39);
  *(_QWORD *)&v127.fields.currentCryptoKey = v42;
  *(_QWORD *)&v127.fields.fakeValue = v41;
  ServantStatusExplanationText = (UISprite_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                                 v127,
                                                 0LL);
  if ( !(_DWORD)ServantStatusExplanationText )
    goto LABEL_32;
  if ( !Master_object )
    goto LABEL_142;
  v48 = (int)ServantStatusExplanationText;
  if ( ServantLimitImageMaster__IsServantLimitCountSeal(
         (ServantLimitImageMaster_o *)Master_object,
         (int32_t)ServantStatusExplanationText,
         3,
         0LL) )
  {
    ServantStatusExplanationText = (UISprite_o *)ServantLimitImageMaster__GetServantStatusExplanationText(
                                                   (ServantLimitImageMaster_o *)Master_object,
                                                   (System_String_o *)StringLiteral_12006/*"SERVANT_STATUS_EXPLANATION_FACE_LIMIT_COUNT_SEALED_MSG"*/,
                                                   v48,
                                                   0LL);
    servantLeaderInfo = this->fields.explanationLabel;
    if ( !servantLeaderInfo )
      goto LABEL_142;
    mText = servantLeaderInfo->fields.mText;
    v50 = (System_String_o *)ServantStatusExplanationText;
    LimitCountSealedServantName = (Il2CppObject *)ServantLimitImageMaster__GetLimitCountSealedServantName(
                                                    (ServantLimitImageMaster_o *)Master_object,
                                                    v48,
                                                    3,
                                                    0LL);
    v52 = System_String__Format(v50, LimitCountSealedServantName, 0LL);
    v53 = System_String__Concat_62401220(mText, v52, 0LL);
    UILabel__set_text(servantLeaderInfo, v53, 0LL);
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
  v55 = *(_QWORD *)&iconSelectList->max_length;
  v56 = (int)ServantStatusExplanationText;
  if ( (int)v55 < 5 )
    facePitch = 0;
  else
    facePitch = this->fields.facePitch;
  maxIconLimitCount = item->fields.maxIconLimitCount;
  x = this->fields.baseSize.fields.x;
  y = this->fields.baseSize.fields.y;
  z = this->fields.baseSize.fields.z;
  baseCollider = (UnityEngine_Object_o *)this->fields.baseCollider;
  v63 = (int)v55 / 4;
  if ( (*(_QWORD *)&iconSelectList->max_length & 3LL) != 0 )
    ++v63;
  if ( v63 < 3 )
    v64 = 1;
  else
    v64 = v63 - 1;
  v65 = facePitch * v64;
  if ( (_DWORD)servantLeaderInfo )
    v66 = v65 + 32;
  else
    v66 = v65;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v39);
  v67 = y + (float)v66;
  if ( UnityEngine_Object__op_Inequality(baseCollider, 0LL, 0LL) )
  {
    ServantStatusExplanationText = (UISprite_o *)this->fields.baseCollider;
    if ( !ServantStatusExplanationText )
      goto LABEL_142;
    v128.fields.x = x;
    v128.fields.y = v67;
    v128.fields.z = z;
    UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)ServantStatusExplanationText, v128, 0LL);
  }
  ServantStatusExplanationText = this->fields.baseSprite;
  if ( !ServantStatusExplanationText )
    goto LABEL_142;
  v68 = x == INFINITY ? 0x80000000 : (int)x;
  UIWidget__set_width((UIWidget_o *)ServantStatusExplanationText, v68, 0LL);
  ServantStatusExplanationText = this->fields.baseSprite;
  if ( !ServantStatusExplanationText )
    goto LABEL_142;
  v69 = v67 == INFINITY ? 0x80000000 : (int)v67;
  UIWidget__set_height((UIWidget_o *)ServantStatusExplanationText, v69, 0LL);
  ServantStatusExplanationText = this->fields.titleSprite;
  v70 = v66 >= 0 ? v66 : v66 + 1;
  if ( !ServantStatusExplanationText )
    goto LABEL_142;
  v71 = this->fields.titleBasePosition.fields.x;
  v72 = this->fields.titleBasePosition.fields.y;
  v73 = this->fields.titleBasePosition.fields.z;
  ServantStatusExplanationText = (UISprite_o *)UnityEngine_Component__get_transform(
                                                 (UnityEngine_Component_o *)ServantStatusExplanationText,
                                                 0LL);
  if ( !ServantStatusExplanationText )
    goto LABEL_142;
  v74 = (float)(v70 >> 1);
  v129.fields.y = v72 + v74;
  v129.fields.x = v71;
  v129.fields.z = v73;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)ServantStatusExplanationText, v129, 0LL);
  ServantStatusExplanationText = (UISprite_o *)this->fields.faceBase;
  if ( !ServantStatusExplanationText )
    goto LABEL_142;
  v75 = this->fields.faceBasePosition.fields.x;
  v76 = this->fields.faceBasePosition.fields.y;
  v77 = this->fields.faceBasePosition.fields.z;
  ServantStatusExplanationText = (UISprite_o *)UnityEngine_GameObject__get_transform(
                                                 (UnityEngine_GameObject_o *)ServantStatusExplanationText,
                                                 0LL);
  if ( !ServantStatusExplanationText )
    goto LABEL_142;
  v130.fields.y = v76 + v74;
  v130.fields.x = v75;
  v130.fields.z = v77;
  v78 = v56;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)ServantStatusExplanationText, v130, 0LL);
  ServantStatusExplanationText = (UISprite_o *)this->fields.explanationLabel;
  v79 = (_DWORD)servantLeaderInfo
      ? (float)(this->fields.explanationBasePosition.fields.y - v74) + 16.0
      : this->fields.explanationBasePosition.fields.y - v74;
  if ( !ServantStatusExplanationText )
    goto LABEL_142;
  v80 = this->fields.explanationBasePosition.fields.x;
  v81 = this->fields.explanationBasePosition.fields.z;
  ServantStatusExplanationText = (UISprite_o *)UnityEngine_Component__get_transform(
                                                 (UnityEngine_Component_o *)ServantStatusExplanationText,
                                                 0LL);
  if ( !ServantStatusExplanationText )
    goto LABEL_142;
  v131.fields.x = v80;
  v131.fields.y = v79;
  v131.fields.z = v81;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)ServantStatusExplanationText, v131, 0LL);
  v82 = (const MethodInfo_37DEB14 **)&Method_SingletonMonoBehaviour_DataManager__get_Instance__;
  ServantStatusExplanationText = (UISprite_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !ServantStatusExplanationText
    || (MasterData_object = (ServantLimitSpoilerProtectionMaster_o *)DataManager__GetMasterData_object_(
                                                                       (DataManager_o *)ServantStatusExplanationText,
                                                                       (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___),
        (ServantStatusExplanationText = (UISprite_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL) )
  {
LABEL_142:
    sub_1BCAA3C(ServantStatusExplanationText, v39);
  }
  v83 = 0LL;
  v84 = &iconSelectList->m_Items[1];
  v125 = (ServantCostumeMaster_o *)DataManager__GetMasterData_object_(
                                     (DataManager_o *)ServantStatusExplanationText,
                                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
  do
  {
    ServantStatusListViewItemDrawFace__SetCostumeIcon(this, v83, 0LL, v85);
    if ( (__int64)v83 > maxIconLimitCount )
      goto LABEL_74;
    ServantStatusExplanationText = (UISprite_o *)ServantStatusListViewItem__get_IsMine(item, 0LL);
    if ( ((unsigned __int8)ServantStatusExplanationText & 1) != 0 )
      goto LABEL_148;
    if ( v83 >= iconSelectList->max_length )
      goto LABEL_145;
    if ( v84[v83] <= v78 )
    {
LABEL_148:
      if ( !OptionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, v39);
      if ( OptionManager__GetSpoilerSetting(0LL) )
        goto LABEL_98;
      ServantStatusExplanationText = (UISprite_o *)ServantStatusListViewItem__get_IsMine(item, 0LL);
      if ( ((unsigned __int8)ServantStatusExplanationText & 1) != 0 )
        goto LABEL_98;
      if ( v83 >= iconSelectList->max_length )
        goto LABEL_145;
      v92 = v84[v83];
      if ( v92 >= 11 )
        v93 = v84[v83];
      else
        v93 = v92 + 1;
      SvtId = ServantStatusListViewItem__get_SvtId(item, 0LL);
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v94);
      v96 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(SvtId, 0LL);
      v39 = *(_QWORD *)&v96.fields.fakeValue;
      ServantStatusExplanationText = (UISprite_o *)MasterData_object;
      if ( !MasterData_object )
        goto LABEL_142;
      ServantStatusExplanationText = (UISprite_o *)ServantLimitSpoilerProtectionMaster__IsSpoilerLimitCount(
                                                     MasterData_object,
                                                     v96,
                                                     v93,
                                                     0LL);
      if ( ((unsigned __int8)ServantStatusExplanationText & 1) != 0 )
      {
LABEL_98:
        ServantStatusExplanationText = (UISprite_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !ServantStatusExplanationText )
          goto LABEL_142;
        v97 = DataManager__GetMasterData_object_(
                (DataManager_o *)ServantStatusExplanationText,
                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
        ServantStatusExplanationText = (UISprite_o *)ServantStatusListViewItem__get_SvtId(item, 0LL);
        if ( v83 >= iconSelectList->max_length )
          goto LABEL_145;
        if ( !v97 )
          goto LABEL_142;
        ServantStatusExplanationText = (UISprite_o *)ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                                       (ServantLimitImageMaster_o *)v97,
                                                       (int32_t)ServantStatusExplanationText,
                                                       v84[v83],
                                                       0LL);
        faceSpriteList = this->fields.faceSpriteList;
        if ( !faceSpriteList )
          goto LABEL_142;
        if ( v83 >= faceSpriteList->max_length )
          goto LABEL_145;
        v99 = faceSpriteList->m_Items[v83];
        v100 = (int)ServantStatusExplanationText;
        v102 = ServantStatusListViewItem__get_SvtId(item, 0LL);
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v101);
        AtlasManager__SetFaceImage(v99, v102, v100, 0LL);
        ServantStatusExplanationText = (UISprite_o *)ServantStatusListViewItem__get_SvtId(item, 0LL);
        if ( v83 >= iconSelectList->max_length )
LABEL_145:
          sub_1BCAA44(ServantStatusExplanationText, v39);
        v103 = (int)ServantStatusExplanationText;
        ServantStatusExplanationText = (UISprite_o *)v125;
        if ( !v125 )
          goto LABEL_142;
        ServantCostumeMaster__TryGetEntity(v125, &entity, v103, v84[v83], 0LL);
        ServantStatusListViewItemDrawFace__SetCostumeIcon(this, v83, entity, v104);
        goto LABEL_114;
      }
      v105 = this->fields.faceSpriteList;
      if ( !v105 )
        goto LABEL_142;
      if ( v83 >= v105->max_length )
        goto LABEL_145;
      v106 = v105->m_Items[v83];
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v39);
      v89 = v106;
    }
    else
    {
LABEL_74:
      ServantStatusExplanationText = (UISprite_o *)ServantStatusListViewItem__get_IsMine(item, 0LL);
      v86 = this->fields.faceSpriteList;
      if ( !v86 )
        goto LABEL_142;
      if ( v83 >= v86->max_length )
        goto LABEL_145;
      v87 = (char)ServantStatusExplanationText;
      v88 = v86->m_Items[v83];
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v39);
      v89 = v88;
      if ( (v87 & 1) != 0 )
      {
        ServantStatusExplanationText = (UISprite_o *)AtlasManager__SetNoMountFace(v88, 0LL);
        faceFrameSpriteList = this->fields.faceFrameSpriteList;
        if ( !faceFrameSpriteList )
          goto LABEL_142;
        if ( v83 >= faceFrameSpriteList->max_length )
          goto LABEL_145;
        ServantStatusExplanationText = faceFrameSpriteList->m_Items[v83];
        if ( !ServantStatusExplanationText )
          goto LABEL_142;
        v91 = 0;
        goto LABEL_118;
      }
    }
    ServantStatusExplanationText = (UISprite_o *)AtlasManager__SetNotOpenFace(v89, 0LL);
LABEL_114:
    v107 = this->fields.faceFrameSpriteList;
    if ( !v107 )
      goto LABEL_142;
    if ( v83 >= v107->max_length )
      goto LABEL_145;
    ServantStatusExplanationText = v107->m_Items[v83];
    if ( !ServantStatusExplanationText )
      goto LABEL_142;
    v91 = 1;
LABEL_118:
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)ServantStatusExplanationText, v91, 0LL);
    ++v83;
  }
  while ( v83 != 4 );
  v108 = this->fields.faceSpriteList;
  if ( !v108 )
    goto LABEL_142;
  v109 = 4;
  while ( v109 < (signed int)v108->max_length )
  {
    ServantStatusListViewItemDrawFace__SetCostumeIcon(this, v109, 0LL, v85);
    v110 = this->fields.faceSpriteList;
    if ( !v110 )
      goto LABEL_142;
    if ( v109 >= v110->max_length )
      goto LABEL_145;
    ServantStatusExplanationText = v110->m_Items[v109];
    if ( !ServantStatusExplanationText )
      goto LABEL_142;
    max_length = iconSelectList->max_length;
    if ( v109 >= max_length )
    {
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)ServantStatusExplanationText, 0, 0LL);
      v122 = this->fields.faceFrameSpriteList;
      if ( !v122 )
        goto LABEL_142;
      if ( v109 >= v122->max_length )
        goto LABEL_145;
    }
    else
    {
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)ServantStatusExplanationText, 1, 0LL);
      ServantStatusExplanationText = (UISprite_o *)SingletonMonoBehaviour_object___get_Instance(*v82);
      if ( !ServantStatusExplanationText )
        goto LABEL_142;
      v112 = DataManager__GetMasterData_object_(
               (DataManager_o *)ServantStatusExplanationText,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
      ServantStatusExplanationText = (UISprite_o *)ServantStatusListViewItem__get_SvtId(item, 0LL);
      if ( v109 >= iconSelectList->max_length )
        goto LABEL_145;
      if ( !v112 )
        goto LABEL_142;
      v113 = v82;
      v114 = &iconSelectList->m_Items[v109 + 1];
      ServantStatusExplanationText = (UISprite_o *)ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                                     (ServantLimitImageMaster_o *)v112,
                                                     (int32_t)ServantStatusExplanationText,
                                                     *v114,
                                                     0LL);
      v115 = this->fields.faceSpriteList;
      if ( !v115 )
        goto LABEL_142;
      if ( v109 >= v115->max_length )
        goto LABEL_145;
      v116 = v115->m_Items[v109];
      v117 = (int)ServantStatusExplanationText;
      v119 = ServantStatusListViewItem__get_SvtId(item, 0LL);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v118);
      AtlasManager__SetFaceImage(v116, v119, v117, 0LL);
      ServantStatusExplanationText = (UISprite_o *)ServantStatusListViewItem__get_SvtId(item, 0LL);
      if ( v109 >= iconSelectList->max_length )
        goto LABEL_145;
      v39 = (unsigned int)ServantStatusExplanationText;
      ServantStatusExplanationText = (UISprite_o *)v125;
      if ( !v125 )
        goto LABEL_142;
      v120 = ServantCostumeMaster__GetEntity(v125, v39, *v114, 0LL);
      ServantStatusListViewItemDrawFace__SetCostumeIcon(this, v109, v120, v121);
      v122 = this->fields.faceFrameSpriteList;
      if ( !v122 )
        goto LABEL_142;
      if ( v109 >= v122->max_length )
        goto LABEL_145;
      v82 = v113;
    }
    ServantStatusExplanationText = v122->m_Items[v109];
    if ( ServantStatusExplanationText )
    {
      UnityEngine_Behaviour__set_enabled(
        (UnityEngine_Behaviour_o *)ServantStatusExplanationText,
        v109 < max_length,
        0LL);
      v108 = this->fields.faceSpriteList;
      ++v109;
      if ( v108 )
        continue;
    }
    goto LABEL_142;
  }
  ServantStatusListViewItemDrawFace__SetupButton(this, item, 1, v85);
  ServantStatusListViewItemDrawFace__SetupMask(this, item, v123);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusListViewItemDrawFace__SetupButton(
        ServantStatusListViewItemDrawFace_o *this,
        ServantStatusListViewItem_o *item,
        bool isInit,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  UICommonButton_o *Instance; // x0
  __int64 v27; // x1
  bool v28; // w29
  int32_t ConvertOverwriteIconLimitCount; // w0
  __int64 v30; // x1
  __int64 v31; // x2
  int32_t maxIconLimitCount; // w22
  struct System_Int32_array *iconSelectList; // x23
  LocalizationManager_c *v34; // x0
  float *static_fields; // x8
  float v36; // s8
  float v37; // s9
  float v38; // s10
  float v39; // s11
  struct LocalizationManager_StaticFields *v40; // x8
  float r; // s12
  float g; // s13
  float b; // s14
  float a; // s15
  ServantLimitImageMaster_o *v45; // x25
  int v46; // w8
  _BOOL4 v47; // w19
  struct UIRangeLabel_array *charaLevelTitleRangeLabelList; // x10
  UIRangeLabel_o *v49; // x26
  int v50; // w28
  __int64 v51; // x1
  System_String_o *v52; // x27
  float v53; // s3
  float v54; // s2
  float v55; // s1
  float v56; // s0
  System_String_o *v57; // x0
  __int64 v58; // x1
  System_String_o *v59; // x0
  struct UISprite_array *charaLevelSpriteList; // x8
  __int64 *v61; // x8
  struct UICommonButton_array *faceButtonList; // x8
  struct UICommonButton_array *charaLevelButtonList; // x8
  char v64; // w26
  struct UICommonButton_array *v65; // x8
  struct UILabel_array *limitCountSealLabel; // x8
  UnityEngine_Object_o *v67; // x26
  struct UnityEngine_GameObject_array *limitCountSealObjList; // x8
  UnityEngine_Object_o *v69; // x27
  __int64 v70; // x1
  bool IsServantLimitCountSeal; // w28
  System_String_o *v72; // x1
  bool v73; // nf
  struct UICommonButton_array *v74; // x8
  int v75; // w22
  int max_length; // w27
  _BOOL4 v77; // w24
  struct UIRangeLabel_array *v78; // x9
  UIRangeLabel_o *v79; // x25
  int v80; // w19
  ServantCostumeEntity_o *Entity; // x0
  __int64 v82; // x2
  System_String_o *v83; // x26
  float v84; // s3
  float v85; // s2
  float v86; // s1
  float v87; // s0
  struct UISprite_array *v88; // x8
  __int64 *v89; // x8
  struct UICommonButton_array *v90; // x8
  bool v91; // w19
  struct UICommonButton_array *v92; // x8
  char v93; // w25
  bool v94; // w19
  struct UICommonButton_array *v95; // x8
  struct UICommonButton_array *v96; // x8
  ServantCostumeMaster_o *v97; // [xsp+8h] [xbp-B8h]
  int32_t v98; // [xsp+14h] [xbp-ACh]
  unsigned int v100; // [xsp+1Ch] [xbp-A4h] BYREF
  UnityEngine_Color_o v101; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B13204 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantCostumeMaster___, item, isInit);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v6, v7);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12, v13);
    sub_1BCA7E0(&StringLiteral_8374/*"LIMIT_COUNT_SELECT_SEALED"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_12023/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_"*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_17652/*"btn_bg_20"*/, v18, v19);
    sub_1BCA7E0(&StringLiteral_12024/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_CLOSE"*/, v20, v21);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v22, v23);
    sub_1BCA7E0(&StringLiteral_17653/*"btn_bg_21"*/, v24, v25);
    byte_4B13204 = 1;
  }
  v100 = 0;
  Instance = (UICommonButton_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_146;
  Instance = (UICommonButton_o *)DataManager__GetMasterData_object_(
                                   (DataManager_o *)Instance,
                                   (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
  if ( !item )
    goto LABEL_146;
  v97 = (ServantCostumeMaster_o *)Instance;
  if ( item->fields.isConvertOverwriteImage )
  {
    v28 = 0;
  }
  else if ( item->fields.userSvtEntity )
  {
    v28 = 1;
  }
  else
  {
    v28 = item->fields.userSvtCollectionEntity != 0LL;
  }
  ConvertOverwriteIconLimitCount = ServantStatusListViewItem__get_ConvertOverwriteIconLimitCount(item, 0LL);
  maxIconLimitCount = item->fields.maxIconLimitCount;
  iconSelectList = item->fields.iconSelectList;
  v98 = ConvertOverwriteIconLimitCount;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v30);
  if ( !byte_4B11133 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v30, v31);
    byte_4B11133 = 1;
  }
  v34 = LocalizationManager_TypeInfo;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v30);
    v34 = LocalizationManager_TypeInfo;
  }
  static_fields = (float *)v34->static_fields;
  v36 = static_fields[20];
  v37 = static_fields[21];
  v38 = static_fields[22];
  v39 = static_fields[23];
  if ( !byte_4B11134 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v30, v31);
    v34 = LocalizationManager_TypeInfo;
    byte_4B11134 = 1;
  }
  if ( !v34->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v34, v30);
    v34 = LocalizationManager_TypeInfo;
  }
  v40 = v34->static_fields;
  r = v40->selectEffectColor.fields.r;
  g = v40->selectEffectColor.fields.g;
  b = v40->selectEffectColor.fields.b;
  a = v40->selectEffectColor.fields.a;
  Instance = (UICommonButton_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_146:
    sub_1BCAA3C(Instance, v27);
  Instance = (UICommonButton_o *)DataManager__GetMasterData_object_(
                                   (DataManager_o *)Instance,
                                   (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  v45 = (ServantLimitImageMaster_o *)Instance;
  v46 = 0;
  v100 = 0;
  do
  {
    if ( v46 <= maxIconLimitCount )
    {
      if ( !iconSelectList )
        goto LABEL_146;
      if ( v46 >= iconSelectList->max_length )
        goto LABEL_148;
      v47 = iconSelectList->m_Items[v46 + 1] == v98;
    }
    else
    {
      v47 = 0;
    }
    charaLevelTitleRangeLabelList = this->fields.charaLevelTitleRangeLabelList;
    if ( !charaLevelTitleRangeLabelList )
      goto LABEL_146;
    if ( v46 >= charaLevelTitleRangeLabelList->max_length )
      goto LABEL_148;
    v49 = charaLevelTitleRangeLabelList->m_Items[v46];
    v50 = v28 && v46 <= maxIconLimitCount;
    if ( v46 > maxIconLimitCount
      && (Instance = (UICommonButton_o *)ServantStatusListViewItem__get_IsMine(item, 0LL),
          ((unsigned __int8)Instance & 1) != 0) )
    {
      if ( !v49 )
        goto LABEL_146;
      v101.fields.r = v36;
      v101.fields.g = v37;
      v101.fields.b = v38;
      v101.fields.a = v39;
      UIRangeLabel__set_effectColor(v49, v101, 0LL);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v51);
      v52 = (System_String_o *)StringLiteral_12024/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_CLOSE"*/;
    }
    else
    {
      v53 = v39;
      v54 = v38;
      v55 = v37;
      v56 = v36;
      if ( (v47 & v50) != 0 )
      {
        v53 = a;
        v54 = b;
        v55 = g;
        v56 = r;
      }
      if ( !v49 )
        goto LABEL_146;
      UIRangeLabel__set_effectColor(v49, *(UnityEngine_Color_o *)&v56, 0LL);
      v57 = System_Int32__ToString((int32_t)&v100, 0LL);
      v52 = System_String__Concat_62401220((System_String_o *)StringLiteral_12023/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_"*/, v57, 0LL);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v58);
    }
    v59 = LocalizationManager__Get(v52, 0LL);
    UIRangeLabel__Set(v49, v59, 0LL, 1, 0, 0LL);
    charaLevelSpriteList = this->fields.charaLevelSpriteList;
    if ( !charaLevelSpriteList )
      goto LABEL_146;
    if ( v100 >= charaLevelSpriteList->max_length )
LABEL_148:
      sub_1BCAA44(Instance, v27);
    Instance = (UICommonButton_o *)charaLevelSpriteList->m_Items[v100];
    if ( !Instance )
      goto LABEL_146;
    v61 = &StringLiteral_17652/*"btn_bg_20"*/;
    if ( v47 )
      v61 = &StringLiteral_17653/*"btn_bg_21"*/;
    UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v61, 0LL);
    faceButtonList = this->fields.faceButtonList;
    if ( !faceButtonList )
      goto LABEL_146;
    if ( v100 >= faceButtonList->max_length )
      goto LABEL_148;
    Instance = faceButtonList->m_Items[v100];
    if ( (v47 & v50) != 0 )
    {
      if ( !Instance )
        goto LABEL_146;
      UICommonButton__SetColliderEnable(Instance, 0, v50 == 0 || isInit, 0LL);
      charaLevelButtonList = this->fields.charaLevelButtonList;
      if ( !charaLevelButtonList )
        goto LABEL_146;
      if ( v100 >= charaLevelButtonList->max_length )
        goto LABEL_148;
      Instance = charaLevelButtonList->m_Items[v100];
      if ( !Instance )
        goto LABEL_146;
      UICommonButton__SetColliderEnable(Instance, 0, v50 == 0 || isInit, 0LL);
    }
    else
    {
      if ( !Instance )
        goto LABEL_146;
      v64 = v50 & ~v47;
      UICommonButton__SetButtonEnable(Instance, v64, v50 == 0 || isInit, 0LL);
      v65 = this->fields.charaLevelButtonList;
      if ( !v65 )
        goto LABEL_146;
      if ( v100 >= v65->max_length )
        goto LABEL_148;
      Instance = v65->m_Items[v100];
      if ( !Instance )
        goto LABEL_146;
      UICommonButton__SetButtonEnable(Instance, v64, v50 == 0 || isInit, 0LL);
    }
    limitCountSealLabel = this->fields.limitCountSealLabel;
    if ( limitCountSealLabel )
    {
      if ( v100 >= limitCountSealLabel->max_length )
        goto LABEL_148;
      v67 = (UnityEngine_Object_o *)limitCountSealLabel->m_Items[v100];
    }
    else
    {
      v67 = 0LL;
    }
    limitCountSealObjList = this->fields.limitCountSealObjList;
    if ( limitCountSealObjList )
    {
      if ( v100 >= limitCountSealObjList->max_length )
        goto LABEL_148;
      v69 = (UnityEngine_Object_o *)limitCountSealObjList->m_Items[v100];
    }
    else
    {
      v69 = 0LL;
    }
    Instance = (UICommonButton_o *)ServantStatusListViewItem__get_SvtId(item, 0LL);
    if ( !iconSelectList )
      goto LABEL_146;
    if ( v100 >= iconSelectList->max_length )
      goto LABEL_148;
    if ( !v45 )
      goto LABEL_146;
    IsServantLimitCountSeal = ServantLimitImageMaster__IsServantLimitCountSeal(
                                v45,
                                (int32_t)Instance,
                                iconSelectList->m_Items[v100 + 1] + 1,
                                0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v70);
    Instance = (UICommonButton_o *)UnityEngine_Object__op_Inequality(v69, 0LL, 0LL);
    if ( IsServantLimitCountSeal )
    {
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v69 )
          goto LABEL_146;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v69, 1, 0LL);
      }
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v27);
      Instance = (UICommonButton_o *)UnityEngine_Object__op_Inequality(v67, 0LL, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v27);
        Instance = (UICommonButton_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8374/*"LIMIT_COUNT_SELECT_SEALED"*/, 0LL);
        if ( !v67 )
          goto LABEL_146;
        v72 = (System_String_o *)Instance;
        goto LABEL_90;
      }
    }
    else
    {
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v69 )
          goto LABEL_146;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v69, 0, 0LL);
      }
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v27);
      Instance = (UICommonButton_o *)UnityEngine_Object__op_Inequality(v67, 0LL, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v67 )
          goto LABEL_146;
        v72 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_90:
        UILabel__set_text((UILabel_o *)v67, v72, 0LL);
      }
    }
    v73 = (int)(v100 - 3) < 0;
    v46 = ++v100;
  }
  while ( v73 != __OFSUB__(v100, 4) );
  v74 = this->fields.charaLevelButtonList;
  if ( !v74 )
    goto LABEL_146;
  v75 = 4;
  while ( v75 < (signed int)v74->max_length )
  {
    max_length = iconSelectList->max_length;
    if ( v75 >= max_length )
    {
      v77 = 0;
    }
    else
    {
      if ( v75 >= (unsigned int)max_length )
        goto LABEL_148;
      v77 = iconSelectList->m_Items[v75 + 1] == v98;
    }
    v78 = this->fields.charaLevelTitleRangeLabelList;
    if ( !v78 )
      goto LABEL_146;
    if ( v75 >= v78->max_length )
      goto LABEL_148;
    v79 = v78->m_Items[v75];
    v80 = v28 && v75 < max_length;
    if ( v75 >= max_length )
    {
      if ( !v79 )
        goto LABEL_146;
      UIRangeLabel__Clear(v78->m_Items[v75], 0LL);
    }
    else
    {
      Instance = (UICommonButton_o *)ServantStatusListViewItem__get_SvtId(item, 0LL);
      if ( v75 >= iconSelectList->max_length )
        goto LABEL_148;
      v27 = (unsigned int)Instance;
      Instance = (UICommonButton_o *)v97;
      if ( !v97 )
        goto LABEL_146;
      Entity = ServantCostumeMaster__GetEntity(v97, v27, iconSelectList->m_Items[v75 + 1], 0LL);
      if ( Entity )
      {
        Instance = (UICommonButton_o *)ServantCostumeEntity__getShortName(Entity, 0LL);
        v83 = (System_String_o *)Instance;
      }
      else
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v27);
        if ( !byte_4B1194D )
        {
          sub_1BCA7E0(&LocalizationManager_TypeInfo, v27, v82);
          byte_4B1194D = 1;
        }
        Instance = (UICommonButton_o *)LocalizationManager_TypeInfo;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v27);
          Instance = (UICommonButton_o *)LocalizationManager_TypeInfo;
        }
        v83 = *(System_String_o **)(*(_QWORD *)&Instance[1].fields.specifyHoverColor.fields.b + 32LL);
      }
      v84 = v39;
      v85 = v38;
      v86 = v37;
      v87 = v36;
      if ( (v77 & v80) != 0 )
      {
        v84 = a;
        v85 = b;
        v86 = g;
        v87 = r;
      }
      if ( !v79 )
        goto LABEL_146;
      UIRangeLabel__set_effectColor(v79, *(UnityEngine_Color_o *)&v87, 0LL);
      UIRangeLabel__Set(v79, v83, 0LL, 1, 0, 0LL);
    }
    v88 = this->fields.charaLevelSpriteList;
    if ( !v88 )
      goto LABEL_146;
    if ( v75 >= v88->max_length )
      goto LABEL_148;
    Instance = (UICommonButton_o *)v88->m_Items[v75];
    if ( !Instance )
      goto LABEL_146;
    v89 = &StringLiteral_17652/*"btn_bg_20"*/;
    if ( v77 )
      v89 = &StringLiteral_17653/*"btn_bg_21"*/;
    UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v89, 0LL);
    v90 = this->fields.faceButtonList;
    if ( !v90 )
      goto LABEL_146;
    if ( v75 >= v90->max_length )
      goto LABEL_148;
    Instance = v90->m_Items[v75];
    if ( (v77 & v80) != 0 )
    {
      if ( !Instance )
        goto LABEL_146;
      v91 = v80 == 0 || isInit;
      UICommonButton__SetColliderEnable(Instance, 0, v91, 0LL);
      v92 = this->fields.charaLevelButtonList;
      if ( !v92 )
        goto LABEL_146;
      if ( v75 >= v92->max_length )
        goto LABEL_148;
      Instance = v92->m_Items[v75];
      if ( !Instance )
        goto LABEL_146;
      UICommonButton__SetColliderEnable(Instance, 0, v91, 0LL);
    }
    else if ( v75 >= max_length )
    {
      if ( !Instance )
        goto LABEL_146;
      Instance = (UICommonButton_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      if ( !Instance )
        goto LABEL_146;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
      v96 = this->fields.charaLevelButtonList;
      if ( !v96 )
        goto LABEL_146;
      if ( v75 >= v96->max_length )
        goto LABEL_148;
      Instance = v96->m_Items[v75];
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
      v93 = v80 & ~v77;
      v94 = v80 == 0 || isInit;
      UICommonButton__SetButtonEnable(Instance, v93, v94, 0LL);
      v95 = this->fields.charaLevelButtonList;
      if ( !v95 )
        goto LABEL_146;
      if ( v75 >= v95->max_length )
        goto LABEL_148;
      Instance = v95->m_Items[v75];
      if ( !Instance )
        goto LABEL_146;
      UICommonButton__SetButtonEnable(Instance, v93, v94, 0LL);
    }
    v74 = this->fields.charaLevelButtonList;
    ++v75;
    if ( !v74 )
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  struct UISprite_o *baseSprite; // x8
  ServantStatusListViewItemDrawFace_o *v10; // x21
  System_String_o *Empty; // x20
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_4B13205 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, item, method);
    sub_1BCA7E0(&string_TypeInfo, v5, v6);
    this = (ServantStatusListViewItemDrawFace_o *)sub_1BCA7E0(&StringLiteral_12045/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_INFO_OWN_SETTING_FACE"*/, v7, v8);
    byte_4B13205 = 1;
  }
  if ( !item )
LABEL_24:
    sub_1BCAA3C(this, item);
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
  v10 = this;
  this = (ServantStatusListViewItemDrawFace_o *)UnityEngine_Component__get_transform(
                                                  (UnityEngine_Component_o *)v4->fields.baseSprite,
                                                  0LL);
  if ( !this )
    goto LABEL_24;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  GameObjectExtensions__SetLocalPositionY((UnityEngine_GameObject_o *)v10, localPosition.fields.y, 0LL);
  if ( item->fields.isEnableOwnRandomSetting )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item);
    Empty = LocalizationManager__Get((System_String_o *)StringLiteral_12045/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_INFO_OWN_SETTING_FACE"*/, 0LL);
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