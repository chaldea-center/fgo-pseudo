void ServantStatusListViewItemDrawPortrait___ctor(
        ServantStatusListViewItemDrawPortrait_o *this,
        const MethodInfo *method)
{
  this->fields.MASK_LABEL_MAX_WIDTH = 550;
  this->fields.QUESTION_MARK_COLOR = (struct UnityEngine_Color_o)xmmword_D34FA0;
  this->fields.transformNameAddHeight = 20;
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
      sub_1D0F314(this);
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
      sub_1D0F30C(this, method);
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
  ServantStatusListViewItemDrawPortrait_o *v5; // x21
  __int64 v6; // x27
  int32_t *p_dispMode; // x28
  struct UISprite_array *servantMaskSpriteList; // x8
  int32_t SvtId; // w22
  struct UITexture_array *v10; // x8
  UITexture_o *v11; // x22
  int32_t v12; // w24
  int32_t v13; // w23
  int32_t LimitCount; // w0
  int32_t v15; // w24
  struct UISprite_array *v16; // x8
  const MethodInfo *v17; // x3
  struct UITexture_array *servantTextureList; // x8
  char v19; // w22
  struct UISprite_array *v20; // x8
  UISprite_o *v21; // x22
  struct UISprite_array *v22; // x8
  struct UITexture_array *v23; // x8
  __int64 v24; // x27
  unsigned __int64 max_length_low; // x9
  unsigned __int64 v26; // x29
  UITexture_o *v27; // x22
  int32_t v28; // w23
  int32_t v29; // w24
  struct UISprite_array *v30; // x8
  struct UITexture_array *v31; // x8
  char v32; // w22
  struct UISprite_array *v33; // x8
  struct UISprite_array *v34; // x8
  UISprite_o *v35; // x22
  struct UISprite_array *v36; // x8

  v4 = this;
  if ( (byte_4E74623 & 1) == 0 )
  {
    sub_1D0F0B4(&AtlasManager_TypeInfo);
    this = (ServantStatusListViewItemDrawPortrait_o *)sub_1D0F0B4(&ServantAssetLoadManager_TypeInfo);
    byte_4E74623 = 1;
  }
  if ( !item )
    goto LABEL_61;
  ServantStatusListViewItem__GetPortraitLimitCountStage(item, 0);
  this = (ServantStatusListViewItemDrawPortrait_o *)ServantStatusListViewItem__GetPortraitLimitCountStageList(item, 0);
  v5 = this;
  v6 = 0;
  p_dispMode = &this->fields.dispMode;
  do
  {
    servantMaskSpriteList = v4->fields.servantMaskSpriteList;
    if ( !servantMaskSpriteList )
      goto LABEL_61;
    if ( (unsigned int)v6 >= LODWORD(servantMaskSpriteList->max_length) )
      goto LABEL_63;
    this = (ServantStatusListViewItemDrawPortrait_o *)servantMaskSpriteList->m_Items[v6];
    if ( !this )
      goto LABEL_61;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 1, 0);
    if ( !v5 )
      goto LABEL_61;
    if ( (unsigned int)v6 >= LODWORD(v5->fields.m_CancellationTokenSource) )
      goto LABEL_63;
    if ( p_dispMode[v6] < 0 )
    {
      this = (ServantStatusListViewItemDrawPortrait_o *)ServantStatusListViewItem__get_IsMine(item, 0);
      servantTextureList = v4->fields.servantTextureList;
      if ( !servantTextureList )
        goto LABEL_61;
      if ( (unsigned int)v6 >= LODWORD(servantTextureList->max_length) )
        goto LABEL_63;
      v19 = (char)this;
      this = (ServantStatusListViewItemDrawPortrait_o *)servantTextureList->m_Items[v6];
      if ( !this )
        goto LABEL_61;
      this = (ServantStatusListViewItemDrawPortrait_o *)(*(__int64 (__fastcall **)(ServantStatusListViewItemDrawPortrait_o *, _QWORD, size_t))&this->klass[1]._2.cctor_finished)(
                                                          this,
                                                          0,
                                                          this->klass[1]._2.cctor_thread);
      if ( (v19 & 1) == 0 )
      {
        v20 = v4->fields.servantMaskSpriteList;
        if ( !v20 )
          goto LABEL_61;
        if ( (unsigned int)v6 >= LODWORD(v20->max_length) )
LABEL_63:
          sub_1D0F314(this);
        v21 = v20->m_Items[v6];
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        this = (ServantStatusListViewItemDrawPortrait_o *)AtlasManager__SetNotOpenFace(v21, 0);
        v22 = v4->fields.servantMaskSpriteList;
        if ( !v22 )
          goto LABEL_61;
        if ( (unsigned int)v6 >= LODWORD(v22->max_length) )
          goto LABEL_63;
        this = (ServantStatusListViewItemDrawPortrait_o *)v22->m_Items[v6];
        if ( !this )
          goto LABEL_61;
        UIWidget__set_color((UIWidget_o *)this, v4->fields.QUESTION_MARK_COLOR, 0);
      }
    }
    else
    {
      SvtId = ServantStatusListViewItem__GetSvtId(item, 0, 0);
      this = (ServantStatusListViewItemDrawPortrait_o *)ServantStatusListViewItem__get_LimitCount(item, 0);
      if ( (unsigned int)v6 >= LODWORD(v5->fields.m_CancellationTokenSource) )
        goto LABEL_63;
      this = (ServantStatusListViewItemDrawPortrait_o *)LimitCountUtility__GetSealAfter(
                                                          SvtId,
                                                          (int32_t)this,
                                                          p_dispMode[v6],
                                                          0,
                                                          0);
      v10 = v4->fields.servantTextureList;
      if ( !v10 )
        goto LABEL_61;
      if ( (unsigned int)v6 >= LODWORD(v10->max_length) )
        goto LABEL_63;
      v11 = v10->m_Items[v6];
      v12 = (int)this;
      v13 = ServantStatusListViewItem__GetSvtId(item, 0, 0);
      LimitCount = ServantStatusListViewItem__get_LimitCount(item, 0);
      v15 = LimitCountUtility__ConvertStageToLimitCount(LimitCount, v12, 0, 0);
      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      this = (ServantStatusListViewItemDrawPortrait_o *)ServantAssetLoadManager__loadStatusFace(v11, v13, v15, 0);
      v16 = v4->fields.servantMaskSpriteList;
      if ( !v16 )
        goto LABEL_61;
      if ( (unsigned int)v6 >= LODWORD(v16->max_length) )
        goto LABEL_63;
      this = (ServantStatusListViewItemDrawPortrait_o *)v16->m_Items[v6];
      if ( !this )
        goto LABEL_61;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0);
    }
    ++v6;
  }
  while ( (_DWORD)v6 != 3 );
  v23 = v4->fields.servantTextureList;
  if ( !v23 )
