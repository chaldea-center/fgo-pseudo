void BattlePerformanceEnemy___ctor(BattlePerformanceEnemy_o *this, const MethodInfo *method)
{
  struct System_Int32_array *v3; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C3AED6 & 1) == 0 )
  {
    sub_1C32C20(&int___TypeInfo);
    byte_4C3AED6 = 1;
  }
  v3 = (struct System_Int32_array *)sub_1C32CC8(int___TypeInfo, 3);
  this->fields.list_ID = v3;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.list_ID, (int32_t)v3, v4, v5);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void BattlePerformanceEnemy__DeleteStatusByUniqueId(
        BattlePerformanceEnemy_o *this,
        int32_t uniqueId,
        const MethodInfo *method)
{
  struct BattleServantParamComponent_array *svtParamList; // x9
  int max_length; // w10
  int32_t v6; // w1
  int32_t v7; // w11
  BattleServantParamComponent_o *v8; // x12

  svtParamList = this->fields.svtParamList;
  if ( !svtParamList )
LABEL_12:
    sub_1C32E7C(this);
  max_length = svtParamList->max_length;
  v6 = max_length & ~(max_length >> 31);
  if ( max_length >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      if ( max_length == v7 )
        sub_1C32E84(this);
      v8 = svtParamList->m_Items[v7];
      if ( !v8 )
        goto LABEL_12;
      if ( v8->fields.uniqueID == uniqueId )
        break;
      if ( v6 == ++v7 )
        goto LABEL_10;
    }
    v6 = v7;
  }
LABEL_10:
  BattlePerformanceEnemy__deleteStatus(this, v6, method);
}


bool BattlePerformanceEnemy__ExistsFieldNormalEnemy(BattlePerformanceEnemy_o *this, const MethodInfo *method)
{
  void *svtParamList; // x0
  int32_t v4; // w20
  int32_t v5; // w24
  Il2CppObject *v6; // x21

  if ( (byte_4C3AED1 & 1) == 0 )
  {
    sub_1C32C20(&Method_BasicHelper_IndexValue_BattleServantParamComponent___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3AED1 = 1;
  }
  svtParamList = this->fields.svtParamList;
  if ( !svtParamList )
LABEL_13:
    sub_1C32E7C(svtParamList);
  v4 = 0;
  while ( 1 )
  {
    v5 = *((_DWORD *)svtParamList + 6);
    if ( v4 >= v5 )
      return v4 < v5;
    v6 = BasicHelper__IndexValue_object_(
           (System_Object_array *)svtParamList,
           v4,
           0,
           (const MethodInfo_30CB990 *)Method_BasicHelper_IndexValue_BattleServantParamComponent___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    svtParamList = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v6, 0, 0);
    if ( ((unsigned __int8)svtParamList & 1) != 0 )
    {
      if ( !v6 )
        goto LABEL_13;
      svtParamList = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v6, 0);
      if ( !svtParamList )
        goto LABEL_13;
      if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)svtParamList, 0) )
        return v4 < v5;
    }
    svtParamList = this->fields.svtParamList;
    ++v4;
    if ( !svtParamList )
      goto LABEL_13;
  }
}


bool BattlePerformanceEnemy__ExistsFrontRow(BattlePerformanceEnemy_o *this, const MethodInfo *method)
{
  unsigned int v3; // w20
  char v4; // w24
  Il2CppObject *v5; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  bool v7; // cf

  if ( (byte_4C3AECF & 1) == 0 )
  {
    sub_1C32C20(&Method_BasicHelper_IndexValue_BattleServantParamComponent___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3AECF = 1;
  }
  v3 = 0;
  v4 = 1;
  do
  {
    v5 = BasicHelper__IndexValue_object_(
           (System_Object_array *)this->fields.svtParamList,
           v3,
           0,
           (const MethodInfo_30CB990 *)Method_BasicHelper_IndexValue_BattleServantParamComponent___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v5, 0, 0);
    if ( ((unsigned __int8)gameObject & 1) != 0 )
    {
      if ( !v5 || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v5, 0)) == 0 )
        sub_1C32E7C(gameObject);
      if ( UnityEngine_GameObject__get_activeSelf(gameObject, 0) )
        break;
    }
    v7 = v3++ >= 2;
    v4 = !v7;
  }
  while ( v3 != 3 );
  return v4;
}


BattleServantParamComponent_o *BattlePerformanceEnemy__GetSvtParamComponent(
        BattlePerformanceEnemy_o *this,
        int32_t uniqueId,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  System_Object_array *svtParamList; // x19
  System_Predicate_object__o *v8; // x20

  if ( (byte_4C3AED5 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Array_Find_BattleServantParamComponent___);
    sub_1C32C20(&System_Predicate_BattleServantParamComponent__TypeInfo);
    sub_1C32C20(&Method_BattlePerformanceEnemy___c__DisplayClass44_0__GetSvtParamComponent_b__0__);
    sub_1C32C20(&BattlePerformanceEnemy___c__DisplayClass44_0_TypeInfo);
    byte_4C3AED5 = 1;
  }
  v5 = sub_1C32E6C(BattlePerformanceEnemy___c__DisplayClass44_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C32E7C(v6);
  *(_DWORD *)(v5 + 16) = uniqueId;
  svtParamList = (System_Object_array *)this->fields.svtParamList;
  v8 = (System_Predicate_object__o *)sub_1C32E6C(System_Predicate_BattleServantParamComponent__TypeInfo);
  System_Predicate_object____ctor(
    v8,
    (Il2CppObject *)v5,
    Method_BattlePerformanceEnemy___c__DisplayClass44_0__GetSvtParamComponent_b__0__,
    0);
  return (BattleServantParamComponent_o *)System_Array__Find_object_(
                                            svtParamList,
                                            (System_Predicate_T__o *)v8,
                                            (const MethodInfo_31E22DC *)Method_System_Array_Find_BattleServantParamComponent___);
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
    sub_1C32E7C(0);
  v5 = BattleServantParamComponent__checkId(superbossParam, uniqueId, 0);
  result = 0;
  if ( v5 )
    return (BattleServantParamComponent_o *)this->fields.superbossParam;
  return result;
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
  struct BattlePerformance_o **p_perf; // x20
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  __int64 v11; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  struct BattleServantParamComponent_array *svtParamList; // x8
  __int64 v15; // x22
  int max_length; // w9
  CGThumbnailListItem_o *v17; // x8
  struct BattlePerformance_o *v18; // x1
  CGThumbnailListItem_o *raidParam; // x8
  struct BattlePerformance_o *perf; // x1
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  CGThumbnailListItem_o *superbossParam; // x8
  struct BattlePerformance_o *v24; // x1
  struct BattleServantParamComponent_array *v25; // x8
  struct System_Int32_array *v26; // x0
  int32_t v27; // w2
  const MethodInfo *v28; // x3

  if ( (byte_4C3AECC & 1) == 0 )
  {
    sub_1C32C20(&int___TypeInfo);
    byte_4C3AECC = 1;
  }
  this->fields.perf = inperf;
  p_perf = &this->fields.perf;
  sub_1C32BC4(
    (CGThumbnailListItem_o *)&this->fields.perf,
    (int32_t)inperf,
    (int32_t)indata,
    (const MethodInfo *)inlogic);
  this->fields.bdata = indata;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.bdata, (int32_t)indata, v9, v10);
  svtParamList = this->fields.svtParamList;
  if ( !svtParamList )
    goto LABEL_9;
  v15 = 0;
  while ( 1 )
  {
    max_length = svtParamList->max_length;
    if ( (int)v15 >= max_length )
      break;
    if ( (unsigned int)v15 >= max_length )
      sub_1C32E84(v11);
    v17 = (CGThumbnailListItem_o *)svtParamList->m_Items[v15];
    if ( v17 )
    {
      v18 = *p_perf;
      v17[2].klass = (CGThumbnailListItem_c *)*p_perf;
      sub_1C32BC4(v17 + 2, (int32_t)v18, v12, v13);
      svtParamList = this->fields.svtParamList;
      ++v15;
      if ( svtParamList )
        continue;
    }
    goto LABEL_9;
  }
  raidParam = (CGThumbnailListItem_o *)this->fields.raidParam;
  if ( !raidParam )
    goto LABEL_9;
  perf = this->fields.perf;
  raidParam[2].klass = (CGThumbnailListItem_c *)perf;
  sub_1C32BC4(raidParam + 2, (int32_t)perf, v12, v13);
  superbossParam = (CGThumbnailListItem_o *)this->fields.superbossParam;
  if ( !superbossParam
    || (v24 = this->fields.perf,
        superbossParam[2].klass = (CGThumbnailListItem_c *)v24,
        sub_1C32BC4(superbossParam + 2, (int32_t)v24, v21, v22),
        (v25 = this->fields.svtParamList) == 0) )
  {
LABEL_9:
    sub_1C32E7C(v11);
  }
  v26 = (struct System_Int32_array *)sub_1C32CC8(int___TypeInfo, LODWORD(v25->max_length));
  this->fields.list_ID = v26;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.list_ID, (int32_t)v26, v27, v28);
}


