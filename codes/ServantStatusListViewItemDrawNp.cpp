void __fastcall ServantStatusListViewItemDrawNp___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_48DF9B7 & 1) == 0 )
  {
    sub_1B00CCC(&ServantStatusListViewItemDrawNp_TypeInfo, v1);
    byte_48DF9B7 = 1;
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

  if ( (byte_48DF9B6 & 1) == 0 )
  {
    sub_1B00CCC(&ServantStatusListViewItemDrawNp_TypeInfo, method);
    sub_1B00CCC(&ServantStatusNpComponent___TypeInfo, v3);
    byte_48DF9B6 = 1;
  }
  v4 = ServantStatusListViewItemDrawNp_TypeInfo;
  if ( !ServantStatusListViewItemDrawNp_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawNp_TypeInfo);
    v4 = ServantStatusListViewItemDrawNp_TypeInfo;
  }
  v5 = (struct ServantStatusNpComponent_array *)sub_1B00D74(
                                                  ServantStatusNpComponent___TypeInfo,
                                                  v4->static_fields->NP_LIST_MAX);
  this->fields.npList = v5;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.npList, (int32_t)v5, v6, v7);
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
    sub_1B00F28(this, method);
  if ( !v15->max_length )
LABEL_25:
    sub_1B00F30(this, method);
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

  if ( (byte_48DF9B5 & 1) == 0 )
  {
    sub_1B00CCC(&ServantStatusListViewItemDrawNp_TypeInfo, item);
    byte_48DF9B5 = 1;
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
      sub_1B00F30(v6, item);
    v6 = (ServantStatusListViewItemDrawNp_c *)npList->m_Items[v5];
    if ( !v6 )
LABEL_12:
      sub_1B00F28(v6, item);
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
  int32_t DispLimitCount; // w21
  int32_t LimitCount; // w23
  __int64 v20; // x1
  Il2CppObject *Master_object; // x24
  ServantStatusNpComponent_o *SvtId; // x0
  int32_t v23; // w0
  __int64 v24; // x0
  __int64 v25; // x0
  Il2CppObject *MasterData_object; // x0
  ServantTreasureDeviceAddEntity_o *EnableEntity; // x23
  ServantTreasureDeviceAddMaster_o *v28; // x24
  bool IsMine; // w25
  int32_t id; // w3
  _BOOL4 IsTransformServant_k__BackingField; // w24
  UILabel_o *transformNameLabel; // x24
  int32_t transformNameAddHeight; // w27
  int v34; // w26
  unsigned __int64 i; // x24
  struct System_Int32_array *treasureDeviceIds; // x8
  struct ServantStatusNpComponent_array *npList; // x8
  struct ServantStatusNpComponent_array *v38; // x8
  struct System_Int32_array *v39; // x9
  struct System_String_array *titles; // x10
  struct System_String_array *closedMessages; // x11
  struct System_Int32_array *hideCardChara; // x12
  struct ServantStatusNpComponent_array *v43; // x8
  struct ServantStatusNpComponent_array *v44; // x8
  struct ServantStatusNpComponent_array *v45; // x8
  struct ServantStatusNpComponent_array *v46; // x8
  ServantStatusNpComponent_o *v47; // x8
  int32_t v48; // w9
  int v49; // w23
  UserServantEntity_o *userSvtEntity; // x0
  int v51; // w8
  float y; // s8
  float x; // s9
  float z; // s10
  UnityEngine_Object_o *baseCollider; // x22
  float v56; // s8
  int32_t v57; // w1
  int32_t v58; // w1
  int v59; // w22
  float v60; // s8
  float v61; // s10
  float v62; // s9
  int v63; // w23
  float v64; // s8
  float v65; // s9
  il2cpp_array_size_t v66; // w22
  float j; // s10
  struct ServantStatusNpComponent_array *v68; // x8
  struct ServantStatusNpComponent_array *v69; // x8
  ServantStatusNpComponent_o *v70; // x8
  UnityEngine_Vector3_o v71; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v72; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v73; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_48DF9B4 & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataManager_GetMasterData_ServantTreasureDeviceAddMaster___, item);
    sub_1B00CCC(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v7);
    sub_1B00CCC(&DataManager_TypeInfo, v8);
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, v9);
    sub_1B00CCC(&ServantStatusListViewItemDrawNp_TypeInfo, v10);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v11);
    sub_1B00CCC(&TreasureDvcInfo_TypeInfo, v12);
    sub_1B00CCC(&StringLiteral_1/*""*/, v13);
    byte_48DF9B4 = 1;
  }
  this->fields.dispMode = mode;
  v14 = (TreasureDvcInfo_o *)sub_1B00F18(TreasureDvcInfo_TypeInfo);
  TreasureDvcInfo___ctor(v14, 0LL);
  this->fields.tdInfo = v14;
  p_tdInfo = &this->fields.tdInfo;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.tdInfo, (int32_t)v14, v16, v17);
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
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2D62BBC *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
    SvtId = (ServantStatusNpComponent_o *)ServantStatusListViewItem__get_SvtId(item, 0LL);
    if ( !Master_object )
      goto LABEL_121;
    DispLimitCount = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                       (ServantLimitImageMaster_o *)Master_object,
                       (int32_t)SvtId,
                       DispLimitCount,
                       0LL);
    ServantStatusListViewItem__GetNpInfo_32028884(item, &this->fields.tdInfo, DispLimitCount, 0LL);
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
    v24 = sub_1B52BA8(v24);
  v25 = *(_QWORD *)(*(_QWORD *)(v24 + 192) + 16LL);
  if ( (*(_BYTE *)(v25 + 309) & 1) == 0 )
    v25 = sub_1B52BA8(v25);
  SvtId = **(ServantStatusNpComponent_o ***)(v25 + 184);
  if ( !SvtId )
    goto LABEL_121;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)SvtId,
                        (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_ServantTreasureDeviceAddMaster___);
  if ( item->fields._IsTransformed_k__BackingField )
  {
    EnableEntity = 0LL;
  }
  else
  {
    v28 = (ServantTreasureDeviceAddMaster_o *)MasterData_object;
    IsMine = ServantStatusListViewItem__get_IsMine(item, 0LL);
    SvtId = (ServantStatusNpComponent_o *)ServantStatusListViewItem__get_SvtId(item, 0LL);
    v20 = (unsigned int)SvtId;
    if ( IsMine )
    {
      if ( !v28 )
        goto LABEL_121;
      id = 0;
    }
    else
    {
      if ( !*p_tdInfo || !v28 )
        goto LABEL_121;
      id = (*p_tdInfo)->fields.id;
    }
    EnableEntity = ServantTreasureDeviceAddMaster__GetEnableEntity(v28, (int32_t)SvtId, LimitCount, id, 0LL);
  }
  SvtId = (ServantStatusNpComponent_o *)this->fields.transformNameSprite;
  if ( !SvtId )
    goto LABEL_121;
  IsTransformServant_k__BackingField = item->fields._IsTransformServant_k__BackingField;
  SvtId = (ServantStatusNpComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)SvtId, 0LL);
  if ( !SvtId )
    goto LABEL_121;
  if ( IsTransformServant_k__BackingField )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SvtId, 1, 0LL);
    transformNameLabel = this->fields.transformNameLabel;
    SvtId = (ServantStatusNpComponent_o *)ServantStatusListViewItem__GetTransformName(item, 0LL);
    if ( !transformNameLabel )
      goto LABEL_121;
    UILabel__set_text(transformNameLabel, (System_String_o *)SvtId, 0LL);
    transformNameAddHeight = this->fields.transformNameAddHeight;
    v34 = -transformNameAddHeight;
  }
  else
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SvtId, 0, 0LL);
    v34 = 0;
    transformNameAddHeight = 0;
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
    if ( !EnableEntity )
      goto LABEL_58;
    treasureDeviceIds = EnableEntity->fields.treasureDeviceIds;
    if ( !treasureDeviceIds )
      goto LABEL_121;
    if ( (__int64)i < (int)treasureDeviceIds->max_length )
    {
      npList = this->fields.npList;
      if ( !npList )
        goto LABEL_121;
      if ( i >= npList->max_length )
        goto LABEL_122;
      SvtId = npList->m_Items[i];
      if ( !SvtId )
        goto LABEL_121;
      SvtId = (ServantStatusNpComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)SvtId, 0LL);
      if ( !SvtId )
        goto LABEL_121;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SvtId, 1, 0LL);
      v38 = this->fields.npList;
      if ( !v38 )
        goto LABEL_121;
      if ( i >= v38->max_length )
        goto LABEL_122;
      v39 = EnableEntity->fields.treasureDeviceIds;
      if ( !v39 )
        goto LABEL_121;
      if ( i >= v39->max_length )
        goto LABEL_122;
      titles = EnableEntity->fields.titles;
      if ( !titles )
        goto LABEL_121;
      if ( i >= titles->max_length )
        goto LABEL_122;
      closedMessages = EnableEntity->fields.closedMessages;
      if ( !closedMessages )
        goto LABEL_121;
      if ( i >= closedMessages->max_length )
        goto LABEL_122;
      hideCardChara = EnableEntity->fields.hideCardChara;
      if ( !hideCardChara )
        goto LABEL_121;
      if ( i >= hideCardChara->max_length )
        goto LABEL_122;
      SvtId = v38->m_Items[i];
      if ( !SvtId )
        goto LABEL_121;
      ServantStatusNpComponent__Set(
        SvtId,
        i,
        *p_tdInfo,
        item,
        v39->m_Items[i + 1],
        1,
        EnableEntity->fields.condLimitCount,
        titles->m_Items[i],
        closedMessages->m_Items[i],
        hideCardChara->m_Items[i + 1],
        0LL);
      v43 = this->fields.npList;
      if ( !v43 )
        goto LABEL_121;
      if ( i >= v43->max_length )
        goto LABEL_122;
      v44 = (struct ServantStatusNpComponent_array *)((char *)v43 + 8 * i);
    }
    else
    {
LABEL_58:
      v45 = this->fields.npList;
      if ( !v45 )
        goto LABEL_121;
      if ( i >= v45->max_length )
        goto LABEL_122;
      SvtId = v45->m_Items[i];
      if ( !SvtId )
        goto LABEL_121;
      SvtId = (ServantStatusNpComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)SvtId, 0LL);
      if ( !SvtId )
        goto LABEL_121;
      if ( i )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SvtId, 0, 0LL);
        continue;
      }
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SvtId, 1, 0LL);
      v46 = this->fields.npList;
      if ( !v46 )
        goto LABEL_121;
      if ( !v46->max_length )
