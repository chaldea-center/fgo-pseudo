void BattlePerformanceEnemy___ctor(BattlePerformanceEnemy_o *this, const MethodInfo *method)
{
  struct System_Int32_array *v3; // x0
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_5974035 & 1) == 0 )
  {
    sub_2213A60(&int___TypeInfo);
    byte_5974035 = 1;
  }
  v3 = (struct System_Int32_array *)sub_2213B20(int___TypeInfo, 3);
  this->fields.list_ID = v3;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.list_ID, (int32_t)v3, v4, v5, v6, v7, v8, v9);
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
  __int64 v13; // x1
  int32_t v14; // w22
  __int64 v15; // x1
  System_String_o *StatusUiPath; // x22
  AssetData_o *AssetStorage; // x0
  __int64 v18; // x1
  Il2CppObject *Object_object__58532980; // x22
  Il2CppObject *Component_object; // x0
  __int64 v21; // x1
  Il2CppClass *klass; // x8
  unsigned int naturalAligment; // w9
  __int64 v24; // x11
  __int64 v25; // x11
  UnityEngine_Transform_o **p_raidTr; // x8
  UnityEngine_Transform_o *v27; // x23

  v6 = this;
  if ( (byte_5974022 & 1) == 0 )
  {
    sub_2213A60(&Method_AssetData_GetObject_GameObject____91708320);
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&Method_BasicHelper_IndexValue_BattleServantParamComponent___);
    sub_2213A60(&BattleServantRaidParamComponent_TypeInfo);
    sub_2213A60(&BattleServantSuperBossParamComponent_TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_BattleServantParamComponent___);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject____91801432);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&ServantAssetLoadManager_TypeInfo);
    this = (BattlePerformanceEnemy_o *)sub_2213A60(&StringLiteral_13630/*"StatusUi"*/);
    byte_5974022 = 1;
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
                                                           (const MethodInfo_3814CA8 *)Method_BasicHelper_IndexValue_BattleServantParamComponent___);
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
    v14 = StatusUiType;
    if ( !*(&ServantAssetLoadManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, v13);
    StatusUiPath = ServantAssetLoadManager__GetStatusUiPath(v14, 0);
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v15);
    AssetStorage = AssetManager__getAssetStorage(StatusUiPath, 0);
    if ( AssetStorage )
      Object_object__58532980 = AssetData__GetObject_object__58532980(
                                  AssetStorage,
                                  (System_String_o *)StringLiteral_13630/*"StatusUi"*/,
                                  (const MethodInfo_37D2474 *)Method_AssetData_GetObject_GameObject____91708320);
    else
      Object_object__58532980 = 0;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18);
    this = (BattlePerformanceEnemy_o *)UnityEngine_Object__op_Equality(
                                         (UnityEngine_Object_o *)Object_object__58532980,
                                         0,
                                         0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
LABEL_22:
      DefaultStatusUi = BattlePerformanceEnemy__GetDefaultStatusUi(v6, svtData, index, v8);
      goto LABEL_23;
    }
    if ( !Object_object__58532980 )
LABEL_38:
      sub_2213CDC(this, svtData);
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)Object_object__58532980,
                         (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_BattleServantParamComponent___);
    if ( !Component_object )
      goto LABEL_30;
    klass = Component_object->klass;
    naturalAligment = Component_object->klass->_2.naturalAligment;
    v24 = BattleServantRaidParamComponent_TypeInfo->_2.naturalAligment;
    if ( naturalAligment >= (unsigned int)v24
      && (BattleServantRaidParamComponent_c *)klass->_2.typeHierarchy[v24 - 1] == BattleServantRaidParamComponent_TypeInfo )
    {
      p_raidTr = &v6->fields.raidTr;
      goto LABEL_32;
    }
    v25 = BattleServantSuperBossParamComponent_TypeInfo->_2.naturalAligment;
    if ( naturalAligment >= (unsigned int)v25
      && (BattleServantSuperBossParamComponent_c *)klass->_2.typeHierarchy[v25 - 1] == BattleServantSuperBossParamComponent_TypeInfo )
    {
      p_raidTr = &v6->fields.superBossTr;
    }
    else
    {
LABEL_30:
      p_raidTr = &v6->fields.nomalTr;
      if ( index >= 3 )
        p_raidTr = &v6->fields.normalBackRowTransform;
    }
LABEL_32:
    v27 = *p_raidTr;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21);
    this = (BattlePerformanceEnemy_o *)UnityEngine_Object__Instantiate_object__59717116(
                                         Object_object__58532980,
                                         v27,
                                         (const MethodInfo_38F35FC *)Method_UnityEngine_Object_Instantiate_GameObject____91801432);
    if ( this )
    {
      DefaultStatusUi = (BattleServantParamComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                           (UnityEngine_GameObject_o *)this,
                                                           (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_BattleServantParamComponent___);
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
LABEL_11:
    sub_2213CDC(this, *(_QWORD *)&uniqueId);
  max_length = svtParamList_k__BackingField->max_length;
  v5 = uniqueId;
  *(_QWORD *)&uniqueId = max_length & (unsigned int)~(max_length >> 31);
  if ( max_length >= 1 )
  {
    v6 = 0;
    while ( 1 )
    {
      if ( max_length == v6 )
        sub_2213CE4(this);
      v7 = svtParamList_k__BackingField->m_Items[v6];
      if ( !v7 )
        goto LABEL_11;
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
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_5974026 & 1) == 0 )
  {
    sub_2213A60(&BattlePerformanceEnemy__EnumerateStatusUi_d__36_TypeInfo);
    byte_5974026 = 1;
  }
  v3 = sub_2213CCC(BattlePerformanceEnemy__EnumerateStatusUi_d__36_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = -2;
  *(_DWORD *)(v3 + 32) = System_Environment__get_CurrentManagedThreadId(0);
  *(_QWORD *)(v3 + 40) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 40), (int32_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_Generic_IEnumerable_BattleServantParamComponent__o *)v3;
}


System_Collections_Generic_IEnumerable_BattleServantParamComponent__o *BattlePerformanceEnemy__EnumerateUsingStatusUi(
        BattlePerformanceEnemy_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_BattleServantParamComponent__o *v3; // x0
  __int64 v4; // x1
  BattlePerformanceEnemy___c_c *v5; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v6; // x19
  struct BattlePerformanceEnemy___c_StaticFields *static_fields; // x9
  System_Func_object__bool__o *_9__37_0; // x20
  Il2CppObject *v9; // x21
  struct BattlePerformanceEnemy___c_StaticFields *v10; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7

  if ( (byte_5974027 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_Where_BattleServantParamComponent___);
    sub_2213A60(&System_Func_BattleServantParamComponent__bool__TypeInfo);
    sub_2213A60(&Method_BattlePerformanceEnemy___c__EnumerateUsingStatusUi_b__37_0__);
    sub_2213A60(&BattlePerformanceEnemy___c_TypeInfo);
    byte_5974027 = 1;
  }
  v3 = BattlePerformanceEnemy__EnumerateStatusUi(this, method);
  v5 = BattlePerformanceEnemy___c_TypeInfo;
  v6 = (System_Collections_Generic_IEnumerable_TSource__o *)v3;
  if ( !*(&BattlePerformanceEnemy___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattlePerformanceEnemy___c_TypeInfo, v4);
    v5 = BattlePerformanceEnemy___c_TypeInfo;
  }
  static_fields = v5->static_fields;
  _9__37_0 = (System_Func_object__bool__o *)static_fields->__9__37_0;
  if ( !_9__37_0 )
  {
    if ( !*(&v5->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v5, v4);
      static_fields = BattlePerformanceEnemy___c_TypeInfo->static_fields;
    }
    v9 = (Il2CppObject *)static_fields->__9;
    _9__37_0 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_BattleServantParamComponent__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__37_0,
      v9,
      Method_BattlePerformanceEnemy___c__EnumerateUsingStatusUi_b__37_0__,
      0);
    v10 = BattlePerformanceEnemy___c_TypeInfo->static_fields;
    v10->__9__37_0 = (struct System_Func_BattleServantParamComponent__bool__o *)_9__37_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v10->__9__37_0, (int32_t)_9__37_0, v11, v12, v13, v14, v15, v16);
  }
  return (System_Collections_Generic_IEnumerable_BattleServantParamComponent__o *)System_Linq_Enumerable__Where_object_(
                                                                                    v6,
                                                                                    (System_Func_TSource__bool__o *)_9__37_0,
                                                                                    (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_BattleServantParamComponent___);
}


bool BattlePerformanceEnemy__ExistsFieldNormalEnemy(BattlePerformanceEnemy_o *this, const MethodInfo *method)
{
  void *svtParamList_k__BackingField; // x0
  int32_t v4; // w20
  int32_t v5; // w24
  __int64 v6; // x1
  Il2CppObject *v7; // x21

  if ( (byte_5974031 & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_IndexValue_BattleServantParamComponent___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974031 = 1;
  }
  svtParamList_k__BackingField = this->fields._svtParamList_k__BackingField;
  if ( !svtParamList_k__BackingField )
LABEL_13:
    sub_2213CDC(svtParamList_k__BackingField, method);
  v4 = 0;
  while ( 1 )
  {
    v5 = *((_DWORD *)svtParamList_k__BackingField + 6);
    if ( v4 >= v5 )
      return v4 < v5;
    v7 = BasicHelper__IndexValue_object_(
           (System_Object_array *)svtParamList_k__BackingField,
           v4,
           0,
           (const MethodInfo_3814CA8 *)Method_BasicHelper_IndexValue_BattleServantParamComponent___);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
    svtParamList_k__BackingField = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v7, 0, 0);
    if ( ((unsigned __int8)svtParamList_k__BackingField & 1) != 0 )
    {
      if ( !v7 )
        goto LABEL_13;
      svtParamList_k__BackingField = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v7, 0);
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
  __int64 v5; // x1
  Il2CppObject *v6; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v8; // x1
  bool v9; // cf

  if ( (byte_597402F & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_IndexValue_BattleServantParamComponent___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_597402F = 1;
  }
  v3 = 0;
  v4 = 1;
  do
  {
    v6 = BasicHelper__IndexValue_object_(
           (System_Object_array *)this->fields._svtParamList_k__BackingField,
           v3,
           0,
           (const MethodInfo_3814CA8 *)Method_BasicHelper_IndexValue_BattleServantParamComponent___);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v6, 0, 0);
    if ( ((unsigned __int8)gameObject & 1) != 0 )
    {
      if ( !v6 || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v6, 0)) == 0 )
        sub_2213CDC(gameObject, v8);
      if ( UnityEngine_GameObject__get_activeSelf(gameObject, 0) )
        break;
    }
    v9 = v3++ >= 2;
    v4 = !v9;
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
  if ( (byte_5974029 & 1) == 0 )
  {
    this = (BattlePerformanceEnemy_o *)sub_2213A60(&Method_BasicHelper_IndexValue_BattleServantParamComponent___);
    byte_5974029 = 1;
  }
  if ( !svtData )
    sub_2213CDC(this, svtData);
  if ( svtData->fields.isRaid )
    return (BattleServantParamComponent_o *)v6->fields.defaultRaidParam;
  if ( BattleServantData__get_IsSuperBossUi(svtData, 0) )
    return (BattleServantParamComponent_o *)v6->fields.defaultSuperBossParam;
  return (BattleServantParamComponent_o *)BasicHelper__IndexValue_object_(
                                            (System_Object_array *)v6->fields.defaultSvtParamList,
                                            index,
                                            0,
                                            (const MethodInfo_3814CA8 *)Method_BasicHelper_IndexValue_BattleServantParamComponent___);
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
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  BattleServantData_o **v14; // x22
  System_Collections_Generic_IEnumerable_TSource__o *svtParamList_k__BackingField; // x19
  System_Func_object__bool__o *v17; // x21

  if ( (byte_5974028 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_FirstOrDefault_BattleServantParamComponent___);
    sub_2213A60(&System_Func_BattleServantParamComponent__bool__TypeInfo);
    sub_2213A60(&Method_BattlePerformanceEnemy___c__DisplayClass38_0__GetStatusUiBySvtData_b__0__);
    sub_2213A60(&BattlePerformanceEnemy___c__DisplayClass38_0_TypeInfo);
    byte_5974028 = 1;
  }
  v5 = sub_2213CCC(BattlePerformanceEnemy___c__DisplayClass38_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_11;
  *(_QWORD *)(v5 + 16) = svtData;
  v14 = (BattleServantData_o **)(v5 + 16);
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)svtData, v8, v9, v10, v11, v12, v13);
  raidParam = (BattleServantParamComponent_o *)this->fields.raidParam;
  if ( !raidParam )
    goto LABEL_11;
  if ( BattleServantParamComponent__IsMatchOwner(raidParam, *v14, 0) )
    return (BattleServantParamComponent_o *)this->fields.raidParam;
  raidParam = (BattleServantParamComponent_o *)this->fields.superbossParam;
  if ( !raidParam )
