// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusListViewItemDrawPortrait___ctor(
        ServantStatusListViewItemDrawPortrait_o *this,
        const MethodInfo *method)
{
  int v2; // s3
  float v3; // s4
  float v4; // s5
  float v5; // s6
  float v6; // s0
  float v8; // s1
  float v9; // s2
  struct UnityEngine_Color_o v10; // [xsp+0h] [xbp-20h] BYREF

  v6 = 0.5;
  *(&this->fields.MASK_LABEL_MAX_WIDTH + 1) = 550;
  v8 = 0.5;
  v9 = 0.5;
  *(_QWORD *)&v10.fields.r = 0LL;
  UnityEngine_Color___ctor_40633184(*(UnityEngine_Color_o *)(&v2 - 3), v3, v4, v5, (const MethodInfo *)&v10);
  this->fields.QUESTION_MARK_COLOR = v10;
  ServantStatusListViewItemDraw___ctor((ServantStatusListViewItemDraw_o *)this, 0LL);
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
  float v8; // s0
  double v9; // d0
  struct UISprite_o *baseSprite; // x9
  int32_t mHeight; // w11
  int max_length; // kr00_4
  int v13; // w8
  float v14; // s0
  float v15; // s1
  float v16; // s2
  int v17; // w8
  float v18; // s8
  __int64 v19; // x0
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4

  charaLevelSpriteList = this->fields.charaLevelSpriteList;
  if ( !charaLevelSpriteList )
    goto LABEL_27;
  v3 = this;
  if ( (int)charaLevelSpriteList->max_length > 3 )
  {
    this = (ServantStatusListViewItemDrawPortrait_o *)charaLevelSpriteList->m_Items[0];
    if ( !this )
      goto LABEL_27;
    this = (ServantStatusListViewItemDrawPortrait_o *)UnityEngine_Component__get_transform(
                                                        (UnityEngine_Component_o *)this,
                                                        0LL);
    if ( !this )
      goto LABEL_27;
    *(UnityEngine_Vector3_o *)(&v5 - 1) = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
    v6 = v3->fields.charaLevelSpriteList;
    if ( !v6 )
      goto LABEL_27;
    if ( v6->max_length <= 3 )
    {
      v19 = sub_B2C460(this);
      sub_B2C400(v19, 0LL);
    }
    this = (ServantStatusListViewItemDrawPortrait_o *)v6->m_Items[3];
    if ( !this )
      goto LABEL_27;
    v7 = v5;
    this = (ServantStatusListViewItemDrawPortrait_o *)UnityEngine_Component__get_transform(
                                                        (UnityEngine_Component_o *)this,
                                                        0LL);
    if ( !this )
      goto LABEL_27;
    localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
    v8 = v7 - localPosition.fields.y;
    charaLevelSpriteList = v3->fields.charaLevelSpriteList;
    v9 = (float)(v7 - localPosition.fields.y) == INFINITY ? -v8 : v8;
    buttonPitch = (int)v9;
    v3->fields.buttonPitch = (int)v9;
    if ( !charaLevelSpriteList )
LABEL_27:
      sub_B2C434(this, method);
  }
  else
  {
    buttonPitch = this->fields.buttonPitch;
  }
  baseSprite = v3->fields.baseSprite;
  if ( !baseSprite )
    goto LABEL_27;
  mHeight = baseSprite->fields.mHeight;
  max_length = charaLevelSpriteList->max_length;
  this = (ServantStatusListViewItemDrawPortrait_o *)v3->fields.titleSprite;
  v13 = max_length / 3 - 1;
  if ( max_length < 9 )
    v13 = 1;
  v3->fields.baseSize.fields.x = (float)baseSprite->fields.mWidth;
  v3->fields.baseSize.fields.y = (float)(mHeight - v13 * buttonPitch);
  v3->fields.baseSize.fields.z = 0.0;
  if ( !this )
    goto LABEL_27;
  this = (ServantStatusListViewItemDrawPortrait_o *)UnityEngine_Component__get_transform(
                                                      (UnityEngine_Component_o *)this,
                                                      0LL);
  if ( !this )
    goto LABEL_27;
  *(UnityEngine_Vector3_o *)&v14 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  this = (ServantStatusListViewItemDrawPortrait_o *)v3->fields.levelButtonBase;
  v17 = buttonPitch >= 0 ? buttonPitch : buttonPitch + 1;
  v18 = (float)(v17 >> 1);
  v3->fields.titleBasePosition.fields.x = v14;
  v3->fields.titleBasePosition.fields.y = v15 - v18;
  v3->fields.titleBasePosition.fields.z = v16;
  if ( !this )
    goto LABEL_27;
  this = (ServantStatusListViewItemDrawPortrait_o *)UnityEngine_GameObject__get_transform(
                                                      (UnityEngine_GameObject_o *)this,
                                                      0LL);
  if ( !this )
    goto LABEL_27;
  v21 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  this = (ServantStatusListViewItemDrawPortrait_o *)v3->fields.explanationLabel;
  v3->fields.levelButtonBasePosition.fields.x = v21.fields.x;
  v3->fields.levelButtonBasePosition.fields.y = v21.fields.y - v18;
  v3->fields.levelButtonBasePosition.fields.z = v21.fields.z;
  if ( !this )
    goto LABEL_27;
  this = (ServantStatusListViewItemDrawPortrait_o *)UnityEngine_Component__get_transform(
                                                      (UnityEngine_Component_o *)this,
                                                      0LL);
  if ( !this )
    goto LABEL_27;
  v22 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  v3->fields.explanationBasePosition.fields.x = v22.fields.x;
  v3->fields.explanationBasePosition.fields.y = v22.fields.y + v18;
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
  struct System_Int32_array *portraitSelectList; // x26
  unsigned __int64 v15; // x21
  int32_t *v16; // x28
  struct UITexture_array *v17; // x8
  struct UISprite_array *v18; // x8
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
  ServantLimitImageMaster_o *v30; // x23
  struct UITexture_array *servantTextureList; // x8
  UITexture_o *v32; // x23
  int32_t v33; // w25
  int32_t v34; // w24
  int32_t LimitCountByImageLimitCostumeIn; // w25
  struct UISprite_array *servantMaskSpriteList; // x8
  struct UITexture_array *v38; // x8
  __int64 v39; // x24
  unsigned __int64 v40; // x28
  ServantLimitImageMaster_o *v41; // x21
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
  __int64 v54; // x0
  ServantStatusListViewItemDrawPortrait_o *MasterData_WarQuestSelectionMaster; // [xsp+0h] [xbp-60h]
  int32_t v56; // [xsp+Ch] [xbp-54h]

  v3 = item;
  v4 = this;
  if ( (byte_418A7D4 & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, item);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v5);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___, v6);
    sub_B2C35C(&ImageLimitCount_TypeInfo, v7);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_B2C35C(&OptionManager_TypeInfo, v9);
    sub_B2C35C(&ServantAssetLoadManager_TypeInfo, v10);
    this = (ServantStatusListViewItemDrawPortrait_o *)sub_B2C35C(
                                                        &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                                        v11);
    byte_418A7D4 = 1;
  }
  if ( !v3
    || (ConvertOverwritePortraitLimitCount = ServantStatusListViewItem__get_ConvertOverwritePortraitLimitCount(v3, 0LL),
        maxPortraitLimitCount = v3->fields.maxPortraitLimitCount,
        portraitSelectList = v3->fields.portraitSelectList,
        v56 = ConvertOverwritePortraitLimitCount,
        (this = (ServantStatusListViewItemDrawPortrait_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL) )
  {
LABEL_104:
    sub_B2C434(this, item);
  }
  v15 = 0LL;
  v16 = &portraitSelectList->m_Items[1];
  MasterData_WarQuestSelectionMaster = (ServantStatusListViewItemDrawPortrait_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                    (DataManager_o *)this,
                                                                                    (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___);
  do
  {
    if ( (__int64)v15 > maxPortraitLimitCount )
      goto LABEL_14;
    this = (ServantStatusListViewItemDrawPortrait_o *)ServantStatusListViewItem__get_IsMine(v3, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
      goto LABEL_109;
    if ( !portraitSelectList )
      goto LABEL_104;
    if ( v15 >= portraitSelectList->max_length )
      goto LABEL_106;
    if ( v16[v15] <= v56 )
    {
LABEL_109:
      if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !OptionManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      }
      if ( OptionManager__GetSpoilerSetting(0LL) )
        goto LABEL_49;
      this = (ServantStatusListViewItemDrawPortrait_o *)ServantStatusListViewItem__get_IsMine(v3, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
        goto LABEL_49;
      if ( !portraitSelectList )
        goto LABEL_104;
      if ( v15 >= portraitSelectList->max_length )
      {
LABEL_106:
        v54 = sub_B2C460(this);
        sub_B2C400(v54, 0LL);
      }
      v26 = v16[v15];
      if ( v26 >= 11 )
        v27 = v16[v15];
      else
        v27 = v26 + 1;
      SvtId = ServantStatusListViewItem__get_SvtId(v3, 0LL);
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(SvtId, 0LL);
      item = *(ServantStatusListViewItem_o **)&v29.fields.fakeValue;
      this = MasterData_WarQuestSelectionMaster;
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_104;
      this = (ServantStatusListViewItemDrawPortrait_o *)ServantLimitSpoilerProtectionMaster__IsSpoilerLimitCount(
                                                          (ServantLimitSpoilerProtectionMaster_o *)MasterData_WarQuestSelectionMaster,
                                                          v29,
                                                          v27,
                                                          0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
LABEL_49:
        this = (ServantStatusListViewItemDrawPortrait_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_104;
        v30 = (ServantLimitImageMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                             (DataManager_o *)this,
                                             (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
        this = (ServantStatusListViewItemDrawPortrait_o *)ServantStatusListViewItem__get_SvtId(v3, 0LL);
        if ( !portraitSelectList )
          goto LABEL_104;
        if ( v15 >= portraitSelectList->max_length )
          goto LABEL_106;
        if ( !v30 )
          goto LABEL_104;
        this = (ServantStatusListViewItemDrawPortrait_o *)ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                                            v30,
                                                            (int32_t)this,
                                                            v16[v15],
                                                            0LL);
        servantTextureList = v4->fields.servantTextureList;
        if ( !servantTextureList )
          goto LABEL_104;
        if ( v15 >= servantTextureList->max_length )
          goto LABEL_106;
        v32 = servantTextureList->m_Items[v15];
        v33 = (int)this;
        v34 = ServantStatusListViewItem__get_SvtId(v3, 0LL);
        if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ImageLimitCount_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
        }
        LimitCountByImageLimitCostumeIn = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(v33, 0LL);
        if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
        }
        this = (ServantStatusListViewItemDrawPortrait_o *)ServantAssetLoadManager__loadStatusFace(
                                                            v32,
                                                            v34,
                                                            LimitCountByImageLimitCostumeIn,
                                                            0LL);
        servantMaskSpriteList = v4->fields.servantMaskSpriteList;
        if ( !servantMaskSpriteList )
          goto LABEL_104;
        if ( v15 >= servantMaskSpriteList->max_length )
          goto LABEL_106;
        this = (ServantStatusListViewItemDrawPortrait_o *)servantMaskSpriteList->m_Items[v15];
        if ( !this )
          goto LABEL_104;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0LL);
        continue;
      }
      v17 = v4->fields.servantTextureList;
      if ( !v17 )
        goto LABEL_104;
      if ( v15 >= v17->max_length )
        goto LABEL_106;
      this = (ServantStatusListViewItemDrawPortrait_o *)v17->m_Items[v15];
      if ( !this )
        goto LABEL_104;
      this = (ServantStatusListViewItemDrawPortrait_o *)(*(__int64 (__fastcall **)(ServantStatusListViewItemDrawPortrait_o *, _QWORD, _QWORD))&this->klass[1]._2.initializationExceptionGCHandle)(
                                                          this,
                                                          0LL,
                                                          *(_QWORD *)&this->klass[1]._2.cctor_finished);
      v18 = v4->fields.servantMaskSpriteList;
      if ( !v18 )
        goto LABEL_104;
      if ( v15 >= v18->max_length )
        goto LABEL_106;
      this = (ServantStatusListViewItemDrawPortrait_o *)v18->m_Items[v15];
      if ( !this )
        goto LABEL_104;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 1, 0LL);
    }
    else
    {
LABEL_14:
      this = (ServantStatusListViewItemDrawPortrait_o *)ServantStatusListViewItem__get_IsMine(v3, 0LL);
      v19 = v4->fields.servantTextureList;
      if ( !v19 )
        goto LABEL_104;
      if ( v15 >= v19->max_length )
        goto LABEL_106;
      v20 = (char)this;
      this = (ServantStatusListViewItemDrawPortrait_o *)v19->m_Items[v15];
      if ( !this )
        goto LABEL_104;
      this = (ServantStatusListViewItemDrawPortrait_o *)(*(__int64 (__fastcall **)(ServantStatusListViewItemDrawPortrait_o *, _QWORD, _QWORD))&this->klass[1]._2.initializationExceptionGCHandle)(
                                                          this,
                                                          0LL,
                                                          *(_QWORD *)&this->klass[1]._2.cctor_finished);
      v21 = v4->fields.servantMaskSpriteList;
      if ( !v21 )
        goto LABEL_104;
      if ( v15 >= v21->max_length )
        goto LABEL_106;
      this = (ServantStatusListViewItemDrawPortrait_o *)v21->m_Items[v15];
      if ( !this )
        goto LABEL_104;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 1, 0LL);
      if ( (v20 & 1) != 0 )
        continue;
    }
    v23 = v4->fields.servantMaskSpriteList;
    if ( !v23 )
      goto LABEL_104;
    if ( v15 >= v23->max_length )
      goto LABEL_106;
    v24 = v23->m_Items[v15];
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    this = (ServantStatusListViewItemDrawPortrait_o *)AtlasManager__SetNotOpenFace(v24, 0LL);
    v25 = v4->fields.servantMaskSpriteList;
    if ( !v25 )
      goto LABEL_104;
    if ( v15 >= v25->max_length )
      goto LABEL_106;
    this = (ServantStatusListViewItemDrawPortrait_o *)v25->m_Items[v15];
    if ( !this )
      goto LABEL_104;
    UIWidget__set_color((UIWidget_o *)this, v4->fields.QUESTION_MARK_COLOR, 0LL);
  }
  while ( v15++ < 2 );
  v38 = v4->fields.servantTextureList;
  if ( !v38 )
    goto LABEL_104;
  v39 = 0LL;
  while ( 1 )
  {
    v40 = v39 + 3;
    if ( v39 + 3 >= (int)v38->max_length )
      break;
    if ( !portraitSelectList )
      goto LABEL_104;
    if ( (__int64)v40 >= (int)portraitSelectList->max_length )
    {
      this = (ServantStatusListViewItemDrawPortrait_o *)ServantStatusListViewItem__get_IsMine(v3, 0LL);
      v48 = v4->fields.servantTextureList;
      if ( !v48 )
        goto LABEL_104;
      if ( v40 >= v48->max_length )
        goto LABEL_106;
      v49 = (char)this;
      this = (ServantStatusListViewItemDrawPortrait_o *)v48->m_Items[v39 + 3];
      if ( !this )
        goto LABEL_104;
      this = (ServantStatusListViewItemDrawPortrait_o *)(*(__int64 (__fastcall **)(ServantStatusListViewItemDrawPortrait_o *, _QWORD, _QWORD))&this->klass[1]._2.initializationExceptionGCHandle)(
                                                          this,
                                                          0LL,
                                                          *(_QWORD *)&this->klass[1]._2.cctor_finished);
      v50 = v4->fields.servantMaskSpriteList;
      if ( !v50 )
        goto LABEL_104;
      if ( v40 >= v50->max_length )
        goto LABEL_106;
      this = (ServantStatusListViewItemDrawPortrait_o *)v50->m_Items[v39 + 3];
      if ( !this )
        goto LABEL_104;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 1, 0LL);
      if ( (v49 & 1) == 0 )
      {
        v51 = v4->fields.servantMaskSpriteList;
        if ( !v51 )
          goto LABEL_104;
        if ( v40 >= v51->max_length )
          goto LABEL_106;
        v52 = v51->m_Items[v39 + 3];
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        this = (ServantStatusListViewItemDrawPortrait_o *)AtlasManager__SetNotOpenFace(v52, 0LL);
        v53 = v4->fields.servantMaskSpriteList;
        if ( !v53 )
          goto LABEL_104;
        if ( v40 >= v53->max_length )
          goto LABEL_106;
        this = (ServantStatusListViewItemDrawPortrait_o *)v53->m_Items[v39 + 3];
        if ( !this )
          goto LABEL_104;
        UIWidget__set_color((UIWidget_o *)this, v4->fields.QUESTION_MARK_COLOR, 0LL);
      }
    }
    else
    {
      this = (ServantStatusListViewItemDrawPortrait_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_104;
      v41 = (ServantLimitImageMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)this,
                                           (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
      this = (ServantStatusListViewItemDrawPortrait_o *)ServantStatusListViewItem__get_SvtId(v3, 0LL);
      if ( v40 >= portraitSelectList->max_length )
        goto LABEL_106;
      if ( !v41 )
        goto LABEL_104;
      this = (ServantStatusListViewItemDrawPortrait_o *)ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                                          v41,
                                                          (int32_t)this,
                                                          portraitSelectList->m_Items[v39 + 4],
                                                          0LL);
      v42 = v4->fields.servantTextureList;
      if ( !v42 )
        goto LABEL_104;
      if ( v40 >= v42->max_length )
        goto LABEL_106;
      v43 = v42->m_Items[v39 + 3];
      v44 = (int)this;
      v45 = ServantStatusListViewItem__get_SvtId(v3, 0LL);
      if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ImageLimitCount_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      }
      v46 = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(v44, 0LL);
      if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      }
      this = (ServantStatusListViewItemDrawPortrait_o *)ServantAssetLoadManager__loadStatusFace(v43, v45, v46, 0LL);
      v47 = v4->fields.servantMaskSpriteList;
      if ( !v47 )
        goto LABEL_104;
      if ( v40 >= v47->max_length )
        goto LABEL_106;
      this = (ServantStatusListViewItemDrawPortrait_o *)v47->m_Items[v39 + 3];
      if ( !this )
        goto LABEL_104;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0LL);
    }
    v38 = v4->fields.servantTextureList;
    ++v39;
    if ( !v38 )
      goto LABEL_104;
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
  ServantLimitImageMaster_o *Master_WarQuestSelectionMaster; // x21
  UILabel_o *explanationLabel; // x22
  System_String_o *IsServantLimitCountSeal; // x0
  __int64 v18; // x1
  struct UserServantEntity_o *userSvtEntity; // x8
  __int64 v20; // x22
  __int64 v21; // x23
  UILabel_o *v22; // x22
  struct UserServantCollectionEntity_o *userSvtCollectionEntity; // x8
  UILabel_o *v24; // x22
  struct ServantLeaderInfo_o *servantLeaderInfo; // x8
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
  double v46; // d0
  double v47; // d0
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

  if ( (byte_418A7D3 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_ServantLimitImageMaster___, item);
    sub_B2C35C(&DataManager_TypeInfo, v7);
    sub_B2C35C(&LocalizationManager_TypeInfo, v8);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v9);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    sub_B2C35C(&StringLiteral_11974/*"SERVANT_STATUS_EXPLANATION_PORTRAIT3"*/, v11);
    sub_B2C35C(&StringLiteral_11973/*"SERVANT_STATUS_EXPLANATION_PORTRAIT2"*/, v12);
    sub_B2C35C(&StringLiteral_11972/*"SERVANT_STATUS_EXPLANATION_PORTRAIT"*/, v13);
    sub_B2C35C(&StringLiteral_11975/*"SERVANT_STATUS_EXPLANATION_PORTRAIT_LIMIT_COUNT_SEALED_MSG"*/, v14);
    byte_418A7D3 = 1;
  }
  ServantStatusListViewItemDraw__SetItem((ServantStatusListViewItemDraw_o *)this, item, mode, 0LL);
  if ( item && mode )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (ServantLimitImageMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
    if ( item->fields.userSvtEntity )
    {
      explanationLabel = this->fields.explanationLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      IsServantLimitCountSeal = LocalizationManager__Get((System_String_o *)StringLiteral_11972/*"SERVANT_STATUS_EXPLANATION_PORTRAIT"*/, 0LL);
      if ( !explanationLabel )
        goto LABEL_81;
      UILabel__set_text(explanationLabel, IsServantLimitCountSeal, 0LL);
      userSvtEntity = item->fields.userSvtEntity;
      if ( !userSvtEntity )
        goto LABEL_81;
      v21 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
      v20 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
    }
    else if ( item->fields.userSvtCollectionEntity )
    {
      v22 = this->fields.explanationLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      IsServantLimitCountSeal = LocalizationManager__Get((System_String_o *)StringLiteral_11973/*"SERVANT_STATUS_EXPLANATION_PORTRAIT2"*/, 0LL);
      if ( !v22 )
        goto LABEL_81;
      UILabel__set_text(v22, IsServantLimitCountSeal, 0LL);
      userSvtCollectionEntity = item->fields.userSvtCollectionEntity;
      if ( !userSvtCollectionEntity )
        goto LABEL_81;
      v21 = *(_QWORD *)&userSvtCollectionEntity->fields.svtId.fields.currentCryptoKey;
      v20 = *(_QWORD *)&userSvtCollectionEntity->fields.svtId.fields.fakeValue;
    }
    else
    {
      v24 = this->fields.explanationLabel;
      if ( !item->fields.servantLeaderInfo )
      {
        if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        IsServantLimitCountSeal = LocalizationManager__Get((System_String_o *)StringLiteral_11974/*"SERVANT_STATUS_EXPLANATION_PORTRAIT3"*/, 0LL);
        if ( !v24 )
          goto LABEL_81;
        UILabel__set_text(v24, IsServantLimitCountSeal, 0LL);
        goto LABEL_43;
      }
      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      IsServantLimitCountSeal = LocalizationManager__Get((System_String_o *)StringLiteral_11974/*"SERVANT_STATUS_EXPLANATION_PORTRAIT3"*/, 0LL);
      if ( !v24 )
        goto LABEL_81;
      UILabel__set_text(v24, IsServantLimitCountSeal, 0LL);
      servantLeaderInfo = item->fields.servantLeaderInfo;
      if ( !servantLeaderInfo )
        goto LABEL_81;
      v21 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.currentCryptoKey;
      v20 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.fakeValue;
    }
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v61.fields.currentCryptoKey = v21;
    *(_QWORD *)&v61.fields.fakeValue = v20;
    IsServantLimitCountSeal = (System_String_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                                   v61,
                                                   0LL);
    v26 = (int)IsServantLimitCountSeal;
    if ( !(_DWORD)IsServantLimitCountSeal )
      goto LABEL_44;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_81;
    IsServantLimitCountSeal = (System_String_o *)ServantLimitImageMaster__IsServantLimitCountSeal(
                                                   Master_WarQuestSelectionMaster,
                                                   (int32_t)IsServantLimitCountSeal,
                                                   3,
                                                   0LL);
    if ( ((unsigned __int8)IsServantLimitCountSeal & 1) != 0 )
    {
      IsServantLimitCountSeal = ServantLimitImageMaster__GetServantStatusExplanationText(
                                  Master_WarQuestSelectionMaster,
                                  (System_String_o *)StringLiteral_11975/*"SERVANT_STATUS_EXPLANATION_PORTRAIT_LIMIT_COUNT_SEALED_MSG"*/,
                                  v26,
                                  0LL);
      v27 = this->fields.explanationLabel;
      if ( !v27 )
        goto LABEL_81;
      mText = v27->fields.mText;
      v29 = IsServantLimitCountSeal;
      LimitCountSealedServantName = (Il2CppObject *)ServantLimitImageMaster__GetLimitCountSealedServantName(
                                                      Master_WarQuestSelectionMaster,
                                                      v26,
                                                      3,
                                                      0LL);
      v31 = System_String__Format(v29, LimitCountSealedServantName, 0LL);
      v32 = System_String__Concat_44305532(mText, v31, 0LL);
      UILabel__set_text(v27, v32, 0LL);
      v26 = 1;
      goto LABEL_44;
    }
LABEL_43:
    v26 = 0;
LABEL_44:
    portraitSelectList = item->fields.portraitSelectList;
    if ( !portraitSelectList )
      goto LABEL_81;
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
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v45 = y + (float)v44;
    if ( UnityEngine_Object__op_Inequality(baseCollider, 0LL, 0LL) )
    {
      IsServantLimitCountSeal = (System_String_o *)this->fields.baseCollider;
      if ( !IsServantLimitCountSeal )
        goto LABEL_81;
      v62.fields.x = x;
      v62.fields.y = v45;
      v62.fields.z = z;
      UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)IsServantLimitCountSeal, v62, 0LL);
    }
    IsServantLimitCountSeal = (System_String_o *)this->fields.baseSprite;
    if ( IsServantLimitCountSeal )
    {
      v46 = x;
      if ( x == INFINITY )
        v46 = -x;
      UIWidget__set_width((UIWidget_o *)IsServantLimitCountSeal, (int)v46, 0LL);
      IsServantLimitCountSeal = (System_String_o *)this->fields.baseSprite;
      if ( IsServantLimitCountSeal )
      {
        v47 = v45;
        if ( v45 == INFINITY )
          v47 = -INFINITY;
        UIWidget__set_height((UIWidget_o *)IsServantLimitCountSeal, (int)v47, 0LL);
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
LABEL_81:
    sub_B2C434(IsServantLimitCountSeal, v18);
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
  _BOOL4 v18; // w23
  int32_t ConvertOverwritePortraitLimitCount; // w0
  __int64 v20; // x1
  int32_t maxPortraitLimitCount; // w22
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
  ServantLimitImageMaster_o *v34; // x25
  int v35; // w8
  int v36; // w9
  _BOOL4 v37; // w19
  struct UIRangeLabel_array *charaLevelTitleRangeLabelList; // x10
  UIRangeLabel_o *v39; // x26
  int v40; // w20
  System_String_o *v41; // x0
  int v42; // w8
  float v43; // s3
  float v44; // s2
  float v45; // s1
  float v46; // s0
  System_String_o *v47; // x0
  System_String_o *v48; // x27
  System_String_o *v49; // x0
  struct UISprite_array *charaLevelSpriteList; // x8
  __int64 *v51; // x8
  struct UICommonButton_array *servantButtonList; // x8
  bool v53; // w19
  struct UICommonButton_array *charaLevelButtonList; // x8
  char v55; // w26
  bool v56; // w19
  struct UICommonButton_array *v57; // x8
  struct UILabel_array *limitCountSealLabel; // x8
  UnityEngine_Object_o *v59; // x26
  struct UnityEngine_GameObject_array *limitCountSealObjList; // x8
  UnityEngine_Object_o *v61; // x27
  System_String_o *v62; // x1
  bool v63; // nf
  struct UICommonButton_array *v64; // x8
  __int64 v65; // x22
  il2cpp_array_size_t v66; // w27
  int max_length; // w19
  _BOOL4 v68; // w20
  struct UIRangeLabel_array *v69; // x9
  UIRangeLabel_o *v70; // x25
  int v71; // w23
  ServantCostumeEntity_o *Entity; // x0
  System_String_o *v73; // x26
  int v74; // w8
  float v75; // s3
  float v76; // s2
  float v77; // s1
  float v78; // s0
  struct UISprite_array *v79; // x8
  __int64 *v80; // x8
  struct UICommonButton_array *v81; // x8
  bool v82; // w19
  struct UICommonButton_array *v83; // x8
  char v84; // w25
  bool v85; // w19
  struct UICommonButton_array *v86; // x8
  struct UICommonButton_array *v87; // x8
  __int64 v88; // x0
  ServantCostumeMaster_o *v89; // [xsp+8h] [xbp-B8h]
  bool v90; // [xsp+14h] [xbp-ACh]
  int32_t v91; // [xsp+18h] [xbp-A8h]
  struct System_Int32_array *portraitSelectList; // [xsp+20h] [xbp-A0h]
  unsigned int v94; // [xsp+2Ch] [xbp-94h] BYREF
  UnityEngine_Color_o v95; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_418A7D5 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantCostumeMaster___, item);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v6);
    sub_B2C35C(&LocalizationManager_TypeInfo, v7);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v8);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_B2C35C(&StringLiteral_8389/*"LIMIT_COUNT_SELECT_SEALED"*/, v10);
    sub_B2C35C(&StringLiteral_11988/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_"*/, v11);
    sub_B2C35C(&StringLiteral_16965/*"btn_bg_20"*/, v12);
    sub_B2C35C(&StringLiteral_11989/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_CLOSE"*/, v13);
    sub_B2C35C(&StringLiteral_1/*""*/, v14);
    sub_B2C35C(&StringLiteral_16966/*"btn_bg_21"*/, v15);
    byte_418A7D5 = 1;
  }
  v94 = 0;
  Instance = (UICommonButton_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_182;
  Instance = (UICommonButton_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                   (DataManager_o *)Instance,
                                   (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
  if ( !item )
    goto LABEL_182;
  v89 = (ServantCostumeMaster_o *)Instance;
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
  v91 = ConvertOverwritePortraitLimitCount;
  portraitSelectList = item->fields.portraitSelectList;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  if ( !byte_4184963 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, v20);
    byte_4184963 = 1;
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
  if ( !byte_4184964 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, v20);
    v22 = LocalizationManager_TypeInfo;
    byte_4184964 = 1;
  }
  if ( (BYTE3(v22->vtable._0_Equals.methodPtr) & 4) != 0 )
  {
    v28 = portraitSelectList;
    if ( !v22->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v22);
      v22 = LocalizationManager_TypeInfo;
    }
  }
  else
  {
    v28 = portraitSelectList;
  }
  v29 = (float *)v22->static_fields;
  v30 = v29[24];
  v31 = v29[25];
  v32 = v29[26];
  v33 = v29[27];
  Instance = (UICommonButton_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_182:
    sub_B2C434(Instance, v17);
  Instance = (UICommonButton_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                   (DataManager_o *)Instance,
                                   (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  v94 = 0;
  v34 = (ServantLimitImageMaster_o *)Instance;
  v35 = 0;
  do
  {
    if ( v35 <= maxPortraitLimitCount )
    {
      if ( !v28 )
        goto LABEL_182;
      if ( v35 >= v28->max_length )
        goto LABEL_184;
      v37 = v28->m_Items[v35 + 1] == v91;
      v36 = 1;
    }
    else
    {
      v36 = 0;
      v37 = 0;
    }
    charaLevelTitleRangeLabelList = this->fields.charaLevelTitleRangeLabelList;
    if ( !charaLevelTitleRangeLabelList )
      goto LABEL_182;
    if ( v35 >= charaLevelTitleRangeLabelList->max_length )
    {
LABEL_184:
      v88 = sub_B2C460(Instance);
      sub_B2C400(v88, 0LL);
    }
    v39 = charaLevelTitleRangeLabelList->m_Items[v35];
    v40 = v36 & v18;
    if ( v36
      || (Instance = (UICommonButton_o *)ServantStatusListViewItem__get_IsMine(item, 0LL),
          ((unsigned __int8)Instance & 1) == 0) )
    {
      if ( !v39 )
        goto LABEL_182;
      v42 = v37 & v40;
      if ( (v37 & v40) != 0 )
        v43 = v33;
      else
        v43 = v27;
      if ( v42 )
        v44 = v32;
      else
        v44 = v26;
      if ( v42 )
        v45 = v31;
      else
        v45 = v25;
      if ( v42 )
        v46 = v30;
      else
        v46 = v24;
      UIRangeLabel__set_effectColor(v39, *(UnityEngine_Color_o *)(&v43 - 3), 0LL);
      v47 = System_Int32__ToString((int32_t)&v94, 0LL);
      v48 = System_String__Concat_44305532((System_String_o *)StringLiteral_11988/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_"*/, v47, 0LL);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v41 = v48;
    }
    else
    {
      if ( !v39 )
        goto LABEL_182;
      v95.fields.r = v24;
      v95.fields.g = v25;
      v95.fields.b = v26;
      v95.fields.a = v27;
      UIRangeLabel__set_effectColor(v39, v95, 0LL);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v41 = (System_String_o *)StringLiteral_11989/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_CLOSE"*/;
    }
    v49 = LocalizationManager__Get(v41, 0LL);
    UIRangeLabel__Set(v39, v49, 0LL, 1, 0, 0LL);
    charaLevelSpriteList = this->fields.charaLevelSpriteList;
    if ( !charaLevelSpriteList )
      goto LABEL_182;
    if ( v94 >= charaLevelSpriteList->max_length )
      goto LABEL_184;
    Instance = (UICommonButton_o *)charaLevelSpriteList->m_Items[v94];
    if ( !Instance )
      goto LABEL_182;
    v51 = &StringLiteral_16965/*"btn_bg_20"*/;
    if ( v37 )
      v51 = &StringLiteral_16966/*"btn_bg_21"*/;
    UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v51, 0LL);
    servantButtonList = this->fields.servantButtonList;
    if ( !servantButtonList )
      goto LABEL_182;
    if ( v94 >= servantButtonList->max_length )
      goto LABEL_184;
    Instance = servantButtonList->m_Items[v94];
    if ( (v37 & v40) != 0 )
    {
      if ( !Instance )
        goto LABEL_182;
      v53 = v40 == 0 || isInit;
      UICommonButton__SetColliderEnable(Instance, 0, v40 == 0 || isInit, 0LL);
      charaLevelButtonList = this->fields.charaLevelButtonList;
      if ( !charaLevelButtonList )
        goto LABEL_182;
      v28 = portraitSelectList;
      if ( v94 >= charaLevelButtonList->max_length )
        goto LABEL_184;
      Instance = charaLevelButtonList->m_Items[v94];
      if ( !Instance )
        goto LABEL_182;
      UICommonButton__SetColliderEnable(Instance, 0, v53, 0LL);
    }
    else
    {
      if ( !Instance )
        goto LABEL_182;
      v55 = v40 & ~v37;
      v56 = v40 == 0 || isInit;
      UICommonButton__SetButtonEnable(Instance, v55, v40 == 0 || isInit, 0LL);
      v57 = this->fields.charaLevelButtonList;
      if ( !v57 )
        goto LABEL_182;
      v28 = portraitSelectList;
      if ( v94 >= v57->max_length )
        goto LABEL_184;
      Instance = v57->m_Items[v94];
      if ( !Instance )
        goto LABEL_182;
      UICommonButton__SetButtonEnable(Instance, v55, v56, 0LL);
    }
    limitCountSealLabel = this->fields.limitCountSealLabel;
    if ( limitCountSealLabel )
    {
      if ( v94 >= limitCountSealLabel->max_length )
        goto LABEL_184;
      v59 = (UnityEngine_Object_o *)limitCountSealLabel->m_Items[v94];
    }
    else
    {
      v59 = 0LL;
    }
    limitCountSealObjList = this->fields.limitCountSealObjList;
    if ( limitCountSealObjList )
    {
      if ( v94 >= limitCountSealObjList->max_length )
        goto LABEL_184;
      v61 = (UnityEngine_Object_o *)limitCountSealObjList->m_Items[v94];
    }
    else
    {
      v61 = 0LL;
    }
    Instance = (UICommonButton_o *)ServantStatusListViewItem__get_SvtId(item, 0LL);
    if ( !v28 )
      goto LABEL_182;
    if ( v94 >= v28->max_length )
      goto LABEL_184;
    if ( !v34 )
      goto LABEL_182;
    if ( ServantLimitImageMaster__IsServantLimitCountSeal(v34, (int32_t)Instance, v28->m_Items[v94 + 1] + 1, 0LL) )
    {
      if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      Instance = (UICommonButton_o *)UnityEngine_Object__op_Inequality(v61, 0LL, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v61 )
          goto LABEL_182;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v61, 1, 0LL);
      }
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      Instance = (UICommonButton_o *)UnityEngine_Object__op_Inequality(v59, 0LL, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        Instance = (UICommonButton_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8389/*"LIMIT_COUNT_SELECT_SEALED"*/, 0LL);
        if ( !v59 )
          goto LABEL_182;
        v62 = (System_String_o *)Instance;
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
      Instance = (UICommonButton_o *)UnityEngine_Object__op_Inequality(v61, 0LL, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v61 )
          goto LABEL_182;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v61, 0, 0LL);
      }
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      Instance = (UICommonButton_o *)UnityEngine_Object__op_Inequality(v59, 0LL, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v59 )
          goto LABEL_182;
        v62 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_114:
        UILabel__set_text((UILabel_o *)v59, v62, 0LL);
      }
    }
    v63 = (int)(v94 - 2) < 0;
    v35 = ++v94;
  }
  while ( v63 != __OFSUB__(v94, 3) );
  v64 = this->fields.charaLevelButtonList;
  if ( !v64 )
    goto LABEL_182;
  v65 = 11LL;
  v90 = v18;
  while ( 1 )
  {
    v66 = v65 - 8;
    if ( (int)v65 - 8 >= (signed int)v64->max_length )
      break;
    max_length = v28->max_length;
    if ( (int)v66 >= max_length )
    {
      v68 = 0;
    }
    else
    {
      if ( v66 >= max_length )
        goto LABEL_184;
      v68 = *((_DWORD *)&v28->obj.klass + v65) == v91;
    }
    v69 = this->fields.charaLevelTitleRangeLabelList;
    if ( !v69 )
      goto LABEL_182;
    if ( v66 >= v69->max_length )
      goto LABEL_184;
    v70 = v69->m_Items[v66];
    v71 = v18 && (int)v66 < max_length;
    if ( (int)v66 >= max_length )
    {
      if ( !v70 )
        goto LABEL_182;
      UIRangeLabel__Clear(v69->m_Items[v66], 0LL);
    }
    else
    {
      Instance = (UICommonButton_o *)ServantStatusListViewItem__get_SvtId(item, 0LL);
      if ( v66 >= portraitSelectList->max_length )
        goto LABEL_184;
      v17 = (unsigned int)Instance;
      Instance = (UICommonButton_o *)v89;
      if ( !v89 )
        goto LABEL_182;
      Entity = ServantCostumeMaster__GetEntity(v89, v17, portraitSelectList->m_Items[v66 + 1], 0LL);
      if ( Entity )
      {
        Instance = (UICommonButton_o *)ServantCostumeEntity__getShortName(Entity, 0LL);
        v73 = (System_String_o *)Instance;
        if ( !v70 )
          goto LABEL_182;
      }
      else
      {
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        if ( !byte_4185BC0 )
        {
          sub_B2C35C(&LocalizationManager_TypeInfo, v17);
          byte_4185BC0 = 1;
        }
        Instance = (UICommonButton_o *)LocalizationManager_TypeInfo;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          Instance = (UICommonButton_o *)LocalizationManager_TypeInfo;
        }
        v73 = *(System_String_o **)(*(_QWORD *)&Instance[1].fields.specifyPressedColor.fields.b + 32LL);
        if ( !v70 )
          goto LABEL_182;
      }
      v74 = v68 & v71;
      if ( (v68 & v71) != 0 )
        v75 = v33;
      else
        v75 = v27;
      if ( v74 )
        v76 = v32;
      else
        v76 = v26;
      if ( v74 )
        v77 = v31;
      else
        v77 = v25;
      if ( v74 )
        v78 = v30;
      else
        v78 = v24;
      UIRangeLabel__set_effectColor(v70, *(UnityEngine_Color_o *)(&v75 - 3), 0LL);
      UIRangeLabel__Set(v70, v73, 0LL, 1, 0, 0LL);
    }
    v79 = this->fields.charaLevelSpriteList;
    if ( !v79 )
      goto LABEL_182;
    if ( v66 >= v79->max_length )
      goto LABEL_184;
    Instance = (UICommonButton_o *)v79->m_Items[v66];
    if ( !Instance )
      goto LABEL_182;
    v80 = &StringLiteral_16965/*"btn_bg_20"*/;
    if ( v68 )
      v80 = &StringLiteral_16966/*"btn_bg_21"*/;
    UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v80, 0LL);
    v81 = this->fields.servantButtonList;
    if ( !v81 )
      goto LABEL_182;
    if ( v66 >= v81->max_length )
      goto LABEL_184;
    Instance = v81->m_Items[v66];
    if ( (v68 & v71) != 0 )
    {
      if ( !Instance )
        goto LABEL_182;
      v82 = v71 == 0 || isInit;
      UICommonButton__SetColliderEnable(Instance, 0, v71 == 0 || isInit, 0LL);
      v83 = this->fields.charaLevelButtonList;
      v28 = portraitSelectList;
      if ( !v83 )
        goto LABEL_182;
      LOBYTE(v18) = v90;
      if ( v66 >= v83->max_length )
        goto LABEL_184;
      Instance = v83->m_Items[v66];
      if ( !Instance )
        goto LABEL_182;
      UICommonButton__SetColliderEnable(Instance, 0, v82, 0LL);
    }
    else if ( (int)v66 >= max_length )
    {
      if ( !Instance )
        goto LABEL_182;
      Instance = (UICommonButton_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      LOBYTE(v18) = v90;
      v28 = portraitSelectList;
      if ( !Instance )
        goto LABEL_182;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
      v87 = this->fields.charaLevelButtonList;
      if ( !v87 )
        goto LABEL_182;
      if ( v66 >= v87->max_length )
        goto LABEL_184;
      Instance = v87->m_Items[v66];
      if ( !Instance )
        goto LABEL_182;
      Instance = (UICommonButton_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      if ( !Instance )
        goto LABEL_182;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
    }
    else
    {
      if ( !Instance )
        goto LABEL_182;
      v84 = v71 & ~v68;
      v85 = v71 == 0 || isInit;
      UICommonButton__SetButtonEnable(Instance, v84, v71 == 0 || isInit, 0LL);
      v86 = this->fields.charaLevelButtonList;
      if ( !v86 )
        goto LABEL_182;
      LOBYTE(v18) = v90;
      v28 = portraitSelectList;
      if ( v66 >= v86->max_length )
        goto LABEL_184;
      Instance = v86->m_Items[v66];
      if ( !Instance )
        goto LABEL_182;
      UICommonButton__SetButtonEnable(Instance, v84, v85, 0LL);
    }
    v64 = this->fields.charaLevelButtonList;
    ++v65;
    if ( !v64 )
      goto LABEL_182;
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
  __int64 v7; // x1
  __int64 v8; // x1
  struct UISprite_o *baseSprite; // x8
  UnityEngine_GameObject_o *v10; // x21
  System_String_o *Empty; // x21
  __int64 *v12; // x8
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_418A7D6 & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, item);
    sub_B2C35C(&OptionManager_TypeInfo, v5);
    sub_B2C35C(&string_TypeInfo, v6);
    sub_B2C35C(&StringLiteral_12010/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_INFO_ALL_SETTING_STATUS_ICON"*/, v7);
    this = (ServantStatusListViewItemDrawPortrait_o *)sub_B2C35C(&StringLiteral_12014/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_INFO_OWN_SETTING_STATUS_ICON"*/, v8);
    byte_418A7D6 = 1;
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
    this = (ServantStatusListViewItemDrawPortrait_o *)v4->fields.maskBase;
    if ( this )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      return;
    }
LABEL_37:
    sub_B2C434(this, item);
  }
  this = (ServantStatusListViewItemDrawPortrait_o *)v4->fields.maskBase;
  if ( !this )
    goto LABEL_37;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  baseSprite = v4->fields.baseSprite;
  if ( !baseSprite )
    goto LABEL_37;
  this = (ServantStatusListViewItemDrawPortrait_o *)v4->fields.maskSprite;
  if ( !this )
    goto LABEL_37;
  UIWidget__set_height((UIWidget_o *)this, baseSprite->fields.mHeight, 0LL);
  this = (ServantStatusListViewItemDrawPortrait_o *)v4->fields.maskSprite;
  if ( !this )
    goto LABEL_37;
  UIWidget__ResizeCollider((UIWidget_o *)this, 0LL);
  this = (ServantStatusListViewItemDrawPortrait_o *)v4->fields.maskSprite;
  if ( !this )
    goto LABEL_37;
  this = (ServantStatusListViewItemDrawPortrait_o *)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)this,
                                                      0LL);
  if ( !v4->fields.baseSprite )
    goto LABEL_37;
  v10 = (UnityEngine_GameObject_o *)this;
  this = (ServantStatusListViewItemDrawPortrait_o *)UnityEngine_Component__get_transform(
                                                      (UnityEngine_Component_o *)v4->fields.baseSprite,
                                                      0LL);
  if ( !this )
    goto LABEL_37;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  GameObjectExtensions__SetLocalPositionY(v10, localPosition.fields.y, 0LL);
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
    v12 = &StringLiteral_12010/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_INFO_ALL_SETTING_STATUS_ICON"*/;
LABEL_32:
    Empty = LocalizationManager__Get((System_String_o *)*v12, 0LL);
    goto LABEL_33;
  }
  if ( item->fields.isEnableOwnRandomSetting )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v12 = &StringLiteral_12014/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_INFO_OWN_SETTING_STATUS_ICON"*/;
    goto LABEL_32;
  }
LABEL_33:
  this = (ServantStatusListViewItemDrawPortrait_o *)v4->fields.maskInfoLabel;
  if ( !this )
    goto LABEL_37;
  UILabel__set_overflowMethod((UILabel_o *)this, 2, 0LL);
  this = (ServantStatusListViewItemDrawPortrait_o *)v4->fields.maskInfoLabel;
  if ( !this )
    goto LABEL_37;
  UILabel__set_text((UILabel_o *)this, Empty, 0LL);
  this = (ServantStatusListViewItemDrawPortrait_o *)v4->fields.maskInfoLabel;
  if ( !this )
    goto LABEL_37;
  UILabel__SetCondensedScale((UILabel_o *)this, *(&v4->fields.MASK_LABEL_MAX_WIDTH + 1), 0LL);
}