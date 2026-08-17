void ServantStatusListViewItemDrawNp___cctor(const MethodInfo *method)
{
  if ( (byte_596D35B & 1) == 0 )
  {
    sub_2213A60(&ServantStatusListViewItemDrawNp_TypeInfo);
    byte_596D35B = 1;
  }
  ServantStatusListViewItemDrawNp_TypeInfo->static_fields->NP_LIST_MAX = 2;
}


void ServantStatusListViewItemDrawNp___ctor(ServantStatusListViewItemDrawNp_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  ServantStatusListViewItemDrawNp_c *v4; // x0
  struct ServantStatusNpComponent_array *v5; // x0
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  if ( (byte_596D35A & 1) == 0 )
  {
    sub_2213A60(&ServantStatusListViewItemDrawNp_TypeInfo);
    sub_2213A60(&ServantStatusNpComponent___TypeInfo);
    byte_596D35A = 1;
  }
  v4 = ServantStatusListViewItemDrawNp_TypeInfo;
  if ( !*(&ServantStatusListViewItemDrawNp_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawNp_TypeInfo, method, v2);
    v4 = ServantStatusListViewItemDrawNp_TypeInfo;
  }
  v5 = (struct ServantStatusNpComponent_array *)sub_2213B20(
                                                  ServantStatusNpComponent___TypeInfo,
                                                  v4->static_fields->NP_LIST_MAX);
  this->fields.npList = v5;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.npList, (int32_t)v5, v6, v7, v8, v9, v10, v11);
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
  int v6; // w9
  struct UISprite_o *baseSprite; // x9
  int v8; // w20
  int32_t mHeight; // w8
  float mWidth; // s0
  int v11; // w8
  float v12; // s8
  struct ServantStatusNpComponent_array *v13; // x8
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v15; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v16; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v17; // 0:s0.4,4:s1.4,8:s2.4

  npList = this->fields.npList;
  if ( !npList )
    goto LABEL_23;
  v3 = this;
  if ( SLODWORD(npList->max_length) >= 2 )
  {
    this = (ServantStatusListViewItemDrawNp_o *)npList->m_Items[0];
    if ( !this )
      goto LABEL_23;
    this = (ServantStatusListViewItemDrawNp_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( !this )
      goto LABEL_23;
    localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
    v4 = v3->fields.npList;
    if ( !v4 )
      goto LABEL_23;
    if ( (v4->max_length & 0xFFFFFFFE) == 0 )
      goto LABEL_24;
    this = (ServantStatusListViewItemDrawNp_o *)v4->m_Items[1];
    if ( !this )
      goto LABEL_23;
    y = localPosition.fields.y;
    this = (ServantStatusListViewItemDrawNp_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( !this )
      goto LABEL_23;
    v15 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
    npList = v3->fields.npList;
    v6 = (int)(float)(y - v15.fields.y);
    if ( (float)(y - v15.fields.y) == INFINITY )
      v6 = 0x80000000;
    v3->fields.npPitch = v6;
    if ( !npList )
      goto LABEL_23;
  }
  baseSprite = v3->fields.baseSprite;
  if ( !baseSprite )
    goto LABEL_23;
  this = (ServantStatusListViewItemDrawNp_o *)v3->fields.titleObject;
  v8 = v3->fields.npPitch * LODWORD(npList->max_length);
  mHeight = baseSprite->fields.mHeight;
  mWidth = (float)baseSprite->fields.mWidth;
  v3->fields.baseSize.fields.z = 0.0;
  v3->fields.baseSize.fields.x = mWidth;
  v3->fields.baseSize.fields.y = (float)(mHeight - v8);
  if ( !this )
    goto LABEL_23;
  this = (ServantStatusListViewItemDrawNp_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
  if ( !this )
    goto LABEL_23;
  v16 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
  v3->fields.titleBasePosition.fields.x = v16.fields.x;
  v11 = v8 >= 0 ? v8 : v8 + 1;
  v12 = (float)(v11 >> 1);
  v13 = v3->fields.npList;
  v3->fields.titleBasePosition.fields.y = v16.fields.y - v12;
  v3->fields.titleBasePosition.fields.z = v16.fields.z;
  if ( !v13 )
LABEL_23:
    sub_2213CDC(this, method);
  if ( !LODWORD(v13->max_length) )
LABEL_24:
    sub_2213CE4(this);
  this = (ServantStatusListViewItemDrawNp_o *)v13->m_Items[0];
  if ( !this )
    goto LABEL_23;
  this = (ServantStatusListViewItemDrawNp_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_23;
  v17 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
  v3->fields.npBasePosition.fields.x = v17.fields.x;
  v3->fields.npBasePosition.fields.y = v17.fields.y - v12;
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
  __int64 v5; // x21
  ServantStatusListViewItemDrawNp_c *v6; // x0
  struct ServantStatusNpComponent_array *npList; // x8

  if ( (byte_596D359 & 1) == 0 )
  {
    sub_2213A60(&ServantStatusListViewItemDrawNp_TypeInfo);
    byte_596D359 = 1;
  }
  v5 = 0;
  this->fields.isStart = 1;
  while ( 1 )
  {
    v6 = ServantStatusListViewItemDrawNp_TypeInfo;
    if ( !*(&ServantStatusListViewItemDrawNp_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawNp_TypeInfo, item, method);
      v6 = ServantStatusListViewItemDrawNp_TypeInfo;
    }
    if ( (int)v5 >= v6->static_fields->NP_LIST_MAX )
      break;
    npList = this->fields.npList;
    if ( !npList )
      goto LABEL_12;
    if ( (unsigned int)v5 >= LODWORD(npList->max_length) )
      sub_2213CE4(v6);
    v6 = (ServantStatusListViewItemDrawNp_c *)npList->m_Items[v5];
    if ( !v6 )
LABEL_12:
      sub_2213CDC(v6, item);
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
  TreasureDvcInfo_c *v7; // x0
  TreasureDvcInfo_o *v8; // x23
  TreasureDvcInfo_o **p_tdInfo; // x22
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  __int64 v16; // x1
  __int64 v17; // x2
  Il2CppObject *Master_object; // x21
  Il2CppObject *v19; // x23
  int32_t SvtId; // w24
  ServantStatusNpComponent_o *LimitCount; // x0
  __int64 v22; // x1
  int32_t ServantLimitCountSealAfter; // w25
  int32_t DispLimitCountStageSealAfterIndexZero; // w27
  bool IsMine; // w26
  int32_t v26; // w5
  ServantTreasureDeviceAddMaster_o *v27; // x0
  int32_t v28; // w1
  int32_t v29; // w2
  int32_t v30; // w3
  int32_t id; // w4
  ServantTreasureDeviceAddEntity_o *EnableEntity; // x23
  UIWidget_o *transformNameLabel; // x24
  UIWidget_o *transformNameSprite; // x24
  UILabel_o *v35; // x24
  __int64 v36; // x2
  int32_t transformNameAddHeight; // w21
  int v38; // w8
  System_Int32_array *DispMaskTreasureDevices; // x24
  System_Int32_array *FixedCardLimitCounts; // x25
  unsigned __int64 i; // x26
  struct System_Int32_array *treasureDeviceIds; // x8
  struct ServantStatusNpComponent_array *npList; // x8
  struct ServantStatusNpComponent_array *v44; // x9
  struct System_Int32_array *v45; // x10
  il2cpp_array_size_t max_length; // x8
  struct System_String_array *titles; // x11
  struct System_String_array *closedMessages; // x12
  struct System_Int32_array *hideCardChara; // x13
  System_String_o *v50; // x7
  System_String_o *closedMessage; // x9
  int32_t dispMaskTreasureDevice; // w11
  int32_t fixedCardLimitCount; // w12
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
  int v67; // w8
  int v68; // w21
  UserServantEntity_o *userSvtEntity; // x0
  bool CanMoveCombine_k__BackingField; // w1
  int v71; // w8
  float x; // s9
  float y; // s11
  float z; // s10
  UnityEngine_Object_o *baseCollider; // x22
  float v76; // s8
  int32_t v77; // w1
  int32_t v78; // w1
  int v79; // w21
  float v80; // s8
  float v81; // s10
  float v82; // s9
  int v83; // w21
  __int64 v84; // x2
  float v85; // s8
  float v86; // s9
  int v87; // w8
  __int64 v88; // x21
  float j; // s10
  unsigned int v90; // w22
  struct ServantStatusNpComponent_array *v91; // x8
  struct ServantStatusNpComponent_array *v92; // x8
  __int64 v93; // x8
  int32_t v94; // [xsp+30h] [xbp-90h]
  int v95; // [xsp+34h] [xbp-8Ch]
  UnityEngine_Vector3_o v96; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v97; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v98; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o TransformNameLabelColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o TransformNameSpriteColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v101; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v102; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v103; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v104; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v105; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v106; // 0:s4.4,4:s5.4,8:s6.4,12:s7.4

  if ( (byte_596D358 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ServantTreasureDeviceAddMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&ServantStatusListViewItemDrawNp_TypeInfo);
    sub_2213A60(&TreasureDvcInfo_TypeInfo);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596D358 = 1;
  }
  v7 = TreasureDvcInfo_TypeInfo;
  this->fields.dispMode = mode;
  v8 = (TreasureDvcInfo_o *)sub_2213CCC(v7);
  TreasureDvcInfo___ctor(v8, 0);
  this->fields.tdInfo = v8;
  p_tdInfo = &this->fields.tdInfo;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.tdInfo, (int32_t)v8, v10, v11, v12, v13, v14, v15);
  if ( !item || !mode )
    return;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v16, v17);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  v19 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantTreasureDeviceAddMaster___);
  SvtId = ServantStatusListViewItem__GetSvtId(item, 1, 0);
  LimitCount = (ServantStatusNpComponent_o *)ServantStatusListViewItem__get_LimitCount(item, 0);
  if ( !Master_object )
    goto LABEL_128;
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
      if ( !*p_tdInfo || !v19 )
        goto LABEL_128;
      id = (*p_tdInfo)->fields.id;
      v27 = (ServantTreasureDeviceAddMaster_o *)v19;
      v28 = SvtId;
      v29 = ServantLimitCountSealAfter;
      v30 = DispLimitCountStageSealAfterIndexZero;
      v26 = 0;
      goto LABEL_13;
    }
  }
  LimitCount = (ServantStatusNpComponent_o *)ServantStatusListViewItem__get_LimitCount(item, 0);
  if ( !v19 )
    goto LABEL_128;
  v26 = (int)LimitCount;
  v27 = (ServantTreasureDeviceAddMaster_o *)v19;
  v28 = SvtId;
  v29 = ServantLimitCountSealAfter;
  v30 = DispLimitCountStageSealAfterIndexZero;
  id = 0;
