void __fastcall ServantStatusListViewItemDrawNp___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2

  if ( (byte_4B1320F & 1) == 0 )
  {
    sub_1BCA7E0(&ServantStatusListViewItemDrawNp_TypeInfo, v1, v2);
    byte_4B1320F = 1;
  }
  ServantStatusListViewItemDrawNp_TypeInfo->static_fields->NP_LIST_MAX = 2;
}


void __fastcall ServantStatusListViewItemDrawNp___ctor(
        ServantStatusListViewItemDrawNp_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  ServantStatusListViewItemDrawNp_c *v6; // x0
  struct ServantStatusNpComponent_array *v7; // x0
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4B1320E & 1) == 0 )
  {
    sub_1BCA7E0(&ServantStatusListViewItemDrawNp_TypeInfo, method, v2);
    sub_1BCA7E0(&ServantStatusNpComponent___TypeInfo, v4, v5);
    byte_4B1320E = 1;
  }
  v6 = ServantStatusListViewItemDrawNp_TypeInfo;
  if ( !ServantStatusListViewItemDrawNp_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawNp_TypeInfo, method);
    v6 = ServantStatusListViewItemDrawNp_TypeInfo;
  }
  v7 = (struct ServantStatusNpComponent_array *)sub_1BCA888(
                                                  ServantStatusNpComponent___TypeInfo,
                                                  v6->static_fields->NP_LIST_MAX);
  this->fields.npList = v7;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.npList, (int64_t)v7, v8, v9, v10, v11, v12, v13);
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
    sub_1BCAA3C(this, method);
  if ( !v15->max_length )
LABEL_25:
    sub_1BCAA44(this, method);
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

  if ( (byte_4B1320D & 1) == 0 )
  {
    sub_1BCA7E0(&ServantStatusListViewItemDrawNp_TypeInfo, item, method);
    byte_4B1320D = 1;
  }
  v5 = 0;
  this->fields.isStart = 1;
  while ( 1 )
  {
    v6 = ServantStatusListViewItemDrawNp_TypeInfo;
    if ( !ServantStatusListViewItemDrawNp_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawNp_TypeInfo, item);
      v6 = ServantStatusListViewItemDrawNp_TypeInfo;
    }
    if ( (signed int)v5 >= v6->static_fields->NP_LIST_MAX )
      break;
    npList = this->fields.npList;
    if ( !npList )
      goto LABEL_12;
    if ( v5 >= npList->max_length )
      sub_1BCAA44(v6, item);
    v6 = (ServantStatusListViewItemDrawNp_c *)npList->m_Items[v5];
    if ( !v6 )
