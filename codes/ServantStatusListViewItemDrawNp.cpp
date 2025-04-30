void __fastcall ServantStatusListViewItemDrawNp___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4A4BCD7 & 1) == 0 )
  {
    sub_1B863B8(&ServantStatusListViewItemDrawNp_TypeInfo, v1);
    byte_4A4BCD7 = 1;
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

  if ( (byte_4A4BCD6 & 1) == 0 )
  {
    sub_1B863B8(&ServantStatusListViewItemDrawNp_TypeInfo, method);
    sub_1B863B8(&ServantStatusNpComponent___TypeInfo, v3);
    byte_4A4BCD6 = 1;
  }
  v4 = ServantStatusListViewItemDrawNp_TypeInfo;
  if ( !ServantStatusListViewItemDrawNp_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawNp_TypeInfo);
    v4 = ServantStatusListViewItemDrawNp_TypeInfo;
  }
  v5 = (struct ServantStatusNpComponent_array *)sub_1B86460(
                                                  ServantStatusNpComponent___TypeInfo,
                                                  v4->static_fields->NP_LIST_MAX);
  this->fields.npList = v5;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.npList, (int32_t)v5, v6, v7);
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
  float v4; // s1
  struct ServantStatusNpComponent_array *v5; // x8
  float v6; // s8
  float v7; // s1
  unsigned int v8; // w9
  struct UISprite_o *baseSprite; // x9
  int v10; // w20
  float v11; // s1
  float v12; // s0
  float v13; // s1
  float v14; // s2
  struct ServantStatusNpComponent_array *v15; // x8
  int v16; // w9
  float v17; // s8
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
    *(UnityEngine_Vector3_o *)(&v4 - 1) = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
    v5 = v3->fields.npList;
    if ( !v5 )
      goto LABEL_24;
    if ( v5->max_length <= 1 )
      goto LABEL_25;
    this = (ServantStatusListViewItemDrawNp_o *)v5->m_Items[1];
    if ( !this )
      goto LABEL_24;
    v6 = v4;
    this = (ServantStatusListViewItemDrawNp_o *)UnityEngine_Component__get_transform(
                                                  (UnityEngine_Component_o *)this,
                                                  0LL);
    if ( !this )
      goto LABEL_24;
    *(UnityEngine_Vector3_o *)(&v7 - 1) = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
    npList = v3->fields.npList;
    v8 = (float)(v6 - v7) == INFINITY ? 0x80000000 : (int)(float)(v6 - v7);
    v3->fields.npPitch = v8;
    if ( !npList )
      goto LABEL_24;
  }
  baseSprite = v3->fields.baseSprite;
  if ( !baseSprite )
    goto LABEL_24;
  this = (ServantStatusListViewItemDrawNp_o *)v3->fields.titleObject;
  v10 = v3->fields.npPitch * npList->max_length;
  v11 = (float)(baseSprite->fields.mHeight - v10);
  v3->fields.baseSize.fields.x = (float)baseSprite->fields.mWidth;
  v3->fields.baseSize.fields.y = v11;
  v3->fields.baseSize.fields.z = 0.0;
  if ( !this )
    goto LABEL_24;
  this = (ServantStatusListViewItemDrawNp_o *)UnityEngine_GameObject__get_transform(
                                                (UnityEngine_GameObject_o *)this,
                                                0LL);
  if ( !this )
    goto LABEL_24;
  *(UnityEngine_Vector3_o *)&v12 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  v15 = v3->fields.npList;
  v16 = v10 >= 0 ? v10 : v10 + 1;
  v17 = (float)(v16 >> 1);
  v3->fields.titleBasePosition.fields.x = v12;
  v3->fields.titleBasePosition.fields.y = v13 - v17;
  v3->fields.titleBasePosition.fields.z = v14;
  if ( !v15 )
LABEL_24:
    sub_1B86614(this, method);
  if ( !v15->max_length )