LABEL_13:
  EnableEntity = ServantTreasureDeviceAddMaster__GetEnableEntity(v27, v28, v29, v30, id, v26, 0);
  if ( ServantStatusListViewItem__get_AnyTransformServant(item, 0) )
  {
    transformNameLabel = (UIWidget_o *)this->fields.transformNameLabel;
    TransformNameLabelColor = ServantStatusListViewItem__get_TransformNameLabelColor(item, 0);
    if ( !transformNameLabel )
      goto LABEL_128;
    UIWidget__set_color(transformNameLabel, TransformNameLabelColor, 0);
    transformNameSprite = (UIWidget_o *)this->fields.transformNameSprite;
    TransformNameSpriteColor = ServantStatusListViewItem__get_TransformNameSpriteColor(item, 0);
    if ( !transformNameSprite )
      goto LABEL_128;
    UIWidget__set_color(transformNameSprite, TransformNameSpriteColor, 0);
    LimitCount = (ServantStatusNpComponent_o *)this->fields.transformNameSprite;
    if ( !LimitCount )
      goto LABEL_128;
    LimitCount = (ServantStatusNpComponent_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)LimitCount,
                                                 0);
    if ( !LimitCount )
      goto LABEL_128;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)LimitCount, 1, 0);
    v35 = this->fields.transformNameLabel;
    LimitCount = (ServantStatusNpComponent_o *)ServantStatusListViewItem__GetTransformName(item, 0);
    if ( !v35 )
      goto LABEL_128;
    UILabel__set_text(v35, (System_String_o *)LimitCount, 0);
    transformNameAddHeight = this->fields.transformNameAddHeight;
    v38 = -transformNameAddHeight;
  }
  else
  {
    LimitCount = (ServantStatusNpComponent_o *)this->fields.transformNameSprite;
    if ( !LimitCount )
      goto LABEL_128;
    LimitCount = (ServantStatusNpComponent_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)LimitCount,
                                                 0);
    if ( !LimitCount )
      goto LABEL_128;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)LimitCount, 0, 0);
    v38 = 0;
    transformNameAddHeight = 0;
  }
  v94 = DispLimitCountStageSealAfterIndexZero;
  v95 = v38;
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
    if ( !*(&ServantStatusListViewItemDrawNp_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawNp_TypeInfo, v22, v36);
      LimitCount = (ServantStatusNpComponent_o *)ServantStatusListViewItemDrawNp_TypeInfo;
    }
    if ( (__int64)i >= (__int64)LimitCount->fields.commandCardComponent->klass )
      break;
    if ( EnableEntity )
    {
      treasureDeviceIds = EnableEntity->fields.treasureDeviceIds;
      if ( !treasureDeviceIds )
        goto LABEL_128;
      if ( (__int64)i < SLODWORD(treasureDeviceIds->max_length) )
      {
        npList = this->fields.npList;
        if ( !npList )
          goto LABEL_128;
        if ( i >= LODWORD(npList->max_length) )
          goto LABEL_129;
        LimitCount = npList->m_Items[i];
        if ( !LimitCount )
          goto LABEL_128;
        LimitCount = (ServantStatusNpComponent_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)LimitCount,
                                                     0);
        if ( !LimitCount )
          goto LABEL_128;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)LimitCount, 1, 0);
        v44 = this->fields.npList;
        if ( !v44 )
          goto LABEL_128;
        if ( i >= LODWORD(v44->max_length) )
          goto LABEL_129;
        v45 = EnableEntity->fields.treasureDeviceIds;
        if ( !v45 )
          goto LABEL_128;
        max_length = v45->max_length;
        if ( i >= (unsigned int)max_length )
          goto LABEL_129;
        titles = EnableEntity->fields.titles;
        if ( !titles )
          goto LABEL_128;
        if ( i >= LODWORD(titles->max_length) )
          goto LABEL_129;
        closedMessages = EnableEntity->fields.closedMessages;
        if ( !closedMessages )
          goto LABEL_128;
        if ( i >= LODWORD(closedMessages->max_length) )
          goto LABEL_129;
        hideCardChara = EnableEntity->fields.hideCardChara;
        if ( !hideCardChara )
          goto LABEL_128;
        if ( i >= LODWORD(hideCardChara->max_length) )
          goto LABEL_129;
        LimitCount = v44->m_Items[i];
        v50 = titles->m_Items[i];
        closedMessage = closedMessages->m_Items[i];
        if ( DispMaskTreasureDevices )
        {
          if ( i >= LODWORD(DispMaskTreasureDevices->max_length) )
            goto LABEL_129;
          dispMaskTreasureDevice = DispMaskTreasureDevices->m_Items[i];
          if ( FixedCardLimitCounts )
            goto LABEL_50;
LABEL_71:
          fixedCardLimitCount = 1;
          if ( !LimitCount )
            goto LABEL_128;
        }
        else
        {
          dispMaskTreasureDevice = -1;
          if ( !FixedCardLimitCounts )
            goto LABEL_71;
LABEL_50:
          if ( i >= LODWORD(FixedCardLimitCounts->max_length) )
            goto LABEL_129;
          fixedCardLimitCount = FixedCardLimitCounts->m_Items[i];
          if ( !LimitCount )
            goto LABEL_128;
        }
        ServantStatusNpComponent__Set(
          LimitCount,
          i,
          *p_tdInfo,
          item,
          v45->m_Items[i],
          (int)max_length > 1,
          EnableEntity->fields.condLimitCount,
          v50,
          closedMessage,
          hideCardChara->m_Items[i],
          dispMaskTreasureDevice,
          fixedCardLimitCount,
          0);
        v57 = this->fields.npList;
        if ( !v57 )
          goto LABEL_128;
        if ( i >= LODWORD(v57->max_length) )
