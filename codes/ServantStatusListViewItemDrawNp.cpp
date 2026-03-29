void ServantStatusListViewItemDrawNp___cctor(const MethodInfo *method)
{
  if ( (byte_4D2DB84 & 1) == 0 )
  {
    sub_1C93AD4(&ServantStatusListViewItemDrawNp_TypeInfo);
    byte_4D2DB84 = 1;
  }
  ServantStatusListViewItemDrawNp_TypeInfo->static_fields->NP_LIST_MAX = 2;
}


void ServantStatusListViewItemDrawNp___ctor(ServantStatusListViewItemDrawNp_o *this, const MethodInfo *method)
{
  ServantStatusListViewItemDrawNp_c *v3; // x0
  struct ServantStatusNpComponent_array *v4; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7

  if ( (byte_4D2DB83 & 1) == 0 )
  {
    sub_1C93AD4(&ServantStatusListViewItemDrawNp_TypeInfo);
    sub_1C93AD4(&ServantStatusNpComponent___TypeInfo);
    byte_4D2DB83 = 1;
  }
  v3 = ServantStatusListViewItemDrawNp_TypeInfo;
  if ( !ServantStatusListViewItemDrawNp_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawNp_TypeInfo);
    v3 = ServantStatusListViewItemDrawNp_TypeInfo;
  }
  v4 = (struct ServantStatusNpComponent_array *)sub_1C93B7C(
                                                  ServantStatusNpComponent___TypeInfo,
                                                  v3->static_fields->NP_LIST_MAX);
  this->fields.npList = v4;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.npList, (int32_t)v4, v5, v6, v7, v8, v9, v10);
  this->fields.transformNameAddHeight = 42;
  this->fields.dispLimitCnt = -1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ServantStatusListViewItemDrawNp__Awake(ServantStatusListViewItemDrawNp_o *this, const MethodInfo *method)
{
  struct ServantStatusNpComponent_array *npList; // x8
  ServantStatusListViewItemDrawNp_o *v3; // x19
  struct ServantStatusNpComponent_array *v4; // x8
  float v5; // s8
  unsigned int v6; // w9
  struct UISprite_o *baseSprite; // x9
  int v8; // w20
  float v9; // s1
  struct ServantStatusNpComponent_array *v10; // x8
  int v11; // w9
  float v12; // s8
  float y; // s1
  float v14; // s1
  UnityEngine_Vector3_o localPosition; // 0:kr20_12.12
  UnityEngine_Vector3_o v16; // 0:kr34_12.12

  npList = this->fields.npList;
  if ( !npList )
    goto LABEL_24;
  v3 = this;
  if ( SLODWORD(npList->max_length) >= 2 )
  {
    this = (ServantStatusListViewItemDrawNp_o *)npList->m_Items[0];
    if ( !this )
      goto LABEL_24;
    this = (ServantStatusListViewItemDrawNp_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( !this )
      goto LABEL_24;
    y = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0).fields.y;
    v4 = v3->fields.npList;
    if ( !v4 )
      goto LABEL_24;
    if ( LODWORD(v4->max_length) <= 1 )
      goto LABEL_25;
    this = (ServantStatusListViewItemDrawNp_o *)v4->m_Items[1];
    if ( !this )
      goto LABEL_24;
    v5 = y;
    this = (ServantStatusListViewItemDrawNp_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( !this )
      goto LABEL_24;
    v14 = COERCE_FLOAT(LODWORD(UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0).fields.y));
    npList = v3->fields.npList;
    v6 = (float)(v5 - v14) == INFINITY ? 0x80000000 : (int)(float)(v5 - v14);
    v3->fields.npPitch = v6;
    if ( !npList )
      goto LABEL_24;
  }
  baseSprite = v3->fields.baseSprite;
  if ( !baseSprite )
    goto LABEL_24;
  this = (ServantStatusListViewItemDrawNp_o *)v3->fields.titleObject;
  v8 = v3->fields.npPitch * LODWORD(npList->max_length);
  v9 = (float)(baseSprite->fields.mHeight - v8);
  v3->fields.baseSize.fields.x = (float)baseSprite->fields.mWidth;
  v3->fields.baseSize.fields.y = v9;
  v3->fields.baseSize.fields.z = 0.0;
  if ( !this )
    goto LABEL_24;
  this = (ServantStatusListViewItemDrawNp_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
  if ( !this )
    goto LABEL_24;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
  v10 = v3->fields.npList;
  v11 = v8 >= 0 ? v8 : v8 + 1;
  v12 = (float)(v11 >> 1);
  v3->fields.titleBasePosition.fields.x = localPosition.fields.x;
  v3->fields.titleBasePosition.fields.y = localPosition.fields.y - v12;
  v3->fields.titleBasePosition.fields.z = localPosition.fields.z;
  if ( !v10 )
LABEL_24:
    sub_1C93D2C(this, method);
  if ( !LODWORD(v10->max_length) )
LABEL_25:
    sub_1C93D34(this);
  this = (ServantStatusListViewItemDrawNp_o *)v10->m_Items[0];
  if ( !this )
    goto LABEL_24;
  this = (ServantStatusListViewItemDrawNp_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_24;
  v16 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
  v3->fields.npBasePosition.fields.x = v16.fields.x;
  v3->fields.npBasePosition.fields.y = v16.fields.y - v12;
  v3->fields.npBasePosition.fields.z = v16.fields.z;
}


int32_t ServantStatusListViewItemDrawNp__GetKind(ServantStatusListViewItemDrawNp_o *this, const MethodInfo *method)
{
  return 7;
}


void ServantStatusListViewItemDrawNp__ModifyCommandCard(
        ServantStatusListViewItemDrawNp_o *this,
        ServantStatusListViewItem_o *item,
        const MethodInfo *method)
{
  int32_t v5; // w21
  ServantStatusListViewItemDrawNp_c *v6; // x0
  struct ServantStatusNpComponent_array *npList; // x8

  if ( (byte_4D2DB82 & 1) == 0 )
  {
    sub_1C93AD4(&ServantStatusListViewItemDrawNp_TypeInfo);
    byte_4D2DB82 = 1;
  }
  v5 = 0;
  this->fields.isStart = 1;
  while ( 1 )
  {
    v6 = ServantStatusListViewItemDrawNp_TypeInfo;
    if ( !ServantStatusListViewItemDrawNp_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawNp_TypeInfo);
      v6 = ServantStatusListViewItemDrawNp_TypeInfo;
    }
    if ( v5 >= v6->static_fields->NP_LIST_MAX )
      break;
    npList = this->fields.npList;
    if ( !npList )
      goto LABEL_12;
    if ( (unsigned int)v5 >= LODWORD(npList->max_length) )
      sub_1C93D34(v6);
    v6 = (ServantStatusListViewItemDrawNp_c *)npList->m_Items[v5];
    if ( !v6 )
LABEL_12:
      sub_1C93D2C(v6, item);
    ServantStatusNpComponent__ModifyCommandCard((ServantStatusNpComponent_o *)v6, item, 0);
    ++v5;
  }
}


void ServantStatusListViewItemDrawNp__SetItem(
        ServantStatusListViewItemDrawNp_o *this,
        ServantStatusListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  TreasureDvcInfo_o *v7; // x23
  TreasureDvcInfo_o **p_tdInfo; // x22
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  Il2CppObject *Master_object; // x24
  Il2CppObject *v16; // x23
  int32_t ConvertOverwriteDispImageLimitCount; // w0
  int32_t SvtId; // w21
  ServantStatusNpComponent_o *transformNameLabel; // x0
  __int64 v20; // x1
  int32_t v21; // w27
  int32_t LimitCount; // w0
  int32_t v23; // w25
  int32_t v24; // w24
  int32_t LimitCountByDispLimit; // w25
  int32_t TransformedSvtId_k__BackingField; // w26
  int32_t v27; // w5
  ServantTreasureDeviceAddMaster_o *v28; // x0
  int32_t v29; // w1
  int32_t v30; // w2
  int32_t v31; // w3
  int32_t id; // w4
  ServantTreasureDeviceAddEntity_o *EnableEntity; // x23
  UILabel_o *v34; // x24
  int32_t transformNameAddHeight; // w21
  int v36; // w8
  System_Int32_array *DispMaskTreasureDevices; // x24
  System_Int32_array *FixedCardLimitCounts; // x25
  unsigned __int64 i; // x26
  struct System_Int32_array *treasureDeviceIds; // x8
  struct ServantStatusNpComponent_array *npList; // x8
  struct ServantStatusNpComponent_array *v42; // x9
  struct System_Int32_array *v43; // x10
  il2cpp_array_size_t max_length; // x8
  struct System_String_array *titles; // x11
  struct System_String_array *closedMessages; // x12
  struct System_Int32_array *hideCardChara; // x13
  System_String_o *v48; // x7
  System_String_o *closedMessage; // x9
  int32_t dispMaskTreasureDevice; // w11
  int32_t fixedCardLimitCount; // w12
  struct ServantStatusNpComponent_array *v52; // x8
  struct ServantStatusNpComponent_array *v53; // x8
  struct ServantStatusNpComponent_array *v54; // x8
  struct ServantStatusNpComponent_array *v55; // x8
  ServantStatusNpComponent_o *v56; // x27
  System_String_o *CondLabelColor; // x0
  System_String_o *CondSpriteColor; // x0
  struct ServantStatusNpComponent_array *v59; // x8
  ServantStatusNpComponent_o *v60; // x8
  int32_t v61; // w9
  int v62; // w21
  UserServantEntity_o *userSvtEntity; // x0
  int v64; // w8
  float y; // s8
  float x; // s9
  float z; // s10
  UnityEngine_Object_o *baseCollider; // x22
  float v69; // s8
  int32_t v70; // w1
  int32_t v71; // w1
  int v72; // w21
  float v73; // s8
  float v74; // s10
  float v75; // s9
  int v76; // w22
  float v77; // s8
  float v78; // s9
  unsigned int v79; // w21
  float j; // s10
  struct ServantStatusNpComponent_array *v81; // x8
  struct ServantStatusNpComponent_array *v82; // x8
  ServantStatusNpComponent_o *v83; // x8
  int32_t v84; // [xsp+30h] [xbp-90h]
  int v85; // [xsp+34h] [xbp-8Ch]
  UnityEngine_Color_o v86; // 0:kr00_16.16
  UnityEngine_Color_o v87; // 0:kr10_16.16
  UnityEngine_Vector3_o v88; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v89; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v90; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v91; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v92; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4D2DB81 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_ServantTreasureDeviceAddMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&ImageLimitCount_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&ServantStatusListViewItemDrawNp_TypeInfo);
    sub_1C93AD4(&TreasureDvcInfo_TypeInfo);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D2DB81 = 1;
  }
  this->fields.dispMode = mode;
  v7 = (TreasureDvcInfo_o *)sub_1C93D20(TreasureDvcInfo_TypeInfo);
  TreasureDvcInfo___ctor(v7, 0);
  this->fields.tdInfo = v7;
  p_tdInfo = &this->fields.tdInfo;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.tdInfo, (int32_t)v7, v9, v10, v11, v12, v13, v14);
  if ( !item || !mode )
    return;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  v16 = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ServantTreasureDeviceAddMaster___);
  if ( ServantStatusListViewItem__get_IsNpc(item, 0) )
  {
    ConvertOverwriteDispImageLimitCount = ServantStatusListViewItem__get_ConvertOverwriteDispImageLimitCount(item, 0);
  }
  else
  {
    SvtId = ServantStatusListViewItem__get_SvtId(item, 0);
    transformNameLabel = (ServantStatusNpComponent_o *)ServantStatusListViewItem__get_ConvertOverwriteDispImageLimitCount(
                                                         item,
                                                         0);
    if ( !Master_object )
      goto LABEL_135;
    ConvertOverwriteDispImageLimitCount = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                            (ServantLimitImageMaster_o *)Master_object,
                                            SvtId,
                                            (int32_t)transformNameLabel,
                                            0);
  }
  v21 = ConvertOverwriteDispImageLimitCount;
  if ( ServantStatusListViewItem__get_IsNpc(item, 0) )
  {
    LimitCount = ServantStatusListViewItem__get_LimitCount(item, 0);
  }
  else
  {
    v23 = ServantStatusListViewItem__get_SvtId(item, 0);
    transformNameLabel = (ServantStatusNpComponent_o *)ServantStatusListViewItem__get_LimitCount(item, 0);
    if ( !Master_object )
      goto LABEL_135;
    LimitCount = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                   (ServantLimitImageMaster_o *)Master_object,
                   v23,
                   (int32_t)transformNameLabel,
                   0);
  }
  v24 = LimitCount;
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  LimitCountByDispLimit = ImageLimitCount__GetLimitCountByDispLimit(v21, v24, 0);
  if ( item->fields._IsTransformed_k__BackingField )
  {
    ServantStatusListViewItem__GetTransformedNpInfo(item, &this->fields.tdInfo, 0);
    TransformedSvtId_k__BackingField = item->fields._TransformedSvtId_k__BackingField;
  }
  else
  {
    if ( !ServantStatusListViewItem__get_IsMine(item, 0) )
    {
      ServantStatusListViewItem__GetNpInfo(item, &this->fields.tdInfo, 0);
      transformNameLabel = (ServantStatusNpComponent_o *)ServantStatusListViewItem__get_SvtId(item, 0);
      if ( !*p_tdInfo || !v16 )
        goto LABEL_135;
      id = (*p_tdInfo)->fields.id;
      v29 = (int)transformNameLabel;
      v28 = (ServantTreasureDeviceAddMaster_o *)v16;
      v30 = v24;
      v31 = LimitCountByDispLimit;
      v27 = 0;
      goto LABEL_23;
    }
    ServantStatusListViewItem__GetNpInfo_36590444(item, &this->fields.tdInfo, v21, 0);
    TransformedSvtId_k__BackingField = ServantStatusListViewItem__get_SvtId(item, 0);
  }
  transformNameLabel = (ServantStatusNpComponent_o *)ServantStatusListViewItem__get_LimitCount(item, 0);
  if ( !v16 )
    goto LABEL_135;
  v27 = (int)transformNameLabel;
  v28 = (ServantTreasureDeviceAddMaster_o *)v16;
  v29 = TransformedSvtId_k__BackingField;
  v30 = v24;
  v31 = LimitCountByDispLimit;
  id = 0;
