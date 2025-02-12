void __fastcall ServantStatusListViewItemDrawPortrait___ctor(
        ServantStatusListViewItemDrawPortrait_o *this,
        const MethodInfo *method)
{
  this->fields.MASK_LABEL_MAX_WIDTH = 550;
  this->fields.QUESTION_MARK_COLOR = (struct UnityEngine_Color_o)xmmword_BF60B0;
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
      sub_1C13F88(this, method);
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
      sub_1C13F80(this, method);
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
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  int32_t ConvertOverwritePortraitLimitCount; // w0
  signed __int64 maxPortraitLimitCount; // x22
  struct System_Int32_array *portraitSelectList; // x27
  int32_t v15; // w21
  unsigned __int64 v16; // x28
  int32_t *v17; // x29
  struct UITexture_array *v18; // x8
  char v19; // w23
  struct UISprite_array *v20; // x8
  const MethodInfo *v21; // x3
  struct UISprite_array *v22; // x8
  UISprite_o *v23; // x23
  struct UISprite_array *v24; // x8
  int v25; // w8
  int32_t v26; // w23
  int32_t SvtId; // w24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // kr00_16
  Il2CppObject *v29; // x23
  struct UITexture_array *servantTextureList; // x8
  UITexture_o *v31; // x23
  int32_t v32; // w25
  int32_t v33; // w24
  int32_t LimitCountByImageLimitCostumeIn; // w25
  struct UISprite_array *servantMaskSpriteList; // x8
  struct UITexture_array *v36; // x8
  struct UISprite_array *v37; // x8
  struct UITexture_array *v38; // x8
  __int64 v39; // x24
  unsigned __int64 v40; // x28
  Il2CppObject *v41; // x21
  struct UITexture_array *v42; // x8
  UITexture_o *v43; // x21
  int32_t v44; // w23
  int32_t v45; // w22
  int32_t v46; // w23
  struct UISprite_array *v47; // x8
  struct UITexture_array *v48; // x8
  char v49; // w21
  struct UISprite_array *v50; // x8
  struct UISprite_array *v51; // x8
  UISprite_o *v52; // x21
  struct UISprite_array *v53; // x8
  Il2CppObject *MasterData_object; // [xsp+8h] [xbp-68h]

  v3 = item;
  v4 = this;
  if ( (byte_4BB169A & 1) == 0 )
  {
    sub_1C13D24(&AtlasManager_TypeInfo, item);
    sub_1C13D24(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v5);
    sub_1C13D24(&Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___, v6);
    sub_1C13D24(&ImageLimitCount_TypeInfo, v7);
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_1C13D24(&OptionManager_TypeInfo, v9);
    sub_1C13D24(&ServantAssetLoadManager_TypeInfo, v10);
    this = (ServantStatusListViewItemDrawPortrait_o *)sub_1C13D24(
                                                        &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                                        v11);
    byte_4BB169A = 1;
  }
  if ( !v3
    || (ConvertOverwritePortraitLimitCount = ServantStatusListViewItem__get_ConvertOverwritePortraitLimitCount(v3, 0LL),
        maxPortraitLimitCount = v3->fields.maxPortraitLimitCount,
        portraitSelectList = v3->fields.portraitSelectList,
        v15 = ConvertOverwritePortraitLimitCount,
        (this = (ServantStatusListViewItemDrawPortrait_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL) )
  {
LABEL_96:
    sub_1C13F80(this, item);
  }
  v16 = 0LL;
  v17 = &portraitSelectList->m_Items[1];
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)this,
                        (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___);
  do
  {
    if ( (__int64)v16 > maxPortraitLimitCount )
      goto LABEL_7;
    this = (ServantStatusListViewItemDrawPortrait_o *)ServantStatusListViewItem__get_IsMine(v3, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
      goto LABEL_101;
    if ( !portraitSelectList )
      goto LABEL_96;
    if ( v16 >= portraitSelectList->max_length )
      goto LABEL_98;
    if ( v17[v16] <= v15 )
    {
LABEL_101:
      if ( !OptionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      if ( OptionManager__GetSpoilerSetting(0LL) )
        goto LABEL_39;
      this = (ServantStatusListViewItemDrawPortrait_o *)ServantStatusListViewItem__get_IsMine(v3, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
        goto LABEL_39;
      if ( !portraitSelectList )
        goto LABEL_96;
      if ( v16 >= portraitSelectList->max_length )
        goto LABEL_98;
      v25 = v17[v16];
      if ( v25 >= 11 )
        v26 = v17[v16];
      else
        v26 = v25 + 1;
      SvtId = ServantStatusListViewItem__get_SvtId(v3, 0LL);
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      v28 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(SvtId, 0LL);
      item = *(ServantStatusListViewItem_o **)&v28.fields.fakeValue;
      this = (ServantStatusListViewItemDrawPortrait_o *)MasterData_object;
      if ( !MasterData_object )
        goto LABEL_96;
      this = (ServantStatusListViewItemDrawPortrait_o *)ServantLimitSpoilerProtectionMaster__IsSpoilerLimitCount(
                                                          (ServantLimitSpoilerProtectionMaster_o *)MasterData_object,
                                                          v28,
                                                          v26,
                                                          0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
LABEL_39:
        this = (ServantStatusListViewItemDrawPortrait_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_96;
        v29 = DataManager__GetMasterData_object_(
                (DataManager_o *)this,
                (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
        this = (ServantStatusListViewItemDrawPortrait_o *)ServantStatusListViewItem__get_SvtId(v3, 0LL);
        if ( !portraitSelectList )
          goto LABEL_96;
        if ( v16 >= portraitSelectList->max_length )
          goto LABEL_98;
        if ( !v29 )
          goto LABEL_96;
        this = (ServantStatusListViewItemDrawPortrait_o *)ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                                            (ServantLimitImageMaster_o *)v29,
                                                            (int32_t)this,
                                                            v17[v16],
                                                            0LL);
        servantTextureList = v4->fields.servantTextureList;
        if ( !servantTextureList )
          goto LABEL_96;
        if ( v16 >= servantTextureList->max_length )
          goto LABEL_98;
        v31 = servantTextureList->m_Items[v16];
        v32 = (int)this;
        v33 = ServantStatusListViewItem__get_SvtId(v3, 0LL);
        if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
        LimitCountByImageLimitCostumeIn = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(v32, 0LL);
        if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
        this = (ServantStatusListViewItemDrawPortrait_o *)ServantAssetLoadManager__loadStatusFace(
                                                            v31,
                                                            v33,
                                                            LimitCountByImageLimitCostumeIn,
                                                            0LL);
        servantMaskSpriteList = v4->fields.servantMaskSpriteList;
        if ( !servantMaskSpriteList )
          goto LABEL_96;
        if ( v16 >= servantMaskSpriteList->max_length )
          goto LABEL_98;
        this = (ServantStatusListViewItemDrawPortrait_o *)servantMaskSpriteList->m_Items[v16];
        if ( !this )
          goto LABEL_96;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0LL);
        goto LABEL_53;
      }
      v36 = v4->fields.servantTextureList;
      if ( !v36 )
        goto LABEL_96;
      if ( v16 >= v36->max_length )
LABEL_98:
        sub_1C13F88(this, item);
      this = (ServantStatusListViewItemDrawPortrait_o *)v36->m_Items[v16];
      if ( !this )
        goto LABEL_96;
      this = (ServantStatusListViewItemDrawPortrait_o *)(*(__int64 (__fastcall **)(ServantStatusListViewItemDrawPortrait_o *, _QWORD, _QWORD))&this->klass[1]._2.initializationExceptionGCHandle)(
                                                          this,
                                                          0LL,
                                                          *(_QWORD *)&this->klass[1]._2.cctor_finished);
      v37 = v4->fields.servantMaskSpriteList;
      if ( !v37 )
        goto LABEL_96;
      if ( v16 >= v37->max_length )
        goto LABEL_98;
      this = (ServantStatusListViewItemDrawPortrait_o *)v37->m_Items[v16];
      if ( !this )
        goto LABEL_96;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 1, 0LL);
    }
    else
    {
LABEL_7:
      this = (ServantStatusListViewItemDrawPortrait_o *)ServantStatusListViewItem__get_IsMine(v3, 0LL);
      v18 = v4->fields.servantTextureList;
      if ( !v18 )
        goto LABEL_96;
      if ( v16 >= v18->max_length )
        goto LABEL_98;
      v19 = (char)this;
      this = (ServantStatusListViewItemDrawPortrait_o *)v18->m_Items[v16];
      if ( !this )
        goto LABEL_96;
      this = (ServantStatusListViewItemDrawPortrait_o *)(*(__int64 (__fastcall **)(ServantStatusListViewItemDrawPortrait_o *, _QWORD, _QWORD))&this->klass[1]._2.initializationExceptionGCHandle)(
                                                          this,
                                                          0LL,
                                                          *(_QWORD *)&this->klass[1]._2.cctor_finished);
      v20 = v4->fields.servantMaskSpriteList;
      if ( !v20 )
        goto LABEL_96;
      if ( v16 >= v20->max_length )
        goto LABEL_98;
      this = (ServantStatusListViewItemDrawPortrait_o *)v20->m_Items[v16];
      if ( !this )
        goto LABEL_96;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 1, 0LL);
      if ( (v19 & 1) != 0 )
        goto LABEL_53;
    }
    v22 = v4->fields.servantMaskSpriteList;
    if ( !v22 )
      goto LABEL_96;
    if ( v16 >= v22->max_length )
      goto LABEL_98;
    v23 = v22->m_Items[v16];
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    this = (ServantStatusListViewItemDrawPortrait_o *)AtlasManager__SetNotOpenFace(v23, 0LL);
    v24 = v4->fields.servantMaskSpriteList;
    if ( !v24 )
      goto LABEL_96;
    if ( v16 >= v24->max_length )
      goto LABEL_98;
    this = (ServantStatusListViewItemDrawPortrait_o *)v24->m_Items[v16];
    if ( !this )
      goto LABEL_96;
    UIWidget__set_color((UIWidget_o *)this, v4->fields.QUESTION_MARK_COLOR, 0LL);
LABEL_53:
    ++v16;
  }
  while ( v16 != 3 );
  v38 = v4->fields.servantTextureList;
  if ( !v38 )
    goto LABEL_96;
  v39 = 0LL;
  while ( 1 )
  {
    v40 = v39 + 3;
    if ( v39 + 3 >= (int)v38->max_length )
      break;
    if ( !portraitSelectList )
      goto LABEL_96;
    if ( (__int64)v40 >= (int)portraitSelectList->max_length )
    {
      this = (ServantStatusListViewItemDrawPortrait_o *)ServantStatusListViewItem__get_IsMine(v3, 0LL);
      v48 = v4->fields.servantTextureList;
      if ( !v48 )
        goto LABEL_96;
      if ( v40 >= v48->max_length )
        goto LABEL_98;
      v49 = (char)this;
      this = (ServantStatusListViewItemDrawPortrait_o *)v48->m_Items[v39 + 3];
      if ( !this )
        goto LABEL_96;
      this = (ServantStatusListViewItemDrawPortrait_o *)(*(__int64 (__fastcall **)(ServantStatusListViewItemDrawPortrait_o *, _QWORD, _QWORD))&this->klass[1]._2.initializationExceptionGCHandle)(
                                                          this,
                                                          0LL,
                                                          *(_QWORD *)&this->klass[1]._2.cctor_finished);
      v50 = v4->fields.servantMaskSpriteList;
      if ( !v50 )
        goto LABEL_96;
      if ( v40 >= v50->max_length )
        goto LABEL_98;
      this = (ServantStatusListViewItemDrawPortrait_o *)v50->m_Items[v39 + 3];
      if ( !this )
        goto LABEL_96;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 1, 0LL);
      if ( (v49 & 1) == 0 )
      {
        v51 = v4->fields.servantMaskSpriteList;
        if ( !v51 )
          goto LABEL_96;
        if ( v40 >= v51->max_length )
          goto LABEL_98;
        v52 = v51->m_Items[v39 + 3];
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        this = (ServantStatusListViewItemDrawPortrait_o *)AtlasManager__SetNotOpenFace(v52, 0LL);
        v53 = v4->fields.servantMaskSpriteList;
        if ( !v53 )
          goto LABEL_96;
        if ( v40 >= v53->max_length )
          goto LABEL_98;
        this = (ServantStatusListViewItemDrawPortrait_o *)v53->m_Items[v39 + 3];
        if ( !this )
          goto LABEL_96;
        UIWidget__set_color((UIWidget_o *)this, v4->fields.QUESTION_MARK_COLOR, 0LL);
      }
    }
    else
    {
      this = (ServantStatusListViewItemDrawPortrait_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_96;
      v41 = DataManager__GetMasterData_object_(
              (DataManager_o *)this,
              (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
      this = (ServantStatusListViewItemDrawPortrait_o *)ServantStatusListViewItem__get_SvtId(v3, 0LL);
      if ( v40 >= portraitSelectList->max_length )
        goto LABEL_98;
      if ( !v41 )
        goto LABEL_96;
      this = (ServantStatusListViewItemDrawPortrait_o *)ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                                          (ServantLimitImageMaster_o *)v41,
                                                          (int32_t)this,
                                                          portraitSelectList->m_Items[v39 + 4],
                                                          0LL);
      v42 = v4->fields.servantTextureList;
      if ( !v42 )
        goto LABEL_96;
      if ( v40 >= v42->max_length )
        goto LABEL_98;
      v43 = v42->m_Items[v39 + 3];
      v44 = (int)this;
      v45 = ServantStatusListViewItem__get_SvtId(v3, 0LL);
      if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      v46 = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(v44, 0LL);
      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      this = (ServantStatusListViewItemDrawPortrait_o *)ServantAssetLoadManager__loadStatusFace(v43, v45, v46, 0LL);
      v47 = v4->fields.servantMaskSpriteList;
      if ( !v47 )
        goto LABEL_96;
      if ( v40 >= v47->max_length )
        goto LABEL_98;
      this = (ServantStatusListViewItemDrawPortrait_o *)v47->m_Items[v39 + 3];
      if ( !this )
        goto LABEL_96;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0LL);
    }
    v38 = v4->fields.servantTextureList;
    ++v39;
    if ( !v38 )
      goto LABEL_96;
  }
  ServantStatusListViewItemDrawPortrait__SetupButton(v4, v3, 0, v21);
}


void __fastcall ServantStatusListViewItemDrawPortrait__SetItem(
        ServantStatusListViewItemDrawPortrait_o *this,
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
  Il2CppObject *Master_object; // x21
  UILabel_o *explanationLabel; // x22
  System_String_o *IsServantLimitCountSeal; // x0
  __int64 v18; // x1
  struct UserServantEntity_o *userSvtEntity; // x8
  __int64 v20; // x22
  __int64 v21; // x23
  UILabel_o *v22; // x22
  struct UserServantCollectionEntity_o *userSvtCollectionEntity; // x8
  struct ServantLeaderInfo_o *servantLeaderInfo; // x23
  UILabel_o *v25; // x22
  struct ServantLeaderInfo_o *v26; // x8
  int32_t v27; // w22
  struct UILabel_o *v28; // x23
  System_String_o *mText; // x25
  System_String_o *v30; // x24
  Il2CppObject *LimitCountSealedServantName; // x0
  System_String_o *v32; // x0
  System_String_o *v33; // x0
  struct System_Int32_array *portraitSelectList; // x8
  int max_length; // w8
  int32_t buttonPitch; // w9
  float x; // s8
  float y; // s9
  float z; // s10
  int v40; // w10
  bool v41; // cc
  int v42; // w10
  UnityEngine_Object_o *baseCollider; // x21
  int v44; // w9
  int v45; // w23
  float v46; // s9
  int32_t v47; // w1
  int32_t v48; // w1
  int v49; // w21
  float v50; // s8
  float v51; // s11
  float v52; // s9
  float v53; // s10
  float v54; // s8
  float v55; // s11
  float v56; // s9
  float v57; // s8
  float v58; // s10
  float v59; // s9
  const MethodInfo *v60; // x3
  const MethodInfo *v61; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v62; // 0:x0.16
  UnityEngine_Vector3_o v63; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v64; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v65; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v66; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BB1699 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMaster_ServantLimitImageMaster___, item);
    sub_1C13D24(&DataManager_TypeInfo, v7);
    sub_1C13D24(&LocalizationManager_TypeInfo, v8);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v9);
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    sub_1C13D24(&StringLiteral_12068/*"SERVANT_STATUS_CLASS_NAME_SERVANT_EQUIP"*/, v11);
    sub_1C13D24(&StringLiteral_12067/*"SERVANT_STATUS_CLASS_NAME_COMMAND_CODE"*/, v12);
    sub_1C13D24(&StringLiteral_12066/*"SERVANT_STATUS_BATTLE_VOICE_MESSAGE"*/, v13);
    sub_1C13D24(&StringLiteral_12069/*"SERVANT_STATUS_EXPLANATION_COMMAND_CARD"*/, v14);
    byte_4BB1699 = 1;
  }
  this->fields.dispMode = mode;
  if ( item && mode )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
    if ( item->fields.userSvtEntity )
    {
      explanationLabel = this->fields.explanationLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      IsServantLimitCountSeal = LocalizationManager__Get((System_String_o *)StringLiteral_12066/*"SERVANT_STATUS_BATTLE_VOICE_MESSAGE"*/, 0LL);
      if ( !explanationLabel )
        goto LABEL_72;
      UILabel__set_text(explanationLabel, IsServantLimitCountSeal, 0LL);
      userSvtEntity = item->fields.userSvtEntity;
      if ( !userSvtEntity )
        goto LABEL_72;
      v21 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
      v20 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
    }
    else if ( item->fields.userSvtCollectionEntity )
    {
      v22 = this->fields.explanationLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      IsServantLimitCountSeal = LocalizationManager__Get((System_String_o *)StringLiteral_12067/*"SERVANT_STATUS_CLASS_NAME_COMMAND_CODE"*/, 0LL);
      if ( !v22 )
        goto LABEL_72;
      UILabel__set_text(v22, IsServantLimitCountSeal, 0LL);
      userSvtCollectionEntity = item->fields.userSvtCollectionEntity;
      if ( !userSvtCollectionEntity )
        goto LABEL_72;
      v21 = *(_QWORD *)&userSvtCollectionEntity->fields.svtId.fields.currentCryptoKey;
      v20 = *(_QWORD *)&userSvtCollectionEntity->fields.svtId.fields.fakeValue;
    }
    else
    {
      servantLeaderInfo = item->fields.servantLeaderInfo;
      v25 = this->fields.explanationLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      IsServantLimitCountSeal = LocalizationManager__Get((System_String_o *)StringLiteral_12068/*"SERVANT_STATUS_CLASS_NAME_SERVANT_EQUIP"*/, 0LL);
      if ( !v25 )
        goto LABEL_72;
      UILabel__set_text(v25, IsServantLimitCountSeal, 0LL);
      if ( !servantLeaderInfo )
        goto LABEL_33;
      v26 = item->fields.servantLeaderInfo;
      if ( !v26 )
        goto LABEL_72;
      v21 = *(_QWORD *)&v26->fields.svtId.fields.currentCryptoKey;
      v20 = *(_QWORD *)&v26->fields.svtId.fields.fakeValue;
    }
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v62.fields.currentCryptoKey = v21;
    *(_QWORD *)&v62.fields.fakeValue = v20;
    IsServantLimitCountSeal = (System_String_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(
                                                   v62,
                                                   0LL);
    v27 = (int)IsServantLimitCountSeal;
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
                                  (System_String_o *)StringLiteral_12069/*"SERVANT_STATUS_EXPLANATION_COMMAND_CARD"*/,
                                  v27,
                                  0LL);
      v28 = this->fields.explanationLabel;
      if ( !v28 )
        goto LABEL_72;
      mText = v28->fields.mText;
      v30 = IsServantLimitCountSeal;
      LimitCountSealedServantName = (Il2CppObject *)ServantLimitImageMaster__GetLimitCountSealedServantName(
                                                      (ServantLimitImageMaster_o *)Master_object,
                                                      v27,
                                                      3,
                                                      0LL);
      v32 = System_String__Format(v30, LimitCountSealedServantName, 0LL);
      v33 = System_String__Concat_62967944(mText, v32, 0LL);
      UILabel__set_text(v28, v33, 0LL);
      v27 = 1;
      goto LABEL_34;
    }
