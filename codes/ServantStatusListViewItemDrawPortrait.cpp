void ServantStatusListViewItemDrawPortrait___ctor(
        ServantStatusListViewItemDrawPortrait_o *this,
        const MethodInfo *method)
{
  this->fields.MASK_LABEL_MAX_WIDTH = 550;
  this->fields.QUESTION_MARK_COLOR = (struct UnityEngine_Color_o)xmmword_C090F0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ServantStatusListViewItemDrawPortrait__Awake(
        ServantStatusListViewItemDrawPortrait_o *this,
        const MethodInfo *method)
{
  struct UISprite_array *charaLevelSpriteList; // x8
  ServantStatusListViewItemDrawPortrait_o *v3; // x19
  int32_t buttonPitch; // w20
  __int64 v5; // x2
  struct UISprite_array *v6; // x8
  float y; // s8
  struct UISprite_o *baseSprite; // x9
  int max_length; // w8
  int mWidth; // s0
  int32_t mHeight; // w9
  bool v12; // cc
  unsigned int v13; // w8
  int v14; // w8
  int v15; // w8
  float v16; // s8
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4

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
    v6 = v3->fields.charaLevelSpriteList;
    if ( !v6 )
      goto LABEL_28;
    if ( LODWORD(v6->max_length) <= 3 )
      sub_1C2D6F4(this, method, v5);
    if ( (this = (ServantStatusListViewItemDrawPortrait_o *)v6->m_Items[3]) == 0
      || (y = localPosition.fields.y,
          (this = (ServantStatusListViewItemDrawPortrait_o *)UnityEngine_Component__get_transform(
                                                               (UnityEngine_Component_o *)this,
                                                               0)) == 0)
      || ((v18 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0),
           charaLevelSpriteList = v3->fields.charaLevelSpriteList,
           (float)(y - v18.fields.y) != INFINITY)
        ? (buttonPitch = (int)(float)(y - v18.fields.y))
        : (buttonPitch = 0x80000000),
          v3->fields.buttonPitch = buttonPitch,
          !charaLevelSpriteList) )
    {
LABEL_28:
      sub_1C2D6EC(this, method);
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
  v12 = max_length < 9;
  v13 = ((int)(((unsigned __int64)(1431655765LL * max_length) >> 32) - max_length) >> 1)
      + ((unsigned int)(((unsigned __int64)(1431655765LL * max_length) >> 32) - max_length) >> 31);
  this = (ServantStatusListViewItemDrawPortrait_o *)v3->fields.titleSprite;
  v14 = v12 ? -1 : v13 + 1;
  v3->fields.baseSize.fields.x = (float)mWidth;
  v3->fields.baseSize.fields.y = (float)(mHeight + v14 * buttonPitch);
  v3->fields.baseSize.fields.z = 0.0;
  if ( !this )
    goto LABEL_28;
  this = (ServantStatusListViewItemDrawPortrait_o *)UnityEngine_Component__get_transform(
                                                      (UnityEngine_Component_o *)this,
                                                      0);
  if ( !this )
    goto LABEL_28;
  v19 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
  this = (ServantStatusListViewItemDrawPortrait_o *)v3->fields.levelButtonBase;
  v15 = buttonPitch >= 0 ? buttonPitch : buttonPitch + 1;
  v16 = (float)(v15 >> 1);
  v3->fields.titleBasePosition.fields.x = v19.fields.x;
  v3->fields.titleBasePosition.fields.y = v19.fields.y - v16;
  v3->fields.titleBasePosition.fields.z = v19.fields.z;
  if ( !this )
    goto LABEL_28;
  this = (ServantStatusListViewItemDrawPortrait_o *)UnityEngine_GameObject__get_transform(
                                                      (UnityEngine_GameObject_o *)this,
                                                      0);
  if ( !this )
    goto LABEL_28;
  v20 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
  this = (ServantStatusListViewItemDrawPortrait_o *)v3->fields.explanationLabel;
  v3->fields.levelButtonBasePosition.fields.x = v20.fields.x;
  v3->fields.levelButtonBasePosition.fields.y = v20.fields.y - v16;
  v3->fields.levelButtonBasePosition.fields.z = v20.fields.z;
  if ( !this )
    goto LABEL_28;
  this = (ServantStatusListViewItemDrawPortrait_o *)UnityEngine_Component__get_transform(
                                                      (UnityEngine_Component_o *)this,
                                                      0);
  if ( !this )
    goto LABEL_28;
  v21 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
  v3->fields.explanationBasePosition.fields.x = v21.fields.x;
  v3->fields.explanationBasePosition.fields.y = v21.fields.y + v16;
  v3->fields.explanationBasePosition.fields.z = v21.fields.z;
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
  __int64 v11; // x2
  struct UITexture_array *v12; // x8
  char v13; // w23
  struct UISprite_array *v14; // x8
  const MethodInfo *v15; // x3
  struct UISprite_array *v16; // x8
  UISprite_o *v17; // x23
  struct UISprite_array *v18; // x8
  int v19; // w8
  int32_t v20; // w23
  int32_t SvtId; // w24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // kr00_16
  Il2CppObject *v23; // x23
  struct UITexture_array *servantTextureList; // x8
  UITexture_o *v25; // x23
  int32_t v26; // w25
  int32_t v27; // w24
  int32_t LimitCountByImageLimitCostumeIn; // w25
  struct UISprite_array *servantMaskSpriteList; // x8
  struct UITexture_array *v30; // x8
  struct UISprite_array *v31; // x8
  struct UITexture_array *v32; // x8
  __int64 v33; // x24
  unsigned __int64 v34; // x28
  Il2CppObject *v35; // x21
  struct UITexture_array *v36; // x8
  UITexture_o *v37; // x21
  int32_t v38; // w23
  int32_t v39; // w22
  int32_t v40; // w23
  struct UISprite_array *v41; // x8
  struct UITexture_array *v42; // x8
  char v43; // w21
  struct UISprite_array *v44; // x8
  struct UISprite_array *v45; // x8
  UISprite_o *v46; // x21
  struct UISprite_array *v47; // x8
  Il2CppObject *MasterData_object; // [xsp+8h] [xbp-68h]

  v3 = item;
  v4 = this;
  if ( (byte_4C23FE0 & 1) == 0 )
  {
    sub_1C2D490(&AtlasManager_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___);
    sub_1C2D490(&ImageLimitCount_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&OptionManager_TypeInfo);
    sub_1C2D490(&ServantAssetLoadManager_TypeInfo);
    this = (ServantStatusListViewItemDrawPortrait_o *)sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C23FE0 = 1;
  }
  if ( !v3
    || (ConvertOverwritePortraitLimitCount = ServantStatusListViewItem__get_ConvertOverwritePortraitLimitCount(v3, 0),
        maxPortraitLimitCount = v3->fields.maxPortraitLimitCount,
        portraitSelectList = v3->fields.portraitSelectList,
        v8 = ConvertOverwritePortraitLimitCount,
        (this = (ServantStatusListViewItemDrawPortrait_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0) )
  {
LABEL_96:
    sub_1C2D6EC(this, item);
  }
  v9 = 0;
  m_Items = portraitSelectList->m_Items;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)this,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___);
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
      v19 = m_Items[v9];
      if ( v19 >= 11 )
        v20 = m_Items[v9];
      else
        v20 = v19 + 1;
      SvtId = ServantStatusListViewItem__get_SvtId(v3, 0);
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(SvtId, 0);
      item = *(ServantStatusListViewItem_o **)&v22.fields.fakeValue;
      this = (ServantStatusListViewItemDrawPortrait_o *)MasterData_object;
      if ( !MasterData_object )
        goto LABEL_96;
      this = (ServantStatusListViewItemDrawPortrait_o *)ServantLimitSpoilerProtectionMaster__IsSpoilerLimitCount(
                                                          (ServantLimitSpoilerProtectionMaster_o *)MasterData_object,
                                                          v22,
                                                          v20,
                                                          0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
LABEL_39:
        this = (ServantStatusListViewItemDrawPortrait_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_96;
        v23 = DataManager__GetMasterData_object_(
                (DataManager_o *)this,
                (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
        this = (ServantStatusListViewItemDrawPortrait_o *)ServantStatusListViewItem__get_SvtId(v3, 0);
        if ( !portraitSelectList )
          goto LABEL_96;
        if ( v9 >= LODWORD(portraitSelectList->max_length) )
          goto LABEL_98;
        if ( !v23 )
          goto LABEL_96;
        this = (ServantStatusListViewItemDrawPortrait_o *)ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                                            (ServantLimitImageMaster_o *)v23,
                                                            (int32_t)this,
                                                            m_Items[v9],
                                                            0);
        servantTextureList = v4->fields.servantTextureList;
        if ( !servantTextureList )
          goto LABEL_96;
        if ( v9 >= LODWORD(servantTextureList->max_length) )
          goto LABEL_98;
        v25 = servantTextureList->m_Items[v9];
        v26 = (int)this;
        v27 = ServantStatusListViewItem__get_SvtId(v3, 0);
        if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
        LimitCountByImageLimitCostumeIn = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(v26, 0);
        if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
        this = (ServantStatusListViewItemDrawPortrait_o *)ServantAssetLoadManager__loadStatusFace(
                                                            v25,
                                                            v27,
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
      v30 = v4->fields.servantTextureList;
      if ( !v30 )
        goto LABEL_96;
      if ( v9 >= LODWORD(v30->max_length) )
LABEL_98:
        sub_1C2D6F4(this, item, v11);
      this = (ServantStatusListViewItemDrawPortrait_o *)v30->m_Items[v9];
      if ( !this )
        goto LABEL_96;
      this = (ServantStatusListViewItemDrawPortrait_o *)((__int64 (__fastcall *)(ServantStatusListViewItemDrawPortrait_o *, _QWORD, _QWORD))this->klass[1]._2.unity_user_data)(
                                                          this,
                                                          0,
                                                          *(_QWORD *)&this->klass[1]._2.initializationExceptionGCHandle);
      v31 = v4->fields.servantMaskSpriteList;
      if ( !v31 )
        goto LABEL_96;
      if ( v9 >= LODWORD(v31->max_length) )
        goto LABEL_98;
      this = (ServantStatusListViewItemDrawPortrait_o *)v31->m_Items[v9];
      if ( !this )
        goto LABEL_96;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 1, 0);
    }
    else
    {
LABEL_7:
      this = (ServantStatusListViewItemDrawPortrait_o *)ServantStatusListViewItem__get_IsMine(v3, 0);
      v12 = v4->fields.servantTextureList;
      if ( !v12 )
        goto LABEL_96;
      if ( v9 >= LODWORD(v12->max_length) )
        goto LABEL_98;
      v13 = (char)this;
      this = (ServantStatusListViewItemDrawPortrait_o *)v12->m_Items[v9];
      if ( !this )
        goto LABEL_96;
      this = (ServantStatusListViewItemDrawPortrait_o *)((__int64 (__fastcall *)(ServantStatusListViewItemDrawPortrait_o *, _QWORD, _QWORD))this->klass[1]._2.unity_user_data)(
                                                          this,
                                                          0,
                                                          *(_QWORD *)&this->klass[1]._2.initializationExceptionGCHandle);
      v14 = v4->fields.servantMaskSpriteList;
      if ( !v14 )
        goto LABEL_96;
      if ( v9 >= LODWORD(v14->max_length) )
        goto LABEL_98;
      this = (ServantStatusListViewItemDrawPortrait_o *)v14->m_Items[v9];
      if ( !this )
        goto LABEL_96;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 1, 0);
      if ( (v13 & 1) != 0 )
        goto LABEL_53;
    }
    v16 = v4->fields.servantMaskSpriteList;
    if ( !v16 )
      goto LABEL_96;
    if ( v9 >= LODWORD(v16->max_length) )
      goto LABEL_98;
    v17 = v16->m_Items[v9];
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    this = (ServantStatusListViewItemDrawPortrait_o *)AtlasManager__SetNotOpenFace(v17, 0);
    v18 = v4->fields.servantMaskSpriteList;
    if ( !v18 )
      goto LABEL_96;
    if ( v9 >= LODWORD(v18->max_length) )
      goto LABEL_98;
    this = (ServantStatusListViewItemDrawPortrait_o *)v18->m_Items[v9];
    if ( !this )
      goto LABEL_96;
    UIWidget__set_color((UIWidget_o *)this, v4->fields.QUESTION_MARK_COLOR, 0);
LABEL_53:
    ++v9;
  }
  while ( v9 != 3 );
  v32 = v4->fields.servantTextureList;
  if ( !v32 )
    goto LABEL_96;
  v33 = 0;
  while ( 1 )
  {
    v34 = v33 + 3;
    if ( v33 + 3 >= SLODWORD(v32->max_length) )
      break;
    if ( !portraitSelectList )
      goto LABEL_96;
    if ( (__int64)v34 >= SLODWORD(portraitSelectList->max_length) )
    {
      this = (ServantStatusListViewItemDrawPortrait_o *)ServantStatusListViewItem__get_IsMine(v3, 0);
      v42 = v4->fields.servantTextureList;
      if ( !v42 )
        goto LABEL_96;
      if ( v34 >= LODWORD(v42->max_length) )
        goto LABEL_98;
      v43 = (char)this;
      this = (ServantStatusListViewItemDrawPortrait_o *)v42->m_Items[v33 + 3];
      if ( !this )
        goto LABEL_96;
      this = (ServantStatusListViewItemDrawPortrait_o *)((__int64 (__fastcall *)(ServantStatusListViewItemDrawPortrait_o *, _QWORD, _QWORD))this->klass[1]._2.unity_user_data)(
                                                          this,
                                                          0,
                                                          *(_QWORD *)&this->klass[1]._2.initializationExceptionGCHandle);
      v44 = v4->fields.servantMaskSpriteList;
      if ( !v44 )
        goto LABEL_96;
      if ( v34 >= LODWORD(v44->max_length) )
        goto LABEL_98;
      this = (ServantStatusListViewItemDrawPortrait_o *)v44->m_Items[v33 + 3];
      if ( !this )
        goto LABEL_96;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 1, 0);
      if ( (v43 & 1) == 0 )
      {
        v45 = v4->fields.servantMaskSpriteList;
        if ( !v45 )
          goto LABEL_96;
        if ( v34 >= LODWORD(v45->max_length) )
          goto LABEL_98;
        v46 = v45->m_Items[v33 + 3];
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        this = (ServantStatusListViewItemDrawPortrait_o *)AtlasManager__SetNotOpenFace(v46, 0);
        v47 = v4->fields.servantMaskSpriteList;
        if ( !v47 )
          goto LABEL_96;
        if ( v34 >= LODWORD(v47->max_length) )
          goto LABEL_98;
        this = (ServantStatusListViewItemDrawPortrait_o *)v47->m_Items[v33 + 3];
        if ( !this )
          goto LABEL_96;
        UIWidget__set_color((UIWidget_o *)this, v4->fields.QUESTION_MARK_COLOR, 0);
      }
    }
    else
    {
      this = (ServantStatusListViewItemDrawPortrait_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_96;
      v35 = DataManager__GetMasterData_object_(
              (DataManager_o *)this,
              (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
      this = (ServantStatusListViewItemDrawPortrait_o *)ServantStatusListViewItem__get_SvtId(v3, 0);
      if ( v34 >= LODWORD(portraitSelectList->max_length) )
        goto LABEL_98;
      if ( !v35 )
        goto LABEL_96;
      this = (ServantStatusListViewItemDrawPortrait_o *)ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                                          (ServantLimitImageMaster_o *)v35,
                                                          (int32_t)this,
                                                          portraitSelectList->m_Items[v33 + 3],
                                                          0);
      v36 = v4->fields.servantTextureList;
      if ( !v36 )
        goto LABEL_96;
      if ( v34 >= LODWORD(v36->max_length) )
        goto LABEL_98;
      v37 = v36->m_Items[v33 + 3];
      v38 = (int)this;
      v39 = ServantStatusListViewItem__get_SvtId(v3, 0);
      if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      v40 = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(v38, 0);
      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      this = (ServantStatusListViewItemDrawPortrait_o *)ServantAssetLoadManager__loadStatusFace(v37, v39, v40, 0);
      v41 = v4->fields.servantMaskSpriteList;
      if ( !v41 )
        goto LABEL_96;
      if ( v34 >= LODWORD(v41->max_length) )
        goto LABEL_98;
      this = (ServantStatusListViewItemDrawPortrait_o *)v41->m_Items[v33 + 3];
      if ( !this )
        goto LABEL_96;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0);
    }
    v32 = v4->fields.servantTextureList;
    ++v33;
    if ( !v32 )
      goto LABEL_96;
  }
  ServantStatusListViewItemDrawPortrait__SetupButton(v4, v3, 0, v15);
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

  if ( (byte_4C23FDF & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&StringLiteral_11918/*"SERVANT_STATUS_EXPLANATION_PORTRAIT3"*/);
    sub_1C2D490(&StringLiteral_11917/*"SERVANT_STATUS_EXPLANATION_PORTRAIT2"*/);
    sub_1C2D490(&StringLiteral_11916/*"SERVANT_STATUS_EXPLANATION_PORTRAIT"*/);
    sub_1C2D490(&StringLiteral_11919/*"SERVANT_STATUS_EXPLANATION_PORTRAIT_LIMIT_COUNT_SEALED_MSG"*/);
    byte_4C23FDF = 1;
  }
  this->fields.dispMode = mode;
  if ( item && mode )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
    if ( item->fields.userSvtEntity )
    {
      explanationLabel = this->fields.explanationLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      IsServantLimitCountSeal = LocalizationManager__Get((System_String_o *)StringLiteral_11916/*"SERVANT_STATUS_EXPLANATION_PORTRAIT"*/, 0);
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
      IsServantLimitCountSeal = LocalizationManager__Get((System_String_o *)StringLiteral_11917/*"SERVANT_STATUS_EXPLANATION_PORTRAIT2"*/, 0);
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
      IsServantLimitCountSeal = LocalizationManager__Get((System_String_o *)StringLiteral_11918/*"SERVANT_STATUS_EXPLANATION_PORTRAIT3"*/, 0);
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
    IsServantLimitCountSeal = (System_String_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
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
                                  (System_String_o *)StringLiteral_11919/*"SERVANT_STATUS_EXPLANATION_PORTRAIT_LIMIT_COUNT_SEALED_MSG"*/,
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
      v25 = System_String__Concat_63457864(mText, v24, 0);
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
    sub_1C2D6EC(IsServantLimitCountSeal, v10);
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
  struct LocalizationManager_StaticFields *v18; // x8
  float r; // s12
  float g; // s13
  float b; // s14
  float a; // s15
  __int64 v23; // x2
  ServantLimitImageMaster_o *v24; // x25
  int32_t v25; // w8
  _BOOL4 v26; // w19
  struct UIRangeLabel_array *charaLevelTitleRangeLabelList; // x10
  UIRangeLabel_o *v28; // x26
  int v29; // w28
  System_String_o *v30; // x27
  float v31; // s3
  float v32; // s2
  float v33; // s1
  float v34; // s0 OVERLAPPED
  System_String_o *v35; // x0
  System_String_o *v36; // x0
  struct UISprite_array *charaLevelSpriteList; // x8
  __int64 *v38; // x8
  struct UICommonButton_array *servantButtonList; // x8
  struct UICommonButton_array *charaLevelButtonList; // x8
  char v41; // w26
  struct UICommonButton_array *v42; // x8
  struct UILabel_array *limitCountSealLabel; // x8
  UnityEngine_Object_o *v44; // x26
  struct UnityEngine_GameObject_array *limitCountSealObjList; // x8
  UnityEngine_Object_o *v46; // x27
  bool IsServantLimitCountSeal; // w28
  System_String_o *v48; // x1
  bool v49; // nf
  struct UICommonButton_array *v50; // x8
  int v51; // w22
  int max_length; // w27
  _BOOL4 v53; // w24
  struct UIRangeLabel_array *v54; // x9
  UIRangeLabel_o *v55; // x25
  int v56; // w19
  ServantCostumeEntity_o *Entity; // x0
  System_String_o *v58; // x26
  float v59; // s3
  float v60; // s2
  float v61; // s1
  float v62; // s0 OVERLAPPED
  struct UISprite_array *v63; // x8
  __int64 *v64; // x8
  struct UICommonButton_array *v65; // x8
  bool v66; // w19
  struct UICommonButton_array *v67; // x8
  char v68; // w25
  bool v69; // w19
  struct UICommonButton_array *v70; // x8
  struct UICommonButton_array *v71; // x8
  ServantCostumeMaster_o *v72; // [xsp+8h] [xbp-B8h]
  int32_t v73; // [xsp+14h] [xbp-ACh]
  unsigned int v75; // [xsp+1Ch] [xbp-A4h] BYREF
  UnityEngine_Color_o v76; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C23FE1 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantCostumeMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&StringLiteral_8268/*"LIMIT_COUNT_SELECT_SEALED"*/);
    sub_1C2D490(&StringLiteral_11933/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_"*/);
    sub_1C2D490(&StringLiteral_17441/*"btn_bg_20"*/);
    sub_1C2D490(&StringLiteral_11934/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_CLOSE"*/);
    sub_1C2D490(&StringLiteral_1/*""*/);
    sub_1C2D490(&StringLiteral_17442/*"btn_bg_21"*/);
    byte_4C23FE1 = 1;
  }
  v75 = 0;
  Instance = (UICommonButton_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_146;
  Instance = (UICommonButton_o *)DataManager__GetMasterData_object_(
                                   (DataManager_o *)Instance,
                                   (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
  if ( !item )
    goto LABEL_146;
  v72 = (ServantCostumeMaster_o *)Instance;
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
  v73 = ConvertOverwritePortraitLimitCount;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !byte_4C21AC5 )
  {
    sub_1C2D490(&LocalizationManager_TypeInfo);
    byte_4C21AC5 = 1;
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
  if ( !byte_4C21AC6 )
  {
    sub_1C2D490(&LocalizationManager_TypeInfo);
    v12 = LocalizationManager_TypeInfo;
    byte_4C21AC6 = 1;
  }
  if ( !v12->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v12);
    v12 = LocalizationManager_TypeInfo;
  }
  v18 = v12->static_fields;
  r = v18->selectEffectColor.fields.r;
  g = v18->selectEffectColor.fields.g;
  b = v18->selectEffectColor.fields.b;
  a = v18->selectEffectColor.fields.a;
  Instance = (UICommonButton_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_146:
    sub_1C2D6EC(Instance, v7);
  Instance = (UICommonButton_o *)DataManager__GetMasterData_object_(
                                   (DataManager_o *)Instance,
                                   (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  v24 = (ServantLimitImageMaster_o *)Instance;
  v25 = 0;
  v75 = 0;
  do
  {
    if ( v25 <= maxPortraitLimitCount )
    {
      if ( !portraitSelectList )
        goto LABEL_146;
      if ( (unsigned int)v25 >= LODWORD(portraitSelectList->max_length) )
        goto LABEL_148;
      v26 = portraitSelectList->m_Items[v25] == v73;
    }
    else
    {
      v26 = 0;
    }
    charaLevelTitleRangeLabelList = this->fields.charaLevelTitleRangeLabelList;
    if ( !charaLevelTitleRangeLabelList )
      goto LABEL_146;
    if ( (unsigned int)v25 >= LODWORD(charaLevelTitleRangeLabelList->max_length) )
      goto LABEL_148;
    v28 = charaLevelTitleRangeLabelList->m_Items[v25];
    v29 = v8 && v25 <= maxPortraitLimitCount;
    if ( v25 > maxPortraitLimitCount
      && (Instance = (UICommonButton_o *)ServantStatusListViewItem__get_IsMine(item, 0),
          ((unsigned __int8)Instance & 1) != 0) )
    {
      if ( !v28 )
        goto LABEL_146;
      v76.fields.r = v14;
      v76.fields.g = v15;
      v76.fields.b = v16;
      v76.fields.a = v17;
      UIRangeLabel__set_effectColor(v28, v76, 0);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v30 = (System_String_o *)StringLiteral_11934/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_CLOSE"*/;
    }
    else
    {
      v31 = v17;
      v32 = v16;
      v33 = v15;
      v34 = v14;
      if ( (v26 & v29) != 0 )
      {
        v31 = a;
        v32 = b;
        v33 = g;
        v34 = r;
      }
      if ( !v28 )
        goto LABEL_146;
      UIRangeLabel__set_effectColor(v28, *(UnityEngine_Color_o *)&v34, 0);
      v35 = System_Int32__ToString((int32_t)&v75, 0);
      v30 = System_String__Concat_63457864((System_String_o *)StringLiteral_11933/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_"*/, v35, 0);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v36 = LocalizationManager__Get(v30, 0);
    UIRangeLabel__Set(v28, v36, 0, 1, 0, 0, 0);
    charaLevelSpriteList = this->fields.charaLevelSpriteList;
    if ( !charaLevelSpriteList )
      goto LABEL_146;
    if ( v75 >= LODWORD(charaLevelSpriteList->max_length) )
LABEL_148:
      sub_1C2D6F4(Instance, v7, v23);
    Instance = (UICommonButton_o *)charaLevelSpriteList->m_Items[v75];
    if ( !Instance )
      goto LABEL_146;
    v38 = &StringLiteral_17441/*"btn_bg_20"*/;
    if ( v26 )
      v38 = &StringLiteral_17442/*"btn_bg_21"*/;
    UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v38, 0);
    servantButtonList = this->fields.servantButtonList;
    if ( !servantButtonList )
      goto LABEL_146;
    if ( v75 >= LODWORD(servantButtonList->max_length) )
      goto LABEL_148;
    Instance = servantButtonList->m_Items[v75];
    if ( (v26 & v29) != 0 )
    {
      if ( !Instance )
        goto LABEL_146;
      UICommonButton__SetColliderEnable(Instance, 0, v29 == 0 || isInit, 0);
      charaLevelButtonList = this->fields.charaLevelButtonList;
      if ( !charaLevelButtonList )
        goto LABEL_146;
      if ( v75 >= LODWORD(charaLevelButtonList->max_length) )
        goto LABEL_148;
      Instance = charaLevelButtonList->m_Items[v75];
      if ( !Instance )
        goto LABEL_146;
      UICommonButton__SetColliderEnable(Instance, 0, v29 == 0 || isInit, 0);
    }
    else
    {
      if ( !Instance )
        goto LABEL_146;
      v41 = v29 & ~v26;
      UICommonButton__SetButtonEnable(Instance, v41, v29 == 0 || isInit, 0);
      v42 = this->fields.charaLevelButtonList;
      if ( !v42 )
        goto LABEL_146;
      if ( v75 >= LODWORD(v42->max_length) )
        goto LABEL_148;
      Instance = v42->m_Items[v75];
      if ( !Instance )
        goto LABEL_146;
      UICommonButton__SetButtonEnable(Instance, v41, v29 == 0 || isInit, 0);
    }
    limitCountSealLabel = this->fields.limitCountSealLabel;
    if ( limitCountSealLabel )
    {
      if ( v75 >= LODWORD(limitCountSealLabel->max_length) )
        goto LABEL_148;
      v44 = (UnityEngine_Object_o *)limitCountSealLabel->m_Items[v75];
    }
    else
    {
      v44 = 0;
    }
    limitCountSealObjList = this->fields.limitCountSealObjList;
    if ( limitCountSealObjList )
    {
      if ( v75 >= LODWORD(limitCountSealObjList->max_length) )
        goto LABEL_148;
      v46 = (UnityEngine_Object_o *)limitCountSealObjList->m_Items[v75];
    }
    else
    {
      v46 = 0;
    }
    Instance = (UICommonButton_o *)ServantStatusListViewItem__get_SvtId(item, 0);
    if ( !portraitSelectList )
      goto LABEL_146;
    if ( v75 >= LODWORD(portraitSelectList->max_length) )
      goto LABEL_148;
    if ( !v24 )
      goto LABEL_146;
    IsServantLimitCountSeal = ServantLimitImageMaster__IsServantLimitCountSeal(
                                v24,
                                (int32_t)Instance,
                                portraitSelectList->m_Items[v75] + 1,
                                0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Instance = (UICommonButton_o *)UnityEngine_Object__op_Inequality(v46, 0, 0);
    if ( IsServantLimitCountSeal )
    {
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v46 )
          goto LABEL_146;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v46, 1, 0);
      }
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Instance = (UICommonButton_o *)UnityEngine_Object__op_Inequality(v44, 0, 0);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        Instance = (UICommonButton_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8268/*"LIMIT_COUNT_SELECT_SEALED"*/, 0);
        if ( !v44 )
          goto LABEL_146;
        v48 = (System_String_o *)Instance;
        goto LABEL_90;
      }
    }
    else
    {
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v46 )
          goto LABEL_146;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v46, 0, 0);
      }
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Instance = (UICommonButton_o *)UnityEngine_Object__op_Inequality(v44, 0, 0);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v44 )
          goto LABEL_146;
        v48 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_90:
        UILabel__set_text((UILabel_o *)v44, v48, 0);
      }
    }
    v49 = (int)(v75 - 2) < 0;
    v25 = ++v75;
  }
  while ( v49 != __OFSUB__(v75, 3) );
  v50 = this->fields.charaLevelButtonList;
  if ( !v50 )
    goto LABEL_146;
  v51 = 3;
  while ( v51 < SLODWORD(v50->max_length) )
  {
    max_length = portraitSelectList->max_length;
    if ( v51 >= max_length )
    {
      v53 = 0;
    }
    else
    {
      if ( v51 >= (unsigned int)max_length )
        goto LABEL_148;
      v53 = portraitSelectList->m_Items[v51] == v73;
    }
    v54 = this->fields.charaLevelTitleRangeLabelList;
    if ( !v54 )
      goto LABEL_146;
    if ( (unsigned int)v51 >= LODWORD(v54->max_length) )
      goto LABEL_148;
    v55 = v54->m_Items[v51];
    v56 = v8 && v51 < max_length;
    if ( v51 >= max_length )
    {
      if ( !v55 )
        goto LABEL_146;
      UIRangeLabel__Clear(v54->m_Items[v51], 0);
    }
    else
    {
      Instance = (UICommonButton_o *)ServantStatusListViewItem__get_SvtId(item, 0);
      if ( (unsigned int)v51 >= LODWORD(portraitSelectList->max_length) )
        goto LABEL_148;
      v7 = (unsigned int)Instance;
      Instance = (UICommonButton_o *)v72;
      if ( !v72 )
        goto LABEL_146;
      Entity = ServantCostumeMaster__GetEntity(v72, v7, portraitSelectList->m_Items[v51], 0);
      if ( Entity )
      {
        Instance = (UICommonButton_o *)ServantCostumeEntity__getShortName(Entity, 0);
        v58 = (System_String_o *)Instance;
      }
      else
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        if ( !byte_4C2267D )
        {
          sub_1C2D490(&LocalizationManager_TypeInfo);
          byte_4C2267D = 1;
        }
        Instance = (UICommonButton_o *)LocalizationManager_TypeInfo;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          Instance = (UICommonButton_o *)LocalizationManager_TypeInfo;
        }
        v58 = *(System_String_o **)(*(_QWORD *)&Instance[1].fields.specifyHoverColor.fields.b + 32LL);
      }
      v59 = v17;
      v60 = v16;
      v61 = v15;
      v62 = v14;
      if ( (v53 & v56) != 0 )
      {
        v59 = a;
        v60 = b;
        v61 = g;
        v62 = r;
      }
      if ( !v55 )
        goto LABEL_146;
      UIRangeLabel__set_effectColor(v55, *(UnityEngine_Color_o *)&v62, 0);
      UIRangeLabel__Set(v55, v58, 0, 1, 0, 0, 0);
    }
    v63 = this->fields.charaLevelSpriteList;
    if ( !v63 )
      goto LABEL_146;
    if ( (unsigned int)v51 >= LODWORD(v63->max_length) )
      goto LABEL_148;
    Instance = (UICommonButton_o *)v63->m_Items[v51];
    if ( !Instance )
      goto LABEL_146;
    v64 = &StringLiteral_17441/*"btn_bg_20"*/;
    if ( v53 )
      v64 = &StringLiteral_17442/*"btn_bg_21"*/;
    UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v64, 0);
    v65 = this->fields.servantButtonList;
    if ( !v65 )
      goto LABEL_146;
    if ( (unsigned int)v51 >= LODWORD(v65->max_length) )
      goto LABEL_148;
    Instance = v65->m_Items[v51];
    if ( (v53 & v56) != 0 )
    {
      if ( !Instance )
        goto LABEL_146;
      v66 = v56 == 0 || isInit;
      UICommonButton__SetColliderEnable(Instance, 0, v66, 0);
      v67 = this->fields.charaLevelButtonList;
      if ( !v67 )
        goto LABEL_146;
      if ( (unsigned int)v51 >= LODWORD(v67->max_length) )
        goto LABEL_148;
      Instance = v67->m_Items[v51];
      if ( !Instance )
        goto LABEL_146;
      UICommonButton__SetColliderEnable(Instance, 0, v66, 0);
    }
    else if ( v51 >= max_length )
    {
      if ( !Instance )
        goto LABEL_146;
      Instance = (UICommonButton_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
      if ( !Instance )
        goto LABEL_146;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
      v71 = this->fields.charaLevelButtonList;
      if ( !v71 )
        goto LABEL_146;
      if ( (unsigned int)v51 >= LODWORD(v71->max_length) )
        goto LABEL_148;
      Instance = v71->m_Items[v51];
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
      v68 = v56 & ~v53;
      v69 = v56 == 0 || isInit;
      UICommonButton__SetButtonEnable(Instance, v68, v69, 0);
      v70 = this->fields.charaLevelButtonList;
      if ( !v70 )
        goto LABEL_146;
      if ( (unsigned int)v51 >= LODWORD(v70->max_length) )
        goto LABEL_148;
      Instance = v70->m_Items[v51];
      if ( !Instance )
        goto LABEL_146;
      UICommonButton__SetButtonEnable(Instance, v68, v69, 0);
    }
    v50 = this->fields.charaLevelButtonList;
    ++v51;
    if ( !v50 )
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
  if ( (byte_4C23FE2 & 1) == 0 )
  {
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&string_TypeInfo);
    this = (ServantStatusListViewItemDrawPortrait_o *)sub_1C2D490(&StringLiteral_11957/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_INFO_OWN_SETTING_STATUS_ICON"*/);
    byte_4C23FE2 = 1;
  }
  if ( !item )
LABEL_24:
    sub_1C2D6EC(this, item);
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
    Empty = LocalizationManager__Get((System_String_o *)StringLiteral_11957/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_INFO_OWN_SETTING_STATUS_ICON"*/, 0);
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