LABEL_11:
    sub_2213CDC(raidParam, v7);
  if ( BattleServantParamComponent__IsMatchOwner(raidParam, *v14, 0) )
    return (BattleServantParamComponent_o *)this->fields.superbossParam;
  svtParamList_k__BackingField = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields._svtParamList_k__BackingField;
  v17 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_BattleServantParamComponent__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v17,
    (Il2CppObject *)v5,
    Method_BattlePerformanceEnemy___c__DisplayClass38_0__GetStatusUiBySvtData_b__0__,
    0);
  return (BattleServantParamComponent_o *)System_Linq_Enumerable__FirstOrDefault_object__59254852(
                                            svtParamList_k__BackingField,
                                            (System_Func_TSource__bool__o *)v17,
                                            (const MethodInfo_3882844 *)Method_System_Linq_Enumerable_FirstOrDefault_BattleServantParamComponent___);
}


BattleServantParamComponent_o *BattlePerformanceEnemy__GetSvtParamComponent(
        BattlePerformanceEnemy_o *this,
        int32_t uniqueId,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Object_array *svtParamList_k__BackingField; // x20
  System_Predicate_object__o *v9; // x19

  if ( (byte_5974034 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Array_Find_BattleServantParamComponent___);
    sub_2213A60(&System_Predicate_BattleServantParamComponent__TypeInfo);
    sub_2213A60(&Method_BattlePerformanceEnemy___c__DisplayClass70_0__GetSvtParamComponent_b__0__);
    sub_2213A60(&BattlePerformanceEnemy___c__DisplayClass70_0_TypeInfo);
    byte_5974034 = 1;
  }
  v5 = sub_2213CCC(BattlePerformanceEnemy___c__DisplayClass70_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_2213CDC(v6, v7);
  svtParamList_k__BackingField = (System_Object_array *)this->fields._svtParamList_k__BackingField;
  *(_DWORD *)(v5 + 16) = uniqueId;
  v9 = (System_Predicate_object__o *)sub_2213CCC(System_Predicate_BattleServantParamComponent__TypeInfo);
  System_Predicate_object____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_BattlePerformanceEnemy___c__DisplayClass70_0__GetSvtParamComponent_b__0__,
    0);
  return (BattleServantParamComponent_o *)System_Array__Find_object_(
                                            svtParamList_k__BackingField,
                                            (System_Predicate_T__o *)v9,
                                            (const MethodInfo_39A8FD8 *)Method_System_Array_Find_BattleServantParamComponent___);
}


// local variable allocation has failed, the output may be wrong!
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
    sub_2213CDC(0, *(_QWORD *)&uniqueId);
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
  __int64 v6; // x1
  UnityEngine_Object_o *StatusUiBySvtData; // x20
  _BOOL8 v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x2
  __int64 v11; // x1
  UnityEngine_Object_o *gameObject; // x20
  const MethodInfo *v13; // x1

  if ( (byte_5974025 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974025 = 1;
  }
  StatusUiBySvtData = (UnityEngine_Object_o *)BattlePerformanceEnemy__GetStatusUiBySvtData(
                                                this,
                                                svtData,
                                                *(const MethodInfo **)&index);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  v8 = UnityEngine_Object__op_Equality(StatusUiBySvtData, 0, 0);
  if ( !v8 )
  {
    if ( !StatusUiBySvtData )
      sub_2213CDC(v8, v9);
    BattleServantParamComponent__clearBuffIconList((BattleServantParamComponent_o *)StatusUiBySvtData, 0);
    ((void (__fastcall *)(UnityEngine_Object_o *, _QWORD, _QWORD, void *))StatusUiBySvtData->klass[1]._1.generic_class)(
      StatusUiBySvtData,
      0,
      0,
      StatusUiBySvtData->klass[1]._1.typeMetadataHandle);
    if ( !BattlePerformanceEnemy__IsDefaultStatusUi(this, (BattleServantParamComponent_o *)StatusUiBySvtData, v10) )
    {
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)StatusUiBySvtData,
                                             0);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
      UnityEngine_Object__DestroyImmediate_83460132(gameObject, 0);
      BattlePerformanceEnemy__SetDefaultStatusUiIfNull(this, v13);
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
  bool v6; // w6
  bool v7; // w7
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  const MethodInfo *v17; // x1
  __int64 v18; // x0
  __int64 v19; // x1
  struct BattleServantParamComponent_array *svtParamList_k__BackingField; // x8
  struct System_Int32_array *v21; // x0
  struct System_Int32_array **p_list_ID; // x19
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7

  if ( (byte_597402B & 1) == 0 )
  {
    sub_2213A60(&int___TypeInfo);
    byte_597402B = 1;
  }
  this->fields.perf = inperf;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.perf,
    (int32_t)inperf,
    (System_String_o *)indata,
    (System_String_o *)inlogic,
    (int32_t)method,
    v5,
    v6,
    v7);
  this->fields.bdata = indata;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.bdata, (int32_t)indata, v11, v12, v13, v14, v15, v16);
  BattlePerformanceEnemy__SetupEnemyUiAll(this, v17);
  svtParamList_k__BackingField = this->fields._svtParamList_k__BackingField;
  if ( !svtParamList_k__BackingField )
    sub_2213CDC(v18, v19);
  v21 = (struct System_Int32_array *)sub_2213B20(int___TypeInfo, LODWORD(svtParamList_k__BackingField->max_length));
  this->fields.list_ID = v21;
  p_list_ID = &this->fields.list_ID;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)p_list_ID, (int32_t)v21, v23, v24, v25, v26, v27, v28);
  *((_BYTE *)p_list_ID + 24) = 0;
}


bool BattlePerformanceEnemy__IsDefaultStatusUi(
        BattlePerformanceEnemy_o *this,
        BattleServantParamComponent_o *component,
        const MethodInfo *method)
{
  UnityEngine_Object_o *defaultRaidParam; // x21
  __int64 v6; // x1
  UnityEngine_Object_o *defaultSuperBossParam; // x21

  if ( (byte_597402A & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_Contains_BattleServantParamComponent___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_597402A = 1;
  }
  defaultRaidParam = (UnityEngine_Object_o *)this->fields.defaultRaidParam;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, component);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)component, defaultRaidParam, 0) )
    return 1;
  defaultSuperBossParam = (UnityEngine_Object_o *)this->fields.defaultSuperBossParam;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  return UnityEngine_Object__op_Equality((UnityEngine_Object_o *)component, defaultSuperBossParam, 0)
      || System_Linq_Enumerable__Contains_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.defaultSvtParamList,
           (Il2CppObject *)component,
           (const MethodInfo_3876940 *)Method_System_Linq_Enumerable_Contains_BattleServantParamComponent___);
}