LABEL_61:
    sub_1D0F30C(this, item);
  v24 = 0;
  while ( 1 )
  {
    max_length_low = LODWORD(v23->max_length);
    v26 = v24 + 3;
    if ( v24 + 3 >= (int)max_length_low )
      break;
    if ( (__int64)v26 >= SLODWORD(v5->fields.m_CancellationTokenSource) )
    {
      this = (ServantStatusListViewItemDrawPortrait_o *)ServantStatusListViewItem__get_IsMine(item, 0);
      v31 = v4->fields.servantTextureList;
      if ( !v31 )
        goto LABEL_61;
      if ( v26 >= LODWORD(v31->max_length) )
        goto LABEL_63;
      v32 = (char)this;
      this = (ServantStatusListViewItemDrawPortrait_o *)v31->m_Items[v24 + 3];
      if ( !this )
        goto LABEL_61;
      this = (ServantStatusListViewItemDrawPortrait_o *)(*(__int64 (__fastcall **)(ServantStatusListViewItemDrawPortrait_o *, _QWORD, size_t))&this->klass[1]._2.cctor_finished)(
                                                          this,
                                                          0,
                                                          this->klass[1]._2.cctor_thread);
      v33 = v4->fields.servantMaskSpriteList;
      if ( !v33 )
        goto LABEL_61;
      if ( v26 >= LODWORD(v33->max_length) )
        goto LABEL_63;
      this = (ServantStatusListViewItemDrawPortrait_o *)v33->m_Items[v24 + 3];
      if ( !this )
        goto LABEL_61;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 1, 0);
      if ( (v32 & 1) == 0 )
      {
        v34 = v4->fields.servantMaskSpriteList;
        if ( !v34 )
          goto LABEL_61;
        if ( v26 >= LODWORD(v34->max_length) )
          goto LABEL_63;
        v35 = v34->m_Items[v24 + 3];
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        this = (ServantStatusListViewItemDrawPortrait_o *)AtlasManager__SetNotOpenFace(v35, 0);
        v36 = v4->fields.servantMaskSpriteList;
        if ( !v36 )
          goto LABEL_61;
        if ( v26 >= LODWORD(v36->max_length) )
          goto LABEL_63;
        this = (ServantStatusListViewItemDrawPortrait_o *)v36->m_Items[v24 + 3];
        if ( !this )
          goto LABEL_61;
        UIWidget__set_color((UIWidget_o *)this, v4->fields.QUESTION_MARK_COLOR, 0);
      }
    }
    else
    {
      if ( v26 >= max_length_low )
        goto LABEL_63;
      v27 = v23->m_Items[v24 + 3];
      this = (ServantStatusListViewItemDrawPortrait_o *)ServantStatusListViewItem__get_SvtId(item, 0);
      if ( v26 >= LODWORD(v5->fields.m_CancellationTokenSource) )
        goto LABEL_63;
      v28 = (int)this;
      v29 = *((_DWORD *)&v5->fields.baseCollider + v24 + 1);
      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      this = (ServantStatusListViewItemDrawPortrait_o *)ServantAssetLoadManager__loadStatusFace(v27, v28, v29, 0);
      v30 = v4->fields.servantMaskSpriteList;
      if ( !v30 )
        goto LABEL_61;
      if ( v26 >= LODWORD(v30->max_length) )
        goto LABEL_63;
      this = (ServantStatusListViewItemDrawPortrait_o *)v30->m_Items[v24 + 3];
      if ( !this )
        goto LABEL_61;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0);
    }
    v23 = v4->fields.servantTextureList;
    ++v24;
    if ( !v23 )
      goto LABEL_61;
  }
  ServantStatusListViewItemDrawPortrait__SetupButton(v4, item, 0, v17);
}


