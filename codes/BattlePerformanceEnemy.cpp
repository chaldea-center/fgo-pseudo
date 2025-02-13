void __fastcall BattlePerformanceEnemy___ctor(BattlePerformanceEnemy_o *this, const MethodInfo *method)
{
  struct System_Int32_array *v3; // x0
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7

  if ( (byte_4BDF5B3 & 1) == 0 )
  {
    sub_1C21E38(&int___TypeInfo);
    byte_4BDF5B3 = 1;
  }
  this->fields.raidY = -82.0;
  v3 = (struct System_Int32_array *)sub_1C21EE0(int___TypeInfo, 3LL);
  this->fields.list_ID = v3;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.list_ID, (int64_t)v3, v4, v5, v6, v7, v8, v9);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


bool __fastcall BattlePerformanceEnemy__ExistsFieldNormalEnemy(
        BattlePerformanceEnemy_o *this,
        const MethodInfo *method)
{
  System_Object_array *svtParamList; // x0
  int32_t v4; // w20
  signed int max_length; // w24
  Il2CppObject *v6; // x21

  if ( (byte_4BDF5AE & 1) == 0 )
  {
    sub_1C21E38(&Method_BasicHelper_IndexValue_BattleServantParamComponent___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDF5AE = 1;
  }
  svtParamList = (System_Object_array *)this->fields.svtParamList;
  if ( !svtParamList )
LABEL_13:
    sub_1C22094(svtParamList, method);
  v4 = 0;
  while ( 1 )
  {
    max_length = svtParamList->max_length;
    if ( v4 >= max_length )
      return v4 < max_length;
    v6 = BasicHelper__IndexValue_object_(
           svtParamList,
           v4,
           0LL,
           (const MethodInfo_2F9E9CC *)Method_BasicHelper_IndexValue_BattleServantParamComponent___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    svtParamList = (System_Object_array *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v6, 0LL, 0LL);
    if ( ((unsigned __int8)svtParamList & 1) != 0 )
    {
      if ( !v6 )
        goto LABEL_13;
      svtParamList = (System_Object_array *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v6, 0LL);
      if ( !svtParamList )
        goto LABEL_13;
      if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)svtParamList, 0LL) )
        return v4 < max_length;
    }
    svtParamList = (System_Object_array *)this->fields.svtParamList;
    ++v4;
    if ( !svtParamList )
      goto LABEL_13;
  }
}


bool __fastcall BattlePerformanceEnemy__ExistsFrontRow(BattlePerformanceEnemy_o *this, const MethodInfo *method)
{
  unsigned int v3; // w20
  char v4; // w24
  Il2CppObject *v5; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1
  bool v8; // cf

  if ( (byte_4BDF5AD & 1) == 0 )
  {
    sub_1C21E38(&Method_BasicHelper_IndexValue_BattleServantParamComponent___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDF5AD = 1;
  }
  v3 = 0;
  v4 = 1;
  do
  {
    v5 = BasicHelper__IndexValue_object_(
           (System_Object_array *)this->fields.svtParamList,
           v3,
           0LL,
           (const MethodInfo_2F9E9CC *)Method_BasicHelper_IndexValue_BattleServantParamComponent___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v5, 0LL, 0LL);
    if ( ((unsigned __int8)gameObject & 1) != 0 )
    {
      if ( !v5 || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v5, 0LL)) == 0LL )
        sub_1C22094(gameObject, v7);
      if ( UnityEngine_GameObject__get_activeSelf(gameObject, 0LL) )
        break;
    }
    v8 = v3++ >= 2;
    v4 = !v8;
  }
  while ( v3 != 3 );
  return v4;
}


BattleServantParamComponent_o *__fastcall BattlePerformanceEnemy__GetSvtParamComponent(
        BattlePerformanceEnemy_o *this,
        int32_t uniqueId,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Object_array *svtParamList; // x19
  System_Predicate_object__o *v9; // x20

  if ( (byte_4BDF5B2 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Array_Find_BattleServantParamComponent___);
    sub_1C21E38(&System_Predicate_BattleServantParamComponent__TypeInfo);
    sub_1C21E38(&Method_BattlePerformanceEnemy___c__DisplayClass40_0__GetSvtParamComponent_b__0__);
    sub_1C21E38(&BattlePerformanceEnemy___c__DisplayClass40_0_TypeInfo);
    byte_4BDF5B2 = 1;
  }
  v5 = sub_1C22084(BattlePerformanceEnemy___c__DisplayClass40_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    sub_1C22094(v6, v7);
  *(_DWORD *)(v5 + 16) = uniqueId;
  svtParamList = (System_Object_array *)this->fields.svtParamList;
  v9 = (System_Predicate_object__o *)sub_1C22084(System_Predicate_BattleServantParamComponent__TypeInfo);
  System_Predicate_object____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_BattlePerformanceEnemy___c__DisplayClass40_0__GetSvtParamComponent_b__0__,
    0LL);
  return (BattleServantParamComponent_o *)System_Array__Find_object_(
                                            svtParamList,
                                            (System_Predicate_T__o *)v9,
                                            (const MethodInfo_30AAD74 *)Method_System_Array_Find_BattleServantParamComponent___);
}


BattleServantParamComponent_o *__fastcall BattlePerformanceEnemy__GetSvtSuperBossParamComponent(
        BattlePerformanceEnemy_o *this,
        int32_t uniqueId,
        const MethodInfo *method)
{
  BattleServantParamComponent_o *superbossParam; // x0
  bool v5; // w8
  BattleServantParamComponent_o *result; // x0

  superbossParam = (BattleServantParamComponent_o *)this->fields.superbossParam;
  if ( !superbossParam )
    sub_1C22094(0LL, uniqueId);
  v5 = BattleServantParamComponent__checkId(superbossParam, uniqueId, 0LL);
  result = 0LL;
  if ( v5 )
    return (BattleServantParamComponent_o *)this->fields.superbossParam;
  return result;
}