bool BattlePerformanceEnemy__IsExistsBackRow(BattlePerformanceEnemy_o *this, const MethodInfo *method)
{
  void *svtParamList_k__BackingField; // x0
  int32_t v4; // w20
  int32_t v5; // w24
  __int64 v6; // x1
  Il2CppObject *v7; // x21

  if ( (byte_5974030 & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_IndexValue_BattleServantParamComponent___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974030 = 1;
  }
  svtParamList_k__BackingField = this->fields._svtParamList_k__BackingField;
  if ( !svtParamList_k__BackingField )
LABEL_13:
    sub_2213CDC(svtParamList_k__BackingField, method);
  v4 = 3;
  while ( 1 )
  {
    v5 = *((_DWORD *)svtParamList_k__BackingField + 6);
    if ( v4 >= v5 )
      return v4 < v5;
    v7 = BasicHelper__IndexValue_object_(
           (System_Object_array *)svtParamList_k__BackingField,
           v4,
           0,
           (const MethodInfo_3814CA8 *)Method_BasicHelper_IndexValue_BattleServantParamComponent___);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
    svtParamList_k__BackingField = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v7, 0, 0);
    if ( ((unsigned __int8)svtParamList_k__BackingField & 1) != 0 )
    {
      if ( !v7 )
        goto LABEL_13;
      svtParamList_k__BackingField = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v7, 0);
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

  if ( (byte_597402E & 1) == 0 )
  {
    sub_2213A60(&PosCountNormalEnemyParamPosData_TypeInfo);
    sub_2213A60(&PosCountSpEnemyParamPosData_TypeInfo);
    byte_597402E = 1;
  }
  bdata = this->fields.bdata;
  if ( !bdata )
    sub_2213CDC(0, method);
  if ( BattleData__get_IsEnemyPosCountNormal(bdata, 0) )
    v4 = &PosCountNormalEnemyParamPosData_TypeInfo;
  else
    v4 = &PosCountSpEnemyParamPosData_TypeInfo;
  v5 = (Il2CppObject *)sub_2213CCC(*v4);
  System_Object___ctor(v5, 0);
  return (BaseEnemyParamPosData_o *)v5;
}


void BattlePerformanceEnemy__OnDestroy(BattlePerformanceEnemy_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.exUiController = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.exUiController, 0, v2, v3, v4, v5, v6, v7);
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
  __int64 v13; // x1
  BattleData_o *bdata; // x0
  __int64 v15; // x1
  struct BattleServantParamComponent_array *defaultSvtParamList; // x8
  struct BattleServantParamComponent_array *svtParamList_k__BackingField; // x8
  Il2CppObject **p_raidParam; // x1
  __int64 *v19; // x8
  StageEntity_o *StageEntity; // x0
  const MethodInfo *v21; // x2

  if ( (byte_5974023 & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_IsValidIndex_BattleServantParamComponent___);
    sub_2213A60(&Method_BattlePerformanceEnemy_SetStatusUi_BattleServantParamComponent___);
    sub_2213A60(&Method_BattlePerformanceEnemy_SetStatusUi_BattleServantRaidParamComponent___);
    sub_2213A60(&Method_BattlePerformanceEnemy_SetStatusUi_BattleServantSuperBossParamComponent___);
    sub_2213A60(&BattleServantRaidParamComponent_TypeInfo);
    sub_2213A60(&BattleServantSuperBossParamComponent_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974023 = 1;
  }
  if ( !component )
  {
LABEL_8:
    if ( !BasicHelper__IsValidIndex_object__58806224(
            (System_Object_array *)this->fields._svtParamList_k__BackingField,
            index,
            (const MethodInfo_3814FD0 *)Method_BasicHelper_IsValidIndex_BattleServantParamComponent___) )
      return;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
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
        (const MethodInfo_38174F0 *)Method_BattlePerformanceEnemy_SetStatusUi_BattleServantParamComponent___);
      if ( !component )
LABEL_25:
        sub_2213CDC(bdata, v15);
      goto LABEL_23;
    }
LABEL_26:
    sub_2213CE4(bdata);
  }
  klass = component->klass;
  naturalAligment = component->klass->_2.naturalAligment;
  v11 = BattleServantRaidParamComponent_TypeInfo->_2.naturalAligment;
  if ( naturalAligment >= (unsigned int)v11
    && (BattleServantRaidParamComponent_c *)klass->_2.typeHierarchy[v11 - 1] == BattleServantRaidParamComponent_TypeInfo )
  {
    p_raidParam = (Il2CppObject **)&this->fields.raidParam;
    v19 = &Method_BattlePerformanceEnemy_SetStatusUi_BattleServantRaidParamComponent___;
  }
  else
  {
    v12 = BattleServantSuperBossParamComponent_TypeInfo->_2.naturalAligment;
    if ( naturalAligment < (unsigned int)v12
      || (BattleServantSuperBossParamComponent_c *)klass->_2.typeHierarchy[v12 - 1] != BattleServantSuperBossParamComponent_TypeInfo )
    {
      goto LABEL_8;
    }
    p_raidParam = (Il2CppObject **)&this->fields.superbossParam;
    v19 = &Method_BattlePerformanceEnemy_SetStatusUi_BattleServantSuperBossParamComponent___;
  }
  BattlePerformanceEnemy__SetStatusUi_object_(
    this,
    p_raidParam,
    (Il2CppObject *)component,
    (const MethodInfo_38174F0 *)*v19);
LABEL_23:
  bdata = this->fields.bdata;
  component->fields.index = index;
  if ( !bdata )
    goto LABEL_25;
  StageEntity = BattleData__getStageEntity(bdata, 0);
  ((void (__fastcall *)(BattleServantParamComponent_o *, BattleServantData_o *, StageEntity_o *, const MethodInfo *))component->klass->vtable._10_setData.methodPtr)(
    component,
    svtData,
    StageEntity,
    component->klass->vtable._10_setData.method);
  BattlePerformanceEnemy__SetupStatusUiAdditionally(this, svtData, v21);
}


// local variable allocation has failed, the output may be wrong!
void BattlePerformanceEnemy__SetActiveParameterView(
        BattlePerformanceEnemy_o *this,
        int32_t index,
        bool val,
        const MethodInfo *method)
{
  struct BattleServantParamComponent_array *svtParamList_k__BackingField; // x8

  if ( (index & 0x80000000) == 0 )
  {
    svtParamList_k__BackingField = this->fields._svtParamList_k__BackingField;
    if ( !svtParamList_k__BackingField )
      goto LABEL_7;
    if ( SLODWORD(svtParamList_k__BackingField->max_length) > index )
    {
      this = (BattlePerformanceEnemy_o *)svtParamList_k__BackingField->m_Items[index];
      if ( this )
      {
        BattleServantParamComponent__SetActiveParameterView((BattleServantParamComponent_o *)this, val, 0);
        return;
      }
LABEL_7:
      sub_2213CDC(this, *(_QWORD *)&index);
    }
  }
}


void BattlePerformanceEnemy__SetDefaultStatusUiIfNull(BattlePerformanceEnemy_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *raidParam; // x21
  __int64 v4; // x1
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  struct BattleServantRaidParamComponent_o *defaultRaidParam; // x1
  UnityEngine_Object_o *superbossParam; // x21
  __int64 v13; // x0
  __int64 v14; // x1
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  struct BattleServantSuperBossParamComponent_o *defaultSuperBossParam; // x1
  struct BattleServantParamComponent_array *svtParamList_k__BackingField; // x8
  __int64 v23; // x21
  __int64 v24; // x23
  unsigned __int64 max_length_low; // x9
  unsigned __int64 v26; // x24
  UnityEngine_Object_o *v27; // x20
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  struct BattleServantParamComponent_array *defaultSvtParamList; // x8
  unsigned int *v35; // x25
  __int64 v36; // x20
  __int64 v37; // x1
  __int64 v38; // x0

  if ( (byte_5974024 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974024 = 1;
  }
  raidParam = (UnityEngine_Object_o *)this->fields.raidParam;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Equality(raidParam, 0, 0) )
  {
    defaultRaidParam = this->fields.defaultRaidParam;
    this->fields.raidParam = defaultRaidParam;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.raidParam,
      (int32_t)defaultRaidParam,
      v5,
      v6,
      v7,
      v8,
      v9,
      v10);
  }
  superbossParam = (UnityEngine_Object_o *)this->fields.superbossParam;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  v13 = UnityEngine_Object__op_Equality(superbossParam, 0, 0);
  if ( (v13 & 1) != 0 )
  {
    defaultSuperBossParam = this->fields.defaultSuperBossParam;
    this->fields.superbossParam = defaultSuperBossParam;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.superbossParam,
      (int32_t)defaultSuperBossParam,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
  }
  svtParamList_k__BackingField = this->fields._svtParamList_k__BackingField;
  if ( !svtParamList_k__BackingField )
LABEL_26:
    sub_2213CDC(v13, v14);
  v23 = 4;
  v24 = 8;
  while ( 1 )
  {
    max_length_low = LODWORD(svtParamList_k__BackingField->max_length);
    v26 = v23 - 4;
    if ( v23 - 4 >= (int)max_length_low )
      break;
    if ( v26 >= max_length_low )
      goto LABEL_28;
    v27 = (UnityEngine_Object_o *)*((_QWORD *)&svtParamList_k__BackingField->obj.klass + v23);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14);
    v13 = UnityEngine_Object__op_Equality(v27, 0, 0);
    if ( (v13 & 1) != 0 )
    {
      defaultSvtParamList = this->fields.defaultSvtParamList;
      if ( !defaultSvtParamList )
        goto LABEL_26;
      if ( v26 >= LODWORD(defaultSvtParamList->max_length) )
        goto LABEL_28;
      v35 = (unsigned int *)this->fields._svtParamList_k__BackingField;
      if ( !v35 )
        goto LABEL_26;
      v36 = *((_QWORD *)&defaultSvtParamList->obj.klass + v23);
      if ( v36 )
      {
        v13 = sub_2213BB4(v36, *(_QWORD *)(*(_QWORD *)v35 + 64LL));
        if ( !v13 )
        {
          v38 = sub_2213D00(0, v37);
          sub_2213BA0(v38, 0);
        }
      }
      if ( v26 >= v35[6] )
LABEL_28:
        sub_2213CE4(v13);
      *(_QWORD *)&v35[2 * v23] = v36;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v35[v24], v36, v28, v29, v30, v31, v32, v33);
    }
    svtParamList_k__BackingField = this->fields._svtParamList_k__BackingField;
    ++v23;
    v24 += 2;
    if ( !svtParamList_k__BackingField )
      goto LABEL_26;
  }
}


void BattlePerformanceEnemy__SetDefaultSvtParam(BattlePerformanceEnemy_o *this, const MethodInfo *method)
{
  System_Object_array *v3; // x0
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  System_Object_array *v10; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7

  if ( (byte_5974020 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_BattleServantHeadUpComponent___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_BattleServantParamComponent___);
    byte_5974020 = 1;
  }
  v3 = System_Linq_Enumerable__ToArray_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.defaultSvtHeadUpList,
         (const MethodInfo_389BB2C *)Method_System_Linq_Enumerable_ToArray_BattleServantHeadUpComponent___);
  this->fields._svtHeadUpList_k__BackingField = (struct BattleServantHeadUpComponent_array *)v3;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._svtHeadUpList_k__BackingField,
    (int32_t)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  v10 = System_Linq_Enumerable__ToArray_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.defaultSvtParamList,
          (const MethodInfo_389BB2C *)Method_System_Linq_Enumerable_ToArray_BattleServantParamComponent___);
  this->fields._svtParamList_k__BackingField = (struct BattleServantParamComponent_array *)v10;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._svtParamList_k__BackingField,
    (int32_t)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
}


void BattlePerformanceEnemy__SetDisableUpdateTarget(
        BattlePerformanceEnemy_o *this,
        bool isDisable,
        const MethodInfo *method)
{
  this->fields.isDisableUpdateTarget = isDisable;
}