LABEL_129:
          sub_2213CE4(LimitCount);
        v58 = v57->m_Items[i];
        CondLabelColor = ServantTreasureDeviceAddEntity__GetCondLabelColor(EnableEntity, 0);
        v101.fields.r = 0.0;
        v101.fields.g = 0.0;
        v101.fields.b = 0.0;
        v101.fields.a = 1.0;
        v102 = ColorHelper__ParseColorCode_51166816(CondLabelColor, v101, 0);
        r = v102.fields.r;
        g = v102.fields.g;
        b = v102.fields.b;
        a = v102.fields.a;
        CondSpriteColor = ServantTreasureDeviceAddEntity__GetCondSpriteColor(EnableEntity, 0);
        v103.fields.r = 1.0;
        v103.fields.g = 1.0;
        v103.fields.b = 1.0;
        v103.fields.a = 1.0;
        v104 = ColorHelper__ParseColorCode_51166816(CondSpriteColor, v103, 0);
        if ( !v58 )
          goto LABEL_128;
        v106 = v104;
        v105.fields.r = r;
        v105.fields.g = g;
        v105.fields.b = b;
        v105.fields.a = a;
        ServantStatusNpComponent__SetCondColor(v58, v105, v106, 0);
        v65 = this->fields.npList;
        if ( !v65 )
          goto LABEL_128;
        if ( i >= LODWORD(v65->max_length) )
          goto LABEL_129;
        v56 = (struct ServantStatusNpComponent_array *)((char *)v65 + 8 * i);
