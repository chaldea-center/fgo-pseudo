void BattlePerformanceEnemy___ctor(BattlePerformanceEnemy_o *this, const MethodInfo *method)
{
  struct System_Int32_array *v3; // x0
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4D2FEB9 & 1) == 0 )
  {
    sub_1C94098(&int___TypeInfo);
    byte_4D2FEB9 = 1;
  }
  v3 = (struct System_Int32_array *)sub_1C94140(int___TypeInfo, 3);
  this->fields.list_ID = v3;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.list_ID, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void BattlePerformanceEnemy__DecideOrMakeStatusUi(
        BattlePerformanceEnemy_o *this,
        BattleServantData_o *svtData,
        int32_t index,
        const MethodInfo *method)
{
  BattlePerformanceEnemy_o *v6; // x21
  struct BattlePerformance_o *perf; // x8
  const MethodInfo *v8; // x3
  BattleServantParamComponent_o *DefaultStatusUi; // x0
  const MethodInfo *v10; // x4
  BattleDeckServantData_o *OriginalDeckSvt_k__BackingField; // x0
  int32_t StatusUiType; // w0
  int32_t v13; // w22
  System_String_o *StatusUiPath; // x22
  AssetData_o *AssetStorage; // x0
  Il2CppObject *Object_object__51893132; // x22
  Il2CppObject *Component_object; // x0
  Il2CppClass *klass; // x8
  unsigned int naturalAligment; // w9
  __int64 v20; // x11
  __int64 v21; // x11
  UnityEngine_Transform_o **p_raidTr; // x8
  UnityEngine_Transform_o *v23; // x23

  v6 = this;
  if ( (byte_4D2FEA6 & 1) == 0 )
  {
    sub_1C94098(&Method_AssetData_GetObject_GameObject____79044816);
    sub_1C94098(&AssetManager_TypeInfo);
    sub_1C94098(&Method_BasicHelper_IndexValue_BattleServantParamComponent___);
    sub_1C94098(&BattleServantRaidParamComponent_TypeInfo);
    sub_1C94098(&BattleServantSuperBossParamComponent_TypeInfo);
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_BattleServantParamComponent___);
    sub_1C94098(&Method_UnityEngine_Object_Instantiate_GameObject____79133288);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&ServantAssetLoadManager_TypeInfo);
    this = (BattlePerformanceEnemy_o *)sub_1C94098(&StringLiteral_13135/*"StatusUi"*/);
    byte_4D2FEA6 = 1;
  }
  if ( svtData )
  {
    perf = v6->fields.perf;
    if ( !perf )
      goto LABEL_38;
    this = (BattlePerformanceEnemy_o *)perf->fields.data;
    if ( !this )
      goto LABEL_38;
    this = (BattlePerformanceEnemy_o *)BattleData__getStageEntity((BattleData_o *)this, 0);
    if ( !this )
      goto LABEL_38;
    if ( StageEntity__IsForceSetNormalEnemyStatusUI((StageEntity_o *)this, 0) )
    {
      DefaultStatusUi = (BattleServantParamComponent_o *)BasicHelper__IndexValue_object_(
                                                           (System_Object_array *)v6->fields.defaultSvtParamList,
                                                           index,
                                                           0,
                                                           (const MethodInfo_318A668 *)Method_BasicHelper_IndexValue_BattleServantParamComponent___);
LABEL_23:
      BattlePerformanceEnemy__ReplaceStatusUi(v6, DefaultStatusUi, svtData, index, v10);
      return;
    }
    OriginalDeckSvt_k__BackingField = svtData->fields._OriginalDeckSvt_k__BackingField;
    if ( !OriginalDeckSvt_k__BackingField )
      goto LABEL_22;
    StatusUiType = BattleDeckServantData__GetStatusUiType(OriginalDeckSvt_k__BackingField, 0);
    if ( StatusUiType <= 0 )
      goto LABEL_22;
    v13 = StatusUiType;
    if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    StatusUiPath = ServantAssetLoadManager__GetStatusUiPath(v13, 0);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetStorage = AssetManager__getAssetStorage(StatusUiPath, 0);
    if ( AssetStorage )
      Object_object__51893132 = AssetData__GetObject_object__51893132(
                                  AssetStorage,
                                  (System_String_o *)StringLiteral_13135/*"StatusUi"*/,
                                  (const MethodInfo_317D38C *)Method_AssetData_GetObject_GameObject____79044816);
    else
      Object_object__51893132 = 0;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (BattlePerformanceEnemy_o *)UnityEngine_Object__op_Equality(
                                         (UnityEngine_Object_o *)Object_object__51893132,
                                         0,
                                         0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
LABEL_22:
      DefaultStatusUi = BattlePerformanceEnemy__GetDefaultStatusUi(v6, svtData, index, v8);
      goto LABEL_23;
    }
    if ( !Object_object__51893132 )
LABEL_38:
      sub_1C942F0(this, svtData);
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)Object_object__51893132,
                         (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_BattleServantParamComponent___);
    if ( !Component_object )
      goto LABEL_30;
    klass = Component_object->klass;
    naturalAligment = Component_object->klass->_2.naturalAligment;
    v20 = BattleServantRaidParamComponent_TypeInfo->_2.naturalAligment;
    if ( naturalAligment >= (unsigned int)v20
      && (BattleServantRaidParamComponent_c *)klass->_2.typeHierarchy[v20 - 1] == BattleServantRaidParamComponent_TypeInfo )
    {
      p_raidTr = &v6->fields.raidTr;
      goto LABEL_32;
    }
    v21 = BattleServantSuperBossParamComponent_TypeInfo->_2.naturalAligment;
    if ( naturalAligment >= (unsigned int)v21
      && (BattleServantSuperBossParamComponent_c *)klass->_2.typeHierarchy[v21 - 1] == BattleServantSuperBossParamComponent_TypeInfo )
    {
      p_raidTr = &v6->fields.superBossTr;
    }
    else
    {
LABEL_30:
      p_raidTr = &v6->fields.normalBackRowTransform;
      if ( index < 3 )
        p_raidTr = &v6->fields.nomalTr;
    }
LABEL_32:
    v23 = *p_raidTr;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (BattlePerformanceEnemy_o *)UnityEngine_Object__Instantiate_object__52598436(
                                         Object_object__51893132,
                                         v23,
                                         (const MethodInfo_32296A4 *)Method_UnityEngine_Object_Instantiate_GameObject____79133288);
    if ( this )
    {
      DefaultStatusUi = (BattleServantParamComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                           (UnityEngine_GameObject_o *)this,
                                                           (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_BattleServantParamComponent___);
      goto LABEL_23;
    }
    goto LABEL_38;
  }
}


// local variable allocation has failed, the output may be wrong!
void BattlePerformanceEnemy__DeleteStatusByUniqueId(
        BattlePerformanceEnemy_o *this,
        int32_t uniqueId,
        const MethodInfo *method)
{
  struct BattleServantParamComponent_array *svtParamList_k__BackingField; // x9
  int max_length; // w10
  int32_t v5; // w8
  int32_t v6; // w11
  BattleServantParamComponent_o *v7; // x12

  svtParamList_k__BackingField = this->fields._svtParamList_k__BackingField;
  if ( !svtParamList_k__BackingField )
LABEL_12:
    sub_1C942F0(this, *(_QWORD *)&uniqueId);
  max_length = svtParamList_k__BackingField->max_length;
  v5 = uniqueId;
  *(_QWORD *)&uniqueId = max_length & (unsigned int)~(max_length >> 31);
  if ( max_length >= 1 )
  {
    v6 = 0;
    while ( 1 )
    {
      if ( max_length == v6 )
        sub_1C942F8(this);
      v7 = svtParamList_k__BackingField->m_Items[v6];
      if ( !v7 )
        goto LABEL_12;
      if ( v7->fields.uniqueID == v5 )
        break;
      if ( uniqueId == ++v6 )
        goto LABEL_10;
    }
    uniqueId = v6;
  }
LABEL_10:
  BattlePerformanceEnemy__deleteStatus(this, uniqueId, method);
}


System_Collections_Generic_IEnumerable_BattleServantParamComponent__o *BattlePerformanceEnemy__EnumerateStatusUi(
        BattlePerformanceEnemy_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7

  if ( (byte_4D2FEAA & 1) == 0 )
  {
    sub_1C94098(&BattlePerformanceEnemy__EnumerateStatusUi_d__33_TypeInfo);
    byte_4D2FEAA = 1;
  }
  v3 = sub_1C942E4(BattlePerformanceEnemy__EnumerateStatusUi_d__33_TypeInfo);
  BattlePerformanceEnemy__EnumerateStatusUi_d__33___ctor((BattlePerformanceEnemy__EnumerateStatusUi_d__33_o *)v3, -2, 0);
  if ( !v3 )
    sub_1C942F0(v4, v5);
  *(_QWORD *)(v3 + 40) = this;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v3 + 40), (int32_t)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_Generic_IEnumerable_BattleServantParamComponent__o *)v3;
}


System_Collections_Generic_IEnumerable_BattleServantParamComponent__o *BattlePerformanceEnemy__EnumerateUsingStatusUi(
        BattlePerformanceEnemy_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_BattleServantParamComponent__o *v3; // x0
  BattlePerformanceEnemy___c_c *v4; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v5; // x19
  System_Func_object__bool__o *_9__34_0; // x20
  Il2CppObject *v7; // x21
  struct BattlePerformanceEnemy___c_StaticFields *static_fields; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7

  if ( (byte_4D2FEAB & 1) == 0 )
  {
    sub_1C94098(&Method_System_Linq_Enumerable_Where_BattleServantParamComponent___);
    sub_1C94098(&System_Func_BattleServantParamComponent__bool__TypeInfo);
    sub_1C94098(&Method_BattlePerformanceEnemy___c__EnumerateUsingStatusUi_b__34_0__);
    sub_1C94098(&BattlePerformanceEnemy___c_TypeInfo);
    byte_4D2FEAB = 1;
  }
  v3 = BattlePerformanceEnemy__EnumerateStatusUi(this, method);
  v4 = BattlePerformanceEnemy___c_TypeInfo;
  v5 = (System_Collections_Generic_IEnumerable_TSource__o *)v3;
  if ( !BattlePerformanceEnemy___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattlePerformanceEnemy___c_TypeInfo);
    v4 = BattlePerformanceEnemy___c_TypeInfo;
  }
  _9__34_0 = (System_Func_object__bool__o *)v4->static_fields->__9__34_0;
  if ( !_9__34_0 )
  {
    if ( !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      v4 = BattlePerformanceEnemy___c_TypeInfo;
    }
    v7 = (Il2CppObject *)v4->static_fields->__9;
    _9__34_0 = (System_Func_object__bool__o *)sub_1C942E4(System_Func_BattleServantParamComponent__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__34_0,
      v7,
      Method_BattlePerformanceEnemy___c__EnumerateUsingStatusUi_b__34_0__,
      0);
    static_fields = BattlePerformanceEnemy___c_TypeInfo->static_fields;
    static_fields->__9__34_0 = (struct System_Func_BattleServantParamComponent__bool__o *)_9__34_0;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__34_0,
      (int32_t)_9__34_0,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  return (System_Collections_Generic_IEnumerable_BattleServantParamComponent__o *)System_Linq_Enumerable__Where_object_(
                                                                                    v5,
                                                                                    (System_Func_TSource__bool__o *)_9__34_0,
                                                                                    (const MethodInfo_31E39C8 *)Method_System_Linq_Enumerable_Where_BattleServantParamComponent___);
}


bool BattlePerformanceEnemy__ExistsFieldNormalEnemy(BattlePerformanceEnemy_o *this, const MethodInfo *method)
{
  void *svtParamList_k__BackingField; // x0
  int32_t v4; // w20
  int32_t v5; // w24
  Il2CppObject *v6; // x21

  if ( (byte_4D2FEB5 & 1) == 0 )
  {
    sub_1C94098(&Method_BasicHelper_IndexValue_BattleServantParamComponent___);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D2FEB5 = 1;
  }
  svtParamList_k__BackingField = this->fields._svtParamList_k__BackingField;
  if ( !svtParamList_k__BackingField )
LABEL_13:
    sub_1C942F0(svtParamList_k__BackingField, method);
  v4 = 0;
  while ( 1 )
  {
    v5 = *((_DWORD *)svtParamList_k__BackingField + 6);
    if ( v4 >= v5 )
      return v4 < v5;
    v6 = BasicHelper__IndexValue_object_(
           (System_Object_array *)svtParamList_k__BackingField,
           v4,
           0,
           (const MethodInfo_318A668 *)Method_BasicHelper_IndexValue_BattleServantParamComponent___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    svtParamList_k__BackingField = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v6, 0, 0);
    if ( ((unsigned __int8)svtParamList_k__BackingField & 1) != 0 )
    {
      if ( !v6 )
        goto LABEL_13;
      svtParamList_k__BackingField = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v6, 0);
      if ( !svtParamList_k__BackingField )
        goto LABEL_13;
      if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)svtParamList_k__BackingField, 0) )
        return v4 < v5;
    }
    svtParamList_k__BackingField = this->fields._svtParamList_k__BackingField;
    ++v4;
    if ( !svtParamList_k__BackingField )
      goto LABEL_13;
  }
}


bool BattlePerformanceEnemy__ExistsFrontRow(BattlePerformanceEnemy_o *this, const MethodInfo *method)
{
  unsigned int v3; // w20
  char v4; // w24
  Il2CppObject *v5; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1
  bool v8; // cf

  if ( (byte_4D2FEB3 & 1) == 0 )
  {
    sub_1C94098(&Method_BasicHelper_IndexValue_BattleServantParamComponent___);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D2FEB3 = 1;
  }
  v3 = 0;
  v4 = 1;
  do
  {
    v5 = BasicHelper__IndexValue_object_(
           (System_Object_array *)this->fields._svtParamList_k__BackingField,
           v3,
           0,
           (const MethodInfo_318A668 *)Method_BasicHelper_IndexValue_BattleServantParamComponent___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v5, 0, 0);
    if ( ((unsigned __int8)gameObject & 1) != 0 )
    {
      if ( !v5 || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v5, 0)) == 0 )
        sub_1C942F0(gameObject, v7);
      if ( UnityEngine_GameObject__get_activeSelf(gameObject, 0) )
        break;
    }
    v8 = v3++ >= 2;
    v4 = !v8;
  }
  while ( v3 != 3 );
  return v4;
}


