void __fastcall ServantStatusListViewItemDrawNp___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4B193FA & 1) == 0 )
  {
    sub_1BCAFF8(&ServantStatusListViewItemDrawNp_TypeInfo, v1);
    byte_4B193FA = 1;
  }
  ServantStatusListViewItemDrawNp_TypeInfo->static_fields->NP_LIST_MAX = 2;
}


void __fastcall ServantStatusListViewItemDrawNp___ctor(
        ServantStatusListViewItemDrawNp_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  ServantStatusListViewItemDrawNp_c *v4; // x0
  struct ServantStatusNpComponent_array *v5; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4B193F9 & 1) == 0 )
  {
    sub_1BCAFF8(&ServantStatusListViewItemDrawNp_TypeInfo, method);
    sub_1BCAFF8(&ServantStatusNpComponent___TypeInfo, v3);
    byte_4B193F9 = 1;
  }
  v4 = ServantStatusListViewItemDrawNp_TypeInfo;
  if ( !ServantStatusListViewItemDrawNp_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawNp_TypeInfo);
    v4 = ServantStatusListViewItemDrawNp_TypeInfo;
  }
  v5 = (struct ServantStatusNpComponent_array *)sub_1BCB0A0(
                                                  ServantStatusNpComponent___TypeInfo,
                                                  v4->static_fields->NP_LIST_MAX);
  this->fields.npList = v5;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.npList, (int32_t)v5, v6, v7);
  this->fields.transformNameAddHeight = 42;
  this->fields.dispLimitCnt = -1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusListViewItemDrawNp__Awake(
        ServantStatusListViewItemDrawNp_o *this,
        const MethodInfo *method)
{
  struct ServantStatusNpComponent_array *npList; // x8
  ServantStatusListViewItemDrawNp_o *v3; // x19
  __int64 v4; // x2
  float v5; // s1
  struct ServantStatusNpComponent_array *v6; // x8
  float v7; // s8
  float v8; // s1
  unsigned int v9; // w9
  struct UISprite_o *baseSprite; // x9
  int v11; // w20
  float v12; // s1
  float v13; // s0
  float v14; // s1
  float v15; // s2
  struct ServantStatusNpComponent_array *v16; // x8
  int v17; // w9
  float v18; // s8
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  npList = this->fields.npList;
  if ( !npList )
    goto LABEL_24;
  v3 = this;
  if ( (int)npList->max_length >= 2 )
  {
    this = (ServantStatusListViewItemDrawNp_o *)npList->m_Items[0];
    if ( !this )
      goto LABEL_24;
    this = (ServantStatusListViewItemDrawNp_o *)UnityEngine_Component__get_transform(
                                                  (UnityEngine_Component_o *)this,
                                                  0LL);
    if ( !this )
      goto LABEL_24;
    *(UnityEngine_Vector3_o *)(&v5 - 1) = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
    v6 = v3->fields.npList;
    if ( !v6 )
      goto LABEL_24;
    if ( v6->max_length <= 1 )
      goto LABEL_25;
    this = (ServantStatusListViewItemDrawNp_o *)v6->m_Items[1];
    if ( !this )
      goto LABEL_24;
    v7 = v5;
    this = (ServantStatusListViewItemDrawNp_o *)UnityEngine_Component__get_transform(
                                                  (UnityEngine_Component_o *)this,
                                                  0LL);
    if ( !this )
      goto LABEL_24;
    *(UnityEngine_Vector3_o *)(&v8 - 1) = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
    npList = v3->fields.npList;
    v9 = (float)(v7 - v8) == INFINITY ? 0x80000000 : (int)(float)(v7 - v8);
    v3->fields.npPitch = v9;
    if ( !npList )
      goto LABEL_24;
  }
  baseSprite = v3->fields.baseSprite;
  if ( !baseSprite )
    goto LABEL_24;
  this = (ServantStatusListViewItemDrawNp_o *)v3->fields.titleObject;
  v11 = v3->fields.npPitch * npList->max_length;
  v12 = (float)(baseSprite->fields.mHeight - v11);
  v3->fields.baseSize.fields.x = (float)baseSprite->fields.mWidth;
  v3->fields.baseSize.fields.y = v12;
  v3->fields.baseSize.fields.z = 0.0;
  if ( !this )
    goto LABEL_24;
  this = (ServantStatusListViewItemDrawNp_o *)UnityEngine_GameObject__get_transform(
                                                (UnityEngine_GameObject_o *)this,
                                                0LL);
  if ( !this )
    goto LABEL_24;
  *(UnityEngine_Vector3_o *)&v13 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  v16 = v3->fields.npList;
  v17 = v11 >= 0 ? v11 : v11 + 1;
  v18 = (float)(v17 >> 1);
  v3->fields.titleBasePosition.fields.x = v13;
  v3->fields.titleBasePosition.fields.y = v14 - v18;
  v3->fields.titleBasePosition.fields.z = v15;
  if ( !v16 )
LABEL_24:
    sub_1BCB254(this, method);
  if ( !v16->max_length )
LABEL_25:
    sub_1BCB25C(this, method, v4);
  this = (ServantStatusListViewItemDrawNp_o *)v16->m_Items[0];
  if ( !this )
    goto LABEL_24;
  this = (ServantStatusListViewItemDrawNp_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_24;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  v3->fields.npBasePosition.fields.x = localPosition.fields.x;
  v3->fields.npBasePosition.fields.y = localPosition.fields.y - v18;
  v3->fields.npBasePosition.fields.z = localPosition.fields.z;
}


int32_t __fastcall ServantStatusListViewItemDrawNp__GetKind(
        ServantStatusListViewItemDrawNp_o *this,
        const MethodInfo *method)
{
  return 7;
}


void __fastcall ServantStatusListViewItemDrawNp__ModifyCommandCard(
        ServantStatusListViewItemDrawNp_o *this,
        ServantStatusListViewItem_o *item,
        const MethodInfo *method)
{
  il2cpp_array_size_t v5; // w21
  ServantStatusListViewItemDrawNp_c *v6; // x0
  struct ServantStatusNpComponent_array *npList; // x8

  if ( (byte_4B193F8 & 1) == 0 )
  {
    sub_1BCAFF8(&ServantStatusListViewItemDrawNp_TypeInfo, item);
    byte_4B193F8 = 1;
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
    if ( (signed int)v5 >= v6->static_fields->NP_LIST_MAX )
      break;
    npList = this->fields.npList;
    if ( !npList )
      goto LABEL_12;
    if ( v5 >= npList->max_length )
      sub_1BCB25C(v6, item, method);
    v6 = (ServantStatusListViewItemDrawNp_c *)npList->m_Items[v5];
    if ( !v6 )
LABEL_12:
      sub_1BCB254(v6, item);
    ServantStatusNpComponent__ModifyCommandCard((ServantStatusNpComponent_o *)v6, item, 0LL);
    ++v5;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusListViewItemDrawNp__SetItem(
        ServantStatusListViewItemDrawNp_o *this,
        ServantStatusListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  TreasureDvcInfo_o *v15; // x23
  TreasureDvcInfo_o **p_tdInfo; // x22
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  int32_t ConvertOverwriteDispImageLimitCount; // w27
  __int64 v20; // x1
  int32_t LimitCount; // w23
  long double v22; // q0
  __int64 v23; // x8
  __int64 v24; // x0
  ServantStatusNpComponent_o *SvtId; // x0
  Il2CppObject *MasterData_object; // x0
  ServantTreasureDeviceAddEntity_o *EnableEntity; // x23
  Il2CppObject *v28; // x24
  Il2CppObject *Master_object; // x25
  int32_t v30; // w0
  int32_t ServantLimitCountSealAfter; // w23
  int32_t LimitCountByDispLimit; // w25
  int32_t v33; // w26
  int32_t v34; // w5
  ServantTreasureDeviceAddMaster_o *v35; // x0
  int32_t v36; // w1
  int32_t v37; // w2
  int32_t v38; // w3
  int32_t id; // w4
  int32_t v40; // w25
  int IsTransformServant_k__BackingField; // w21
  UILabel_o *transformNameLabel; // x24
  TreasureDvcInfo_o *v43; // x2
  System_Int32_array *DispMaskTreasureDevices; // x24
  System_Int32_array *FixedCardLimitCounts; // x25
  unsigned __int64 i; // x26
  struct System_Int32_array *treasureDeviceIds; // x8
  struct ServantStatusNpComponent_array *npList; // x8
  struct ServantStatusNpComponent_array *v49; // x8
  struct System_Int32_array *v50; // x9
  struct System_String_array *titles; // x10
  struct System_String_array *closedMessages; // x11
  struct System_Int32_array *hideCardChara; // x12
  System_String_o *v54; // x7
  System_String_o *closedMessage; // x8
  int32_t dispMaskTreasureDevice; // w10
  int32_t fixedCardLimitCount; // w11
  struct ServantStatusNpComponent_array *v58; // x8
  struct ServantStatusNpComponent_array *v59; // x8
  struct ServantStatusNpComponent_array *v60; // x8
  struct ServantStatusNpComponent_array *v61; // x8
  ServantStatusNpComponent_o *v62; // x27
  float r; // s8
  float g; // s9
  float b; // s10
  float a; // s11
  float v67; // s0
  float v68; // s1
  float v69; // s2
  float v70; // s3
  struct ServantStatusNpComponent_array *v71; // x8
  ServantStatusNpComponent_o *v72; // x8
  int v73; // w9
  int v74; // w21
  UserServantEntity_o *userSvtEntity; // x0
  int v76; // w8
  float y; // s8
  float x; // s9
  float z; // s10
  UnityEngine_Object_o *baseCollider; // x22
  float v81; // s8
  int32_t v82; // w1
  int32_t v83; // w1
  int v84; // w21
  float v85; // s8
  float v86; // s10
  float v87; // s9
  int v88; // w22
  float v89; // s8
  float v90; // s9
  il2cpp_array_size_t v91; // w21
  float j; // s10
  struct ServantStatusNpComponent_array *v93; // x8
  struct ServantStatusNpComponent_array *v94; // x8
  ServantStatusNpComponent_o *v95; // x8
  int32_t v96; // [xsp+30h] [xbp-90h]
  int v97; // [xsp+34h] [xbp-8Ch]
  UnityEngine_Vector3_o v98; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v99; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v100; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v101; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o CondLabelColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v103; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v104; // 0:s4.4,4:s5.4,8:s6.4,12:s7.4

  if ( (byte_4B193F7 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ServantTreasureDeviceAddMaster___, item);
    sub_1BCAFF8(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v7);
    sub_1BCAFF8(&DataManager_TypeInfo, v8);
    sub_1BCAFF8(&ImageLimitCount_TypeInfo, v9);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v10);
    sub_1BCAFF8(&ServantStatusListViewItemDrawNp_TypeInfo, v11);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v12);
    sub_1BCAFF8(&TreasureDvcInfo_TypeInfo, v13);
    sub_1BCAFF8(&StringLiteral_1/*""*/, v14);
    byte_4B193F7 = 1;
  }
  this->fields.dispMode = mode;
  v15 = (TreasureDvcInfo_o *)sub_1BCB244(TreasureDvcInfo_TypeInfo);
  TreasureDvcInfo___ctor(v15, 0LL);
  this->fields.tdInfo = v15;
  p_tdInfo = &this->fields.tdInfo;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.tdInfo, (int32_t)v15, v17, v18);
  if ( !item || !mode )
    return;
  ConvertOverwriteDispImageLimitCount = ServantStatusListViewItem__get_ConvertOverwriteDispImageLimitCount(item, 0LL);
  LimitCount = ServantStatusListViewItem__get_LimitCount(item, 0LL);
  v23 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v23 + 309) & 1) == 0 )
    v23 = sub_1C1B45C(v22);
  v24 = *(_QWORD *)(*(_QWORD *)(v23 + 192) + 16LL);
  if ( (*(_BYTE *)(v24 + 309) & 1) == 0 )
    v24 = sub_1C1B45C(v22);
  SvtId = **(ServantStatusNpComponent_o ***)(v24 + 184);
  if ( !SvtId )
    goto LABEL_131;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)SvtId,
                        (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantTreasureDeviceAddMaster___);
  if ( item->fields._IsTransformed_k__BackingField )
  {
    ServantStatusListViewItem__GetTransformedNpInfo(item, &this->fields.tdInfo, 0LL);
    EnableEntity = 0LL;
  }
  else
  {
    v28 = MasterData_object;
    if ( ServantStatusListViewItem__get_IsMine(item, 0LL) )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
      SvtId = (ServantStatusNpComponent_o *)ServantStatusListViewItem__get_SvtId(item, 0LL);
      if ( !Master_object )
        goto LABEL_131;
      ConvertOverwriteDispImageLimitCount = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                              (ServantLimitImageMaster_o *)Master_object,
                                              (int32_t)SvtId,
                                              ConvertOverwriteDispImageLimitCount,
                                              0LL);
      ServantStatusListViewItem__GetNpInfo_34973340(
        item,
        &this->fields.tdInfo,
        ConvertOverwriteDispImageLimitCount,
        0LL);
      v30 = ServantStatusListViewItem__get_SvtId(item, 0LL);
      ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                     (ServantLimitImageMaster_o *)Master_object,
                                     v30,
                                     LimitCount,
                                     0LL);
      if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      LimitCountByDispLimit = ImageLimitCount__GetLimitCountByDispLimit(
                                ConvertOverwriteDispImageLimitCount,
                                ServantLimitCountSealAfter,
                                0LL);
      v33 = ServantStatusListViewItem__get_SvtId(item, 0LL);
      SvtId = (ServantStatusNpComponent_o *)ServantStatusListViewItem__get_LimitCount(item, 0LL);
      if ( !v28 )
        goto LABEL_131;
      v34 = (int)SvtId;
      v35 = (ServantTreasureDeviceAddMaster_o *)v28;
      v36 = v33;
      v37 = ServantLimitCountSealAfter;
      v38 = LimitCountByDispLimit;
      id = 0;
    }
    else
    {
      ServantStatusListViewItem__GetNpInfo(item, &this->fields.tdInfo, 0LL);
      if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      v40 = ImageLimitCount__GetLimitCountByDispLimit(ConvertOverwriteDispImageLimitCount, LimitCount, 0LL);
      SvtId = (ServantStatusNpComponent_o *)ServantStatusListViewItem__get_SvtId(item, 0LL);
      if ( !*p_tdInfo || !v28 )
        goto LABEL_131;
      id = (*p_tdInfo)->fields.id;
      v36 = (int)SvtId;
      v35 = (ServantTreasureDeviceAddMaster_o *)v28;
      v37 = LimitCount;
      v38 = v40;
      v34 = 0;
    }
    EnableEntity = ServantTreasureDeviceAddMaster__GetEnableEntity(v35, v36, v37, v38, id, v34, 0LL);
  }
  SvtId = (ServantStatusNpComponent_o *)this->fields.transformNameSprite;
  if ( !SvtId )
    goto LABEL_131;
  IsTransformServant_k__BackingField = item->fields._IsTransformServant_k__BackingField;
  SvtId = (ServantStatusNpComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)SvtId, 0LL);
  if ( !SvtId )
    goto LABEL_131;
  if ( IsTransformServant_k__BackingField )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SvtId, 1, 0LL);
    transformNameLabel = this->fields.transformNameLabel;
    SvtId = (ServantStatusNpComponent_o *)ServantStatusListViewItem__GetTransformName(item, 0LL);
    if ( !transformNameLabel )
      goto LABEL_131;
    UILabel__set_text(transformNameLabel, (System_String_o *)SvtId, 0LL);
    IsTransformServant_k__BackingField = this->fields.transformNameAddHeight;
    v97 = -IsTransformServant_k__BackingField;
  }
  else
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SvtId, 0, 0LL);
    v97 = 0;
  }
  v96 = ConvertOverwriteDispImageLimitCount;
  if ( EnableEntity )
  {
    DispMaskTreasureDevices = ServantTreasureDeviceAddEntity__GetDispMaskTreasureDevices(EnableEntity, 0LL);
    FixedCardLimitCounts = ServantTreasureDeviceAddEntity__GetFixedCardLimitCounts(EnableEntity, 0LL);
  }
  else
  {
    FixedCardLimitCounts = 0LL;
    DispMaskTreasureDevices = 0LL;
  }
  for ( i = 0LL; ; ++i )
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
      if ( (__int64)i < (int)treasureDeviceIds->max_length )
      {
        npList = this->fields.npList;
        if ( !npList )
          goto LABEL_131;
        if ( i >= npList->max_length )
          goto LABEL_132;
        SvtId = npList->m_Items[i];
        if ( !SvtId )
          goto LABEL_131;
        SvtId = (ServantStatusNpComponent_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)SvtId,
                                                0LL);
        if ( !SvtId )
          goto LABEL_131;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SvtId, 1, 0LL);
        v49 = this->fields.npList;
        if ( !v49 )
          goto LABEL_131;
        if ( i >= v49->max_length )
          goto LABEL_132;
        v50 = EnableEntity->fields.treasureDeviceIds;
        if ( !v50 )
          goto LABEL_131;
        if ( i >= v50->max_length )
          goto LABEL_132;
        titles = EnableEntity->fields.titles;
        if ( !titles )
          goto LABEL_131;
        if ( i >= titles->max_length )
          goto LABEL_132;
        closedMessages = EnableEntity->fields.closedMessages;
        if ( !closedMessages )
          goto LABEL_131;
        if ( i >= closedMessages->max_length )
          goto LABEL_132;
        hideCardChara = EnableEntity->fields.hideCardChara;
        if ( !hideCardChara )
          goto LABEL_131;
        if ( i >= hideCardChara->max_length )
          goto LABEL_132;
        v43 = *p_tdInfo;
        SvtId = v49->m_Items[i];
        v54 = titles->m_Items[i];
        closedMessage = closedMessages->m_Items[i];
        if ( DispMaskTreasureDevices )
        {
          if ( i >= DispMaskTreasureDevices->max_length )
            goto LABEL_132;
          dispMaskTreasureDevice = DispMaskTreasureDevices->m_Items[i + 1];
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
          if ( i >= FixedCardLimitCounts->max_length )
            goto LABEL_132;
          fixedCardLimitCount = FixedCardLimitCounts->m_Items[i + 1];
          if ( !SvtId )
            goto LABEL_131;
        }
        ServantStatusNpComponent__Set(
          SvtId,
          i,
          v43,
          item,
          v50->m_Items[i + 1],
          1,
          EnableEntity->fields.condLimitCount,
          v54,
          closedMessage,
          hideCardChara->m_Items[i + 1],
          dispMaskTreasureDevice,
          fixedCardLimitCount,
          0LL);
        v61 = this->fields.npList;
        if ( !v61 )
          goto LABEL_131;
        if ( i >= v61->max_length )