LABEL_25:
    sub_1B8661C(this, method);
  this = (ServantStatusListViewItemDrawNp_o *)v15->m_Items[0];
  if ( !this )
    goto LABEL_24;
  this = (ServantStatusListViewItemDrawNp_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_24;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  v3->fields.npBasePosition.fields.x = localPosition.fields.x;
  v3->fields.npBasePosition.fields.y = localPosition.fields.y - v17;
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

  if ( (byte_4A4BCD5 & 1) == 0 )
  {
    sub_1B863B8(&ServantStatusListViewItemDrawNp_TypeInfo, item);
    byte_4A4BCD5 = 1;
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
      sub_1B8661C(v6, item);
    v6 = (ServantStatusListViewItemDrawNp_c *)npList->m_Items[v5];
    if ( !v6 )
LABEL_12:
      sub_1B86614(v6, item);
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
  System_Int32_array *DispMaskTreasureDevices; // x24
  System_Int32_array *FixedCardLimitCounts; // x25
  unsigned __int64 i; // x26
  struct System_Int32_array *treasureDeviceIds; // x8
  struct ServantStatusNpComponent_array *npList; // x8
  struct ServantStatusNpComponent_array *v48; // x8
  struct System_Int32_array *v49; // x9
  struct System_String_array *titles; // x10
  struct System_String_array *closedMessages; // x11
  struct System_Int32_array *hideCardChara; // x12
  System_String_o *v53; // x7
  System_String_o *closedMessage; // x8
  int32_t dispMaskTreasureDevice; // w10
  int32_t fixedCardLimitCount; // w11
  struct ServantStatusNpComponent_array *v57; // x8
  struct ServantStatusNpComponent_array *v58; // x8
  struct ServantStatusNpComponent_array *v59; // x8
  struct ServantStatusNpComponent_array *v60; // x8
  ServantStatusNpComponent_o *v61; // x27
  float r; // s8
  float g; // s9
  float b; // s10
  float a; // s11
  float v66; // s0
  float v67; // s1
  float v68; // s2
  float v69; // s3
  struct ServantStatusNpComponent_array *v70; // x8
  ServantStatusNpComponent_o *v71; // x8
  int v72; // w9
  int v73; // w21
  UserServantEntity_o *userSvtEntity; // x0
  int v75; // w8
  float y; // s8
  float x; // s9
  float z; // s10
  UnityEngine_Object_o *baseCollider; // x22
  float v80; // s8
  int32_t v81; // w1
  int32_t v82; // w1
  int v83; // w21
  float v84; // s8
  float v85; // s10
  float v86; // s9
  int v87; // w22
  float v88; // s8
  float v89; // s9
  il2cpp_array_size_t v90; // w21
  float j; // s10
  struct ServantStatusNpComponent_array *v92; // x8
  struct ServantStatusNpComponent_array *v93; // x8
  ServantStatusNpComponent_o *v94; // x8
  int32_t v95; // [xsp+30h] [xbp-90h]
  int v96; // [xsp+34h] [xbp-8Ch]
  UnityEngine_Vector3_o v97; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v98; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v99; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v100; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o CondLabelColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v102; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v103; // 0:s4.4,4:s5.4,8:s6.4,12:s7.4

  if ( (byte_4A4BCD4 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMasterData_ServantTreasureDeviceAddMaster___, item);
    sub_1B863B8(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v7);
    sub_1B863B8(&DataManager_TypeInfo, v8);
    sub_1B863B8(&ImageLimitCount_TypeInfo, v9);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v10);
    sub_1B863B8(&ServantStatusListViewItemDrawNp_TypeInfo, v11);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v12);
    sub_1B863B8(&TreasureDvcInfo_TypeInfo, v13);
    sub_1B863B8(&StringLiteral_1/*""*/, v14);
    byte_4A4BCD4 = 1;
  }
  this->fields.dispMode = mode;
  v15 = (TreasureDvcInfo_o *)sub_1B86604(TreasureDvcInfo_TypeInfo);
  TreasureDvcInfo___ctor(v15, 0LL);
  this->fields.tdInfo = v15;
  p_tdInfo = &this->fields.tdInfo;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.tdInfo, (int32_t)v15, v17, v18);
  if ( !item || !mode )
    return;
  ConvertOverwriteDispImageLimitCount = ServantStatusListViewItem__get_ConvertOverwriteDispImageLimitCount(item, 0LL);
  LimitCount = ServantStatusListViewItem__get_LimitCount(item, 0LL);
  v23 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v23 + 309) & 1) == 0 )
    v23 = sub_1BD6A48(v22);
  v24 = *(_QWORD *)(*(_QWORD *)(v23 + 192) + 16LL);
  if ( (*(_BYTE *)(v24 + 309) & 1) == 0 )
    v24 = sub_1BD6A48(v22);
  SvtId = **(ServantStatusNpComponent_o ***)(v24 + 184);
  if ( !SvtId )
    goto LABEL_131;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)SvtId,
                        (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ServantTreasureDeviceAddMaster___);
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
      Master_object = DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
      SvtId = (ServantStatusNpComponent_o *)ServantStatusListViewItem__get_SvtId(item, 0LL);
      if ( !Master_object )
        goto LABEL_131;
      ConvertOverwriteDispImageLimitCount = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                              (ServantLimitImageMaster_o *)Master_object,
                                              (int32_t)SvtId,
                                              ConvertOverwriteDispImageLimitCount,
                                              0LL);
      ServantStatusListViewItem__GetNpInfo_34671904(
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
    v96 = -IsTransformServant_k__BackingField;
  }
  else
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SvtId, 0, 0LL);
    v96 = 0;
  }
  v95 = ConvertOverwriteDispImageLimitCount;
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
        v48 = this->fields.npList;
        if ( !v48 )
          goto LABEL_131;
        if ( i >= v48->max_length )
          goto LABEL_132;
        v49 = EnableEntity->fields.treasureDeviceIds;
        if ( !v49 )
          goto LABEL_131;
        if ( i >= v49->max_length )
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
        SvtId = v48->m_Items[i];
        v53 = titles->m_Items[i];
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
          *p_tdInfo,
          item,
          v49->m_Items[i + 1],
          1,
          EnableEntity->fields.condLimitCount,
          v53,
          closedMessage,
          hideCardChara->m_Items[i + 1],
          dispMaskTreasureDevice,
          fixedCardLimitCount,
          0LL);
        v60 = this->fields.npList;
        if ( !v60 )
          goto LABEL_131;
        if ( i >= v60->max_length )
