void ServantStatusListViewItemDrawPortrait___ctor(
        ServantStatusListViewItemDrawPortrait_o *this,
        const MethodInfo *method)
{
  this->fields.MASK_LABEL_MAX_WIDTH = 550;
  this->fields.transformNameAddHeight = 20;
  this->fields.QUESTION_MARK_COLOR = (struct UnityEngine_Color_o)xmmword_E9D170;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ServantStatusListViewItemDrawPortrait__Awake(
        ServantStatusListViewItemDrawPortrait_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *baseSprite; // x0
  float v4; // s0
  float v5; // s1
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v7; // 0:s0.4,4:s1.4,8:s2.4

  baseSprite = (UnityEngine_Component_o *)this->fields.baseSprite;
  if ( !baseSprite )
    goto LABEL_9;
  v4 = (*(float (__fastcall **)(UnityEngine_Component_o *, _QWORD))&baseSprite->klass[1]._2.field_count)(
         baseSprite,
         *(_QWORD *)&baseSprite->klass[1]._2.interfaces_count);
  baseSprite = (UnityEngine_Component_o *)this->fields.titleSprite;
  this->fields.baseSize.fields.x = v4;
  this->fields.baseSize.fields.y = v5;
  this->fields.baseSize.fields.z = 0.0;
  if ( !baseSprite )
    goto LABEL_9;
  baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(baseSprite, 0);
  if ( !baseSprite )
    goto LABEL_9;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)baseSprite, 0);
  baseSprite = (UnityEngine_Component_o *)this->fields.portraitBase;
  this->fields.titleBasePosition = localPosition;
  if ( !baseSprite
    || (baseSprite = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                                  (UnityEngine_GameObject_o *)baseSprite,
                                                  0)) == 0
    || (v7 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)baseSprite, 0),
        baseSprite = (UnityEngine_Component_o *)this->fields.explanationLabel,
        this->fields.portraitBasePosition = v7,
        !baseSprite)
    || (baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(baseSprite, 0)) == 0 )
  {
LABEL_9:
    sub_2213CDC(baseSprite, method);
  }
  this->fields.explanationBasePosition = UnityEngine_Transform__get_localPosition(
                                           (UnityEngine_Transform_o *)baseSprite,
                                           0);
}