LABEL_23:
  EnableEntity = ServantTreasureDeviceAddMaster__GetEnableEntity(v28, v29, v30, v31, id, v27, 0);
  if ( item->fields._IsTransformServant_k__BackingField )
  {
    transformNameLabel = (ServantStatusNpComponent_o *)this->fields.transformNameLabel;
    if ( !transformNameLabel )
      goto LABEL_135;
    UIWidget__set_color((UIWidget_o *)transformNameLabel, item->fields._TransformNameLabelColor_k__BackingField, 0);
    transformNameLabel = (ServantStatusNpComponent_o *)this->fields.transformNameSprite;
    if ( !transformNameLabel )
      goto LABEL_135;
    UIWidget__set_color((UIWidget_o *)transformNameLabel, item->fields._TransformNameSpriteColor_k__BackingField, 0);
    transformNameLabel = (ServantStatusNpComponent_o *)this->fields.transformNameSprite;
    if ( !transformNameLabel )
      goto LABEL_135;
    transformNameLabel = (ServantStatusNpComponent_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)transformNameLabel,
                                                         0);
    if ( !transformNameLabel )
      goto LABEL_135;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transformNameLabel, 1, 0);
    v34 = this->fields.transformNameLabel;
    transformNameLabel = (ServantStatusNpComponent_o *)ServantStatusListViewItem__GetTransformName(item, 0);
    if ( !v34 )
      goto LABEL_135;
    UILabel__set_text(v34, (System_String_o *)transformNameLabel, 0);
    transformNameAddHeight = this->fields.transformNameAddHeight;
    v36 = -transformNameAddHeight;
  }
  else
  {
    transformNameLabel = (ServantStatusNpComponent_o *)this->fields.transformNameSprite;
    if ( !transformNameLabel )
      goto LABEL_135;
    transformNameLabel = (ServantStatusNpComponent_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)transformNameLabel,
                                                         0);
    if ( !transformNameLabel )
      goto LABEL_135;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transformNameLabel, 0, 0);
    v36 = 0;
    transformNameAddHeight = 0;
  }
  v84 = v21;
  v85 = v36;
  if ( EnableEntity )
  {
    DispMaskTreasureDevices = ServantTreasureDeviceAddEntity__GetDispMaskTreasureDevices(EnableEntity, 0);
    FixedCardLimitCounts = ServantTreasureDeviceAddEntity__GetFixedCardLimitCounts(EnableEntity, 0);
  }
  else
  {
    FixedCardLimitCounts = 0;
    DispMaskTreasureDevices = 0;
  }
  for ( i = 0; ; ++i )
  {
    transformNameLabel = (ServantStatusNpComponent_o *)ServantStatusListViewItemDrawNp_TypeInfo;
    if ( !ServantStatusListViewItemDrawNp_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawNp_TypeInfo);
      transformNameLabel = (ServantStatusNpComponent_o *)ServantStatusListViewItemDrawNp_TypeInfo;
    }
    if ( (__int64)i >= (__int64)transformNameLabel->fields.commandCardComponent->klass )
      break;
    if ( EnableEntity )
    {
      treasureDeviceIds = EnableEntity->fields.treasureDeviceIds;
      if ( !treasureDeviceIds )
        goto LABEL_135;
      if ( (__int64)i < SLODWORD(treasureDeviceIds->max_length) )
      {
        npList = this->fields.npList;
        if ( !npList )
          goto LABEL_135;
        if ( i >= LODWORD(npList->max_length) )
          goto LABEL_136;
        transformNameLabel = npList->m_Items[i];
        if ( !transformNameLabel )
          goto LABEL_135;
        transformNameLabel = (ServantStatusNpComponent_o *)UnityEngine_Component__get_gameObject(
                                                             (UnityEngine_Component_o *)transformNameLabel,
                                                             0);
        if ( !transformNameLabel )
          goto LABEL_135;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transformNameLabel, 1, 0);
        v42 = this->fields.npList;
        if ( !v42 )
          goto LABEL_135;
        if ( i >= LODWORD(v42->max_length) )
          goto LABEL_136;
        v43 = EnableEntity->fields.treasureDeviceIds;
        if ( !v43 )
          goto LABEL_135;
        max_length = v43->max_length;
        if ( i >= (unsigned int)max_length )
          goto LABEL_136;
        titles = EnableEntity->fields.titles;
        if ( !titles )
          goto LABEL_135;
        if ( i >= LODWORD(titles->max_length) )
          goto LABEL_136;
        closedMessages = EnableEntity->fields.closedMessages;
        if ( !closedMessages )
          goto LABEL_135;
        if ( i >= LODWORD(closedMessages->max_length) )
          goto LABEL_136;
        hideCardChara = EnableEntity->fields.hideCardChara;
        if ( !hideCardChara )
          goto LABEL_135;
        if ( i >= LODWORD(hideCardChara->max_length) )
          goto LABEL_136;
        transformNameLabel = v42->m_Items[i];
        v48 = titles->m_Items[i];
        closedMessage = closedMessages->m_Items[i];
        if ( DispMaskTreasureDevices )
        {
          if ( i >= LODWORD(DispMaskTreasureDevices->max_length) )
            goto LABEL_136;
          dispMaskTreasureDevice = DispMaskTreasureDevices->m_Items[i];
          if ( FixedCardLimitCounts )
            goto LABEL_60;
LABEL_77:
          fixedCardLimitCount = 1;
          if ( !transformNameLabel )
            goto LABEL_135;
        }
        else
        {
          dispMaskTreasureDevice = -1;
          if ( !FixedCardLimitCounts )
            goto LABEL_77;
LABEL_60:
          if ( i >= LODWORD(FixedCardLimitCounts->max_length) )
            goto LABEL_136;
          fixedCardLimitCount = FixedCardLimitCounts->m_Items[i];
          if ( !transformNameLabel )
            goto LABEL_135;
        }
        ServantStatusNpComponent__Set(
          transformNameLabel,
          i,
          *p_tdInfo,
          item,
          v43->m_Items[i],
          (int)max_length > 1,
          EnableEntity->fields.condLimitCount,
          v48,
          closedMessage,
          hideCardChara->m_Items[i],
          dispMaskTreasureDevice,
          fixedCardLimitCount,
          0);
        v55 = this->fields.npList;
        if ( !v55 )
          goto LABEL_135;
        if ( i >= LODWORD(v55->max_length) )
LABEL_136:
          sub_1C93D34(transformNameLabel);
        v56 = v55->m_Items[i];
        CondLabelColor = ServantTreasureDeviceAddEntity__GetCondLabelColor(EnableEntity, 0);
        v91.fields.r = 0.0;
        v91.fields.g = 0.0;
        v91.fields.b = 0.0;
        v91.fields.a = 1.0;
        v86 = ColorHelper__ParseColorCode_44837332(CondLabelColor, v91, 0);
        CondSpriteColor = ServantTreasureDeviceAddEntity__GetCondSpriteColor(EnableEntity, 0);
        v92.fields.r = 1.0;
        v92.fields.g = 1.0;
        v92.fields.b = 1.0;
        v92.fields.a = 1.0;
        v87 = ColorHelper__ParseColorCode_44837332(CondSpriteColor, v92, 0);
        if ( !v56 )
          goto LABEL_135;
        ServantStatusNpComponent__SetCondColor(v56, v86, v87, 0);
        v59 = this->fields.npList;
        if ( !v59 )
          goto LABEL_135;
        if ( i >= LODWORD(v59->max_length) )
          goto LABEL_136;
        v54 = (struct ServantStatusNpComponent_array *)((char *)v59 + 8 * i);
        goto LABEL_84;
      }
    }
    v52 = this->fields.npList;
    if ( !v52 )
      goto LABEL_135;
    if ( i >= LODWORD(v52->max_length) )
      goto LABEL_136;
    transformNameLabel = v52->m_Items[i];
    if ( !transformNameLabel )
      goto LABEL_135;
    transformNameLabel = (ServantStatusNpComponent_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)transformNameLabel,
                                                         0);
    if ( !transformNameLabel )
      goto LABEL_135;
    if ( i )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transformNameLabel, 0, 0);
      continue;
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transformNameLabel, 1, 0);
    v53 = this->fields.npList;
    if ( !v53 )
      goto LABEL_135;
    if ( !LODWORD(v53->max_length) )
      goto LABEL_136;
    if ( !*p_tdInfo )
      goto LABEL_135;
    transformNameLabel = v53->m_Items[0];
    if ( !transformNameLabel )
      goto LABEL_135;
    ServantStatusNpComponent__Set(
      transformNameLabel,
      0,
      *p_tdInfo,
      item,
      (*p_tdInfo)->fields.id,
      0,
      0,
      (System_String_o *)StringLiteral_1/*""*/,
      (System_String_o *)StringLiteral_1/*""*/,
      0,
      -1,
      1,
      0);
    v54 = this->fields.npList;
    if ( !v54 )
      goto LABEL_135;
    if ( !LODWORD(v54->max_length) )
      goto LABEL_136;