BattleServantParamComponent_o *BattlePerformanceEnemy__GetDefaultStatusUi(
        BattlePerformanceEnemy_o *this,
        BattleServantData_o *svtData,
        int32_t index,
        const MethodInfo *method)
{
  BattlePerformanceEnemy_o *v6; // x20

  v6 = this;
  if ( (byte_4D2FEAD & 1) == 0 )
  {
    this = (BattlePerformanceEnemy_o *)sub_1C94098(&Method_BasicHelper_IndexValue_BattleServantParamComponent___);
    byte_4D2FEAD = 1;
  }
  if ( !svtData )
    sub_1C942F0(this, svtData);
  if ( svtData->fields.isRaid )
    return (BattleServantParamComponent_o *)v6->fields.defaultRaidParam;
  if ( BattleServantData__get_IsSuperBossUi(svtData, 0) )
    return (BattleServantParamComponent_o *)v6->fields.defaultSuperBossParam;
  return (BattleServantParamComponent_o *)BasicHelper__IndexValue_object_(
                                            (System_Object_array *)v6->fields.defaultSvtParamList,
                                            index,
                                            0,
                                            (const MethodInfo_318A668 *)Method_BasicHelper_IndexValue_BattleServantParamComponent___);
}


UnityEngine_Transform_o *BattlePerformanceEnemy__GetNormalStatusUiParentTransform(
        BattlePerformanceEnemy_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v3; // x8

  v3 = 72;
  if ( index < 3 )
    v3 = 64;
  return *(UnityEngine_Transform_o **)((char *)&this->klass + v3);
}


BattleServantParamComponent_o *BattlePerformanceEnemy__GetStatusUiBySvtData(
        BattlePerformanceEnemy_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  __int64 v5; // x20
  BattleServantParamComponent_o *raidParam; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  BattleServantData_o **v14; // x22
  System_Collections_Generic_IEnumerable_TSource__o *svtParamList_k__BackingField; // x19
  System_Func_object__bool__o *v17; // x21

  if ( (byte_4D2FEAC & 1) == 0 )
  {
    sub_1C94098(&Method_System_Linq_Enumerable_FirstOrDefault_BattleServantParamComponent___);
    sub_1C94098(&System_Func_BattleServantParamComponent__bool__TypeInfo);
    sub_1C94098(&Method_BattlePerformanceEnemy___c__DisplayClass35_0__GetStatusUiBySvtData_b__0__);
    sub_1C94098(&BattlePerformanceEnemy___c__DisplayClass35_0_TypeInfo);
    byte_4D2FEAC = 1;
  }
  v5 = sub_1C942E4(BattlePerformanceEnemy___c__DisplayClass35_0_TypeInfo);
  BattlePerformanceEnemy___c__DisplayClass35_0___ctor((BattlePerformanceEnemy___c__DisplayClass35_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_11;
  *(_QWORD *)(v5 + 16) = svtData;
  v14 = (BattleServantData_o **)(v5 + 16);
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)svtData, v8, v9, v10, v11, v12, v13);
  raidParam = (BattleServantParamComponent_o *)this->fields.raidParam;
  if ( !raidParam )
    goto LABEL_11;
  if ( BattleServantParamComponent__IsMatchOwner(raidParam, *v14, 0) )
    return (BattleServantParamComponent_o *)this->fields.raidParam;
  raidParam = (BattleServantParamComponent_o *)this->fields.superbossParam;
  if ( !raidParam )
LABEL_11:
    sub_1C942F0(raidParam, v7);
  if ( BattleServantParamComponent__IsMatchOwner(raidParam, *v14, 0) )
    return (BattleServantParamComponent_o *)this->fields.superbossParam;
  svtParamList_k__BackingField = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields._svtParamList_k__BackingField;
  v17 = (System_Func_object__bool__o *)sub_1C942E4(System_Func_BattleServantParamComponent__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v17,
    (Il2CppObject *)v5,
    Method_BattlePerformanceEnemy___c__DisplayClass35_0__GetStatusUiBySvtData_b__0__,
    0);
  return (BattleServantParamComponent_o *)System_Linq_Enumerable__FirstOrDefault_object__52191056(
                                            svtParamList_k__BackingField,
                                            (System_Func_TSource__bool__o *)v17,
                                            (const MethodInfo_31C5F50 *)Method_System_Linq_Enumerable_FirstOrDefault_BattleServantParamComponent___);
}


BattleServantParamComponent_o *BattlePerformanceEnemy__GetSvtParamComponent(
        BattlePerformanceEnemy_o *this,
        int32_t uniqueId,
        const MethodInfo *method)
{
  BattlePerformanceEnemy___c__DisplayClass67_0_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Object_array *svtParamList_k__BackingField; // x19
  System_Predicate_object__o *v9; // x20

  if ( (byte_4D2FEB8 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Array_Find_BattleServantParamComponent___);
    sub_1C94098(&System_Predicate_BattleServantParamComponent__TypeInfo);
    sub_1C94098(&Method_BattlePerformanceEnemy___c__DisplayClass67_0__GetSvtParamComponent_b__0__);
    sub_1C94098(&BattlePerformanceEnemy___c__DisplayClass67_0_TypeInfo);
    byte_4D2FEB8 = 1;
  }
  v5 = (BattlePerformanceEnemy___c__DisplayClass67_0_o *)sub_1C942E4(BattlePerformanceEnemy___c__DisplayClass67_0_TypeInfo);
  BattlePerformanceEnemy___c__DisplayClass67_0___ctor(v5, 0);
  if ( !v5 )
    sub_1C942F0(v6, v7);
  v5->fields.uniqueId = uniqueId;
  svtParamList_k__BackingField = (System_Object_array *)this->fields._svtParamList_k__BackingField;
  v9 = (System_Predicate_object__o *)sub_1C942E4(System_Predicate_BattleServantParamComponent__TypeInfo);
  System_Predicate_object____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_BattlePerformanceEnemy___c__DisplayClass67_0__GetSvtParamComponent_b__0__,
    0);
  return (BattleServantParamComponent_o *)System_Array__Find_object_(
                                            svtParamList_k__BackingField,
                                            (System_Predicate_T__o *)v9,
                                            (const MethodInfo_32A2954 *)Method_System_Array_Find_BattleServantParamComponent___);
}


BattleServantParamComponent_o *BattlePerformanceEnemy__GetSvtSuperBossParamComponent(
        BattlePerformanceEnemy_o *this,
        int32_t uniqueId,
        const MethodInfo *method)
{
  BattleServantParamComponent_o *superbossParam; // x0
  bool v5; // w8
  BattleServantParamComponent_o *result; // x0

  superbossParam = (BattleServantParamComponent_o *)this->fields.superbossParam;
  if ( !superbossParam )
    sub_1C942F0(0, uniqueId);
  v5 = BattleServantParamComponent__checkId(superbossParam, uniqueId, 0);
  result = 0;
  if ( v5 )
    return (BattleServantParamComponent_o *)this->fields.superbossParam;
  return result;
}


// local variable allocation has failed, the output may be wrong!
void BattlePerformanceEnemy__HideOrDeleteStatusUi(
        BattlePerformanceEnemy_o *this,
        BattleServantData_o *svtData,
        int32_t index,
        const MethodInfo *method)
{
  UnityEngine_Object_o *StatusUiBySvtData; // x20
  _BOOL8 v7; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  UnityEngine_Object_o *gameObject; // x20
  const MethodInfo *v11; // x1

  if ( (byte_4D2FEA9 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D2FEA9 = 1;
  }
  StatusUiBySvtData = (UnityEngine_Object_o *)BattlePerformanceEnemy__GetStatusUiBySvtData(
                                                this,
                                                svtData,
                                                *(const MethodInfo **)&index);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__op_Equality(StatusUiBySvtData, 0, 0);
  if ( !v7 )
  {
    if ( !StatusUiBySvtData )
      sub_1C942F0(v7, v8);
    BattleServantParamComponent__clearBuffIconList((BattleServantParamComponent_o *)StatusUiBySvtData, 0);
    ((void (__fastcall *)(UnityEngine_Object_o *, _QWORD, _QWORD, void *))StatusUiBySvtData->klass[1]._1.generic_class)(
      StatusUiBySvtData,
      0,
      0,
      StatusUiBySvtData->klass[1]._1.typeMetadataHandle);
    if ( !BattlePerformanceEnemy__IsDefaultStatusUi(this, (BattleServantParamComponent_o *)StatusUiBySvtData, v9) )
    {
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)StatusUiBySvtData,
                                             0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__DestroyImmediate_72111160(gameObject, 0);
      BattlePerformanceEnemy__SetDefaultStatusUiIfNull(this, v11);
    }
  }
}


UnityEngine_Transform_o *BattlePerformanceEnemy__IBattlePerformanceExtraUiParent_GetExBattleUiParentTransform(
        BattlePerformanceEnemy_o *this,
        const MethodInfo *method)
{
  return this->fields.exBattleUiParent;
}


void BattlePerformanceEnemy__IBattlePerformanceExtraUiParent_OnAfterUpdateExBattleUi(
        BattlePerformanceEnemy_o *this,
        const MethodInfo *method)
{
  ;
}


void BattlePerformanceEnemy__IBattlePerformanceExtraUiParent_OnTapButtonCallback(
        BattlePerformanceEnemy_o *this,
        int32_t execType,
        ExtraBattleUserInterfaceData_o *exUiData,
        const MethodInfo *method)
{
  ;
}


void BattlePerformanceEnemy__Initialize(
        BattlePerformanceEnemy_o *this,
        BattlePerformance_o *inperf,
        BattleData_o *indata,
        BattleLogic_o *inlogic,
        const MethodInfo *method)
{
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  const MethodInfo *v17; // x1
  __int64 v18; // x0
  __int64 v19; // x1
  struct BattleServantParamComponent_array *svtParamList_k__BackingField; // x8
  struct System_Int32_array *v21; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7

  if ( (byte_4D2FEAF & 1) == 0 )
  {
    sub_1C94098(&int___TypeInfo);
    byte_4D2FEAF = 1;
  }
  this->fields.perf = inperf;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.perf,
    (int32_t)inperf,
    (int32_t)indata,
    (int32_t)inlogic,
    (System_String_o *)method,
    v5,
    v6,
    v7);
  this->fields.bdata = indata;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.bdata, (int32_t)indata, v11, v12, v13, v14, v15, v16);
  BattlePerformanceEnemy__SetupEnemyUiAll(this, v17);
  svtParamList_k__BackingField = this->fields._svtParamList_k__BackingField;
  if ( !svtParamList_k__BackingField )
    sub_1C942F0(v18, v19);
  v21 = (struct System_Int32_array *)sub_1C94140(int___TypeInfo, LODWORD(svtParamList_k__BackingField->max_length));
  this->fields.list_ID = v21;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.list_ID, (int32_t)v21, v22, v23, v24, v25, v26, v27);
}


bool BattlePerformanceEnemy__IsDefaultStatusUi(
        BattlePerformanceEnemy_o *this,
        BattleServantParamComponent_o *component,
        const MethodInfo *method)
{
  UnityEngine_Object_o *defaultRaidParam; // x21
  UnityEngine_Object_o *defaultSuperBossParam; // x21

  if ( (byte_4D2FEAE & 1) == 0 )
  {
    sub_1C94098(&Method_System_Linq_Enumerable_Contains_BattleServantParamComponent___);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D2FEAE = 1;
  }
  defaultRaidParam = (UnityEngine_Object_o *)this->fields.defaultRaidParam;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)component, defaultRaidParam, 0) )
    return 1;
  defaultSuperBossParam = (UnityEngine_Object_o *)this->fields.defaultSuperBossParam;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  return UnityEngine_Object__op_Equality((UnityEngine_Object_o *)component, defaultSuperBossParam, 0)
      || System_Linq_Enumerable__Contains_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.defaultSvtParamList,
           (Il2CppObject *)component,
           (const MethodInfo_31B974C *)Method_System_Linq_Enumerable_Contains_BattleServantParamComponent___);
}


bool BattlePerformanceEnemy__IsExistsBackRow(BattlePerformanceEnemy_o *this, const MethodInfo *method)
{
  void *svtParamList_k__BackingField; // x0
  int32_t v4; // w20
  int32_t v5; // w24
  Il2CppObject *v6; // x21

  if ( (byte_4D2FEB4 & 1) == 0 )
  {
    sub_1C94098(&Method_BasicHelper_IndexValue_BattleServantParamComponent___);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D2FEB4 = 1;
  }
  svtParamList_k__BackingField = this->fields._svtParamList_k__BackingField;
  if ( !svtParamList_k__BackingField )
LABEL_13:
    sub_1C942F0(svtParamList_k__BackingField, method);
  v4 = 3;
  while ( 1 )
  {
    v5 = *((_DWORD *)svtParamList_k__BackingField + 6);
    if ( v4 >= v5 )
      return v4 < v5;
    v6 = BasicHelper__IndexValue_object_(
           (System_Object_array *)svtParamList_k__BackingField,
           v4,
           0,
           (const MethodInfo_318A668 *)Method_BasicHelper_IndexValue_BattleServantParamComponent___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    svtParamList_k__BackingField = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v6, 0, 0);
    if ( ((unsigned __int8)svtParamList_k__BackingField & 1) != 0 )
    {
      if ( !v6 )
        goto LABEL_13;
      svtParamList_k__BackingField = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v6, 0);
      if ( !svtParamList_k__BackingField )
        goto LABEL_13;
      if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)svtParamList_k__BackingField, 0) )
        return v4 < v5;
    }
    svtParamList_k__BackingField = this->fields._svtParamList_k__BackingField;
    ++v4;
    if ( !svtParamList_k__BackingField )
      goto LABEL_13;
  }
}


BaseEnemyParamPosData_o *BattlePerformanceEnemy__MakeEnemyParamPosData(
        BattlePerformanceEnemy_o *this,
        const MethodInfo *method)
{
  BattleData_o *bdata; // x0
  _QWORD *v4; // x8
  Il2CppObject *v5; // x19

  if ( (byte_4D2FEB2 & 1) == 0 )
  {
    sub_1C94098(&PosCountNormalEnemyParamPosData_TypeInfo);
    sub_1C94098(&PosCountSpEnemyParamPosData_TypeInfo);
    byte_4D2FEB2 = 1;
  }
  bdata = this->fields.bdata;
  if ( !bdata )
    sub_1C942F0(0, method);
  if ( BattleData__get_IsEnemyPosCountNormal(bdata, 0) )
    v4 = &PosCountNormalEnemyParamPosData_TypeInfo;
  else
    v4 = &PosCountSpEnemyParamPosData_TypeInfo;
  v5 = (Il2CppObject *)sub_1C942E4(*v4);
  System_Object___ctor(v5, 0);
  return (BaseEnemyParamPosData_o *)v5;
}


void BattlePerformanceEnemy__OnDestroy(BattlePerformanceEnemy_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields.exUiController = 0;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.exUiController, 0, v2, v3, v4, v5, v6, v7);
}


