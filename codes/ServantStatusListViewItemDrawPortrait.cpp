void __fastcall ServantStatusListViewItemDrawPortrait___ctor(
        ServantStatusListViewItemDrawPortrait_o *this,
        const MethodInfo *method)
{
  this->fields.MASK_LABEL_MAX_WIDTH = 550;
  this->fields.QUESTION_MARK_COLOR = (struct UnityEngine_Color_o)xmmword_BA2910;
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
  __int64 v5; // x1
  float v6; // s1
  struct UISprite_array *v7; // x8
  float v8; // s8
  float v9; // s1
  struct UISprite_o *baseSprite; // x9
  int max_length; // w8
  int mWidth; // s0
  int32_t mHeight; // w9
  bool v14; // cc
  unsigned int v15; // w8
  int v16; // w8
  float v17; // s0
  float v18; // s1
  float v19; // s2
  int v20; // w8
  float v21; // s8
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4

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
    *(UnityEngine_Vector3_o *)(&v6 - 1) = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
    v7 = v3->fields.charaLevelSpriteList;
    if ( !v7 )
      goto LABEL_28;
    if ( v7->max_length <= 3 )
      sub_1B6432C(this, v5);
    if ( (this = (ServantStatusListViewItemDrawPortrait_o *)v7->m_Items[3]) == 0LL
      || (v8 = v6,
          (this = (ServantStatusListViewItemDrawPortrait_o *)UnityEngine_Component__get_transform(
                                                               (UnityEngine_Component_o *)this,
                                                               0LL)) == 0LL)
      || ((*(UnityEngine_Vector3_o *)(&v9 - 1) = UnityEngine_Transform__get_localPosition(
                                                   (UnityEngine_Transform_o *)this,
                                                   0LL),
           charaLevelSpriteList = v3->fields.charaLevelSpriteList,
           (float)(v8 - v9) != INFINITY)
        ? (buttonPitch = (int)(float)(v8 - v9))
        : (buttonPitch = 0x80000000),
          v3->fields.buttonPitch = buttonPitch,
          !charaLevelSpriteList) )
    {
LABEL_28:
      sub_1B64324(this);
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
  v14 = max_length < 9;
  v15 = ((int)(((unsigned __int64)(1431655765LL * max_length) >> 32) - max_length) >> 1)
      + ((unsigned int)(((unsigned __int64)(1431655765LL * max_length) >> 32) - max_length) >> 31);
  this = (ServantStatusListViewItemDrawPortrait_o *)v3->fields.titleSprite;
  v16 = v14 ? -1 : v15 + 1;
  v3->fields.baseSize.fields.x = (float)mWidth;
  v3->fields.baseSize.fields.y = (float)(mHeight + v16 * buttonPitch);
  v3->fields.baseSize.fields.z = 0.0;
  if ( !this )
    goto LABEL_28;
  this = (ServantStatusListViewItemDrawPortrait_o *)UnityEngine_Component__get_transform(
                                                      (UnityEngine_Component_o *)this,
                                                      0LL);
  if ( !this )
    goto LABEL_28;
  *(UnityEngine_Vector3_o *)&v17 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  this = (ServantStatusListViewItemDrawPortrait_o *)v3->fields.levelButtonBase;
  v20 = buttonPitch >= 0 ? buttonPitch : buttonPitch + 1;
  v21 = (float)(v20 >> 1);
  v3->fields.titleBasePosition.fields.x = v17;
  v3->fields.titleBasePosition.fields.y = v18 - v21;
  v3->fields.titleBasePosition.fields.z = v19;
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
  v3->fields.levelButtonBasePosition.fields.y = localPosition.fields.y - v21;
  v3->fields.levelButtonBasePosition.fields.z = localPosition.fields.z;
  if ( !this )
    goto LABEL_28;
  this = (ServantStatusListViewItemDrawPortrait_o *)UnityEngine_Component__get_transform(
                                                      (UnityEngine_Component_o *)this,
                                                      0LL);
  if ( !this )
    goto LABEL_28;
  v23 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  v3->fields.explanationBasePosition.fields.x = v23.fields.x;
  v3->fields.explanationBasePosition.fields.y = v23.fields.y + v21;
  v3->fields.explanationBasePosition.fields.z = v23.fields.z;
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
  __int64 v18; // x1
  struct UITexture_array *v19; // x8
  char v20; // w23
  struct UISprite_array *v21; // x8
  const MethodInfo *v22; // x3
  struct UISprite_array *v23; // x8
  UISprite_o *v24; // x23
  struct UISprite_array *v25; // x8
  int v26; // w8
  int32_t v27; // w23
  int32_t SvtId; // w24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v29; // kr00_16
  Il2CppObject *v30; // x23
  struct UITexture_array *servantTextureList; // x8
  UITexture_o *v32; // x23
  int32_t v33; // w25
  int32_t v34; // w24
  int32_t LimitCountByImageLimitCostumeIn; // w25
  struct UISprite_array *servantMaskSpriteList; // x8
  struct UITexture_array *v37; // x8
  struct UISprite_array *v38; // x8
  struct UITexture_array *v39; // x8
  __int64 v40; // x24
  unsigned __int64 v41; // x28
  Il2CppObject *v42; // x21
  struct UITexture_array *v43; // x8
  UITexture_o *v44; // x21
  int32_t v45; // w23
  int32_t v46; // w22
  int32_t v47; // w23
  struct UISprite_array *v48; // x8
  struct UITexture_array *v49; // x8
  char v50; // w21
  struct UISprite_array *v51; // x8
  struct UISprite_array *v52; // x8
  UISprite_o *v53; // x21
  struct UISprite_array *v54; // x8
  Il2CppObject *MasterData_object; // [xsp+8h] [xbp-68h]

  v4 = this;
  if ( (byte_49F9287 & 1) == 0 )
  {
    sub_1B640C8(&AtlasManager_TypeInfo, item);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v5);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___, v6);
    sub_1B640C8(&ImageLimitCount_TypeInfo, v7);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_1B640C8(&OptionManager_TypeInfo, v9);
    sub_1B640C8(&ServantAssetLoadManager_TypeInfo, v10);
    this = (ServantStatusListViewItemDrawPortrait_o *)sub_1B640C8(
                                                        &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                                        v11);
    byte_49F9287 = 1;
  }
  if ( !item
    || (ConvertOverwritePortraitLimitCount = ServantStatusListViewItem__get_ConvertOverwritePortraitLimitCount(
                                               item,
                                               0LL),
        maxPortraitLimitCount = item->fields.maxPortraitLimitCount,
        portraitSelectList = item->fields.portraitSelectList,
        v15 = ConvertOverwritePortraitLimitCount,
        (this = (ServantStatusListViewItemDrawPortrait_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL) )
  {
LABEL_96:
    sub_1B64324(this);
  }
  v16 = 0LL;
  v17 = &portraitSelectList->m_Items[1];
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)this,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___);
  do
  {
    if ( (__int64)v16 > maxPortraitLimitCount )
      goto LABEL_7;
    this = (ServantStatusListViewItemDrawPortrait_o *)ServantStatusListViewItem__get_IsMine(item, 0LL);
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
      this = (ServantStatusListViewItemDrawPortrait_o *)ServantStatusListViewItem__get_IsMine(item, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
        goto LABEL_39;
      if ( !portraitSelectList )
        goto LABEL_96;
      if ( v16 >= portraitSelectList->max_length )
        goto LABEL_98;
      v26 = v17[v16];
      if ( v26 >= 11 )
        v27 = v17[v16];
      else
        v27 = v26 + 1;
      SvtId = ServantStatusListViewItem__get_SvtId(item, 0LL);
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(SvtId, 0LL);
      this = (ServantStatusListViewItemDrawPortrait_o *)MasterData_object;
      if ( !MasterData_object )
        goto LABEL_96;
      this = (ServantStatusListViewItemDrawPortrait_o *)ServantLimitSpoilerProtectionMaster__IsSpoilerLimitCount(
                                                          (ServantLimitSpoilerProtectionMaster_o *)MasterData_object,
                                                          v29,
                                                          v27,
                                                          0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
LABEL_39:
        this = (ServantStatusListViewItemDrawPortrait_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_96;
        v30 = DataManager__GetMasterData_object_(
                (DataManager_o *)this,
                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
        this = (ServantStatusListViewItemDrawPortrait_o *)ServantStatusListViewItem__get_SvtId(item, 0LL);
        if ( !portraitSelectList )
          goto LABEL_96;
        if ( v16 >= portraitSelectList->max_length )
          goto LABEL_98;
        if ( !v30 )
          goto LABEL_96;
        this = (ServantStatusListViewItemDrawPortrait_o *)ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                                            (ServantLimitImageMaster_o *)v30,
                                                            (int32_t)this,
                                                            v17[v16],
                                                            0LL);
        servantTextureList = v4->fields.servantTextureList;
        if ( !servantTextureList )
          goto LABEL_96;
        if ( v16 >= servantTextureList->max_length )
          goto LABEL_98;
        v32 = servantTextureList->m_Items[v16];
        v33 = (int)this;
        v34 = ServantStatusListViewItem__get_SvtId(item, 0LL);
        if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
        LimitCountByImageLimitCostumeIn = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(v33, 0LL);
        if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
        this = (ServantStatusListViewItemDrawPortrait_o *)ServantAssetLoadManager__loadStatusFace(
                                                            v32,
                                                            v34,
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
      v37 = v4->fields.servantTextureList;
      if ( !v37 )
        goto LABEL_96;
      if ( v16 >= v37->max_length )
LABEL_98:
        sub_1B6432C(this, v18);
      this = (ServantStatusListViewItemDrawPortrait_o *)v37->m_Items[v16];
      if ( !this )
        goto LABEL_96;
      this = (ServantStatusListViewItemDrawPortrait_o *)(*(__int64 (__fastcall **)(ServantStatusListViewItemDrawPortrait_o *, _QWORD, _QWORD))&this->klass[1]._2.initializationExceptionGCHandle)(
                                                          this,
                                                          0LL,
                                                          *(_QWORD *)&this->klass[1]._2.cctor_finished);
      v38 = v4->fields.servantMaskSpriteList;
      if ( !v38 )
        goto LABEL_96;
      if ( v16 >= v38->max_length )
        goto LABEL_98;
      this = (ServantStatusListViewItemDrawPortrait_o *)v38->m_Items[v16];
      if ( !this )
        goto LABEL_96;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 1, 0LL);
    }
    else
    {
LABEL_7:
      this = (ServantStatusListViewItemDrawPortrait_o *)ServantStatusListViewItem__get_IsMine(item, 0LL);
      v19 = v4->fields.servantTextureList;
      if ( !v19 )
        goto LABEL_96;
      if ( v16 >= v19->max_length )
        goto LABEL_98;
      v20 = (char)this;
      this = (ServantStatusListViewItemDrawPortrait_o *)v19->m_Items[v16];
      if ( !this )
        goto LABEL_96;
      this = (ServantStatusListViewItemDrawPortrait_o *)(*(__int64 (__fastcall **)(ServantStatusListViewItemDrawPortrait_o *, _QWORD, _QWORD))&this->klass[1]._2.initializationExceptionGCHandle)(
                                                          this,
                                                          0LL,
                                                          *(_QWORD *)&this->klass[1]._2.cctor_finished);
      v21 = v4->fields.servantMaskSpriteList;
      if ( !v21 )
        goto LABEL_96;
      if ( v16 >= v21->max_length )
        goto LABEL_98;
      this = (ServantStatusListViewItemDrawPortrait_o *)v21->m_Items[v16];
      if ( !this )
        goto LABEL_96;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 1, 0LL);
      if ( (v20 & 1) != 0 )
        goto LABEL_53;
    }
    v23 = v4->fields.servantMaskSpriteList;
    if ( !v23 )
      goto LABEL_96;
    if ( v16 >= v23->max_length )
      goto LABEL_98;
    v24 = v23->m_Items[v16];
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    this = (ServantStatusListViewItemDrawPortrait_o *)AtlasManager__SetNotOpenFace(v24, 0LL);
    v25 = v4->fields.servantMaskSpriteList;
    if ( !v25 )
      goto LABEL_96;
    if ( v16 >= v25->max_length )
      goto LABEL_98;
    this = (ServantStatusListViewItemDrawPortrait_o *)v25->m_Items[v16];
    if ( !this )
      goto LABEL_96;
    UIWidget__set_color((UIWidget_o *)this, v4->fields.QUESTION_MARK_COLOR, 0LL);
LABEL_53:
    ++v16;
  }
  while ( v16 != 3 );
  v39 = v4->fields.servantTextureList;
  if ( !v39 )
    goto LABEL_96;
  v40 = 0LL;
  while ( 1 )
  {
    v41 = v40 + 3;
    if ( v40 + 3 >= (int)v39->max_length )
      break;
    if ( !portraitSelectList )
      goto LABEL_96;
    if ( (__int64)v41 >= (int)portraitSelectList->max_length )
    {
      this = (ServantStatusListViewItemDrawPortrait_o *)ServantStatusListViewItem__get_IsMine(item, 0LL);
      v49 = v4->fields.servantTextureList;
      if ( !v49 )
        goto LABEL_96;
      if ( v41 >= v49->max_length )
        goto LABEL_98;
      v50 = (char)this;
      this = (ServantStatusListViewItemDrawPortrait_o *)v49->m_Items[v40 + 3];
      if ( !this )
        goto LABEL_96;
      this = (ServantStatusListViewItemDrawPortrait_o *)(*(__int64 (__fastcall **)(ServantStatusListViewItemDrawPortrait_o *, _QWORD, _QWORD))&this->klass[1]._2.initializationExceptionGCHandle)(
                                                          this,
                                                          0LL,
                                                          *(_QWORD *)&this->klass[1]._2.cctor_finished);
      v51 = v4->fields.servantMaskSpriteList;
      if ( !v51 )
        goto LABEL_96;
      if ( v41 >= v51->max_length )
        goto LABEL_98;
      this = (ServantStatusListViewItemDrawPortrait_o *)v51->m_Items[v40 + 3];
      if ( !this )
        goto LABEL_96;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 1, 0LL);
      if ( (v50 & 1) == 0 )
      {
        v52 = v4->fields.servantMaskSpriteList;
        if ( !v52 )
          goto LABEL_96;
        if ( v41 >= v52->max_length )
          goto LABEL_98;
        v53 = v52->m_Items[v40 + 3];
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        this = (ServantStatusListViewItemDrawPortrait_o *)AtlasManager__SetNotOpenFace(v53, 0LL);
        v54 = v4->fields.servantMaskSpriteList;
        if ( !v54 )
          goto LABEL_96;
        if ( v41 >= v54->max_length )
          goto LABEL_98;
        this = (ServantStatusListViewItemDrawPortrait_o *)v54->m_Items[v40 + 3];
        if ( !this )
          goto LABEL_96;
        UIWidget__set_color((UIWidget_o *)this, v4->fields.QUESTION_MARK_COLOR, 0LL);
      }
    }
    else
    {
      this = (ServantStatusListViewItemDrawPortrait_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_96;
      v42 = DataManager__GetMasterData_object_(
              (DataManager_o *)this,
              (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
      this = (ServantStatusListViewItemDrawPortrait_o *)ServantStatusListViewItem__get_SvtId(item, 0LL);
      if ( v41 >= portraitSelectList->max_length )
        goto LABEL_98;
      if ( !v42 )
        goto LABEL_96;
      this = (ServantStatusListViewItemDrawPortrait_o *)ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                                          (ServantLimitImageMaster_o *)v42,
                                                          (int32_t)this,
                                                          portraitSelectList->m_Items[v40 + 4],
                                                          0LL);
      v43 = v4->fields.servantTextureList;
      if ( !v43 )
        goto LABEL_96;
      if ( v41 >= v43->max_length )
        goto LABEL_98;
      v44 = v43->m_Items[v40 + 3];
      v45 = (int)this;
      v46 = ServantStatusListViewItem__get_SvtId(item, 0LL);
      if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      v47 = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(v45, 0LL);
      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      this = (ServantStatusListViewItemDrawPortrait_o *)ServantAssetLoadManager__loadStatusFace(v44, v46, v47, 0LL);
      v48 = v4->fields.servantMaskSpriteList;
      if ( !v48 )
        goto LABEL_96;
      if ( v41 >= v48->max_length )
        goto LABEL_98;
      this = (ServantStatusListViewItemDrawPortrait_o *)v48->m_Items[v40 + 3];
      if ( !this )
        goto LABEL_96;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0LL);
    }
    v39 = v4->fields.servantTextureList;
    ++v40;
    if ( !v39 )
      goto LABEL_96;
  }
  ServantStatusListViewItemDrawPortrait__SetupButton(v4, item, 0, v22);
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
  struct UserServantEntity_o *userSvtEntity; // x8
  __int64 v19; // x22
  __int64 v20; // x23
  UILabel_o *v21; // x22
  struct UserServantCollectionEntity_o *userSvtCollectionEntity; // x8
  struct ServantLeaderInfo_o *servantLeaderInfo; // x23
  UILabel_o *v24; // x22
  struct ServantLeaderInfo_o *v25; // x8
  int32_t v26; // w22
  struct UILabel_o *v27; // x23
  System_String_o *mText; // x25
  System_String_o *v29; // x24
  Il2CppObject *LimitCountSealedServantName; // x0
  System_String_o *v31; // x0
  System_String_o *v32; // x0
  struct System_Int32_array *portraitSelectList; // x8
  int max_length; // w8
  int32_t buttonPitch; // w9
  float x; // s8
  float y; // s9
  float z; // s10
  int v39; // w10
  bool v40; // cc
  int v41; // w10
  UnityEngine_Object_o *baseCollider; // x21
  int v43; // w9
  int v44; // w23
  float v45; // s9
  int32_t v46; // w1
  int32_t v47; // w1
  int v48; // w21
  float v49; // s8
  float v50; // s11
  float v51; // s9
  float v52; // s10
  float v53; // s8
  float v54; // s11
  float v55; // s9
  float v56; // s8
  float v57; // s10
  float v58; // s9
  const MethodInfo *v59; // x3
  const MethodInfo *v60; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v61; // 0:x0.16
  UnityEngine_Vector3_o v62; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v63; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v64; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v65; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49F9286 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_ServantLimitImageMaster___, item);
    sub_1B640C8(&DataManager_TypeInfo, v7);
    sub_1B640C8(&LocalizationManager_TypeInfo, v8);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v9);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    sub_1B640C8(&StringLiteral_11816/*"SERVANT_STATUS_EXPLANATION_PORTRAIT3"*/, v11);
    sub_1B640C8(&StringLiteral_11815/*"SERVANT_STATUS_EXPLANATION_PORTRAIT2"*/, v12);
    sub_1B640C8(&StringLiteral_11814/*"SERVANT_STATUS_EXPLANATION_PORTRAIT"*/, v13);
    sub_1B640C8(&StringLiteral_11817/*"SERVANT_STATUS_EXPLANATION_PORTRAIT_LIMIT_COUNT_SEALED_MSG"*/, v14);
    byte_49F9286 = 1;
  }
  this->fields.dispMode = mode;
  if ( item && mode )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
    if ( item->fields.userSvtEntity )
    {
      explanationLabel = this->fields.explanationLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      IsServantLimitCountSeal = LocalizationManager__Get((System_String_o *)StringLiteral_11814/*"SERVANT_STATUS_EXPLANATION_PORTRAIT"*/, 0LL);
      if ( !explanationLabel )
        goto LABEL_72;
      UILabel__set_text(explanationLabel, IsServantLimitCountSeal, 0LL);
      userSvtEntity = item->fields.userSvtEntity;
      if ( !userSvtEntity )
        goto LABEL_72;
      v20 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
      v19 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
    }
    else if ( item->fields.userSvtCollectionEntity )
    {
      v21 = this->fields.explanationLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      IsServantLimitCountSeal = LocalizationManager__Get((System_String_o *)StringLiteral_11815/*"SERVANT_STATUS_EXPLANATION_PORTRAIT2"*/, 0LL);
      if ( !v21 )
        goto LABEL_72;
      UILabel__set_text(v21, IsServantLimitCountSeal, 0LL);
      userSvtCollectionEntity = item->fields.userSvtCollectionEntity;
      if ( !userSvtCollectionEntity )
        goto LABEL_72;
      v20 = *(_QWORD *)&userSvtCollectionEntity->fields.svtId.fields.currentCryptoKey;
      v19 = *(_QWORD *)&userSvtCollectionEntity->fields.svtId.fields.fakeValue;
    }
    else
    {
      servantLeaderInfo = item->fields.servantLeaderInfo;
      v24 = this->fields.explanationLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      IsServantLimitCountSeal = LocalizationManager__Get((System_String_o *)StringLiteral_11816/*"SERVANT_STATUS_EXPLANATION_PORTRAIT3"*/, 0LL);
      if ( !v24 )
        goto LABEL_72;
      UILabel__set_text(v24, IsServantLimitCountSeal, 0LL);
      if ( !servantLeaderInfo )
        goto LABEL_33;
      v25 = item->fields.servantLeaderInfo;
      if ( !v25 )
        goto LABEL_72;
      v20 = *(_QWORD *)&v25->fields.svtId.fields.currentCryptoKey;
      v19 = *(_QWORD *)&v25->fields.svtId.fields.fakeValue;
    }
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v61.fields.currentCryptoKey = v20;
    *(_QWORD *)&v61.fields.fakeValue = v19;
    IsServantLimitCountSeal = (System_String_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                                                   v61,
                                                   0LL);
    v26 = (int)IsServantLimitCountSeal;
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
                                  (System_String_o *)StringLiteral_11817/*"SERVANT_STATUS_EXPLANATION_PORTRAIT_LIMIT_COUNT_SEALED_MSG"*/,
                                  v26,
                                  0LL);
      v27 = this->fields.explanationLabel;
      if ( !v27 )
        goto LABEL_72;
      mText = v27->fields.mText;
      v29 = IsServantLimitCountSeal;
      LimitCountSealedServantName = (Il2CppObject *)ServantLimitImageMaster__GetLimitCountSealedServantName(
                                                      (ServantLimitImageMaster_o *)Master_object,
                                                      v26,
                                                      3,
                                                      0LL);
      v31 = System_String__Format(v29, LimitCountSealedServantName, 0LL);
      v32 = System_String__Concat_61375396(mText, v31, 0LL);
      UILabel__set_text(v27, v32, 0LL);
      v26 = 1;
      goto LABEL_34;
    }
