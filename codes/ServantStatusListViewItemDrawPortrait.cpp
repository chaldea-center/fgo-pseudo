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
  UnityEngine_Color___ctor_41567816(*(UnityEngine_Color_o *)(&v2 - 3), v3, v4, v5, (const MethodInfo *)&v10);
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
      v19 = sub_B5D6C8(this);
      sub_B5D668(v19, 0LL);
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
      sub_B5D69C(this, method);
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
  __int64 v3; // x3
  ServantStatusListViewItem_o *v4; // x19
  ServantStatusListViewItemDrawPortrait_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int32_t ConvertOverwritePortraitLimitCount; // w0
  signed __int64 maxPortraitLimitCount; // x22
  struct System_Int32_array *portraitSelectList; // x26
  unsigned __int64 v30; // x21
  int32_t *v31; // x28
  struct UITexture_array *v32; // x8
  struct UISprite_array *v33; // x8
  struct UITexture_array *v34; // x8
  char v35; // w23
  struct UISprite_array *v36; // x8
  const MethodInfo *v37; // x3
  struct UISprite_array *v38; // x8
  UISprite_o *v39; // x23
  struct UISprite_array *v40; // x8
  int v41; // w8
  int32_t v42; // w23
  int32_t SvtId; // w24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v44; // kr00_16
  ServantLimitImageMaster_o *v45; // x23
  struct UITexture_array *servantTextureList; // x8
  UITexture_o *v47; // x23
  int32_t v48; // w25
  int32_t v49; // w24
  int32_t LimitCountByImageLimitCostumeIn; // w25
  struct UISprite_array *servantMaskSpriteList; // x8
  struct UITexture_array *v53; // x8
  __int64 v54; // x24
  unsigned __int64 v55; // x28
  ServantLimitImageMaster_o *v56; // x21
  struct UITexture_array *v57; // x8
  UITexture_o *v58; // x21
  int32_t v59; // w23
  int32_t v60; // w22
  int32_t v61; // w23
  struct UISprite_array *v62; // x8
  struct UITexture_array *v63; // x8
  char v64; // w21
  struct UISprite_array *v65; // x8
  struct UISprite_array *v66; // x8
  UISprite_o *v67; // x21
  struct UISprite_array *v68; // x8
  __int64 v69; // x0
  ServantStatusListViewItemDrawPortrait_o *MasterData_WarQuestSelectionMaster; // [xsp+0h] [xbp-60h]
  int32_t v71; // [xsp+Ch] [xbp-54h]

  v4 = item;
  v5 = this;
  if ( (byte_42ECB68 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)item, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v6, v7, v8);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___, v9, v10, v11);
    sub_B5D5C4(&ImageLimitCount_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&OptionManager_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&ServantAssetLoadManager_TypeInfo, v21, v22, v23);
    this = (ServantStatusListViewItemDrawPortrait_o *)sub_B5D5C4(
                                                        &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                                        v24,
                                                        v25,
                                                        v26);
    byte_42ECB68 = 1;
  }
  if ( !v4
    || (ConvertOverwritePortraitLimitCount = ServantStatusListViewItem__get_ConvertOverwritePortraitLimitCount(v4, 0LL),
        maxPortraitLimitCount = v4->fields.maxPortraitLimitCount,
        portraitSelectList = v4->fields.portraitSelectList,
        v71 = ConvertOverwritePortraitLimitCount,
        (this = (ServantStatusListViewItemDrawPortrait_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL) )
  {
LABEL_104:
    sub_B5D69C(this, item);
  }
  v30 = 0LL;
  v31 = &portraitSelectList->m_Items[1];
  MasterData_WarQuestSelectionMaster = (ServantStatusListViewItemDrawPortrait_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                    (DataManager_o *)this,
                                                                                    (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___);
  do
  {
    if ( (__int64)v30 > maxPortraitLimitCount )
      goto LABEL_14;
    this = (ServantStatusListViewItemDrawPortrait_o *)ServantStatusListViewItem__get_IsMine(v4, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
      goto LABEL_109;
    if ( !portraitSelectList )
      goto LABEL_104;
    if ( v30 >= portraitSelectList->max_length )
      goto LABEL_106;
    if ( v31[v30] <= v71 )
    {
LABEL_109:
      if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !OptionManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      }
      if ( OptionManager__GetSpoilerSetting(0LL) )
        goto LABEL_49;
      this = (ServantStatusListViewItemDrawPortrait_o *)ServantStatusListViewItem__get_IsMine(v4, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
        goto LABEL_49;
      if ( !portraitSelectList )
        goto LABEL_104;
      if ( v30 >= portraitSelectList->max_length )
      {
LABEL_106:
        v69 = sub_B5D6C8(this);
        sub_B5D668(v69, 0LL);
      }
      v41 = v31[v30];
      if ( v41 >= 11 )
        v42 = v31[v30];
      else
        v42 = v41 + 1;
      SvtId = ServantStatusListViewItem__get_SvtId(v4, 0LL);
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      v44 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(SvtId, 0LL);
      item = *(ServantStatusListViewItem_o **)&v44.fields.fakeValue;
      this = MasterData_WarQuestSelectionMaster;
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_104;
      this = (ServantStatusListViewItemDrawPortrait_o *)ServantLimitSpoilerProtectionMaster__IsSpoilerLimitCount(
                                                          (ServantLimitSpoilerProtectionMaster_o *)MasterData_WarQuestSelectionMaster,
                                                          v44,
                                                          v42,
                                                          0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
LABEL_49:
        this = (ServantStatusListViewItemDrawPortrait_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_104;
        v45 = (ServantLimitImageMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                             (DataManager_o *)this,
                                             (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
        this = (ServantStatusListViewItemDrawPortrait_o *)ServantStatusListViewItem__get_SvtId(v4, 0LL);
        if ( !portraitSelectList )
          goto LABEL_104;
        if ( v30 >= portraitSelectList->max_length )
          goto LABEL_106;
        if ( !v45 )
          goto LABEL_104;
        this = (ServantStatusListViewItemDrawPortrait_o *)ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                                            v45,
                                                            (int32_t)this,
                                                            v31[v30],
                                                            0LL);
        servantTextureList = v5->fields.servantTextureList;
        if ( !servantTextureList )
          goto LABEL_104;
        if ( v30 >= servantTextureList->max_length )
          goto LABEL_106;
        v47 = servantTextureList->m_Items[v30];
        v48 = (int)this;
        v49 = ServantStatusListViewItem__get_SvtId(v4, 0LL);
        if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ImageLimitCount_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
        }
        LimitCountByImageLimitCostumeIn = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(v48, 0LL);
        if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
        }
        this = (ServantStatusListViewItemDrawPortrait_o *)ServantAssetLoadManager__loadStatusFace(
                                                            v47,
                                                            v49,
                                                            LimitCountByImageLimitCostumeIn,
                                                            0LL);
        servantMaskSpriteList = v5->fields.servantMaskSpriteList;
        if ( !servantMaskSpriteList )
          goto LABEL_104;
        if ( v30 >= servantMaskSpriteList->max_length )
          goto LABEL_106;
        this = (ServantStatusListViewItemDrawPortrait_o *)servantMaskSpriteList->m_Items[v30];
        if ( !this )
          goto LABEL_104;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0LL);
        continue;
      }
      v32 = v5->fields.servantTextureList;
      if ( !v32 )
        goto LABEL_104;
      if ( v30 >= v32->max_length )
        goto LABEL_106;
      this = (ServantStatusListViewItemDrawPortrait_o *)v32->m_Items[v30];
      if ( !this )
        goto LABEL_104;
      this = (ServantStatusListViewItemDrawPortrait_o *)(*(__int64 (__fastcall **)(ServantStatusListViewItemDrawPortrait_o *, _QWORD, _QWORD))&this->klass[1]._2.initializationExceptionGCHandle)(
                                                          this,
                                                          0LL,
                                                          *(_QWORD *)&this->klass[1]._2.cctor_finished);
      v33 = v5->fields.servantMaskSpriteList;
      if ( !v33 )
        goto LABEL_104;
      if ( v30 >= v33->max_length )
        goto LABEL_106;
      this = (ServantStatusListViewItemDrawPortrait_o *)v33->m_Items[v30];
      if ( !this )
        goto LABEL_104;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 1, 0LL);
    }
    else
    {
LABEL_14:
      this = (ServantStatusListViewItemDrawPortrait_o *)ServantStatusListViewItem__get_IsMine(v4, 0LL);
      v34 = v5->fields.servantTextureList;
      if ( !v34 )
        goto LABEL_104;
      if ( v30 >= v34->max_length )
        goto LABEL_106;
      v35 = (char)this;
      this = (ServantStatusListViewItemDrawPortrait_o *)v34->m_Items[v30];
      if ( !this )
        goto LABEL_104;
      this = (ServantStatusListViewItemDrawPortrait_o *)(*(__int64 (__fastcall **)(ServantStatusListViewItemDrawPortrait_o *, _QWORD, _QWORD))&this->klass[1]._2.initializationExceptionGCHandle)(
                                                          this,
                                                          0LL,
                                                          *(_QWORD *)&this->klass[1]._2.cctor_finished);
      v36 = v5->fields.servantMaskSpriteList;
      if ( !v36 )
        goto LABEL_104;
      if ( v30 >= v36->max_length )
        goto LABEL_106;
      this = (ServantStatusListViewItemDrawPortrait_o *)v36->m_Items[v30];
      if ( !this )
        goto LABEL_104;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 1, 0LL);
      if ( (v35 & 1) != 0 )
        continue;
    }
    v38 = v5->fields.servantMaskSpriteList;
    if ( !v38 )
      goto LABEL_104;
    if ( v30 >= v38->max_length )
      goto LABEL_106;
    v39 = v38->m_Items[v30];
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    this = (ServantStatusListViewItemDrawPortrait_o *)AtlasManager__SetNotOpenFace(v39, 0LL);
    v40 = v5->fields.servantMaskSpriteList;
    if ( !v40 )
      goto LABEL_104;
    if ( v30 >= v40->max_length )
      goto LABEL_106;
    this = (ServantStatusListViewItemDrawPortrait_o *)v40->m_Items[v30];
    if ( !this )
      goto LABEL_104;
    UIWidget__set_color((UIWidget_o *)this, v5->fields.QUESTION_MARK_COLOR, 0LL);
  }
  while ( v30++ < 2 );
  v53 = v5->fields.servantTextureList;
  if ( !v53 )
    goto LABEL_104;
  v54 = 0LL;
  while ( 1 )
  {
    v55 = v54 + 3;
    if ( v54 + 3 >= (int)v53->max_length )
      break;
    if ( !portraitSelectList )
      goto LABEL_104;
    if ( (__int64)v55 >= (int)portraitSelectList->max_length )
    {
      this = (ServantStatusListViewItemDrawPortrait_o *)ServantStatusListViewItem__get_IsMine(v4, 0LL);
      v63 = v5->fields.servantTextureList;
      if ( !v63 )
        goto LABEL_104;
      if ( v55 >= v63->max_length )
        goto LABEL_106;
      v64 = (char)this;
      this = (ServantStatusListViewItemDrawPortrait_o *)v63->m_Items[v54 + 3];
      if ( !this )
        goto LABEL_104;
      this = (ServantStatusListViewItemDrawPortrait_o *)(*(__int64 (__fastcall **)(ServantStatusListViewItemDrawPortrait_o *, _QWORD, _QWORD))&this->klass[1]._2.initializationExceptionGCHandle)(
                                                          this,
                                                          0LL,
                                                          *(_QWORD *)&this->klass[1]._2.cctor_finished);
      v65 = v5->fields.servantMaskSpriteList;
      if ( !v65 )
        goto LABEL_104;
      if ( v55 >= v65->max_length )
        goto LABEL_106;
      this = (ServantStatusListViewItemDrawPortrait_o *)v65->m_Items[v54 + 3];
      if ( !this )
        goto LABEL_104;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 1, 0LL);
      if ( (v64 & 1) == 0 )
      {
        v66 = v5->fields.servantMaskSpriteList;
        if ( !v66 )
          goto LABEL_104;
        if ( v55 >= v66->max_length )
          goto LABEL_106;
        v67 = v66->m_Items[v54 + 3];
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        this = (ServantStatusListViewItemDrawPortrait_o *)AtlasManager__SetNotOpenFace(v67, 0LL);
        v68 = v5->fields.servantMaskSpriteList;
        if ( !v68 )
          goto LABEL_104;
        if ( v55 >= v68->max_length )
          goto LABEL_106;
        this = (ServantStatusListViewItemDrawPortrait_o *)v68->m_Items[v54 + 3];
        if ( !this )
          goto LABEL_104;
        UIWidget__set_color((UIWidget_o *)this, v5->fields.QUESTION_MARK_COLOR, 0LL);
      }
    }
    else
    {
      this = (ServantStatusListViewItemDrawPortrait_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_104;
      v56 = (ServantLimitImageMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)this,
                                           (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
      this = (ServantStatusListViewItemDrawPortrait_o *)ServantStatusListViewItem__get_SvtId(v4, 0LL);
      if ( v55 >= portraitSelectList->max_length )
        goto LABEL_106;
      if ( !v56 )
        goto LABEL_104;
      this = (ServantStatusListViewItemDrawPortrait_o *)ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                                          v56,
                                                          (int32_t)this,
                                                          portraitSelectList->m_Items[v54 + 4],
                                                          0LL);
      v57 = v5->fields.servantTextureList;
      if ( !v57 )
        goto LABEL_104;
      if ( v55 >= v57->max_length )
        goto LABEL_106;
      v58 = v57->m_Items[v54 + 3];
      v59 = (int)this;
      v60 = ServantStatusListViewItem__get_SvtId(v4, 0LL);
      if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ImageLimitCount_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      }
      v61 = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(v59, 0LL);
      if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      }
      this = (ServantStatusListViewItemDrawPortrait_o *)ServantAssetLoadManager__loadStatusFace(v58, v60, v61, 0LL);
      v62 = v5->fields.servantMaskSpriteList;
      if ( !v62 )
        goto LABEL_104;
      if ( v55 >= v62->max_length )
        goto LABEL_106;
      this = (ServantStatusListViewItemDrawPortrait_o *)v62->m_Items[v54 + 3];
      if ( !this )
        goto LABEL_104;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0LL);
    }
    v53 = v5->fields.servantTextureList;
    ++v54;
    if ( !v53 )
      goto LABEL_104;
  }
  ServantStatusListViewItemDrawPortrait__SetupButton(v5, v4, 0, v37);
}