void BattlePerformanceEnemy__ReplaceStatusUi(
        BattlePerformanceEnemy_o *this,
        BattleServantParamComponent_o *component,
        BattleServantData_o *svtData,
        int32_t index,
        const MethodInfo *method)
{
  BattleServantParamComponent_c *klass; // x8
  unsigned int naturalAligment; // w9
  __int64 v11; // x11
  __int64 v12; // x11
  BattleData_o *bdata; // x0
  __int64 v14; // x1
  struct BattleServantParamComponent_array *defaultSvtParamList; // x8
  struct BattleServantParamComponent_array *svtParamList_k__BackingField; // x8
  __int64 *v17; // x8
  Il2CppObject **p_raidParam; // x1
  StageEntity_o *StageEntity; // x0
  const MethodInfo *v20; // x2

  if ( (byte_4D2FEA7 & 1) == 0 )
  {
    sub_1C94098(&Method_BasicHelper_IsValidIndex_BattleServantParamComponent___);
    sub_1C94098(&Method_BattlePerformanceEnemy_SetStatusUi_BattleServantParamComponent___);
    sub_1C94098(&Method_BattlePerformanceEnemy_SetStatusUi_BattleServantRaidParamComponent___);
    sub_1C94098(&Method_BattlePerformanceEnemy_SetStatusUi_BattleServantSuperBossParamComponent___);
    sub_1C94098(&BattleServantRaidParamComponent_TypeInfo);
    sub_1C94098(&BattleServantSuperBossParamComponent_TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D2FEA7 = 1;
  }
  if ( !component )
  {
LABEL_8:
    if ( !BasicHelper__IsValidIndex_object__51948056(
            (System_Object_array *)this->fields._svtParamList_k__BackingField,
            index,
            (const MethodInfo_318AA18 *)Method_BasicHelper_IsValidIndex_BattleServantParamComponent___) )
      return;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    bdata = (BattleData_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)component, 0, 0);
    if ( ((unsigned __int8)bdata & 1) != 0 )
    {
      defaultSvtParamList = this->fields.defaultSvtParamList;
      if ( !defaultSvtParamList )
        goto LABEL_25;
      if ( LODWORD(defaultSvtParamList->max_length) <= index )
        goto LABEL_26;
      component = defaultSvtParamList->m_Items[index];
    }
    svtParamList_k__BackingField = this->fields._svtParamList_k__BackingField;
    if ( !svtParamList_k__BackingField )
      goto LABEL_25;
    if ( LODWORD(svtParamList_k__BackingField->max_length) > index )
    {
      BattlePerformanceEnemy__SetStatusUi_object_(
        this,
        (Il2CppObject **)&svtParamList_k__BackingField->m_Items[index],
        (Il2CppObject *)component,
        (const MethodInfo_318CDE8 *)Method_BattlePerformanceEnemy_SetStatusUi_BattleServantParamComponent___);
      if ( !component )
LABEL_25:
        sub_1C942F0(bdata, v14);
      goto LABEL_23;
    }
LABEL_26:
    sub_1C942F8(bdata);
  }
  klass = component->klass;
  naturalAligment = component->klass->_2.naturalAligment;
  v11 = BattleServantRaidParamComponent_TypeInfo->_2.naturalAligment;
  if ( naturalAligment >= (unsigned int)v11
    && (BattleServantRaidParamComponent_c *)klass->_2.typeHierarchy[v11 - 1] == BattleServantRaidParamComponent_TypeInfo )
  {
    v17 = &Method_BattlePerformanceEnemy_SetStatusUi_BattleServantRaidParamComponent___;
    p_raidParam = (Il2CppObject **)&this->fields.raidParam;
  }
  else
  {
    v12 = BattleServantSuperBossParamComponent_TypeInfo->_2.naturalAligment;
    if ( naturalAligment < (unsigned int)v12
      || (BattleServantSuperBossParamComponent_c *)klass->_2.typeHierarchy[v12 - 1] != BattleServantSuperBossParamComponent_TypeInfo )
    {
      goto LABEL_8;
    }
    v17 = &Method_BattlePerformanceEnemy_SetStatusUi_BattleServantSuperBossParamComponent___;
    p_raidParam = (Il2CppObject **)&this->fields.superbossParam;
  }
  BattlePerformanceEnemy__SetStatusUi_object_(
    this,
    p_raidParam,
    (Il2CppObject *)component,
    (const MethodInfo_318CDE8 *)*v17);
LABEL_23:
  component->fields.index = index;
  bdata = this->fields.bdata;
  if ( !bdata )
    goto LABEL_25;
  StageEntity = BattleData__getStageEntity(bdata, 0);
  ((void (__fastcall *)(BattleServantParamComponent_o *, BattleServantData_o *, StageEntity_o *, const MethodInfo *))component->klass->vtable._10_setData.methodPtr)(
    component,
    svtData,
    StageEntity,
    component->klass->vtable._10_setData.method);
  BattlePerformanceEnemy__SetupStatusUiAdditionally(this, svtData, v20);
}


void BattlePerformanceEnemy__SetActiveParameterView(
        BattlePerformanceEnemy_o *this,
        int32_t index,
        bool val,
        const MethodInfo *method)
{
  struct BattleServantParamComponent_array *svtParamList_k__BackingField; // x8
  int32_t max_length; // w9

  if ( (index & 0x80000000) == 0 )
  {
    svtParamList_k__BackingField = this->fields._svtParamList_k__BackingField;
    if ( !svtParamList_k__BackingField )
      goto LABEL_9;
    max_length = svtParamList_k__BackingField->max_length;
    if ( max_length > index )
    {
      if ( max_length <= (unsigned int)index )
        sub_1C942F8(this);
      this = (BattlePerformanceEnemy_o *)svtParamList_k__BackingField->m_Items[index];
      if ( this )
      {
        BattleServantParamComponent__SetActiveParameterView((BattleServantParamComponent_o *)this, val, 0);
        return;
      }
LABEL_9:
      sub_1C942F0(this, index);
    }
  }
}


void BattlePerformanceEnemy__SetDefaultStatusUiIfNull(BattlePerformanceEnemy_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *raidParam; // x21
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  struct BattleServantRaidParamComponent_o *defaultRaidParam; // x1
  UnityEngine_Object_o *superbossParam; // x21
  __int64 v12; // x0
  __int64 v13; // x1
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  struct BattleServantSuperBossParamComponent_o *defaultSuperBossParam; // x1
  struct BattleServantParamComponent_array *svtParamList_k__BackingField; // x8
  unsigned __int64 v22; // x21
  unsigned __int64 max_length_low; // x9
  UnityEngine_Object_o *v24; // x20
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  struct BattleServantParamComponent_array *defaultSvtParamList; // x8
  unsigned int *v32; // x23
  BattleServantParamComponent_o *v33; // x20
  unsigned int *v34; // x0
  __int64 v35; // x0

  if ( (byte_4D2FEA8 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D2FEA8 = 1;
  }
  raidParam = (UnityEngine_Object_o *)this->fields.raidParam;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(raidParam, 0, 0) )
  {
    defaultRaidParam = this->fields.defaultRaidParam;
    this->fields.raidParam = defaultRaidParam;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&this->fields.raidParam,
      (int32_t)defaultRaidParam,
      v4,
      v5,
      v6,
      v7,
      v8,
      v9);
  }
  superbossParam = (UnityEngine_Object_o *)this->fields.superbossParam;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v12 = UnityEngine_Object__op_Equality(superbossParam, 0, 0);
  if ( (v12 & 1) != 0 )
  {
    defaultSuperBossParam = this->fields.defaultSuperBossParam;
    this->fields.superbossParam = defaultSuperBossParam;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&this->fields.superbossParam,
      (int32_t)defaultSuperBossParam,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
  }
  svtParamList_k__BackingField = this->fields._svtParamList_k__BackingField;
  if ( !svtParamList_k__BackingField )
LABEL_26:
    sub_1C942F0(v12, v13);
  v22 = 0;
  while ( 1 )
  {
    max_length_low = LODWORD(svtParamList_k__BackingField->max_length);
    if ( (__int64)v22 >= (int)max_length_low )
      break;
    if ( v22 >= max_length_low )
      goto LABEL_28;
    v24 = (UnityEngine_Object_o *)svtParamList_k__BackingField->m_Items[v22];
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v12 = UnityEngine_Object__op_Equality(v24, 0, 0);
    if ( (v12 & 1) != 0 )
    {
      defaultSvtParamList = this->fields.defaultSvtParamList;
      if ( !defaultSvtParamList )
        goto LABEL_26;
      if ( v22 >= LODWORD(defaultSvtParamList->max_length) )
        goto LABEL_28;
      v32 = (unsigned int *)this->fields._svtParamList_k__BackingField;
      if ( !v32 )
        goto LABEL_26;
      v33 = defaultSvtParamList->m_Items[v22];
      if ( v33 )
      {
        v12 = sub_1C941D4(v33, *(_QWORD *)(*(_QWORD *)v32 + 64LL));
        if ( !v12 )
        {
          v35 = sub_1C94314(0);
          sub_1C941C0(v35, 0);
        }
      }
      if ( v22 >= v32[6] )
LABEL_28:
        sub_1C942F8(v12);
      v34 = &v32[2 * v22];
      *((_QWORD *)v34 + 4) = v33;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)(v34 + 8), (int32_t)v33, v25, v26, v27, v28, v29, v30);
    }
    svtParamList_k__BackingField = this->fields._svtParamList_k__BackingField;
    ++v22;
    if ( !svtParamList_k__BackingField )
      goto LABEL_26;
  }
}


void BattlePerformanceEnemy__SetStatusUi_object_(
        BattlePerformanceEnemy_o *this,
        Il2CppObject **component,
        Il2CppObject *toOverWrite,
        const MethodInfo_318CDE8 *method)
{
  Il2CppObject *v8; // x22
  Il2CppObject *v9; // x0
  __int64 v10; // x1
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  Il2CppObject *v23; // x8
  struct BattlePerformance_o *perf; // x1
  UnityEngine_GameObject_o *gameObject; // x19
  UnityEngine_GameObject_o *v26; // x0
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( !method->rgctx_data )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    if ( !method->rgctx_data )
      sub_1C6A188(method);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)toOverWrite, 0, 0) )
  {
    v8 = *component;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v9 = (Il2CppObject *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v8, 0, 0);
    if ( !v8 && ((unsigned __int8)v9 & 1) == 0 )
      goto LABEL_21;
    *component = toOverWrite;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)component, (int32_t)toOverWrite, v11, v12, v13, v14, v15, v16);
    v23 = *component;
    if ( !*component )
      goto LABEL_21;
    perf = this->fields.perf;
    v23[18].klass = (Il2CppClass *)perf;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&v23[18], (int32_t)perf, v17, v18, v19, v20, v21, v22);
    v9 = *component;
    if ( !*component )
      goto LABEL_21;
    ((void (__fastcall *)(Il2CppObject *, _QWORD, _QWORD, const MethodInfo *))v9->klass->vtable[10].methodPtr)(
      v9,
      0,
      0,
      v9->klass->vtable[10].method);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v9 = (Il2CppObject *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v8, 0, 0);
    if ( ((unsigned __int8)v9 & 1) != 0 )
    {
      if ( v8 )
      {
        ((void (__fastcall *)(Il2CppObject *, _QWORD, _QWORD, const MethodInfo *))v8->klass->vtable[10].methodPtr)(
          v8,
          0,
          0,
          v8->klass->vtable[10].method);
        if ( BattlePerformanceEnemy__IsDefaultStatusUi(this, (BattleServantParamComponent_o *)*component, 0) )
          return;
        v9 = *component;
        if ( *component )
        {
          gameObject = UnityEngine_Component__get_gameObject(
                         (UnityEngine_Component_o *)v9,
                         (const MethodInfo *)method->rgctx_data[2]._0_T);
          v26 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v8, 0);
          LocalPosition = GameObjectExtensions__GetLocalPosition(v26, 0);
          GameObjectExtensions__SetLocalPosition(gameObject, LocalPosition, 0);
          return;
        }
      }
LABEL_21:
      sub_1C942F0(v9, v10);
    }
  }
}


void BattlePerformanceEnemy__SetupEnemyUiAll(BattlePerformanceEnemy_o *this, const MethodInfo *method)
{
  System_Object_array *v3; // x0
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  System_Object_array *v10; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  __int64 v17; // x0
  __int64 v18; // x1
  struct BattleServantParamComponent_array *defaultSvtParamList; // x8
  System_Collections_Generic_IEnumerable_T__o *v20; // x20
  System_Action_int__o *v21; // x21

  if ( (byte_4D2FEA5 & 1) == 0 )
  {
    sub_1C94098(&System_Action_int__TypeInfo);
    sub_1C94098(&Method_BasicHelper_ForEach_int___);
    sub_1C94098(&Method_BattlePerformanceEnemy_SetStatusUi_BattleServantRaidParamComponent___);
    sub_1C94098(&Method_BattlePerformanceEnemy_SetStatusUi_BattleServantSuperBossParamComponent___);
    sub_1C94098(&Method_BattlePerformanceEnemy__SetupEnemyUiAll_b__27_0__);
    sub_1C94098(&Method_System_Linq_Enumerable_ToArray_BattleServantHeadUpComponent___);
    sub_1C94098(&Method_System_Linq_Enumerable_ToArray_BattleServantParamComponent___);
    byte_4D2FEA5 = 1;
  }
  v3 = System_Linq_Enumerable__ToArray_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.defaultSvtHeadUpList,
         (const MethodInfo_31DC8AC *)Method_System_Linq_Enumerable_ToArray_BattleServantHeadUpComponent___);
  this->fields._svtHeadUpList_k__BackingField = (struct BattleServantHeadUpComponent_array *)v3;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields._svtHeadUpList_k__BackingField,
    (int32_t)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  v10 = System_Linq_Enumerable__ToArray_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.defaultSvtParamList,
          (const MethodInfo_31DC8AC *)Method_System_Linq_Enumerable_ToArray_BattleServantParamComponent___);
  this->fields._svtParamList_k__BackingField = (struct BattleServantParamComponent_array *)v10;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields._svtParamList_k__BackingField,
    (int32_t)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  defaultSvtParamList = this->fields.defaultSvtParamList;
  if ( !defaultSvtParamList )
    sub_1C942F0(v17, v18);
  v20 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Range(
                                                         0,
                                                         defaultSvtParamList->max_length,
                                                         0);
  v21 = (System_Action_int__o *)sub_1C942E4(System_Action_int__TypeInfo);
  System_Action_int____ctor(v21, (Il2CppObject *)this, Method_BattlePerformanceEnemy__SetupEnemyUiAll_b__27_0__, 0);
  BasicHelper__ForEach_int_(
    v20,
    (System_Action_T__o *)v21,
    (const MethodInfo_3187458 *)Method_BasicHelper_ForEach_int___);
  BattlePerformanceEnemy__SetStatusUi_object_(
    this,
    (Il2CppObject **)&this->fields.raidParam,
    (Il2CppObject *)this->fields.defaultRaidParam,
    (const MethodInfo_318CDE8 *)Method_BattlePerformanceEnemy_SetStatusUi_BattleServantRaidParamComponent___);
  BattlePerformanceEnemy__SetStatusUi_object_(
    this,
    (Il2CppObject **)&this->fields.superbossParam,
    (Il2CppObject *)this->fields.defaultSuperBossParam,
    (const MethodInfo_318CDE8 *)Method_BattlePerformanceEnemy_SetStatusUi_BattleServantSuperBossParamComponent___);
}