void ServantStatusListViewItemDrawPortrait__SetItem(
        ServantStatusListViewItemDrawPortrait_o *this,
        ServantStatusListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x21
  UILabel_o *explanationLabel; // x22
  __int64 *v9; // x8
  void *PortraitLimitCountStageList; // x0
  __int64 v11; // x1
  struct ServantEntity_o *svtEntity; // x8
  __int64 v13; // x22
  __int64 v14; // x23
  int32_t v15; // w22
  UILabel_o *servantLeaderInfo; // x23
  System_String_o *mText; // x25
  System_String_o *v18; // x24
  Il2CppObject *LimitCountSealedServantName; // x0
  System_String_o *v20; // x0
  System_String_o *v21; // x0
  int v22; // w8
  int32_t buttonPitch; // w9
  float x; // s8
  float y; // s9
  float z; // s10
  int v27; // w10
  bool v28; // cc
  int v29; // w10
  UnityEngine_Object_o *baseCollider; // x21
  int v31; // w9
  int v32; // w24
  float v33; // s9
  int32_t v34; // w1
  int32_t v35; // w1
  int v36; // w21
  float v37; // s8
  float v38; // s11
  float v39; // s9
  float v40; // s10
  float v41; // s8
  float v42; // s11
  float v43; // s9
  float v44; // s8
  float v45; // s10
  float v46; // s9
  UIWidget_o *transformNameLabel; // x21
  UIWidget_o *transformNameSprite; // x21
  UILabel_o *v49; // x21
  UnityEngine_Object_o *v50; // x21
  float v51; // s1
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t transformNameAddHeight; // w8
  int v54; // w8
  UnityEngine_GameObject_o *v55; // x0
  int32_t v56; // w8
  int v57; // w8
  const MethodInfo *v58; // x3
  const MethodInfo *v59; // x2
  UILabel_o *v60; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v61; // 0:x0.16
  UnityEngine_Vector3_o v62; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v63; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v64; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v65; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o size; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o TransformNameLabelColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o TransformNameSpriteColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4E74622 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1D0F0B4(&DataManager_TypeInfo);
    sub_1D0F0B4(&LocalizationManager_TypeInfo);
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1D0F0B4(&StringLiteral_12096/*"SERVANT_STATUS_EXPLANATION_PORTRAIT3"*/);
    sub_1D0F0B4(&StringLiteral_12095/*"SERVANT_STATUS_EXPLANATION_PORTRAIT2"*/);
    sub_1D0F0B4(&StringLiteral_12094/*"SERVANT_STATUS_EXPLANATION_PORTRAIT"*/);
    sub_1D0F0B4(&StringLiteral_12097/*"SERVANT_STATUS_EXPLANATION_PORTRAIT_LIMIT_COUNT_SEALED_MSG"*/);
    byte_4E74622 = 1;
  }
  this->fields.dispMode = mode;
  if ( item && mode )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
    if ( item->fields.userSvtEntity )
    {
      explanationLabel = this->fields.explanationLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v9 = &StringLiteral_12094/*"SERVANT_STATUS_EXPLANATION_PORTRAIT"*/;
    }
    else
    {
      if ( !item->fields.userSvtCollectionEntity )
      {
        servantLeaderInfo = (UILabel_o *)item->fields.servantLeaderInfo;
        v60 = this->fields.explanationLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        PortraitLimitCountStageList = LocalizationManager__Get((System_String_o *)StringLiteral_12096/*"SERVANT_STATUS_EXPLANATION_PORTRAIT3"*/, 0);
        if ( !v60 )
          goto LABEL_95;
        UILabel__set_text(v60, (System_String_o *)PortraitLimitCountStageList, 0);
        if ( !servantLeaderInfo )
        {
LABEL_27:
          PortraitLimitCountStageList = ServantStatusListViewItem__GetPortraitLimitCountStageList(item, 0);
          if ( !PortraitLimitCountStageList )
            goto LABEL_95;
          v22 = *((_DWORD *)PortraitLimitCountStageList + 6);
          if ( v22 < 4 )
            buttonPitch = 0;
          else
            buttonPitch = this->fields.buttonPitch;
          x = this->fields.baseSize.fields.x;
          y = this->fields.baseSize.fields.y;
          z = this->fields.baseSize.fields.z;
          v27 = v22 / 3;
          if ( v22 != 3 * (v22 / 3) )
            ++v27;
          v28 = v27 < 3;
          v29 = v27 - 1;
          if ( v28 )
            v29 = 1;
          baseCollider = (UnityEngine_Object_o *)this->fields.baseCollider;
          v31 = v29 * buttonPitch;
          if ( (_DWORD)servantLeaderInfo )
            v32 = v31 + 22;
          else
            v32 = v31;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          v33 = y + (float)v32;
          if ( UnityEngine_Object__op_Inequality(baseCollider, 0, 0) )
          {
            PortraitLimitCountStageList = this->fields.baseCollider;
            if ( !PortraitLimitCountStageList )
              goto LABEL_95;
            v62.fields.x = x;
            v62.fields.y = v33;
            v62.fields.z = z;
            UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)PortraitLimitCountStageList, v62, 0);
          }
          PortraitLimitCountStageList = this->fields.baseSprite;
          if ( PortraitLimitCountStageList )
          {
            v34 = x == INFINITY ? 0x80000000 : (int)x;
            UIWidget__set_width((UIWidget_o *)PortraitLimitCountStageList, v34, 0);
            PortraitLimitCountStageList = this->fields.baseSprite;
            if ( PortraitLimitCountStageList )
            {
              v35 = v33 == INFINITY ? 0x80000000 : (int)v33;
              UIWidget__set_height((UIWidget_o *)PortraitLimitCountStageList, v35, 0);
              PortraitLimitCountStageList = this->fields.titleSprite;
              v36 = v32 >= 0 ? v32 : v32 + 1;
              if ( PortraitLimitCountStageList )
              {
                v37 = this->fields.titleBasePosition.fields.x;
                v38 = this->fields.titleBasePosition.fields.y;
                v39 = this->fields.titleBasePosition.fields.z;
                PortraitLimitCountStageList = UnityEngine_Component__get_transform(
                                                (UnityEngine_Component_o *)PortraitLimitCountStageList,
                                                0);
                if ( PortraitLimitCountStageList )
                {
                  v40 = (float)(v36 >> 1);
                  v63.fields.y = v38 + v40;
                  v63.fields.x = v37;
                  v63.fields.z = v39;
                  UnityEngine_Transform__set_localPosition(
                    (UnityEngine_Transform_o *)PortraitLimitCountStageList,
                    v63,
                    0);
                  PortraitLimitCountStageList = this->fields.levelButtonBase;
                  if ( PortraitLimitCountStageList )
                  {
                    v41 = this->fields.levelButtonBasePosition.fields.x;
                    v42 = this->fields.levelButtonBasePosition.fields.y;
                    v43 = this->fields.levelButtonBasePosition.fields.z;
                    PortraitLimitCountStageList = UnityEngine_GameObject__get_transform(
                                                    (UnityEngine_GameObject_o *)PortraitLimitCountStageList,
                                                    0);
                    if ( PortraitLimitCountStageList )
                    {
                      v64.fields.y = v42 + v40;
                      v64.fields.x = v41;
                      v64.fields.z = v43;
                      UnityEngine_Transform__set_localPosition(
                        (UnityEngine_Transform_o *)PortraitLimitCountStageList,
                        v64,
                        0);
                      PortraitLimitCountStageList = this->fields.explanationLabel;
                      v44 = (_DWORD)servantLeaderInfo
                          ? (float)(this->fields.explanationBasePosition.fields.y - v40) + 11.0
                          : this->fields.explanationBasePosition.fields.y - v40;
                      if ( PortraitLimitCountStageList )
                      {
                        v45 = this->fields.explanationBasePosition.fields.x;
                        v46 = this->fields.explanationBasePosition.fields.z;
                        PortraitLimitCountStageList = UnityEngine_Component__get_transform(
                                                        (UnityEngine_Component_o *)PortraitLimitCountStageList,
                                                        0);
                        if ( PortraitLimitCountStageList )
                        {
                          v65.fields.x = v45;
                          v65.fields.y = v44;
                          v65.fields.z = v46;
                          UnityEngine_Transform__set_localPosition(
                            (UnityEngine_Transform_o *)PortraitLimitCountStageList,
                            v65,
                            0);
                          if ( ServantStatusListViewItem__get_IsSaveTransformServant(item, 0) )
                          {
                            transformNameLabel = (UIWidget_o *)this->fields.transformNameLabel;
                            TransformNameLabelColor = ServantStatusListViewItem__get_TransformNameLabelColor(item, 0);
                            if ( transformNameLabel )
                            {
                              UIWidget__set_color(transformNameLabel, TransformNameLabelColor, 0);
                              transformNameSprite = (UIWidget_o *)this->fields.transformNameSprite;
                              TransformNameSpriteColor = ServantStatusListViewItem__get_TransformNameSpriteColor(
                                                           item,
                                                           0);
                              if ( transformNameSprite )
                              {
                                UIWidget__set_color(transformNameSprite, TransformNameSpriteColor, 0);
                                PortraitLimitCountStageList = this->fields.transformNameSprite;
                                if ( PortraitLimitCountStageList )
                                {
                                  PortraitLimitCountStageList = UnityEngine_Component__get_gameObject(
                                                                  (UnityEngine_Component_o *)PortraitLimitCountStageList,
                                                                  0);
                                  if ( PortraitLimitCountStageList )
                                  {
                                    UnityEngine_GameObject__SetActive(
                                      (UnityEngine_GameObject_o *)PortraitLimitCountStageList,
                                      1,
                                      0);
                                    v49 = this->fields.transformNameLabel;
                                    PortraitLimitCountStageList = ServantStatusListViewItem__GetTransformName(item, 0);
                                    if ( v49 )
                                    {
                                      UILabel__set_text(v49, (System_String_o *)PortraitLimitCountStageList, 0);
                                      v50 = (UnityEngine_Object_o *)this->fields.baseCollider;
                                      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                                      if ( UnityEngine_Object__op_Inequality(v50, 0, 0) )
                                      {
                                        PortraitLimitCountStageList = this->fields.baseCollider;
                                        if ( !PortraitLimitCountStageList )
                                          goto LABEL_95;
                                        size = UnityEngine_BoxCollider__get_size(
                                                 (UnityEngine_BoxCollider_o *)PortraitLimitCountStageList,
                                                 0);
                                        PortraitLimitCountStageList = this->fields.baseCollider;
                                        if ( !PortraitLimitCountStageList )
                                          goto LABEL_95;
                                        v51 = size.fields.y + (float)this->fields.transformNameAddHeight;
                                        UnityEngine_BoxCollider__set_size(
                                          (UnityEngine_BoxCollider_o *)PortraitLimitCountStageList,
                                          size,
                                          0);
                                      }
                                      PortraitLimitCountStageList = this->fields.baseSprite;
                                      if ( PortraitLimitCountStageList )
                                      {
                                        UIWidget__set_height(
                                          (UIWidget_o *)PortraitLimitCountStageList,
                                          this->fields.transformNameAddHeight
                                        + *((_DWORD *)PortraitLimitCountStageList + 43),
                                          0);
                                        PortraitLimitCountStageList = this->fields.titleSprite;
                                        if ( PortraitLimitCountStageList )
                                        {
                                          gameObject = UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)PortraitLimitCountStageList,
                                                         0);
                                          GameObjectExtensions__AddLocalPositionY(
                                            gameObject,
                                            (float)(this->fields.transformNameAddHeight / 2),
                                            0);
                                          transformNameAddHeight = this->fields.transformNameAddHeight;
                                          v54 = transformNameAddHeight <= 0
                                              ? -transformNameAddHeight
                                              : 1 - transformNameAddHeight;
                                          GameObjectExtensions__AddLocalPositionY(
                                            this->fields.levelButtonBase,
                                            (float)(v54 >> 1),
                                            0);
                                          PortraitLimitCountStageList = this->fields.explanationLabel;
                                          if ( PortraitLimitCountStageList )
                                          {
                                            v55 = UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)PortraitLimitCountStageList,
                                                    0);
                                            v56 = this->fields.transformNameAddHeight;
                                            if ( v56 <= 0 )
                                              v57 = -v56;
                                            else
                                              v57 = 1 - v56;
                                            GameObjectExtensions__AddLocalPositionY(v55, (float)(v57 >> 1), 0);
                                            goto LABEL_89;
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
                            PortraitLimitCountStageList = this->fields.transformNameSprite;
                            if ( PortraitLimitCountStageList )
                            {
                              PortraitLimitCountStageList = UnityEngine_Component__get_gameObject(
                                                              (UnityEngine_Component_o *)PortraitLimitCountStageList,
                                                              0);
                              if ( PortraitLimitCountStageList )
                              {
                                UnityEngine_GameObject__SetActive(
                                  (UnityEngine_GameObject_o *)PortraitLimitCountStageList,
                                  0,
                                  0);
LABEL_89:
                                ServantStatusListViewItemDrawPortrait__SetupButton(this, item, 1, v58);
                                ServantStatusListViewItemDrawPortrait__SetupMask(this, item, v59);
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
LABEL_95:
          sub_1D0F30C(PortraitLimitCountStageList, v11);
        }
LABEL_18:
        svtEntity = item->fields.svtEntity;
        if ( !svtEntity )
          goto LABEL_95;
        v14 = *(_QWORD *)&svtEntity->fields.id.fields.currentCryptoKey;
        v13 = *(_QWORD *)&svtEntity->fields.id.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v61.fields.currentCryptoKey = v14;
        *(_QWORD *)&v61.fields.fakeValue = v13;
        PortraitLimitCountStageList = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(
                                                v61,
                                                0);
        if ( !(_DWORD)PortraitLimitCountStageList )
          goto LABEL_26;
        if ( !Master_object )
          goto LABEL_95;
        v15 = (int)PortraitLimitCountStageList;
        if ( ServantLimitImageMaster__IsServantLimitCountSeal(
               (ServantLimitImageMaster_o *)Master_object,
               (int32_t)PortraitLimitCountStageList,
               3,
               0) )
        {
          PortraitLimitCountStageList = ServantLimitImageMaster__GetServantStatusExplanationText(
                                          (ServantLimitImageMaster_o *)Master_object,
                                          (System_String_o *)StringLiteral_12097/*"SERVANT_STATUS_EXPLANATION_PORTRAIT_LIMIT_COUNT_SEALED_MSG"*/,
                                          v15,
                                          0);
          servantLeaderInfo = this->fields.explanationLabel;
          if ( !servantLeaderInfo )
            goto LABEL_95;
          mText = servantLeaderInfo->fields.mText;
          v18 = (System_String_o *)PortraitLimitCountStageList;
          LimitCountSealedServantName = (Il2CppObject *)ServantLimitImageMaster__GetLimitCountSealedServantName(
                                                          (ServantLimitImageMaster_o *)Master_object,
                                                          v15,
                                                          3,
                                                          0,
                                                          0,
                                                          0);
          v20 = System_String__Format(v18, LimitCountSealedServantName, 0);
          v21 = System_String__Concat_65562772(mText, v20, 0);
          UILabel__set_text(servantLeaderInfo, v21, 0);
          LODWORD(servantLeaderInfo) = 1;
        }
        else
        {
LABEL_26:
          LODWORD(servantLeaderInfo) = 0;
        }
        goto LABEL_27;
      }
      explanationLabel = this->fields.explanationLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v9 = &StringLiteral_12095/*"SERVANT_STATUS_EXPLANATION_PORTRAIT2"*/;
    }
    PortraitLimitCountStageList = LocalizationManager__Get((System_String_o *)*v9, 0);
    if ( !explanationLabel )
      goto LABEL_95;
    UILabel__set_text(explanationLabel, (System_String_o *)PortraitLimitCountStageList, 0);
    goto LABEL_18;
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
  _BOOL4 v8; // w23
  System_Int32_array *PortraitLimitCountStageList; // x25
  LocalizationManager_c *v10; // x0
  float *static_fields; // x8
  float v12; // s8
  float v13; // s9
  float v14; // s10
  float v15; // s11
  struct LocalizationManager_StaticFields *v16; // x8
  float r; // s12
  float g; // s13
  float b; // s14
  float a; // s15
  unsigned int v21; // w8
  int32_t v22; // w26
  struct UIRangeLabel_array *charaLevelTitleRangeLabelList; // x11
  _BOOL4 v24; // w9
  UIRangeLabel_o *v25; // x27
  int v26; // w24
  int v27; // w19
  System_String_o *v28; // x28
  float v29; // s3
  float v30; // s2
  float v31; // s1
  float v32; // s0 OVERLAPPED
  System_String_o *v33; // x0
  System_String_o *v34; // x0
  struct UISprite_array *charaLevelSpriteList; // x8
  __int64 *v36; // x8
  struct UICommonButton_array *servantButtonList; // x8
  bool v38; // w19
  struct UICommonButton_array *charaLevelButtonList; // x8
  char v40; // w27
  bool v41; // w19
  struct UICommonButton_array *v42; // x8
  struct UILabel_array *limitCountSealLabel; // x8
  UnityEngine_Object_o *v44; // x27
  struct UnityEngine_GameObject_array *limitCountSealObjList; // x8
  UnityEngine_Object_o *v46; // x28
  int32_t SvtId; // w29
  int32_t LimitCount; // w0
  bool IsSealed; // w26
  System_String_o *v50; // x1
  bool v51; // nf
  struct UICommonButton_array *v52; // x8
  int v53; // w22
  int max_length; // w28
  _BOOL4 v55; // w24
  struct UIRangeLabel_array *v56; // x9
  UIRangeLabel_o *v57; // x26
  int v58; // w19
  ServantCostumeEntity_o *Entity; // x0
  System_String_o *v60; // x27
  float v61; // s3
  float v62; // s2
  float v63; // s1
  float v64; // s0 OVERLAPPED
  struct UISprite_array *v65; // x8
  __int64 *v66; // x8
  struct UICommonButton_array *v67; // x8
  bool v68; // w19
  struct UICommonButton_array *v69; // x8
  char v70; // w26
  bool v71; // w19
  struct UICommonButton_array *v72; // x8
  struct UICommonButton_array *v73; // x8
  ServantCostumeMaster_o *v74; // [xsp+8h] [xbp-B8h]
  int32_t PortraitLimitCountStage; // [xsp+14h] [xbp-ACh]
  unsigned int v77; // [xsp+1Ch] [xbp-A4h] BYREF
  UnityEngine_Color_o v78; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4E74624 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMasterData_ServantCostumeMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1D0F0B4(&LocalizationManager_TypeInfo);
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1D0F0B4(&StringLiteral_8375/*"LIMIT_COUNT_SELECT_SEALED"*/);
    sub_1D0F0B4(&StringLiteral_12111/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_"*/);
    sub_1D0F0B4(&StringLiteral_17707/*"btn_bg_20"*/);
    sub_1D0F0B4(&StringLiteral_12112/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_CLOSE"*/);
    sub_1D0F0B4(&StringLiteral_1/*""*/);
    sub_1D0F0B4(&StringLiteral_17709/*"btn_bg_21"*/);
    byte_4E74624 = 1;
  }
  v77 = 0;
  Instance = (UICommonButton_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_140;
  Instance = (UICommonButton_o *)DataManager__GetMasterData_object_(
                                   (DataManager_o *)Instance,
                                   (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
  v74 = (ServantCostumeMaster_o *)Instance;
  if ( !item )
    goto LABEL_140;
  if ( ServantStatusListViewItem__get_IsConvertOverwriteImage(item, 0) )
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
  PortraitLimitCountStage = ServantStatusListViewItem__GetPortraitLimitCountStage(item, 0);
  PortraitLimitCountStageList = ServantStatusListViewItem__GetPortraitLimitCountStageList(item, 0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !byte_4E71D15 )
  {
    sub_1D0F0B4(&LocalizationManager_TypeInfo);
    byte_4E71D15 = 1;
  }
  v10 = LocalizationManager_TypeInfo;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v10 = LocalizationManager_TypeInfo;
  }
  static_fields = (float *)v10->static_fields;
  v12 = static_fields[20];
  v13 = static_fields[21];
  v14 = static_fields[22];
  v15 = static_fields[23];
  if ( !byte_4E71D16 )
  {
    sub_1D0F0B4(&LocalizationManager_TypeInfo);
    v10 = LocalizationManager_TypeInfo;
    byte_4E71D16 = 1;
  }
  if ( !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    v10 = LocalizationManager_TypeInfo;
  }
  v16 = v10->static_fields;
  r = v16->selectEffectColor.fields.r;
  g = v16->selectEffectColor.fields.g;
  b = v16->selectEffectColor.fields.b;
  a = v16->selectEffectColor.fields.a;
  Instance = (UICommonButton_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (UICommonButton_o *)DataManager__GetMasterData_object_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___),
        v77 = 0,
        !PortraitLimitCountStageList) )
  {
LABEL_140:
    sub_1D0F30C(Instance, v7);
  }
  v21 = 0;
  do
  {
    if ( v21 >= LODWORD(PortraitLimitCountStageList->max_length) )
      goto LABEL_142;
    v22 = PortraitLimitCountStageList->m_Items[v21];
    charaLevelTitleRangeLabelList = this->fields.charaLevelTitleRangeLabelList;
    v24 = v22 > 0;
    if ( !charaLevelTitleRangeLabelList )
      goto LABEL_140;
    if ( v21 >= LODWORD(charaLevelTitleRangeLabelList->max_length) )
      goto LABEL_142;
    v25 = charaLevelTitleRangeLabelList->m_Items[v21];
    v26 = v24 && v22 == PortraitLimitCountStage;
    v27 = v8 && v24;
    if ( v22 <= 0
      && (Instance = (UICommonButton_o *)ServantStatusListViewItem__get_IsMine(item, 0),
          ((unsigned __int8)Instance & 1) != 0) )
    {
      if ( !v25 )
        goto LABEL_140;
      v78.fields.r = v12;
      v78.fields.g = v13;
      v78.fields.b = v14;
      v78.fields.a = v15;
      UIRangeLabel__set_effectColor(v25, v78, 0);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v28 = (System_String_o *)StringLiteral_12112/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_CLOSE"*/;
    }
    else
    {
      v29 = v15;
      v30 = v14;
      v31 = v13;
      v32 = v12;
      if ( (v27 & v26) != 0 )
      {
        v29 = a;
        v30 = b;
        v31 = g;
        v32 = r;
      }
      if ( !v25 )
        goto LABEL_140;
      UIRangeLabel__set_effectColor(v25, *(UnityEngine_Color_o *)&v32, 0);
      v33 = System_Int32__ToString((int32_t)&v77, 0);
      v28 = System_String__Concat_65562772((System_String_o *)StringLiteral_12111/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_"*/, v33, 0);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v34 = LocalizationManager__Get(v28, 0);
    UIRangeLabel__Set(v25, v34, 0, 1, 0, 0, 0);
    charaLevelSpriteList = this->fields.charaLevelSpriteList;
    if ( !charaLevelSpriteList )
      goto LABEL_140;
    if ( v77 >= LODWORD(charaLevelSpriteList->max_length) )
LABEL_142:
      sub_1D0F314(Instance);
    Instance = (UICommonButton_o *)charaLevelSpriteList->m_Items[v77];
    if ( !Instance )
      goto LABEL_140;
    v36 = &StringLiteral_17709/*"btn_bg_21"*/;
    if ( !v26 )
      v36 = &StringLiteral_17707/*"btn_bg_20"*/;
    UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v36, 0);
    servantButtonList = this->fields.servantButtonList;
    if ( !servantButtonList )
      goto LABEL_140;
    if ( v77 >= LODWORD(servantButtonList->max_length) )
      goto LABEL_142;
    Instance = servantButtonList->m_Items[v77];
    if ( (v27 & v26) != 0 )
    {
      if ( !Instance )
        goto LABEL_140;
      v38 = v27 == 0 || isInit;
      UICommonButton__SetColliderEnable(Instance, 0, v38, 0);
      charaLevelButtonList = this->fields.charaLevelButtonList;
      if ( !charaLevelButtonList )
        goto LABEL_140;
      if ( v77 >= LODWORD(charaLevelButtonList->max_length) )
        goto LABEL_142;
      Instance = charaLevelButtonList->m_Items[v77];
      if ( !Instance )
        goto LABEL_140;
      UICommonButton__SetColliderEnable(Instance, 0, v38, 0);
    }
    else
    {
      if ( !Instance )
        goto LABEL_140;
      v40 = v27 & ~(_BYTE)v26;
      v41 = v27 == 0 || isInit;
      UICommonButton__SetButtonEnable(Instance, v40, v41, 0);
      v42 = this->fields.charaLevelButtonList;
      if ( !v42 )
        goto LABEL_140;
      if ( v77 >= LODWORD(v42->max_length) )
        goto LABEL_142;
      Instance = v42->m_Items[v77];
      if ( !Instance )
        goto LABEL_140;
      UICommonButton__SetButtonEnable(Instance, v40, v41, 0);
    }
    limitCountSealLabel = this->fields.limitCountSealLabel;
    if ( limitCountSealLabel )
    {
      if ( v77 >= LODWORD(limitCountSealLabel->max_length) )
        goto LABEL_142;
      v44 = (UnityEngine_Object_o *)limitCountSealLabel->m_Items[v77];
    }
    else
    {
      v44 = 0;
    }
    limitCountSealObjList = this->fields.limitCountSealObjList;
    if ( limitCountSealObjList )
    {
      if ( v77 >= LODWORD(limitCountSealObjList->max_length) )
        goto LABEL_142;
      v46 = (UnityEngine_Object_o *)limitCountSealObjList->m_Items[v77];
    }
    else
    {
      v46 = 0;
    }
    SvtId = ServantStatusListViewItem__GetSvtId(item, 0, 0);
    LimitCount = ServantStatusListViewItem__get_LimitCount(item, 0);
    IsSealed = LimitCountUtility__IsSealed(SvtId, LimitCount, v22, 0, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Instance = (UICommonButton_o *)UnityEngine_Object__op_Inequality(v46, 0, 0);
    if ( IsSealed )
    {
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v46 )
          goto LABEL_140;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v46, 1, 0);
      }
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Instance = (UICommonButton_o *)UnityEngine_Object__op_Inequality(v44, 0, 0);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        Instance = (UICommonButton_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8375/*"LIMIT_COUNT_SELECT_SEALED"*/, 0);
        if ( !v44 )
          goto LABEL_140;
        v50 = (System_String_o *)Instance;
        goto LABEL_84;
      }
    }
    else
    {
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v46 )
          goto LABEL_140;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v46, 0, 0);
      }
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Instance = (UICommonButton_o *)UnityEngine_Object__op_Inequality(v44, 0, 0);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v44 )
          goto LABEL_140;
        v50 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_84:
        UILabel__set_text((UILabel_o *)v44, v50, 0);
      }
    }
    v51 = (int)(v77 - 2) < 0;
    v21 = ++v77;
  }
  while ( v51 != __OFSUB__(v77, 3) );
  v52 = this->fields.charaLevelButtonList;
  if ( !v52 )
    goto LABEL_140;
  v53 = 3;
  while ( v53 < SLODWORD(v52->max_length) )
  {
    max_length = PortraitLimitCountStageList->max_length;
    if ( v53 >= max_length )
    {
      v55 = 0;
    }
    else
    {
      if ( v53 >= (unsigned int)max_length )
        goto LABEL_142;
      v55 = PortraitLimitCountStageList->m_Items[v53] == PortraitLimitCountStage;
    }
    v56 = this->fields.charaLevelTitleRangeLabelList;
    if ( !v56 )
      goto LABEL_140;
    if ( (unsigned int)v53 >= LODWORD(v56->max_length) )
      goto LABEL_142;
    v57 = v56->m_Items[v53];
    v58 = v8 && v53 < max_length;
    if ( v53 >= max_length )
    {
      if ( !v57 )
        goto LABEL_140;
      UIRangeLabel__Clear(v56->m_Items[v53], 0);
    }
    else
    {
      Instance = (UICommonButton_o *)ServantStatusListViewItem__GetSvtId(item, 0, 0);
      if ( (unsigned int)v53 >= LODWORD(PortraitLimitCountStageList->max_length) )
        goto LABEL_142;
      v7 = (unsigned int)Instance;
      Instance = (UICommonButton_o *)v74;
      if ( !v74 )
        goto LABEL_140;
      Entity = ServantCostumeMaster__GetEntity(v74, v7, PortraitLimitCountStageList->m_Items[v53], 0);
      if ( Entity )
      {
        Instance = (UICommonButton_o *)ServantCostumeEntity__getShortName(Entity, 0);
        v60 = (System_String_o *)Instance;
      }
      else
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        if ( !byte_4E72907 )
        {
          sub_1D0F0B4(&LocalizationManager_TypeInfo);
          byte_4E72907 = 1;
        }
        Instance = (UICommonButton_o *)LocalizationManager_TypeInfo;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          Instance = (UICommonButton_o *)LocalizationManager_TypeInfo;
        }
        v60 = *(System_String_o **)(*(_QWORD *)&Instance[1].fields.specifyHoverColor.fields.b + 32LL);
      }
      v61 = v15;
      v62 = v14;
      v63 = v13;
      v64 = v12;
      if ( (v55 & v58) != 0 )
      {
        v61 = a;
        v62 = b;
        v63 = g;
        v64 = r;
      }
      if ( !v57 )
        goto LABEL_140;
      UIRangeLabel__set_effectColor(v57, *(UnityEngine_Color_o *)&v64, 0);
      UIRangeLabel__Set(v57, v60, 0, 1, 0, 0, 0);
    }
    v65 = this->fields.charaLevelSpriteList;
    if ( !v65 )
      goto LABEL_140;
    if ( (unsigned int)v53 >= LODWORD(v65->max_length) )
      goto LABEL_142;
    Instance = (UICommonButton_o *)v65->m_Items[v53];
    if ( !Instance )
      goto LABEL_140;
    v66 = &StringLiteral_17709/*"btn_bg_21"*/;
    if ( !v55 )
      v66 = &StringLiteral_17707/*"btn_bg_20"*/;
    UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v66, 0);
    v67 = this->fields.servantButtonList;
    if ( !v67 )
      goto LABEL_140;
    if ( (unsigned int)v53 >= LODWORD(v67->max_length) )
      goto LABEL_142;
    Instance = v67->m_Items[v53];
    if ( (v55 & v58) != 0 )
    {
      if ( !Instance )
        goto LABEL_140;
      v68 = v58 == 0 || isInit;
      UICommonButton__SetColliderEnable(Instance, 0, v68, 0);
      v69 = this->fields.charaLevelButtonList;
      if ( !v69 )
        goto LABEL_140;
      if ( (unsigned int)v53 >= LODWORD(v69->max_length) )
        goto LABEL_142;
      Instance = v69->m_Items[v53];
      if ( !Instance )
        goto LABEL_140;
      UICommonButton__SetColliderEnable(Instance, 0, v68, 0);
    }
    else if ( v53 >= max_length )
    {
      if ( !Instance )
        goto LABEL_140;
      Instance = (UICommonButton_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
      if ( !Instance )
        goto LABEL_140;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
      v73 = this->fields.charaLevelButtonList;
      if ( !v73 )
        goto LABEL_140;
      if ( (unsigned int)v53 >= LODWORD(v73->max_length) )
        goto LABEL_142;
      Instance = v73->m_Items[v53];
      if ( !Instance )
        goto LABEL_140;
      Instance = (UICommonButton_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
      if ( !Instance )
        goto LABEL_140;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
    }
    else
    {
      if ( !Instance )
        goto LABEL_140;
      v70 = v58 & ~v55;
      v71 = v58 == 0 || isInit;
      UICommonButton__SetButtonEnable(Instance, v70, v71, 0);
      v72 = this->fields.charaLevelButtonList;
      if ( !v72 )
        goto LABEL_140;
      if ( (unsigned int)v53 >= LODWORD(v72->max_length) )
        goto LABEL_142;
      Instance = v72->m_Items[v53];
      if ( !Instance )
        goto LABEL_140;
      UICommonButton__SetButtonEnable(Instance, v70, v71, 0);
    }
    v52 = this->fields.charaLevelButtonList;
    ++v53;
    if ( !v52 )
      goto LABEL_140;
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
  System_String_o *Empty; // x21
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_4E74625 & 1) == 0 )
  {
    sub_1D0F0B4(&LocalizationManager_TypeInfo);
    sub_1D0F0B4(&string_TypeInfo);
    this = (ServantStatusListViewItemDrawPortrait_o *)sub_1D0F0B4(&StringLiteral_12135/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_INFO_OWN_SETTING_STATUS_ICON"*/);
    byte_4E74625 = 1;
  }
  if ( !item )
    goto LABEL_22;
  if ( item->fields.userSvtEntity )
  {
    this = (ServantStatusListViewItemDrawPortrait_o *)ServantStatusListViewItem__get_IsEnableOwnRandomSetting(item, 0);
    if ( !v4->fields.maskBase )
      goto LABEL_22;
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      UnityEngine_GameObject__SetActive(v4->fields.maskBase, 1, 0);
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
                v6 = this;
                this = (ServantStatusListViewItemDrawPortrait_o *)UnityEngine_Component__get_transform(
                                                                    (UnityEngine_Component_o *)v4->fields.baseSprite,
                                                                    0);
                if ( this )
                {
                  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
                  GameObjectExtensions__SetLocalPositionY((UnityEngine_GameObject_o *)v6, localPosition.fields.y, 0);
                  Empty = string_TypeInfo->static_fields->Empty;
                  if ( ServantStatusListViewItem__get_IsEnableOwnRandomSetting(item, 0) )
                  {
                    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                    Empty = LocalizationManager__Get((System_String_o *)StringLiteral_12135/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_INFO_OWN_SETTING_STATUS_ICON"*/, 0);
                  }
                  this = (ServantStatusListViewItemDrawPortrait_o *)v4->fields.maskInfoLabel;
                  if ( this )
                  {
                    UILabel__set_overflowMethod((UILabel_o *)this, 2, 0);
                    this = (ServantStatusListViewItemDrawPortrait_o *)v4->fields.maskInfoLabel;
                    if ( this )
                    {
                      UILabel__set_text((UILabel_o *)this, Empty, 0);
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
LABEL_22:
      sub_1D0F30C(this, item);
    }
    this = (ServantStatusListViewItemDrawPortrait_o *)v4->fields.maskBase;
  }
  else
  {
    this = (ServantStatusListViewItemDrawPortrait_o *)v4->fields.maskBase;
    if ( !this )
      goto LABEL_22;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
}