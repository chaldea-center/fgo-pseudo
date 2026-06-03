void ServantStatusListViewItemDrawNp___cctor(const MethodInfo *method)
{
  if ( (byte_4E74621 & 1) == 0 )
  {
    sub_1D0F0B4(&ServantStatusListViewItemDrawNp_TypeInfo);
    byte_4E74621 = 1;
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

  if ( (byte_4E74620 & 1) == 0 )
  {
    sub_1D0F0B4(&ServantStatusListViewItemDrawNp_TypeInfo);
    sub_1D0F0B4(&ServantStatusNpComponent___TypeInfo);
    byte_4E74620 = 1;
  }
  v3 = ServantStatusListViewItemDrawNp_TypeInfo;
  if ( !ServantStatusListViewItemDrawNp_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawNp_TypeInfo);
    v3 = ServantStatusListViewItemDrawNp_TypeInfo;
  }
  v4 = (struct ServantStatusNpComponent_array *)sub_1D0F15C(
                                                  ServantStatusNpComponent___TypeInfo,
                                                  v3->static_fields->NP_LIST_MAX);
  this->fields.npList = v4;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.npList, (int32_t)v4, v5, v6, v7, v8, v9, v10);
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
    sub_1D0F30C(this, method);
  if ( !LODWORD(v10->max_length) )