void __fastcall ServantStatusListViewItemDrawPortrait__SetItem(
        ServantStatusListViewItemDrawPortrait_o *this,
        ServantStatusListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  ServantLimitImageMaster_o *Master_WarQuestSelectionMaster; // x21
  UILabel_o *explanationLabel; // x22
  System_String_o *IsServantLimitCountSeal; // x0
  __int64 v34; // x1
  struct UserServantEntity_o *userSvtEntity; // x8
  __int64 v36; // x22
  __int64 v37; // x23
  UILabel_o *v38; // x22
  struct UserServantCollectionEntity_o *userSvtCollectionEntity; // x8
  UILabel_o *v40; // x22
  struct ServantLeaderInfo_o *servantLeaderInfo; // x8
  int32_t v42; // w22
  struct UILabel_o *v43; // x23
  System_String_o *mText; // x25
  System_String_o *v45; // x24
  Il2CppObject *LimitCountSealedServantName; // x0
  System_String_o *v47; // x0
  System_String_o *v48; // x0
  struct System_Int32_array *portraitSelectList; // x8
  int max_length; // w8
  int32_t buttonPitch; // w9
  float x; // s8
  float y; // s9
  float z; // s10
  int v55; // w10
  bool v56; // cc
  int v57; // w10
  UnityEngine_Object_o *baseCollider; // x21
  int v59; // w9
  int v60; // w23
  float v61; // s9
  double v62; // d0
  double v63; // d0
  int v64; // w21
  float v65; // s8
  float v66; // s11
  float v67; // s9
  float v68; // s10
  float v69; // s8
  float v70; // s11
  float v71; // s9
  float v72; // s8
  float v73; // s10
  float v74; // s9
  const MethodInfo *v75; // x3
  const MethodInfo *v76; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v77; // 0:x0.16
  UnityEngine_Vector3_o v78; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v79; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v80; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v81; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42ECB67 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantLimitImageMaster___, (_DWORD)item, mode, method);
    sub_B5D5C4(&DataManager_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&StringLiteral_12123/*"SERVANT_STATUS_EXPLANATION_PORTRAIT3"*/, v19, v20, v21);
    sub_B5D5C4(&StringLiteral_12122/*"SERVANT_STATUS_EXPLANATION_PORTRAIT2"*/, v22, v23, v24);
    sub_B5D5C4(&StringLiteral_12121/*"SERVANT_STATUS_EXPLANATION_PORTRAIT"*/, v25, v26, v27);
    sub_B5D5C4(&StringLiteral_12124/*"SERVANT_STATUS_EXPLANATION_PORTRAIT_LIMIT_COUNT_SEALED_MSG"*/, v28, v29, v30);
    byte_42ECB67 = 1;
  }
  ServantStatusListViewItemDraw__SetItem((ServantStatusListViewItemDraw_o *)this, item, mode, 0LL);
  if ( item && mode )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (ServantLimitImageMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
    if ( item->fields.userSvtEntity )
    {
      explanationLabel = this->fields.explanationLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      IsServantLimitCountSeal = LocalizationManager__Get((System_String_o *)StringLiteral_12121/*"SERVANT_STATUS_EXPLANATION_PORTRAIT"*/, 0LL);
      if ( !explanationLabel )
        goto LABEL_81;
      UILabel__set_text(explanationLabel, IsServantLimitCountSeal, 0LL);
      userSvtEntity = item->fields.userSvtEntity;
      if ( !userSvtEntity )
        goto LABEL_81;
      v37 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
      v36 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
    }
    else if ( item->fields.userSvtCollectionEntity )
    {
      v38 = this->fields.explanationLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      IsServantLimitCountSeal = LocalizationManager__Get((System_String_o *)StringLiteral_12122/*"SERVANT_STATUS_EXPLANATION_PORTRAIT2"*/, 0LL);
      if ( !v38 )
        goto LABEL_81;
      UILabel__set_text(v38, IsServantLimitCountSeal, 0LL);
      userSvtCollectionEntity = item->fields.userSvtCollectionEntity;
      if ( !userSvtCollectionEntity )
        goto LABEL_81;
      v37 = *(_QWORD *)&userSvtCollectionEntity->fields.svtId.fields.currentCryptoKey;
      v36 = *(_QWORD *)&userSvtCollectionEntity->fields.svtId.fields.fakeValue;
    }
    else
    {
      v40 = this->fields.explanationLabel;
      if ( !item->fields.servantLeaderInfo )
      {
        if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        IsServantLimitCountSeal = LocalizationManager__Get((System_String_o *)StringLiteral_12123/*"SERVANT_STATUS_EXPLANATION_PORTRAIT3"*/, 0LL);
        if ( !v40 )
          goto LABEL_81;
        UILabel__set_text(v40, IsServantLimitCountSeal, 0LL);
        goto LABEL_43;
      }
      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      IsServantLimitCountSeal = LocalizationManager__Get((System_String_o *)StringLiteral_12123/*"SERVANT_STATUS_EXPLANATION_PORTRAIT3"*/, 0LL);
      if ( !v40 )
        goto LABEL_81;
      UILabel__set_text(v40, IsServantLimitCountSeal, 0LL);
      servantLeaderInfo = item->fields.servantLeaderInfo;
      if ( !servantLeaderInfo )
        goto LABEL_81;
      v37 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.currentCryptoKey;
      v36 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.fakeValue;
    }
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v77.fields.currentCryptoKey = v37;
    *(_QWORD *)&v77.fields.fakeValue = v36;
    IsServantLimitCountSeal = (System_String_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                                   v77,
                                                   0LL);
    v42 = (int)IsServantLimitCountSeal;
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
                                  (System_String_o *)StringLiteral_12124/*"SERVANT_STATUS_EXPLANATION_PORTRAIT_LIMIT_COUNT_SEALED_MSG"*/,
                                  v42,
                                  0LL);
      v43 = this->fields.explanationLabel;
      if ( !v43 )
        goto LABEL_81;
      mText = v43->fields.mText;
      v45 = IsServantLimitCountSeal;
      LimitCountSealedServantName = (Il2CppObject *)ServantLimitImageMaster__GetLimitCountSealedServantName(
                                                      Master_WarQuestSelectionMaster,
                                                      v42,
                                                      3,
                                                      0LL);
      v47 = System_String__Format(v45, LimitCountSealedServantName, 0LL);
      v48 = System_String__Concat_44577788(mText, v47, 0LL);
      UILabel__set_text(v43, v48, 0LL);
      v42 = 1;
      goto LABEL_44;
    }