void BattlePerformanceEnemy__SetStatusUi_object_(
        BattlePerformanceEnemy_o *this,
        Il2CppObject **component,
        Il2CppObject *toOverWrite,
        const MethodInfo_38174F0 *method)
{
  __int64 v8; // x1
  Il2CppObject *v9; // x22
  Il2CppObject *v10; // x0
  __int64 v11; // x1
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  Il2CppObject *v24; // x8
  struct BattlePerformance_o *perf; // x1
  __int64 v26; // x1
  UnityEngine_GameObject_o *gameObject; // x19
  UnityEngine_GameObject_o *v28; // x0
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( !method->rgctx_data )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    if ( !method->rgctx_data )
      sub_224B964(method);
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, component);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)toOverWrite, 0, 0) )
  {
    v9 = *component;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
    v10 = (Il2CppObject *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v9, 0, 0);
    if ( ((unsigned __int8)v10 & 1) == 0 && !v9 )
      goto LABEL_21;
    *component = toOverWrite;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)component, (int32_t)toOverWrite, v12, v13, v14, v15, v16, v17);
    v24 = *component;
    if ( !*component )
      goto LABEL_21;
    perf = this->fields.perf;
    v24[18].klass = (Il2CppClass *)perf;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v24[18], (int32_t)perf, v18, v19, v20, v21, v22, v23);
    v10 = *component;
    if ( !*component )
      goto LABEL_21;
    ((void (__fastcall *)(Il2CppObject *, _QWORD, _QWORD, const MethodInfo *))v10->klass->vtable[10].methodPtr)(
      v10,
      0,
      0,
      v10->klass->vtable[10].method);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v26);
    v10 = (Il2CppObject *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v9, 0, 0);
    if ( ((unsigned __int8)v10 & 1) != 0 )
    {
      if ( v9 )
      {
        ((void (__fastcall *)(Il2CppObject *, _QWORD, _QWORD, const MethodInfo *))v9->klass->vtable[10].methodPtr)(
          v9,
          0,
          0,
          v9->klass->vtable[10].method);
        if ( BattlePerformanceEnemy__IsDefaultStatusUi(this, (BattleServantParamComponent_o *)*component, 0) )
          return;
        v10 = *component;
        if ( *component )
        {
          gameObject = UnityEngine_Component__get_gameObject(
                         (UnityEngine_Component_o *)v10,
                         (const MethodInfo *)method->rgctx_data[2]._0_T);
          v28 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v9, 0);
          LocalPosition = GameObjectExtensions__GetLocalPosition(v28, 0);
          GameObjectExtensions__SetLocalPosition(gameObject, LocalPosition, 0);
          return;
        }
      }
LABEL_21:
      sub_2213CDC(v10, v11);
    }
  }
}


void BattlePerformanceEnemy__SetupEnemyUiAll(BattlePerformanceEnemy_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  struct BattleServantParamComponent_array *defaultSvtParamList; // x8
  System_Collections_Generic_IEnumerable_T__o *v6; // x20
  System_Action_int__o *v7; // x21

  if ( (byte_5974021 & 1) == 0 )
  {
    sub_2213A60(&System_Action_int__TypeInfo);
    sub_2213A60(&Method_BasicHelper_ForEach_int___);
    sub_2213A60(&Method_BattlePerformanceEnemy_SetStatusUi_BattleServantRaidParamComponent___);
    sub_2213A60(&Method_BattlePerformanceEnemy_SetStatusUi_BattleServantSuperBossParamComponent___);
    sub_2213A60(&Method_BattlePerformanceEnemy__SetupEnemyUiAll_b__30_0__);
    byte_5974021 = 1;
  }
  BattlePerformanceEnemy__SetDefaultSvtParam(this, method);
  defaultSvtParamList = this->fields.defaultSvtParamList;
  if ( !defaultSvtParamList )
    sub_2213CDC(v3, v4);
  v6 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Range(
                                                        0,
                                                        defaultSvtParamList->max_length,
                                                        0);
  v7 = (System_Action_int__o *)sub_2213CCC(System_Action_int__TypeInfo);
  System_Action_int____ctor(v7, (Il2CppObject *)this, Method_BattlePerformanceEnemy__SetupEnemyUiAll_b__30_0__, 0);
  BasicHelper__ForEach_int_(v6, (System_Action_T__o *)v7, (const MethodInfo_3811CEC *)Method_BasicHelper_ForEach_int___);
  BattlePerformanceEnemy__SetStatusUi_object_(
    this,
    (Il2CppObject **)&this->fields.raidParam,
    (Il2CppObject *)this->fields.defaultRaidParam,
    (const MethodInfo_38174F0 *)Method_BattlePerformanceEnemy_SetStatusUi_BattleServantRaidParamComponent___);
  BattlePerformanceEnemy__SetStatusUi_object_(
    this,
    (Il2CppObject **)&this->fields.superbossParam,
    (Il2CppObject *)this->fields.defaultSuperBossParam,
    (const MethodInfo_38174F0 *)Method_BattlePerformanceEnemy_SetStatusUi_BattleServantSuperBossParamComponent___);
}


