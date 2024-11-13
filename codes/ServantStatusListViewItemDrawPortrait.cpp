void __fastcall ServantStatusListViewItemDrawPortrait___ctor(
        ServantStatusListViewItemDrawPortrait_o *this,
        const MethodInfo *method)
{
  this->fields.MASK_LABEL_MAX_WIDTH = 550;
  this->fields.QUESTION_MARK_COLOR = (struct UnityEngine_Color_o)xmmword_BD2310;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusListViewItemDrawPortrait__Awake(
        ServantStatusListViewItemDrawPortrait_o *this,
        const MethodInfo *method)
{
  struct UISprite_array *charaLevelSpriteList; // x8
  ServantStatusListViewItemDrawPortrait_o *v3; // x19
  int32_t buttonPitch; // w20
  float v5; // s1
  struct UISprite_array *v6; // x8
  float v7; // s8
  float v8; // s1
  struct UISprite_o *baseSprite; // x9
  int max_length; // w8
  int mWidth; // s0
  int32_t mHeight; // w9
  bool v13; // cc
  unsigned int v14; // w8
  int v15; // w8
  float v16; // s0
  float v17; // s1
  float v18; // s2
  int v19; // w8
  float v20; // s8
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4

  charaLevelSpriteList = this->fields.charaLevelSpriteList;
  if ( !charaLevelSpriteList )
    goto LABEL_28;
  v3 = this;
  if ( (int)charaLevelSpriteList->max_length > 3 )
  {
    this = (ServantStatusListViewItemDrawPortrait_o *)charaLevelSpriteList->m_Items[0];
    if ( !this )
      goto LABEL_28;
    this = (ServantStatusListViewItemDrawPortrait_o *)UnityEngine_Component__get_transform(
                                                        (UnityEngine_Component_o *)this,
                                                        0LL);
    if ( !this )
      goto LABEL_28;
    *(UnityEngine_Vector3_o *)(&v5 - 1) = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
    v6 = v3->fields.charaLevelSpriteList;
    if ( !v6 )
      goto LABEL_28;
    if ( v6->max_length <= 3 )
      sub_1BCAA44(this, method);
    if ( (this = (ServantStatusListViewItemDrawPortrait_o *)v6->m_Items[3]) == 0LL
      || (v7 = v5,
          (this = (ServantStatusListViewItemDrawPortrait_o *)UnityEngine_Component__get_transform(
                                                               (UnityEngine_Component_o *)this,
                                                               0LL)) == 0LL)
      || ((*(UnityEngine_Vector3_o *)(&v8 - 1) = UnityEngine_Transform__get_localPosition(
                                                   (UnityEngine_Transform_o *)this,
                                                   0LL),
           charaLevelSpriteList = v3->fields.charaLevelSpriteList,
           (float)(v7 - v8) != INFINITY)
        ? (buttonPitch = (int)(float)(v7 - v8))
        : (buttonPitch = 0x80000000),
          v3->fields.buttonPitch = buttonPitch,
          !charaLevelSpriteList) )
    {
LABEL_28:
      sub_1BCAA3C(this, method);
    }
  }
  else
  {
    buttonPitch = this->fields.buttonPitch;
  }
  baseSprite = v3->fields.baseSprite;
  if ( !baseSprite )
    goto LABEL_28;
  max_length = charaLevelSpriteList->max_length;
  mWidth = baseSprite->fields.mWidth;
  mHeight = baseSprite->fields.mHeight;
  v13 = max_length < 9;
  v14 = ((int)(((unsigned __int64)(1431655765LL * max_length) >> 32) - max_length) >> 1)
      + ((unsigned int)(((unsigned __int64)(1431655765LL * max_length) >> 32) - max_length) >> 31);
  this = (ServantStatusListViewItemDrawPortrait_o *)v3->fields.titleSprite;
  v15 = v13 ? -1 : v14 + 1;
  v3->fields.baseSize.fields.x = (float)mWidth;
  v3->fields.baseSize.fields.y = (float)(mHeight + v15 * buttonPitch);
  v3->fields.baseSize.fields.z = 0.0;
  if ( !this )
    goto LABEL_28;
  this = (ServantStatusListViewItemDrawPortrait_o *)UnityEngine_Component__get_transform(
                                                      (UnityEngine_Component_o *)this,
                                                      0LL);
  if ( !this )
    goto LABEL_28;
  *(UnityEngine_Vector3_o *)&v16 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  this = (ServantStatusListViewItemDrawPortrait_o *)v3->fields.levelButtonBase;
  v19 = buttonPitch >= 0 ? buttonPitch : buttonPitch + 1;
  v20 = (float)(v19 >> 1);
  v3->fields.titleBasePosition.fields.x = v16;
  v3->fields.titleBasePosition.fields.y = v17 - v20;
  v3->fields.titleBasePosition.fields.z = v18;
  if ( !this )
    goto LABEL_28;
  this = (ServantStatusListViewItemDrawPortrait_o *)UnityEngine_GameObject__get_transform(
                                                      (UnityEngine_GameObject_o *)this,
                                                      0LL);
  if ( !this )
    goto LABEL_28;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  this = (ServantStatusListViewItemDrawPortrait_o *)v3->fields.explanationLabel;
  v3->fields.levelButtonBasePosition.fields.x = localPosition.fields.x;
  v3->fields.levelButtonBasePosition.fields.y = localPosition.fields.y - v20;
  v3->fields.levelButtonBasePosition.fields.z = localPosition.fields.z;
  if ( !this )
    goto LABEL_28;
  this = (ServantStatusListViewItemDrawPortrait_o *)UnityEngine_Component__get_transform(
                                                      (UnityEngine_Component_o *)this,
                                                      0LL);
  if ( !this )
    goto LABEL_28;
  v22 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  v3->fields.explanationBasePosition.fields.x = v22.fields.x;
  v3->fields.explanationBasePosition.fields.y = v22.fields.y + v20;
  v3->fields.explanationBasePosition.fields.z = v22.fields.z;
}


int32_t __fastcall ServantStatusListViewItemDrawPortrait__GetKind(
        ServantStatusListViewItemDrawPortrait_o *this,
        const MethodInfo *method)
{
  return 13;
}


void __fastcall ServantStatusListViewItemDrawPortrait__ModifyStatus(
        ServantStatusListViewItemDrawPortrait_o *this,
        ServantStatusListViewItem_o *item,
        const MethodInfo *method)
{
  ServantStatusListViewItem_o *v3; // x19
  ServantStatusListViewItemDrawPortrait_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x2
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
  int32_t ConvertOverwritePortraitLimitCount; // w0
  signed __int64 maxPortraitLimitCount; // x22
  struct System_Int32_array *portraitSelectList; // x27
  int32_t v22; // w21
  unsigned __int64 v23; // x28
  int32_t *v24; // x29
  struct UITexture_array *v25; // x8
  char v26; // w23
  struct UISprite_array *v27; // x8
  const MethodInfo *v28; // x3
  struct UISprite_array *v29; // x8
  UISprite_o *v30; // x23
  struct UISprite_array *v31; // x8
  int v32; // w8
  int32_t v33; // w23
  __int64 v34; // x1
  int32_t SvtId; // w24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v36; // kr00_16
  Il2CppObject *v37; // x23
  struct UITexture_array *servantTextureList; // x8
  UITexture_o *v39; // x23
  int32_t v40; // w25
  __int64 v41; // x1
  int32_t v42; // w24
  __int64 v43; // x1
  int32_t LimitCountByImageLimitCostumeIn; // w25
  struct UISprite_array *servantMaskSpriteList; // x8
  struct UITexture_array *v46; // x8
  struct UISprite_array *v47; // x8
  struct UITexture_array *v48; // x8
  __int64 v49; // x24
  unsigned __int64 v50; // x28
  Il2CppObject *v51; // x21
  struct UITexture_array *v52; // x8
  UITexture_o *v53; // x21
  int32_t v54; // w23
  __int64 v55; // x1
  int32_t v56; // w22
  __int64 v57; // x1
  int32_t v58; // w23
  struct UISprite_array *v59; // x8
  struct UITexture_array *v60; // x8
  char v61; // w21
  struct UISprite_array *v62; // x8
  struct UISprite_array *v63; // x8
  UISprite_o *v64; // x21
  struct UISprite_array *v65; // x8
  Il2CppObject *MasterData_object; // [xsp+8h] [xbp-68h]

  v3 = item;
  v4 = this;
  if ( (byte_4B13211 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, item, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v5, v6);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___, v7, v8);
    sub_1BCA7E0(&ImageLimitCount_TypeInfo, v9, v10);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11, v12);
    sub_1BCA7E0(&OptionManager_TypeInfo, v13, v14);
    sub_1BCA7E0(&ServantAssetLoadManager_TypeInfo, v15, v16);
    this = (ServantStatusListViewItemDrawPortrait_o *)sub_1BCA7E0(
                                                        &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                                        v17,
                                                        v18);
    byte_4B13211 = 1;
  }
  if ( !v3
    || (ConvertOverwritePortraitLimitCount = ServantStatusListViewItem__get_ConvertOverwritePortraitLimitCount(v3, 0LL),
        maxPortraitLimitCount = v3->fields.maxPortraitLimitCount,
        portraitSelectList = v3->fields.portraitSelectList,
        v22 = ConvertOverwritePortraitLimitCount,
        (this = (ServantStatusListViewItemDrawPortrait_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL) )
  {
LABEL_96:
    sub_1BCAA3C(this, item);
  }
  v23 = 0LL;
  v24 = &portraitSelectList->m_Items[1];
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)this,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___);
  do
  {
    if ( (__int64)v23 > maxPortraitLimitCount )
      goto LABEL_7;
    this = (ServantStatusListViewItemDrawPortrait_o *)ServantStatusListViewItem__get_IsMine(v3, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
      goto LABEL_101;
    if ( !portraitSelectList )
      goto LABEL_96;
    if ( v23 >= portraitSelectList->max_length )
      goto LABEL_98;
    if ( v24[v23] <= v22 )
    {
LABEL_101:
      if ( !OptionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, item);
      if ( OptionManager__GetSpoilerSetting(0LL) )
        goto LABEL_39;
      this = (ServantStatusListViewItemDrawPortrait_o *)ServantStatusListViewItem__get_IsMine(v3, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
        goto LABEL_39;
      if ( !portraitSelectList )
        goto LABEL_96;
      if ( v23 >= portraitSelectList->max_length )
        goto LABEL_98;
      v32 = v24[v23];
      if ( v32 >= 11 )
        v33 = v24[v23];
      else
        v33 = v32 + 1;
      SvtId = ServantStatusListViewItem__get_SvtId(v3, 0LL);
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v34);
      v36 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(SvtId, 0LL);
      item = *(ServantStatusListViewItem_o **)&v36.fields.fakeValue;
      this = (ServantStatusListViewItemDrawPortrait_o *)MasterData_object;
      if ( !MasterData_object )
        goto LABEL_96;
      this = (ServantStatusListViewItemDrawPortrait_o *)ServantLimitSpoilerProtectionMaster__IsSpoilerLimitCount(
                                                          (ServantLimitSpoilerProtectionMaster_o *)MasterData_object,
                                                          v36,
                                                          v33,
                                                          0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
LABEL_39:
        this = (ServantStatusListViewItemDrawPortrait_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_96;
        v37 = DataManager__GetMasterData_object_(
                (DataManager_o *)this,
                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
        this = (ServantStatusListViewItemDrawPortrait_o *)ServantStatusListViewItem__get_SvtId(v3, 0LL);
        if ( !portraitSelectList )
          goto LABEL_96;
        if ( v23 >= portraitSelectList->max_length )
          goto LABEL_98;
        if ( !v37 )
          goto LABEL_96;
        this = (ServantStatusListViewItemDrawPortrait_o *)ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                                            (ServantLimitImageMaster_o *)v37,
                                                            (int32_t)this,
                                                            v24[v23],
                                                            0LL);
        servantTextureList = v4->fields.servantTextureList;
        if ( !servantTextureList )
          goto LABEL_96;
        if ( v23 >= servantTextureList->max_length )
          goto LABEL_98;
        v39 = servantTextureList->m_Items[v23];
        v40 = (int)this;
        v42 = ServantStatusListViewItem__get_SvtId(v3, 0LL);
        if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, v41);
        LimitCountByImageLimitCostumeIn = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(v40, 0LL);
        if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, v43);
        this = (ServantStatusListViewItemDrawPortrait_o *)ServantAssetLoadManager__loadStatusFace(
                                                            v39,
                                                            v42,
                                                            LimitCountByImageLimitCostumeIn,
                                                            0LL);
        servantMaskSpriteList = v4->fields.servantMaskSpriteList;
        if ( !servantMaskSpriteList )
          goto LABEL_96;
        if ( v23 >= servantMaskSpriteList->max_length )
          goto LABEL_98;
        this = (ServantStatusListViewItemDrawPortrait_o *)servantMaskSpriteList->m_Items[v23];
        if ( !this )
          goto LABEL_96;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0LL);
        goto LABEL_53;
      }
      v46 = v4->fields.servantTextureList;
      if ( !v46 )
        goto LABEL_96;
      if ( v23 >= v46->max_length )
LABEL_98:
        sub_1BCAA44(this, item);
      this = (ServantStatusListViewItemDrawPortrait_o *)v46->m_Items[v23];
      if ( !this )
        goto LABEL_96;
      this = (ServantStatusListViewItemDrawPortrait_o *)(*(__int64 (__fastcall **)(ServantStatusListViewItemDrawPortrait_o *, _QWORD, _QWORD))&this->klass[1]._2.initializationExceptionGCHandle)(
                                                          this,
                                                          0LL,
                                                          *(_QWORD *)&this->klass[1]._2.cctor_finished);
      v47 = v4->fields.servantMaskSpriteList;
      if ( !v47 )
        goto LABEL_96;
      if ( v23 >= v47->max_length )
        goto LABEL_98;
      this = (ServantStatusListViewItemDrawPortrait_o *)v47->m_Items[v23];
      if ( !this )
        goto LABEL_96;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 1, 0LL);
    }
    else
    {
LABEL_7:
      this = (ServantStatusListViewItemDrawPortrait_o *)ServantStatusListViewItem__get_IsMine(v3, 0LL);
      v25 = v4->fields.servantTextureList;
      if ( !v25 )
        goto LABEL_96;
      if ( v23 >= v25->max_length )
        goto LABEL_98;
      v26 = (char)this;
      this = (ServantStatusListViewItemDrawPortrait_o *)v25->m_Items[v23];
      if ( !this )
        goto LABEL_96;
      this = (ServantStatusListViewItemDrawPortrait_o *)(*(__int64 (__fastcall **)(ServantStatusListViewItemDrawPortrait_o *, _QWORD, _QWORD))&this->klass[1]._2.initializationExceptionGCHandle)(
                                                          this,
                                                          0LL,
                                                          *(_QWORD *)&this->klass[1]._2.cctor_finished);
      v27 = v4->fields.servantMaskSpriteList;
      if ( !v27 )
        goto LABEL_96;
      if ( v23 >= v27->max_length )
        goto LABEL_98;
      this = (ServantStatusListViewItemDrawPortrait_o *)v27->m_Items[v23];
      if ( !this )
        goto LABEL_96;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 1, 0LL);
      if ( (v26 & 1) != 0 )
        goto LABEL_53;
    }
    v29 = v4->fields.servantMaskSpriteList;
    if ( !v29 )
      goto LABEL_96;
    if ( v23 >= v29->max_length )
      goto LABEL_98;
    v30 = v29->m_Items[v23];
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, item);
    this = (ServantStatusListViewItemDrawPortrait_o *)AtlasManager__SetNotOpenFace(v30, 0LL);
    v31 = v4->fields.servantMaskSpriteList;
    if ( !v31 )
      goto LABEL_96;
    if ( v23 >= v31->max_length )
      goto LABEL_98;
    this = (ServantStatusListViewItemDrawPortrait_o *)v31->m_Items[v23];
    if ( !this )
      goto LABEL_96;
    UIWidget__set_color((UIWidget_o *)this, v4->fields.QUESTION_MARK_COLOR, 0LL);
