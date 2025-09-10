void ServantStatusListViewItemDrawNp___cctor(const MethodInfo *method)
{
  if ( (byte_4C23FDE & 1) == 0 )
  {
    sub_1C2D490(&ServantStatusListViewItemDrawNp_TypeInfo);
    byte_4C23FDE = 1;
  }
  ServantStatusListViewItemDrawNp_TypeInfo->static_fields->NP_LIST_MAX = 2;
}


void ServantStatusListViewItemDrawNp___ctor(ServantStatusListViewItemDrawNp_o *this, const MethodInfo *method)
{
  ServantStatusListViewItemDrawNp_c *v3; // x0
  struct ServantStatusNpComponent_array *v4; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4C23FDD & 1) == 0 )
  {
    sub_1C2D490(&ServantStatusListViewItemDrawNp_TypeInfo);
    sub_1C2D490(&ServantStatusNpComponent___TypeInfo);
    byte_4C23FDD = 1;
  }
  v3 = ServantStatusListViewItemDrawNp_TypeInfo;
  if ( !ServantStatusListViewItemDrawNp_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawNp_TypeInfo);
    v3 = ServantStatusListViewItemDrawNp_TypeInfo;
  }
  v4 = (struct ServantStatusNpComponent_array *)sub_1C2D538(
                                                  ServantStatusNpComponent___TypeInfo,
                                                  v3->static_fields->NP_LIST_MAX);
  this->fields.npList = v4;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.npList, (int32_t)v4, v5, v6);
  this->fields.transformNameAddHeight = 42;
  this->fields.dispLimitCnt = -1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ServantStatusListViewItemDrawNp__Awake(ServantStatusListViewItemDrawNp_o *this, const MethodInfo *method)
{
  struct ServantStatusNpComponent_array *npList; // x8
  ServantStatusListViewItemDrawNp_o *v3; // x19
  __int64 v4; // x2
  struct ServantStatusNpComponent_array *v5; // x8
  float y; // s8
  unsigned int v7; // w9
  struct UISprite_o *baseSprite; // x9
  int v9; // w20
  float v10; // s1
  struct ServantStatusNpComponent_array *v11; // x8
  int v12; // w9
  float v13; // s8
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v15; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v16; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v17; // 0:s0.4,4:s1.4,8:s2.4

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
    v5 = v3->fields.npList;
    if ( !v5 )
      goto LABEL_24;
    if ( LODWORD(v5->max_length) <= 1 )
      goto LABEL_25;
    this = (ServantStatusListViewItemDrawNp_o *)v5->m_Items[1];
    if ( !this )
      goto LABEL_24;
    y = localPosition.fields.y;
    this = (ServantStatusListViewItemDrawNp_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( !this )
      goto LABEL_24;
    v15 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
    npList = v3->fields.npList;
    v7 = (float)(y - v15.fields.y) == INFINITY ? 0x80000000 : (int)(float)(y - v15.fields.y);
    v3->fields.npPitch = v7;
    if ( !npList )
      goto LABEL_24;
  }
  baseSprite = v3->fields.baseSprite;
  if ( !baseSprite )
    goto LABEL_24;
  this = (ServantStatusListViewItemDrawNp_o *)v3->fields.titleObject;
  v9 = v3->fields.npPitch * LODWORD(npList->max_length);
  v10 = (float)(baseSprite->fields.mHeight - v9);
  v3->fields.baseSize.fields.x = (float)baseSprite->fields.mWidth;
  v3->fields.baseSize.fields.y = v10;
  v3->fields.baseSize.fields.z = 0.0;
  if ( !this )
    goto LABEL_24;
  this = (ServantStatusListViewItemDrawNp_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
  if ( !this )
    goto LABEL_24;
  v16 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
  v11 = v3->fields.npList;
  v12 = v9 >= 0 ? v9 : v9 + 1;
  v13 = (float)(v12 >> 1);
  v3->fields.titleBasePosition.fields.x = v16.fields.x;
  v3->fields.titleBasePosition.fields.y = v16.fields.y - v13;
  v3->fields.titleBasePosition.fields.z = v16.fields.z;
  if ( !v11 )
LABEL_24:
    sub_1C2D6EC(this, method);
  if ( !LODWORD(v11->max_length) )
LABEL_25:
    sub_1C2D6F4(this, method, v4);
  this = (ServantStatusListViewItemDrawNp_o *)v11->m_Items[0];
  if ( !this )
    goto LABEL_24;
  this = (ServantStatusListViewItemDrawNp_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_24;
  v17 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
  v3->fields.npBasePosition.fields.x = v17.fields.x;
  v3->fields.npBasePosition.fields.y = v17.fields.y - v13;
  v3->fields.npBasePosition.fields.z = v17.fields.z;
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

  if ( (byte_4C23FDC & 1) == 0 )
  {
    sub_1C2D490(&ServantStatusListViewItemDrawNp_TypeInfo);
    byte_4C23FDC = 1;
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
      sub_1C2D6F4(v6, item, method);
    v6 = (ServantStatusListViewItemDrawNp_c *)npList->m_Items[v5];
    if ( !v6 )
LABEL_12:
      sub_1C2D6EC(v6, item);
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
  TreasureDvcInfo_o *v35; // x2
  System_Int32_array *DispMaskTreasureDevices; // x24
  System_Int32_array *FixedCardLimitCounts; // x25
  unsigned __int64 i; // x26
  struct System_Int32_array *treasureDeviceIds; // x8
  struct ServantStatusNpComponent_array *npList; // x8
  struct ServantStatusNpComponent_array *v41; // x8
  struct System_Int32_array *v42; // x9
  struct System_String_array *titles; // x10
  struct System_String_array *closedMessages; // x11
  struct System_Int32_array *hideCardChara; // x12
  System_String_o *v46; // x7
  System_String_o *closedMessage; // x8
  int32_t dispMaskTreasureDevice; // w10
  int32_t fixedCardLimitCount; // w11
  struct ServantStatusNpComponent_array *v50; // x8
  struct ServantStatusNpComponent_array *v51; // x8
  struct ServantStatusNpComponent_array *v52; // x8
  struct ServantStatusNpComponent_array *v53; // x8
  ServantStatusNpComponent_o *v54; // x27
  float r; // s8
  float g; // s9
  float b; // s10
  float a; // s11
  struct ServantStatusNpComponent_array *v59; // x8
  ServantStatusNpComponent_o *v60; // x8
  int v61; // w9
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
  UnityEngine_Vector3_o v86; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v87; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v88; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v89; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o CondLabelColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o CondSpriteColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v92; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v93; // 0:s4.4,4:s5.4,8:s6.4,12:s7.4

  if ( (byte_4C23FDB & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantTreasureDeviceAddMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&ImageLimitCount_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&ServantStatusListViewItemDrawNp_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1C2D490(&TreasureDvcInfo_TypeInfo);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C23FDB = 1;
  }
  this->fields.dispMode = mode;
  v7 = (TreasureDvcInfo_o *)sub_1C2D6DC(TreasureDvcInfo_TypeInfo);
  TreasureDvcInfo___ctor(v7, 0);
  this->fields.tdInfo = v7;
  p_tdInfo = &this->fields.tdInfo;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.tdInfo, (int32_t)v7, v9, v10);
  if ( !item || !mode )
    return;
  ConvertOverwriteDispImageLimitCount = ServantStatusListViewItem__get_ConvertOverwriteDispImageLimitCount(item, 0);
  LimitCount = ServantStatusListViewItem__get_LimitCount(item, 0);
  v15 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v15 + 309) & 1) == 0 )
    v15 = sub_1C7DBA4(v14);
  v16 = *(_QWORD *)(*(_QWORD *)(v15 + 192) + 16LL);
  if ( (*(_BYTE *)(v16 + 309) & 1) == 0 )
    v16 = sub_1C7DBA4(v14);
  SvtId = **(ServantStatusNpComponent_o ***)(v16 + 184);
  if ( !SvtId )
    goto LABEL_131;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)SvtId,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantTreasureDeviceAddMaster___);
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
      Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
      SvtId = (ServantStatusNpComponent_o *)ServantStatusListViewItem__get_SvtId(item, 0);
      if ( !Master_object )
        goto LABEL_131;
      ConvertOverwriteDispImageLimitCount = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                              (ServantLimitImageMaster_o *)Master_object,
                                              (int32_t)SvtId,
                                              ConvertOverwriteDispImageLimitCount,
                                              0);
      ServantStatusListViewItem__GetNpInfo_35368000(item, &this->fields.tdInfo, ConvertOverwriteDispImageLimitCount, 0);
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
    v85 = -IsTransformServant_k__BackingField;
  }
  else
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SvtId, 0, 0);
    v85 = 0;
  }
  v84 = ConvertOverwriteDispImageLimitCount;
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
        v41 = this->fields.npList;
        if ( !v41 )
          goto LABEL_131;
        if ( i >= LODWORD(v41->max_length) )
          goto LABEL_132;
        v42 = EnableEntity->fields.treasureDeviceIds;
        if ( !v42 )
          goto LABEL_131;
        if ( i >= LODWORD(v42->max_length) )
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
        v35 = *p_tdInfo;
        SvtId = v41->m_Items[i];
        v46 = titles->m_Items[i];
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
          v35,
          item,
          v42->m_Items[i],
          1,
          EnableEntity->fields.condLimitCount,
          v46,
          closedMessage,
          hideCardChara->m_Items[i],
          dispMaskTreasureDevice,
          fixedCardLimitCount,
          0);
        v53 = this->fields.npList;
        if ( !v53 )
          goto LABEL_131;
        if ( i >= LODWORD(v53->max_length) )