void BattlePerformanceEnemy__SetupStatusUiAdditionally(
        BattlePerformanceEnemy_o *this,
        BattleServantData_o *svtdata,
        const MethodInfo *method)
{
  BattleServantParamComponent_o *StatusUiBySvtData; // x0
  __int64 v6; // x1
  UnityEngine_Object_o *v7; // x20
  __int64 v8; // x1
  UnityEngine_Object_o *raidParam; // x22
  __int64 battle_ent; // x0
  __int64 v11; // x1
  struct BattleData_o *bdata; // x8
  struct BattleServantRaidParamComponent_o *v13; // x22
  struct BattlePerformance_o *perf; // x8
  struct BattleServantRaidParamComponent_o *v15; // x22
  System_Int64_array *splitHp; // x23
  UnityEngine_Object_o *superbossParam; // x22
  struct BattlePerformance_o *v18; // x8
  BattleServantSuperBossParamComponent_o *v19; // x22
  struct BattlePerformance_o *v20; // x8
  System_Int64_array *v21; // x21
  struct BattlePerformance_o *v22; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  EventRaidEntity_o *raidEnt; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_5974032 & 1) == 0 )
  {
    sub_2213A60(&long___TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974032 = 1;
  }
  raidEnt = 0;
  StatusUiBySvtData = BattlePerformanceEnemy__GetStatusUiBySvtData(this, svtdata, method);
  if ( svtdata )
  {
    v7 = (UnityEngine_Object_o *)StatusUiBySvtData;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
    if ( !UnityEngine_Object__op_Equality(v7, 0, 0) )
    {
      raidParam = (UnityEngine_Object_o *)this->fields.raidParam;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
      battle_ent = UnityEngine_Object__op_Equality(v7, raidParam, 0);
      if ( (battle_ent & 1) != 0 )
      {
        bdata = this->fields.bdata;
        if ( !bdata )
          goto LABEL_37;
        battle_ent = (__int64)bdata->fields.battle_ent;
        if ( !battle_ent )
          goto LABEL_37;
        v13 = this->fields.raidParam;
        battle_ent = BattleEntity__isDefeatCount((BattleEntity_o *)battle_ent, 0);
        if ( !v13 )
          goto LABEL_37;
        perf = this->fields.perf;
        v13->fields.isDefeatCount = battle_ent & 1;
        if ( !perf )
          goto LABEL_37;
        battle_ent = (__int64)perf->fields.data;
        if ( !battle_ent )
          goto LABEL_37;
        battle_ent = BattleData__TryGetRaidEntity((BattleData_o *)battle_ent, &raidEnt, svtdata->fields.raidId, 0);
        if ( (battle_ent & 1) != 0 )
        {
          if ( !raidEnt )
            goto LABEL_37;
          v15 = this->fields.raidParam;
          if ( !v15 )
            goto LABEL_37;
          splitHp = raidEnt->fields.splitHp;
          v15->fields.isJumbleRaid = raidEnt->fields.groupIndex > 0;
        }
        else
        {
          battle_ent = sub_2213B20(long___TypeInfo, 0);
          v15 = this->fields.raidParam;
          splitHp = (System_Int64_array *)battle_ent;
        }
        v22 = this->fields.perf;
        if ( !v22 )
          goto LABEL_37;
        battle_ent = (__int64)v22->fields.data;
        if ( !battle_ent )
          goto LABEL_37;
        battle_ent = BattleData__getRaidBossMaxHp((BattleData_o *)battle_ent, svtdata->fields.raidId, 0);
        if ( !v15 )
          goto LABEL_37;
        BattleServantRaidParamComponent__setSplitHp(v15, splitHp, battle_ent, 0);
      }
      else
      {
        superbossParam = (UnityEngine_Object_o *)this->fields.superbossParam;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
        battle_ent = UnityEngine_Object__op_Equality(v7, superbossParam, 0);
        if ( (battle_ent & 1) != 0 && svtdata->fields.isSuperBoss )
        {
          v18 = this->fields.perf;
          if ( !v18 )
            goto LABEL_37;
          battle_ent = (__int64)v18->fields.data;
          if ( !battle_ent )
            goto LABEL_37;
          v19 = this->fields.superbossParam;
          battle_ent = (__int64)BattleData__getSuperBossSplitHp(
                                  (BattleData_o *)battle_ent,
                                  svtdata->fields.superBossId,
                                  0);
          v20 = this->fields.perf;
          if ( !v20 )
            goto LABEL_37;
          v21 = (System_Int64_array *)battle_ent;
          battle_ent = (__int64)v20->fields.data;
          if ( !battle_ent )
            goto LABEL_37;
          battle_ent = BattleData__getSuperBossMaxHp((BattleData_o *)battle_ent, svtdata->fields.superBossId, 0);
          if ( !v19 )
            goto LABEL_37;
          BattleServantSuperBossParamComponent__setSplitHp(v19, v21, battle_ent, 0);
        }
      }
      if ( v7 )
      {
        BattleServantParamComponent__setTouch((BattleServantParamComponent_o *)v7, 1, 0);
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v7, 0);
        BattleServantData__addParamObject(svtdata, gameObject, 0);
        return;
      }
LABEL_37:
      sub_2213CDC(battle_ent, v11);
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
  BattleActorControl_o *Component_object; // x22
  AdjustPopupPosInScreenArgument_o *v14; // x21
  struct BattleServantHeadUpComponent_array *v15; // x8
  BattlePerformance_o *perf; // x19
  BattlePerformanceEnemy_o *v17; // x20
  UnityEngine_Vector3_o HeadUpY; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v19; // 0:s3.4,4:s4.4,8:s5.4

  v8 = this;
  if ( (byte_5974033 & 1) == 0 )
  {
    sub_2213A60(&AdjustPopupPosInScreenArgument_TypeInfo);
    this = (BattlePerformanceEnemy_o *)sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    byte_5974033 = 1;
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
                                                     (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___),
        v14 = (AdjustPopupPosInScreenArgument_o *)sub_2213CCC(AdjustPopupPosInScreenArgument_TypeInfo),
        AdjustPopupPosInScreenArgument___ctor(v14, 0),
        !v14)
    || (v15 = v8->fields._svtHeadUpList_k__BackingField, v14->fields.IsExec = 0, !v15) )
  {
LABEL_20:
    sub_2213CDC(this, svtData);
  }
  if ( LODWORD(v15->max_length) <= index )
LABEL_21:
    sub_2213CE4(this);
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
void BattlePerformanceEnemy___SetupEnemyUiAll_b__30_0(
        BattlePerformanceEnemy_o *this,
        int32_t i,
        const MethodInfo *method)
{
  BattlePerformanceEnemy_o *v4; // x19
  struct BattleServantParamComponent_array *svtParamList_k__BackingField; // x8
  struct BattleServantParamComponent_array *defaultSvtParamList; // x9

  v4 = this;
  if ( (byte_5974036 & 1) == 0 )
  {
    this = (BattlePerformanceEnemy_o *)sub_2213A60(&Method_BattlePerformanceEnemy_SetStatusUi_BattleServantParamComponent___);
    byte_5974036 = 1;
  }
  svtParamList_k__BackingField = v4->fields._svtParamList_k__BackingField;
  if ( !svtParamList_k__BackingField || (defaultSvtParamList = v4->fields.defaultSvtParamList) == 0 )
    sub_2213CDC(this, *(_QWORD *)&i);
  if ( LODWORD(defaultSvtParamList->max_length) <= i || LODWORD(svtParamList_k__BackingField->max_length) <= i )
    sub_2213CE4(this);
  BattlePerformanceEnemy__SetStatusUi_object_(
    v4,
    (Il2CppObject **)&svtParamList_k__BackingField->m_Items[i],
    (Il2CppObject *)defaultSvtParamList->m_Items[i],
    (const MethodInfo_38174F0 *)Method_BattlePerformanceEnemy_SetStatusUi_BattleServantParamComponent___);
}


bool BattlePerformanceEnemy__checkRaidUpdateHp(BattlePerformanceEnemy_o *this, const MethodInfo *method)
{
  struct BattleServantRaidParamComponent_o *raidParam; // x8

  raidParam = this->fields.raidParam;
  if ( !raidParam )
    sub_2213CDC(this, method);
  return raidParam->fields.flgUpdate;
}


void BattlePerformanceEnemy__deleteStatus(BattlePerformanceEnemy_o *this, int32_t index, const MethodInfo *method)
{
  BattleServantHeadUpComponent_o *IsValidIndex_object__58806224; // x0
  __int64 v6; // x1
  struct BattleServantHeadUpComponent_array *svtHeadUpList_k__BackingField; // x8
  UnityEngine_Object_o *v8; // x21
  struct BattleServantHeadUpComponent_array *v9; // x8
  struct System_Int32_array *list_ID; // x8
  char *v11; // x9
  struct BattleServantHeadUpComponent_array *v12; // x8
  struct BattleServantParamComponent_array *svtParamList_k__BackingField; // x8
  UnityEngine_Object_o *v14; // x21
  struct BattleServantParamComponent_array *v15; // x8

  if ( (byte_597402C & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_IsValidIndex_BattleServantHeadUpComponent___);
    sub_2213A60(&Method_BasicHelper_IsValidIndex_BattleServantParamComponent___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_TrackingMoveCtCComponent___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_597402C = 1;
  }
  if ( BasicHelper__IsValidIndex_object__58806224(
         (System_Object_array *)this->fields._svtHeadUpList_k__BackingField,
         index,
         (const MethodInfo_3814FD0 *)Method_BasicHelper_IsValidIndex_BattleServantHeadUpComponent___) )
  {
    IsValidIndex_object__58806224 = (BattleServantHeadUpComponent_o *)BasicHelper__IsValidIndex_object__58806224(
                                                                        (System_Object_array *)this->fields._svtParamList_k__BackingField,
                                                                        index,
                                                                        (const MethodInfo_3814FD0 *)Method_BasicHelper_IsValidIndex_BattleServantParamComponent___);
    if ( ((unsigned __int8)IsValidIndex_object__58806224 & 1) != 0 )
    {
      svtHeadUpList_k__BackingField = this->fields._svtHeadUpList_k__BackingField;
      if ( !svtHeadUpList_k__BackingField )
        goto LABEL_31;
      if ( LODWORD(svtHeadUpList_k__BackingField->max_length) <= index )
        goto LABEL_32;
      v8 = (UnityEngine_Object_o *)svtHeadUpList_k__BackingField->m_Items[index];
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
      IsValidIndex_object__58806224 = (BattleServantHeadUpComponent_o *)UnityEngine_Object__op_Inequality(v8, 0, 0);
      if ( ((unsigned __int8)IsValidIndex_object__58806224 & 1) != 0 )
      {
        v9 = this->fields._svtHeadUpList_k__BackingField;
        if ( !v9 )
          goto LABEL_31;
        if ( LODWORD(v9->max_length) <= index )
          goto LABEL_32;
        IsValidIndex_object__58806224 = v9->m_Items[index];
        if ( !IsValidIndex_object__58806224 )
          goto LABEL_31;
        BattleServantHeadUpComponent__setData(IsValidIndex_object__58806224, 0, 0);
        list_ID = this->fields.list_ID;
        if ( !list_ID )
          goto LABEL_31;
        if ( LODWORD(list_ID->max_length) <= index )
          goto LABEL_32;
        v11 = (char *)list_ID + 4 * index;
        v12 = this->fields._svtHeadUpList_k__BackingField;
        *((_DWORD *)v11 + 8) = -1;
        if ( !v12 )
          goto LABEL_31;
        if ( LODWORD(v12->max_length) <= index )
LABEL_32:
          sub_2213CE4(IsValidIndex_object__58806224);
        IsValidIndex_object__58806224 = v12->m_Items[index];
        if ( !IsValidIndex_object__58806224 )
          goto LABEL_31;
        IsValidIndex_object__58806224 = (BattleServantHeadUpComponent_o *)UnityEngine_Component__get_gameObject(
                                                                            (UnityEngine_Component_o *)IsValidIndex_object__58806224,
                                                                            0);
        if ( !IsValidIndex_object__58806224 )
          goto LABEL_31;
        IsValidIndex_object__58806224 = (BattleServantHeadUpComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                            (UnityEngine_GameObject_o *)IsValidIndex_object__58806224,
                                                                            (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_TrackingMoveCtCComponent___);
        if ( !IsValidIndex_object__58806224 )
          goto LABEL_31;
        TrackingMoveCtCComponent__stopAct((TrackingMoveCtCComponent_o *)IsValidIndex_object__58806224, 0);
      }
      svtParamList_k__BackingField = this->fields._svtParamList_k__BackingField;
      if ( !svtParamList_k__BackingField )
        goto LABEL_31;
      if ( LODWORD(svtParamList_k__BackingField->max_length) <= index )
        goto LABEL_32;
      v14 = (UnityEngine_Object_o *)svtParamList_k__BackingField->m_Items[index];
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
      IsValidIndex_object__58806224 = (BattleServantHeadUpComponent_o *)UnityEngine_Object__op_Inequality(v14, 0, 0);
      if ( ((unsigned __int8)IsValidIndex_object__58806224 & 1) != 0 )
      {
        v15 = this->fields._svtParamList_k__BackingField;
        if ( !v15 )
          goto LABEL_31;
        if ( LODWORD(v15->max_length) > index )
        {
          IsValidIndex_object__58806224 = (BattleServantHeadUpComponent_o *)v15->m_Items[index];
          if ( IsValidIndex_object__58806224 )
          {
            ((void (__fastcall *)(BattleServantHeadUpComponent_o *, _QWORD, _QWORD, void *))IsValidIndex_object__58806224->klass[1]._1.generic_class)(
              IsValidIndex_object__58806224,
              0,
              0,
              IsValidIndex_object__58806224->klass[1]._1.typeMetadataHandle);
            return;
          }
LABEL_31:
          sub_2213CDC(IsValidIndex_object__58806224, v6);
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
    sub_2213CDC(this, method);
  v3 = this;
  v4 = 0;
  while ( 1 )
  {
    max_length = svtHeadUpList_k__BackingField->max_length;
    if ( (int)v4 >= max_length )
      break;
    if ( (unsigned int)v4 >= max_length )
      sub_2213CE4(this);
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
    sub_2213CDC(0, method);
  return BattleServantRaidParamComponent__getTurnSituationParam(raidParam, 0);
}


ExtraBattleUserInterfaceController_o *BattlePerformanceEnemy__get_ExUiController(
        BattlePerformanceEnemy_o *this,
        const MethodInfo *method)
{
  ExtraBattleUserInterfaceController_o *result; // x0
  BattleData_o *bdata; // x21
  ExtraBattleUserInterfaceController_o *v5; // x22
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  if ( (byte_597401F & 1) == 0 )
  {
    sub_2213A60(&ExtraBattleUserInterfaceController_TypeInfo);
    byte_597401F = 1;
  }
  result = this->fields.exUiController;
  if ( !result )
  {
    bdata = this->fields.bdata;
    v5 = (ExtraBattleUserInterfaceController_o *)sub_2213CCC(ExtraBattleUserInterfaceController_TypeInfo);
    ExtraBattleUserInterfaceController___ctor(v5, (IBattlePerformanceExtraUiParent_o *)this, bdata, 0);
    this->fields.exUiController = v5;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.exUiController, (int32_t)v5, v6, v7, v8, v9, v10, v11);
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
    sub_2213CDC(this, method);
  v3 = this;
  v4 = 0;
  while ( 1 )
  {
    max_length = svtParamList_k__BackingField->max_length;
    if ( (int)v4 >= max_length )
      break;
    if ( (unsigned int)v4 >= max_length )
      sub_2213CE4(this);
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
    goto LABEL_14;
  v3 = this;
  v4 = 0;
  while ( 1 )
  {
    max_length = svtHeadUpList_k__BackingField->max_length;
    if ( (int)v4 >= max_length )
      break;
    if ( (unsigned int)v4 >= max_length )
LABEL_18:
      sub_2213CE4(this);
    this = (BattlePerformanceEnemy_o *)svtHeadUpList_k__BackingField->m_Items[v4];
    if ( this )
    {
      BattleServantHeadUpComponent__setTargetMark((BattleServantHeadUpComponent_o *)this, -1, 0, 0);
      svtHeadUpList_k__BackingField = v3->fields._svtHeadUpList_k__BackingField;
      ++v4;
      if ( svtHeadUpList_k__BackingField )
        continue;
    }
    goto LABEL_14;
  }
  svtParamList_k__BackingField = v3->fields._svtParamList_k__BackingField;
  if ( !svtParamList_k__BackingField )
    goto LABEL_14;
  v7 = 0;
  while ( 1 )
  {
    v8 = svtParamList_k__BackingField->max_length;
    if ( (int)v7 >= v8 )
      break;
    if ( (unsigned int)v7 >= v8 )
      goto LABEL_18;
    this = (BattlePerformanceEnemy_o *)svtParamList_k__BackingField->m_Items[v7];
    if ( this )
    {
      BattleServantParamComponent__setTargetMark((BattleServantParamComponent_o *)this, -1, 0, 0);
      svtParamList_k__BackingField = v3->fields._svtParamList_k__BackingField;
      ++v7;
      if ( svtParamList_k__BackingField )
        continue;
    }
    goto LABEL_14;
  }
  this = (BattlePerformanceEnemy_o *)v3->fields.raidParam;
  if ( !this
    || (BattleServantParamComponent__setTargetMark((BattleServantParamComponent_o *)this, -1, 0, 0),
        (this = (BattlePerformanceEnemy_o *)v3->fields.superbossParam) == 0) )
  {
LABEL_14:
    sub_2213CDC(this, method);
  }
  BattleServantParamComponent__setTargetMark((BattleServantParamComponent_o *)this, -1, 0, 0);
}


void BattlePerformanceEnemy__setParamPosition(BattlePerformanceEnemy_o *this, const MethodInfo *method)
{
  BattlePerformanceEnemy_o *v2; // x19
  struct BattlePerformance_o *perf; // x8
  BattleServantData_array *EnemyServantList; // x20
  const MethodInfo *v5; // x1
  BattlePerformanceEnemy_c *klass; // x8
  BattlePerformanceEnemy_o *v7; // x21
  __int64 v8; // x9
  int32_t *p_offset; // x10
  __int64 v10; // x0
  __int64 v11; // x0
  __int64 v12; // x1
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
  __int64 v23; // x21
  __int64 v24; // x1
  UnityEngine_Transform_o *superBossTr; // x0
  __int64 v26; // x1
  UnityEngine_Transform_o *raidTr; // x0
  __int64 v28; // x1
  UnityEngine_Transform_o *nomalTr; // x0
  __int64 v30; // x0
  __int64 v31; // x1
  struct BattlePerformance_o *v32; // x8
  BattleData_o *data; // x0
  _BOOL8 HasEnemy; // x0
  __int64 v35; // x1
  UnityEngine_Transform_o *exBattleUiParent; // x21
  struct BattlePerformance_o *v37; // x8
  BattleData_o *v38; // x0
  __int64 v39; // x0
  __int64 v40; // x1
  float v41; // s0
  int v42; // w23
  UnityEngine_Transform_o *v43; // x0
  __int64 v44; // x1
  UnityEngine_Transform_o *v45; // x0
  __int64 v46; // x1
  UnityEngine_Transform_o *v47; // x0
  __int64 v48; // x0
  __int64 v49; // x1
  struct BattlePerformance_o *v50; // x8
  BattleData_o *v51; // x0
  struct BattlePerformance_o *v52; // x8
  BattleData_o *v53; // x0
  __int64 v54; // x0
  __int64 v55; // x1
  __int64 v57; // x8
  __int64 v58; // x9
  int *v59; // x10
  __int64 v60; // x0
  const MethodInfo *v61; // x1
  UnityEngine_Transform_o *v62; // x21
  BaseEnemyParamPosData_o *v63; // x20
  UnityEngine_Transform_o *v66; // x21
  struct BattleData_o *bdata; // x8
  UnityEngine_Transform_o *v70; // x21
  struct BattlePerformance_o *v73; // x8
  struct BattlePerformance_o *v74; // x8
  UnityEngine_Transform_o *v75; // x21
  float v76; // s0
  struct BattleServantParamComponent_array *svtParamList_k__BackingField; // x19
  int max_length; // w8
  __int64 v79; // x21
  __int64 v80; // [xsp+18h] [xbp-38h]
  UnityEngine_Vector3_o v81; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v82; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v83; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v84; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v85; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v86; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v87; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v88; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v89; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v90; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v91; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v92; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o zeroVector; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v94; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_597402D & 1) == 0 )
  {
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerable_BattleServantParamComponent__TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_BattleServantParamComponent__TypeInfo);
    this = (BattlePerformanceEnemy_o *)sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    byte_597402D = 1;
  }
  perf = v2->fields.perf;
  if ( !perf )
    goto LABEL_92;
  this = (BattlePerformanceEnemy_o *)perf->fields.data;
  if ( !this )
    goto LABEL_92;
  EnemyServantList = BattleData__getEnemyServantList((BattleData_o *)this, 0);
  this = (BattlePerformanceEnemy_o *)BattlePerformanceEnemy__EnumerateUsingStatusUi(v2, v5);
  if ( !this )
    goto LABEL_92;
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
    v10 = sub_224BC3C(this, System_Collections_Generic_IEnumerable_BattleServantParamComponent__TypeInfo, 0);
  }
  v11 = (*(__int64 (__fastcall **)(BattlePerformanceEnemy_o *, _QWORD))v10)(v7, *(_QWORD *)(v10 + 8));
  v80 = v11;
  while ( 1 )
  {
    if ( !v80 )
      sub_2213CDC(v11, v12);
    v13 = *(_QWORD *)v80;
    v14 = *(unsigned __int16 *)(*(_QWORD *)v80 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v80 + 302LL) )
    {
      v15 = (int *)(*(_QWORD *)(v13 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v15 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v14;
        v15 += 4;
        if ( !v14 )
          goto LABEL_18;
      }
      v16 = v13 + 16LL * *v15 + 312;
    }
    else
    {
LABEL_18:
      v16 = sub_224BC3C(v80, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v16)(v80, *(_QWORD *)(v16 + 8)) & 1) == 0 )
    {
      v42 = 12;
      goto LABEL_59;
    }
    v17 = *(_QWORD *)v80;
    v18 = *(unsigned __int16 *)(*(_QWORD *)v80 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v80 + 302LL) )
    {
      v19 = (int *)(*(_QWORD *)(v17 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BattleServantParamComponent__c **)v19 - 1) != System_Collections_Generic_IEnumerator_BattleServantParamComponent__TypeInfo )
      {
        --v18;
        v19 += 4;
        if ( !v18 )
          goto LABEL_25;
      }
      v20 = v17 + 16LL * *v19 + 312;
    }
    else
    {
LABEL_25:
      v20 = sub_224BC3C(v80, System_Collections_Generic_IEnumerator_BattleServantParamComponent__TypeInfo, 0);
    }
    v21 = (*(__int64 (__fastcall **)(__int64, _QWORD))v20)(v80, *(_QWORD *)(v20 + 8));
    v23 = v21;
    if ( !v21 )
      sub_2213CDC(0, v22);
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v21 + 440LL))(
            v21,
            *(_QWORD *)(*(_QWORD *)v21 + 448LL))
        & 1) != 0 )
      break;
    v11 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v23 + 456LL))(
            v23,
            *(_QWORD *)(*(_QWORD *)v23 + 464LL));
    if ( (v11 & 1) != 0 )
    {
      superBossTr = v2->fields.superBossTr;
      if ( !superBossTr )
        sub_2213CDC(0, v12);
      v81.fields.x = 0.0;
      v81.fields.y = 0.0;
      v81.fields.z = 0.0;
      UnityEngine_Transform__set_localPosition(superBossTr, v81, 0);
      raidTr = v2->fields.raidTr;
      if ( !raidTr )
        sub_2213CDC(0, v26);
      v82.fields.x = 0.0;
      v82.fields.z = 0.0;
      v82.fields.y = 90.0;
      UnityEngine_Transform__set_localPosition(raidTr, v82, 0);
      nomalTr = v2->fields.nomalTr;
      if ( !nomalTr )
        sub_2213CDC(0, v28);
      v83.fields.x = 0.0;
      v83.fields.z = 0.0;
      v83.fields.y = -82.0;
      UnityEngine_Transform__set_localPosition(nomalTr, v83, 0);
      v32 = v2->fields.perf;
      if ( !v32 )
        sub_2213CDC(v30, v31);
      data = v32->fields.data;
      if ( !data )
        sub_2213CDC(0, v31);
      HasEnemy = BattleData__HasEnemyExBattleUiPositionY(data, 0);
      exBattleUiParent = v2->fields.exBattleUiParent;
      if ( HasEnemy )
      {
        v37 = v2->fields.perf;
        if ( !v37 )
          sub_2213CDC(HasEnemy, v35);
        v38 = v37->fields.data;
        if ( !v38 )
          sub_2213CDC(0, v35);
        v41 = BattleData__EnemyExBattleUiPositionY(v38, 0);
        if ( !exBattleUiParent )
          sub_2213CDC(v39, v40);
LABEL_39:
        v84.fields.y = v41;
        v84.fields.x = 0.0;
        v84.fields.z = 0.0;
        UnityEngine_Transform__set_localPosition(exBattleUiParent, v84, 0);
        goto LABEL_58;
      }
      if ( !EnemyServantList )
        sub_2213CDC(HasEnemy, v35);
      goto LABEL_54;
    }
  }
  v43 = v2->fields.superBossTr;
  if ( !v43 )
    sub_2213CDC(0, v24);
  v85.fields.x = 0.0;
  v85.fields.z = 0.0;
  v85.fields.y = 90.0;
  UnityEngine_Transform__set_localPosition(v43, v85, 0);
  v45 = v2->fields.raidTr;
  if ( !v45 )
    sub_2213CDC(0, v44);
  v86.fields.x = 0.0;
  v86.fields.y = 0.0;
  v86.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition(v45, v86, 0);
  v47 = v2->fields.nomalTr;
  if ( !v47 )
    sub_2213CDC(0, v46);
  v87.fields.x = 0.0;
  v87.fields.z = 0.0;
  v87.fields.y = -82.0;
  UnityEngine_Transform__set_localPosition(v47, v87, 0);
  v50 = v2->fields.perf;
  if ( !v50 )
    sub_2213CDC(v48, v49);
  v51 = v50->fields.data;
  if ( !v51 )
    sub_2213CDC(0, v49);
  HasEnemy = BattleData__HasEnemyExBattleUiPositionY(v51, 0);
  exBattleUiParent = v2->fields.exBattleUiParent;
  if ( HasEnemy )
  {
    v52 = v2->fields.perf;
    if ( !v52 )
      sub_2213CDC(HasEnemy, v35);
    v53 = v52->fields.data;
    if ( !v53 )
      sub_2213CDC(0, v35);
    v41 = BattleData__EnemyExBattleUiPositionY(v53, 0);
    if ( !exBattleUiParent )
      sub_2213CDC(v54, v55);
    goto LABEL_39;
  }
  if ( !EnemyServantList )
    sub_2213CDC(HasEnemy, v35);
