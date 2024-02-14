void __fastcall ServantStatusListViewItemDrawNp___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_42186BB & 1) == 0 )
  {
    sub_B0D8A4(&ServantStatusListViewItemDrawNp_TypeInfo, v1);
    byte_42186BB = 1;
  }
  ServantStatusListViewItemDrawNp_TypeInfo->static_fields->NP_LIST_MAX = 2;
}


void __fastcall ServantStatusListViewItemDrawNp___ctor(
        ServantStatusListViewItemDrawNp_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  ServantStatusListViewItemDrawNp_c *v4; // x0
  struct UnityEngine_GameObject_o *v5; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42186BA & 1) == 0 )
  {
    sub_B0D8A4(&ServantStatusListViewItemDrawNp_TypeInfo, method);
    sub_B0D8A4(&ServantStatusNpComponent___TypeInfo, v3);
    byte_42186BA = 1;
  }
  v4 = ServantStatusListViewItemDrawNp_TypeInfo;
  if ( (BYTE3(ServantStatusListViewItemDrawNp_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantStatusListViewItemDrawNp_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawNp_TypeInfo);
    v4 = ServantStatusListViewItemDrawNp_TypeInfo;
  }
  v5 = (struct UnityEngine_GameObject_o *)sub_B0D8BC(
                                            ServantStatusNpComponent___TypeInfo,
                                            v4->static_fields->NP_LIST_MAX);
  this->fields.reinforceObject = v5;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.reinforceObject,
    (System_Int32_array **)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
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
    sub_B0D97C(this);
  if ( !LODWORD(v15[1].klass) )
  {
LABEL_25:
    v18 = sub_B0D9A8(this);
    sub_B0D948(v18, 0LL);
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

  if ( (byte_42186B9 & 1) == 0 )
  {
    sub_B0D8A4(&ServantStatusListViewItemDrawNp_TypeInfo, item);
    byte_42186B9 = 1;
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
      v8 = sub_B0D9A8(v7);
      sub_B0D948(v8, 0LL);
    }
    v7 = (ServantStatusListViewItemDrawNp_c *)*((_QWORD *)&reinforceObject[1].monitor + i);
    if ( !v7 )
LABEL_13:
      sub_B0D97C(v7);
    ServantStatusNpComponent__ModifyCommandCard((ServantStatusNpComponent_o *)v7, item, method);
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
  __int64 v14; // x1
  __int64 v15; // x2
  TreasureDvcInfo_o *v16; // x23
  bool *p_isStart; // x22
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  float v24; // w21
  int32_t LimitCount; // w23
  ServantLimitImageMaster_o *Master_WarQuestSelectionMaster; // x24
  DataManager_o *SvtId; // x0
  int32_t v28; // w0
  __int64 v29; // x24
  __int64 v30; // x24
  ServantTreasureDeviceAddMaster_o *MasterData_WarQuestSelectionMaster; // x24
  bool IsMine; // w25
  int32_t v33; // w3
  ServantTreasureDeviceAddEntity_o *EnableEntity; // x23
  unsigned __int64 v35; // x24
  int v36; // w26
  struct System_Int32_array *treasureDeviceIds; // x8
  struct UnityEngine_GameObject_o *reinforceObject; // x8
  struct UnityEngine_GameObject_o *v39; // x8
  struct System_Int32_array *v40; // x9
  struct System_String_array *titles; // x10
  struct System_String_array *closedMessages; // x11
  struct System_Int32_array *hideCardChara; // x12
  struct UnityEngine_GameObject_o *v44; // x8
  struct UnityEngine_GameObject_o *v45; // x8
  struct UnityEngine_GameObject_o *v46; // x8
  struct UnityEngine_GameObject_o *v47; // x8
  _DWORD *monitor; // x8
  UserServantEntity_o *userSvtEntity; // x0
  struct TreasureDvcInfo_o *tdInfo; // x8
  int v51; // w8
  float x; // s8
  float z; // s9
  float y; // s10
  UnityEngine_Object_o *baseSprite; // x22
  float v56; // s8
  double v57; // d0
  double v58; // d0
  int v59; // w22
  float v60; // s8
  float v61; // s10
  float v62; // s9
  float v63; // s11
  float v64; // s8
  float v65; // s9
  unsigned int v66; // w22
  float i; // s10
  struct UnityEngine_GameObject_o *v68; // x8
  struct UnityEngine_GameObject_o *v69; // x8
  __int64 v70; // x8
  __int64 v71; // x0
  const MethodInfo *v72; // [xsp+10h] [xbp-80h]
  UnityEngine_Vector3_o v73; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v74; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v75; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42186B8 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantTreasureDeviceAddMaster___, item);
    sub_B0D8A4(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v7);
    sub_B0D8A4(&DataManager_TypeInfo, v8);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v9);
    sub_B0D8A4(&ServantStatusListViewItemDrawNp_TypeInfo, v10);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v11);
    sub_B0D8A4(&TreasureDvcInfo_TypeInfo, v12);
    sub_B0D8A4(&StringLiteral_1/*""*/, v13);
    byte_42186B8 = 1;
  }
  ServantStatusListViewItemDraw__SetItem((ServantStatusListViewItemDraw_o *)this, item, mode, 0LL);
  v16 = (TreasureDvcInfo_o *)sub_B0D974(TreasureDvcInfo_TypeInfo, v14, v15);
  TreasureDvcInfo___ctor(v16, 0LL);
  p_isStart = &this->fields.isStart;
  *(_QWORD *)&this->fields.isStart = v16;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.isStart,
    (System_Int32_array **)v16,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  if ( !item || !mode )
    return;
  v24 = *(float *)&item->fields.dispLimitCount;
  LimitCount = ServantStatusListViewItem__get_LimitCount(item, 0LL);
  if ( ServantStatusListViewItem__get_IsMine(item, 0LL) )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (ServantLimitImageMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
    SvtId = (DataManager_o *)ServantStatusListViewItem__get_SvtId(item, 0LL);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_110;
    v24 = COERCE_FLOAT(
            ServantLimitImageMaster__GetServantImageLimitSealAfter(
              Master_WarQuestSelectionMaster,
              (int32_t)SvtId,
              SLODWORD(v24),
              0LL));
    ServantStatusListViewItem__GetNpInfo_33502736(item, (TreasureDvcInfo_o **)&this->fields.isStart, SLODWORD(v24), 0LL);
    v28 = ServantStatusListViewItem__get_SvtId(item, 0LL);
    LimitCount = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                   Master_WarQuestSelectionMaster,
                   v28,
                   LimitCount,
                   0LL);
  }
  else
  {
    ServantStatusListViewItem__GetNpInfo(item, (TreasureDvcInfo_o **)&this->fields.isStart, 0LL);
  }
  v29 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v29 + 306) & 1) == 0 )
    sub_AA65A4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v30 = **(_QWORD **)(v29 + 192);
  if ( (*(_BYTE *)(v30 + 306) & 1) == 0 )
    sub_AA65A4(v30);
  SvtId = **(DataManager_o ***)(v30 + 184);
  if ( !SvtId )
    goto LABEL_110;
  MasterData_WarQuestSelectionMaster = (ServantTreasureDeviceAddMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                             SvtId,
                                                                             (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantTreasureDeviceAddMaster___);
  IsMine = ServantStatusListViewItem__get_IsMine(item, 0LL);
  SvtId = (DataManager_o *)ServantStatusListViewItem__get_SvtId(item, 0LL);
  if ( IsMine )
  {
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_110;
    v33 = 0;
  }
  else
  {
    if ( !*(_QWORD *)p_isStart || !MasterData_WarQuestSelectionMaster )
      goto LABEL_110;
    v33 = *(_DWORD *)(*(_QWORD *)p_isStart + 16LL);
  }
  EnableEntity = ServantTreasureDeviceAddMaster__GetEnableEntity(
                   MasterData_WarQuestSelectionMaster,
                   (int32_t)SvtId,
                   LimitCount,
                   v33,
                   0LL);
  v35 = 0LL;
  v36 = 0;
  while ( 1 )
  {
    SvtId = (DataManager_o *)ServantStatusListViewItemDrawNp_TypeInfo;
    if ( (BYTE3(ServantStatusListViewItemDrawNp_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantStatusListViewItemDrawNp_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawNp_TypeInfo);
      SvtId = (DataManager_o *)ServantStatusListViewItemDrawNp_TypeInfo;
    }
    if ( (__int64)v35 >= (__int64)SvtId[1].fields.saveNameList->klass )
      break;
    if ( !EnableEntity )
      goto LABEL_45;
    treasureDeviceIds = EnableEntity->fields.treasureDeviceIds;
    if ( !treasureDeviceIds )
      goto LABEL_110;
    if ( (__int64)v35 < (int)treasureDeviceIds->max_length )
    {
      reinforceObject = this->fields.reinforceObject;
      if ( !reinforceObject )
        goto LABEL_110;
      if ( v35 >= LODWORD(reinforceObject[1].klass) )
        goto LABEL_111;
      SvtId = (DataManager_o *)*((_QWORD *)&reinforceObject[1].monitor + v35);
      if ( !SvtId )
        goto LABEL_110;
      SvtId = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)SvtId, 0LL);
      if ( !SvtId )
        goto LABEL_110;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SvtId, 1, 0LL);
      v39 = this->fields.reinforceObject;
      if ( !v39 )
        goto LABEL_110;
      if ( v35 >= LODWORD(v39[1].klass) )
        goto LABEL_111;
      v40 = EnableEntity->fields.treasureDeviceIds;
      if ( !v40 )
        goto LABEL_110;
      if ( v35 >= v40->max_length )
        goto LABEL_111;
      titles = EnableEntity->fields.titles;
      if ( !titles )
        goto LABEL_110;
      if ( v35 >= titles->max_length )
        goto LABEL_111;
      closedMessages = EnableEntity->fields.closedMessages;
      if ( !closedMessages )
        goto LABEL_110;
      if ( v35 >= closedMessages->max_length )
        goto LABEL_111;
      hideCardChara = EnableEntity->fields.hideCardChara;
      if ( !hideCardChara )
        goto LABEL_110;
      if ( v35 >= hideCardChara->max_length )
        goto LABEL_111;
      SvtId = (DataManager_o *)*((_QWORD *)&v39[1].monitor + v35);
      if ( !SvtId )
        goto LABEL_110;
      ServantStatusNpComponent__Set(
        (ServantStatusNpComponent_o *)SvtId,
        v35,
        *(TreasureDvcInfo_o **)p_isStart,
        item,
        v40->m_Items[v35 + 1],
        1,
        EnableEntity->fields.condLimitCount,
        titles->m_Items[v35],
        closedMessages->m_Items[v35],
        hideCardChara->m_Items[v35 + 1],
        v72);
      v44 = this->fields.reinforceObject;
      if ( !v44 )
        goto LABEL_110;
      if ( v35 >= LODWORD(v44[1].klass) )
        goto LABEL_111;
      v45 = (struct UnityEngine_GameObject_o *)((char *)v44 + 8 * v35);
    }
    else
    {
LABEL_45:
      v46 = this->fields.reinforceObject;
      if ( !v46 )
        goto LABEL_110;
      if ( v35 >= LODWORD(v46[1].klass) )
        goto LABEL_111;
      SvtId = (DataManager_o *)*((_QWORD *)&v46[1].monitor + v35);
      if ( !SvtId )
        goto LABEL_110;
      SvtId = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)SvtId, 0LL);
      if ( !SvtId )
        goto LABEL_110;
      if ( v35 )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SvtId, 0, 0LL);
        goto LABEL_59;
      }
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SvtId, 1, 0LL);
      v47 = this->fields.reinforceObject;
      if ( !v47 )
        goto LABEL_110;
      if ( !LODWORD(v47[1].klass) )
      {
LABEL_111:
        v71 = sub_B0D9A8(SvtId);
        sub_B0D948(v71, 0LL);
      }
      if ( !*(_QWORD *)p_isStart )
        goto LABEL_110;
      SvtId = (DataManager_o *)v47[1].monitor;
      if ( !SvtId )
        goto LABEL_110;
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
        v72);
      v45 = this->fields.reinforceObject;
      if ( !v45 )
        goto LABEL_110;
      if ( !LODWORD(v45[1].klass) )
        goto LABEL_111;
    }
    monitor = v45[1].monitor;
    if ( !monitor )
      goto LABEL_110;
    v36 += LODWORD(this->fields.baseSize.fields.y) + monitor[46];
