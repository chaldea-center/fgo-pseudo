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
  int32_t mHeight; // w11
  bool v10; // cc
  int v11; // w8
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
  if ( SLODWORD(charaLevelSpriteList->max_length) > 4 )
  {
    this = (ServantStatusListViewItemDrawFace_o *)charaLevelSpriteList->m_Items[0];
    if ( !this )
      goto LABEL_28;
    this = (ServantStatusListViewItemDrawFace_o *)UnityEngine_Component__get_transform(
                                                    (UnityEngine_Component_o *)this,
                                                    0);
    if ( !this )
      goto LABEL_28;
    localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
    v5 = v3->fields.charaLevelSpriteList;
    if ( !v5 )
      goto LABEL_28;
    if ( LODWORD(v5->max_length) <= 4 )
      sub_1D0F314(this);
    if ( (this = (ServantStatusListViewItemDrawFace_o *)v5->m_Items[4]) == 0
      || (y = localPosition.fields.y,
          (this = (ServantStatusListViewItemDrawFace_o *)UnityEngine_Component__get_transform(
                                                           (UnityEngine_Component_o *)this,
                                                           0)) == 0)
      || ((v15 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0),
           charaLevelSpriteList = v3->fields.charaLevelSpriteList,
           (float)(y - v15.fields.y) != INFINITY)
        ? (facePitch = (int)(float)(y - v15.fields.y))
        : (facePitch = 0x80000000),
          v3->fields.facePitch = facePitch,
          !charaLevelSpriteList) )
    {
LABEL_28:
      sub_1D0F30C(this, method);
    }
  }
  else
  {
    facePitch = this->fields.facePitch;
  }
  baseSprite = v3->fields.baseSprite;
  if ( !baseSprite )
    goto LABEL_28;
  max_length = charaLevelSpriteList->max_length;
  mHeight = baseSprite->fields.mHeight;
  v10 = max_length < 12;
  this = (ServantStatusListViewItemDrawFace_o *)v3->fields.titleSprite;
  v11 = 1 - max_length / 4;
  if ( v10 )
    v11 = -1;
  v3->fields.baseSize.fields.x = (float)baseSprite->fields.mWidth;
  v3->fields.baseSize.fields.y = (float)(mHeight + v11 * facePitch);
  v3->fields.baseSize.fields.z = 0.0;
  if ( !this )
    goto LABEL_28;
  this = (ServantStatusListViewItemDrawFace_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_28;
  v16 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
  this = (ServantStatusListViewItemDrawFace_o *)v3->fields.faceBase;
  v12 = facePitch >= 0 ? facePitch : facePitch + 1;
  v13 = (float)(v12 >> 1);
  v3->fields.titleBasePosition.fields.x = v16.fields.x;
  v3->fields.titleBasePosition.fields.y = v16.fields.y - v13;
  v3->fields.titleBasePosition.fields.z = v16.fields.z;
  if ( !this )
    goto LABEL_28;
  this = (ServantStatusListViewItemDrawFace_o *)UnityEngine_GameObject__get_transform(
                                                  (UnityEngine_GameObject_o *)this,
                                                  0);
  if ( !this )
    goto LABEL_28;
  v17 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
  this = (ServantStatusListViewItemDrawFace_o *)v3->fields.explanationLabel;
  v3->fields.faceBasePosition.fields.x = v17.fields.x;
  v3->fields.faceBasePosition.fields.y = v17.fields.y - v13;
  v3->fields.faceBasePosition.fields.z = v17.fields.z;
  if ( !this )
    goto LABEL_28;
  this = (ServantStatusListViewItemDrawFace_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_28;
  v18 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
  v3->fields.explanationBasePosition.fields.x = v18.fields.x;
  v3->fields.explanationBasePosition.fields.y = v18.fields.y + v13;
  v3->fields.explanationBasePosition.fields.z = v18.fields.z;
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
  System_String_o *v16; // x21
  struct UISprite_array *v17; // x8
  struct UISprite_array *v18; // x8
  struct UISprite_array *v19; // x8
  struct UISprite_array *v20; // x8
  struct UISprite_array *v21; // x8
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4

  v6 = this;
  if ( (byte_4E7460E & 1) == 0 )
  {
    sub_1D0F0B4(&AtlasManager_TypeInfo);
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    sub_1D0F0B4(&StringLiteral_24364/*"svt_costume_icon_"*/);
    this = (ServantStatusListViewItemDrawFace_o *)sub_1D0F0B4(&StringLiteral_1/*""*/);
    byte_4E7460E = 1;
  }
  faceSpriteCostumeIconList = v6->fields.faceSpriteCostumeIconList;
  if ( !faceSpriteCostumeIconList )
    goto LABEL_39;
  if ( LODWORD(faceSpriteCostumeIconList->max_length) <= index )
LABEL_40:
    sub_1D0F314(this);
  v8 = (UnityEngine_Object_o *)faceSpriteCostumeIconList->m_Items[index];
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
        v16 = System_String__Concat_65562772((System_String_o *)StringLiteral_24364/*"svt_costume_icon_"*/, v15, 0);
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        this = (ServantStatusListViewItemDrawFace_o *)AtlasManager__SetEventSprite(v14, v16, 0);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          v17 = v6->fields.faceSpriteCostumeIconList;
          if ( !v17 )
            goto LABEL_39;
          if ( LODWORD(v17->max_length) > index )
          {
            this = (ServantStatusListViewItemDrawFace_o *)v17->m_Items[index];
            if ( !this )
              goto LABEL_39;
            UIWidget__set_pivot((UIWidget_o *)this, 4, 0);
            v18 = v6->fields.faceSpriteCostumeIconList;
            if ( !v18 )
              goto LABEL_39;
            if ( LODWORD(v18->max_length) > index )
            {
              this = (ServantStatusListViewItemDrawFace_o *)v18->m_Items[index];
              if ( !this )
                goto LABEL_39;
              UIWidget__set_width((UIWidget_o *)this, 32, 0);
              v19 = v6->fields.faceSpriteCostumeIconList;
              if ( !v19 )
                goto LABEL_39;
              if ( LODWORD(v19->max_length) > index )
              {
                this = (ServantStatusListViewItemDrawFace_o *)v19->m_Items[index];
                if ( !this )
                  goto LABEL_39;
                UIWidget__set_height((UIWidget_o *)this, 32, 0);
                v20 = v6->fields.faceSpriteCostumeIconList;
                if ( !v20 )
                  goto LABEL_39;
                if ( LODWORD(v20->max_length) > index )
                {
                  this = (ServantStatusListViewItemDrawFace_o *)v20->m_Items[index];
                  if ( !this )
                    goto LABEL_39;
                  this = (ServantStatusListViewItemDrawFace_o *)UnityEngine_Component__get_transform(
                                                                  (UnityEngine_Component_o *)this,
                                                                  0);
                  if ( !this )
                    goto LABEL_39;
                  v22.fields.x = -42.0;
                  v22.fields.z = 0.0;
                  v22.fields.y = -42.0;
                  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v22, 0);
                  v21 = v6->fields.faceSpriteCostumeIconList;
                  if ( !v21 )
                    goto LABEL_39;
                  if ( LODWORD(v21->max_length) > index )
                  {
                    this = (ServantStatusListViewItemDrawFace_o *)v21->m_Items[index];
                    if ( this )
                    {
                      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 1, 0);
                      return;
                    }
LABEL_39:
                    sub_1D0F30C(this, *(_QWORD *)&index);
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


void ServantStatusListViewItemDrawFace__SetItem(
        ServantStatusListViewItemDrawFace_o *this,
        ServantStatusListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x21
  UILabel_o *explanationLabel; // x22
  __int64 *v9; // x8
  UISprite_o *ServantStatusExplanationText; // x0
  __int64 v11; // x1
  struct ServantEntity_o *svtEntity; // x8
  __int64 v13; // x22
  __int64 v14; // x23
  int32_t v15; // w22
  struct UILabel_o *v16; // x23
  System_String_o *mText; // x25
  System_String_o *v18; // x24
  Il2CppObject *LimitCountSealedServantName; // x0
  System_String_o *v20; // x0
  System_String_o *v21; // x0
  int v22; // w23
  struct ServantLeaderInfo_o *servantLeaderInfo; // x19
  UILabel_o *v24; // x22
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  UISprite_o *v26; // x21
  int32_t facePitch; // w9
  float x; // s8
  float y; // s9
  float z; // s10
  UnityEngine_Object_o *baseCollider; // x22
  int v32; // w8
  int v33; // w8
  int v34; // w8
  int v35; // w19
  float v36; // s9
  int32_t v37; // w1
  int32_t v38; // w1
  int v39; // w19
  float v40; // s8
  float v41; // s11
  float v42; // s9
  float v43; // s10
  float v44; // s8
  float v45; // s11
  float v46; // s9
  float v47; // s8
  float v48; // s10
  float v49; // s9
  int32_t SvtId; // w22
  const MethodInfo *v51; // x3
  Il2CppObject *MasterData_object; // x23
  unsigned __int64 v53; // x24
  struct UIRect_AnchorPoint_o **p_leftAnchor; // x29
  struct UISprite_array *faceFrameSpriteList; // x8
  struct UISprite_array *v56; // x8
  UISprite_o *v57; // x25
  int32_t v58; // w26
  struct UISprite_array *faceSpriteList; // x8
  char v60; // w25
  UISprite_o *v61; // x26
  struct UISprite_array *v62; // x8
  struct UISprite_array *v63; // x8
  __int64 v64; // x29
  struct UIRect_AnchorPoint_o **p_bottomAnchor; // x27
  unsigned int v66; // w24
  struct UISprite_array *v67; // x8
  int v68; // w19
  struct UISprite_array *v69; // x8
  UISprite_o *v70; // x25
  int32_t v71; // w26
  ServantCostumeEntity_o *Entity; // x0
  const MethodInfo *v73; // x3
  struct UISprite_array *v74; // x8
  UIWidget_o *transformNameLabel; // x21
  UIWidget_o *transformNameSprite; // x21
  UILabel_o *v77; // x21
  UnityEngine_Object_o *v78; // x21
  float v79; // s1
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t transformNameAddHeight; // w8
  int v82; // w8
  UnityEngine_GameObject_o *v83; // x0
  int32_t v84; // w8
  int v85; // w8
  const MethodInfo *v86; // x3
  const MethodInfo *v87; // x2
  ServantStatusListViewItem_o *v88; // [xsp+8h] [xbp-88h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v89; // 0:x0.16
  UnityEngine_Vector3_o v90; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v91; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v92; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v93; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o size; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o TransformNameLabelColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o TransformNameSpriteColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4E7460D & 1) == 0 )
  {
    sub_1D0F0B4(&AtlasManager_TypeInfo);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_ServantCostumeMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1D0F0B4(&DataManager_TypeInfo);
    sub_1D0F0B4(&LocalizationManager_TypeInfo);
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1D0F0B4(&StringLiteral_12089/*"SERVANT_STATUS_EXPLANATION_FACE"*/);
    sub_1D0F0B4(&StringLiteral_12091/*"SERVANT_STATUS_EXPLANATION_FACE3"*/);
    sub_1D0F0B4(&StringLiteral_12090/*"SERVANT_STATUS_EXPLANATION_FACE2"*/);
    sub_1D0F0B4(&StringLiteral_12092/*"SERVANT_STATUS_EXPLANATION_FACE_LIMIT_COUNT_SEALED_MSG"*/);
    byte_4E7460D = 1;
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
      v9 = &StringLiteral_12089/*"SERVANT_STATUS_EXPLANATION_FACE"*/;
    }
    else
    {
      if ( !item->fields.userSvtCollectionEntity )
      {
        servantLeaderInfo = item->fields.servantLeaderInfo;
        v24 = this->fields.explanationLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        ServantStatusExplanationText = (UISprite_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12091/*"SERVANT_STATUS_EXPLANATION_FACE3"*/, 0);
        if ( !v24 )
          goto LABEL_136;
        UILabel__set_text(v24, (System_String_o *)ServantStatusExplanationText, 0);
        if ( !servantLeaderInfo )
          goto LABEL_30;
        goto LABEL_18;
      }
      explanationLabel = this->fields.explanationLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v9 = &StringLiteral_12090/*"SERVANT_STATUS_EXPLANATION_FACE2"*/;
    }
    ServantStatusExplanationText = (UISprite_o *)LocalizationManager__Get((System_String_o *)*v9, 0);
    if ( !explanationLabel )
      goto LABEL_136;
    UILabel__set_text(explanationLabel, (System_String_o *)ServantStatusExplanationText, 0);
LABEL_18:
    svtEntity = item->fields.svtEntity;
    if ( !svtEntity )
      goto LABEL_136;
    v14 = *(_QWORD *)&svtEntity->fields.id.fields.currentCryptoKey;
    v13 = *(_QWORD *)&svtEntity->fields.id.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v89.fields.currentCryptoKey = v14;
    *(_QWORD *)&v89.fields.fakeValue = v13;
    ServantStatusExplanationText = (UISprite_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(
                                                   v89,
                                                   0);
    if ( (_DWORD)ServantStatusExplanationText )
    {
      if ( !Master_object )
        goto LABEL_136;
      v15 = (int)ServantStatusExplanationText;
      if ( ServantLimitImageMaster__IsServantLimitCountSeal(
             (ServantLimitImageMaster_o *)Master_object,
             (int32_t)ServantStatusExplanationText,
             3,
             0) )
      {
        ServantStatusExplanationText = (UISprite_o *)ServantLimitImageMaster__GetServantStatusExplanationText(
                                                       (ServantLimitImageMaster_o *)Master_object,
                                                       (System_String_o *)StringLiteral_12092/*"SERVANT_STATUS_EXPLANATION_FACE_LIMIT_COUNT_SEALED_MSG"*/,
                                                       v15,
                                                       0);
        v16 = this->fields.explanationLabel;
        if ( !v16 )
          goto LABEL_136;
        mText = v16->fields.mText;
        v18 = (System_String_o *)ServantStatusExplanationText;
        LimitCountSealedServantName = (Il2CppObject *)ServantLimitImageMaster__GetLimitCountSealedServantName(
                                                        (ServantLimitImageMaster_o *)Master_object,
                                                        v15,
                                                        3,
                                                        0,
                                                        0,
                                                        0);
        v20 = System_String__Format(v18, LimitCountSealedServantName, 0);
        v21 = System_String__Concat_65562772(mText, v20, 0);
        UILabel__set_text(v16, v21, 0);
        v22 = 1;
LABEL_31:
        ServantStatusExplanationText = (UISprite_o *)ServantStatusListViewItem__GetIconLimitCountStageList(item, 0);
        if ( !ServantStatusExplanationText )
          goto LABEL_136;
        m_CancellationTokenSource = ServantStatusExplanationText->fields.m_CancellationTokenSource;
        v26 = ServantStatusExplanationText;
        if ( (int)m_CancellationTokenSource < 5 )
          facePitch = 0;
        else
          facePitch = this->fields.facePitch;
        x = this->fields.baseSize.fields.x;
        y = this->fields.baseSize.fields.y;
        z = this->fields.baseSize.fields.z;
        baseCollider = (UnityEngine_Object_o *)this->fields.baseCollider;
        v32 = (int)m_CancellationTokenSource / 4;
        if ( ((__int64)ServantStatusExplanationText->fields.m_CancellationTokenSource & 3) != 0 )
          ++v32;
        if ( v32 < 3 )
          v33 = 1;
        else
          v33 = v32 - 1;
        v34 = facePitch * v33;
        if ( v22 )
          v35 = v34 + 32;
        else
          v35 = v34;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v36 = y + (float)v35;
        if ( UnityEngine_Object__op_Inequality(baseCollider, 0, 0) )
        {
          ServantStatusExplanationText = (UISprite_o *)this->fields.baseCollider;
          if ( !ServantStatusExplanationText )
            goto LABEL_136;
          v90.fields.x = x;
          v90.fields.y = v36;
          v90.fields.z = z;
          UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)ServantStatusExplanationText, v90, 0);
        }
        ServantStatusExplanationText = this->fields.baseSprite;
        if ( ServantStatusExplanationText )
        {
          v37 = x == INFINITY ? 0x80000000 : (int)x;
          UIWidget__set_width((UIWidget_o *)ServantStatusExplanationText, v37, 0);
          ServantStatusExplanationText = this->fields.baseSprite;
          if ( ServantStatusExplanationText )
          {
            v38 = v36 == INFINITY ? 0x80000000 : (int)v36;
            UIWidget__set_height((UIWidget_o *)ServantStatusExplanationText, v38, 0);
            ServantStatusExplanationText = this->fields.titleSprite;
            v39 = v35 + (v35 < 0);
            if ( ServantStatusExplanationText )
            {
              v40 = this->fields.titleBasePosition.fields.x;
              v41 = this->fields.titleBasePosition.fields.y;
              v42 = this->fields.titleBasePosition.fields.z;
              ServantStatusExplanationText = (UISprite_o *)UnityEngine_Component__get_transform(
                                                             (UnityEngine_Component_o *)ServantStatusExplanationText,
                                                             0);
              if ( ServantStatusExplanationText )
              {
                v43 = (float)(v39 >> 1);
                v91.fields.y = v41 + v43;
                v91.fields.x = v40;
                v91.fields.z = v42;
                UnityEngine_Transform__set_localPosition(
                  (UnityEngine_Transform_o *)ServantStatusExplanationText,
                  v91,
                  0);
                ServantStatusExplanationText = (UISprite_o *)this->fields.faceBase;
                if ( ServantStatusExplanationText )
                {
                  v44 = this->fields.faceBasePosition.fields.x;
                  v45 = this->fields.faceBasePosition.fields.y;
                  v46 = this->fields.faceBasePosition.fields.z;
                  ServantStatusExplanationText = (UISprite_o *)UnityEngine_GameObject__get_transform(
                                                                 (UnityEngine_GameObject_o *)ServantStatusExplanationText,
                                                                 0);
                  if ( ServantStatusExplanationText )
                  {
                    v92.fields.y = v45 + v43;
                    v92.fields.x = v44;
                    v92.fields.z = v46;
                    UnityEngine_Transform__set_localPosition(
                      (UnityEngine_Transform_o *)ServantStatusExplanationText,
                      v92,
                      0);
                    ServantStatusExplanationText = (UISprite_o *)this->fields.explanationLabel;
                    v47 = v22
                        ? (float)(this->fields.explanationBasePosition.fields.y - v43) + 16.0
                        : this->fields.explanationBasePosition.fields.y - v43;
                    if ( ServantStatusExplanationText )
                    {
                      v48 = this->fields.explanationBasePosition.fields.x;
                      v49 = this->fields.explanationBasePosition.fields.z;
                      ServantStatusExplanationText = (UISprite_o *)UnityEngine_Component__get_transform(
                                                                     (UnityEngine_Component_o *)ServantStatusExplanationText,
                                                                     0);
                      if ( ServantStatusExplanationText )
                      {
                        v93.fields.x = v48;
                        v93.fields.y = v47;
                        v93.fields.z = v49;
                        UnityEngine_Transform__set_localPosition(
                          (UnityEngine_Transform_o *)ServantStatusExplanationText,
                          v93,
                          0);
                        SvtId = ServantStatusListViewItem__GetSvtId(item, 0, 0);
                        ServantStatusExplanationText = (UISprite_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                        if ( ServantStatusExplanationText )
                        {
                          MasterData_object = DataManager__GetMasterData_object_(
                                                (DataManager_o *)ServantStatusExplanationText,
                                                (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
                          v53 = 0;
                          p_leftAnchor = &v26->fields.leftAnchor;
                          do
                          {
                            ServantStatusListViewItemDrawFace__SetCostumeIcon(this, v53, 0, v51);
                            faceFrameSpriteList = this->fields.faceFrameSpriteList;
                            if ( !faceFrameSpriteList )
                              goto LABEL_136;
                            if ( v53 >= LODWORD(faceFrameSpriteList->max_length) )
                              goto LABEL_137;
                            ServantStatusExplanationText = faceFrameSpriteList->m_Items[v53];
                            if ( !ServantStatusExplanationText )
                              goto LABEL_136;
                            UnityEngine_Behaviour__set_enabled(
                              (UnityEngine_Behaviour_o *)ServantStatusExplanationText,
                              1,
                              0);
                            if ( v53 >= LODWORD(v26->fields.m_CancellationTokenSource) )
                              goto LABEL_137;
                            if ( (*((_DWORD *)p_leftAnchor + v53) & 0x80000000) != 0 )
                            {
                              ServantStatusExplanationText = (UISprite_o *)ServantStatusListViewItem__get_IsMine(
                                                                             item,
                                                                             0);
                              faceSpriteList = this->fields.faceSpriteList;
                              if ( !faceSpriteList )
                                goto LABEL_136;
                              if ( v53 >= LODWORD(faceSpriteList->max_length) )
                                goto LABEL_137;
                              v60 = (char)ServantStatusExplanationText;
                              v61 = faceSpriteList->m_Items[v53];
                              if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                                j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                              if ( (v60 & 1) != 0 )
                              {
                                ServantStatusExplanationText = (UISprite_o *)AtlasManager__SetNoMountFace(v61, 0);
                                v62 = this->fields.faceFrameSpriteList;
                                if ( !v62 )
                                  goto LABEL_136;
                                if ( v53 >= LODWORD(v62->max_length) )
LABEL_137:
                                  sub_1D0F314(ServantStatusExplanationText);
                                ServantStatusExplanationText = v62->m_Items[v53];
                                if ( !ServantStatusExplanationText )
                                  goto LABEL_136;
                                UnityEngine_Behaviour__set_enabled(
                                  (UnityEngine_Behaviour_o *)ServantStatusExplanationText,
                                  0,
                                  0);
                              }
                              else
                              {
                                ServantStatusExplanationText = (UISprite_o *)AtlasManager__SetNotOpenFace(v61, 0);
                              }
                            }
                            else
                            {
                              ServantStatusExplanationText = (UISprite_o *)ServantStatusListViewItem__get_LimitCount(
                                                                             item,
                                                                             0);
                              if ( v53 >= LODWORD(v26->fields.m_CancellationTokenSource) )
                                goto LABEL_137;
                              ServantStatusExplanationText = (UISprite_o *)LimitCountUtility__GetSealAfter(
                                                                             SvtId,
                                                                             (int32_t)ServantStatusExplanationText,
                                                                             *((_DWORD *)p_leftAnchor + v53),
                                                                             1,
                                                                             0);
                              v56 = this->fields.faceSpriteList;
                              if ( !v56 )
                                goto LABEL_136;
                              if ( v53 >= LODWORD(v56->max_length) )
                                goto LABEL_137;
                              v57 = v56->m_Items[v53];
                              v58 = LimitCountUtility__ConvertLimitCountStageIndexOneToZero(
                                      (int32_t)ServantStatusExplanationText,
                                      0);
                              if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                                j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                              ServantStatusExplanationText = (UISprite_o *)AtlasManager__SetFaceImage(
                                                                             v57,
                                                                             SvtId,
                                                                             v58,
                                                                             1,
                                                                             0,
                                                                             0,
                                                                             0);
                            }
                            ++v53;
                          }
                          while ( v53 != 4 );
                          v63 = this->fields.faceSpriteList;
                          v88 = item;
                          if ( v63 )
                          {
                            v64 = 0;
                            p_bottomAnchor = &v26->fields.bottomAnchor;
                            while ( 1 )
                            {
                              v66 = v64 + 4;
                              if ( (int)v64 + 4 >= SLODWORD(v63->max_length) )
                                break;
                              ServantStatusListViewItemDrawFace__SetCostumeIcon(this, v66, 0, v51);
                              v67 = this->fields.faceSpriteList;
                              if ( !v67 )
                                goto LABEL_136;
                              if ( v66 >= LODWORD(v67->max_length) )
                                goto LABEL_137;
                              ServantStatusExplanationText = v67->m_Items[v64 + 4];
                              if ( !ServantStatusExplanationText )
                                goto LABEL_136;
                              v68 = (int)v26->fields.m_CancellationTokenSource;
                              if ( (int)v66 >= v68 )
                              {
                                UnityEngine_Behaviour__set_enabled(
                                  (UnityEngine_Behaviour_o *)ServantStatusExplanationText,
                                  0,
                                  0);
                              }
                              else
                              {
                                UnityEngine_Behaviour__set_enabled(
                                  (UnityEngine_Behaviour_o *)ServantStatusExplanationText,
                                  1,
                                  0);
                                v69 = this->fields.faceSpriteList;
                                if ( !v69 )
                                  goto LABEL_136;
                                if ( v66 >= LODWORD(v69->max_length)
                                  || v66 >= LODWORD(v26->fields.m_CancellationTokenSource) )
                                {
                                  goto LABEL_137;
                                }
                                v70 = v69->m_Items[v64 + 4];
                                v71 = LimitCountUtility__ConvertLimitCountStageIndexOneToZero(
                                        *((_DWORD *)p_bottomAnchor + v64),
                                        0);
                                if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                                  j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                                ServantStatusExplanationText = (UISprite_o *)AtlasManager__SetFaceImage(
                                                                               v70,
                                                                               SvtId,
                                                                               v71,
                                                                               1,
                                                                               0,
                                                                               0,
                                                                               0);
                                if ( v66 >= LODWORD(v26->fields.m_CancellationTokenSource) )
                                  goto LABEL_137;
                                if ( !MasterData_object )
                                  goto LABEL_136;
                                Entity = ServantCostumeMaster__GetEntity(
                                           (ServantCostumeMaster_o *)MasterData_object,
                                           SvtId,
                                           *((_DWORD *)p_bottomAnchor + v64),
                                           0);
                                ServantStatusListViewItemDrawFace__SetCostumeIcon(this, v66, Entity, v73);
                              }
                              v74 = this->fields.faceFrameSpriteList;
                              if ( !v74 )
                                goto LABEL_136;
                              if ( v66 >= LODWORD(v74->max_length) )
                                goto LABEL_137;
                              ServantStatusExplanationText = v74->m_Items[v64 + 4];
                              if ( ServantStatusExplanationText )
                              {
                                UnityEngine_Behaviour__set_enabled(
                                  (UnityEngine_Behaviour_o *)ServantStatusExplanationText,
                                  (int)v66 < v68,
                                  0);
                                v63 = this->fields.faceSpriteList;
                                ++v64;
                                if ( v63 )
                                  continue;
                              }
                              goto LABEL_136;
                            }
                            if ( ServantStatusListViewItem__get_IsSaveTransformServant(v88, 0) )
                            {
                              transformNameLabel = (UIWidget_o *)this->fields.transformNameLabel;
                              TransformNameLabelColor = ServantStatusListViewItem__get_TransformNameLabelColor(v88, 0);
                              if ( transformNameLabel )
                              {
                                UIWidget__set_color(transformNameLabel, TransformNameLabelColor, 0);
                                transformNameSprite = (UIWidget_o *)this->fields.transformNameSprite;
                                TransformNameSpriteColor = ServantStatusListViewItem__get_TransformNameSpriteColor(
                                                             v88,
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
                                      v77 = this->fields.transformNameLabel;
                                      ServantStatusExplanationText = (UISprite_o *)ServantStatusListViewItem__GetTransformName(
                                                                                     v88,
                                                                                     0);
                                      if ( v77 )
                                      {
                                        UILabel__set_text(v77, (System_String_o *)ServantStatusExplanationText, 0);
                                        v78 = (UnityEngine_Object_o *)this->fields.baseCollider;
                                        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                                        if ( UnityEngine_Object__op_Inequality(v78, 0, 0) )
                                        {
                                          ServantStatusExplanationText = (UISprite_o *)this->fields.baseCollider;
                                          if ( !ServantStatusExplanationText )
                                            goto LABEL_136;
                                          size = UnityEngine_BoxCollider__get_size(
                                                   (UnityEngine_BoxCollider_o *)ServantStatusExplanationText,
                                                   0);
                                          ServantStatusExplanationText = (UISprite_o *)this->fields.baseCollider;
                                          if ( !ServantStatusExplanationText )
                                            goto LABEL_136;
                                          v79 = size.fields.y + (float)this->fields.transformNameAddHeight;
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
                                            v82 = transformNameAddHeight <= 0
                                                ? -transformNameAddHeight
                                                : 1 - transformNameAddHeight;
                                            GameObjectExtensions__AddLocalPositionY(
                                              this->fields.faceBase,
                                              (float)(v82 >> 1),
                                              0);
                                            ServantStatusExplanationText = (UISprite_o *)this->fields.explanationLabel;
                                            if ( ServantStatusExplanationText )
                                            {
                                              v83 = UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)ServantStatusExplanationText,
                                                      0);
                                              v84 = this->fields.transformNameAddHeight;
                                              if ( v84 <= 0 )
                                                v85 = -v84;
                                              else
                                                v85 = 1 - v84;
                                              GameObjectExtensions__AddLocalPositionY(v83, (float)(v85 >> 1), 0);
                                              goto LABEL_135;
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
LABEL_135:
                                  ServantStatusListViewItemDrawFace__SetupButton(this, v88, 1, v86);
                                  ServantStatusListViewItemDrawFace__SetupMask(this, v88, v87);
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
LABEL_136:
        sub_1D0F30C(ServantStatusExplanationText, v11);
      }
    }
LABEL_30:
    v22 = 0;
    goto LABEL_31;
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
  _BOOL4 v8; // w23
  System_Int32_array *IconLimitCountStageList; // x25
  float *v10; // x8
  float v11; // s8
  float v12; // s9
  float v13; // s10
  float v14; // s11
  float *v15; // x8
  float v16; // s12
  float v17; // s13
  float v18; // s14
  float v19; // s15
  unsigned int v20; // w8
  int32_t v21; // w26
  struct UIRangeLabel_array *charaLevelTitleRangeLabelList; // x11
  _BOOL4 v23; // w9
  UIRangeLabel_o *v24; // x27
  int v25; // w24
  int v26; // w19
  System_String_o *v27; // x28
  float v28; // s3
  float v29; // s2
  float v30; // s1
  float v31; // s0 OVERLAPPED
  System_String_o *v32; // x0
  System_String_o *v33; // x0
  struct UISprite_array *charaLevelSpriteList; // x8
  __int64 *v35; // x8
  struct UICommonButton_array *faceButtonList; // x8
  bool v37; // w19
  struct UICommonButton_array *charaLevelButtonList; // x8
  char v39; // w27
  bool v40; // w19
  struct UICommonButton_array *v41; // x8
  struct UILabel_array *limitCountSealLabel; // x8
  UnityEngine_Object_o *v43; // x27
  struct UnityEngine_GameObject_array *limitCountSealObjList; // x8
  UnityEngine_Object_o *v45; // x28
  int32_t SvtId; // w29
  int32_t LimitCount; // w0
  bool IsSealed; // w26
  System_String_o *v49; // x1
  bool v50; // nf
  struct UICommonButton_array *v51; // x8
  int v52; // w22
  int max_length; // w28
  _BOOL4 v54; // w24
  struct UIRangeLabel_array *v55; // x9
  UIRangeLabel_o *v56; // x26
  int v57; // w19
  ServantCostumeEntity_o *Entity; // x0
  System_String_o *v59; // x27
  float v60; // s3
  float v61; // s2
  float v62; // s1
  float v63; // s0 OVERLAPPED
  struct UISprite_array *v64; // x8
  __int64 *v65; // x8
  struct UICommonButton_array *v66; // x8
  bool v67; // w19
  struct UICommonButton_array *v68; // x8
  char v69; // w26
  bool v70; // w19
  struct UICommonButton_array *v71; // x8
  struct UICommonButton_array *v72; // x8
  ServantCostumeMaster_o *v73; // [xsp+8h] [xbp-B8h]
  int32_t IconLimitCountStage; // [xsp+14h] [xbp-ACh]
  unsigned int v76; // [xsp+1Ch] [xbp-A4h] BYREF
  UnityEngine_Color_o v77; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4E7460F & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMasterData_ServantCostumeMaster___);
    sub_1D0F0B4(&LocalizationManager_TypeInfo);
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1D0F0B4(&StringLiteral_8375/*"LIMIT_COUNT_SELECT_SEALED"*/);
    sub_1D0F0B4(&StringLiteral_12111/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_"*/);
    sub_1D0F0B4(&StringLiteral_17707/*"btn_bg_20"*/);
    sub_1D0F0B4(&StringLiteral_12112/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_CLOSE"*/);
    sub_1D0F0B4(&StringLiteral_1/*""*/);
    sub_1D0F0B4(&StringLiteral_17709/*"btn_bg_21"*/);
    byte_4E7460F = 1;
  }
  v76 = 0;
  Instance = (UICommonButton_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_139;
  Instance = (UICommonButton_o *)DataManager__GetMasterData_object_(
                                   (DataManager_o *)Instance,
                                   (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
  v73 = (ServantCostumeMaster_o *)Instance;
  if ( !item )
    goto LABEL_139;
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
  IconLimitCountStage = ServantStatusListViewItem__GetIconLimitCountStage(item, 0);
  IconLimitCountStageList = ServantStatusListViewItem__GetIconLimitCountStageList(item, 0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !byte_4E71D15 )
  {
    sub_1D0F0B4(&LocalizationManager_TypeInfo);
    byte_4E71D15 = 1;
  }
  Instance = (UICommonButton_o *)LocalizationManager_TypeInfo;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Instance = (UICommonButton_o *)LocalizationManager_TypeInfo;
  }
  v10 = *(float **)&Instance[1].fields.specifyHoverColor.fields.b;
  v11 = v10[20];
  v12 = v10[21];
  v13 = v10[22];
  v14 = v10[23];
  if ( !byte_4E71D16 )
  {
    sub_1D0F0B4(&LocalizationManager_TypeInfo);
    Instance = (UICommonButton_o *)LocalizationManager_TypeInfo;
    byte_4E71D16 = 1;
  }
  if ( !LODWORD(Instance[2].klass) )
  {
    j_il2cpp_runtime_class_init_0(Instance);
    Instance = (UICommonButton_o *)LocalizationManager_TypeInfo;
  }
  v15 = *(float **)&Instance[1].fields.specifyHoverColor.fields.b;
  v16 = v15[24];
  v17 = v15[25];
  v18 = v15[26];
  v19 = v15[27];
  v76 = 0;
  if ( !IconLimitCountStageList )
LABEL_139:
    sub_1D0F30C(Instance, v7);
  v20 = 0;
  do
  {
    if ( v20 >= LODWORD(IconLimitCountStageList->max_length) )
      goto LABEL_141;
    v21 = IconLimitCountStageList->m_Items[v20];
    charaLevelTitleRangeLabelList = this->fields.charaLevelTitleRangeLabelList;
    v23 = v21 > 0;
    if ( !charaLevelTitleRangeLabelList )
      goto LABEL_139;
    if ( v20 >= LODWORD(charaLevelTitleRangeLabelList->max_length) )
      goto LABEL_141;
    v24 = charaLevelTitleRangeLabelList->m_Items[v20];
    v25 = v23 && v21 == IconLimitCountStage;
    v26 = v8 && v23;
    if ( v21 <= 0
      && (Instance = (UICommonButton_o *)ServantStatusListViewItem__get_IsMine(item, 0),
          ((unsigned __int8)Instance & 1) != 0) )
    {
      if ( !v24 )
        goto LABEL_139;
      v77.fields.r = v11;
      v77.fields.g = v12;
      v77.fields.b = v13;
      v77.fields.a = v14;
      UIRangeLabel__set_effectColor(v24, v77, 0);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v27 = (System_String_o *)StringLiteral_12112/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_CLOSE"*/;
    }
    else
    {
      v28 = v14;
      v29 = v13;
      v30 = v12;
      v31 = v11;
      if ( (v26 & v25) != 0 )
      {
        v28 = v19;
        v29 = v18;
        v30 = v17;
        v31 = v16;
      }
      if ( !v24 )
        goto LABEL_139;
      UIRangeLabel__set_effectColor(v24, *(UnityEngine_Color_o *)&v31, 0);
      v32 = System_Int32__ToString((int32_t)&v76, 0);
      v27 = System_String__Concat_65562772((System_String_o *)StringLiteral_12111/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_"*/, v32, 0);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v33 = LocalizationManager__Get(v27, 0);
    UIRangeLabel__Set(v24, v33, 0, 1, 0, 0, 0);
    charaLevelSpriteList = this->fields.charaLevelSpriteList;
    if ( !charaLevelSpriteList )
      goto LABEL_139;
    if ( v76 >= LODWORD(charaLevelSpriteList->max_length) )
LABEL_141:
      sub_1D0F314(Instance);
    Instance = (UICommonButton_o *)charaLevelSpriteList->m_Items[v76];
    if ( !Instance )
      goto LABEL_139;
    v35 = &StringLiteral_17709/*"btn_bg_21"*/;
    if ( !v25 )
      v35 = &StringLiteral_17707/*"btn_bg_20"*/;
    UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v35, 0);
    faceButtonList = this->fields.faceButtonList;
    if ( !faceButtonList )
      goto LABEL_139;
    if ( v76 >= LODWORD(faceButtonList->max_length) )
      goto LABEL_141;
    Instance = faceButtonList->m_Items[v76];
    if ( (v26 & v25) != 0 )
    {
      if ( !Instance )
        goto LABEL_139;
      v37 = v26 == 0 || isInit;
      UICommonButton__SetColliderEnable(Instance, 0, v37, 0);
      charaLevelButtonList = this->fields.charaLevelButtonList;
      if ( !charaLevelButtonList )
        goto LABEL_139;
      if ( v76 >= LODWORD(charaLevelButtonList->max_length) )
        goto LABEL_141;
      Instance = charaLevelButtonList->m_Items[v76];
      if ( !Instance )
        goto LABEL_139;
      UICommonButton__SetColliderEnable(Instance, 0, v37, 0);
    }
    else
    {
      if ( !Instance )
        goto LABEL_139;
      v39 = v26 & ~(_BYTE)v25;
      v40 = v26 == 0 || isInit;
      UICommonButton__SetButtonEnable(Instance, v39, v40, 0);
      v41 = this->fields.charaLevelButtonList;
      if ( !v41 )
        goto LABEL_139;
      if ( v76 >= LODWORD(v41->max_length) )
        goto LABEL_141;
      Instance = v41->m_Items[v76];
      if ( !Instance )
        goto LABEL_139;
      UICommonButton__SetButtonEnable(Instance, v39, v40, 0);
    }
    limitCountSealLabel = this->fields.limitCountSealLabel;
    if ( limitCountSealLabel )
    {
      if ( v76 >= LODWORD(limitCountSealLabel->max_length) )
        goto LABEL_141;
      v43 = (UnityEngine_Object_o *)limitCountSealLabel->m_Items[v76];
    }
    else
    {
      v43 = 0;
    }
    limitCountSealObjList = this->fields.limitCountSealObjList;
    if ( limitCountSealObjList )
    {
      if ( v76 >= LODWORD(limitCountSealObjList->max_length) )
        goto LABEL_141;
      v45 = (UnityEngine_Object_o *)limitCountSealObjList->m_Items[v76];
    }
    else
    {
      v45 = 0;
    }
    SvtId = ServantStatusListViewItem__GetSvtId(item, 0, 0);
    LimitCount = ServantStatusListViewItem__get_LimitCount(item, 0);
    IsSealed = LimitCountUtility__IsSealed(SvtId, LimitCount, v21, 1, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Instance = (UICommonButton_o *)UnityEngine_Object__op_Inequality(v45, 0, 0);
    if ( IsSealed )
    {
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v45 )
          goto LABEL_139;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v45, 1, 0);
      }
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Instance = (UICommonButton_o *)UnityEngine_Object__op_Inequality(v43, 0, 0);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        Instance = (UICommonButton_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8375/*"LIMIT_COUNT_SELECT_SEALED"*/, 0);
        if ( !v43 )
          goto LABEL_139;
        v49 = (System_String_o *)Instance;
        goto LABEL_83;
      }
    }
    else
    {
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v45 )
          goto LABEL_139;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v45, 0, 0);
      }
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Instance = (UICommonButton_o *)UnityEngine_Object__op_Inequality(v43, 0, 0);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v43 )
          goto LABEL_139;
        v49 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_83:
        UILabel__set_text((UILabel_o *)v43, v49, 0);
      }
    }
    v50 = (int)(v76 - 3) < 0;
    v20 = ++v76;
  }
  while ( v50 != __OFSUB__(v76, 4) );
  v51 = this->fields.charaLevelButtonList;
  if ( !v51 )
    goto LABEL_139;
  v52 = 4;
  while ( v52 < SLODWORD(v51->max_length) )
  {
    max_length = IconLimitCountStageList->max_length;
    if ( v52 >= max_length )
    {
      v54 = 0;
    }
    else
    {
      if ( v52 >= (unsigned int)max_length )
        goto LABEL_141;
      v54 = IconLimitCountStageList->m_Items[v52] == IconLimitCountStage;
    }
    v55 = this->fields.charaLevelTitleRangeLabelList;
    if ( !v55 )
      goto LABEL_139;
    if ( (unsigned int)v52 >= LODWORD(v55->max_length) )
      goto LABEL_141;
    v56 = v55->m_Items[v52];
    v57 = v8 && v52 < max_length;
    if ( v52 >= max_length )
    {
      if ( !v56 )
        goto LABEL_139;
      UIRangeLabel__Clear(v55->m_Items[v52], 0);
    }
    else
    {
      Instance = (UICommonButton_o *)ServantStatusListViewItem__GetSvtId(item, 0, 0);
      if ( (unsigned int)v52 >= LODWORD(IconLimitCountStageList->max_length) )
        goto LABEL_141;
      v7 = (unsigned int)Instance;
      Instance = (UICommonButton_o *)v73;
      if ( !v73 )
        goto LABEL_139;
      Entity = ServantCostumeMaster__GetEntity(v73, v7, IconLimitCountStageList->m_Items[v52], 0);
      if ( Entity )
      {
        Instance = (UICommonButton_o *)ServantCostumeEntity__getShortName(Entity, 0);
        v59 = (System_String_o *)Instance;
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
        v59 = *(System_String_o **)(*(_QWORD *)&Instance[1].fields.specifyHoverColor.fields.b + 32LL);
      }
      v60 = v14;
      v61 = v13;
      v62 = v12;
      v63 = v11;
      if ( (v54 & v57) != 0 )
      {
        v60 = v19;
        v61 = v18;
        v62 = v17;
        v63 = v16;
      }
      if ( !v56 )
        goto LABEL_139;
      UIRangeLabel__set_effectColor(v56, *(UnityEngine_Color_o *)&v63, 0);
      UIRangeLabel__Set(v56, v59, 0, 1, 0, 0, 0);
    }
    v64 = this->fields.charaLevelSpriteList;
    if ( !v64 )
      goto LABEL_139;
    if ( (unsigned int)v52 >= LODWORD(v64->max_length) )
      goto LABEL_141;
    Instance = (UICommonButton_o *)v64->m_Items[v52];
    if ( !Instance )
      goto LABEL_139;
    v65 = &StringLiteral_17709/*"btn_bg_21"*/;
    if ( !v54 )
      v65 = &StringLiteral_17707/*"btn_bg_20"*/;
    UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v65, 0);
    v66 = this->fields.faceButtonList;
    if ( !v66 )
      goto LABEL_139;
    if ( (unsigned int)v52 >= LODWORD(v66->max_length) )
      goto LABEL_141;
    Instance = v66->m_Items[v52];
    if ( (v54 & v57) != 0 )
    {
      if ( !Instance )
        goto LABEL_139;
      v67 = v57 == 0 || isInit;
      UICommonButton__SetColliderEnable(Instance, 0, v67, 0);
      v68 = this->fields.charaLevelButtonList;
      if ( !v68 )
        goto LABEL_139;
      if ( (unsigned int)v52 >= LODWORD(v68->max_length) )
        goto LABEL_141;
      Instance = v68->m_Items[v52];
      if ( !Instance )
        goto LABEL_139;
      UICommonButton__SetColliderEnable(Instance, 0, v67, 0);
    }
    else if ( v52 >= max_length )
    {
      if ( !Instance )
        goto LABEL_139;
      Instance = (UICommonButton_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
      if ( !Instance )
        goto LABEL_139;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
      v72 = this->fields.charaLevelButtonList;
      if ( !v72 )
        goto LABEL_139;
      if ( (unsigned int)v52 >= LODWORD(v72->max_length) )
        goto LABEL_141;
      Instance = v72->m_Items[v52];
      if ( !Instance )
        goto LABEL_139;
      Instance = (UICommonButton_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
      if ( !Instance )
        goto LABEL_139;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
    }
    else
    {
      if ( !Instance )
        goto LABEL_139;
      v69 = v57 & ~v54;
      v70 = v57 == 0 || isInit;
      UICommonButton__SetButtonEnable(Instance, v69, v70, 0);
      v71 = this->fields.charaLevelButtonList;
      if ( !v71 )
        goto LABEL_139;
      if ( (unsigned int)v52 >= LODWORD(v71->max_length) )
        goto LABEL_141;
      Instance = v71->m_Items[v52];
      if ( !Instance )
        goto LABEL_139;
      UICommonButton__SetButtonEnable(Instance, v69, v70, 0);
    }
    v51 = this->fields.charaLevelButtonList;
    ++v52;
    if ( !v51 )
      goto LABEL_139;
  }
}


void ServantStatusListViewItemDrawFace__SetupMask(
        ServantStatusListViewItemDrawFace_o *this,
        ServantStatusListViewItem_o *item,
        const MethodInfo *method)
{
  ServantStatusListViewItemDrawFace_o *v4; // x19
  struct UISprite_o *baseSprite; // x8
  ServantStatusListViewItemDrawFace_o *v6; // x21
  System_String_o *Empty; // x21
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_4E74610 & 1) == 0 )
  {
    sub_1D0F0B4(&LocalizationManager_TypeInfo);
    sub_1D0F0B4(&string_TypeInfo);
    this = (ServantStatusListViewItemDrawFace_o *)sub_1D0F0B4(&StringLiteral_12134/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_INFO_OWN_SETTING_FACE"*/);
    byte_4E74610 = 1;
  }
  if ( !item )
    goto LABEL_22;
  if ( item->fields.userSvtEntity )
  {
    this = (ServantStatusListViewItemDrawFace_o *)ServantStatusListViewItem__get_IsEnableOwnRandomSetting(item, 0);
    if ( !v4->fields.maskBase )
      goto LABEL_22;
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      UnityEngine_GameObject__SetActive(v4->fields.maskBase, 1, 0);
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
                v6 = this;
                this = (ServantStatusListViewItemDrawFace_o *)UnityEngine_Component__get_transform(
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
                    Empty = LocalizationManager__Get((System_String_o *)StringLiteral_12134/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_INFO_OWN_SETTING_FACE"*/, 0);
                  }
                  this = (ServantStatusListViewItemDrawFace_o *)v4->fields.maskInfoLabel;
                  if ( this )
                  {
                    UILabel__set_overflowMethod((UILabel_o *)this, 2, 0);
                    this = (ServantStatusListViewItemDrawFace_o *)v4->fields.maskInfoLabel;
                    if ( this )
                    {
                      UILabel__set_text((UILabel_o *)this, Empty, 0);
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
LABEL_22:
      sub_1D0F30C(this, item);
    }
    this = (ServantStatusListViewItemDrawFace_o *)v4->fields.maskBase;
  }
  else
  {
    this = (ServantStatusListViewItemDrawFace_o *)v4->fields.maskBase;
    if ( !this )
      goto LABEL_22;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
}