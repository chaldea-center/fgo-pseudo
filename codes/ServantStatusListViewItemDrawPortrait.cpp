void ServantStatusListViewItemDrawPortrait___ctor(
        ServantStatusListViewItemDrawPortrait_o *this,
        const MethodInfo *method)
{
  this->fields.MASK_LABEL_MAX_WIDTH = 550;
  this->fields.transformNameAddHeight = 20;
  this->fields.QUESTION_MARK_COLOR = (struct UnityEngine_Color_o)xmmword_E93FD0;
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
  float mWidth; // s0
  unsigned int v10; // w8
  int32_t mHeight; // w10
  int v12; // w8
  float v13; // s8
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v15; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v16; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v17; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4

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
    if ( (v5->max_length & 0xFFFFFFFC) == 0 )
      sub_21FFED4(this);
    if ( (this = (ServantStatusListViewItemDrawPortrait_o *)v5->m_Items[3]) == 0
      || (y = localPosition.fields.y,
          (this = (ServantStatusListViewItemDrawPortrait_o *)UnityEngine_Component__get_transform(
                                                               (UnityEngine_Component_o *)this,
                                                               0)) == 0)
      || ((v15 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0),
           charaLevelSpriteList = v3->fields.charaLevelSpriteList,
           (float)(y - v15.fields.y) != INFINITY)
        ? (buttonPitch = (int)(float)(y - v15.fields.y))
        : (buttonPitch = 0x80000000),
          v3->fields.buttonPitch = buttonPitch,
          !charaLevelSpriteList) )
    {
LABEL_28:
      sub_21FFECC(this, method);
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
  this = (ServantStatusListViewItemDrawPortrait_o *)v3->fields.titleSprite;
  mWidth = (float)baseSprite->fields.mWidth;
  v10 = max_length >= 9
      ? ((int)(((unsigned __int64)(1431655765LL * max_length) >> 32) - max_length) >> 1)
      + ((unsigned int)(((unsigned __int64)(1431655765LL * max_length) >> 32) - max_length) >> 31)
      + 1
      : -1;
  mHeight = baseSprite->fields.mHeight;
  v3->fields.baseSize.fields.z = 0.0;
  v3->fields.baseSize.fields.x = mWidth;
  v3->fields.baseSize.fields.y = (float)(int)(mHeight + v10 * buttonPitch);
  if ( !this )
    goto LABEL_28;
  this = (ServantStatusListViewItemDrawPortrait_o *)UnityEngine_Component__get_transform(
                                                      (UnityEngine_Component_o *)this,
                                                      0);
  if ( !this )
    goto LABEL_28;
  v16 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
  this = (ServantStatusListViewItemDrawPortrait_o *)v3->fields.levelButtonBase;
  v3->fields.titleBasePosition.fields.x = v16.fields.x;
  v12 = buttonPitch >= 0 ? buttonPitch : buttonPitch + 1;
  v13 = (float)(v12 >> 1);
  v3->fields.titleBasePosition.fields.y = v16.fields.y - v13;
  v3->fields.titleBasePosition.fields.z = v16.fields.z;
  if ( !this )
    goto LABEL_28;
  this = (ServantStatusListViewItemDrawPortrait_o *)UnityEngine_GameObject__get_transform(
                                                      (UnityEngine_GameObject_o *)this,
                                                      0);
  if ( !this )
    goto LABEL_28;
  v17 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
  this = (ServantStatusListViewItemDrawPortrait_o *)v3->fields.explanationLabel;
  v3->fields.levelButtonBasePosition.fields.x = v17.fields.x;
  v3->fields.levelButtonBasePosition.fields.y = v17.fields.y - v13;
  v3->fields.levelButtonBasePosition.fields.z = v17.fields.z;
  if ( !this )
    goto LABEL_28;
  this = (ServantStatusListViewItemDrawPortrait_o *)UnityEngine_Component__get_transform(
                                                      (UnityEngine_Component_o *)this,
                                                      0);
  if ( !this )
    goto LABEL_28;
  v18 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
  v3->fields.explanationBasePosition.fields.x = v18.fields.x;
  v3->fields.explanationBasePosition.fields.y = v18.fields.y + v13;
  v3->fields.explanationBasePosition.fields.z = v18.fields.z;
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
  ServantStatusListViewItemDrawPortrait_o *v5; // x21
  __int64 v6; // x27
  int32_t *p_dispMode; // x28
  struct UISprite_array *servantMaskSpriteList; // x8
  int32_t SvtId; // w22
  struct UITexture_array *v10; // x8
  int32_t v11; // w24
  UITexture_o *v12; // x22
  int32_t v13; // w23
  int32_t LimitCount; // w0
  __int64 v15; // x1
  __int64 v16; // x2
  int32_t v17; // w24
  struct UISprite_array *v18; // x8
  const MethodInfo *v19; // x3
  struct UITexture_array *servantTextureList; // x8
  __int64 v21; // x2
  struct UISprite_array *v22; // x8
  UISprite_o *v23; // x22
  struct UISprite_array *v24; // x8
  struct UITexture_array *v25; // x8
  __int64 v26; // x27
  unsigned __int64 max_length_low; // x9
  unsigned __int64 v28; // x29
  UITexture_o *v29; // x22
  __int64 v30; // x1
  __int64 v31; // x2
  int32_t v32; // w23
  int32_t v33; // w24
  struct UISprite_array *v34; // x8
  bool v35; // w1
  struct UITexture_array *v36; // x8
  struct UISprite_array *v37; // x8
  struct UISprite_array *v38; // x8
  __int64 v39; // x2
  struct UISprite_array *v40; // x8
  UISprite_o *v41; // x22
  struct UISprite_array *v42; // x8

  v4 = this;
  if ( (byte_5935170 & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    this = (ServantStatusListViewItemDrawPortrait_o *)sub_21FFC50(&ServantAssetLoadManager_TypeInfo);
    byte_5935170 = 1;
  }
  if ( !item )
    goto LABEL_73;
  ServantStatusListViewItem__GetPortraitLimitCountStage(item, 0);
  this = (ServantStatusListViewItemDrawPortrait_o *)ServantStatusListViewItem__GetPortraitLimitCountStageList(item, 0);
  v5 = this;
  v6 = 0;
  p_dispMode = &this->fields.dispMode;
  do
  {
    servantMaskSpriteList = v4->fields.servantMaskSpriteList;
    if ( !servantMaskSpriteList )
      goto LABEL_73;
    if ( (unsigned int)v6 >= LODWORD(servantMaskSpriteList->max_length) )
      goto LABEL_75;
    this = (ServantStatusListViewItemDrawPortrait_o *)servantMaskSpriteList->m_Items[v6];
    if ( !this )
      goto LABEL_73;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 1, 0);
    if ( !v5 )
      goto LABEL_73;
    if ( (unsigned int)v6 >= LODWORD(v5->fields.m_CancellationTokenSource) )
      goto LABEL_75;
    if ( p_dispMode[v6] < 0 )
    {
      this = (ServantStatusListViewItemDrawPortrait_o *)ServantStatusListViewItem__get_IsMine(item, 0);
      servantTextureList = v4->fields.servantTextureList;
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !servantTextureList )
          goto LABEL_73;
        if ( (unsigned int)v6 >= LODWORD(servantTextureList->max_length) )
          goto LABEL_75;
        this = (ServantStatusListViewItemDrawPortrait_o *)servantTextureList->m_Items[v6];
        if ( !this )
          goto LABEL_73;
        this = (ServantStatusListViewItemDrawPortrait_o *)(*(__int64 (__fastcall **)(ServantStatusListViewItemDrawPortrait_o *, _QWORD, size_t))&this->klass[1]._2.cctor_finished)(
                                                            this,
                                                            0,
                                                            this->klass[1]._2.cctor_thread);
      }
      else
      {
        if ( !servantTextureList )
          goto LABEL_73;
        if ( (unsigned int)v6 >= LODWORD(servantTextureList->max_length) )
LABEL_75:
          sub_21FFED4(this);
        this = (ServantStatusListViewItemDrawPortrait_o *)servantTextureList->m_Items[v6];
        if ( !this )
          goto LABEL_73;
        this = (ServantStatusListViewItemDrawPortrait_o *)(*(__int64 (__fastcall **)(ServantStatusListViewItemDrawPortrait_o *, _QWORD, size_t))&this->klass[1]._2.cctor_finished)(
                                                            this,
                                                            0,
                                                            this->klass[1]._2.cctor_thread);
        v22 = v4->fields.servantMaskSpriteList;
        if ( !v22 )
          goto LABEL_73;
        if ( (unsigned int)v6 >= LODWORD(v22->max_length) )
          goto LABEL_75;
        v23 = v22->m_Items[v6];
        if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, item, v21);
        this = (ServantStatusListViewItemDrawPortrait_o *)AtlasManager__SetNotOpenFace(v23, 0);
        v24 = v4->fields.servantMaskSpriteList;
        if ( !v24 )
          goto LABEL_73;
        if ( (unsigned int)v6 >= LODWORD(v24->max_length) )
          goto LABEL_75;
        this = (ServantStatusListViewItemDrawPortrait_o *)v24->m_Items[v6];
        if ( !this )
          goto LABEL_73;
        UIWidget__set_color((UIWidget_o *)this, v4->fields.QUESTION_MARK_COLOR, 0);
      }
    }
    else
    {
      SvtId = ServantStatusListViewItem__GetSvtId(item, 0, 0);
      this = (ServantStatusListViewItemDrawPortrait_o *)ServantStatusListViewItem__get_LimitCount(item, 0);
      if ( (unsigned int)v6 >= LODWORD(v5->fields.m_CancellationTokenSource) )
        goto LABEL_75;
      this = (ServantStatusListViewItemDrawPortrait_o *)LimitCountUtility__GetSealAfter(
                                                          SvtId,
                                                          (int32_t)this,
                                                          p_dispMode[v6],
                                                          0,
                                                          0);
      v10 = v4->fields.servantTextureList;
      if ( !v10 )
        goto LABEL_73;
      if ( (unsigned int)v6 >= LODWORD(v10->max_length) )
        goto LABEL_75;
      v11 = (int)this;
      v12 = v10->m_Items[v6];
      v13 = ServantStatusListViewItem__GetSvtId(item, 0, 0);
      LimitCount = ServantStatusListViewItem__get_LimitCount(item, 0);
      v17 = LimitCountUtility__ConvertStageToLimitCount(LimitCount, v11, 0, 0);
      if ( !*(&ServantAssetLoadManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, v15, v16);
      this = (ServantStatusListViewItemDrawPortrait_o *)ServantAssetLoadManager__loadStatusFace(v12, v13, v17, 0);
      v18 = v4->fields.servantMaskSpriteList;
      if ( !v18 )
        goto LABEL_73;
      if ( (unsigned int)v6 >= LODWORD(v18->max_length) )
        goto LABEL_75;
      this = (ServantStatusListViewItemDrawPortrait_o *)v18->m_Items[v6];
      if ( !this )
        goto LABEL_73;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0);
    }
    ++v6;
  }
  while ( (_DWORD)v6 != 3 );
  v25 = v4->fields.servantTextureList;
  if ( !v25 )