LABEL_122:
        sub_1B00F30(SvtId, v20);
      if ( !*p_tdInfo )
        goto LABEL_121;
      SvtId = v46->m_Items[0];
      if ( !SvtId )
        goto LABEL_121;
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
        0LL);
      v44 = this->fields.npList;
      if ( !v44 )
        goto LABEL_121;
      if ( !v44->max_length )
        goto LABEL_122;
    }
    v47 = v44->m_Items[0];
    if ( !v47 )
      goto LABEL_121;
    transformNameAddHeight += this->fields.npPitch + v47->fields._Adjust_k__BackingField;
  }
  if ( transformNameAddHeight >= 0 )
    v48 = transformNameAddHeight;
  else
    v48 = transformNameAddHeight + 1;
  v49 = transformNameAddHeight - (v48 & 0xFFFFFFFE) + transformNameAddHeight;
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
            goto LABEL_87;
          SvtId = (ServantStatusNpComponent_o *)this->fields.reinforceObject;
          if ( SvtId )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SvtId, 1, 0LL);
            SvtId = (ServantStatusNpComponent_o *)this->fields.reinforceButton;
            if ( SvtId )
            {
              BYTE1(SvtId->fields.commandCardBase) = 1;
              v49 += 58;
              UICommonButton__SetEnable((UICommonButton_o *)SvtId, item->fields._CanMoveCombine_k__BackingField, 0LL);
              if ( v49 >= 0 )
                v51 = v49;
              else
                v51 = v49 + 1;
              GameObjectExtensions__SetLocalPositionY(this->fields.reinforceObject, (float)-(v51 >> 1), 0LL);
              goto LABEL_87;
            }
          }
        }
        goto LABEL_121;
      }
    }
  }
