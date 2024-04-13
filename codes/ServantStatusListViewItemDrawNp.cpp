void __fastcall ServantStatusListViewItemDrawNp___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42ECB66 & 1) == 0 )
  {
    sub_B5D5C4(&ServantStatusListViewItemDrawNp_TypeInfo, v1, v2, v3);
    byte_42ECB66 = 1;
  }
  ServantStatusListViewItemDrawNp_TypeInfo->static_fields->NP_LIST_MAX = 2;
}


void __fastcall ServantStatusListViewItemDrawNp___ctor(
        ServantStatusListViewItemDrawNp_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  ServantStatusListViewItemDrawNp_c *v8; // x0
  struct UnityEngine_GameObject_o *v9; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7

  if ( (byte_42ECB65 & 1) == 0 )
  {
    sub_B5D5C4(&ServantStatusListViewItemDrawNp_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&ServantStatusNpComponent___TypeInfo, v5, v6, v7);
    byte_42ECB65 = 1;
  }
  v8 = ServantStatusListViewItemDrawNp_TypeInfo;
  if ( (BYTE3(ServantStatusListViewItemDrawNp_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantStatusListViewItemDrawNp_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawNp_TypeInfo);
    v8 = ServantStatusListViewItemDrawNp_TypeInfo;
  }
  v9 = (struct UnityEngine_GameObject_o *)sub_B5D5DC(
                                            ServantStatusNpComponent___TypeInfo,
                                            v8->static_fields->NP_LIST_MAX);
  this->fields.reinforceObject = v9;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.reinforceObject,
    (System_Int32_array **)v9,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
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
    sub_B5D69C(this, method);
  if ( !LODWORD(v15[1].klass) )
  {
LABEL_25:
    v18 = sub_B5D6C8(this);
    sub_B5D668(v18, 0LL);
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
  __int64 v3; // x3
  int32_t i; // w21
  struct UnityEngine_GameObject_o *reinforceObject; // x8
  ServantStatusListViewItemDrawNp_c *v8; // x0
  __int64 v9; // x0

  if ( (byte_42ECB64 & 1) == 0 )
  {
    sub_B5D5C4(&ServantStatusListViewItemDrawNp_TypeInfo, (_DWORD)item, (_DWORD)method, v3);
    byte_42ECB64 = 1;
  }
  LOBYTE(this->fields.npPitch) = 1;
  for ( i = 0; ; ++i )
  {
    v8 = ServantStatusListViewItemDrawNp_TypeInfo;
    if ( (BYTE3(ServantStatusListViewItemDrawNp_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantStatusListViewItemDrawNp_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawNp_TypeInfo);
      v8 = ServantStatusListViewItemDrawNp_TypeInfo;
    }
    if ( i >= v8->static_fields->NP_LIST_MAX )
      break;
    reinforceObject = this->fields.reinforceObject;
    if ( !reinforceObject )
      goto LABEL_13;
    if ( (unsigned int)i >= LODWORD(reinforceObject[1].klass) )
    {
      v9 = sub_B5D6C8(v8);
      sub_B5D668(v9, 0LL);
    }
    v8 = (ServantStatusListViewItemDrawNp_c *)*((_QWORD *)&reinforceObject[1].monitor + i);
    if ( !v8 )
LABEL_13:
      sub_B5D69C(v8, item);
    ServantStatusNpComponent__ModifyCommandCard((ServantStatusNpComponent_o *)v8, item, method);
  }
}


void __fastcall ServantStatusListViewItemDrawNp__SetItem(
        ServantStatusListViewItemDrawNp_o *this,
        ServantStatusListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  TreasureDvcInfo_o *v28; // x23
  bool *p_isStart; // x22
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  float v36; // w21
  int32_t LimitCount; // w23
  ServantLimitImageMaster_o *Master_WarQuestSelectionMaster; // x24
  DataManager_o *SvtId; // x0
  __int64 v40; // x1
  int32_t v41; // w0
  __int64 v42; // x24
  __int64 v43; // x24
  ServantTreasureDeviceAddMaster_o *MasterData_WarQuestSelectionMaster; // x24
  bool IsMine; // w25
  int32_t v46; // w3
  ServantTreasureDeviceAddEntity_o *EnableEntity; // x23
  unsigned __int64 v48; // x24
  int v49; // w26
  struct System_Int32_array *treasureDeviceIds; // x8
  struct UnityEngine_GameObject_o *reinforceObject; // x8
  struct UnityEngine_GameObject_o *v52; // x8
  struct System_Int32_array *v53; // x9
  struct System_String_array *titles; // x10
  struct System_String_array *closedMessages; // x11
  struct System_Int32_array *hideCardChara; // x12
  struct UnityEngine_GameObject_o *v57; // x8
  struct UnityEngine_GameObject_o *v58; // x8
  struct UnityEngine_GameObject_o *v59; // x8
  struct UnityEngine_GameObject_o *v60; // x8
  _DWORD *monitor; // x8
  UserServantEntity_o *userSvtEntity; // x0
  struct TreasureDvcInfo_o *tdInfo; // x8
  int v64; // w8
  float x; // s8
  float z; // s9
  float y; // s10
  UnityEngine_Object_o *baseSprite; // x22
  float v69; // s8
  double v70; // d0
  double v71; // d0
  int v72; // w22
  float v73; // s8
  float v74; // s10
  float v75; // s9
  float v76; // s11
  float v77; // s8
  float v78; // s9
  unsigned int v79; // w22
  float i; // s10
  struct UnityEngine_GameObject_o *v81; // x8
  struct UnityEngine_GameObject_o *v82; // x8
  __int64 v83; // x8
  __int64 v84; // x0
  const MethodInfo *v85; // [xsp+10h] [xbp-80h]
  UnityEngine_Vector3_o v86; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v87; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v88; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42ECB63 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantTreasureDeviceAddMaster___, (_DWORD)item, mode, method);
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v7, v8, v9);
    sub_B5D5C4(&DataManager_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&ServantStatusListViewItemDrawNp_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v19, v20, v21);
    sub_B5D5C4(&TreasureDvcInfo_TypeInfo, v22, v23, v24);
    sub_B5D5C4(&StringLiteral_1/*""*/, v25, v26, v27);
    byte_42ECB63 = 1;
  }
  ServantStatusListViewItemDraw__SetItem((ServantStatusListViewItemDraw_o *)this, item, mode, 0LL);
  v28 = (TreasureDvcInfo_o *)sub_B5D694(TreasureDvcInfo_TypeInfo);
  TreasureDvcInfo___ctor(v28, 0LL);
  p_isStart = &this->fields.isStart;
  *(_QWORD *)&this->fields.isStart = v28;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.isStart,
    (System_Int32_array **)v28,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  if ( !item || !mode )
    return;
  v36 = *(float *)&item->fields.dispLimitCount;
  LimitCount = ServantStatusListViewItem__get_LimitCount(item, 0LL);
  if ( ServantStatusListViewItem__get_IsMine(item, 0LL) )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (ServantLimitImageMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
    SvtId = (DataManager_o *)ServantStatusListViewItem__get_SvtId(item, 0LL);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_110;
    v36 = COERCE_FLOAT(
            ServantLimitImageMaster__GetServantImageLimitSealAfter(
              Master_WarQuestSelectionMaster,
              (int32_t)SvtId,
              SLODWORD(v36),
              0LL));
    ServantStatusListViewItem__GetNpInfo_34351972(item, (TreasureDvcInfo_o **)&this->fields.isStart, SLODWORD(v36), 0LL);
    v41 = ServantStatusListViewItem__get_SvtId(item, 0LL);
    LimitCount = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                   Master_WarQuestSelectionMaster,
                   v41,
                   LimitCount,
                   0LL);
  }
  else
  {
    ServantStatusListViewItem__GetNpInfo(item, (TreasureDvcInfo_o **)&this->fields.isStart, 0LL);
  }
  v42 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v42 + 306) & 1) == 0 )
    sub_AF52C4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v43 = **(_QWORD **)(v42 + 192);
  if ( (*(_BYTE *)(v43 + 306) & 1) == 0 )
    sub_AF52C4(v43);
  SvtId = **(DataManager_o ***)(v43 + 184);
  if ( !SvtId )
    goto LABEL_110;
  MasterData_WarQuestSelectionMaster = (ServantTreasureDeviceAddMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                             SvtId,
                                                                             (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantTreasureDeviceAddMaster___);
  IsMine = ServantStatusListViewItem__get_IsMine(item, 0LL);
  SvtId = (DataManager_o *)ServantStatusListViewItem__get_SvtId(item, 0LL);
  v40 = (unsigned int)SvtId;
  if ( IsMine )
  {
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_110;
    v46 = 0;
  }
  else
  {
    if ( !*(_QWORD *)p_isStart || !MasterData_WarQuestSelectionMaster )
      goto LABEL_110;
    v46 = *(_DWORD *)(*(_QWORD *)p_isStart + 16LL);
  }
  EnableEntity = ServantTreasureDeviceAddMaster__GetEnableEntity(
                   MasterData_WarQuestSelectionMaster,
                   (int32_t)SvtId,
                   LimitCount,
                   v46,
                   0LL);
  v48 = 0LL;
  v49 = 0;
  while ( 1 )
  {
    SvtId = (DataManager_o *)ServantStatusListViewItemDrawNp_TypeInfo;
    if ( (BYTE3(ServantStatusListViewItemDrawNp_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantStatusListViewItemDrawNp_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawNp_TypeInfo);
      SvtId = (DataManager_o *)ServantStatusListViewItemDrawNp_TypeInfo;
    }
    if ( (__int64)v48 >= (__int64)SvtId[1].fields.saveNameList->klass )
      break;
    if ( !EnableEntity )
      goto LABEL_45;
    treasureDeviceIds = EnableEntity->fields.treasureDeviceIds;
    if ( !treasureDeviceIds )
      goto LABEL_110;
    if ( (__int64)v48 < (int)treasureDeviceIds->max_length )
    {
      reinforceObject = this->fields.reinforceObject;
      if ( !reinforceObject )
        goto LABEL_110;
      if ( v48 >= LODWORD(reinforceObject[1].klass) )
        goto LABEL_111;
      SvtId = (DataManager_o *)*((_QWORD *)&reinforceObject[1].monitor + v48);
      if ( !SvtId )
        goto LABEL_110;
      SvtId = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)SvtId, 0LL);
      if ( !SvtId )
        goto LABEL_110;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SvtId, 1, 0LL);
      v52 = this->fields.reinforceObject;
      if ( !v52 )
        goto LABEL_110;
      if ( v48 >= LODWORD(v52[1].klass) )
        goto LABEL_111;
      v53 = EnableEntity->fields.treasureDeviceIds;
      if ( !v53 )
        goto LABEL_110;
      if ( v48 >= v53->max_length )
        goto LABEL_111;
      titles = EnableEntity->fields.titles;
      if ( !titles )
        goto LABEL_110;
      if ( v48 >= titles->max_length )
        goto LABEL_111;
      closedMessages = EnableEntity->fields.closedMessages;
      if ( !closedMessages )
        goto LABEL_110;
      if ( v48 >= closedMessages->max_length )
        goto LABEL_111;
      hideCardChara = EnableEntity->fields.hideCardChara;
      if ( !hideCardChara )
        goto LABEL_110;
      if ( v48 >= hideCardChara->max_length )
        goto LABEL_111;
      SvtId = (DataManager_o *)*((_QWORD *)&v52[1].monitor + v48);
      if ( !SvtId )
        goto LABEL_110;
      ServantStatusNpComponent__Set(
        (ServantStatusNpComponent_o *)SvtId,
        v48,
        *(TreasureDvcInfo_o **)p_isStart,
        item,
        v53->m_Items[v48 + 1],
        1,
        EnableEntity->fields.condLimitCount,
        titles->m_Items[v48],
        closedMessages->m_Items[v48],
        hideCardChara->m_Items[v48 + 1],
        v85);
      v57 = this->fields.reinforceObject;
      if ( !v57 )
        goto LABEL_110;
      if ( v48 >= LODWORD(v57[1].klass) )
        goto LABEL_111;
      v58 = (struct UnityEngine_GameObject_o *)((char *)v57 + 8 * v48);
    }
    else
    {
LABEL_45:
      v59 = this->fields.reinforceObject;
      if ( !v59 )
        goto LABEL_110;
      if ( v48 >= LODWORD(v59[1].klass) )
        goto LABEL_111;
      SvtId = (DataManager_o *)*((_QWORD *)&v59[1].monitor + v48);
      if ( !SvtId )
        goto LABEL_110;
      SvtId = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)SvtId, 0LL);
      if ( !SvtId )
        goto LABEL_110;
      if ( v48 )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SvtId, 0, 0LL);
        goto LABEL_59;
      }
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SvtId, 1, 0LL);
      v60 = this->fields.reinforceObject;
      if ( !v60 )
        goto LABEL_110;
      if ( !LODWORD(v60[1].klass) )
      {
LABEL_111:
        v84 = sub_B5D6C8(SvtId);
        sub_B5D668(v84, 0LL);
      }
      if ( !*(_QWORD *)p_isStart )
        goto LABEL_110;
      SvtId = (DataManager_o *)v60[1].monitor;
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
        v85);
      v58 = this->fields.reinforceObject;
      if ( !v58 )
        goto LABEL_110;
      if ( !LODWORD(v58[1].klass) )
        goto LABEL_111;
    }
    monitor = v58[1].monitor;
    if ( !monitor )
      goto LABEL_110;
    v49 += LODWORD(this->fields.baseSize.fields.y) + monitor[46];
