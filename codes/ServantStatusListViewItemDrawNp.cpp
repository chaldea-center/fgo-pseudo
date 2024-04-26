void __fastcall ServantStatusListViewItemDrawNp___cctor(const MethodInfo *method)
{
  if ( (byte_4355E08 & 1) == 0 )
  {
    sub_B70694(&ServantStatusListViewItemDrawNp_TypeInfo);
    byte_4355E08 = 1;
  }
  ServantStatusListViewItemDrawNp_TypeInfo->static_fields->NP_LIST_MAX = 2;
}


void __fastcall ServantStatusListViewItemDrawNp___ctor(
        ServantStatusListViewItemDrawNp_o *this,
        const MethodInfo *method)
{
  ServantStatusListViewItemDrawNp_c *v3; // x0
  struct UnityEngine_GameObject_o *v4; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_4355E07 & 1) == 0 )
  {
    sub_B70694(&ServantStatusListViewItemDrawNp_TypeInfo);
    sub_B70694(&ServantStatusNpComponent___TypeInfo);
    byte_4355E07 = 1;
  }
  v3 = ServantStatusListViewItemDrawNp_TypeInfo;
  if ( (BYTE3(ServantStatusListViewItemDrawNp_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantStatusListViewItemDrawNp_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawNp_TypeInfo);
    v3 = ServantStatusListViewItemDrawNp_TypeInfo;
  }
  v4 = (struct UnityEngine_GameObject_o *)sub_B706AC(
                                            ServantStatusNpComponent___TypeInfo,
                                            v3->static_fields->NP_LIST_MAX);
  this->fields.reinforceObject = v4;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.reinforceObject,
    (System_Int32_array **)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  LODWORD(this->fields.tdInfo) = 42;
  this->fields.baseSize.fields.x = NAN;
  ServantStatusListViewItemDraw___ctor((ServantStatusListViewItemDraw_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusListViewItemDrawNp__Awake(
        ServantStatusListViewItemDrawNp_o *this,
        const MethodInfo *method)
{
  struct UnityEngine_GameObject_o *reinforceObject; // x8
  ServantStatusListViewItemDrawNp_o *v3; // x19
  float v4; // s1
  struct UnityEngine_GameObject_o *v5; // x8
  float v6; // s8
  float v7; // s0
  double v8; // d0
  struct UnityEngine_GameObject_o *titleObject; // x9
  int v10; // w20
  float v11; // s1
  float v12; // s0
  float v13; // s1
  float v14; // s2
  struct UnityEngine_GameObject_o *v15; // x8
  int v16; // w9
  float v17; // s8
  __int64 v18; // x0
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4

  reinforceObject = this->fields.reinforceObject;
  if ( !reinforceObject )
    goto LABEL_24;
  v3 = this;
  if ( SLODWORD(reinforceObject[1].klass) >= 2 )
  {
    this = (ServantStatusListViewItemDrawNp_o *)reinforceObject[1].monitor;
    if ( !this )
      goto LABEL_24;
    this = (ServantStatusListViewItemDrawNp_o *)UnityEngine_Component__get_transform(
                                                  (UnityEngine_Component_o *)this,
                                                  0LL);
    if ( !this )
      goto LABEL_24;
    *(UnityEngine_Vector3_o *)(&v4 - 1) = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
    v5 = v3->fields.reinforceObject;
    if ( !v5 )
      goto LABEL_24;
    if ( LODWORD(v5[1].klass) <= 1 )
      goto LABEL_25;
    this = *(ServantStatusListViewItemDrawNp_o **)&v5[1].fields.m_CachedPtr;
    if ( !this )
      goto LABEL_24;
    v6 = v4;
    this = (ServantStatusListViewItemDrawNp_o *)UnityEngine_Component__get_transform(
                                                  (UnityEngine_Component_o *)this,
                                                  0LL);
    if ( !this )
      goto LABEL_24;
    localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
    v7 = v6 - localPosition.fields.y;
    reinforceObject = v3->fields.reinforceObject;
    v8 = (float)(v6 - localPosition.fields.y) == INFINITY ? -v7 : v7;
    LODWORD(v3->fields.baseSize.fields.y) = (int)v8;
    if ( !reinforceObject )
      goto LABEL_24;
  }
  titleObject = v3->fields.titleObject;
  if ( !titleObject )
    goto LABEL_24;
  this = (ServantStatusListViewItemDrawNp_o *)v3->fields.npList;
  v10 = LODWORD(v3->fields.baseSize.fields.y) * LODWORD(reinforceObject[1].klass);
  v11 = (float)(*((_DWORD *)&titleObject[6].fields + 1) - v10);
  v3->fields.baseSize.fields.z = (float)titleObject[6].fields.m_CachedPtr;
  v3->fields.titleBasePosition.fields.x = v11;
  v3->fields.titleBasePosition.fields.y = 0.0;
  if ( !this )
    goto LABEL_24;
  this = (ServantStatusListViewItemDrawNp_o *)UnityEngine_GameObject__get_transform(
                                                (UnityEngine_GameObject_o *)this,
                                                0LL);
  if ( !this )
    goto LABEL_24;
  *(UnityEngine_Vector3_o *)&v12 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  v15 = v3->fields.reinforceObject;
  v16 = v10 >= 0 ? v10 : v10 + 1;
  v17 = (float)(v16 >> 1);
  v3->fields.titleBasePosition.fields.z = v12;
  v3->fields.npBasePosition.fields.x = v13 - v17;
  v3->fields.npBasePosition.fields.y = v14;
  if ( !v15 )
LABEL_24:
    sub_B7076C(this, method);
  if ( !LODWORD(v15[1].klass) )
  {
LABEL_25:
    v18 = sub_B70798(this);
    sub_B70738(v18, 0LL);
  }
  this = (ServantStatusListViewItemDrawNp_o *)v15[1].monitor;
  if ( !this )
    goto LABEL_24;
  this = (ServantStatusListViewItemDrawNp_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_24;
  v20 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  v3->fields.npBasePosition.fields.z = v20.fields.x;
  *(float *)&v3[1].klass = v20.fields.y - v17;
  HIDWORD(v3[1].klass) = LODWORD(v20.fields.z);
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
  int32_t i; // w21
  struct UnityEngine_GameObject_o *reinforceObject; // x8
  ServantStatusListViewItemDrawNp_c *v7; // x0
  __int64 v8; // x0

  if ( (byte_4355E06 & 1) == 0 )
  {
    sub_B70694(&ServantStatusListViewItemDrawNp_TypeInfo);
    byte_4355E06 = 1;
  }
  LOBYTE(this->fields.npPitch) = 1;
  for ( i = 0; ; ++i )
  {
    v7 = ServantStatusListViewItemDrawNp_TypeInfo;
    if ( (BYTE3(ServantStatusListViewItemDrawNp_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantStatusListViewItemDrawNp_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawNp_TypeInfo);
      v7 = ServantStatusListViewItemDrawNp_TypeInfo;
    }
    if ( i >= v7->static_fields->NP_LIST_MAX )
      break;
    reinforceObject = this->fields.reinforceObject;
    if ( !reinforceObject )
      goto LABEL_13;
    if ( (unsigned int)i >= LODWORD(reinforceObject[1].klass) )
    {
      v8 = sub_B70798(v7);
      sub_B70738(v8, 0LL);
    }
    v7 = (ServantStatusListViewItemDrawNp_c *)*((_QWORD *)&reinforceObject[1].monitor + i);
    if ( !v7 )
LABEL_13:
      sub_B7076C(v7, item);
    ServantStatusNpComponent__ModifyCommandCard((ServantStatusNpComponent_o *)v7, item, 0LL);
  }
}


void __fastcall ServantStatusListViewItemDrawNp__SetItem(
        ServantStatusListViewItemDrawNp_o *this,
        ServantStatusListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  TreasureDvcInfo_o *v7; // x23
  bool *p_isStart; // x22
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  float v15; // w21
  int32_t LimitCount; // w23
  __int64 v17; // x1
  ServantLimitImageMaster_o *Master_WarQuestSelectionMaster; // x24
  DataManager_o *SvtId; // x0
  int32_t v20; // w0
  __int64 v21; // x24
  __int64 v22; // x24
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  ServantTreasureDeviceAddEntity_o *EnableEntity; // x23
  ServantTreasureDeviceAddMaster_o *v25; // x24
  bool IsMine; // w25
  int32_t v27; // w3
  _BOOL4 IsTransformServant_k__BackingField; // w24
  UILabel_o *v29; // x24
  int tdInfo; // w27
  int v31; // w26
  unsigned __int64 i; // x24
  struct System_Int32_array *treasureDeviceIds; // x8
  struct UnityEngine_GameObject_o *reinforceObject; // x8
  struct UnityEngine_GameObject_o *v35; // x8
  struct System_Int32_array *v36; // x9
  struct System_String_array *titles; // x10
  struct System_String_array *closedMessages; // x11
  struct System_Int32_array *hideCardChara; // x12
  struct UnityEngine_GameObject_o *v40; // x8
  struct UnityEngine_GameObject_o *v41; // x8
  struct UnityEngine_GameObject_o *v42; // x8
  struct UnityEngine_GameObject_o *v43; // x8
  _DWORD *monitor; // x8
  UserServantEntity_o *userSvtEntity; // x0
  struct UISprite_o *transformNameSprite; // x8
  int v47; // w8
  float x; // s8
  float z; // s9
  float y; // s10
  UnityEngine_Object_o *baseSprite; // x22
  float v52; // s8
  double v53; // d0
  double v54; // d0
  int v55; // w22
  float v56; // s8
  float v57; // s10
  float v58; // s9
  int v59; // w23
  float v60; // s8
  float v61; // s9
  unsigned int v62; // w22
  float j; // s10
  struct UnityEngine_GameObject_o *v64; // x8
  struct UnityEngine_GameObject_o *v65; // x8
  __int64 v66; // x8
  __int64 v67; // x0
  UnityEngine_Vector3_o v68; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v69; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v70; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4355E05 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_ServantTreasureDeviceAddMaster___);
    sub_B70694(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&ServantStatusListViewItemDrawNp_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_B70694(&TreasureDvcInfo_TypeInfo);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_4355E05 = 1;
  }
  ServantStatusListViewItemDraw__SetItem((ServantStatusListViewItemDraw_o *)this, item, mode, 0LL);
  v7 = (TreasureDvcInfo_o *)sub_B70764(TreasureDvcInfo_TypeInfo);
  TreasureDvcInfo___ctor(v7, 0LL);
  p_isStart = &this->fields.isStart;
  *(_QWORD *)&this->fields.isStart = v7;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.isStart,
    (System_Int32_array **)v7,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  if ( !item || !mode )
    return;
  v15 = COERCE_FLOAT(ServantStatusListViewItem__GetDispLimitCount(item, 1, 0LL));
  LimitCount = ServantStatusListViewItem__get_LimitCount(item, 0LL);
  if ( item->fields._IsTransformed_k__BackingField )
  {
    ServantStatusListViewItem__GetTransformedNpInfo(item, (TreasureDvcInfo_o **)&this->fields.isStart, 0LL);
  }
  else if ( ServantStatusListViewItem__get_IsMine(item, 0LL) )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (ServantLimitImageMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
    SvtId = (DataManager_o *)ServantStatusListViewItem__get_SvtId(item, 0LL);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_121;
    v15 = COERCE_FLOAT(
            ServantLimitImageMaster__GetServantImageLimitSealAfter(
              Master_WarQuestSelectionMaster,
              (int32_t)SvtId,
              SLODWORD(v15),
              0LL));
    ServantStatusListViewItem__GetNpInfo_36359392(item, (TreasureDvcInfo_o **)&this->fields.isStart, SLODWORD(v15), 0LL);
    v20 = ServantStatusListViewItem__get_SvtId(item, 0LL);
    LimitCount = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                   Master_WarQuestSelectionMaster,
                   v20,
                   LimitCount,
                   0LL);
  }
  else
  {
    ServantStatusListViewItem__GetNpInfo(item, (TreasureDvcInfo_o **)&this->fields.isStart, 0LL);
  }
  v21 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v21 + 306) & 1) == 0 )
    sub_B08394(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v22 = **(_QWORD **)(v21 + 192);
  if ( (*(_BYTE *)(v22 + 306) & 1) == 0 )
    sub_B08394(v22);
  SvtId = **(DataManager_o ***)(v22 + 184);
  if ( !SvtId )
    goto LABEL_121;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         SvtId,
                                         (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantTreasureDeviceAddMaster___);
  if ( item->fields._IsTransformed_k__BackingField )
  {
    EnableEntity = 0LL;
  }
  else
  {
    v25 = (ServantTreasureDeviceAddMaster_o *)MasterData_WarQuestSelectionMaster;
    IsMine = ServantStatusListViewItem__get_IsMine(item, 0LL);
    SvtId = (DataManager_o *)ServantStatusListViewItem__get_SvtId(item, 0LL);
    v17 = (unsigned int)SvtId;
    if ( IsMine )
    {
      if ( !v25 )
        goto LABEL_121;
      v27 = 0;
    }
    else
    {
      if ( !*(_QWORD *)p_isStart || !v25 )
        goto LABEL_121;
      v27 = *(_DWORD *)(*(_QWORD *)p_isStart + 16LL);
    }
    EnableEntity = ServantTreasureDeviceAddMaster__GetEnableEntity(v25, (int32_t)SvtId, LimitCount, v27, 0LL);
  }
  SvtId = (DataManager_o *)this->fields.transformNameLabel;
  if ( !SvtId )
    goto LABEL_121;
  IsTransformServant_k__BackingField = item->fields._IsTransformServant_k__BackingField;
  SvtId = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)SvtId, 0LL);
  if ( !SvtId )
    goto LABEL_121;
  if ( IsTransformServant_k__BackingField )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SvtId, 1, 0LL);
    v29 = *(UILabel_o **)&this->fields.transformNameAddHeight;
    SvtId = (DataManager_o *)ServantStatusListViewItem__GetTransformName(item, 0LL);
    if ( !v29 )
      goto LABEL_121;
    UILabel__set_text(v29, (System_String_o *)SvtId, 0LL);
    tdInfo = (int)this->fields.tdInfo;
    v31 = -tdInfo;
  }
  else
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SvtId, 0, 0LL);
    v31 = 0;
    tdInfo = 0;
  }
  for ( i = 0LL; ; ++i )
  {
    SvtId = (DataManager_o *)ServantStatusListViewItemDrawNp_TypeInfo;
    if ( (BYTE3(ServantStatusListViewItemDrawNp_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantStatusListViewItemDrawNp_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawNp_TypeInfo);
      SvtId = (DataManager_o *)ServantStatusListViewItemDrawNp_TypeInfo;
    }
    if ( (__int64)i >= (__int64)SvtId[1].fields.saveNameList->klass )
      break;
    if ( !EnableEntity )
      goto LABEL_56;
    treasureDeviceIds = EnableEntity->fields.treasureDeviceIds;
    if ( !treasureDeviceIds )
      goto LABEL_121;
    if ( (__int64)i < (int)treasureDeviceIds->max_length )
    {
      reinforceObject = this->fields.reinforceObject;
      if ( !reinforceObject )
        goto LABEL_121;
      if ( i >= LODWORD(reinforceObject[1].klass) )
        goto LABEL_122;
      SvtId = (DataManager_o *)*((_QWORD *)&reinforceObject[1].monitor + i);
      if ( !SvtId )
        goto LABEL_121;
      SvtId = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)SvtId, 0LL);
      if ( !SvtId )
        goto LABEL_121;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SvtId, 1, 0LL);
      v35 = this->fields.reinforceObject;
      if ( !v35 )
        goto LABEL_121;
      if ( i >= LODWORD(v35[1].klass) )
        goto LABEL_122;
      v36 = EnableEntity->fields.treasureDeviceIds;
      if ( !v36 )
        goto LABEL_121;
      if ( i >= v36->max_length )
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
      SvtId = (DataManager_o *)*((_QWORD *)&v35[1].monitor + i);
      if ( !SvtId )
        goto LABEL_121;
      ServantStatusNpComponent__Set(
        (ServantStatusNpComponent_o *)SvtId,
        i,
        *(TreasureDvcInfo_o **)p_isStart,
        item,
        v36->m_Items[i + 1],
        1,
        EnableEntity->fields.condLimitCount,
        titles->m_Items[i],
        closedMessages->m_Items[i],
        hideCardChara->m_Items[i + 1],
        0LL);
      v40 = this->fields.reinforceObject;
      if ( !v40 )
        goto LABEL_121;
      if ( i >= LODWORD(v40[1].klass) )
        goto LABEL_122;
      v41 = (struct UnityEngine_GameObject_o *)((char *)v40 + 8 * i);
    }
    else
    {
LABEL_56:
      v42 = this->fields.reinforceObject;
      if ( !v42 )
        goto LABEL_121;
      if ( i >= LODWORD(v42[1].klass) )
        goto LABEL_122;
      SvtId = (DataManager_o *)*((_QWORD *)&v42[1].monitor + i);
      if ( !SvtId )
        goto LABEL_121;
      SvtId = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)SvtId, 0LL);
      if ( !SvtId )
        goto LABEL_121;
      if ( i )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SvtId, 0, 0LL);
        continue;
      }
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SvtId, 1, 0LL);
      v43 = this->fields.reinforceObject;
      if ( !v43 )
        goto LABEL_121;
      if ( !LODWORD(v43[1].klass) )
      {
LABEL_122:
        v67 = sub_B70798(SvtId);
        sub_B70738(v67, 0LL);
      }
      if ( !*(_QWORD *)p_isStart )
        goto LABEL_121;
      SvtId = (DataManager_o *)v43[1].monitor;
      if ( !SvtId )
        goto LABEL_121;
      ServantStatusNpComponent__Set(
        (ServantStatusNpComponent_o *)SvtId,
        0,
        *(TreasureDvcInfo_o **)p_isStart,
        item,
        *(_DWORD *)(*(_QWORD *)p_isStart + 16LL),
        0,
        0,
        (System_String_o *)StringLiteral_1/*""*/,
        (System_String_o *)StringLiteral_1/*""*/,
        0,
        0LL);
      v41 = this->fields.reinforceObject;
      if ( !v41 )
        goto LABEL_121;
      if ( !LODWORD(v41[1].klass) )
        goto LABEL_122;
    }
    monitor = v41[1].monitor;
    if ( !monitor )
      goto LABEL_121;
    tdInfo += LODWORD(this->fields.baseSize.fields.y) + monitor[46];
  }
  if ( !item->fields._IsDisplayCombineButton_k__BackingField )
    goto LABEL_87;
  userSvtEntity = item->fields.userSvtEntity;
  if ( !userSvtEntity )
    goto LABEL_87;
  SvtId = (DataManager_o *)UserServantEntity__IsHeroine(userSvtEntity, 0LL);
  if ( ((unsigned __int8)SvtId & 1) != 0 )
    goto LABEL_87;
  if ( !*(_QWORD *)p_isStart )
    goto LABEL_121;
  if ( *(_DWORD *)(*(_QWORD *)p_isStart + 20LL) >= *(_DWORD *)(*(_QWORD *)p_isStart + 24LL) )
    goto LABEL_87;
  SvtId = (DataManager_o *)this->fields.reinforceButton;
  if ( !SvtId )
    goto LABEL_121;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SvtId, 1, 0LL);
  transformNameSprite = this->fields.transformNameSprite;
  if ( !transformNameSprite )
    goto LABEL_121;
  transformNameSprite->fields.mStarted = 1;
  SvtId = (DataManager_o *)this->fields.transformNameSprite;
  if ( !SvtId )
    goto LABEL_121;
  tdInfo += 58;
  UICommonButton__SetEnable((UICommonButton_o *)SvtId, item->fields._CanMoveCombine_k__BackingField, 0LL);
  if ( tdInfo >= 0 )
    v47 = tdInfo;
  else
    v47 = tdInfo + 1;
  GameObjectExtensions__SetLocalPositionY(
    (UnityEngine_GameObject_o *)this->fields.reinforceButton,
    (float)-(v47 >> 1),
    0LL);
