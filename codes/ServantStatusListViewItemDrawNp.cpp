void ServantStatusListViewItemDrawNp___cctor(const MethodInfo *method)
{
  if ( (byte_4CB2E79 & 1) == 0 )
  {
    sub_1C6BA08(&ServantStatusListViewItemDrawNp_TypeInfo);
    byte_4CB2E79 = 1;
  }
  ServantStatusListViewItemDrawNp_TypeInfo->static_fields->NP_LIST_MAX = 2;
}


void ServantStatusListViewItemDrawNp___ctor(ServantStatusListViewItemDrawNp_o *this, const MethodInfo *method)
{
  ServantStatusListViewItemDrawNp_c *v3; // x0
  struct ServantStatusNpComponent_array *v4; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4CB2E78 & 1) == 0 )
  {
    sub_1C6BA08(&ServantStatusListViewItemDrawNp_TypeInfo);
    sub_1C6BA08(&ServantStatusNpComponent___TypeInfo);
    byte_4CB2E78 = 1;
  }
  v3 = ServantStatusListViewItemDrawNp_TypeInfo;
  if ( !ServantStatusListViewItemDrawNp_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawNp_TypeInfo);
    v3 = ServantStatusListViewItemDrawNp_TypeInfo;
  }
  v4 = (struct ServantStatusNpComponent_array *)sub_1C6BAB0(
                                                  ServantStatusNpComponent___TypeInfo,
                                                  v3->static_fields->NP_LIST_MAX);
  this->fields.npList = v4;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.npList, (int32_t)v4, v5, v6);
  this->fields.transformNameAddHeight = 42;
  this->fields.dispLimitCnt = -1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ServantStatusListViewItemDrawNp__Awake(ServantStatusListViewItemDrawNp_o *this, const MethodInfo *method)
{
  struct ServantStatusNpComponent_array *npList; // x8
  ServantStatusListViewItemDrawNp_o *v3; // x19
  struct ServantStatusNpComponent_array *v4; // x8
  float y; // s8
  unsigned int v6; // w9
  struct UISprite_o *baseSprite; // x9
  int v8; // w20
  float v9; // s1
  struct ServantStatusNpComponent_array *v10; // x8
  int v11; // w9
  float v12; // s8
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v14; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v15; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v16; // 0:s0.4,4:s1.4,8:s2.4

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
    localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
    v4 = v3->fields.npList;
    if ( !v4 )
      goto LABEL_24;
    if ( LODWORD(v4->max_length) <= 1 )
      goto LABEL_25;
    this = (ServantStatusListViewItemDrawNp_o *)v4->m_Items[1];
    if ( !this )
      goto LABEL_24;
    y = localPosition.fields.y;
    this = (ServantStatusListViewItemDrawNp_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( !this )
      goto LABEL_24;
    v14 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
    npList = v3->fields.npList;
    v6 = (float)(y - v14.fields.y) == INFINITY ? 0x80000000 : (int)(float)(y - v14.fields.y);
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
  v15 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
  v10 = v3->fields.npList;
  v11 = v8 >= 0 ? v8 : v8 + 1;
  v12 = (float)(v11 >> 1);
  v3->fields.titleBasePosition.fields.x = v15.fields.x;
  v3->fields.titleBasePosition.fields.y = v15.fields.y - v12;
  v3->fields.titleBasePosition.fields.z = v15.fields.z;
  if ( !v10 )
LABEL_24:
    sub_1C6BC60(this, method);
  if ( !LODWORD(v10->max_length) )
LABEL_25:
    sub_1C6BC68(this);
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

  if ( (byte_4CB2E77 & 1) == 0 )
  {
    sub_1C6BA08(&ServantStatusListViewItemDrawNp_TypeInfo);
    byte_4CB2E77 = 1;
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
      sub_1C6BC68(v6);
    v6 = (ServantStatusListViewItemDrawNp_c *)npList->m_Items[v5];
    if ( !v6 )
LABEL_12:
      sub_1C6BC60(v6, item);
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
  const MethodInfo *v10; // x3
  int32_t ConvertOverwriteDispImageLimitCount; // w27
  __int64 v12; // x1
  int32_t LimitCount; // w23
  long double v14; // q0
  __int64 v15; // x8
  __int64 v16; // x0
  ServantStatusNpComponent_o *SvtId; // x0
  Il2CppObject *MasterData_object; // x0
  ServantTreasureDeviceAddEntity_o *EnableEntity; // x23
  Il2CppObject *v20; // x24
  Il2CppObject *Master_object; // x25
  int32_t v22; // w0
  int32_t ServantLimitCountSealAfter; // w23
  int32_t LimitCountByDispLimit; // w25
  int32_t v25; // w26
  int32_t v26; // w5
  ServantTreasureDeviceAddMaster_o *v27; // x0
  int32_t v28; // w1
  int32_t v29; // w2
  int32_t v30; // w3
  int32_t id; // w4
  int32_t v32; // w25
  int IsTransformServant_k__BackingField; // w21
  UILabel_o *transformNameLabel; // x24
  System_Int32_array *DispMaskTreasureDevices; // x24
  System_Int32_array *FixedCardLimitCounts; // x25
  unsigned __int64 i; // x26
  struct System_Int32_array *treasureDeviceIds; // x8
  struct ServantStatusNpComponent_array *npList; // x8
  struct ServantStatusNpComponent_array *v40; // x8
  struct System_Int32_array *v41; // x9
  struct System_String_array *titles; // x10
  struct System_String_array *closedMessages; // x11
  struct System_Int32_array *hideCardChara; // x12
  System_String_o *v45; // x7
  System_String_o *closedMessage; // x8
  int32_t dispMaskTreasureDevice; // w10
  int32_t fixedCardLimitCount; // w11
  struct ServantStatusNpComponent_array *v49; // x8
  struct ServantStatusNpComponent_array *v50; // x8
  struct ServantStatusNpComponent_array *v51; // x8
  struct ServantStatusNpComponent_array *v52; // x8
  ServantStatusNpComponent_o *v53; // x27
  float r; // s8
  float g; // s9
  float b; // s10
  float a; // s11
  struct ServantStatusNpComponent_array *v58; // x8
  ServantStatusNpComponent_o *v59; // x8
  int v60; // w9
  int v61; // w21
  UserServantEntity_o *userSvtEntity; // x0
  int v63; // w8
  float y; // s8
  float x; // s9
  float z; // s10
  UnityEngine_Object_o *baseCollider; // x22
  float v68; // s8
  int32_t v69; // w1
  int32_t v70; // w1
  int v71; // w21
  float v72; // s8
  float v73; // s10
  float v74; // s9
  int v75; // w22
  float v76; // s8
  float v77; // s9
  unsigned int v78; // w21
  float j; // s10
  struct ServantStatusNpComponent_array *v80; // x8
  struct ServantStatusNpComponent_array *v81; // x8
  ServantStatusNpComponent_o *v82; // x8
  int32_t v83; // [xsp+30h] [xbp-90h]
  int v84; // [xsp+34h] [xbp-8Ch]
  UnityEngine_Vector3_o v85; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v86; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v87; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v88; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o CondLabelColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o CondSpriteColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v91; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v92; // 0:s4.4,4:s5.4,8:s6.4,12:s7.4

  if ( (byte_4CB2E76 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_ServantTreasureDeviceAddMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&ImageLimitCount_TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&ServantStatusListViewItemDrawNp_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1C6BA08(&TreasureDvcInfo_TypeInfo);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CB2E76 = 1;
  }
  this->fields.dispMode = mode;
  v7 = (TreasureDvcInfo_o *)sub_1C6BC54(TreasureDvcInfo_TypeInfo);
  TreasureDvcInfo___ctor(v7, 0);
  this->fields.tdInfo = v7;
  p_tdInfo = &this->fields.tdInfo;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.tdInfo, (int32_t)v7, v9, v10);
  if ( !item || !mode )
    return;
  ConvertOverwriteDispImageLimitCount = ServantStatusListViewItem__get_ConvertOverwriteDispImageLimitCount(item, 0);
  LimitCount = ServantStatusListViewItem__get_LimitCount(item, 0);
  v15 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v15 + 309) & 1) == 0 )
    v15 = sub_1C41A9C(v14);
  v16 = *(_QWORD *)(*(_QWORD *)(v15 + 192) + 16LL);
  if ( (*(_BYTE *)(v16 + 309) & 1) == 0 )
    v16 = sub_1C41A9C(v14);
  SvtId = **(ServantStatusNpComponent_o ***)(v16 + 184);
  if ( !SvtId )
    goto LABEL_131;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)SvtId,
                        (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ServantTreasureDeviceAddMaster___);
  if ( item->fields._IsTransformed_k__BackingField )
  {
    ServantStatusListViewItem__GetTransformedNpInfo(item, &this->fields.tdInfo, 0);
    EnableEntity = 0;
  }
  else
  {
    v20 = MasterData_object;
    if ( ServantStatusListViewItem__get_IsMine(item, 0) )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
      SvtId = (ServantStatusNpComponent_o *)ServantStatusListViewItem__get_SvtId(item, 0);
      if ( !Master_object )
        goto LABEL_131;
      ConvertOverwriteDispImageLimitCount = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                              (ServantLimitImageMaster_o *)Master_object,
                                              (int32_t)SvtId,
                                              ConvertOverwriteDispImageLimitCount,
                                              0);
      ServantStatusListViewItem__GetNpInfo_35612792(item, &this->fields.tdInfo, ConvertOverwriteDispImageLimitCount, 0);
      v22 = ServantStatusListViewItem__get_SvtId(item, 0);
      ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                     (ServantLimitImageMaster_o *)Master_object,
                                     v22,
                                     LimitCount,
                                     0);
      if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      LimitCountByDispLimit = ImageLimitCount__GetLimitCountByDispLimit(
                                ConvertOverwriteDispImageLimitCount,
                                ServantLimitCountSealAfter,
                                0);
      v25 = ServantStatusListViewItem__get_SvtId(item, 0);
      SvtId = (ServantStatusNpComponent_o *)ServantStatusListViewItem__get_LimitCount(item, 0);
      if ( !v20 )
        goto LABEL_131;
      v26 = (int)SvtId;
      v27 = (ServantTreasureDeviceAddMaster_o *)v20;
      v28 = v25;
      v29 = ServantLimitCountSealAfter;
      v30 = LimitCountByDispLimit;
      id = 0;
    }
    else
    {
      ServantStatusListViewItem__GetNpInfo(item, &this->fields.tdInfo, 0);
      if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      v32 = ImageLimitCount__GetLimitCountByDispLimit(ConvertOverwriteDispImageLimitCount, LimitCount, 0);
      SvtId = (ServantStatusNpComponent_o *)ServantStatusListViewItem__get_SvtId(item, 0);
      if ( !*p_tdInfo || !v20 )
        goto LABEL_131;
      id = (*p_tdInfo)->fields.id;
      v28 = (int)SvtId;
      v27 = (ServantTreasureDeviceAddMaster_o *)v20;
      v29 = LimitCount;
      v30 = v32;
      v26 = 0;
    }
    EnableEntity = ServantTreasureDeviceAddMaster__GetEnableEntity(v27, v28, v29, v30, id, v26, 0);
  }
  SvtId = (ServantStatusNpComponent_o *)this->fields.transformNameSprite;
  if ( !SvtId )
    goto LABEL_131;
  IsTransformServant_k__BackingField = item->fields._IsTransformServant_k__BackingField;
  SvtId = (ServantStatusNpComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)SvtId, 0);
  if ( !SvtId )
    goto LABEL_131;
  if ( IsTransformServant_k__BackingField )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SvtId, 1, 0);
    transformNameLabel = this->fields.transformNameLabel;
    SvtId = (ServantStatusNpComponent_o *)ServantStatusListViewItem__GetTransformName(item, 0);
    if ( !transformNameLabel )
      goto LABEL_131;
    UILabel__set_text(transformNameLabel, (System_String_o *)SvtId, 0);
    IsTransformServant_k__BackingField = this->fields.transformNameAddHeight;
    v84 = -IsTransformServant_k__BackingField;
  }
  else
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SvtId, 0, 0);
    v84 = 0;
  }
  v83 = ConvertOverwriteDispImageLimitCount;
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
    SvtId = (ServantStatusNpComponent_o *)ServantStatusListViewItemDrawNp_TypeInfo;
    if ( !ServantStatusListViewItemDrawNp_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawNp_TypeInfo);
      SvtId = (ServantStatusNpComponent_o *)ServantStatusListViewItemDrawNp_TypeInfo;
    }
    if ( (__int64)i >= (__int64)SvtId->fields.commandCardComponent->klass )
      break;
    if ( EnableEntity )
    {
      treasureDeviceIds = EnableEntity->fields.treasureDeviceIds;
      if ( !treasureDeviceIds )
        goto LABEL_131;
      if ( (__int64)i < SLODWORD(treasureDeviceIds->max_length) )
      {
        npList = this->fields.npList;
        if ( !npList )
          goto LABEL_131;
        if ( i >= LODWORD(npList->max_length) )
          goto LABEL_132;
        SvtId = npList->m_Items[i];
        if ( !SvtId )
          goto LABEL_131;
        SvtId = (ServantStatusNpComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)SvtId, 0);
        if ( !SvtId )
          goto LABEL_131;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SvtId, 1, 0);
        v40 = this->fields.npList;
        if ( !v40 )
          goto LABEL_131;
        if ( i >= LODWORD(v40->max_length) )
          goto LABEL_132;
        v41 = EnableEntity->fields.treasureDeviceIds;
        if ( !v41 )
          goto LABEL_131;
        if ( i >= LODWORD(v41->max_length) )
          goto LABEL_132;
        titles = EnableEntity->fields.titles;
        if ( !titles )
          goto LABEL_131;
        if ( i >= LODWORD(titles->max_length) )
          goto LABEL_132;
        closedMessages = EnableEntity->fields.closedMessages;
        if ( !closedMessages )
          goto LABEL_131;
        if ( i >= LODWORD(closedMessages->max_length) )
          goto LABEL_132;
        hideCardChara = EnableEntity->fields.hideCardChara;
        if ( !hideCardChara )
          goto LABEL_131;
        if ( i >= LODWORD(hideCardChara->max_length) )
          goto LABEL_132;
        SvtId = v40->m_Items[i];
        v45 = titles->m_Items[i];
        closedMessage = closedMessages->m_Items[i];
        if ( DispMaskTreasureDevices )
        {
          if ( i >= LODWORD(DispMaskTreasureDevices->max_length) )
            goto LABEL_132;
          dispMaskTreasureDevice = DispMaskTreasureDevices->m_Items[i];
          if ( FixedCardLimitCounts )
            goto LABEL_59;
LABEL_76:
          fixedCardLimitCount = 1;
          if ( !SvtId )
            goto LABEL_131;
        }
        else
        {
          dispMaskTreasureDevice = -1;
          if ( !FixedCardLimitCounts )
            goto LABEL_76;
LABEL_59:
          if ( i >= LODWORD(FixedCardLimitCounts->max_length) )
            goto LABEL_132;
          fixedCardLimitCount = FixedCardLimitCounts->m_Items[i];
          if ( !SvtId )
            goto LABEL_131;
        }
        ServantStatusNpComponent__Set(
          SvtId,
          i,
          *p_tdInfo,
          item,
          v41->m_Items[i],
          1,
          EnableEntity->fields.condLimitCount,
          v45,
          closedMessage,
          hideCardChara->m_Items[i],
          dispMaskTreasureDevice,
          fixedCardLimitCount,
          0);
        v52 = this->fields.npList;
        if ( !v52 )
          goto LABEL_131;
        if ( i >= LODWORD(v52->max_length) )