LABEL_132:
          sub_1C2D6F4(SvtId, v12, v35);
        v54 = v53->m_Items[i];
        v89.fields.r = 0.0;
        v89.fields.g = 0.0;
        v89.fields.b = 0.0;
        v89.fields.a = 1.0;
        CondLabelColor = ServantTreasureDeviceAddEntity__GetCondLabelColor(EnableEntity, v89, 0);
        r = CondLabelColor.fields.r;
        g = CondLabelColor.fields.g;
        b = CondLabelColor.fields.b;
        a = CondLabelColor.fields.a;
        CondLabelColor.fields.r = 1.0;
        CondLabelColor.fields.g = 1.0;
        CondLabelColor.fields.b = 1.0;
        CondLabelColor.fields.a = 1.0;
        CondSpriteColor = ServantTreasureDeviceAddEntity__GetCondSpriteColor(EnableEntity, CondLabelColor, 0);
        if ( !v54 )
          goto LABEL_131;
        v93 = CondSpriteColor;
        v92.fields.r = r;
        v92.fields.g = g;
        v92.fields.b = b;
        v92.fields.a = a;
        ServantStatusNpComponent__SetCondColor(v54, v92, v93, 0);
        v59 = this->fields.npList;
        if ( !v59 )
          goto LABEL_131;
        if ( i >= LODWORD(v59->max_length) )
          goto LABEL_132;
        v52 = (struct ServantStatusNpComponent_array *)((char *)v59 + 8 * i);
        goto LABEL_83;
      }
    }
    v50 = this->fields.npList;
    if ( !v50 )
      goto LABEL_131;
    if ( i >= LODWORD(v50->max_length) )
      goto LABEL_132;
    SvtId = v50->m_Items[i];
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
    v51 = this->fields.npList;
    if ( !v51 )
      goto LABEL_131;
    if ( !LODWORD(v51->max_length) )
      goto LABEL_132;
    if ( !*p_tdInfo )
      goto LABEL_131;
    SvtId = v51->m_Items[0];
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
    v52 = this->fields.npList;
    if ( !v52 )
      goto LABEL_131;
    if ( !LODWORD(v52->max_length) )
      goto LABEL_132;