LABEL_43:
    v42 = 0;
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
    v55 = max_length / 3;
    if ( max_length != 3 * (max_length / 3) )
      ++v55;
    v56 = v55 < 3;
    v57 = v55 - 1;
    if ( v56 )
      v57 = 1;
    baseCollider = (UnityEngine_Object_o *)this->fields.baseCollider;
    v59 = v57 * buttonPitch;
    if ( v42 )
      v60 = v59 + 22;
    else
      v60 = v59;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v61 = y + (float)v60;
    if ( UnityEngine_Object__op_Inequality(baseCollider, 0LL, 0LL) )
    {
      IsServantLimitCountSeal = (System_String_o *)this->fields.baseCollider;
      if ( !IsServantLimitCountSeal )
        goto LABEL_81;
      v78.fields.x = x;
      v78.fields.y = v61;
      v78.fields.z = z;
      UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)IsServantLimitCountSeal, v78, 0LL);
    }
    IsServantLimitCountSeal = (System_String_o *)this->fields.baseSprite;
    if ( IsServantLimitCountSeal )
    {
      v62 = x;
      if ( x == INFINITY )
        v62 = -x;
      UIWidget__set_width((UIWidget_o *)IsServantLimitCountSeal, (int)v62, 0LL);
      IsServantLimitCountSeal = (System_String_o *)this->fields.baseSprite;
      if ( IsServantLimitCountSeal )
      {
        v63 = v61;
        if ( v61 == INFINITY )
          v63 = -INFINITY;
        UIWidget__set_height((UIWidget_o *)IsServantLimitCountSeal, (int)v63, 0LL);
        IsServantLimitCountSeal = (System_String_o *)this->fields.titleSprite;
        v64 = v60 >= 0 ? v60 : v60 + 1;
        if ( IsServantLimitCountSeal )
        {
          v65 = this->fields.titleBasePosition.fields.x;
          v66 = this->fields.titleBasePosition.fields.y;
          v67 = this->fields.titleBasePosition.fields.z;
          IsServantLimitCountSeal = (System_String_o *)UnityEngine_Component__get_transform(
                                                         (UnityEngine_Component_o *)IsServantLimitCountSeal,
                                                         0LL);
          if ( IsServantLimitCountSeal )
          {
            v68 = (float)(v64 >> 1);
            v79.fields.y = v66 + v68;
            v79.fields.x = v65;
            v79.fields.z = v67;
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)IsServantLimitCountSeal, v79, 0LL);
            IsServantLimitCountSeal = (System_String_o *)this->fields.levelButtonBase;
            if ( IsServantLimitCountSeal )
            {
              v69 = this->fields.levelButtonBasePosition.fields.x;
              v70 = this->fields.levelButtonBasePosition.fields.y;
              v71 = this->fields.levelButtonBasePosition.fields.z;
              IsServantLimitCountSeal = (System_String_o *)UnityEngine_GameObject__get_transform(
                                                             (UnityEngine_GameObject_o *)IsServantLimitCountSeal,
                                                             0LL);
              if ( IsServantLimitCountSeal )
              {
                v80.fields.y = v70 + v68;
                v80.fields.x = v69;
                v80.fields.z = v71;
                UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)IsServantLimitCountSeal, v80, 0LL);
                IsServantLimitCountSeal = (System_String_o *)this->fields.explanationLabel;
                v72 = v42
                    ? (float)(this->fields.explanationBasePosition.fields.y - v68) + 11.0
                    : this->fields.explanationBasePosition.fields.y - v68;
                if ( IsServantLimitCountSeal )
                {
                  v73 = this->fields.explanationBasePosition.fields.x;
                  v74 = this->fields.explanationBasePosition.fields.z;
                  IsServantLimitCountSeal = (System_String_o *)UnityEngine_Component__get_transform(
                                                                 (UnityEngine_Component_o *)IsServantLimitCountSeal,
                                                                 0LL);
                  if ( IsServantLimitCountSeal )
                  {
                    v81.fields.x = v73;
                    v81.fields.y = v72;
                    v81.fields.z = v74;
                    UnityEngine_Transform__set_localPosition(
                      (UnityEngine_Transform_o *)IsServantLimitCountSeal,
                      v81,
                      0LL);
                    ServantStatusListViewItemDrawPortrait__SetupButton(this, item, 1, v75);
                    ServantStatusListViewItemDrawPortrait__SetupMask(this, item, v76);
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
    sub_B5D69C(IsServantLimitCountSeal, v34);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusListViewItemDrawPortrait__SetupButton(
        ServantStatusListViewItemDrawPortrait_o *this,
        ServantStatusListViewItem_o *item,
        bool isInit,
        const MethodInfo *method)
{
  int v6; // w1
  char v7; // w2
  __int64 v8; // x3
  int v9; // w1
  char v10; // w2
  __int64 v11; // x3
  int v12; // w1
  char v13; // w2
  __int64 v14; // x3
  int v15; // w1
  char v16; // w2
  __int64 v17; // x3
  int v18; // w1
  char v19; // w2
  __int64 v20; // x3
  int v21; // w1
  char v22; // w2
  __int64 v23; // x3
  int v24; // w1
  char v25; // w2
  __int64 v26; // x3
  int v27; // w1
  char v28; // w2
  __int64 v29; // x3
  int v30; // w1
  char v31; // w2
  __int64 v32; // x3
  int v33; // w1
  char v34; // w2
  __int64 v35; // x3
  UICommonButton_o *Instance; // x0
  __int64 v37; // x1
  _BOOL4 v38; // w23
  int32_t ConvertOverwritePortraitLimitCount; // w0
  int v40; // w1
  char v41; // w2
  __int64 v42; // x3
  int32_t maxPortraitLimitCount; // w22
  LocalizationManager_c *v44; // x0
  float *static_fields; // x8
  float v46; // s8
  float v47; // s9
  float v48; // s10
  float v49; // s11
  struct System_Int32_array *v50; // x20
  float *v51; // x8
  float v52; // s12
  float v53; // s13
  float v54; // s14
  float v55; // s15
  ServantLimitImageMaster_o *v56; // x25
  int v57; // w8
  int v58; // w9
  _BOOL4 v59; // w19
  struct UIRangeLabel_array *charaLevelTitleRangeLabelList; // x10
  UIRangeLabel_o *v61; // x26
  int v62; // w20
  System_String_o *v63; // x0
  int v64; // w8
  float v65; // s3
  float v66; // s2
  float v67; // s1
  float v68; // s0
  System_String_o *v69; // x0
  System_String_o *v70; // x27
  System_String_o *v71; // x0
  struct UISprite_array *charaLevelSpriteList; // x8
  __int64 *v73; // x8
  struct UICommonButton_array *servantButtonList; // x8
  bool v75; // w19
  struct UICommonButton_array *charaLevelButtonList; // x8
  char v77; // w26
  bool v78; // w19
  struct UICommonButton_array *v79; // x8
  struct UILabel_array *limitCountSealLabel; // x8
  UnityEngine_Object_o *v81; // x26
  struct UnityEngine_GameObject_array *limitCountSealObjList; // x8
  UnityEngine_Object_o *v83; // x27
  System_String_o *v84; // x1
  bool v85; // nf
  struct UICommonButton_array *v86; // x8
  __int64 v87; // x22
  il2cpp_array_size_t v88; // w27
  int max_length; // w19
  _BOOL4 v90; // w20
  struct UIRangeLabel_array *v91; // x9
  UIRangeLabel_o *v92; // x25
  int v93; // w23
  ServantCostumeEntity_o *Entity; // x0
  char v95; // w2
  __int64 v96; // x3
  System_String_o *v97; // x26
  int v98; // w8
  float v99; // s3
  float v100; // s2
  float v101; // s1
  float v102; // s0
  struct UISprite_array *v103; // x8
  __int64 *v104; // x8
  struct UICommonButton_array *v105; // x8
  bool v106; // w19
  struct UICommonButton_array *v107; // x8
  char v108; // w25
  bool v109; // w19
  struct UICommonButton_array *v110; // x8
  struct UICommonButton_array *v111; // x8
  __int64 v112; // x0
  ServantCostumeMaster_o *v113; // [xsp+8h] [xbp-B8h]
  bool v114; // [xsp+14h] [xbp-ACh]
  int32_t v115; // [xsp+18h] [xbp-A8h]
  struct System_Int32_array *portraitSelectList; // [xsp+20h] [xbp-A0h]
  unsigned int v118; // [xsp+2Ch] [xbp-94h] BYREF
  UnityEngine_Color_o v119; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42ECB69 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantCostumeMaster___, (_DWORD)item, isInit, method);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v6, v7, v8);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_8473/*"LIMIT_COUNT_SELECT_SEALED"*/, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_12137/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_"*/, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_17174/*"btn_bg_20"*/, v24, v25, v26);
    sub_B5D5C4(&StringLiteral_12138/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_CLOSE"*/, v27, v28, v29);
    sub_B5D5C4(&StringLiteral_1/*""*/, v30, v31, v32);
    sub_B5D5C4(&StringLiteral_17175/*"btn_bg_21"*/, v33, v34, v35);
    byte_42ECB69 = 1;
  }
  v118 = 0;
  Instance = (UICommonButton_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_182;
  Instance = (UICommonButton_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                   (DataManager_o *)Instance,
                                   (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
  if ( !item )
    goto LABEL_182;
  v113 = (ServantCostumeMaster_o *)Instance;
  if ( item->fields.isConvertOverwriteImage )
  {
    v38 = 0;
  }
  else if ( item->fields.userSvtEntity )
  {
    v38 = 1;
  }
  else
  {
    v38 = item->fields.userSvtCollectionEntity != 0LL;
  }
  ConvertOverwritePortraitLimitCount = ServantStatusListViewItem__get_ConvertOverwritePortraitLimitCount(item, 0LL);
  maxPortraitLimitCount = item->fields.maxPortraitLimitCount;
  v115 = ConvertOverwritePortraitLimitCount;
  portraitSelectList = item->fields.portraitSelectList;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  if ( !byte_42E563C )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, v40, v41, v42);
    byte_42E563C = 1;
  }
  v44 = LocalizationManager_TypeInfo;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v44 = LocalizationManager_TypeInfo;
  }
  static_fields = (float *)v44->static_fields;
  v46 = static_fields[20];
  v47 = static_fields[21];
  v48 = static_fields[22];
  v49 = static_fields[23];
  if ( !byte_42E563D )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, v40, v41, v42);
    v44 = LocalizationManager_TypeInfo;
    byte_42E563D = 1;
  }
  if ( (BYTE3(v44->vtable._0_Equals.methodPtr) & 4) != 0 )
  {
    v50 = portraitSelectList;
    if ( !v44->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v44);
      v44 = LocalizationManager_TypeInfo;
    }
  }
  else
  {
    v50 = portraitSelectList;
  }
  v51 = (float *)v44->static_fields;
  v52 = v51[24];
  v53 = v51[25];
  v54 = v51[26];
  v55 = v51[27];
  Instance = (UICommonButton_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_182:
    sub_B5D69C(Instance, v37);
  Instance = (UICommonButton_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                   (DataManager_o *)Instance,
                                   (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  v118 = 0;
  v56 = (ServantLimitImageMaster_o *)Instance;
  v57 = 0;
  do
  {
    if ( v57 <= maxPortraitLimitCount )
    {
      if ( !v50 )
        goto LABEL_182;
      if ( v57 >= v50->max_length )
        goto LABEL_184;
      v59 = v50->m_Items[v57 + 1] == v115;
      v58 = 1;
    }
    else
    {
      v58 = 0;
      v59 = 0;
    }
    charaLevelTitleRangeLabelList = this->fields.charaLevelTitleRangeLabelList;
    if ( !charaLevelTitleRangeLabelList )
      goto LABEL_182;
    if ( v57 >= charaLevelTitleRangeLabelList->max_length )
    {
LABEL_184:
      v112 = sub_B5D6C8(Instance);
      sub_B5D668(v112, 0LL);
    }
    v61 = charaLevelTitleRangeLabelList->m_Items[v57];
    v62 = v58 & v38;
    if ( v58
      || (Instance = (UICommonButton_o *)ServantStatusListViewItem__get_IsMine(item, 0LL),
          ((unsigned __int8)Instance & 1) == 0) )
    {
      if ( !v61 )
        goto LABEL_182;
      v64 = v59 & v62;
      if ( (v59 & v62) != 0 )
        v65 = v55;
      else
        v65 = v49;
      if ( v64 )
        v66 = v54;
      else
        v66 = v48;
      if ( v64 )
        v67 = v53;
      else
        v67 = v47;
      if ( v64 )
        v68 = v52;
      else
        v68 = v46;
      UIRangeLabel__set_effectColor(v61, *(UnityEngine_Color_o *)(&v65 - 3), 0LL);
      v69 = System_Int32__ToString((int32_t)&v118, 0LL);
      v70 = System_String__Concat_44577788((System_String_o *)StringLiteral_12137/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_"*/, v69, 0LL);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v63 = v70;
    }
    else
    {
      if ( !v61 )
        goto LABEL_182;
      v119.fields.r = v46;
      v119.fields.g = v47;
      v119.fields.b = v48;
      v119.fields.a = v49;
      UIRangeLabel__set_effectColor(v61, v119, 0LL);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v63 = (System_String_o *)StringLiteral_12138/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_CLOSE"*/;
    }
    v71 = LocalizationManager__Get(v63, 0LL);
    UIRangeLabel__Set(v61, v71, 0LL, 1, 0, 0LL);
    charaLevelSpriteList = this->fields.charaLevelSpriteList;
    if ( !charaLevelSpriteList )
      goto LABEL_182;
    if ( v118 >= charaLevelSpriteList->max_length )
      goto LABEL_184;
    Instance = (UICommonButton_o *)charaLevelSpriteList->m_Items[v118];
    if ( !Instance )
      goto LABEL_182;
    v73 = &StringLiteral_17174/*"btn_bg_20"*/;
    if ( v59 )
      v73 = &StringLiteral_17175/*"btn_bg_21"*/;
    UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v73, 0LL);
    servantButtonList = this->fields.servantButtonList;
    if ( !servantButtonList )
      goto LABEL_182;
    if ( v118 >= servantButtonList->max_length )
      goto LABEL_184;
    Instance = servantButtonList->m_Items[v118];
    if ( (v59 & v62) != 0 )
    {
      if ( !Instance )
        goto LABEL_182;
      v75 = v62 == 0 || isInit;
      UICommonButton__SetColliderEnable(Instance, 0, v62 == 0 || isInit, 0LL);
      charaLevelButtonList = this->fields.charaLevelButtonList;
      if ( !charaLevelButtonList )
        goto LABEL_182;
      v50 = portraitSelectList;
      if ( v118 >= charaLevelButtonList->max_length )
        goto LABEL_184;
      Instance = charaLevelButtonList->m_Items[v118];
      if ( !Instance )
        goto LABEL_182;
      UICommonButton__SetColliderEnable(Instance, 0, v75, 0LL);
    }
    else
    {
      if ( !Instance )
        goto LABEL_182;
      v77 = v62 & ~v59;
      v78 = v62 == 0 || isInit;
      UICommonButton__SetButtonEnable(Instance, v77, v62 == 0 || isInit, 0LL);
      v79 = this->fields.charaLevelButtonList;
      if ( !v79 )
        goto LABEL_182;
      v50 = portraitSelectList;
      if ( v118 >= v79->max_length )
        goto LABEL_184;
      Instance = v79->m_Items[v118];
      if ( !Instance )
        goto LABEL_182;
      UICommonButton__SetButtonEnable(Instance, v77, v78, 0LL);
    }
    limitCountSealLabel = this->fields.limitCountSealLabel;
    if ( limitCountSealLabel )
    {
      if ( v118 >= limitCountSealLabel->max_length )
        goto LABEL_184;
      v81 = (UnityEngine_Object_o *)limitCountSealLabel->m_Items[v118];
    }
    else
    {
      v81 = 0LL;
    }
    limitCountSealObjList = this->fields.limitCountSealObjList;
    if ( limitCountSealObjList )
    {
      if ( v118 >= limitCountSealObjList->max_length )
        goto LABEL_184;
      v83 = (UnityEngine_Object_o *)limitCountSealObjList->m_Items[v118];
    }
    else
    {
      v83 = 0LL;
    }
    Instance = (UICommonButton_o *)ServantStatusListViewItem__get_SvtId(item, 0LL);
    if ( !v50 )
      goto LABEL_182;
    if ( v118 >= v50->max_length )
      goto LABEL_184;
    if ( !v56 )
      goto LABEL_182;
    if ( ServantLimitImageMaster__IsServantLimitCountSeal(v56, (int32_t)Instance, v50->m_Items[v118 + 1] + 1, 0LL) )
    {
      if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      Instance = (UICommonButton_o *)UnityEngine_Object__op_Inequality(v83, 0LL, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v83 )
          goto LABEL_182;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v83, 1, 0LL);
      }
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      Instance = (UICommonButton_o *)UnityEngine_Object__op_Inequality(v81, 0LL, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        Instance = (UICommonButton_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8473/*"LIMIT_COUNT_SELECT_SEALED"*/, 0LL);
        if ( !v81 )
          goto LABEL_182;
        v84 = (System_String_o *)Instance;
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
      Instance = (UICommonButton_o *)UnityEngine_Object__op_Inequality(v83, 0LL, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v83 )
          goto LABEL_182;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v83, 0, 0LL);
      }
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      Instance = (UICommonButton_o *)UnityEngine_Object__op_Inequality(v81, 0LL, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v81 )
          goto LABEL_182;
        v84 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_114:
        UILabel__set_text((UILabel_o *)v81, v84, 0LL);
      }
    }
    v85 = (int)(v118 - 2) < 0;
    v57 = ++v118;
  }
  while ( v85 != __OFSUB__(v118, 3) );
  v86 = this->fields.charaLevelButtonList;
  if ( !v86 )
    goto LABEL_182;
  v87 = 11LL;
  v114 = v38;
  while ( 1 )
  {
    v88 = v87 - 8;
    if ( (int)v87 - 8 >= (signed int)v86->max_length )
      break;
    max_length = v50->max_length;
    if ( (int)v88 >= max_length )
    {
      v90 = 0;
    }
    else
    {
      if ( v88 >= max_length )
        goto LABEL_184;
      v90 = *((_DWORD *)&v50->obj.klass + v87) == v115;
    }
    v91 = this->fields.charaLevelTitleRangeLabelList;
    if ( !v91 )
      goto LABEL_182;
    if ( v88 >= v91->max_length )
      goto LABEL_184;
    v92 = v91->m_Items[v88];
    v93 = v38 && (int)v88 < max_length;
    if ( (int)v88 >= max_length )
    {
      if ( !v92 )
        goto LABEL_182;
      UIRangeLabel__Clear(v91->m_Items[v88], 0LL);
    }
    else
    {
      Instance = (UICommonButton_o *)ServantStatusListViewItem__get_SvtId(item, 0LL);
      if ( v88 >= portraitSelectList->max_length )
        goto LABEL_184;
      v37 = (unsigned int)Instance;
      Instance = (UICommonButton_o *)v113;
      if ( !v113 )
        goto LABEL_182;
      Entity = ServantCostumeMaster__GetEntity(v113, v37, portraitSelectList->m_Items[v88 + 1], 0LL);
      if ( Entity )
      {
        Instance = (UICommonButton_o *)ServantCostumeEntity__getShortName(Entity, 0LL);
        v97 = (System_String_o *)Instance;
        if ( !v92 )
          goto LABEL_182;
      }
      else
      {
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        if ( !byte_42E6772 )
        {
          sub_B5D5C4(&LocalizationManager_TypeInfo, v37, v95, v96);
          byte_42E6772 = 1;
        }
        Instance = (UICommonButton_o *)LocalizationManager_TypeInfo;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          Instance = (UICommonButton_o *)LocalizationManager_TypeInfo;
        }
        v97 = *(System_String_o **)(*(_QWORD *)&Instance[1].fields.specifyPressedColor.fields.b + 32LL);
        if ( !v92 )
          goto LABEL_182;
      }
      v98 = v90 & v93;
      if ( (v90 & v93) != 0 )
        v99 = v55;
      else
        v99 = v49;
      if ( v98 )
        v100 = v54;
      else
        v100 = v48;
      if ( v98 )
        v101 = v53;
      else
        v101 = v47;
      if ( v98 )
        v102 = v52;
      else
        v102 = v46;
      UIRangeLabel__set_effectColor(v92, *(UnityEngine_Color_o *)(&v99 - 3), 0LL);
      UIRangeLabel__Set(v92, v97, 0LL, 1, 0, 0LL);
    }
    v103 = this->fields.charaLevelSpriteList;
    if ( !v103 )
      goto LABEL_182;
    if ( v88 >= v103->max_length )
      goto LABEL_184;
    Instance = (UICommonButton_o *)v103->m_Items[v88];
    if ( !Instance )
      goto LABEL_182;
    v104 = &StringLiteral_17174/*"btn_bg_20"*/;
    if ( v90 )
      v104 = &StringLiteral_17175/*"btn_bg_21"*/;
    UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v104, 0LL);
    v105 = this->fields.servantButtonList;
    if ( !v105 )
      goto LABEL_182;
    if ( v88 >= v105->max_length )
      goto LABEL_184;
    Instance = v105->m_Items[v88];
    if ( (v90 & v93) != 0 )
    {
      if ( !Instance )
        goto LABEL_182;
      v106 = v93 == 0 || isInit;
      UICommonButton__SetColliderEnable(Instance, 0, v93 == 0 || isInit, 0LL);
      v107 = this->fields.charaLevelButtonList;
      v50 = portraitSelectList;
      if ( !v107 )
        goto LABEL_182;
      LOBYTE(v38) = v114;
      if ( v88 >= v107->max_length )
        goto LABEL_184;
      Instance = v107->m_Items[v88];
      if ( !Instance )
        goto LABEL_182;
      UICommonButton__SetColliderEnable(Instance, 0, v106, 0LL);
    }
    else if ( (int)v88 >= max_length )
    {
      if ( !Instance )
        goto LABEL_182;
      Instance = (UICommonButton_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      LOBYTE(v38) = v114;
      v50 = portraitSelectList;
      if ( !Instance )
        goto LABEL_182;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
      v111 = this->fields.charaLevelButtonList;
      if ( !v111 )
        goto LABEL_182;
      if ( v88 >= v111->max_length )
        goto LABEL_184;
      Instance = v111->m_Items[v88];
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
      v108 = v93 & ~v90;
      v109 = v93 == 0 || isInit;
      UICommonButton__SetButtonEnable(Instance, v108, v93 == 0 || isInit, 0LL);
      v110 = this->fields.charaLevelButtonList;
      if ( !v110 )
        goto LABEL_182;
      LOBYTE(v38) = v114;
      v50 = portraitSelectList;
      if ( v88 >= v110->max_length )
        goto LABEL_184;
      Instance = v110->m_Items[v88];
      if ( !Instance )
        goto LABEL_182;
      UICommonButton__SetButtonEnable(Instance, v108, v109, 0LL);
    }
    v86 = this->fields.charaLevelButtonList;
    ++v87;
    if ( !v86 )
      goto LABEL_182;
  }
}


