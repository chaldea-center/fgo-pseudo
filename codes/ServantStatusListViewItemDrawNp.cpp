void ServantStatusListViewItemDrawNp___cctor(const MethodInfo *method)
{
  if ( (byte_4CEBBDE & 1) == 0 )
  {
    sub_1C7BAE8(&ServantStatusListViewItemDrawNp_TypeInfo);
    byte_4CEBBDE = 1;
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

  if ( (byte_4CEBBDD & 1) == 0 )
  {
    sub_1C7BAE8(&ServantStatusListViewItemDrawNp_TypeInfo);
    sub_1C7BAE8(&ServantStatusNpComponent___TypeInfo);
    byte_4CEBBDD = 1;
  }
  v3 = ServantStatusListViewItemDrawNp_TypeInfo;
  if ( !ServantStatusListViewItemDrawNp_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawNp_TypeInfo);
    v3 = ServantStatusListViewItemDrawNp_TypeInfo;
  }
  v4 = (struct ServantStatusNpComponent_array *)sub_1C7BB90(
                                                  ServantStatusNpComponent___TypeInfo,
                                                  v3->static_fields->NP_LIST_MAX);
  this->fields.npList = v4;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.npList, (int32_t)v4, v5, v6, v7, v8, v9, v10);
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
    sub_1C7BD40(this, method);
  if ( !LODWORD(v10->max_length) )