LABEL_59:
    ++v48;
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
  v49 += 58;
  UICommonButton__SetEnable((UICommonButton_o *)SvtId, item->fields._CanMoveCombine_k__BackingField, 0LL);
  if ( v49 >= 0 )
    v64 = v49;
  else
    v64 = v49 + 1;
  GameObjectExtensions__SetLocalPositionY(
    (UnityEngine_GameObject_o *)this->fields.reinforceButton,
    (float)-(v64 >> 1),
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
  v69 = x + (float)v49;
  if ( UnityEngine_Object__op_Inequality(baseSprite, 0LL, 0LL) )
  {
    SvtId = (DataManager_o *)this->fields.baseSprite;
    if ( SvtId )
    {
      v86.fields.x = z;
      v86.fields.y = v69;
      v86.fields.z = y;
      UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)SvtId, v86, 0LL);
      goto LABEL_82;
    }
LABEL_110:
    sub_B5D69C(SvtId, v40);
  }
LABEL_82:
  SvtId = (DataManager_o *)this->fields.titleObject;
  if ( !SvtId )
    goto LABEL_110;
  v70 = z;
  if ( z == INFINITY )
    v70 = -z;
  UIWidget__set_width((UIWidget_o *)SvtId, (int)v70, 0LL);
  SvtId = (DataManager_o *)this->fields.titleObject;
  if ( !SvtId )
    goto LABEL_110;
  v71 = v69;
  if ( v69 == INFINITY )
    v71 = -INFINITY;
  UIWidget__set_height((UIWidget_o *)SvtId, (int)v71, 0LL);
  SvtId = (DataManager_o *)this->fields.npList;
  v72 = v49 >= 0 ? v49 : v49 + 1;
  if ( !SvtId )
    goto LABEL_110;
  v73 = this->fields.titleBasePosition.fields.z;
  v74 = this->fields.npBasePosition.fields.x;
  v75 = this->fields.npBasePosition.fields.y;
  SvtId = (DataManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)SvtId, 0LL);
  if ( !SvtId )
    goto LABEL_110;
  v76 = (float)(v72 >> 1);
  v87.fields.y = v74 + v76;
  v87.fields.x = v73;
  v87.fields.z = v75;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)SvtId, v87, 0LL);
  v77 = this->fields.npBasePosition.fields.z;
  v78 = *((float *)&this[1].klass + 1);
  v79 = 0;
  for ( i = *(float *)&this[1].klass + v76;
        ;
        i = (float)(i - (float)SLODWORD(this->fields.baseSize.fields.y)) - (float)*(int *)(v83 + 184) )
  {
    SvtId = (DataManager_o *)ServantStatusListViewItemDrawNp_TypeInfo;
    if ( (BYTE3(ServantStatusListViewItemDrawNp_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantStatusListViewItemDrawNp_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawNp_TypeInfo);
      SvtId = (DataManager_o *)ServantStatusListViewItemDrawNp_TypeInfo;
    }
    if ( (signed int)v79 >= (__int64)SvtId[1].fields.saveNameList->klass )
      break;
    v81 = this->fields.reinforceObject;
    if ( !v81 )
      goto LABEL_110;
    if ( v79 >= LODWORD(v81[1].klass) )
      goto LABEL_111;
    SvtId = (DataManager_o *)*((_QWORD *)&v81[1].monitor + (int)v79);
    if ( !SvtId )
      goto LABEL_110;
    SvtId = (DataManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)SvtId, 0LL);
    if ( !SvtId )
      goto LABEL_110;
    v88.fields.x = v77;
    v88.fields.y = i;
    v88.fields.z = v78;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)SvtId, v88, 0LL);
    v82 = this->fields.reinforceObject;
    if ( !v82 )
      goto LABEL_110;
    if ( v79 >= LODWORD(v82[1].klass) )
      goto LABEL_111;
    v83 = *((_QWORD *)&v82[1].monitor + (int)v79);
    if ( !v83 )
      goto LABEL_110;
    ++v79;
  }
  if ( LOBYTE(this->fields.npPitch) )
  {
    if ( LODWORD(this->fields.baseSize.fields.x) != LODWORD(v36) )
    {
      ((void (__fastcall *)(ServantStatusListViewItemDrawNp_o *, ServantStatusListViewItem_o *, Il2CppMethodPointer))this->klass->vtable._7_ModifyCommandCard.method)(
        this,
        item,
        this->klass->vtable._8_ModifyFace.methodPtr);
      this->fields.baseSize.fields.x = v36;
    }
  }
}