LABEL_73:
    sub_21FFECC(this, item);
  v26 = 0;
  while ( 1 )
  {
    max_length_low = LODWORD(v25->max_length);
    v28 = v26 + 3;
    if ( v26 + 3 >= (int)max_length_low )
      break;
    if ( (__int64)v28 < SLODWORD(v5->fields.m_CancellationTokenSource) )
    {
      if ( v28 >= max_length_low )
        goto LABEL_75;
      v29 = v25->m_Items[v26 + 3];
      this = (ServantStatusListViewItemDrawPortrait_o *)ServantStatusListViewItem__get_SvtId(item, 0);
      if ( v28 >= LODWORD(v5->fields.m_CancellationTokenSource) )
        goto LABEL_75;
      v32 = (int)this;
      v33 = *((_DWORD *)&v5->fields.baseCollider + v26 + 1);
      if ( !*(&ServantAssetLoadManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, v30, v31);
      this = (ServantStatusListViewItemDrawPortrait_o *)ServantAssetLoadManager__loadStatusFace(v29, v32, v33, 0);
      v34 = v4->fields.servantMaskSpriteList;
      if ( !v34 )
        goto LABEL_73;
      if ( v28 >= LODWORD(v34->max_length) )
        goto LABEL_75;
      this = (ServantStatusListViewItemDrawPortrait_o *)v34->m_Items[v26 + 3];
      if ( !this )
        goto LABEL_73;
      v35 = 0;
LABEL_57:
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, v35, 0);
      goto LABEL_72;
    }
    this = (ServantStatusListViewItemDrawPortrait_o *)ServantStatusListViewItem__get_IsMine(item, 0);
    v36 = v4->fields.servantTextureList;
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !v36 )
        goto LABEL_73;
      if ( v28 >= LODWORD(v36->max_length) )
        goto LABEL_75;
      this = (ServantStatusListViewItemDrawPortrait_o *)v36->m_Items[v26 + 3];
      if ( !this )
        goto LABEL_73;
      this = (ServantStatusListViewItemDrawPortrait_o *)(*(__int64 (__fastcall **)(ServantStatusListViewItemDrawPortrait_o *, _QWORD, size_t))&this->klass[1]._2.cctor_finished)(
                                                          this,
                                                          0,
                                                          this->klass[1]._2.cctor_thread);
      v37 = v4->fields.servantMaskSpriteList;
      if ( !v37 )
        goto LABEL_73;
      if ( v28 >= LODWORD(v37->max_length) )
        goto LABEL_75;
      this = (ServantStatusListViewItemDrawPortrait_o *)v37->m_Items[v26 + 3];
      if ( !this )
        goto LABEL_73;
      v35 = 1;
      goto LABEL_57;
    }
    if ( !v36 )
      goto LABEL_73;
    if ( v28 >= LODWORD(v36->max_length) )
      goto LABEL_75;
    this = (ServantStatusListViewItemDrawPortrait_o *)v36->m_Items[v26 + 3];
    if ( !this )
      goto LABEL_73;
    this = (ServantStatusListViewItemDrawPortrait_o *)(*(__int64 (__fastcall **)(ServantStatusListViewItemDrawPortrait_o *, _QWORD, size_t))&this->klass[1]._2.cctor_finished)(
                                                        this,
                                                        0,
                                                        this->klass[1]._2.cctor_thread);
    v38 = v4->fields.servantMaskSpriteList;
    if ( !v38 )
      goto LABEL_73;
    if ( v28 >= LODWORD(v38->max_length) )
      goto LABEL_75;
    this = (ServantStatusListViewItemDrawPortrait_o *)v38->m_Items[v26 + 3];
    if ( !this )
      goto LABEL_73;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 1, 0);
    v40 = v4->fields.servantMaskSpriteList;
    if ( !v40 )
      goto LABEL_73;
    if ( v28 >= LODWORD(v40->max_length) )
      goto LABEL_75;
    v41 = v40->m_Items[v26 + 3];
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, item, v39);
    this = (ServantStatusListViewItemDrawPortrait_o *)AtlasManager__SetNotOpenFace(v41, 0);
    v42 = v4->fields.servantMaskSpriteList;
    if ( !v42 )
      goto LABEL_73;
    if ( v28 >= LODWORD(v42->max_length) )
      goto LABEL_75;
    this = (ServantStatusListViewItemDrawPortrait_o *)v42->m_Items[v26 + 3];
    if ( !this )
      goto LABEL_73;
    UIWidget__set_color((UIWidget_o *)this, v4->fields.QUESTION_MARK_COLOR, 0);
