void __fastcall ServantStatusListViewItemDrawPortrait___ctor(
        ServantStatusListViewItemDrawPortrait_o *this,
        const MethodInfo *method)
{
  this->fields.MASK_LABEL_MAX_WIDTH = 550;
  this->fields.QUESTION_MARK_COLOR = (struct UnityEngine_Color_o)xmmword_BE1B00;
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
  __int64 v5; // x2
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
      sub_1BCB25C(this, method, v5);
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
      sub_1BCB254(this, method);
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
  __int64 v18; // x2
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

  v3 = item;
  v4 = this;
  if ( (byte_4B193FC & 1) == 0 )
  {
    sub_1BCAFF8(&AtlasManager_TypeInfo, item);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v5);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___, v6);
    sub_1BCAFF8(&ImageLimitCount_TypeInfo, v7);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_1BCAFF8(&OptionManager_TypeInfo, v9);
    sub_1BCAFF8(&ServantAssetLoadManager_TypeInfo, v10);
    this = (ServantStatusListViewItemDrawPortrait_o *)sub_1BCAFF8(
                                                        &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                                        v11);
    byte_4B193FC = 1;
  }
  if ( !v3
    || (ConvertOverwritePortraitLimitCount = ServantStatusListViewItem__get_ConvertOverwritePortraitLimitCount(v3, 0LL),
        maxPortraitLimitCount = v3->fields.maxPortraitLimitCount,
        portraitSelectList = v3->fields.portraitSelectList,
        v15 = ConvertOverwritePortraitLimitCount,
        (this = (ServantStatusListViewItemDrawPortrait_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL) )
  {
LABEL_96:
    sub_1BCB254(this, item);
  }
  v16 = 0LL;
  v17 = &portraitSelectList->m_Items[1];
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)this,
                        (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___);
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
      v26 = v17[v16];
      if ( v26 >= 11 )
        v27 = v17[v16];
      else
        v27 = v26 + 1;
      SvtId = ServantStatusListViewItem__get_SvtId(v3, 0LL);
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(SvtId, 0LL);
      item = *(ServantStatusListViewItem_o **)&v29.fields.fakeValue;
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
        this = (ServantStatusListViewItemDrawPortrait_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_96;
        v30 = DataManager__GetMasterData_object_(
                (DataManager_o *)this,
                (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
        this = (ServantStatusListViewItemDrawPortrait_o *)ServantStatusListViewItem__get_SvtId(v3, 0LL);
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
        v34 = ServantStatusListViewItem__get_SvtId(v3, 0LL);
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
        sub_1BCB25C(this, item, v18);
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
      this = (ServantStatusListViewItemDrawPortrait_o *)ServantStatusListViewItem__get_IsMine(v3, 0LL);
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
      this = (ServantStatusListViewItemDrawPortrait_o *)ServantStatusListViewItem__get_IsMine(v3, 0LL);
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
      this = (ServantStatusListViewItemDrawPortrait_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_96;
      v42 = DataManager__GetMasterData_object_(
              (DataManager_o *)this,
              (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
      this = (ServantStatusListViewItemDrawPortrait_o *)ServantStatusListViewItem__get_SvtId(v3, 0LL);
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
      v46 = ServantStatusListViewItem__get_SvtId(v3, 0LL);
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
  ServantStatusListViewItemDrawPortrait__SetupButton(v4, v3, 0, v22);
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

  if ( (byte_4B193FB & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMaster_ServantLimitImageMaster___, item);
    sub_1BCAFF8(&DataManager_TypeInfo, v7);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v8);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v9);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    sub_1BCAFF8(&StringLiteral_11820/*"SERVANT_STATUS_EXPLANATION_PORTRAIT3"*/, v11);
    sub_1BCAFF8(&StringLiteral_11819/*"SERVANT_STATUS_EXPLANATION_PORTRAIT2"*/, v12);
    sub_1BCAFF8(&StringLiteral_11818/*"SERVANT_STATUS_EXPLANATION_PORTRAIT"*/, v13);
    sub_1BCAFF8(&StringLiteral_11821/*"SERVANT_STATUS_EXPLANATION_PORTRAIT_LIMIT_COUNT_SEALED_MSG"*/, v14);
    byte_4B193FB = 1;
  }
  this->fields.dispMode = mode;
  if ( item && mode )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
    if ( item->fields.userSvtEntity )
    {
      explanationLabel = this->fields.explanationLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      IsServantLimitCountSeal = LocalizationManager__Get((System_String_o *)StringLiteral_11818/*"SERVANT_STATUS_EXPLANATION_PORTRAIT"*/, 0LL);
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
      IsServantLimitCountSeal = LocalizationManager__Get((System_String_o *)StringLiteral_11819/*"SERVANT_STATUS_EXPLANATION_PORTRAIT2"*/, 0LL);
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
      IsServantLimitCountSeal = LocalizationManager__Get((System_String_o *)StringLiteral_11820/*"SERVANT_STATUS_EXPLANATION_PORTRAIT3"*/, 0LL);
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
    IsServantLimitCountSeal = (System_String_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(
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
                                  (System_String_o *)StringLiteral_11821/*"SERVANT_STATUS_EXPLANATION_PORTRAIT_LIMIT_COUNT_SEALED_MSG"*/,
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
                                                      0,
                                                      0LL);
      v32 = System_String__Format(v30, LimitCountSealedServantName, 0LL);
      v33 = System_String__Concat_62450424(mText, v32, 0LL);
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
    sub_1BCB254(IsServantLimitCountSeal, v18);
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
  struct UICommonButton_array *servantButtonList; // x8
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

  if ( (byte_4B193FD & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ServantCostumeMaster___, item);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v6);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v7);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v8);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_1BCAFF8(&StringLiteral_8205/*"LIMIT_COUNT_SELECT_SEALED"*/, v10);
    sub_1BCAFF8(&StringLiteral_11835/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_"*/, v11);
    sub_1BCAFF8(&StringLiteral_17307/*"btn_bg_20"*/, v12);
    sub_1BCAFF8(&StringLiteral_11836/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_CLOSE"*/, v13);
    sub_1BCAFF8(&StringLiteral_1/*""*/, v14);
    sub_1BCAFF8(&StringLiteral_17308/*"btn_bg_21"*/, v15);
    byte_4B193FD = 1;
  }
  v86 = 0;
  Instance = (UICommonButton_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_146;
  Instance = (UICommonButton_o *)DataManager__GetMasterData_object_(
                                   (DataManager_o *)Instance,
                                   (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
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
  ConvertOverwritePortraitLimitCount = ServantStatusListViewItem__get_ConvertOverwritePortraitLimitCount(item, 0LL);
  maxPortraitLimitCount = item->fields.maxPortraitLimitCount;
  portraitSelectList = item->fields.portraitSelectList;
  v84 = ConvertOverwritePortraitLimitCount;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !byte_4B16DC5 )
  {
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v20);
    byte_4B16DC5 = 1;
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
  if ( !byte_4B16DC6 )
  {
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v20);
    v23 = LocalizationManager_TypeInfo;
    byte_4B16DC6 = 1;
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
  Instance = (UICommonButton_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_146:
    sub_1BCB254(Instance, v17);
  Instance = (UICommonButton_o *)DataManager__GetMasterData_object_(
                                   (DataManager_o *)Instance,
                                   (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  v35 = (ServantLimitImageMaster_o *)Instance;
  v36 = 0;
  v86 = 0;
  do
  {
    if ( v36 <= maxPortraitLimitCount )
    {
      if ( !portraitSelectList )
        goto LABEL_146;
      if ( v36 >= portraitSelectList->max_length )
        goto LABEL_148;
      v37 = portraitSelectList->m_Items[v36 + 1] == v84;
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
    v40 = v18 && v36 <= maxPortraitLimitCount;
    if ( v36 > maxPortraitLimitCount
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
      v41 = (System_String_o *)StringLiteral_11836/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_CLOSE"*/;
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
      v41 = System_String__Concat_62450424((System_String_o *)StringLiteral_11835/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_"*/, v46, 0LL);
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
      sub_1BCB25C(Instance, v17, v34);
    Instance = (UICommonButton_o *)charaLevelSpriteList->m_Items[v86];
    if ( !Instance )
      goto LABEL_146;
    v49 = &StringLiteral_17307/*"btn_bg_20"*/;
    if ( v37 )
      v49 = &StringLiteral_17308/*"btn_bg_21"*/;
    UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v49, 0LL);
    servantButtonList = this->fields.servantButtonList;
    if ( !servantButtonList )
      goto LABEL_146;
    if ( v86 >= servantButtonList->max_length )
      goto LABEL_148;
    Instance = servantButtonList->m_Items[v86];
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
    if ( !portraitSelectList )
      goto LABEL_146;
    if ( v86 >= portraitSelectList->max_length )
      goto LABEL_148;
    if ( !v35 )
      goto LABEL_146;
    IsServantLimitCountSeal = ServantLimitImageMaster__IsServantLimitCountSeal(
                                v35,
                                (int32_t)Instance,
                                portraitSelectList->m_Items[v86 + 1] + 1,
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
        Instance = (UICommonButton_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8205/*"LIMIT_COUNT_SELECT_SEALED"*/, 0LL);
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
    v60 = (int)(v86 - 2) < 0;
    v36 = ++v86;
  }
  while ( v60 != __OFSUB__(v86, 3) );
  v61 = this->fields.charaLevelButtonList;
  if ( !v61 )
    goto LABEL_146;
  v62 = 3;
  while ( v62 < (signed int)v61->max_length )
  {
    max_length = portraitSelectList->max_length;
    if ( v62 >= max_length )
    {
      v64 = 0;
    }
    else
    {
      if ( v62 >= (unsigned int)max_length )
        goto LABEL_148;
      v64 = portraitSelectList->m_Items[v62 + 1] == v84;
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
      if ( v62 >= portraitSelectList->max_length )
        goto LABEL_148;
      v17 = (unsigned int)Instance;
      Instance = (UICommonButton_o *)v83;
      if ( !v83 )
        goto LABEL_146;
      Entity = ServantCostumeMaster__GetEntity(v83, v17, portraitSelectList->m_Items[v62 + 1], 0LL);
      if ( Entity )
      {
        Instance = (UICommonButton_o *)ServantCostumeEntity__getShortName(Entity, 0LL);
        v69 = (System_String_o *)Instance;
      }
      else
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        if ( !byte_4B1794E )
        {
          sub_1BCAFF8(&LocalizationManager_TypeInfo, v17);
          byte_4B1794E = 1;
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
    v75 = &StringLiteral_17307/*"btn_bg_20"*/;
    if ( v64 )
      v75 = &StringLiteral_17308/*"btn_bg_21"*/;
    UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v75, 0LL);
    v76 = this->fields.servantButtonList;
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
  if ( (byte_4B193FE & 1) == 0 )
  {
    sub_1BCAFF8(&LocalizationManager_TypeInfo, item);
    sub_1BCAFF8(&string_TypeInfo, v5);
    this = (ServantStatusListViewItemDrawPortrait_o *)sub_1BCAFF8(&StringLiteral_11859/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_INFO_OWN_SETTING_STATUS_ICON"*/, v6);
    byte_4B193FE = 1;
  }
  if ( !item )
LABEL_24:
    sub_1BCB254(this, item);
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
    Empty = LocalizationManager__Get((System_String_o *)StringLiteral_11859/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_INFO_OWN_SETTING_STATUS_ICON"*/, 0LL);
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