LABEL_87:
  x = this->fields.baseSize.fields.x;
  y = this->fields.baseSize.fields.y;
  z = this->fields.baseSize.fields.z;
  baseCollider = (UnityEngine_Object_o *)this->fields.baseCollider;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v56 = y + (float)v49;
  if ( UnityEngine_Object__op_Inequality(baseCollider, 0LL, 0LL) )
  {
    SvtId = (ServantStatusNpComponent_o *)this->fields.baseCollider;
    if ( !SvtId )
      goto LABEL_121;
    v71.fields.x = x;
    v71.fields.y = v56;
    v71.fields.z = z;
    UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)SvtId, v71, 0LL);
  }
  SvtId = (ServantStatusNpComponent_o *)this->fields.baseSprite;
  if ( !SvtId )
    goto LABEL_121;
  v57 = x == INFINITY ? 0x80000000 : (int)x;
  UIWidget__set_width((UIWidget_o *)SvtId, v57, 0LL);
  SvtId = (ServantStatusNpComponent_o *)this->fields.baseSprite;
  if ( !SvtId )
    goto LABEL_121;
  v58 = v56 == INFINITY ? 0x80000000 : (int)v56;
  UIWidget__set_height((UIWidget_o *)SvtId, v58, 0LL);
  SvtId = (ServantStatusNpComponent_o *)this->fields.titleObject;
  v59 = v49 >= 0 ? v49 : v49 + 1;
  if ( !SvtId
    || (v60 = this->fields.titleBasePosition.fields.x,
        v61 = this->fields.titleBasePosition.fields.y,
        v62 = this->fields.titleBasePosition.fields.z,
        (SvtId = (ServantStatusNpComponent_o *)UnityEngine_GameObject__get_transform(
                                                 (UnityEngine_GameObject_o *)SvtId,
                                                 0LL)) == 0LL) )
  {
LABEL_121:
    sub_1B00F28(SvtId, v20);
  }
  v63 = v59 >> 1;
  v72.fields.y = v61 + (float)(v59 >> 1);
  v72.fields.x = v60;
  v72.fields.z = v62;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)SvtId, v72, 0LL);
  v64 = this->fields.npBasePosition.fields.x;
  v65 = this->fields.npBasePosition.fields.z;
  v66 = 0;
  for ( j = this->fields.npBasePosition.fields.y + (float)(v63 + v34);
        ;
        j = (float)(j - (float)this->fields.npPitch) - (float)v70->fields._Adjust_k__BackingField )
  {
    SvtId = (ServantStatusNpComponent_o *)ServantStatusListViewItemDrawNp_TypeInfo;
    if ( !ServantStatusListViewItemDrawNp_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawNp_TypeInfo);
      SvtId = (ServantStatusNpComponent_o *)ServantStatusListViewItemDrawNp_TypeInfo;
    }
    if ( (signed int)v66 >= (__int64)SvtId->fields.commandCardComponent->klass )
      break;
    v68 = this->fields.npList;
    if ( !v68 )
      goto LABEL_121;
    if ( v66 >= v68->max_length )
      goto LABEL_122;
    SvtId = v68->m_Items[v66];
    if ( !SvtId )
      goto LABEL_121;
    SvtId = (ServantStatusNpComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)SvtId, 0LL);
    if ( !SvtId )
      goto LABEL_121;
    v73.fields.x = v64;
    v73.fields.y = j;
    v73.fields.z = v65;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)SvtId, v73, 0LL);
    v69 = this->fields.npList;
    if ( !v69 )
      goto LABEL_121;
    if ( v66 >= v69->max_length )
      goto LABEL_122;
    v70 = v69->m_Items[v66];
    if ( !v70 )
      goto LABEL_121;
    ++v66;
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