LABEL_53:
    ++v23;
  }
  while ( v23 != 3 );
  v48 = v4->fields.servantTextureList;
  if ( !v48 )
    goto LABEL_96;
  v49 = 0LL;
  while ( 1 )
  {
    v50 = v49 + 3;
    if ( v49 + 3 >= (int)v48->max_length )
      break;
    if ( !portraitSelectList )
      goto LABEL_96;
    if ( (__int64)v50 >= (int)portraitSelectList->max_length )
    {
      this = (ServantStatusListViewItemDrawPortrait_o *)ServantStatusListViewItem__get_IsMine(v3, 0LL);
      v60 = v4->fields.servantTextureList;
      if ( !v60 )
        goto LABEL_96;
      if ( v50 >= v60->max_length )
        goto LABEL_98;
      v61 = (char)this;
      this = (ServantStatusListViewItemDrawPortrait_o *)v60->m_Items[v49 + 3];
      if ( !this )
        goto LABEL_96;
      this = (ServantStatusListViewItemDrawPortrait_o *)(*(__int64 (__fastcall **)(ServantStatusListViewItemDrawPortrait_o *, _QWORD, _QWORD))&this->klass[1]._2.initializationExceptionGCHandle)(
                                                          this,
                                                          0LL,
                                                          *(_QWORD *)&this->klass[1]._2.cctor_finished);
      v62 = v4->fields.servantMaskSpriteList;
      if ( !v62 )
        goto LABEL_96;
      if ( v50 >= v62->max_length )
        goto LABEL_98;
      this = (ServantStatusListViewItemDrawPortrait_o *)v62->m_Items[v49 + 3];
      if ( !this )
        goto LABEL_96;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 1, 0LL);
      if ( (v61 & 1) == 0 )
      {
        v63 = v4->fields.servantMaskSpriteList;
        if ( !v63 )
          goto LABEL_96;
        if ( v50 >= v63->max_length )
          goto LABEL_98;
        v64 = v63->m_Items[v49 + 3];
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, item);
        this = (ServantStatusListViewItemDrawPortrait_o *)AtlasManager__SetNotOpenFace(v64, 0LL);
        v65 = v4->fields.servantMaskSpriteList;
        if ( !v65 )
          goto LABEL_96;
        if ( v50 >= v65->max_length )
          goto LABEL_98;
        this = (ServantStatusListViewItemDrawPortrait_o *)v65->m_Items[v49 + 3];
        if ( !this )
          goto LABEL_96;
        UIWidget__set_color((UIWidget_o *)this, v4->fields.QUESTION_MARK_COLOR, 0LL);
      }
    }
    else
    {
      this = (ServantStatusListViewItemDrawPortrait_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_96;
      v51 = DataManager__GetMasterData_object_(
              (DataManager_o *)this,
              (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
      this = (ServantStatusListViewItemDrawPortrait_o *)ServantStatusListViewItem__get_SvtId(v3, 0LL);
      if ( v50 >= portraitSelectList->max_length )
        goto LABEL_98;
      if ( !v51 )
        goto LABEL_96;
      this = (ServantStatusListViewItemDrawPortrait_o *)ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                                          (ServantLimitImageMaster_o *)v51,
                                                          (int32_t)this,
                                                          portraitSelectList->m_Items[v49 + 4],
                                                          0LL);
      v52 = v4->fields.servantTextureList;
      if ( !v52 )
        goto LABEL_96;
      if ( v50 >= v52->max_length )
        goto LABEL_98;
      v53 = v52->m_Items[v49 + 3];
      v54 = (int)this;
      v56 = ServantStatusListViewItem__get_SvtId(v3, 0LL);
      if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, v55);
      v58 = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(v54, 0LL);
      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, v57);
      this = (ServantStatusListViewItemDrawPortrait_o *)ServantAssetLoadManager__loadStatusFace(v53, v56, v58, 0LL);
      v59 = v4->fields.servantMaskSpriteList;
      if ( !v59 )
        goto LABEL_96;
      if ( v50 >= v59->max_length )
        goto LABEL_98;
      this = (ServantStatusListViewItemDrawPortrait_o *)v59->m_Items[v49 + 3];
      if ( !this )
        goto LABEL_96;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0LL);
    }
    v48 = v4->fields.servantTextureList;
    ++v49;
    if ( !v48 )
      goto LABEL_96;
  }
  ServantStatusListViewItemDrawPortrait__SetupButton(v4, v3, 0, v28);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusListViewItemDrawPortrait__SetItem(
        ServantStatusListViewItemDrawPortrait_o *this,
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
  Il2CppObject *Master_object; // x21
  UILabel_o *explanationLabel; // x22
  System_String_o *IsServantLimitCountSeal; // x0
  __int64 v27; // x1
  struct UserServantEntity_o *userSvtEntity; // x8
  __int64 v29; // x22
  __int64 v30; // x23
  UILabel_o *v31; // x22
  struct UserServantCollectionEntity_o *userSvtCollectionEntity; // x8
  struct ServantLeaderInfo_o *servantLeaderInfo; // x23
  UILabel_o *v34; // x22
  struct ServantLeaderInfo_o *v35; // x8
  int32_t v36; // w22
  struct UILabel_o *v37; // x23
  System_String_o *mText; // x25
  System_String_o *v39; // x24
  Il2CppObject *LimitCountSealedServantName; // x0
  System_String_o *v41; // x0
  System_String_o *v42; // x0
  struct System_Int32_array *portraitSelectList; // x8
  int max_length; // w8
  int32_t buttonPitch; // w9
  float x; // s8
  float y; // s9
  float z; // s10
  int v49; // w10
  bool v50; // cc
  int v51; // w10
  UnityEngine_Object_o *baseCollider; // x21
  int v53; // w9
  int v54; // w23
  float v55; // s9
  int32_t v56; // w1
  int32_t v57; // w1
  int v58; // w21
  float v59; // s8
  float v60; // s11
  float v61; // s9
  float v62; // s10
  float v63; // s8
  float v64; // s11
  float v65; // s9
  float v66; // s8
  float v67; // s10
  float v68; // s9
  const MethodInfo *v69; // x3
  const MethodInfo *v70; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v71; // 0:x0.16
  UnityEngine_Vector3_o v72; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v73; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v74; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v75; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B13210 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantLimitImageMaster___, item, *(_QWORD *)&mode);
    sub_1BCA7E0(&DataManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v11, v12);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13, v14);
    sub_1BCA7E0(&StringLiteral_12009/*"SERVANT_STATUS_EXPLANATION_PORTRAIT3"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_12008/*"SERVANT_STATUS_EXPLANATION_PORTRAIT2"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_12007/*"SERVANT_STATUS_EXPLANATION_PORTRAIT"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_12010/*"SERVANT_STATUS_EXPLANATION_PORTRAIT_LIMIT_COUNT_SEALED_MSG"*/, v21, v22);
    byte_4B13210 = 1;
  }
  this->fields.dispMode = mode;
  if ( item && mode )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, item);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
    if ( item->fields.userSvtEntity )
    {
      explanationLabel = this->fields.explanationLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v23);
      IsServantLimitCountSeal = LocalizationManager__Get((System_String_o *)StringLiteral_12007/*"SERVANT_STATUS_EXPLANATION_PORTRAIT"*/, 0LL);
      if ( !explanationLabel )
        goto LABEL_72;
      UILabel__set_text(explanationLabel, IsServantLimitCountSeal, 0LL);
      userSvtEntity = item->fields.userSvtEntity;
      if ( !userSvtEntity )
        goto LABEL_72;
      v30 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
      v29 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
    }
    else if ( item->fields.userSvtCollectionEntity )
    {
      v31 = this->fields.explanationLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v23);
      IsServantLimitCountSeal = LocalizationManager__Get((System_String_o *)StringLiteral_12008/*"SERVANT_STATUS_EXPLANATION_PORTRAIT2"*/, 0LL);
      if ( !v31 )
        goto LABEL_72;
      UILabel__set_text(v31, IsServantLimitCountSeal, 0LL);
      userSvtCollectionEntity = item->fields.userSvtCollectionEntity;
      if ( !userSvtCollectionEntity )
        goto LABEL_72;
      v30 = *(_QWORD *)&userSvtCollectionEntity->fields.svtId.fields.currentCryptoKey;
      v29 = *(_QWORD *)&userSvtCollectionEntity->fields.svtId.fields.fakeValue;
    }
    else
    {
      servantLeaderInfo = item->fields.servantLeaderInfo;
      v34 = this->fields.explanationLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v23);
      IsServantLimitCountSeal = LocalizationManager__Get((System_String_o *)StringLiteral_12009/*"SERVANT_STATUS_EXPLANATION_PORTRAIT3"*/, 0LL);
      if ( !v34 )
        goto LABEL_72;
      UILabel__set_text(v34, IsServantLimitCountSeal, 0LL);
      if ( !servantLeaderInfo )
        goto LABEL_33;
      v35 = item->fields.servantLeaderInfo;
      if ( !v35 )
        goto LABEL_72;
      v30 = *(_QWORD *)&v35->fields.svtId.fields.currentCryptoKey;
      v29 = *(_QWORD *)&v35->fields.svtId.fields.fakeValue;
    }
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v27);
    *(_QWORD *)&v71.fields.currentCryptoKey = v30;
    *(_QWORD *)&v71.fields.fakeValue = v29;
    IsServantLimitCountSeal = (System_String_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                                   v71,
                                                   0LL);
    v36 = (int)IsServantLimitCountSeal;
    if ( !(_DWORD)IsServantLimitCountSeal )
      goto LABEL_34;
    if ( !Master_object )
      goto LABEL_72;
    IsServantLimitCountSeal = (System_String_o *)ServantLimitImageMaster__IsServantLimitCountSeal(
                                                   (ServantLimitImageMaster_o *)Master_object,
                                                   (int32_t)IsServantLimitCountSeal,
                                                   3,
                                                   0LL);
    if ( ((unsigned __int8)IsServantLimitCountSeal & 1) != 0 )
    {
      IsServantLimitCountSeal = ServantLimitImageMaster__GetServantStatusExplanationText(
                                  (ServantLimitImageMaster_o *)Master_object,
                                  (System_String_o *)StringLiteral_12010/*"SERVANT_STATUS_EXPLANATION_PORTRAIT_LIMIT_COUNT_SEALED_MSG"*/,
                                  v36,
                                  0LL);
      v37 = this->fields.explanationLabel;
      if ( !v37 )
        goto LABEL_72;
      mText = v37->fields.mText;
      v39 = IsServantLimitCountSeal;
      LimitCountSealedServantName = (Il2CppObject *)ServantLimitImageMaster__GetLimitCountSealedServantName(
                                                      (ServantLimitImageMaster_o *)Master_object,
                                                      v36,
                                                      3,
                                                      0LL);
      v41 = System_String__Format(v39, LimitCountSealedServantName, 0LL);
      v42 = System_String__Concat_62401220(mText, v41, 0LL);
      UILabel__set_text(v37, v42, 0LL);
      v36 = 1;
      goto LABEL_34;
    }