void BattlePerformanceEnemy__SetupStatusUiAdditionally(
        BattlePerformanceEnemy_o *this,
        BattleServantData_o *svtdata,
        const MethodInfo *method)
{
  BattleServantParamComponent_o *StatusUiBySvtData; // x0
  UnityEngine_Object_o *v6; // x20
  UnityEngine_Object_o *raidParam; // x22
  __int64 battle_ent; // x0
  __int64 v9; // x1
  struct BattleData_o *bdata; // x8
  struct BattleServantRaidParamComponent_o *v11; // x22
  struct BattlePerformance_o *perf; // x8
  EventRaidEntity_o *v13; // x8
  struct BattleServantRaidParamComponent_o *v14; // x22
  System_Int64_array *splitHp; // x23
  UnityEngine_Object_o *superbossParam; // x22
  struct BattlePerformance_o *v17; // x8
  BattleServantSuperBossParamComponent_o *v18; // x22
  struct BattlePerformance_o *v19; // x8
  System_Int64_array *v20; // x21
  struct BattlePerformance_o *v21; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  EventRaidEntity_o *raidEnt; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4D2FEB6 & 1) == 0 )
  {
    sub_1C94098(&long___TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D2FEB6 = 1;
  }
  raidEnt = 0;
  StatusUiBySvtData = BattlePerformanceEnemy__GetStatusUiBySvtData(this, svtdata, method);
  if ( svtdata )
  {
    v6 = (UnityEngine_Object_o *)StatusUiBySvtData;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(v6, 0, 0) )
    {
      raidParam = (UnityEngine_Object_o *)this->fields.raidParam;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      battle_ent = UnityEngine_Object__op_Equality(v6, raidParam, 0);
      if ( (battle_ent & 1) != 0 )
      {
        bdata = this->fields.bdata;
        if ( !bdata )
          goto LABEL_37;
        battle_ent = (__int64)bdata->fields.battle_ent;
        if ( !battle_ent )
          goto LABEL_37;
        v11 = this->fields.raidParam;
        battle_ent = BattleEntity__isDefeatCount((BattleEntity_o *)battle_ent, 0);
        if ( !v11 )
          goto LABEL_37;
        v11->fields.isDefeatCount = battle_ent & 1;
        perf = this->fields.perf;
        if ( !perf )
          goto LABEL_37;
        battle_ent = (__int64)perf->fields.data;
        if ( !battle_ent )
          goto LABEL_37;
        battle_ent = BattleData__TryGetRaidEntity((BattleData_o *)battle_ent, &raidEnt, svtdata->fields.raidId, 0);
        if ( (battle_ent & 1) != 0 )
        {
          v13 = raidEnt;
          if ( !raidEnt )
            goto LABEL_37;
          v14 = this->fields.raidParam;
          if ( !v14 )
            goto LABEL_37;
          v14->fields.isJumbleRaid = raidEnt->fields.groupIndex > 0;
          splitHp = v13->fields.splitHp;
        }
        else
        {
          battle_ent = sub_1C94140(long___TypeInfo, 0);
          v14 = this->fields.raidParam;
          splitHp = (System_Int64_array *)battle_ent;
        }
        v21 = this->fields.perf;
        if ( !v21 )
          goto LABEL_37;
        battle_ent = (__int64)v21->fields.data;
        if ( !battle_ent )
          goto LABEL_37;
        battle_ent = BattleData__getRaidBossMaxHp((BattleData_o *)battle_ent, svtdata->fields.raidId, 0);
        if ( !v14 )
          goto LABEL_37;
        BattleServantRaidParamComponent__setSplitHp(v14, splitHp, battle_ent, 0);
      }
      else
      {
        superbossParam = (UnityEngine_Object_o *)this->fields.superbossParam;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        battle_ent = UnityEngine_Object__op_Equality(v6, superbossParam, 0);
        if ( (battle_ent & 1) != 0 && svtdata->fields.isSuperBoss )
        {
          v17 = this->fields.perf;
          if ( !v17 )
            goto LABEL_37;
          battle_ent = (__int64)v17->fields.data;
          if ( !battle_ent )
            goto LABEL_37;
          v18 = this->fields.superbossParam;
          battle_ent = (__int64)BattleData__getSuperBossSplitHp(
                                  (BattleData_o *)battle_ent,
                                  svtdata->fields.superBossId,
                                  0);
          v19 = this->fields.perf;
          if ( !v19 )
            goto LABEL_37;
          v20 = (System_Int64_array *)battle_ent;
          battle_ent = (__int64)v19->fields.data;
          if ( !battle_ent )
            goto LABEL_37;
          battle_ent = BattleData__getSuperBossMaxHp((BattleData_o *)battle_ent, svtdata->fields.superBossId, 0);
          if ( !v18 )
            goto LABEL_37;
          BattleServantSuperBossParamComponent__setSplitHp(v18, v20, battle_ent, 0);
        }
      }
      if ( v6 )
      {
        BattleServantParamComponent__setTouch((BattleServantParamComponent_o *)v6, 1, 0);
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v6, 0);
        BattleServantData__addParamObject(svtdata, gameObject, 0);
        return;
      }
LABEL_37:
      sub_1C942F0(battle_ent, v9);
    }
  }
}


void BattlePerformanceEnemy__SetupTargetIcon(
        BattlePerformanceEnemy_o *this,
        BattleServantData_o *svtData,
        UnityEngine_GameObject_o *target,
        int32_t index,
        const MethodInfo *method)
{
  BattlePerformanceEnemy_o *v8; // x19
  struct BattleServantHeadUpComponent_array *svtHeadUpList_k__BackingField; // x8
  struct BattleServantHeadUpComponent_array *v10; // x8
  BattleServantHeadUpComponent_o *v11; // x8
  struct System_Int32_array *list_ID; // x8
  BattleActorControl_o *Component_object; // x21
  AdjustPopupPosInScreenArgument_o *v14; // x22
  struct BattleServantHeadUpComponent_array *v15; // x8
  BattlePerformance_o *perf; // x19
  BattlePerformanceEnemy_o *v17; // x20
  UnityEngine_Vector3_o HeadUpY; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v19; // 0:s3.4,4:s4.4,8:s5.4

  v8 = this;
  if ( (byte_4D2FEB7 & 1) == 0 )
  {
    sub_1C94098(&AdjustPopupPosInScreenArgument_TypeInfo);
    this = (BattlePerformanceEnemy_o *)sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    byte_4D2FEB7 = 1;
  }
  svtHeadUpList_k__BackingField = v8->fields._svtHeadUpList_k__BackingField;
  if ( !svtHeadUpList_k__BackingField )
    goto LABEL_20;
  if ( LODWORD(svtHeadUpList_k__BackingField->max_length) <= index )
    goto LABEL_21;
  this = (BattlePerformanceEnemy_o *)svtHeadUpList_k__BackingField->m_Items[index];
  if ( !this )
    goto LABEL_20;
  BattleServantHeadUpComponent__setData((BattleServantHeadUpComponent_o *)this, svtData, 0);
  v10 = v8->fields._svtHeadUpList_k__BackingField;
  if ( !v10 )
    goto LABEL_20;
  if ( LODWORD(v10->max_length) <= index )
    goto LABEL_21;
  v11 = v10->m_Items[index];
  if ( !v11 )
    goto LABEL_20;
  v11->fields.index = index;
  if ( !svtData )
    goto LABEL_20;
  list_ID = v8->fields.list_ID;
  if ( !list_ID )
    goto LABEL_20;
  if ( LODWORD(list_ID->max_length) <= index )
    goto LABEL_21;
  list_ID->m_Items[index] = svtData->fields.uniqueId;
  if ( !target
    || (Component_object = (BattleActorControl_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     target,
                                                     (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___),
        v14 = (AdjustPopupPosInScreenArgument_o *)sub_1C942E4(AdjustPopupPosInScreenArgument_TypeInfo),
        AdjustPopupPosInScreenArgument___ctor(v14, 0),
        !v14)
    || (v14->fields.IsExec = 0, (v15 = v8->fields._svtHeadUpList_k__BackingField) == 0) )
  {
LABEL_20:
    sub_1C942F0(this, svtData);
  }
  if ( LODWORD(v15->max_length) <= index )
LABEL_21:
    sub_1C942F8(this);
  this = (BattlePerformanceEnemy_o *)v15->m_Items[index];
  if ( !this )
    goto LABEL_20;
  perf = v8->fields.perf;
  this = (BattlePerformanceEnemy_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !Component_object )
    goto LABEL_20;
  v17 = this;
  HeadUpY = BattleActorControl__getHeadUpY(Component_object, 0);
  if ( !perf )
    goto LABEL_20;
  v19.fields.x = 0.0;
  v19.fields.y = 0.0;
  v19.fields.z = 0.0;
  BattlePerformance__SetPopUpNodeObjectPosition(
    perf,
    Component_object,
    (UnityEngine_GameObject_o *)v17,
    HeadUpY,
    Component_object->fields._NodeTarget_k__BackingField,
    v19,
    v14,
    0);
}


void BattlePerformanceEnemy__UseDefaultStatusUi(
        BattlePerformanceEnemy_o *this,
        BattleServantData_o *svtData,
        int32_t index,
        const MethodInfo *method)
{
  BattleServantParamComponent_o *DefaultStatusUi; // x0
  const MethodInfo *v8; // x4

  DefaultStatusUi = BattlePerformanceEnemy__GetDefaultStatusUi(this, svtData, index, method);
  BattlePerformanceEnemy__ReplaceStatusUi(this, DefaultStatusUi, svtData, index, v8);
}


// local variable allocation has failed, the output may be wrong!
void BattlePerformanceEnemy___SetupEnemyUiAll_b__27_0(
        BattlePerformanceEnemy_o *this,
        int32_t i,
        const MethodInfo *method)
{
  BattlePerformanceEnemy_o *v4; // x19
  struct BattleServantParamComponent_array *svtParamList_k__BackingField; // x8
  struct BattleServantParamComponent_array *defaultSvtParamList; // x9

  v4 = this;
  if ( (byte_4D2FEBA & 1) == 0 )
  {
    this = (BattlePerformanceEnemy_o *)sub_1C94098(&Method_BattlePerformanceEnemy_SetStatusUi_BattleServantParamComponent___);
    byte_4D2FEBA = 1;
  }
  svtParamList_k__BackingField = v4->fields._svtParamList_k__BackingField;
  if ( !svtParamList_k__BackingField || (defaultSvtParamList = v4->fields.defaultSvtParamList) == 0 )
    sub_1C942F0(this, *(_QWORD *)&i);
  if ( LODWORD(defaultSvtParamList->max_length) <= i || LODWORD(svtParamList_k__BackingField->max_length) <= i )
    sub_1C942F8(this);
  BattlePerformanceEnemy__SetStatusUi_object_(
    v4,
    (Il2CppObject **)&svtParamList_k__BackingField->m_Items[i],
    (Il2CppObject *)defaultSvtParamList->m_Items[i],
    (const MethodInfo_318CDE8 *)Method_BattlePerformanceEnemy_SetStatusUi_BattleServantParamComponent___);
}


bool BattlePerformanceEnemy__checkRaidUpdateHp(BattlePerformanceEnemy_o *this, const MethodInfo *method)
{
  struct BattleServantRaidParamComponent_o *raidParam; // x8

  raidParam = this->fields.raidParam;
  if ( !raidParam )
    sub_1C942F0(this, method);
  return raidParam->fields.flgUpdate;
}


void BattlePerformanceEnemy__deleteStatus(BattlePerformanceEnemy_o *this, int32_t index, const MethodInfo *method)
{
  BattleServantHeadUpComponent_o *IsValidIndex_object__51948056; // x0
  __int64 v6; // x1
  struct BattleServantHeadUpComponent_array *svtHeadUpList_k__BackingField; // x8
  UnityEngine_Object_o *v8; // x21
  struct BattleServantHeadUpComponent_array *v9; // x8
  struct System_Int32_array *list_ID; // x8
  struct BattleServantHeadUpComponent_array *v11; // x8
  struct BattleServantParamComponent_array *svtParamList_k__BackingField; // x8
  UnityEngine_Object_o *v13; // x21
  struct BattleServantParamComponent_array *v14; // x8

  if ( (byte_4D2FEB0 & 1) == 0 )
  {
    sub_1C94098(&Method_BasicHelper_IsValidIndex_BattleServantHeadUpComponent___);
    sub_1C94098(&Method_BasicHelper_IsValidIndex_BattleServantParamComponent___);
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_TrackingMoveCtCComponent___);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D2FEB0 = 1;
  }
  if ( BasicHelper__IsValidIndex_object__51948056(
         (System_Object_array *)this->fields._svtHeadUpList_k__BackingField,
         index,
         (const MethodInfo_318AA18 *)Method_BasicHelper_IsValidIndex_BattleServantHeadUpComponent___) )
  {
    IsValidIndex_object__51948056 = (BattleServantHeadUpComponent_o *)BasicHelper__IsValidIndex_object__51948056(
                                                                        (System_Object_array *)this->fields._svtParamList_k__BackingField,
                                                                        index,
                                                                        (const MethodInfo_318AA18 *)Method_BasicHelper_IsValidIndex_BattleServantParamComponent___);
    if ( ((unsigned __int8)IsValidIndex_object__51948056 & 1) != 0 )
    {
      svtHeadUpList_k__BackingField = this->fields._svtHeadUpList_k__BackingField;
      if ( !svtHeadUpList_k__BackingField )
        goto LABEL_31;
      if ( LODWORD(svtHeadUpList_k__BackingField->max_length) <= index )
        goto LABEL_32;
      v8 = (UnityEngine_Object_o *)svtHeadUpList_k__BackingField->m_Items[index];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      IsValidIndex_object__51948056 = (BattleServantHeadUpComponent_o *)UnityEngine_Object__op_Inequality(v8, 0, 0);
      if ( ((unsigned __int8)IsValidIndex_object__51948056 & 1) != 0 )
      {
        v9 = this->fields._svtHeadUpList_k__BackingField;
        if ( !v9 )
          goto LABEL_31;
        if ( LODWORD(v9->max_length) <= index )
          goto LABEL_32;
        IsValidIndex_object__51948056 = v9->m_Items[index];
        if ( !IsValidIndex_object__51948056 )
          goto LABEL_31;
        BattleServantHeadUpComponent__setData(IsValidIndex_object__51948056, 0, 0);
        list_ID = this->fields.list_ID;
        if ( !list_ID )
          goto LABEL_31;
        if ( LODWORD(list_ID->max_length) <= index )
          goto LABEL_32;
        list_ID->m_Items[index] = -1;
        v11 = this->fields._svtHeadUpList_k__BackingField;
        if ( !v11 )
          goto LABEL_31;
        if ( LODWORD(v11->max_length) <= index )
LABEL_32:
          sub_1C942F8(IsValidIndex_object__51948056);
        IsValidIndex_object__51948056 = v11->m_Items[index];
        if ( !IsValidIndex_object__51948056 )
          goto LABEL_31;
        IsValidIndex_object__51948056 = (BattleServantHeadUpComponent_o *)UnityEngine_Component__get_gameObject(
                                                                            (UnityEngine_Component_o *)IsValidIndex_object__51948056,
                                                                            0);
        if ( !IsValidIndex_object__51948056 )
          goto LABEL_31;
        IsValidIndex_object__51948056 = (BattleServantHeadUpComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                            (UnityEngine_GameObject_o *)IsValidIndex_object__51948056,
                                                                            (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_TrackingMoveCtCComponent___);
        if ( !IsValidIndex_object__51948056 )
          goto LABEL_31;
        TrackingMoveCtCComponent__stopAct((TrackingMoveCtCComponent_o *)IsValidIndex_object__51948056, 0);
      }
      svtParamList_k__BackingField = this->fields._svtParamList_k__BackingField;
      if ( !svtParamList_k__BackingField )
        goto LABEL_31;
      if ( LODWORD(svtParamList_k__BackingField->max_length) <= index )
        goto LABEL_32;
      v13 = (UnityEngine_Object_o *)svtParamList_k__BackingField->m_Items[index];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      IsValidIndex_object__51948056 = (BattleServantHeadUpComponent_o *)UnityEngine_Object__op_Inequality(v13, 0, 0);
      if ( ((unsigned __int8)IsValidIndex_object__51948056 & 1) != 0 )
      {
        v14 = this->fields._svtParamList_k__BackingField;
        if ( !v14 )
          goto LABEL_31;
        if ( LODWORD(v14->max_length) > index )
        {
          IsValidIndex_object__51948056 = (BattleServantHeadUpComponent_o *)v14->m_Items[index];
          if ( IsValidIndex_object__51948056 )
          {
            ((void (__fastcall *)(BattleServantHeadUpComponent_o *, _QWORD, _QWORD, void *))IsValidIndex_object__51948056->klass[1]._1.generic_class)(
              IsValidIndex_object__51948056,
              0,
              0,
              IsValidIndex_object__51948056->klass[1]._1.typeMetadataHandle);
            return;
          }
LABEL_31:
          sub_1C942F0(IsValidIndex_object__51948056, v6);
        }
        goto LABEL_32;
      }
    }
  }
}


void BattlePerformanceEnemy__endSkill(BattlePerformanceEnemy_o *this, const MethodInfo *method)
{
  struct BattleServantHeadUpComponent_array *svtHeadUpList_k__BackingField; // x8
  BattlePerformanceEnemy_o *v3; // x19
  __int64 v4; // x20
  int max_length; // w9

  svtHeadUpList_k__BackingField = this->fields._svtHeadUpList_k__BackingField;
  if ( !svtHeadUpList_k__BackingField )
LABEL_7:
    sub_1C942F0(this, method);
  v3 = this;
  v4 = 0;
  while ( 1 )
  {
    max_length = svtHeadUpList_k__BackingField->max_length;
    if ( (int)v4 >= max_length )
      break;
    if ( (unsigned int)v4 >= max_length )
      sub_1C942F8(this);
    this = (BattlePerformanceEnemy_o *)svtHeadUpList_k__BackingField->m_Items[v4];
    if ( this )
    {
      BattleServantHeadUpComponent__setTargetRoot((BattleServantHeadUpComponent_o *)this, 1, 0);
      svtHeadUpList_k__BackingField = v3->fields._svtHeadUpList_k__BackingField;
      ++v4;
      if ( svtHeadUpList_k__BackingField )
        continue;
    }
    goto LABEL_7;
  }
}


int64_t BattlePerformanceEnemy__getTurnSituationParam(BattlePerformanceEnemy_o *this, const MethodInfo *method)
{
  BattleServantRaidParamComponent_o *raidParam; // x0

  raidParam = this->fields.raidParam;
  if ( !raidParam )
    sub_1C942F0(0, method);
  return BattleServantRaidParamComponent__getTurnSituationParam(raidParam, 0);
}


ExtraBattleUserInterfaceController_o *BattlePerformanceEnemy__get_ExUiController(
        BattlePerformanceEnemy_o *this,
        const MethodInfo *method)
{
  ExtraBattleUserInterfaceController_o *result; // x0
  BattleData_o *bdata; // x21
  ExtraBattleUserInterfaceController_o *v5; // x22
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7

  if ( (byte_4D2FEA4 & 1) == 0 )
  {
    sub_1C94098(&ExtraBattleUserInterfaceController_TypeInfo);
    byte_4D2FEA4 = 1;
  }
  result = this->fields.exUiController;
  if ( !result )
  {
    bdata = this->fields.bdata;
    v5 = (ExtraBattleUserInterfaceController_o *)sub_1C942E4(ExtraBattleUserInterfaceController_TypeInfo);
    ExtraBattleUserInterfaceController___ctor(v5, (IBattlePerformanceExtraUiParent_o *)this, bdata, 0);
    this->fields.exUiController = v5;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.exUiController, (int32_t)v5, v6, v7, v8, v9, v10, v11);
    return this->fields.exUiController;
  }
  return result;
}


