void __fastcall ServantStatusListViewItemDrawNp___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4A6CA05 & 1) == 0 )
  {
    sub_1B90010(&ServantStatusListViewItemDrawNp_TypeInfo, v1);
    byte_4A6CA05 = 1;
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
  int32_t v7; // w3

  if ( (byte_4A6CA04 & 1) == 0 )
  {
    sub_1B90010(&ServantStatusListViewItemDrawNp_TypeInfo, method);
    sub_1B90010(&ServantStatusNpComponent___TypeInfo, v3);
    byte_4A6CA04 = 1;
  }
  v4 = ServantStatusListViewItemDrawNp_TypeInfo;
  if ( !ServantStatusListViewItemDrawNp_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawNp_TypeInfo);
    v4 = ServantStatusListViewItemDrawNp_TypeInfo;
  }
  v5 = (struct ServantStatusNpComponent_array *)sub_1B900B8(
                                                  ServantStatusNpComponent___TypeInfo,
                                                  v4->static_fields->NP_LIST_MAX);
  this->fields.npList = v5;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.npList, (int32_t)v5, v6, v7);
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
    sub_1B9026C(this, method);
  if ( !v15->max_length )
LABEL_25:
    sub_1B90274(this, method);
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

  if ( (byte_4A6CA03 & 1) == 0 )
  {
    sub_1B90010(&ServantStatusListViewItemDrawNp_TypeInfo, item);
    byte_4A6CA03 = 1;
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
      sub_1B90274(v6, item);
    v6 = (ServantStatusListViewItemDrawNp_c *)npList->m_Items[v5];
    if ( !v6 )
LABEL_12:
      sub_1B9026C(v6, item);
    ServantStatusNpComponent__ModifyCommandCard((ServantStatusNpComponent_o *)v6, item, 0LL);
    ++v5;
  }
}


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
  TreasureDvcInfo_o *v14; // x23
  TreasureDvcInfo_o **p_tdInfo; // x22
  int32_t v16; // w2
  int32_t v17; // w3
  int32_t DispLimitCount; // w27
  int32_t LimitCount; // w23
  __int64 v20; // x1
  Il2CppObject *Master_object; // x24
  ServantStatusNpComponent_o *SvtId; // x0
  int32_t v23; // w0
  __int64 v24; // x0
  __int64 v25; // x0
  Il2CppObject *MasterData_object; // x0
  ServantTreasureDeviceAddEntity_o *EnableEntity; // x23
  Il2CppObject *v28; // x24
  bool IsMine; // w26
  int32_t v30; // w25
  int32_t v31; // w4
  ServantTreasureDeviceAddMaster_o *v32; // x0
  int32_t v33; // w1
  int32_t v34; // w2
  int32_t id; // w3
  _BOOL4 IsTransformServant_k__BackingField; // w21
  UILabel_o *transformNameLabel; // x24
  int32_t transformNameAddHeight; // w29
  System_Int32_array *DispMaskTreasureDevices; // x24
  System_Int32_array *FixedCardLimitCounts; // x25
  unsigned __int64 i; // x26
  struct System_Int32_array *treasureDeviceIds; // x8
  struct ServantStatusNpComponent_array *npList; // x8
  struct ServantStatusNpComponent_array *v44; // x8
  struct System_Int32_array *v45; // x9
  struct System_String_array *titles; // x10
  struct System_String_array *closedMessages; // x11
  struct System_Int32_array *hideCardChara; // x12
  System_String_o *v49; // x7
  System_String_o *closedMessage; // x8
  int32_t dispMaskTreasureDevice; // w10
  int32_t fixedCardLimitCount; // w11
  struct ServantStatusNpComponent_array *v53; // x8
  struct ServantStatusNpComponent_array *v54; // x8
  struct ServantStatusNpComponent_array *v55; // x8
  struct ServantStatusNpComponent_array *v56; // x8
  ServantStatusNpComponent_o *v57; // x8
  int32_t v58; // w9
  int v59; // w21
  UserServantEntity_o *userSvtEntity; // x0
  int v61; // w8
  float y; // s8
  float x; // s9
  float z; // s10
  UnityEngine_Object_o *baseCollider; // x22
  float v66; // s8
  int32_t v67; // w1
  int32_t v68; // w1
  int v69; // w21
  float v70; // s8
  float v71; // s10
  float v72; // s9
  int v73; // w22
  float v74; // s8
  float v75; // s9
  il2cpp_array_size_t v76; // w21
  float j; // s10
  struct ServantStatusNpComponent_array *v78; // x8
  struct ServantStatusNpComponent_array *v79; // x8
  ServantStatusNpComponent_o *v80; // x8
  int v81; // [xsp+2Ch] [xbp-84h]
  UnityEngine_Vector3_o v82; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v83; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v84; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A6CA02 & 1) == 0 )
  {
    sub_1B90010(&Method_DataManager_GetMasterData_ServantTreasureDeviceAddMaster___, item);
    sub_1B90010(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v7);
    sub_1B90010(&DataManager_TypeInfo, v8);
    sub_1B90010(&UnityEngine_Object_TypeInfo, v9);
    sub_1B90010(&ServantStatusListViewItemDrawNp_TypeInfo, v10);
    sub_1B90010(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v11);
    sub_1B90010(&TreasureDvcInfo_TypeInfo, v12);
    sub_1B90010(&StringLiteral_1/*""*/, v13);
    byte_4A6CA02 = 1;
  }
  this->fields.dispMode = mode;
  v14 = (TreasureDvcInfo_o *)sub_1B9025C(TreasureDvcInfo_TypeInfo);
  TreasureDvcInfo___ctor(v14, 0LL);
  this->fields.tdInfo = v14;
  p_tdInfo = &this->fields.tdInfo;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.tdInfo, (int32_t)v14, v16, v17);
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
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2E8E1C8 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
    SvtId = (ServantStatusNpComponent_o *)ServantStatusListViewItem__get_SvtId(item, 0LL);
    if ( !Master_object )
      goto LABEL_129;
    DispLimitCount = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                       (ServantLimitImageMaster_o *)Master_object,
                       (int32_t)SvtId,
                       DispLimitCount,
                       0LL);
    ServantStatusListViewItem__GetNpInfo_32703912(item, &this->fields.tdInfo, DispLimitCount, 0LL);
    v23 = ServantStatusListViewItem__get_SvtId(item, 0LL);
    LimitCount = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                   (ServantLimitImageMaster_o *)Master_object,
                   v23,
                   LimitCount,
                   0LL);
  }
  else
  {
    ServantStatusListViewItem__GetNpInfo(item, &this->fields.tdInfo, 0LL);
  }
  v24 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v24 + 309) & 1) == 0 )
    v24 = sub_1BE1EEC(v24);
  v25 = *(_QWORD *)(*(_QWORD *)(v24 + 192) + 16LL);
  if ( (*(_BYTE *)(v25 + 309) & 1) == 0 )
    v25 = sub_1BE1EEC(v25);
  SvtId = **(ServantStatusNpComponent_o ***)(v25 + 184);
  if ( !SvtId )
    goto LABEL_129;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)SvtId,
                        (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_ServantTreasureDeviceAddMaster___);
  if ( item->fields._IsTransformed_k__BackingField )
  {
    EnableEntity = 0LL;
  }
  else
  {
    v28 = MasterData_object;
    IsMine = ServantStatusListViewItem__get_IsMine(item, 0LL);
    SvtId = (ServantStatusNpComponent_o *)ServantStatusListViewItem__get_SvtId(item, 0LL);
    v30 = (int)SvtId;
    if ( IsMine )
    {
      SvtId = (ServantStatusNpComponent_o *)ServantStatusListViewItem__get_LimitCount(item, 0LL);
      if ( !v28 )
        goto LABEL_129;
      v31 = (int)SvtId;
      v32 = (ServantTreasureDeviceAddMaster_o *)v28;
      v33 = v30;
      v34 = LimitCount;
      id = 0;
    }
    else
    {
      if ( !*p_tdInfo || !v28 )
        goto LABEL_129;
      id = (*p_tdInfo)->fields.id;
      v32 = (ServantTreasureDeviceAddMaster_o *)v28;
      v33 = v30;
      v34 = LimitCount;
      v31 = 0;
    }
    EnableEntity = ServantTreasureDeviceAddMaster__GetEnableEntity(v32, v33, v34, id, v31, 0LL);
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
    v81 = -transformNameAddHeight;
  }
  else
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SvtId, 0, 0LL);
    transformNameAddHeight = 0;
    v81 = 0;
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
      j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawNp_TypeInfo);
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
        v44 = this->fields.npList;
        if ( !v44 )
          goto LABEL_129;
        if ( i >= v44->max_length )
          goto LABEL_130;
        v45 = EnableEntity->fields.treasureDeviceIds;
        if ( !v45 )
          goto LABEL_129;
        if ( i >= v45->max_length )
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
        SvtId = v44->m_Items[i];
        v49 = titles->m_Items[i];
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
          v45->m_Items[i + 1],
          1,
          EnableEntity->fields.condLimitCount,
          v49,
          closedMessage,
          hideCardChara->m_Items[i + 1],
          dispMaskTreasureDevice,
          fixedCardLimitCount,
          0LL);
        v56 = this->fields.npList;
        if ( !v56 )
          goto LABEL_129;
        if ( i >= v56->max_length )