void __fastcall ServantStatusListViewItemDrawPortrait__SetupMask(
        ServantStatusListViewItemDrawPortrait_o *this,
        ServantStatusListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v3; // x3
  ServantStatusListViewItemDrawPortrait_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  struct UISprite_o *baseSprite; // x8
  UnityEngine_GameObject_o *v13; // x21
  System_String_o *Empty; // x20
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  v5 = this;
  if ( (byte_42ECB6A & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)item, (_DWORD)method, v3);
    sub_B5D5C4(&string_TypeInfo, v6, v7, v8);
    this = (ServantStatusListViewItemDrawPortrait_o *)sub_B5D5C4(&StringLiteral_12160/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_INFO_OWN_SETTING_STATUS_ICON"*/, v9, v10, v11);
    byte_42ECB6A = 1;
  }
  if ( !item )
LABEL_25:
    sub_B5D69C(this, item);
  if ( !item->fields.userSvtEntity )
  {
    this = (ServantStatusListViewItemDrawPortrait_o *)v5->fields.maskBase;
    if ( !this )
      goto LABEL_25;
LABEL_19:
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    return;
  }
  this = (ServantStatusListViewItemDrawPortrait_o *)v5->fields.maskBase;
  if ( !this )
    goto LABEL_25;
  if ( !item->fields.isEnableOwnRandomSetting )
    goto LABEL_19;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  baseSprite = v5->fields.baseSprite;
  if ( !baseSprite )
    goto LABEL_25;
  this = (ServantStatusListViewItemDrawPortrait_o *)v5->fields.maskSprite;
  if ( !this )
    goto LABEL_25;
  UIWidget__set_height((UIWidget_o *)this, baseSprite->fields.mHeight, 0LL);
  this = (ServantStatusListViewItemDrawPortrait_o *)v5->fields.maskSprite;
  if ( !this )
    goto LABEL_25;
  UIWidget__ResizeCollider((UIWidget_o *)this, 0LL);
  this = (ServantStatusListViewItemDrawPortrait_o *)v5->fields.maskSprite;
  if ( !this )
    goto LABEL_25;
  this = (ServantStatusListViewItemDrawPortrait_o *)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)this,
                                                      0LL);
  if ( !v5->fields.baseSprite )
    goto LABEL_25;
  v13 = (UnityEngine_GameObject_o *)this;
  this = (ServantStatusListViewItemDrawPortrait_o *)UnityEngine_Component__get_transform(
                                                      (UnityEngine_Component_o *)v5->fields.baseSprite,
                                                      0LL);
  if ( !this )
    goto LABEL_25;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  GameObjectExtensions__SetLocalPositionY(v13, localPosition.fields.y, 0LL);
  if ( item->fields.isEnableOwnRandomSetting )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    Empty = LocalizationManager__Get((System_String_o *)StringLiteral_12160/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_INFO_OWN_SETTING_STATUS_ICON"*/, 0LL);
  }
  else
  {
    Empty = string_TypeInfo->static_fields->Empty;
  }
  this = (ServantStatusListViewItemDrawPortrait_o *)v5->fields.maskInfoLabel;
  if ( !this )
    goto LABEL_25;
  UILabel__set_overflowMethod((UILabel_o *)this, 2, 0LL);
  this = (ServantStatusListViewItemDrawPortrait_o *)v5->fields.maskInfoLabel;
  if ( !this )
    goto LABEL_25;
  UILabel__set_text((UILabel_o *)this, Empty, 0LL);
  this = (ServantStatusListViewItemDrawPortrait_o *)v5->fields.maskInfoLabel;
  if ( !this )
    goto LABEL_25;
  UILabel__SetCondensedScale((UILabel_o *)this, *(&v5->fields.MASK_LABEL_MAX_WIDTH + 1), 0LL);
}