LABEL_72:
    v25 = v4->fields.servantTextureList;
    ++v26;
    if ( !v25 )
      goto LABEL_73;
  }
  ServantStatusListViewItemDrawPortrait__SetupButton(v4, item, 0, v19);
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusListViewItemDrawPortrait__SetItem(
        ServantStatusListViewItemDrawPortrait_o *this,
        ServantStatusListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *Master_object; // x21
  UILabel_o *explanationLabel; // x22
  __int64 *v11; // x8
  int v12; // w8
  void *ServantStatusExplanationText; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  struct ServantEntity_o *svtEntity; // x8
  __int64 v17; // x22
  __int64 v18; // x23
  int32_t v19; // w22
  struct UILabel_o *v20; // x23
  System_String_o *v21; // x24
  System_String_o *mText; // x25
  Il2CppObject *LimitCountSealedServantName; // x0
  System_String_o *v24; // x0
  System_String_o *v25; // x0
  int v26; // w23
  __int64 v27; // x2
  int v28; // w8
  int32_t buttonPitch; // w9
  float z; // s10
  float x; // s9
  float y; // s11
  UnityEngine_Object_o *baseCollider; // x21
  int v34; // w8
  int v35; // w8
  int v36; // w8
  int v37; // w24
  float v38; // s8
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
  UIWidget_o *transformNameLabel; // x21
  UIWidget_o *transformNameSprite; // x21
  UILabel_o *v54; // x21
  __int64 v55; // x1
  __int64 v56; // x2
  UnityEngine_Object_o *v57; // x21
  float v58; // s1
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t transformNameAddHeight; // w8
  int v61; // w8
  UnityEngine_GameObject_o *v62; // x0
  int32_t v63; // w8
  int v64; // w8
  const MethodInfo *v65; // x3
  const MethodInfo *v66; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v67; // 0:x0.16
  UnityEngine_Vector3_o v68; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v69; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v70; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v71; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o size; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o TransformNameLabelColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o TransformNameSpriteColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_593516F & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&StringLiteral_12414/*"SERVANT_STATUS_EXPLANATION_PORTRAIT3"*/);
    sub_21FFC50(&StringLiteral_12413/*"SERVANT_STATUS_EXPLANATION_PORTRAIT2"*/);
    sub_21FFC50(&StringLiteral_12412/*"SERVANT_STATUS_EXPLANATION_PORTRAIT"*/);
    sub_21FFC50(&StringLiteral_12415/*"SERVANT_STATUS_EXPLANATION_PORTRAIT_LIMIT_COUNT_SEALED_MSG"*/);
    byte_593516F = 1;
  }
  this->fields.dispMode = mode;
  if ( item && mode )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, item, *(_QWORD *)&mode);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
    if ( item->fields.userSvtEntity )
    {
      explanationLabel = this->fields.explanationLabel;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v7, v8);
      v11 = &StringLiteral_12412/*"SERVANT_STATUS_EXPLANATION_PORTRAIT"*/;
    }
    else if ( item->fields.userSvtCollectionEntity )
    {
      explanationLabel = this->fields.explanationLabel;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v7, v8);
      v11 = &StringLiteral_12413/*"SERVANT_STATUS_EXPLANATION_PORTRAIT2"*/;
    }
    else
    {
      explanationLabel = this->fields.explanationLabel;
      v12 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
      if ( !item->fields.servantLeaderInfo )
      {
        if ( !v12 )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v7, v8);
        ServantStatusExplanationText = LocalizationManager__Get((System_String_o *)StringLiteral_12414/*"SERVANT_STATUS_EXPLANATION_PORTRAIT3"*/, 0);
        if ( !explanationLabel )
          goto LABEL_98;
        UILabel__set_text(explanationLabel, (System_String_o *)ServantStatusExplanationText, 0);
        goto LABEL_33;
      }
      if ( !v12 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v7, v8);
      v11 = &StringLiteral_12414/*"SERVANT_STATUS_EXPLANATION_PORTRAIT3"*/;
    }
    ServantStatusExplanationText = LocalizationManager__Get((System_String_o *)*v11, 0);
    if ( !explanationLabel )
      goto LABEL_98;
    UILabel__set_text(explanationLabel, (System_String_o *)ServantStatusExplanationText, 0);
    svtEntity = item->fields.svtEntity;
    if ( !svtEntity )
      goto LABEL_98;
    v17 = *(_QWORD *)&svtEntity->fields.id.fields.currentCryptoKey;
    v18 = *(_QWORD *)&svtEntity->fields.id.fields.fakeValue;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14, v15);
    *(_QWORD *)&v67.fields.currentCryptoKey = v17;
    *(_QWORD *)&v67.fields.fakeValue = v18;
    ServantStatusExplanationText = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v67, 0);
    if ( (_DWORD)ServantStatusExplanationText )
    {
      if ( !Master_object )
        goto LABEL_98;
      v19 = (int)ServantStatusExplanationText;
      if ( ServantLimitImageMaster__IsServantLimitCountSeal(
             (ServantLimitImageMaster_o *)Master_object,
             (int32_t)ServantStatusExplanationText,
             3,
             0) )
      {
        ServantStatusExplanationText = ServantLimitImageMaster__GetServantStatusExplanationText(
                                         (ServantLimitImageMaster_o *)Master_object,
                                         (System_String_o *)StringLiteral_12415/*"SERVANT_STATUS_EXPLANATION_PORTRAIT_LIMIT_COUNT_SEALED_MSG"*/,
                                         v19,
                                         0);
        v20 = this->fields.explanationLabel;
        if ( !v20 )
          goto LABEL_98;
        v21 = (System_String_o *)ServantStatusExplanationText;
        mText = v20->fields.mText;
        LimitCountSealedServantName = (Il2CppObject *)ServantLimitImageMaster__GetLimitCountSealedServantName(
                                                        (ServantLimitImageMaster_o *)Master_object,
                                                        v19,
                                                        3,
                                                        0,
                                                        0,
                                                        0);
        v24 = System_String__Format(v21, LimitCountSealedServantName, 0);
        v25 = System_String__Concat_75438412(mText, v24, 0);
        UILabel__set_text(v20, v25, 0);
        v26 = 1;
LABEL_34:
        ServantStatusExplanationText = ServantStatusListViewItem__GetPortraitLimitCountStageList(item, 0);
        if ( !ServantStatusExplanationText )
          goto LABEL_98;
        v28 = *((_DWORD *)ServantStatusExplanationText + 6);
        if ( v28 < 4 )
          buttonPitch = 0;
        else
          buttonPitch = this->fields.buttonPitch;
        z = this->fields.baseSize.fields.z;
        x = this->fields.baseSize.fields.x;
        y = this->fields.baseSize.fields.y;
        baseCollider = (UnityEngine_Object_o *)this->fields.baseCollider;
        if ( v28 == 3 * (v28 / 3) )
          v34 = v28 / 3;
        else
          v34 = v28 / 3 + 1;
        if ( v34 < 3 )
          v35 = 1;
        else
          v35 = v34 - 1;
        v36 = v35 * buttonPitch;
        if ( v26 )
          v37 = v36 + 22;
        else
          v37 = v36;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14, v27);
        v38 = y + (float)v37;
        if ( UnityEngine_Object__op_Inequality(baseCollider, 0, 0) )
        {
          ServantStatusExplanationText = this->fields.baseCollider;
          if ( !ServantStatusExplanationText )
            goto LABEL_98;
          v68.fields.x = x;
          v68.fields.y = y + (float)v37;
          v68.fields.z = z;
          UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)ServantStatusExplanationText, v68, 0);
        }
        ServantStatusExplanationText = this->fields.baseSprite;
        if ( ServantStatusExplanationText )
        {
          v39 = x == INFINITY ? 0x80000000 : (int)x;
          UIWidget__set_width((UIWidget_o *)ServantStatusExplanationText, v39, 0);
          ServantStatusExplanationText = this->fields.baseSprite;
          if ( ServantStatusExplanationText )
          {
            v40 = v38 == INFINITY ? 0x80000000 : (int)v38;
            UIWidget__set_height((UIWidget_o *)ServantStatusExplanationText, v40, 0);
            ServantStatusExplanationText = this->fields.titleSprite;
            v41 = v37 >= 0 ? v37 : v37 + 1;
            if ( ServantStatusExplanationText )
            {
              v42 = this->fields.titleBasePosition.fields.x;
              v43 = this->fields.titleBasePosition.fields.y;
              v44 = this->fields.titleBasePosition.fields.z;
              ServantStatusExplanationText = UnityEngine_Component__get_transform(
                                               (UnityEngine_Component_o *)ServantStatusExplanationText,
                                               0);
              if ( ServantStatusExplanationText )
              {
                v69.fields.x = v42;
                v69.fields.z = v44;
                v45 = (float)(v41 >> 1);
                v69.fields.y = v43 + v45;
                UnityEngine_Transform__set_localPosition(
                  (UnityEngine_Transform_o *)ServantStatusExplanationText,
                  v69,
                  0);
                ServantStatusExplanationText = this->fields.levelButtonBase;
                if ( ServantStatusExplanationText )
                {
                  v46 = this->fields.levelButtonBasePosition.fields.x;
                  v47 = this->fields.levelButtonBasePosition.fields.y;
                  v48 = this->fields.levelButtonBasePosition.fields.z;
                  ServantStatusExplanationText = UnityEngine_GameObject__get_transform(
                                                   (UnityEngine_GameObject_o *)ServantStatusExplanationText,
                                                   0);
                  if ( ServantStatusExplanationText )
                  {
                    v70.fields.y = v47 + v45;
                    v70.fields.x = v46;
                    v70.fields.z = v48;
                    UnityEngine_Transform__set_localPosition(
                      (UnityEngine_Transform_o *)ServantStatusExplanationText,
                      v70,
                      0);
                    ServantStatusExplanationText = this->fields.explanationLabel;
                    v49 = v26
                        ? (float)(this->fields.explanationBasePosition.fields.y - v45) + 11.0
                        : this->fields.explanationBasePosition.fields.y - v45;
                    if ( ServantStatusExplanationText )
                    {
                      v50 = this->fields.explanationBasePosition.fields.x;
                      v51 = this->fields.explanationBasePosition.fields.z;
                      ServantStatusExplanationText = UnityEngine_Component__get_transform(
                                                       (UnityEngine_Component_o *)ServantStatusExplanationText,
                                                       0);
                      if ( ServantStatusExplanationText )
                      {
                        v71.fields.x = v50;
                        v71.fields.y = v49;
                        v71.fields.z = v51;
                        UnityEngine_Transform__set_localPosition(
                          (UnityEngine_Transform_o *)ServantStatusExplanationText,
                          v71,
                          0);
                        if ( ServantStatusListViewItem__get_IsSaveTransformServant(item, 0) )
                        {
                          transformNameLabel = (UIWidget_o *)this->fields.transformNameLabel;
                          TransformNameLabelColor = ServantStatusListViewItem__get_TransformNameLabelColor(item, 0);
                          if ( transformNameLabel )
                          {
                            UIWidget__set_color(transformNameLabel, TransformNameLabelColor, 0);
                            transformNameSprite = (UIWidget_o *)this->fields.transformNameSprite;
                            TransformNameSpriteColor = ServantStatusListViewItem__get_TransformNameSpriteColor(item, 0);
                            if ( transformNameSprite )
                            {
                              UIWidget__set_color(transformNameSprite, TransformNameSpriteColor, 0);
                              ServantStatusExplanationText = this->fields.transformNameSprite;
                              if ( ServantStatusExplanationText )
                              {
                                ServantStatusExplanationText = UnityEngine_Component__get_gameObject(
                                                                 (UnityEngine_Component_o *)ServantStatusExplanationText,
                                                                 0);
                                if ( ServantStatusExplanationText )
                                {
                                  UnityEngine_GameObject__SetActive(
                                    (UnityEngine_GameObject_o *)ServantStatusExplanationText,
                                    1,
                                    0);
                                  v54 = this->fields.transformNameLabel;
                                  ServantStatusExplanationText = ServantStatusListViewItem__GetTransformName(item, 0);
                                  if ( v54 )
                                  {
                                    UILabel__set_text(v54, (System_String_o *)ServantStatusExplanationText, 0);
                                    v57 = (UnityEngine_Object_o *)this->fields.baseCollider;
                                    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v55, v56);
                                    if ( UnityEngine_Object__op_Inequality(v57, 0, 0) )
                                    {
                                      ServantStatusExplanationText = this->fields.baseCollider;
                                      if ( !ServantStatusExplanationText )
                                        goto LABEL_98;
                                      size = UnityEngine_BoxCollider__get_size(
                                               (UnityEngine_BoxCollider_o *)ServantStatusExplanationText,
                                               0);
                                      ServantStatusExplanationText = this->fields.baseCollider;
                                      if ( !ServantStatusExplanationText )
                                        goto LABEL_98;
                                      v58 = size.fields.y + (float)this->fields.transformNameAddHeight;
                                      UnityEngine_BoxCollider__set_size(
                                        (UnityEngine_BoxCollider_o *)ServantStatusExplanationText,
                                        size,
                                        0);
                                    }
                                    ServantStatusExplanationText = this->fields.baseSprite;
                                    if ( ServantStatusExplanationText )
                                    {
                                      UIWidget__set_height(
                                        (UIWidget_o *)ServantStatusExplanationText,
                                        this->fields.transformNameAddHeight
                                      + *((_DWORD *)ServantStatusExplanationText + 43),
                                        0);
                                      ServantStatusExplanationText = this->fields.titleSprite;
                                      if ( ServantStatusExplanationText )
                                      {
                                        gameObject = UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)ServantStatusExplanationText,
                                                       0);
                                        GameObjectExtensions__AddLocalPositionY(
                                          gameObject,
                                          (float)(this->fields.transformNameAddHeight / 2),
                                          0);
                                        transformNameAddHeight = this->fields.transformNameAddHeight;
                                        v61 = transformNameAddHeight <= 0
                                            ? -transformNameAddHeight
                                            : 1 - transformNameAddHeight;
                                        GameObjectExtensions__AddLocalPositionY(
                                          this->fields.levelButtonBase,
                                          (float)(v61 >> 1),
                                          0);
                                        ServantStatusExplanationText = this->fields.explanationLabel;
                                        if ( ServantStatusExplanationText )
                                        {
                                          v62 = UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)ServantStatusExplanationText,
                                                  0);
                                          v63 = this->fields.transformNameAddHeight;
                                          if ( v63 <= 0 )
                                            v64 = -v63;
                                          else
                                            v64 = 1 - v63;
                                          GameObjectExtensions__AddLocalPositionY(v62, (float)(v64 >> 1), 0);
                                          goto LABEL_97;
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                        else
                        {
                          ServantStatusExplanationText = this->fields.transformNameSprite;
                          if ( ServantStatusExplanationText )
                          {
                            ServantStatusExplanationText = UnityEngine_Component__get_gameObject(
                                                             (UnityEngine_Component_o *)ServantStatusExplanationText,
                                                             0);
                            if ( ServantStatusExplanationText )
                            {
                              UnityEngine_GameObject__SetActive(
                                (UnityEngine_GameObject_o *)ServantStatusExplanationText,
                                0,
                                0);
LABEL_97:
                              ServantStatusListViewItemDrawPortrait__SetupButton(this, item, 1, v65);
                              ServantStatusListViewItemDrawPortrait__SetupMask(this, item, v66);
                              return;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
LABEL_98:
        sub_21FFECC(ServantStatusExplanationText, v14);
      }
    }
LABEL_33:
    v26 = 0;
    goto LABEL_34;
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
  _BOOL4 v8; // w8
  int32_t PortraitLimitCountStage; // w24
  __int64 v10; // x1
  __int64 v11; // x2
  System_Int32_array *PortraitLimitCountStageList; // x25
  LocalizationManager_c *v13; // x0
  float *static_fields; // x8
  float v15; // s8
  float v16; // s9
  float v17; // s10
  float v18; // s11
  struct LocalizationManager_StaticFields *v19; // x8
  float r; // s12
  float g; // s13
  float b; // s14
  float a; // s15
  unsigned int v24; // w8
  int32_t v25; // w26
  struct UIRangeLabel_array *charaLevelTitleRangeLabelList; // x9
  _BOOL4 v27; // w23
  _BOOL4 v28; // w29
  UIRangeLabel_o *v29; // x27
  __int64 v30; // x1
  __int64 v31; // x2
  System_String_o *v32; // x28
  float v33; // s3
  float v34; // s2
  float v35; // s1
  float v36; // s0 OVERLAPPED
  System_String_o *v38; // x0
  __int64 v39; // x1
  __int64 v40; // x2
  System_String_o *v41; // x0
  struct UISprite_array *charaLevelSpriteList; // x8
  __int64 *v43; // x8
  struct UICommonButton_array *servantButtonList; // x8
  struct UICommonButton_array *charaLevelButtonList; // x8
  struct UICommonButton_array *v47; // x8
  struct UILabel_array *limitCountSealLabel; // x8
  UnityEngine_Object_o *v49; // x27
  struct UnityEngine_GameObject_array *limitCountSealObjList; // x8
  UnityEngine_Object_o *v51; // x28
  int32_t SvtId; // w29
  int32_t LimitCount; // w0
  __int64 v54; // x1
  __int64 v55; // x2
  bool IsSealed; // w8
  int v57; // w9
  __int64 v58; // x2
  __int64 v59; // x2
  System_String_o *v60; // x1
  __int64 v61; // x2
  bool v62; // nf
  struct UICommonButton_array *v63; // x8
  int v64; // w22
  int max_length; // w20
  _BOOL4 v66; // w28
  struct UIRangeLabel_array *v67; // x8
  _BOOL4 v68; // w23
  Il2CppClass **v69; // x8
  UIRangeLabel_o *v70; // x26
  ServantCostumeEntity_o *Entity; // x0
  __int64 v72; // x2
  System_String_o *v73; // x27
  float v74; // s3
  float v75; // s2
  float v76; // s1
  float v77; // s0 OVERLAPPED
  struct UISprite_array *v78; // x8
  __int64 *v79; // x8
  struct UICommonButton_array *v80; // x8
  struct UICommonButton_array *v81; // x8
  struct UICommonButton_array *v82; // x8
  struct UICommonButton_array *v83; // x8
  ServantCostumeMaster_o *v84; // [xsp+8h] [xbp-B8h]
  _BOOL4 v86; // [xsp+18h] [xbp-A8h]
  unsigned int v87; // [xsp+1Ch] [xbp-A4h] BYREF
  UnityEngine_Color_o v88; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_5935171 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantCostumeMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&StringLiteral_8610/*"LIMIT_COUNT_SELECT_SEALED"*/);
    sub_21FFC50(&StringLiteral_12429/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_"*/);
    sub_21FFC50(&StringLiteral_18171/*"btn_bg_20"*/);
    sub_21FFC50(&StringLiteral_12430/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_CLOSE"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    sub_21FFC50(&StringLiteral_18173/*"btn_bg_21"*/);
    byte_5935171 = 1;
  }
  v87 = 0;
  Instance = (UICommonButton_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_164;
  Instance = (UICommonButton_o *)DataManager__GetMasterData_object_(
                                   (DataManager_o *)Instance,
                                   (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
  v84 = (ServantCostumeMaster_o *)Instance;
  if ( !item )
    goto LABEL_164;
  if ( ServantStatusListViewItem__get_IsConvertOverwriteImage(item, 0) )
  {
    v86 = 0;
  }
  else
  {
    if ( item->fields.userSvtEntity )
      v8 = 1;
    else
      v8 = item->fields.userSvtCollectionEntity != 0;
    v86 = v8;
  }
  PortraitLimitCountStage = ServantStatusListViewItem__GetPortraitLimitCountStage(item, 0);
  PortraitLimitCountStageList = ServantStatusListViewItem__GetPortraitLimitCountStageList(item, 0);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v10, v11);
  if ( !byte_5932AD3 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    byte_5932AD3 = 1;
  }
  v13 = LocalizationManager_TypeInfo;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v10, v11);
    v13 = LocalizationManager_TypeInfo;
  }
  static_fields = (float *)v13->static_fields;
  v15 = static_fields[20];
  v16 = static_fields[21];
  v17 = static_fields[22];
  v18 = static_fields[23];
  if ( !byte_5932AD4 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    byte_5932AD4 = 1;
    v13 = LocalizationManager_TypeInfo;
  }
  if ( !*(&v13->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v13, v10, v11);
    v13 = LocalizationManager_TypeInfo;
  }
  v19 = v13->static_fields;
  r = v19->selectEffectColor.fields.r;
  g = v19->selectEffectColor.fields.g;
  b = v19->selectEffectColor.fields.b;
  a = v19->selectEffectColor.fields.a;
  Instance = (UICommonButton_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (UICommonButton_o *)DataManager__GetMasterData_object_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___),
        v87 = 0,
        !PortraitLimitCountStageList) )
  {
LABEL_164:
    sub_21FFECC(Instance, v7);
  }
  v24 = 0;
  do
  {
    if ( v24 >= LODWORD(PortraitLimitCountStageList->max_length) )
      goto LABEL_166;
    v25 = PortraitLimitCountStageList->m_Items[v24];
    charaLevelTitleRangeLabelList = this->fields.charaLevelTitleRangeLabelList;
    v27 = v25 > 0 && v86;
    v28 = v25 == PortraitLimitCountStage && v25 > 0;
    if ( !charaLevelTitleRangeLabelList )
      goto LABEL_164;
    if ( v24 >= LODWORD(charaLevelTitleRangeLabelList->max_length) )
      goto LABEL_166;
    v29 = charaLevelTitleRangeLabelList->m_Items[v24];
    if ( v25 <= 0
      && (Instance = (UICommonButton_o *)ServantStatusListViewItem__get_IsMine(item, 0),
          ((unsigned __int8)Instance & 1) != 0) )
    {
      if ( !v29 )
        goto LABEL_164;
      v88.fields.r = v15;
      v88.fields.g = v16;
      v88.fields.b = v17;
      v88.fields.a = v18;
      UIRangeLabel__set_effectColor(v29, v88, 0);
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v30, v31);
      v32 = (System_String_o *)StringLiteral_12430/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_CLOSE"*/;
    }
    else
    {
      v33 = v18;
      v34 = v17;
      v35 = v16;
      v36 = v15;
      if ( v25 == PortraitLimitCountStage && v27 )
      {
        v33 = a;
        v34 = b;
        v35 = g;
        v36 = r;
      }
      if ( !v29 )
        goto LABEL_164;
      UIRangeLabel__set_effectColor(v29, *(UnityEngine_Color_o *)&v36, 0);
      v38 = System_Int32__ToString((int32_t)&v87, 0);
      v32 = System_String__Concat_75438412((System_String_o *)StringLiteral_12429/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_"*/, v38, 0);
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v39, v40);
    }
    v41 = LocalizationManager__Get(v32, 0);
    UIRangeLabel__Set(v29, v41, 0, 1, 0, 0, 0);
    charaLevelSpriteList = this->fields.charaLevelSpriteList;
    if ( !charaLevelSpriteList )
      goto LABEL_164;
    if ( v87 >= LODWORD(charaLevelSpriteList->max_length) )
LABEL_166:
      sub_21FFED4(Instance);
    Instance = (UICommonButton_o *)charaLevelSpriteList->m_Items[v87];
    if ( !Instance )
      goto LABEL_164;
    v43 = &StringLiteral_18173/*"btn_bg_21"*/;
    if ( !v28 )
      v43 = &StringLiteral_18171/*"btn_bg_20"*/;
    UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v43, 0);
    servantButtonList = this->fields.servantButtonList;
    if ( v25 == PortraitLimitCountStage && v27 )
    {
      if ( !servantButtonList )
        goto LABEL_164;
      if ( v87 >= LODWORD(servantButtonList->max_length) )
        goto LABEL_166;
      Instance = servantButtonList->m_Items[v87];
      if ( !Instance )
        goto LABEL_164;
      UICommonButton__SetColliderEnable(Instance, 0, isInit, 0);
      charaLevelButtonList = this->fields.charaLevelButtonList;
      if ( !charaLevelButtonList )
        goto LABEL_164;
      if ( v87 >= LODWORD(charaLevelButtonList->max_length) )
        goto LABEL_166;
      Instance = charaLevelButtonList->m_Items[v87];
      if ( !Instance )
        goto LABEL_164;
      UICommonButton__SetColliderEnable(Instance, 0, isInit, 0);
    }
    else
    {
      if ( !servantButtonList )
        goto LABEL_164;
      if ( v87 >= LODWORD(servantButtonList->max_length) )
        goto LABEL_166;
      Instance = servantButtonList->m_Items[v87];
      if ( !Instance )
        goto LABEL_164;
      UICommonButton__SetButtonEnable(Instance, v27 && !v28, isInit || !v27, 0);
      v47 = this->fields.charaLevelButtonList;
      if ( !v47 )
        goto LABEL_164;
      if ( v87 >= LODWORD(v47->max_length) )
        goto LABEL_166;
      Instance = v47->m_Items[v87];
      if ( !Instance )
        goto LABEL_164;
      UICommonButton__SetButtonEnable(Instance, v27 && !v28, isInit || !v27, 0);
    }
    limitCountSealLabel = this->fields.limitCountSealLabel;
    if ( limitCountSealLabel )
    {
      if ( v87 >= LODWORD(limitCountSealLabel->max_length) )
        goto LABEL_166;
      v49 = (UnityEngine_Object_o *)limitCountSealLabel->m_Items[v87];
    }
    else
    {
      v49 = 0;
    }
    limitCountSealObjList = this->fields.limitCountSealObjList;
    if ( limitCountSealObjList )
    {
      if ( v87 >= LODWORD(limitCountSealObjList->max_length) )
        goto LABEL_166;
      v51 = (UnityEngine_Object_o *)limitCountSealObjList->m_Items[v87];
    }
    else
    {
      v51 = 0;
    }
    SvtId = ServantStatusListViewItem__GetSvtId(item, 0, 0);
    LimitCount = ServantStatusListViewItem__get_LimitCount(item, 0);
    IsSealed = LimitCountUtility__IsSealed(SvtId, LimitCount, v25, 0, 0);
    v57 = *(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1);
    if ( IsSealed )
    {
      if ( !v57 )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v54, v55);
      Instance = (UICommonButton_o *)UnityEngine_Object__op_Inequality(v51, 0, 0);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v51 )
          goto LABEL_164;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v51, 1, 0);
      }
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v58);
      Instance = (UICommonButton_o *)UnityEngine_Object__op_Inequality(v49, 0, 0);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v7, v59);
        Instance = (UICommonButton_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8610/*"LIMIT_COUNT_SELECT_SEALED"*/, 0);
        if ( !v49 )
          goto LABEL_164;
        v60 = (System_String_o *)Instance;
        goto LABEL_101;
      }
    }
    else
    {
      if ( !v57 )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v54, v55);
      Instance = (UICommonButton_o *)UnityEngine_Object__op_Inequality(v51, 0, 0);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v51 )
          goto LABEL_164;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v51, 0, 0);
      }
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v61);
      Instance = (UICommonButton_o *)UnityEngine_Object__op_Inequality(v49, 0, 0);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v49 )
          goto LABEL_164;
        v60 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_101:
        UILabel__set_text((UILabel_o *)v49, v60, 0);
      }
    }
    v62 = (int)(v87 - 2) < 0;
    v24 = ++v87;
  }
  while ( v62 != __OFSUB__(v87, 3) );
  v63 = this->fields.charaLevelButtonList;
  if ( !v63 )
    goto LABEL_164;
  v64 = 3;
  while ( v64 < SLODWORD(v63->max_length) )
  {
    max_length = PortraitLimitCountStageList->max_length;
    if ( v64 >= max_length )
    {
      v66 = 0;
    }
    else
    {
      if ( v64 >= (unsigned int)max_length )
        goto LABEL_166;
      v66 = PortraitLimitCountStageList->m_Items[v64] == PortraitLimitCountStage;
    }
    v67 = this->fields.charaLevelTitleRangeLabelList;
    v68 = v64 < max_length && v86;
    if ( !v67 )
      goto LABEL_164;
    if ( (unsigned int)v64 >= LODWORD(v67->max_length) )
      goto LABEL_166;
    v69 = &v67->obj.klass + v64;
    v70 = (UIRangeLabel_o *)v69[4];
    if ( v64 >= max_length )
    {
      if ( !v70 )
        goto LABEL_164;
      UIRangeLabel__Clear((UIRangeLabel_o *)v69[4], 0);
    }
    else
    {
      Instance = (UICommonButton_o *)ServantStatusListViewItem__GetSvtId(item, 0, 0);
      if ( (unsigned int)v64 >= LODWORD(PortraitLimitCountStageList->max_length) )
        goto LABEL_166;
      v7 = (unsigned int)Instance;
      Instance = (UICommonButton_o *)v84;
      if ( !v84 )
        goto LABEL_164;
      Entity = ServantCostumeMaster__GetEntity(v84, v7, PortraitLimitCountStageList->m_Items[v64], 0);
      if ( Entity )
      {
        Instance = (UICommonButton_o *)ServantCostumeEntity__getShortName(Entity, 0);
        v73 = (System_String_o *)Instance;
      }
      else
      {
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v7, v72);
        if ( !byte_593385D )
        {
          sub_21FFC50(&LocalizationManager_TypeInfo);
          byte_593385D = 1;
        }
        Instance = (UICommonButton_o *)LocalizationManager_TypeInfo;
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v7, v72);
          Instance = (UICommonButton_o *)LocalizationManager_TypeInfo;
        }
        v73 = *(System_String_o **)(*(_QWORD *)&Instance[1].fields.specifyHoverColor.fields.b + 32LL);
      }
      v74 = v18;
      v75 = v17;
      v76 = v16;
      v77 = v15;
      if ( v68 && v66 )
      {
        v74 = a;
        v75 = b;
        v76 = g;
        v77 = r;
      }
      if ( !v70 )
        goto LABEL_164;
      UIRangeLabel__set_effectColor(v70, *(UnityEngine_Color_o *)&v77, 0);
      UIRangeLabel__Set(v70, v73, 0, 1, 0, 0, 0);
    }
    v78 = this->fields.charaLevelSpriteList;
    if ( !v78 )
      goto LABEL_164;
    if ( (unsigned int)v64 >= LODWORD(v78->max_length) )
      goto LABEL_166;
    Instance = (UICommonButton_o *)v78->m_Items[v64];
    if ( !Instance )
      goto LABEL_164;
    v79 = &StringLiteral_18173/*"btn_bg_21"*/;
    if ( !v66 )
      v79 = &StringLiteral_18171/*"btn_bg_20"*/;
    UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v79, 0);
    v80 = this->fields.servantButtonList;
    if ( v68 && v66 )
    {
      if ( !v80 )
        goto LABEL_164;
      if ( (unsigned int)v64 >= LODWORD(v80->max_length) )
        goto LABEL_166;
      Instance = v80->m_Items[v64];
      if ( !Instance )
        goto LABEL_164;
      UICommonButton__SetColliderEnable(Instance, 0, isInit, 0);
      v81 = this->fields.charaLevelButtonList;
      if ( !v81 )
        goto LABEL_164;
      if ( (unsigned int)v64 >= LODWORD(v81->max_length) )
        goto LABEL_166;
      Instance = v81->m_Items[v64];
      if ( !Instance )
        goto LABEL_164;
      UICommonButton__SetColliderEnable(Instance, 0, isInit, 0);
    }
    else if ( v64 >= max_length )
    {
      if ( !v80 )
        goto LABEL_164;
      if ( (unsigned int)v64 >= LODWORD(v80->max_length) )
        goto LABEL_166;
      Instance = v80->m_Items[v64];
      if ( !Instance )
        goto LABEL_164;
      Instance = (UICommonButton_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
      if ( !Instance )
        goto LABEL_164;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
      v83 = this->fields.charaLevelButtonList;
      if ( !v83 )
        goto LABEL_164;
      if ( (unsigned int)v64 >= LODWORD(v83->max_length) )
        goto LABEL_166;
      Instance = v83->m_Items[v64];
      if ( !Instance )
        goto LABEL_164;
      Instance = (UICommonButton_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
      if ( !Instance )
        goto LABEL_164;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
    }
    else
    {
      if ( !v80 )
        goto LABEL_164;
      if ( (unsigned int)v64 >= LODWORD(v80->max_length) )
        goto LABEL_166;
      Instance = v80->m_Items[v64];
      if ( !Instance )
        goto LABEL_164;
      UICommonButton__SetButtonEnable(Instance, v68 && !v66, isInit || !v68, 0);
      v82 = this->fields.charaLevelButtonList;
      if ( !v82 )
        goto LABEL_164;
      if ( (unsigned int)v64 >= LODWORD(v82->max_length) )
        goto LABEL_166;
      Instance = v82->m_Items[v64];
      if ( !Instance )
        goto LABEL_164;
      UICommonButton__SetButtonEnable(Instance, v68 && !v66, isInit || !v68, 0);
    }
    v63 = this->fields.charaLevelButtonList;
    ++v64;
    if ( !v63 )
      goto LABEL_164;
  }
}