// local variable allocation has failed, the output may be wrong!
int32_t ServantStatusListViewItemDrawPortrait__GetAdditionalHeight(
        ServantStatusListViewItemDrawPortrait_o *this,
        int32_t buttonCount,
        const MethodInfo *method)
{
  ServantStatusListViewItemButton_o *levelButtonItem; // x0

  levelButtonItem = this->fields.levelButtonItem;
  if ( !levelButtonItem )
    sub_2213CDC(0, *(_QWORD *)&buttonCount);
  return ServantStatusListViewItemButton__GetAdditionalHeight(levelButtonItem, buttonCount, method);
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
  const MethodInfo *v5; // x2
  ServantStatusListViewItemDrawPortrait_o *v6; // x21
  const MethodInfo *v7; // x3
  struct ServantStatusListViewItemButton_o *levelButtonItem; // x8
  int v9; // w27
  __int64 columnCount; // x28
  struct ServantStatusListViewItemPortrait_array *portraitItems; // x8
  ServantStatusListViewItemPortrait_o *v12; // x28
  char *v13; // x23
  int32_t *v14; // x23
  int v15; // t1
  int32_t SvtId; // w22
  int32_t SealAfter; // w0
  UITexture_o *servantTexture; // x22
  int32_t v19; // w24
  int32_t v20; // w23
  int32_t LimitCount; // w0
  __int64 v22; // x1
  __int64 v23; // x2
  int32_t v24; // w24
  bool IsMine; // w8
  __int64 v26; // x1
  __int64 v27; // x2
  UISprite_o *maskSprite; // x22
  struct ServantStatusListViewItemPortrait_array *v29; // x8
  il2cpp_array_size_t max_length; // x9
  ServantStatusListViewItemPortrait_o *v31; // x29
  UITexture_o *v32; // x22
  __int64 v33; // x1
  __int64 v34; // x2
  int32_t v35; // w23
  int32_t v36; // w24
  bool v37; // w1
  __int64 v38; // x1
  __int64 v39; // x2
  UISprite_o *v40; // x22

  v4 = this;
  if ( (byte_596D35E & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    this = (ServantStatusListViewItemDrawPortrait_o *)sub_2213A60(&ServantAssetLoadManager_TypeInfo);
    byte_596D35E = 1;
  }
  if ( !item )
    goto LABEL_54;
  ServantStatusListViewItem__GetPortraitLimitCountStage(item, 0);
  this = (ServantStatusListViewItemDrawPortrait_o *)ServantStatusListViewItem__GetPortraitLimitCountStageList(item, 0);
  if ( !this )
    goto LABEL_54;
  v6 = this;
  ServantStatusListViewItemDrawPortrait__SetupPortraitObjects(v4, (int32_t)this->fields.m_CancellationTokenSource, v5);
  levelButtonItem = v4->fields.levelButtonItem;
  if ( !levelButtonItem )
    goto LABEL_54;
  v9 = 0;
  while ( 1 )
  {
    columnCount = levelButtonItem->fields.columnCount;
    if ( v9 >= (int)columnCount || v9 >= SLODWORD(v6->fields.m_CancellationTokenSource) )
      break;
    portraitItems = v4->fields.portraitItems;
    if ( !portraitItems )
      goto LABEL_54;
    if ( (unsigned int)v9 >= LODWORD(portraitItems->max_length) )
LABEL_56:
      sub_2213CE4(this);
    v12 = portraitItems->m_Items[v9];
    if ( !v12 )
      goto LABEL_54;
    this = (ServantStatusListViewItemDrawPortrait_o *)v12->fields.maskSprite;
    if ( !this )
      goto LABEL_54;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 1, 0);
    if ( (unsigned int)v9 >= LODWORD(v6->fields.m_CancellationTokenSource) )
      goto LABEL_56;
    v13 = (char *)v6 + 4 * v9;
    v15 = *((_DWORD *)v13 + 8);
    v14 = (int32_t *)(v13 + 32);
    if ( v15 < 0 )
    {
      IsMine = ServantStatusListViewItem__get_IsMine(item, 0);
      this = (ServantStatusListViewItemDrawPortrait_o *)v12->fields.servantTexture;
      if ( IsMine )
      {
        if ( !this )
          goto LABEL_54;
        this = (ServantStatusListViewItemDrawPortrait_o *)(*(__int64 (__fastcall **)(ServantStatusListViewItemDrawPortrait_o *, _QWORD, size_t))&this->klass[1]._2.cctor_finished)(
                                                            this,
                                                            0,
                                                            this->klass[1]._2.cctor_thread);
      }
      else
      {
        if ( !this )
          goto LABEL_54;
        (*(void (__fastcall **)(ServantStatusListViewItemDrawPortrait_o *, _QWORD, size_t))&this->klass[1]._2.cctor_finished)(
          this,
          0,
          this->klass[1]._2.cctor_thread);
        maskSprite = v12->fields.maskSprite;
        if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v26, v27);
        AtlasManager__SetNotOpenFace(maskSprite, 0);
        this = (ServantStatusListViewItemDrawPortrait_o *)v12->fields.maskSprite;
        if ( !this )
          goto LABEL_54;
        UIWidget__set_color((UIWidget_o *)this, v4->fields.QUESTION_MARK_COLOR, 0);
      }
    }
    else
    {
      SvtId = ServantStatusListViewItem__GetSvtId(item, 0, 0);
      this = (ServantStatusListViewItemDrawPortrait_o *)ServantStatusListViewItem__get_LimitCount(item, 0);
      if ( (unsigned int)v9 >= LODWORD(v6->fields.m_CancellationTokenSource) )
        goto LABEL_56;
      SealAfter = LimitCountUtility__GetSealAfter(SvtId, (int32_t)this, *v14, 0, 0);
      servantTexture = v12->fields.servantTexture;
      v19 = SealAfter;
      v20 = ServantStatusListViewItem__GetSvtId(item, 0, 0);
      LimitCount = ServantStatusListViewItem__get_LimitCount(item, 0);
      v24 = LimitCountUtility__ConvertStageToLimitCount(LimitCount, v19, 0, 0);
      if ( !*(&ServantAssetLoadManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, v22, v23);
      ServantAssetLoadManager__loadStatusFace(servantTexture, v20, v24, 0);
      this = (ServantStatusListViewItemDrawPortrait_o *)v12->fields.maskSprite;
      if ( !this )
        goto LABEL_54;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0);
    }
    levelButtonItem = v4->fields.levelButtonItem;
    ++v9;
    if ( !levelButtonItem )
      goto LABEL_54;
  }
  v29 = v4->fields.portraitItems;
  if ( !v29 )