LABEL_59:
    ++v35;
  }
  if ( !item->fields._IsDisplayCombineButton_k__BackingField )
    goto LABEL_76;
  userSvtEntity = item->fields.userSvtEntity;
  if ( !userSvtEntity )
    goto LABEL_76;
  SvtId = (DataManager_o *)UserServantEntity__IsHeroine(userSvtEntity, 0LL);
  if ( ((unsigned __int8)SvtId & 1) != 0 )
    goto LABEL_76;
  if ( !*(_QWORD *)p_isStart )
    goto LABEL_110;
  if ( *(_DWORD *)(*(_QWORD *)p_isStart + 20LL) >= *(_DWORD *)(*(_QWORD *)p_isStart + 24LL) )
    goto LABEL_76;
  SvtId = (DataManager_o *)this->fields.reinforceButton;
  if ( !SvtId )
    goto LABEL_110;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SvtId, 1, 0LL);
  tdInfo = this->fields.tdInfo;
  if ( !tdInfo )
    goto LABEL_110;
  BYTE1(tdInfo[1].fields.id) = 1;
  SvtId = (DataManager_o *)this->fields.tdInfo;
  if ( !SvtId )
    goto LABEL_110;
  v36 += 58;
  UICommonButton__SetEnable((UICommonButton_o *)SvtId, item->fields._CanMoveCombine_k__BackingField, 0LL);
  if ( v36 >= 0 )
    v51 = v36;
  else
    v51 = v36 + 1;
  GameObjectExtensions__SetLocalPositionY(
    (UnityEngine_GameObject_o *)this->fields.reinforceButton,
    (float)-(v51 >> 1),
    0LL);
