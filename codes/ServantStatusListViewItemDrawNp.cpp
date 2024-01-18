void __fastcall ServantStatusListViewItemDrawNp___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_418A7D2 & 1) == 0 )
  {
    sub_B2C35C(&ServantStatusListViewItemDrawNp_TypeInfo, v1);
    byte_418A7D2 = 1;
  }
  ServantStatusListViewItemDrawNp_TypeInfo->static_fields->NP_LIST_MAX = 2;
}


void __fastcall ServantStatusListViewItemDrawNp___ctor(
        ServantStatusListViewItemDrawNp_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  ServantStatusListViewItemDrawNp_c *v4; // x0
  struct TreasureDvcInfo_o *v5; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_418A7D1 & 1) == 0 )
  {
    sub_B2C35C(&ServantStatusListViewItemDrawNp_TypeInfo, method);
    sub_B2C35C(&ServantStatusNpComponent___TypeInfo, v3);
    byte_418A7D1 = 1;
  }
  v4 = ServantStatusListViewItemDrawNp_TypeInfo;
  if ( (BYTE3(ServantStatusListViewItemDrawNp_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantStatusListViewItemDrawNp_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawNp_TypeInfo);
    v4 = ServantStatusListViewItemDrawNp_TypeInfo;
  }
  v5 = (struct TreasureDvcInfo_o *)sub_B2C374(ServantStatusNpComponent___TypeInfo, v4->static_fields->NP_LIST_MAX);
  this->fields.tdInfo = v5;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.tdInfo, (System_Int32_array **)v5, v6, v7, v8, v9, v10, v11);
  this->fields.baseSize.fields.x = NAN;
  ServantStatusListViewItemDraw___ctor((ServantStatusListViewItemDraw_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusListViewItemDrawNp__Awake(
        ServantStatusListViewItemDrawNp_o *this,
        const MethodInfo *method)
{
  struct TreasureDvcInfo_o *tdInfo; // x8
  ServantStatusListViewItemDrawNp_o *v3; // x19
  float v4; // s1
  struct TreasureDvcInfo_o *v5; // x8
  float v6; // s8
  float v7; // s0
  double v8; // d0
  struct UnityEngine_GameObject_o *titleObject; // x9
  int v10; // w20
  float v11; // s1
  float v12; // s0
  float v13; // s1
  float v14; // s2
  struct TreasureDvcInfo_o *v15; // x8
  int v16; // w9
  float v17; // s8
  __int64 v18; // x0
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4

  tdInfo = this->fields.tdInfo;
  if ( !tdInfo )
    goto LABEL_24;
  v3 = this;
  if ( tdInfo->fields.maxLv >= 2 )
  {
    this = (ServantStatusListViewItemDrawNp_o *)tdInfo->fields.name;
    if ( !this )
      goto LABEL_24;
    this = (ServantStatusListViewItemDrawNp_o *)UnityEngine_Component__get_transform(
                                                  (UnityEngine_Component_o *)this,
                                                  0LL);
    if ( !this )
      goto LABEL_24;
    *(UnityEngine_Vector3_o *)(&v4 - 1) = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
    v5 = v3->fields.tdInfo;
    if ( !v5 )
      goto LABEL_24;
    if ( v5->fields.maxLv <= 1u )
      goto LABEL_25;
    this = (ServantStatusListViewItemDrawNp_o *)v5->fields.explanation;
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
    tdInfo = v3->fields.tdInfo;
    v8 = (float)(v6 - localPosition.fields.y) == INFINITY ? -v7 : v7;
    LODWORD(v3->fields.baseSize.fields.y) = (int)v8;
    if ( !tdInfo )
      goto LABEL_24;
  }
  titleObject = v3->fields.titleObject;
  if ( !titleObject )
    goto LABEL_24;
  this = (ServantStatusListViewItemDrawNp_o *)v3->fields.npList;
  v10 = LODWORD(v3->fields.baseSize.fields.y) * tdInfo->fields.maxLv;
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
  v15 = v3->fields.tdInfo;
  v16 = v10 >= 0 ? v10 : v10 + 1;
  v17 = (float)(v16 >> 1);
  v3->fields.titleBasePosition.fields.z = v12;
  v3->fields.npBasePosition.fields.x = v13 - v17;
  v3->fields.npBasePosition.fields.y = v14;
  if ( !v15 )
LABEL_24:
    sub_B2C434(this, method);
  if ( !v15->fields.maxLv )
  {
LABEL_25:
    v18 = sub_B2C460(this);
    sub_B2C400(v18, 0LL);
  }
  this = (ServantStatusListViewItemDrawNp_o *)v15->fields.name;
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
  struct TreasureDvcInfo_o *tdInfo; // x8
  ServantStatusListViewItemDrawNp_c *v7; // x0
  __int64 v8; // x0

  if ( (byte_418A7D0 & 1) == 0 )
  {
    sub_B2C35C(&ServantStatusListViewItemDrawNp_TypeInfo, item);
    byte_418A7D0 = 1;
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
    tdInfo = this->fields.tdInfo;
    if ( !tdInfo )
      goto LABEL_13;
    if ( (unsigned int)i >= tdInfo->fields.maxLv )
    {
      v8 = sub_B2C460(v7);
      sub_B2C400(v8, 0LL);
    }
    v7 = (ServantStatusListViewItemDrawNp_c *)*((_QWORD *)&tdInfo->fields.name + i);
    if ( !v7 )
LABEL_13:
      sub_B2C434(v7, item);
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
  TreasureDvcInfo_o *v14; // x23
  bool *p_isStart; // x22
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  float v22; // w21
  int32_t LimitCount; // w23
  ServantLimitImageMaster_o *Master_WarQuestSelectionMaster; // x24
  DataManager_o *SvtId; // x0
  __int64 v26; // x1
  int32_t v27; // w0
  __int64 v28; // x24
  __int64 v29; // x24
  ServantTreasureDeviceAddMaster_o *MasterData_WarQuestSelectionMaster; // x24
  bool IsMine; // w25
  int32_t v32; // w3
  ServantTreasureDeviceAddEntity_o *EnableEntity; // x23
  unsigned __int64 v34; // x24
  int v35; // w26
  struct System_Int32_array *treasureDeviceIds; // x8
  struct TreasureDvcInfo_o *tdInfo; // x8
  struct TreasureDvcInfo_o *v38; // x8
  struct System_Int32_array *v39; // x9
  struct System_String_array *titles; // x10
  struct System_String_array *closedMessages; // x11
  struct System_Int32_array *hideCardChara; // x12
  struct TreasureDvcInfo_o *v43; // x8
  struct TreasureDvcInfo_o *v44; // x8
  struct TreasureDvcInfo_o *v45; // x8
  struct TreasureDvcInfo_o *v46; // x8
  struct System_String_o *name; // x8
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
  float v59; // s11
  float v60; // s8
  float v61; // s9
  int32_t v62; // w22
  float i; // s10
  struct TreasureDvcInfo_o *v64; // x8
  struct TreasureDvcInfo_o *v65; // x8
  __int64 v66; // x8
  __int64 v67; // x0
  const MethodInfo *v68; // [xsp+10h] [xbp-80h]
  UnityEngine_Vector3_o v69; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v70; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v71; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_418A7CF & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantTreasureDeviceAddMaster___, item);
    sub_B2C35C(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v7);
    sub_B2C35C(&DataManager_TypeInfo, v8);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v9);
    sub_B2C35C(&ServantStatusListViewItemDrawNp_TypeInfo, v10);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v11);
    sub_B2C35C(&TreasureDvcInfo_TypeInfo, v12);
    sub_B2C35C(&StringLiteral_1/*""*/, v13);
    byte_418A7CF = 1;
  }
  ServantStatusListViewItemDraw__SetItem((ServantStatusListViewItemDraw_o *)this, item, mode, 0LL);
  v14 = (TreasureDvcInfo_o *)sub_B2C42C(TreasureDvcInfo_TypeInfo);
  TreasureDvcInfo___ctor(v14, 0LL);
  p_isStart = &this->fields.isStart;
  *(_QWORD *)&this->fields.isStart = v14;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.isStart,
    (System_Int32_array **)v14,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  if ( !item || !mode )
    return;
  v22 = *(float *)&item->fields.dispLimitCount;
  LimitCount = ServantStatusListViewItem__get_LimitCount(item, 0LL);
  if ( ServantStatusListViewItem__get_IsMine(item, 0LL) )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (ServantLimitImageMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
    SvtId = (DataManager_o *)ServantStatusListViewItem__get_SvtId(item, 0LL);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_98;
    v22 = COERCE_FLOAT(
            ServantLimitImageMaster__GetServantImageLimitSealAfter(
              Master_WarQuestSelectionMaster,
              (int32_t)SvtId,
              SLODWORD(v22),
              0LL));
    ServantStatusListViewItem__GetNpInfo_34149024(item, (TreasureDvcInfo_o **)&this->fields.isStart, SLODWORD(v22), 0LL);
    v27 = ServantStatusListViewItem__get_SvtId(item, 0LL);
    LimitCount = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                   Master_WarQuestSelectionMaster,
                   v27,
                   LimitCount,
                   0LL);
  }
  else
  {
    ServantStatusListViewItem__GetNpInfo(item, (TreasureDvcInfo_o **)&this->fields.isStart, 0LL);
  }
  v28 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v28 + 306) & 1) == 0 )
    sub_AC505C(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v29 = **(_QWORD **)(v28 + 192);
  if ( (*(_BYTE *)(v29 + 306) & 1) == 0 )
    sub_AC505C(v29);
  SvtId = **(DataManager_o ***)(v29 + 184);
  if ( !SvtId )
    goto LABEL_98;
  MasterData_WarQuestSelectionMaster = (ServantTreasureDeviceAddMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                             SvtId,
                                                                             (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantTreasureDeviceAddMaster___);
  IsMine = ServantStatusListViewItem__get_IsMine(item, 0LL);
  SvtId = (DataManager_o *)ServantStatusListViewItem__get_SvtId(item, 0LL);
  v26 = (unsigned int)SvtId;
  if ( IsMine )
  {
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_98;
    v32 = 0;
  }
  else
  {
    if ( !*(_QWORD *)p_isStart || !MasterData_WarQuestSelectionMaster )
      goto LABEL_98;
    v32 = *(_DWORD *)(*(_QWORD *)p_isStart + 16LL);
  }
  EnableEntity = ServantTreasureDeviceAddMaster__GetEnableEntity(
                   MasterData_WarQuestSelectionMaster,
                   (int32_t)SvtId,
                   LimitCount,
                   v32,
                   0LL);
  v34 = 0LL;
  v35 = 0;
  while ( 1 )
  {
    SvtId = (DataManager_o *)ServantStatusListViewItemDrawNp_TypeInfo;
    if ( (BYTE3(ServantStatusListViewItemDrawNp_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantStatusListViewItemDrawNp_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawNp_TypeInfo);
      SvtId = (DataManager_o *)ServantStatusListViewItemDrawNp_TypeInfo;
    }
    if ( (__int64)v34 >= (__int64)SvtId[1].fields.saveNameList->klass )
      break;
    if ( !EnableEntity )
      goto LABEL_45;
    treasureDeviceIds = EnableEntity->fields.treasureDeviceIds;
    if ( !treasureDeviceIds )
      goto LABEL_98;
    if ( (__int64)v34 < (int)treasureDeviceIds->max_length )
    {
      tdInfo = this->fields.tdInfo;
      if ( !tdInfo )
        goto LABEL_98;
      if ( v34 >= (unsigned int)tdInfo->fields.maxLv )
        goto LABEL_99;
      SvtId = (DataManager_o *)*((_QWORD *)&tdInfo->fields.name + v34);
      if ( !SvtId )
        goto LABEL_98;
      SvtId = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)SvtId, 0LL);
      if ( !SvtId )
        goto LABEL_98;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SvtId, 1, 0LL);
      v38 = this->fields.tdInfo;
      if ( !v38 )
        goto LABEL_98;
      if ( v34 >= (unsigned int)v38->fields.maxLv )
        goto LABEL_99;
      v39 = EnableEntity->fields.treasureDeviceIds;
      if ( !v39 )
        goto LABEL_98;
      if ( v34 >= v39->max_length )
        goto LABEL_99;
      titles = EnableEntity->fields.titles;
      if ( !titles )
        goto LABEL_98;
      if ( v34 >= titles->max_length )
        goto LABEL_99;
      closedMessages = EnableEntity->fields.closedMessages;
      if ( !closedMessages )
        goto LABEL_98;
      if ( v34 >= closedMessages->max_length )
        goto LABEL_99;
      hideCardChara = EnableEntity->fields.hideCardChara;
      if ( !hideCardChara )
        goto LABEL_98;
      if ( v34 >= hideCardChara->max_length )
        goto LABEL_99;
      SvtId = (DataManager_o *)*((_QWORD *)&v38->fields.name + v34);
      if ( !SvtId )
        goto LABEL_98;
      ServantStatusNpComponent__Set(
        (ServantStatusNpComponent_o *)SvtId,
        v34,
        *(TreasureDvcInfo_o **)p_isStart,
        item,
        v39->m_Items[v34 + 1],
        1,
        EnableEntity->fields.condLimitCount,
        titles->m_Items[v34],
        closedMessages->m_Items[v34],
        hideCardChara->m_Items[v34 + 1],
        v68);
      v43 = this->fields.tdInfo;
      if ( !v43 )
        goto LABEL_98;
      if ( v34 >= (unsigned int)v43->fields.maxLv )
        goto LABEL_99;
      v44 = (struct TreasureDvcInfo_o *)((char *)v43 + 8 * v34);
    }
    else
    {
LABEL_45:
      v45 = this->fields.tdInfo;
      if ( !v45 )
        goto LABEL_98;
      if ( v34 >= (unsigned int)v45->fields.maxLv )
        goto LABEL_99;
      SvtId = (DataManager_o *)*((_QWORD *)&v45->fields.name + v34);
      if ( !SvtId )
        goto LABEL_98;
      SvtId = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)SvtId, 0LL);
      if ( !SvtId )
        goto LABEL_98;
      if ( v34 )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SvtId, 0, 0LL);
        goto LABEL_59;
      }
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SvtId, 1, 0LL);
      v46 = this->fields.tdInfo;
      if ( !v46 )
        goto LABEL_98;
      if ( !v46->fields.maxLv )
      {
LABEL_99:
        v67 = sub_B2C460(SvtId);
        sub_B2C400(v67, 0LL);
      }
      if ( !*(_QWORD *)p_isStart )
        goto LABEL_98;
      SvtId = (DataManager_o *)v46->fields.name;
      if ( !SvtId )
        goto LABEL_98;
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
        v68);
      v44 = this->fields.tdInfo;
      if ( !v44 )
        goto LABEL_98;
      if ( !v44->fields.maxLv )
        goto LABEL_99;
    }
    name = v44->fields.name;
    if ( !name )
      goto LABEL_98;
    v35 += LODWORD(this->fields.baseSize.fields.y) + name[7].fields.m_stringLength;
