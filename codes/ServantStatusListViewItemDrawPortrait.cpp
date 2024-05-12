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
  UnityEngine_Color___ctor_41410832(*(UnityEngine_Color_o *)(&v2 - 3), v3, v4, v5, (const MethodInfo *)&v10);
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
      v19 = sub_B776C8(this);
      sub_B77668(v19, 0LL);
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
      sub_B7769C(this, method);
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
  int32_t ConvertOverwritePortraitLimitCount; // w0
  signed __int64 maxPortraitLimitCount; // x22
  struct System_Int32_array *portraitSelectList; // x26
  unsigned __int64 v8; // x21
  int32_t *v9; // x28
  struct UITexture_array *v10; // x8
  struct UISprite_array *v11; // x8
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
  ServantLimitImageMaster_o *v23; // x23
  struct UITexture_array *servantTextureList; // x8
  UITexture_o *v25; // x23
  int32_t v26; // w25
  int32_t v27; // w24
  int32_t LimitCountByImageLimitCostumeIn; // w25
  struct UISprite_array *servantMaskSpriteList; // x8
  struct UITexture_array *v31; // x8
  __int64 v32; // x24
  unsigned __int64 v33; // x28
  ServantLimitImageMaster_o *v34; // x21
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
  __int64 v47; // x0
  ServantStatusListViewItemDrawPortrait_o *MasterData_WarQuestSelectionMaster; // [xsp+0h] [xbp-60h]
  int32_t v49; // [xsp+Ch] [xbp-54h]

  v3 = item;
  v4 = this;
  if ( (byte_438F2DE & 1) == 0 )
  {
    sub_B775C4(&AtlasManager_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___);
    sub_B775C4(&ImageLimitCount_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B775C4(&OptionManager_TypeInfo);
    sub_B775C4(&ServantAssetLoadManager_TypeInfo);
    this = (ServantStatusListViewItemDrawPortrait_o *)sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438F2DE = 1;
  }
  if ( !v3
    || (ConvertOverwritePortraitLimitCount = ServantStatusListViewItem__get_ConvertOverwritePortraitLimitCount(v3, 0LL),
        maxPortraitLimitCount = v3->fields.maxPortraitLimitCount,
        portraitSelectList = v3->fields.portraitSelectList,
        v49 = ConvertOverwritePortraitLimitCount,
        (this = (ServantStatusListViewItemDrawPortrait_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL) )
  {
LABEL_104:
    sub_B7769C(this, item);
  }
  v8 = 0LL;
  v9 = &portraitSelectList->m_Items[1];
  MasterData_WarQuestSelectionMaster = (ServantStatusListViewItemDrawPortrait_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                    (DataManager_o *)this,
                                                                                    (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___);
  do
  {
    if ( (__int64)v8 > maxPortraitLimitCount )
      goto LABEL_14;
    this = (ServantStatusListViewItemDrawPortrait_o *)ServantStatusListViewItem__get_IsMine(v3, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
      goto LABEL_109;
    if ( !portraitSelectList )
      goto LABEL_104;
    if ( v8 >= portraitSelectList->max_length )
      goto LABEL_106;
    if ( v9[v8] <= v49 )
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
      if ( v8 >= portraitSelectList->max_length )
      {
LABEL_106:
        v47 = sub_B776C8(this);
        sub_B77668(v47, 0LL);
      }
      v19 = v9[v8];
      if ( v19 >= 11 )
        v20 = v9[v8];
      else
        v20 = v19 + 1;
      SvtId = ServantStatusListViewItem__get_SvtId(v3, 0LL);
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(SvtId, 0LL);
      item = *(ServantStatusListViewItem_o **)&v22.fields.fakeValue;
      this = MasterData_WarQuestSelectionMaster;
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_104;
      this = (ServantStatusListViewItemDrawPortrait_o *)ServantLimitSpoilerProtectionMaster__IsSpoilerLimitCount(
                                                          (ServantLimitSpoilerProtectionMaster_o *)MasterData_WarQuestSelectionMaster,
                                                          v22,
                                                          v20,
                                                          0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
LABEL_49:
        this = (ServantStatusListViewItemDrawPortrait_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_104;
        v23 = (ServantLimitImageMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                             (DataManager_o *)this,
                                             (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
        this = (ServantStatusListViewItemDrawPortrait_o *)ServantStatusListViewItem__get_SvtId(v3, 0LL);
        if ( !portraitSelectList )
          goto LABEL_104;
        if ( v8 >= portraitSelectList->max_length )
          goto LABEL_106;
        if ( !v23 )
          goto LABEL_104;
        this = (ServantStatusListViewItemDrawPortrait_o *)ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                                            v23,
                                                            (int32_t)this,
                                                            v9[v8],
                                                            0LL);
        servantTextureList = v4->fields.servantTextureList;
        if ( !servantTextureList )
          goto LABEL_104;
        if ( v8 >= servantTextureList->max_length )
          goto LABEL_106;
        v25 = servantTextureList->m_Items[v8];
        v26 = (int)this;
        v27 = ServantStatusListViewItem__get_SvtId(v3, 0LL);
        if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ImageLimitCount_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
        }
        LimitCountByImageLimitCostumeIn = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(v26, 0LL);
        if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
        }
        this = (ServantStatusListViewItemDrawPortrait_o *)ServantAssetLoadManager__loadStatusFace(
                                                            v25,
                                                            v27,
                                                            LimitCountByImageLimitCostumeIn,
                                                            0LL);
        servantMaskSpriteList = v4->fields.servantMaskSpriteList;
        if ( !servantMaskSpriteList )
          goto LABEL_104;
        if ( v8 >= servantMaskSpriteList->max_length )
          goto LABEL_106;
        this = (ServantStatusListViewItemDrawPortrait_o *)servantMaskSpriteList->m_Items[v8];
        if ( !this )
          goto LABEL_104;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0LL);
        continue;
      }
      v10 = v4->fields.servantTextureList;
      if ( !v10 )
        goto LABEL_104;
      if ( v8 >= v10->max_length )
        goto LABEL_106;
      this = (ServantStatusListViewItemDrawPortrait_o *)v10->m_Items[v8];
      if ( !this )
        goto LABEL_104;
      this = (ServantStatusListViewItemDrawPortrait_o *)(*(__int64 (__fastcall **)(ServantStatusListViewItemDrawPortrait_o *, _QWORD, _QWORD))&this->klass[1]._2.initializationExceptionGCHandle)(
                                                          this,
                                                          0LL,
                                                          *(_QWORD *)&this->klass[1]._2.cctor_finished);
      v11 = v4->fields.servantMaskSpriteList;
      if ( !v11 )
        goto LABEL_104;
      if ( v8 >= v11->max_length )
        goto LABEL_106;
      this = (ServantStatusListViewItemDrawPortrait_o *)v11->m_Items[v8];
      if ( !this )
        goto LABEL_104;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 1, 0LL);
    }
    else
    {
LABEL_14:
      this = (ServantStatusListViewItemDrawPortrait_o *)ServantStatusListViewItem__get_IsMine(v3, 0LL);
      v12 = v4->fields.servantTextureList;
      if ( !v12 )
        goto LABEL_104;
      if ( v8 >= v12->max_length )
        goto LABEL_106;
      v13 = (char)this;
      this = (ServantStatusListViewItemDrawPortrait_o *)v12->m_Items[v8];
      if ( !this )
        goto LABEL_104;
      this = (ServantStatusListViewItemDrawPortrait_o *)(*(__int64 (__fastcall **)(ServantStatusListViewItemDrawPortrait_o *, _QWORD, _QWORD))&this->klass[1]._2.initializationExceptionGCHandle)(
                                                          this,
                                                          0LL,
                                                          *(_QWORD *)&this->klass[1]._2.cctor_finished);
      v14 = v4->fields.servantMaskSpriteList;
      if ( !v14 )
        goto LABEL_104;
      if ( v8 >= v14->max_length )
        goto LABEL_106;
      this = (ServantStatusListViewItemDrawPortrait_o *)v14->m_Items[v8];
      if ( !this )
        goto LABEL_104;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 1, 0LL);
      if ( (v13 & 1) != 0 )
        continue;
    }
    v16 = v4->fields.servantMaskSpriteList;
    if ( !v16 )
      goto LABEL_104;
    if ( v8 >= v16->max_length )
      goto LABEL_106;
    v17 = v16->m_Items[v8];
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    this = (ServantStatusListViewItemDrawPortrait_o *)AtlasManager__SetNotOpenFace(v17, 0LL);
    v18 = v4->fields.servantMaskSpriteList;
    if ( !v18 )
      goto LABEL_104;
    if ( v8 >= v18->max_length )
      goto LABEL_106;
    this = (ServantStatusListViewItemDrawPortrait_o *)v18->m_Items[v8];
    if ( !this )
      goto LABEL_104;
    UIWidget__set_color((UIWidget_o *)this, v4->fields.QUESTION_MARK_COLOR, 0LL);
  }
  while ( v8++ < 2 );
  v31 = v4->fields.servantTextureList;
  if ( !v31 )
    goto LABEL_104;
  v32 = 0LL;
  while ( 1 )
  {
    v33 = v32 + 3;
    if ( v32 + 3 >= (int)v31->max_length )
      break;
    if ( !portraitSelectList )
      goto LABEL_104;
    if ( (__int64)v33 >= (int)portraitSelectList->max_length )
    {
      this = (ServantStatusListViewItemDrawPortrait_o *)ServantStatusListViewItem__get_IsMine(v3, 0LL);
      v41 = v4->fields.servantTextureList;
      if ( !v41 )
        goto LABEL_104;
      if ( v33 >= v41->max_length )
        goto LABEL_106;
      v42 = (char)this;
      this = (ServantStatusListViewItemDrawPortrait_o *)v41->m_Items[v32 + 3];
      if ( !this )
        goto LABEL_104;
      this = (ServantStatusListViewItemDrawPortrait_o *)(*(__int64 (__fastcall **)(ServantStatusListViewItemDrawPortrait_o *, _QWORD, _QWORD))&this->klass[1]._2.initializationExceptionGCHandle)(
                                                          this,
                                                          0LL,
                                                          *(_QWORD *)&this->klass[1]._2.cctor_finished);
      v43 = v4->fields.servantMaskSpriteList;
      if ( !v43 )
        goto LABEL_104;
      if ( v33 >= v43->max_length )
        goto LABEL_106;
      this = (ServantStatusListViewItemDrawPortrait_o *)v43->m_Items[v32 + 3];
      if ( !this )
        goto LABEL_104;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 1, 0LL);
      if ( (v42 & 1) == 0 )
      {
        v44 = v4->fields.servantMaskSpriteList;
        if ( !v44 )
          goto LABEL_104;
        if ( v33 >= v44->max_length )
          goto LABEL_106;
        v45 = v44->m_Items[v32 + 3];
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        this = (ServantStatusListViewItemDrawPortrait_o *)AtlasManager__SetNotOpenFace(v45, 0LL);
        v46 = v4->fields.servantMaskSpriteList;
        if ( !v46 )
          goto LABEL_104;
        if ( v33 >= v46->max_length )
          goto LABEL_106;
        this = (ServantStatusListViewItemDrawPortrait_o *)v46->m_Items[v32 + 3];
        if ( !this )
          goto LABEL_104;
        UIWidget__set_color((UIWidget_o *)this, v4->fields.QUESTION_MARK_COLOR, 0LL);
      }
    }
    else
    {
      this = (ServantStatusListViewItemDrawPortrait_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_104;
      v34 = (ServantLimitImageMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)this,
                                           (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
      this = (ServantStatusListViewItemDrawPortrait_o *)ServantStatusListViewItem__get_SvtId(v3, 0LL);
      if ( v33 >= portraitSelectList->max_length )
        goto LABEL_106;
      if ( !v34 )
        goto LABEL_104;
      this = (ServantStatusListViewItemDrawPortrait_o *)ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                                          v34,
                                                          (int32_t)this,
                                                          portraitSelectList->m_Items[v32 + 4],
                                                          0LL);
      v35 = v4->fields.servantTextureList;
      if ( !v35 )
        goto LABEL_104;
      if ( v33 >= v35->max_length )
        goto LABEL_106;
      v36 = v35->m_Items[v32 + 3];
      v37 = (int)this;
      v38 = ServantStatusListViewItem__get_SvtId(v3, 0LL);
      if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ImageLimitCount_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      }
      v39 = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(v37, 0LL);
      if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      }
      this = (ServantStatusListViewItemDrawPortrait_o *)ServantAssetLoadManager__loadStatusFace(v36, v38, v39, 0LL);
      v40 = v4->fields.servantMaskSpriteList;
      if ( !v40 )
        goto LABEL_104;
      if ( v33 >= v40->max_length )
        goto LABEL_106;
      this = (ServantStatusListViewItemDrawPortrait_o *)v40->m_Items[v32 + 3];
      if ( !this )
        goto LABEL_104;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0LL);
    }
    v31 = v4->fields.servantTextureList;
    ++v32;
    if ( !v31 )
      goto LABEL_104;
  }
  ServantStatusListViewItemDrawPortrait__SetupButton(v4, v3, 0, v15);
}