LABEL_25:
    sub_1C7BD48(this);
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

  if ( (byte_4CEBBDC & 1) == 0 )
  {
    sub_1C7BAE8(&ServantStatusListViewItemDrawNp_TypeInfo);
    byte_4CEBBDC = 1;
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
      sub_1C7BD48(v6);
    v6 = (ServantStatusListViewItemDrawNp_c *)npList->m_Items[v5];
    if ( !v6 )
LABEL_12:
      sub_1C7BD40(v6, item);
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
  int32_t ConvertOverwriteDispImageLimitCount; // w27
  __int64 v16; // x1
  int32_t LimitCount; // w23
  long double v18; // q0
  __int64 v19; // x8
  __int64 v20; // x0
  ServantStatusNpComponent_o *SvtId; // x0
  Il2CppObject *MasterData_object; // x0
  ServantTreasureDeviceAddEntity_o *EnableEntity; // x23
  Il2CppObject *v24; // x24
  Il2CppObject *Master_object; // x25
  int32_t v26; // w0
  int32_t ServantLimitCountSealAfter; // w23
  int32_t LimitCountByDispLimit; // w25
  int32_t v29; // w26
  int32_t v30; // w5
  ServantTreasureDeviceAddMaster_o *v31; // x0
  int32_t v32; // w1
  int32_t v33; // w2
  int32_t v34; // w3
  int32_t id; // w4
  int32_t v36; // w25
  UILabel_o *transformNameLabel; // x24
  int32_t transformNameAddHeight; // w21
  int v39; // w8
  System_Int32_array *DispMaskTreasureDevices; // x24
  System_Int32_array *FixedCardLimitCounts; // x25
  unsigned __int64 i; // x26
  struct System_Int32_array *treasureDeviceIds; // x8
  struct ServantStatusNpComponent_array *npList; // x8
  struct ServantStatusNpComponent_array *v45; // x8
  struct System_Int32_array *v46; // x9
  struct System_String_array *titles; // x10
  struct System_String_array *closedMessages; // x11
  struct System_Int32_array *hideCardChara; // x12
  System_String_o *v50; // x7
  System_String_o *closedMessage; // x8
  int32_t dispMaskTreasureDevice; // w10
  int32_t fixedCardLimitCount; // w11
  struct ServantStatusNpComponent_array *v54; // x8
  struct ServantStatusNpComponent_array *v55; // x8
  struct ServantStatusNpComponent_array *v56; // x8
  struct ServantStatusNpComponent_array *v57; // x8
  ServantStatusNpComponent_o *v58; // x27
  System_String_o *CondLabelColor; // x0
  float r; // s8
  float g; // s9
  float b; // s10
  float a; // s11
  System_String_o *CondSpriteColor; // x0
  struct ServantStatusNpComponent_array *v65; // x8
  ServantStatusNpComponent_o *v66; // x8
  int32_t v67; // w9
  int v68; // w21
  UserServantEntity_o *userSvtEntity; // x0
  int v70; // w8
  float y; // s8
  float x; // s9
  float z; // s10
  UnityEngine_Object_o *baseCollider; // x22
  float v75; // s8
  int32_t v76; // w1
  int32_t v77; // w1
  int v78; // w21
  float v79; // s8
  float v80; // s10
  float v81; // s9
  int v82; // w22
  float v83; // s8
  float v84; // s9
  unsigned int v85; // w21
  float j; // s10
  struct ServantStatusNpComponent_array *v87; // x8
  struct ServantStatusNpComponent_array *v88; // x8
  ServantStatusNpComponent_o *v89; // x8
  int32_t v90; // [xsp+30h] [xbp-90h]
  int v91; // [xsp+34h] [xbp-8Ch]
  UnityEngine_Vector3_o v92; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v93; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v94; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v95; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v96; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v97; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v98; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v99; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v100; // 0:s4.4,4:s5.4,8:s6.4,12:s7.4

  if ( (byte_4CEBBDB & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_ServantTreasureDeviceAddMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&ImageLimitCount_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&ServantStatusListViewItemDrawNp_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1C7BAE8(&TreasureDvcInfo_TypeInfo);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CEBBDB = 1;
  }
  this->fields.dispMode = mode;
  v7 = (TreasureDvcInfo_o *)sub_1C7BD34(TreasureDvcInfo_TypeInfo);
  TreasureDvcInfo___ctor(v7, 0);
  this->fields.tdInfo = v7;
  p_tdInfo = &this->fields.tdInfo;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.tdInfo, (int32_t)v7, v9, v10, v11, v12, v13, v14);
  if ( !item || !mode )
    return;
  ConvertOverwriteDispImageLimitCount = ServantStatusListViewItem__get_ConvertOverwriteDispImageLimitCount(item, 0);
  LimitCount = ServantStatusListViewItem__get_LimitCount(item, 0);
  v19 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v19 + 309) & 1) == 0 )
    v19 = sub_1C51B7C(v18);
  v20 = *(_QWORD *)(*(_QWORD *)(v19 + 192) + 16LL);
  if ( (*(_BYTE *)(v20 + 309) & 1) == 0 )
    v20 = sub_1C51B7C(v18);
  SvtId = **(ServantStatusNpComponent_o ***)(v20 + 184);
  if ( !SvtId )
    goto LABEL_135;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)SvtId,
                        (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_ServantTreasureDeviceAddMaster___);
  if ( item->fields._IsTransformed_k__BackingField )
  {
    ServantStatusListViewItem__GetTransformedNpInfo(item, &this->fields.tdInfo, 0);
    EnableEntity = 0;
  }
  else
  {
    v24 = MasterData_object;
    if ( ServantStatusListViewItem__get_IsMine(item, 0) )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
      SvtId = (ServantStatusNpComponent_o *)ServantStatusListViewItem__get_SvtId(item, 0);
      if ( !Master_object )
        goto LABEL_135;
      ConvertOverwriteDispImageLimitCount = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                              (ServantLimitImageMaster_o *)Master_object,
                                              (int32_t)SvtId,
                                              ConvertOverwriteDispImageLimitCount,
                                              0);
      ServantStatusListViewItem__GetNpInfo_36647840(item, &this->fields.tdInfo, ConvertOverwriteDispImageLimitCount, 0);
      v26 = ServantStatusListViewItem__get_SvtId(item, 0);
      ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                     (ServantLimitImageMaster_o *)Master_object,
                                     v26,
                                     LimitCount,
                                     0);
      if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      LimitCountByDispLimit = ImageLimitCount__GetLimitCountByDispLimit(
                                ConvertOverwriteDispImageLimitCount,
                                ServantLimitCountSealAfter,
                                0);
      v29 = ServantStatusListViewItem__get_SvtId(item, 0);
      SvtId = (ServantStatusNpComponent_o *)ServantStatusListViewItem__get_LimitCount(item, 0);
      if ( !v24 )
        goto LABEL_135;
      v30 = (int)SvtId;
      v31 = (ServantTreasureDeviceAddMaster_o *)v24;
      v32 = v29;
      v33 = ServantLimitCountSealAfter;
      v34 = LimitCountByDispLimit;
      id = 0;
    }
    else
    {
      ServantStatusListViewItem__GetNpInfo(item, &this->fields.tdInfo, 0);
      if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      v36 = ImageLimitCount__GetLimitCountByDispLimit(ConvertOverwriteDispImageLimitCount, LimitCount, 0);
      SvtId = (ServantStatusNpComponent_o *)ServantStatusListViewItem__get_SvtId(item, 0);
      if ( !*p_tdInfo || !v24 )
        goto LABEL_135;
      id = (*p_tdInfo)->fields.id;
      v32 = (int)SvtId;
      v31 = (ServantTreasureDeviceAddMaster_o *)v24;
      v33 = LimitCount;
      v34 = v36;
      v30 = 0;
    }
    EnableEntity = ServantTreasureDeviceAddMaster__GetEnableEntity(v31, v32, v33, v34, id, v30, 0);
  }
  if ( item->fields._IsTransformServant_k__BackingField )
  {
    SvtId = (ServantStatusNpComponent_o *)this->fields.transformNameLabel;
    if ( !SvtId )
      goto LABEL_135;
    UIWidget__set_color((UIWidget_o *)SvtId, item->fields._TransformNameLabelColor_k__BackingField, 0);
    SvtId = (ServantStatusNpComponent_o *)this->fields.transformNameSprite;
    if ( !SvtId )
      goto LABEL_135;
    UIWidget__set_color((UIWidget_o *)SvtId, item->fields._TransformNameSpriteColor_k__BackingField, 0);
    SvtId = (ServantStatusNpComponent_o *)this->fields.transformNameSprite;
    if ( !SvtId )
      goto LABEL_135;
    SvtId = (ServantStatusNpComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)SvtId, 0);
    if ( !SvtId )
      goto LABEL_135;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SvtId, 1, 0);
    transformNameLabel = this->fields.transformNameLabel;
    SvtId = (ServantStatusNpComponent_o *)ServantStatusListViewItem__GetTransformName(item, 0);
    if ( !transformNameLabel )
      goto LABEL_135;
    UILabel__set_text(transformNameLabel, (System_String_o *)SvtId, 0);
    transformNameAddHeight = this->fields.transformNameAddHeight;
    v39 = -transformNameAddHeight;
  }
  else
  {
    SvtId = (ServantStatusNpComponent_o *)this->fields.transformNameSprite;
    if ( !SvtId )
      goto LABEL_135;
    SvtId = (ServantStatusNpComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)SvtId, 0);
    if ( !SvtId )
      goto LABEL_135;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SvtId, 0, 0);
    v39 = 0;
    transformNameAddHeight = 0;
  }
  v90 = ConvertOverwriteDispImageLimitCount;
  v91 = v39;
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
        goto LABEL_135;
      if ( (__int64)i < SLODWORD(treasureDeviceIds->max_length) )
      {
        npList = this->fields.npList;
        if ( !npList )
          goto LABEL_135;
        if ( i >= LODWORD(npList->max_length) )
          goto LABEL_136;
        SvtId = npList->m_Items[i];
        if ( !SvtId )
          goto LABEL_135;
        SvtId = (ServantStatusNpComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)SvtId, 0);
        if ( !SvtId )
          goto LABEL_135;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SvtId, 1, 0);
        v45 = this->fields.npList;
        if ( !v45 )
          goto LABEL_135;
        if ( i >= LODWORD(v45->max_length) )
          goto LABEL_136;
        v46 = EnableEntity->fields.treasureDeviceIds;
        if ( !v46 )
          goto LABEL_135;
        if ( i >= LODWORD(v46->max_length) )
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
        SvtId = v45->m_Items[i];
        v50 = titles->m_Items[i];
        closedMessage = closedMessages->m_Items[i];
        if ( DispMaskTreasureDevices )
        {
          if ( i >= LODWORD(DispMaskTreasureDevices->max_length) )
            goto LABEL_136;
          dispMaskTreasureDevice = DispMaskTreasureDevices->m_Items[i];
          if ( FixedCardLimitCounts )
            goto LABEL_63;
LABEL_80:
          fixedCardLimitCount = 1;
          if ( !SvtId )
            goto LABEL_135;
        }
        else
        {
          dispMaskTreasureDevice = -1;
          if ( !FixedCardLimitCounts )
            goto LABEL_80;
LABEL_63:
          if ( i >= LODWORD(FixedCardLimitCounts->max_length) )
            goto LABEL_136;
          fixedCardLimitCount = FixedCardLimitCounts->m_Items[i];
          if ( !SvtId )
            goto LABEL_135;
        }
        ServantStatusNpComponent__Set(
          SvtId,
          i,
          *p_tdInfo,
          item,
          v46->m_Items[i],
          1,
          EnableEntity->fields.condLimitCount,
          v50,
          closedMessage,
          hideCardChara->m_Items[i],
          dispMaskTreasureDevice,
          fixedCardLimitCount,
          0);
        v57 = this->fields.npList;
        if ( !v57 )
          goto LABEL_135;
        if ( i >= LODWORD(v57->max_length) )