BattleServantHeadUpComponent_array *BattlePerformanceEnemy__get_svtHeadUpList(
        BattlePerformanceEnemy_o *this,
        const MethodInfo *method)
{
  return this->fields._svtHeadUpList_k__BackingField;
}


BattleServantParamComponent_array *BattlePerformanceEnemy__get_svtParamList(
        BattlePerformanceEnemy_o *this,
        const MethodInfo *method)
{
  return this->fields._svtParamList_k__BackingField;
}


void BattlePerformanceEnemy__playAddition(BattlePerformanceEnemy_o *this, const MethodInfo *method)
{
  struct BattleServantParamComponent_array *svtParamList_k__BackingField; // x8
  BattlePerformanceEnemy_o *v3; // x19
  __int64 v4; // x20
  int max_length; // w9

  svtParamList_k__BackingField = this->fields._svtParamList_k__BackingField;
  if ( !svtParamList_k__BackingField )
LABEL_7:
    sub_1C942F0(this, method);
  v3 = this;
  v4 = 0;
  while ( 1 )
  {
    max_length = svtParamList_k__BackingField->max_length;
    if ( (int)v4 >= max_length )
      break;
    if ( (unsigned int)v4 >= max_length )
      sub_1C942F8(this);
    this = (BattlePerformanceEnemy_o *)svtParamList_k__BackingField->m_Items[v4];
    if ( this )
    {
      BattleServantParamComponent__playAddition((BattleServantParamComponent_o *)this, 0);
      svtParamList_k__BackingField = v3->fields._svtParamList_k__BackingField;
      ++v4;
      if ( svtParamList_k__BackingField )
        continue;
    }
    goto LABEL_7;
  }
}


void BattlePerformanceEnemy__setOffTarget(BattlePerformanceEnemy_o *this, const MethodInfo *method)
{
  struct BattleServantHeadUpComponent_array *svtHeadUpList_k__BackingField; // x8
  BattlePerformanceEnemy_o *v3; // x19
  __int64 v4; // x20
  int max_length; // w9
  struct BattleServantParamComponent_array *svtParamList_k__BackingField; // x8
  __int64 v7; // x20
  int v8; // w9

  svtHeadUpList_k__BackingField = this->fields._svtHeadUpList_k__BackingField;
  if ( !svtHeadUpList_k__BackingField )
    goto LABEL_18;
  v3 = this;
  v4 = 0;
  while ( 1 )
  {
    max_length = svtHeadUpList_k__BackingField->max_length;
    if ( (int)v4 >= max_length )
      break;
    if ( (unsigned int)v4 >= max_length )
LABEL_19:
      sub_1C942F8(this);
    this = (BattlePerformanceEnemy_o *)svtHeadUpList_k__BackingField->m_Items[v4];
    if ( this )
    {
      BattleServantHeadUpComponent__setTargetMark((BattleServantHeadUpComponent_o *)this, -1, 0, 0);
      svtHeadUpList_k__BackingField = v3->fields._svtHeadUpList_k__BackingField;
      ++v4;
      if ( svtHeadUpList_k__BackingField )
        continue;
    }
    goto LABEL_18;
  }
  svtParamList_k__BackingField = v3->fields._svtParamList_k__BackingField;
  if ( !svtParamList_k__BackingField )
    goto LABEL_18;
  v7 = 0;
  while ( 1 )
  {
    v8 = svtParamList_k__BackingField->max_length;
    if ( (int)v7 >= v8 )
      break;
    if ( (unsigned int)v7 >= v8 )
      goto LABEL_19;
    this = (BattlePerformanceEnemy_o *)svtParamList_k__BackingField->m_Items[v7];
    if ( this )
    {
      BattleServantParamComponent__setTargetMark((BattleServantParamComponent_o *)this, -1, 0, 0);
      svtParamList_k__BackingField = v3->fields._svtParamList_k__BackingField;
      ++v7;
      if ( svtParamList_k__BackingField )
        continue;
    }
    goto LABEL_18;
  }
  this = (BattlePerformanceEnemy_o *)v3->fields.raidParam;
  if ( !this
    || (BattleServantParamComponent__setTargetMark((BattleServantParamComponent_o *)this, -1, 0, 0),
        (this = (BattlePerformanceEnemy_o *)v3->fields.superbossParam) == 0) )
  {
LABEL_18:
    sub_1C942F0(this, method);
  }
  BattleServantParamComponent__setTargetMark((BattleServantParamComponent_o *)this, -1, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void BattlePerformanceEnemy__setParamPosition(BattlePerformanceEnemy_o *this, const MethodInfo *method)
{
  BattlePerformanceEnemy_o *v2; // x19
  struct BattlePerformance_o *perf; // x8
  BattleServantData_array *EnemyServantList; // x21
  const MethodInfo *v5; // x1
  BattlePerformanceEnemy_c *klass; // x8
  BattlePerformanceEnemy_o *v7; // x20
  __int64 v8; // x9
  int32_t *p_offset; // x10
  __int64 v10; // x0
  __int64 v11; // x1
  __int64 v12; // x20
  __int64 v13; // x8
  __int64 v14; // x9
  int *v15; // x10
  __int64 v16; // x0
  __int64 v17; // x8
  __int64 v18; // x9
  int *v19; // x10
  __int64 v20; // x0
  __int64 v21; // x0
  __int64 v22; // x1
  __int64 v23; // x22
  __int64 v24; // x1
  __int64 v25; // x1
  UnityEngine_Transform_o *superBossTr; // x0
  __int64 v27; // x1
  UnityEngine_Transform_o *raidTr; // x0
  __int64 v29; // x1
  UnityEngine_Transform_o *nomalTr; // x0
  __int64 v31; // x0
  __int64 v32; // x1
  struct BattlePerformance_o *v33; // x8
  BattleData_o *data; // x0
  _BOOL8 HasEnemy; // x0
  __int64 v36; // x1
  UnityEngine_Transform_o *exBattleUiParent; // x22
  struct BattlePerformance_o *v38; // x8
  BattleData_o *v39; // x0
  __int64 v40; // x0
  __int64 v41; // x1
  float v42; // s0
  int v43; // w21
  UnityEngine_Transform_o *v44; // x0
  __int64 v45; // x1
  UnityEngine_Transform_o *v46; // x0
  __int64 v47; // x1
  UnityEngine_Transform_o *v48; // x0
  __int64 v49; // x0
  __int64 v50; // x1
  struct BattlePerformance_o *v51; // x8
  BattleData_o *v52; // x0
  _BOOL8 v53; // x0
  __int64 v54; // x1
  struct BattlePerformance_o *v55; // x8
  BattleData_o *v56; // x0
  __int64 v57; // x0
  __int64 v58; // x1
  float v59; // s1 OVERLAPPED
  int v60; // s0
  int v61; // s2
  __int64 v62; // x8
  __int64 v63; // x9
  int *v64; // x10
  __int64 v65; // x0
  const MethodInfo *v66; // x1
  UnityEngine_Transform_o *v67; // x21
  BaseEnemyParamPosData_o *v68; // x20
  int v69; // s0 OVERLAPPED
  UnityEngine_Transform_o *v72; // x21
  int v73; // s0 OVERLAPPED
  struct BattleData_o *bdata; // x8
  UnityEngine_Transform_o *v77; // x21
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float x; // s0 OVERLAPPED
  float y; // s1
  float z; // s2
  struct BattlePerformance_o *v82; // x8
  struct BattlePerformance_o *v83; // x8
  UnityEngine_Transform_o *v84; // x21
  float v85; // s0
  struct BattleServantParamComponent_array *svtParamList_k__BackingField; // x19
  int max_length; // w8
  unsigned int v88; // w21
  UnityEngine_Vector3_o v89; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v90; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v91; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v92; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v93; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v94; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v95; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v96; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v97; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v98; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_4D2FEB1 & 1) == 0 )
  {
    sub_1C94098(&System_IDisposable_TypeInfo);
    sub_1C94098(&System_Collections_Generic_IEnumerable_BattleServantParamComponent__TypeInfo);
    sub_1C94098(&System_Collections_Generic_IEnumerator_BattleServantParamComponent__TypeInfo);
    this = (BattlePerformanceEnemy_o *)sub_1C94098(&System_Collections_IEnumerator_TypeInfo);
    byte_4D2FEB1 = 1;
  }
  perf = v2->fields.perf;
  if ( !perf )
    goto LABEL_94;
  this = (BattlePerformanceEnemy_o *)perf->fields.data;
  if ( !this )
    goto LABEL_94;
  EnemyServantList = BattleData__getEnemyServantList((BattleData_o *)this, 0);
  this = (BattlePerformanceEnemy_o *)BattlePerformanceEnemy__EnumerateUsingStatusUi(v2, v5);
  if ( !this )
    goto LABEL_94;
  klass = this->klass;
  v7 = this;
  v8 = *(unsigned __int16 *)&this->klass->_2.rank;
  if ( *(_WORD *)&this->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_BattleServantParamComponent__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleServantParamComponent__TypeInfo )
    {
      --v8;
      p_offset += 4;
      if ( !v8 )
        goto LABEL_10;
    }
    v10 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_10:
    v10 = sub_1C6A420(this, System_Collections_Generic_IEnumerable_BattleServantParamComponent__TypeInfo, 0);
  }
  v12 = (*(__int64 (__fastcall **)(BattlePerformanceEnemy_o *, _QWORD))v10)(v7, *(_QWORD *)(v10 + 8));
  if ( !v12 )
    sub_1C942F0(0, v11);
  while ( 1 )
  {
    v13 = *(_QWORD *)v12;
    v14 = *(unsigned __int16 *)(*(_QWORD *)v12 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v12 + 302LL) )
    {
      v15 = (int *)(*(_QWORD *)(v13 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v15 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v14;
        v15 += 4;
        if ( !v14 )
          goto LABEL_17;
      }
      v16 = v13 + 16LL * *v15 + 312;
    }
    else
    {
LABEL_17:
      v16 = sub_1C6A420(v12, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v16)(v12, *(_QWORD *)(v16 + 8)) & 1) == 0 )
    {
      v43 = 12;
      goto LABEL_61;
    }
    v17 = *(_QWORD *)v12;
    v18 = *(unsigned __int16 *)(*(_QWORD *)v12 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v12 + 302LL) )
    {
      v19 = (int *)(*(_QWORD *)(v17 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BattleServantParamComponent__c **)v19 - 1) != System_Collections_Generic_IEnumerator_BattleServantParamComponent__TypeInfo )
      {
        --v18;
        v19 += 4;
        if ( !v18 )
          goto LABEL_24;
      }
      v20 = v17 + 16LL * *v19 + 312;
    }
    else
    {
LABEL_24:
      v20 = sub_1C6A420(v12, System_Collections_Generic_IEnumerator_BattleServantParamComponent__TypeInfo, 0);
    }
    v21 = (*(__int64 (__fastcall **)(__int64, _QWORD))v20)(v12, *(_QWORD *)(v20 + 8));
    v23 = v21;
    if ( !v21 )
      sub_1C942F0(0, v22);
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v21 + 440LL))(
            v21,
            *(_QWORD *)(*(_QWORD *)v21 + 448LL))
        & 1) != 0 )
      break;
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v23 + 456LL))(
            v23,
            *(_QWORD *)(*(_QWORD *)v23 + 464LL))
        & 1) != 0 )
    {
      superBossTr = v2->fields.superBossTr;
      if ( !superBossTr )
        sub_1C942F0(0, v25);
      v89.fields.x = 0.0;
      v89.fields.y = 0.0;
      v89.fields.z = 0.0;
      UnityEngine_Transform__set_localPosition(superBossTr, v89, 0);
      raidTr = v2->fields.raidTr;
      if ( !raidTr )
        sub_1C942F0(0, v27);
      v90.fields.x = 0.0;
      v90.fields.z = 0.0;
      v90.fields.y = 90.0;
      UnityEngine_Transform__set_localPosition(raidTr, v90, 0);
      nomalTr = v2->fields.nomalTr;
      if ( !nomalTr )
        sub_1C942F0(0, v29);
      v91.fields.x = 0.0;
      v91.fields.z = 0.0;
      v91.fields.y = -82.0;
      UnityEngine_Transform__set_localPosition(nomalTr, v91, 0);
      v33 = v2->fields.perf;
      if ( !v33 )
        sub_1C942F0(v31, v32);
      data = v33->fields.data;
      if ( !data )
        sub_1C942F0(0, v32);
      HasEnemy = BattleData__HasEnemyExBattleUiPositionY(data, 0);
      exBattleUiParent = v2->fields.exBattleUiParent;
      if ( HasEnemy )
      {
        v38 = v2->fields.perf;
        if ( !v38 )
          sub_1C942F0(HasEnemy, v36);
        v39 = v38->fields.data;
        if ( !v39 )
          sub_1C942F0(0, v36);
        v42 = BattleData__EnemyExBattleUiPositionY(v39, 0);
        if ( !exBattleUiParent )
          sub_1C942F0(v40, v41);
LABEL_38:
        v92.fields.y = v42;
        v92.fields.x = 0.0;
        v92.fields.z = 0.0;
        UnityEngine_Transform__set_localPosition(exBattleUiParent, v92, 0);
        goto LABEL_60;
      }
      if ( !EnemyServantList )
        sub_1C942F0(HasEnemy, v36);
      if ( !exBattleUiParent )
        sub_1C942F0(HasEnemy, v36);
      v59 = 0.0;
      if ( SLODWORD(EnemyServantList->max_length) > 1 )
        v59 = -50.0;
      goto LABEL_59;
    }
  }
  v44 = v2->fields.superBossTr;
  if ( !v44 )
    sub_1C942F0(0, v24);
  v93.fields.x = 0.0;
  v93.fields.z = 0.0;
  v93.fields.y = 90.0;
  UnityEngine_Transform__set_localPosition(v44, v93, 0);
  v46 = v2->fields.raidTr;
  if ( !v46 )
    sub_1C942F0(0, v45);
  v94.fields.x = 0.0;
  v94.fields.y = 0.0;
  v94.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition(v46, v94, 0);
  v48 = v2->fields.nomalTr;
  if ( !v48 )
    sub_1C942F0(0, v47);
  v95.fields.x = 0.0;
  v95.fields.z = 0.0;
  v95.fields.y = -82.0;
  UnityEngine_Transform__set_localPosition(v48, v95, 0);
  v51 = v2->fields.perf;
  if ( !v51 )
    sub_1C942F0(v49, v50);
  v52 = v51->fields.data;
  if ( !v52 )
    sub_1C942F0(0, v50);
  v53 = BattleData__HasEnemyExBattleUiPositionY(v52, 0);
  exBattleUiParent = v2->fields.exBattleUiParent;
  if ( v53 )
  {
    v55 = v2->fields.perf;
    if ( !v55 )
      sub_1C942F0(v53, v54);
    v56 = v55->fields.data;
    if ( !v56 )
      sub_1C942F0(0, v54);
    v42 = BattleData__EnemyExBattleUiPositionY(v56, 0);
    if ( !exBattleUiParent )
      sub_1C942F0(v57, v58);
    goto LABEL_38;
  }
  if ( !EnemyServantList )
    sub_1C942F0(v53, v54);
  if ( !exBattleUiParent )
    sub_1C942F0(v53, v54);
  v59 = 0.0;
  if ( SLODWORD(EnemyServantList->max_length) > 1 )
    v59 = -50.0;