LABEL_12:
      sub_1BCAA3C(v6, item);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  TreasureDvcInfo_o *v21; // x23
  TreasureDvcInfo_o **p_tdInfo; // x22
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  int32_t DispLimitCount; // w27
  int32_t LimitCount; // w23
  __int64 v31; // x1
  long double v32; // q0
  __int64 v33; // x1
  Il2CppObject *Master_object; // x24
  ServantStatusNpComponent_o *SvtId; // x0
  int32_t v36; // w0
  __int64 v37; // x0
  __int64 v38; // x0
  Il2CppObject *MasterData_object; // x0
  ServantTreasureDeviceAddEntity_o *EnableEntity; // x23
  Il2CppObject *v41; // x24
  bool IsMine; // w26
  int32_t v43; // w25
  int32_t v44; // w4
  ServantTreasureDeviceAddMaster_o *v45; // x0
  int32_t v46; // w1
  int32_t v47; // w2
  int32_t id; // w3
  _BOOL4 IsTransformServant_k__BackingField; // w21
  UILabel_o *transformNameLabel; // x24
  int32_t transformNameAddHeight; // w29
  System_Int32_array *DispMaskTreasureDevices; // x24
  System_Int32_array *FixedCardLimitCounts; // x25
  unsigned __int64 i; // x26
  struct System_Int32_array *treasureDeviceIds; // x8
  struct ServantStatusNpComponent_array *npList; // x8
  struct ServantStatusNpComponent_array *v57; // x8
  struct System_Int32_array *v58; // x9
  struct System_String_array *titles; // x10
  struct System_String_array *closedMessages; // x11
  struct System_Int32_array *hideCardChara; // x12
  System_String_o *v62; // x7
  System_String_o *closedMessage; // x8
  int32_t dispMaskTreasureDevice; // w10
  int32_t fixedCardLimitCount; // w11
  struct ServantStatusNpComponent_array *v66; // x8
  struct ServantStatusNpComponent_array *v67; // x8
  struct ServantStatusNpComponent_array *v68; // x8
  struct ServantStatusNpComponent_array *v69; // x8
  ServantStatusNpComponent_o *v70; // x8
  int32_t v71; // w9
  int v72; // w21
  UserServantEntity_o *userSvtEntity; // x0
  int v74; // w8
  float y; // s8
  float x; // s9
  float z; // s10
  UnityEngine_Object_o *baseCollider; // x22
  float v79; // s8
  int32_t v80; // w1
  int32_t v81; // w1
  int v82; // w21
  float v83; // s8
  float v84; // s10
  float v85; // s9
  int v86; // w22
  float v87; // s8
  float v88; // s9
  il2cpp_array_size_t v89; // w21
  float j; // s10
  struct ServantStatusNpComponent_array *v91; // x8
  struct ServantStatusNpComponent_array *v92; // x8
  ServantStatusNpComponent_o *v93; // x8
  int v94; // [xsp+2Ch] [xbp-84h]
  UnityEngine_Vector3_o v95; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v96; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v97; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B1320C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantTreasureDeviceAddMaster___, item, *(_QWORD *)&mode);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v7, v8);
    sub_1BCA7E0(&DataManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v11, v12);
    sub_1BCA7E0(&ServantStatusListViewItemDrawNp_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v15, v16);
    sub_1BCA7E0(&TreasureDvcInfo_TypeInfo, v17, v18);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v19, v20);
    byte_4B1320C = 1;
  }
  this->fields.dispMode = mode;
  v21 = (TreasureDvcInfo_o *)sub_1BCAA2C(TreasureDvcInfo_TypeInfo, item, *(_QWORD *)&mode, method);
  TreasureDvcInfo___ctor(v21, 0LL);
  this->fields.tdInfo = v21;
  p_tdInfo = &this->fields.tdInfo;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.tdInfo, (int64_t)v21, v23, v24, v25, v26, v27, v28);
  if ( !item || !mode )
    return;
  DispLimitCount = ServantStatusListViewItem__GetDispLimitCount(item, 1, 0LL);
  LimitCount = ServantStatusListViewItem__get_LimitCount(item, 0LL);
  if ( item->fields._IsTransformed_k__BackingField )
  {
    ServantStatusListViewItem__GetTransformedNpInfo(item, &this->fields.tdInfo, 0LL);
  }
  else if ( ServantStatusListViewItem__get_IsMine(item, 0LL) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v33);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
    SvtId = (ServantStatusNpComponent_o *)ServantStatusListViewItem__get_SvtId(item, 0LL);
    if ( !Master_object )
      goto LABEL_129;
    DispLimitCount = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                       (ServantLimitImageMaster_o *)Master_object,
                       (int32_t)SvtId,
                       DispLimitCount,
                       0LL);
    ServantStatusListViewItem__GetNpInfo_33900300(item, &this->fields.tdInfo, DispLimitCount, 0LL);
    v36 = ServantStatusListViewItem__get_SvtId(item, 0LL);
    LimitCount = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                   (ServantLimitImageMaster_o *)Master_object,
                   v36,
                   LimitCount,
                   0LL);
  }
  else
  {
    ServantStatusListViewItem__GetNpInfo(item, &this->fields.tdInfo, 0LL);
  }
  v37 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v37 + 309) & 1) == 0 )
    v37 = sub_1C1C6BC(v32);
  v38 = *(_QWORD *)(*(_QWORD *)(v37 + 192) + 16LL);
  if ( (*(_BYTE *)(v38 + 309) & 1) == 0 )
    v38 = sub_1C1C6BC(v32);
  SvtId = **(ServantStatusNpComponent_o ***)(v38 + 184);
  if ( !SvtId )
    goto LABEL_129;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)SvtId,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantTreasureDeviceAddMaster___);
  if ( item->fields._IsTransformed_k__BackingField )
  {
    EnableEntity = 0LL;
  }
  else
  {
    v41 = MasterData_object;
    IsMine = ServantStatusListViewItem__get_IsMine(item, 0LL);
    SvtId = (ServantStatusNpComponent_o *)ServantStatusListViewItem__get_SvtId(item, 0LL);
    v43 = (int)SvtId;
    if ( IsMine )
    {
      SvtId = (ServantStatusNpComponent_o *)ServantStatusListViewItem__get_LimitCount(item, 0LL);
      if ( !v41 )
        goto LABEL_129;
      v44 = (int)SvtId;
      v45 = (ServantTreasureDeviceAddMaster_o *)v41;
      v46 = v43;
      v47 = LimitCount;
      id = 0;
    }
    else
    {
      if ( !*p_tdInfo || !v41 )
        goto LABEL_129;
      id = (*p_tdInfo)->fields.id;
      v45 = (ServantTreasureDeviceAddMaster_o *)v41;
      v46 = v43;
      v47 = LimitCount;
      v44 = 0;
    }
    EnableEntity = ServantTreasureDeviceAddMaster__GetEnableEntity(v45, v46, v47, id, v44, 0LL);
  }
  SvtId = (ServantStatusNpComponent_o *)this->fields.transformNameSprite;
  if ( !SvtId )
    goto LABEL_129;
  IsTransformServant_k__BackingField = item->fields._IsTransformServant_k__BackingField;
  SvtId = (ServantStatusNpComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)SvtId, 0LL);
  if ( !SvtId )
    goto LABEL_129;
  if ( IsTransformServant_k__BackingField )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SvtId, 1, 0LL);
    transformNameLabel = this->fields.transformNameLabel;
    SvtId = (ServantStatusNpComponent_o *)ServantStatusListViewItem__GetTransformName(item, 0LL);
    if ( !transformNameLabel )
      goto LABEL_129;
    UILabel__set_text(transformNameLabel, (System_String_o *)SvtId, 0LL);
    transformNameAddHeight = this->fields.transformNameAddHeight;
    v94 = -transformNameAddHeight;
  }
  else
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SvtId, 0, 0LL);
    transformNameAddHeight = 0;
    v94 = 0;
  }
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
      j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawNp_TypeInfo, v31);
      SvtId = (ServantStatusNpComponent_o *)ServantStatusListViewItemDrawNp_TypeInfo;
    }
    if ( (__int64)i >= (__int64)SvtId->fields.commandCardComponent->klass )
      break;
    if ( EnableEntity )
    {
      treasureDeviceIds = EnableEntity->fields.treasureDeviceIds;
      if ( !treasureDeviceIds )
        goto LABEL_129;
      if ( (__int64)i < (int)treasureDeviceIds->max_length )
      {
        npList = this->fields.npList;
        if ( !npList )
          goto LABEL_129;
        if ( i >= npList->max_length )
          goto LABEL_130;
        SvtId = npList->m_Items[i];
        if ( !SvtId )
          goto LABEL_129;
        SvtId = (ServantStatusNpComponent_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)SvtId,
                                                0LL);
        if ( !SvtId )
          goto LABEL_129;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SvtId, 1, 0LL);
        v57 = this->fields.npList;
        if ( !v57 )
          goto LABEL_129;
        if ( i >= v57->max_length )
          goto LABEL_130;
        v58 = EnableEntity->fields.treasureDeviceIds;
        if ( !v58 )
          goto LABEL_129;
        if ( i >= v58->max_length )
          goto LABEL_130;
        titles = EnableEntity->fields.titles;
        if ( !titles )
          goto LABEL_129;
        if ( i >= titles->max_length )
          goto LABEL_130;
        closedMessages = EnableEntity->fields.closedMessages;
        if ( !closedMessages )
          goto LABEL_129;
        if ( i >= closedMessages->max_length )
          goto LABEL_130;
        hideCardChara = EnableEntity->fields.hideCardChara;
        if ( !hideCardChara )
          goto LABEL_129;
        if ( i >= hideCardChara->max_length )
          goto LABEL_130;
        SvtId = v57->m_Items[i];
        v62 = titles->m_Items[i];
        closedMessage = closedMessages->m_Items[i];
        if ( DispMaskTreasureDevices )
        {
          if ( i >= DispMaskTreasureDevices->max_length )
            goto LABEL_130;
          dispMaskTreasureDevice = DispMaskTreasureDevices->m_Items[i + 1];
          if ( FixedCardLimitCounts )
            goto LABEL_60;
LABEL_77:
          fixedCardLimitCount = 1;
          if ( !SvtId )
            goto LABEL_129;
        }
        else
        {
          dispMaskTreasureDevice = -1;
          if ( !FixedCardLimitCounts )
            goto LABEL_77;
LABEL_60:
          if ( i >= FixedCardLimitCounts->max_length )
            goto LABEL_130;
          fixedCardLimitCount = FixedCardLimitCounts->m_Items[i + 1];
          if ( !SvtId )
            goto LABEL_129;
        }
        ServantStatusNpComponent__Set(
          SvtId,
          i,
          *p_tdInfo,
          item,
          v58->m_Items[i + 1],
          1,
          EnableEntity->fields.condLimitCount,
          v62,
          closedMessage,
          hideCardChara->m_Items[i + 1],
          dispMaskTreasureDevice,
          fixedCardLimitCount,
          0LL);
        v69 = this->fields.npList;
        if ( !v69 )
          goto LABEL_129;
        if ( i >= v69->max_length )
