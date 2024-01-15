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
  UnityEngine_Color___ctor_40666012(*(UnityEngine_Color_o *)(&v2 - 3), v3, v4, v5, (const MethodInfo *)&v10);
  this->fields.QUESTION_MARK_COLOR = v10;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusListViewItemDrawPortrait__Awake(
        ServantStatusListViewItemDrawPortrait_o *this,
        const MethodInfo *method)
{
  struct UISprite_array *charaLevelSpriteList; // x8
  int32_t buttonPitch; // w20
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
  int32_t mHeight; // w11
  int max_length; // kr00_4
  UnityEngine_Component_o *titleSprite; // x0
  int v21; // w8
  UnityEngine_Transform_o *v22; // x0
  float v23; // s0
  float v24; // s1
  float v25; // s2
  UnityEngine_GameObject_o *levelButtonBase; // x0
  int v27; // w8
  float v28; // s8
  UnityEngine_Transform_o *v29; // x0
  UnityEngine_Component_o *explanationLabel; // x0
  UnityEngine_Transform_o *v31; // x0
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v33; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v34; // 0:s0.4,4:s1.4,8:s2.4

  charaLevelSpriteList = this->fields.charaLevelSpriteList;
  if ( !charaLevelSpriteList )
    goto LABEL_27;
  if ( (int)charaLevelSpriteList->max_length > 3 )
  {
    v5 = (UnityEngine_Component_o *)charaLevelSpriteList->m_Items[0];
    if ( !v5 )
      goto LABEL_27;
    transform = UnityEngine_Component__get_transform(v5, 0LL);
    if ( !transform )
      goto LABEL_27;
    *(UnityEngine_Vector3_o *)(&v10 - 1) = UnityEngine_Transform__get_localPosition(transform, 0LL);
    v11 = this->fields.charaLevelSpriteList;
    if ( !v11 )
      goto LABEL_27;
    if ( v11->max_length <= 3 )
    {
      sub_B17100(v7, v8, v9);
      sub_B170A0();
    }
    v12 = (UnityEngine_Component_o *)v11->m_Items[3];
    if ( !v12 )
      goto LABEL_27;
    v13 = v10;
    v14 = UnityEngine_Component__get_transform(v12, 0LL);
    if ( !v14 )
      goto LABEL_27;
    localPosition = UnityEngine_Transform__get_localPosition(v14, 0LL);
    v15 = v13 - localPosition.fields.y;
    charaLevelSpriteList = this->fields.charaLevelSpriteList;
    v16 = (float)(v13 - localPosition.fields.y) == INFINITY ? -v15 : v15;
    buttonPitch = (int)v16;
    this->fields.buttonPitch = (int)v16;
    if ( !charaLevelSpriteList )
LABEL_27:
      sub_B170D4();
  }
  else
  {
    buttonPitch = this->fields.buttonPitch;
  }
  baseSprite = this->fields.baseSprite;
  if ( !baseSprite )
    goto LABEL_27;
  mHeight = baseSprite->fields.mHeight;
  max_length = charaLevelSpriteList->max_length;
  titleSprite = (UnityEngine_Component_o *)this->fields.titleSprite;
  v21 = max_length / 3 - 1;
  if ( max_length < 9 )
    v21 = 1;
  this->fields.baseSize.fields.x = (float)baseSprite->fields.mWidth;
  this->fields.baseSize.fields.y = (float)(mHeight - v21 * buttonPitch);
  this->fields.baseSize.fields.z = 0.0;
  if ( !titleSprite )
    goto LABEL_27;
  v22 = UnityEngine_Component__get_transform(titleSprite, 0LL);
  if ( !v22 )
    goto LABEL_27;
  *(UnityEngine_Vector3_o *)&v23 = UnityEngine_Transform__get_localPosition(v22, 0LL);
  levelButtonBase = this->fields.levelButtonBase;
  v27 = buttonPitch >= 0 ? buttonPitch : buttonPitch + 1;
  v28 = (float)(v27 >> 1);
  this->fields.titleBasePosition.fields.x = v23;
  this->fields.titleBasePosition.fields.y = v24 - v28;
  this->fields.titleBasePosition.fields.z = v25;
  if ( !levelButtonBase )
    goto LABEL_27;
  v29 = UnityEngine_GameObject__get_transform(levelButtonBase, 0LL);
  if ( !v29 )
    goto LABEL_27;
  v33 = UnityEngine_Transform__get_localPosition(v29, 0LL);
  explanationLabel = (UnityEngine_Component_o *)this->fields.explanationLabel;
  this->fields.levelButtonBasePosition.fields.x = v33.fields.x;
  this->fields.levelButtonBasePosition.fields.y = v33.fields.y - v28;
  this->fields.levelButtonBasePosition.fields.z = v33.fields.z;
  if ( !explanationLabel )
    goto LABEL_27;
  v31 = UnityEngine_Component__get_transform(explanationLabel, 0LL);
  if ( !v31 )
    goto LABEL_27;
  v34 = UnityEngine_Transform__get_localPosition(v31, 0LL);
  this->fields.explanationBasePosition.fields.x = v34.fields.x;
  this->fields.explanationBasePosition.fields.y = v34.fields.y + v28;
  this->fields.explanationBasePosition.fields.z = v34.fields.z;
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
  WebViewManager_o *Instance; // x0
  unsigned __int64 v16; // x21
  int32_t *v17; // x28
  struct UITexture_array *v18; // x8
  UITexture_o *v19; // x0
  UITexture_o *IsMine; // x0
  __int64 v21; // x1
  __int64 v22; // x2
  struct UISprite_array *v23; // x8
  UnityEngine_Behaviour_o *v24; // x0
  struct UITexture_array *v25; // x8
  char v26; // w23
  UITexture_o *v27; // x0
  struct UISprite_array *v28; // x8
  UnityEngine_Behaviour_o *v29; // x0
  const MethodInfo *v30; // x3
  struct UISprite_array *v31; // x8
  UISprite_o *v32; // x23
  struct UISprite_array *v33; // x8
  UIWidget_o *v34; // x0
  int v35; // w8
  int32_t v36; // w23
  int32_t SvtId; // w24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v38; // kr00_16
  WebViewManager_o *v39; // x0
  ServantLimitImageMaster_o *v40; // x23
  struct UITexture_array *servantTextureList; // x8
  UITexture_o *v42; // x23
  int32_t v43; // w25
  int32_t v44; // w24
  int32_t LimitCountByImageLimitCostumeIn; // w25
  struct UISprite_array *servantMaskSpriteList; // x8
  UnityEngine_Behaviour_o *v47; // x0
  struct UITexture_array *v49; // x8
  __int64 v50; // x24
  unsigned __int64 v51; // x28
  WebViewManager_o *v52; // x0
  ServantLimitImageMaster_o *v53; // x21
  struct UITexture_array *v54; // x8
  UITexture_o *v55; // x21
  int32_t v56; // w23
  int32_t v57; // w22
  int32_t v58; // w23
  struct UISprite_array *v59; // x8
  UnityEngine_Behaviour_o *v60; // x0
  struct UITexture_array *v61; // x8
  char v62; // w21
  UITexture_o *v63; // x0
  struct UISprite_array *v64; // x8
  UnityEngine_Behaviour_o *v65; // x0
  struct UISprite_array *v66; // x8
  UISprite_o *v67; // x21
  struct UISprite_array *v68; // x8
  UIWidget_o *v69; // x0
  ServantLimitSpoilerProtectionMaster_o *MasterData_WarQuestSelectionMaster; // [xsp+0h] [xbp-60h]
  int32_t v71; // [xsp+Ch] [xbp-54h]

  if ( (byte_40FDEAC & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, item);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v5);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___, v6);
    sub_B16FFC(&ImageLimitCount_TypeInfo, v7);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_B16FFC(&OptionManager_TypeInfo, v9);
    sub_B16FFC(&ServantAssetLoadManager_TypeInfo, v10);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_40FDEAC = 1;
  }
  if ( !item
    || (ConvertOverwritePortraitLimitCount = ServantStatusListViewItem__get_ConvertOverwritePortraitLimitCount(
                                               item,
                                               0LL),
        maxPortraitLimitCount = item->fields.maxPortraitLimitCount,
        portraitSelectList = item->fields.portraitSelectList,
        v71 = ConvertOverwritePortraitLimitCount,
        (Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL) )
  {
LABEL_104:
    sub_B170D4();
  }
  v16 = 0LL;
  v17 = &portraitSelectList->m_Items[1];
  MasterData_WarQuestSelectionMaster = (ServantLimitSpoilerProtectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                  (DataManager_o *)Instance,
                                                                                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___);
  do
  {
    if ( (__int64)v16 > maxPortraitLimitCount )
      goto LABEL_14;
    IsMine = (UITexture_o *)ServantStatusListViewItem__get_IsMine(item, 0LL);
    if ( ((unsigned __int8)IsMine & 1) != 0 )
      goto LABEL_109;
    if ( !portraitSelectList )
      goto LABEL_104;
    if ( v16 >= portraitSelectList->max_length )
      goto LABEL_106;
    if ( v17[v16] <= v71 )
    {
LABEL_109:
      if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !OptionManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      }
      if ( OptionManager__GetSpoilerSetting(0LL) )
        goto LABEL_49;
      IsMine = (UITexture_o *)ServantStatusListViewItem__get_IsMine(item, 0LL);
      if ( ((unsigned __int8)IsMine & 1) != 0 )
        goto LABEL_49;
      if ( !portraitSelectList )
        goto LABEL_104;
      if ( v16 >= portraitSelectList->max_length )
      {
LABEL_106:
        sub_B17100(IsMine, v21, v22);
        sub_B170A0();
      }
      v35 = v17[v16];
      if ( v35 >= 11 )
        v36 = v17[v16];
      else
        v36 = v35 + 1;
      SvtId = ServantStatusListViewItem__get_SvtId(item, 0LL);
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      v38 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(SvtId, 0LL);
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_104;
      IsMine = (UITexture_o *)ServantLimitSpoilerProtectionMaster__IsSpoilerLimitCount(
                                MasterData_WarQuestSelectionMaster,
                                v38,
                                v36,
                                0LL);
      if ( ((unsigned __int8)IsMine & 1) != 0 )
      {
LABEL_49:
        v39 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !v39 )
          goto LABEL_104;
        v40 = (ServantLimitImageMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                             (DataManager_o *)v39,
                                             (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
        IsMine = (UITexture_o *)ServantStatusListViewItem__get_SvtId(item, 0LL);
        if ( !portraitSelectList )
          goto LABEL_104;
        if ( v16 >= portraitSelectList->max_length )
          goto LABEL_106;
        if ( !v40 )
          goto LABEL_104;
        IsMine = (UITexture_o *)ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                  v40,
                                  (int32_t)IsMine,
                                  v17[v16],
                                  0LL);
        servantTextureList = this->fields.servantTextureList;
        if ( !servantTextureList )
          goto LABEL_104;
        if ( v16 >= servantTextureList->max_length )
          goto LABEL_106;
        v42 = servantTextureList->m_Items[v16];
        v43 = (int)IsMine;
        v44 = ServantStatusListViewItem__get_SvtId(item, 0LL);
        if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ImageLimitCount_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
        }
        LimitCountByImageLimitCostumeIn = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(v43, 0LL);
        if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
        }
        IsMine = ServantAssetLoadManager__loadStatusFace(v42, v44, LimitCountByImageLimitCostumeIn, 0LL);
        servantMaskSpriteList = this->fields.servantMaskSpriteList;
        if ( !servantMaskSpriteList )
          goto LABEL_104;
        if ( v16 >= servantMaskSpriteList->max_length )
          goto LABEL_106;
        v47 = (UnityEngine_Behaviour_o *)servantMaskSpriteList->m_Items[v16];
        if ( !v47 )
          goto LABEL_104;
        UnityEngine_Behaviour__set_enabled(v47, 0, 0LL);
        continue;
      }
      v18 = this->fields.servantTextureList;
      if ( !v18 )
        goto LABEL_104;
      if ( v16 >= v18->max_length )
        goto LABEL_106;
      v19 = v18->m_Items[v16];
      if ( !v19 )
        goto LABEL_104;
      IsMine = (UITexture_o *)((__int64 (__fastcall *)(UITexture_o *, _QWORD, Il2CppMethodPointer))v19->klass->vtable._27_set_mainTexture.method)(
                                v19,
                                0LL,
                                v19->klass->vtable._28_get_shader.methodPtr);
      v23 = this->fields.servantMaskSpriteList;
      if ( !v23 )
        goto LABEL_104;
      if ( v16 >= v23->max_length )
        goto LABEL_106;
      v24 = (UnityEngine_Behaviour_o *)v23->m_Items[v16];
      if ( !v24 )
        goto LABEL_104;
      UnityEngine_Behaviour__set_enabled(v24, 1, 0LL);
    }
    else
    {
LABEL_14:
      IsMine = (UITexture_o *)ServantStatusListViewItem__get_IsMine(item, 0LL);
      v25 = this->fields.servantTextureList;
      if ( !v25 )
        goto LABEL_104;
      if ( v16 >= v25->max_length )
        goto LABEL_106;
      v26 = (char)IsMine;
      v27 = v25->m_Items[v16];
      if ( !v27 )
        goto LABEL_104;
      IsMine = (UITexture_o *)((__int64 (__fastcall *)(UITexture_o *, _QWORD, Il2CppMethodPointer))v27->klass->vtable._27_set_mainTexture.method)(
                                v27,
                                0LL,
                                v27->klass->vtable._28_get_shader.methodPtr);
      v28 = this->fields.servantMaskSpriteList;
      if ( !v28 )
        goto LABEL_104;
      if ( v16 >= v28->max_length )
        goto LABEL_106;
      v29 = (UnityEngine_Behaviour_o *)v28->m_Items[v16];
      if ( !v29 )
        goto LABEL_104;
      UnityEngine_Behaviour__set_enabled(v29, 1, 0LL);
      if ( (v26 & 1) != 0 )
        continue;
    }
    v31 = this->fields.servantMaskSpriteList;
    if ( !v31 )
      goto LABEL_104;
    if ( v16 >= v31->max_length )
      goto LABEL_106;
    v32 = v31->m_Items[v16];
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    IsMine = (UITexture_o *)AtlasManager__SetNotOpenFace(v32, 0LL);
    v33 = this->fields.servantMaskSpriteList;
    if ( !v33 )
      goto LABEL_104;
    if ( v16 >= v33->max_length )
      goto LABEL_106;
    v34 = (UIWidget_o *)v33->m_Items[v16];
    if ( !v34 )
      goto LABEL_104;
    UIWidget__set_color(v34, this->fields.QUESTION_MARK_COLOR, 0LL);
  }
  while ( v16++ < 2 );
  v49 = this->fields.servantTextureList;
  if ( !v49 )
    goto LABEL_104;
  v50 = 0LL;
  while ( 1 )
  {
    v51 = v50 + 3;
    if ( v50 + 3 >= (int)v49->max_length )
      break;
    if ( !portraitSelectList )
      goto LABEL_104;
    if ( (__int64)v51 >= (int)portraitSelectList->max_length )
    {
      IsMine = (UITexture_o *)ServantStatusListViewItem__get_IsMine(item, 0LL);
      v61 = this->fields.servantTextureList;
      if ( !v61 )
        goto LABEL_104;
      if ( v51 >= v61->max_length )
        goto LABEL_106;
      v62 = (char)IsMine;
      v63 = v61->m_Items[v50 + 3];
      if ( !v63 )
        goto LABEL_104;
      IsMine = (UITexture_o *)((__int64 (__fastcall *)(UITexture_o *, _QWORD, Il2CppMethodPointer))v63->klass->vtable._27_set_mainTexture.method)(
                                v63,
                                0LL,
                                v63->klass->vtable._28_get_shader.methodPtr);
      v64 = this->fields.servantMaskSpriteList;
      if ( !v64 )
        goto LABEL_104;
      if ( v51 >= v64->max_length )
        goto LABEL_106;
      v65 = (UnityEngine_Behaviour_o *)v64->m_Items[v50 + 3];
      if ( !v65 )
        goto LABEL_104;
      UnityEngine_Behaviour__set_enabled(v65, 1, 0LL);
      if ( (v62 & 1) == 0 )
      {
        v66 = this->fields.servantMaskSpriteList;
        if ( !v66 )
          goto LABEL_104;
        if ( v51 >= v66->max_length )
          goto LABEL_106;
        v67 = v66->m_Items[v50 + 3];
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        IsMine = (UITexture_o *)AtlasManager__SetNotOpenFace(v67, 0LL);
        v68 = this->fields.servantMaskSpriteList;
        if ( !v68 )
          goto LABEL_104;
        if ( v51 >= v68->max_length )
          goto LABEL_106;
        v69 = (UIWidget_o *)v68->m_Items[v50 + 3];
        if ( !v69 )
          goto LABEL_104;
        UIWidget__set_color(v69, this->fields.QUESTION_MARK_COLOR, 0LL);
      }
    }
    else
    {
      v52 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v52 )
        goto LABEL_104;
      v53 = (ServantLimitImageMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)v52,
                                           (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
      IsMine = (UITexture_o *)ServantStatusListViewItem__get_SvtId(item, 0LL);
      if ( v51 >= portraitSelectList->max_length )
        goto LABEL_106;
      if ( !v53 )
        goto LABEL_104;
      IsMine = (UITexture_o *)ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                v53,
                                (int32_t)IsMine,
                                portraitSelectList->m_Items[v50 + 4],
                                0LL);
      v54 = this->fields.servantTextureList;
      if ( !v54 )
        goto LABEL_104;
      if ( v51 >= v54->max_length )
        goto LABEL_106;
      v55 = v54->m_Items[v50 + 3];
      v56 = (int)IsMine;
      v57 = ServantStatusListViewItem__get_SvtId(item, 0LL);
      if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ImageLimitCount_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      }
      v58 = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(v56, 0LL);
      if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      }
      IsMine = ServantAssetLoadManager__loadStatusFace(v55, v57, v58, 0LL);
      v59 = this->fields.servantMaskSpriteList;
      if ( !v59 )
        goto LABEL_104;
      if ( v51 >= v59->max_length )
        goto LABEL_106;
      v60 = (UnityEngine_Behaviour_o *)v59->m_Items[v50 + 3];
      if ( !v60 )
        goto LABEL_104;
      UnityEngine_Behaviour__set_enabled(v60, 0, 0LL);
    }
    v49 = this->fields.servantTextureList;
    ++v50;
    if ( !v49 )
      goto LABEL_104;
  }
  ServantStatusListViewItemDrawPortrait__SetupButton(this, item, 0, v30);
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
  System_String_o *v17; // x0
  struct UserServantEntity_o *userSvtEntity; // x8
  __int64 v19; // x22
  __int64 v20; // x23
  UILabel_o *v21; // x22
  System_String_o *v22; // x0
  struct UserServantCollectionEntity_o *userSvtCollectionEntity; // x8
  UILabel_o *v24; // x22
  System_String_o *v25; // x0
  struct ServantLeaderInfo_o *servantLeaderInfo; // x8
  int32_t v27; // w22
  System_String_o *ServantStatusExplanationText; // x0
  struct UILabel_o *v29; // x23
  System_String_o *mText; // x25
  System_String_o *v31; // x24
  Il2CppObject *LimitCountSealedServantName; // x0
  System_String_o *v33; // x0
  System_String_o *v34; // x0
  System_String_o *v35; // x0
  struct System_Int32_array *portraitSelectList; // x8
  int max_length; // w8
  int32_t buttonPitch; // w9
  float x; // s8
  float y; // s9
  float z; // s10
  int v42; // w10
  bool v43; // cc
  int v44; // w10
  UnityEngine_Object_o *baseCollider; // x21
  int v46; // w9
  int v47; // w23
  float v48; // s9
  UnityEngine_BoxCollider_o *v49; // x0
  UIWidget_o *baseSprite; // x0
  double v51; // d0
  UIWidget_o *v52; // x0
  double v53; // d0
  UnityEngine_Component_o *titleSprite; // x0
  int v55; // w21
  float v56; // s8
  float v57; // s11
  float v58; // s9
  UnityEngine_Transform_o *transform; // x0
  float v60; // s10
  UnityEngine_GameObject_o *levelButtonBase; // x0
  float v62; // s8
  float v63; // s11
  float v64; // s9
  UnityEngine_Transform_o *v65; // x0
  UnityEngine_Component_o *v66; // x0
  float v67; // s8
  float v68; // s10
  float v69; // s9
  UnityEngine_Transform_o *v70; // x0
  const MethodInfo *v71; // x3
  const MethodInfo *v72; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v73; // 0:x0.16
  UnityEngine_Vector3_o v74; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v75; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v76; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v77; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FDEAB & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_ServantLimitImageMaster___, item);
    sub_B16FFC(&DataManager_TypeInfo, v7);
    sub_B16FFC(&LocalizationManager_TypeInfo, v8);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v9);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    sub_B16FFC(&StringLiteral_11924/*"SERVANT_STATUS_EXPLANATION_PORTRAIT3"*/, v11);
    sub_B16FFC(&StringLiteral_11923/*"SERVANT_STATUS_EXPLANATION_PORTRAIT2"*/, v12);
    sub_B16FFC(&StringLiteral_11922/*"SERVANT_STATUS_EXPLANATION_PORTRAIT"*/, v13);
    sub_B16FFC(&StringLiteral_11925/*"SERVANT_STATUS_EXPLANATION_PORTRAIT_LIMIT_COUNT_SEALED_MSG"*/, v14);
    byte_40FDEAB = 1;
  }
  this->fields.MASK_LABEL_MAX_WIDTH = mode;
  if ( item && mode )
  {
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
      v17 = LocalizationManager__Get((System_String_o *)StringLiteral_11922/*"SERVANT_STATUS_EXPLANATION_PORTRAIT"*/, 0LL);
      if ( !explanationLabel )
        goto LABEL_81;
      UILabel__set_text(explanationLabel, v17, 0LL);
      userSvtEntity = item->fields.userSvtEntity;
      if ( !userSvtEntity )
        goto LABEL_81;
      v20 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
      v19 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
    }
    else if ( item->fields.userSvtCollectionEntity )
    {
      v21 = this->fields.explanationLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v22 = LocalizationManager__Get((System_String_o *)StringLiteral_11923/*"SERVANT_STATUS_EXPLANATION_PORTRAIT2"*/, 0LL);
      if ( !v21 )
        goto LABEL_81;
      UILabel__set_text(v21, v22, 0LL);
      userSvtCollectionEntity = item->fields.userSvtCollectionEntity;
      if ( !userSvtCollectionEntity )
        goto LABEL_81;
      v20 = *(_QWORD *)&userSvtCollectionEntity->fields.svtId.fields.currentCryptoKey;
      v19 = *(_QWORD *)&userSvtCollectionEntity->fields.svtId.fields.fakeValue;
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
        v35 = LocalizationManager__Get((System_String_o *)StringLiteral_11924/*"SERVANT_STATUS_EXPLANATION_PORTRAIT3"*/, 0LL);
        if ( !v24 )
          goto LABEL_81;
        UILabel__set_text(v24, v35, 0LL);
        goto LABEL_43;
      }
      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v25 = LocalizationManager__Get((System_String_o *)StringLiteral_11924/*"SERVANT_STATUS_EXPLANATION_PORTRAIT3"*/, 0LL);
      if ( !v24 )
        goto LABEL_81;
      UILabel__set_text(v24, v25, 0LL);
      servantLeaderInfo = item->fields.servantLeaderInfo;
      if ( !servantLeaderInfo )
        goto LABEL_81;
      v20 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.currentCryptoKey;
      v19 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.fakeValue;
    }
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v73.fields.currentCryptoKey = v20;
    *(_QWORD *)&v73.fields.fakeValue = v19;
    v27 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v73, 0LL);
    if ( !v27 )
      goto LABEL_44;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_81;
    if ( ServantLimitImageMaster__IsServantLimitCountSeal(Master_WarQuestSelectionMaster, v27, 3, 0LL) )
    {
      ServantStatusExplanationText = ServantLimitImageMaster__GetServantStatusExplanationText(
                                       Master_WarQuestSelectionMaster,
                                       (System_String_o *)StringLiteral_11925/*"SERVANT_STATUS_EXPLANATION_PORTRAIT_LIMIT_COUNT_SEALED_MSG"*/,
                                       v27,
                                       0LL);
      v29 = this->fields.explanationLabel;
      if ( !v29 )
        goto LABEL_81;
      mText = v29->fields.mText;
      v31 = ServantStatusExplanationText;
      LimitCountSealedServantName = (Il2CppObject *)ServantLimitImageMaster__GetLimitCountSealedServantName(
                                                      Master_WarQuestSelectionMaster,
                                                      v27,
                                                      3,
                                                      0LL);
      v33 = System_String__Format(v31, LimitCountSealedServantName, 0LL);
      v34 = System_String__Concat_43743732(mText, v33, 0LL);
      UILabel__set_text(v29, v34, 0LL);
      v27 = 1;
      goto LABEL_44;
    }
