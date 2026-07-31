void ServantStatusListViewItemDrawFace___ctor(ServantStatusListViewItemDrawFace_o *this, const MethodInfo *method)
{
  this->fields.MASK_LABEL_MAX_WIDTH = 550;
  this->fields.transformNameAddHeight = 20;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ServantStatusListViewItemDrawFace__Awake(ServantStatusListViewItemDrawFace_o *this, const MethodInfo *method)
{
  struct UISprite_array *charaLevelSpriteList; // x8
  ServantStatusListViewItemDrawFace_o *v3; // x19
  int32_t facePitch; // w20
  struct UISprite_array *v5; // x8
  float y; // s8
  struct UISprite_o *baseSprite; // x9
  int max_length; // w8
  int v9; // w10
  float mWidth; // s0
  int v11; // w10
  int v12; // w8
  int32_t mHeight; // w10
  int v14; // w8
  float v15; // s8
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v17; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4

  charaLevelSpriteList = this->fields.charaLevelSpriteList;
  if ( !charaLevelSpriteList )
    goto LABEL_30;
  v3 = this;
  if ( SLODWORD(charaLevelSpriteList->max_length) > 4 )
  {
    this = (ServantStatusListViewItemDrawFace_o *)charaLevelSpriteList->m_Items[0];
    if ( !this )
      goto LABEL_30;
    this = (ServantStatusListViewItemDrawFace_o *)UnityEngine_Component__get_transform(
                                                    (UnityEngine_Component_o *)this,
                                                    0);
    if ( !this )
      goto LABEL_30;
    localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
    v5 = v3->fields.charaLevelSpriteList;
    if ( !v5 )
      goto LABEL_30;
    if ( LODWORD(v5->max_length) <= 4 )
      sub_21FFED4(this);
    if ( (this = (ServantStatusListViewItemDrawFace_o *)v5->m_Items[4]) == 0
      || (y = localPosition.fields.y,
          (this = (ServantStatusListViewItemDrawFace_o *)UnityEngine_Component__get_transform(
                                                           (UnityEngine_Component_o *)this,
                                                           0)) == 0)
      || ((v17 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0),
           charaLevelSpriteList = v3->fields.charaLevelSpriteList,
           (float)(y - v17.fields.y) != INFINITY)
        ? (facePitch = (int)(float)(y - v17.fields.y))
        : (facePitch = 0x80000000),
          v3->fields.facePitch = facePitch,
          !charaLevelSpriteList) )
    {
LABEL_30:
      sub_21FFECC(this, method);
    }
  }
  else
  {
    facePitch = this->fields.facePitch;
  }
  baseSprite = v3->fields.baseSprite;
  if ( !baseSprite )
    goto LABEL_30;
  max_length = charaLevelSpriteList->max_length;
  this = (ServantStatusListViewItemDrawFace_o *)v3->fields.titleSprite;
  v9 = max_length + 3;
  mWidth = (float)baseSprite->fields.mWidth;
  if ( max_length >= 0 )
    v9 = max_length;
  v11 = 1 - (v9 >> 2);
  v12 = max_length < 12 ? -1 : v11;
  mHeight = baseSprite->fields.mHeight;
  v3->fields.baseSize.fields.z = 0.0;
  v3->fields.baseSize.fields.x = mWidth;
  v3->fields.baseSize.fields.y = (float)(mHeight + v12 * facePitch);
  if ( !this )
    goto LABEL_30;
  this = (ServantStatusListViewItemDrawFace_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_30;
  v18 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
  this = (ServantStatusListViewItemDrawFace_o *)v3->fields.faceBase;
  v3->fields.titleBasePosition.fields.x = v18.fields.x;
  v14 = facePitch >= 0 ? facePitch : facePitch + 1;
  v15 = (float)(v14 >> 1);
  v3->fields.titleBasePosition.fields.y = v18.fields.y - v15;
  v3->fields.titleBasePosition.fields.z = v18.fields.z;
  if ( !this )
    goto LABEL_30;
  this = (ServantStatusListViewItemDrawFace_o *)UnityEngine_GameObject__get_transform(
                                                  (UnityEngine_GameObject_o *)this,
                                                  0);
  if ( !this )
    goto LABEL_30;
  v19 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
  this = (ServantStatusListViewItemDrawFace_o *)v3->fields.explanationLabel;
  v3->fields.faceBasePosition.fields.x = v19.fields.x;
  v3->fields.faceBasePosition.fields.y = v19.fields.y - v15;
  v3->fields.faceBasePosition.fields.z = v19.fields.z;
  if ( !this )
    goto LABEL_30;
  this = (ServantStatusListViewItemDrawFace_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_30;
  v20 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
  v3->fields.explanationBasePosition.fields.x = v20.fields.x;
  v3->fields.explanationBasePosition.fields.y = v20.fields.y + v15;
  v3->fields.explanationBasePosition.fields.z = v20.fields.z;
}


int32_t ServantStatusListViewItemDrawFace__GetKind(ServantStatusListViewItemDrawFace_o *this, const MethodInfo *method)
{
  return 9;
}


void ServantStatusListViewItemDrawFace__ModifyFace(
        ServantStatusListViewItemDrawFace_o *this,
        ServantStatusListViewItem_o *item,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  ServantStatusListViewItemDrawFace__SetupButton(this, item, 0, v3);
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusListViewItemDrawFace__SetCostumeIcon(
        ServantStatusListViewItemDrawFace_o *this,
        int32_t index,
        ServantCostumeEntity_o *svtCostumeEntity,
        const MethodInfo *method)
{
  ServantStatusListViewItemDrawFace_o *v6; // x20
  struct UISprite_array *faceSpriteCostumeIconList; // x8
  UnityEngine_Object_o *v8; // x22
  struct UISprite_array *v9; // x8
  struct UISprite_array *v10; // x8
  int32_t v11; // w21
  int32_t iconId; // t1
  struct UISprite_array *v13; // x8
  UISprite_o *v14; // x22
  System_String_o *v15; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  System_String_o *v18; // x21
  struct UISprite_array *v19; // x8
  struct UISprite_array *v20; // x8
  struct UISprite_array *v21; // x8
  struct UISprite_array *v22; // x8
  struct UISprite_array *v23; // x8
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4

  v6 = this;
  if ( (byte_593515B & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_25100/*"svt_costume_icon_"*/);
    this = (ServantStatusListViewItemDrawFace_o *)sub_21FFC50(&StringLiteral_1/*""*/);
    byte_593515B = 1;
  }
  faceSpriteCostumeIconList = v6->fields.faceSpriteCostumeIconList;
  if ( !faceSpriteCostumeIconList )
    goto LABEL_39;
  if ( LODWORD(faceSpriteCostumeIconList->max_length) <= index )
LABEL_40:
    sub_21FFED4(this);
  v8 = (UnityEngine_Object_o *)faceSpriteCostumeIconList->m_Items[index];
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&index, svtCostumeEntity);
  this = (ServantStatusListViewItemDrawFace_o *)UnityEngine_Object__op_Inequality(v8, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v9 = v6->fields.faceSpriteCostumeIconList;
    if ( !v9 )
      goto LABEL_39;
    if ( LODWORD(v9->max_length) <= index )
      goto LABEL_40;
    this = (ServantStatusListViewItemDrawFace_o *)v9->m_Items[index];
    if ( !this )
      goto LABEL_39;
    UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0);
    v10 = v6->fields.faceSpriteCostumeIconList;
    if ( !v10 )
      goto LABEL_39;
    if ( LODWORD(v10->max_length) <= index )
      goto LABEL_40;
    this = (ServantStatusListViewItemDrawFace_o *)v10->m_Items[index];
    if ( !this )
      goto LABEL_39;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0);
    if ( svtCostumeEntity )
    {
      iconId = svtCostumeEntity->fields.iconId;
      v11 = (_DWORD)svtCostumeEntity + 92;
      if ( iconId >= 1 )
      {
        v13 = v6->fields.faceSpriteCostumeIconList;
        if ( !v13 )
          goto LABEL_39;
        if ( LODWORD(v13->max_length) <= index )
          goto LABEL_40;
        v14 = v13->m_Items[index];
        v15 = System_Int32__ToString(v11, 0);
        v18 = System_String__Concat_75438412((System_String_o *)StringLiteral_25100/*"svt_costume_icon_"*/, v15, 0);
        if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v16, v17);
        this = (ServantStatusListViewItemDrawFace_o *)AtlasManager__SetEventSprite(v14, v18, 0);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          v19 = v6->fields.faceSpriteCostumeIconList;
          if ( !v19 )
            goto LABEL_39;
          if ( LODWORD(v19->max_length) > index )
          {
            this = (ServantStatusListViewItemDrawFace_o *)v19->m_Items[index];
            if ( !this )
              goto LABEL_39;
            UIWidget__set_pivot((UIWidget_o *)this, 4, 0);
            v20 = v6->fields.faceSpriteCostumeIconList;
            if ( !v20 )
              goto LABEL_39;
            if ( LODWORD(v20->max_length) > index )
            {
              this = (ServantStatusListViewItemDrawFace_o *)v20->m_Items[index];
              if ( !this )
                goto LABEL_39;
              UIWidget__set_width((UIWidget_o *)this, 32, 0);
              v21 = v6->fields.faceSpriteCostumeIconList;
              if ( !v21 )
                goto LABEL_39;
              if ( LODWORD(v21->max_length) > index )
              {
                this = (ServantStatusListViewItemDrawFace_o *)v21->m_Items[index];
                if ( !this )
                  goto LABEL_39;
                UIWidget__set_height((UIWidget_o *)this, 32, 0);
                v22 = v6->fields.faceSpriteCostumeIconList;
                if ( !v22 )
                  goto LABEL_39;
                if ( LODWORD(v22->max_length) > index )
                {
                  this = (ServantStatusListViewItemDrawFace_o *)v22->m_Items[index];
                  if ( !this )
                    goto LABEL_39;
                  this = (ServantStatusListViewItemDrawFace_o *)UnityEngine_Component__get_transform(
                                                                  (UnityEngine_Component_o *)this,
                                                                  0);
                  if ( !this )
                    goto LABEL_39;
                  v24.fields.z = 0.0;
                  v24.fields.x = -42.0;
                  v24.fields.y = -42.0;
                  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v24, 0);
                  v23 = v6->fields.faceSpriteCostumeIconList;
                  if ( !v23 )
                    goto LABEL_39;
                  if ( LODWORD(v23->max_length) > index )
                  {
                    this = (ServantStatusListViewItemDrawFace_o *)v23->m_Items[index];
                    if ( this )
                    {
                      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 1, 0);
                      return;
                    }
LABEL_39:
                    sub_21FFECC(this, *(_QWORD *)&index);
                  }
                }
              }
            }
          }
          goto LABEL_40;
        }
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusListViewItemDrawFace__SetItem(
        ServantStatusListViewItemDrawFace_o *this,
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
  UISprite_o *ServantStatusExplanationText; // x0
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
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  UISprite_o *v29; // x21
  int32_t facePitch; // w9
  int v31; // w8
  int v32; // w8
  int v33; // w8
  float z; // s10
  float x; // s9
  float y; // s11
  UnityEngine_Object_o *baseCollider; // x22
  int v38; // w24
  float v39; // s8
  int32_t v40; // w1
  int32_t v41; // w1
  int v42; // w22
  float v43; // s8
  float v44; // s11
  float v45; // s9
  float v46; // s10
  float v47; // s8
  float v48; // s11
  float v49; // s9
  float v50; // s8
  float v51; // s10
  float v52; // s9
  int32_t SvtId; // w22
  const MethodInfo *v54; // x3
  Il2CppObject *MasterData_object; // x23
  __int64 v56; // x24
  struct UIRect_AnchorPoint_o **p_leftAnchor; // x29
  struct UISprite_array *faceFrameSpriteList; // x8
  struct UISprite_array *v59; // x8
  UISprite_o *v60; // x25
  __int64 v61; // x1
  __int64 v62; // x2
  int32_t v63; // w26
  __int64 v64; // x2
  struct UISprite_array *faceSpriteList; // x8
  UISprite_o *v66; // x25
  struct UISprite_array *v67; // x8
  UISprite_o *v68; // x25
  struct UISprite_array *v69; // x8
  __int64 v70; // x29
  struct UIRect_AnchorPoint_o **p_bottomAnchor; // x27
  unsigned __int64 v72; // x24
  struct UISprite_array *v73; // x8
  struct UISprite_array *v74; // x8
  UISprite_o *v75; // x25
  __int64 v76; // x1
  __int64 v77; // x2
  int32_t v78; // w26
  ServantCostumeEntity_o *Entity; // x0
  const MethodInfo *v80; // x3
  struct UISprite_array *v81; // x8
  bool v82; // w1
  struct UISprite_array *v83; // x8
  UIWidget_o *transformNameLabel; // x21
  UIWidget_o *transformNameSprite; // x21
  UILabel_o *v86; // x21
  __int64 v87; // x1
  __int64 v88; // x2
  UnityEngine_Object_o *v89; // x21
  float v90; // s1
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t transformNameAddHeight; // w8
  int v93; // w8
  UnityEngine_GameObject_o *v94; // x0
  int32_t v95; // w8
  int v96; // w8
  const MethodInfo *v97; // x3
  const MethodInfo *v98; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v99; // 0:x0.16
  UnityEngine_Vector3_o v100; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v101; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v102; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v103; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o size; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o TransformNameLabelColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o TransformNameSpriteColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_593515A & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantCostumeMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&StringLiteral_12407/*"SERVANT_STATUS_EXPLANATION_FACE"*/);
    sub_21FFC50(&StringLiteral_12409/*"SERVANT_STATUS_EXPLANATION_FACE3"*/);
    sub_21FFC50(&StringLiteral_12408/*"SERVANT_STATUS_EXPLANATION_FACE2"*/);
    sub_21FFC50(&StringLiteral_12410/*"SERVANT_STATUS_EXPLANATION_FACE_LIMIT_COUNT_SEALED_MSG"*/);
    byte_593515A = 1;
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
      v11 = &StringLiteral_12407/*"SERVANT_STATUS_EXPLANATION_FACE"*/;
    }
    else if ( item->fields.userSvtCollectionEntity )
    {
      explanationLabel = this->fields.explanationLabel;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v7, v8);
      v11 = &StringLiteral_12408/*"SERVANT_STATUS_EXPLANATION_FACE2"*/;
    }
    else
    {
      explanationLabel = this->fields.explanationLabel;
      v12 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
      if ( !item->fields.servantLeaderInfo )
      {
        if ( !v12 )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v7, v8);
        ServantStatusExplanationText = (UISprite_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12409/*"SERVANT_STATUS_EXPLANATION_FACE3"*/, 0);
        if ( !explanationLabel )
          goto LABEL_126;
        UILabel__set_text(explanationLabel, (System_String_o *)ServantStatusExplanationText, 0);
        goto LABEL_33;
      }
      if ( !v12 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v7, v8);
      v11 = &StringLiteral_12409/*"SERVANT_STATUS_EXPLANATION_FACE3"*/;
    }
    ServantStatusExplanationText = (UISprite_o *)LocalizationManager__Get((System_String_o *)*v11, 0);
    if ( !explanationLabel )
      goto LABEL_126;
    UILabel__set_text(explanationLabel, (System_String_o *)ServantStatusExplanationText, 0);
    svtEntity = item->fields.svtEntity;
    if ( !svtEntity )
      goto LABEL_126;
    v17 = *(_QWORD *)&svtEntity->fields.id.fields.currentCryptoKey;
    v18 = *(_QWORD *)&svtEntity->fields.id.fields.fakeValue;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14, v15);
    *(_QWORD *)&v99.fields.currentCryptoKey = v17;
    *(_QWORD *)&v99.fields.fakeValue = v18;
    ServantStatusExplanationText = (UISprite_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(
                                                   v99,
                                                   0);
    if ( (_DWORD)ServantStatusExplanationText )
    {
      if ( !Master_object )
        goto LABEL_126;
      v19 = (int)ServantStatusExplanationText;
      if ( ServantLimitImageMaster__IsServantLimitCountSeal(
             (ServantLimitImageMaster_o *)Master_object,
             (int32_t)ServantStatusExplanationText,
             3,
             0) )
      {
        ServantStatusExplanationText = (UISprite_o *)ServantLimitImageMaster__GetServantStatusExplanationText(
                                                       (ServantLimitImageMaster_o *)Master_object,
                                                       (System_String_o *)StringLiteral_12410/*"SERVANT_STATUS_EXPLANATION_FACE_LIMIT_COUNT_SEALED_MSG"*/,
                                                       v19,
                                                       0);
        v20 = this->fields.explanationLabel;
        if ( !v20 )
          goto LABEL_126;
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
        ServantStatusExplanationText = (UISprite_o *)ServantStatusListViewItem__GetIconLimitCountStageList(item, 0);
        if ( !ServantStatusExplanationText )
          goto LABEL_126;
        m_CancellationTokenSource = ServantStatusExplanationText->fields.m_CancellationTokenSource;
        v29 = ServantStatusExplanationText;
        if ( (int)m_CancellationTokenSource < 5 )
          facePitch = 0;
        else
          facePitch = this->fields.facePitch;
        if ( ((unsigned __int8)m_CancellationTokenSource & 3) != 0 )
          v31 = (int)m_CancellationTokenSource / 4 + 1;
        else
          v31 = (int)m_CancellationTokenSource / 4;
        if ( v31 < 3 )
          v32 = 1;
        else
          v32 = v31 - 1;
        v33 = facePitch * v32;
        z = this->fields.baseSize.fields.z;
        x = this->fields.baseSize.fields.x;
        y = this->fields.baseSize.fields.y;
        baseCollider = (UnityEngine_Object_o *)this->fields.baseCollider;
        if ( v26 )
          v38 = v33 + 32;
        else
          v38 = v33;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14, v27);
        v39 = y + (float)v38;
        if ( UnityEngine_Object__op_Inequality(baseCollider, 0, 0) )
        {
          ServantStatusExplanationText = (UISprite_o *)this->fields.baseCollider;
          if ( !ServantStatusExplanationText )
            goto LABEL_126;
          v100.fields.x = x;
          v100.fields.y = y + (float)v38;
          v100.fields.z = z;
          UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)ServantStatusExplanationText, v100, 0);
        }
        ServantStatusExplanationText = this->fields.baseSprite;
        if ( ServantStatusExplanationText )
        {
          v40 = x == INFINITY ? 0x80000000 : (int)x;
          UIWidget__set_width((UIWidget_o *)ServantStatusExplanationText, v40, 0);
          ServantStatusExplanationText = this->fields.baseSprite;
          if ( ServantStatusExplanationText )
          {
            v41 = v39 == INFINITY ? 0x80000000 : (int)v39;
            UIWidget__set_height((UIWidget_o *)ServantStatusExplanationText, v41, 0);
            ServantStatusExplanationText = this->fields.titleSprite;
            v42 = v38 >= 0 ? v38 : v38 + 1;
            if ( ServantStatusExplanationText )
            {
              v43 = this->fields.titleBasePosition.fields.x;
              v44 = this->fields.titleBasePosition.fields.y;
              v45 = this->fields.titleBasePosition.fields.z;
              ServantStatusExplanationText = (UISprite_o *)UnityEngine_Component__get_transform(
                                                             (UnityEngine_Component_o *)ServantStatusExplanationText,
                                                             0);
              if ( ServantStatusExplanationText )
              {
                v101.fields.x = v43;
                v101.fields.z = v45;
                v46 = (float)(v42 >> 1);
                v101.fields.y = v44 + v46;
                UnityEngine_Transform__set_localPosition(
                  (UnityEngine_Transform_o *)ServantStatusExplanationText,
                  v101,
                  0);
                ServantStatusExplanationText = (UISprite_o *)this->fields.faceBase;
                if ( ServantStatusExplanationText )
                {
                  v47 = this->fields.faceBasePosition.fields.x;
                  v48 = this->fields.faceBasePosition.fields.y;
                  v49 = this->fields.faceBasePosition.fields.z;
                  ServantStatusExplanationText = (UISprite_o *)UnityEngine_GameObject__get_transform(
                                                                 (UnityEngine_GameObject_o *)ServantStatusExplanationText,
                                                                 0);
                  if ( ServantStatusExplanationText )
                  {
                    v102.fields.y = v48 + v46;
                    v102.fields.x = v47;
                    v102.fields.z = v49;
                    UnityEngine_Transform__set_localPosition(
                      (UnityEngine_Transform_o *)ServantStatusExplanationText,
                      v102,
                      0);
                    ServantStatusExplanationText = (UISprite_o *)this->fields.explanationLabel;
                    v50 = v26
                        ? (float)(this->fields.explanationBasePosition.fields.y - v46) + 16.0
                        : this->fields.explanationBasePosition.fields.y - v46;
                    if ( ServantStatusExplanationText )
                    {
                      v51 = this->fields.explanationBasePosition.fields.x;
                      v52 = this->fields.explanationBasePosition.fields.z;
                      ServantStatusExplanationText = (UISprite_o *)UnityEngine_Component__get_transform(
                                                                     (UnityEngine_Component_o *)ServantStatusExplanationText,
                                                                     0);
                      if ( ServantStatusExplanationText )
                      {
                        v103.fields.x = v51;
                        v103.fields.y = v50;
                        v103.fields.z = v52;
                        UnityEngine_Transform__set_localPosition(
                          (UnityEngine_Transform_o *)ServantStatusExplanationText,
                          v103,
                          0);
                        SvtId = ServantStatusListViewItem__GetSvtId(item, 0, 0);
                        ServantStatusExplanationText = (UISprite_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                        if ( ServantStatusExplanationText )
                        {
                          MasterData_object = DataManager__GetMasterData_object_(
                                                (DataManager_o *)ServantStatusExplanationText,
                                                (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
                          v56 = 0;
                          p_leftAnchor = &v29->fields.leftAnchor;
                          do
                          {
                            ServantStatusListViewItemDrawFace__SetCostumeIcon(this, v56, 0, v54);
                            faceFrameSpriteList = this->fields.faceFrameSpriteList;
                            if ( !faceFrameSpriteList )
                              goto LABEL_126;
                            if ( (unsigned int)v56 >= LODWORD(faceFrameSpriteList->max_length) )
                              goto LABEL_153;
                            ServantStatusExplanationText = faceFrameSpriteList->m_Items[v56];
                            if ( !ServantStatusExplanationText )
                              goto LABEL_126;
                            UnityEngine_Behaviour__set_enabled(
                              (UnityEngine_Behaviour_o *)ServantStatusExplanationText,
                              1,
                              0);
                            if ( (unsigned int)v56 >= LODWORD(v29->fields.m_CancellationTokenSource) )
                              goto LABEL_153;
                            if ( (*((_DWORD *)p_leftAnchor + v56) & 0x80000000) != 0 )
                            {
                              ServantStatusExplanationText = (UISprite_o *)ServantStatusListViewItem__get_IsMine(
                                                                             item,
                                                                             0);
                              faceSpriteList = this->fields.faceSpriteList;
                              if ( ((unsigned __int8)ServantStatusExplanationText & 1) != 0 )
                              {
                                if ( !faceSpriteList )
                                  goto LABEL_126;
                                if ( (unsigned int)v56 >= LODWORD(faceSpriteList->max_length) )
                                  goto LABEL_153;
                                v66 = faceSpriteList->m_Items[v56];
                                if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
                                  j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v14, v64);
                                ServantStatusExplanationText = (UISprite_o *)AtlasManager__SetNoMountFace(v66, 0);
                                v67 = this->fields.faceFrameSpriteList;
                                if ( !v67 )
                                  goto LABEL_126;
                                if ( (unsigned int)v56 >= LODWORD(v67->max_length) )
                                  goto LABEL_153;
                                ServantStatusExplanationText = v67->m_Items[v56];
                                if ( !ServantStatusExplanationText )
                                  goto LABEL_126;
                                UnityEngine_Behaviour__set_enabled(
                                  (UnityEngine_Behaviour_o *)ServantStatusExplanationText,
                                  0,
                                  0);
                              }
                              else
                              {
                                if ( !faceSpriteList )
                                  goto LABEL_126;
                                if ( (unsigned int)v56 >= LODWORD(faceSpriteList->max_length) )
LABEL_153:
                                  sub_21FFED4(ServantStatusExplanationText);
                                v68 = faceSpriteList->m_Items[v56];
                                if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
                                  j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v14, v64);
                                ServantStatusExplanationText = (UISprite_o *)AtlasManager__SetNotOpenFace(v68, 0);
                              }
                            }
                            else
                            {
                              ServantStatusExplanationText = (UISprite_o *)ServantStatusListViewItem__get_LimitCount(
                                                                             item,
                                                                             0);
                              if ( (unsigned int)v56 >= LODWORD(v29->fields.m_CancellationTokenSource) )
                                goto LABEL_153;
                              ServantStatusExplanationText = (UISprite_o *)LimitCountUtility__GetSealAfter(
                                                                             SvtId,
                                                                             (int32_t)ServantStatusExplanationText,
                                                                             *((_DWORD *)p_leftAnchor + v56),
                                                                             1,
                                                                             0);
                              v59 = this->fields.faceSpriteList;
                              if ( !v59 )
                                goto LABEL_126;
                              if ( (unsigned int)v56 >= LODWORD(v59->max_length) )
                                goto LABEL_153;
                              v60 = v59->m_Items[v56];
                              v63 = LimitCountUtility__ConvertLimitCountStageIndexOneToZero(
                                      (int32_t)ServantStatusExplanationText,
                                      0);
                              if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
                                j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v61, v62);
                              ServantStatusExplanationText = (UISprite_o *)AtlasManager__SetFaceImage(
                                                                             v60,
                                                                             SvtId,
                                                                             v63,
                                                                             1,
                                                                             0,
                                                                             0,
                                                                             0);
                            }
                            ++v56;
                          }
                          while ( (_DWORD)v56 != 4 );
                          v69 = this->fields.faceSpriteList;
                          if ( v69 )
                          {
                            v70 = 0;
                            p_bottomAnchor = &v29->fields.bottomAnchor;
                            while ( 1 )
                            {
                              v72 = v70 + 4;
                              if ( v70 + 4 >= SLODWORD(v69->max_length) )
                                break;
                              ServantStatusListViewItemDrawFace__SetCostumeIcon(this, v72, 0, v54);
                              v73 = this->fields.faceSpriteList;
                              if ( (__int64)v72 >= SLODWORD(v29->fields.m_CancellationTokenSource) )
                              {
                                if ( !v73 )
                                  goto LABEL_126;
                                if ( v72 >= LODWORD(v73->max_length) )
                                  goto LABEL_153;
                                ServantStatusExplanationText = v73->m_Items[v70 + 4];
                                if ( !ServantStatusExplanationText )
                                  goto LABEL_126;
                                UnityEngine_Behaviour__set_enabled(
                                  (UnityEngine_Behaviour_o *)ServantStatusExplanationText,
                                  0,
                                  0);
                                v83 = this->fields.faceFrameSpriteList;
                                if ( !v83 )
                                  goto LABEL_126;
                                if ( v72 >= LODWORD(v83->max_length) )
                                  goto LABEL_153;
                                ServantStatusExplanationText = v83->m_Items[v70 + 4];
                                if ( !ServantStatusExplanationText )
                                  goto LABEL_126;
                                v82 = 0;
                              }
                              else
                              {
                                if ( !v73 )
                                  goto LABEL_126;
                                if ( v72 >= LODWORD(v73->max_length) )
                                  goto LABEL_153;
                                ServantStatusExplanationText = v73->m_Items[v70 + 4];
                                if ( !ServantStatusExplanationText )
                                  goto LABEL_126;
                                UnityEngine_Behaviour__set_enabled(
                                  (UnityEngine_Behaviour_o *)ServantStatusExplanationText,
                                  1,
                                  0);
                                v74 = this->fields.faceSpriteList;
                                if ( !v74 )
                                  goto LABEL_126;
                                if ( v72 >= LODWORD(v74->max_length)
                                  || v72 >= LODWORD(v29->fields.m_CancellationTokenSource) )
                                {
                                  goto LABEL_153;
                                }
                                v75 = v74->m_Items[v70 + 4];
                                v78 = LimitCountUtility__ConvertLimitCountStageIndexOneToZero(
                                        *((_DWORD *)p_bottomAnchor + v70),
                                        0);
                                if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
                                  j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v76, v77);
                                ServantStatusExplanationText = (UISprite_o *)AtlasManager__SetFaceImage(
                                                                               v75,
                                                                               SvtId,
                                                                               v78,
                                                                               1,
                                                                               0,
                                                                               0,
                                                                               0);
                                if ( v72 >= LODWORD(v29->fields.m_CancellationTokenSource) )
                                  goto LABEL_153;
                                if ( !MasterData_object )
                                  goto LABEL_126;
                                Entity = ServantCostumeMaster__GetEntity(
                                           (ServantCostumeMaster_o *)MasterData_object,
                                           SvtId,
                                           *((_DWORD *)p_bottomAnchor + v70),
                                           0);
                                ServantStatusListViewItemDrawFace__SetCostumeIcon(this, v72, Entity, v80);
                                v81 = this->fields.faceFrameSpriteList;
                                if ( !v81 )
                                  goto LABEL_126;
                                if ( v72 >= LODWORD(v81->max_length) )
                                  goto LABEL_153;
                                ServantStatusExplanationText = v81->m_Items[v70 + 4];
                                if ( !ServantStatusExplanationText )
                                  goto LABEL_126;
                                v82 = 1;
                              }
                              UnityEngine_Behaviour__set_enabled(
                                (UnityEngine_Behaviour_o *)ServantStatusExplanationText,
                                v82,
                                0);
                              v69 = this->fields.faceSpriteList;
                              ++v70;
                              if ( !v69 )
                                goto LABEL_126;
                            }
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
                                  ServantStatusExplanationText = this->fields.transformNameSprite;
                                  if ( ServantStatusExplanationText )
                                  {
                                    ServantStatusExplanationText = (UISprite_o *)UnityEngine_Component__get_gameObject(
                                                                                   (UnityEngine_Component_o *)ServantStatusExplanationText,
                                                                                   0);
                                    if ( ServantStatusExplanationText )
                                    {
                                      UnityEngine_GameObject__SetActive(
                                        (UnityEngine_GameObject_o *)ServantStatusExplanationText,
                                        1,
                                        0);
                                      v86 = this->fields.transformNameLabel;
                                      ServantStatusExplanationText = (UISprite_o *)ServantStatusListViewItem__GetTransformName(
                                                                                     item,
                                                                                     0);
                                      if ( v86 )
                                      {
                                        UILabel__set_text(v86, (System_String_o *)ServantStatusExplanationText, 0);
                                        v89 = (UnityEngine_Object_o *)this->fields.baseCollider;
                                        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                                          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v87, v88);
                                        if ( UnityEngine_Object__op_Inequality(v89, 0, 0) )
                                        {
                                          ServantStatusExplanationText = (UISprite_o *)this->fields.baseCollider;
                                          if ( !ServantStatusExplanationText )
                                            goto LABEL_126;
                                          size = UnityEngine_BoxCollider__get_size(
                                                   (UnityEngine_BoxCollider_o *)ServantStatusExplanationText,
                                                   0);
                                          ServantStatusExplanationText = (UISprite_o *)this->fields.baseCollider;
                                          if ( !ServantStatusExplanationText )
                                            goto LABEL_126;
                                          v90 = size.fields.y + (float)this->fields.transformNameAddHeight;
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
                                          + ServantStatusExplanationText->fields.mHeight,
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
                                            v93 = transformNameAddHeight <= 0
                                                ? -transformNameAddHeight
                                                : 1 - transformNameAddHeight;
                                            GameObjectExtensions__AddLocalPositionY(
                                              this->fields.faceBase,
                                              (float)(v93 >> 1),
                                              0);
                                            ServantStatusExplanationText = (UISprite_o *)this->fields.explanationLabel;
                                            if ( ServantStatusExplanationText )
                                            {
                                              v94 = UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)ServantStatusExplanationText,
                                                      0);
                                              v95 = this->fields.transformNameAddHeight;
                                              if ( v95 <= 0 )
                                                v96 = -v95;
                                              else
                                                v96 = 1 - v95;
                                              GameObjectExtensions__AddLocalPositionY(v94, (float)(v96 >> 1), 0);
                                              goto LABEL_152;
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
                                ServantStatusExplanationText = (UISprite_o *)UnityEngine_Component__get_gameObject(
                                                                               (UnityEngine_Component_o *)ServantStatusExplanationText,
                                                                               0);
                                if ( ServantStatusExplanationText )
                                {
                                  UnityEngine_GameObject__SetActive(
                                    (UnityEngine_GameObject_o *)ServantStatusExplanationText,
                                    0,
                                    0);
LABEL_152:
                                  ServantStatusListViewItemDrawFace__SetupButton(this, item, 1, v97);
                                  ServantStatusListViewItemDrawFace__SetupMask(this, item, v98);
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
          }
        }
LABEL_126:
        sub_21FFECC(ServantStatusExplanationText, v14);
      }
    }
LABEL_33:
    v26 = 0;
    goto LABEL_34;
  }
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusListViewItemDrawFace__SetupButton(
        ServantStatusListViewItemDrawFace_o *this,
        ServantStatusListViewItem_o *item,
        bool isInit,
        const MethodInfo *method)
{
  UICommonButton_o *Instance; // x0
  __int64 v7; // x1
  _BOOL4 v8; // w8
  int32_t IconLimitCountStage; // w24
  __int64 v10; // x2
  System_Int32_array *IconLimitCountStageList; // x25
  float *v12; // x8
  float v13; // s8
  float v14; // s9
  float v15; // s10
  float v16; // s11
  float *v17; // x8
  float v18; // s12
  float v19; // s13
  float v20; // s14
  float v21; // s15
  unsigned int v22; // w8
  int32_t v23; // w26
  struct UIRangeLabel_array *charaLevelTitleRangeLabelList; // x9
  _BOOL4 v25; // w23
  _BOOL4 v26; // w29
  UIRangeLabel_o *v27; // x27
  __int64 v28; // x1
  __int64 v29; // x2
  System_String_o *v30; // x28
  float v31; // s3
  float v32; // s2
  float v33; // s1
  float v34; // s0 OVERLAPPED
  System_String_o *v36; // x0
  __int64 v37; // x1
  __int64 v38; // x2
  System_String_o *v39; // x0
  struct UISprite_array *charaLevelSpriteList; // x8
  __int64 *v41; // x8
  struct UICommonButton_array *faceButtonList; // x8
  struct UICommonButton_array *charaLevelButtonList; // x8
  struct UICommonButton_array *v45; // x8
  struct UILabel_array *limitCountSealLabel; // x8
  UnityEngine_Object_o *v47; // x27
  struct UnityEngine_GameObject_array *limitCountSealObjList; // x8
  UnityEngine_Object_o *v49; // x28
  int32_t SvtId; // w29
  int32_t LimitCount; // w0
  __int64 v52; // x1
  __int64 v53; // x2
  bool IsSealed; // w8
  int v55; // w9
  __int64 v56; // x2
  __int64 v57; // x2
  System_String_o *v58; // x1
  __int64 v59; // x2
  bool v60; // nf
  struct UICommonButton_array *v61; // x8
  int v62; // w22
  int max_length; // w20
  _BOOL4 v64; // w28
  struct UIRangeLabel_array *v65; // x8
  _BOOL4 v66; // w23
  Il2CppClass **v67; // x8
  UIRangeLabel_o *v68; // x26
  ServantCostumeEntity_o *Entity; // x0
  __int64 v70; // x2
  System_String_o *v71; // x27
  float v72; // s3
  float v73; // s2
  float v74; // s1
  float v75; // s0 OVERLAPPED
  struct UISprite_array *v76; // x8
  __int64 *v77; // x8
  struct UICommonButton_array *v78; // x8
  struct UICommonButton_array *v79; // x8
  struct UICommonButton_array *v80; // x8
  struct UICommonButton_array *v81; // x8
  ServantCostumeMaster_o *v82; // [xsp+8h] [xbp-B8h]
  _BOOL4 v84; // [xsp+18h] [xbp-A8h]
  unsigned int v85; // [xsp+1Ch] [xbp-A4h] BYREF
  UnityEngine_Color_o v86; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_593515C & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantCostumeMaster___);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&StringLiteral_8610/*"LIMIT_COUNT_SELECT_SEALED"*/);
    sub_21FFC50(&StringLiteral_12429/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_"*/);
    sub_21FFC50(&StringLiteral_18171/*"btn_bg_20"*/);
    sub_21FFC50(&StringLiteral_12430/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_CLOSE"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    sub_21FFC50(&StringLiteral_18173/*"btn_bg_21"*/);
    byte_593515C = 1;
  }
  v85 = 0;
  Instance = (UICommonButton_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_163;
  Instance = (UICommonButton_o *)DataManager__GetMasterData_object_(
                                   (DataManager_o *)Instance,
                                   (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
  v82 = (ServantCostumeMaster_o *)Instance;
  if ( !item )
    goto LABEL_163;
  if ( ServantStatusListViewItem__get_IsConvertOverwriteImage(item, 0) )
  {
    v84 = 0;
  }
  else
  {
    if ( item->fields.userSvtEntity )
      v8 = 1;
    else
      v8 = item->fields.userSvtCollectionEntity != 0;
    v84 = v8;
  }
  IconLimitCountStage = ServantStatusListViewItem__GetIconLimitCountStage(item, 0);
  IconLimitCountStageList = ServantStatusListViewItem__GetIconLimitCountStageList(item, 0);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v7, v10);
  if ( !byte_5932AD3 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    byte_5932AD3 = 1;
  }
  Instance = (UICommonButton_o *)LocalizationManager_TypeInfo;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v7, v10);
    Instance = (UICommonButton_o *)LocalizationManager_TypeInfo;
  }
  v12 = *(float **)&Instance[1].fields.specifyHoverColor.fields.b;
  v13 = v12[20];
  v14 = v12[21];
  v15 = v12[22];
  v16 = v12[23];
  if ( !byte_5932AD4 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    Instance = (UICommonButton_o *)LocalizationManager_TypeInfo;
    byte_5932AD4 = 1;
  }
  if ( !HIDWORD(Instance[2].klass) )
  {
    j_il2cpp_runtime_class_init_0(Instance, v7, v10);
    Instance = (UICommonButton_o *)LocalizationManager_TypeInfo;
  }
  v17 = *(float **)&Instance[1].fields.specifyHoverColor.fields.b;
  v85 = 0;
  v18 = v17[24];
  v19 = v17[25];
  v20 = v17[26];
  v21 = v17[27];
  if ( !IconLimitCountStageList )
LABEL_163:
    sub_21FFECC(Instance, v7);
  v22 = 0;
  do
  {
    if ( v22 >= LODWORD(IconLimitCountStageList->max_length) )
      goto LABEL_165;
    v23 = IconLimitCountStageList->m_Items[v22];
    charaLevelTitleRangeLabelList = this->fields.charaLevelTitleRangeLabelList;
    v25 = v23 > 0 && v84;
    v26 = v23 == IconLimitCountStage && v23 > 0;
    if ( !charaLevelTitleRangeLabelList )
      goto LABEL_163;
    if ( v22 >= LODWORD(charaLevelTitleRangeLabelList->max_length) )
      goto LABEL_165;
    v27 = charaLevelTitleRangeLabelList->m_Items[v22];
    if ( v23 <= 0
      && (Instance = (UICommonButton_o *)ServantStatusListViewItem__get_IsMine(item, 0),
          ((unsigned __int8)Instance & 1) != 0) )
    {
      if ( !v27 )
        goto LABEL_163;
      v86.fields.r = v13;
      v86.fields.g = v14;
      v86.fields.b = v15;
      v86.fields.a = v16;
      UIRangeLabel__set_effectColor(v27, v86, 0);
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v28, v29);
      v30 = (System_String_o *)StringLiteral_12430/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_CLOSE"*/;
    }
    else
    {
      v31 = v16;
      v32 = v15;
      v33 = v14;
      v34 = v13;
      if ( v23 == IconLimitCountStage && v25 )
      {
        v31 = v21;
        v32 = v20;
        v33 = v19;
        v34 = v18;
      }
      if ( !v27 )
        goto LABEL_163;
      UIRangeLabel__set_effectColor(v27, *(UnityEngine_Color_o *)&v34, 0);
      v36 = System_Int32__ToString((int32_t)&v85, 0);
      v30 = System_String__Concat_75438412((System_String_o *)StringLiteral_12429/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_"*/, v36, 0);
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v37, v38);
    }
    v39 = LocalizationManager__Get(v30, 0);
    UIRangeLabel__Set(v27, v39, 0, 1, 0, 0, 0);
    charaLevelSpriteList = this->fields.charaLevelSpriteList;
    if ( !charaLevelSpriteList )
      goto LABEL_163;
    if ( v85 >= LODWORD(charaLevelSpriteList->max_length) )
LABEL_165:
      sub_21FFED4(Instance);
    Instance = (UICommonButton_o *)charaLevelSpriteList->m_Items[v85];
    if ( !Instance )
      goto LABEL_163;
    v41 = &StringLiteral_18173/*"btn_bg_21"*/;
    if ( !v26 )
      v41 = &StringLiteral_18171/*"btn_bg_20"*/;
    UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v41, 0);
    faceButtonList = this->fields.faceButtonList;
    if ( v23 == IconLimitCountStage && v25 )
    {
      if ( !faceButtonList )
        goto LABEL_163;
      if ( v85 >= LODWORD(faceButtonList->max_length) )
        goto LABEL_165;
      Instance = faceButtonList->m_Items[v85];
      if ( !Instance )
        goto LABEL_163;
      UICommonButton__SetColliderEnable(Instance, 0, isInit, 0);
      charaLevelButtonList = this->fields.charaLevelButtonList;
      if ( !charaLevelButtonList )
        goto LABEL_163;
      if ( v85 >= LODWORD(charaLevelButtonList->max_length) )
        goto LABEL_165;
      Instance = charaLevelButtonList->m_Items[v85];
      if ( !Instance )
        goto LABEL_163;
      UICommonButton__SetColliderEnable(Instance, 0, isInit, 0);
    }
    else
    {
      if ( !faceButtonList )
        goto LABEL_163;
      if ( v85 >= LODWORD(faceButtonList->max_length) )
        goto LABEL_165;
      Instance = faceButtonList->m_Items[v85];
      if ( !Instance )
        goto LABEL_163;
      UICommonButton__SetButtonEnable(Instance, v25 && !v26, isInit || !v25, 0);
      v45 = this->fields.charaLevelButtonList;
      if ( !v45 )
        goto LABEL_163;
      if ( v85 >= LODWORD(v45->max_length) )
        goto LABEL_165;
      Instance = v45->m_Items[v85];
      if ( !Instance )
        goto LABEL_163;
      UICommonButton__SetButtonEnable(Instance, v25 && !v26, isInit || !v25, 0);
    }
    limitCountSealLabel = this->fields.limitCountSealLabel;
    if ( limitCountSealLabel )
    {
      if ( v85 >= LODWORD(limitCountSealLabel->max_length) )
        goto LABEL_165;
      v47 = (UnityEngine_Object_o *)limitCountSealLabel->m_Items[v85];
    }
    else
    {
      v47 = 0;
    }
    limitCountSealObjList = this->fields.limitCountSealObjList;
    if ( limitCountSealObjList )
    {
      if ( v85 >= LODWORD(limitCountSealObjList->max_length) )
        goto LABEL_165;
      v49 = (UnityEngine_Object_o *)limitCountSealObjList->m_Items[v85];
    }
    else
    {
      v49 = 0;
    }
    SvtId = ServantStatusListViewItem__GetSvtId(item, 0, 0);
    LimitCount = ServantStatusListViewItem__get_LimitCount(item, 0);
    IsSealed = LimitCountUtility__IsSealed(SvtId, LimitCount, v23, 1, 0);
    v55 = *(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1);
    if ( IsSealed )
    {
      if ( !v55 )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v52, v53);
      Instance = (UICommonButton_o *)UnityEngine_Object__op_Inequality(v49, 0, 0);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v49 )
          goto LABEL_163;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v49, 1, 0);
      }
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v56);
      Instance = (UICommonButton_o *)UnityEngine_Object__op_Inequality(v47, 0, 0);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v7, v57);
        Instance = (UICommonButton_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8610/*"LIMIT_COUNT_SELECT_SEALED"*/, 0);
        if ( !v47 )
          goto LABEL_163;
        v58 = (System_String_o *)Instance;
        goto LABEL_100;
      }
    }
    else
    {
      if ( !v55 )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v52, v53);
      Instance = (UICommonButton_o *)UnityEngine_Object__op_Inequality(v49, 0, 0);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v49 )
          goto LABEL_163;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v49, 0, 0);
      }
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v59);
      Instance = (UICommonButton_o *)UnityEngine_Object__op_Inequality(v47, 0, 0);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v47 )
          goto LABEL_163;
        v58 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_100:
        UILabel__set_text((UILabel_o *)v47, v58, 0);
      }
    }
    v60 = (int)(v85 - 3) < 0;
    v22 = ++v85;
  }
  while ( v60 != __OFSUB__(v85, 4) );
  v61 = this->fields.charaLevelButtonList;
  if ( !v61 )
    goto LABEL_163;
  v62 = 4;
  while ( v62 < SLODWORD(v61->max_length) )
  {
    max_length = IconLimitCountStageList->max_length;
    if ( v62 >= max_length )
    {
      v64 = 0;
    }
    else
    {
      if ( v62 >= (unsigned int)max_length )
        goto LABEL_165;
      v64 = IconLimitCountStageList->m_Items[v62] == IconLimitCountStage;
    }
    v65 = this->fields.charaLevelTitleRangeLabelList;
    v66 = v62 < max_length && v84;
    if ( !v65 )
      goto LABEL_163;
    if ( (unsigned int)v62 >= LODWORD(v65->max_length) )
      goto LABEL_165;
    v67 = &v65->obj.klass + v62;
    v68 = (UIRangeLabel_o *)v67[4];
    if ( v62 >= max_length )
    {
      if ( !v68 )
        goto LABEL_163;
      UIRangeLabel__Clear((UIRangeLabel_o *)v67[4], 0);
    }
    else
    {
      Instance = (UICommonButton_o *)ServantStatusListViewItem__GetSvtId(item, 0, 0);
      if ( (unsigned int)v62 >= LODWORD(IconLimitCountStageList->max_length) )
        goto LABEL_165;
      v7 = (unsigned int)Instance;
      Instance = (UICommonButton_o *)v82;
      if ( !v82 )
        goto LABEL_163;
      Entity = ServantCostumeMaster__GetEntity(v82, v7, IconLimitCountStageList->m_Items[v62], 0);
      if ( Entity )
      {
        Instance = (UICommonButton_o *)ServantCostumeEntity__getShortName(Entity, 0);
        v71 = (System_String_o *)Instance;
      }
      else
      {
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v7, v70);
        if ( !byte_593385D )
        {
          sub_21FFC50(&LocalizationManager_TypeInfo);
          byte_593385D = 1;
        }
        Instance = (UICommonButton_o *)LocalizationManager_TypeInfo;
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v7, v70);
          Instance = (UICommonButton_o *)LocalizationManager_TypeInfo;
        }
        v71 = *(System_String_o **)(*(_QWORD *)&Instance[1].fields.specifyHoverColor.fields.b + 32LL);
      }
      v72 = v16;
      v73 = v15;
      v74 = v14;
      v75 = v13;
      if ( v66 && v64 )
      {
        v72 = v21;
        v73 = v20;
        v74 = v19;
        v75 = v18;
      }
      if ( !v68 )
        goto LABEL_163;
      UIRangeLabel__set_effectColor(v68, *(UnityEngine_Color_o *)&v75, 0);
      UIRangeLabel__Set(v68, v71, 0, 1, 0, 0, 0);
    }
    v76 = this->fields.charaLevelSpriteList;
    if ( !v76 )
      goto LABEL_163;
    if ( (unsigned int)v62 >= LODWORD(v76->max_length) )
      goto LABEL_165;
    Instance = (UICommonButton_o *)v76->m_Items[v62];
    if ( !Instance )
      goto LABEL_163;
    v77 = &StringLiteral_18173/*"btn_bg_21"*/;
    if ( !v64 )
      v77 = &StringLiteral_18171/*"btn_bg_20"*/;
    UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v77, 0);
    v78 = this->fields.faceButtonList;
    if ( v66 && v64 )
    {
      if ( !v78 )
        goto LABEL_163;
      if ( (unsigned int)v62 >= LODWORD(v78->max_length) )
        goto LABEL_165;
      Instance = v78->m_Items[v62];
      if ( !Instance )
        goto LABEL_163;
      UICommonButton__SetColliderEnable(Instance, 0, isInit, 0);
      v79 = this->fields.charaLevelButtonList;
      if ( !v79 )
        goto LABEL_163;
      if ( (unsigned int)v62 >= LODWORD(v79->max_length) )
        goto LABEL_165;
      Instance = v79->m_Items[v62];
      if ( !Instance )
        goto LABEL_163;
      UICommonButton__SetColliderEnable(Instance, 0, isInit, 0);
    }
    else if ( v62 >= max_length )
    {
      if ( !v78 )
        goto LABEL_163;
      if ( (unsigned int)v62 >= LODWORD(v78->max_length) )
        goto LABEL_165;
      Instance = v78->m_Items[v62];
      if ( !Instance )
        goto LABEL_163;
      Instance = (UICommonButton_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
      if ( !Instance )
        goto LABEL_163;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
      v81 = this->fields.charaLevelButtonList;
      if ( !v81 )
        goto LABEL_163;
      if ( (unsigned int)v62 >= LODWORD(v81->max_length) )
        goto LABEL_165;
      Instance = v81->m_Items[v62];
      if ( !Instance )
        goto LABEL_163;
      Instance = (UICommonButton_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
      if ( !Instance )
        goto LABEL_163;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
    }
    else
    {
      if ( !v78 )
        goto LABEL_163;
      if ( (unsigned int)v62 >= LODWORD(v78->max_length) )
        goto LABEL_165;
      Instance = v78->m_Items[v62];
      if ( !Instance )
        goto LABEL_163;
      UICommonButton__SetButtonEnable(Instance, v66 && !v64, isInit || !v66, 0);
      v80 = this->fields.charaLevelButtonList;
      if ( !v80 )
        goto LABEL_163;
      if ( (unsigned int)v62 >= LODWORD(v80->max_length) )
        goto LABEL_165;
      Instance = v80->m_Items[v62];
      if ( !Instance )
        goto LABEL_163;
      UICommonButton__SetButtonEnable(Instance, v66 && !v64, isInit || !v66, 0);
    }
    v61 = this->fields.charaLevelButtonList;
    ++v62;
    if ( !v61 )
      goto LABEL_163;
  }
}