LABEL_132:
          sub_1B8661C(SvtId, v20);
        v61 = v60->m_Items[i];
        v100.fields.r = 0.0;
        v100.fields.g = 0.0;
        v100.fields.b = 0.0;
        v100.fields.a = 1.0;
        CondLabelColor = ServantTreasureDeviceAddEntity__GetCondLabelColor(EnableEntity, v100, 0LL);
        r = CondLabelColor.fields.r;
        g = CondLabelColor.fields.g;
        b = CondLabelColor.fields.b;
        a = CondLabelColor.fields.a;
        CondLabelColor.fields.r = 1.0;
        CondLabelColor.fields.g = 1.0;
        CondLabelColor.fields.b = 1.0;
        CondLabelColor.fields.a = 1.0;
        *(UnityEngine_Color_o *)&v66 = ServantTreasureDeviceAddEntity__GetCondSpriteColor(
                                         EnableEntity,
                                         CondLabelColor,
                                         0LL);
        if ( !v61 )
          goto LABEL_131;
        v103.fields.r = v66;
        v103.fields.g = v67;
        v103.fields.b = v68;
        v103.fields.a = v69;
        v102.fields.r = r;
        v102.fields.g = g;
        v102.fields.b = b;
        v102.fields.a = a;
        ServantStatusNpComponent__SetCondColor(v61, v102, v103, 0LL);
        v70 = this->fields.npList;
        if ( !v70 )
          goto LABEL_131;
        if ( i >= v70->max_length )
          goto LABEL_132;
        v59 = (struct ServantStatusNpComponent_array *)((char *)v70 + 8 * i);
        goto LABEL_83;
      }
    }
    v57 = this->fields.npList;
    if ( !v57 )
      goto LABEL_131;
    if ( i >= v57->max_length )
      goto LABEL_132;
    SvtId = v57->m_Items[i];
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
    v58 = this->fields.npList;
    if ( !v58 )
      goto LABEL_131;
    if ( !v58->max_length )
      goto LABEL_132;
    if ( !*p_tdInfo )
      goto LABEL_131;
    SvtId = v58->m_Items[0];
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
    v59 = this->fields.npList;
    if ( !v59 )
      goto LABEL_131;
    if ( !v59->max_length )
      goto LABEL_132;