void __fastcall BattlePerformanceEnemy__Initialize(
        BattlePerformanceEnemy_o *this,
        BattlePerformance_o *inperf,
        BattleData_o *indata,
        BattleLogic_o *inlogic,
        const MethodInfo *method)
{
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct BattlePerformance_o **p_perf; // x20
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  __int64 v18; // x0
  __int64 v19; // x1
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  struct BattleServantParamComponent_array *svtParamList; // x8
  __int64 v27; // x22
  int max_length; // w9
  BattleServantParamComponent_o *v29; // x8
  int64_t v30; // x1
  struct BattleServantRaidParamComponent_o *raidParam; // x8
  struct BattlePerformance_o *perf; // x1
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  struct BattleServantSuperBossParamComponent_o *superbossParam; // x8
  struct BattlePerformance_o *v40; // x1
  struct BattleServantParamComponent_array *v41; // x8
  struct System_Int32_array *v42; // x0
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7

  if ( (byte_4BDF5AA & 1) == 0 )
  {
    sub_1C21E38(&int___TypeInfo);
    byte_4BDF5AA = 1;
  }
  this->fields.perf = inperf;
  p_perf = &this->fields.perf;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.perf,
    (int64_t)inperf,
    (int64_t)indata,
    (int32_t)inlogic,
    (System_String_o *)method,
    v5,
    v6,
    v7);
  this->fields.bdata = indata;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.bdata, (int64_t)indata, v12, v13, v14, v15, v16, v17);
  svtParamList = this->fields.svtParamList;
  if ( !svtParamList )
    goto LABEL_9;
  v27 = 0LL;
  while ( 1 )
  {
    max_length = svtParamList->max_length;
    if ( (int)v27 >= max_length )
      break;
    if ( (unsigned int)v27 >= max_length )
      sub_1C2209C(v18, v19);
    v29 = svtParamList->m_Items[v27];
    if ( v29 )
    {
      v30 = (int64_t)*p_perf;
      v29->fields.perf = *p_perf;
      sub_1C21DDC((PartyOrganizationUtility_o *)&v29->fields.perf, v30, v20, v21, v22, v23, v24, v25);
      svtParamList = this->fields.svtParamList;
      ++v27;
      if ( svtParamList )
        continue;
    }
    goto LABEL_9;
  }
  raidParam = this->fields.raidParam;
  if ( !raidParam )
    goto LABEL_9;
  perf = this->fields.perf;
  raidParam->fields.perf = perf;
  sub_1C21DDC((PartyOrganizationUtility_o *)&raidParam->fields.perf, (int64_t)perf, v20, v21, v22, v23, v24, v25);
  superbossParam = this->fields.superbossParam;
  if ( !superbossParam
    || (v40 = this->fields.perf,
        superbossParam->fields.perf = v40,
        sub_1C21DDC(
          (PartyOrganizationUtility_o *)&superbossParam->fields.perf,
          (int64_t)v40,
          v33,
          v34,
          v35,
          v36,
          v37,
          v38),
        (v41 = this->fields.svtParamList) == 0LL) )
  {
LABEL_9:
    sub_1C22094(v18, v19);
  }
  v42 = (struct System_Int32_array *)sub_1C21EE0(int___TypeInfo, v41->max_length);
  this->fields.list_ID = v42;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.list_ID, (int64_t)v42, v43, v44, v45, v46, v47, v48);
}


BaseEnemyParamPosData_o *__fastcall BattlePerformanceEnemy__MakeEnemyParamPosData(
        BattlePerformanceEnemy_o *this,
        const MethodInfo *method)
{
  BattleData_o *bdata; // x0
  _QWORD *v4; // x8
  Il2CppObject *v5; // x19

  if ( (byte_4BDF5AC & 1) == 0 )
  {
    sub_1C21E38(&PosCountNormalEnemyParamPosData_TypeInfo);
    sub_1C21E38(&PosCountSpEnemyParamPosData_TypeInfo);
    byte_4BDF5AC = 1;
  }
  bdata = this->fields.bdata;
  if ( !bdata )
    sub_1C22094(0LL, method);
  if ( BattleData__get_IsEnemyPosCountNormal(bdata, 0LL) )
    v4 = &PosCountNormalEnemyParamPosData_TypeInfo;
  else
    v4 = &PosCountSpEnemyParamPosData_TypeInfo;
  v5 = (Il2CppObject *)sub_1C22084(*v4);
  System_Object___ctor(v5, 0LL);
  return (BaseEnemyParamPosData_o *)v5;
}