LABEL_59:
  v60 = 0;
  v61 = 0;
  UnityEngine_Transform__set_localPosition(v2->fields.exBattleUiParent, *(UnityEngine_Vector3_o *)(&v59 - 1), 0);
LABEL_60:
  v43 = 6;
LABEL_61:
  v62 = *(_QWORD *)v12;
  v63 = *(unsigned __int16 *)(*(_QWORD *)v12 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v12 + 302LL) )
  {
    v64 = (int *)(*(_QWORD *)(v62 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v64 - 1) != System_IDisposable_TypeInfo )
    {
      --v63;
      v64 += 4;
      if ( !v63 )
        goto LABEL_65;
    }
    v65 = v62 + 16LL * *v64 + 312;
  }
  else
  {
LABEL_65:
    v65 = sub_1C6A420(v12, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v65)(v12, *(_QWORD *)(v65 + 8));
  if ( v43 == 12 )
  {
    this = (BattlePerformanceEnemy_o *)v2->fields.superBossTr;
    if ( !this )
      goto LABEL_94;
    v96.fields.x = 0.0;
    v96.fields.z = 0.0;
    v96.fields.y = 90.0;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v96, 0);
    this = (BattlePerformanceEnemy_o *)v2->fields.raidTr;
    if ( !this )
      goto LABEL_94;
    v97.fields.x = 0.0;
    v97.fields.z = 0.0;
    v97.fields.y = 90.0;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v97, 0);
    this = (BattlePerformanceEnemy_o *)BattlePerformanceEnemy__MakeEnemyParamPosData(v2, v66);
    if ( !this )
      goto LABEL_94;
    v67 = v2->fields.nomalTr;
    v68 = (BaseEnemyParamPosData_o *)this;
    this = (BattlePerformanceEnemy_o *)((__int64 (__fastcall *)(BattlePerformanceEnemy_o *, const MethodInfo *))this->klass->vtable._4_IBattlePerformanceExtraUiParent_GetExBattleUiParentTransform.methodPtr)(
                                         this,
                                         this->klass->vtable._4_IBattlePerformanceExtraUiParent_GetExBattleUiParentTransform.method);
    if ( !v67 )
      goto LABEL_94;
    UnityEngine_Transform__set_localPosition(v67, *(UnityEngine_Vector3_o *)&v69, 0);
    v72 = v2->fields.nomalTr;
    this = (BattlePerformanceEnemy_o *)((__int64 (__fastcall *)(BaseEnemyParamPosData_o *, const MethodInfo *))v68->klass->vtable._5_get_NormalTrLocalScale.methodPtr)(
                                         v68,
                                         v68->klass->vtable._5_get_NormalTrLocalScale.method);
    if ( !v72 )
      goto LABEL_94;
    UnityEngine_Transform__set_localScale(v72, *(UnityEngine_Vector3_o *)&v73, 0);
    bdata = v2->fields.bdata;
    if ( !bdata )
      goto LABEL_94;
    v77 = v2->fields.exBattleUiParent;
    if ( bdata->fields.enemyMasterInfo )
    {
      if ( !byte_4D25F19 )
      {
        this = (BattlePerformanceEnemy_o *)sub_1C94098(&UnityEngine_Vector3_TypeInfo);
        byte_4D25F19 = 1;
      }
      static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
      x = static_fields->zeroVector.fields.x;
      y = static_fields->zeroVector.fields.y;
      z = static_fields->zeroVector.fields.z;
      if ( !v77 )
        goto LABEL_94;
    }
    else
    {
      this = (BattlePerformanceEnemy_o *)((__int64 (__fastcall *)(BaseEnemyParamPosData_o *, const MethodInfo *))v68->klass->vtable._8_get_ExBattleUiTrPos.methodPtr)(
                                           v68,
                                           v68->klass->vtable._8_get_ExBattleUiTrPos.method);
      if ( !v77 )
        goto LABEL_94;
    }
    UnityEngine_Transform__set_localPosition(v77, *(UnityEngine_Vector3_o *)&x, 0);
    v82 = v2->fields.perf;
    if ( !v82 )
      goto LABEL_94;
    this = (BattlePerformanceEnemy_o *)v82->fields.data;
    if ( !this )
      goto LABEL_94;
    this = (BattlePerformanceEnemy_o *)BattleData__HasEnemyExBattleUiPositionY((BattleData_o *)this, 0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v83 = v2->fields.perf;
      if ( !v83 )
        goto LABEL_94;
      this = (BattlePerformanceEnemy_o *)v83->fields.data;
      if ( !this )
        goto LABEL_94;
      v84 = v2->fields.exBattleUiParent;
      v85 = BattleData__EnemyExBattleUiPositionY((BattleData_o *)this, 0);
      if ( !v84 )
        goto LABEL_94;
      v98.fields.y = v85;
      v98.fields.x = 0.0;
      v98.fields.z = 0.0;
      UnityEngine_Transform__set_localPosition(v84, v98, 0);
    }
    svtParamList_k__BackingField = v2->fields._svtParamList_k__BackingField;
    if ( !svtParamList_k__BackingField )
      goto LABEL_94;
    max_length = svtParamList_k__BackingField->max_length;
    if ( max_length >= 1 )
    {
      v88 = 0;
      while ( 1 )
      {
        if ( v88 >= max_length )
          sub_1C942F8(this);
        this = (BattlePerformanceEnemy_o *)svtParamList_k__BackingField->m_Items[v88];
        if ( !this )
          break;
        BattleServantParamComponent__SetEnemyParamPosition((BattleServantParamComponent_o *)this, v68, 0);
        max_length = svtParamList_k__BackingField->max_length;
        if ( (int)++v88 >= max_length )
          return;
      }
LABEL_94:
      sub_1C942F0(this, method);
    }
  }
}


void BattlePerformanceEnemy__setTarget(
        BattlePerformanceEnemy_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  struct BattlePerformance_o *perf; // x8
  BattlePerformanceEnemy_o *v4; // x20
  struct BattlePerformance_o *v6; // x8
  struct BattleServantHeadUpComponent_array *svtHeadUpList_k__BackingField; // x8
  char v8; // w21
  __int64 v9; // x22
  int max_length; // w9
  struct BattleServantParamComponent_array *svtParamList_k__BackingField; // x8
  __int64 v12; // x22
  int v13; // w9
  bool v14; // w21

  if ( svtData )
  {
    perf = this->fields.perf;
    v4 = this;
    if ( !perf )
      goto LABEL_24;
    this = (BattlePerformanceEnemy_o *)perf->fields.logic;
    if ( !this )
      goto LABEL_24;
    BattleLogic__updateEnemyTargetLogic((BattleLogic_o *)this, 0);
    v6 = v4->fields.perf;
    if ( !v6 )
      goto LABEL_24;
    this = (BattlePerformanceEnemy_o *)v6->fields.data;
    if ( !this )
      goto LABEL_24;
    this = (BattlePerformanceEnemy_o *)BattleData__isTargetLock((BattleData_o *)this, 0);
    svtHeadUpList_k__BackingField = v4->fields._svtHeadUpList_k__BackingField;
    if ( !svtHeadUpList_k__BackingField )
      goto LABEL_24;
    v8 = (char)this;
    v9 = 0;
    while ( 1 )
    {
      max_length = svtHeadUpList_k__BackingField->max_length;
      if ( (int)v9 >= max_length )
        break;
      if ( (unsigned int)v9 >= max_length )
LABEL_25:
        sub_1C942F8(this);
      this = (BattlePerformanceEnemy_o *)svtHeadUpList_k__BackingField->m_Items[v9];
      if ( this )
      {
        BattleServantHeadUpComponent__setTargetMark(
          (BattleServantHeadUpComponent_o *)this,
          svtData->fields.uniqueId,
          v8 & 1,
          0);
        svtHeadUpList_k__BackingField = v4->fields._svtHeadUpList_k__BackingField;
        ++v9;
        if ( svtHeadUpList_k__BackingField )
          continue;
      }
      goto LABEL_24;
    }
    svtParamList_k__BackingField = v4->fields._svtParamList_k__BackingField;
    if ( !svtParamList_k__BackingField )
      goto LABEL_24;
    v12 = 0;
    while ( 1 )
    {
      v13 = svtParamList_k__BackingField->max_length;
      if ( (int)v12 >= v13 )
        break;
      if ( (unsigned int)v12 >= v13 )
        goto LABEL_25;
      this = (BattlePerformanceEnemy_o *)svtParamList_k__BackingField->m_Items[v12];
      if ( this )
      {
        BattleServantParamComponent__setTargetMark(
          (BattleServantParamComponent_o *)this,
          svtData->fields.uniqueId,
          v8 & 1,
          0);
        svtParamList_k__BackingField = v4->fields._svtParamList_k__BackingField;
        ++v12;
        if ( svtParamList_k__BackingField )
          continue;
      }
      goto LABEL_24;
    }
    this = (BattlePerformanceEnemy_o *)v4->fields.raidParam;
    if ( !this
      || (v14 = v8 & 1,
          BattleServantParamComponent__setTargetMark(
            (BattleServantParamComponent_o *)this,
            svtData->fields.uniqueId,
            v14,
            0),
          (this = (BattlePerformanceEnemy_o *)v4->fields.superbossParam) == 0) )
    {
LABEL_24:
      sub_1C942F0(this, svtData);
    }
    BattleServantParamComponent__setTargetMark((BattleServantParamComponent_o *)this, svtData->fields.uniqueId, v14, 0);
  }
}


