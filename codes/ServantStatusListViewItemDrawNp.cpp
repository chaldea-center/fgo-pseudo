void __fastcall ServantStatusListViewItemDrawNp___cctor(const MethodInfo *method)
{
  if ( (byte_42B4262 & 1) == 0 )
  {
    sub_B52984(&ServantStatusListViewItemDrawNp_TypeInfo);
    byte_42B4262 = 1;
  }
  ServantStatusListViewItemDrawNp_TypeInfo->static_fields->NP_LIST_MAX = 2;
}


void __fastcall ServantStatusListViewItemDrawNp___ctor(
        ServantStatusListViewItemDrawNp_o *this,
        const MethodInfo *method)
{
  struct UnityEngine_GameObject_o *v3; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  ServantStatusListViewItemDrawNp_c *v10; // x0

  if ( (byte_42B4261 & 1) == 0 )
  {
    sub_B52984(&ServantStatusListViewItemDrawNp_TypeInfo);
    sub_B52984(&ServantStatusNpComponent___TypeInfo);
    byte_42B4261 = 1;
  }
  v10 = ServantStatusListViewItemDrawNp_TypeInfo;
  if ( (BYTE3(ServantStatusListViewItemDrawNp_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantStatusListViewItemDrawNp_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawNp_TypeInfo);
    v10 = ServantStatusListViewItemDrawNp_TypeInfo;
  }
  v3 = (struct UnityEngine_GameObject_o *)sub_B5299C(
                                            ServantStatusNpComponent___TypeInfo,
                                            v10->static_fields->NP_LIST_MAX);
  this->fields.reinforceObject = v3;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.reinforceObject,
    (System_Int32_array **)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
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
    sub_B52A5C(this, method);
  if ( !LODWORD(v15[1].klass) )
  {
LABEL_25:
    v18 = sub_B52A88(this);
    sub_B52A28(v18, 0LL);
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

  if ( (byte_42B4260 & 1) == 0 )
  {
    sub_B52984(&ServantStatusListViewItemDrawNp_TypeInfo);
    byte_42B4260 = 1;
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
      v8 = sub_B52A88(v7);
      sub_B52A28(v8, 0LL);
    }
    v7 = (ServantStatusListViewItemDrawNp_c *)*((_QWORD *)&reinforceObject[1].monitor + i);
    if ( !v7 )
LABEL_13:
      sub_B52A5C(v7, item);
    ServantStatusNpComponent__ModifyCommandCard((ServantStatusNpComponent_o *)v7, item, method);
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
  ServantLimitImageMaster_o *Master_WarQuestSelectionMaster; // x24
  DataManager_o *SvtId; // x0
  __int64 v19; // x1
  int32_t v20; // w0
  __int64 v21; // x24
  __int64 v22; // x24
  ServantTreasureDeviceAddMaster_o *MasterData_WarQuestSelectionMaster; // x24
  bool IsMine; // w25
  int32_t v25; // w3
  ServantTreasureDeviceAddEntity_o *EnableEntity; // x23
  unsigned __int64 v27; // x24
  int v28; // w26
  struct System_Int32_array *treasureDeviceIds; // x8
  struct UnityEngine_GameObject_o *reinforceObject; // x8
  struct UnityEngine_GameObject_o *v31; // x8
  struct System_Int32_array *v32; // x9
  struct System_String_array *titles; // x10
  struct System_String_array *closedMessages; // x11
  struct System_Int32_array *hideCardChara; // x12
  struct UnityEngine_GameObject_o *v36; // x8
  struct UnityEngine_GameObject_o *v37; // x8
  struct UnityEngine_GameObject_o *v38; // x8
  struct UnityEngine_GameObject_o *v39; // x8
  _DWORD *monitor; // x8
  UserServantEntity_o *userSvtEntity; // x0
  struct TreasureDvcInfo_o *tdInfo; // x8
  int v43; // w8
  float x; // s8
  float z; // s9
  float y; // s10
  UnityEngine_Object_o *baseSprite; // x22
  float v48; // s8
  double v49; // d0
  double v50; // d0
  int v51; // w22
  float v52; // s8
  float v53; // s10
  float v54; // s9
  float v55; // s11
  float v56; // s8
  float v57; // s9
  unsigned int v58; // w22
  float i; // s10
  struct UnityEngine_GameObject_o *v60; // x8
  struct UnityEngine_GameObject_o *v61; // x8
  __int64 v62; // x8
  __int64 v63; // x0
  const MethodInfo *v64; // [xsp+10h] [xbp-80h]
  UnityEngine_Vector3_o v65; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v66; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v67; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42B425F & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ServantTreasureDeviceAddMaster___);
    sub_B52984(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&ServantStatusListViewItemDrawNp_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_B52984(&TreasureDvcInfo_TypeInfo);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42B425F = 1;
  }
  ServantStatusListViewItemDraw__SetItem((ServantStatusListViewItemDraw_o *)this, item, mode, 0LL);
  v7 = (TreasureDvcInfo_o *)sub_B52A54(TreasureDvcInfo_TypeInfo);
  TreasureDvcInfo___ctor(v7, 0LL);
  p_isStart = &this->fields.isStart;
  *(_QWORD *)&this->fields.isStart = v7;
  sub_B52920(
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
  v15 = *(float *)&item->fields.dispLimitCount;
  LimitCount = ServantStatusListViewItem__get_LimitCount(item, 0LL);
  if ( ServantStatusListViewItem__get_IsMine(item, 0LL) )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (ServantLimitImageMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
    SvtId = (DataManager_o *)ServantStatusListViewItem__get_SvtId(item, 0LL);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_110;
    v15 = COERCE_FLOAT(
            ServantLimitImageMaster__GetServantImageLimitSealAfter(
              Master_WarQuestSelectionMaster,
              (int32_t)SvtId,
              SLODWORD(v15),
              0LL));
    ServantStatusListViewItem__GetNpInfo_34547460(item, (TreasureDvcInfo_o **)&this->fields.isStart, SLODWORD(v15), 0LL);
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
    sub_AEB684(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v22 = **(_QWORD **)(v21 + 192);
  if ( (*(_BYTE *)(v22 + 306) & 1) == 0 )
    sub_AEB684(v22);
  SvtId = **(DataManager_o ***)(v22 + 184);
  if ( !SvtId )
    goto LABEL_110;
  MasterData_WarQuestSelectionMaster = (ServantTreasureDeviceAddMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                             SvtId,
                                                                             (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantTreasureDeviceAddMaster___);
  IsMine = ServantStatusListViewItem__get_IsMine(item, 0LL);
  SvtId = (DataManager_o *)ServantStatusListViewItem__get_SvtId(item, 0LL);
  v19 = (unsigned int)SvtId;
  if ( IsMine )
  {
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_110;
    v25 = 0;
  }
  else
  {
    if ( !*(_QWORD *)p_isStart || !MasterData_WarQuestSelectionMaster )
      goto LABEL_110;
    v25 = *(_DWORD *)(*(_QWORD *)p_isStart + 16LL);
  }
  EnableEntity = ServantTreasureDeviceAddMaster__GetEnableEntity(
                   MasterData_WarQuestSelectionMaster,
                   (int32_t)SvtId,
                   LimitCount,
                   v25,
                   0LL);
  v27 = 0LL;
  v28 = 0;
  while ( 1 )
  {
    SvtId = (DataManager_o *)ServantStatusListViewItemDrawNp_TypeInfo;
    if ( (BYTE3(ServantStatusListViewItemDrawNp_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantStatusListViewItemDrawNp_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawNp_TypeInfo);
      SvtId = (DataManager_o *)ServantStatusListViewItemDrawNp_TypeInfo;
    }
    if ( (__int64)v27 >= (__int64)SvtId[1].fields.saveNameList->klass )
      break;
    if ( !EnableEntity )
      goto LABEL_45;
    treasureDeviceIds = EnableEntity->fields.treasureDeviceIds;
    if ( !treasureDeviceIds )
      goto LABEL_110;
    if ( (__int64)v27 < (int)treasureDeviceIds->max_length )
    {
      reinforceObject = this->fields.reinforceObject;
      if ( !reinforceObject )
        goto LABEL_110;
      if ( v27 >= LODWORD(reinforceObject[1].klass) )
        goto LABEL_111;
      SvtId = (DataManager_o *)*((_QWORD *)&reinforceObject[1].monitor + v27);
      if ( !SvtId )
        goto LABEL_110;
      SvtId = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)SvtId, 0LL);
      if ( !SvtId )
        goto LABEL_110;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SvtId, 1, 0LL);
      v31 = this->fields.reinforceObject;
      if ( !v31 )
        goto LABEL_110;
      if ( v27 >= LODWORD(v31[1].klass) )
        goto LABEL_111;
      v32 = EnableEntity->fields.treasureDeviceIds;
      if ( !v32 )
        goto LABEL_110;
      if ( v27 >= v32->max_length )
        goto LABEL_111;
      titles = EnableEntity->fields.titles;
      if ( !titles )
        goto LABEL_110;
      if ( v27 >= titles->max_length )
        goto LABEL_111;
      closedMessages = EnableEntity->fields.closedMessages;
      if ( !closedMessages )
        goto LABEL_110;
      if ( v27 >= closedMessages->max_length )
        goto LABEL_111;
      hideCardChara = EnableEntity->fields.hideCardChara;
      if ( !hideCardChara )
        goto LABEL_110;
      if ( v27 >= hideCardChara->max_length )
        goto LABEL_111;
      SvtId = (DataManager_o *)*((_QWORD *)&v31[1].monitor + v27);
      if ( !SvtId )
        goto LABEL_110;
      ServantStatusNpComponent__Set(
        (ServantStatusNpComponent_o *)SvtId,
        v27,
        *(TreasureDvcInfo_o **)p_isStart,
        item,
        v32->m_Items[v27 + 1],
        1,
        EnableEntity->fields.condLimitCount,
        titles->m_Items[v27],
        closedMessages->m_Items[v27],
        hideCardChara->m_Items[v27 + 1],
        v64);
      v36 = this->fields.reinforceObject;
      if ( !v36 )
        goto LABEL_110;
      if ( v27 >= LODWORD(v36[1].klass) )
        goto LABEL_111;
      v37 = (struct UnityEngine_GameObject_o *)((char *)v36 + 8 * v27);
    }
    else
    {
LABEL_45:
      v38 = this->fields.reinforceObject;
      if ( !v38 )
        goto LABEL_110;
      if ( v27 >= LODWORD(v38[1].klass) )
        goto LABEL_111;
      SvtId = (DataManager_o *)*((_QWORD *)&v38[1].monitor + v27);
      if ( !SvtId )
        goto LABEL_110;
      SvtId = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)SvtId, 0LL);
      if ( !SvtId )
        goto LABEL_110;
      if ( v27 )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SvtId, 0, 0LL);
        goto LABEL_59;
      }
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SvtId, 1, 0LL);
      v39 = this->fields.reinforceObject;
      if ( !v39 )
        goto LABEL_110;
      if ( !LODWORD(v39[1].klass) )
      {
LABEL_111:
        v63 = sub_B52A88(SvtId);
        sub_B52A28(v63, 0LL);
      }
      if ( !*(_QWORD *)p_isStart )
        goto LABEL_110;
      SvtId = (DataManager_o *)v39[1].monitor;
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
        v64);
      v37 = this->fields.reinforceObject;
      if ( !v37 )
        goto LABEL_110;
      if ( !LODWORD(v37[1].klass) )
        goto LABEL_111;
    }
    monitor = v37[1].monitor;
    if ( !monitor )
      goto LABEL_110;
    v28 += LODWORD(this->fields.baseSize.fields.y) + monitor[46];