LABEL_132:
          sub_1C6BC68(SvtId);
        v53 = v52->m_Items[i];
        v88.fields.r = 0.0;
        v88.fields.g = 0.0;
        v88.fields.b = 0.0;
        v88.fields.a = 1.0;
        CondLabelColor = ServantTreasureDeviceAddEntity__GetCondLabelColor(EnableEntity, v88, 0);
        r = CondLabelColor.fields.r;
        g = CondLabelColor.fields.g;
        b = CondLabelColor.fields.b;
        a = CondLabelColor.fields.a;
        CondLabelColor.fields.r = 1.0;
        CondLabelColor.fields.g = 1.0;
        CondLabelColor.fields.b = 1.0;
        CondLabelColor.fields.a = 1.0;
        CondSpriteColor = ServantTreasureDeviceAddEntity__GetCondSpriteColor(EnableEntity, CondLabelColor, 0);
        if ( !v53 )
          goto LABEL_131;
        v92 = CondSpriteColor;
        v91.fields.r = r;
        v91.fields.g = g;
        v91.fields.b = b;
        v91.fields.a = a;
        ServantStatusNpComponent__SetCondColor(v53, v91, v92, 0);
        v58 = this->fields.npList;
        if ( !v58 )
          goto LABEL_131;
        if ( i >= LODWORD(v58->max_length) )
          goto LABEL_132;
        v51 = (struct ServantStatusNpComponent_array *)((char *)v58 + 8 * i);
        goto LABEL_83;
      }
    }
    v49 = this->fields.npList;
    if ( !v49 )
      goto LABEL_131;
    if ( i >= LODWORD(v49->max_length) )
      goto LABEL_132;
    SvtId = v49->m_Items[i];
    if ( !SvtId )
      goto LABEL_131;
    SvtId = (ServantStatusNpComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)SvtId, 0);
    if ( !SvtId )
      goto LABEL_131;
    if ( i )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SvtId, 0, 0);
      continue;
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SvtId, 1, 0);
    v50 = this->fields.npList;
    if ( !v50 )
      goto LABEL_131;
    if ( !LODWORD(v50->max_length) )
      goto LABEL_132;
    if ( !*p_tdInfo )
      goto LABEL_131;
    SvtId = v50->m_Items[0];
    if ( !SvtId )
      goto LABEL_131;
    ServantStatusNpComponent__Set(
      SvtId,
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
    v51 = this->fields.npList;
    if ( !v51 )
      goto LABEL_131;
    if ( !LODWORD(v51->max_length) )
      goto LABEL_132;
LABEL_83:
    v59 = v51->m_Items[0];
    if ( !v59 )
      goto LABEL_131;
    IsTransformServant_k__BackingField += this->fields.npPitch + v59->fields._Adjust_k__BackingField;
  }
  if ( IsTransformServant_k__BackingField >= 0 )
    v60 = IsTransformServant_k__BackingField;
  else
    v60 = IsTransformServant_k__BackingField + 1;
  v61 = IsTransformServant_k__BackingField - (v60 & 0xFFFFFFFE) + IsTransformServant_k__BackingField;
  if ( item->fields._IsDisplayCombineButton_k__BackingField )
  {
    userSvtEntity = item->fields.userSvtEntity;
    if ( userSvtEntity )
    {
      SvtId = (ServantStatusNpComponent_o *)UserServantEntity__IsHeroine(userSvtEntity, 0);
      if ( ((unsigned __int8)SvtId & 1) == 0 )
      {
        if ( *p_tdInfo )
        {
          if ( (*p_tdInfo)->fields.lv >= (*p_tdInfo)->fields.maxLv )
            goto LABEL_100;
          SvtId = (ServantStatusNpComponent_o *)this->fields.reinforceObject;
          if ( SvtId )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SvtId, 1, 0);
            SvtId = (ServantStatusNpComponent_o *)this->fields.reinforceButton;
            if ( SvtId )
            {
              BYTE1(SvtId->fields.commandCardBase) = 1;
              v61 += 58;
              UICommonButton__SetEnable((UICommonButton_o *)SvtId, item->fields._CanMoveCombine_k__BackingField, 0);
              if ( v61 >= 0 )
                v63 = v61;
              else
                v63 = v61 + 1;
              GameObjectExtensions__SetLocalPositionY(this->fields.reinforceObject, (float)-(v63 >> 1), 0);
              goto LABEL_100;
            }
          }
        }
        goto LABEL_131;
      }
    }
  }