void BattlePerformanceEnemy__setWinView(BattlePerformanceEnemy_o *this, const MethodInfo *method)
{
  struct BattleServantParamComponent_array *svtParamList_k__BackingField; // x8
  BattlePerformanceEnemy_o *v3; // x19
  __int64 v4; // x20
  int max_length; // w9

  svtParamList_k__BackingField = this->fields._svtParamList_k__BackingField;
  if ( !svtParamList_k__BackingField )
    goto LABEL_7;
  v3 = this;
  v4 = 0;
  while ( 1 )
  {
    max_length = svtParamList_k__BackingField->max_length;
    if ( (int)v4 >= max_length )
      break;
    if ( (unsigned int)v4 >= max_length )
      sub_1C942F8(this);
    this = (BattlePerformanceEnemy_o *)svtParamList_k__BackingField->m_Items[v4];
    if ( this )
    {
      this = (BattlePerformanceEnemy_o *)((__int64 (__fastcall *)(BattlePerformanceEnemy_o *, _QWORD, _QWORD, _QWORD))this->klass[1]._1.this_arg.data)(
                                           this,
                                           0,
                                           0,
                                           *(_QWORD *)&this->klass[1]._1.this_arg.bits);
      svtParamList_k__BackingField = v3->fields._svtParamList_k__BackingField;
      ++v4;
      if ( svtParamList_k__BackingField )
        continue;
    }
    goto LABEL_7;
  }
  this = (BattlePerformanceEnemy_o *)v3->fields.raidParam;
  if ( !this
    || (((void (__fastcall *)(BattlePerformanceEnemy_o *, _QWORD, _QWORD, _QWORD))this->klass[1]._1.this_arg.data)(
          this,
          0,
          0,
          *(_QWORD *)&this->klass[1]._1.this_arg.bits),
        (this = (BattlePerformanceEnemy_o *)v3->fields.superbossParam) == 0) )
  {
LABEL_7:
    sub_1C942F0(this, method);
  }
  ((void (__fastcall *)(BattlePerformanceEnemy_o *, _QWORD, _QWORD, _QWORD))this->klass[1]._1.this_arg.data)(
    this,
    0,
    0,
    *(_QWORD *)&this->klass[1]._1.this_arg.bits);
}


void BattlePerformanceEnemy__set_svtHeadUpList(
        BattlePerformanceEnemy_o *this,
        BattleServantHeadUpComponent_array *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._svtHeadUpList_k__BackingField = value;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields._svtHeadUpList_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BattlePerformanceEnemy__set_svtParamList(
        BattlePerformanceEnemy_o *this,
        BattleServantParamComponent_array *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._svtParamList_k__BackingField = value;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields._svtParamList_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BattlePerformanceEnemy__showSideEffect(
        BattlePerformanceEnemy_o *this,
        BattleActionData_BuffData_o *buffData,
        const MethodInfo *method)
{
  struct BattleServantParamComponent_array *svtParamList_k__BackingField; // x8
  BattlePerformanceEnemy_o *v4; // x20
  __int64 v6; // x21
  int max_length; // w9
  unsigned int v8; // w22
  struct BattleServantParamComponent_array *v9; // x8

  svtParamList_k__BackingField = this->fields._svtParamList_k__BackingField;
  if ( !svtParamList_k__BackingField )
    goto LABEL_13;
  v4 = this;
  v6 = 4;
  while ( 1 )
  {
    max_length = svtParamList_k__BackingField->max_length;
    v8 = v6 - 4;
    if ( (int)v6 - 4 >= max_length )
      break;
    if ( v8 >= max_length )
      goto LABEL_24;
    if ( !buffData )
      goto LABEL_13;
    this = (BattlePerformanceEnemy_o *)*((_QWORD *)&svtParamList_k__BackingField->obj.klass + v6);
    if ( !this )
      goto LABEL_13;
    this = (BattlePerformanceEnemy_o *)BattleServantParamComponent__checkId(
                                         (BattleServantParamComponent_o *)this,
                                         buffData->fields.targetId,
                                         0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v9 = v4->fields._svtParamList_k__BackingField;
      if ( !v9 )
        goto LABEL_13;
      if ( v8 >= LODWORD(v9->max_length) )
LABEL_24:
        sub_1C942F8(this);
      this = (BattlePerformanceEnemy_o *)*((_QWORD *)&v9->obj.klass + v6);
      if ( !this )
        goto LABEL_13;
      BattleServantParamComponent__showSideEffect((BattleServantParamComponent_o *)this, buffData, 0);
    }
    svtParamList_k__BackingField = v4->fields._svtParamList_k__BackingField;
    ++v6;
    if ( !svtParamList_k__BackingField )
      goto LABEL_13;
  }
  if ( !buffData )
    goto LABEL_13;
  this = (BattlePerformanceEnemy_o *)v4->fields.raidParam;
  if ( !this )
    goto LABEL_13;
  if ( BattleServantParamComponent__checkId((BattleServantParamComponent_o *)this, buffData->fields.targetId, 0) )
  {
    this = (BattlePerformanceEnemy_o *)v4->fields.raidParam;
    if ( !this )
      goto LABEL_13;
    BattleServantParamComponent__showSideEffect((BattleServantParamComponent_o *)this, buffData, 0);
  }
  this = (BattlePerformanceEnemy_o *)v4->fields.superbossParam;
  if ( !this )
LABEL_13:
    sub_1C942F0(this, buffData);
  if ( BattleServantParamComponent__checkId((BattleServantParamComponent_o *)this, buffData->fields.targetId, 0) )
  {
    this = (BattlePerformanceEnemy_o *)v4->fields.superbossParam;
    if ( this )
    {
      BattleServantParamComponent__showSideEffect((BattleServantParamComponent_o *)this, buffData, 0);
      return;
    }
    goto LABEL_13;
  }
}


void BattlePerformanceEnemy__startAction(BattlePerformanceEnemy_o *this, const MethodInfo *method)
{
  struct BattleServantHeadUpComponent_array *svtHeadUpList_k__BackingField; // x8
  BattlePerformanceEnemy_o *v3; // x19
  __int64 v4; // x20
  int max_length; // w9

  svtHeadUpList_k__BackingField = this->fields._svtHeadUpList_k__BackingField;
  if ( !svtHeadUpList_k__BackingField )
LABEL_7:
    sub_1C942F0(this, method);
  v3 = this;
  v4 = 0;
  while ( 1 )
  {
    max_length = svtHeadUpList_k__BackingField->max_length;
    if ( (int)v4 >= max_length )
      break;
    if ( (unsigned int)v4 >= max_length )
      sub_1C942F8(this);
    this = (BattlePerformanceEnemy_o *)svtHeadUpList_k__BackingField->m_Items[v4];
    if ( this )
    {
      BattleServantHeadUpComponent__setModeAction((BattleServantHeadUpComponent_o *)this, 0);
      svtHeadUpList_k__BackingField = v3->fields._svtHeadUpList_k__BackingField;
      ++v4;
      if ( svtHeadUpList_k__BackingField )
        continue;
    }
    goto LABEL_7;
  }
}


void BattlePerformanceEnemy__startCommand(BattlePerformanceEnemy_o *this, const MethodInfo *method)
{
  struct BattleServantHeadUpComponent_array *svtHeadUpList_k__BackingField; // x8
  BattlePerformanceEnemy_o *v3; // x19
  __int64 v4; // x20
  int max_length; // w9

  svtHeadUpList_k__BackingField = this->fields._svtHeadUpList_k__BackingField;
  if ( !svtHeadUpList_k__BackingField )
LABEL_7:
    sub_1C942F0(this, method);
  v3 = this;
  v4 = 0;
  while ( 1 )
  {
    max_length = svtHeadUpList_k__BackingField->max_length;
    if ( (int)v4 >= max_length )
      break;
    if ( (unsigned int)v4 >= max_length )
      sub_1C942F8(this);
    this = (BattlePerformanceEnemy_o *)svtHeadUpList_k__BackingField->m_Items[v4];
    if ( this )
    {
      BattleServantHeadUpComponent__setModeCommand((BattleServantHeadUpComponent_o *)this, 0);
      svtHeadUpList_k__BackingField = v3->fields._svtHeadUpList_k__BackingField;
      ++v4;
      if ( svtHeadUpList_k__BackingField )
        continue;
    }
    goto LABEL_7;
  }
}


void BattlePerformanceEnemy__startSkill(BattlePerformanceEnemy_o *this, const MethodInfo *method)
{
  struct BattleServantHeadUpComponent_array *svtHeadUpList_k__BackingField; // x8
  BattlePerformanceEnemy_o *v3; // x19
  __int64 v4; // x20
  int max_length; // w9

  svtHeadUpList_k__BackingField = this->fields._svtHeadUpList_k__BackingField;
  if ( !svtHeadUpList_k__BackingField )
LABEL_7:
    sub_1C942F0(this, method);
  v3 = this;
  v4 = 0;
  while ( 1 )
  {
    max_length = svtHeadUpList_k__BackingField->max_length;
    if ( (int)v4 >= max_length )
      break;
    if ( (unsigned int)v4 >= max_length )
      sub_1C942F8(this);
    this = (BattlePerformanceEnemy_o *)svtHeadUpList_k__BackingField->m_Items[v4];
    if ( this )
    {
      BattleServantHeadUpComponent__setTargetRoot((BattleServantHeadUpComponent_o *)this, 0, 0);
      svtHeadUpList_k__BackingField = v3->fields._svtHeadUpList_k__BackingField;
      ++v4;
      if ( svtHeadUpList_k__BackingField )
        continue;
    }
    goto LABEL_7;
  }
}


void BattlePerformanceEnemy__startTac(BattlePerformanceEnemy_o *this, const MethodInfo *method)
{
  struct BattleServantHeadUpComponent_array *svtHeadUpList_k__BackingField; // x8
  BattlePerformanceEnemy_o *v3; // x19
  __int64 v4; // x20
  int max_length; // w9

  svtHeadUpList_k__BackingField = this->fields._svtHeadUpList_k__BackingField;
  if ( !svtHeadUpList_k__BackingField )
LABEL_7:
    sub_1C942F0(this, method);
  v3 = this;
  v4 = 0;
  while ( 1 )
  {
    max_length = svtHeadUpList_k__BackingField->max_length;
    if ( (int)v4 >= max_length )
      break;
    if ( (unsigned int)v4 >= max_length )
      sub_1C942F8(this);
    this = (BattlePerformanceEnemy_o *)svtHeadUpList_k__BackingField->m_Items[v4];
    if ( this )
    {
      BattleServantHeadUpComponent__setModeTac((BattleServantHeadUpComponent_o *)this, 0);
      svtHeadUpList_k__BackingField = v3->fields._svtHeadUpList_k__BackingField;
      ++v4;
      if ( svtHeadUpList_k__BackingField )
        continue;
    }
    goto LABEL_7;
  }
}


void BattlePerformanceEnemy__startWave(BattlePerformanceEnemy_o *this, const MethodInfo *method)
{
  struct BattleServantHeadUpComponent_array *svtHeadUpList_k__BackingField; // x8
  BattlePerformanceEnemy_o *v3; // x19
  __int64 v4; // x20
  int max_length; // w9

  svtHeadUpList_k__BackingField = this->fields._svtHeadUpList_k__BackingField;
  if ( !svtHeadUpList_k__BackingField )
LABEL_7:
    sub_1C942F0(this, method);
  v3 = this;
  v4 = 0;
  while ( 1 )
  {
    max_length = svtHeadUpList_k__BackingField->max_length;
    if ( (int)v4 >= max_length )
      break;
    if ( (unsigned int)v4 >= max_length )
      sub_1C942F8(this);
    this = (BattlePerformanceEnemy_o *)svtHeadUpList_k__BackingField->m_Items[v4];
    if ( this )
    {
      BattleServantHeadUpComponent__setModeWaveStart((BattleServantHeadUpComponent_o *)this, 0);
      svtHeadUpList_k__BackingField = v3->fields._svtHeadUpList_k__BackingField;
      ++v4;
      if ( svtHeadUpList_k__BackingField )
        continue;
    }
    goto LABEL_7;
  }
}


void BattlePerformanceEnemy__updateBuff(BattlePerformanceEnemy_o *this, const MethodInfo *method)
{
  ;
}


void BattlePerformanceEnemy__updateRaidHp(BattlePerformanceEnemy_o *this, const MethodInfo *method)
{
  BattleServantRaidParamComponent_o *raidParam; // x0

  raidParam = this->fields.raidParam;
  if ( !raidParam )
    sub_1C942F0(0, method);
  BattleServantRaidParamComponent__updateRaidHp(raidParam, 0);
}


void BattlePerformanceEnemy__updateRaidInfos(
        BattlePerformanceEnemy_o *this,
        BattleRaidInfo_array *infos,
        bool fixUpdate,
        const MethodInfo *method)
{
  struct BattleServantRaidParamComponent_o *raidParam; // x8
  struct BattleServantData_o *data; // x22
  BattleRaidInfo_array *v6; // x20
  int max_length; // w8
  BattlePerformanceEnemy_o *v8; // x19
  unsigned int v9; // w23
  bool v10; // w21

  raidParam = this->fields.raidParam;
  if ( !raidParam )
    goto LABEL_13;
  data = raidParam->fields.data;
  if ( data )
  {
    v6 = infos;
    if ( !infos )
      goto LABEL_13;
    max_length = infos->max_length;
    if ( max_length >= 1 )
    {
      v8 = this;
      v9 = 0;
      v10 = fixUpdate;
      while ( 1 )
      {
        if ( v9 >= max_length )
          sub_1C942F8(this);
        infos = (BattleRaidInfo_array *)v6->m_Items[v9];
        if ( !infos )
          break;
        if ( HIDWORD(infos->bounds) == data->fields.uniqueId )
        {
          this = (BattlePerformanceEnemy_o *)v8->fields.raidParam;
          if ( !this )
            break;
          BattleServantRaidParamComponent__updateRaidInfo(
            (BattleServantRaidParamComponent_o *)this,
            (BattleRaidInfo_o *)infos,
            v10,
            0);
        }
        max_length = v6->max_length;
        if ( (int)++v9 >= max_length )
          return;
      }
LABEL_13:
      sub_1C942F0(this, infos);
    }
  }
}


void BattlePerformanceEnemy__updateStateString(BattlePerformanceEnemy_o *this, const MethodInfo *method)
{
  BattleServantSuperBossParamComponent_o *superbossParam; // x0

  superbossParam = this->fields.superbossParam;
  if ( !superbossParam )
    sub_1C942F0(0, method);
  BattleServantSuperBossParamComponent__updateStateString(superbossParam, 0);
}


void BattlePerformanceEnemy__updateSuperBossInfos(
        BattlePerformanceEnemy_o *this,
        BattleSuperBossInfo_array *infos,
        bool fixUpdate,
        const MethodInfo *method)
{
  struct BattleServantSuperBossParamComponent_o *superbossParam; // x8
  struct BattleServantData_o *data; // x22
  BattleSuperBossInfo_array *v6; // x20
  int max_length; // w8
  BattlePerformanceEnemy_o *v8; // x19
  unsigned int v9; // w23
  bool v10; // w21

  superbossParam = this->fields.superbossParam;
  if ( !superbossParam )
    goto LABEL_13;
  data = superbossParam->fields.data;
  if ( data )
  {
    v6 = infos;
    if ( !infos )
      goto LABEL_13;
    max_length = infos->max_length;
    if ( max_length >= 1 )
    {
      v8 = this;
      v9 = 0;
      v10 = fixUpdate;
      while ( 1 )
      {
        if ( v9 >= max_length )
          sub_1C942F8(this);
        infos = (BattleSuperBossInfo_array *)v6->m_Items[v9];
        if ( !infos )
          break;
        if ( HIDWORD(infos->bounds) == data->fields.uniqueId )
        {
          this = (BattlePerformanceEnemy_o *)v8->fields.superbossParam;
          if ( !this )
            break;
          BattleServantSuperBossParamComponent__updateSuperBossInfo(
            (BattleServantSuperBossParamComponent_o *)this,
            (BattleSuperBossInfo_o *)infos,
            v10,
            0);
        }
        max_length = v6->max_length;
        if ( (int)++v9 >= max_length )
          return;
      }
LABEL_13:
      sub_1C942F0(this, infos);
    }
  }
}


void BattlePerformanceEnemy__updateView(BattlePerformanceEnemy_o *this, const MethodInfo *method)
{
  struct BattleServantParamComponent_array *svtParamList_k__BackingField; // x8
  BattlePerformanceEnemy_o *v3; // x19
  __int64 v4; // x20
  int max_length; // w9
  struct BattleServantHeadUpComponent_array *svtHeadUpList_k__BackingField; // x8
  __int64 v7; // x20
  int v8; // w9
  struct BattleData_o *bdata; // x8
  struct BattleServantParamComponent_array *v10; // x8
  __int64 v11; // x21
  int v12; // w9
  unsigned int v13; // w24
  struct BattleServantParamComponent_array *v14; // x8
  BattlePerformanceEnemy_o *v15; // x20
  struct BattleServantParamComponent_array *v16; // x8
  float y; // s8
  float v18; // s0
  float v19; // s1
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4

  svtParamList_k__BackingField = this->fields._svtParamList_k__BackingField;
  if ( !svtParamList_k__BackingField )
    goto LABEL_36;
  v3 = this;
  v4 = 0;
  while ( 1 )
  {
    max_length = svtParamList_k__BackingField->max_length;
    if ( (int)v4 >= max_length )
      break;
    if ( (unsigned int)v4 >= max_length )
LABEL_38:
      sub_1C942F8(this);
    this = (BattlePerformanceEnemy_o *)svtParamList_k__BackingField->m_Items[v4];
    if ( this )
    {
      BattleServantParamComponent__updateView((BattleServantParamComponent_o *)this, 0);
      svtParamList_k__BackingField = v3->fields._svtParamList_k__BackingField;
      ++v4;
      if ( svtParamList_k__BackingField )
        continue;
    }
    goto LABEL_36;
  }
  svtHeadUpList_k__BackingField = v3->fields._svtHeadUpList_k__BackingField;
  if ( !svtHeadUpList_k__BackingField )
    goto LABEL_36;
  v7 = 0;
  while ( 1 )
  {
    v8 = svtHeadUpList_k__BackingField->max_length;
    if ( (int)v7 >= v8 )
      break;
    if ( (unsigned int)v7 >= v8 )
      goto LABEL_38;
    this = (BattlePerformanceEnemy_o *)svtHeadUpList_k__BackingField->m_Items[v7];
    if ( this )
    {
      BattleServantHeadUpComponent__updateView((BattleServantHeadUpComponent_o *)this, 0);
      svtHeadUpList_k__BackingField = v3->fields._svtHeadUpList_k__BackingField;
      ++v7;
      if ( svtHeadUpList_k__BackingField )
        continue;
    }
    goto LABEL_36;
  }
  this = (BattlePerformanceEnemy_o *)v3->fields.raidParam;
  if ( !this )
    goto LABEL_36;
  BattleServantParamComponent__updateView((BattleServantParamComponent_o *)this, 0);
  this = (BattlePerformanceEnemy_o *)v3->fields.superbossParam;
  if ( !this )
    goto LABEL_36;
  BattleServantParamComponent__updateView((BattleServantParamComponent_o *)this, 0);
  this = (BattlePerformanceEnemy_o *)v3->fields.bdata;
  if ( !this )
    goto LABEL_36;
  this = (BattlePerformanceEnemy_o *)BattleData__IsWarBoard((BattleData_o *)this, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
    return;
  bdata = v3->fields.bdata;
  if ( !bdata )
    goto LABEL_36;
  if ( !bdata->fields.enemyMasterInfo )
    return;
  v10 = v3->fields._svtParamList_k__BackingField;
  if ( !v10 )
LABEL_36:
    sub_1C942F0(this, method);
  v11 = 4;
  while ( 1 )
  {
    v12 = v10->max_length;
    v13 = v11 - 4;
    if ( (int)v11 - 4 >= v12 )
      break;
    if ( v13 >= v12 )
      goto LABEL_38;
    this = (BattlePerformanceEnemy_o *)*((_QWORD *)&v10->obj.klass + v11);
    if ( this )
    {
      this = (BattlePerformanceEnemy_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
      v14 = v3->fields._svtParamList_k__BackingField;
      if ( v14 )
      {
        if ( v13 >= LODWORD(v14->max_length) )
          goto LABEL_38;
        v15 = this;
        this = (BattlePerformanceEnemy_o *)*((_QWORD *)&v14->obj.klass + v11);
        if ( this )
        {
          this = (BattlePerformanceEnemy_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
          if ( this )
          {
            localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
            v16 = v3->fields._svtParamList_k__BackingField;
            if ( v16 )
            {
              if ( v13 >= LODWORD(v16->max_length) )
                goto LABEL_38;
              this = (BattlePerformanceEnemy_o *)*((_QWORD *)&v16->obj.klass + v11);
              if ( this )
              {
                y = localPosition.fields.y;
                this = (BattlePerformanceEnemy_o *)UnityEngine_Component__get_transform(
                                                     (UnityEngine_Component_o *)this,
                                                     0);
                if ( this )
                {
                  v21 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
                  if ( v15 )
                  {
                    v18 = (float)((float)(int)v13 * -200.0) + 178.0;
                    v19 = y;
                    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)v15, v21, 0);
                    v10 = v3->fields._svtParamList_k__BackingField;
                    ++v11;
                    if ( v10 )
                      continue;
                  }
                }
              }
            }
          }
        }
      }
    }
    goto LABEL_36;
  }
}


void BattlePerformanceEnemy__EnumerateStatusUi_d__33___ctor(
        BattlePerformanceEnemy__EnumerateStatusUi_d__33_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
  this->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0);
}


bool BattlePerformanceEnemy__EnumerateStatusUi_d__33__MoveNext(
        BattlePerformanceEnemy__EnumerateStatusUi_d__33_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct BattlePerformanceEnemy_o *_4__this; // x8
  BattlePerformanceEnemy__EnumerateStatusUi_d__33_o *v9; // x19
  struct BattleServantParamComponent_o *raidParam; // x1
  struct BattleServantParamComponent_o **p__2__current; // x19
  bool result; // w0
  struct BattleServantParamComponent_array *svtParamList_k__BackingField; // x1
  int32_t v14; // w8
  struct BattleServantParamComponent_o *superbossParam; // x1
  struct BattleServantParamComponent_o **v16; // x19
  int v17; // w8
  int32_t _7__wrap2; // w8
  struct BattleServantParamComponent_array *_7__wrap1; // x9
  int32_t max_length; // w10
  struct BattleServantParamComponent_o *v21; // x1

  _4__this = this->fields.__4__this;
  v9 = this;
  switch ( this->fields.__1__state )
  {
    case 0:
      this->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_16;
      raidParam = (struct BattleServantParamComponent_o *)_4__this->fields.raidParam;
      this->fields.__2__current = raidParam;
      p__2__current = &this->fields.__2__current;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.__2__current, (int32_t)raidParam, v2, v3, v4, v5, v6, v7);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
      return result;
    case 1:
      this->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_16;
      superbossParam = (struct BattleServantParamComponent_o *)_4__this->fields.superbossParam;
      this->fields.__2__current = superbossParam;
      v16 = &this->fields.__2__current;
      sub_1C9403C(
        (GrandQuestFolderBoardItem_o *)&this->fields.__2__current,
        (int32_t)superbossParam,
        v2,
        v3,
        v4,
        v5,
        v6,
        v7);
      v17 = 2;
      goto LABEL_13;
    case 2:
      this->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_16;
      svtParamList_k__BackingField = _4__this->fields._svtParamList_k__BackingField;
      this->fields.__7__wrap1 = svtParamList_k__BackingField;
      sub_1C9403C(
        (GrandQuestFolderBoardItem_o *)&this->fields.__7__wrap1,
        (int32_t)svtParamList_k__BackingField,
        v2,
        v3,
        v4,
        v5,
        v6,
        v7);
      v14 = 0;
      v9->fields.__7__wrap2 = 0;
LABEL_9:
      this = (BattlePerformanceEnemy__EnumerateStatusUi_d__33_o *)&v9->fields.__7__wrap1;
      _7__wrap1 = v9->fields.__7__wrap1;
      if ( !_7__wrap1 )
LABEL_16:
        sub_1C942F0(this, method);
      max_length = _7__wrap1->max_length;
      if ( v14 >= max_length )
      {
        this->klass = 0;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)this, 0, v2, v3, v4, v5, v6, v7);
        return 0;
      }
      else
      {
        if ( v14 >= (unsigned int)max_length )
          sub_1C942F8(this);
        v21 = _7__wrap1->m_Items[v14];
        v9->fields.__2__current = v21;
        v16 = &v9->fields.__2__current;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)v16, (int32_t)v21, v2, v3, v4, v5, v6, v7);
        v17 = 3;