LABEL_78:
        v66 = v56->m_Items[0];
        if ( !v66 )
          goto LABEL_128;
        transformNameAddHeight += this->fields.npPitch + v66->fields._Adjust_k__BackingField;
        continue;
      }
    }
    v54 = this->fields.npList;
    if ( !i )
    {
      if ( !v54 )
        goto LABEL_128;
      if ( !LODWORD(v54->max_length) )
        goto LABEL_129;
      LimitCount = v54->m_Items[0];
      if ( !LimitCount )
        goto LABEL_128;
      LimitCount = (ServantStatusNpComponent_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)LimitCount,
                                                   0);
      if ( !LimitCount )
        goto LABEL_128;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)LimitCount, 1, 0);
      v55 = this->fields.npList;
      if ( !v55 )
        goto LABEL_128;
      if ( !LODWORD(v55->max_length) )
        goto LABEL_129;
      if ( !*p_tdInfo )
        goto LABEL_128;
      LimitCount = v55->m_Items[0];
      if ( !LimitCount )
        goto LABEL_128;
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
      v56 = this->fields.npList;
      if ( !v56 )
        goto LABEL_128;
      if ( !LODWORD(v56->max_length) )
        goto LABEL_129;
      goto LABEL_78;
    }
    if ( !v54 )
      goto LABEL_128;
    if ( i >= LODWORD(v54->max_length) )
      goto LABEL_129;
    LimitCount = v54->m_Items[i];
    if ( !LimitCount )
      goto LABEL_128;
    LimitCount = (ServantStatusNpComponent_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)LimitCount,
                                                 0);
    if ( !LimitCount )
      goto LABEL_128;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)LimitCount, 0, 0);
  }
  v67 = transformNameAddHeight & 1;
  if ( transformNameAddHeight < 0 )
    v67 = -v67;
  v68 = v67 + transformNameAddHeight;
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
            goto LABEL_94;
          LimitCount = (ServantStatusNpComponent_o *)this->fields.reinforceObject;
          if ( LimitCount )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)LimitCount, 1, 0);
            LimitCount = (ServantStatusNpComponent_o *)this->fields.reinforceButton;
            if ( LimitCount )
            {
              CanMoveCombine_k__BackingField = item->fields._CanMoveCombine_k__BackingField;
              v68 += 58;
              BYTE1(LimitCount->fields.commandCardBase) = 1;
              UICommonButton__SetEnable((UICommonButton_o *)LimitCount, CanMoveCombine_k__BackingField, 0);
              if ( v68 >= 0 )
                v71 = v68;
              else
                v71 = v68 + 1;
              GameObjectExtensions__SetLocalPositionY(this->fields.reinforceObject, (float)-(v71 >> 1), 0);
              goto LABEL_94;
            }
          }
        }
        goto LABEL_128;
      }
    }
  }