LABEL_132:
          sub_1BCB25C(SvtId, v20, v43);
        v62 = v61->m_Items[i];
        v101.fields.r = 0.0;
        v101.fields.g = 0.0;
        v101.fields.b = 0.0;
        v101.fields.a = 1.0;
        CondLabelColor = ServantTreasureDeviceAddEntity__GetCondLabelColor(EnableEntity, v101, 0LL);
        r = CondLabelColor.fields.r;
        g = CondLabelColor.fields.g;
        b = CondLabelColor.fields.b;
        a = CondLabelColor.fields.a;
        CondLabelColor.fields.r = 1.0;
        CondLabelColor.fields.g = 1.0;
        CondLabelColor.fields.b = 1.0;
        CondLabelColor.fields.a = 1.0;
        *(UnityEngine_Color_o *)&v67 = ServantTreasureDeviceAddEntity__GetCondSpriteColor(
                                         EnableEntity,
                                         CondLabelColor,
                                         0LL);
        if ( !v62 )
          goto LABEL_131;
        v104.fields.r = v67;
        v104.fields.g = v68;
        v104.fields.b = v69;
        v104.fields.a = v70;
        v103.fields.r = r;
        v103.fields.g = g;
        v103.fields.b = b;
        v103.fields.a = a;
        ServantStatusNpComponent__SetCondColor(v62, v103, v104, 0LL);
        v71 = this->fields.npList;
        if ( !v71 )
          goto LABEL_131;
        if ( i >= v71->max_length )
          goto LABEL_132;
        v60 = (struct ServantStatusNpComponent_array *)((char *)v71 + 8 * i);
        goto LABEL_83;
      }
    }
    v58 = this->fields.npList;
    if ( !v58 )
      goto LABEL_131;
    if ( i >= v58->max_length )
      goto LABEL_132;
    SvtId = v58->m_Items[i];
    if ( !SvtId )
      goto LABEL_131;
    SvtId = (ServantStatusNpComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)SvtId, 0LL);
    if ( !SvtId )
      goto LABEL_131;
    if ( i )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SvtId, 0, 0LL);
      continue;
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SvtId, 1, 0LL);
    v59 = this->fields.npList;
    if ( !v59 )
      goto LABEL_131;
    if ( !v59->max_length )
      goto LABEL_132;
    if ( !*p_tdInfo )
      goto LABEL_131;
    SvtId = v59->m_Items[0];
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
      0LL);
    v60 = this->fields.npList;
    if ( !v60 )
      goto LABEL_131;
    if ( !v60->max_length )
      goto LABEL_132;