LABEL_87:
  z = this->fields.baseSize.fields.z;
  x = this->fields.titleBasePosition.fields.x;
  y = this->fields.titleBasePosition.fields.y;
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v52 = x + (float)tdInfo;
  if ( UnityEngine_Object__op_Inequality(baseSprite, 0LL, 0LL) )
  {
    SvtId = (DataManager_o *)this->fields.baseSprite;
    if ( SvtId )
    {
      v68.fields.x = z;
      v68.fields.y = v52;
      v68.fields.z = y;
      UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)SvtId, v68, 0LL);
      goto LABEL_93;
    }
LABEL_121:
    sub_B7076C(SvtId, v17);
  }
LABEL_93:
  SvtId = (DataManager_o *)this->fields.titleObject;
  if ( !SvtId )
    goto LABEL_121;
  v53 = z;
  if ( z == INFINITY )
    v53 = -z;
  UIWidget__set_width((UIWidget_o *)SvtId, (int)v53, 0LL);
  SvtId = (DataManager_o *)this->fields.titleObject;
  if ( !SvtId )
    goto LABEL_121;
  v54 = v52;
  if ( v52 == INFINITY )
    v54 = -INFINITY;
  UIWidget__set_height((UIWidget_o *)SvtId, (int)v54, 0LL);
  SvtId = (DataManager_o *)this->fields.npList;
  v55 = tdInfo >= 0 ? tdInfo : tdInfo + 1;
  if ( !SvtId )
    goto LABEL_121;
  v56 = this->fields.titleBasePosition.fields.z;
  v57 = this->fields.npBasePosition.fields.x;
  v58 = this->fields.npBasePosition.fields.y;
  SvtId = (DataManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)SvtId, 0LL);
  if ( !SvtId )
    goto LABEL_121;
  v59 = v55 >> 1;
  v69.fields.y = v57 + (float)(v55 >> 1);
  v69.fields.x = v56;
  v69.fields.z = v58;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)SvtId, v69, 0LL);
  v60 = this->fields.npBasePosition.fields.z;
  v61 = *((float *)&this[1].klass + 1);
  v62 = 0;
  for ( j = *(float *)&this[1].klass + (float)(v59 + v31);
        ;
        j = (float)(j - (float)SLODWORD(this->fields.baseSize.fields.y)) - (float)*(int *)(v66 + 184) )
  {
    SvtId = (DataManager_o *)ServantStatusListViewItemDrawNp_TypeInfo;
    if ( (BYTE3(ServantStatusListViewItemDrawNp_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantStatusListViewItemDrawNp_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawNp_TypeInfo);
      SvtId = (DataManager_o *)ServantStatusListViewItemDrawNp_TypeInfo;
    }
    if ( (signed int)v62 >= (__int64)SvtId[1].fields.saveNameList->klass )
      break;
    v64 = this->fields.reinforceObject;
    if ( !v64 )
      goto LABEL_121;
    if ( v62 >= LODWORD(v64[1].klass) )
      goto LABEL_122;
    SvtId = (DataManager_o *)*((_QWORD *)&v64[1].monitor + (int)v62);
    if ( !SvtId )
      goto LABEL_121;
    SvtId = (DataManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)SvtId, 0LL);
    if ( !SvtId )
      goto LABEL_121;
    v70.fields.x = v60;
    v70.fields.y = j;
    v70.fields.z = v61;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)SvtId, v70, 0LL);
    v65 = this->fields.reinforceObject;
    if ( !v65 )
      goto LABEL_121;
    if ( v62 >= LODWORD(v65[1].klass) )
      goto LABEL_122;
    v66 = *((_QWORD *)&v65[1].monitor + (int)v62);
    if ( !v66 )
      goto LABEL_121;
    ++v62;
  }
  if ( LOBYTE(this->fields.npPitch) )
  {
    if ( LODWORD(this->fields.baseSize.fields.x) != LODWORD(v15) )
    {
      ((void (__fastcall *)(ServantStatusListViewItemDrawNp_o *, ServantStatusListViewItem_o *, Il2CppMethodPointer))this->klass->vtable._7_ModifyCommandCard.method)(
        this,
        item,
        this->klass->vtable._8_ModifyFace.methodPtr);
      this->fields.baseSize.fields.x = v15;
    }
  }
}