LABEL_25:
    sub_1D0F314(this);
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

  if ( (byte_4E7461F & 1) == 0 )
  {
    sub_1D0F0B4(&ServantStatusListViewItemDrawNp_TypeInfo);
    byte_4E7461F = 1;
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
      sub_1D0F314(v6);
    v6 = (ServantStatusListViewItemDrawNp_c *)npList->m_Items[v5];
    if ( !v6 )
LABEL_12:
      sub_1D0F30C(v6, item);
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
  Il2CppObject *Master_object; // x21
  Il2CppObject *v16; // x23
  int32_t SvtId; // w24
  ServantStatusNpComponent_o *LimitCount; // x0
  __int64 v19; // x1
  int32_t ServantLimitCountSealAfter; // w25
  int32_t DispLimitCountStageSealAfterIndexZero; // w27
  bool IsMine; // w26
  int32_t v23; // w5
  ServantTreasureDeviceAddMaster_o *v24; // x0
  int32_t v25; // w1
  int32_t v26; // w2
  int32_t v27; // w3
  int32_t id; // w4
  ServantTreasureDeviceAddEntity_o *EnableEntity; // x23
  UIWidget_o *transformNameLabel; // x24
  UIWidget_o *transformNameSprite; // x24
  UILabel_o *v32; // x24
  int32_t transformNameAddHeight; // w21
  int v34; // w8
  System_Int32_array *DispMaskTreasureDevices; // x24
  System_Int32_array *FixedCardLimitCounts; // x25
  unsigned __int64 i; // x26
  struct System_Int32_array *treasureDeviceIds; // x8
  struct ServantStatusNpComponent_array *npList; // x8
  struct ServantStatusNpComponent_array *v40; // x9
  struct System_Int32_array *v41; // x10
  il2cpp_array_size_t max_length; // x8
  struct System_String_array *titles; // x11
  struct System_String_array *closedMessages; // x12
  struct System_Int32_array *hideCardChara; // x13
  System_String_o *v46; // x7
  System_String_o *closedMessage; // x9
  int32_t dispMaskTreasureDevice; // w11
  int32_t fixedCardLimitCount; // w12
  struct ServantStatusNpComponent_array *v50; // x8
  struct ServantStatusNpComponent_array *v51; // x8
  struct ServantStatusNpComponent_array *v52; // x8
  struct ServantStatusNpComponent_array *v53; // x8
  ServantStatusNpComponent_o *v54; // x27
  System_String_o *CondLabelColor; // x0
  float r; // s8
  float g; // s9
  float b; // s10
  float a; // s11
  System_String_o *CondSpriteColor; // x0
  struct ServantStatusNpComponent_array *v61; // x8
  ServantStatusNpComponent_o *v62; // x8
  int32_t v63; // w9
  int v64; // w21
  UserServantEntity_o *userSvtEntity; // x0
  int v66; // w8
  float y; // s8
  float x; // s9
  float z; // s10
  UnityEngine_Object_o *baseCollider; // x22
  float v71; // s8
  int32_t v72; // w1
  int32_t v73; // w1
  int v74; // w21
  float v75; // s8
  float v76; // s10
  float v77; // s9
  int v78; // w22
  float v79; // s8
  float v80; // s9
  unsigned int v81; // w21
  float j; // s10
  struct ServantStatusNpComponent_array *v83; // x8
  struct ServantStatusNpComponent_array *v84; // x8
  ServantStatusNpComponent_o *v85; // x8
  int32_t v86; // [xsp+30h] [xbp-90h]
  int v87; // [xsp+34h] [xbp-8Ch]
  UnityEngine_Vector3_o v88; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v89; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v90; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o TransformNameLabelColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o TransformNameSpriteColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v93; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v94; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v95; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v96; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v97; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v98; // 0:s4.4,4:s5.4,8:s6.4,12:s7.4

  if ( (byte_4E7461E & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMaster_ServantTreasureDeviceAddMaster___);
    sub_1D0F0B4(&DataManager_TypeInfo);
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    sub_1D0F0B4(&ServantStatusListViewItemDrawNp_TypeInfo);
    sub_1D0F0B4(&TreasureDvcInfo_TypeInfo);
    sub_1D0F0B4(&StringLiteral_1/*""*/);
    byte_4E7461E = 1;
  }
  this->fields.dispMode = mode;
  v7 = (TreasureDvcInfo_o *)sub_1D0F300(TreasureDvcInfo_TypeInfo);
  TreasureDvcInfo___ctor(v7, 0);
  this->fields.tdInfo = v7;
  p_tdInfo = &this->fields.tdInfo;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.tdInfo, (int32_t)v7, v9, v10, v11, v12, v13, v14);
  if ( !item || !mode )
    return;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  v16 = DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_ServantTreasureDeviceAddMaster___);
  SvtId = ServantStatusListViewItem__GetSvtId(item, 1, 0);
  LimitCount = (ServantStatusNpComponent_o *)ServantStatusListViewItem__get_LimitCount(item, 0);
  if ( !Master_object )
    goto LABEL_125;
  ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                 (ServantLimitImageMaster_o *)Master_object,
                                 SvtId,
                                 (int32_t)LimitCount,
                                 0);
  DispLimitCountStageSealAfterIndexZero = ServantStatusListViewItem__GetDispLimitCountStageSealAfterIndexZero(
                                            item,
                                            1,
                                            0);
  if ( item->fields._IsTransformed_k__BackingField )
  {
    ServantStatusListViewItem__GetTransformedNpInfo(item, &this->fields.tdInfo, 0);
  }
  else
  {
    IsMine = ServantStatusListViewItem__get_IsMine(item, 0);
    LimitCount = (ServantStatusNpComponent_o *)ServantStatusListViewItem__GetNpInfo(item, &this->fields.tdInfo, 0);
    if ( !IsMine )
    {
      if ( !*p_tdInfo || !v16 )
        goto LABEL_125;
      id = (*p_tdInfo)->fields.id;
      v24 = (ServantTreasureDeviceAddMaster_o *)v16;
      v25 = SvtId;
      v26 = ServantLimitCountSealAfter;
      v27 = DispLimitCountStageSealAfterIndexZero;
      v23 = 0;
      goto LABEL_13;
    }
  }
  LimitCount = (ServantStatusNpComponent_o *)ServantStatusListViewItem__get_LimitCount(item, 0);
  if ( !v16 )
    goto LABEL_125;
  v23 = (int)LimitCount;
  v24 = (ServantTreasureDeviceAddMaster_o *)v16;
  v25 = SvtId;
  v26 = ServantLimitCountSealAfter;
  v27 = DispLimitCountStageSealAfterIndexZero;
  id = 0;