void __fastcall BattlePerformanceEnemy__SetNormalEnemyStatusUI(
        BattlePerformanceEnemy_o *this,
        int32_t index,
        BattleServantData_o *svtdata,
        UnityEngine_GameObject_o *target,
        const MethodInfo *method)
{
  BattleServantParamComponent_o *gameObject; // x0
  __int64 v10; // x1
  struct BattleServantParamComponent_array *svtParamList; // x8
  UnityEngine_Object_o *v12; // x22
  struct BattleServantParamComponent_array *v13; // x8
  struct BattleServantParamComponent_array *v14; // x8
  struct BattleServantParamComponent_array *v15; // x8

  if ( (byte_4BDF5AF & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDF5AF = 1;
  }
  BattlePerformanceEnemy__setTargetIcon(this, svtdata, target, index, method);
  svtParamList = this->fields.svtParamList;
  if ( !svtParamList )
    goto LABEL_20;
  if ( svtParamList->max_length <= index )
LABEL_21:
    sub_1C2209C(gameObject, v10);
  v12 = (UnityEngine_Object_o *)svtParamList->m_Items[index];
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (BattleServantParamComponent_o *)UnityEngine_Object__op_Inequality(v12, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    v13 = this->fields.svtParamList;
    if ( !v13 )
      goto LABEL_20;
    if ( v13->max_length > index )
    {
      gameObject = v13->m_Items[index];
      if ( !gameObject )
        goto LABEL_20;
      gameObject = (BattleServantParamComponent_o *)((__int64 (__fastcall *)(BattleServantParamComponent_o *, BattleServantData_o *, Il2CppMethodPointer))gameObject->klass->vtable._7_setData.method)(
                                                      gameObject,
                                                      svtdata,
                                                      gameObject->klass->vtable._8_SetEnemyParamPosition.methodPtr);
      v14 = this->fields.svtParamList;
      if ( !v14 )
        goto LABEL_20;
      if ( v14->max_length > index )
      {
        gameObject = v14->m_Items[index];
        if ( !gameObject )
          goto LABEL_20;
        gameObject->fields.index = index;
        BattleServantParamComponent__setTouch(gameObject, 1, 0LL);
        v15 = this->fields.svtParamList;
        if ( !v15 )
          goto LABEL_20;
        if ( v15->max_length > index )
        {
          gameObject = v15->m_Items[index];
          if ( gameObject )
          {
            gameObject = (BattleServantParamComponent_o *)UnityEngine_Component__get_gameObject(
                                                            (UnityEngine_Component_o *)gameObject,
                                                            0LL);
            if ( svtdata )
            {
              BattleServantData__addParamObject(svtdata, (UnityEngine_GameObject_o *)gameObject, 0LL);
              return;
            }
          }
LABEL_20:
          sub_1C22094(gameObject, v10);
        }
      }
    }
    goto LABEL_21;
  }
}


bool __fastcall BattlePerformanceEnemy__checkRaidUpdateHp(BattlePerformanceEnemy_o *this, const MethodInfo *method)
{
  struct BattleServantRaidParamComponent_o *raidParam; // x8

  raidParam = this->fields.raidParam;
  if ( !raidParam )
    sub_1C22094(this, method);
  return raidParam->fields.flgUpdate;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceEnemy__deleteStatus(
        BattlePerformanceEnemy_o *this,
        int32_t index,
        const MethodInfo *method)
{
  BattlePerformanceEnemy_o *v4; // x20
  struct BattleServantHeadUpComponent_array *svtHeadUpList; // x8
  UnityEngine_Object_o *v6; // x21
  struct BattleServantHeadUpComponent_array *v7; // x8
  struct System_Int32_array *list_ID; // x8
  struct BattleServantHeadUpComponent_array *v9; // x8
  struct BattleServantParamComponent_array *svtParamList; // x8
  UnityEngine_Object_o *v11; // x21
  struct BattleServantParamComponent_array *v12; // x8

  v4 = this;
  if ( (byte_4BDF5AB & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_TrackingMoveCtCComponent___);
    this = (BattlePerformanceEnemy_o *)sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDF5AB = 1;
  }
  svtHeadUpList = v4->fields.svtHeadUpList;
  if ( !svtHeadUpList )
    goto LABEL_29;
  if ( svtHeadUpList->max_length <= index )
LABEL_30:
    sub_1C2209C(this, *(_QWORD *)&index);
  v6 = (UnityEngine_Object_o *)svtHeadUpList->m_Items[index];
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattlePerformanceEnemy_o *)UnityEngine_Object__op_Inequality(v6, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v7 = v4->fields.svtHeadUpList;
    if ( !v7 )
      goto LABEL_29;
    if ( v7->max_length <= index )
      goto LABEL_30;
    this = (BattlePerformanceEnemy_o *)v7->m_Items[index];
    if ( !this )
      goto LABEL_29;
    BattleServantHeadUpComponent__setData((BattleServantHeadUpComponent_o *)this, 0LL, 0LL);
    list_ID = v4->fields.list_ID;
    if ( !list_ID )
      goto LABEL_29;
    if ( list_ID->max_length <= index )
      goto LABEL_30;
    list_ID->m_Items[index + 1] = -1;
    v9 = v4->fields.svtHeadUpList;
    if ( !v9 )
      goto LABEL_29;
    if ( v9->max_length <= index )
      goto LABEL_30;
    this = (BattlePerformanceEnemy_o *)v9->m_Items[index];
    if ( !this )
      goto LABEL_29;
    this = (BattlePerformanceEnemy_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_29;
    this = (BattlePerformanceEnemy_o *)UnityEngine_GameObject__GetComponent_object_(
                                         (UnityEngine_GameObject_o *)this,
                                         (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_TrackingMoveCtCComponent___);
    if ( !this )
      goto LABEL_29;
    TrackingMoveCtCComponent__stopAct((TrackingMoveCtCComponent_o *)this, 0LL);
  }
  svtParamList = v4->fields.svtParamList;
  if ( !svtParamList )
    goto LABEL_29;
  if ( svtParamList->max_length <= index )
    goto LABEL_30;
  v11 = (UnityEngine_Object_o *)svtParamList->m_Items[index];
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattlePerformanceEnemy_o *)UnityEngine_Object__op_Inequality(v11, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v12 = v4->fields.svtParamList;
    if ( !v12 )
      goto LABEL_29;
    if ( v12->max_length > index )
    {
      this = (BattlePerformanceEnemy_o *)v12->m_Items[index];
      if ( this )
      {
        (*(void (__fastcall **)(BattlePerformanceEnemy_o *, _QWORD, Il2CppClass *))&this->klass[1]._1.this_arg.bits)(
          this,
          0LL,
          this->klass[1]._1.element_class);
        return;
      }
LABEL_29:
      sub_1C22094(this, *(_QWORD *)&index);
    }
    goto LABEL_30;
  }
}


void __fastcall BattlePerformanceEnemy__endSkill(BattlePerformanceEnemy_o *this, const MethodInfo *method)
{
  struct BattleServantHeadUpComponent_array *svtHeadUpList; // x8
  BattlePerformanceEnemy_o *v3; // x19
  __int64 v4; // x20
  int max_length; // w9

  svtHeadUpList = this->fields.svtHeadUpList;
  if ( !svtHeadUpList )
LABEL_7:
    sub_1C22094(this, method);
  v3 = this;
  v4 = 0LL;
  while ( 1 )
  {
    max_length = svtHeadUpList->max_length;
    if ( (int)v4 >= max_length )
      break;
    if ( (unsigned int)v4 >= max_length )
      sub_1C2209C(this, method);
    this = (BattlePerformanceEnemy_o *)svtHeadUpList->m_Items[v4];
    if ( this )
    {
      BattleServantHeadUpComponent__setTargetRoot((BattleServantHeadUpComponent_o *)this, 1, 0LL);
      svtHeadUpList = v3->fields.svtHeadUpList;
      ++v4;
      if ( svtHeadUpList )
        continue;
    }
    goto LABEL_7;
  }
}


int64_t __fastcall BattlePerformanceEnemy__getTurnSituationParam(
        BattlePerformanceEnemy_o *this,
        const MethodInfo *method)
{
  BattleServantRaidParamComponent_o *raidParam; // x0

  raidParam = this->fields.raidParam;
  if ( !raidParam )
    sub_1C22094(0LL, method);
  return BattleServantRaidParamComponent__getTurnSituationParam(raidParam, 0LL);
}


void __fastcall BattlePerformanceEnemy__playAddition(BattlePerformanceEnemy_o *this, const MethodInfo *method)
{
  struct BattleServantParamComponent_array *svtParamList; // x8
  BattlePerformanceEnemy_o *v3; // x19
  __int64 v4; // x20
  int max_length; // w9

  svtParamList = this->fields.svtParamList;
  if ( !svtParamList )
LABEL_7:
    sub_1C22094(this, method);
  v3 = this;
  v4 = 0LL;
  while ( 1 )
  {
    max_length = svtParamList->max_length;
    if ( (int)v4 >= max_length )
      break;
    if ( (unsigned int)v4 >= max_length )
      sub_1C2209C(this, method);
    this = (BattlePerformanceEnemy_o *)svtParamList->m_Items[v4];
    if ( this )
    {
      BattleServantParamComponent__playAddition((BattleServantParamComponent_o *)this, 0LL);
      svtParamList = v3->fields.svtParamList;
      ++v4;
      if ( svtParamList )
        continue;
    }
    goto LABEL_7;
  }
}


void __fastcall BattlePerformanceEnemy__setOffTarget(BattlePerformanceEnemy_o *this, const MethodInfo *method)
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
  v4 = 0LL;
  while ( 1 )
  {
    max_length = svtHeadUpList->max_length;
    if ( (int)v4 >= max_length )
      break;
    if ( (unsigned int)v4 >= max_length )
LABEL_19:
      sub_1C2209C(this, method);
    this = (BattlePerformanceEnemy_o *)svtHeadUpList->m_Items[v4];
    if ( this )
    {
      BattleServantHeadUpComponent__setTargetMark((BattleServantHeadUpComponent_o *)this, -1, 0, 0LL);
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
  v7 = 0LL;
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
      BattleServantParamComponent__setTargetMark((BattleServantParamComponent_o *)this, -1, 0, 0LL);
      svtParamList = v3->fields.svtParamList;
      ++v7;
      if ( svtParamList )
        continue;
    }
    goto LABEL_18;
  }
  this = (BattlePerformanceEnemy_o *)v3->fields.raidParam;
  if ( !this
    || (BattleServantParamComponent__setTargetMark((BattleServantParamComponent_o *)this, -1, 0, 0LL),
        (this = (BattlePerformanceEnemy_o *)v3->fields.superbossParam) == 0LL) )
  {
LABEL_18:
    sub_1C22094(this, method);
  }
  BattleServantParamComponent__setTargetMark((BattleServantParamComponent_o *)this, -1, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceEnemy__setParam(
        BattlePerformanceEnemy_o *this,
        int32_t index,
        BattleServantData_o *svtdata,
        UnityEngine_GameObject_o *target,
        const MethodInfo *method)
{
  BattlePerformanceEnemy_o *v8; // x20
  struct BattlePerformance_o *perf; // x8
  const MethodInfo *v10; // x4
  struct BattleData_o *bdata; // x8
  struct BattleServantRaidParamComponent_o *raidParam; // x23
  struct BattlePerformance_o *v13; // x8
  EventRaidEntity_o *v14; // x8
  BattleServantRaidParamComponent_o *v15; // x23
  BattlePerformanceEnemy_o *splitHp; // x24
  const MethodInfo *v17; // x4
  struct BattlePerformance_o *v18; // x8
  BattleServantSuperBossParamComponent_o *superbossParam; // x23
  struct BattlePerformance_o *v20; // x8
  BattlePerformanceEnemy_o *v21; // x24
  struct BattleServantSuperBossParamComponent_o *v22; // x8
  UnityEngine_Object_o *v23; // x22
  struct BattlePerformance_o *v24; // x8
  const MethodInfo *v25; // x4
  struct BattleServantRaidParamComponent_o *v26; // x8
  UnityEngine_Object_o *v27; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  EventRaidEntity_o *raidEnt; // [xsp+8h] [xbp-38h] BYREF

  v8 = this;
  if ( (byte_4BDF5B0 & 1) == 0 )
  {
    sub_1C21E38(&long___TypeInfo);
    this = (BattlePerformanceEnemy_o *)sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDF5B0 = 1;
  }
  raidEnt = 0LL;
  perf = v8->fields.perf;
  if ( !perf )
    goto LABEL_50;
  this = (BattlePerformanceEnemy_o *)perf->fields.data;
  if ( !this )
    goto LABEL_50;
  this = (BattlePerformanceEnemy_o *)BattleData__getStageEntity((BattleData_o *)this, 0LL);
  if ( !this )
    goto LABEL_50;
  this = (BattlePerformanceEnemy_o *)StageEntity__IsForceSetNormalEnemyStatusUI((StageEntity_o *)this, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
LABEL_7:
    BattlePerformanceEnemy__SetNormalEnemyStatusUI(v8, index, svtdata, target, v10);
    return;
  }
  if ( !svtdata )
    goto LABEL_50;
  if ( svtdata->fields.isRaid )
  {
    this = (BattlePerformanceEnemy_o *)v8->fields.raidParam;
    if ( !this )
      goto LABEL_50;
    this = (BattlePerformanceEnemy_o *)(*(__int64 (__fastcall **)(BattlePerformanceEnemy_o *, BattleServantData_o *, Il2CppClass *))&this->klass[1]._1.this_arg.bits)(
                                         this,
                                         svtdata,
                                         this->klass[1]._1.element_class);
    bdata = v8->fields.bdata;
    if ( !bdata )
      goto LABEL_50;
    this = (BattlePerformanceEnemy_o *)bdata->fields.battle_ent;
    if ( !this )
      goto LABEL_50;
    raidParam = v8->fields.raidParam;
    this = (BattlePerformanceEnemy_o *)BattleEntity__isDefeatCount((BattleEntity_o *)this, 0LL);
    if ( !raidParam )
      goto LABEL_50;
    raidParam->fields.isDefeatCount = (unsigned __int8)this & 1;
    v13 = v8->fields.perf;
    if ( !v13 )
      goto LABEL_50;
    this = (BattlePerformanceEnemy_o *)v13->fields.data;
    if ( !this )
      goto LABEL_50;
    this = (BattlePerformanceEnemy_o *)BattleData__TryGetRaidEntity(
                                         (BattleData_o *)this,
                                         &raidEnt,
                                         svtdata->fields.raidId,
                                         0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v14 = raidEnt;
      if ( !raidEnt )
        goto LABEL_50;
      v15 = v8->fields.raidParam;
      if ( !v15 )
        goto LABEL_50;
      v15->fields.isJumbleRaid = raidEnt->fields.groupIndex > 0;
      splitHp = (BattlePerformanceEnemy_o *)v14->fields.splitHp;
    }
    else
    {
      this = (BattlePerformanceEnemy_o *)sub_1C21EE0(long___TypeInfo, 0LL);
      v15 = v8->fields.raidParam;
      splitHp = this;
    }
    v24 = v8->fields.perf;
    if ( !v24 )
      goto LABEL_50;
    this = (BattlePerformanceEnemy_o *)v24->fields.data;
    if ( !this )
      goto LABEL_50;
    this = (BattlePerformanceEnemy_o *)BattleData__getRaidBossMaxHp((BattleData_o *)this, svtdata->fields.raidId, 0LL);
    if ( !v15 )
      goto LABEL_50;
    BattleServantRaidParamComponent__setSplitHp(v15, (System_Int64_array *)splitHp, (int64_t)this, 0LL);
    v26 = v8->fields.raidParam;
    if ( !v26 )
      goto LABEL_50;
    v26->fields.index = index;
    BattlePerformanceEnemy__setTargetIcon(v8, svtdata, target, index, v25);
    v27 = (UnityEngine_Object_o *)v8->fields.raidParam;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v27, 0LL, 0LL) )
    {
      this = (BattlePerformanceEnemy_o *)v8->fields.raidParam;
      if ( this )
      {
        (*(void (__fastcall **)(BattlePerformanceEnemy_o *, BattleServantData_o *, Il2CppClass *))&this->klass[1]._1.this_arg.bits)(
          this,
          svtdata,
          this->klass[1]._1.element_class);
        this = (BattlePerformanceEnemy_o *)v8->fields.raidParam;
        if ( this )
        {
          LODWORD(this->fields.svtHeadUpList) = index;
          BattleServantParamComponent__setTouch((BattleServantParamComponent_o *)this, 1, 0LL);
          this = (BattlePerformanceEnemy_o *)v8->fields.raidParam;
          if ( this )
          {
LABEL_48:
            gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
            BattleServantData__addParamObject(svtdata, gameObject, 0LL);
            return;
          }
        }
      }
LABEL_50:
      sub_1C22094(this, *(_QWORD *)&index);
    }
  }
  else
  {
    if ( !BattleServantData__get_IsSuperBossUi(svtdata, 0LL) )
      goto LABEL_7;
    this = (BattlePerformanceEnemy_o *)v8->fields.superbossParam;
    if ( !this )
      goto LABEL_50;
    this = (BattlePerformanceEnemy_o *)(*(__int64 (__fastcall **)(BattlePerformanceEnemy_o *, BattleServantData_o *, Il2CppClass *))&this->klass[1]._1.this_arg.bits)(
                                         this,
                                         svtdata,
                                         this->klass[1]._1.element_class);
    if ( svtdata->fields.isSuperBoss )
    {
      v18 = v8->fields.perf;
      if ( !v18 )
        goto LABEL_50;
      this = (BattlePerformanceEnemy_o *)v18->fields.data;
      if ( !this )
        goto LABEL_50;
      superbossParam = v8->fields.superbossParam;
      this = (BattlePerformanceEnemy_o *)BattleData__getSuperBossSplitHp(
                                           (BattleData_o *)this,
                                           svtdata->fields.superBossId,
                                           0LL);
      v20 = v8->fields.perf;
      if ( !v20 )
        goto LABEL_50;
      v21 = this;
      this = (BattlePerformanceEnemy_o *)v20->fields.data;
      if ( !this )
        goto LABEL_50;
      this = (BattlePerformanceEnemy_o *)BattleData__getSuperBossMaxHp(
                                           (BattleData_o *)this,
                                           svtdata->fields.superBossId,
                                           0LL);
      if ( !superbossParam )
        goto LABEL_50;
      BattleServantSuperBossParamComponent__setSplitHp(superbossParam, (System_Int64_array *)v21, (int64_t)this, 0LL);
    }
    v22 = v8->fields.superbossParam;
    if ( !v22 )
      goto LABEL_50;
    v22->fields.index = index;
    BattlePerformanceEnemy__setTargetIcon(v8, svtdata, target, index, v17);
    v23 = (UnityEngine_Object_o *)v8->fields.superbossParam;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v23, 0LL, 0LL) )
    {
      this = (BattlePerformanceEnemy_o *)v8->fields.superbossParam;
      if ( this )
      {
        (*(void (__fastcall **)(BattlePerformanceEnemy_o *, BattleServantData_o *, Il2CppClass *))&this->klass[1]._1.this_arg.bits)(
          this,
          svtdata,
          this->klass[1]._1.element_class);
        this = (BattlePerformanceEnemy_o *)v8->fields.superbossParam;
        if ( this )
        {
          LODWORD(this->fields.svtHeadUpList) = index;
          BattleServantParamComponent__setTouch((BattleServantParamComponent_o *)this, 1, 0LL);
          this = (BattlePerformanceEnemy_o *)v8->fields.superbossParam;
          if ( this )
            goto LABEL_48;
        }
      }
      goto LABEL_50;
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceEnemy__setParamPosition(BattlePerformanceEnemy_o *this, const MethodInfo *method)
{
  struct BattlePerformance_o *perf; // x8
  BattlePerformanceEnemy_o *v3; // x19
  struct BattlePerformance_o *v4; // x8
  int m_CancellationTokenSource; // w8
  BattlePerformanceEnemy_o *v6; // x20
  unsigned int v7; // w21
  const MethodInfo *v8; // x1
  UnityEngine_Transform_o *nomalTr; // x21
  BattlePerformanceEnemy_o *v10; // x20
  int v11; // s0
  UnityEngine_Transform_o *v14; // x21
  int v15; // s0
  struct BattleServantParamComponent_array *svtParamList; // x19
  int max_length; // w8
  unsigned int v20; // w21
  int v21; // s0
  int v22; // s1
  int v23; // s2
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4

  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_35;
  v3 = this;
  this = (BattlePerformanceEnemy_o *)perf->fields.data;
  if ( !this )
    goto LABEL_35;
  this = (BattlePerformanceEnemy_o *)BattleData__getStageEntity((BattleData_o *)this, 0LL);
  if ( !this )
    goto LABEL_35;
  this = (BattlePerformanceEnemy_o *)StageEntity__IsForceSetNormalEnemyStatusUI((StageEntity_o *)this, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    v4 = v3->fields.perf;
    if ( !v4 )
      goto LABEL_35;
    this = (BattlePerformanceEnemy_o *)v4->fields.data;
    if ( !this )
      goto LABEL_35;
    this = (BattlePerformanceEnemy_o *)BattleData__getEnemyServantList((BattleData_o *)this, 0LL);
    if ( !this )
      goto LABEL_35;
    m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
    v6 = this;
    if ( m_CancellationTokenSource >= 1 )
    {
      v7 = 0;
      while ( 1 )
      {
        if ( v7 >= m_CancellationTokenSource )
          goto LABEL_36;
        this = (BattlePerformanceEnemy_o *)*((_QWORD *)&v6->fields.perf + (int)v7);
        if ( !this )
          goto LABEL_35;
        if ( BYTE1(this[3].fields.raidParam) )
          break;
        this = (BattlePerformanceEnemy_o *)BattleServantData__get_IsSuperBossUi((BattleServantData_o *)this, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          this = (BattlePerformanceEnemy_o *)v3->fields.superBossTr;
          if ( this )
          {
            v27.fields.x = 0.0;
            v27.fields.y = 0.0;
            v27.fields.z = 0.0;
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v27, 0LL);
            this = (BattlePerformanceEnemy_o *)v3->fields.raidTr;
            if ( this )
            {
              v21 = 0;
              v23 = 0;
              v22 = 1119092736;
LABEL_33:
              UnityEngine_Transform__set_localPosition(
                (UnityEngine_Transform_o *)this,
                *(UnityEngine_Vector3_o *)&v21,
                0LL);
              this = (BattlePerformanceEnemy_o *)v3->fields.nomalTr;
              if ( this )
              {
                v28.fields.y = v3->fields.raidY;
                v28.fields.x = 0.0;
                v28.fields.z = 0.0;
                UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v28, 0LL);
                return;
              }
            }
          }
LABEL_35:
          sub_1C22094(this, method);
        }
        m_CancellationTokenSource = (int)v6->fields.m_CancellationTokenSource;
        if ( (int)++v7 >= m_CancellationTokenSource )
          goto LABEL_15;
      }
      this = (BattlePerformanceEnemy_o *)v3->fields.superBossTr;
      if ( this )
      {
        v26.fields.x = 0.0;
        v26.fields.z = 0.0;
        v26.fields.y = 90.0;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v26, 0LL);
        this = (BattlePerformanceEnemy_o *)v3->fields.raidTr;
        if ( this )
        {
          v21 = 0;
          v22 = 0;
          v23 = 0;
          goto LABEL_33;
        }
      }
      goto LABEL_35;
    }
  }