LABEL_54:
    sub_2213CDC(this, item);
  while ( 1 )
  {
    max_length = v29->max_length;
    if ( columnCount >= (int)max_length )
      break;
    if ( (unsigned int)columnCount >= (unsigned int)max_length )
      goto LABEL_56;
    v31 = v29->m_Items[columnCount];
    if ( columnCount < SLODWORD(v6->fields.m_CancellationTokenSource) )
    {
      if ( !v31 )
        goto LABEL_54;
      v32 = v31->fields.servantTexture;
      this = (ServantStatusListViewItemDrawPortrait_o *)ServantStatusListViewItem__get_SvtId(item, 0);
      if ( (unsigned int)columnCount >= LODWORD(v6->fields.m_CancellationTokenSource) )
        goto LABEL_56;
      v35 = (int)this;
      v36 = *(&v6->fields.dispMode + columnCount);
      if ( !*(&ServantAssetLoadManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, v33, v34);
      ServantAssetLoadManager__loadStatusFace(v32, v35, v36, 0);
      this = (ServantStatusListViewItemDrawPortrait_o *)v31->fields.maskSprite;
      if ( !this )
        goto LABEL_54;
      v37 = 0;
      goto LABEL_45;
    }
    this = (ServantStatusListViewItemDrawPortrait_o *)ServantStatusListViewItem__get_IsMine(item, 0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !v31 )
        goto LABEL_54;
      this = (ServantStatusListViewItemDrawPortrait_o *)v31->fields.servantTexture;
      if ( !this )
        goto LABEL_54;
      (*(void (__fastcall **)(ServantStatusListViewItemDrawPortrait_o *, _QWORD, size_t))&this->klass[1]._2.cctor_finished)(
        this,
        0,
        this->klass[1]._2.cctor_thread);
      this = (ServantStatusListViewItemDrawPortrait_o *)v31->fields.maskSprite;
      if ( !this )
        goto LABEL_54;
      v37 = 1;
LABEL_45:
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, v37, 0);
      goto LABEL_53;
    }
    if ( !v31 )
      goto LABEL_54;
    this = (ServantStatusListViewItemDrawPortrait_o *)v31->fields.servantTexture;
    if ( !this )
      goto LABEL_54;
    (*(void (__fastcall **)(ServantStatusListViewItemDrawPortrait_o *, _QWORD, size_t))&this->klass[1]._2.cctor_finished)(
      this,
      0,
      this->klass[1]._2.cctor_thread);
    this = (ServantStatusListViewItemDrawPortrait_o *)v31->fields.maskSprite;
    if ( !this )
      goto LABEL_54;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 1, 0);
    v40 = v31->fields.maskSprite;
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v38, v39);
    AtlasManager__SetNotOpenFace(v40, 0);
    this = (ServantStatusListViewItemDrawPortrait_o *)v31->fields.maskSprite;
    if ( !this )
      goto LABEL_54;
    UIWidget__set_color((UIWidget_o *)this, v4->fields.QUESTION_MARK_COLOR, 0);
