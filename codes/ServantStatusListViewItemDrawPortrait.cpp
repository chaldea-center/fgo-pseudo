void ServantStatusListViewItemDrawPortrait___ctor(
        ServantStatusListViewItemDrawPortrait_o *this,
        const MethodInfo *method)
{
  this->fields.MASK_LABEL_MAX_WIDTH = 550;
  this->fields.QUESTION_MARK_COLOR = (struct UnityEngine_Color_o)xmmword_D004E0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ServantStatusListViewItemDrawPortrait__Awake(
        ServantStatusListViewItemDrawPortrait_o *this,
        const MethodInfo *method)
{
  struct UISprite_array *charaLevelSpriteList; // x8
  ServantStatusListViewItemDrawPortrait_o *v3; // x19
  int32_t buttonPitch; // w20
  struct UISprite_array *v5; // x8
  float v6; // s8
  struct UISprite_o *baseSprite; // x9
  int max_length; // w8
  int mWidth; // s0
  int32_t mHeight; // w9
  bool v11; // cc
  unsigned int v12; // w8
  int v13; // w8
  int v14; // w8
  float v15; // s8
  float y; // s1
  float v17; // s1
  UnityEngine_Vector3_o localPosition; // 0:kr20_12.12
  UnityEngine_Vector3_o v19; // 0:kr34_12.12
  UnityEngine_Vector3_o v20; // 0:kr40_12.12

  charaLevelSpriteList = this->fields.charaLevelSpriteList;
  if ( !charaLevelSpriteList )
    goto LABEL_28;
  v3 = this;
  if ( SLODWORD(charaLevelSpriteList->max_length) > 3 )
  {
    this = (ServantStatusListViewItemDrawPortrait_o *)charaLevelSpriteList->m_Items[0];
    if ( !this )
      goto LABEL_28;
    this = (ServantStatusListViewItemDrawPortrait_o *)UnityEngine_Component__get_transform(
                                                        (UnityEngine_Component_o *)this,
                                                        0);
    if ( !this )
      goto LABEL_28;
    y = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0).fields.y;
    v5 = v3->fields.charaLevelSpriteList;
    if ( !v5 )
      goto LABEL_28;
    if ( LODWORD(v5->max_length) <= 3 )
      sub_1C93D34(this);
    if ( (this = (ServantStatusListViewItemDrawPortrait_o *)v5->m_Items[3]) == 0
      || (v6 = y,
          (this = (ServantStatusListViewItemDrawPortrait_o *)UnityEngine_Component__get_transform(
                                                               (UnityEngine_Component_o *)this,
                                                               0)) == 0)
      || ((v17 = COERCE_FLOAT(LODWORD(UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0).fields.y)),
           charaLevelSpriteList = v3->fields.charaLevelSpriteList,
           (float)(v6 - v17) != INFINITY)
        ? (buttonPitch = (int)(float)(v6 - v17))
        : (buttonPitch = 0x80000000),
          v3->fields.buttonPitch = buttonPitch,
          !charaLevelSpriteList) )
    {
LABEL_28:
      sub_1C93D2C(this, method);
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
  v11 = max_length < 9;
  v12 = ((int)(((unsigned __int64)(1431655765LL * max_length) >> 32) - max_length) >> 1)
      + ((unsigned int)(((unsigned __int64)(1431655765LL * max_length) >> 32) - max_length) >> 31);
  this = (ServantStatusListViewItemDrawPortrait_o *)v3->fields.titleSprite;
  v13 = v11 ? -1 : v12 + 1;
  v3->fields.baseSize.fields.x = (float)mWidth;
  v3->fields.baseSize.fields.y = (float)(mHeight + v13 * buttonPitch);
  v3->fields.baseSize.fields.z = 0.0;
  if ( !this )
    goto LABEL_28;
  this = (ServantStatusListViewItemDrawPortrait_o *)UnityEngine_Component__get_transform(
                                                      (UnityEngine_Component_o *)this,
                                                      0);
  if ( !this )
    goto LABEL_28;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
  this = (ServantStatusListViewItemDrawPortrait_o *)v3->fields.levelButtonBase;
  v14 = buttonPitch >= 0 ? buttonPitch : buttonPitch + 1;
  v15 = (float)(v14 >> 1);
  v3->fields.titleBasePosition.fields.x = localPosition.fields.x;
  v3->fields.titleBasePosition.fields.y = localPosition.fields.y - v15;
  v3->fields.titleBasePosition.fields.z = localPosition.fields.z;
  if ( !this )
    goto LABEL_28;
  this = (ServantStatusListViewItemDrawPortrait_o *)UnityEngine_GameObject__get_transform(
                                                      (UnityEngine_GameObject_o *)this,
                                                      0);
  if ( !this )
    goto LABEL_28;
  v19 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
  this = (ServantStatusListViewItemDrawPortrait_o *)v3->fields.explanationLabel;
  v3->fields.levelButtonBasePosition.fields.x = v19.fields.x;
  v3->fields.levelButtonBasePosition.fields.y = v19.fields.y - v15;
  v3->fields.levelButtonBasePosition.fields.z = v19.fields.z;
  if ( !this )
    goto LABEL_28;
  this = (ServantStatusListViewItemDrawPortrait_o *)UnityEngine_Component__get_transform(
                                                      (UnityEngine_Component_o *)this,
                                                      0);
  if ( !this )
    goto LABEL_28;
  v20 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
  v3->fields.explanationBasePosition.fields.x = v20.fields.x;
  v3->fields.explanationBasePosition.fields.y = v20.fields.y + v15;
  v3->fields.explanationBasePosition.fields.z = v20.fields.z;
}


int32_t ServantStatusListViewItemDrawPortrait__GetKind(
        ServantStatusListViewItemDrawPortrait_o *this,
        const MethodInfo *method)
{
  return 13;
}


void ServantStatusListViewItemDrawPortrait__ModifyStatus(
        ServantStatusListViewItemDrawPortrait_o *this,
        ServantStatusListViewItem_o *item,
        const MethodInfo *method)
{
  ServantStatusListViewItem_o *v3; // x19
  ServantStatusListViewItemDrawPortrait_o *v4; // x20
  int32_t ConvertOverwritePortraitLimitCount; // w0
  signed __int64 maxPortraitLimitCount; // x22
  struct System_Int32_array *portraitSelectList; // x27
  int32_t v8; // w21
  unsigned __int64 v9; // x28
  int32_t *m_Items; // x29
  struct UITexture_array *v11; // x8
  char v12; // w23
  struct UISprite_array *v13; // x8
  const MethodInfo *v14; // x3
  struct UISprite_array *v15; // x8
  UISprite_o *v16; // x23
  struct UISprite_array *v17; // x8
  int v18; // w8
  int32_t v19; // w23
  int32_t SvtId; // w24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // kr00_16
  Il2CppObject *v22; // x23
  struct UITexture_array *servantTextureList; // x8
  UITexture_o *v24; // x23
  int32_t v25; // w25
  int32_t v26; // w24
  int32_t LimitCountByImageLimitCostumeIn; // w25
  struct UISprite_array *servantMaskSpriteList; // x8
  struct UITexture_array *v29; // x8
  struct UISprite_array *v30; // x8
  struct UITexture_array *v31; // x8
  __int64 v32; // x24
  unsigned __int64 v33; // x28
  Il2CppObject *v34; // x21
  struct UITexture_array *v35; // x8
  UITexture_o *v36; // x21
  int32_t v37; // w23
  int32_t v38; // w22
  int32_t v39; // w23
  struct UISprite_array *v40; // x8
  struct UITexture_array *v41; // x8
  char v42; // w21
  struct UISprite_array *v43; // x8
  struct UISprite_array *v44; // x8
  UISprite_o *v45; // x21
  struct UISprite_array *v46; // x8
  Il2CppObject *MasterData_object; // [xsp+8h] [xbp-68h]

  v3 = item;
  v4 = this;
  if ( (byte_4D2DB86 & 1) == 0 )
  {
    sub_1C93AD4(&AtlasManager_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___);
    sub_1C93AD4(&ImageLimitCount_TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C93AD4(&OptionManager_TypeInfo);
    sub_1C93AD4(&ServantAssetLoadManager_TypeInfo);
    this = (ServantStatusListViewItemDrawPortrait_o *)sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D2DB86 = 1;
  }
  if ( !v3
    || (ConvertOverwritePortraitLimitCount = ServantStatusListViewItem__get_ConvertOverwritePortraitLimitCount(v3, 0),
        maxPortraitLimitCount = v3->fields.maxPortraitLimitCount,
        portraitSelectList = v3->fields.portraitSelectList,
        v8 = ConvertOverwritePortraitLimitCount,
        (this = (ServantStatusListViewItemDrawPortrait_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0) )
  {
LABEL_96:
    sub_1C93D2C(this, item);
  }
  v9 = 0;
  m_Items = portraitSelectList->m_Items;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)this,
                        (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___);
  do
  {
    if ( (__int64)v9 > maxPortraitLimitCount )
      goto LABEL_7;
    this = (ServantStatusListViewItemDrawPortrait_o *)ServantStatusListViewItem__get_IsMine(v3, 0);
    if ( ((unsigned __int8)this & 1) != 0 )
      goto LABEL_101;
    if ( !portraitSelectList )
      goto LABEL_96;
    if ( v9 >= LODWORD(portraitSelectList->max_length) )
      goto LABEL_98;
    if ( m_Items[v9] <= v8 )
    {
LABEL_101:
      if ( !OptionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      if ( OptionManager__GetSpoilerSetting(0) )
        goto LABEL_39;
      this = (ServantStatusListViewItemDrawPortrait_o *)ServantStatusListViewItem__get_IsMine(v3, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
        goto LABEL_39;
      if ( !portraitSelectList )
        goto LABEL_96;
      if ( v9 >= LODWORD(portraitSelectList->max_length) )
        goto LABEL_98;
      v18 = m_Items[v9];
      if ( v18 >= 11 )
        v19 = m_Items[v9];
      else
        v19 = v18 + 1;
      SvtId = ServantStatusListViewItem__get_SvtId(v3, 0);
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(SvtId, 0);
      item = *(ServantStatusListViewItem_o **)&v21.fields.fakeValue;
      this = (ServantStatusListViewItemDrawPortrait_o *)MasterData_object;
      if ( !MasterData_object )
        goto LABEL_96;
      this = (ServantStatusListViewItemDrawPortrait_o *)ServantLimitSpoilerProtectionMaster__IsSpoilerLimitCount(
                                                          (ServantLimitSpoilerProtectionMaster_o *)MasterData_object,
                                                          v21,
                                                          v19,
                                                          0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
LABEL_39:
        this = (ServantStatusListViewItemDrawPortrait_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_96;
        v22 = DataManager__GetMasterData_object_(
                (DataManager_o *)this,
                (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
        this = (ServantStatusListViewItemDrawPortrait_o *)ServantStatusListViewItem__get_SvtId(v3, 0);
        if ( !portraitSelectList )
          goto LABEL_96;
        if ( v9 >= LODWORD(portraitSelectList->max_length) )
          goto LABEL_98;
        if ( !v22 )
          goto LABEL_96;
        this = (ServantStatusListViewItemDrawPortrait_o *)ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                                            (ServantLimitImageMaster_o *)v22,
                                                            (int32_t)this,
                                                            m_Items[v9],
                                                            0);
        servantTextureList = v4->fields.servantTextureList;
        if ( !servantTextureList )
          goto LABEL_96;
        if ( v9 >= LODWORD(servantTextureList->max_length) )
          goto LABEL_98;
        v24 = servantTextureList->m_Items[v9];
        v25 = (int)this;
        v26 = ServantStatusListViewItem__get_SvtId(v3, 0);
        if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
        LimitCountByImageLimitCostumeIn = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(v25, 0);
        if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
        this = (ServantStatusListViewItemDrawPortrait_o *)ServantAssetLoadManager__loadStatusFace(
                                                            v24,
                                                            v26,
                                                            LimitCountByImageLimitCostumeIn,
                                                            0);
        servantMaskSpriteList = v4->fields.servantMaskSpriteList;
        if ( !servantMaskSpriteList )
          goto LABEL_96;
        if ( v9 >= LODWORD(servantMaskSpriteList->max_length) )
          goto LABEL_98;
        this = (ServantStatusListViewItemDrawPortrait_o *)servantMaskSpriteList->m_Items[v9];
        if ( !this )
          goto LABEL_96;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0);
        goto LABEL_53;
      }
      v29 = v4->fields.servantTextureList;
      if ( !v29 )
        goto LABEL_96;
      if ( v9 >= LODWORD(v29->max_length) )
LABEL_98:
        sub_1C93D34(this);
      this = (ServantStatusListViewItemDrawPortrait_o *)v29->m_Items[v9];
      if ( !this )
        goto LABEL_96;
      this = (ServantStatusListViewItemDrawPortrait_o *)((__int64 (__fastcall *)(ServantStatusListViewItemDrawPortrait_o *, _QWORD, _QWORD))this->klass[1]._2.unity_user_data)(
                                                          this,
                                                          0,
                                                          *(_QWORD *)&this->klass[1]._2.initializationExceptionGCHandle);
      v30 = v4->fields.servantMaskSpriteList;
      if ( !v30 )
        goto LABEL_96;
      if ( v9 >= LODWORD(v30->max_length) )
        goto LABEL_98;
      this = (ServantStatusListViewItemDrawPortrait_o *)v30->m_Items[v9];
      if ( !this )
        goto LABEL_96;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 1, 0);
    }
    else
    {
LABEL_7:
      this = (ServantStatusListViewItemDrawPortrait_o *)ServantStatusListViewItem__get_IsMine(v3, 0);
      v11 = v4->fields.servantTextureList;
      if ( !v11 )
        goto LABEL_96;
      if ( v9 >= LODWORD(v11->max_length) )
        goto LABEL_98;
      v12 = (char)this;
      this = (ServantStatusListViewItemDrawPortrait_o *)v11->m_Items[v9];
      if ( !this )
        goto LABEL_96;
      this = (ServantStatusListViewItemDrawPortrait_o *)((__int64 (__fastcall *)(ServantStatusListViewItemDrawPortrait_o *, _QWORD, _QWORD))this->klass[1]._2.unity_user_data)(
                                                          this,
                                                          0,
                                                          *(_QWORD *)&this->klass[1]._2.initializationExceptionGCHandle);
      v13 = v4->fields.servantMaskSpriteList;
      if ( !v13 )
        goto LABEL_96;
      if ( v9 >= LODWORD(v13->max_length) )
        goto LABEL_98;
      this = (ServantStatusListViewItemDrawPortrait_o *)v13->m_Items[v9];
      if ( !this )
        goto LABEL_96;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 1, 0);
      if ( (v12 & 1) != 0 )
        goto LABEL_53;
    }
    v15 = v4->fields.servantMaskSpriteList;
    if ( !v15 )
      goto LABEL_96;
    if ( v9 >= LODWORD(v15->max_length) )
      goto LABEL_98;
    v16 = v15->m_Items[v9];
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    this = (ServantStatusListViewItemDrawPortrait_o *)AtlasManager__SetNotOpenFace(v16, 0);
    v17 = v4->fields.servantMaskSpriteList;
    if ( !v17 )
      goto LABEL_96;
    if ( v9 >= LODWORD(v17->max_length) )
      goto LABEL_98;
    this = (ServantStatusListViewItemDrawPortrait_o *)v17->m_Items[v9];
    if ( !this )
      goto LABEL_96;
    UIWidget__set_color((UIWidget_o *)this, v4->fields.QUESTION_MARK_COLOR, 0);
LABEL_53:
    ++v9;
  }
  while ( v9 != 3 );
  v31 = v4->fields.servantTextureList;
  if ( !v31 )
    goto LABEL_96;
  v32 = 0;
  while ( 1 )
  {
    v33 = v32 + 3;
    if ( v32 + 3 >= SLODWORD(v31->max_length) )
      break;
    if ( !portraitSelectList )
      goto LABEL_96;
    if ( (__int64)v33 >= SLODWORD(portraitSelectList->max_length) )
    {
      this = (ServantStatusListViewItemDrawPortrait_o *)ServantStatusListViewItem__get_IsMine(v3, 0);
      v41 = v4->fields.servantTextureList;
      if ( !v41 )
        goto LABEL_96;
      if ( v33 >= LODWORD(v41->max_length) )
        goto LABEL_98;
      v42 = (char)this;
      this = (ServantStatusListViewItemDrawPortrait_o *)v41->m_Items[v32 + 3];
      if ( !this )
        goto LABEL_96;
      this = (ServantStatusListViewItemDrawPortrait_o *)((__int64 (__fastcall *)(ServantStatusListViewItemDrawPortrait_o *, _QWORD, _QWORD))this->klass[1]._2.unity_user_data)(
                                                          this,
                                                          0,
                                                          *(_QWORD *)&this->klass[1]._2.initializationExceptionGCHandle);
      v43 = v4->fields.servantMaskSpriteList;
      if ( !v43 )
        goto LABEL_96;
      if ( v33 >= LODWORD(v43->max_length) )
        goto LABEL_98;
      this = (ServantStatusListViewItemDrawPortrait_o *)v43->m_Items[v32 + 3];
      if ( !this )
        goto LABEL_96;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 1, 0);
      if ( (v42 & 1) == 0 )
      {
        v44 = v4->fields.servantMaskSpriteList;
        if ( !v44 )
          goto LABEL_96;
        if ( v33 >= LODWORD(v44->max_length) )
          goto LABEL_98;
        v45 = v44->m_Items[v32 + 3];
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        this = (ServantStatusListViewItemDrawPortrait_o *)AtlasManager__SetNotOpenFace(v45, 0);
        v46 = v4->fields.servantMaskSpriteList;
        if ( !v46 )
          goto LABEL_96;
        if ( v33 >= LODWORD(v46->max_length) )
          goto LABEL_98;
        this = (ServantStatusListViewItemDrawPortrait_o *)v46->m_Items[v32 + 3];
        if ( !this )
          goto LABEL_96;
        UIWidget__set_color((UIWidget_o *)this, v4->fields.QUESTION_MARK_COLOR, 0);
      }
    }
    else
    {
      this = (ServantStatusListViewItemDrawPortrait_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_96;
      v34 = DataManager__GetMasterData_object_(
              (DataManager_o *)this,
              (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
      this = (ServantStatusListViewItemDrawPortrait_o *)ServantStatusListViewItem__get_SvtId(v3, 0);
      if ( v33 >= LODWORD(portraitSelectList->max_length) )
        goto LABEL_98;
      if ( !v34 )
        goto LABEL_96;
      this = (ServantStatusListViewItemDrawPortrait_o *)ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                                          (ServantLimitImageMaster_o *)v34,
                                                          (int32_t)this,
                                                          portraitSelectList->m_Items[v32 + 3],
                                                          0);
      v35 = v4->fields.servantTextureList;
      if ( !v35 )
        goto LABEL_96;
      if ( v33 >= LODWORD(v35->max_length) )
        goto LABEL_98;
      v36 = v35->m_Items[v32 + 3];
      v37 = (int)this;
      v38 = ServantStatusListViewItem__get_SvtId(v3, 0);
      if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      v39 = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(v37, 0);
      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      this = (ServantStatusListViewItemDrawPortrait_o *)ServantAssetLoadManager__loadStatusFace(v36, v38, v39, 0);
      v40 = v4->fields.servantMaskSpriteList;
      if ( !v40 )
        goto LABEL_96;
      if ( v33 >= LODWORD(v40->max_length) )
        goto LABEL_98;
      this = (ServantStatusListViewItemDrawPortrait_o *)v40->m_Items[v32 + 3];
      if ( !this )
        goto LABEL_96;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0);
    }
    v31 = v4->fields.servantTextureList;
    ++v32;
    if ( !v31 )
      goto LABEL_96;
  }
  ServantStatusListViewItemDrawPortrait__SetupButton(v4, v3, 0, v14);
}


void ServantStatusListViewItemDrawPortrait__SetItem(
        ServantStatusListViewItemDrawPortrait_o *this,
        ServantStatusListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x21
  UILabel_o *explanationLabel; // x22
  System_String_o *IsServantLimitCountSeal; // x0
  __int64 v10; // x1
  struct UserServantEntity_o *userSvtEntity; // x8
  __int64 v12; // x22
  __int64 v13; // x23
  UILabel_o *v14; // x22
  struct UserServantCollectionEntity_o *userSvtCollectionEntity; // x8
  struct ServantLeaderInfo_o *servantLeaderInfo; // x23
  UILabel_o *v17; // x22
  struct ServantLeaderInfo_o *v18; // x8
  int32_t v19; // w22
  struct UILabel_o *v20; // x23
  System_String_o *mText; // x25
  System_String_o *v22; // x24
  Il2CppObject *LimitCountSealedServantName; // x0
  System_String_o *v24; // x0
  System_String_o *v25; // x0
  struct System_Int32_array *portraitSelectList; // x8
  int max_length; // w8
  int32_t buttonPitch; // w9
  float x; // s8
  float y; // s9
  float z; // s10
  int v32; // w10
  bool v33; // cc
  int v34; // w10
  UnityEngine_Object_o *baseCollider; // x21
  int v36; // w9
  int v37; // w23
  float v38; // s9
  int32_t v39; // w1
  int32_t v40; // w1
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
  const MethodInfo *v53; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v54; // 0:x0.16
  UnityEngine_Vector3_o v55; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v56; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v57; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v58; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D2DB85 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C93AD4(&StringLiteral_12012/*"SERVANT_STATUS_EXPLANATION_PORTRAIT3"*/);
    sub_1C93AD4(&StringLiteral_12011/*"SERVANT_STATUS_EXPLANATION_PORTRAIT2"*/);
    sub_1C93AD4(&StringLiteral_12010/*"SERVANT_STATUS_EXPLANATION_PORTRAIT"*/);
    sub_1C93AD4(&StringLiteral_12013/*"SERVANT_STATUS_EXPLANATION_PORTRAIT_LIMIT_COUNT_SEALED_MSG"*/);
    byte_4D2DB85 = 1;
  }
  this->fields.dispMode = mode;
  if ( item && mode )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
    if ( item->fields.userSvtEntity )
    {
      explanationLabel = this->fields.explanationLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      IsServantLimitCountSeal = LocalizationManager__Get((System_String_o *)StringLiteral_12010/*"SERVANT_STATUS_EXPLANATION_PORTRAIT"*/, 0);
      if ( !explanationLabel )
        goto LABEL_72;
      UILabel__set_text(explanationLabel, IsServantLimitCountSeal, 0);
      userSvtEntity = item->fields.userSvtEntity;
      if ( !userSvtEntity )
        goto LABEL_72;
      v13 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
      v12 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
    }
    else if ( item->fields.userSvtCollectionEntity )
    {
      v14 = this->fields.explanationLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      IsServantLimitCountSeal = LocalizationManager__Get((System_String_o *)StringLiteral_12011/*"SERVANT_STATUS_EXPLANATION_PORTRAIT2"*/, 0);
      if ( !v14 )
        goto LABEL_72;
      UILabel__set_text(v14, IsServantLimitCountSeal, 0);
      userSvtCollectionEntity = item->fields.userSvtCollectionEntity;
      if ( !userSvtCollectionEntity )
        goto LABEL_72;
      v13 = *(_QWORD *)&userSvtCollectionEntity->fields.svtId.fields.currentCryptoKey;
      v12 = *(_QWORD *)&userSvtCollectionEntity->fields.svtId.fields.fakeValue;
    }
    else
    {
      servantLeaderInfo = item->fields.servantLeaderInfo;
      v17 = this->fields.explanationLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      IsServantLimitCountSeal = LocalizationManager__Get((System_String_o *)StringLiteral_12012/*"SERVANT_STATUS_EXPLANATION_PORTRAIT3"*/, 0);
      if ( !v17 )
        goto LABEL_72;
      UILabel__set_text(v17, IsServantLimitCountSeal, 0);
      if ( !servantLeaderInfo )
        goto LABEL_33;
      v18 = item->fields.servantLeaderInfo;
      if ( !v18 )
        goto LABEL_72;
      v13 = *(_QWORD *)&v18->fields.svtId.fields.currentCryptoKey;
      v12 = *(_QWORD *)&v18->fields.svtId.fields.fakeValue;
    }
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v54.fields.currentCryptoKey = v13;
    *(_QWORD *)&v54.fields.fakeValue = v12;
    IsServantLimitCountSeal = (System_String_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(
                                                   v54,
                                                   0);
    v19 = (int)IsServantLimitCountSeal;
    if ( !(_DWORD)IsServantLimitCountSeal )
      goto LABEL_34;
    if ( !Master_object )
      goto LABEL_72;
    IsServantLimitCountSeal = (System_String_o *)ServantLimitImageMaster__IsServantLimitCountSeal(
                                                   (ServantLimitImageMaster_o *)Master_object,
                                                   (int32_t)IsServantLimitCountSeal,
                                                   3,
                                                   0);
    if ( ((unsigned __int8)IsServantLimitCountSeal & 1) != 0 )
    {
      IsServantLimitCountSeal = ServantLimitImageMaster__GetServantStatusExplanationText(
                                  (ServantLimitImageMaster_o *)Master_object,
                                  (System_String_o *)StringLiteral_12013/*"SERVANT_STATUS_EXPLANATION_PORTRAIT_LIMIT_COUNT_SEALED_MSG"*/,
                                  v19,
                                  0);
      v20 = this->fields.explanationLabel;
      if ( !v20 )
        goto LABEL_72;
      mText = v20->fields.mText;
      v22 = IsServantLimitCountSeal;
      LimitCountSealedServantName = (Il2CppObject *)ServantLimitImageMaster__GetLimitCountSealedServantName(
                                                      (ServantLimitImageMaster_o *)Master_object,
                                                      v19,
                                                      3,
                                                      0,
                                                      0);
      v24 = System_String__Format(v22, LimitCountSealedServantName, 0);
      v25 = System_String__Concat_64425724(mText, v24, 0);
      UILabel__set_text(v20, v25, 0);
      v19 = 1;
      goto LABEL_34;
    }
LABEL_33:
    v19 = 0;
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
    v32 = max_length / 3;
    if ( max_length != 3 * (max_length / 3) )
      ++v32;
    v33 = v32 < 3;
    v34 = v32 - 1;
    if ( v33 )
      v34 = 1;
    baseCollider = (UnityEngine_Object_o *)this->fields.baseCollider;
    v36 = v34 * buttonPitch;
    if ( v19 )
      v37 = v36 + 22;
    else
      v37 = v36;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v38 = y + (float)v37;
    if ( UnityEngine_Object__op_Inequality(baseCollider, 0, 0) )
    {
      IsServantLimitCountSeal = (System_String_o *)this->fields.baseCollider;
      if ( !IsServantLimitCountSeal )
        goto LABEL_72;
      v55.fields.x = x;
      v55.fields.y = v38;
      v55.fields.z = z;
      UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)IsServantLimitCountSeal, v55, 0);
    }
    IsServantLimitCountSeal = (System_String_o *)this->fields.baseSprite;
    if ( IsServantLimitCountSeal )
    {
      v39 = x == INFINITY ? 0x80000000 : (int)x;
      UIWidget__set_width((UIWidget_o *)IsServantLimitCountSeal, v39, 0);
      IsServantLimitCountSeal = (System_String_o *)this->fields.baseSprite;
      if ( IsServantLimitCountSeal )
      {
        v40 = v38 == INFINITY ? 0x80000000 : (int)v38;
        UIWidget__set_height((UIWidget_o *)IsServantLimitCountSeal, v40, 0);
        IsServantLimitCountSeal = (System_String_o *)this->fields.titleSprite;
        v41 = v37 >= 0 ? v37 : v37 + 1;
        if ( IsServantLimitCountSeal )
        {
          v42 = this->fields.titleBasePosition.fields.x;
          v43 = this->fields.titleBasePosition.fields.y;
          v44 = this->fields.titleBasePosition.fields.z;
          IsServantLimitCountSeal = (System_String_o *)UnityEngine_Component__get_transform(
                                                         (UnityEngine_Component_o *)IsServantLimitCountSeal,
                                                         0);
          if ( IsServantLimitCountSeal )
          {
            v45 = (float)(v41 >> 1);
            v56.fields.y = v43 + v45;
            v56.fields.x = v42;
            v56.fields.z = v44;
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)IsServantLimitCountSeal, v56, 0);
            IsServantLimitCountSeal = (System_String_o *)this->fields.levelButtonBase;
            if ( IsServantLimitCountSeal )
            {
              v46 = this->fields.levelButtonBasePosition.fields.x;
              v47 = this->fields.levelButtonBasePosition.fields.y;
              v48 = this->fields.levelButtonBasePosition.fields.z;
              IsServantLimitCountSeal = (System_String_o *)UnityEngine_GameObject__get_transform(
                                                             (UnityEngine_GameObject_o *)IsServantLimitCountSeal,
                                                             0);
              if ( IsServantLimitCountSeal )
              {
                v57.fields.y = v47 + v45;
                v57.fields.x = v46;
                v57.fields.z = v48;
                UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)IsServantLimitCountSeal, v57, 0);
                IsServantLimitCountSeal = (System_String_o *)this->fields.explanationLabel;
                v49 = v19
                    ? (float)(this->fields.explanationBasePosition.fields.y - v45) + 11.0
                    : this->fields.explanationBasePosition.fields.y - v45;
                if ( IsServantLimitCountSeal )
                {
                  v50 = this->fields.explanationBasePosition.fields.x;
                  v51 = this->fields.explanationBasePosition.fields.z;
                  IsServantLimitCountSeal = (System_String_o *)UnityEngine_Component__get_transform(
                                                                 (UnityEngine_Component_o *)IsServantLimitCountSeal,
                                                                 0);
                  if ( IsServantLimitCountSeal )
                  {
                    v58.fields.x = v50;
                    v58.fields.y = v49;
                    v58.fields.z = v51;
                    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)IsServantLimitCountSeal, v58, 0);
                    ServantStatusListViewItemDrawPortrait__SetupButton(this, item, 1, v52);
                    ServantStatusListViewItemDrawPortrait__SetupMask(this, item, v53);
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
    sub_1C93D2C(IsServantLimitCountSeal, v10);
  }
}


void ServantStatusListViewItemDrawPortrait__SetupButton(
        ServantStatusListViewItemDrawPortrait_o *this,
        ServantStatusListViewItem_o *item,
        bool isInit,
        const MethodInfo *method)
{
  UICommonButton_o *Instance; // x0
  __int64 v7; // x1
  bool v8; // w29
  int32_t ConvertOverwritePortraitLimitCount; // w0
  int32_t maxPortraitLimitCount; // w22
  struct System_Int32_array *portraitSelectList; // x23
  LocalizationManager_c *v12; // x0
  float *static_fields; // x8
  float v14; // s8
  float v15; // s9
  float v16; // s10
  float v17; // s11
  float *v18; // x8
  float v19; // s12
  float v20; // s13
  float v21; // s14
  float v22; // s15
  ServantLimitImageMaster_o *v23; // x25
  int32_t v24; // w8
  _BOOL4 v25; // w19
  struct UIRangeLabel_array *charaLevelTitleRangeLabelList; // x10
  UIRangeLabel_o *v27; // x26
  int v28; // w28
  System_String_o *v29; // x27
  System_String_o *v33; // x0
  System_String_o *v34; // x0
  struct UISprite_array *charaLevelSpriteList; // x8
  __int64 *v36; // x8
  struct UICommonButton_array *servantButtonList; // x8
  struct UICommonButton_array *charaLevelButtonList; // x8
  char v39; // w26
  struct UICommonButton_array *v40; // x8
  struct UILabel_array *limitCountSealLabel; // x8
  UnityEngine_Object_o *v42; // x26
  struct UnityEngine_GameObject_array *limitCountSealObjList; // x8
  UnityEngine_Object_o *v44; // x27
  bool IsServantLimitCountSeal; // w28
  System_String_o *v46; // x1
  bool v47; // nf
  struct UICommonButton_array *v48; // x8
  int v49; // w22
  int max_length; // w27
  _BOOL4 v51; // w24
  struct UIRangeLabel_array *v52; // x9
  UIRangeLabel_o *v53; // x25
  int v54; // w19
  ServantCostumeEntity_o *Entity; // x0
  System_String_o *v56; // x26
  struct UISprite_array *v60; // x8
  __int64 *v61; // x8
  struct UICommonButton_array *v62; // x8
  bool v63; // w19
  struct UICommonButton_array *v64; // x8
  char v65; // w25
  bool v66; // w19
  struct UICommonButton_array *v67; // x8
  struct UICommonButton_array *v68; // x8
  ServantCostumeMaster_o *v69; // [xsp+8h] [xbp-B8h]
  int32_t v70; // [xsp+14h] [xbp-ACh]
  unsigned int v72; // [xsp+1Ch] [xbp-A4h] BYREF
  UnityEngine_Color_o v73; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v74; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v75; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4D2DB87 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_ServantCostumeMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&StringLiteral_8323/*"LIMIT_COUNT_SELECT_SEALED"*/);
    sub_1C93AD4(&StringLiteral_12027/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_"*/);
    sub_1C93AD4(&StringLiteral_17578/*"btn_bg_20"*/);
    sub_1C93AD4(&StringLiteral_12028/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_CLOSE"*/);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    sub_1C93AD4(&StringLiteral_17579/*"btn_bg_21"*/);
    byte_4D2DB87 = 1;
  }
  v72 = 0;
  Instance = (UICommonButton_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_146;
  Instance = (UICommonButton_o *)DataManager__GetMasterData_object_(
                                   (DataManager_o *)Instance,
                                   (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
  if ( !item )
    goto LABEL_146;
  v69 = (ServantCostumeMaster_o *)Instance;
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
    v8 = item->fields.userSvtCollectionEntity != 0;
  }
  ConvertOverwritePortraitLimitCount = ServantStatusListViewItem__get_ConvertOverwritePortraitLimitCount(item, 0);
  maxPortraitLimitCount = item->fields.maxPortraitLimitCount;
  portraitSelectList = item->fields.portraitSelectList;
  v70 = ConvertOverwritePortraitLimitCount;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !byte_4D2AFDF )
  {
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    byte_4D2AFDF = 1;
  }
  v12 = LocalizationManager_TypeInfo;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v12 = LocalizationManager_TypeInfo;
  }
  static_fields = (float *)v12->static_fields;
  v14 = static_fields[20];
  v15 = static_fields[21];
  v16 = static_fields[22];
  v17 = static_fields[23];
  if ( !byte_4D2AFE0 )
  {
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    v12 = LocalizationManager_TypeInfo;
    byte_4D2AFE0 = 1;
  }
  if ( !v12->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v12);
    v12 = LocalizationManager_TypeInfo;
  }
  v18 = (float *)v12->static_fields;
  v19 = v18[24];
  v20 = v18[25];
  v21 = v18[26];
  v22 = v18[27];
  Instance = (UICommonButton_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_146:
    sub_1C93D2C(Instance, v7);
  Instance = (UICommonButton_o *)DataManager__GetMasterData_object_(
                                   (DataManager_o *)Instance,
                                   (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  v23 = (ServantLimitImageMaster_o *)Instance;
  v24 = 0;
  v72 = 0;
  do
  {
    if ( v24 <= maxPortraitLimitCount )
    {
      if ( !portraitSelectList )
        goto LABEL_146;
      if ( (unsigned int)v24 >= LODWORD(portraitSelectList->max_length) )
        goto LABEL_148;
      v25 = portraitSelectList->m_Items[v24] == v70;
    }
    else
    {
      v25 = 0;
    }
    charaLevelTitleRangeLabelList = this->fields.charaLevelTitleRangeLabelList;
    if ( !charaLevelTitleRangeLabelList )
      goto LABEL_146;
    if ( (unsigned int)v24 >= LODWORD(charaLevelTitleRangeLabelList->max_length) )
      goto LABEL_148;
    v27 = charaLevelTitleRangeLabelList->m_Items[v24];
    v28 = v8 && v24 <= maxPortraitLimitCount;
    if ( v24 > maxPortraitLimitCount
      && (Instance = (UICommonButton_o *)ServantStatusListViewItem__get_IsMine(item, 0),
          ((unsigned __int8)Instance & 1) != 0) )
    {
      if ( !v27 )
        goto LABEL_146;
      v73.fields.r = v14;
      v73.fields.g = v15;
      v73.fields.b = v16;
      v73.fields.a = v17;
      UIRangeLabel__set_effectColor(v27, v73, 0);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v29 = (System_String_o *)StringLiteral_12028/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_CLOSE"*/;
    }
    else
    {
      v74.fields.a = v17;
      v74.fields.b = v16;
      v74.fields.g = v15;
      v74.fields.r = v14;
      if ( (v25 & v28) != 0 )
      {
        v74.fields.a = v22;
        v74.fields.b = v21;
        v74.fields.g = v20;
        v74.fields.r = v19;
      }
      if ( !v27 )
        goto LABEL_146;
      UIRangeLabel__set_effectColor(v27, v74, 0);
      v33 = System_Int32__ToString((int32_t)&v72, 0);
      v29 = System_String__Concat_64425724((System_String_o *)StringLiteral_12027/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_"*/, v33, 0);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v34 = LocalizationManager__Get(v29, 0);
    UIRangeLabel__Set(v27, v34, 0, 1, 0, 0, 0);
    charaLevelSpriteList = this->fields.charaLevelSpriteList;
    if ( !charaLevelSpriteList )
      goto LABEL_146;
    if ( v72 >= LODWORD(charaLevelSpriteList->max_length) )
LABEL_148:
      sub_1C93D34(Instance);
    Instance = (UICommonButton_o *)charaLevelSpriteList->m_Items[v72];
    if ( !Instance )
      goto LABEL_146;
    v36 = &StringLiteral_17578/*"btn_bg_20"*/;
    if ( v25 )
      v36 = &StringLiteral_17579/*"btn_bg_21"*/;
    UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v36, 0);
    servantButtonList = this->fields.servantButtonList;
    if ( !servantButtonList )
      goto LABEL_146;
    if ( v72 >= LODWORD(servantButtonList->max_length) )
      goto LABEL_148;
    Instance = servantButtonList->m_Items[v72];
    if ( (v25 & v28) != 0 )
    {
      if ( !Instance )
        goto LABEL_146;
      UICommonButton__SetColliderEnable(Instance, 0, v28 == 0 || isInit, 0);
      charaLevelButtonList = this->fields.charaLevelButtonList;
      if ( !charaLevelButtonList )
        goto LABEL_146;
      if ( v72 >= LODWORD(charaLevelButtonList->max_length) )
        goto LABEL_148;
      Instance = charaLevelButtonList->m_Items[v72];
      if ( !Instance )
        goto LABEL_146;
      UICommonButton__SetColliderEnable(Instance, 0, v28 == 0 || isInit, 0);
    }
    else
    {
      if ( !Instance )
        goto LABEL_146;
      v39 = v28 & ~v25;
      UICommonButton__SetButtonEnable(Instance, v39, v28 == 0 || isInit, 0);
      v40 = this->fields.charaLevelButtonList;
      if ( !v40 )
        goto LABEL_146;
      if ( v72 >= LODWORD(v40->max_length) )
        goto LABEL_148;
      Instance = v40->m_Items[v72];
      if ( !Instance )
        goto LABEL_146;
      UICommonButton__SetButtonEnable(Instance, v39, v28 == 0 || isInit, 0);
    }
    limitCountSealLabel = this->fields.limitCountSealLabel;
    if ( limitCountSealLabel )
    {
      if ( v72 >= LODWORD(limitCountSealLabel->max_length) )
        goto LABEL_148;
      v42 = (UnityEngine_Object_o *)limitCountSealLabel->m_Items[v72];
    }
    else
    {
      v42 = 0;
    }
    limitCountSealObjList = this->fields.limitCountSealObjList;
    if ( limitCountSealObjList )
    {
      if ( v72 >= LODWORD(limitCountSealObjList->max_length) )
        goto LABEL_148;
      v44 = (UnityEngine_Object_o *)limitCountSealObjList->m_Items[v72];
    }
    else
    {
      v44 = 0;
    }
    Instance = (UICommonButton_o *)ServantStatusListViewItem__get_SvtId(item, 0);
    if ( !portraitSelectList )
      goto LABEL_146;
    if ( v72 >= LODWORD(portraitSelectList->max_length) )
      goto LABEL_148;
    if ( !v23 )
      goto LABEL_146;
    IsServantLimitCountSeal = ServantLimitImageMaster__IsServantLimitCountSeal(
                                v23,
                                (int32_t)Instance,
                                portraitSelectList->m_Items[v72] + 1,
                                0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Instance = (UICommonButton_o *)UnityEngine_Object__op_Inequality(v44, 0, 0);
    if ( IsServantLimitCountSeal )
    {
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v44 )
          goto LABEL_146;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v44, 1, 0);
      }
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Instance = (UICommonButton_o *)UnityEngine_Object__op_Inequality(v42, 0, 0);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        Instance = (UICommonButton_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8323/*"LIMIT_COUNT_SELECT_SEALED"*/, 0);
        if ( !v42 )
          goto LABEL_146;
        v46 = (System_String_o *)Instance;
        goto LABEL_90;
      }
    }
    else
    {
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v44 )
          goto LABEL_146;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v44, 0, 0);
      }
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Instance = (UICommonButton_o *)UnityEngine_Object__op_Inequality(v42, 0, 0);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v42 )
          goto LABEL_146;
        v46 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_90:
        UILabel__set_text((UILabel_o *)v42, v46, 0);
      }
    }
    v47 = (int)(v72 - 2) < 0;
    v24 = ++v72;
  }
  while ( v47 != __OFSUB__(v72, 3) );
  v48 = this->fields.charaLevelButtonList;
  if ( !v48 )
    goto LABEL_146;
  v49 = 3;
  while ( v49 < SLODWORD(v48->max_length) )
  {
    max_length = portraitSelectList->max_length;
    if ( v49 >= max_length )
    {
      v51 = 0;
    }
    else
    {
      if ( v49 >= (unsigned int)max_length )
        goto LABEL_148;
      v51 = portraitSelectList->m_Items[v49] == v70;
    }
    v52 = this->fields.charaLevelTitleRangeLabelList;
    if ( !v52 )
      goto LABEL_146;
    if ( (unsigned int)v49 >= LODWORD(v52->max_length) )
      goto LABEL_148;
    v53 = v52->m_Items[v49];
    v54 = v8 && v49 < max_length;
    if ( v49 >= max_length )
    {
      if ( !v53 )
        goto LABEL_146;
      UIRangeLabel__Clear(v52->m_Items[v49], 0);
    }
    else
    {
      Instance = (UICommonButton_o *)ServantStatusListViewItem__get_SvtId(item, 0);
      if ( (unsigned int)v49 >= LODWORD(portraitSelectList->max_length) )
        goto LABEL_148;
      v7 = (unsigned int)Instance;
      Instance = (UICommonButton_o *)v69;
      if ( !v69 )
        goto LABEL_146;
      Entity = ServantCostumeMaster__GetEntity(v69, v7, portraitSelectList->m_Items[v49], 0);
      if ( Entity )
      {
        Instance = (UICommonButton_o *)ServantCostumeEntity__getShortName(Entity, 0);
        v56 = (System_String_o *)Instance;
      }
      else
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        if ( !byte_4D2BD02 )
        {
          sub_1C93AD4(&LocalizationManager_TypeInfo);
          byte_4D2BD02 = 1;
        }
        Instance = (UICommonButton_o *)LocalizationManager_TypeInfo;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          Instance = (UICommonButton_o *)LocalizationManager_TypeInfo;
        }
        v56 = *(System_String_o **)(*(_QWORD *)&Instance[1].fields.specifyHoverColor.fields.b + 32LL);
      }
      v75.fields.a = v17;
      v75.fields.b = v16;
      v75.fields.g = v15;
      v75.fields.r = v14;
      if ( (v51 & v54) != 0 )
      {
        v75.fields.a = v22;
        v75.fields.b = v21;
        v75.fields.g = v20;
        v75.fields.r = v19;
      }
      if ( !v53 )
        goto LABEL_146;
      UIRangeLabel__set_effectColor(v53, v75, 0);
      UIRangeLabel__Set(v53, v56, 0, 1, 0, 0, 0);
    }
    v60 = this->fields.charaLevelSpriteList;
    if ( !v60 )
      goto LABEL_146;
    if ( (unsigned int)v49 >= LODWORD(v60->max_length) )
      goto LABEL_148;
    Instance = (UICommonButton_o *)v60->m_Items[v49];
    if ( !Instance )
      goto LABEL_146;
    v61 = &StringLiteral_17578/*"btn_bg_20"*/;
    if ( v51 )
      v61 = &StringLiteral_17579/*"btn_bg_21"*/;
    UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v61, 0);
    v62 = this->fields.servantButtonList;
    if ( !v62 )
      goto LABEL_146;
    if ( (unsigned int)v49 >= LODWORD(v62->max_length) )
      goto LABEL_148;
    Instance = v62->m_Items[v49];
    if ( (v51 & v54) != 0 )
    {
      if ( !Instance )
        goto LABEL_146;
      v63 = v54 == 0 || isInit;
      UICommonButton__SetColliderEnable(Instance, 0, v63, 0);
      v64 = this->fields.charaLevelButtonList;
      if ( !v64 )
        goto LABEL_146;
      if ( (unsigned int)v49 >= LODWORD(v64->max_length) )
        goto LABEL_148;
      Instance = v64->m_Items[v49];
      if ( !Instance )
        goto LABEL_146;
      UICommonButton__SetColliderEnable(Instance, 0, v63, 0);
    }
    else if ( v49 >= max_length )
    {
      if ( !Instance )
        goto LABEL_146;
      Instance = (UICommonButton_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
      if ( !Instance )
        goto LABEL_146;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
      v68 = this->fields.charaLevelButtonList;
      if ( !v68 )
        goto LABEL_146;
      if ( (unsigned int)v49 >= LODWORD(v68->max_length) )
        goto LABEL_148;
      Instance = v68->m_Items[v49];
      if ( !Instance )
        goto LABEL_146;
      Instance = (UICommonButton_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
      if ( !Instance )
        goto LABEL_146;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
    }
    else
    {
      if ( !Instance )
        goto LABEL_146;
      v65 = v54 & ~v51;
      v66 = v54 == 0 || isInit;
      UICommonButton__SetButtonEnable(Instance, v65, v66, 0);
      v67 = this->fields.charaLevelButtonList;
      if ( !v67 )
        goto LABEL_146;
      if ( (unsigned int)v49 >= LODWORD(v67->max_length) )
        goto LABEL_148;
      Instance = v67->m_Items[v49];
      if ( !Instance )
        goto LABEL_146;
      UICommonButton__SetButtonEnable(Instance, v65, v66, 0);
    }
    v48 = this->fields.charaLevelButtonList;
    ++v49;
    if ( !v48 )
      goto LABEL_146;
  }
}