LABEL_15:
  this = (BattlePerformanceEnemy_o *)v3->fields.superBossTr;
  if ( !this )
    goto LABEL_35;
  v24.fields.x = 0.0;
  v24.fields.z = 0.0;
  v24.fields.y = 90.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v24, 0LL);
  this = (BattlePerformanceEnemy_o *)v3->fields.raidTr;
  if ( !this )
    goto LABEL_35;
  v25.fields.x = 0.0;
  v25.fields.z = 0.0;
  v25.fields.y = 90.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v25, 0LL);
  this = (BattlePerformanceEnemy_o *)BattlePerformanceEnemy__MakeEnemyParamPosData(v3, v8);
  if ( !this )
    goto LABEL_35;
  nomalTr = v3->fields.nomalTr;
  v10 = this;
  this = (BattlePerformanceEnemy_o *)((__int64 (__fastcall *)(BattlePerformanceEnemy_o *, const char *))this->klass[1]._1.gc_desc)(
                                       this,
                                       this->klass[1]._1.name);
  if ( !nomalTr )
    goto LABEL_35;
  UnityEngine_Transform__set_localPosition(nomalTr, *(UnityEngine_Vector3_o *)&v11, 0LL);
  v14 = v3->fields.nomalTr;
  this = (BattlePerformanceEnemy_o *)((__int64 (__fastcall *)(BattlePerformanceEnemy_o *, void *))v10->klass[1]._1.namespaze)(
                                       v10,
                                       v10->klass[1]._1.byval_arg.data);
  if ( !v14 )
    goto LABEL_35;
  UnityEngine_Transform__set_localScale(v14, *(UnityEngine_Vector3_o *)&v15, 0LL);
  svtParamList = v3->fields.svtParamList;
  if ( !svtParamList )
    goto LABEL_35;
  max_length = svtParamList->max_length;
  if ( max_length >= 1 )
  {
    v20 = 0;
    while ( v20 < max_length )
    {
      this = (BattlePerformanceEnemy_o *)svtParamList->m_Items[v20];
      if ( !this )
        goto LABEL_35;
      this = (BattlePerformanceEnemy_o *)((__int64 (__fastcall *)(BattlePerformanceEnemy_o *, BattlePerformanceEnemy_o *, Il2CppClass *))this->klass[1]._1.castClass)(
                                           this,
                                           v10,
                                           this->klass[1]._1.declaringType);
      max_length = svtParamList->max_length;
      if ( (int)++v20 >= max_length )
        return;
    }
LABEL_36:
    sub_1C2209C(this, method);
  }
}