LABEL_94:
  x = this->fields.baseSize.fields.x;
  y = this->fields.baseSize.fields.y;
  z = this->fields.baseSize.fields.z;
  baseCollider = (UnityEngine_Object_o *)this->fields.baseCollider;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v22, v36);
  v76 = y + (float)v68;
  if ( UnityEngine_Object__op_Inequality(baseCollider, 0, 0) )
  {
    LimitCount = (ServantStatusNpComponent_o *)this->fields.baseCollider;
    if ( !LimitCount )
      goto LABEL_128;
    v96.fields.x = x;
    v96.fields.y = y + (float)v68;
    v96.fields.z = z;
    UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)LimitCount, v96, 0);
  }
  LimitCount = (ServantStatusNpComponent_o *)this->fields.baseSprite;
  if ( !LimitCount )
    goto LABEL_128;
  v77 = x == INFINITY ? 0x80000000 : (int)x;
  UIWidget__set_width((UIWidget_o *)LimitCount, v77, 0);
  LimitCount = (ServantStatusNpComponent_o *)this->fields.baseSprite;
  if ( !LimitCount )
    goto LABEL_128;
  v78 = v76 == INFINITY ? 0x80000000 : (int)v76;
  UIWidget__set_height((UIWidget_o *)LimitCount, v78, 0);
  LimitCount = (ServantStatusNpComponent_o *)this->fields.titleObject;
  v79 = v68 + (v68 < 0);
  if ( !LimitCount
    || (v80 = this->fields.titleBasePosition.fields.x,
        v81 = this->fields.titleBasePosition.fields.y,
        v82 = this->fields.titleBasePosition.fields.z,
        (LimitCount = (ServantStatusNpComponent_o *)UnityEngine_GameObject__get_transform(
                                                      (UnityEngine_GameObject_o *)LimitCount,
                                                      0)) == 0) )
  {
LABEL_128:
    sub_2213CDC(LimitCount, v22);
  }
  v83 = v79 >> 1;
  v97.fields.z = v82;
  v97.fields.y = v81 + (float)v83;
  v97.fields.x = v80;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)LimitCount, v97, 0);
  v85 = this->fields.npBasePosition.fields.x;
  v86 = this->fields.npBasePosition.fields.z;
  v87 = v83 + v95;
  v88 = 4;
  for ( j = this->fields.npBasePosition.fields.y + (float)v87;
        ;
        j = (float)(j - (float)this->fields.npPitch) - (float)*(int *)(v93 + 192) )
  {
    LimitCount = (ServantStatusNpComponent_o *)ServantStatusListViewItemDrawNp_TypeInfo;
    if ( !*(&ServantStatusListViewItemDrawNp_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawNp_TypeInfo, v22, v84);
      LimitCount = (ServantStatusNpComponent_o *)ServantStatusListViewItemDrawNp_TypeInfo;
    }
    v90 = v88 - 4;
    if ( (int)v88 - 4 >= (__int64)LimitCount->fields.commandCardComponent->klass )
      break;
    v91 = this->fields.npList;
    if ( !v91 )
      goto LABEL_128;
    if ( v90 >= LODWORD(v91->max_length) )
      goto LABEL_129;
    LimitCount = (ServantStatusNpComponent_o *)*((_QWORD *)&v91->obj.klass + v88);
    if ( !LimitCount )
      goto LABEL_128;
    LimitCount = (ServantStatusNpComponent_o *)UnityEngine_Component__get_transform(
                                                 (UnityEngine_Component_o *)LimitCount,
                                                 0);
    if ( !LimitCount )
      goto LABEL_128;
    v98.fields.x = v85;
    v98.fields.y = j;
    v98.fields.z = v86;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)LimitCount, v98, 0);
    v92 = this->fields.npList;
    if ( !v92 )
      goto LABEL_128;
    if ( v90 >= LODWORD(v92->max_length) )
      goto LABEL_129;
    v93 = *((_QWORD *)&v92->obj.klass + v88);
    if ( !v93 )
      goto LABEL_128;
    ++v88;
  }
  if ( this->fields.isStart && this->fields.dispLimitCnt != v94 )
  {
    ((void (__fastcall *)(ServantStatusListViewItemDrawNp_o *, ServantStatusListViewItem_o *, const MethodInfo *))this->klass->vtable._6_ModifyCommandCard.methodPtr)(
      this,
      item,
      this->klass->vtable._6_ModifyCommandCard.method);
    this->fields.dispLimitCnt = v94;
  }
}