void __fastcall ServantStatusListViewItemDrawPortrait__SetItem(
        ServantStatusListViewItemDrawPortrait_o *this,
        ServantStatusListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  ServantLimitImageMaster_o *Master_WarQuestSelectionMaster; // x21
  UILabel_o *explanationLabel; // x22
  System_String_o *IsServantLimitCountSeal; // x0
  __int64 v10; // x1
  struct UserServantEntity_o *userSvtEntity; // x8
  __int64 v12; // x22
  __int64 v13; // x23
  UILabel_o *v14; // x22
  struct UserServantCollectionEntity_o *userSvtCollectionEntity; // x8
  UILabel_o *v16; // x22
  struct ServantLeaderInfo_o *servantLeaderInfo; // x8
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
  double v38; // d0
  double v39; // d0
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

  if ( (byte_438F2DD & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B775C4(&StringLiteral_12208/*"SERVANT_STATUS_EXPLANATION_PORTRAIT3"*/);
    sub_B775C4(&StringLiteral_12207/*"SERVANT_STATUS_EXPLANATION_PORTRAIT2"*/);
    sub_B775C4(&StringLiteral_12206/*"SERVANT_STATUS_EXPLANATION_PORTRAIT"*/);
    sub_B775C4(&StringLiteral_12209/*"SERVANT_STATUS_EXPLANATION_PORTRAIT_LIMIT_COUNT_SEALED_MSG"*/);
    byte_438F2DD = 1;
  }
  ServantStatusListViewItemDraw__SetItem((ServantStatusListViewItemDraw_o *)this, item, mode, 0LL);
  if ( item && mode )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (ServantLimitImageMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
    if ( item->fields.userSvtEntity )
    {
      explanationLabel = this->fields.explanationLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      IsServantLimitCountSeal = LocalizationManager__Get((System_String_o *)StringLiteral_12206/*"SERVANT_STATUS_EXPLANATION_PORTRAIT"*/, 0LL);
      if ( !explanationLabel )
        goto LABEL_81;
      UILabel__set_text(explanationLabel, IsServantLimitCountSeal, 0LL);
      userSvtEntity = item->fields.userSvtEntity;
      if ( !userSvtEntity )
        goto LABEL_81;
      v13 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
      v12 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
    }
    else if ( item->fields.userSvtCollectionEntity )
    {
      v14 = this->fields.explanationLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      IsServantLimitCountSeal = LocalizationManager__Get((System_String_o *)StringLiteral_12207/*"SERVANT_STATUS_EXPLANATION_PORTRAIT2"*/, 0LL);
      if ( !v14 )
        goto LABEL_81;
      UILabel__set_text(v14, IsServantLimitCountSeal, 0LL);
      userSvtCollectionEntity = item->fields.userSvtCollectionEntity;
      if ( !userSvtCollectionEntity )
        goto LABEL_81;
      v13 = *(_QWORD *)&userSvtCollectionEntity->fields.svtId.fields.currentCryptoKey;
      v12 = *(_QWORD *)&userSvtCollectionEntity->fields.svtId.fields.fakeValue;
    }
    else
    {
      v16 = this->fields.explanationLabel;
      if ( !item->fields.servantLeaderInfo )
      {
        if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        IsServantLimitCountSeal = LocalizationManager__Get((System_String_o *)StringLiteral_12208/*"SERVANT_STATUS_EXPLANATION_PORTRAIT3"*/, 0LL);
        if ( !v16 )
          goto LABEL_81;
        UILabel__set_text(v16, IsServantLimitCountSeal, 0LL);
        goto LABEL_43;
      }
      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      IsServantLimitCountSeal = LocalizationManager__Get((System_String_o *)StringLiteral_12208/*"SERVANT_STATUS_EXPLANATION_PORTRAIT3"*/, 0LL);
      if ( !v16 )
        goto LABEL_81;
      UILabel__set_text(v16, IsServantLimitCountSeal, 0LL);
      servantLeaderInfo = item->fields.servantLeaderInfo;
      if ( !servantLeaderInfo )
        goto LABEL_81;
      v13 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.currentCryptoKey;
      v12 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.fakeValue;
    }
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v53.fields.currentCryptoKey = v13;
    *(_QWORD *)&v53.fields.fakeValue = v12;
    IsServantLimitCountSeal = (System_String_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(
                                                   v53,
                                                   0LL);
    v18 = (int)IsServantLimitCountSeal;
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
                                  (System_String_o *)StringLiteral_12209/*"SERVANT_STATUS_EXPLANATION_PORTRAIT_LIMIT_COUNT_SEALED_MSG"*/,
                                  v18,
                                  0LL);
      v19 = this->fields.explanationLabel;
      if ( !v19 )
        goto LABEL_81;
      mText = v19->fields.mText;
      v21 = IsServantLimitCountSeal;
      LimitCountSealedServantName = (Il2CppObject *)ServantLimitImageMaster__GetLimitCountSealedServantName(
                                                      Master_WarQuestSelectionMaster,
                                                      v18,
                                                      3,
                                                      0LL);
      v23 = System_String__Format(v21, LimitCountSealedServantName, 0LL);
      v24 = System_String__Concat_44901936(mText, v23, 0LL);
      UILabel__set_text(v19, v24, 0LL);
      v18 = 1;
      goto LABEL_44;
    }
LABEL_43:
    v18 = 0;
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
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v37 = y + (float)v36;
    if ( UnityEngine_Object__op_Inequality(baseCollider, 0LL, 0LL) )
    {
      IsServantLimitCountSeal = (System_String_o *)this->fields.baseCollider;
      if ( !IsServantLimitCountSeal )
        goto LABEL_81;
      v54.fields.x = x;
      v54.fields.y = v37;
      v54.fields.z = z;
      UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)IsServantLimitCountSeal, v54, 0LL);
    }
    IsServantLimitCountSeal = (System_String_o *)this->fields.baseSprite;
    if ( IsServantLimitCountSeal )
    {
      v38 = x;
      if ( x == INFINITY )
        v38 = -x;
      UIWidget__set_width((UIWidget_o *)IsServantLimitCountSeal, (int)v38, 0LL);
      IsServantLimitCountSeal = (System_String_o *)this->fields.baseSprite;
      if ( IsServantLimitCountSeal )
      {
        v39 = v37;
        if ( v37 == INFINITY )
          v39 = -INFINITY;
        UIWidget__set_height((UIWidget_o *)IsServantLimitCountSeal, (int)v39, 0LL);
        IsServantLimitCountSeal = (System_String_o *)this->fields.titleSprite;
        v40 = v36 >= 0 ? v36 : v36 + 1;
        if ( IsServantLimitCountSeal )
        {
          v41 = this->fields.titleBasePosition.fields.x;
          v42 = this->fields.titleBasePosition.fields.y;
          v43 = this->fields.titleBasePosition.fields.z;
          IsServantLimitCountSeal = (System_String_o *)UnityEngine_Component__get_transform(
                                                         (UnityEngine_Component_o *)IsServantLimitCountSeal,
                                                         0LL);
          if ( IsServantLimitCountSeal )
          {
            v44 = (float)(v40 >> 1);
            v55.fields.y = v42 + v44;
            v55.fields.x = v41;
            v55.fields.z = v43;
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)IsServantLimitCountSeal, v55, 0LL);
            IsServantLimitCountSeal = (System_String_o *)this->fields.levelButtonBase;
            if ( IsServantLimitCountSeal )
            {
              v45 = this->fields.levelButtonBasePosition.fields.x;
              v46 = this->fields.levelButtonBasePosition.fields.y;
              v47 = this->fields.levelButtonBasePosition.fields.z;
              IsServantLimitCountSeal = (System_String_o *)UnityEngine_GameObject__get_transform(
                                                             (UnityEngine_GameObject_o *)IsServantLimitCountSeal,
                                                             0LL);
              if ( IsServantLimitCountSeal )
              {
                v56.fields.y = v46 + v44;
                v56.fields.x = v45;
                v56.fields.z = v47;
                UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)IsServantLimitCountSeal, v56, 0LL);
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
                                                                 0LL);
                  if ( IsServantLimitCountSeal )
                  {
                    v57.fields.x = v49;
                    v57.fields.y = v48;
                    v57.fields.z = v50;
                    UnityEngine_Transform__set_localPosition(
                      (UnityEngine_Transform_o *)IsServantLimitCountSeal,
                      v57,
                      0LL);
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
LABEL_81:
    sub_B7769C(IsServantLimitCountSeal, v10);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusListViewItemDrawPortrait__SetupButton(
        ServantStatusListViewItemDrawPortrait_o *this,
        ServantStatusListViewItem_o *item,
        bool isInit,
        const MethodInfo *method)
{
  UICommonButton_o *Instance; // x0
  __int64 v7; // x1
  _BOOL4 v8; // w23
  int32_t ConvertOverwritePortraitLimitCount; // w0
  int32_t maxPortraitLimitCount; // w22
  LocalizationManager_c *v11; // x0
  float *static_fields; // x8
  float v13; // s8
  float v14; // s9
  float v15; // s10
  float v16; // s11
  struct System_Int32_array *v17; // x20
  float *v18; // x8
  float v19; // s12
  float v20; // s13
  float v21; // s14
  float v22; // s15
  ServantLimitImageMaster_o *v23; // x25
  int v24; // w8
  int v25; // w9
  _BOOL4 v26; // w19
  struct UIRangeLabel_array *charaLevelTitleRangeLabelList; // x10
  UIRangeLabel_o *v28; // x26
  int v29; // w20
  System_String_o *v30; // x0
  int v31; // w8
  float v32; // s3
  float v33; // s2
  float v34; // s1
  float v35; // s0
  System_String_o *v36; // x0
  System_String_o *v37; // x27
  System_String_o *v38; // x0
  struct UISprite_array *charaLevelSpriteList; // x8
  __int64 *v40; // x8
  struct UICommonButton_array *servantButtonList; // x8
  bool v42; // w19
  struct UICommonButton_array *charaLevelButtonList; // x8
  char v44; // w26
  bool v45; // w19
  struct UICommonButton_array *v46; // x8
  struct UILabel_array *limitCountSealLabel; // x8
  UnityEngine_Object_o *v48; // x26
  struct UnityEngine_GameObject_array *limitCountSealObjList; // x8
  UnityEngine_Object_o *v50; // x27
  System_String_o *v51; // x1
  bool v52; // nf
  struct UICommonButton_array *v53; // x8
  __int64 v54; // x22
  il2cpp_array_size_t v55; // w27
  int max_length; // w19
  _BOOL4 v57; // w20
  struct UIRangeLabel_array *v58; // x9
  UIRangeLabel_o *v59; // x25
  int v60; // w23
  ServantCostumeEntity_o *Entity; // x0
  System_String_o *v62; // x26
  int v63; // w8
  float v64; // s3
  float v65; // s2
  float v66; // s1
  float v67; // s0
  struct UISprite_array *v68; // x8
  __int64 *v69; // x8
  struct UICommonButton_array *v70; // x8
  bool v71; // w19
  struct UICommonButton_array *v72; // x8
  char v73; // w25
  bool v74; // w19
  struct UICommonButton_array *v75; // x8
  struct UICommonButton_array *v76; // x8
  __int64 v77; // x0
  ServantCostumeMaster_o *v78; // [xsp+8h] [xbp-B8h]
  bool v79; // [xsp+14h] [xbp-ACh]
  int32_t v80; // [xsp+18h] [xbp-A8h]
  struct System_Int32_array *portraitSelectList; // [xsp+20h] [xbp-A0h]
  unsigned int v83; // [xsp+2Ch] [xbp-94h] BYREF
  UnityEngine_Color_o v84; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_438F2DF & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_ServantCostumeMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&StringLiteral_8544/*"LIMIT_COUNT_SELECT_SEALED"*/);
    sub_B775C4(&StringLiteral_12222/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_"*/);
    sub_B775C4(&StringLiteral_17304/*"btn_bg_20"*/);
    sub_B775C4(&StringLiteral_12223/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_CLOSE"*/);
    sub_B775C4(&StringLiteral_1/*""*/);
    sub_B775C4(&StringLiteral_17305/*"btn_bg_21"*/);
    byte_438F2DF = 1;
  }
  v83 = 0;
  Instance = (UICommonButton_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_182;
  Instance = (UICommonButton_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                   (DataManager_o *)Instance,
                                   (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
  if ( !item )
    goto LABEL_182;
  v78 = (ServantCostumeMaster_o *)Instance;
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
    v8 = item->fields.userSvtCollectionEntity != 0LL;
  }
  ConvertOverwritePortraitLimitCount = ServantStatusListViewItem__get_ConvertOverwritePortraitLimitCount(item, 0LL);
  maxPortraitLimitCount = item->fields.maxPortraitLimitCount;
  v80 = ConvertOverwritePortraitLimitCount;
  portraitSelectList = item->fields.portraitSelectList;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  if ( !byte_4387FCE )
  {
    sub_B775C4(&LocalizationManager_TypeInfo);
    byte_4387FCE = 1;
  }
  v11 = LocalizationManager_TypeInfo;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v11 = LocalizationManager_TypeInfo;
  }
  static_fields = (float *)v11->static_fields;
  v13 = static_fields[20];
  v14 = static_fields[21];
  v15 = static_fields[22];
  v16 = static_fields[23];
  if ( !byte_4387FCF )
  {
    sub_B775C4(&LocalizationManager_TypeInfo);
    v11 = LocalizationManager_TypeInfo;
    byte_4387FCF = 1;
  }
  if ( (BYTE3(v11->vtable._0_Equals.methodPtr) & 4) != 0 )
  {
    v17 = portraitSelectList;
    if ( !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      v11 = LocalizationManager_TypeInfo;
    }
  }
  else
  {
    v17 = portraitSelectList;
  }
  v18 = (float *)v11->static_fields;
  v19 = v18[24];
  v20 = v18[25];
  v21 = v18[26];
  v22 = v18[27];
  Instance = (UICommonButton_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_182:
    sub_B7769C(Instance, v7);
  Instance = (UICommonButton_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                   (DataManager_o *)Instance,
                                   (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  v83 = 0;
  v23 = (ServantLimitImageMaster_o *)Instance;
  v24 = 0;
  do
  {
    if ( v24 <= maxPortraitLimitCount )
    {
      if ( !v17 )
        goto LABEL_182;
      if ( v24 >= v17->max_length )
        goto LABEL_184;
      v26 = v17->m_Items[v24 + 1] == v80;
      v25 = 1;
    }
    else
    {
      v25 = 0;
      v26 = 0;
    }
    charaLevelTitleRangeLabelList = this->fields.charaLevelTitleRangeLabelList;
    if ( !charaLevelTitleRangeLabelList )
      goto LABEL_182;
    if ( v24 >= charaLevelTitleRangeLabelList->max_length )
    {
LABEL_184:
      v77 = sub_B776C8(Instance);
      sub_B77668(v77, 0LL);
    }
    v28 = charaLevelTitleRangeLabelList->m_Items[v24];
    v29 = v25 & v8;
    if ( v25
      || (Instance = (UICommonButton_o *)ServantStatusListViewItem__get_IsMine(item, 0LL),
          ((unsigned __int8)Instance & 1) == 0) )
    {
      if ( !v28 )
        goto LABEL_182;
      v31 = v26 & v29;
      if ( (v26 & v29) != 0 )
        v32 = v22;
      else
        v32 = v16;
      if ( v31 )
        v33 = v21;
      else
        v33 = v15;
      if ( v31 )
        v34 = v20;
      else
        v34 = v14;
      if ( v31 )
        v35 = v19;
      else
        v35 = v13;
      UIRangeLabel__set_effectColor(v28, *(UnityEngine_Color_o *)(&v32 - 3), 0LL);
      v36 = System_Int32__ToString((int32_t)&v83, 0LL);
      v37 = System_String__Concat_44901936((System_String_o *)StringLiteral_12222/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_"*/, v36, 0LL);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v30 = v37;
    }
    else
    {
      if ( !v28 )
        goto LABEL_182;
      v84.fields.r = v13;
      v84.fields.g = v14;
      v84.fields.b = v15;
      v84.fields.a = v16;
      UIRangeLabel__set_effectColor(v28, v84, 0LL);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v30 = (System_String_o *)StringLiteral_12223/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_CLOSE"*/;
    }
    v38 = LocalizationManager__Get(v30, 0LL);
    UIRangeLabel__Set(v28, v38, 0LL, 1, 0, 0LL);
    charaLevelSpriteList = this->fields.charaLevelSpriteList;
    if ( !charaLevelSpriteList )
      goto LABEL_182;
    if ( v83 >= charaLevelSpriteList->max_length )
      goto LABEL_184;
    Instance = (UICommonButton_o *)charaLevelSpriteList->m_Items[v83];
    if ( !Instance )
      goto LABEL_182;
    v40 = &StringLiteral_17304/*"btn_bg_20"*/;
    if ( v26 )
      v40 = &StringLiteral_17305/*"btn_bg_21"*/;
    UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v40, 0LL);
    servantButtonList = this->fields.servantButtonList;
    if ( !servantButtonList )
      goto LABEL_182;
    if ( v83 >= servantButtonList->max_length )
      goto LABEL_184;
    Instance = servantButtonList->m_Items[v83];
    if ( (v26 & v29) != 0 )
    {
      if ( !Instance )
        goto LABEL_182;
      v42 = v29 == 0 || isInit;
      UICommonButton__SetColliderEnable(Instance, 0, v29 == 0 || isInit, 0LL);
      charaLevelButtonList = this->fields.charaLevelButtonList;
      if ( !charaLevelButtonList )
        goto LABEL_182;
      v17 = portraitSelectList;
      if ( v83 >= charaLevelButtonList->max_length )
        goto LABEL_184;
      Instance = charaLevelButtonList->m_Items[v83];
      if ( !Instance )
        goto LABEL_182;
      UICommonButton__SetColliderEnable(Instance, 0, v42, 0LL);
    }
    else
    {
      if ( !Instance )
        goto LABEL_182;
      v44 = v29 & ~v26;
      v45 = v29 == 0 || isInit;
      UICommonButton__SetButtonEnable(Instance, v44, v29 == 0 || isInit, 0LL);
      v46 = this->fields.charaLevelButtonList;
      if ( !v46 )
        goto LABEL_182;
      v17 = portraitSelectList;
      if ( v83 >= v46->max_length )
        goto LABEL_184;
      Instance = v46->m_Items[v83];
      if ( !Instance )
        goto LABEL_182;
      UICommonButton__SetButtonEnable(Instance, v44, v45, 0LL);
    }
    limitCountSealLabel = this->fields.limitCountSealLabel;
    if ( limitCountSealLabel )
    {
      if ( v83 >= limitCountSealLabel->max_length )
        goto LABEL_184;
      v48 = (UnityEngine_Object_o *)limitCountSealLabel->m_Items[v83];
    }
    else
    {
      v48 = 0LL;
    }
    limitCountSealObjList = this->fields.limitCountSealObjList;
    if ( limitCountSealObjList )
    {
      if ( v83 >= limitCountSealObjList->max_length )
        goto LABEL_184;
      v50 = (UnityEngine_Object_o *)limitCountSealObjList->m_Items[v83];
    }
    else
    {
      v50 = 0LL;
    }
    Instance = (UICommonButton_o *)ServantStatusListViewItem__get_SvtId(item, 0LL);
    if ( !v17 )
      goto LABEL_182;
    if ( v83 >= v17->max_length )
      goto LABEL_184;
    if ( !v23 )
      goto LABEL_182;
    if ( ServantLimitImageMaster__IsServantLimitCountSeal(v23, (int32_t)Instance, v17->m_Items[v83 + 1] + 1, 0LL) )
    {
      if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      Instance = (UICommonButton_o *)UnityEngine_Object__op_Inequality(v50, 0LL, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v50 )
          goto LABEL_182;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v50, 1, 0LL);
      }
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      Instance = (UICommonButton_o *)UnityEngine_Object__op_Inequality(v48, 0LL, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        Instance = (UICommonButton_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8544/*"LIMIT_COUNT_SELECT_SEALED"*/, 0LL);
        if ( !v48 )
          goto LABEL_182;
        v51 = (System_String_o *)Instance;
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
      Instance = (UICommonButton_o *)UnityEngine_Object__op_Inequality(v50, 0LL, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v50 )
          goto LABEL_182;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v50, 0, 0LL);
      }
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      Instance = (UICommonButton_o *)UnityEngine_Object__op_Inequality(v48, 0LL, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v48 )
          goto LABEL_182;
        v51 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_114:
        UILabel__set_text((UILabel_o *)v48, v51, 0LL);
      }
    }
    v52 = (int)(v83 - 2) < 0;
    v24 = ++v83;
  }
  while ( v52 != __OFSUB__(v83, 3) );
  v53 = this->fields.charaLevelButtonList;
  if ( !v53 )
    goto LABEL_182;
  v54 = 11LL;
  v79 = v8;
  while ( 1 )
  {
    v55 = v54 - 8;
    if ( (int)v54 - 8 >= (signed int)v53->max_length )
      break;
    max_length = v17->max_length;
    if ( (int)v55 >= max_length )
    {
      v57 = 0;
    }
    else
    {
      if ( v55 >= max_length )
        goto LABEL_184;
      v57 = *((_DWORD *)&v17->obj.klass + v54) == v80;
    }
    v58 = this->fields.charaLevelTitleRangeLabelList;
    if ( !v58 )
      goto LABEL_182;
    if ( v55 >= v58->max_length )
      goto LABEL_184;
    v59 = v58->m_Items[v55];
    v60 = v8 && (int)v55 < max_length;
    if ( (int)v55 >= max_length )
    {
      if ( !v59 )
        goto LABEL_182;
      UIRangeLabel__Clear(v58->m_Items[v55], 0LL);
    }
    else
    {
      Instance = (UICommonButton_o *)ServantStatusListViewItem__get_SvtId(item, 0LL);
      if ( v55 >= portraitSelectList->max_length )
        goto LABEL_184;
      v7 = (unsigned int)Instance;
      Instance = (UICommonButton_o *)v78;
      if ( !v78 )
        goto LABEL_182;
      Entity = ServantCostumeMaster__GetEntity(v78, v7, portraitSelectList->m_Items[v55 + 1], 0LL);
      if ( Entity )
      {
        Instance = (UICommonButton_o *)ServantCostumeEntity__getShortName(Entity, 0LL);
        v62 = (System_String_o *)Instance;
        if ( !v59 )
          goto LABEL_182;
      }
      else
      {
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        if ( !byte_4388DC6 )
        {
          sub_B775C4(&LocalizationManager_TypeInfo);
          byte_4388DC6 = 1;
        }
        Instance = (UICommonButton_o *)LocalizationManager_TypeInfo;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          Instance = (UICommonButton_o *)LocalizationManager_TypeInfo;
        }
        v62 = *(System_String_o **)(*(_QWORD *)&Instance[1].fields.specifyPressedColor.fields.b + 32LL);
        if ( !v59 )
          goto LABEL_182;
      }
      v63 = v57 & v60;
      if ( (v57 & v60) != 0 )
        v64 = v22;
      else
        v64 = v16;
      if ( v63 )
        v65 = v21;
      else
        v65 = v15;
      if ( v63 )
        v66 = v20;
      else
        v66 = v14;
      if ( v63 )
        v67 = v19;
      else
        v67 = v13;
      UIRangeLabel__set_effectColor(v59, *(UnityEngine_Color_o *)(&v64 - 3), 0LL);
      UIRangeLabel__Set(v59, v62, 0LL, 1, 0, 0LL);
    }
    v68 = this->fields.charaLevelSpriteList;
    if ( !v68 )
      goto LABEL_182;
    if ( v55 >= v68->max_length )
      goto LABEL_184;
    Instance = (UICommonButton_o *)v68->m_Items[v55];
    if ( !Instance )
      goto LABEL_182;
    v69 = &StringLiteral_17304/*"btn_bg_20"*/;
    if ( v57 )
      v69 = &StringLiteral_17305/*"btn_bg_21"*/;
    UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v69, 0LL);
    v70 = this->fields.servantButtonList;
    if ( !v70 )
      goto LABEL_182;
    if ( v55 >= v70->max_length )
      goto LABEL_184;
    Instance = v70->m_Items[v55];
    if ( (v57 & v60) != 0 )
    {
      if ( !Instance )
        goto LABEL_182;
      v71 = v60 == 0 || isInit;
      UICommonButton__SetColliderEnable(Instance, 0, v60 == 0 || isInit, 0LL);
      v72 = this->fields.charaLevelButtonList;
      v17 = portraitSelectList;
      if ( !v72 )
        goto LABEL_182;
      LOBYTE(v8) = v79;
      if ( v55 >= v72->max_length )
        goto LABEL_184;
      Instance = v72->m_Items[v55];
      if ( !Instance )
        goto LABEL_182;
      UICommonButton__SetColliderEnable(Instance, 0, v71, 0LL);
    }
    else if ( (int)v55 >= max_length )
    {
      if ( !Instance )
        goto LABEL_182;
      Instance = (UICommonButton_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      LOBYTE(v8) = v79;
      v17 = portraitSelectList;
      if ( !Instance )
        goto LABEL_182;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
      v76 = this->fields.charaLevelButtonList;
      if ( !v76 )
        goto LABEL_182;
      if ( v55 >= v76->max_length )
        goto LABEL_184;
      Instance = v76->m_Items[v55];
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
      v73 = v60 & ~v57;
      v74 = v60 == 0 || isInit;
      UICommonButton__SetButtonEnable(Instance, v73, v60 == 0 || isInit, 0LL);
      v75 = this->fields.charaLevelButtonList;
      if ( !v75 )
        goto LABEL_182;
      LOBYTE(v8) = v79;
      v17 = portraitSelectList;
      if ( v55 >= v75->max_length )
        goto LABEL_184;
      Instance = v75->m_Items[v55];
      if ( !Instance )
        goto LABEL_182;
      UICommonButton__SetButtonEnable(Instance, v73, v74, 0LL);
    }
    v53 = this->fields.charaLevelButtonList;
    ++v54;
    if ( !v53 )
      goto LABEL_182;
  }
}


void __fastcall ServantStatusListViewItemDrawPortrait__SetupMask(
        ServantStatusListViewItemDrawPortrait_o *this,
        ServantStatusListViewItem_o *item,
        const MethodInfo *method)
{
  ServantStatusListViewItemDrawPortrait_o *v4; // x19
  struct UISprite_o *baseSprite; // x8
  UnityEngine_GameObject_o *v6; // x21
  System_String_o *Empty; // x20
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_438F2E0 & 1) == 0 )
  {
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&string_TypeInfo);
    this = (ServantStatusListViewItemDrawPortrait_o *)sub_B775C4(&StringLiteral_12245/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_INFO_OWN_SETTING_STATUS_ICON"*/);
    byte_438F2E0 = 1;
  }
  if ( !item )