LABEL_13:
  EnableEntity = ServantTreasureDeviceAddMaster__GetEnableEntity(v24, v25, v26, v27, id, v23, 0);
  if ( ServantStatusListViewItem__get_AnyTransformServant(item, 0) )
  {
    transformNameLabel = (UIWidget_o *)this->fields.transformNameLabel;
    TransformNameLabelColor = ServantStatusListViewItem__get_TransformNameLabelColor(item, 0);
    if ( !transformNameLabel )
      goto LABEL_125;
    UIWidget__set_color(transformNameLabel, TransformNameLabelColor, 0);
    transformNameSprite = (UIWidget_o *)this->fields.transformNameSprite;
    TransformNameSpriteColor = ServantStatusListViewItem__get_TransformNameSpriteColor(item, 0);
    if ( !transformNameSprite )
      goto LABEL_125;
    UIWidget__set_color(transformNameSprite, TransformNameSpriteColor, 0);
    LimitCount = (ServantStatusNpComponent_o *)this->fields.transformNameSprite;
    if ( !LimitCount )
      goto LABEL_125;
    LimitCount = (ServantStatusNpComponent_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)LimitCount,
                                                 0);
    if ( !LimitCount )
      goto LABEL_125;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)LimitCount, 1, 0);
    v32 = this->fields.transformNameLabel;
    LimitCount = (ServantStatusNpComponent_o *)ServantStatusListViewItem__GetTransformName(item, 0);
    if ( !v32 )
      goto LABEL_125;
    UILabel__set_text(v32, (System_String_o *)LimitCount, 0);
    transformNameAddHeight = this->fields.transformNameAddHeight;
    v34 = -transformNameAddHeight;
  }
  else
  {
    LimitCount = (ServantStatusNpComponent_o *)this->fields.transformNameSprite;
    if ( !LimitCount )
      goto LABEL_125;
    LimitCount = (ServantStatusNpComponent_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)LimitCount,
                                                 0);
    if ( !LimitCount )
      goto LABEL_125;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)LimitCount, 0, 0);
    v34 = 0;
    transformNameAddHeight = 0;
  }
  v86 = DispLimitCountStageSealAfterIndexZero;
  v87 = v34;
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
    LimitCount = (ServantStatusNpComponent_o *)ServantStatusListViewItemDrawNp_TypeInfo;
    if ( !ServantStatusListViewItemDrawNp_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawNp_TypeInfo);
      LimitCount = (ServantStatusNpComponent_o *)ServantStatusListViewItemDrawNp_TypeInfo;
    }
    if ( (__int64)i >= (__int64)LimitCount->fields.commandCardComponent->klass )
      break;
    if ( EnableEntity )
    {
      treasureDeviceIds = EnableEntity->fields.treasureDeviceIds;
      if ( !treasureDeviceIds )
        goto LABEL_125;
      if ( (__int64)i < SLODWORD(treasureDeviceIds->max_length) )
      {
        npList = this->fields.npList;
        if ( !npList )
          goto LABEL_125;
        if ( i >= LODWORD(npList->max_length) )
          goto LABEL_126;
        LimitCount = npList->m_Items[i];
        if ( !LimitCount )
          goto LABEL_125;
        LimitCount = (ServantStatusNpComponent_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)LimitCount,
                                                     0);
        if ( !LimitCount )
          goto LABEL_125;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)LimitCount, 1, 0);
        v40 = this->fields.npList;
        if ( !v40 )
          goto LABEL_125;
        if ( i >= LODWORD(v40->max_length) )
          goto LABEL_126;
        v41 = EnableEntity->fields.treasureDeviceIds;
        if ( !v41 )
          goto LABEL_125;
        max_length = v41->max_length;
        if ( i >= (unsigned int)max_length )
          goto LABEL_126;
        titles = EnableEntity->fields.titles;
        if ( !titles )
          goto LABEL_125;
        if ( i >= LODWORD(titles->max_length) )
          goto LABEL_126;
        closedMessages = EnableEntity->fields.closedMessages;
        if ( !closedMessages )
          goto LABEL_125;
        if ( i >= LODWORD(closedMessages->max_length) )
          goto LABEL_126;
        hideCardChara = EnableEntity->fields.hideCardChara;
        if ( !hideCardChara )
          goto LABEL_125;
        if ( i >= LODWORD(hideCardChara->max_length) )
          goto LABEL_126;
        LimitCount = v40->m_Items[i];
        v46 = titles->m_Items[i];
        closedMessage = closedMessages->m_Items[i];
        if ( DispMaskTreasureDevices )
        {
          if ( i >= LODWORD(DispMaskTreasureDevices->max_length) )
            goto LABEL_126;
          dispMaskTreasureDevice = DispMaskTreasureDevices->m_Items[i];
          if ( FixedCardLimitCounts )
            goto LABEL_50;
LABEL_67:
          fixedCardLimitCount = 1;
          if ( !LimitCount )
            goto LABEL_125;
        }
        else
        {
          dispMaskTreasureDevice = -1;
          if ( !FixedCardLimitCounts )
            goto LABEL_67;
LABEL_50:
          if ( i >= LODWORD(FixedCardLimitCounts->max_length) )
            goto LABEL_126;
          fixedCardLimitCount = FixedCardLimitCounts->m_Items[i];
          if ( !LimitCount )
            goto LABEL_125;
        }
        ServantStatusNpComponent__Set(
          LimitCount,
          i,
          *p_tdInfo,
          item,
          v41->m_Items[i],
          (int)max_length > 1,
          EnableEntity->fields.condLimitCount,
          v46,
          closedMessage,
          hideCardChara->m_Items[i],
          dispMaskTreasureDevice,
          fixedCardLimitCount,
          0);
        v53 = this->fields.npList;
        if ( !v53 )
          goto LABEL_125;
        if ( i >= LODWORD(v53->max_length) )