LABEL_33:
    v26 = 0;
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
    v39 = max_length / 3;
    if ( max_length != 3 * (max_length / 3) )
      ++v39;
    v40 = v39 < 3;
    v41 = v39 - 1;
    if ( v40 )
      v41 = 1;
    baseCollider = (UnityEngine_Object_o *)this->fields.baseCollider;
    v43 = v41 * buttonPitch;
    if ( v26 )
      v44 = v43 + 22;
    else
      v44 = v43;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v45 = y + (float)v44;
    if ( UnityEngine_Object__op_Inequality(baseCollider, 0LL, 0LL) )
    {
      IsServantLimitCountSeal = (System_String_o *)this->fields.baseCollider;
      if ( !IsServantLimitCountSeal )
        goto LABEL_72;
      v62.fields.x = x;
      v62.fields.y = v45;
      v62.fields.z = z;
      UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)IsServantLimitCountSeal, v62, 0LL);
    }
    IsServantLimitCountSeal = (System_String_o *)this->fields.baseSprite;
    if ( IsServantLimitCountSeal )
    {
      v46 = x == INFINITY ? 0x80000000 : (int)x;
      UIWidget__set_width((UIWidget_o *)IsServantLimitCountSeal, v46, 0LL);
      IsServantLimitCountSeal = (System_String_o *)this->fields.baseSprite;
      if ( IsServantLimitCountSeal )
      {
        v47 = v45 == INFINITY ? 0x80000000 : (int)v45;
        UIWidget__set_height((UIWidget_o *)IsServantLimitCountSeal, v47, 0LL);
        IsServantLimitCountSeal = (System_String_o *)this->fields.titleSprite;
        v48 = v44 >= 0 ? v44 : v44 + 1;
        if ( IsServantLimitCountSeal )
        {
          v49 = this->fields.titleBasePosition.fields.x;
          v50 = this->fields.titleBasePosition.fields.y;
          v51 = this->fields.titleBasePosition.fields.z;
          IsServantLimitCountSeal = (System_String_o *)UnityEngine_Component__get_transform(
                                                         (UnityEngine_Component_o *)IsServantLimitCountSeal,
                                                         0LL);
          if ( IsServantLimitCountSeal )
          {
            v52 = (float)(v48 >> 1);
            v63.fields.y = v50 + v52;
            v63.fields.x = v49;
            v63.fields.z = v51;
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)IsServantLimitCountSeal, v63, 0LL);
            IsServantLimitCountSeal = (System_String_o *)this->fields.levelButtonBase;
            if ( IsServantLimitCountSeal )
            {
              v53 = this->fields.levelButtonBasePosition.fields.x;
              v54 = this->fields.levelButtonBasePosition.fields.y;
              v55 = this->fields.levelButtonBasePosition.fields.z;
              IsServantLimitCountSeal = (System_String_o *)UnityEngine_GameObject__get_transform(
                                                             (UnityEngine_GameObject_o *)IsServantLimitCountSeal,
                                                             0LL);
              if ( IsServantLimitCountSeal )
              {
                v64.fields.y = v54 + v52;
                v64.fields.x = v53;
                v64.fields.z = v55;
                UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)IsServantLimitCountSeal, v64, 0LL);
                IsServantLimitCountSeal = (System_String_o *)this->fields.explanationLabel;
                v56 = v26
                    ? (float)(this->fields.explanationBasePosition.fields.y - v52) + 11.0
                    : this->fields.explanationBasePosition.fields.y - v52;
                if ( IsServantLimitCountSeal )
                {
                  v57 = this->fields.explanationBasePosition.fields.x;
                  v58 = this->fields.explanationBasePosition.fields.z;
                  IsServantLimitCountSeal = (System_String_o *)UnityEngine_Component__get_transform(
                                                                 (UnityEngine_Component_o *)IsServantLimitCountSeal,
                                                                 0LL);
                  if ( IsServantLimitCountSeal )
                  {
                    v65.fields.x = v57;
                    v65.fields.y = v56;
                    v65.fields.z = v58;
                    UnityEngine_Transform__set_localPosition(
                      (UnityEngine_Transform_o *)IsServantLimitCountSeal,
                      v65,
                      0LL);
                    ServantStatusListViewItemDrawPortrait__SetupButton(this, item, 1, v59);
                    ServantStatusListViewItemDrawPortrait__SetupMask(this, item, v60);
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
    sub_1B64324(IsServantLimitCountSeal);
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
  bool v17; // w29
  int32_t ConvertOverwritePortraitLimitCount; // w0
  __int64 v19; // x1
  int32_t maxPortraitLimitCount; // w22
  struct System_Int32_array *portraitSelectList; // x23
  LocalizationManager_c *v22; // x0
  float *static_fields; // x8
  float v24; // s8
  float v25; // s9
  float v26; // s10
  float v27; // s11
  struct LocalizationManager_StaticFields *v28; // x8
  float r; // s12
  float g; // s13
  float b; // s14
  float a; // s15
  __int64 v33; // x1
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
  int32_t v67; // w1
  ServantCostumeEntity_o *Entity; // x0
  __int64 v69; // x1
  System_String_o *v70; // x26
  float v71; // s3
  float v72; // s2
  float v73; // s1
  float v74; // s0
  struct UISprite_array *v75; // x8
  __int64 *v76; // x8
  struct UICommonButton_array *v77; // x8
  bool v78; // w19
  struct UICommonButton_array *v79; // x8
  char v80; // w25
  bool v81; // w19
  struct UICommonButton_array *v82; // x8
  struct UICommonButton_array *v83; // x8
  ServantCostumeMaster_o *v84; // [xsp+8h] [xbp-B8h]
  int32_t v85; // [xsp+14h] [xbp-ACh]
  unsigned int v87; // [xsp+1Ch] [xbp-A4h] BYREF
  UnityEngine_Color_o v88; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_49F9288 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantCostumeMaster___, item);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v6);
    sub_1B640C8(&LocalizationManager_TypeInfo, v7);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v8);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_1B640C8(&StringLiteral_8210/*"LIMIT_COUNT_SELECT_SEALED"*/, v10);
    sub_1B640C8(&StringLiteral_11830/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_"*/, v11);
    sub_1B640C8(&StringLiteral_17409/*"btn_bg_20"*/, v12);
    sub_1B640C8(&StringLiteral_11831/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_CLOSE"*/, v13);
    sub_1B640C8(&StringLiteral_1/*""*/, v14);
    sub_1B640C8(&StringLiteral_17410/*"btn_bg_21"*/, v15);
    byte_49F9288 = 1;
  }
  v87 = 0;
  Instance = (UICommonButton_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_146;
  Instance = (UICommonButton_o *)DataManager__GetMasterData_object_(
                                   (DataManager_o *)Instance,
                                   (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
  if ( !item )
    goto LABEL_146;
  v84 = (ServantCostumeMaster_o *)Instance;
  if ( item->fields.isConvertOverwriteImage )
  {
    v17 = 0;
  }
  else if ( item->fields.userSvtEntity )
  {
    v17 = 1;
  }
  else
  {
    v17 = item->fields.userSvtCollectionEntity != 0LL;
  }
  ConvertOverwritePortraitLimitCount = ServantStatusListViewItem__get_ConvertOverwritePortraitLimitCount(item, 0LL);
  maxPortraitLimitCount = item->fields.maxPortraitLimitCount;
  portraitSelectList = item->fields.portraitSelectList;
  v85 = ConvertOverwritePortraitLimitCount;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !byte_49F779B )
  {
    sub_1B640C8(&LocalizationManager_TypeInfo, v19);
    byte_49F779B = 1;
  }
  v22 = LocalizationManager_TypeInfo;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v22 = LocalizationManager_TypeInfo;
  }
  static_fields = (float *)v22->static_fields;
  v24 = static_fields[20];
  v25 = static_fields[21];
  v26 = static_fields[22];
  v27 = static_fields[23];
  if ( !byte_49F779C )
  {
    sub_1B640C8(&LocalizationManager_TypeInfo, v19);
    v22 = LocalizationManager_TypeInfo;
    byte_49F779C = 1;
  }
  if ( !v22->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v22);
    v22 = LocalizationManager_TypeInfo;
  }
  v28 = v22->static_fields;
  r = v28->selectEffectColor.fields.r;
  g = v28->selectEffectColor.fields.g;
  b = v28->selectEffectColor.fields.b;
  a = v28->selectEffectColor.fields.a;
  Instance = (UICommonButton_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_146:
    sub_1B64324(Instance);
  Instance = (UICommonButton_o *)DataManager__GetMasterData_object_(
                                   (DataManager_o *)Instance,
                                   (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  v34 = (ServantLimitImageMaster_o *)Instance;
  v35 = 0;
  v87 = 0;
  do
  {
    if ( v35 <= maxPortraitLimitCount )
    {
      if ( !portraitSelectList )
        goto LABEL_146;
      if ( v35 >= portraitSelectList->max_length )
        goto LABEL_148;
      v36 = portraitSelectList->m_Items[v35 + 1] == v85;
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
    v39 = v17 && v35 <= maxPortraitLimitCount;
    if ( v35 > maxPortraitLimitCount
      && (Instance = (UICommonButton_o *)ServantStatusListViewItem__get_IsMine(item, 0LL),
          ((unsigned __int8)Instance & 1) != 0) )
    {
      if ( !v38 )
        goto LABEL_146;
      v88.fields.r = v24;
      v88.fields.g = v25;
      v88.fields.b = v26;
      v88.fields.a = v27;
      UIRangeLabel__set_effectColor(v38, v88, 0LL);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v40 = (System_String_o *)StringLiteral_11831/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_CLOSE"*/;
    }
    else
    {
      v41 = v27;
      v42 = v26;
      v43 = v25;
      v44 = v24;
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
      v45 = System_Int32__ToString((int32_t)&v87, 0LL);
      v40 = System_String__Concat_61375396((System_String_o *)StringLiteral_11830/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_"*/, v45, 0LL);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v46 = LocalizationManager__Get(v40, 0LL);
    UIRangeLabel__Set(v38, v46, 0LL, 1, 0, 0LL);
    charaLevelSpriteList = this->fields.charaLevelSpriteList;
    if ( !charaLevelSpriteList )
      goto LABEL_146;
    if ( v87 >= charaLevelSpriteList->max_length )
LABEL_148:
      sub_1B6432C(Instance, v33);
    Instance = (UICommonButton_o *)charaLevelSpriteList->m_Items[v87];
    if ( !Instance )
      goto LABEL_146;
    v48 = &StringLiteral_17409/*"btn_bg_20"*/;
    if ( v36 )
      v48 = &StringLiteral_17410/*"btn_bg_21"*/;
    UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v48, 0LL);
    servantButtonList = this->fields.servantButtonList;
    if ( !servantButtonList )
      goto LABEL_146;
    if ( v87 >= servantButtonList->max_length )
      goto LABEL_148;
    Instance = servantButtonList->m_Items[v87];
    if ( (v36 & v39) != 0 )
    {
      if ( !Instance )
        goto LABEL_146;
      UICommonButton__SetColliderEnable(Instance, 0, v39 == 0 || isInit, 0LL);
      charaLevelButtonList = this->fields.charaLevelButtonList;
      if ( !charaLevelButtonList )
        goto LABEL_146;
      if ( v87 >= charaLevelButtonList->max_length )
        goto LABEL_148;
      Instance = charaLevelButtonList->m_Items[v87];
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
      if ( v87 >= v52->max_length )
        goto LABEL_148;
      Instance = v52->m_Items[v87];
      if ( !Instance )
        goto LABEL_146;
      UICommonButton__SetButtonEnable(Instance, v51, v39 == 0 || isInit, 0LL);
    }
    limitCountSealLabel = this->fields.limitCountSealLabel;
    if ( limitCountSealLabel )
    {
      if ( v87 >= limitCountSealLabel->max_length )
        goto LABEL_148;
      v54 = (UnityEngine_Object_o *)limitCountSealLabel->m_Items[v87];
    }
    else
    {
      v54 = 0LL;
    }
    limitCountSealObjList = this->fields.limitCountSealObjList;
    if ( limitCountSealObjList )
    {
      if ( v87 >= limitCountSealObjList->max_length )
        goto LABEL_148;
      v56 = (UnityEngine_Object_o *)limitCountSealObjList->m_Items[v87];
    }
    else
    {
      v56 = 0LL;
    }
    Instance = (UICommonButton_o *)ServantStatusListViewItem__get_SvtId(item, 0LL);
    if ( !portraitSelectList )
      goto LABEL_146;
    if ( v87 >= portraitSelectList->max_length )
      goto LABEL_148;
    if ( !v34 )
      goto LABEL_146;
    IsServantLimitCountSeal = ServantLimitImageMaster__IsServantLimitCountSeal(
                                v34,
                                (int32_t)Instance,
                                portraitSelectList->m_Items[v87 + 1] + 1,
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
        Instance = (UICommonButton_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8210/*"LIMIT_COUNT_SELECT_SEALED"*/, 0LL);
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
    v59 = (int)(v87 - 2) < 0;
    v35 = ++v87;
  }
  while ( v59 != __OFSUB__(v87, 3) );
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
      v63 = portraitSelectList->m_Items[v61 + 1] == v85;
    }
    v64 = this->fields.charaLevelTitleRangeLabelList;
    if ( !v64 )
      goto LABEL_146;
    if ( v61 >= v64->max_length )
      goto LABEL_148;
    v65 = v64->m_Items[v61];
    v66 = v17 && v61 < max_length;
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
      v67 = (int)Instance;
      Instance = (UICommonButton_o *)v84;
      if ( !v84 )
        goto LABEL_146;
      Entity = ServantCostumeMaster__GetEntity(v84, v67, portraitSelectList->m_Items[v61 + 1], 0LL);
      if ( Entity )
      {
        Instance = (UICommonButton_o *)ServantCostumeEntity__getShortName(Entity, 0LL);
        v70 = (System_String_o *)Instance;
      }
      else
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        if ( !byte_49F7D6A )
        {
          sub_1B640C8(&LocalizationManager_TypeInfo, v69);
          byte_49F7D6A = 1;
        }
        Instance = (UICommonButton_o *)LocalizationManager_TypeInfo;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          Instance = (UICommonButton_o *)LocalizationManager_TypeInfo;
        }
        v70 = *(System_String_o **)(*(_QWORD *)&Instance[1].fields.specifyHoverColor.fields.b + 32LL);
      }
      v71 = v27;
      v72 = v26;
      v73 = v25;
      v74 = v24;
      if ( (v63 & v66) != 0 )
      {
        v71 = a;
        v72 = b;
        v73 = g;
        v74 = r;
      }
      if ( !v65 )
        goto LABEL_146;
      UIRangeLabel__set_effectColor(v65, *(UnityEngine_Color_o *)&v74, 0LL);
      UIRangeLabel__Set(v65, v70, 0LL, 1, 0, 0LL);
    }
    v75 = this->fields.charaLevelSpriteList;
    if ( !v75 )
      goto LABEL_146;
    if ( v61 >= v75->max_length )
      goto LABEL_148;
    Instance = (UICommonButton_o *)v75->m_Items[v61];
    if ( !Instance )
      goto LABEL_146;
    v76 = &StringLiteral_17409/*"btn_bg_20"*/;
    if ( v63 )
      v76 = &StringLiteral_17410/*"btn_bg_21"*/;
    UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v76, 0LL);
    v77 = this->fields.servantButtonList;
    if ( !v77 )
      goto LABEL_146;
    if ( v61 >= v77->max_length )
      goto LABEL_148;
    Instance = v77->m_Items[v61];
    if ( (v63 & v66) != 0 )
    {
      if ( !Instance )
        goto LABEL_146;
      v78 = v66 == 0 || isInit;
      UICommonButton__SetColliderEnable(Instance, 0, v78, 0LL);
      v79 = this->fields.charaLevelButtonList;
      if ( !v79 )
        goto LABEL_146;
      if ( v61 >= v79->max_length )
        goto LABEL_148;
      Instance = v79->m_Items[v61];
      if ( !Instance )
        goto LABEL_146;
      UICommonButton__SetColliderEnable(Instance, 0, v78, 0LL);
    }
    else if ( v61 >= max_length )
    {
      if ( !Instance )
        goto LABEL_146;
      Instance = (UICommonButton_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      if ( !Instance )
        goto LABEL_146;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
      v83 = this->fields.charaLevelButtonList;
      if ( !v83 )
        goto LABEL_146;
      if ( v61 >= v83->max_length )
        goto LABEL_148;
      Instance = v83->m_Items[v61];
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
      v80 = v66 & ~v63;
      v81 = v66 == 0 || isInit;
      UICommonButton__SetButtonEnable(Instance, v80, v81, 0LL);
      v82 = this->fields.charaLevelButtonList;
      if ( !v82 )
        goto LABEL_146;
      if ( v61 >= v82->max_length )
        goto LABEL_148;
      Instance = v82->m_Items[v61];
      if ( !Instance )
        goto LABEL_146;
      UICommonButton__SetButtonEnable(Instance, v80, v81, 0LL);
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
  if ( (byte_49F9289 & 1) == 0 )
  {
    sub_1B640C8(&LocalizationManager_TypeInfo, item);
    sub_1B640C8(&string_TypeInfo, v5);
    this = (ServantStatusListViewItemDrawPortrait_o *)sub_1B640C8(&StringLiteral_11853/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_INFO_OWN_SETTING_STATUS_ICON"*/, v6);
    byte_49F9289 = 1;
  }
  if ( !item )
LABEL_24:
    sub_1B64324(this);
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
    Empty = LocalizationManager__Get((System_String_o *)StringLiteral_11853/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_INFO_OWN_SETTING_STATUS_ICON"*/, 0LL);
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