bool BattlePerformanceEnemy__IsExistsBackRow(BattlePerformanceEnemy_o *this, const MethodInfo *method)
{
  void *svtParamList; // x0
  int32_t v4; // w20
  int32_t v5; // w24
  Il2CppObject *v6; // x21

  if ( (byte_4C3AED0 & 1) == 0 )
  {
    sub_1C32C20(&Method_BasicHelper_IndexValue_BattleServantParamComponent___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3AED0 = 1;
  }
  svtParamList = this->fields.svtParamList;
  if ( !svtParamList )
LABEL_13:
    sub_1C32E7C(svtParamList);
  v4 = 3;
  while ( 1 )
  {
    v5 = *((_DWORD *)svtParamList + 6);
    if ( v4 >= v5 )
      return v4 < v5;
    v6 = BasicHelper__IndexValue_object_(
           (System_Object_array *)svtParamList,
           v4,
           0,
           (const MethodInfo_30CB990 *)Method_BasicHelper_IndexValue_BattleServantParamComponent___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    svtParamList = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v6, 0, 0);
    if ( ((unsigned __int8)svtParamList & 1) != 0 )
    {
      if ( !v6 )
        goto LABEL_13;
      svtParamList = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v6, 0);
      if ( !svtParamList )
        goto LABEL_13;
      if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)svtParamList, 0) )
        return v4 < v5;
    }
    svtParamList = this->fields.svtParamList;
    ++v4;
    if ( !svtParamList )
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

  if ( (byte_4C3AECE & 1) == 0 )
  {
    sub_1C32C20(&PosCountNormalEnemyParamPosData_TypeInfo);
    sub_1C32C20(&PosCountSpEnemyParamPosData_TypeInfo);
    byte_4C3AECE = 1;
  }
  bdata = this->fields.bdata;
  if ( !bdata )
    sub_1C32E7C(0);
  if ( BattleData__get_IsEnemyPosCountNormal(bdata, 0) )
    v4 = &PosCountNormalEnemyParamPosData_TypeInfo;
  else
    v4 = &PosCountSpEnemyParamPosData_TypeInfo;
  v5 = (Il2CppObject *)sub_1C32E6C(*v4);
  System_Object___ctor(v5, 0);
  return (BaseEnemyParamPosData_o *)v5;
}


void BattlePerformanceEnemy__OnDestroy(BattlePerformanceEnemy_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  this->fields.exUiController = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.exUiController, 0, v2, v3);
}


void BattlePerformanceEnemy__SetActiveParameterView(
        BattlePerformanceEnemy_o *this,
        int32_t index,
        bool val,
        const MethodInfo *method)
{
  struct BattleServantParamComponent_array *svtParamList; // x8
  int32_t max_length; // w9

  if ( (index & 0x80000000) == 0 )
  {
    svtParamList = this->fields.svtParamList;
    if ( !svtParamList )
      goto LABEL_9;
    max_length = svtParamList->max_length;
    if ( max_length > index )
    {
      if ( max_length <= (unsigned int)index )
        sub_1C32E84(this);
      this = (BattlePerformanceEnemy_o *)svtParamList->m_Items[index];
      if ( this )
      {
        BattleServantParamComponent__SetActiveParameterView((BattleServantParamComponent_o *)this, val, 0);
        return;
      }
LABEL_9:
      sub_1C32E7C(this);
    }
  }
}


void BattlePerformanceEnemy__SetNormalEnemyStatusUI(
        BattlePerformanceEnemy_o *this,
        int32_t index,
        BattleServantData_o *svtdata,
        const MethodInfo *method)
{
  BattlePerformanceEnemy_o *v6; // x21
  struct BattleServantParamComponent_array *svtParamList; // x8
  UnityEngine_Object_o *v8; // x22
  struct BattleServantParamComponent_array *v9; // x8
  BattleServantParamComponent_o *v10; // x22
  StageEntity_o *StageEntity; // x0
  struct BattleServantParamComponent_array *v12; // x8
  struct BattleServantParamComponent_array *v13; // x8

  v6 = this;
  if ( (byte_4C3AED2 & 1) == 0 )
  {
    this = (BattlePerformanceEnemy_o *)sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3AED2 = 1;
  }
  svtParamList = v6->fields.svtParamList;
  if ( !svtParamList )
    goto LABEL_21;
  if ( LODWORD(svtParamList->max_length) <= index )
LABEL_22:
    sub_1C32E84(this);
  v8 = (UnityEngine_Object_o *)svtParamList->m_Items[index];
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattlePerformanceEnemy_o *)UnityEngine_Object__op_Inequality(v8, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v9 = v6->fields.svtParamList;
    if ( !v9 )
      goto LABEL_21;
    if ( LODWORD(v9->max_length) > index )
    {
      v10 = v9->m_Items[index];
      if ( !v10 )
        goto LABEL_21;
      v10->fields.index = index;
      this = (BattlePerformanceEnemy_o *)v6->fields.bdata;
      if ( !this )
        goto LABEL_21;
      StageEntity = BattleData__getStageEntity((BattleData_o *)this, 0);
      this = (BattlePerformanceEnemy_o *)((__int64 (__fastcall *)(BattleServantParamComponent_o *, BattleServantData_o *, StageEntity_o *, const MethodInfo *))v10->klass->vtable._8_setData.methodPtr)(
                                           v10,
                                           svtdata,
                                           StageEntity,
                                           v10->klass->vtable._8_setData.method);
      v12 = v6->fields.svtParamList;
      if ( !v12 )
        goto LABEL_21;
      if ( LODWORD(v12->max_length) > index )
      {
        this = (BattlePerformanceEnemy_o *)v12->m_Items[index];
        if ( !this )
          goto LABEL_21;
        BattleServantParamComponent__setTouch((BattleServantParamComponent_o *)this, 1, 0);
        v13 = v6->fields.svtParamList;
        if ( !v13 )
          goto LABEL_21;
        if ( LODWORD(v13->max_length) > index )
        {
          this = (BattlePerformanceEnemy_o *)v13->m_Items[index];
          if ( this )
          {
            this = (BattlePerformanceEnemy_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
            if ( svtdata )
            {
              BattleServantData__addParamObject(svtdata, (UnityEngine_GameObject_o *)this, 0);
              return;
            }
          }
LABEL_21:
          sub_1C32E7C(this);
        }
      }
    }
    goto LABEL_22;
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
  struct BattleServantHeadUpComponent_array *svtHeadUpList; // x8
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
  if ( (byte_4C3AED4 & 1) == 0 )
  {
    sub_1C32C20(&AdjustPopupPosInScreenArgument_TypeInfo);
    this = (BattlePerformanceEnemy_o *)sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    byte_4C3AED4 = 1;
  }
  svtHeadUpList = v8->fields.svtHeadUpList;
  if ( !svtHeadUpList )
    goto LABEL_20;
  if ( LODWORD(svtHeadUpList->max_length) <= index )
    goto LABEL_21;
  this = (BattlePerformanceEnemy_o *)svtHeadUpList->m_Items[index];
  if ( !this )
    goto LABEL_20;
  BattleServantHeadUpComponent__setData((BattleServantHeadUpComponent_o *)this, svtData, 0);
  v10 = v8->fields.svtHeadUpList;
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
                                                     (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___),
        v14 = (AdjustPopupPosInScreenArgument_o *)sub_1C32E6C(AdjustPopupPosInScreenArgument_TypeInfo),
        AdjustPopupPosInScreenArgument___ctor(v14, 0),
        !v14)
    || (v14->fields.IsExec = 0, (v15 = v8->fields.svtHeadUpList) == 0) )
  {
LABEL_20:
    sub_1C32E7C(this);
  }
  if ( LODWORD(v15->max_length) <= index )