void __fastcall BattlePerformanceEnemy__setTarget(
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
    BattleLogic__updateEnemyTargetLogic((BattleLogic_o *)this, 0LL);
    v6 = v4->fields.perf;
    if ( !v6 )
      goto LABEL_24;
    this = (BattlePerformanceEnemy_o *)v6->fields.data;
    if ( !this )
      goto LABEL_24;
    this = (BattlePerformanceEnemy_o *)BattleData__isTargetLock((BattleData_o *)this, 0LL);
    svtHeadUpList = v4->fields.svtHeadUpList;
    if ( !svtHeadUpList )
      goto LABEL_24;
    v8 = (char)this;
    v9 = 0LL;
    while ( 1 )
    {
      max_length = svtHeadUpList->max_length;
      if ( (int)v9 >= max_length )
        break;
      if ( (unsigned int)v9 >= max_length )
LABEL_25:
        sub_1C2209C(this, svtData);
      this = (BattlePerformanceEnemy_o *)svtHeadUpList->m_Items[v9];
      if ( this )
      {
        BattleServantHeadUpComponent__setTargetMark(
          (BattleServantHeadUpComponent_o *)this,
          svtData->fields.uniqueId,
          v8 & 1,
          0LL);
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
    v12 = 0LL;
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
          0LL);
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
            0LL),
          (this = (BattlePerformanceEnemy_o *)v4->fields.superbossParam) == 0LL) )
    {
LABEL_24:
      sub_1C22094(this, svtData);
    }
    BattleServantParamComponent__setTargetMark(
      (BattleServantParamComponent_o *)this,
      svtData->fields.uniqueId,
      v14,
      0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceEnemy__setTargetIcon(
        BattlePerformanceEnemy_o *this,
        BattleServantData_o *svtdata,
        UnityEngine_GameObject_o *target,
        int32_t index,
        const MethodInfo *method)
{
  BattlePerformanceEnemy_o *v8; // x19
  struct BattleServantHeadUpComponent_array *svtHeadUpList; // x8
  struct BattleServantHeadUpComponent_array *v10; // x8
  BattleServantHeadUpComponent_o *v11; // x8
  struct System_Int32_array *list_ID; // x8
  Il2CppObject *Component_object; // x22
  UnityEngine_Transform_o *transform; // x0
  struct BattleServantHeadUpComponent_array *v15; // x8
  BattlePerformanceEnemy_o *v16; // x21
  BattlePerformance_o *perf; // x19
  BattlePerformanceEnemy_o *v18; // x20
  int v19; // s0
  UnityEngine_Vector3_o v22; // 0:s3.4,4:s4.4,8:s5.4

  v8 = this;
  if ( (byte_4BDF5B1 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    this = (BattlePerformanceEnemy_o *)sub_1C21E38(&StringLiteral_19304/*"en_target01"*/);
    byte_4BDF5B1 = 1;
  }
  svtHeadUpList = v8->fields.svtHeadUpList;
  if ( !svtHeadUpList )
    goto LABEL_19;
  if ( svtHeadUpList->max_length <= index )
    goto LABEL_20;
  this = (BattlePerformanceEnemy_o *)svtHeadUpList->m_Items[index];
  if ( !this )
    goto LABEL_19;
  BattleServantHeadUpComponent__setData((BattleServantHeadUpComponent_o *)this, svtdata, 0LL);
  v10 = v8->fields.svtHeadUpList;
  if ( !v10 )
    goto LABEL_19;
  if ( v10->max_length <= index )
    goto LABEL_20;
  v11 = v10->m_Items[index];
  if ( !v11 )
    goto LABEL_19;
  v11->fields.index = index;
  if ( !svtdata )
    goto LABEL_19;
  list_ID = v8->fields.list_ID;
  if ( !list_ID )
    goto LABEL_19;
  if ( list_ID->max_length <= index )
    goto LABEL_20;
  list_ID->m_Items[index + 1] = svtdata->fields.uniqueId;
  if ( !target
    || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                             target,
                             (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___),
        transform = UnityEngine_GameObject__get_transform(target, 0LL),
        this = (BattlePerformanceEnemy_o *)TransformHelper__getNodeFromLvName(
                                             transform,
                                             (System_String_o *)StringLiteral_19304/*"en_target01"*/,
                                             -1,
                                             0,
                                             0LL),
        (v15 = v8->fields.svtHeadUpList) == 0LL) )
  {
LABEL_19:
    sub_1C22094(this, svtdata);
  }
  if ( v15->max_length <= index )
LABEL_20:
    sub_1C2209C(this, svtdata);
  v16 = this;
  this = (BattlePerformanceEnemy_o *)v15->m_Items[index];
  if ( !this )
    goto LABEL_19;
  perf = v8->fields.perf;
  this = (BattlePerformanceEnemy_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !Component_object )
    goto LABEL_19;
  v18 = this;
  *(UnityEngine_Vector3_o *)&v19 = BattleActorControl__getHeadUpY((BattleActorControl_o *)Component_object, 0LL);
  if ( !perf )
    goto LABEL_19;
  v22.fields.x = 0.0;
  v22.fields.y = 0.0;
  v22.fields.z = 0.0;
  BattlePerformance__SetPopUpNodeObjectPosition(
    perf,
    (BattleActorControl_o *)Component_object,
    (UnityEngine_GameObject_o *)v18,
    *(UnityEngine_Vector3_o *)&v19,
    (UnityEngine_Transform_o *)v16,
    v22,
    0LL);
}


void __fastcall BattlePerformanceEnemy__setWinView(BattlePerformanceEnemy_o *this, const MethodInfo *method)
{
  struct BattleServantParamComponent_array *svtParamList; // x8
  BattlePerformanceEnemy_o *v3; // x19
  __int64 v4; // x20
  int max_length; // w9

  svtParamList = this->fields.svtParamList;
  if ( !svtParamList )
    goto LABEL_7;
  v3 = this;
  v4 = 0LL;
  while ( 1 )
  {
    max_length = svtParamList->max_length;
    if ( (int)v4 >= max_length )
      break;
    if ( (unsigned int)v4 >= max_length )
      sub_1C2209C(this, method);
    this = (BattlePerformanceEnemy_o *)svtParamList->m_Items[v4];
    if ( this )
    {
      this = (BattlePerformanceEnemy_o *)(*(__int64 (__fastcall **)(BattlePerformanceEnemy_o *, _QWORD, Il2CppClass *))&this->klass[1]._1.this_arg.bits)(
                                           this,
                                           0LL,
                                           this->klass[1]._1.element_class);
      svtParamList = v3->fields.svtParamList;
      ++v4;
      if ( svtParamList )
        continue;
    }
    goto LABEL_7;
  }
  this = (BattlePerformanceEnemy_o *)v3->fields.raidParam;
  if ( !this
    || ((*(void (__fastcall **)(BattlePerformanceEnemy_o *, _QWORD, Il2CppClass *))&this->klass[1]._1.this_arg.bits)(
          this,
          0LL,
          this->klass[1]._1.element_class),
        (this = (BattlePerformanceEnemy_o *)v3->fields.superbossParam) == 0LL) )
  {
LABEL_7:
    sub_1C22094(this, method);
  }
  (*(void (__fastcall **)(BattlePerformanceEnemy_o *, _QWORD, Il2CppClass *))&this->klass[1]._1.this_arg.bits)(
    this,
    0LL,
    this->klass[1]._1.element_class);
}


void __fastcall BattlePerformanceEnemy__showSideEffect(
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
  v6 = 4LL;
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
                                         0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v9 = v4->fields.svtParamList;
      if ( !v9 )
        goto LABEL_13;
      if ( v8 >= v9->max_length )
LABEL_24:
        sub_1C2209C(this, buffData);
      this = (BattlePerformanceEnemy_o *)*((_QWORD *)&v9->obj.klass + v6);
      if ( !this )
        goto LABEL_13;
      BattleServantParamComponent__showSideEffect((BattleServantParamComponent_o *)this, buffData, 0LL);
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
  if ( BattleServantParamComponent__checkId((BattleServantParamComponent_o *)this, buffData->fields.targetId, 0LL) )
  {
    this = (BattlePerformanceEnemy_o *)v4->fields.raidParam;
    if ( !this )
      goto LABEL_13;
    BattleServantParamComponent__showSideEffect((BattleServantParamComponent_o *)this, buffData, 0LL);
  }
  this = (BattlePerformanceEnemy_o *)v4->fields.superbossParam;
  if ( !this )
LABEL_13:
    sub_1C22094(this, buffData);
  if ( BattleServantParamComponent__checkId((BattleServantParamComponent_o *)this, buffData->fields.targetId, 0LL) )
  {
    this = (BattlePerformanceEnemy_o *)v4->fields.superbossParam;
    if ( this )
    {
      BattleServantParamComponent__showSideEffect((BattleServantParamComponent_o *)this, buffData, 0LL);
      return;
    }
    goto LABEL_13;
  }
}


void __fastcall BattlePerformanceEnemy__startAction(BattlePerformanceEnemy_o *this, const MethodInfo *method)
{
  struct BattleServantHeadUpComponent_array *svtHeadUpList; // x8
  BattlePerformanceEnemy_o *v3; // x19
  __int64 v4; // x20
  int max_length; // w9

  svtHeadUpList = this->fields.svtHeadUpList;
  if ( !svtHeadUpList )
LABEL_7:
    sub_1C22094(this, method);
  v3 = this;
  v4 = 0LL;
  while ( 1 )
  {
    max_length = svtHeadUpList->max_length;
    if ( (int)v4 >= max_length )
      break;
    if ( (unsigned int)v4 >= max_length )
      sub_1C2209C(this, method);
    this = (BattlePerformanceEnemy_o *)svtHeadUpList->m_Items[v4];
    if ( this )
    {
      BattleServantHeadUpComponent__setModeAction((BattleServantHeadUpComponent_o *)this, 0LL);
      svtHeadUpList = v3->fields.svtHeadUpList;
      ++v4;
      if ( svtHeadUpList )
        continue;
    }
    goto LABEL_7;
  }
}


void __fastcall BattlePerformanceEnemy__startCommand(BattlePerformanceEnemy_o *this, const MethodInfo *method)
{
  struct BattleServantHeadUpComponent_array *svtHeadUpList; // x8
  BattlePerformanceEnemy_o *v3; // x19
  __int64 v4; // x20
  int max_length; // w9

  svtHeadUpList = this->fields.svtHeadUpList;
  if ( !svtHeadUpList )
LABEL_7:
    sub_1C22094(this, method);
  v3 = this;
  v4 = 0LL;
  while ( 1 )
  {
    max_length = svtHeadUpList->max_length;
    if ( (int)v4 >= max_length )
      break;
    if ( (unsigned int)v4 >= max_length )
      sub_1C2209C(this, method);
    this = (BattlePerformanceEnemy_o *)svtHeadUpList->m_Items[v4];
    if ( this )
    {
      BattleServantHeadUpComponent__setModeCommand((BattleServantHeadUpComponent_o *)this, 0LL);
      svtHeadUpList = v3->fields.svtHeadUpList;
      ++v4;
      if ( svtHeadUpList )
        continue;
    }
    goto LABEL_7;
  }
}


void __fastcall BattlePerformanceEnemy__startSkill(BattlePerformanceEnemy_o *this, const MethodInfo *method)
{
  struct BattleServantHeadUpComponent_array *svtHeadUpList; // x8
  BattlePerformanceEnemy_o *v3; // x19
  __int64 v4; // x20
  int max_length; // w9

  svtHeadUpList = this->fields.svtHeadUpList;
  if ( !svtHeadUpList )
LABEL_7:
    sub_1C22094(this, method);
  v3 = this;
  v4 = 0LL;
  while ( 1 )
  {
    max_length = svtHeadUpList->max_length;
    if ( (int)v4 >= max_length )
      break;
    if ( (unsigned int)v4 >= max_length )
      sub_1C2209C(this, method);
    this = (BattlePerformanceEnemy_o *)svtHeadUpList->m_Items[v4];
    if ( this )
    {
      BattleServantHeadUpComponent__setTargetRoot((BattleServantHeadUpComponent_o *)this, 0, 0LL);
      svtHeadUpList = v3->fields.svtHeadUpList;
      ++v4;
      if ( svtHeadUpList )
        continue;
    }
    goto LABEL_7;
  }
}


void __fastcall BattlePerformanceEnemy__startTac(BattlePerformanceEnemy_o *this, const MethodInfo *method)
{
  struct BattleServantHeadUpComponent_array *svtHeadUpList; // x8
  BattlePerformanceEnemy_o *v3; // x19
  __int64 v4; // x20
  int max_length; // w9

  svtHeadUpList = this->fields.svtHeadUpList;
  if ( !svtHeadUpList )
LABEL_7:
    sub_1C22094(this, method);
  v3 = this;
  v4 = 0LL;
  while ( 1 )
  {
    max_length = svtHeadUpList->max_length;
    if ( (int)v4 >= max_length )
      break;
    if ( (unsigned int)v4 >= max_length )
      sub_1C2209C(this, method);
    this = (BattlePerformanceEnemy_o *)svtHeadUpList->m_Items[v4];
    if ( this )
    {
      BattleServantHeadUpComponent__setModeTac((BattleServantHeadUpComponent_o *)this, 0LL);
      svtHeadUpList = v3->fields.svtHeadUpList;
      ++v4;
      if ( svtHeadUpList )
        continue;
    }
    goto LABEL_7;
  }
}


void __fastcall BattlePerformanceEnemy__startWave(BattlePerformanceEnemy_o *this, const MethodInfo *method)
{
  struct BattleServantHeadUpComponent_array *svtHeadUpList; // x8
  BattlePerformanceEnemy_o *v3; // x19
  __int64 v4; // x20
  int max_length; // w9

  svtHeadUpList = this->fields.svtHeadUpList;
  if ( !svtHeadUpList )
LABEL_7:
    sub_1C22094(this, method);
  v3 = this;
  v4 = 0LL;
  while ( 1 )
  {
    max_length = svtHeadUpList->max_length;
    if ( (int)v4 >= max_length )
      break;
    if ( (unsigned int)v4 >= max_length )
      sub_1C2209C(this, method);
    this = (BattlePerformanceEnemy_o *)svtHeadUpList->m_Items[v4];
    if ( this )
    {
      BattleServantHeadUpComponent__setModeWaveStart((BattleServantHeadUpComponent_o *)this, 0LL);
      svtHeadUpList = v3->fields.svtHeadUpList;
      ++v4;
      if ( svtHeadUpList )
        continue;
    }
    goto LABEL_7;
  }
}


void __fastcall BattlePerformanceEnemy__updateBuff(BattlePerformanceEnemy_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall BattlePerformanceEnemy__updateRaidHp(BattlePerformanceEnemy_o *this, const MethodInfo *method)
{
  BattleServantRaidParamComponent_o *raidParam; // x0

  raidParam = this->fields.raidParam;
  if ( !raidParam )
    sub_1C22094(0LL, method);
  BattleServantRaidParamComponent__updateRaidHp(raidParam, 0LL);
}


void __fastcall BattlePerformanceEnemy__updateRaidInfos(
        BattlePerformanceEnemy_o *this,
        BattleRaidInfo_array *infos,
        bool fixUpdate,
        const MethodInfo *method)
{
  struct BattleServantRaidParamComponent_o *raidParam; // x8
  struct BattleServantData_o *data; // x22
  BattleRaidInfo_array *v6; // x20
  signed int max_length; // w8
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
          sub_1C2209C(this, infos);
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
            0LL);
        }
        max_length = v6->max_length;
        if ( (int)++v9 >= max_length )
          return;
      }