LABEL_76:
  z = this->fields.baseSize.fields.z;
  x = this->fields.titleBasePosition.fields.x;
  y = this->fields.titleBasePosition.fields.y;
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v56 = x + (float)v36;
  if ( UnityEngine_Object__op_Inequality(baseSprite, 0LL, 0LL) )
  {
    SvtId = (DataManager_o *)this->fields.baseSprite;
    if ( SvtId )
    {
      v73.fields.x = z;
      v73.fields.y = v56;
      v73.fields.z = y;
      UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)SvtId, v73, 0LL);
      goto LABEL_82;
    }
LABEL_110:
    sub_B0D97C(SvtId);
  }
LABEL_82:
  SvtId = (DataManager_o *)this->fields.titleObject;
  if ( !SvtId )
    goto LABEL_110;
  v57 = z;
  if ( z == INFINITY )
    v57 = -z;
  UIWidget__set_width((UIWidget_o *)SvtId, (int)v57, 0LL);
  SvtId = (DataManager_o *)this->fields.titleObject;
  if ( !SvtId )
    goto LABEL_110;
  v58 = v56;
  if ( v56 == INFINITY )
    v58 = -INFINITY;
  UIWidget__set_height((UIWidget_o *)SvtId, (int)v58, 0LL);
  SvtId = (DataManager_o *)this->fields.npList;
  v59 = v36 >= 0 ? v36 : v36 + 1;
  if ( !SvtId )
    goto LABEL_110;
  v60 = this->fields.titleBasePosition.fields.z;
  v61 = this->fields.npBasePosition.fields.x;
  v62 = this->fields.npBasePosition.fields.y;
  SvtId = (DataManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)SvtId, 0LL);
  if ( !SvtId )
    goto LABEL_110;
  v63 = (float)(v59 >> 1);
  v74.fields.y = v61 + v63;
  v74.fields.x = v60;
  v74.fields.z = v62;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)SvtId, v74, 0LL);
  v64 = this->fields.npBasePosition.fields.z;
  v65 = *((float *)&this[1].klass + 1);
  v66 = 0;
  for ( i = *(float *)&this[1].klass + v63;
        ;
        i = (float)(i - (float)SLODWORD(this->fields.baseSize.fields.y)) - (float)*(int *)(v70 + 184) )
  {
    SvtId = (DataManager_o *)ServantStatusListViewItemDrawNp_TypeInfo;
    if ( (BYTE3(ServantStatusListViewItemDrawNp_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantStatusListViewItemDrawNp_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawNp_TypeInfo);
      SvtId = (DataManager_o *)ServantStatusListViewItemDrawNp_TypeInfo;
    }
    if ( (signed int)v66 >= (__int64)SvtId[1].fields.saveNameList->klass )
      break;
    v68 = this->fields.reinforceObject;
    if ( !v68 )
      goto LABEL_110;
    if ( v66 >= LODWORD(v68[1].klass) )
      goto LABEL_111;
    SvtId = (DataManager_o *)*((_QWORD *)&v68[1].monitor + (int)v66);
    if ( !SvtId )
      goto LABEL_110;
    SvtId = (DataManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)SvtId, 0LL);
    if ( !SvtId )
      goto LABEL_110;
    v75.fields.x = v64;
    v75.fields.y = i;
    v75.fields.z = v65;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)SvtId, v75, 0LL);
    v69 = this->fields.reinforceObject;
    if ( !v69 )
      goto LABEL_110;
    if ( v66 >= LODWORD(v69[1].klass) )
      goto LABEL_111;
    v70 = *((_QWORD *)&v69[1].monitor + (int)v66);
    if ( !v70 )
      goto LABEL_110;
    ++v66;
  }
  if ( LOBYTE(this->fields.npPitch) )
  {
    if ( LODWORD(this->fields.baseSize.fields.x) != LODWORD(v24) )
    {
      ((void (__fastcall *)(ServantStatusListViewItemDrawNp_o *, ServantStatusListViewItem_o *, Il2CppMethodPointer))this->klass->vtable._7_ModifyCommandCard.method)(
        this,
        item,
        this->klass->vtable._8_ModifyFace.methodPtr);
      this->fields.baseSize.fields.x = v24;
    }
  }
}