LABEL_83:
    v71 = v59->m_Items[0];
    if ( !v71 )
      goto LABEL_131;
    IsTransformServant_k__BackingField += this->fields.npPitch + v71->fields._Adjust_k__BackingField;
  }
  if ( IsTransformServant_k__BackingField >= 0 )
    v72 = IsTransformServant_k__BackingField;
  else
    v72 = IsTransformServant_k__BackingField + 1;
  v73 = IsTransformServant_k__BackingField - (v72 & 0xFFFFFFFE) + IsTransformServant_k__BackingField;
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
              v73 += 58;
              UICommonButton__SetEnable((UICommonButton_o *)SvtId, item->fields._CanMoveCombine_k__BackingField, 0LL);
              if ( v73 >= 0 )
                v75 = v73;
              else
                v75 = v73 + 1;
              GameObjectExtensions__SetLocalPositionY(this->fields.reinforceObject, (float)-(v75 >> 1), 0LL);
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
  v80 = y + (float)v73;
  if ( UnityEngine_Object__op_Inequality(baseCollider, 0LL, 0LL) )
  {
    SvtId = (ServantStatusNpComponent_o *)this->fields.baseCollider;
    if ( !SvtId )
      goto LABEL_131;
    v97.fields.x = x;
    v97.fields.y = v80;
    v97.fields.z = z;
    UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)SvtId, v97, 0LL);
  }
  SvtId = (ServantStatusNpComponent_o *)this->fields.baseSprite;
  if ( !SvtId )
    goto LABEL_131;
  v81 = x == INFINITY ? 0x80000000 : (int)x;
  UIWidget__set_width((UIWidget_o *)SvtId, v81, 0LL);
  SvtId = (ServantStatusNpComponent_o *)this->fields.baseSprite;
  if ( !SvtId )
    goto LABEL_131;
  v82 = v80 == INFINITY ? 0x80000000 : (int)v80;
  UIWidget__set_height((UIWidget_o *)SvtId, v82, 0LL);
  SvtId = (ServantStatusNpComponent_o *)this->fields.titleObject;
  v83 = v73 + (v73 < 0);
  if ( !SvtId
    || (v84 = this->fields.titleBasePosition.fields.x,
        v85 = this->fields.titleBasePosition.fields.y,
        v86 = this->fields.titleBasePosition.fields.z,
        (SvtId = (ServantStatusNpComponent_o *)UnityEngine_GameObject__get_transform(
                                                 (UnityEngine_GameObject_o *)SvtId,
                                                 0LL)) == 0LL) )
  {
LABEL_131:
    sub_1B86614(SvtId, v20);
  }
  v87 = v83 >> 1;
  v98.fields.y = v85 + (float)(v83 >> 1);
  v98.fields.x = v84;
  v98.fields.z = v86;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)SvtId, v98, 0LL);
  v88 = this->fields.npBasePosition.fields.x;
  v89 = this->fields.npBasePosition.fields.z;
  v90 = 0;
  for ( j = this->fields.npBasePosition.fields.y + (float)(v87 + v96);
        ;
        j = (float)(j - (float)this->fields.npPitch) - (float)v94->fields._Adjust_k__BackingField )
  {
    SvtId = (ServantStatusNpComponent_o *)ServantStatusListViewItemDrawNp_TypeInfo;
    if ( !ServantStatusListViewItemDrawNp_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawNp_TypeInfo);
      SvtId = (ServantStatusNpComponent_o *)ServantStatusListViewItemDrawNp_TypeInfo;
    }
    if ( (signed int)v90 >= (__int64)SvtId->fields.commandCardComponent->klass )
      break;
    v92 = this->fields.npList;
    if ( !v92 )
      goto LABEL_131;
    if ( v90 >= v92->max_length )
      goto LABEL_132;
    SvtId = v92->m_Items[v90];
    if ( !SvtId )
      goto LABEL_131;
    SvtId = (ServantStatusNpComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)SvtId, 0LL);
    if ( !SvtId )
      goto LABEL_131;
    v99.fields.x = v88;
    v99.fields.y = j;
    v99.fields.z = v89;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)SvtId, v99, 0LL);
    v93 = this->fields.npList;
    if ( !v93 )
      goto LABEL_131;
    if ( v90 >= v93->max_length )
      goto LABEL_132;
    v94 = v93->m_Items[v90];
    if ( !v94 )
      goto LABEL_131;
    ++v90;
  }
  if ( this->fields.isStart && this->fields.dispLimitCnt != v95 )
  {
    ((void (__fastcall *)(ServantStatusListViewItemDrawNp_o *, ServantStatusListViewItem_o *, Il2CppMethodPointer))this->klass->vtable._7_ModifyCommandCard.method)(
      this,
      item,
      this->klass->vtable._8_ModifyFace.methodPtr);
    this->fields.dispLimitCnt = v95;
  }
}