void __fastcall ServantStatusListViewItemDrawFace___ctor(
        ServantStatusListViewItemDrawFace_o *this,
        const MethodInfo *method)
{
  *(&this->fields.MASK_LABEL_MAX_WIDTH + 1) = 550;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusListViewItemDrawFace__Awake(
        ServantStatusListViewItemDrawFace_o *this,
        const MethodInfo *method)
{
  struct UISprite_array *charaLevelSpriteList; // x8
  int32_t facePitch; // w20
  UnityEngine_Component_o *v5; // x0
  UnityEngine_Transform_o *transform; // x0
  __int64 v7; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  float v10; // s1
  struct UISprite_array *v11; // x8
  UnityEngine_Component_o *v12; // x0
  float v13; // s8
  UnityEngine_Transform_o *v14; // x0
  float v15; // s0
  double v16; // d0
  struct UISprite_o *baseSprite; // x9
  int max_length; // w8
  int32_t mHeight; // w10
  UnityEngine_Component_o *titleSprite; // x0
  bool v21; // cc
  int v22; // w8
  UnityEngine_Transform_o *v23; // x0
  float v24; // s0
  float v25; // s1
  float v26; // s2
  UnityEngine_GameObject_o *faceBase; // x0
  int v28; // w8
  float v29; // s8
  UnityEngine_Transform_o *v30; // x0
  UnityEngine_Component_o *explanationLabel; // x0
  UnityEngine_Transform_o *v32; // x0
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v34; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v35; // 0:s0.4,4:s1.4,8:s2.4

  charaLevelSpriteList = this->fields.charaLevelSpriteList;
  if ( !charaLevelSpriteList )
    goto LABEL_28;
  if ( (int)charaLevelSpriteList->max_length > 4 )
  {
    v5 = (UnityEngine_Component_o *)charaLevelSpriteList->m_Items[0];
    if ( !v5 )
      goto LABEL_28;
    transform = UnityEngine_Component__get_transform(v5, 0LL);
    if ( !transform )
      goto LABEL_28;
    *(UnityEngine_Vector3_o *)(&v10 - 1) = UnityEngine_Transform__get_localPosition(transform, 0LL);
    v11 = this->fields.charaLevelSpriteList;
    if ( !v11 )
      goto LABEL_28;
    if ( v11->max_length <= 4 )
    {
      sub_B17100(v7, v8, v9);
      sub_B170A0();
    }
    v12 = (UnityEngine_Component_o *)v11->m_Items[4];
    if ( !v12 )
      goto LABEL_28;
    v13 = v10;
    v14 = UnityEngine_Component__get_transform(v12, 0LL);
    if ( !v14 )
      goto LABEL_28;
    localPosition = UnityEngine_Transform__get_localPosition(v14, 0LL);
    v15 = v13 - localPosition.fields.y;
    charaLevelSpriteList = this->fields.charaLevelSpriteList;
    v16 = (float)(v13 - localPosition.fields.y) == INFINITY ? -v15 : v15;
    facePitch = (int)v16;
    this->fields.facePitch = (int)v16;
    if ( !charaLevelSpriteList )
LABEL_28:
      sub_B170D4();
  }
  else
  {
    facePitch = this->fields.facePitch;
  }
  baseSprite = this->fields.baseSprite;
  if ( !baseSprite )
    goto LABEL_28;
  max_length = charaLevelSpriteList->max_length;
  mHeight = baseSprite->fields.mHeight;
  titleSprite = (UnityEngine_Component_o *)this->fields.titleSprite;
  v21 = max_length < 12;
  v22 = max_length / 4 - 1;
  if ( v21 )
    v22 = 1;
  this->fields.baseSize.fields.x = (float)baseSprite->fields.mWidth;
  this->fields.baseSize.fields.y = (float)(mHeight - v22 * facePitch);
  this->fields.baseSize.fields.z = 0.0;
  if ( !titleSprite )
    goto LABEL_28;
  v23 = UnityEngine_Component__get_transform(titleSprite, 0LL);
  if ( !v23 )
    goto LABEL_28;
  *(UnityEngine_Vector3_o *)&v24 = UnityEngine_Transform__get_localPosition(v23, 0LL);
  faceBase = this->fields.faceBase;
  v28 = facePitch >= 0 ? facePitch : facePitch + 1;
  v29 = (float)(v28 >> 1);
  this->fields.titleBasePosition.fields.x = v24;
  this->fields.titleBasePosition.fields.y = v25 - v29;
  this->fields.titleBasePosition.fields.z = v26;
  if ( !faceBase )
    goto LABEL_28;
  v30 = UnityEngine_GameObject__get_transform(faceBase, 0LL);
  if ( !v30 )
    goto LABEL_28;
  v34 = UnityEngine_Transform__get_localPosition(v30, 0LL);
  explanationLabel = (UnityEngine_Component_o *)this->fields.explanationLabel;
  this->fields.faceBasePosition.fields.x = v34.fields.x;
  this->fields.faceBasePosition.fields.y = v34.fields.y - v29;
  this->fields.faceBasePosition.fields.z = v34.fields.z;
  if ( !explanationLabel )
    goto LABEL_28;
  v32 = UnityEngine_Component__get_transform(explanationLabel, 0LL);
  if ( !v32 )
    goto LABEL_28;
  v35 = UnityEngine_Transform__get_localPosition(v32, 0LL);
  this->fields.explanationBasePosition.fields.x = v35.fields.x;
  this->fields.explanationBasePosition.fields.y = v35.fields.y + v29;
  this->fields.explanationBasePosition.fields.z = v35.fields.z;
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
  UISprite_o *v13; // x0
  struct UISprite_array *v14; // x8
  UnityEngine_Behaviour_o *v15; // x0
  int32_t v16; // w21
  int32_t iconId; // t1
  struct UISprite_array *v18; // x8
  UISprite_o *v19; // x22
  System_String_o *v20; // x0
  System_String_o *v21; // x21
  struct UISprite_array *v22; // x8
  UIWidget_o *v23; // x0
  struct UISprite_array *v24; // x8
  UIWidget_o *v25; // x0
  struct UISprite_array *v26; // x8
  UIWidget_o *v27; // x0
  struct UISprite_array *v28; // x8
  UnityEngine_Component_o *v29; // x0
  UnityEngine_Transform_o *transform; // x0
  struct UISprite_array *v31; // x8
  UnityEngine_Behaviour_o *v32; // x0
  UnityEngine_Vector3_o v33; // 0:s0.4,4:s1.4,8:s2.4

  v6 = this;
  if ( (byte_40FDE9E & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, *(_QWORD *)&index);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v7);
    sub_B16FFC(&StringLiteral_22382/*"svt_costume_icon_"*/, v8);
    this = (ServantStatusListViewItemDrawFace_o *)sub_B16FFC(&StringLiteral_1/*""*/, v9);
    byte_40FDE9E = 1;
  }
  faceSpriteCostumeIconList = v6->fields.faceSpriteCostumeIconList;
  if ( !faceSpriteCostumeIconList )
    goto LABEL_41;
  if ( faceSpriteCostumeIconList->max_length <= index )
  {
LABEL_42:
    sub_B17100(this, *(_QWORD *)&index, svtCostumeEntity);
    sub_B170A0();
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
    v13 = v12->m_Items[index];
    if ( !v13 )
      goto LABEL_41;
    UISprite__set_spriteName(v13, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    v14 = v6->fields.faceSpriteCostumeIconList;
    if ( !v14 )
      goto LABEL_41;
    if ( v14->max_length <= index )
      goto LABEL_42;
    v15 = (UnityEngine_Behaviour_o *)v14->m_Items[index];
    if ( !v15 )
      goto LABEL_41;
    UnityEngine_Behaviour__set_enabled(v15, 0, 0LL);
    if ( svtCostumeEntity )
    {
      iconId = svtCostumeEntity->fields.iconId;
      v16 = (_DWORD)svtCostumeEntity + 92;
      if ( iconId >= 1 )
      {
        v18 = v6->fields.faceSpriteCostumeIconList;
        if ( !v18 )
          goto LABEL_41;
        if ( v18->max_length <= index )
          goto LABEL_42;
        v19 = v18->m_Items[index];
        v20 = System_Int32__ToString(v16, 0LL);
        v21 = System_String__Concat_43743732((System_String_o *)StringLiteral_22382/*"svt_costume_icon_"*/, v20, 0LL);
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        this = (ServantStatusListViewItemDrawFace_o *)AtlasManager__SetEventSprite(v19, v21, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          v22 = v6->fields.faceSpriteCostumeIconList;
          if ( !v22 )
            goto LABEL_41;
          if ( v22->max_length > index )
          {
            v23 = (UIWidget_o *)v22->m_Items[index];
            if ( !v23 )
              goto LABEL_41;
            UIWidget__set_pivot(v23, 4, 0LL);
            v24 = v6->fields.faceSpriteCostumeIconList;
            if ( !v24 )
              goto LABEL_41;
            if ( v24->max_length > index )
            {
              v25 = (UIWidget_o *)v24->m_Items[index];
              if ( !v25 )
                goto LABEL_41;
              UIWidget__set_width(v25, 32, 0LL);
              v26 = v6->fields.faceSpriteCostumeIconList;
              if ( !v26 )
                goto LABEL_41;
              if ( v26->max_length > index )
              {
                v27 = (UIWidget_o *)v26->m_Items[index];
                if ( !v27 )
                  goto LABEL_41;
                UIWidget__set_height(v27, 32, 0LL);
                v28 = v6->fields.faceSpriteCostumeIconList;
                if ( !v28 )
                  goto LABEL_41;
                if ( v28->max_length > index )
                {
                  v29 = (UnityEngine_Component_o *)v28->m_Items[index];
                  if ( !v29 )
                    goto LABEL_41;
                  transform = UnityEngine_Component__get_transform(v29, 0LL);
                  if ( !transform )
                    goto LABEL_41;
                  v33.fields.x = -42.0;
                  v33.fields.z = 0.0;
                  v33.fields.y = -42.0;
                  UnityEngine_Transform__set_localPosition(transform, v33, 0LL);
                  v31 = v6->fields.faceSpriteCostumeIconList;
                  if ( !v31 )
                    goto LABEL_41;
                  if ( v31->max_length > index )
                  {
                    v32 = (UnityEngine_Behaviour_o *)v31->m_Items[index];
                    if ( v32 )
                    {
                      UnityEngine_Behaviour__set_enabled(v32, 1, 0LL);
                      return;
                    }
LABEL_41:
                    sub_B170D4();
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
  System_String_o *v23; // x0
  struct UserServantEntity_o *userSvtEntity; // x8
  __int64 v25; // x22
  __int64 v26; // x23
  UILabel_o *v27; // x22
  System_String_o *v28; // x0
  struct UserServantCollectionEntity_o *userSvtCollectionEntity; // x8
  UILabel_o *v30; // x22
  System_String_o *v31; // x0
  struct ServantLeaderInfo_o *servantLeaderInfo; // x8
  int32_t v33; // w0
  int32_t v34; // w22
  System_String_o *ServantStatusExplanationText; // x0
  struct UILabel_o *v36; // x23
  System_String_o *mText; // x25
  System_String_o *v38; // x24
  Il2CppObject *LimitCountSealedServantName; // x0
  System_String_o *v40; // x0
  System_String_o *v41; // x0
  int v42; // w23
  System_String_o *v43; // x0
  int32_t ConvertOverwriteIconLimitCount; // w0
  struct System_Int32_array *iconSelectList; // x28
  __int64 v46; // x8
  signed __int64 maxIconLimitCount; // x22
  int32_t facePitch; // w9
  float x; // s8
  float y; // s9
  float z; // s10
  UnityEngine_Object_o *baseCollider; // x21
  int v53; // w8
  int v54; // w8
  int v55; // w8
  int v56; // w24
  float v57; // s9
  UnityEngine_BoxCollider_o *v58; // x0
  UIWidget_o *baseSprite; // x0
  double v60; // d0
  UIWidget_o *v61; // x0
  double v62; // d0
  UnityEngine_Component_o *titleSprite; // x0
  int v64; // w21
  float v65; // s8
  float v66; // s11
  float v67; // s9
  UnityEngine_Transform_o *transform; // x0
  float v69; // s10
  UnityEngine_GameObject_o *faceBase; // x0
  float v71; // s8
  float v72; // s11
  float v73; // s9
  UnityEngine_Transform_o *v74; // x0
  UnityEngine_Component_o *v75; // x0
  float v76; // s8
  float v77; // s10
  float v78; // s9
  UnityEngine_Transform_o *v79; // x0
  WebViewManager_o *Instance; // x0
  WebViewManager_o *v81; // x0
  const MethodInfo *v82; // x3
  ServantCostumeMaster_o *v83; // x21
  unsigned __int64 v84; // x24
  int32_t *v85; // x23
  __int64 IsMine; // x0
  __int64 v87; // x1
  __int64 v88; // x2
  struct UISprite_array *faceSpriteList; // x9
  char v90; // w8
  UISprite_o *v91; // x25
  AtlasManager_c *v92; // x0
  struct UISprite_array *faceFrameSpriteList; // x8
  UnityEngine_Behaviour_o *v94; // x0
  bool v95; // w1
  int v96; // w8
  int32_t v97; // w25
  int32_t SvtId; // w26
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v99; // kr00_16
  WebViewManager_o *v100; // x0
  ServantLimitImageMaster_o *v101; // x25
  struct UISprite_array *v102; // x8
  UISprite_o *v103; // x26
  int32_t v104; // w25
  int32_t v105; // w27
  const MethodInfo *v106; // x3
  struct UISprite_array *v107; // x8
  struct UISprite_array *v108; // x8
  struct UISprite_array *v110; // x8
  __int64 v111; // x26
  int32_t *v112; // x27
  unsigned int v113; // w22
  struct UISprite_array *v114; // x8
  UnityEngine_Behaviour_o *v115; // x0
  WebViewManager_o *v116; // x0
  ServantLimitImageMaster_o *v117; // x23
  struct UISprite_array *v118; // x8
  UISprite_o *v119; // x24
  int32_t v120; // w23
  int32_t v121; // w25
  ServantCostumeEntity_o *v122; // x0
  const MethodInfo *v123; // x3
  struct UISprite_array *v124; // x8
  UnityEngine_Behaviour_o *v125; // x0
  bool v126; // w1
  struct UISprite_array *v127; // x8
  const MethodInfo *v128; // x2
  ServantLimitSpoilerProtectionMaster_o *MasterData_WarQuestSelectionMaster; // [xsp+8h] [xbp-88h]
  int32_t v130; // [xsp+14h] [xbp-7Ch]
  ServantCostumeEntity_o *entity; // [xsp+18h] [xbp-78h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v132; // 0:x0.16
  UnityEngine_Vector3_o v133; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v134; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v135; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v136; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FDE9D & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, item);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantCostumeMaster___, v7);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v8);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___, v9);
    sub_B16FFC(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v10);
    sub_B16FFC(&DataManager_TypeInfo, v11);
    sub_B16FFC(&LocalizationManager_TypeInfo, v12);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v13);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
    sub_B16FFC(&OptionManager_TypeInfo, v15);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_B16FFC(&StringLiteral_11918/*"SERVANT_STATUS_EXPLANATION_FACE"*/, v17);
    sub_B16FFC(&StringLiteral_11920/*"SERVANT_STATUS_EXPLANATION_FACE3"*/, v18);
    sub_B16FFC(&StringLiteral_11919/*"SERVANT_STATUS_EXPLANATION_FACE2"*/, v19);
    sub_B16FFC(&StringLiteral_11921/*"SERVANT_STATUS_EXPLANATION_FACE_LIMIT_COUNT_SEALED_MSG"*/, v20);
    byte_40FDE9D = 1;
  }
  entity = 0LL;
  this->fields.MASK_LABEL_MAX_WIDTH = mode;
  if ( !item || !mode )
    return;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (ServantLimitImageMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  if ( item->fields.userSvtEntity )
  {
    explanationLabel = this->fields.explanationLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v23 = LocalizationManager__Get((System_String_o *)StringLiteral_11918/*"SERVANT_STATUS_EXPLANATION_FACE"*/, 0LL);
    if ( !explanationLabel )
      goto LABEL_160;
    UILabel__set_text(explanationLabel, v23, 0LL);
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
    v28 = LocalizationManager__Get((System_String_o *)StringLiteral_11919/*"SERVANT_STATUS_EXPLANATION_FACE2"*/, 0LL);
    if ( !v27 )
      goto LABEL_160;
    UILabel__set_text(v27, v28, 0LL);
    userSvtCollectionEntity = item->fields.userSvtCollectionEntity;
    if ( !userSvtCollectionEntity )
      goto LABEL_160;
    v26 = *(_QWORD *)&userSvtCollectionEntity->fields.svtId.fields.currentCryptoKey;
    v25 = *(_QWORD *)&userSvtCollectionEntity->fields.svtId.fields.fakeValue;
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
      v43 = LocalizationManager__Get((System_String_o *)StringLiteral_11920/*"SERVANT_STATUS_EXPLANATION_FACE3"*/, 0LL);
      if ( !v30 )
        goto LABEL_160;
      UILabel__set_text(v30, v43, 0LL);
      goto LABEL_42;
    }
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v31 = LocalizationManager__Get((System_String_o *)StringLiteral_11920/*"SERVANT_STATUS_EXPLANATION_FACE3"*/, 0LL);
    if ( !v30 )
      goto LABEL_160;
    UILabel__set_text(v30, v31, 0LL);
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
  *(_QWORD *)&v132.fields.currentCryptoKey = v26;
  *(_QWORD *)&v132.fields.fakeValue = v25;
  v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v132, 0LL);
  if ( !v33 )
    goto LABEL_42;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_160;
  v34 = v33;
  if ( !ServantLimitImageMaster__IsServantLimitCountSeal(Master_WarQuestSelectionMaster, v33, 3, 0LL) )
  {
LABEL_42:
    v42 = 0;
    goto LABEL_43;
  }
  ServantStatusExplanationText = ServantLimitImageMaster__GetServantStatusExplanationText(
                                   Master_WarQuestSelectionMaster,
                                   (System_String_o *)StringLiteral_11921/*"SERVANT_STATUS_EXPLANATION_FACE_LIMIT_COUNT_SEALED_MSG"*/,
                                   v34,
                                   0LL);
  v36 = this->fields.explanationLabel;
  if ( !v36 )
    goto LABEL_160;
  mText = v36->fields.mText;
  v38 = ServantStatusExplanationText;
  LimitCountSealedServantName = (Il2CppObject *)ServantLimitImageMaster__GetLimitCountSealedServantName(
                                                  Master_WarQuestSelectionMaster,
                                                  v34,
                                                  3,
                                                  0LL);
  v40 = System_String__Format(v38, LimitCountSealedServantName, 0LL);
  v41 = System_String__Concat_43743732(mText, v40, 0LL);
  UILabel__set_text(v36, v41, 0LL);
  v42 = 1;
LABEL_43:
  ConvertOverwriteIconLimitCount = ServantStatusListViewItem__get_ConvertOverwriteIconLimitCount(item, 0LL);
  iconSelectList = item->fields.iconSelectList;
  v130 = ConvertOverwriteIconLimitCount;
  if ( !iconSelectList )
    goto LABEL_160;
  v46 = *(_QWORD *)&iconSelectList->max_length;
  maxIconLimitCount = item->fields.maxIconLimitCount;
  if ( (int)v46 < 5 )
    facePitch = 0;
  else
    facePitch = this->fields.facePitch;
  x = this->fields.baseSize.fields.x;
  y = this->fields.baseSize.fields.y;
  z = this->fields.baseSize.fields.z;
  baseCollider = (UnityEngine_Object_o *)this->fields.baseCollider;
  v53 = (int)v46 / 4;
  if ( (*(_QWORD *)&iconSelectList->max_length & 3LL) != 0 )
    ++v53;
  if ( v53 < 3 )
    v54 = 1;
  else
    v54 = v53 - 1;
  v55 = facePitch * v54;
  if ( v42 )
    v56 = v55 + 32;
  else
    v56 = v55;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v57 = y + (float)v56;
  if ( UnityEngine_Object__op_Inequality(baseCollider, 0LL, 0LL) )
  {
    v58 = this->fields.baseCollider;
    if ( !v58 )
      goto LABEL_160;
    v133.fields.x = x;
    v133.fields.y = v57;
    v133.fields.z = z;
    UnityEngine_BoxCollider__set_size(v58, v133, 0LL);
  }
  baseSprite = (UIWidget_o *)this->fields.baseSprite;
  if ( !baseSprite )
    goto LABEL_160;
  v60 = x;
  if ( x == INFINITY )
    v60 = -x;
  UIWidget__set_width(baseSprite, (int)v60, 0LL);
  v61 = (UIWidget_o *)this->fields.baseSprite;
  if ( !v61 )
    goto LABEL_160;
  v62 = v57;
  if ( v57 == INFINITY )
    v62 = -INFINITY;
  UIWidget__set_height(v61, (int)v62, 0LL);
  titleSprite = (UnityEngine_Component_o *)this->fields.titleSprite;
  v64 = v56 >= 0 ? v56 : v56 + 1;
  if ( !titleSprite )
    goto LABEL_160;
  v65 = this->fields.titleBasePosition.fields.x;
  v66 = this->fields.titleBasePosition.fields.y;
  v67 = this->fields.titleBasePosition.fields.z;
  transform = UnityEngine_Component__get_transform(titleSprite, 0LL);
  if ( !transform )
    goto LABEL_160;
  v69 = (float)(v64 >> 1);
  v134.fields.y = v66 + v69;
  v134.fields.x = v65;
  v134.fields.z = v67;
  UnityEngine_Transform__set_localPosition(transform, v134, 0LL);
  faceBase = this->fields.faceBase;
  if ( !faceBase )
    goto LABEL_160;
  v71 = this->fields.faceBasePosition.fields.x;
  v72 = this->fields.faceBasePosition.fields.y;
  v73 = this->fields.faceBasePosition.fields.z;
  v74 = UnityEngine_GameObject__get_transform(faceBase, 0LL);
  if ( !v74 )
    goto LABEL_160;
  v135.fields.y = v72 + v69;
  v135.fields.x = v71;
  v135.fields.z = v73;
  UnityEngine_Transform__set_localPosition(v74, v135, 0LL);
  v75 = (UnityEngine_Component_o *)this->fields.explanationLabel;
  v76 = v42
      ? (float)(this->fields.explanationBasePosition.fields.y - v69) + 16.0
      : this->fields.explanationBasePosition.fields.y - v69;
  if ( !v75 )
    goto LABEL_160;
  v77 = this->fields.explanationBasePosition.fields.x;
  v78 = this->fields.explanationBasePosition.fields.z;
  v79 = UnityEngine_Component__get_transform(v75, 0LL);
  if ( !v79
    || (v136.fields.x = v77,
        v136.fields.y = v76,
        v136.fields.z = v78,
        UnityEngine_Transform__set_localPosition(v79, v136, 0LL),
        (Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (MasterData_WarQuestSelectionMaster = (ServantLimitSpoilerProtectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___),
        (v81 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL) )
  {
LABEL_160:
    sub_B170D4();
  }
  v83 = (ServantCostumeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    (DataManager_o *)v81,
                                    (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
  v84 = 0LL;
  v85 = &iconSelectList->m_Items[1];
  do
  {
    ServantStatusListViewItemDrawFace__SetCostumeIcon(this, v84, 0LL, v82);
    if ( (__int64)v84 > maxIconLimitCount )
      goto LABEL_86;
    IsMine = ServantStatusListViewItem__get_IsMine(item, 0LL);
    if ( (IsMine & 1) == 0 )
    {
      if ( v84 >= iconSelectList->max_length )
        goto LABEL_163;
      if ( v85[v84] > v130 )
      {
LABEL_86:
        IsMine = ServantStatusListViewItem__get_IsMine(item, 0LL);
        faceSpriteList = this->fields.faceSpriteList;
        if ( !faceSpriteList )
          goto LABEL_160;
        if ( v84 >= faceSpriteList->max_length )
          goto LABEL_163;
        v90 = IsMine;
        v91 = faceSpriteList->m_Items[v84];
        v92 = AtlasManager_TypeInfo;
        if ( (v90 & 1) != 0 )
        {
          if ( (WORD1(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !AtlasManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          }
          IsMine = AtlasManager__SetNoMountFace(v91, 0LL);
          faceFrameSpriteList = this->fields.faceFrameSpriteList;
          if ( !faceFrameSpriteList )
            goto LABEL_160;
          if ( v84 >= faceFrameSpriteList->max_length )
            goto LABEL_163;
          v94 = (UnityEngine_Behaviour_o *)faceFrameSpriteList->m_Items[v84];
          if ( !v94 )
            goto LABEL_160;
          v95 = 0;
          goto LABEL_132;
        }
        if ( (WORD1(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) == 0 )
          goto LABEL_127;
LABEL_122:
        if ( !v92->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v92);
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
    IsMine = ServantStatusListViewItem__get_IsMine(item, 0LL);
    if ( (IsMine & 1) != 0 )
      goto LABEL_110;
    if ( v84 >= iconSelectList->max_length )
      goto LABEL_163;
    v96 = v85[v84];
    if ( v96 >= 11 )
      v97 = v85[v84];
    else
      v97 = v96 + 1;
    SvtId = ServantStatusListViewItem__get_SvtId(item, 0LL);
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    v99 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(SvtId, 0LL);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_160;
    IsMine = ServantLimitSpoilerProtectionMaster__IsSpoilerLimitCount(MasterData_WarQuestSelectionMaster, v99, v97, 0LL);
    if ( (IsMine & 1) != 0 )
    {
LABEL_110:
      v100 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v100 )
        goto LABEL_160;
      v101 = (ServantLimitImageMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                            (DataManager_o *)v100,
                                            (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
      IsMine = ServantStatusListViewItem__get_SvtId(item, 0LL);
      if ( v84 >= iconSelectList->max_length )
        goto LABEL_163;
      if ( !v101 )
        goto LABEL_160;
      IsMine = ServantLimitImageMaster__GetServantImageLimitSealAfter(v101, IsMine, v85[v84], 0LL);
      v102 = this->fields.faceSpriteList;
      if ( !v102 )
        goto LABEL_160;
      if ( v84 >= v102->max_length )
        goto LABEL_163;
      v103 = v102->m_Items[v84];
      v104 = IsMine;
      v105 = ServantStatusListViewItem__get_SvtId(item, 0LL);
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetFaceImage(v103, v105, v104, 0LL);
      IsMine = ServantStatusListViewItem__get_SvtId(item, 0LL);
      if ( v84 >= iconSelectList->max_length )
      {
LABEL_163:
        sub_B17100(IsMine, v87, v88);
        sub_B170A0();
      }
      if ( !v83 )
        goto LABEL_160;
      ServantCostumeMaster__TryGetEntity(v83, &entity, IsMine, v85[v84], 0LL);
      ServantStatusListViewItemDrawFace__SetCostumeIcon(this, v84, entity, v106);
      goto LABEL_128;
    }
    v107 = this->fields.faceSpriteList;
    if ( !v107 )
      goto LABEL_160;
    if ( v84 >= v107->max_length )
      goto LABEL_163;
    v91 = v107->m_Items[v84];
    v92 = AtlasManager_TypeInfo;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 )
      goto LABEL_122;
LABEL_127:
    IsMine = AtlasManager__SetNotOpenFace(v91, 0LL);
LABEL_128:
    v108 = this->fields.faceFrameSpriteList;
    if ( !v108 )
      goto LABEL_160;
    if ( v84 >= v108->max_length )
      goto LABEL_163;
    v94 = (UnityEngine_Behaviour_o *)v108->m_Items[v84];
    if ( !v94 )
      goto LABEL_160;
    v95 = 1;
LABEL_132:
    UnityEngine_Behaviour__set_enabled(v94, v95, 0LL);
  }
  while ( v84++ < 3 );
  v110 = this->fields.faceSpriteList;
  if ( !v110 )
    goto LABEL_160;
  v111 = 0LL;
  v112 = &iconSelectList->m_Items[5];
  while ( 1 )
  {
    v113 = v111 + 4;
    if ( (int)v111 + 4 >= (signed int)v110->max_length )
      break;
    ServantStatusListViewItemDrawFace__SetCostumeIcon(this, v113, 0LL, v82);
    v114 = this->fields.faceSpriteList;
    if ( !v114 )
      goto LABEL_160;
    if ( v113 >= v114->max_length )
      goto LABEL_163;
    v115 = (UnityEngine_Behaviour_o *)v114->m_Items[v111 + 4];
    if ( !v115 )
      goto LABEL_160;
    if ( (signed int)v113 >= (signed int)iconSelectList->max_length )
    {
      UnityEngine_Behaviour__set_enabled(v115, 0, 0LL);
      v127 = this->fields.faceFrameSpriteList;
      if ( !v127 )
        goto LABEL_160;
      if ( v113 >= v127->max_length )
        goto LABEL_163;
      v125 = (UnityEngine_Behaviour_o *)v127->m_Items[v111 + 4];
      if ( !v125 )
        goto LABEL_160;
      v126 = 0;
    }
    else
    {
      UnityEngine_Behaviour__set_enabled(v115, 1, 0LL);
      v116 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v116 )
        goto LABEL_160;
      v117 = (ServantLimitImageMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                            (DataManager_o *)v116,
                                            (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
      IsMine = ServantStatusListViewItem__get_SvtId(item, 0LL);
      if ( v113 >= iconSelectList->max_length )
        goto LABEL_163;
      if ( !v117 )
        goto LABEL_160;
      IsMine = ServantLimitImageMaster__GetServantImageLimitSealAfter(v117, IsMine, v112[v111], 0LL);
      v118 = this->fields.faceSpriteList;
      if ( !v118 )
        goto LABEL_160;
      if ( v113 >= v118->max_length )
        goto LABEL_163;
      v119 = v118->m_Items[v111 + 4];
      v120 = IsMine;
      v121 = ServantStatusListViewItem__get_SvtId(item, 0LL);
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetFaceImage(v119, v121, v120, 0LL);
      IsMine = ServantStatusListViewItem__get_SvtId(item, 0LL);
      if ( v113 >= iconSelectList->max_length )
        goto LABEL_163;
      if ( !v83 )
        goto LABEL_160;
      v122 = ServantCostumeMaster__GetEntity(v83, IsMine, v112[v111], 0LL);
      ServantStatusListViewItemDrawFace__SetCostumeIcon(this, v113, v122, v123);
      v124 = this->fields.faceFrameSpriteList;
      if ( !v124 )
        goto LABEL_160;
      if ( v113 >= v124->max_length )
        goto LABEL_163;
      v125 = (UnityEngine_Behaviour_o *)v124->m_Items[v111 + 4];
      if ( !v125 )
        goto LABEL_160;
      v126 = 1;
    }
    UnityEngine_Behaviour__set_enabled(v125, v126, 0LL);
    v110 = this->fields.faceSpriteList;
    ++v111;
    if ( !v110 )
      goto LABEL_160;
  }
  ServantStatusListViewItemDrawFace__SetupButton(this, item, 1, v82);
  ServantStatusListViewItemDrawFace__SetupMask(this, item, v128);
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
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
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
  WebViewManager_o *v34; // x0
  WarQuestSelectionMaster_o *SvtId; // x0
  __int64 v36; // x1
  __int64 v37; // x2
  ServantLimitImageMaster_o *v38; // x25
  int v39; // w8
  int v40; // w9
  _BOOL4 v41; // w19
  struct UIRangeLabel_array *charaLevelTitleRangeLabelList; // x10
  UIRangeLabel_o *v43; // x26
  int v44; // w20
  System_String_o *v45; // x0
  int v46; // w8
  float v47; // s3
  float v48; // s2
  float v49; // s1
  float v50; // s0
  System_String_o *v51; // x0
  System_String_o *v52; // x27
  System_String_o *v53; // x0
  struct UISprite_array *charaLevelSpriteList; // x8
  UISprite_o *v55; // x0
  __int64 *v56; // x8
  struct UICommonButton_array *faceButtonList; // x8
  UICommonButton_o *v58; // x0
  bool v59; // w19
  struct UICommonButton_array *charaLevelButtonList; // x8
  UICommonButton_o *v61; // x0
  char v62; // w26
  bool v63; // w19
  struct UICommonButton_array *v64; // x8
  UICommonButton_o *v65; // x0
  struct UILabel_array *limitCountSealLabel; // x8
  UnityEngine_Object_o *v67; // x26
  struct UnityEngine_GameObject_array *limitCountSealObjList; // x8
  UnityEngine_GameObject_o *v69; // x27
  System_String_o *v70; // x0
  System_String_o *v71; // x1
  bool v72; // nf
  struct UICommonButton_array *v73; // x8
  __int64 v74; // x22
  il2cpp_array_size_t v75; // w27
  int max_length; // w19
  _BOOL4 v77; // w20
  struct UIRangeLabel_array *v78; // x9
  UIRangeLabel_o *v79; // x25
  int v80; // w23
  ServantCostumeEntity_o *Entity; // x0
  __int64 v82; // x1
  System_String_o *ShortName; // x26
  LocalizationManager_c *v84; // x0
  int v85; // w8
  float v86; // s3
  float v87; // s2
  float v88; // s1
  float v89; // s0
  struct UISprite_array *v90; // x8
  UISprite_o *v91; // x0
  __int64 *v92; // x8
  struct UICommonButton_array *v93; // x8
  UICommonButton_o *v94; // x0
  bool v95; // w19
  struct UICommonButton_array *v96; // x8
  UICommonButton_o *v97; // x0
  char v98; // w25
  bool v99; // w19
  struct UICommonButton_array *v100; // x8
  UICommonButton_o *v101; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  struct UICommonButton_array *v103; // x8
  UnityEngine_Component_o *v104; // x0
  UnityEngine_GameObject_o *v105; // x0
  ServantCostumeMaster_o *v106; // [xsp+8h] [xbp-B8h]
  bool v107; // [xsp+14h] [xbp-ACh]
  int32_t v108; // [xsp+18h] [xbp-A8h]
  struct System_Int32_array *iconSelectList; // [xsp+20h] [xbp-A0h]
  unsigned int v111; // [xsp+2Ch] [xbp-94h] BYREF
  UnityEngine_Color_o v112; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_40FDE9F & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantCostumeMaster___, item);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v6);
    sub_B16FFC(&LocalizationManager_TypeInfo, v7);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v8);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_B16FFC(&StringLiteral_8360/*"LIMIT_COUNT_SELECT_SEALED"*/, v10);
    sub_B16FFC(&StringLiteral_11938/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_"*/, v11);
    sub_B16FFC(&StringLiteral_16899/*"btn_bg_20"*/, v12);
    sub_B16FFC(&StringLiteral_11939/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_CLOSE"*/, v13);
    sub_B16FFC(&StringLiteral_1/*""*/, v14);
    sub_B16FFC(&StringLiteral_16900/*"btn_bg_21"*/, v15);
    byte_40FDE9F = 1;
  }
  v111 = 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_182;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
  if ( !item )
    goto LABEL_182;
  v106 = (ServantCostumeMaster_o *)MasterData_WarQuestSelectionMaster;
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
  v108 = ConvertOverwriteIconLimitCount;
  iconSelectList = item->fields.iconSelectList;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  if ( !byte_40F6254 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, v20);
    byte_40F6254 = 1;
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
  if ( !byte_40F6255 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, v20);
    v22 = LocalizationManager_TypeInfo;
    byte_40F6255 = 1;
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
  v34 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v34 )
LABEL_182:
    sub_B170D4();
  SvtId = DataManager__GetMasterData_WarQuestSelectionMaster_(
            (DataManager_o *)v34,
            (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  v111 = 0;
  v38 = (ServantLimitImageMaster_o *)SvtId;
  v39 = 0;
  do
  {
    if ( v39 <= maxIconLimitCount )
    {
      if ( !v28 )
        goto LABEL_182;
      if ( v39 >= v28->max_length )
        goto LABEL_184;
      v41 = v28->m_Items[v39 + 1] == v108;
      v40 = 1;
    }
    else
    {
      v40 = 0;
      v41 = 0;
    }
    charaLevelTitleRangeLabelList = this->fields.charaLevelTitleRangeLabelList;
    if ( !charaLevelTitleRangeLabelList )
      goto LABEL_182;
    if ( v39 >= charaLevelTitleRangeLabelList->max_length )
    {
LABEL_184:
      sub_B17100(SvtId, v36, v37);
      sub_B170A0();
    }
    v43 = charaLevelTitleRangeLabelList->m_Items[v39];
    v44 = v40 & v18;
    if ( v40 || !ServantStatusListViewItem__get_IsMine(item, 0LL) )
    {
      if ( !v43 )
        goto LABEL_182;
      v46 = v41 & v44;
      if ( (v41 & v44) != 0 )
        v47 = v33;
      else
        v47 = v27;
      if ( v46 )
        v48 = v32;
      else
        v48 = v26;
      if ( v46 )
        v49 = v31;
      else
        v49 = v25;
      if ( v46 )
        v50 = v30;
      else
        v50 = v24;
      UIRangeLabel__set_effectColor(v43, *(UnityEngine_Color_o *)(&v47 - 3), 0LL);
      v51 = System_Int32__ToString((int32_t)&v111, 0LL);
      v52 = System_String__Concat_43743732((System_String_o *)StringLiteral_11938/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_"*/, v51, 0LL);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v45 = v52;
    }
    else
    {
      if ( !v43 )
        goto LABEL_182;
      v112.fields.r = v24;
      v112.fields.g = v25;
      v112.fields.b = v26;
      v112.fields.a = v27;
      UIRangeLabel__set_effectColor(v43, v112, 0LL);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v45 = (System_String_o *)StringLiteral_11939/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_CLOSE"*/;
    }
    v53 = LocalizationManager__Get(v45, 0LL);
    UIRangeLabel__Set(v43, v53, 0LL, 1, 0, 0LL);
    charaLevelSpriteList = this->fields.charaLevelSpriteList;
    if ( !charaLevelSpriteList )
      goto LABEL_182;
    if ( v111 >= charaLevelSpriteList->max_length )
      goto LABEL_184;
    v55 = charaLevelSpriteList->m_Items[v111];
    if ( !v55 )
      goto LABEL_182;
    v56 = &StringLiteral_16899/*"btn_bg_20"*/;
    if ( v41 )
      v56 = &StringLiteral_16900/*"btn_bg_21"*/;
    UISprite__set_spriteName(v55, (System_String_o *)*v56, 0LL);
    faceButtonList = this->fields.faceButtonList;
    if ( !faceButtonList )
      goto LABEL_182;
    if ( v111 >= faceButtonList->max_length )
      goto LABEL_184;
    v58 = faceButtonList->m_Items[v111];
    if ( (v41 & v44) != 0 )
    {
      if ( !v58 )
        goto LABEL_182;
      v59 = v44 == 0 || isInit;
      UICommonButton__SetColliderEnable(v58, 0, v44 == 0 || isInit, 0LL);
      charaLevelButtonList = this->fields.charaLevelButtonList;
      if ( !charaLevelButtonList )
        goto LABEL_182;
      v28 = iconSelectList;
      if ( v111 >= charaLevelButtonList->max_length )
        goto LABEL_184;
      v61 = charaLevelButtonList->m_Items[v111];
      if ( !v61 )
        goto LABEL_182;
      UICommonButton__SetColliderEnable(v61, 0, v59, 0LL);
    }
    else
    {
      if ( !v58 )
        goto LABEL_182;
      v62 = v44 & ~v41;
      v63 = v44 == 0 || isInit;
      UICommonButton__SetButtonEnable(v58, v62, v44 == 0 || isInit, 0LL);
      v64 = this->fields.charaLevelButtonList;
      if ( !v64 )
        goto LABEL_182;
      v28 = iconSelectList;
      if ( v111 >= v64->max_length )
        goto LABEL_184;
      v65 = v64->m_Items[v111];
      if ( !v65 )
        goto LABEL_182;
      UICommonButton__SetButtonEnable(v65, v62, v63, 0LL);
    }
    limitCountSealLabel = this->fields.limitCountSealLabel;
    if ( limitCountSealLabel )
    {
      if ( v111 >= limitCountSealLabel->max_length )
        goto LABEL_184;
      v67 = (UnityEngine_Object_o *)limitCountSealLabel->m_Items[v111];
    }
    else
    {
      v67 = 0LL;
    }
    limitCountSealObjList = this->fields.limitCountSealObjList;
    if ( limitCountSealObjList )
    {
      if ( v111 >= limitCountSealObjList->max_length )
        goto LABEL_184;
      v69 = limitCountSealObjList->m_Items[v111];
    }
    else
    {
      v69 = 0LL;
    }
    SvtId = (WarQuestSelectionMaster_o *)ServantStatusListViewItem__get_SvtId(item, 0LL);
    if ( !v28 )
      goto LABEL_182;
    if ( v111 >= v28->max_length )
      goto LABEL_184;
    if ( !v38 )
      goto LABEL_182;
    if ( ServantLimitImageMaster__IsServantLimitCountSeal(v38, (int32_t)SvtId, v28->m_Items[v111 + 1] + 1, 0LL) )
    {
      if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v69, 0LL, 0LL) )
      {
        if ( !v69 )
          goto LABEL_182;
        UnityEngine_GameObject__SetActive(v69, 1, 0LL);
      }
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      SvtId = (WarQuestSelectionMaster_o *)UnityEngine_Object__op_Inequality(v67, 0LL, 0LL);
      if ( ((unsigned __int8)SvtId & 1) != 0 )
      {
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v70 = LocalizationManager__Get((System_String_o *)StringLiteral_8360/*"LIMIT_COUNT_SELECT_SEALED"*/, 0LL);
        if ( !v67 )
          goto LABEL_182;
        v71 = v70;
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
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v69, 0LL, 0LL) )
      {
        if ( !v69 )
          goto LABEL_182;
        UnityEngine_GameObject__SetActive(v69, 0, 0LL);
      }
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      SvtId = (WarQuestSelectionMaster_o *)UnityEngine_Object__op_Inequality(v67, 0LL, 0LL);
      if ( ((unsigned __int8)SvtId & 1) != 0 )
      {
        if ( !v67 )
          goto LABEL_182;
        v71 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_114:
        UILabel__set_text((UILabel_o *)v67, v71, 0LL);
      }
    }
    v72 = (int)(v111 - 3) < 0;
    v39 = ++v111;
  }
  while ( v72 != __OFSUB__(v111, 4) );
  v73 = this->fields.charaLevelButtonList;
  if ( !v73 )
    goto LABEL_182;
  v74 = 12LL;
  v107 = v18;
  while ( 1 )
  {
    v75 = v74 - 8;
    if ( (int)v74 - 8 >= (signed int)v73->max_length )
      break;
    max_length = v28->max_length;
    if ( (int)v75 >= max_length )
    {
      v77 = 0;
    }
    else
    {
      if ( v75 >= max_length )
        goto LABEL_184;
      v77 = *((_DWORD *)&v28->obj.klass + v74) == v108;
    }
    v78 = this->fields.charaLevelTitleRangeLabelList;
    if ( !v78 )
      goto LABEL_182;
    if ( v75 >= v78->max_length )
      goto LABEL_184;
    v79 = v78->m_Items[v75];
    v80 = v18 && (int)v75 < max_length;
    if ( (int)v75 >= max_length )
    {
      if ( !v79 )
        goto LABEL_182;
      UIRangeLabel__Clear(v78->m_Items[v75], 0LL);
    }
    else
    {
      SvtId = (WarQuestSelectionMaster_o *)ServantStatusListViewItem__get_SvtId(item, 0LL);
      if ( v75 >= iconSelectList->max_length )
        goto LABEL_184;
      if ( !v106 )
        goto LABEL_182;
      Entity = ServantCostumeMaster__GetEntity(v106, (int32_t)SvtId, iconSelectList->m_Items[v75 + 1], 0LL);
      if ( Entity )
      {
        ShortName = ServantCostumeEntity__getShortName(Entity, 0LL);
        if ( !v79 )
          goto LABEL_182;
      }
      else
      {
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        if ( !byte_40F87E5 )
        {
          sub_B16FFC(&LocalizationManager_TypeInfo, v82);
          byte_40F87E5 = 1;
        }
        v84 = LocalizationManager_TypeInfo;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v84 = LocalizationManager_TypeInfo;
        }
        ShortName = v84->static_fields->unknownNameText;
        if ( !v79 )
          goto LABEL_182;
      }
      v85 = v77 & v80;
      if ( (v77 & v80) != 0 )
        v86 = v33;
      else
        v86 = v27;
      if ( v85 )
        v87 = v32;
      else
        v87 = v26;
      if ( v85 )
        v88 = v31;
      else
        v88 = v25;
      if ( v85 )
        v89 = v30;
      else
        v89 = v24;
      UIRangeLabel__set_effectColor(v79, *(UnityEngine_Color_o *)(&v86 - 3), 0LL);
      UIRangeLabel__Set(v79, ShortName, 0LL, 1, 0, 0LL);
    }
    v90 = this->fields.charaLevelSpriteList;
    if ( !v90 )
      goto LABEL_182;
    if ( v75 >= v90->max_length )
      goto LABEL_184;
    v91 = v90->m_Items[v75];
    if ( !v91 )
      goto LABEL_182;
    v92 = &StringLiteral_16899/*"btn_bg_20"*/;
    if ( v77 )
      v92 = &StringLiteral_16900/*"btn_bg_21"*/;
    UISprite__set_spriteName(v91, (System_String_o *)*v92, 0LL);
    v93 = this->fields.faceButtonList;
    if ( !v93 )
      goto LABEL_182;
    if ( v75 >= v93->max_length )
      goto LABEL_184;
    v94 = v93->m_Items[v75];
    if ( (v77 & v80) != 0 )
    {
      if ( !v94 )
        goto LABEL_182;
      v95 = v80 == 0 || isInit;
      UICommonButton__SetColliderEnable(v94, 0, v80 == 0 || isInit, 0LL);
      v96 = this->fields.charaLevelButtonList;
      v28 = iconSelectList;
      if ( !v96 )
        goto LABEL_182;
      LOBYTE(v18) = v107;
      if ( v75 >= v96->max_length )
        goto LABEL_184;
      v97 = v96->m_Items[v75];
      if ( !v97 )
        goto LABEL_182;
      UICommonButton__SetColliderEnable(v97, 0, v95, 0LL);
    }
    else if ( (int)v75 >= max_length )
    {
      if ( !v94 )
        goto LABEL_182;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v94, 0LL);
      LOBYTE(v18) = v107;
      v28 = iconSelectList;
      if ( !gameObject )
        goto LABEL_182;
      UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
      v103 = this->fields.charaLevelButtonList;
      if ( !v103 )
        goto LABEL_182;
      if ( v75 >= v103->max_length )
        goto LABEL_184;
      v104 = (UnityEngine_Component_o *)v103->m_Items[v75];
      if ( !v104 )
        goto LABEL_182;
      v105 = UnityEngine_Component__get_gameObject(v104, 0LL);
      if ( !v105 )
        goto LABEL_182;
      UnityEngine_GameObject__SetActive(v105, 0, 0LL);
    }
    else
    {
      if ( !v94 )
        goto LABEL_182;
      v98 = v80 & ~v77;
      v99 = v80 == 0 || isInit;
      UICommonButton__SetButtonEnable(v94, v98, v80 == 0 || isInit, 0LL);
      v100 = this->fields.charaLevelButtonList;
      if ( !v100 )
        goto LABEL_182;
      LOBYTE(v18) = v107;
      v28 = iconSelectList;
      if ( v75 >= v100->max_length )
        goto LABEL_184;
      v101 = v100->m_Items[v75];
      if ( !v101 )
        goto LABEL_182;
      UICommonButton__SetButtonEnable(v101, v98, v99, 0LL);
    }
    v73 = this->fields.charaLevelButtonList;
    ++v74;
    if ( !v73 )
      goto LABEL_182;
  }
}


void __fastcall ServantStatusListViewItemDrawFace__SetupMask(
        ServantStatusListViewItemDrawFace_o *this,
        ServantStatusListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_GameObject_o *v9; // x0
  struct UISprite_o *baseSprite; // x8
  UIWidget_o *maskSprite; // x0
  UIWidget_o *v12; // x0
  UnityEngine_Component_o *v13; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v15; // x21
  UnityEngine_Transform_o *transform; // x0
  System_String_o *Empty; // x21
  __int64 *v18; // x8
  UnityEngine_GameObject_o *maskBase; // x0
  UILabel_o *maskInfoLabel; // x0
  UILabel_o *v21; // x0
  UILabel_o *v22; // x0
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FDEA0 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, item);
    sub_B16FFC(&OptionManager_TypeInfo, v5);
    sub_B16FFC(&string_TypeInfo, v6);
    sub_B16FFC(&StringLiteral_11959/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_INFO_ALL_SETTING_FACE"*/, v7);
    sub_B16FFC(&StringLiteral_11963/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_INFO_OWN_SETTING_FACE"*/, v8);
    byte_40FDEA0 = 1;
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
    maskBase = this->fields.maskBase;
    if ( maskBase )
    {
      UnityEngine_GameObject__SetActive(maskBase, 0, 0LL);
      return;
    }
LABEL_37:
    sub_B170D4();
  }
  v9 = this->fields.maskBase;
  if ( !v9 )
    goto LABEL_37;
  UnityEngine_GameObject__SetActive(v9, 1, 0LL);
  baseSprite = this->fields.baseSprite;
  if ( !baseSprite )
    goto LABEL_37;
  maskSprite = (UIWidget_o *)this->fields.maskSprite;
  if ( !maskSprite )
    goto LABEL_37;
  UIWidget__set_height(maskSprite, baseSprite->fields.mHeight, 0LL);
  v12 = (UIWidget_o *)this->fields.maskSprite;
  if ( !v12 )
    goto LABEL_37;
  UIWidget__ResizeCollider(v12, 0LL);
  v13 = (UnityEngine_Component_o *)this->fields.maskSprite;
  if ( !v13 )
    goto LABEL_37;
  gameObject = UnityEngine_Component__get_gameObject(v13, 0LL);
  if ( !this->fields.baseSprite )
    goto LABEL_37;
  v15 = gameObject;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.baseSprite, 0LL);
  if ( !transform )
    goto LABEL_37;
  localPosition = UnityEngine_Transform__get_localPosition(transform, 0LL);
  GameObjectExtensions__SetLocalPositionY(v15, localPosition.fields.y, 0LL);
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
    v18 = &StringLiteral_11959/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_INFO_ALL_SETTING_FACE"*/;
LABEL_32:
    Empty = LocalizationManager__Get((System_String_o *)*v18, 0LL);
    goto LABEL_33;
  }
  if ( item->fields.isEnableOwnRandomSetting )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v18 = &StringLiteral_11963/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_INFO_OWN_SETTING_FACE"*/;
    goto LABEL_32;
  }
LABEL_33:
  maskInfoLabel = this->fields.maskInfoLabel;
  if ( !maskInfoLabel )
    goto LABEL_37;
  UILabel__set_overflowMethod(maskInfoLabel, 2, 0LL);
  v21 = this->fields.maskInfoLabel;
  if ( !v21 )
    goto LABEL_37;
  UILabel__set_text(v21, Empty, 0LL);
  v22 = this->fields.maskInfoLabel;
  if ( !v22 )
    goto LABEL_37;
  UILabel__SetCondensedScale(v22, *(&this->fields.MASK_LABEL_MAX_WIDTH + 1), 0LL);
}