LABEL_84:
    v60 = v54->m_Items[0];
    if ( !v60 )
      goto LABEL_135;
    transformNameAddHeight += this->fields.npPitch + v60->fields._Adjust_k__BackingField;
  }
  if ( transformNameAddHeight >= 0 )
    v61 = transformNameAddHeight;
  else
    v61 = transformNameAddHeight + 1;
  v62 = transformNameAddHeight - (v61 & 0xFFFFFFFE) + transformNameAddHeight;
  if ( item->fields._IsDisplayCombineButton_k__BackingField )
  {
    userSvtEntity = item->fields.userSvtEntity;
    if ( userSvtEntity )
    {
      transformNameLabel = (ServantStatusNpComponent_o *)UserServantEntity__IsHeroine(userSvtEntity, 0);
      if ( ((unsigned __int8)transformNameLabel & 1) == 0 )
      {
        if ( *p_tdInfo )
        {
          if ( (*p_tdInfo)->fields.lv >= (*p_tdInfo)->fields.maxLv )
            goto LABEL_101;
          transformNameLabel = (ServantStatusNpComponent_o *)this->fields.reinforceObject;
          if ( transformNameLabel )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transformNameLabel, 1, 0);
            transformNameLabel = (ServantStatusNpComponent_o *)this->fields.reinforceButton;
            if ( transformNameLabel )
            {
              BYTE1(transformNameLabel->fields.commandCardBase) = 1;
              v62 += 58;
              UICommonButton__SetEnable(
                (UICommonButton_o *)transformNameLabel,
                item->fields._CanMoveCombine_k__BackingField,
                0);
              if ( v62 >= 0 )
                v64 = v62;
              else
                v64 = v62 + 1;
              GameObjectExtensions__SetLocalPositionY(this->fields.reinforceObject, (float)-(v64 >> 1), 0);
              goto LABEL_101;
            }
          }
        }
        goto LABEL_135;
      }
    }
  }