void ServantStatusListViewItemDrawFace__SetupMask(
        ServantStatusListViewItemDrawFace_o *this,
        ServantStatusListViewItem_o *item,
        const MethodInfo *method)
{
  ServantStatusListViewItemDrawFace_o *v4; // x19
  bool IsEnableOwnRandomSetting; // w8
  struct UISprite_o *baseSprite; // x8
  ServantStatusListViewItemDrawFace_o *v7; // x21
  System_String_o *v8; // x21
  __int64 v9; // x2
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_593515D & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    this = (ServantStatusListViewItemDrawFace_o *)sub_21FFC50(&StringLiteral_12452/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_INFO_OWN_SETTING_FACE"*/);
    byte_593515D = 1;
  }
  if ( !item )
    goto LABEL_24;
  if ( item->fields.userSvtEntity )
  {
    IsEnableOwnRandomSetting = ServantStatusListViewItem__get_IsEnableOwnRandomSetting(item, 0);
    this = (ServantStatusListViewItemDrawFace_o *)v4->fields.maskBase;
    if ( IsEnableOwnRandomSetting )
    {
      if ( this )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
        baseSprite = v4->fields.baseSprite;
        if ( baseSprite )
        {
          this = (ServantStatusListViewItemDrawFace_o *)v4->fields.maskSprite;
          if ( this )
          {
            UIWidget__set_height((UIWidget_o *)this, baseSprite->fields.mHeight, 0);
            this = (ServantStatusListViewItemDrawFace_o *)v4->fields.maskSprite;
            if ( this )
            {
              UIWidget__ResizeCollider((UIWidget_o *)this, 0);
              this = (ServantStatusListViewItemDrawFace_o *)v4->fields.maskSprite;
              if ( this )
              {
                this = (ServantStatusListViewItemDrawFace_o *)UnityEngine_Component__get_gameObject(
                                                                (UnityEngine_Component_o *)this,
                                                                0);
                if ( v4->fields.baseSprite )
                {
                  v7 = this;
                  this = (ServantStatusListViewItemDrawFace_o *)UnityEngine_Component__get_transform(
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
                      v8 = LocalizationManager__Get((System_String_o *)StringLiteral_12452/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_INFO_OWN_SETTING_FACE"*/, 0);
                    }
                    this = (ServantStatusListViewItemDrawFace_o *)v4->fields.maskInfoLabel;
                    if ( this )
                    {
                      UILabel__set_overflowMethod((UILabel_o *)this, 2, 0);
                      this = (ServantStatusListViewItemDrawFace_o *)v4->fields.maskInfoLabel;
                      if ( this )
                      {
                        UILabel__set_text((UILabel_o *)this, v8, 0);
                        this = (ServantStatusListViewItemDrawFace_o *)v4->fields.maskInfoLabel;
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
    this = (ServantStatusListViewItemDrawFace_o *)v4->fields.maskBase;
    if ( !this )
      goto LABEL_24;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
}