LABEL_59:
    ++v34;
  }
  z = this->fields.baseSize.fields.z;
  x = this->fields.titleBasePosition.fields.x;
  y = this->fields.titleBasePosition.fields.y;
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v52 = x + (float)v35;
  if ( UnityEngine_Object__op_Inequality(baseSprite, 0LL, 0LL) )
  {
    SvtId = (DataManager_o *)this->fields.baseSprite;
    if ( SvtId )
    {
      v69.fields.x = z;
      v69.fields.y = v52;
      v69.fields.z = y;
      UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)SvtId, v69, 0LL);
      goto LABEL_70;
    }
LABEL_98:
    sub_B2C434(SvtId, v26);
  }
LABEL_70:
  SvtId = (DataManager_o *)this->fields.titleObject;
  if ( !SvtId )
    goto LABEL_98;
  v53 = z;
  if ( z == INFINITY )
    v53 = -z;
  UIWidget__set_width((UIWidget_o *)SvtId, (int)v53, 0LL);
  SvtId = (DataManager_o *)this->fields.titleObject;
  if ( !SvtId )
    goto LABEL_98;
  v54 = v52;
  if ( v52 == INFINITY )
    v54 = -INFINITY;
  UIWidget__set_height((UIWidget_o *)SvtId, (int)v54, 0LL);
  SvtId = (DataManager_o *)this->fields.npList;
  v55 = v35 >= 0 ? v35 : v35 + 1;
  if ( !SvtId )
    goto LABEL_98;
  v56 = this->fields.titleBasePosition.fields.z;
  v57 = this->fields.npBasePosition.fields.x;
  v58 = this->fields.npBasePosition.fields.y;
  SvtId = (DataManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)SvtId, 0LL);
  if ( !SvtId )
    goto LABEL_98;
  v59 = (float)(v55 >> 1);
  v70.fields.y = v57 + v59;
  v70.fields.x = v56;
  v70.fields.z = v58;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)SvtId, v70, 0LL);
  v60 = this->fields.npBasePosition.fields.z;
  v61 = *((float *)&this[1].klass + 1);
  v62 = 0;
  for ( i = *(float *)&this[1].klass + v59;
        ;
        i = (float)(i - (float)SLODWORD(this->fields.baseSize.fields.y)) - (float)*(int *)(v66 + 184) )
  {
    SvtId = (DataManager_o *)ServantStatusListViewItemDrawNp_TypeInfo;
    if ( (BYTE3(ServantStatusListViewItemDrawNp_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantStatusListViewItemDrawNp_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawNp_TypeInfo);
      SvtId = (DataManager_o *)ServantStatusListViewItemDrawNp_TypeInfo;
    }
    if ( v62 >= (__int64)SvtId[1].fields.saveNameList->klass )
      break;
    v64 = this->fields.tdInfo;
    if ( !v64 )
      goto LABEL_98;
    if ( (unsigned int)v62 >= v64->fields.maxLv )
      goto LABEL_99;
    SvtId = (DataManager_o *)*((_QWORD *)&v64->fields.name + v62);
    if ( !SvtId )
      goto LABEL_98;
    SvtId = (DataManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)SvtId, 0LL);
    if ( !SvtId )
      goto LABEL_98;
    v71.fields.x = v60;
    v71.fields.y = i;
    v71.fields.z = v61;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)SvtId, v71, 0LL);
    v65 = this->fields.tdInfo;
    if ( !v65 )
      goto LABEL_98;
    if ( (unsigned int)v62 >= v65->fields.maxLv )
      goto LABEL_99;
    v66 = *((_QWORD *)&v65->fields.name + v62);
    if ( !v66 )
      goto LABEL_98;
    ++v62;
  }
  if ( LOBYTE(this->fields.npPitch) )
  {
    if ( LODWORD(this->fields.baseSize.fields.x) != LODWORD(v22) )
    {
      ((void (__fastcall *)(ServantStatusListViewItemDrawNp_o *, ServantStatusListViewItem_o *, Il2CppMethodPointer))this->klass->vtable._7_ModifyCommandCard.method)(
        this,
        item,
        this->klass->vtable._8_ModifyFace.methodPtr);
      this->fields.baseSize.fields.x = v22;
    }
  }
}