LABEL_13:
      sub_1C22094(this, infos);
    }
  }
}


void __fastcall BattlePerformanceEnemy__updateStateString(BattlePerformanceEnemy_o *this, const MethodInfo *method)
{
  BattleServantSuperBossParamComponent_o *superbossParam; // x0

  superbossParam = this->fields.superbossParam;
  if ( !superbossParam )
    sub_1C22094(0LL, method);
  BattleServantSuperBossParamComponent__updateStateString(superbossParam, 0LL);
}


void __fastcall BattlePerformanceEnemy__updateSuperBossInfos(
        BattlePerformanceEnemy_o *this,
        BattleSuperBossInfo_array *infos,
        bool fixUpdate,
        const MethodInfo *method)
{
  struct BattleServantSuperBossParamComponent_o *superbossParam; // x8
  struct BattleServantData_o *data; // x22
  BattleSuperBossInfo_array *v6; // x20
  signed int max_length; // w8
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
          sub_1C2209C(this, infos);
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
            0LL);
        }
        max_length = v6->max_length;
        if ( (int)++v9 >= max_length )
          return;
      }
LABEL_13:
      sub_1C22094(this, infos);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceEnemy__updateView(BattlePerformanceEnemy_o *this, const MethodInfo *method)
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
  int v16; // s1
  struct BattleServantParamComponent_array *v17; // x8
  int v18; // s8
  int v19; // s2
  float v20; // s0
  int v21; // s1

  svtParamList = this->fields.svtParamList;
  if ( !svtParamList )
    goto LABEL_36;
  v3 = this;
  v4 = 0LL;
  while ( 1 )
  {
    max_length = svtParamList->max_length;
    if ( (int)v4 >= max_length )
      break;
    if ( (unsigned int)v4 >= max_length )
LABEL_38:
      sub_1C2209C(this, method);
    this = (BattlePerformanceEnemy_o *)svtParamList->m_Items[v4];
    if ( this )
    {
      BattleServantParamComponent__updateView((BattleServantParamComponent_o *)this, 0LL);
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
  v7 = 0LL;
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
      BattleServantHeadUpComponent__updateView((BattleServantHeadUpComponent_o *)this, 0LL);
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
  BattleServantParamComponent__updateView((BattleServantParamComponent_o *)this, 0LL);
  this = (BattlePerformanceEnemy_o *)v3->fields.superbossParam;
  if ( !this )
    goto LABEL_36;
  BattleServantParamComponent__updateView((BattleServantParamComponent_o *)this, 0LL);
  this = (BattlePerformanceEnemy_o *)v3->fields.bdata;
  if ( !this )
    goto LABEL_36;
  this = (BattlePerformanceEnemy_o *)BattleData__IsWarBoard((BattleData_o *)this, 0LL);
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
    sub_1C22094(this, method);
  v11 = 4LL;
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
      this = (BattlePerformanceEnemy_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      v14 = v3->fields.svtParamList;
      if ( v14 )
      {
        if ( v13 >= v14->max_length )
          goto LABEL_38;
        v15 = this;
        this = (BattlePerformanceEnemy_o *)*((_QWORD *)&v14->obj.klass + v11);
        if ( this )
        {
          this = (BattlePerformanceEnemy_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
          if ( this )
          {
            *(UnityEngine_Vector3_o *)(&v16 - 1) = UnityEngine_Transform__get_localPosition(
                                                     (UnityEngine_Transform_o *)this,
                                                     0LL);
            v17 = v3->fields.svtParamList;
            if ( v17 )
            {
              if ( v13 >= v17->max_length )
                goto LABEL_38;
              this = (BattlePerformanceEnemy_o *)*((_QWORD *)&v17->obj.klass + v11);
              if ( this )
              {
                v18 = v16;
                this = (BattlePerformanceEnemy_o *)UnityEngine_Component__get_transform(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
                if ( this )
                {
                  *(UnityEngine_Vector3_o *)(&v19 - 2) = UnityEngine_Transform__get_localPosition(
                                                           (UnityEngine_Transform_o *)this,
                                                           0LL);
                  if ( v15 )
                  {
                    v20 = (float)((float)(int)v13 * -200.0) + 178.0;
                    v21 = v18;
                    UnityEngine_Transform__set_localPosition(
                      (UnityEngine_Transform_o *)v15,
                      *(UnityEngine_Vector3_o *)(&v19 - 2),
                      0LL);
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


void __fastcall BattlePerformanceEnemy___c__DisplayClass40_0___ctor(
        BattlePerformanceEnemy___c__DisplayClass40_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattlePerformanceEnemy___c__DisplayClass40_0___GetSvtParamComponent_b__0(
        BattlePerformanceEnemy___c__DisplayClass40_0_o *this,
        BattleServantParamComponent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C22094(this, 0LL);
  return BattleServantParamComponent__checkId(x, this->fields.uniqueId, 0LL);
}