void ServantStatusListViewItemDrawPortrait__SetupMask(
        ServantStatusListViewItemDrawPortrait_o *this,
        ServantStatusListViewItem_o *item,
        const MethodInfo *method)
{
  ServantStatusListViewItemDrawPortrait_o *v4; // x19
  struct UISprite_o *baseSprite; // x8
  ServantStatusListViewItemDrawPortrait_o *v6; // x21
  System_String_o *Empty; // x20
  float y; // s1

  v4 = this;
  if ( (byte_4D2DB88 & 1) == 0 )
  {
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&string_TypeInfo);
    this = (ServantStatusListViewItemDrawPortrait_o *)sub_1C93AD4(&StringLiteral_12051/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_INFO_OWN_SETTING_STATUS_ICON"*/);
    byte_4D2DB88 = 1;
  }
  if ( !item )
LABEL_24:
    sub_1C93D2C(this, item);
  if ( !item->fields.userSvtEntity )
  {
    this = (ServantStatusListViewItemDrawPortrait_o *)v4->fields.maskBase;
    if ( !this )
      goto LABEL_24;
LABEL_18:
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
    return;
  }
  this = (ServantStatusListViewItemDrawPortrait_o *)v4->fields.maskBase;
  if ( !this )
    goto LABEL_24;
  if ( !item->fields.isEnableOwnRandomSetting )
    goto LABEL_18;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
  baseSprite = v4->fields.baseSprite;
  if ( !baseSprite )
    goto LABEL_24;
  this = (ServantStatusListViewItemDrawPortrait_o *)v4->fields.maskSprite;
  if ( !this )
    goto LABEL_24;
  UIWidget__set_height((UIWidget_o *)this, baseSprite->fields.mHeight, 0);
  this = (ServantStatusListViewItemDrawPortrait_o *)v4->fields.maskSprite;
  if ( !this )
    goto LABEL_24;
  UIWidget__ResizeCollider((UIWidget_o *)this, 0);
  this = (ServantStatusListViewItemDrawPortrait_o *)v4->fields.maskSprite;
  if ( !this )
    goto LABEL_24;
  this = (ServantStatusListViewItemDrawPortrait_o *)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)this,
                                                      0);
  if ( !v4->fields.baseSprite )
    goto LABEL_24;
  v6 = this;
  this = (ServantStatusListViewItemDrawPortrait_o *)UnityEngine_Component__get_transform(
                                                      (UnityEngine_Component_o *)v4->fields.baseSprite,
                                                      0);
  if ( !this )
    goto LABEL_24;
  y = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0).fields.y;
  GameObjectExtensions__SetLocalPositionY((UnityEngine_GameObject_o *)v6, y, 0);
  if ( item->fields.isEnableOwnRandomSetting )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Empty = LocalizationManager__Get((System_String_o *)StringLiteral_12051/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_INFO_OWN_SETTING_STATUS_ICON"*/, 0);
  }
  else
  {
    Empty = string_TypeInfo->static_fields->Empty;
  }
  this = (ServantStatusListViewItemDrawPortrait_o *)v4->fields.maskInfoLabel;
  if ( !this )
    goto LABEL_24;
  UILabel__set_overflowMethod((UILabel_o *)this, 2, 0);
  this = (ServantStatusListViewItemDrawPortrait_o *)v4->fields.maskInfoLabel;
  if ( !this )
    goto LABEL_24;
  UILabel__set_text((UILabel_o *)this, Empty, 0);
  this = (ServantStatusListViewItemDrawPortrait_o *)v4->fields.maskInfoLabel;
  if ( !this )
    goto LABEL_24;
  UILabel__SetCondensedScale((UILabel_o *)this, v4->fields.MASK_LABEL_MAX_WIDTH, 0, 0);
}