LABEL_25:
    sub_B7769C(this, item);
  if ( !item->fields.userSvtEntity )
  {
    this = (ServantStatusListViewItemDrawPortrait_o *)v4->fields.maskBase;
    if ( !this )
      goto LABEL_25;
LABEL_19:
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    return;
  }
  this = (ServantStatusListViewItemDrawPortrait_o *)v4->fields.maskBase;
  if ( !this )
    goto LABEL_25;
  if ( !item->fields.isEnableOwnRandomSetting )
    goto LABEL_19;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  baseSprite = v4->fields.baseSprite;
  if ( !baseSprite )
    goto LABEL_25;
  this = (ServantStatusListViewItemDrawPortrait_o *)v4->fields.maskSprite;
  if ( !this )
    goto LABEL_25;
  UIWidget__set_height((UIWidget_o *)this, baseSprite->fields.mHeight, 0LL);
  this = (ServantStatusListViewItemDrawPortrait_o *)v4->fields.maskSprite;
  if ( !this )
    goto LABEL_25;
  UIWidget__ResizeCollider((UIWidget_o *)this, 0LL);
  this = (ServantStatusListViewItemDrawPortrait_o *)v4->fields.maskSprite;
  if ( !this )
    goto LABEL_25;
  this = (ServantStatusListViewItemDrawPortrait_o *)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)this,
                                                      0LL);
  if ( !v4->fields.baseSprite )
    goto LABEL_25;
  v6 = (UnityEngine_GameObject_o *)this;
  this = (ServantStatusListViewItemDrawPortrait_o *)UnityEngine_Component__get_transform(
                                                      (UnityEngine_Component_o *)v4->fields.baseSprite,
                                                      0LL);
  if ( !this )
    goto LABEL_25;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  GameObjectExtensions__SetLocalPositionY(v6, localPosition.fields.y, 0LL);
  if ( item->fields.isEnableOwnRandomSetting )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    Empty = LocalizationManager__Get((System_String_o *)StringLiteral_12245/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_INFO_OWN_SETTING_STATUS_ICON"*/, 0LL);
  }
  else
  {
    Empty = string_TypeInfo->static_fields->Empty;
  }
  this = (ServantStatusListViewItemDrawPortrait_o *)v4->fields.maskInfoLabel;
  if ( !this )
    goto LABEL_25;
  UILabel__set_overflowMethod((UILabel_o *)this, 2, 0LL);
  this = (ServantStatusListViewItemDrawPortrait_o *)v4->fields.maskInfoLabel;
  if ( !this )
    goto LABEL_25;
  UILabel__set_text((UILabel_o *)this, Empty, 0LL);
  this = (ServantStatusListViewItemDrawPortrait_o *)v4->fields.maskInfoLabel;
  if ( !this )
    goto LABEL_25;
  UILabel__SetCondensedScale((UILabel_o *)this, *(&v4->fields.MASK_LABEL_MAX_WIDTH + 1), 0LL);
}