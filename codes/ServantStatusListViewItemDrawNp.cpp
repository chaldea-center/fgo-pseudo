void __fastcall ServantStatusListViewItemDrawNp___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_40FDEAA & 1) == 0 )
  {
    sub_B16FFC(&ServantStatusListViewItemDrawNp_TypeInfo, v1);
    byte_40FDEAA = 1;
  }
  ServantStatusListViewItemDrawNp_TypeInfo->static_fields->NP_LIST_MAX = 2;
}


void __fastcall ServantStatusListViewItemDrawNp___ctor(
        ServantStatusListViewItemDrawNp_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  ServantStatusListViewItemDrawNp_c *v5; // x0
  struct TreasureDvcInfo_o *v6; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40FDEA9 & 1) == 0 )
  {
    sub_B16FFC(&ServantStatusListViewItemDrawNp_TypeInfo, method);
    sub_B16FFC(&ServantStatusNpComponent___TypeInfo, v4);
    byte_40FDEA9 = 1;
  }
  v5 = ServantStatusListViewItemDrawNp_TypeInfo;
  if ( (BYTE3(ServantStatusListViewItemDrawNp_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantStatusListViewItemDrawNp_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawNp_TypeInfo);
    v5 = ServantStatusListViewItemDrawNp_TypeInfo;
  }
  v6 = (struct TreasureDvcInfo_o *)sub_B17014(ServantStatusNpComponent___TypeInfo, v5->static_fields->NP_LIST_MAX, v2);
  this->fields.tdInfo = v6;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.tdInfo, (System_Int32_array **)v6, v7, v8, v9, v10, v11, v12);
  this->fields.baseSize.fields.x = NAN;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusListViewItemDrawNp__Awake(
        ServantStatusListViewItemDrawNp_o *this,
        const MethodInfo *method)
{
  struct TreasureDvcInfo_o *tdInfo; // x8
  UnityEngine_Component_o *name; // x0
  UnityEngine_Transform_o *transform; // x0
  __int64 v6; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  float v9; // s1
  struct TreasureDvcInfo_o *v10; // x8
  UnityEngine_Component_o *explanation; // x0
  float v12; // s8
  UnityEngine_Transform_o *v13; // x0
  float v14; // s0
  double v15; // d0
  struct UnityEngine_GameObject_o *titleObject; // x9
  UnityEngine_GameObject_o *npList; // x0
  int v18; // w20
  float v19; // s1
  UnityEngine_Transform_o *v20; // x0
  float v21; // s0
  float v22; // s1
  float v23; // s2
  struct TreasureDvcInfo_o *v24; // x8
  int v25; // w9
  float v26; // s8
  UnityEngine_Component_o *v27; // x0
  UnityEngine_Transform_o *v28; // x0
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v30; // 0:s0.4,4:s1.4,8:s2.4

  tdInfo = this->fields.tdInfo;
  if ( !tdInfo )
    goto LABEL_24;
  if ( tdInfo->fields.maxLv >= 2 )
  {
    name = (UnityEngine_Component_o *)tdInfo->fields.name;
    if ( !name )
      goto LABEL_24;
    transform = UnityEngine_Component__get_transform(name, 0LL);
    if ( !transform )
      goto LABEL_24;
    *(UnityEngine_Vector3_o *)(&v9 - 1) = UnityEngine_Transform__get_localPosition(transform, 0LL);
    v10 = this->fields.tdInfo;
    if ( !v10 )
      goto LABEL_24;
    if ( v10->fields.maxLv <= 1u )
      goto LABEL_25;
    explanation = (UnityEngine_Component_o *)v10->fields.explanation;
    if ( !explanation )
      goto LABEL_24;
    v12 = v9;
    v13 = UnityEngine_Component__get_transform(explanation, 0LL);
    if ( !v13 )
      goto LABEL_24;
    localPosition = UnityEngine_Transform__get_localPosition(v13, 0LL);
    v14 = v12 - localPosition.fields.y;
    tdInfo = this->fields.tdInfo;
    v15 = (float)(v12 - localPosition.fields.y) == INFINITY ? -v14 : v14;
    LODWORD(this->fields.baseSize.fields.y) = (int)v15;
    if ( !tdInfo )
      goto LABEL_24;
  }
  titleObject = this->fields.titleObject;
  if ( !titleObject )
    goto LABEL_24;
  npList = (UnityEngine_GameObject_o *)this->fields.npList;
  v18 = LODWORD(this->fields.baseSize.fields.y) * tdInfo->fields.maxLv;
  v19 = (float)(*((_DWORD *)&titleObject[6].fields + 1) - v18);
  this->fields.baseSize.fields.z = (float)titleObject[6].fields.m_CachedPtr;
  this->fields.titleBasePosition.fields.x = v19;
  this->fields.titleBasePosition.fields.y = 0.0;
  if ( !npList )
    goto LABEL_24;
  v20 = UnityEngine_GameObject__get_transform(npList, 0LL);
  if ( !v20 )
    goto LABEL_24;
  *(UnityEngine_Vector3_o *)&v21 = UnityEngine_Transform__get_localPosition(v20, 0LL);
  v24 = this->fields.tdInfo;
  v25 = v18 >= 0 ? v18 : v18 + 1;
  v26 = (float)(v25 >> 1);
  this->fields.titleBasePosition.fields.z = v21;
  this->fields.npBasePosition.fields.x = v22 - v26;
  this->fields.npBasePosition.fields.y = v23;
  if ( !v24 )
LABEL_24:
    sub_B170D4();
  if ( !v24->fields.maxLv )
  {
LABEL_25:
    sub_B17100(v6, v7, v8);
    sub_B170A0();
  }
  v27 = (UnityEngine_Component_o *)v24->fields.name;
  if ( !v27 )
    goto LABEL_24;
  v28 = UnityEngine_Component__get_transform(v27, 0LL);
  if ( !v28 )
    goto LABEL_24;
  v30 = UnityEngine_Transform__get_localPosition(v28, 0LL);
  this->fields.npBasePosition.fields.z = v30.fields.x;
  *(float *)&this[1].klass = v30.fields.y - v26;
  HIDWORD(this[1].klass) = LODWORD(v30.fields.z);
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
  ServantStatusNpComponent_o *v7; // x0
  ServantStatusListViewItemDrawNp_c *v8; // x0

  if ( (byte_40FDEA8 & 1) == 0 )
  {
    sub_B16FFC(&ServantStatusListViewItemDrawNp_TypeInfo, item);
    byte_40FDEA8 = 1;
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
    tdInfo = this->fields.tdInfo;
    if ( !tdInfo )
      goto LABEL_13;
    if ( (unsigned int)i >= tdInfo->fields.maxLv )
    {
      sub_B17100(v8, item, method);
      sub_B170A0();
    }
    v7 = (ServantStatusNpComponent_o *)*((_QWORD *)&tdInfo->fields.name + i);
    if ( !v7 )
LABEL_13:
      sub_B170D4();
    ServantStatusNpComponent__ModifyCommandCard(v7, item, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusListViewItemDrawNp__SetItem(
        ServantStatusListViewItemDrawNp_o *this,
        ServantStatusListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  TreasureDvcInfo_o *v15; // x23
  bool *p_isStart; // x22
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  float v23; // w21
  int32_t LimitCount; // w23
  ServantLimitImageMaster_o *Master_WarQuestSelectionMaster; // x24
  int32_t SvtId; // w0
  int32_t v27; // w0
  __int64 v28; // x24
  __int64 v29; // x24
  DataManager_o *v30; // x0
  ServantTreasureDeviceAddMaster_o *MasterData_WarQuestSelectionMaster; // x24
  bool IsMine; // w25
  int32_t v33; // w1
  int32_t v34; // w3
  __int64 v35; // x1
  __int64 v36; // x2
  ServantTreasureDeviceAddEntity_o *EnableEntity; // x23
  unsigned __int64 v38; // x24
  int v39; // w26
  struct System_Int32_array *treasureDeviceIds; // x8
  struct TreasureDvcInfo_o *tdInfo; // x8
  UnityEngine_Component_o *v42; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  ServantStatusListViewItemDrawNp_c *v44; // x0
  struct TreasureDvcInfo_o *v45; // x8
  struct System_Int32_array *v46; // x9
  struct System_String_array *titles; // x10
  struct System_String_array *closedMessages; // x11
  struct System_Int32_array *hideCardChara; // x12
  ServantStatusNpComponent_o *v50; // x0
  struct TreasureDvcInfo_o *v51; // x8
  struct TreasureDvcInfo_o *v52; // x8
  struct TreasureDvcInfo_o *v53; // x8
  UnityEngine_Component_o *v54; // x0
  UnityEngine_GameObject_o *v55; // x0
  struct TreasureDvcInfo_o *v56; // x8
  ServantStatusNpComponent_o *name; // x0
  struct System_String_o *v58; // x8
  float x; // s8
  float z; // s9
  float y; // s10
  UnityEngine_Object_o *baseSprite; // x22
  float v63; // s8
  UnityEngine_BoxCollider_o *v64; // x0
  struct UnityEngine_GameObject_o *titleObject; // x0
  double v66; // d0
  struct UnityEngine_GameObject_o *v67; // x0
  double v68; // d0
  UnityEngine_GameObject_o *npList; // x0
  int v70; // w22
  float v71; // s8
  float v72; // s10
  float v73; // s9
  UnityEngine_Transform_o *transform; // x0
  float v75; // s11
  float v76; // s8
  float v77; // s9
  int32_t v78; // w22
  float i; // s10
  struct TreasureDvcInfo_o *v80; // x8
  UnityEngine_Component_o *v81; // x0
  UnityEngine_Transform_o *v82; // x0
  struct TreasureDvcInfo_o *v83; // x8
  __int64 v84; // x8
  UnityEngine_Vector3_o v85; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v86; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v87; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FDEA7 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantTreasureDeviceAddMaster___, item);
    sub_B16FFC(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v8);
    sub_B16FFC(&DataManager_TypeInfo, v9);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v10);
    sub_B16FFC(&ServantStatusListViewItemDrawNp_TypeInfo, v11);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v12);
    sub_B16FFC(&TreasureDvcInfo_TypeInfo, v13);
    sub_B16FFC(&StringLiteral_1, v14);
    byte_40FDEA7 = 1;
  }
  LODWORD(this->fields.baseButton) = mode;
  v15 = (TreasureDvcInfo_o *)sub_B170CC(TreasureDvcInfo_TypeInfo, item, *(_QWORD *)&mode, method, v4);
  TreasureDvcInfo___ctor(v15, 0LL);
  p_isStart = &this->fields.isStart;
  *(_QWORD *)&this->fields.isStart = v15;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.isStart,
    (System_Int32_array **)v15,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  if ( !item || !mode )
    return;
  v23 = *(float *)&item->fields.dispLimitCount;
  LimitCount = ServantStatusListViewItem__get_LimitCount(item, 0LL);
  if ( ServantStatusListViewItem__get_IsMine(item, 0LL) )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (ServantLimitImageMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
    SvtId = ServantStatusListViewItem__get_SvtId(item, 0LL);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_98;
    v23 = COERCE_FLOAT(
            ServantLimitImageMaster__GetServantImageLimitSealAfter(
              Master_WarQuestSelectionMaster,
              SvtId,
              SLODWORD(v23),
              0LL));
    ServantStatusListViewItem__GetNpInfo_36667804(item, (TreasureDvcInfo_o **)&this->fields.isStart, SLODWORD(v23), 0LL);
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
    sub_AAFCFC(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v29 = **(_QWORD **)(v28 + 192);
  if ( (*(_BYTE *)(v29 + 306) & 1) == 0 )
    sub_AAFCFC(v29);
  v30 = **(DataManager_o ***)(v29 + 184);
  if ( !v30 )
    goto LABEL_98;
  MasterData_WarQuestSelectionMaster = (ServantTreasureDeviceAddMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                             v30,
                                                                             (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantTreasureDeviceAddMaster___);
  IsMine = ServantStatusListViewItem__get_IsMine(item, 0LL);
  v33 = ServantStatusListViewItem__get_SvtId(item, 0LL);
  if ( IsMine )
  {
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_98;
    v34 = 0;
  }
  else
  {
    if ( !*(_QWORD *)p_isStart || !MasterData_WarQuestSelectionMaster )
      goto LABEL_98;
    v34 = *(_DWORD *)(*(_QWORD *)p_isStart + 16LL);
  }
  EnableEntity = ServantTreasureDeviceAddMaster__GetEnableEntity(
                   MasterData_WarQuestSelectionMaster,
                   v33,
                   LimitCount,
                   v34,
                   0LL);
  v38 = 0LL;
  v39 = 0;
  while ( 1 )
  {
    v44 = ServantStatusListViewItemDrawNp_TypeInfo;
    if ( (BYTE3(ServantStatusListViewItemDrawNp_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantStatusListViewItemDrawNp_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawNp_TypeInfo);
      v44 = ServantStatusListViewItemDrawNp_TypeInfo;
    }
    if ( (__int64)v38 >= v44->static_fields->NP_LIST_MAX )
      break;
    if ( !EnableEntity )
      goto LABEL_45;
    treasureDeviceIds = EnableEntity->fields.treasureDeviceIds;
    if ( !treasureDeviceIds )
      goto LABEL_98;
    if ( (__int64)v38 < (int)treasureDeviceIds->max_length )
    {
      tdInfo = this->fields.tdInfo;
      if ( !tdInfo )
        goto LABEL_98;
      if ( v38 >= (unsigned int)tdInfo->fields.maxLv )
        goto LABEL_99;
      v42 = (UnityEngine_Component_o *)*((_QWORD *)&tdInfo->fields.name + v38);
      if ( !v42 )
        goto LABEL_98;
      gameObject = UnityEngine_Component__get_gameObject(v42, 0LL);
      if ( !gameObject )
        goto LABEL_98;
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      v45 = this->fields.tdInfo;
      if ( !v45 )
        goto LABEL_98;
      if ( v38 >= (unsigned int)v45->fields.maxLv )
        goto LABEL_99;
      v46 = EnableEntity->fields.treasureDeviceIds;
      if ( !v46 )
        goto LABEL_98;
      if ( v38 >= v46->max_length )
        goto LABEL_99;
      titles = EnableEntity->fields.titles;
      if ( !titles )
        goto LABEL_98;
      if ( v38 >= titles->max_length )
        goto LABEL_99;
      closedMessages = EnableEntity->fields.closedMessages;
      if ( !closedMessages )
        goto LABEL_98;
      if ( v38 >= closedMessages->max_length )
        goto LABEL_99;
      hideCardChara = EnableEntity->fields.hideCardChara;
      if ( !hideCardChara )
        goto LABEL_98;
      if ( v38 >= hideCardChara->max_length )
        goto LABEL_99;
      v50 = (ServantStatusNpComponent_o *)*((_QWORD *)&v45->fields.name + v38);
      if ( !v50 )
        goto LABEL_98;
      ServantStatusNpComponent__Set(
        v50,
        v38,
        *(TreasureDvcInfo_o **)p_isStart,
        item,
        v46->m_Items[v38 + 1],
        1,
        EnableEntity->fields.condLimitCount,
        titles->m_Items[v38],
        closedMessages->m_Items[v38],
        hideCardChara->m_Items[v38 + 1],
        0LL);
      v51 = this->fields.tdInfo;
      if ( !v51 )
        goto LABEL_98;
      if ( v38 >= (unsigned int)v51->fields.maxLv )
        goto LABEL_99;
      v52 = (struct TreasureDvcInfo_o *)((char *)v51 + 8 * v38);
    }
    else
    {
LABEL_45:
      v53 = this->fields.tdInfo;
      if ( !v53 )
        goto LABEL_98;
      if ( v38 >= (unsigned int)v53->fields.maxLv )
        goto LABEL_99;
      v54 = (UnityEngine_Component_o *)*((_QWORD *)&v53->fields.name + v38);
      if ( !v54 )
        goto LABEL_98;
      v55 = UnityEngine_Component__get_gameObject(v54, 0LL);
      if ( !v55 )
        goto LABEL_98;
      if ( v38 )
      {
        UnityEngine_GameObject__SetActive(v55, 0, 0LL);
        goto LABEL_59;
      }
      UnityEngine_GameObject__SetActive(v55, 1, 0LL);
      v56 = this->fields.tdInfo;
      if ( !v56 )
        goto LABEL_98;
      if ( !v56->fields.maxLv )
      {
LABEL_99:
        sub_B17100(v44, v35, v36);
        sub_B170A0();
      }
      if ( !*(_QWORD *)p_isStart )
        goto LABEL_98;
      name = (ServantStatusNpComponent_o *)v56->fields.name;
      if ( !name )
        goto LABEL_98;
      ServantStatusNpComponent__Set(
        name,
        0,
        *(TreasureDvcInfo_o **)p_isStart,
        item,
        *(_DWORD *)(*(_QWORD *)p_isStart + 16LL),
        0,
        0,
        (System_String_o *)StringLiteral_1,
        (System_String_o *)StringLiteral_1,
        0,
        0LL);
      v52 = this->fields.tdInfo;
      if ( !v52 )
        goto LABEL_98;
      if ( !v52->fields.maxLv )
        goto LABEL_99;
    }
    v58 = v52->fields.name;
    if ( !v58 )
      goto LABEL_98;
    v39 += LODWORD(this->fields.baseSize.fields.y) + v58[7].fields.m_stringLength;
LABEL_59:
    ++v38;
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
  v63 = x + (float)v39;
  if ( UnityEngine_Object__op_Inequality(baseSprite, 0LL, 0LL) )
  {
    v64 = (UnityEngine_BoxCollider_o *)this->fields.baseSprite;
    if ( v64 )
    {
      v85.fields.x = z;
      v85.fields.y = v63;
      v85.fields.z = y;
      UnityEngine_BoxCollider__set_size(v64, v85, 0LL);
      goto LABEL_70;
    }
LABEL_98:
    sub_B170D4();
  }
LABEL_70:
  titleObject = this->fields.titleObject;
  if ( !titleObject )
    goto LABEL_98;
  v66 = z;
  if ( z == INFINITY )
    v66 = -z;
  UIWidget__set_width((UIWidget_o *)titleObject, (int)v66, 0LL);
  v67 = this->fields.titleObject;
  if ( !v67 )
    goto LABEL_98;
  v68 = v63;
  if ( v63 == INFINITY )
    v68 = -INFINITY;
  UIWidget__set_height((UIWidget_o *)v67, (int)v68, 0LL);
  npList = (UnityEngine_GameObject_o *)this->fields.npList;
  v70 = v39 >= 0 ? v39 : v39 + 1;
  if ( !npList )
    goto LABEL_98;
  v71 = this->fields.titleBasePosition.fields.z;
  v72 = this->fields.npBasePosition.fields.x;
  v73 = this->fields.npBasePosition.fields.y;
  transform = UnityEngine_GameObject__get_transform(npList, 0LL);
  if ( !transform )
    goto LABEL_98;
  v75 = (float)(v70 >> 1);
  v86.fields.y = v72 + v75;
  v86.fields.x = v71;
  v86.fields.z = v73;
  UnityEngine_Transform__set_localPosition(transform, v86, 0LL);
  v76 = this->fields.npBasePosition.fields.z;
  v77 = *((float *)&this[1].klass + 1);
  v78 = 0;
  for ( i = *(float *)&this[1].klass + v75;
        ;
        i = (float)(i - (float)SLODWORD(this->fields.baseSize.fields.y)) - (float)*(int *)(v84 + 184) )
  {
    v44 = ServantStatusListViewItemDrawNp_TypeInfo;
    if ( (BYTE3(ServantStatusListViewItemDrawNp_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantStatusListViewItemDrawNp_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawNp_TypeInfo);
      v44 = ServantStatusListViewItemDrawNp_TypeInfo;
    }
    if ( v78 >= v44->static_fields->NP_LIST_MAX )
      break;
    v80 = this->fields.tdInfo;
    if ( !v80 )
      goto LABEL_98;
    if ( (unsigned int)v78 >= v80->fields.maxLv )
      goto LABEL_99;
    v81 = (UnityEngine_Component_o *)*((_QWORD *)&v80->fields.name + v78);
    if ( !v81 )
      goto LABEL_98;
    v82 = UnityEngine_Component__get_transform(v81, 0LL);
    if ( !v82 )
      goto LABEL_98;
    v87.fields.x = v76;
    v87.fields.y = i;
    v87.fields.z = v77;
    UnityEngine_Transform__set_localPosition(v82, v87, 0LL);
    v83 = this->fields.tdInfo;
    if ( !v83 )
      goto LABEL_98;
    if ( (unsigned int)v78 >= v83->fields.maxLv )
      goto LABEL_99;
    v84 = *((_QWORD *)&v83->fields.name + v78);
    if ( !v84 )
      goto LABEL_98;
    ++v78;
  }
  if ( LOBYTE(this->fields.npPitch) )
  {
    if ( LODWORD(this->fields.baseSize.fields.x) != LODWORD(v23) )
    {
      ((void (__fastcall *)(ServantStatusListViewItemDrawNp_o *, ServantStatusListViewItem_o *, Il2CppMethodPointer))this->klass->vtable._7_ModifyCommandCard.method)(
        this,
        item,
        this->klass->vtable._8_ModifyFace.methodPtr);
      this->fields.baseSize.fields.x = v23;
    }
  }
}