LABEL_33:
    v27 = 0;
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
    v40 = max_length / 3;
    if ( max_length != 3 * (max_length / 3) )
      ++v40;
    v41 = v40 < 3;
    v42 = v40 - 1;
    if ( v41 )
      v42 = 1;
    baseCollider = (UnityEngine_Object_o *)this->fields.baseCollider;
    v44 = v42 * buttonPitch;
    if ( v27 )
      v45 = v44 + 22;
    else
      v45 = v44;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v46 = y + (float)v45;
    if ( UnityEngine_Object__op_Inequality(baseCollider, 0LL, 0LL) )
    {
      IsServantLimitCountSeal = (System_String_o *)this->fields.baseCollider;
      if ( !IsServantLimitCountSeal )
        goto LABEL_72;
      v63.fields.x = x;
      v63.fields.y = v46;
      v63.fields.z = z;
      UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)IsServantLimitCountSeal, v63, 0LL);
    }
    IsServantLimitCountSeal = (System_String_o *)this->fields.baseSprite;
    if ( IsServantLimitCountSeal )
    {
      v47 = x == INFINITY ? 0x80000000 : (int)x;
      UIWidget__set_width((UIWidget_o *)IsServantLimitCountSeal, v47, 0LL);
      IsServantLimitCountSeal = (System_String_o *)this->fields.baseSprite;
      if ( IsServantLimitCountSeal )
      {
        v48 = v46 == INFINITY ? 0x80000000 : (int)v46;
        UIWidget__set_height((UIWidget_o *)IsServantLimitCountSeal, v48, 0LL);
        IsServantLimitCountSeal = (System_String_o *)this->fields.titleSprite;
        v49 = v45 >= 0 ? v45 : v45 + 1;
        if ( IsServantLimitCountSeal )
        {
          v50 = this->fields.titleBasePosition.fields.x;
          v51 = this->fields.titleBasePosition.fields.y;
          v52 = this->fields.titleBasePosition.fields.z;
          IsServantLimitCountSeal = (System_String_o *)UnityEngine_Component__get_transform(
                                                         (UnityEngine_Component_o *)IsServantLimitCountSeal,
                                                         0LL);
          if ( IsServantLimitCountSeal )
          {
            v53 = (float)(v49 >> 1);
            v64.fields.y = v51 + v53;
            v64.fields.x = v50;
            v64.fields.z = v52;
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)IsServantLimitCountSeal, v64, 0LL);
            IsServantLimitCountSeal = (System_String_o *)this->fields.levelButtonBase;
            if ( IsServantLimitCountSeal )
            {
              v54 = this->fields.levelButtonBasePosition.fields.x;
              v55 = this->fields.levelButtonBasePosition.fields.y;
              v56 = this->fields.levelButtonBasePosition.fields.z;
              IsServantLimitCountSeal = (System_String_o *)UnityEngine_GameObject__get_transform(
                                                             (UnityEngine_GameObject_o *)IsServantLimitCountSeal,
                                                             0LL);
              if ( IsServantLimitCountSeal )
              {
                v65.fields.y = v55 + v53;
                v65.fields.x = v54;
                v65.fields.z = v56;
                UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)IsServantLimitCountSeal, v65, 0LL);
                IsServantLimitCountSeal = (System_String_o *)this->fields.explanationLabel;
                v57 = v27
                    ? (float)(this->fields.explanationBasePosition.fields.y - v53) + 11.0
                    : this->fields.explanationBasePosition.fields.y - v53;
                if ( IsServantLimitCountSeal )
                {
                  v58 = this->fields.explanationBasePosition.fields.x;
                  v59 = this->fields.explanationBasePosition.fields.z;
                  IsServantLimitCountSeal = (System_String_o *)UnityEngine_Component__get_transform(
                                                                 (UnityEngine_Component_o *)IsServantLimitCountSeal,
                                                                 0LL);
                  if ( IsServantLimitCountSeal )
                  {
                    v66.fields.x = v58;
                    v66.fields.y = v57;
                    v66.fields.z = v59;
                    UnityEngine_Transform__set_localPosition(
                      (UnityEngine_Transform_o *)IsServantLimitCountSeal,
                      v66,
                      0LL);
                    ServantStatusListViewItemDrawPortrait__SetupButton(this, item, 1, v60);
                    ServantStatusListViewItemDrawPortrait__SetupMask(this, item, v61);
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
    sub_1C13F80(IsServantLimitCountSeal, v18);
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
  int32_t ConvertOverwritePortraitLimitCount; // w0
  __int64 v20; // x1
  int32_t maxPortraitLimitCount; // w22
  struct System_Int32_array *portraitSelectList; // x23
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
  struct UICommonButton_array *servantButtonList; // x8
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

  if ( (byte_4BB169B & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMasterData_ServantCostumeMaster___, item);
    sub_1C13D24(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v6);
    sub_1C13D24(&LocalizationManager_TypeInfo, v7);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v8);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_1C13D24(&StringLiteral_8414/*"LIMIT_COUNT_SEALED_MESSAGE"*/, v10);
    sub_1C13D24(&StringLiteral_12082/*"SERVANT_STATUS_EXPLANATION_SERVANT_QUEST_DARK"*/, v11);
    sub_1C13D24(&StringLiteral_17741/*"btn_auto_on"*/, v12);
    sub_1C13D24(&StringLiteral_12083/*"SERVANT_STATUS_EXPLANATION_SERVANT_QUEST_INTERLUDE"*/, v13);
    sub_1C13D24(&StringLiteral_1/*""*/, v14);
    sub_1C13D24(&StringLiteral_17742/*"btn_badge_organization"*/, v15);
    byte_4BB169B = 1;
  }
  v85 = 0;
  Instance = (UICommonButton_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_146;
  Instance = (UICommonButton_o *)DataManager__GetMasterData_object_(
                                   (DataManager_o *)Instance,
                                   (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
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
  ConvertOverwritePortraitLimitCount = ServantStatusListViewItem__get_ConvertOverwritePortraitLimitCount(item, 0LL);
  maxPortraitLimitCount = item->fields.maxPortraitLimitCount;
  portraitSelectList = item->fields.portraitSelectList;
  v83 = ConvertOverwritePortraitLimitCount;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !byte_4BAF545 )
  {
    sub_1C13D24(&LocalizationManager_TypeInfo, v20);
    byte_4BAF545 = 1;
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
  if ( !byte_4BAF546 )
  {
    sub_1C13D24(&LocalizationManager_TypeInfo, v20);
    v23 = LocalizationManager_TypeInfo;
    byte_4BAF546 = 1;
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
  Instance = (UICommonButton_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_146:
    sub_1C13F80(Instance, v17);
  Instance = (UICommonButton_o *)DataManager__GetMasterData_object_(
                                   (DataManager_o *)Instance,
                                   (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  v34 = (ServantLimitImageMaster_o *)Instance;
  v35 = 0;
  v85 = 0;
  do
  {
    if ( v35 <= maxPortraitLimitCount )
    {
      if ( !portraitSelectList )
        goto LABEL_146;
      if ( v35 >= portraitSelectList->max_length )
        goto LABEL_148;
      v36 = portraitSelectList->m_Items[v35 + 1] == v83;
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
    v39 = v18 && v35 <= maxPortraitLimitCount;
    if ( v35 > maxPortraitLimitCount
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
      v40 = (System_String_o *)StringLiteral_12083/*"SERVANT_STATUS_EXPLANATION_SERVANT_QUEST_INTERLUDE"*/;
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
      v40 = System_String__Concat_62967944((System_String_o *)StringLiteral_12082/*"SERVANT_STATUS_EXPLANATION_SERVANT_QUEST_DARK"*/, v45, 0LL);
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
      sub_1C13F88(Instance, v17);
    Instance = (UICommonButton_o *)charaLevelSpriteList->m_Items[v85];
    if ( !Instance )
      goto LABEL_146;
    v48 = &StringLiteral_17741/*"btn_auto_on"*/;
    if ( v36 )
      v48 = &StringLiteral_17742/*"btn_badge_organization"*/;
    UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v48, 0LL);
    servantButtonList = this->fields.servantButtonList;
    if ( !servantButtonList )
      goto LABEL_146;
    if ( v85 >= servantButtonList->max_length )
      goto LABEL_148;
    Instance = servantButtonList->m_Items[v85];
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
    if ( !portraitSelectList )
      goto LABEL_146;
    if ( v85 >= portraitSelectList->max_length )
      goto LABEL_148;
    if ( !v34 )
      goto LABEL_146;
    IsServantLimitCountSeal = ServantLimitImageMaster__IsServantLimitCountSeal(
                                v34,
                                (int32_t)Instance,
                                portraitSelectList->m_Items[v85 + 1] + 1,
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
        Instance = (UICommonButton_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8414/*"LIMIT_COUNT_SEALED_MESSAGE"*/, 0LL);
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
    v59 = (int)(v85 - 2) < 0;
    v35 = ++v85;
  }
  while ( v59 != __OFSUB__(v85, 3) );
  v60 = this->fields.charaLevelButtonList;
  if ( !v60 )
    goto LABEL_146;
  v61 = 3;
  while ( v61 < (signed int)v60->max_length )
  {
    max_length = portraitSelectList->max_length;
    if ( v61 >= max_length )
    {
      v63 = 0;
    }
    else
    {
      if ( v61 >= (unsigned int)max_length )
        goto LABEL_148;
      v63 = portraitSelectList->m_Items[v61 + 1] == v83;
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
      if ( v61 >= portraitSelectList->max_length )
        goto LABEL_148;
      v17 = (unsigned int)Instance;
      Instance = (UICommonButton_o *)v82;
      if ( !v82 )
        goto LABEL_146;
      Entity = ServantCostumeMaster__GetEntity(v82, v17, portraitSelectList->m_Items[v61 + 1], 0LL);
      if ( Entity )
      {
        Instance = (UICommonButton_o *)ServantCostumeEntity__getShortName(Entity, 0LL);
        v68 = (System_String_o *)Instance;
      }
      else
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        if ( !byte_4BAFD99 )
        {
          sub_1C13D24(&LocalizationManager_TypeInfo, v17);
          byte_4BAFD99 = 1;
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
    v74 = &StringLiteral_17741/*"btn_auto_on"*/;
    if ( v63 )
      v74 = &StringLiteral_17742/*"btn_badge_organization"*/;
    UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v74, 0LL);
    v75 = this->fields.servantButtonList;
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


void __fastcall ServantStatusListViewItemDrawPortrait__SetupMask(
        ServantStatusListViewItemDrawPortrait_o *this,
        ServantStatusListViewItem_o *item,
        const MethodInfo *method)
{
  ServantStatusListViewItemDrawPortrait_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  struct UISprite_o *baseSprite; // x8
  ServantStatusListViewItemDrawPortrait_o *v8; // x21
  System_String_o *Empty; // x20
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_4BB169C & 1) == 0 )
  {
    sub_1C13D24(&LocalizationManager_TypeInfo, item);
    sub_1C13D24(&string_TypeInfo, v5);
    this = (ServantStatusListViewItemDrawPortrait_o *)sub_1C13D24(&StringLiteral_12105/*"SERVANT_STATUS_QUEST_NOT_RELEASED_BECAUSE_DONT_HAVE_SERVANT"*/, v6);
    byte_4BB169C = 1;
  }
  if ( !item )
LABEL_24:
    sub_1C13F80(this, item);
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
  v8 = this;
  this = (ServantStatusListViewItemDrawPortrait_o *)UnityEngine_Component__get_transform(
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
    Empty = LocalizationManager__Get((System_String_o *)StringLiteral_12105/*"SERVANT_STATUS_QUEST_NOT_RELEASED_BECAUSE_DONT_HAVE_SERVANT"*/, 0LL);
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
  UILabel__SetCondensedScale((UILabel_o *)this, v4->fields.MASK_LABEL_MAX_WIDTH, 0, 0LL);
}