LABEL_130:
          sub_1BCAA44(SvtId, v31);
        v68 = (struct ServantStatusNpComponent_array *)((char *)v69 + 8 * i);
        goto LABEL_81;
      }
    }
    v66 = this->fields.npList;
    if ( !v66 )
      goto LABEL_129;
    if ( i >= v66->max_length )
      goto LABEL_130;
    SvtId = v66->m_Items[i];
    if ( !SvtId )
      goto LABEL_129;
    SvtId = (ServantStatusNpComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)SvtId, 0LL);
    if ( !SvtId )
      goto LABEL_129;
    if ( i )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SvtId, 0, 0LL);
      continue;
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SvtId, 1, 0LL);
    v67 = this->fields.npList;
    if ( !v67 )
      goto LABEL_129;
    if ( !v67->max_length )
      goto LABEL_130;
    if ( !*p_tdInfo )
      goto LABEL_129;
    SvtId = v67->m_Items[0];
    if ( !SvtId )
      goto LABEL_129;
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
    v68 = this->fields.npList;
    if ( !v68 )
      goto LABEL_129;
    if ( !v68->max_length )
      goto LABEL_130;
LABEL_81:
    v70 = v68->m_Items[0];
    if ( !v70 )
      goto LABEL_129;
    transformNameAddHeight += this->fields.npPitch + v70->fields._Adjust_k__BackingField;
  }
  if ( transformNameAddHeight >= 0 )
    v71 = transformNameAddHeight;
  else
    v71 = transformNameAddHeight + 1;
  v72 = transformNameAddHeight - (v71 & 0xFFFFFFFE) + transformNameAddHeight;
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
            goto LABEL_98;
          SvtId = (ServantStatusNpComponent_o *)this->fields.reinforceObject;
          if ( SvtId )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SvtId, 1, 0LL);
            SvtId = (ServantStatusNpComponent_o *)this->fields.reinforceButton;
            if ( SvtId )
            {
              BYTE1(SvtId->fields.commandCardBase) = 1;
              v72 += 58;
              UICommonButton__SetEnable((UICommonButton_o *)SvtId, item->fields._CanMoveCombine_k__BackingField, 0LL);
              if ( v72 >= 0 )
                v74 = v72;
              else
                v74 = v72 + 1;
              GameObjectExtensions__SetLocalPositionY(this->fields.reinforceObject, (float)-(v74 >> 1), 0LL);
              goto LABEL_98;
            }
          }
        }
        goto LABEL_129;
      }
    }
  }