LABEL_53:
    v29 = v4->fields.portraitItems;
    ++columnCount;
    if ( !v29 )
      goto LABEL_54;
  }
  ServantStatusListViewItemDrawPortrait__SetupButton(v4, item, 0, v7);
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
  __int64 ServantStatusExplanationText; // x0
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
  const MethodInfo *v27; // x2
  __int64 v28; // x21
  const MethodInfo *v29; // x2
  int32_t AdditionalHeight; // w8
  int v31; // w24
  float y; // s0
  int v33; // w8
  __int64 v34; // x1
  __int64 v35; // x2
  UnityEngine_Object_o *baseCollider; // x21
  UnityEngine_BoxCollider_o *v37; // x21
  int v38; // s0 OVERLAPPED
  int v40; // s2
  int v41; // w21
  float x; // s8
  float v43; // s11
  float z; // s9
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
  UnityEngine_Vector3_o size; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o TransformNameLabelColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o TransformNameSpriteColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_596D35D & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&StringLiteral_12437/*"SERVANT_STATUS_EXPLANATION_PORTRAIT3"*/);
    sub_2213A60(&StringLiteral_12436/*"SERVANT_STATUS_EXPLANATION_PORTRAIT2"*/);
    sub_2213A60(&StringLiteral_12435/*"SERVANT_STATUS_EXPLANATION_PORTRAIT"*/);
    sub_2213A60(&StringLiteral_12438/*"SERVANT_STATUS_EXPLANATION_PORTRAIT_LIMIT_COUNT_SEALED_MSG"*/);
    byte_596D35D = 1;
  }
  this->fields.dispMode = mode;
  if ( item && mode )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, item, *(_QWORD *)&mode);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
    if ( item->fields.userSvtEntity )
    {
      explanationLabel = this->fields.explanationLabel;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v7, v8);
      v11 = &StringLiteral_12435/*"SERVANT_STATUS_EXPLANATION_PORTRAIT"*/;
    }
    else if ( item->fields.userSvtCollectionEntity )
    {
      explanationLabel = this->fields.explanationLabel;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v7, v8);
      v11 = &StringLiteral_12436/*"SERVANT_STATUS_EXPLANATION_PORTRAIT2"*/;
    }
    else
    {
      explanationLabel = this->fields.explanationLabel;
      v12 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
      if ( !item->fields.servantLeaderInfo )
      {
        if ( !v12 )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v7, v8);
        ServantStatusExplanationText = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12437/*"SERVANT_STATUS_EXPLANATION_PORTRAIT3"*/, 0);
        if ( !explanationLabel )
          goto LABEL_87;
        UILabel__set_text(explanationLabel, (System_String_o *)ServantStatusExplanationText, 0);
        goto LABEL_33;
      }
      if ( !v12 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v7, v8);
      v11 = &StringLiteral_12437/*"SERVANT_STATUS_EXPLANATION_PORTRAIT3"*/;
    }
    ServantStatusExplanationText = (__int64)LocalizationManager__Get((System_String_o *)*v11, 0);
    if ( !explanationLabel )
      goto LABEL_87;
    UILabel__set_text(explanationLabel, (System_String_o *)ServantStatusExplanationText, 0);
    svtEntity = item->fields.svtEntity;
    if ( !svtEntity )
      goto LABEL_87;
    v17 = *(_QWORD *)&svtEntity->fields.id.fields.currentCryptoKey;
    v18 = *(_QWORD *)&svtEntity->fields.id.fields.fakeValue;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14, v15);
    *(_QWORD *)&v67.fields.currentCryptoKey = v17;
    *(_QWORD *)&v67.fields.fakeValue = v18;
    ServantStatusExplanationText = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v67, 0);
    if ( (_DWORD)ServantStatusExplanationText )
    {
      if ( !Master_object )
        goto LABEL_87;
      v19 = ServantStatusExplanationText;
      if ( ServantLimitImageMaster__IsServantLimitCountSeal(
             (ServantLimitImageMaster_o *)Master_object,
             ServantStatusExplanationText,
             3,
             0) )
      {
        ServantStatusExplanationText = (__int64)ServantLimitImageMaster__GetServantStatusExplanationText(
                                                  (ServantLimitImageMaster_o *)Master_object,
                                                  (System_String_o *)StringLiteral_12438/*"SERVANT_STATUS_EXPLANATION_PORTRAIT_LIMIT_COUNT_SEALED_MSG"*/,
                                                  v19,
                                                  0);
        v20 = this->fields.explanationLabel;
        if ( !v20 )
          goto LABEL_87;
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
        v25 = System_String__Concat_75651716(mText, v24, 0);
        UILabel__set_text(v20, v25, 0);
        v26 = 1;
LABEL_34:
        ServantStatusExplanationText = (__int64)ServantStatusListViewItem__GetPortraitLimitCountStageList(item, 0);
        if ( ServantStatusExplanationText )
        {
          v28 = ServantStatusExplanationText;
          ServantStatusListViewItemDrawPortrait__SetupPortraitObjects(
            this,
            *(_DWORD *)(ServantStatusExplanationText + 24),
            v27);
          ServantStatusExplanationText = (__int64)this->fields.levelButtonItem;
          if ( ServantStatusExplanationText )
          {
            AdditionalHeight = ServantStatusListViewItemButton__GetAdditionalHeight(
                                 (ServantStatusListViewItemButton_o *)ServantStatusExplanationText,
                                 *(_DWORD *)(v28 + 24),
                                 v29);
            ServantStatusExplanationText = (__int64)this->fields.baseSprite;
            v31 = v26 ? AdditionalHeight + 22 : AdditionalHeight;
            if ( ServantStatusExplanationText )
            {
              y = this->fields.baseSize.fields.y;
              if ( y == INFINITY )
                v33 = 0x80000000;
              else
                v33 = (int)y;
              UIWidget__set_height((UIWidget_o *)ServantStatusExplanationText, v33 + v31, 0);
              baseCollider = (UnityEngine_Object_o *)this->fields.baseCollider;
              if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v34, v35);
              if ( UnityEngine_Object__op_Inequality(baseCollider, 0, 0) )
              {
                ServantStatusExplanationText = (__int64)this->fields.baseSprite;
                if ( !ServantStatusExplanationText )
                  goto LABEL_87;
                v37 = this->fields.baseCollider;
                ServantStatusExplanationText = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)ServantStatusExplanationText
                                                                                          + 664LL))(
                                                 ServantStatusExplanationText,
                                                 *(_QWORD *)(*(_QWORD *)ServantStatusExplanationText + 672LL));
                if ( !v37 )
                  goto LABEL_87;
                v40 = 0;
                UnityEngine_BoxCollider__set_size(v37, *(UnityEngine_Vector3_o *)&v38, 0);
              }
              ServantStatusExplanationText = (__int64)this->fields.titleSprite;
              if ( v31 >= 0 )
                v41 = v31;
              else
                v41 = v31 + 1;
              if ( ServantStatusExplanationText )
              {
                x = this->fields.titleBasePosition.fields.x;
                v43 = this->fields.titleBasePosition.fields.y;
                z = this->fields.titleBasePosition.fields.z;
                ServantStatusExplanationText = (__int64)UnityEngine_Component__get_transform(
                                                          (UnityEngine_Component_o *)ServantStatusExplanationText,
                                                          0);
                if ( ServantStatusExplanationText )
                {
                  v68.fields.x = x;
                  v68.fields.z = z;
                  v45 = (float)(v41 >> 1);
                  v68.fields.y = v43 + v45;
                  UnityEngine_Transform__set_localPosition(
                    (UnityEngine_Transform_o *)ServantStatusExplanationText,
                    v68,
                    0);
                  ServantStatusExplanationText = (__int64)this->fields.portraitBase;
                  if ( ServantStatusExplanationText )
                  {
                    v46 = this->fields.portraitBasePosition.fields.x;
                    v47 = this->fields.portraitBasePosition.fields.y;
                    v48 = this->fields.portraitBasePosition.fields.z;
                    ServantStatusExplanationText = (__int64)UnityEngine_GameObject__get_transform(
                                                              (UnityEngine_GameObject_o *)ServantStatusExplanationText,
                                                              0);
                    if ( ServantStatusExplanationText )
                    {
                      v69.fields.y = v47 + v45;
                      v69.fields.x = v46;
                      v69.fields.z = v48;
                      UnityEngine_Transform__set_localPosition(
                        (UnityEngine_Transform_o *)ServantStatusExplanationText,
                        v69,
                        0);
                      ServantStatusExplanationText = (__int64)this->fields.explanationLabel;
                      v49 = v26
                          ? (float)(this->fields.explanationBasePosition.fields.y - v45) + 11.0
                          : this->fields.explanationBasePosition.fields.y - v45;
                      if ( ServantStatusExplanationText )
                      {
                        v50 = this->fields.explanationBasePosition.fields.x;
                        v51 = this->fields.explanationBasePosition.fields.z;
                        ServantStatusExplanationText = (__int64)UnityEngine_Component__get_transform(
                                                                  (UnityEngine_Component_o *)ServantStatusExplanationText,
                                                                  0);
                        if ( ServantStatusExplanationText )
                        {
                          v70.fields.x = v50;
                          v70.fields.y = v49;
                          v70.fields.z = v51;
                          UnityEngine_Transform__set_localPosition(
                            (UnityEngine_Transform_o *)ServantStatusExplanationText,
                            v70,
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
                                ServantStatusExplanationText = (__int64)this->fields.transformNameSprite;
                                if ( ServantStatusExplanationText )
                                {
                                  ServantStatusExplanationText = (__int64)UnityEngine_Component__get_gameObject(
                                                                            (UnityEngine_Component_o *)ServantStatusExplanationText,
                                                                            0);
                                  if ( ServantStatusExplanationText )
                                  {
                                    UnityEngine_GameObject__SetActive(
                                      (UnityEngine_GameObject_o *)ServantStatusExplanationText,
                                      1,
                                      0);
                                    v54 = this->fields.transformNameLabel;
                                    ServantStatusExplanationText = (__int64)ServantStatusListViewItem__GetTransformName(
                                                                              item,
                                                                              0);
                                    if ( v54 )
                                    {
                                      UILabel__set_text(v54, (System_String_o *)ServantStatusExplanationText, 0);
                                      v57 = (UnityEngine_Object_o *)this->fields.baseCollider;
                                      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v55, v56);
                                      if ( UnityEngine_Object__op_Inequality(v57, 0, 0) )
                                      {
                                        ServantStatusExplanationText = (__int64)this->fields.baseCollider;
                                        if ( !ServantStatusExplanationText )
                                          goto LABEL_87;
                                        size = UnityEngine_BoxCollider__get_size(
                                                 (UnityEngine_BoxCollider_o *)ServantStatusExplanationText,
                                                 0);
                                        ServantStatusExplanationText = (__int64)this->fields.baseCollider;
                                        if ( !ServantStatusExplanationText )
                                          goto LABEL_87;
                                        v58 = size.fields.y + (float)this->fields.transformNameAddHeight;
                                        UnityEngine_BoxCollider__set_size(
                                          (UnityEngine_BoxCollider_o *)ServantStatusExplanationText,
                                          size,
                                          0);
                                      }
                                      ServantStatusExplanationText = (__int64)this->fields.baseSprite;
                                      if ( ServantStatusExplanationText )
                                      {
                                        UIWidget__set_height(
                                          (UIWidget_o *)ServantStatusExplanationText,
                                          this->fields.transformNameAddHeight
                                        + *(_DWORD *)(ServantStatusExplanationText + 172),
                                          0);
                                        ServantStatusExplanationText = (__int64)this->fields.titleSprite;
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
                                            this->fields.portraitBase,
                                            (float)(v61 >> 1),
                                            0);
                                          ServantStatusExplanationText = (__int64)this->fields.explanationLabel;
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
                                            goto LABEL_86;
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
                            ServantStatusExplanationText = (__int64)this->fields.transformNameSprite;
                            if ( ServantStatusExplanationText )
                            {
                              ServantStatusExplanationText = (__int64)UnityEngine_Component__get_gameObject(
                                                                        (UnityEngine_Component_o *)ServantStatusExplanationText,
                                                                        0);
                              if ( ServantStatusExplanationText )
                              {
                                UnityEngine_GameObject__SetActive(
                                  (UnityEngine_GameObject_o *)ServantStatusExplanationText,
                                  0,
                                  0);
LABEL_86:
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
        }
LABEL_87:
        sub_2213CDC(ServantStatusExplanationText, v14);
      }
    }
LABEL_33:
    v26 = 0;
    goto LABEL_34;
  }
}


void ServantStatusListViewItemDrawPortrait__SetupButton(
        ServantStatusListViewItemDrawPortrait_o *this,
        ServantStatusListViewItem_o *item,
        bool isInit,
        const MethodInfo *method)
{
  void *Instance; // x0
  System_String_o *v7; // x1
  bool v8; // w20
  int32_t PortraitLimitCountStage; // w23
  const MethodInfo *v10; // x2
  _DWORD *v11; // x24
  const MethodInfo *v12; // x4
  struct ServantStatusListViewItemButton_o *levelButtonItem; // x9
  int v14; // w8
  __int64 columnCount; // x22
  int v16; // w9
  int32_t v17; // w26
  struct ServantStatusListViewItemButton_array *levelButtons; // x10
  bool v19; // w28
  bool v20; // w29
  bool v21; // w22
  struct ServantStatusListViewItemPortrait_array *portraitItems; // x11
  ServantStatusListViewItemButton_o *v23; // x27
  ServantStatusListViewItemPortrait_o *v24; // x25
  __int64 v25; // x1
  __int64 v26; // x2
  System_String_o *v27; // x19
  System_String_o *v28; // x0
  __int64 v29; // x1
  __int64 v30; // x2
  const MethodInfo *v31; // x4
  const MethodInfo *v32; // x4
  int32_t SvtId; // w19
  int32_t LimitCount; // w0
  __int64 v35; // x1
  __int64 v36; // x2
  bool IsSealed; // w19
  System_String_o *v38; // x0
  const MethodInfo *v39; // x3
  struct ServantStatusListViewItemButton_array *v40; // x8
  int max_length; // w10
  int v42; // w19
  __int64 v43; // x9
  int32_t v44; // w28
  bool v45; // w26
  bool v46; // w29
  struct ServantStatusListViewItemPortrait_array *v47; // x10
  Il2CppClass **v48; // x8
  ServantStatusListViewItemButton_o *v49; // x27
  ServantStatusListViewItemPortrait_o *v50; // x25
  ServantCostumeEntity_o *Entity; // x0
  __int64 v52; // x1
  __int64 v53; // x2
  const MethodInfo *v54; // x4
  const MethodInfo *v55; // x4
  bool v56; // [xsp+4h] [xbp-8Ch]
  ServantCostumeMaster_o *v57; // [xsp+10h] [xbp-80h]
  ServantStatusListViewItem_o *v59; // [xsp+20h] [xbp-70h]
  int v60; // [xsp+2Ch] [xbp-64h] BYREF

  if ( (byte_596D35F & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ServantCostumeMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&StringLiteral_8623/*"LIMIT_COUNT_SELECT_SEALED"*/);
    sub_2213A60(&StringLiteral_12452/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_"*/);
    sub_2213A60(&StringLiteral_12453/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_CLOSE"*/);
    byte_596D35F = 1;
  }
  v60 = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_77;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
  v57 = (ServantCostumeMaster_o *)Instance;
  if ( !item )
    goto LABEL_77;
  v8 = !ServantStatusListViewItem__get_IsConvertOverwriteImage(item, 0)
    && (item->fields.userSvtEntity || item->fields.userSvtCollectionEntity != 0);
  PortraitLimitCountStage = ServantStatusListViewItem__GetPortraitLimitCountStage(item, 0);
  Instance = ServantStatusListViewItem__GetPortraitLimitCountStageList(item, 0);
  if ( !Instance )
    goto LABEL_77;
  v11 = Instance;
  ServantStatusListViewItemDrawPortrait__SetupPortraitObjects(this, *((_DWORD *)Instance + 6), v10);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_77;
  v59 = item;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  levelButtonItem = this->fields.levelButtonItem;
  v60 = 0;
  if ( !levelButtonItem )
    goto LABEL_77;
  v14 = 0;
  while ( 1 )
  {
    columnCount = levelButtonItem->fields.columnCount;
    if ( v14 >= (int)columnCount )
      break;
    v16 = v11[6];
    if ( v14 >= v16 )
      break;
    if ( v14 >= (unsigned int)v16 )
      goto LABEL_79;
    v17 = v11[v14 + 8];
    levelButtons = this->fields.levelButtons;
    v19 = v17 > 0 && v8;
    v20 = v17 == PortraitLimitCountStage && v17 > 0;
    v21 = v17 == PortraitLimitCountStage && v19;
    if ( levelButtons )
    {
      if ( (unsigned int)v14 >= LODWORD(levelButtons->max_length) )
        goto LABEL_79;
      portraitItems = this->fields.portraitItems;
      if ( portraitItems )
      {
        if ( (unsigned int)v14 >= LODWORD(portraitItems->max_length) )
LABEL_79:
          sub_2213CE4(Instance);
        v23 = levelButtons->m_Items[v14];
        v24 = portraitItems->m_Items[v14];
        if ( v17 <= 0 && ServantStatusListViewItem__get_IsMine(v59, 0) )
        {
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v25, v26);
          v21 = 0;
          v27 = (System_String_o *)StringLiteral_12453/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_CLOSE"*/;
        }
        else
        {
          v28 = System_Int32__ToString((int32_t)&v60, 0);
          v27 = System_String__Concat_75651716((System_String_o *)StringLiteral_12452/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_"*/, v28, 0);
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v29, v30);
        }
        Instance = LocalizationManager__Get(v27, 0);
        if ( v23 )
        {
          ServantStatusListViewItemButton__SetButtonDisplay(v23, (System_String_o *)Instance, v20, v21, v31);
          if ( v24 )
          {
            ServantStatusListViewItemPortrait__ApplyInteractableState(v24, v20, v19, isInit, 0);
            ServantStatusListViewItemButton__ApplyInteractableState(v23, v20, v19, isInit, v32);
            SvtId = ServantStatusListViewItem__GetSvtId(v59, 0, 0);
            LimitCount = ServantStatusListViewItem__get_LimitCount(v59, 0);
            IsSealed = LimitCountUtility__IsSealed(SvtId, LimitCount, v17, 0, 0);
            if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v35, v36);
            v38 = LocalizationManager__Get((System_String_o *)StringLiteral_8623/*"LIMIT_COUNT_SELECT_SEALED"*/, 0);
            ServantStatusListViewItemButton__SetSealState(v23, IsSealed, v38, v39);
            levelButtonItem = this->fields.levelButtonItem;
            v14 = ++v60;
            if ( levelButtonItem )
              continue;
          }
        }
      }
    }
    goto LABEL_77;
  }
  v40 = this->fields.levelButtons;
  if ( !v40 )
LABEL_77:
    sub_2213CDC(Instance, v7);
  v56 = v8;
  while ( 1 )
  {
    max_length = v40->max_length;
    if ( (int)columnCount >= max_length )
      break;
    v42 = v11[6];
    if ( (int)columnCount >= v42 )
    {
      v44 = 0;
      v43 = columnCount;
    }
    else
    {
      if ( (unsigned int)columnCount >= v42 )
        goto LABEL_79;
      v43 = (int)columnCount;
      v44 = v11[columnCount + 8];
    }
    v45 = (int)columnCount < v42 && v8;
    v46 = v44 == PortraitLimitCountStage && (int)columnCount < v42;
    if ( (unsigned int)columnCount >= max_length )
      goto LABEL_79;
    v47 = this->fields.portraitItems;
    if ( !v47 )
      goto LABEL_77;
    if ( (unsigned int)columnCount >= LODWORD(v47->max_length) )
      goto LABEL_79;
    v48 = &v40->obj.klass + v43;
    v49 = (ServantStatusListViewItemButton_o *)v48[4];
    if ( (int)columnCount >= v42 )
    {
      if ( !v49 )
        goto LABEL_77;
      ServantStatusListViewItemButton__SetButtonDisplay(
        (ServantStatusListViewItemButton_o *)v48[4],
        **(System_String_o ***)(qword_5984390 + 184),
        0,
        v8 && v46,
        v12);
    }
    else
    {
      v50 = v47->m_Items[v43];
      v7 = (System_String_o *)(unsigned int)ServantStatusListViewItem__GetSvtId(v59, 0, 0);
      Instance = v57;
      if ( !v57 )
        goto LABEL_77;
      Entity = ServantCostumeMaster__GetEntity(v57, (int32_t)v7, v44, 0);
      if ( Entity )
      {
        Instance = ServantCostumeEntity__getShortName(Entity, 0);
        v7 = (System_String_o *)Instance;
        if ( !v49 )
          goto LABEL_77;
      }
      else
      {
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v52, v53);
        if ( !byte_596B976 )
        {
          sub_2213A60(&LocalizationManager_TypeInfo);
          byte_596B976 = 1;
        }
        Instance = LocalizationManager_TypeInfo;
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v52, v53);
          Instance = LocalizationManager_TypeInfo;
          v8 = v56;
        }
        v7 = *(System_String_o **)(*((_QWORD *)Instance + 23) + 32LL);
        if ( !v49 )
          goto LABEL_77;
      }
      ServantStatusListViewItemButton__SetButtonDisplay(v49, v7, v46, v8 && v46, v54);
      if ( (int)columnCount < v42 )
      {
        if ( !v50 )
          goto LABEL_77;
        ServantStatusListViewItemPortrait__ApplyInteractableState(v50, v44 == PortraitLimitCountStage, v45, isInit, 0);
        ServantStatusListViewItemButton__ApplyInteractableState(v49, v44 == PortraitLimitCountStage, v45, isInit, v55);
      }
    }
    v40 = this->fields.levelButtons;
    ++columnCount;
    if ( !v40 )
      goto LABEL_77;
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
  if ( (byte_596D360 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    this = (ServantStatusListViewItemDrawPortrait_o *)sub_2213A60(&StringLiteral_12476/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_INFO_OWN_SETTING_STATUS_ICON"*/);
    byte_596D360 = 1;
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
                    v8 = **(System_String_o ***)(qword_5984390 + 184);
                    if ( ServantStatusListViewItem__get_IsEnableOwnRandomSetting(item, 0) )
                    {
                      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item, v9);
                      v8 = LocalizationManager__Get((System_String_o *)StringLiteral_12476/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_INFO_OWN_SETTING_STATUS_ICON"*/, 0);
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
      sub_2213CDC(this, item);
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


void ServantStatusListViewItemDrawPortrait__SetupPortraitObjects(
        ServantStatusListViewItemDrawPortrait_o *this,
        int32_t count,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  Il2CppObject *ComponentInParent_object__58855988; // x22
  UnityEngine_Transform_o *transform; // x0
  __int64 v9; // x1
  System_Action_int__o *v10; // x21
  ServantStatusListViewItemPortrait_o *portrait; // x22
  UnityEngine_Transform_o *parent; // x0
  Il2CppObject *levelButtonItem; // x23
  UnityEngine_Transform_o *v14; // x24
  System_Func_int__Vector3__o *v15; // x25
  struct ServantStatusListViewItemPortrait_array *v16; // x0
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  ServantStatusListViewItemButton_o *v23; // x22
  UnityEngine_Transform_o *v24; // x0
  const MethodInfo *v25; // x4
  struct ServantStatusListViewItemButton_array *v26; // x0
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7

  if ( (byte_596D35C & 1) == 0 )
  {
    sub_2213A60(&System_Action_int__TypeInfo);
    sub_2213A60(&Method_UnityEngine_Component_GetComponentInParent_ServantStatusListViewObject___);
    sub_2213A60(&System_Func_int__Vector3__TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_ServantStatusListViewItemButton_GetOffset__);
    sub_2213A60(&Method_ServantStatusListViewObject_OnClickPortraitCharaLevel__);
    byte_596D35C = 1;
  }
  ComponentInParent_object__58855988 = UnityEngine_Component__GetComponentInParent_object__58855988(
                                         (UnityEngine_Component_o *)this,
                                         (const MethodInfo_3821234 *)Method_UnityEngine_Component_GetComponentInParent_ServantStatusListViewObject___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
  transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality(
                                           (UnityEngine_Object_o *)ComponentInParent_object__58855988,
                                           0,
                                           0);
  v10 = 0;
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    v10 = (System_Action_int__o *)sub_2213CCC(System_Action_int__TypeInfo);
    System_Action_int____ctor(
      v10,
      ComponentInParent_object__58855988,
      Method_ServantStatusListViewObject_OnClickPortraitCharaLevel__,
      0);
  }
  portrait = this->fields.portrait;
  if ( !portrait )
    goto LABEL_12;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.portrait, 0);
  if ( !transform )
    goto LABEL_12;
  parent = UnityEngine_Transform__get_parent(transform, 0);
  levelButtonItem = (Il2CppObject *)this->fields.levelButtonItem;
  v14 = parent;
  v15 = (System_Func_int__Vector3__o *)sub_2213CCC(System_Func_int__Vector3__TypeInfo);
  System_Func_int__Vector3____ctor(v15, levelButtonItem, Method_ServantStatusListViewItemButton_GetOffset__, 0);
  v16 = ServantStatusListViewItemPortrait__Setup(portrait, count, v14, v15, v10, 0);
  this->fields.portraitItems = v16;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.portraitItems,
    (int32_t)v16,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  v23 = this->fields.levelButtonItem;
  if ( !v23
    || (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.levelButtonItem, 0)) == 0 )
  {
LABEL_12:
    sub_2213CDC(transform, v9);
  }
  v24 = UnityEngine_Transform__get_parent(transform, 0);
  v26 = ServantStatusListViewItemButton__Setup(v23, count, v24, v10, v25);
  this->fields.levelButtons = v26;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.levelButtons,
    (int32_t)v26,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
}