LABEL_136:
          sub_1C7BD48(SvtId);
        v58 = v57->m_Items[i];
        CondLabelColor = ServantTreasureDeviceAddEntity__GetCondLabelColor(EnableEntity, 0);
        v95.fields.r = 0.0;
        v95.fields.g = 0.0;
        v95.fields.b = 0.0;
        v95.fields.a = 1.0;
        v96 = ColorHelper__ParseColorCode_44672296(CondLabelColor, v95, 0);
        r = v96.fields.r;
        g = v96.fields.g;
        b = v96.fields.b;
        a = v96.fields.a;
        CondSpriteColor = ServantTreasureDeviceAddEntity__GetCondSpriteColor(EnableEntity, 0);
        v97.fields.r = 1.0;
        v97.fields.g = 1.0;
        v97.fields.b = 1.0;
        v97.fields.a = 1.0;
        v98 = ColorHelper__ParseColorCode_44672296(CondSpriteColor, v97, 0);
        if ( !v58 )
          goto LABEL_135;
        v100 = v98;
        v99.fields.r = r;
        v99.fields.g = g;
        v99.fields.b = b;
        v99.fields.a = a;
        ServantStatusNpComponent__SetCondColor(v58, v99, v100, 0);
        v65 = this->fields.npList;
        if ( !v65 )
          goto LABEL_135;
        if ( i >= LODWORD(v65->max_length) )
          goto LABEL_136;
        v56 = (struct ServantStatusNpComponent_array *)((char *)v65 + 8 * i);
        goto LABEL_87;
      }
    }
    v54 = this->fields.npList;
    if ( !v54 )
      goto LABEL_135;
    if ( i >= LODWORD(v54->max_length) )
      goto LABEL_136;
    SvtId = v54->m_Items[i];
    if ( !SvtId )
      goto LABEL_135;
    SvtId = (ServantStatusNpComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)SvtId, 0);
    if ( !SvtId )
      goto LABEL_135;
    if ( i )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SvtId, 0, 0);
      continue;
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SvtId, 1, 0);
    v55 = this->fields.npList;
    if ( !v55 )
      goto LABEL_135;
    if ( !LODWORD(v55->max_length) )
      goto LABEL_136;
    if ( !*p_tdInfo )
      goto LABEL_135;
    SvtId = v55->m_Items[0];
    if ( !SvtId )
      goto LABEL_135;
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
    v56 = this->fields.npList;
    if ( !v56 )
      goto LABEL_135;
    if ( !LODWORD(v56->max_length) )
      goto LABEL_136;