LABEL_126:
          sub_1D0F314(LimitCount);
        v54 = v53->m_Items[i];
        CondLabelColor = ServantTreasureDeviceAddEntity__GetCondLabelColor(EnableEntity, 0);
        v93.fields.r = 0.0;
        v93.fields.g = 0.0;
        v93.fields.b = 0.0;
        v93.fields.a = 1.0;
        v94 = ColorHelper__ParseColorCode_45504796(CondLabelColor, v93, 0);
        r = v94.fields.r;
        g = v94.fields.g;
        b = v94.fields.b;
        a = v94.fields.a;
        CondSpriteColor = ServantTreasureDeviceAddEntity__GetCondSpriteColor(EnableEntity, 0);
        v95.fields.r = 1.0;
        v95.fields.g = 1.0;
        v95.fields.b = 1.0;
        v95.fields.a = 1.0;
        v96 = ColorHelper__ParseColorCode_45504796(CondSpriteColor, v95, 0);
        if ( !v54 )
          goto LABEL_125;
        v98 = v96;
        v97.fields.r = r;
        v97.fields.g = g;
        v97.fields.b = b;
        v97.fields.a = a;
        ServantStatusNpComponent__SetCondColor(v54, v97, v98, 0);
        v61 = this->fields.npList;
        if ( !v61 )
          goto LABEL_125;
        if ( i >= LODWORD(v61->max_length) )
          goto LABEL_126;
        v52 = (struct ServantStatusNpComponent_array *)((char *)v61 + 8 * i);
        goto LABEL_74;
      }
    }
    v50 = this->fields.npList;
    if ( !v50 )
      goto LABEL_125;
    if ( i >= LODWORD(v50->max_length) )
      goto LABEL_126;
    LimitCount = v50->m_Items[i];
    if ( !LimitCount )
      goto LABEL_125;
    LimitCount = (ServantStatusNpComponent_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)LimitCount,
                                                 0);
    if ( !LimitCount )
      goto LABEL_125;
    if ( i )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)LimitCount, 0, 0);
      continue;
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)LimitCount, 1, 0);
    v51 = this->fields.npList;
    if ( !v51 )
      goto LABEL_125;
    if ( !LODWORD(v51->max_length) )
      goto LABEL_126;
    if ( !*p_tdInfo )
      goto LABEL_125;
    LimitCount = v51->m_Items[0];
    if ( !LimitCount )
      goto LABEL_125;
    ServantStatusNpComponent__Set(
      LimitCount,
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
      goto LABEL_125;
    if ( !LODWORD(v52->max_length) )
      goto LABEL_126;
LABEL_74:
    v62 = v52->m_Items[0];
    if ( !v62 )
      goto LABEL_125;
    transformNameAddHeight += this->fields.npPitch + v62->fields._Adjust_k__BackingField;
  }
  if ( transformNameAddHeight >= 0 )
    v63 = transformNameAddHeight;
  else
    v63 = transformNameAddHeight + 1;
  v64 = transformNameAddHeight - (v63 & 0xFFFFFFFE) + transformNameAddHeight;
  if ( item->fields._IsDisplayCombineButton_k__BackingField )
  {
    userSvtEntity = item->fields.userSvtEntity;
    if ( userSvtEntity )
    {
      LimitCount = (ServantStatusNpComponent_o *)UserServantEntity__IsHeroine(userSvtEntity, 0);
      if ( ((unsigned __int8)LimitCount & 1) == 0 )
      {
        if ( *p_tdInfo )
        {
          if ( (*p_tdInfo)->fields.lv >= (*p_tdInfo)->fields.maxLv )
            goto LABEL_91;
          LimitCount = (ServantStatusNpComponent_o *)this->fields.reinforceObject;
          if ( LimitCount )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)LimitCount, 1, 0);
            LimitCount = (ServantStatusNpComponent_o *)this->fields.reinforceButton;
            if ( LimitCount )
            {
              BYTE1(LimitCount->fields.commandCardBase) = 1;
              v64 += 58;
              UICommonButton__SetEnable((UICommonButton_o *)LimitCount, item->fields._CanMoveCombine_k__BackingField, 0);
              if ( v64 >= 0 )
                v66 = v64;
              else
                v66 = v64 + 1;
              GameObjectExtensions__SetLocalPositionY(this->fields.reinforceObject, (float)-(v66 >> 1), 0);
              goto LABEL_91;
            }
          }
        }
        goto LABEL_125;
      }
    }
  }