LABEL_100:
  x = this->fields.baseSize.fields.x;
  y = this->fields.baseSize.fields.y;
  z = this->fields.baseSize.fields.z;
  baseCollider = (UnityEngine_Object_o *)this->fields.baseCollider;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v68 = y + (float)v61;
  if ( UnityEngine_Object__op_Inequality(baseCollider, 0, 0) )
  {
    SvtId = (ServantStatusNpComponent_o *)this->fields.baseCollider;
    if ( !SvtId )
      goto LABEL_131;
    v85.fields.x = x;
    v85.fields.y = v68;
    v85.fields.z = z;
    UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)SvtId, v85, 0);
  }
  SvtId = (ServantStatusNpComponent_o *)this->fields.baseSprite;
  if ( !SvtId )
    goto LABEL_131;
  v69 = x == INFINITY ? 0x80000000 : (int)x;
  UIWidget__set_width((UIWidget_o *)SvtId, v69, 0);
  SvtId = (ServantStatusNpComponent_o *)this->fields.baseSprite;
  if ( !SvtId )
    goto LABEL_131;
  v70 = v68 == INFINITY ? 0x80000000 : (int)v68;
  UIWidget__set_height((UIWidget_o *)SvtId, v70, 0);
  SvtId = (ServantStatusNpComponent_o *)this->fields.titleObject;
  v71 = v61 + (v61 < 0);
  if ( !SvtId
    || (v72 = this->fields.titleBasePosition.fields.x,
        v73 = this->fields.titleBasePosition.fields.y,
        v74 = this->fields.titleBasePosition.fields.z,
        (SvtId = (ServantStatusNpComponent_o *)UnityEngine_GameObject__get_transform(
                                                 (UnityEngine_GameObject_o *)SvtId,
                                                 0)) == 0) )
  {
LABEL_131:
    sub_1C6BC60(SvtId, v12);
  }
  v75 = v71 >> 1;
  v86.fields.y = v73 + (float)(v71 >> 1);
  v86.fields.x = v72;
  v86.fields.z = v74;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)SvtId, v86, 0);
  v76 = this->fields.npBasePosition.fields.x;
  v77 = this->fields.npBasePosition.fields.z;
  v78 = 0;
  for ( j = this->fields.npBasePosition.fields.y + (float)(v75 + v84);
        ;
        j = (float)(j - (float)this->fields.npPitch) - (float)v82->fields._Adjust_k__BackingField )
  {
    SvtId = (ServantStatusNpComponent_o *)ServantStatusListViewItemDrawNp_TypeInfo;
    if ( !ServantStatusListViewItemDrawNp_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawNp_TypeInfo);
      SvtId = (ServantStatusNpComponent_o *)ServantStatusListViewItemDrawNp_TypeInfo;
    }
    if ( (signed int)v78 >= (__int64)SvtId->fields.commandCardComponent->klass )
      break;
    v80 = this->fields.npList;
    if ( !v80 )
      goto LABEL_131;
    if ( v78 >= LODWORD(v80->max_length) )
      goto LABEL_132;
    SvtId = v80->m_Items[v78];
    if ( !SvtId )
      goto LABEL_131;
    SvtId = (ServantStatusNpComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)SvtId, 0);
    if ( !SvtId )
      goto LABEL_131;
    v87.fields.x = v76;
    v87.fields.y = j;
    v87.fields.z = v77;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)SvtId, v87, 0);
    v81 = this->fields.npList;
    if ( !v81 )
      goto LABEL_131;
    if ( v78 >= LODWORD(v81->max_length) )
      goto LABEL_132;
    v82 = v81->m_Items[v78];
    if ( !v82 )
      goto LABEL_131;
    ++v78;
  }
  if ( this->fields.isStart && this->fields.dispLimitCnt != v83 )
  {
    ((void (__fastcall *)(ServantStatusListViewItemDrawNp_o *, ServantStatusListViewItem_o *, const MethodInfo *))this->klass->vtable._7_ModifyCommandCard.methodPtr)(
      this,
      item,
      this->klass->vtable._7_ModifyCommandCard.method);
    this->fields.dispLimitCnt = v83;
  }
}