LABEL_87:
    v66 = v56->m_Items[0];
    if ( !v66 )
      goto LABEL_135;
    transformNameAddHeight += this->fields.npPitch + v66->fields._Adjust_k__BackingField;
  }
  if ( transformNameAddHeight >= 0 )
    v67 = transformNameAddHeight;
  else
    v67 = transformNameAddHeight + 1;
  v68 = transformNameAddHeight - (v67 & 0xFFFFFFFE) + transformNameAddHeight;
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
            goto LABEL_104;
          SvtId = (ServantStatusNpComponent_o *)this->fields.reinforceObject;
          if ( SvtId )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SvtId, 1, 0);
            SvtId = (ServantStatusNpComponent_o *)this->fields.reinforceButton;
            if ( SvtId )
            {
              BYTE1(SvtId->fields.commandCardBase) = 1;
              v68 += 58;
              UICommonButton__SetEnable((UICommonButton_o *)SvtId, item->fields._CanMoveCombine_k__BackingField, 0);
              if ( v68 >= 0 )
                v70 = v68;
              else
                v70 = v68 + 1;
              GameObjectExtensions__SetLocalPositionY(this->fields.reinforceObject, (float)-(v70 >> 1), 0);
              goto LABEL_104;
            }
          }
        }
        goto LABEL_135;
      }
    }
  }