LABEL_83:
    v72 = v60->m_Items[0];
    if ( !v72 )
      goto LABEL_131;
    IsTransformServant_k__BackingField += this->fields.npPitch + v72->fields._Adjust_k__BackingField;
  }
  if ( IsTransformServant_k__BackingField >= 0 )
    v73 = IsTransformServant_k__BackingField;
  else
    v73 = IsTransformServant_k__BackingField + 1;
  v74 = IsTransformServant_k__BackingField - (v73 & 0xFFFFFFFE) + IsTransformServant_k__BackingField;
  if ( item->fields._IsDisplayCombineButton_k__BackingField )
  {
    userSvtEntity = item->fields.userSvtEntity;
    if ( userSvtEntity )
    {
      SvtId = (ServantStatusNpComponent_o *)UserServantEntity__IsHeroine(userSvtEntity, 0LL);
      if ( ((unsigned __int8)SvtId & 1) == 0 )
      {
        if ( *p_tdInfo )
        {
          if ( (*p_tdInfo)->fields.lv >= (*p_tdInfo)->fields.maxLv )
            goto LABEL_100;
          SvtId = (ServantStatusNpComponent_o *)this->fields.reinforceObject;
          if ( SvtId )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SvtId, 1, 0LL);
            SvtId = (ServantStatusNpComponent_o *)this->fields.reinforceButton;
            if ( SvtId )
            {
              BYTE1(SvtId->fields.commandCardBase) = 1;
              v74 += 58;
              UICommonButton__SetEnable((UICommonButton_o *)SvtId, item->fields._CanMoveCombine_k__BackingField, 0LL);
              if ( v74 >= 0 )
                v76 = v74;
              else
                v76 = v74 + 1;
              GameObjectExtensions__SetLocalPositionY(this->fields.reinforceObject, (float)-(v76 >> 1), 0LL);
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
  v81 = y + (float)v74;
  if ( UnityEngine_Object__op_Inequality(baseCollider, 0LL, 0LL) )
  {
    SvtId = (ServantStatusNpComponent_o *)this->fields.baseCollider;
    if ( !SvtId )
      goto LABEL_131;
    v98.fields.x = x;
    v98.fields.y = v81;
    v98.fields.z = z;
    UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)SvtId, v98, 0LL);
  }
  SvtId = (ServantStatusNpComponent_o *)this->fields.baseSprite;
  if ( !SvtId )
    goto LABEL_131;
  v82 = x == INFINITY ? 0x80000000 : (int)x;
  UIWidget__set_width((UIWidget_o *)SvtId, v82, 0LL);
  SvtId = (ServantStatusNpComponent_o *)this->fields.baseSprite;
  if ( !SvtId )
    goto LABEL_131;
  v83 = v81 == INFINITY ? 0x80000000 : (int)v81;
  UIWidget__set_height((UIWidget_o *)SvtId, v83, 0LL);
  SvtId = (ServantStatusNpComponent_o *)this->fields.titleObject;
  v84 = v74 + (v74 < 0);
  if ( !SvtId
    || (v85 = this->fields.titleBasePosition.fields.x,
        v86 = this->fields.titleBasePosition.fields.y,
        v87 = this->fields.titleBasePosition.fields.z,
        (SvtId = (ServantStatusNpComponent_o *)UnityEngine_GameObject__get_transform(
                                                 (UnityEngine_GameObject_o *)SvtId,
                                                 0LL)) == 0LL) )
  {
LABEL_131:
    sub_1BCB254(SvtId, v20);
  }
  v88 = v84 >> 1;
  v99.fields.y = v86 + (float)(v84 >> 1);
  v99.fields.x = v85;
  v99.fields.z = v87;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)SvtId, v99, 0LL);
  v89 = this->fields.npBasePosition.fields.x;
  v90 = this->fields.npBasePosition.fields.z;
  v91 = 0;
  for ( j = this->fields.npBasePosition.fields.y + (float)(v88 + v97);
        ;
        j = (float)(j - (float)this->fields.npPitch) - (float)v95->fields._Adjust_k__BackingField )
  {
    SvtId = (ServantStatusNpComponent_o *)ServantStatusListViewItemDrawNp_TypeInfo;
    if ( !ServantStatusListViewItemDrawNp_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawNp_TypeInfo);
      SvtId = (ServantStatusNpComponent_o *)ServantStatusListViewItemDrawNp_TypeInfo;
    }
    if ( (signed int)v91 >= (__int64)SvtId->fields.commandCardComponent->klass )
      break;
    v93 = this->fields.npList;
    if ( !v93 )
      goto LABEL_131;
    if ( v91 >= v93->max_length )
      goto LABEL_132;
    SvtId = v93->m_Items[v91];
    if ( !SvtId )
      goto LABEL_131;
    SvtId = (ServantStatusNpComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)SvtId, 0LL);
    if ( !SvtId )
      goto LABEL_131;
    v100.fields.x = v89;
    v100.fields.y = j;
    v100.fields.z = v90;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)SvtId, v100, 0LL);
    v94 = this->fields.npList;
    if ( !v94 )
      goto LABEL_131;
    if ( v91 >= v94->max_length )
      goto LABEL_132;
    v95 = v94->m_Items[v91];
    if ( !v95 )
      goto LABEL_131;
    ++v91;
  }
  if ( this->fields.isStart && this->fields.dispLimitCnt != v96 )
  {
    ((void (__fastcall *)(ServantStatusListViewItemDrawNp_o *, ServantStatusListViewItem_o *, Il2CppMethodPointer))this->klass->vtable._7_ModifyCommandCard.method)(
      this,
      item,
      this->klass->vtable._8_ModifyFace.methodPtr);
    this->fields.dispLimitCnt = v96;
  }
}