void ServantStatusListViewItemDrawPortrait__SetupMask(
        ServantStatusListViewItemDrawPortrait_o *this,
        ServantStatusListViewItem_o *item,
        const MethodInfo *method)
{
  ServantStatusListViewItemDrawPortrait_o *v4; // x19
  bool IsEnableOwnRandomSetting; // w8
  struct UISprite_o *baseSprite; // x8
  ServantStatusListViewItemDrawPortrait_o *v7; // x21
  System_String_o *v8; // x21
  __int64 v9; // x2
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_5935172 & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    this = (ServantStatusListViewItemDrawPortrait_o *)sub_21FFC50(&StringLiteral_12453/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_INFO_OWN_SETTING_STATUS_ICON"*/);
    byte_5935172 = 1;
  }
  if ( !item )
    goto LABEL_24;
  if ( item->fields.userSvtEntity )
  {
    IsEnableOwnRandomSetting = ServantStatusListViewItem__get_IsEnableOwnRandomSetting(item, 0);
    this = (ServantStatusListViewItemDrawPortrait_o *)v4->fields.maskBase;
    if ( IsEnableOwnRandomSetting )
    {
      if ( this )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
        baseSprite = v4->fields.baseSprite;
        if ( baseSprite )
        {
          this = (ServantStatusListViewItemDrawPortrait_o *)v4->fields.maskSprite;
          if ( this )
          {
            UIWidget__set_height((UIWidget_o *)this, baseSprite->fields.mHeight, 0);
            this = (ServantStatusListViewItemDrawPortrait_o *)v4->fields.maskSprite;
            if ( this )
            {
              UIWidget__ResizeCollider((UIWidget_o *)this, 0);
              this = (ServantStatusListViewItemDrawPortrait_o *)v4->fields.maskSprite;
              if ( this )
              {
                this = (ServantStatusListViewItemDrawPortrait_o *)UnityEngine_Component__get_gameObject(
                                                                    (UnityEngine_Component_o *)this,
                                                                    0);
                if ( v4->fields.baseSprite )
                {
                  v7 = this;
                  this = (ServantStatusListViewItemDrawPortrait_o *)UnityEngine_Component__get_transform(
                                                                      (UnityEngine_Component_o *)v4->fields.baseSprite,
                                                                      0);
                  if ( this )
                  {
                    localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
                    GameObjectExtensions__SetLocalPositionY((UnityEngine_GameObject_o *)v7, localPosition.fields.y, 0);
                    v8 = **(System_String_o ***)(qword_594C0B8 + 184);
                    if ( ServantStatusListViewItem__get_IsEnableOwnRandomSetting(item, 0) )
                    {
                      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item, v9);
                      v8 = LocalizationManager__Get((System_String_o *)StringLiteral_12453/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_INFO_OWN_SETTING_STATUS_ICON"*/, 0);
                    }
                    this = (ServantStatusListViewItemDrawPortrait_o *)v4->fields.maskInfoLabel;
                    if ( this )
                    {
                      UILabel__set_overflowMethod((UILabel_o *)this, 2, 0);
                      this = (ServantStatusListViewItemDrawPortrait_o *)v4->fields.maskInfoLabel;
                      if ( this )
                      {
                        UILabel__set_text((UILabel_o *)this, v8, 0);
                        this = (ServantStatusListViewItemDrawPortrait_o *)v4->fields.maskInfoLabel;
                        if ( this )
                        {
                          UILabel__SetCondensedScale((UILabel_o *)this, v4->fields.MASK_LABEL_MAX_WIDTH, 0, 0);
                          return;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
LABEL_24:
      sub_21FFECC(this, item);
    }
    if ( !this )
      goto LABEL_24;
  }
  else
  {
    this = (ServantStatusListViewItemDrawPortrait_o *)v4->fields.maskBase;
    if ( !this )
      goto LABEL_24;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
}