LABEL_54:
  if ( !exBattleUiParent )
    sub_2213CDC(HasEnemy, v35);
  v88.fields.x = 0.0;
  v88.fields.y = -50.0;
  if ( SLODWORD(EnemyServantList->max_length) <= 1 )
    v88.fields.y = 0.0;
  v88.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition(exBattleUiParent, v88, 0);
LABEL_58:
  v42 = 6;
LABEL_59:
  v57 = *(_QWORD *)v80;
  v58 = *(unsigned __int16 *)(*(_QWORD *)v80 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v80 + 302LL) )
  {
    v59 = (int *)(*(_QWORD *)(v57 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v59 - 1) != System_IDisposable_TypeInfo )
    {
      --v58;
      v59 += 4;
      if ( !v58 )
        goto LABEL_63;
    }
    v60 = v57 + 16LL * *v59 + 312;
  }
  else
  {
LABEL_63:
    v60 = sub_224BC3C(v80, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v60)(v80, *(_QWORD *)(v60 + 8));
  if ( v42 == 12 )
  {
    this = (BattlePerformanceEnemy_o *)v2->fields.superBossTr;
    if ( !this )
      goto LABEL_92;
    v89.fields.x = 0.0;
    v89.fields.z = 0.0;
    v89.fields.y = 90.0;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v89, 0);
    this = (BattlePerformanceEnemy_o *)v2->fields.raidTr;
    if ( !this )
      goto LABEL_92;
    v90.fields.x = 0.0;
    v90.fields.z = 0.0;
    v90.fields.y = 90.0;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v90, 0);
    this = (BattlePerformanceEnemy_o *)BattlePerformanceEnemy__MakeEnemyParamPosData(v2, v61);
    if ( !this )
      goto LABEL_92;
    v62 = v2->fields.nomalTr;
    v63 = (BaseEnemyParamPosData_o *)this;
    this = (BattlePerformanceEnemy_o *)((__int64 (__fastcall *)(BattlePerformanceEnemy_o *, const MethodInfo *))this->klass->vtable._4_IBattlePerformanceExtraUiParent_GetExBattleUiParentTransform.methodPtr)(
                                         this,
                                         this->klass->vtable._4_IBattlePerformanceExtraUiParent_GetExBattleUiParentTransform.method);
    if ( !v62 )
      goto LABEL_92;
    UnityEngine_Transform__set_localPosition(v62, v91, 0);
    v66 = v2->fields.nomalTr;
    this = (BattlePerformanceEnemy_o *)((__int64 (__fastcall *)(BaseEnemyParamPosData_o *, const MethodInfo *))v63->klass->vtable._5_get_NormalTrLocalScale.methodPtr)(
                                         v63,
                                         v63->klass->vtable._5_get_NormalTrLocalScale.method);
    if ( !v66 )
      goto LABEL_92;
    UnityEngine_Transform__set_localScale(v66, v92, 0);
    bdata = v2->fields.bdata;
    if ( !bdata )
      goto LABEL_92;
    v70 = v2->fields.exBattleUiParent;
    if ( bdata->fields.enemyMasterInfo )
    {
      if ( !byte_5969AE0 )
      {
        this = (BattlePerformanceEnemy_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
        byte_5969AE0 = 1;
      }
      zeroVector = UnityEngine_Vector3_TypeInfo->static_fields->zeroVector;
      if ( !v70 )
        goto LABEL_92;
    }
    else
    {
      this = (BattlePerformanceEnemy_o *)((__int64 (__fastcall *)(BaseEnemyParamPosData_o *, const MethodInfo *))v63->klass->vtable._8_get_ExBattleUiTrPos.methodPtr)(
                                           v63,
                                           v63->klass->vtable._8_get_ExBattleUiTrPos.method);
      if ( !v70 )
        goto LABEL_92;
    }
    UnityEngine_Transform__set_localPosition(v70, zeroVector, 0);
    v73 = v2->fields.perf;
    if ( !v73 )
      goto LABEL_92;
    this = (BattlePerformanceEnemy_o *)v73->fields.data;
    if ( !this )
      goto LABEL_92;
    this = (BattlePerformanceEnemy_o *)BattleData__HasEnemyExBattleUiPositionY((BattleData_o *)this, 0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v74 = v2->fields.perf;
      if ( !v74 )
        goto LABEL_92;
      this = (BattlePerformanceEnemy_o *)v74->fields.data;
      if ( !this )
        goto LABEL_92;
      v75 = v2->fields.exBattleUiParent;
      v76 = BattleData__EnemyExBattleUiPositionY((BattleData_o *)this, 0);
      if ( !v75 )
        goto LABEL_92;
      v94.fields.y = v76;
      v94.fields.x = 0.0;
      v94.fields.z = 0.0;
      UnityEngine_Transform__set_localPosition(v75, v94, 0);
    }
    svtParamList_k__BackingField = v2->fields._svtParamList_k__BackingField;
    if ( !svtParamList_k__BackingField )
      goto LABEL_92;
    max_length = svtParamList_k__BackingField->max_length;
    if ( max_length >= 1 )
    {
      v79 = 0;
      while ( 1 )
      {
        if ( (unsigned int)v79 >= max_length )
          sub_2213CE4(this);
        this = (BattlePerformanceEnemy_o *)svtParamList_k__BackingField->m_Items[v79];
        if ( !this )
          break;
        BattleServantParamComponent__SetEnemyParamPosition((BattleServantParamComponent_o *)this, v63, 0);
        max_length = svtParamList_k__BackingField->max_length;
        if ( (int)++v79 >= max_length )
          return;
      }
LABEL_92:
      sub_2213CDC(this, method);
    }
  }
}