LABEL_21:
    sub_1C32E84(this);
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


bool BattlePerformanceEnemy__checkRaidUpdateHp(BattlePerformanceEnemy_o *this, const MethodInfo *method)
{
  struct BattleServantRaidParamComponent_o *raidParam; // x8

  raidParam = this->fields.raidParam;
  if ( !raidParam )
    sub_1C32E7C(this);
  return raidParam->fields.flgUpdate;
}


void BattlePerformanceEnemy__deleteStatus(BattlePerformanceEnemy_o *this, int32_t index, const MethodInfo *method)
{
  BattleServantHeadUpComponent_o *IsValidIndex_object__51166528; // x0
  struct BattleServantHeadUpComponent_array *svtHeadUpList; // x8
  UnityEngine_Object_o *v7; // x21
  struct BattleServantHeadUpComponent_array *v8; // x8
  struct System_Int32_array *list_ID; // x8
  struct BattleServantHeadUpComponent_array *v10; // x8
  struct BattleServantParamComponent_array *svtParamList; // x8
  UnityEngine_Object_o *v12; // x21
  struct BattleServantParamComponent_array *v13; // x8

  if ( (byte_4C3AECD & 1) == 0 )
  {
    sub_1C32C20(&Method_BasicHelper_IsValidIndex_BattleServantHeadUpComponent___);
    sub_1C32C20(&Method_BasicHelper_IsValidIndex_BattleServantParamComponent___);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_TrackingMoveCtCComponent___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3AECD = 1;
  }
  if ( BasicHelper__IsValidIndex_object__51166528(
         (System_Object_array *)this->fields.svtHeadUpList,
         index,
         (const MethodInfo_30CBD40 *)Method_BasicHelper_IsValidIndex_BattleServantHeadUpComponent___) )
  {
    IsValidIndex_object__51166528 = (BattleServantHeadUpComponent_o *)BasicHelper__IsValidIndex_object__51166528(
                                                                        (System_Object_array *)this->fields.svtParamList,
                                                                        index,
                                                                        (const MethodInfo_30CBD40 *)Method_BasicHelper_IsValidIndex_BattleServantParamComponent___);
    if ( ((unsigned __int8)IsValidIndex_object__51166528 & 1) != 0 )
    {
      svtHeadUpList = this->fields.svtHeadUpList;
      if ( !svtHeadUpList )
        goto LABEL_31;
      if ( LODWORD(svtHeadUpList->max_length) <= index )
        goto LABEL_32;
      v7 = (UnityEngine_Object_o *)svtHeadUpList->m_Items[index];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      IsValidIndex_object__51166528 = (BattleServantHeadUpComponent_o *)UnityEngine_Object__op_Inequality(v7, 0, 0);
      if ( ((unsigned __int8)IsValidIndex_object__51166528 & 1) != 0 )
      {
        v8 = this->fields.svtHeadUpList;
        if ( !v8 )
          goto LABEL_31;
        if ( LODWORD(v8->max_length) <= index )
          goto LABEL_32;
        IsValidIndex_object__51166528 = v8->m_Items[index];
        if ( !IsValidIndex_object__51166528 )
          goto LABEL_31;
        BattleServantHeadUpComponent__setData(IsValidIndex_object__51166528, 0, 0);
        list_ID = this->fields.list_ID;
        if ( !list_ID )
          goto LABEL_31;
        if ( LODWORD(list_ID->max_length) <= index )
          goto LABEL_32;
        list_ID->m_Items[index] = -1;
        v10 = this->fields.svtHeadUpList;
        if ( !v10 )
          goto LABEL_31;
        if ( LODWORD(v10->max_length) <= index )
LABEL_32:
          sub_1C32E84(IsValidIndex_object__51166528);
        IsValidIndex_object__51166528 = v10->m_Items[index];
        if ( !IsValidIndex_object__51166528 )
          goto LABEL_31;
        IsValidIndex_object__51166528 = (BattleServantHeadUpComponent_o *)UnityEngine_Component__get_gameObject(
                                                                            (UnityEngine_Component_o *)IsValidIndex_object__51166528,
                                                                            0);
        if ( !IsValidIndex_object__51166528 )
          goto LABEL_31;
        IsValidIndex_object__51166528 = (BattleServantHeadUpComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                            (UnityEngine_GameObject_o *)IsValidIndex_object__51166528,
                                                                            (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_TrackingMoveCtCComponent___);
        if ( !IsValidIndex_object__51166528 )
          goto LABEL_31;
        TrackingMoveCtCComponent__stopAct((TrackingMoveCtCComponent_o *)IsValidIndex_object__51166528, 0);
      }
      svtParamList = this->fields.svtParamList;
      if ( !svtParamList )
        goto LABEL_31;
      if ( LODWORD(svtParamList->max_length) <= index )
        goto LABEL_32;
      v12 = (UnityEngine_Object_o *)svtParamList->m_Items[index];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      IsValidIndex_object__51166528 = (BattleServantHeadUpComponent_o *)UnityEngine_Object__op_Inequality(v12, 0, 0);
      if ( ((unsigned __int8)IsValidIndex_object__51166528 & 1) != 0 )
      {
        v13 = this->fields.svtParamList;
        if ( !v13 )
          goto LABEL_31;
        if ( LODWORD(v13->max_length) > index )
        {
          IsValidIndex_object__51166528 = (BattleServantHeadUpComponent_o *)v13->m_Items[index];
          if ( IsValidIndex_object__51166528 )
          {
            ((void (__fastcall *)(BattleServantHeadUpComponent_o *, _QWORD, _QWORD, Il2CppClass *))IsValidIndex_object__51166528->klass[1]._1.element_class)(
              IsValidIndex_object__51166528,
              0,
              0,
              IsValidIndex_object__51166528->klass[1]._1.castClass);
            return;
          }
LABEL_31:
          sub_1C32E7C(IsValidIndex_object__51166528);
        }
        goto LABEL_32;
      }
    }
  }
}


void BattlePerformanceEnemy__endSkill(BattlePerformanceEnemy_o *this, const MethodInfo *method)
{
  struct BattleServantHeadUpComponent_array *svtHeadUpList; // x8
  BattlePerformanceEnemy_o *v3; // x19
  __int64 v4; // x20
  int max_length; // w9

  svtHeadUpList = this->fields.svtHeadUpList;
  if ( !svtHeadUpList )
LABEL_7:
    sub_1C32E7C(this);
  v3 = this;
  v4 = 0;
  while ( 1 )
  {
    max_length = svtHeadUpList->max_length;
    if ( (int)v4 >= max_length )
      break;
    if ( (unsigned int)v4 >= max_length )
      sub_1C32E84(this);
    this = (BattlePerformanceEnemy_o *)svtHeadUpList->m_Items[v4];
    if ( this )
    {
      BattleServantHeadUpComponent__setTargetRoot((BattleServantHeadUpComponent_o *)this, 1, 0);
      svtHeadUpList = v3->fields.svtHeadUpList;
      ++v4;
      if ( svtHeadUpList )
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
    sub_1C32E7C(0);
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
  const MethodInfo *v7; // x3

  if ( (byte_4C3AECB & 1) == 0 )
  {
    sub_1C32C20(&ExtraBattleUserInterfaceController_TypeInfo);
    byte_4C3AECB = 1;
  }
  result = this->fields.exUiController;
  if ( !result )
  {
    bdata = this->fields.bdata;
    v5 = (ExtraBattleUserInterfaceController_o *)sub_1C32E6C(ExtraBattleUserInterfaceController_TypeInfo);
    ExtraBattleUserInterfaceController___ctor(v5, (IBattlePerformanceExtraUiParent_o *)this, bdata, 0);
    this->fields.exUiController = v5;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.exUiController, (int32_t)v5, v6, v7);
    return this->fields.exUiController;
  }
  return result;
}


void BattlePerformanceEnemy__playAddition(BattlePerformanceEnemy_o *this, const MethodInfo *method)
{
  struct BattleServantParamComponent_array *svtParamList; // x8
  BattlePerformanceEnemy_o *v3; // x19
  __int64 v4; // x20
  int max_length; // w9

  svtParamList = this->fields.svtParamList;
  if ( !svtParamList )
LABEL_7:
    sub_1C32E7C(this);
  v3 = this;
  v4 = 0;
  while ( 1 )
  {
    max_length = svtParamList->max_length;
    if ( (int)v4 >= max_length )
      break;
    if ( (unsigned int)v4 >= max_length )
      sub_1C32E84(this);
    this = (BattlePerformanceEnemy_o *)svtParamList->m_Items[v4];
    if ( this )
    {
      BattleServantParamComponent__playAddition((BattleServantParamComponent_o *)this, 0);
      svtParamList = v3->fields.svtParamList;
      ++v4;
      if ( svtParamList )
        continue;
    }
    goto LABEL_7;
  }
}


void BattlePerformanceEnemy__setOffTarget(BattlePerformanceEnemy_o *this, const MethodInfo *method)
{
  struct BattleServantHeadUpComponent_array *svtHeadUpList; // x8
  BattlePerformanceEnemy_o *v3; // x19
  __int64 v4; // x20
  int max_length; // w9
  struct BattleServantParamComponent_array *svtParamList; // x8
  __int64 v7; // x20
  int v8; // w9

  svtHeadUpList = this->fields.svtHeadUpList;
  if ( !svtHeadUpList )
    goto LABEL_18;
  v3 = this;
  v4 = 0;
  while ( 1 )
  {
    max_length = svtHeadUpList->max_length;
    if ( (int)v4 >= max_length )
      break;
    if ( (unsigned int)v4 >= max_length )
LABEL_19:
      sub_1C32E84(this);
    this = (BattlePerformanceEnemy_o *)svtHeadUpList->m_Items[v4];
    if ( this )
    {
      BattleServantHeadUpComponent__setTargetMark((BattleServantHeadUpComponent_o *)this, -1, 0, 0);
      svtHeadUpList = v3->fields.svtHeadUpList;
      ++v4;
      if ( svtHeadUpList )
        continue;
    }
    goto LABEL_18;
  }
  svtParamList = v3->fields.svtParamList;
  if ( !svtParamList )
    goto LABEL_18;
  v7 = 0;
  while ( 1 )
  {
    v8 = svtParamList->max_length;
    if ( (int)v7 >= v8 )
      break;
    if ( (unsigned int)v7 >= v8 )
      goto LABEL_19;
    this = (BattlePerformanceEnemy_o *)svtParamList->m_Items[v7];
    if ( this )
    {
      BattleServantParamComponent__setTargetMark((BattleServantParamComponent_o *)this, -1, 0, 0);
      svtParamList = v3->fields.svtParamList;
      ++v7;
      if ( svtParamList )
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
    sub_1C32E7C(this);
  }
  BattleServantParamComponent__setTargetMark((BattleServantParamComponent_o *)this, -1, 0, 0);
}


void BattlePerformanceEnemy__setParam(
        BattlePerformanceEnemy_o *this,
        int32_t index,
        BattleServantData_o *svtdata,
        UnityEngine_GameObject_o *target,
        const MethodInfo *method)
{
  BattlePerformanceEnemy_o *v7; // x20
  struct BattlePerformance_o *perf; // x8
  const MethodInfo *v9; // x3
  struct BattleServantRaidParamComponent_o *raidParam; // x22
  StageEntity_o *StageEntity; // x0
  struct BattleData_o *bdata; // x8
  struct BattleServantRaidParamComponent_o *v13; // x22
  struct BattlePerformance_o *v14; // x8
  EventRaidEntity_o *v15; // x8
  BattleServantRaidParamComponent_o *v16; // x22
  BattlePerformanceEnemy_o *splitHp; // x23
  struct BattleServantSuperBossParamComponent_o *superbossParam; // x22
  StageEntity_o *v19; // x0
  struct BattlePerformance_o *v20; // x8
  BattleServantSuperBossParamComponent_o *v21; // x22
  struct BattlePerformance_o *v22; // x8
  BattlePerformanceEnemy_o *v23; // x23
  UnityEngine_Object_o *v24; // x22
  struct BattleServantSuperBossParamComponent_o *v25; // x22
  StageEntity_o *v26; // x0
  struct BattlePerformance_o *v27; // x8
  UnityEngine_Object_o *v28; // x22
  struct BattleServantRaidParamComponent_o *v29; // x22
  StageEntity_o *v30; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  EventRaidEntity_o *raidEnt; // [xsp+8h] [xbp-38h] BYREF

  v7 = this;
  if ( (byte_4C3AED3 & 1) == 0 )
  {
    sub_1C32C20(&long___TypeInfo);
    this = (BattlePerformanceEnemy_o *)sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3AED3 = 1;
  }
  raidEnt = 0;
  perf = v7->fields.perf;
  if ( !perf )
    goto LABEL_52;
  this = (BattlePerformanceEnemy_o *)perf->fields.data;
  if ( !this )
    goto LABEL_52;
  this = (BattlePerformanceEnemy_o *)BattleData__getStageEntity((BattleData_o *)this, 0);
  if ( !this )
    goto LABEL_52;
  this = (BattlePerformanceEnemy_o *)StageEntity__IsForceSetNormalEnemyStatusUI((StageEntity_o *)this, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
LABEL_7:
    BattlePerformanceEnemy__SetNormalEnemyStatusUI(v7, index, svtdata, v9);
    return;
  }
  if ( !svtdata )
    goto LABEL_52;
  if ( svtdata->fields.isRaid )
  {
    raidParam = v7->fields.raidParam;
    if ( !raidParam )
      goto LABEL_52;
    raidParam->fields.index = index;
    this = (BattlePerformanceEnemy_o *)v7->fields.bdata;
    if ( !this )
      goto LABEL_52;
    StageEntity = BattleData__getStageEntity((BattleData_o *)this, 0);
    this = (BattlePerformanceEnemy_o *)((__int64 (__fastcall *)(struct BattleServantRaidParamComponent_o *, BattleServantData_o *, StageEntity_o *, const MethodInfo *))raidParam->klass->vtable._8_setData.methodPtr)(
                                         raidParam,
                                         svtdata,
                                         StageEntity,
                                         raidParam->klass->vtable._8_setData.method);
    bdata = v7->fields.bdata;
    if ( !bdata )
      goto LABEL_52;
    this = (BattlePerformanceEnemy_o *)bdata->fields.battle_ent;
    if ( !this )
      goto LABEL_52;
    v13 = v7->fields.raidParam;
    this = (BattlePerformanceEnemy_o *)BattleEntity__isDefeatCount((BattleEntity_o *)this, 0);
    if ( !v13 )
      goto LABEL_52;
    v13->fields.isDefeatCount = (unsigned __int8)this & 1;
    v14 = v7->fields.perf;
    if ( !v14 )
      goto LABEL_52;
    this = (BattlePerformanceEnemy_o *)v14->fields.data;
    if ( !this )
      goto LABEL_52;
    this = (BattlePerformanceEnemy_o *)BattleData__TryGetRaidEntity(
                                         (BattleData_o *)this,
                                         &raidEnt,
                                         svtdata->fields.raidId,
                                         0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v15 = raidEnt;
      if ( !raidEnt )
        goto LABEL_52;
      v16 = v7->fields.raidParam;
      if ( !v16 )
        goto LABEL_52;
      v16->fields.isJumbleRaid = raidEnt->fields.groupIndex > 0;
      splitHp = (BattlePerformanceEnemy_o *)v15->fields.splitHp;
    }
    else
    {
      this = (BattlePerformanceEnemy_o *)sub_1C32CC8(long___TypeInfo, 0);
      v16 = v7->fields.raidParam;
      splitHp = this;
    }
    v27 = v7->fields.perf;
    if ( !v27 )
      goto LABEL_52;
    this = (BattlePerformanceEnemy_o *)v27->fields.data;
    if ( !this )
      goto LABEL_52;
    this = (BattlePerformanceEnemy_o *)BattleData__getRaidBossMaxHp((BattleData_o *)this, svtdata->fields.raidId, 0);
    if ( !v16 )
      goto LABEL_52;
    BattleServantRaidParamComponent__setSplitHp(v16, (System_Int64_array *)splitHp, (int64_t)this, 0);
    v28 = (UnityEngine_Object_o *)v7->fields.raidParam;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (BattlePerformanceEnemy_o *)UnityEngine_Object__op_Inequality(v28, 0, 0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v29 = v7->fields.raidParam;
      if ( v29 )
      {
        v29->fields.index = index;
        this = (BattlePerformanceEnemy_o *)v7->fields.bdata;
        if ( this )
        {
          v30 = BattleData__getStageEntity((BattleData_o *)this, 0);
          ((void (__fastcall *)(struct BattleServantRaidParamComponent_o *, BattleServantData_o *, StageEntity_o *, const MethodInfo *))v29->klass->vtable._8_setData.methodPtr)(
            v29,
            svtdata,
            v30,
            v29->klass->vtable._8_setData.method);
          this = (BattlePerformanceEnemy_o *)v7->fields.raidParam;
          if ( this )
          {
            BattleServantParamComponent__setTouch((BattleServantParamComponent_o *)this, 1, 0);
            this = (BattlePerformanceEnemy_o *)v7->fields.raidParam;
            if ( this )
            {
LABEL_50:
              gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
              BattleServantData__addParamObject(svtdata, gameObject, 0);
              return;
            }
          }
        }
      }
LABEL_52:
      sub_1C32E7C(this);
    }
  }
  else
  {
    this = (BattlePerformanceEnemy_o *)BattleServantData__get_IsSuperBossUi(svtdata, 0);
    if ( ((unsigned __int8)this & 1) == 0 )
      goto LABEL_7;
    superbossParam = v7->fields.superbossParam;
    if ( !superbossParam )
      goto LABEL_52;
    superbossParam->fields.index = index;
    this = (BattlePerformanceEnemy_o *)v7->fields.bdata;
    if ( !this )
      goto LABEL_52;
    v19 = BattleData__getStageEntity((BattleData_o *)this, 0);
    this = (BattlePerformanceEnemy_o *)((__int64 (__fastcall *)(struct BattleServantSuperBossParamComponent_o *, BattleServantData_o *, StageEntity_o *, const MethodInfo *))superbossParam->klass->vtable._8_setData.methodPtr)(
                                         superbossParam,
                                         svtdata,
                                         v19,
                                         superbossParam->klass->vtable._8_setData.method);
    if ( svtdata->fields.isSuperBoss )
    {
      v20 = v7->fields.perf;
      if ( !v20 )
        goto LABEL_52;
      this = (BattlePerformanceEnemy_o *)v20->fields.data;
      if ( !this )
        goto LABEL_52;
      v21 = v7->fields.superbossParam;
      this = (BattlePerformanceEnemy_o *)BattleData__getSuperBossSplitHp(
                                           (BattleData_o *)this,
                                           svtdata->fields.superBossId,
                                           0);
      v22 = v7->fields.perf;
      if ( !v22 )
        goto LABEL_52;
      v23 = this;
      this = (BattlePerformanceEnemy_o *)v22->fields.data;
      if ( !this )
        goto LABEL_52;
      this = (BattlePerformanceEnemy_o *)BattleData__getSuperBossMaxHp(
                                           (BattleData_o *)this,
                                           svtdata->fields.superBossId,
                                           0);
      if ( !v21 )
        goto LABEL_52;
      BattleServantSuperBossParamComponent__setSplitHp(v21, (System_Int64_array *)v23, (int64_t)this, 0);
    }
    v24 = (UnityEngine_Object_o *)v7->fields.superbossParam;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (BattlePerformanceEnemy_o *)UnityEngine_Object__op_Inequality(v24, 0, 0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v25 = v7->fields.superbossParam;
      if ( v25 )
      {
        v25->fields.index = index;
        this = (BattlePerformanceEnemy_o *)v7->fields.bdata;
        if ( this )
        {
          v26 = BattleData__getStageEntity((BattleData_o *)this, 0);
          ((void (__fastcall *)(struct BattleServantSuperBossParamComponent_o *, BattleServantData_o *, StageEntity_o *, const MethodInfo *))v25->klass->vtable._8_setData.methodPtr)(
            v25,
            svtdata,
            v26,
            v25->klass->vtable._8_setData.method);
          this = (BattlePerformanceEnemy_o *)v7->fields.superbossParam;
          if ( this )
          {
            BattleServantParamComponent__setTouch((BattleServantParamComponent_o *)this, 1, 0);
            this = (BattlePerformanceEnemy_o *)v7->fields.superbossParam;
            if ( this )
              goto LABEL_50;
          }
        }
      }
      goto LABEL_52;
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void BattlePerformanceEnemy__setParamPosition(BattlePerformanceEnemy_o *this, const MethodInfo *method)
{
  struct BattlePerformance_o *perf; // x8
  BattlePerformanceEnemy_o *v3; // x19
  struct BattlePerformance_o *v4; // x8
  int m_CancellationTokenSource; // w8
  BattlePerformanceEnemy_o *v6; // x20
  unsigned int v7; // w21
  const MethodInfo *v8; // x1
  UnityEngine_Transform_o *nomalTr; // x21
  BaseEnemyParamPosData_o *v10; // x20
  int v11; // s0 OVERLAPPED
  UnityEngine_Transform_o *v14; // x21
  int v15; // s0 OVERLAPPED
  struct BattleData_o *bdata; // x8
  UnityEngine_Transform_o *exBattleUiParent; // x21
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float x; // s0 OVERLAPPED
  float y; // s1
  float z; // s2
  struct BattlePerformance_o *v24; // x8
  struct BattlePerformance_o *v25; // x8
  UnityEngine_Transform_o *v26; // x21
  float v27; // s0
  struct BattleServantParamComponent_array *svtParamList; // x19
  int max_length; // w8
  unsigned int v30; // w21
  int v31; // s0 OVERLAPPED
  int v32; // s1
  int v33; // s2
  struct BattlePerformance_o *v34; // x8
  UnityEngine_Transform_o *v35; // x21
  struct BattlePerformance_o *v36; // x8
  float v37; // s0
  float v38; // s1
  int v39; // s0 OVERLAPPED
  int v40; // s2
  UnityEngine_Vector3_o v41; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v42; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v43; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v44; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v45; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v46; // 0:s0.4,4:s1.4,8:s2.4

  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_59;
  v3 = this;
  this = (BattlePerformanceEnemy_o *)perf->fields.data;
  if ( !this )
    goto LABEL_59;
  this = (BattlePerformanceEnemy_o *)BattleData__getStageEntity((BattleData_o *)this, 0);
  if ( !this )
    goto LABEL_59;
  this = (BattlePerformanceEnemy_o *)StageEntity__IsForceSetNormalEnemyStatusUI((StageEntity_o *)this, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
    goto LABEL_15;
  v4 = v3->fields.perf;
  if ( !v4 )
    goto LABEL_59;
  this = (BattlePerformanceEnemy_o *)v4->fields.data;
  if ( !this )
    goto LABEL_59;
  this = (BattlePerformanceEnemy_o *)BattleData__getEnemyServantList((BattleData_o *)this, 0);
  if ( !this )
    goto LABEL_59;
  m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
  v6 = this;
  if ( m_CancellationTokenSource < 1 )
  {
LABEL_15:
    this = (BattlePerformanceEnemy_o *)v3->fields.superBossTr;
    if ( !this )
      goto LABEL_59;
    v41.fields.x = 0.0;
    v41.fields.z = 0.0;
    v41.fields.y = 90.0;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v41, 0);
    this = (BattlePerformanceEnemy_o *)v3->fields.raidTr;
    if ( !this )
      goto LABEL_59;
    v42.fields.x = 0.0;
    v42.fields.z = 0.0;
    v42.fields.y = 90.0;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v42, 0);
    this = (BattlePerformanceEnemy_o *)BattlePerformanceEnemy__MakeEnemyParamPosData(v3, v8);
    if ( !this )
      goto LABEL_59;
    nomalTr = v3->fields.nomalTr;
    v10 = (BaseEnemyParamPosData_o *)this;
    this = (BattlePerformanceEnemy_o *)((__int64 (__fastcall *)(BattlePerformanceEnemy_o *, const MethodInfo *))this->klass->vtable._4_IBattlePerformanceExtraUiParent_GetExBattleUiParentTransform.methodPtr)(
                                         this,
                                         this->klass->vtable._4_IBattlePerformanceExtraUiParent_GetExBattleUiParentTransform.method);
    if ( !nomalTr )
      goto LABEL_59;
    UnityEngine_Transform__set_localPosition(nomalTr, *(UnityEngine_Vector3_o *)&v11, 0);
    v14 = v3->fields.nomalTr;
    this = (BattlePerformanceEnemy_o *)((__int64 (__fastcall *)(BaseEnemyParamPosData_o *, const MethodInfo *))v10->klass->vtable._5_get_NormalTrLocalScale.methodPtr)(
                                         v10,
                                         v10->klass->vtable._5_get_NormalTrLocalScale.method);
    if ( !v14 )
      goto LABEL_59;
    UnityEngine_Transform__set_localScale(v14, *(UnityEngine_Vector3_o *)&v15, 0);
    bdata = v3->fields.bdata;
    if ( !bdata )
      goto LABEL_59;
    exBattleUiParent = v3->fields.exBattleUiParent;
    if ( bdata->fields.enemyMasterInfo )
    {
      if ( !byte_4C313D1 )
      {
        this = (BattlePerformanceEnemy_o *)sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
        byte_4C313D1 = 1;
      }
      static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
      x = static_fields->zeroVector.fields.x;
      y = static_fields->zeroVector.fields.y;
      z = static_fields->zeroVector.fields.z;
      if ( !exBattleUiParent )
        goto LABEL_59;
    }
    else
    {
      this = (BattlePerformanceEnemy_o *)((__int64 (__fastcall *)(BaseEnemyParamPosData_o *, const MethodInfo *))v10->klass->vtable._8_get_ExBattleUiTrPos.methodPtr)(
                                           v10,
                                           v10->klass->vtable._8_get_ExBattleUiTrPos.method);
      if ( !exBattleUiParent )
        goto LABEL_59;
    }
    UnityEngine_Transform__set_localPosition(exBattleUiParent, *(UnityEngine_Vector3_o *)&x, 0);
    v24 = v3->fields.perf;
    if ( !v24 )
      goto LABEL_59;
    this = (BattlePerformanceEnemy_o *)v24->fields.data;
    if ( !this )
      goto LABEL_59;
    this = (BattlePerformanceEnemy_o *)BattleData__HasEnemyExBattleUiPositionY((BattleData_o *)this, 0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v25 = v3->fields.perf;
      if ( !v25 )
        goto LABEL_59;
      this = (BattlePerformanceEnemy_o *)v25->fields.data;
      if ( !this )
        goto LABEL_59;
      v26 = v3->fields.exBattleUiParent;
      v27 = BattleData__EnemyExBattleUiPositionY((BattleData_o *)this, 0);
      if ( !v26 )
        goto LABEL_59;
      v43.fields.y = v27;
      v43.fields.x = 0.0;
      v43.fields.z = 0.0;
      UnityEngine_Transform__set_localPosition(v26, v43, 0);
    }
    svtParamList = v3->fields.svtParamList;
    if ( !svtParamList )
      goto LABEL_59;
    max_length = svtParamList->max_length;
    if ( max_length >= 1 )
    {
      v30 = 0;
      while ( v30 < max_length )
      {
        this = (BattlePerformanceEnemy_o *)svtParamList->m_Items[v30];
        if ( !this )
          goto LABEL_59;
        BattleServantParamComponent__SetEnemyParamPosition((BattleServantParamComponent_o *)this, v10, 0);
        max_length = svtParamList->max_length;
        if ( (int)++v30 >= max_length )
          return;
      }
LABEL_60:
      sub_1C32E84(this);
    }
  }
  else
  {
    v7 = 0;
    while ( 1 )
    {
      if ( v7 >= m_CancellationTokenSource )
        goto LABEL_60;
      this = (BattlePerformanceEnemy_o *)*((_QWORD *)&v6->fields.perf + (int)v7);
      if ( !this )
        goto LABEL_59;
      if ( BYTE5(this[3].fields.raidParam) )
        break;
      this = (BattlePerformanceEnemy_o *)BattleServantData__get_IsSuperBossUi((BattleServantData_o *)this, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        this = (BattlePerformanceEnemy_o *)v3->fields.superBossTr;
        if ( this )
        {
          v45.fields.x = 0.0;
          v45.fields.y = 0.0;
          v45.fields.z = 0.0;
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v45, 0);
          this = (BattlePerformanceEnemy_o *)v3->fields.raidTr;
          if ( this )
          {
            v31 = 0;
            v33 = 0;
            v32 = 1119092736;
            goto LABEL_47;
          }
        }
        goto LABEL_59;
      }
      m_CancellationTokenSource = (int)v6->fields.m_CancellationTokenSource;
      if ( (int)++v7 >= m_CancellationTokenSource )
        goto LABEL_15;
    }
    this = (BattlePerformanceEnemy_o *)v3->fields.superBossTr;
    if ( !this )
      goto LABEL_59;
    v44.fields.x = 0.0;
    v44.fields.z = 0.0;
    v44.fields.y = 90.0;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v44, 0);
    this = (BattlePerformanceEnemy_o *)v3->fields.raidTr;
    if ( !this )
      goto LABEL_59;
    v31 = 0;
    v32 = 0;
    v33 = 0;
LABEL_47:
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, *(UnityEngine_Vector3_o *)&v31, 0);
    this = (BattlePerformanceEnemy_o *)v3->fields.nomalTr;
    if ( !this
      || (v46.fields.x = 0.0,
          v46.fields.z = 0.0,
          v46.fields.y = -82.0,
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v46, 0),
          (v34 = v3->fields.perf) == 0)
      || (this = (BattlePerformanceEnemy_o *)v34->fields.data) == 0 )
    {
LABEL_59:
      sub_1C32E7C(this);
    }
    this = (BattlePerformanceEnemy_o *)BattleData__HasEnemyExBattleUiPositionY((BattleData_o *)this, 0);
    v35 = v3->fields.exBattleUiParent;
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v36 = v3->fields.perf;
      if ( !v36 )
        goto LABEL_59;
      this = (BattlePerformanceEnemy_o *)v36->fields.data;
      if ( !this )
        goto LABEL_59;
      v37 = BattleData__EnemyExBattleUiPositionY((BattleData_o *)this, 0);
      if ( !v35 )
        goto LABEL_59;
      v38 = v37;
      v39 = 0;
    }
    else
    {
      if ( !v35 )
        goto LABEL_59;
      v38 = 0.0;
      v39 = 0;
      if ( SLODWORD(v6->fields.m_CancellationTokenSource) > 1 )
        v38 = -50.0;
    }
    v40 = 0;
    UnityEngine_Transform__set_localPosition(v35, *(UnityEngine_Vector3_o *)&v39, 0);
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
  struct BattleServantHeadUpComponent_array *svtHeadUpList; // x8
  char v8; // w21
  __int64 v9; // x22
  int max_length; // w9
  struct BattleServantParamComponent_array *svtParamList; // x8
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
    svtHeadUpList = v4->fields.svtHeadUpList;
    if ( !svtHeadUpList )
      goto LABEL_24;
    v8 = (char)this;
    v9 = 0;
    while ( 1 )
    {
      max_length = svtHeadUpList->max_length;
      if ( (int)v9 >= max_length )
        break;
      if ( (unsigned int)v9 >= max_length )
LABEL_25:
        sub_1C32E84(this);
      this = (BattlePerformanceEnemy_o *)svtHeadUpList->m_Items[v9];
      if ( this )
      {
        BattleServantHeadUpComponent__setTargetMark(
          (BattleServantHeadUpComponent_o *)this,
          svtData->fields.uniqueId,
          v8 & 1,
          0);
        svtHeadUpList = v4->fields.svtHeadUpList;
        ++v9;
        if ( svtHeadUpList )
          continue;
      }
      goto LABEL_24;
    }
    svtParamList = v4->fields.svtParamList;
    if ( !svtParamList )
      goto LABEL_24;
    v12 = 0;
    while ( 1 )
    {
      v13 = svtParamList->max_length;
      if ( (int)v12 >= v13 )
        break;
      if ( (unsigned int)v12 >= v13 )
        goto LABEL_25;
      this = (BattlePerformanceEnemy_o *)svtParamList->m_Items[v12];
      if ( this )
      {
        BattleServantParamComponent__setTargetMark(
          (BattleServantParamComponent_o *)this,
          svtData->fields.uniqueId,
          v8 & 1,
          0);
        svtParamList = v4->fields.svtParamList;
        ++v12;
        if ( svtParamList )
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
      sub_1C32E7C(this);
    }
    BattleServantParamComponent__setTargetMark((BattleServantParamComponent_o *)this, svtData->fields.uniqueId, v14, 0);
  }
}


void BattlePerformanceEnemy__setWinView(BattlePerformanceEnemy_o *this, const MethodInfo *method)
{
  struct BattleServantParamComponent_array *svtParamList; // x8
  BattlePerformanceEnemy_o *v3; // x19
  __int64 v4; // x20
  int max_length; // w9

  svtParamList = this->fields.svtParamList;
  if ( !svtParamList )
    goto LABEL_7;
  v3 = this;
  v4 = 0;
  while ( 1 )
  {
    max_length = svtParamList->max_length;
    if ( (int)v4 >= max_length )
      break;
    if ( (unsigned int)v4 >= max_length )
      sub_1C32E84(this);
    this = (BattlePerformanceEnemy_o *)svtParamList->m_Items[v4];
    if ( this )
    {
      this = (BattlePerformanceEnemy_o *)((__int64 (__fastcall *)(BattlePerformanceEnemy_o *, _QWORD, _QWORD, const char *))this->klass[1]._1.name)(
                                           this,
                                           0,
                                           0,
                                           this->klass[1]._1.namespaze);
      svtParamList = v3->fields.svtParamList;
      ++v4;
      if ( svtParamList )
        continue;
    }
    goto LABEL_7;
  }
  this = (BattlePerformanceEnemy_o *)v3->fields.raidParam;
  if ( !this
    || (((void (__fastcall *)(BattlePerformanceEnemy_o *, _QWORD, _QWORD, const char *))this->klass[1]._1.name)(
          this,
          0,
          0,
          this->klass[1]._1.namespaze),
        (this = (BattlePerformanceEnemy_o *)v3->fields.superbossParam) == 0) )
  {
LABEL_7:
    sub_1C32E7C(this);
  }
  ((void (__fastcall *)(BattlePerformanceEnemy_o *, _QWORD, _QWORD, const char *))this->klass[1]._1.name)(
    this,
    0,
    0,
    this->klass[1]._1.namespaze);
}


void BattlePerformanceEnemy__showSideEffect(
        BattlePerformanceEnemy_o *this,
        BattleActionData_BuffData_o *buffData,
        const MethodInfo *method)
{
  struct BattleServantParamComponent_array *svtParamList; // x8
  BattlePerformanceEnemy_o *v4; // x20
  __int64 v6; // x21
  int max_length; // w9
  unsigned int v8; // w22
  struct BattleServantParamComponent_array *v9; // x8

  svtParamList = this->fields.svtParamList;
  if ( !svtParamList )
    goto LABEL_13;
  v4 = this;
  v6 = 4;
  while ( 1 )
  {
    max_length = svtParamList->max_length;
    v8 = v6 - 4;
    if ( (int)v6 - 4 >= max_length )
      break;
    if ( v8 >= max_length )
      goto LABEL_24;
    if ( !buffData )
      goto LABEL_13;
    this = (BattlePerformanceEnemy_o *)*((_QWORD *)&svtParamList->obj.klass + v6);
    if ( !this )
      goto LABEL_13;
    this = (BattlePerformanceEnemy_o *)BattleServantParamComponent__checkId(
                                         (BattleServantParamComponent_o *)this,
                                         buffData->fields.targetId,
                                         0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v9 = v4->fields.svtParamList;
      if ( !v9 )
        goto LABEL_13;
      if ( v8 >= LODWORD(v9->max_length) )
LABEL_24:
        sub_1C32E84(this);
      this = (BattlePerformanceEnemy_o *)*((_QWORD *)&v9->obj.klass + v6);
      if ( !this )
        goto LABEL_13;
      BattleServantParamComponent__showSideEffect((BattleServantParamComponent_o *)this, buffData, 0);
    }
    svtParamList = v4->fields.svtParamList;
    ++v6;
    if ( !svtParamList )
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
    sub_1C32E7C(this);
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
  struct BattleServantHeadUpComponent_array *svtHeadUpList; // x8
  BattlePerformanceEnemy_o *v3; // x19
  __int64 v4; // x20
  int max_length; // w9

  svtHeadUpList = this->fields.svtHeadUpList;
  if ( !svtHeadUpList )
LABEL_7:
    sub_1C32E7C(this);
  v3 = this;
  v4 = 0;
  while ( 1 )
  {
    max_length = svtHeadUpList->max_length;
    if ( (int)v4 >= max_length )
      break;
    if ( (unsigned int)v4 >= max_length )
      sub_1C32E84(this);
    this = (BattlePerformanceEnemy_o *)svtHeadUpList->m_Items[v4];
    if ( this )
    {
      BattleServantHeadUpComponent__setModeAction((BattleServantHeadUpComponent_o *)this, 0);
      svtHeadUpList = v3->fields.svtHeadUpList;
      ++v4;
      if ( svtHeadUpList )
        continue;
    }
    goto LABEL_7;
  }
}


void BattlePerformanceEnemy__startCommand(BattlePerformanceEnemy_o *this, const MethodInfo *method)
{
  struct BattleServantHeadUpComponent_array *svtHeadUpList; // x8
  BattlePerformanceEnemy_o *v3; // x19
  __int64 v4; // x20
  int max_length; // w9

  svtHeadUpList = this->fields.svtHeadUpList;
  if ( !svtHeadUpList )
LABEL_7:
    sub_1C32E7C(this);
  v3 = this;
  v4 = 0;
  while ( 1 )
  {
    max_length = svtHeadUpList->max_length;
    if ( (int)v4 >= max_length )
      break;
    if ( (unsigned int)v4 >= max_length )
      sub_1C32E84(this);
    this = (BattlePerformanceEnemy_o *)svtHeadUpList->m_Items[v4];
    if ( this )
    {
      BattleServantHeadUpComponent__setModeCommand((BattleServantHeadUpComponent_o *)this, 0);
      svtHeadUpList = v3->fields.svtHeadUpList;
      ++v4;
      if ( svtHeadUpList )
        continue;
    }
    goto LABEL_7;
  }
}


void BattlePerformanceEnemy__startSkill(BattlePerformanceEnemy_o *this, const MethodInfo *method)
{
  struct BattleServantHeadUpComponent_array *svtHeadUpList; // x8
  BattlePerformanceEnemy_o *v3; // x19
  __int64 v4; // x20
  int max_length; // w9

  svtHeadUpList = this->fields.svtHeadUpList;
  if ( !svtHeadUpList )
LABEL_7:
    sub_1C32E7C(this);
  v3 = this;
  v4 = 0;
  while ( 1 )
  {
    max_length = svtHeadUpList->max_length;
    if ( (int)v4 >= max_length )
      break;
    if ( (unsigned int)v4 >= max_length )
      sub_1C32E84(this);
    this = (BattlePerformanceEnemy_o *)svtHeadUpList->m_Items[v4];
    if ( this )
    {
      BattleServantHeadUpComponent__setTargetRoot((BattleServantHeadUpComponent_o *)this, 0, 0);
      svtHeadUpList = v3->fields.svtHeadUpList;
      ++v4;
      if ( svtHeadUpList )
        continue;
    }
    goto LABEL_7;
  }
}


void BattlePerformanceEnemy__startTac(BattlePerformanceEnemy_o *this, const MethodInfo *method)
{
  struct BattleServantHeadUpComponent_array *svtHeadUpList; // x8
  BattlePerformanceEnemy_o *v3; // x19
  __int64 v4; // x20
  int max_length; // w9

  svtHeadUpList = this->fields.svtHeadUpList;
  if ( !svtHeadUpList )
LABEL_7:
    sub_1C32E7C(this);
  v3 = this;
  v4 = 0;
  while ( 1 )
  {
    max_length = svtHeadUpList->max_length;
    if ( (int)v4 >= max_length )
      break;
    if ( (unsigned int)v4 >= max_length )
      sub_1C32E84(this);
    this = (BattlePerformanceEnemy_o *)svtHeadUpList->m_Items[v4];
    if ( this )
    {
      BattleServantHeadUpComponent__setModeTac((BattleServantHeadUpComponent_o *)this, 0);
      svtHeadUpList = v3->fields.svtHeadUpList;
      ++v4;
      if ( svtHeadUpList )
        continue;
    }
    goto LABEL_7;
  }
}


void BattlePerformanceEnemy__startWave(BattlePerformanceEnemy_o *this, const MethodInfo *method)
{
  struct BattleServantHeadUpComponent_array *svtHeadUpList; // x8
  BattlePerformanceEnemy_o *v3; // x19
  __int64 v4; // x20
  int max_length; // w9

  svtHeadUpList = this->fields.svtHeadUpList;
  if ( !svtHeadUpList )
LABEL_7:
    sub_1C32E7C(this);
  v3 = this;
  v4 = 0;
  while ( 1 )
  {
    max_length = svtHeadUpList->max_length;
    if ( (int)v4 >= max_length )
      break;
    if ( (unsigned int)v4 >= max_length )
      sub_1C32E84(this);
    this = (BattlePerformanceEnemy_o *)svtHeadUpList->m_Items[v4];
    if ( this )
    {
      BattleServantHeadUpComponent__setModeWaveStart((BattleServantHeadUpComponent_o *)this, 0);
      svtHeadUpList = v3->fields.svtHeadUpList;
      ++v4;
      if ( svtHeadUpList )
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
    sub_1C32E7C(0);
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
  int max_length; // w8
  BattlePerformanceEnemy_o *v8; // x19
  unsigned int v9; // w23
  bool v10; // w21
  BattleRaidInfo_o *v11; // x1

  raidParam = this->fields.raidParam;
  if ( !raidParam )
    goto LABEL_13;
  data = raidParam->fields.data;
  if ( data )
  {
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
          sub_1C32E84(this);
        v11 = infos->m_Items[v9];
        if ( !v11 )
          break;
        if ( v11->fields.uniqueId == data->fields.uniqueId )
        {
          this = (BattlePerformanceEnemy_o *)v8->fields.raidParam;
          if ( !this )
            break;
          BattleServantRaidParamComponent__updateRaidInfo((BattleServantRaidParamComponent_o *)this, v11, v10, 0);
        }
        max_length = infos->max_length;
        if ( (int)++v9 >= max_length )
          return;
      }
LABEL_13:
      sub_1C32E7C(this);
    }
  }
}


void BattlePerformanceEnemy__updateStateString(BattlePerformanceEnemy_o *this, const MethodInfo *method)
{
  BattleServantSuperBossParamComponent_o *superbossParam; // x0

  superbossParam = this->fields.superbossParam;
  if ( !superbossParam )
    sub_1C32E7C(0);
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
  int max_length; // w8
  BattlePerformanceEnemy_o *v8; // x19
  unsigned int v9; // w23
  bool v10; // w21
  BattleSuperBossInfo_o *v11; // x1

  superbossParam = this->fields.superbossParam;
  if ( !superbossParam )
    goto LABEL_13;
  data = superbossParam->fields.data;
  if ( data )
  {
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
          sub_1C32E84(this);
        v11 = infos->m_Items[v9];
        if ( !v11 )
          break;
        if ( v11->fields.uniqueId == data->fields.uniqueId )
        {
          this = (BattlePerformanceEnemy_o *)v8->fields.superbossParam;
          if ( !this )
            break;
          BattleServantSuperBossParamComponent__updateSuperBossInfo(
            (BattleServantSuperBossParamComponent_o *)this,
            v11,
            v10,
            0);
        }
        max_length = infos->max_length;
        if ( (int)++v9 >= max_length )
          return;
      }
LABEL_13:
      sub_1C32E7C(this);
    }
  }
}