LABEL_43:
    v27 = 0;
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
    v42 = max_length / 3;
    if ( max_length != 3 * (max_length / 3) )
      ++v42;
    v43 = v42 < 3;
    v44 = v42 - 1;
    if ( v43 )
      v44 = 1;
    baseCollider = (UnityEngine_Object_o *)this->fields.baseCollider;
    v46 = v44 * buttonPitch;
    if ( v27 )
      v47 = v46 + 22;
    else
      v47 = v46;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v48 = y + (float)v47;
    if ( UnityEngine_Object__op_Inequality(baseCollider, 0LL, 0LL) )
    {
      v49 = this->fields.baseCollider;
      if ( !v49 )
        goto LABEL_81;
      v74.fields.x = x;
      v74.fields.y = v48;
      v74.fields.z = z;
      UnityEngine_BoxCollider__set_size(v49, v74, 0LL);
    }
    baseSprite = (UIWidget_o *)this->fields.baseSprite;
    if ( baseSprite )
    {
      v51 = x;
      if ( x == INFINITY )
        v51 = -x;
      UIWidget__set_width(baseSprite, (int)v51, 0LL);
      v52 = (UIWidget_o *)this->fields.baseSprite;
      if ( v52 )
      {
        v53 = v48;
        if ( v48 == INFINITY )
          v53 = -INFINITY;
        UIWidget__set_height(v52, (int)v53, 0LL);
        titleSprite = (UnityEngine_Component_o *)this->fields.titleSprite;
        v55 = v47 >= 0 ? v47 : v47 + 1;
        if ( titleSprite )
        {
          v56 = this->fields.titleBasePosition.fields.x;
          v57 = this->fields.titleBasePosition.fields.y;
          v58 = this->fields.titleBasePosition.fields.z;
          transform = UnityEngine_Component__get_transform(titleSprite, 0LL);
          if ( transform )
          {
            v60 = (float)(v55 >> 1);
            v75.fields.y = v57 + v60;
            v75.fields.x = v56;
            v75.fields.z = v58;
            UnityEngine_Transform__set_localPosition(transform, v75, 0LL);
            levelButtonBase = this->fields.levelButtonBase;
            if ( levelButtonBase )
            {
              v62 = this->fields.levelButtonBasePosition.fields.x;
              v63 = this->fields.levelButtonBasePosition.fields.y;
              v64 = this->fields.levelButtonBasePosition.fields.z;
              v65 = UnityEngine_GameObject__get_transform(levelButtonBase, 0LL);
              if ( v65 )
              {
                v76.fields.y = v63 + v60;
                v76.fields.x = v62;
                v76.fields.z = v64;
                UnityEngine_Transform__set_localPosition(v65, v76, 0LL);
                v66 = (UnityEngine_Component_o *)this->fields.explanationLabel;
                v67 = v27
                    ? (float)(this->fields.explanationBasePosition.fields.y - v60) + 11.0
                    : this->fields.explanationBasePosition.fields.y - v60;
                if ( v66 )
                {
                  v68 = this->fields.explanationBasePosition.fields.x;
                  v69 = this->fields.explanationBasePosition.fields.z;
                  v70 = UnityEngine_Component__get_transform(v66, 0LL);
                  if ( v70 )
                  {
                    v77.fields.x = v68;
                    v77.fields.y = v67;
                    v77.fields.z = v69;
                    UnityEngine_Transform__set_localPosition(v70, v77, 0LL);
                    ServantStatusListViewItemDrawPortrait__SetupButton(this, item, 1, v71);
                    ServantStatusListViewItemDrawPortrait__SetupMask(this, item, v72);
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
    sub_B170D4();
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
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
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
  struct UICommonButton_array *servantButtonList; // x8
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
  struct System_Int32_array *portraitSelectList; // [xsp+20h] [xbp-A0h]
  unsigned int v111; // [xsp+2Ch] [xbp-94h] BYREF
  UnityEngine_Color_o v112; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_40FDEAD & 1) == 0 )
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
    byte_40FDEAD = 1;
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
  ConvertOverwritePortraitLimitCount = ServantStatusListViewItem__get_ConvertOverwritePortraitLimitCount(item, 0LL);
  maxPortraitLimitCount = item->fields.maxPortraitLimitCount;
  v108 = ConvertOverwritePortraitLimitCount;
  portraitSelectList = item->fields.portraitSelectList;
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
    if ( v39 <= maxPortraitLimitCount )
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
    servantButtonList = this->fields.servantButtonList;
    if ( !servantButtonList )
      goto LABEL_182;
    if ( v111 >= servantButtonList->max_length )
      goto LABEL_184;
    v58 = servantButtonList->m_Items[v111];
    if ( (v41 & v44) != 0 )
    {
      if ( !v58 )
        goto LABEL_182;
      v59 = v44 == 0 || isInit;
      UICommonButton__SetColliderEnable(v58, 0, v44 == 0 || isInit, 0LL);
      charaLevelButtonList = this->fields.charaLevelButtonList;
      if ( !charaLevelButtonList )
        goto LABEL_182;
      v28 = portraitSelectList;
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
      v28 = portraitSelectList;
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
    v72 = (int)(v111 - 2) < 0;
    v39 = ++v111;
  }
  while ( v72 != __OFSUB__(v111, 3) );
  v73 = this->fields.charaLevelButtonList;
  if ( !v73 )
    goto LABEL_182;
  v74 = 11LL;
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
      if ( v75 >= portraitSelectList->max_length )
        goto LABEL_184;
      if ( !v106 )
        goto LABEL_182;
      Entity = ServantCostumeMaster__GetEntity(v106, (int32_t)SvtId, portraitSelectList->m_Items[v75 + 1], 0LL);
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
    v93 = this->fields.servantButtonList;
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
      v28 = portraitSelectList;
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
      v28 = portraitSelectList;
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
      v28 = portraitSelectList;
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


void __fastcall ServantStatusListViewItemDrawPortrait__SetupMask(
        ServantStatusListViewItemDrawPortrait_o *this,
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

  if ( (byte_40FDEAE & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, item);
    sub_B16FFC(&OptionManager_TypeInfo, v5);
    sub_B16FFC(&string_TypeInfo, v6);
    sub_B16FFC(&StringLiteral_11960/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_INFO_ALL_SETTING_STATUS_ICON"*/, v7);
    sub_B16FFC(&StringLiteral_11964/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_INFO_OWN_SETTING_STATUS_ICON"*/, v8);
    byte_40FDEAE = 1;
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
    v18 = &StringLiteral_11960/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_INFO_ALL_SETTING_STATUS_ICON"*/;
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
    v18 = &StringLiteral_11964/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_INFO_OWN_SETTING_STATUS_ICON"*/;
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