void BattlePerformanceEnemy__setTarget(
        BattlePerformanceEnemy_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  BattlePerformanceEnemy_o *v3; // x20
  struct BattlePerformance_o *perf; // x8
  struct BattlePerformance_o *v6; // x8
  struct BattleServantHeadUpComponent_array *svtHeadUpList_k__BackingField; // x8
  char v8; // w21
  __int64 v9; // x22
  int max_length; // w9
  struct BattleServantParamComponent_array *svtParamList_k__BackingField; // x8
  __int64 v12; // x22
  int v13; // w9

  if ( svtData )
  {
    v3 = this;
    if ( !this->fields.isDisableUpdateTarget )
    {
      perf = this->fields.perf;
      if ( !perf )
        goto LABEL_21;
      this = (BattlePerformanceEnemy_o *)perf->fields.logic;
      if ( !this )
        goto LABEL_21;
      BattleLogic__updateEnemyTargetLogic((BattleLogic_o *)this, 0);
      v6 = v3->fields.perf;
      if ( !v6 )
        goto LABEL_21;
      this = (BattlePerformanceEnemy_o *)v6->fields.data;
      if ( !this )
        goto LABEL_21;
      this = (BattlePerformanceEnemy_o *)BattleData__isTargetLock((BattleData_o *)this, 0);
      svtHeadUpList_k__BackingField = v3->fields._svtHeadUpList_k__BackingField;
      if ( !svtHeadUpList_k__BackingField )
        goto LABEL_21;
      v8 = (char)this;
      v9 = 0;
      while ( 1 )
      {
        max_length = svtHeadUpList_k__BackingField->max_length;
        if ( (int)v9 >= max_length )
          break;
        if ( (unsigned int)v9 >= max_length )
LABEL_25:
          sub_2213CE4(this);
        this = (BattlePerformanceEnemy_o *)svtHeadUpList_k__BackingField->m_Items[v9];
        if ( this )
        {
          BattleServantHeadUpComponent__setTargetMark(
            (BattleServantHeadUpComponent_o *)this,
            svtData->fields.uniqueId,
            v8 & 1,
            0);
          svtHeadUpList_k__BackingField = v3->fields._svtHeadUpList_k__BackingField;
          ++v9;
          if ( svtHeadUpList_k__BackingField )
            continue;
        }
        goto LABEL_21;
      }
      svtParamList_k__BackingField = v3->fields._svtParamList_k__BackingField;
      if ( !svtParamList_k__BackingField )
        goto LABEL_21;
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
          svtParamList_k__BackingField = v3->fields._svtParamList_k__BackingField;
          ++v12;
          if ( svtParamList_k__BackingField )
            continue;
        }
        goto LABEL_21;
      }
      this = (BattlePerformanceEnemy_o *)v3->fields.raidParam;
      if ( !this
        || (BattleServantParamComponent__setTargetMark(
              (BattleServantParamComponent_o *)this,
              svtData->fields.uniqueId,
              v8 & 1,
              0),
            (this = (BattlePerformanceEnemy_o *)v3->fields.superbossParam) == 0) )
      {
LABEL_21:
        sub_2213CDC(this, svtData);
      }
      BattleServantParamComponent__setTargetMark(
        (BattleServantParamComponent_o *)this,
        svtData->fields.uniqueId,
        v8 & 1,
        0);
    }
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
      sub_2213CE4(this);
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
    sub_2213CDC(this, method);
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._svtHeadUpList_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._svtHeadUpList_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._svtParamList_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._svtParamList_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
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
  unsigned int v6; // w21
  unsigned int max_length; // w9
  struct BattleServantParamComponent_array *v8; // x8

  svtParamList_k__BackingField = this->fields._svtParamList_k__BackingField;
  if ( !svtParamList_k__BackingField )
    goto LABEL_13;
  v4 = this;
  v6 = 0;
  while ( 1 )
  {
    max_length = svtParamList_k__BackingField->max_length;
    if ( (int)v6 >= (int)max_length )
      break;
    if ( v6 >= max_length )
      goto LABEL_24;
    if ( !buffData )
      goto LABEL_13;
    this = (BattlePerformanceEnemy_o *)svtParamList_k__BackingField->m_Items[v6];
    if ( !this )
      goto LABEL_13;
    this = (BattlePerformanceEnemy_o *)BattleServantParamComponent__checkId(
                                         (BattleServantParamComponent_o *)this,
                                         buffData->fields.targetId,
                                         0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v8 = v4->fields._svtParamList_k__BackingField;
      if ( !v8 )
        goto LABEL_13;
      if ( v6 >= LODWORD(v8->max_length) )
LABEL_24:
        sub_2213CE4(this);
      this = (BattlePerformanceEnemy_o *)v8->m_Items[v6];
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
    sub_2213CDC(this, buffData);
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
    sub_2213CDC(this, method);
  v3 = this;
  v4 = 0;
  while ( 1 )
  {
    max_length = svtHeadUpList_k__BackingField->max_length;
    if ( (int)v4 >= max_length )
      break;
    if ( (unsigned int)v4 >= max_length )
      sub_2213CE4(this);
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
    sub_2213CDC(this, method);
  v3 = this;
  v4 = 0;
  while ( 1 )
  {
    max_length = svtHeadUpList_k__BackingField->max_length;
    if ( (int)v4 >= max_length )
      break;
    if ( (unsigned int)v4 >= max_length )
      sub_2213CE4(this);
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
    sub_2213CDC(this, method);
  v3 = this;
  v4 = 0;
  while ( 1 )
  {
    max_length = svtHeadUpList_k__BackingField->max_length;
    if ( (int)v4 >= max_length )
      break;
    if ( (unsigned int)v4 >= max_length )
      sub_2213CE4(this);
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
    sub_2213CDC(this, method);
  v3 = this;
  v4 = 0;
  while ( 1 )
  {
    max_length = svtHeadUpList_k__BackingField->max_length;
    if ( (int)v4 >= max_length )
      break;
    if ( (unsigned int)v4 >= max_length )
      sub_2213CE4(this);
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
    sub_2213CDC(this, method);
  v3 = this;
  v4 = 0;
  while ( 1 )
  {
    max_length = svtHeadUpList_k__BackingField->max_length;
    if ( (int)v4 >= max_length )
      break;
    if ( (unsigned int)v4 >= max_length )
      sub_2213CE4(this);
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
    sub_2213CDC(0, method);
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
  BattleRaidInfo_array *v6; // x21
  int max_length; // w8
  BattlePerformanceEnemy_o *v9; // x20
  unsigned int v10; // w23

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
      v9 = this;
      v10 = 0;
      while ( 1 )
      {
        if ( v10 >= max_length )
          sub_2213CE4(this);
        infos = (BattleRaidInfo_array *)v6->m_Items[v10];
        if ( !infos )
          break;
        if ( HIDWORD(infos->bounds) == data->fields.uniqueId )
        {
          this = (BattlePerformanceEnemy_o *)v9->fields.raidParam;
          if ( !this )
            break;
          BattleServantRaidParamComponent__updateRaidInfo(
            (BattleServantRaidParamComponent_o *)this,
            (BattleRaidInfo_o *)infos,
            fixUpdate,
            0);
        }
        max_length = v6->max_length;
        if ( (int)++v10 >= max_length )
          return;
      }
LABEL_13:
      sub_2213CDC(this, infos);
    }
  }
}


void BattlePerformanceEnemy__updateStateString(BattlePerformanceEnemy_o *this, const MethodInfo *method)
{
  BattleServantSuperBossParamComponent_o *superbossParam; // x0

  superbossParam = this->fields.superbossParam;
  if ( !superbossParam )
    sub_2213CDC(0, method);
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
  BattleSuperBossInfo_array *v6; // x21
  int max_length; // w8
  BattlePerformanceEnemy_o *v9; // x20
  unsigned int v10; // w23

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
      v9 = this;
      v10 = 0;
      while ( 1 )
      {
        if ( v10 >= max_length )
          sub_2213CE4(this);
        infos = (BattleSuperBossInfo_array *)v6->m_Items[v10];
        if ( !infos )
          break;
        if ( HIDWORD(infos->bounds) == data->fields.uniqueId )
        {
          this = (BattlePerformanceEnemy_o *)v9->fields.superbossParam;
          if ( !this )
            break;
          BattleServantSuperBossParamComponent__updateSuperBossInfo(
            (BattleServantSuperBossParamComponent_o *)this,
            (BattleSuperBossInfo_o *)infos,
            fixUpdate,
            0);
        }
        max_length = v6->max_length;
        if ( (int)++v10 >= max_length )
          return;
      }
LABEL_13:
      sub_2213CDC(this, infos);
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
  float v17; // s8
  float y; // s1
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4

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
      sub_2213CE4(this);
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
    sub_2213CDC(this, method);
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
            y = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0).fields.y;
            v16 = v3->fields._svtParamList_k__BackingField;
            if ( v16 )
            {
              if ( v13 >= LODWORD(v16->max_length) )
                goto LABEL_38;
              this = (BattlePerformanceEnemy_o *)*((_QWORD *)&v16->obj.klass + v11);
              if ( this )
              {
                v17 = y;
                this = (BattlePerformanceEnemy_o *)UnityEngine_Component__get_transform(
                                                     (UnityEngine_Component_o *)this,
                                                     0);
                if ( this )
                {
                  v19.fields.z = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0).fields.z;
                  if ( v15 )
                  {
                    v19.fields.x = (float)((float)(int)v13 * -200.0) + 178.0;
                    v19.fields.y = v17;
                    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)v15, v19, 0);
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


void BattlePerformanceEnemy__EnumerateStatusUi_d__36___ctor(
        BattlePerformanceEnemy__EnumerateStatusUi_d__36_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
  this->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0);
}


bool BattlePerformanceEnemy__EnumerateStatusUi_d__36__MoveNext(
        BattlePerformanceEnemy__EnumerateStatusUi_d__36_o *this,
        const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t _1__state; // w9
  struct BattlePerformanceEnemy_o *_4__this; // x8
  MissionNaviTransitionBoardItem_o *p__7__wrap1; // x0
  struct BattleServantParamComponent_o *superbossParam; // x1
  struct BattleServantParamComponent_o **p__2__current; // x19
  int v14; // w8
  int32_t _7__wrap2; // w8
  int32_t v16; // w8
  struct BattleServantParamComponent_o *raidParam; // x1
  struct BattleServantParamComponent_o **v18; // x19
  struct BattleServantParamComponent_array *svtParamList_k__BackingField; // x1
  struct BattleServantParamComponent_array *_7__wrap1; // x9
  int32_t max_length; // w10
  struct BattleServantParamComponent_o *v22; // x1

  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  p__7__wrap1 = 0;
  if ( _1__state > 1 )
  {
    if ( _1__state == 2 )
    {
      this->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_20;
      svtParamList_k__BackingField = _4__this->fields._svtParamList_k__BackingField;
      this->fields.__7__wrap1 = svtParamList_k__BackingField;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.__7__wrap1,
        (int32_t)svtParamList_k__BackingField,
        v2,
        v3,
        v4,
        v5,
        v6,
        v7);
      v16 = 0;
      this->fields.__7__wrap2 = 0;
    }
    else
    {
      if ( _1__state != 3 )
        return (char)p__7__wrap1;
      _7__wrap2 = this->fields.__7__wrap2;
      this->fields.__1__state = -1;
      v16 = _7__wrap2 + 1;
      this->fields.__7__wrap2 = v16;
    }
    p__7__wrap1 = (MissionNaviTransitionBoardItem_o *)&this->fields.__7__wrap1;
    _7__wrap1 = this->fields.__7__wrap1;
    if ( _7__wrap1 )
    {
      max_length = _7__wrap1->max_length;
      if ( v16 >= max_length )
      {
        p__7__wrap1->klass = 0;
        sub_2213A04(p__7__wrap1, 0, v2, v3, v4, v5, v6, v7);
        LOBYTE(p__7__wrap1) = 0;
        return (char)p__7__wrap1;
      }
      if ( v16 >= (unsigned int)max_length )
        sub_2213CE4(p__7__wrap1);
      v22 = _7__wrap1->m_Items[v16];
      this->fields.__2__current = v22;
      p__2__current = &this->fields.__2__current;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)p__2__current, (int32_t)v22, v2, v3, v4, v5, v6, v7);
      v14 = 3;
      goto LABEL_17;
    }
LABEL_20:
    sub_2213CDC(p__7__wrap1, method);
  }
  if ( _1__state )
  {
    if ( _1__state != 1 )
      return (char)p__7__wrap1;
    this->fields.__1__state = -1;
    if ( _4__this )
    {
      superbossParam = (struct BattleServantParamComponent_o *)_4__this->fields.superbossParam;
      this->fields.__2__current = superbossParam;
      p__2__current = &this->fields.__2__current;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)p__2__current, (int32_t)superbossParam, v2, v3, v4, v5, v6, v7);
      v14 = 2;
LABEL_17:
      *((_DWORD *)p__2__current - 2) = v14;
      LOBYTE(p__7__wrap1) = 1;
      return (char)p__7__wrap1;
    }
    goto LABEL_20;
  }
  this->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_20;
  raidParam = (struct BattleServantParamComponent_o *)_4__this->fields.raidParam;
  this->fields.__2__current = raidParam;
  v18 = &this->fields.__2__current;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)v18, (int32_t)raidParam, v2, v3, v4, v5, v6, v7);
  *((_DWORD *)v18 - 2) = 1;
  LOBYTE(p__7__wrap1) = 1;
  return (char)p__7__wrap1;
}