LABEL_33:
    v36 = 0;
LABEL_34:
    portraitSelectList = item->fields.portraitSelectList;
    if ( !portraitSelectList )
      goto LABEL_72;
    max_length = portraitSelectList->max_length;
    if ( max_length < 4 )
      buttonPitch = 0;
    else
      buttonPitch = this->fields.buttonPitch;
    x = this->fields.baseSize.fields.x;
    y = this->fields.baseSize.fields.y;
    z = this->fields.baseSize.fields.z;
    v49 = max_length / 3;
    if ( max_length != 3 * (max_length / 3) )
      ++v49;
    v50 = v49 < 3;
    v51 = v49 - 1;
    if ( v50 )
      v51 = 1;
    baseCollider = (UnityEngine_Object_o *)this->fields.baseCollider;
    v53 = v51 * buttonPitch;
    if ( v36 )
      v54 = v53 + 22;
    else
      v54 = v53;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v27);
    v55 = y + (float)v54;
    if ( UnityEngine_Object__op_Inequality(baseCollider, 0LL, 0LL) )
    {
      IsServantLimitCountSeal = (System_String_o *)this->fields.baseCollider;
      if ( !IsServantLimitCountSeal )
        goto LABEL_72;
      v72.fields.x = x;
      v72.fields.y = v55;
      v72.fields.z = z;
      UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)IsServantLimitCountSeal, v72, 0LL);
    }
    IsServantLimitCountSeal = (System_String_o *)this->fields.baseSprite;
    if ( IsServantLimitCountSeal )
    {
      v56 = x == INFINITY ? 0x80000000 : (int)x;
      UIWidget__set_width((UIWidget_o *)IsServantLimitCountSeal, v56, 0LL);
      IsServantLimitCountSeal = (System_String_o *)this->fields.baseSprite;
      if ( IsServantLimitCountSeal )
      {
        v57 = v55 == INFINITY ? 0x80000000 : (int)v55;
        UIWidget__set_height((UIWidget_o *)IsServantLimitCountSeal, v57, 0LL);
        IsServantLimitCountSeal = (System_String_o *)this->fields.titleSprite;
        v58 = v54 >= 0 ? v54 : v54 + 1;
        if ( IsServantLimitCountSeal )
        {
          v59 = this->fields.titleBasePosition.fields.x;
          v60 = this->fields.titleBasePosition.fields.y;
          v61 = this->fields.titleBasePosition.fields.z;
          IsServantLimitCountSeal = (System_String_o *)UnityEngine_Component__get_transform(
                                                         (UnityEngine_Component_o *)IsServantLimitCountSeal,
                                                         0LL);
          if ( IsServantLimitCountSeal )
          {
            v62 = (float)(v58 >> 1);
            v73.fields.y = v60 + v62;
            v73.fields.x = v59;
            v73.fields.z = v61;
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)IsServantLimitCountSeal, v73, 0LL);
            IsServantLimitCountSeal = (System_String_o *)this->fields.levelButtonBase;
            if ( IsServantLimitCountSeal )
            {
              v63 = this->fields.levelButtonBasePosition.fields.x;
              v64 = this->fields.levelButtonBasePosition.fields.y;
              v65 = this->fields.levelButtonBasePosition.fields.z;
              IsServantLimitCountSeal = (System_String_o *)UnityEngine_GameObject__get_transform(
                                                             (UnityEngine_GameObject_o *)IsServantLimitCountSeal,
                                                             0LL);
              if ( IsServantLimitCountSeal )
              {
                v74.fields.y = v64 + v62;
                v74.fields.x = v63;
                v74.fields.z = v65;
                UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)IsServantLimitCountSeal, v74, 0LL);
                IsServantLimitCountSeal = (System_String_o *)this->fields.explanationLabel;
                v66 = v36
                    ? (float)(this->fields.explanationBasePosition.fields.y - v62) + 11.0
                    : this->fields.explanationBasePosition.fields.y - v62;
                if ( IsServantLimitCountSeal )
                {
                  v67 = this->fields.explanationBasePosition.fields.x;
                  v68 = this->fields.explanationBasePosition.fields.z;
                  IsServantLimitCountSeal = (System_String_o *)UnityEngine_Component__get_transform(
                                                                 (UnityEngine_Component_o *)IsServantLimitCountSeal,
                                                                 0LL);
                  if ( IsServantLimitCountSeal )
                  {
                    v75.fields.x = v67;
                    v75.fields.y = v66;
                    v75.fields.z = v68;
                    UnityEngine_Transform__set_localPosition(
                      (UnityEngine_Transform_o *)IsServantLimitCountSeal,
                      v75,
                      0LL);
                    ServantStatusListViewItemDrawPortrait__SetupButton(this, item, 1, v69);
                    ServantStatusListViewItemDrawPortrait__SetupMask(this, item, v70);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_72:
    sub_1BCAA3C(IsServantLimitCountSeal, v27);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusListViewItemDrawPortrait__SetupButton(
        ServantStatusListViewItemDrawPortrait_o *this,
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
  int32_t ConvertOverwritePortraitLimitCount; // w0
  __int64 v30; // x1
  __int64 v31; // x2
  int32_t maxPortraitLimitCount; // w22
  struct System_Int32_array *portraitSelectList; // x23
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
  struct UICommonButton_array *servantButtonList; // x8
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

  if ( (byte_4B13212 & 1) == 0 )
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
    byte_4B13212 = 1;
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
  ConvertOverwritePortraitLimitCount = ServantStatusListViewItem__get_ConvertOverwritePortraitLimitCount(item, 0LL);
  maxPortraitLimitCount = item->fields.maxPortraitLimitCount;
  portraitSelectList = item->fields.portraitSelectList;
  v98 = ConvertOverwritePortraitLimitCount;
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
    if ( v46 <= maxPortraitLimitCount )
    {
      if ( !portraitSelectList )
        goto LABEL_146;
      if ( v46 >= portraitSelectList->max_length )
        goto LABEL_148;
      v47 = portraitSelectList->m_Items[v46 + 1] == v98;
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
    v50 = v28 && v46 <= maxPortraitLimitCount;
    if ( v46 > maxPortraitLimitCount
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
    servantButtonList = this->fields.servantButtonList;
    if ( !servantButtonList )
      goto LABEL_146;
    if ( v100 >= servantButtonList->max_length )
      goto LABEL_148;
    Instance = servantButtonList->m_Items[v100];
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
    if ( !portraitSelectList )
      goto LABEL_146;
    if ( v100 >= portraitSelectList->max_length )
      goto LABEL_148;
    if ( !v45 )
      goto LABEL_146;
    IsServantLimitCountSeal = ServantLimitImageMaster__IsServantLimitCountSeal(
                                v45,
                                (int32_t)Instance,
                                portraitSelectList->m_Items[v100 + 1] + 1,
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
    v73 = (int)(v100 - 2) < 0;
    v46 = ++v100;
  }
  while ( v73 != __OFSUB__(v100, 3) );
  v74 = this->fields.charaLevelButtonList;
  if ( !v74 )
    goto LABEL_146;
  v75 = 3;
  while ( v75 < (signed int)v74->max_length )
  {
    max_length = portraitSelectList->max_length;
    if ( v75 >= max_length )
    {
      v77 = 0;
    }
    else
    {
      if ( v75 >= (unsigned int)max_length )
        goto LABEL_148;
      v77 = portraitSelectList->m_Items[v75 + 1] == v98;
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
      if ( v75 >= portraitSelectList->max_length )
        goto LABEL_148;
      v27 = (unsigned int)Instance;
      Instance = (UICommonButton_o *)v97;
      if ( !v97 )
        goto LABEL_146;
      Entity = ServantCostumeMaster__GetEntity(v97, v27, portraitSelectList->m_Items[v75 + 1], 0LL);
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
    v90 = this->fields.servantButtonList;
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


void __fastcall ServantStatusListViewItemDrawPortrait__SetupMask(
        ServantStatusListViewItemDrawPortrait_o *this,
        ServantStatusListViewItem_o *item,
        const MethodInfo *method)
{
  ServantStatusListViewItemDrawPortrait_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  struct UISprite_o *baseSprite; // x8
  ServantStatusListViewItemDrawPortrait_o *v10; // x21
  System_String_o *Empty; // x20
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_4B13213 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, item, method);
    sub_1BCA7E0(&string_TypeInfo, v5, v6);
    this = (ServantStatusListViewItemDrawPortrait_o *)sub_1BCA7E0(&StringLiteral_12046/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_INFO_OWN_SETTING_STATUS_ICON"*/, v7, v8);
    byte_4B13213 = 1;
  }
  if ( !item )
LABEL_24:
    sub_1BCAA3C(this, item);
  if ( !item->fields.userSvtEntity )
  {
    this = (ServantStatusListViewItemDrawPortrait_o *)v4->fields.maskBase;
    if ( !this )
      goto LABEL_24;
LABEL_18:
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    return;
  }
  this = (ServantStatusListViewItemDrawPortrait_o *)v4->fields.maskBase;
  if ( !this )
    goto LABEL_24;
  if ( !item->fields.isEnableOwnRandomSetting )
    goto LABEL_18;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  baseSprite = v4->fields.baseSprite;
  if ( !baseSprite )
    goto LABEL_24;
  this = (ServantStatusListViewItemDrawPortrait_o *)v4->fields.maskSprite;
  if ( !this )
    goto LABEL_24;
  UIWidget__set_height((UIWidget_o *)this, baseSprite->fields.mHeight, 0LL);
  this = (ServantStatusListViewItemDrawPortrait_o *)v4->fields.maskSprite;
  if ( !this )
    goto LABEL_24;
  UIWidget__ResizeCollider((UIWidget_o *)this, 0LL);
  this = (ServantStatusListViewItemDrawPortrait_o *)v4->fields.maskSprite;
  if ( !this )
    goto LABEL_24;
  this = (ServantStatusListViewItemDrawPortrait_o *)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)this,
                                                      0LL);
  if ( !v4->fields.baseSprite )
    goto LABEL_24;
  v10 = this;
  this = (ServantStatusListViewItemDrawPortrait_o *)UnityEngine_Component__get_transform(
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
    Empty = LocalizationManager__Get((System_String_o *)StringLiteral_12046/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_INFO_OWN_SETTING_STATUS_ICON"*/, 0LL);
  }
  else
  {
    Empty = string_TypeInfo->static_fields->Empty;
  }
  this = (ServantStatusListViewItemDrawPortrait_o *)v4->fields.maskInfoLabel;
  if ( !this )
    goto LABEL_24;
  UILabel__set_overflowMethod((UILabel_o *)this, 2, 0LL);
  this = (ServantStatusListViewItemDrawPortrait_o *)v4->fields.maskInfoLabel;
  if ( !this )
    goto LABEL_24;
  UILabel__set_text((UILabel_o *)this, Empty, 0LL);
  this = (ServantStatusListViewItemDrawPortrait_o *)v4->fields.maskInfoLabel;
  if ( !this )
    goto LABEL_24;
  UILabel__SetCondensedScale((UILabel_o *)this, v4->fields.MASK_LABEL_MAX_WIDTH, 0LL);
}