LABEL_130:
          sub_1B90274(SvtId, v20);
        v55 = (struct ServantStatusNpComponent_array *)((char *)v56 + 8 * i);
        goto LABEL_81;
      }
    }
    v53 = this->fields.npList;
    if ( !v53 )
      goto LABEL_129;
    if ( i >= v53->max_length )
      goto LABEL_130;
    SvtId = v53->m_Items[i];
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
    v54 = this->fields.npList;
    if ( !v54 )
      goto LABEL_129;
    if ( !v54->max_length )
      goto LABEL_130;
    if ( !*p_tdInfo )
      goto LABEL_129;
    SvtId = v54->m_Items[0];
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
    v55 = this->fields.npList;
    if ( !v55 )
      goto LABEL_129;
    if ( !v55->max_length )
      goto LABEL_130;
LABEL_81:
    v57 = v55->m_Items[0];
    if ( !v57 )
      goto LABEL_129;
    transformNameAddHeight += this->fields.npPitch + v57->fields._Adjust_k__BackingField;
  }
  if ( transformNameAddHeight >= 0 )
    v58 = transformNameAddHeight;
  else
    v58 = transformNameAddHeight + 1;
  v59 = transformNameAddHeight - (v58 & 0xFFFFFFFE) + transformNameAddHeight;
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
              v59 += 58;
              UICommonButton__SetEnable((UICommonButton_o *)SvtId, item->fields._CanMoveCombine_k__BackingField, 0LL);
              if ( v59 >= 0 )
                v61 = v59;
              else
                v61 = v59 + 1;
              GameObjectExtensions__SetLocalPositionY(this->fields.reinforceObject, (float)-(v61 >> 1), 0LL);
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v66 = y + (float)v59;
  if ( UnityEngine_Object__op_Inequality(baseCollider, 0LL, 0LL) )
  {
    SvtId = (ServantStatusNpComponent_o *)this->fields.baseCollider;
    if ( !SvtId )
      goto LABEL_129;
    v82.fields.x = x;
    v82.fields.y = v66;
    v82.fields.z = z;
    UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)SvtId, v82, 0LL);
  }
  SvtId = (ServantStatusNpComponent_o *)this->fields.baseSprite;
  if ( !SvtId )
    goto LABEL_129;
  v67 = x == INFINITY ? 0x80000000 : (int)x;
  UIWidget__set_width((UIWidget_o *)SvtId, v67, 0LL);
  SvtId = (ServantStatusNpComponent_o *)this->fields.baseSprite;
  if ( !SvtId )
    goto LABEL_129;
  v68 = v66 == INFINITY ? 0x80000000 : (int)v66;
  UIWidget__set_height((UIWidget_o *)SvtId, v68, 0LL);
  SvtId = (ServantStatusNpComponent_o *)this->fields.titleObject;
  v69 = v59 + (v59 < 0);
  if ( !SvtId
    || (v70 = this->fields.titleBasePosition.fields.x,
        v71 = this->fields.titleBasePosition.fields.y,
        v72 = this->fields.titleBasePosition.fields.z,
        (SvtId = (ServantStatusNpComponent_o *)UnityEngine_GameObject__get_transform(
                                                 (UnityEngine_GameObject_o *)SvtId,
                                                 0LL)) == 0LL) )
  {
LABEL_129:
    sub_1B9026C(SvtId, v20);
  }
  v73 = v69 >> 1;
  v83.fields.y = v71 + (float)(v69 >> 1);
  v83.fields.x = v70;
  v83.fields.z = v72;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)SvtId, v83, 0LL);
  v74 = this->fields.npBasePosition.fields.x;
  v75 = this->fields.npBasePosition.fields.z;
  v76 = 0;
  for ( j = this->fields.npBasePosition.fields.y + (float)(v73 + v81);
        ;
        j = (float)(j - (float)this->fields.npPitch) - (float)v80->fields._Adjust_k__BackingField )
  {
    SvtId = (ServantStatusNpComponent_o *)ServantStatusListViewItemDrawNp_TypeInfo;
    if ( !ServantStatusListViewItemDrawNp_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawNp_TypeInfo);
      SvtId = (ServantStatusNpComponent_o *)ServantStatusListViewItemDrawNp_TypeInfo;
    }
    if ( (signed int)v76 >= (__int64)SvtId->fields.commandCardComponent->klass )
      break;
    v78 = this->fields.npList;
    if ( !v78 )
      goto LABEL_129;
    if ( v76 >= v78->max_length )
      goto LABEL_130;
    SvtId = v78->m_Items[v76];
    if ( !SvtId )
      goto LABEL_129;
    SvtId = (ServantStatusNpComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)SvtId, 0LL);
    if ( !SvtId )
      goto LABEL_129;
    v84.fields.x = v74;
    v84.fields.y = j;
    v84.fields.z = v75;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)SvtId, v84, 0LL);
    v79 = this->fields.npList;
    if ( !v79 )
      goto LABEL_129;
    if ( v76 >= v79->max_length )
      goto LABEL_130;
    v80 = v79->m_Items[v76];
    if ( !v80 )
      goto LABEL_129;
    ++v76;
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