LABEL_91:
  x = this->fields.baseSize.fields.x;
  y = this->fields.baseSize.fields.y;
  z = this->fields.baseSize.fields.z;
  baseCollider = (UnityEngine_Object_o *)this->fields.baseCollider;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v71 = y + (float)v64;
  if ( UnityEngine_Object__op_Inequality(baseCollider, 0, 0) )
  {
    LimitCount = (ServantStatusNpComponent_o *)this->fields.baseCollider;
    if ( !LimitCount )
      goto LABEL_125;
    v88.fields.x = x;
    v88.fields.y = v71;
    v88.fields.z = z;
    UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)LimitCount, v88, 0);
  }
  LimitCount = (ServantStatusNpComponent_o *)this->fields.baseSprite;
  if ( !LimitCount )
    goto LABEL_125;
  v72 = x == INFINITY ? 0x80000000 : (int)x;
  UIWidget__set_width((UIWidget_o *)LimitCount, v72, 0);
  LimitCount = (ServantStatusNpComponent_o *)this->fields.baseSprite;
  if ( !LimitCount )
    goto LABEL_125;
  v73 = v71 == INFINITY ? 0x80000000 : (int)v71;
  UIWidget__set_height((UIWidget_o *)LimitCount, v73, 0);
  LimitCount = (ServantStatusNpComponent_o *)this->fields.titleObject;
  v74 = v64 + (v64 < 0);
  if ( !LimitCount
    || (v75 = this->fields.titleBasePosition.fields.x,
        v76 = this->fields.titleBasePosition.fields.y,
        v77 = this->fields.titleBasePosition.fields.z,
        (LimitCount = (ServantStatusNpComponent_o *)UnityEngine_GameObject__get_transform(
                                                      (UnityEngine_GameObject_o *)LimitCount,
                                                      0)) == 0) )
  {
LABEL_125:
    sub_1D0F30C(LimitCount, v19);
  }
  v78 = v74 >> 1;
  v89.fields.y = v76 + (float)(v74 >> 1);
  v89.fields.x = v75;
  v89.fields.z = v77;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)LimitCount, v89, 0);
  v79 = this->fields.npBasePosition.fields.x;
  v80 = this->fields.npBasePosition.fields.z;
  v81 = 0;
  for ( j = this->fields.npBasePosition.fields.y + (float)(v78 + v87);
        ;
        j = (float)(j - (float)this->fields.npPitch) - (float)v85->fields._Adjust_k__BackingField )
  {
    LimitCount = (ServantStatusNpComponent_o *)ServantStatusListViewItemDrawNp_TypeInfo;
    if ( !ServantStatusListViewItemDrawNp_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawNp_TypeInfo);
      LimitCount = (ServantStatusNpComponent_o *)ServantStatusListViewItemDrawNp_TypeInfo;
    }
    if ( (signed int)v81 >= (__int64)LimitCount->fields.commandCardComponent->klass )
      break;
    v83 = this->fields.npList;
    if ( !v83 )
      goto LABEL_125;
    if ( v81 >= LODWORD(v83->max_length) )
      goto LABEL_126;
    LimitCount = v83->m_Items[v81];
    if ( !LimitCount )
      goto LABEL_125;
    LimitCount = (ServantStatusNpComponent_o *)UnityEngine_Component__get_transform(
                                                 (UnityEngine_Component_o *)LimitCount,
                                                 0);
    if ( !LimitCount )
      goto LABEL_125;
    v90.fields.x = v79;
    v90.fields.y = j;
    v90.fields.z = v80;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)LimitCount, v90, 0);
    v84 = this->fields.npList;
    if ( !v84 )
      goto LABEL_125;
    if ( v81 >= LODWORD(v84->max_length) )
      goto LABEL_126;
    v85 = v84->m_Items[v81];
    if ( !v85 )
      goto LABEL_125;
    ++v81;
  }
  if ( this->fields.isStart && this->fields.dispLimitCnt != v86 )
  {
    ((void (__fastcall *)(ServantStatusListViewItemDrawNp_o *, ServantStatusListViewItem_o *, const MethodInfo *))this->klass->vtable._6_ModifyCommandCard.methodPtr)(
      this,
      item,
      this->klass->vtable._6_ModifyCommandCard.method);
    this->fields.dispLimitCnt = v86;
  }
}