LABEL_13:
        *((_DWORD *)v16 - 2) = v17;
        return 1;
      }
    case 3:
      _7__wrap2 = this->fields.__7__wrap2;
      this->fields.__1__state = -1;
      v14 = _7__wrap2 + 1;
      this->fields.__7__wrap2 = v14;
      goto LABEL_9;
    default:
      return 0;
  }
}


System_Collections_Generic_IEnumerator_BattleServantParamComponent__o *BattlePerformanceEnemy__EnumerateStatusUi_d__33__System_Collections_Generic_IEnumerable_BattleServantParamComponent__GetEnumerator(
        BattlePerformanceEnemy__EnumerateStatusUi_d__33_o *this,
        const MethodInfo *method)
{
  int32_t l__initialThreadId; // w20
  __int64 v4; // x20
  struct BattlePerformanceEnemy_o *_4__this; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7

  if ( (byte_4D2FEBD & 1) == 0 )
  {
    sub_1C94098(&BattlePerformanceEnemy__EnumerateStatusUi_d__33_TypeInfo);
    byte_4D2FEBD = 1;
  }
  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0)) )
  {
    this->fields.__1__state = 0;
  }
  else
  {
    v4 = sub_1C942E4(BattlePerformanceEnemy__EnumerateStatusUi_d__33_TypeInfo);
    System_Object___ctor((Il2CppObject *)v4, 0);
    *(_DWORD *)(v4 + 16) = 0;
    *(_DWORD *)(v4 + 32) = System_Environment__get_CurrentManagedThreadId(0);
    _4__this = this->fields.__4__this;
    *(_QWORD *)(v4 + 40) = _4__this;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)(v4 + 40), (int32_t)_4__this, v6, v7, v8, v9, v10, v11);
    return (System_Collections_Generic_IEnumerator_BattleServantParamComponent__o *)v4;
  }
  return (System_Collections_Generic_IEnumerator_BattleServantParamComponent__o *)this;
}


BattleServantParamComponent_o *BattlePerformanceEnemy__EnumerateStatusUi_d__33__System_Collections_Generic_IEnumerator_BattleServantParamComponent__get_Current(
        BattlePerformanceEnemy__EnumerateStatusUi_d__33_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn BattlePerformanceEnemy__EnumerateStatusUi_d__33__System_Collections_IEnumerator_Reset(
        BattlePerformanceEnemy__EnumerateStatusUi_d__33_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C940AC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C942E4(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C940AC(&Method_BattlePerformanceEnemy__EnumerateStatusUi_d__33_System_Collections_IEnumerator_Reset__);
  sub_1C941C0(v3, v4);
}


Il2CppObject *BattlePerformanceEnemy__EnumerateStatusUi_d__33__System_Collections_IEnumerator_get_Current(
        BattlePerformanceEnemy__EnumerateStatusUi_d__33_o *this,
        const MethodInfo *method)
{
  return (Il2CppObject *)this->fields.__2__current;
}


void BattlePerformanceEnemy__EnumerateStatusUi_d__33__System_IDisposable_Dispose(
        BattlePerformanceEnemy__EnumerateStatusUi_d__33_o *this,
        const MethodInfo *method)
{
  ;
}


void BattlePerformanceEnemy___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D2FEBB & 1) == 0 )
  {
    sub_1C94098(&BattlePerformanceEnemy___c_TypeInfo);
    byte_4D2FEBB = 1;
  }
  v1 = (Il2CppObject *)sub_1C942E4(BattlePerformanceEnemy___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattlePerformanceEnemy___c_TypeInfo->static_fields->__9 = (struct BattlePerformanceEnemy___c_o *)v1;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)BattlePerformanceEnemy___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BattlePerformanceEnemy___c___ctor(BattlePerformanceEnemy___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattlePerformanceEnemy___c___EnumerateUsingStatusUi_b__34_0(
        BattlePerformanceEnemy___c_o *this,
        BattleServantParamComponent_o *x,
        const MethodInfo *method)
{
  _BOOL8 v4; // x0
  __int64 v5; // x1

  if ( (byte_4D2FEBC & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D2FEBC = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)x, 0, 0);
  if ( !v4 )
    return 0;
  if ( !x )
    sub_1C942F0(v4, v5);
  return x->fields.data != 0;
}


void BattlePerformanceEnemy___c__DisplayClass35_0___ctor(
        BattlePerformanceEnemy___c__DisplayClass35_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattlePerformanceEnemy___c__DisplayClass35_0___GetStatusUiBySvtData_b__0(
        BattlePerformanceEnemy___c__DisplayClass35_0_o *this,
        BattleServantParamComponent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C942F0(this, 0);
  return BattleServantParamComponent__IsMatchOwner(x, this->fields.svtData, 0);
}


void BattlePerformanceEnemy___c__DisplayClass67_0___ctor(
        BattlePerformanceEnemy___c__DisplayClass67_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattlePerformanceEnemy___c__DisplayClass67_0___GetSvtParamComponent_b__0(
        BattlePerformanceEnemy___c__DisplayClass67_0_o *this,
        BattleServantParamComponent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C942F0(this, 0);
  return BattleServantParamComponent__checkId(x, this->fields.uniqueId, 0);
}