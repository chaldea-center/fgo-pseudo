void ServantStatusListViewItemDrawPortrait___ctor(
        ServantStatusListViewItemDrawPortrait_o *this,
        const MethodInfo *method)
{
  this->fields.MASK_LABEL_MAX_WIDTH = 550;
  this->fields.QUESTION_MARK_COLOR = (struct UnityEngine_Color_o)xmmword_C0C4A0;
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
  float y; // s8
  struct UISprite_o *baseSprite; // x9
  int max_length; // w8
  int mWidth; // s0
  int32_t mHeight; // w9
  bool v11; // cc
  unsigned int v12; // w8
  int v13; // w8
  int v14; // w8
  float v15; // s8
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v17; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4

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
    localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
    v5 = v3->fields.charaLevelSpriteList;
    if ( !v5 )
      goto LABEL_28;
    if ( LODWORD(v5->max_length) <= 3 )
      sub_1C32E84(this);
    if ( (this = (ServantStatusListViewItemDrawPortrait_o *)v5->m_Items[3]) == 0
      || (y = localPosition.fields.y,
          (this = (ServantStatusListViewItemDrawPortrait_o *)UnityEngine_Component__get_transform(
                                                               (UnityEngine_Component_o *)this,
                                                               0)) == 0)
      || ((v17 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0),
           charaLevelSpriteList = v3->fields.charaLevelSpriteList,
           (float)(y - v17.fields.y) != INFINITY)
        ? (buttonPitch = (int)(float)(y - v17.fields.y))
        : (buttonPitch = 0x80000000),
          v3->fields.buttonPitch = buttonPitch,
          !charaLevelSpriteList) )
    {
LABEL_28:
      sub_1C32E7C(this);
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
  v18 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
  this = (ServantStatusListViewItemDrawPortrait_o *)v3->fields.levelButtonBase;
  v14 = buttonPitch >= 0 ? buttonPitch : buttonPitch + 1;
  v15 = (float)(v14 >> 1);
  v3->fields.titleBasePosition.fields.x = v18.fields.x;
  v3->fields.titleBasePosition.fields.y = v18.fields.y - v15;
  v3->fields.titleBasePosition.fields.z = v18.fields.z;
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

  v4 = this;
  if ( (byte_4C345F9 & 1) == 0 )
  {
    sub_1C32C20(&AtlasManager_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___);
    sub_1C32C20(&ImageLimitCount_TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C32C20(&OptionManager_TypeInfo);
    sub_1C32C20(&ServantAssetLoadManager_TypeInfo);
    this = (ServantStatusListViewItemDrawPortrait_o *)sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C345F9 = 1;
  }
  if ( !item
    || (ConvertOverwritePortraitLimitCount = ServantStatusListViewItem__get_ConvertOverwritePortraitLimitCount(item, 0),
        maxPortraitLimitCount = item->fields.maxPortraitLimitCount,
        portraitSelectList = item->fields.portraitSelectList,
        v8 = ConvertOverwritePortraitLimitCount,
        (this = (ServantStatusListViewItemDrawPortrait_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0) )
  {
LABEL_96:
    sub_1C32E7C(this);
  }
  v9 = 0;
  m_Items = portraitSelectList->m_Items;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)this,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___);
  do
  {
    if ( (__int64)v9 > maxPortraitLimitCount )
      goto LABEL_7;
    this = (ServantStatusListViewItemDrawPortrait_o *)ServantStatusListViewItem__get_IsMine(item, 0);
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
      this = (ServantStatusListViewItemDrawPortrait_o *)ServantStatusListViewItem__get_IsMine(item, 0);
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
      SvtId = ServantStatusListViewItem__get_SvtId(item, 0);
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(SvtId, 0);
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
        this = (ServantStatusListViewItemDrawPortrait_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_96;
        v22 = DataManager__GetMasterData_object_(
                (DataManager_o *)this,
                (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
        this = (ServantStatusListViewItemDrawPortrait_o *)ServantStatusListViewItem__get_SvtId(item, 0);
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
        v26 = ServantStatusListViewItem__get_SvtId(item, 0);
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
        sub_1C32E84(this);
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
      this = (ServantStatusListViewItemDrawPortrait_o *)ServantStatusListViewItem__get_IsMine(item, 0);
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
      this = (ServantStatusListViewItemDrawPortrait_o *)ServantStatusListViewItem__get_IsMine(item, 0);
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
      this = (ServantStatusListViewItemDrawPortrait_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_96;
      v34 = DataManager__GetMasterData_object_(
              (DataManager_o *)this,
              (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
      this = (ServantStatusListViewItemDrawPortrait_o *)ServantStatusListViewItem__get_SvtId(item, 0);
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
      v38 = ServantStatusListViewItem__get_SvtId(item, 0);
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
  ServantStatusListViewItemDrawPortrait__SetupButton(v4, item, 0, v14);
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
  struct UserServantEntity_o *userSvtEntity; // x8
  __int64 v11; // x22
  __int64 v12; // x23
  UILabel_o *v13; // x22
  struct UserServantCollectionEntity_o *userSvtCollectionEntity; // x8
  struct ServantLeaderInfo_o *servantLeaderInfo; // x23
  UILabel_o *v16; // x22
  struct ServantLeaderInfo_o *v17; // x8
  int32_t v18; // w22
  struct UILabel_o *v19; // x23
  System_String_o *mText; // x25
  System_String_o *v21; // x24
  Il2CppObject *LimitCountSealedServantName; // x0
  System_String_o *v23; // x0
  System_String_o *v24; // x0
  struct System_Int32_array *portraitSelectList; // x8
  int max_length; // w8
  int32_t buttonPitch; // w9
  float x; // s8
  float y; // s9
  float z; // s10
  int v31; // w10
  bool v32; // cc
  int v33; // w10
  UnityEngine_Object_o *baseCollider; // x21
  int v35; // w9
  int v36; // w23
  float v37; // s9
  int32_t v38; // w1
  int32_t v39; // w1
  int v40; // w21
  float v41; // s8
  float v42; // s11
  float v43; // s9
  float v44; // s10
  float v45; // s8
  float v46; // s11
  float v47; // s9
  float v48; // s8
  float v49; // s10
  float v50; // s9
  const MethodInfo *v51; // x3
  const MethodInfo *v52; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v53; // 0:x0.16
  UnityEngine_Vector3_o v54; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v55; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v56; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v57; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C345F8 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C32C20(&StringLiteral_11924/*"SERVANT_STATUS_EXPLANATION_PORTRAIT3"*/);
    sub_1C32C20(&StringLiteral_11923/*"SERVANT_STATUS_EXPLANATION_PORTRAIT2"*/);
    sub_1C32C20(&StringLiteral_11922/*"SERVANT_STATUS_EXPLANATION_PORTRAIT"*/);
    sub_1C32C20(&StringLiteral_11925/*"SERVANT_STATUS_EXPLANATION_PORTRAIT_LIMIT_COUNT_SEALED_MSG"*/);
    byte_4C345F8 = 1;
  }
  this->fields.dispMode = mode;
  if ( item && mode )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
    if ( item->fields.userSvtEntity )
    {
      explanationLabel = this->fields.explanationLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      IsServantLimitCountSeal = LocalizationManager__Get((System_String_o *)StringLiteral_11922/*"SERVANT_STATUS_EXPLANATION_PORTRAIT"*/, 0);
      if ( !explanationLabel )
        goto LABEL_72;
      UILabel__set_text(explanationLabel, IsServantLimitCountSeal, 0);
      userSvtEntity = item->fields.userSvtEntity;
      if ( !userSvtEntity )
        goto LABEL_72;
      v12 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
      v11 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
    }
    else if ( item->fields.userSvtCollectionEntity )
    {
      v13 = this->fields.explanationLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      IsServantLimitCountSeal = LocalizationManager__Get((System_String_o *)StringLiteral_11923/*"SERVANT_STATUS_EXPLANATION_PORTRAIT2"*/, 0);
      if ( !v13 )
        goto LABEL_72;
      UILabel__set_text(v13, IsServantLimitCountSeal, 0);
      userSvtCollectionEntity = item->fields.userSvtCollectionEntity;
      if ( !userSvtCollectionEntity )
        goto LABEL_72;
      v12 = *(_QWORD *)&userSvtCollectionEntity->fields.svtId.fields.currentCryptoKey;
      v11 = *(_QWORD *)&userSvtCollectionEntity->fields.svtId.fields.fakeValue;
    }
    else
    {
      servantLeaderInfo = item->fields.servantLeaderInfo;
      v16 = this->fields.explanationLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      IsServantLimitCountSeal = LocalizationManager__Get((System_String_o *)StringLiteral_11924/*"SERVANT_STATUS_EXPLANATION_PORTRAIT3"*/, 0);
      if ( !v16 )
        goto LABEL_72;
      UILabel__set_text(v16, IsServantLimitCountSeal, 0);
      if ( !servantLeaderInfo )
        goto LABEL_33;
      v17 = item->fields.servantLeaderInfo;
      if ( !v17 )
        goto LABEL_72;
      v12 = *(_QWORD *)&v17->fields.svtId.fields.currentCryptoKey;
      v11 = *(_QWORD *)&v17->fields.svtId.fields.fakeValue;
    }
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v53.fields.currentCryptoKey = v12;
    *(_QWORD *)&v53.fields.fakeValue = v11;
    IsServantLimitCountSeal = (System_String_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(
                                                   v53,
                                                   0);
    v18 = (int)IsServantLimitCountSeal;
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
                                  (System_String_o *)StringLiteral_11925/*"SERVANT_STATUS_EXPLANATION_PORTRAIT_LIMIT_COUNT_SEALED_MSG"*/,
                                  v18,
                                  0);
      v19 = this->fields.explanationLabel;
      if ( !v19 )
        goto LABEL_72;
      mText = v19->fields.mText;
      v21 = IsServantLimitCountSeal;
      LimitCountSealedServantName = (Il2CppObject *)ServantLimitImageMaster__GetLimitCountSealedServantName(
                                                      (ServantLimitImageMaster_o *)Master_object,
                                                      v18,
                                                      3,
                                                      0,
                                                      0);
      v23 = System_String__Format(v21, LimitCountSealedServantName, 0);
      v24 = System_String__Concat_63518544(mText, v23, 0);
      UILabel__set_text(v19, v24, 0);
      v18 = 1;
      goto LABEL_34;
    }
LABEL_33:
    v18 = 0;
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
    v31 = max_length / 3;
    if ( max_length != 3 * (max_length / 3) )
      ++v31;
    v32 = v31 < 3;
    v33 = v31 - 1;
    if ( v32 )
      v33 = 1;
    baseCollider = (UnityEngine_Object_o *)this->fields.baseCollider;
    v35 = v33 * buttonPitch;
    if ( v18 )
      v36 = v35 + 22;
    else
      v36 = v35;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v37 = y + (float)v36;
    if ( UnityEngine_Object__op_Inequality(baseCollider, 0, 0) )
    {
      IsServantLimitCountSeal = (System_String_o *)this->fields.baseCollider;
      if ( !IsServantLimitCountSeal )
        goto LABEL_72;
      v54.fields.x = x;
      v54.fields.y = v37;
      v54.fields.z = z;
      UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)IsServantLimitCountSeal, v54, 0);
    }
    IsServantLimitCountSeal = (System_String_o *)this->fields.baseSprite;
    if ( IsServantLimitCountSeal )
    {
      v38 = x == INFINITY ? 0x80000000 : (int)x;
      UIWidget__set_width((UIWidget_o *)IsServantLimitCountSeal, v38, 0);
      IsServantLimitCountSeal = (System_String_o *)this->fields.baseSprite;
      if ( IsServantLimitCountSeal )
      {
        v39 = v37 == INFINITY ? 0x80000000 : (int)v37;
        UIWidget__set_height((UIWidget_o *)IsServantLimitCountSeal, v39, 0);
        IsServantLimitCountSeal = (System_String_o *)this->fields.titleSprite;
        v40 = v36 >= 0 ? v36 : v36 + 1;
        if ( IsServantLimitCountSeal )
        {
          v41 = this->fields.titleBasePosition.fields.x;
          v42 = this->fields.titleBasePosition.fields.y;
          v43 = this->fields.titleBasePosition.fields.z;
          IsServantLimitCountSeal = (System_String_o *)UnityEngine_Component__get_transform(
                                                         (UnityEngine_Component_o *)IsServantLimitCountSeal,
                                                         0);
          if ( IsServantLimitCountSeal )
          {
            v44 = (float)(v40 >> 1);
            v55.fields.y = v42 + v44;
            v55.fields.x = v41;
            v55.fields.z = v43;
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)IsServantLimitCountSeal, v55, 0);
            IsServantLimitCountSeal = (System_String_o *)this->fields.levelButtonBase;
            if ( IsServantLimitCountSeal )
            {
              v45 = this->fields.levelButtonBasePosition.fields.x;
              v46 = this->fields.levelButtonBasePosition.fields.y;
              v47 = this->fields.levelButtonBasePosition.fields.z;
              IsServantLimitCountSeal = (System_String_o *)UnityEngine_GameObject__get_transform(
                                                             (UnityEngine_GameObject_o *)IsServantLimitCountSeal,
                                                             0);
              if ( IsServantLimitCountSeal )
              {
                v56.fields.y = v46 + v44;
                v56.fields.x = v45;
                v56.fields.z = v47;
                UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)IsServantLimitCountSeal, v56, 0);
                IsServantLimitCountSeal = (System_String_o *)this->fields.explanationLabel;
                v48 = v18
                    ? (float)(this->fields.explanationBasePosition.fields.y - v44) + 11.0
                    : this->fields.explanationBasePosition.fields.y - v44;
                if ( IsServantLimitCountSeal )
                {
                  v49 = this->fields.explanationBasePosition.fields.x;
                  v50 = this->fields.explanationBasePosition.fields.z;
                  IsServantLimitCountSeal = (System_String_o *)UnityEngine_Component__get_transform(
                                                                 (UnityEngine_Component_o *)IsServantLimitCountSeal,
                                                                 0);
                  if ( IsServantLimitCountSeal )
                  {
                    v57.fields.x = v49;
                    v57.fields.y = v48;
                    v57.fields.z = v50;
                    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)IsServantLimitCountSeal, v57, 0);
                    ServantStatusListViewItemDrawPortrait__SetupButton(this, item, 1, v51);
                    ServantStatusListViewItemDrawPortrait__SetupMask(this, item, v52);
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
    sub_1C32E7C(IsServantLimitCountSeal);
  }
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusListViewItemDrawPortrait__SetupButton(
        ServantStatusListViewItemDrawPortrait_o *this,
        ServantStatusListViewItem_o *item,
        bool isInit,
        const MethodInfo *method)
{
  UICommonButton_o *Instance; // x0
  bool v7; // w29
  int32_t ConvertOverwritePortraitLimitCount; // w0
  int32_t maxPortraitLimitCount; // w22
  struct System_Int32_array *portraitSelectList; // x23
  LocalizationManager_c *v11; // x0
  float *static_fields; // x8
  float v13; // s8
  float v14; // s9
  float v15; // s10
  float v16; // s11
  struct LocalizationManager_StaticFields *v17; // x8
  float r; // s12
  float g; // s13
  float b; // s14
  float a; // s15
  ServantLimitImageMaster_o *v22; // x25
  int32_t v23; // w8
  _BOOL4 v24; // w19
  struct UIRangeLabel_array *charaLevelTitleRangeLabelList; // x10
  UIRangeLabel_o *v26; // x26
  int v27; // w28
  System_String_o *v28; // x27
  float v29; // s3
  float v30; // s2
  float v31; // s1
  float v32; // s0 OVERLAPPED
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
  int32_t v55; // w1
  ServantCostumeEntity_o *Entity; // x0
  System_String_o *v57; // x26
  float v58; // s3
  float v59; // s2
  float v60; // s1
  float v61; // s0 OVERLAPPED
  struct UISprite_array *v62; // x8
  __int64 *v63; // x8
  struct UICommonButton_array *v64; // x8
  bool v65; // w19
  struct UICommonButton_array *v66; // x8
  char v67; // w25
  bool v68; // w19
  struct UICommonButton_array *v69; // x8
  struct UICommonButton_array *v70; // x8
  ServantCostumeMaster_o *v71; // [xsp+8h] [xbp-B8h]
  int32_t v72; // [xsp+14h] [xbp-ACh]
  unsigned int v74; // [xsp+1Ch] [xbp-A4h] BYREF
  UnityEngine_Color_o v75; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C345FA & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_ServantCostumeMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&StringLiteral_8274/*"LIMIT_COUNT_SELECT_SEALED"*/);
    sub_1C32C20(&StringLiteral_11939/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_"*/);
    sub_1C32C20(&StringLiteral_17445/*"btn_bg_20"*/);
    sub_1C32C20(&StringLiteral_11940/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_CLOSE"*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    sub_1C32C20(&StringLiteral_17446/*"btn_bg_21"*/);
    byte_4C345FA = 1;
  }
  v74 = 0;
  Instance = (UICommonButton_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_146;
  Instance = (UICommonButton_o *)DataManager__GetMasterData_object_(
                                   (DataManager_o *)Instance,
                                   (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
  if ( !item )
    goto LABEL_146;
  v71 = (ServantCostumeMaster_o *)Instance;
  if ( item->fields.isConvertOverwriteImage )
  {
    v7 = 0;
  }
  else if ( item->fields.userSvtEntity )
  {
    v7 = 1;
  }
  else
  {
    v7 = item->fields.userSvtCollectionEntity != 0;
  }
  ConvertOverwritePortraitLimitCount = ServantStatusListViewItem__get_ConvertOverwritePortraitLimitCount(item, 0);
  maxPortraitLimitCount = item->fields.maxPortraitLimitCount;
  portraitSelectList = item->fields.portraitSelectList;
  v72 = ConvertOverwritePortraitLimitCount;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !byte_4C32194 )
  {
    sub_1C32C20(&LocalizationManager_TypeInfo);
    byte_4C32194 = 1;
  }
  v11 = LocalizationManager_TypeInfo;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v11 = LocalizationManager_TypeInfo;
  }
  static_fields = (float *)v11->static_fields;
  v13 = static_fields[20];
  v14 = static_fields[21];
  v15 = static_fields[22];
  v16 = static_fields[23];
  if ( !byte_4C32195 )
  {
    sub_1C32C20(&LocalizationManager_TypeInfo);
    v11 = LocalizationManager_TypeInfo;
    byte_4C32195 = 1;
  }
  if ( !v11->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v11);
    v11 = LocalizationManager_TypeInfo;
  }
  v17 = v11->static_fields;
  r = v17->selectEffectColor.fields.r;
  g = v17->selectEffectColor.fields.g;
  b = v17->selectEffectColor.fields.b;
  a = v17->selectEffectColor.fields.a;
  Instance = (UICommonButton_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_146:
    sub_1C32E7C(Instance);
  Instance = (UICommonButton_o *)DataManager__GetMasterData_object_(
                                   (DataManager_o *)Instance,
                                   (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  v22 = (ServantLimitImageMaster_o *)Instance;
  v23 = 0;
  v74 = 0;
  do
  {
    if ( v23 <= maxPortraitLimitCount )
    {
      if ( !portraitSelectList )
        goto LABEL_146;
      if ( (unsigned int)v23 >= LODWORD(portraitSelectList->max_length) )
        goto LABEL_148;
      v24 = portraitSelectList->m_Items[v23] == v72;
    }
    else
    {
      v24 = 0;
    }
    charaLevelTitleRangeLabelList = this->fields.charaLevelTitleRangeLabelList;
    if ( !charaLevelTitleRangeLabelList )
      goto LABEL_146;
    if ( (unsigned int)v23 >= LODWORD(charaLevelTitleRangeLabelList->max_length) )
      goto LABEL_148;
    v26 = charaLevelTitleRangeLabelList->m_Items[v23];
    v27 = v7 && v23 <= maxPortraitLimitCount;
    if ( v23 > maxPortraitLimitCount
      && (Instance = (UICommonButton_o *)ServantStatusListViewItem__get_IsMine(item, 0),
          ((unsigned __int8)Instance & 1) != 0) )
    {
      if ( !v26 )
        goto LABEL_146;
      v75.fields.r = v13;
      v75.fields.g = v14;
      v75.fields.b = v15;
      v75.fields.a = v16;
      UIRangeLabel__set_effectColor(v26, v75, 0);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v28 = (System_String_o *)StringLiteral_11940/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_CLOSE"*/;
    }
    else
    {
      v29 = v16;
      v30 = v15;
      v31 = v14;
      v32 = v13;
      if ( (v24 & v27) != 0 )
      {
        v29 = a;
        v30 = b;
        v31 = g;
        v32 = r;
      }
      if ( !v26 )
        goto LABEL_146;
      UIRangeLabel__set_effectColor(v26, *(UnityEngine_Color_o *)&v32, 0);
      v33 = System_Int32__ToString((int32_t)&v74, 0);
      v28 = System_String__Concat_63518544((System_String_o *)StringLiteral_11939/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_"*/, v33, 0);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v34 = LocalizationManager__Get(v28, 0);
    UIRangeLabel__Set(v26, v34, 0, 1, 0, 0, 0);
    charaLevelSpriteList = this->fields.charaLevelSpriteList;
    if ( !charaLevelSpriteList )
      goto LABEL_146;
    if ( v74 >= LODWORD(charaLevelSpriteList->max_length) )
LABEL_148:
      sub_1C32E84(Instance);
    Instance = (UICommonButton_o *)charaLevelSpriteList->m_Items[v74];
    if ( !Instance )
      goto LABEL_146;
    v36 = &StringLiteral_17445/*"btn_bg_20"*/;
    if ( v24 )
      v36 = &StringLiteral_17446/*"btn_bg_21"*/;
    UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v36, 0);
    servantButtonList = this->fields.servantButtonList;
    if ( !servantButtonList )
      goto LABEL_146;
    if ( v74 >= LODWORD(servantButtonList->max_length) )
      goto LABEL_148;
    Instance = servantButtonList->m_Items[v74];
    if ( (v24 & v27) != 0 )
    {
      if ( !Instance )
        goto LABEL_146;
      UICommonButton__SetColliderEnable(Instance, 0, v27 == 0 || isInit, 0);
      charaLevelButtonList = this->fields.charaLevelButtonList;
      if ( !charaLevelButtonList )
        goto LABEL_146;
      if ( v74 >= LODWORD(charaLevelButtonList->max_length) )
        goto LABEL_148;
      Instance = charaLevelButtonList->m_Items[v74];
      if ( !Instance )
        goto LABEL_146;
      UICommonButton__SetColliderEnable(Instance, 0, v27 == 0 || isInit, 0);
    }
    else
    {
      if ( !Instance )
        goto LABEL_146;
      v39 = v27 & ~v24;
      UICommonButton__SetButtonEnable(Instance, v39, v27 == 0 || isInit, 0);
      v40 = this->fields.charaLevelButtonList;
      if ( !v40 )
        goto LABEL_146;
      if ( v74 >= LODWORD(v40->max_length) )
        goto LABEL_148;
      Instance = v40->m_Items[v74];
      if ( !Instance )
        goto LABEL_146;
      UICommonButton__SetButtonEnable(Instance, v39, v27 == 0 || isInit, 0);
    }
    limitCountSealLabel = this->fields.limitCountSealLabel;
    if ( limitCountSealLabel )
    {
      if ( v74 >= LODWORD(limitCountSealLabel->max_length) )
        goto LABEL_148;
      v42 = (UnityEngine_Object_o *)limitCountSealLabel->m_Items[v74];
    }
    else
    {
      v42 = 0;
    }
    limitCountSealObjList = this->fields.limitCountSealObjList;
    if ( limitCountSealObjList )
    {
      if ( v74 >= LODWORD(limitCountSealObjList->max_length) )
        goto LABEL_148;
      v44 = (UnityEngine_Object_o *)limitCountSealObjList->m_Items[v74];
    }
    else
    {
      v44 = 0;
    }
    Instance = (UICommonButton_o *)ServantStatusListViewItem__get_SvtId(item, 0);
    if ( !portraitSelectList )
      goto LABEL_146;
    if ( v74 >= LODWORD(portraitSelectList->max_length) )
      goto LABEL_148;
    if ( !v22 )
      goto LABEL_146;
    IsServantLimitCountSeal = ServantLimitImageMaster__IsServantLimitCountSeal(
                                v22,
                                (int32_t)Instance,
                                portraitSelectList->m_Items[v74] + 1,
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
        Instance = (UICommonButton_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8274/*"LIMIT_COUNT_SELECT_SEALED"*/, 0);
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
    v47 = (int)(v74 - 2) < 0;
    v23 = ++v74;
  }
  while ( v47 != __OFSUB__(v74, 3) );
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
      v51 = portraitSelectList->m_Items[v49] == v72;
    }
    v52 = this->fields.charaLevelTitleRangeLabelList;
    if ( !v52 )
      goto LABEL_146;
    if ( (unsigned int)v49 >= LODWORD(v52->max_length) )
      goto LABEL_148;
    v53 = v52->m_Items[v49];
    v54 = v7 && v49 < max_length;
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
      v55 = (int)Instance;
      Instance = (UICommonButton_o *)v71;
      if ( !v71 )
        goto LABEL_146;
      Entity = ServantCostumeMaster__GetEntity(v71, v55, portraitSelectList->m_Items[v49], 0);
      if ( Entity )
      {
        Instance = (UICommonButton_o *)ServantCostumeEntity__getShortName(Entity, 0);
        v57 = (System_String_o *)Instance;
      }
      else
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        if ( !byte_4C32D4C )
        {
          sub_1C32C20(&LocalizationManager_TypeInfo);
          byte_4C32D4C = 1;
        }
        Instance = (UICommonButton_o *)LocalizationManager_TypeInfo;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          Instance = (UICommonButton_o *)LocalizationManager_TypeInfo;
        }
        v57 = *(System_String_o **)(*(_QWORD *)&Instance[1].fields.specifyHoverColor.fields.b + 32LL);
      }
      v58 = v16;
      v59 = v15;
      v60 = v14;
      v61 = v13;
      if ( (v51 & v54) != 0 )
      {
        v58 = a;
        v59 = b;
        v60 = g;
        v61 = r;
      }
      if ( !v53 )
        goto LABEL_146;
      UIRangeLabel__set_effectColor(v53, *(UnityEngine_Color_o *)&v61, 0);
      UIRangeLabel__Set(v53, v57, 0, 1, 0, 0, 0);
    }
    v62 = this->fields.charaLevelSpriteList;
    if ( !v62 )
      goto LABEL_146;
    if ( (unsigned int)v49 >= LODWORD(v62->max_length) )
      goto LABEL_148;
    Instance = (UICommonButton_o *)v62->m_Items[v49];
    if ( !Instance )
      goto LABEL_146;
    v63 = &StringLiteral_17445/*"btn_bg_20"*/;
    if ( v51 )
      v63 = &StringLiteral_17446/*"btn_bg_21"*/;
    UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v63, 0);
    v64 = this->fields.servantButtonList;
    if ( !v64 )
      goto LABEL_146;
    if ( (unsigned int)v49 >= LODWORD(v64->max_length) )
      goto LABEL_148;
    Instance = v64->m_Items[v49];
    if ( (v51 & v54) != 0 )
    {
      if ( !Instance )
        goto LABEL_146;
      v65 = v54 == 0 || isInit;
      UICommonButton__SetColliderEnable(Instance, 0, v65, 0);
      v66 = this->fields.charaLevelButtonList;
      if ( !v66 )
        goto LABEL_146;
      if ( (unsigned int)v49 >= LODWORD(v66->max_length) )
        goto LABEL_148;
      Instance = v66->m_Items[v49];
      if ( !Instance )
        goto LABEL_146;
      UICommonButton__SetColliderEnable(Instance, 0, v65, 0);
    }
    else if ( v49 >= max_length )
    {
      if ( !Instance )
        goto LABEL_146;
      Instance = (UICommonButton_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
      if ( !Instance )
        goto LABEL_146;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
      v70 = this->fields.charaLevelButtonList;
      if ( !v70 )
        goto LABEL_146;
      if ( (unsigned int)v49 >= LODWORD(v70->max_length) )
        goto LABEL_148;
      Instance = v70->m_Items[v49];
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
      v67 = v54 & ~v51;
      v68 = v54 == 0 || isInit;
      UICommonButton__SetButtonEnable(Instance, v67, v68, 0);
      v69 = this->fields.charaLevelButtonList;
      if ( !v69 )
        goto LABEL_146;
      if ( (unsigned int)v49 >= LODWORD(v69->max_length) )
        goto LABEL_148;
      Instance = v69->m_Items[v49];
      if ( !Instance )
        goto LABEL_146;
      UICommonButton__SetButtonEnable(Instance, v67, v68, 0);
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
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_4C345FB & 1) == 0 )
  {
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&string_TypeInfo);
    this = (ServantStatusListViewItemDrawPortrait_o *)sub_1C32C20(&StringLiteral_11963/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_INFO_OWN_SETTING_STATUS_ICON"*/);
    byte_4C345FB = 1;
  }
  if ( !item )
LABEL_24:
    sub_1C32E7C(this);
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
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
  GameObjectExtensions__SetLocalPositionY((UnityEngine_GameObject_o *)v6, localPosition.fields.y, 0);
  if ( item->fields.isEnableOwnRandomSetting )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Empty = LocalizationManager__Get((System_String_o *)StringLiteral_11963/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_INFO_OWN_SETTING_STATUS_ICON"*/, 0);
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