System_Collections_Generic_IEnumerator_BattleServantParamComponent__o *BattlePerformanceEnemy__EnumerateStatusUi_d__36__System_Collections_Generic_IEnumerable_BattleServantParamComponent__GetEnumerator(
        BattlePerformanceEnemy__EnumerateStatusUi_d__36_o *this,
        const MethodInfo *method)
{
  int32_t l__initialThreadId; // w20
  __int64 v4; // x20
  int32_t CurrentManagedThreadId; // w0
  struct BattlePerformanceEnemy_o *_4__this; // x1
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7

  if ( (byte_5974039 & 1) == 0 )
  {
    sub_2213A60(&BattlePerformanceEnemy__EnumerateStatusUi_d__36_TypeInfo);
    byte_5974039 = 1;
  }
  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0)) )
  {
    this->fields.__1__state = 0;
  }
  else
  {
    v4 = sub_2213CCC(BattlePerformanceEnemy__EnumerateStatusUi_d__36_TypeInfo);
    System_Object___ctor((Il2CppObject *)v4, 0);
    *(_DWORD *)(v4 + 16) = 0;
    CurrentManagedThreadId = System_Environment__get_CurrentManagedThreadId(0);
    _4__this = this->fields.__4__this;
    *(_DWORD *)(v4 + 32) = CurrentManagedThreadId;
    *(_QWORD *)(v4 + 40) = _4__this;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v4 + 40), (int32_t)_4__this, v7, v8, v9, v10, v11, v12);
    return (System_Collections_Generic_IEnumerator_BattleServantParamComponent__o *)v4;
  }
  return (System_Collections_Generic_IEnumerator_BattleServantParamComponent__o *)this;
}


BattleServantParamComponent_o *BattlePerformanceEnemy__EnumerateStatusUi_d__36__System_Collections_Generic_IEnumerator_BattleServantParamComponent__get_Current(
        BattlePerformanceEnemy__EnumerateStatusUi_d__36_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn BattlePerformanceEnemy__EnumerateStatusUi_d__36__System_Collections_IEnumerator_Reset(
        BattlePerformanceEnemy__EnumerateStatusUi_d__36_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_BattlePerformanceEnemy__EnumerateStatusUi_d__36_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
}


Il2CppObject *BattlePerformanceEnemy__EnumerateStatusUi_d__36__System_Collections_IEnumerator_get_Current(
        BattlePerformanceEnemy__EnumerateStatusUi_d__36_o *this,
        const MethodInfo *method)
{
  return (Il2CppObject *)this->fields.__2__current;
}


void BattlePerformanceEnemy__EnumerateStatusUi_d__36__System_IDisposable_Dispose(
        BattlePerformanceEnemy__EnumerateStatusUi_d__36_o *this,
        const MethodInfo *method)
{
  ;
}


void BattlePerformanceEnemy___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5974037 & 1) == 0 )
  {
    sub_2213A60(&BattlePerformanceEnemy___c_TypeInfo);
    byte_5974037 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(BattlePerformanceEnemy___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattlePerformanceEnemy___c_TypeInfo->static_fields->__9 = (struct BattlePerformanceEnemy___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)BattlePerformanceEnemy___c_TypeInfo->static_fields,
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


bool BattlePerformanceEnemy___c___EnumerateUsingStatusUi_b__37_0(
        BattlePerformanceEnemy___c_o *this,
        BattleServantParamComponent_o *x,
        const MethodInfo *method)
{
  _BOOL8 v4; // x0
  __int64 v5; // x1

  if ( (byte_5974038 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974038 = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, x);
  v4 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)x, 0, 0);
  if ( !v4 )
    return 0;
  if ( !x )
    sub_2213CDC(v4, v5);
  return x->fields.data != 0;
}


void BattlePerformanceEnemy___c__DisplayClass38_0___ctor(
        BattlePerformanceEnemy___c__DisplayClass38_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattlePerformanceEnemy___c__DisplayClass38_0___GetStatusUiBySvtData_b__0(
        BattlePerformanceEnemy___c__DisplayClass38_0_o *this,
        BattleServantParamComponent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return BattleServantParamComponent__IsMatchOwner(x, this->fields.svtData, 0);
}


void BattlePerformanceEnemy___c__DisplayClass70_0___ctor(
        BattlePerformanceEnemy___c__DisplayClass70_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattlePerformanceEnemy___c__DisplayClass70_0___GetSvtParamComponent_b__0(
        BattlePerformanceEnemy___c__DisplayClass70_0_o *this,
        BattleServantParamComponent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return BattleServantParamComponent__checkId(x, this->fields.uniqueId, 0);
}