void BattlePerformanceEnemy__updateView(BattlePerformanceEnemy_o *this, const MethodInfo *method)
{
  struct BattleServantParamComponent_array *svtParamList; // x8
  BattlePerformanceEnemy_o *v3; // x19
  __int64 v4; // x20
  int max_length; // w9
  struct BattleServantHeadUpComponent_array *svtHeadUpList; // x8
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

  svtParamList = this->fields.svtParamList;
  if ( !svtParamList )
    goto LABEL_36;
  v3 = this;
  v4 = 0;
  while ( 1 )
  {
    max_length = svtParamList->max_length;
    if ( (int)v4 >= max_length )
      break;
    if ( (unsigned int)v4 >= max_length )
LABEL_38:
      sub_1C32E84(this);
    this = (BattlePerformanceEnemy_o *)svtParamList->m_Items[v4];
    if ( this )
    {
      BattleServantParamComponent__updateView((BattleServantParamComponent_o *)this, 0);
      svtParamList = v3->fields.svtParamList;
      ++v4;
      if ( svtParamList )
        continue;
    }
    goto LABEL_36;
  }
  svtHeadUpList = v3->fields.svtHeadUpList;
  if ( !svtHeadUpList )
    goto LABEL_36;
  v7 = 0;
  while ( 1 )
  {
    v8 = svtHeadUpList->max_length;
    if ( (int)v7 >= v8 )
      break;
    if ( (unsigned int)v7 >= v8 )
      goto LABEL_38;
    this = (BattlePerformanceEnemy_o *)svtHeadUpList->m_Items[v7];
    if ( this )
    {
      BattleServantHeadUpComponent__updateView((BattleServantHeadUpComponent_o *)this, 0);
      svtHeadUpList = v3->fields.svtHeadUpList;
      ++v7;
      if ( svtHeadUpList )
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
  v10 = v3->fields.svtParamList;
  if ( !v10 )
LABEL_36:
    sub_1C32E7C(this);
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
      v14 = v3->fields.svtParamList;
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
            v16 = v3->fields.svtParamList;
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
                    v10 = v3->fields.svtParamList;
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


void BattlePerformanceEnemy___c__DisplayClass44_0___ctor(
        BattlePerformanceEnemy___c__DisplayClass44_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattlePerformanceEnemy___c__DisplayClass44_0___GetSvtParamComponent_b__0(
        BattlePerformanceEnemy___c__DisplayClass44_0_o *this,
        BattleServantParamComponent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C32E7C(this);
  return BattleServantParamComponent__checkId(x, this->fields.uniqueId, 0);
}