LABEL_98:
  x = this->fields.baseSize.fields.x;
  y = this->fields.baseSize.fields.y;
  z = this->fields.baseSize.fields.z;
  baseCollider = (UnityEngine_Object_o *)this->fields.baseCollider;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v31);
  v79 = y + (float)v72;
  if ( UnityEngine_Object__op_Inequality(baseCollider, 0LL, 0LL) )
  {
    SvtId = (ServantStatusNpComponent_o *)this->fields.baseCollider;
    if ( !SvtId )
      goto LABEL_129;
    v95.fields.x = x;
    v95.fields.y = v79;
    v95.fields.z = z;
    UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)SvtId, v95, 0LL);
  }
  SvtId = (ServantStatusNpComponent_o *)this->fields.baseSprite;
  if ( !SvtId )
    goto LABEL_129;
  v80 = x == INFINITY ? 0x80000000 : (int)x;
  UIWidget__set_width((UIWidget_o *)SvtId, v80, 0LL);
  SvtId = (ServantStatusNpComponent_o *)this->fields.baseSprite;
  if ( !SvtId )
    goto LABEL_129;
  v81 = v79 == INFINITY ? 0x80000000 : (int)v79;
  UIWidget__set_height((UIWidget_o *)SvtId, v81, 0LL);
  SvtId = (ServantStatusNpComponent_o *)this->fields.titleObject;
  v82 = v72 + (v72 < 0);
  if ( !SvtId
    || (v83 = this->fields.titleBasePosition.fields.x,
        v84 = this->fields.titleBasePosition.fields.y,
        v85 = this->fields.titleBasePosition.fields.z,
        (SvtId = (ServantStatusNpComponent_o *)UnityEngine_GameObject__get_transform(
                                                 (UnityEngine_GameObject_o *)SvtId,
                                                 0LL)) == 0LL) )
  {
LABEL_129:
    sub_1BCAA3C(SvtId, v31);
  }
  v86 = v82 >> 1;
  v96.fields.y = v84 + (float)(v82 >> 1);
  v96.fields.x = v83;
  v96.fields.z = v85;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)SvtId, v96, 0LL);
  v87 = this->fields.npBasePosition.fields.x;
  v88 = this->fields.npBasePosition.fields.z;
  v89 = 0;
  for ( j = this->fields.npBasePosition.fields.y + (float)(v86 + v94);
        ;
        j = (float)(j - (float)this->fields.npPitch) - (float)v93->fields._Adjust_k__BackingField )
  {
    SvtId = (ServantStatusNpComponent_o *)ServantStatusListViewItemDrawNp_TypeInfo;
    if ( !ServantStatusListViewItemDrawNp_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawNp_TypeInfo, v31);
      SvtId = (ServantStatusNpComponent_o *)ServantStatusListViewItemDrawNp_TypeInfo;
    }
    if ( (signed int)v89 >= (__int64)SvtId->fields.commandCardComponent->klass )
      break;
    v91 = this->fields.npList;
    if ( !v91 )
      goto LABEL_129;
    if ( v89 >= v91->max_length )
      goto LABEL_130;
    SvtId = v91->m_Items[v89];
    if ( !SvtId )
      goto LABEL_129;
    SvtId = (ServantStatusNpComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)SvtId, 0LL);
    if ( !SvtId )
      goto LABEL_129;
    v97.fields.x = v87;
    v97.fields.y = j;
    v97.fields.z = v88;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)SvtId, v97, 0LL);
    v92 = this->fields.npList;
    if ( !v92 )
      goto LABEL_129;
    if ( v89 >= v92->max_length )
      goto LABEL_130;
    v93 = v92->m_Items[v89];
    if ( !v93 )
      goto LABEL_129;
    ++v89;
  }
  if ( this->fields.isStart && this->fields.dispLimitCnt != DispLimitCount )
  {
    ((void (__fastcall *)(ServantStatusListViewItemDrawNp_o *, ServantStatusListViewItem_o *, Il2CppMethodPointer))this->klass->vtable._7_ModifyCommandCard.method)(
      this,
      item,
      this->klass->vtable._8_ModifyFace.methodPtr);
    this->fields.dispLimitCnt = DispLimitCount;
  }
}