LABEL_83:
    v60 = v52->m_Items[0];
    if ( !v60 )
      goto LABEL_131;
    IsTransformServant_k__BackingField += this->fields.npPitch + v60->fields._Adjust_k__BackingField;
  }
  if ( IsTransformServant_k__BackingField >= 0 )
    v61 = IsTransformServant_k__BackingField;
  else
    v61 = IsTransformServant_k__BackingField + 1;
  v62 = IsTransformServant_k__BackingField - (v61 & 0xFFFFFFFE) + IsTransformServant_k__BackingField;
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
              v62 += 58;
              UICommonButton__SetEnable((UICommonButton_o *)SvtId, item->fields._CanMoveCombine_k__BackingField, 0);
              if ( v62 >= 0 )
                v64 = v62;
              else
                v64 = v62 + 1;
              GameObjectExtensions__SetLocalPositionY(this->fields.reinforceObject, (float)-(v64 >> 1), 0);
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
  v69 = y + (float)v62;
  if ( UnityEngine_Object__op_Inequality(baseCollider, 0, 0) )
  {
    SvtId = (ServantStatusNpComponent_o *)this->fields.baseCollider;
    if ( !SvtId )
      goto LABEL_131;
    v86.fields.x = x;
    v86.fields.y = v69;
    v86.fields.z = z;
    UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)SvtId, v86, 0);
  }
  SvtId = (ServantStatusNpComponent_o *)this->fields.baseSprite;
  if ( !SvtId )
    goto LABEL_131;
  v70 = x == INFINITY ? 0x80000000 : (int)x;
  UIWidget__set_width((UIWidget_o *)SvtId, v70, 0);
  SvtId = (ServantStatusNpComponent_o *)this->fields.baseSprite;
  if ( !SvtId )
    goto LABEL_131;
  v71 = v69 == INFINITY ? 0x80000000 : (int)v69;
  UIWidget__set_height((UIWidget_o *)SvtId, v71, 0);
  SvtId = (ServantStatusNpComponent_o *)this->fields.titleObject;
  v72 = v62 + (v62 < 0);
  if ( !SvtId
    || (v73 = this->fields.titleBasePosition.fields.x,
        v74 = this->fields.titleBasePosition.fields.y,
        v75 = this->fields.titleBasePosition.fields.z,
        (SvtId = (ServantStatusNpComponent_o *)UnityEngine_GameObject__get_transform(
                                                 (UnityEngine_GameObject_o *)SvtId,
                                                 0)) == 0) )
  {
LABEL_131:
    sub_1C2D6EC(SvtId, v12);
  }
  v76 = v72 >> 1;
  v87.fields.y = v74 + (float)(v72 >> 1);
  v87.fields.x = v73;
  v87.fields.z = v75;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)SvtId, v87, 0);
  v77 = this->fields.npBasePosition.fields.x;
  v78 = this->fields.npBasePosition.fields.z;
  v79 = 0;
  for ( j = this->fields.npBasePosition.fields.y + (float)(v76 + v85);
        ;
        j = (float)(j - (float)this->fields.npPitch) - (float)v83->fields._Adjust_k__BackingField )
  {
    SvtId = (ServantStatusNpComponent_o *)ServantStatusListViewItemDrawNp_TypeInfo;
    if ( !ServantStatusListViewItemDrawNp_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawNp_TypeInfo);
      SvtId = (ServantStatusNpComponent_o *)ServantStatusListViewItemDrawNp_TypeInfo;
    }
    if ( (signed int)v79 >= (__int64)SvtId->fields.commandCardComponent->klass )
      break;
    v81 = this->fields.npList;
    if ( !v81 )
      goto LABEL_131;
    if ( v79 >= LODWORD(v81->max_length) )
      goto LABEL_132;
    SvtId = v81->m_Items[v79];
    if ( !SvtId )
      goto LABEL_131;
    SvtId = (ServantStatusNpComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)SvtId, 0);
    if ( !SvtId )
      goto LABEL_131;
    v88.fields.x = v77;
    v88.fields.y = j;
    v88.fields.z = v78;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)SvtId, v88, 0);
    v82 = this->fields.npList;
    if ( !v82 )
      goto LABEL_131;
    if ( v79 >= LODWORD(v82->max_length) )
      goto LABEL_132;
    v83 = v82->m_Items[v79];
    if ( !v83 )
      goto LABEL_131;
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