LABEL_101:
  x = this->fields.baseSize.fields.x;
  y = this->fields.baseSize.fields.y;
  z = this->fields.baseSize.fields.z;
  baseCollider = (UnityEngine_Object_o *)this->fields.baseCollider;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v69 = y + (float)v62;
  if ( UnityEngine_Object__op_Inequality(baseCollider, 0, 0) )
  {
    transformNameLabel = (ServantStatusNpComponent_o *)this->fields.baseCollider;
    if ( !transformNameLabel )
      goto LABEL_135;
    v88.fields.x = x;
    v88.fields.y = v69;
    v88.fields.z = z;
    UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)transformNameLabel, v88, 0);
  }
  transformNameLabel = (ServantStatusNpComponent_o *)this->fields.baseSprite;
  if ( !transformNameLabel )
    goto LABEL_135;
  v70 = x == INFINITY ? 0x80000000 : (int)x;
  UIWidget__set_width((UIWidget_o *)transformNameLabel, v70, 0);
  transformNameLabel = (ServantStatusNpComponent_o *)this->fields.baseSprite;
  if ( !transformNameLabel )
    goto LABEL_135;
  v71 = v69 == INFINITY ? 0x80000000 : (int)v69;
  UIWidget__set_height((UIWidget_o *)transformNameLabel, v71, 0);
  transformNameLabel = (ServantStatusNpComponent_o *)this->fields.titleObject;
  v72 = v62 + (v62 < 0);
  if ( !transformNameLabel
    || (v73 = this->fields.titleBasePosition.fields.x,
        v74 = this->fields.titleBasePosition.fields.y,
        v75 = this->fields.titleBasePosition.fields.z,
        (transformNameLabel = (ServantStatusNpComponent_o *)UnityEngine_GameObject__get_transform(
                                                              (UnityEngine_GameObject_o *)transformNameLabel,
                                                              0)) == 0) )
  {
LABEL_135:
    sub_1C93D2C(transformNameLabel, v20);
  }
  v76 = v72 >> 1;
  v89.fields.y = v74 + (float)(v72 >> 1);
  v89.fields.x = v73;
  v89.fields.z = v75;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transformNameLabel, v89, 0);
  v77 = this->fields.npBasePosition.fields.x;
  v78 = this->fields.npBasePosition.fields.z;
  v79 = 0;
  for ( j = this->fields.npBasePosition.fields.y + (float)(v76 + v85);
        ;
        j = (float)(j - (float)this->fields.npPitch) - (float)v83->fields._Adjust_k__BackingField )
  {
    transformNameLabel = (ServantStatusNpComponent_o *)ServantStatusListViewItemDrawNp_TypeInfo;
    if ( !ServantStatusListViewItemDrawNp_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawNp_TypeInfo);
      transformNameLabel = (ServantStatusNpComponent_o *)ServantStatusListViewItemDrawNp_TypeInfo;
    }
    if ( (signed int)v79 >= (__int64)transformNameLabel->fields.commandCardComponent->klass )
      break;
    v81 = this->fields.npList;
    if ( !v81 )
      goto LABEL_135;
    if ( v79 >= LODWORD(v81->max_length) )
      goto LABEL_136;
    transformNameLabel = v81->m_Items[v79];
    if ( !transformNameLabel )
      goto LABEL_135;
    transformNameLabel = (ServantStatusNpComponent_o *)UnityEngine_Component__get_transform(
                                                         (UnityEngine_Component_o *)transformNameLabel,
                                                         0);
    if ( !transformNameLabel )
      goto LABEL_135;
    v90.fields.x = v77;
    v90.fields.y = j;
    v90.fields.z = v78;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transformNameLabel, v90, 0);
    v82 = this->fields.npList;
    if ( !v82 )
      goto LABEL_135;
    if ( v79 >= LODWORD(v82->max_length) )
      goto LABEL_136;
    v83 = v82->m_Items[v79];
    if ( !v83 )
      goto LABEL_135;
    ++v79;
  }
  if ( this->fields.isStart && this->fields.dispLimitCnt != v84 )
  {
    ((void (__fastcall *)(ServantStatusListViewItemDrawNp_o *, ServantStatusListViewItem_o *, const MethodInfo *))this->klass->vtable._7_ModifyCommandCard.methodPtr)(
      this,
      item,
      this->klass->vtable._7_ModifyCommandCard.method);
    this->fields.dispLimitCnt = v84;
  }
}