LABEL_104:
  x = this->fields.baseSize.fields.x;
  y = this->fields.baseSize.fields.y;
  z = this->fields.baseSize.fields.z;
  baseCollider = (UnityEngine_Object_o *)this->fields.baseCollider;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v75 = y + (float)v68;
  if ( UnityEngine_Object__op_Inequality(baseCollider, 0, 0) )
  {
    SvtId = (ServantStatusNpComponent_o *)this->fields.baseCollider;
    if ( !SvtId )
      goto LABEL_135;
    v92.fields.x = x;
    v92.fields.y = v75;
    v92.fields.z = z;
    UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)SvtId, v92, 0);
  }
  SvtId = (ServantStatusNpComponent_o *)this->fields.baseSprite;
  if ( !SvtId )
    goto LABEL_135;
  v76 = x == INFINITY ? 0x80000000 : (int)x;
  UIWidget__set_width((UIWidget_o *)SvtId, v76, 0);
  SvtId = (ServantStatusNpComponent_o *)this->fields.baseSprite;
  if ( !SvtId )
    goto LABEL_135;
  v77 = v75 == INFINITY ? 0x80000000 : (int)v75;
  UIWidget__set_height((UIWidget_o *)SvtId, v77, 0);
  SvtId = (ServantStatusNpComponent_o *)this->fields.titleObject;
  v78 = v68 + (v68 < 0);
  if ( !SvtId
    || (v79 = this->fields.titleBasePosition.fields.x,
        v80 = this->fields.titleBasePosition.fields.y,
        v81 = this->fields.titleBasePosition.fields.z,
        (SvtId = (ServantStatusNpComponent_o *)UnityEngine_GameObject__get_transform(
                                                 (UnityEngine_GameObject_o *)SvtId,
                                                 0)) == 0) )
  {
LABEL_135:
    sub_1C7BD40(SvtId, v16);
  }
  v82 = v78 >> 1;
  v93.fields.y = v80 + (float)(v78 >> 1);
  v93.fields.x = v79;
  v93.fields.z = v81;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)SvtId, v93, 0);
  v83 = this->fields.npBasePosition.fields.x;
  v84 = this->fields.npBasePosition.fields.z;
  v85 = 0;
  for ( j = this->fields.npBasePosition.fields.y + (float)(v82 + v91);
        ;
        j = (float)(j - (float)this->fields.npPitch) - (float)v89->fields._Adjust_k__BackingField )
  {
    SvtId = (ServantStatusNpComponent_o *)ServantStatusListViewItemDrawNp_TypeInfo;
    if ( !ServantStatusListViewItemDrawNp_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawNp_TypeInfo);
      SvtId = (ServantStatusNpComponent_o *)ServantStatusListViewItemDrawNp_TypeInfo;
    }
    if ( (signed int)v85 >= (__int64)SvtId->fields.commandCardComponent->klass )
      break;
    v87 = this->fields.npList;
    if ( !v87 )
      goto LABEL_135;
    if ( v85 >= LODWORD(v87->max_length) )
      goto LABEL_136;
    SvtId = v87->m_Items[v85];
    if ( !SvtId )
      goto LABEL_135;
    SvtId = (ServantStatusNpComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)SvtId, 0);
    if ( !SvtId )
      goto LABEL_135;
    v94.fields.x = v83;
    v94.fields.y = j;
    v94.fields.z = v84;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)SvtId, v94, 0);
    v88 = this->fields.npList;
    if ( !v88 )
      goto LABEL_135;
    if ( v85 >= LODWORD(v88->max_length) )
      goto LABEL_136;
    v89 = v88->m_Items[v85];
    if ( !v89 )
      goto LABEL_135;
    ++v85;
  }
  if ( this->fields.isStart && this->fields.dispLimitCnt != v90 )
  {
    ((void (__fastcall *)(ServantStatusListViewItemDrawNp_o *, ServantStatusListViewItem_o *, const MethodInfo *))this->klass->vtable._7_ModifyCommandCard.methodPtr)(
      this,
      item,
      this->klass->vtable._7_ModifyCommandCard.method);
    this->fields.dispLimitCnt = v90;
  }
}