LABEL_59:
    ++v27;
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
  v28 += 58;
  UICommonButton__SetEnable((UICommonButton_o *)SvtId, item->fields._CanMoveCombine_k__BackingField, 0LL);
  if ( v28 >= 0 )
    v43 = v28;
  else
    v43 = v28 + 1;
  GameObjectExtensions__SetLocalPositionY(
    (UnityEngine_GameObject_o *)this->fields.reinforceButton,
    (float)-(v43 >> 1),
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
  v48 = x + (float)v28;
  if ( UnityEngine_Object__op_Inequality(baseSprite, 0LL, 0LL) )
  {
    SvtId = (DataManager_o *)this->fields.baseSprite;
    if ( SvtId )
    {
      v65.fields.x = z;
      v65.fields.y = v48;
      v65.fields.z = y;
      UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)SvtId, v65, 0LL);
      goto LABEL_82;
    }
LABEL_110:
    sub_B52A5C(SvtId, v19);
  }
LABEL_82:
  SvtId = (DataManager_o *)this->fields.titleObject;
  if ( !SvtId )
    goto LABEL_110;
  v49 = z;
  if ( z == INFINITY )
    v49 = -z;
  UIWidget__set_width((UIWidget_o *)SvtId, (int)v49, 0LL);
  SvtId = (DataManager_o *)this->fields.titleObject;
  if ( !SvtId )
    goto LABEL_110;
  v50 = v48;
  if ( v48 == INFINITY )
    v50 = -INFINITY;
  UIWidget__set_height((UIWidget_o *)SvtId, (int)v50, 0LL);
  SvtId = (DataManager_o *)this->fields.npList;
  v51 = v28 >= 0 ? v28 : v28 + 1;
  if ( !SvtId )
    goto LABEL_110;
  v52 = this->fields.titleBasePosition.fields.z;
  v53 = this->fields.npBasePosition.fields.x;
  v54 = this->fields.npBasePosition.fields.y;
  SvtId = (DataManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)SvtId, 0LL);
  if ( !SvtId )
    goto LABEL_110;
  v55 = (float)(v51 >> 1);
  v66.fields.y = v53 + v55;
  v66.fields.x = v52;
  v66.fields.z = v54;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)SvtId, v66, 0LL);
  v56 = this->fields.npBasePosition.fields.z;
  v57 = *((float *)&this[1].klass + 1);
  v58 = 0;
  for ( i = *(float *)&this[1].klass + v55;
        ;
        i = (float)(i - (float)SLODWORD(this->fields.baseSize.fields.y)) - (float)*(int *)(v62 + 184) )
  {
    SvtId = (DataManager_o *)ServantStatusListViewItemDrawNp_TypeInfo;
    if ( (BYTE3(ServantStatusListViewItemDrawNp_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantStatusListViewItemDrawNp_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawNp_TypeInfo);
      SvtId = (DataManager_o *)ServantStatusListViewItemDrawNp_TypeInfo;
    }
    if ( (signed int)v58 >= (__int64)SvtId[1].fields.saveNameList->klass )
      break;
    v60 = this->fields.reinforceObject;
    if ( !v60 )
      goto LABEL_110;
    if ( v58 >= LODWORD(v60[1].klass) )
      goto LABEL_111;
    SvtId = (DataManager_o *)*((_QWORD *)&v60[1].monitor + (int)v58);
    if ( !SvtId )
      goto LABEL_110;
    SvtId = (DataManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)SvtId, 0LL);
    if ( !SvtId )
      goto LABEL_110;
    v67.fields.x = v56;
    v67.fields.y = i;
    v67.fields.z = v57;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)SvtId, v67, 0LL);
    v61 = this->fields.reinforceObject;
    if ( !v61 )
      goto LABEL_110;
    if ( v58 >= LODWORD(v61[1].klass) )
      goto LABEL_111;
    v62 = *((_QWORD *)&v61[1].monitor + (int)v58);
    if ( !v62 )
      goto LABEL_110;
    ++v58;
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