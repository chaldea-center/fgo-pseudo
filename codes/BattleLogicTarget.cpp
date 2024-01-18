void __fastcall BattleLogicTarget___ctor(BattleLogicTarget_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleLogicTarget__IsTargetAlive(
        BattleLogicTarget_o *this,
        BattleServantData_o *svtData,
        bool isResurrectable,
        const MethodInfo *method)
{
  BattleLogicTarget_o *v6; // x21

  v6 = this;
  if ( (byte_4189B59 & 1) == 0 )
  {
    this = (BattleLogicTarget_o *)sub_B2C35C(&Method_BasicHelper_ContainsSelfNotNull_int___, svtData);
    byte_4189B59 = 1;
  }
  if ( !svtData )
    sub_B2C434(this, svtData);
  return !BasicHelper__ContainsSelfNotNull_int_(
            (System_Collections_Generic_HashSet_T__o *)v6->fields.tempDeadSvtHash,
            svtData->fields.uniqueId,
            (const MethodInfo_17268C8 *)Method_BasicHelper_ContainsSelfNotNull_int___)
      && BattleServantData__isAlive(svtData, isResurrectable, 0LL);
}


bool __fastcall BattleLogicTarget__IsTargetGuts(
        BattleLogicTarget_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  BattleLogicTarget_o *v4; // x20

  v4 = this;
  if ( (byte_4189B5A & 1) == 0 )
  {
    this = (BattleLogicTarget_o *)sub_B2C35C(&Method_BasicHelper_ContainsSelfNotNull_int___, svtData);
    byte_4189B5A = 1;
  }
  if ( !svtData )
    sub_B2C434(this, svtData);
  return !svtData->fields.isDeadAnime
      && BasicHelper__ContainsSelfNotNull_int_(
           (System_Collections_Generic_HashSet_T__o *)v4->fields.tempDeadSvtHash,
           svtData->fields.uniqueId,
           (const MethodInfo_17268C8 *)Method_BasicHelper_ContainsSelfNotNull_int___)
      || BattleServantData__isGuts(svtData, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BattleLogicTarget___getTargetBattleServantData_b__20_1(
        BattleLogicTarget_o *this,
        int32_t a,
        int32_t b,
        const MethodInfo *method)
{
  BattleData_o *data; // x0
  BattleData_o *v7; // x8
  intptr_t m_CachedPtr; // w20

  data = this->fields.data;
  if ( !data
    || (data = (BattleData_o *)BattleData__getEnemyServantData(data, a, 0LL)) == 0LL
    || (v7 = this->fields.data) == 0LL
    || (m_CachedPtr = data->fields.m_CachedPtr,
        (data = (BattleData_o *)BattleData__getEnemyServantData(v7, b, 0LL)) == 0LL) )
  {
    sub_B2C434(data, *(_QWORD *)&a);
  }
  return m_CachedPtr - data->fields.m_CachedPtr;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BattleLogicTarget___getTargetHighHp_b__9_0(
        BattleLogicTarget_o *this,
        int32_t x,
        int32_t y,
        const MethodInfo *method)
{
  BattleData_o *data; // x0
  BattleData_o *v7; // x8
  BattleData_o *v8; // x19

  data = this->fields.data;
  if ( !data
    || (data = (BattleData_o *)BattleData__getServantData(data, x, 0LL), (v7 = this->fields.data) == 0LL)
    || (v8 = data, (data = (BattleData_o *)BattleData__getServantData(v7, y, 0LL)) == 0LL)
    || (data = (BattleData_o *)(*(__int64 (__fastcall **)(BattleData_o *, Il2CppClass *))&data->klass[1]._1.this_arg.bits)(
                                 data,
                                 data->klass[1]._1.element_class),
        !v8) )
  {
    sub_B2C434(data, *(_QWORD *)&x);
  }
  return (_DWORD)data
       - (*(__int64 (__fastcall **)(BattleData_o *, Il2CppClass *))&v8->klass[1]._1.this_arg.bits)(
           v8,
           v8->klass[1]._1.element_class);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BattleLogicTarget___getTargetLowHp_b__10_0(
        BattleLogicTarget_o *this,
        int32_t x,
        int32_t y,
        const MethodInfo *method)
{
  BattleData_o *data; // x0
  BattleData_o *v7; // x8
  BattleData_o *v8; // x20
  BattleData_o *v9; // x19

  data = this->fields.data;
  if ( !data
    || (data = (BattleData_o *)BattleData__getServantData(data, x, 0LL), (v7 = this->fields.data) == 0LL)
    || (v8 = data, data = (BattleData_o *)BattleData__getServantData(v7, y, 0LL), !v8)
    || (v9 = data,
        data = (BattleData_o *)(*(__int64 (__fastcall **)(BattleData_o *, Il2CppClass *))&v8->klass[1]._1.this_arg.bits)(
                                 v8,
                                 v8->klass[1]._1.element_class),
        !v9) )
  {
    sub_B2C434(data, *(_QWORD *)&x);
  }
  return (_DWORD)data
       - (*(__int64 (__fastcall **)(BattleData_o *, Il2CppClass *))&v9->klass[1]._1.this_arg.bits)(
           v9,
           v9->klass[1]._1.element_class);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BattleLogicTarget___getTargetNpGaugeHeighter_b__12_0(
        BattleLogicTarget_o *this,
        int32_t x,
        int32_t y,
        const MethodInfo *method)
{
  BattleData_o *data; // x0
  BattleData_o *v7; // x8
  BattleData_o *v8; // x20

  data = this->fields.data;
  if ( !data
    || (data = (BattleData_o *)BattleData__getServantData(data, x, 0LL), (v7 = this->fields.data) == 0LL)
    || (v8 = data, (data = (BattleData_o *)BattleData__getServantData(v7, y, 0LL)) == 0LL)
    || !v8 )
  {
    sub_B2C434(data, *(_QWORD *)&x);
  }
  return HIDWORD(data->fields.enemyAppearValid) - HIDWORD(v8->fields.enemyAppearValid);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BattleLogicTarget___getTargetNpTurnLower_b__11_0(
        BattleLogicTarget_o *this,
        int32_t x,
        int32_t y,
        const MethodInfo *method)
{
  BattleData_o *data; // x0
  BattleData_o *v7; // x8
  BattleData_o *v8; // x19
  int v9; // w8
  int v10; // w8
  int v11; // w9

  data = this->fields.data;
  if ( !data
    || (data = (BattleData_o *)BattleData__getServantData(data, x, 0LL), (v7 = this->fields.data) == 0LL)
    || (v8 = data, data = (BattleData_o *)BattleData__getServantData(v7, y, 0LL), !v8)
    || !data )
  {
    sub_B2C434(data, *(_QWORD *)&x);
  }
  if ( SHIDWORD(v8->fields.maxTurnDamageInBattle) <= 0 )
    v9 = 999;
  else
    v9 = 0;
  v10 = v9 + LODWORD(v8->fields.totalDamageInTurn);
  if ( SHIDWORD(data->fields.maxTurnDamageInBattle) <= 0 )
    v11 = -999;
  else
    v11 = 0;
  return v10 - LODWORD(data->fields.totalDamageInTurn) + v11;
}


System_Int32_array *__fastcall BattleLogicTarget__deathSvtExclusion(
        BattleLogicTarget_o *this,
        System_Int32_array *targetlist,
        bool isResurrectable,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_int__o *v10; // x21
  BattleData_o *data; // x0
  __int64 v12; // x1
  __int64 v13; // x8
  unsigned __int64 v14; // x24
  bool v15; // w22
  const MethodInfo *v16; // x3
  BattleServantData_o *v17; // x23
  const MethodInfo *v18; // x2
  struct BattleData_o *v19; // x8
  __int64 v21; // x0

  if ( (byte_4189B5B & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, targetlist);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__ToArray__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v8);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v9);
    byte_4189B5B = 1;
  }
  v10 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v10,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !targetlist )
    goto LABEL_18;
  v13 = *(_QWORD *)&targetlist->max_length;
  if ( (int)v13 >= 1 )
  {
    v14 = 0LL;
    v15 = isResurrectable;
    while ( 1 )
    {
      if ( v14 >= (unsigned int)v13 )
      {
        v21 = sub_B2C460(data);
        sub_B2C400(v21, 0LL);
      }
      data = this->fields.data;
      if ( !data )
        break;
      data = (BattleData_o *)BattleData__getServantData(data, targetlist->m_Items[v14 + 1], 0LL);
      if ( data )
      {
        v17 = (BattleServantData_o *)data;
        data = (BattleData_o *)BattleLogicTarget__IsTargetAlive(this, (BattleServantData_o *)data, v15, v16);
        if ( ((unsigned __int8)data & 1) != 0 )
          goto LABEL_10;
        data = (BattleData_o *)BattleLogicTarget__IsTargetGuts(this, v17, v18);
        if ( ((unsigned __int8)data & 1) != 0 )
        {
          v19 = this->fields.data;
          if ( !v19 )
            break;
          data = (BattleData_o *)BattleServantData__checkDeadTurn(v17, v19->fields.typeTurn, 0LL);
          if ( ((unsigned __int8)data & 1) == 0 )
          {
LABEL_10:
            if ( !v10 )
              break;
            System_Collections_Generic_List_int___Add(
              v10,
              v17->fields.uniqueId,
              (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
          }
        }
      }
      LODWORD(v13) = targetlist->max_length;
      if ( (__int64)++v14 >= (int)v13 )
        goto LABEL_16;
    }
LABEL_18:
    sub_B2C434(data, v12);
  }
LABEL_16:
  if ( !v10 )
    goto LABEL_18;
  return System_Collections_Generic_List_int___ToArray(
           v10,
           (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BattleLogicTarget__getGlobalTargetId(
        BattleLogicTarget_o *this,
        int32_t uniqueId,
        bool isMaster,
        System_Int32_array *addIndiv,
        const MethodInfo *method)
{
  BattleData_o *data; // x0
  struct BattleData_o *v10; // x23
  struct BattleData_o *v11; // x8
  struct BattleData_o *v12; // x8

  data = this->fields.data;
  if ( !data )
    goto LABEL_9;
  data = (BattleData_o *)BattleData__isTargetLock(data, 0LL);
  if ( ((unsigned __int8)data & 1) == 0 )
    goto LABEL_7;
  v10 = this->fields.data;
  if ( !v10
    || (data = (BattleData_o *)BattleData__getTargetLock(this->fields.data, uniqueId, isMaster, addIndiv, 0LL),
        v10->fields.globaltargetId = (int)data,
        (v11 = this->fields.data) == 0LL)
    || (data = (BattleData_o *)v11->fields.perf) == 0LL )
  {
LABEL_9:
    sub_B2C434(data, *(_QWORD *)&uniqueId);
  }
  BattlePerformance__reViewTargetMarks((BattlePerformance_o *)data, 0LL);
LABEL_7:
  v12 = this->fields.data;
  if ( !v12 )
    goto LABEL_9;
  return v12->fields.globaltargetId;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BattleLogicTarget__getRevenge(
        BattleLogicTarget_o *this,
        int32_t actId,
        System_Int32_array *targetlist,
        bool isDeadToEnableUpHate,
        const MethodInfo *method)
{
  BattleData_o *data; // x0
  BattleServantData_o *v9; // x22
  int32_t RevengeTargetUniqueId; // w0
  const MethodInfo *v11; // x4
  int32_t v12; // w23
  BattleServantData_o *ServantData; // x0
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x2

  data = this->fields.data;
  if ( !data )
    goto LABEL_10;
  data = (BattleData_o *)BattleData__getServantData(data, actId, 0LL);
  if ( !data )
    goto LABEL_10;
  v9 = (BattleServantData_o *)data;
  RevengeTargetUniqueId = BattleServantData__getRevengeTargetUniqueId((BattleServantData_o *)data, 0LL);
  if ( RevengeTargetUniqueId < 1 )
    return BattleLogicTarget__getTargetRandom(this, targetlist, 0, isDeadToEnableUpHate, v11);
  v12 = RevengeTargetUniqueId;
  data = this->fields.data;
  if ( !data )
LABEL_10:
    sub_B2C434(data, *(_QWORD *)&actId);
  ServantData = BattleData__getServantData(data, v12, 0LL);
  if ( ServantData
    && (BattleLogicTarget__IsTargetAlive(this, ServantData, 0, v14) || BattleLogicTarget__IsTargetGuts(this, v9, v15)) )
  {
    return v12;
  }
  return BattleLogicTarget__getTargetRandom(this, targetlist, 0, isDeadToEnableUpHate, v11);
}


int32_t __fastcall BattleLogicTarget__getTargetActiveBuff(
        BattleLogicTarget_o *this,
        System_Int32_array *ids,
        System_Int32_array *targetlist,
        bool isDeadToEnableUpHate,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x23
  __int64 v14; // x0
  __int64 v15; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_Comparison_int__o *v28; // x22
  const MethodInfo *v29; // x4

  if ( (byte_4189B62 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Array_Sort_int____67376040, ids);
    sub_B2C35C(&Method_System_Comparison_int___ctor__, v9);
    sub_B2C35C(&System_Comparison_int__TypeInfo, v10);
    sub_B2C35C(&Method_BattleLogicTarget___c__DisplayClass15_0__getTargetActiveBuff_b__0__, v11);
    sub_B2C35C(&BattleLogicTarget___c__DisplayClass15_0_TypeInfo, v12);
    byte_4189B62 = 1;
  }
  v13 = sub_B2C42C(BattleLogicTarget___c__DisplayClass15_0_TypeInfo);
  BattleLogicTarget___c__DisplayClass15_0___ctor((BattleLogicTarget___c__DisplayClass15_0_o *)v13, 0LL);
  if ( !v13 )
    sub_B2C434(v14, v15);
  *(_QWORD *)(v13 + 16) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v13 + 16), (System_Int32_array **)this, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v13 + 24) = ids;
  sub_B2C2F8((BattleServantConfConponent_o *)(v13 + 24), (System_Int32_array **)ids, v22, v23, v24, v25, v26, v27);
  v28 = (System_Comparison_int__o *)sub_B2C42C(System_Comparison_int__TypeInfo);
  System_Comparison_int____ctor(
    v28,
    (Il2CppObject *)v13,
    Method_BattleLogicTarget___c__DisplayClass15_0__getTargetActiveBuff_b__0__,
    (const MethodInfo_25D74C4 *)Method_System_Comparison_int___ctor__);
  System_Array__Sort_int__37534024(
    targetlist,
    (System_Comparison_T__o *)v28,
    (const MethodInfo_23CB948 *)Method_System_Array_Sort_int____67376040);
  return BattleLogicTarget__getTargetBase(this, targetlist, 0, isDeadToEnableUpHate, v29);
}


int32_t __fastcall BattleLogicTarget__getTargetActiveIndividualities(
        BattleLogicTarget_o *this,
        System_Int32_array *indv,
        System_Int32_array *targetlist,
        AiActEntity_o *aiActEnt,
        bool isDeadToEnableUpHate,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x24
  System_Collections_Generic_Dictionary_int__int__o *Count; // x0
  __int64 v30; // x1
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  const MethodInfo *v43; // x3
  System_Collections_Generic_Dictionary_int__int__o *v44; // x23
  System_Collections_Generic_Dictionary_int__int__o **v45; // x22
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  System_Comparison_int__o *v52; // x23
  const MethodInfo *v53; // x4
  int32_t Item; // w23
  System_Collections_Generic_List_int__o *v55; // x21
  __int64 v56; // x1
  int32_t currentKey; // w24
  __int64 v58; // x0
  __int64 v59; // x1
  System_Int32_array *v60; // x0
  const MethodInfo *v61; // x4
  __int64 v63; // x0
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o v64; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o v65; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4189B61 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Array_Sort_int____67376040, indv);
    sub_B2C35C(&Method_System_Comparison_int___ctor__, v11);
    sub_B2C35C(&System_Comparison_int__TypeInfo, v12);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__int__get_Count__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__int__get_Keys__, v16);
    sub_B2C35C(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v17);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__int__Dispose__, v18);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__int__MoveNext__, v19);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__int__get_Current__, v20);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_KeyCollection_int__int__GetEnumerator__, v21);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v22);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__ToArray__, v23);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v24);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v25);
    sub_B2C35C(&Method_BattleLogicTarget___c__DisplayClass14_0__getTargetActiveIndividualities_b__0__, v26);
    sub_B2C35C(&BattleLogicTarget___c__DisplayClass14_0_TypeInfo, v27);
    byte_4189B61 = 1;
  }
  memset(&v65, 0, sizeof(v65));
  v28 = sub_B2C42C(BattleLogicTarget___c__DisplayClass14_0_TypeInfo);
  BattleLogicTarget___c__DisplayClass14_0___ctor((BattleLogicTarget___c__DisplayClass14_0_o *)v28, 0LL);
  if ( !v28 )
    goto LABEL_26;
  *(_QWORD *)(v28 + 16) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v28 + 16), (System_Int32_array **)this, v31, v32, v33, v34, v35, v36);
  *(_QWORD *)(v28 + 24) = indv;
  sub_B2C2F8((BattleServantConfConponent_o *)(v28 + 24), (System_Int32_array **)indv, v37, v38, v39, v40, v41, v42);
  if ( aiActEnt && !AiActEntity__IsIncludeDeathSvt(aiActEnt, 0LL) )
    targetlist = BattleLogicTarget__deathSvtExclusion(this, targetlist, 0, v43);
  v44 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B2C42C(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v44,
    (const MethodInfo_2E2399C *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  *(_QWORD *)(v28 + 32) = v44;
  v45 = (System_Collections_Generic_Dictionary_int__int__o **)(v28 + 32);
  sub_B2C2F8((BattleServantConfConponent_o *)(v28 + 32), (System_Int32_array **)v44, v46, v47, v48, v49, v50, v51);
  v52 = (System_Comparison_int__o *)sub_B2C42C(System_Comparison_int__TypeInfo);
  System_Comparison_int____ctor(
    v52,
    (Il2CppObject *)v28,
    Method_BattleLogicTarget___c__DisplayClass14_0__getTargetActiveIndividualities_b__0__,
    (const MethodInfo_25D74C4 *)Method_System_Comparison_int___ctor__);
  System_Array__Sort_int__37534024(
    targetlist,
    (System_Comparison_T__o *)v52,
    (const MethodInfo_23CB948 *)Method_System_Array_Sort_int____67376040);
  Count = *(System_Collections_Generic_Dictionary_int__int__o **)(v28 + 32);
  if ( !Count )
    goto LABEL_26;
  Count = (System_Collections_Generic_Dictionary_int__int__o *)System_Collections_Generic_Dictionary_int__int___get_Count(
                                                                 Count,
                                                                 (const MethodInfo_2E24140 *)Method_System_Collections_Generic_Dictionary_int__int__get_Count__);
  if ( (int)Count >= 1 )
  {
    if ( targetlist )
    {
      if ( !targetlist->max_length )
      {
        v63 = sub_B2C460(Count);
        sub_B2C400(v63, 0LL);
      }
      Count = *v45;
      if ( *v45 )
      {
        Item = System_Collections_Generic_Dictionary_int__int___get_Item(
                 Count,
                 targetlist->m_Items[1],
                 (const MethodInfo_2E24480 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
        v55 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
        System_Collections_Generic_List_int____ctor(
          v55,
          (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
        Count = *v45;
        if ( *v45 )
        {
          Count = (System_Collections_Generic_Dictionary_int__int__o *)System_Collections_Generic_Dictionary_int__int___get_Keys(
                                                                         Count,
                                                                         (const MethodInfo_2E24150 *)Method_System_Collections_Generic_Dictionary_int__int__get_Keys__);
          if ( Count )
          {
            System_Collections_Generic_Dictionary_KeyCollection_int__int___GetEnumerator(
              &v64,
              (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)Count,
              (const MethodInfo_225F8A4 *)Method_System_Collections_Generic_Dictionary_KeyCollection_int__int__GetEnumerator__);
            v65 = v64;
            while ( System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__int___MoveNext(
                      &v65,
                      (const MethodInfo_2568C9C *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__int__MoveNext__) )
            {
              if ( !*v45 )
                sub_B2C434(0LL, v56);
              currentKey = (int32_t)v65.fields.currentKey;
              v58 = System_Collections_Generic_Dictionary_int__int___get_Item(
                      *v45,
                      (int32_t)v65.fields.currentKey,
                      (const MethodInfo_2E24480 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
              if ( Item == (_DWORD)v58 )
              {
                if ( !v55 )
                  sub_B2C434(v58, v59);
                System_Collections_Generic_List_int___Add(
                  v55,
                  currentKey,
                  (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
              }
            }
            System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__int___Dispose(
              &v65,
              (const MethodInfo_2568C98 *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__int__Dispose__);
            if ( v55 )
            {
              v60 = System_Collections_Generic_List_int___ToArray(
                      v55,
                      (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__);
              return BattleLogicTarget__getTargetRandom(this, v60, 0, isDeadToEnableUpHate, v61);
            }
          }
        }
      }
    }
LABEL_26:
    sub_B2C434(Count, v30);
  }
  return BattleLogicTarget__getTargetBase(this, targetlist, 0, isDeadToEnableUpHate, v53);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BattleLogicTarget__getTargetAiAct(
        BattleLogicTarget_o *this,
        int32_t target,
        int32_t actId,
        System_Int32_array *individuality,
        System_Int32_array *targetlist,
        bool isCheckHate,
        bool isResurrectable,
        System_Int32_array *addIndiv,
        AiActEntity_o *aiActEnt,
        bool isDeadToEnableUpHate,
        const MethodInfo *method)
{
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x28
  BattleData_o *NoTargetNoActionType; // x0
  __int64 v25; // x1
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_Collections_ICollection_o **v32; // x25
  BattleData_o *v33; // x27
  bool v34; // w26
  BattleServantData_o *ServantData; // x0
  const MethodInfo *v36; // x6
  struct PlayMakerFSM_o *rootfsm; // x8
  System_Int32_array *v38; // x0
  const MethodInfo *v39; // x3
  const MethodInfo *v40; // x4
  System_Int32_array *Shuffle_int; // x5
  int32_t result; // w0
  BattleLogicTarget___c__DisplayClass17_1_o *v43; // x21
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v44; // x0
  __int64 *v45; // x8
  System_Func_int____bool__o *v46; // x20
  Il2CppObject *v47; // x1
  const MethodInfo *v48; // x5
  bool v49; // w3
  int32_t v50; // w1
  BattleLogicTarget_o *v51; // x0

  if ( (byte_4189B63 & 1) == 0 )
  {
    sub_B2C35C(&Method_BattleRandom_getShuffle_int___, *(_QWORD *)&target);
    sub_B2C35C(&Method_System_Func_int____bool___ctor__, v16);
    sub_B2C35C(&System_Func_int____bool__TypeInfo, v17);
    sub_B2C35C(&int___TypeInfo, v18);
    sub_B2C35C(&Method_BattleLogicTarget___c__DisplayClass17_0__getTargetAiAct_b__1__, v19);
    sub_B2C35C(&BattleLogicTarget___c__DisplayClass17_0_TypeInfo, v20);
    sub_B2C35C(&Method_BattleLogicTarget___c__DisplayClass17_1__getTargetAiAct_b__0__, v21);
    sub_B2C35C(&BattleLogicTarget___c__DisplayClass17_1_TypeInfo, v22);
    byte_4189B63 = 1;
  }
  v23 = sub_B2C42C(BattleLogicTarget___c__DisplayClass17_0_TypeInfo);
  BattleLogicTarget___c__DisplayClass17_0___ctor((BattleLogicTarget___c__DisplayClass17_0_o *)v23, 0LL);
  if ( !v23 )
    goto LABEL_41;
  *(_QWORD *)(v23 + 16) = individuality;
  v32 = (System_Collections_ICollection_o **)(v23 + 16);
  sub_B2C2F8(
    (BattleServantConfConponent_o *)(v23 + 16),
    (System_Int32_array **)individuality,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  NoTargetNoActionType = (BattleData_o *)sub_B2C374(int___TypeInfo, 0LL);
  v33 = NoTargetNoActionType;
  if ( aiActEnt )
  {
    NoTargetNoActionType = (BattleData_o *)AiActEntity__GetNoTargetNoActionType(aiActEnt, 0LL);
    v34 = (_DWORD)NoTargetNoActionType != 0;
    if ( !isCheckHate )
      goto LABEL_10;
LABEL_8:
    NoTargetNoActionType = this->fields.data;
    if ( !NoTargetNoActionType )
      goto LABEL_41;
    ServantData = BattleData__getServantData(NoTargetNoActionType, actId, 0LL);
    NoTargetNoActionType = (BattleData_o *)BattleLogicTarget__narrowDownHate(
                                             this,
                                             targetlist,
                                             ServantData,
                                             isResurrectable,
                                             addIndiv,
                                             isDeadToEnableUpHate,
                                             v36);
    v33 = NoTargetNoActionType;
    goto LABEL_10;
  }
  v34 = 0;
  if ( isCheckHate )
    goto LABEL_8;
LABEL_10:
  if ( !v33 )
    goto LABEL_41;
  rootfsm = v33->fields.rootfsm;
  if ( rootfsm )
    goto LABEL_12;
  v43 = (BattleLogicTarget___c__DisplayClass17_1_o *)sub_B2C42C(BattleLogicTarget___c__DisplayClass17_1_TypeInfo);
  BattleLogicTarget___c__DisplayClass17_1___ctor(v43, 0LL);
  if ( !aiActEnt )
    goto LABEL_21;
  if ( !v43 )
    goto LABEL_41;
  if ( AiActEntity__TryGetMultiIndividuality(aiActEnt, &v43->fields.multiIndividuality, 0LL) )
  {
    v44 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_int____bool__TypeInfo);
    v45 = &Method_BattleLogicTarget___c__DisplayClass17_1__getTargetAiAct_b__0__;
    v46 = (System_Func_int____bool__o *)v44;
    v47 = (Il2CppObject *)v43;
  }
  else
  {
LABEL_21:
    if ( BasicHelper__IsNullOrEmpty(*v32, 0LL) )
    {
      v46 = 0LL;
      goto LABEL_27;
    }
    v44 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_int____bool__TypeInfo);
    v45 = &Method_BattleLogicTarget___c__DisplayClass17_0__getTargetAiAct_b__1__;
    v46 = (System_Func_int____bool__o *)v44;
    v47 = (Il2CppObject *)v23;
  }
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v44,
    v47,
    *v45,
    (const MethodInfo_2711C04 *)Method_System_Func_int____bool___ctor__);
  if ( !v46 )
    goto LABEL_27;
  NoTargetNoActionType = (BattleData_o *)BattleLogicTarget__narrowDownIndividuality(
                                           this,
                                           targetlist,
                                           v46,
                                           isResurrectable,
                                           target != 13,
                                           v48);
  if ( !NoTargetNoActionType )
LABEL_41:
    sub_B2C434(NoTargetNoActionType, v25);
  v33 = NoTargetNoActionType;
LABEL_27:
  rootfsm = v33->fields.rootfsm;
  if ( v34 && v46 != 0LL && rootfsm == 0LL )
    return -1;
LABEL_12:
  if ( rootfsm )
    v38 = (System_Int32_array *)v33;
  else
    v38 = targetlist;
  Shuffle_int = BattleRandom__getShuffle_int_(v38, (const MethodInfo_172A83C *)Method_BattleRandom_getShuffle_int___);
  switch ( target )
  {
    case 2:
      return BattleLogicTarget__getTargetHighHp(this, Shuffle_int, isDeadToEnableUpHate, v39);
    case 3:
      return BattleLogicTarget__getTargetLowHp(this, Shuffle_int, isDeadToEnableUpHate, v39);
    case 10:
      return BattleLogicTarget__getTargetNpTurnLower(this, Shuffle_int, isDeadToEnableUpHate, v39);
    case 11:
      return BattleLogicTarget__getTargetNpGaugeHeighter(this, Shuffle_int, isDeadToEnableUpHate, v39);
    case 12:
      return BattleLogicTarget__getRevenge(this, actId, Shuffle_int, isDeadToEnableUpHate, v40);
    case 13:
      return BattleLogicTarget__getTargetActiveIndividualities(
               this,
               (System_Int32_array *)*v32,
               Shuffle_int,
               aiActEnt,
               isDeadToEnableUpHate,
               (const MethodInfo *)Shuffle_int);
    case 14:
      return BattleLogicTarget__getTargetActiveBuff(
               this,
               (System_Int32_array *)*v32,
               Shuffle_int,
               isDeadToEnableUpHate,
               v40);
    case 15:
      v49 = isDeadToEnableUpHate;
      v51 = this;
      v50 = 0;
      goto LABEL_40;
    case 16:
      v49 = isDeadToEnableUpHate;
      v50 = 1;
      goto LABEL_39;
    case 17:
      v49 = isDeadToEnableUpHate;
      v50 = 2;
LABEL_39:
      v51 = this;
LABEL_40:
      result = BattleLogicTarget__getTargetPosition(v51, v50, Shuffle_int, v49, v34, (const MethodInfo *)Shuffle_int);
      break;
    default:
      result = BattleLogicTarget__getTargetBase(this, Shuffle_int, isResurrectable, isDeadToEnableUpHate, v40);
      break;
  }
  return result;
}


int32_t __fastcall BattleLogicTarget__getTargetBase(
        BattleLogicTarget_o *this,
        System_Int32_array *targetlist,
        bool isResurrectable,
        bool isDeadToEnableUpHate,
        const MethodInfo *method)
{
  __int64 v5; // x8
  BattleLogicTarget_o *v8; // x21
  unsigned __int64 v9; // x24
  bool v10; // w22
  const MethodInfo *v11; // x3
  BattleServantData_o *v12; // x23
  const MethodInfo *v13; // x2
  struct BattleData_o *data; // x8
  __int64 v16; // x0

  if ( !targetlist )
LABEL_16:
    sub_B2C434(this, targetlist);
  v5 = *(_QWORD *)&targetlist->max_length;
  if ( (int)v5 < 1 )
    return -1;
  v8 = this;
  v9 = 0LL;
  v10 = isResurrectable;
  while ( 1 )
  {
    if ( v9 >= (unsigned int)v5 )
    {
      v16 = sub_B2C460(this);
      sub_B2C400(v16, 0LL);
    }
    this = (BattleLogicTarget_o *)v8->fields.data;
    if ( !this )
      goto LABEL_16;
    this = (BattleLogicTarget_o *)BattleData__getServantData((BattleData_o *)this, targetlist->m_Items[v9 + 1], 0LL);
    if ( this )
    {
      v12 = (BattleServantData_o *)this;
      if ( BattleLogicTarget__IsTargetAlive(v8, (BattleServantData_o *)this, v10, v11) )
        return v12->fields.uniqueId;
      this = (BattleLogicTarget_o *)BattleLogicTarget__IsTargetGuts(v8, v12, v13);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        data = v8->fields.data;
        if ( !data )
          goto LABEL_16;
        this = (BattleLogicTarget_o *)BattleServantData__checkDeadTurn(v12, data->fields.typeTurn, 0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
          break;
      }
      if ( !isDeadToEnableUpHate )
      {
        this = (BattleLogicTarget_o *)BattleServantData__getNowHp(v12, 0LL);
        if ( (int)this >= 1 )
          break;
      }
    }
    LODWORD(v5) = targetlist->max_length;
    if ( (__int64)++v9 >= (int)v5 )
      return -1;
  }
  return v12->fields.uniqueId;
}


BattleServantData_o *__fastcall BattleLogicTarget__getTargetBattleServantData(
        BattleLogicTarget_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  BattleData_o *data; // x0
  const MethodInfo *v14; // x2
  struct BattleData_o *v15; // x21
  int32_t v16; // w1
  BattleData_o *v17; // x0
  System_Int32_array *v18; // x3
  int32_t v19; // w22
  struct BattleData_o *v20; // x8
  Il2CppObject *ServantData; // x21
  BattleLogicTarget___c_c *v22; // x8
  struct BattleLogicTarget___c_StaticFields *static_fields; // x9
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__20_0; // x22
  Il2CppObject *v25; // x23
  struct BattleLogicTarget___c_StaticFields *v26; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  Il2CppObject *v33; // x0
  BattleServantData_o *v34; // x21
  const MethodInfo *v35; // x2
  struct BattleData_o *v36; // x8
  int32_t ActorId; // w0
  const MethodInfo *v39; // x2
  struct BattleData_o *v40; // x8
  struct BattleData_o *v41; // x8
  System_Int32_array *v42; // x21
  const MethodInfo *v43; // x4
  System_Comparison_int__o *v44; // x22
  struct BattleData_o *v45; // x22
  const MethodInfo *v46; // x2
  const MethodInfo *v47; // x2
  struct BattleData_o *v48; // x21
  int32_t v49; // w22
  System_Int32_array *v50; // x3
  struct BattleData_o *v51; // x8
  struct BattleData_o *v52; // x8

  if ( (byte_4189B66 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Array_Sort_int____67376040, task);
    sub_B2C35C(&Method_BasicHelper_TakeIf_BattleServantData___, v5);
    sub_B2C35C(&Method_BattleLogicTarget__getTargetBattleServantData_b__20_1__, v6);
    sub_B2C35C(&Method_System_Comparison_int___ctor__, v7);
    sub_B2C35C(&System_Comparison_int__TypeInfo, v8);
    sub_B2C35C(&Method_System_Predicate_BattleServantData___ctor__, v9);
    sub_B2C35C(&System_Predicate_BattleServantData__TypeInfo, v10);
    sub_B2C35C(&Method_BattleLogicTarget___c__getTargetBattleServantData_b__20_0__, v11);
    sub_B2C35C(&BattleLogicTarget___c_TypeInfo, v12);
    byte_4189B66 = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_70;
  if ( BattleData__ExistsFieldEnemyIntervalBuff(data, 38, 0LL) )
  {
    data = this->fields.data;
    if ( !data )
      goto LABEL_70;
    BattleData__ResetFieldEnemyUseBuff(data, 38, 0, 0LL);
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_70;
  data = (BattleData_o *)BattleData__isTargetLock(data, 0LL);
  if ( ((unsigned __int8)data & 1) == 0 )
  {
    BattleLogicTarget__updateEnemyTarget(this, 0LL, v14);
    goto LABEL_24;
  }
  if ( !task )
    goto LABEL_70;
  if ( task->fields.actiontype == 4 )
  {
    data = (BattleData_o *)BattleLogicTask__IsTargetTypeEnemy(task, (const MethodInfo *)task);
    if ( ((unsigned __int8)data & 1) == 0 )
      goto LABEL_21;
    v15 = this->fields.data;
    data = (BattleData_o *)BattleLogicTask__getActorId(task, (const MethodInfo *)task);
    if ( !v15 )
      goto LABEL_70;
    v16 = (int)data;
    v17 = v15;
    v18 = 0LL;
  }
  else
  {
    v15 = this->fields.data;
    data = (BattleData_o *)BattleLogicTask__getActorId(task, (const MethodInfo *)task);
    v19 = (int)data;
    if ( task->fields.skillInfo )
    {
      data = (BattleData_o *)BattleSkillInfoData__GetAddIndiv(task->fields.skillInfo, 0LL);
      v18 = (System_Int32_array *)data;
      if ( !v15 )
        goto LABEL_70;
    }
    else
    {
      v18 = 0LL;
      if ( !v15 )
        goto LABEL_70;
    }
    v17 = v15;
    v16 = v19;
  }
  data = (BattleData_o *)BattleData__getTargetLock(v17, v16, 0, v18, 0LL);
  v15->fields.globaltargetId = (int)data;
LABEL_21:
  v20 = this->fields.data;
  if ( !v20 )
    goto LABEL_70;
  data = (BattleData_o *)v20->fields.perf;
  if ( !data )
    goto LABEL_70;
  BattlePerformance__reViewTargetMarks((BattlePerformance_o *)data, 0LL);
LABEL_24:
  data = this->fields.data;
  if ( !data )
    goto LABEL_70;
  ServantData = (Il2CppObject *)BattleData__getServantData(data, data->fields.globaltargetId, 0LL);
  v22 = BattleLogicTarget___c_TypeInfo;
  if ( (BYTE3(BattleLogicTarget___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleLogicTarget___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicTarget___c_TypeInfo);
    v22 = BattleLogicTarget___c_TypeInfo;
  }
  static_fields = v22->static_fields;
  _9__20_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__20_0;
  if ( !_9__20_0 )
  {
    if ( (BYTE3(v22->vtable._0_Equals.methodPtr) & 4) != 0 && !v22->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v22);
      static_fields = BattleLogicTarget___c_TypeInfo->static_fields;
    }
    v25 = (Il2CppObject *)static_fields->__9;
    _9__20_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_BattleServantData__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__20_0,
      v25,
      Method_BattleLogicTarget___c__getTargetBattleServantData_b__20_0__,
      (const MethodInfo_2952BE4 *)Method_System_Predicate_BattleServantData___ctor__);
    v26 = BattleLogicTarget___c_TypeInfo->static_fields;
    v26->__9__20_0 = (struct System_Predicate_BattleServantData__o *)_9__20_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v26->__9__20_0,
      (System_Int32_array **)_9__20_0,
      v27,
      v28,
      v29,
      v30,
      v31,
      v32);
  }
  v33 = BasicHelper__TakeIf_object_(
          ServantData,
          (System_Predicate_T__o *)_9__20_0,
          (const MethodInfo_1729520 *)Method_BasicHelper_TakeIf_BattleServantData___);
  if ( v33 )
  {
    v34 = (BattleServantData_o *)v33;
    data = (BattleData_o *)BattleServantData__isAlive((BattleServantData_o *)v33, 0, 0LL);
    if ( ((unsigned __int8)data & 1) != 0 )
    {
      v36 = this->fields.data;
      if ( v36 && task )
        goto LABEL_37;
      goto LABEL_70;
    }
    data = (BattleData_o *)BattleServantData__isAlive(v34, 0, 0LL);
    if ( ((unsigned __int8)data & 1) == 0 )
    {
      if ( !task )
        goto LABEL_70;
      ActorId = BattleLogicTask__getActorId(task, (const MethodInfo *)task);
      data = (BattleData_o *)BattleServantData__checkOverKill(v34, ActorId, 0LL);
      if ( ((unsigned __int8)data & 1) != 0 )
      {
        v36 = this->fields.data;
        if ( v36 )
        {
LABEL_37:
          BattleLogicTask__setTarget(task, v36->fields.globaltargetId, v35);
          return v34;
        }
        goto LABEL_70;
      }
    }
    if ( !BattleServantData__isAlive(v34, 0, 0LL) )
    {
      data = (BattleData_o *)BattleServantData__isGuts(v34, 0LL);
      if ( ((unsigned __int8)data & 1) != 0 )
      {
        v40 = this->fields.data;
        if ( v40 && task )
        {
          BattleLogicTask__setTarget(task, v40->fields.globaltargetId, v39);
          v34->fields.overkillTargetId = -1;
          return v34;
        }
        goto LABEL_70;
      }
    }
    v34->fields.overkillTargetId = -1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_70;
  data = (BattleData_o *)BattleData__getFieldEnemyServantIDList(data, 1, 0LL);
  v41 = this->fields.data;
  if ( !v41 )
    goto LABEL_70;
  v42 = (System_Int32_array *)data;
  data = (BattleData_o *)v41->fields.quest_ent;
  if ( !data )
    goto LABEL_70;
  if ( QuestEntity__HasFlag((QuestEntity_o *)data, 0x40000000000000LL, 0LL) )
  {
    v44 = (System_Comparison_int__o *)sub_B2C42C(System_Comparison_int__TypeInfo);
    System_Comparison_int____ctor(
      v44,
      (Il2CppObject *)this,
      Method_BattleLogicTarget__getTargetBattleServantData_b__20_1__,
      (const MethodInfo_25D74C4 *)Method_System_Comparison_int___ctor__);
    System_Array__Sort_int__37534024(
      v42,
      (System_Comparison_T__o *)v44,
      (const MethodInfo_23CB948 *)Method_System_Array_Sort_int____67376040);
  }
  v45 = this->fields.data;
  data = (BattleData_o *)BattleLogicTarget__getTargetBase(this, v42, 0, 1, v43);
  if ( !v45 )
    goto LABEL_70;
  v45->fields.globaltargetId = (int)data;
  BattleLogicTarget__updateEnemyTarget(this, v42, v46);
  data = this->fields.data;
  if ( !data )
    goto LABEL_70;
  data = (BattleData_o *)BattleData__isTargetLock(data, 0LL);
  if ( ((unsigned __int8)data & 1) != 0 )
  {
    if ( !task )
      goto LABEL_70;
    v48 = this->fields.data;
    data = (BattleData_o *)BattleLogicTask__getActorId(task, (const MethodInfo *)task);
    v49 = (int)data;
    if ( task->fields.skillInfo )
    {
      data = (BattleData_o *)BattleSkillInfoData__GetAddIndiv(task->fields.skillInfo, 0LL);
      v50 = (System_Int32_array *)data;
      if ( !v48 )
        goto LABEL_70;
    }
    else
    {
      v50 = 0LL;
      if ( !v48 )
        goto LABEL_70;
    }
    data = (BattleData_o *)BattleData__getTargetLock(v48, v49, 0, v50, 0LL);
    v48->fields.globaltargetId = (int)data;
    v51 = this->fields.data;
    if ( v51 )
    {
      data = (BattleData_o *)v51->fields.perf;
      if ( data )
      {
        BattlePerformance__reViewTargetMarks((BattlePerformance_o *)data, 0LL);
        goto LABEL_66;
      }
    }
LABEL_70:
    sub_B2C434(data, task);
  }
LABEL_66:
  v52 = this->fields.data;
  if ( !v52 )
    goto LABEL_70;
  if ( !task )
    goto LABEL_70;
  BattleLogicTask__setTarget(task, v52->fields.globaltargetId, v47);
  data = this->fields.data;
  if ( !data )
    goto LABEL_70;
  return BattleData__getServantData(data, data->fields.globaltargetId, 0LL);
}


int32_t __fastcall BattleLogicTarget__getTargetHighHp(
        BattleLogicTarget_o *this,
        System_Int32_array *targetlist,
        bool isDeadToEnableUpHate,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Comparison_int__o *v10; // x22
  const MethodInfo *v11; // x4

  if ( (byte_4189B5D & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Array_Sort_int____67376040, targetlist);
    sub_B2C35C(&Method_BattleLogicTarget__getTargetHighHp_b__9_0__, v7);
    sub_B2C35C(&Method_System_Comparison_int___ctor__, v8);
    sub_B2C35C(&System_Comparison_int__TypeInfo, v9);
    byte_4189B5D = 1;
  }
  v10 = (System_Comparison_int__o *)sub_B2C42C(System_Comparison_int__TypeInfo);
  System_Comparison_int____ctor(
    v10,
    (Il2CppObject *)this,
    Method_BattleLogicTarget__getTargetHighHp_b__9_0__,
    (const MethodInfo_25D74C4 *)Method_System_Comparison_int___ctor__);
  System_Array__Sort_int__37534024(
    targetlist,
    (System_Comparison_T__o *)v10,
    (const MethodInfo_23CB948 *)Method_System_Array_Sort_int____67376040);
  return BattleLogicTarget__getTargetBase(this, targetlist, 0, isDeadToEnableUpHate, v11);
}


int32_t __fastcall BattleLogicTarget__getTargetLowHp(
        BattleLogicTarget_o *this,
        System_Int32_array *targetlist,
        bool isDeadToEnableUpHate,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Comparison_int__o *v10; // x22
  const MethodInfo *v11; // x4

  if ( (byte_4189B5E & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Array_Sort_int____67376040, targetlist);
    sub_B2C35C(&Method_BattleLogicTarget__getTargetLowHp_b__10_0__, v7);
    sub_B2C35C(&Method_System_Comparison_int___ctor__, v8);
    sub_B2C35C(&System_Comparison_int__TypeInfo, v9);
    byte_4189B5E = 1;
  }
  v10 = (System_Comparison_int__o *)sub_B2C42C(System_Comparison_int__TypeInfo);
  System_Comparison_int____ctor(
    v10,
    (Il2CppObject *)this,
    Method_BattleLogicTarget__getTargetLowHp_b__10_0__,
    (const MethodInfo_25D74C4 *)Method_System_Comparison_int___ctor__);
  System_Array__Sort_int__37534024(
    targetlist,
    (System_Comparison_T__o *)v10,
    (const MethodInfo_23CB948 *)Method_System_Array_Sort_int____67376040);
  return BattleLogicTarget__getTargetBase(this, targetlist, 0, isDeadToEnableUpHate, v11);
}


int32_t __fastcall BattleLogicTarget__getTargetNpGaugeHeighter(
        BattleLogicTarget_o *this,
        System_Int32_array *targetlist,
        bool isDeadToEnableUpHate,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Comparison_int__o *v10; // x22
  const MethodInfo *v11; // x4

  if ( (byte_4189B60 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Array_Sort_int____67376040, targetlist);
    sub_B2C35C(&Method_BattleLogicTarget__getTargetNpGaugeHeighter_b__12_0__, v7);
    sub_B2C35C(&Method_System_Comparison_int___ctor__, v8);
    sub_B2C35C(&System_Comparison_int__TypeInfo, v9);
    byte_4189B60 = 1;
  }
  v10 = (System_Comparison_int__o *)sub_B2C42C(System_Comparison_int__TypeInfo);
  System_Comparison_int____ctor(
    v10,
    (Il2CppObject *)this,
    Method_BattleLogicTarget__getTargetNpGaugeHeighter_b__12_0__,
    (const MethodInfo_25D74C4 *)Method_System_Comparison_int___ctor__);
  System_Array__Sort_int__37534024(
    targetlist,
    (System_Comparison_T__o *)v10,
    (const MethodInfo_23CB948 *)Method_System_Array_Sort_int____67376040);
  return BattleLogicTarget__getTargetBase(this, targetlist, 0, isDeadToEnableUpHate, v11);
}


int32_t __fastcall BattleLogicTarget__getTargetNpTurnLower(
        BattleLogicTarget_o *this,
        System_Int32_array *targetlist,
        bool isDeadToEnableUpHate,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Comparison_int__o *v10; // x22
  const MethodInfo *v11; // x4

  if ( (byte_4189B5F & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Array_Sort_int____67376040, targetlist);
    sub_B2C35C(&Method_BattleLogicTarget__getTargetNpTurnLower_b__11_0__, v7);
    sub_B2C35C(&Method_System_Comparison_int___ctor__, v8);
    sub_B2C35C(&System_Comparison_int__TypeInfo, v9);
    byte_4189B5F = 1;
  }
  v10 = (System_Comparison_int__o *)sub_B2C42C(System_Comparison_int__TypeInfo);
  System_Comparison_int____ctor(
    v10,
    (Il2CppObject *)this,
    Method_BattleLogicTarget__getTargetNpTurnLower_b__11_0__,
    (const MethodInfo_25D74C4 *)Method_System_Comparison_int___ctor__);
  System_Array__Sort_int__37534024(
    targetlist,
    (System_Comparison_T__o *)v10,
    (const MethodInfo_23CB948 *)Method_System_Array_Sort_int____67376040);
  return BattleLogicTarget__getTargetBase(this, targetlist, 0, isDeadToEnableUpHate, v11);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BattleLogicTarget__getTargetPosition(
        BattleLogicTarget_o *this,
        int32_t position,
        System_Int32_array *targetlist,
        bool isDeadToEnableUpHate,
        bool noTargetNoAction,
        const MethodInfo *method)
{
  __int64 v6; // x8
  BattleLogicTarget_o *v10; // x21
  unsigned __int64 v12; // x25
  BattleServantData_o *v13; // x24
  const MethodInfo *v14; // x3
  __int64 v16; // x0

  if ( !targetlist )
LABEL_15:
    sub_B2C434(this, *(_QWORD *)&position);
  v6 = *(_QWORD *)&targetlist->max_length;
  v10 = this;
  if ( (int)v6 < 1 )
  {
LABEL_10:
    if ( noTargetNoAction )
      return -1;
    else
      return BattleLogicTarget__getTargetRandom(
               v10,
               targetlist,
               0,
               isDeadToEnableUpHate,
               (const MethodInfo *)noTargetNoAction);
  }
  else
  {
    v12 = 0LL;
    while ( 1 )
    {
      if ( v12 >= (unsigned int)v6 )
        goto LABEL_16;
      this = (BattleLogicTarget_o *)v10->fields.data;
      if ( !this )
        goto LABEL_15;
      this = (BattleLogicTarget_o *)BattleData__getServantData((BattleData_o *)this, targetlist->m_Items[v12 + 1], 0LL);
      if ( !this )
        goto LABEL_15;
      v13 = (BattleServantData_o *)this;
      this = (BattleLogicTarget_o *)BattleServantData__getDeckIndex((BattleServantData_o *)this, 0LL);
      if ( (_DWORD)this == position )
      {
        this = (BattleLogicTarget_o *)BattleLogicTarget__IsTargetAlive(v10, v13, 0, v14);
        if ( ((unsigned __int8)this & 1) != 0 )
          break;
      }
      LODWORD(v6) = targetlist->max_length;
      if ( (__int64)++v12 >= (int)v6 )
        goto LABEL_10;
    }
    if ( (unsigned int)v12 >= targetlist->max_length )
    {
LABEL_16:
      v16 = sub_B2C460(this);
      sub_B2C400(v16, 0LL);
    }
    return targetlist->m_Items[v12 + 1];
  }
}


int32_t __fastcall BattleLogicTarget__getTargetRandom(
        BattleLogicTarget_o *this,
        System_Int32_array *targetlist,
        bool isResurrectable,
        bool isDeadToEnableUpHate,
        const MethodInfo *method)
{
  System_Int32_array *Shuffle_int; // x0
  const MethodInfo *v10; // x4

  if ( (byte_4189B5C & 1) == 0 )
  {
    sub_B2C35C(&Method_BattleRandom_getShuffle_int___, targetlist);
    byte_4189B5C = 1;
  }
  Shuffle_int = BattleRandom__getShuffle_int_(
                  targetlist,
                  (const MethodInfo_172A83C *)Method_BattleRandom_getShuffle_int___);
  return BattleLogicTarget__getTargetBase(this, Shuffle_int, isResurrectable, isDeadToEnableUpHate, v10);
}


System_Int32_array *__fastcall BattleLogicTarget__narrowDownHate(
        BattleLogicTarget_o *this,
        System_Int32_array *list,
        BattleServantData_o *atkSvt,
        bool isResurrectable,
        System_Int32_array *addIndiv,
        bool isDeadToEnableUpHate,
        const MethodInfo *method)
{
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  System_Collections_Generic_List_int__o *v17; // x22
  BattleBuffData_CheckIndividualitiesData_o *v18; // x26
  System_Int32_array *data; // x0
  __int64 v20; // x1
  System_Int32_array *selfConcatSvtIndividualities_k__BackingField; // x0
  __int64 v22; // x8
  System_Int32_array *v23; // x23
  unsigned __int64 v24; // x26
  int32_t *v25; // x27
  bool v26; // w24
  struct BattleData_o *v27; // x8
  BattleServantData_o *ServantData; // x25
  const MethodInfo *v29; // x3
  const MethodInfo *v30; // x2
  __int64 v32; // x0

  if ( (byte_4189B65 & 1) == 0 )
  {
    sub_B2C35C(&BattleBuffData_CheckIndividualitiesData_TypeInfo, list);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__ToArray__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v15);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v16);
    byte_4189B65 = 1;
  }
  v17 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v17,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  if ( atkSvt )
  {
    v18 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B2C42C(BattleBuffData_CheckIndividualitiesData_TypeInfo);
    BattleBuffData_CheckIndividualitiesData___ctor(v18, atkSvt, 0LL, 0LL, 0LL, 0LL, 0LL);
    if ( !v18 )
      goto LABEL_27;
    selfConcatSvtIndividualities_k__BackingField = v18->fields._selfConcatSvtIndividualities_k__BackingField;
  }
  else
  {
    selfConcatSvtIndividualities_k__BackingField = 0LL;
  }
  data = CommonFunction__JoinIndiv(selfConcatSvtIndividualities_k__BackingField, addIndiv, 0LL);
  if ( !list )
    goto LABEL_27;
  v22 = *(_QWORD *)&list->max_length;
  if ( (int)v22 >= 1 )
  {
    v23 = data;
    v24 = 0LL;
    v25 = &list->m_Items[1];
    v26 = isResurrectable;
    do
    {
      if ( v24 >= (unsigned int)v22 )
      {
LABEL_28:
        v32 = sub_B2C460(data);
        sub_B2C400(v32, 0LL);
      }
      data = (System_Int32_array *)this->fields.data;
      if ( !data )
        goto LABEL_27;
      ServantData = BattleData__getServantData((BattleData_o *)data, v25[v24], 0LL);
      data = (System_Int32_array *)BattleLogicTarget__IsTargetAlive(this, ServantData, v26, v29);
      if ( ((unsigned __int8)data & 1) != 0
        || (data = (System_Int32_array *)BattleLogicTarget__IsTargetGuts(this, ServantData, v30),
            ((unsigned __int8)data & 1) != 0) )
      {
        if ( !ServantData )
          goto LABEL_27;
      }
      else
      {
        v27 = this->fields.data;
        if ( !v27 || !ServantData )
          goto LABEL_27;
        data = (System_Int32_array *)BattleServantData__checkDeadTurn(ServantData, v27->fields.typeTurn, 0LL);
        if ( ((unsigned __int8)data & 1) == 0 || !isDeadToEnableUpHate )
          goto LABEL_24;
      }
      data = (System_Int32_array *)BattleServantData__isUpHate(ServantData, v23, 0LL);
      if ( ((unsigned __int8)data & 1) != 0 )
      {
        if ( v24 >= list->max_length )
          goto LABEL_28;
        if ( !v17 )
          goto LABEL_27;
        System_Collections_Generic_List_int___Add(
          v17,
          v25[v24],
          (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
      }
LABEL_24:
      LODWORD(v22) = list->max_length;
    }
    while ( (__int64)++v24 < (int)v22 );
  }
  if ( !v17 )
LABEL_27:
    sub_B2C434(data, v20);
  return System_Collections_Generic_List_int___ToArray(
           v17,
           (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_Int32_array *__fastcall BattleLogicTarget__narrowDownIndividuality(
        BattleLogicTarget_o *this,
        System_Int32_array *list,
        System_Func_int____bool__o *funcContainsIndividuality,
        bool isResurrectable,
        bool isCheckBuff,
        const MethodInfo *method)
{
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_Collections_Generic_List_int__o *v15; // x23
  BattleData_o *data; // x0
  __int64 v17; // x1
  __int64 v18; // x8
  unsigned __int64 v19; // x27
  int32_t *v20; // x28
  bool v21; // w24
  BattleServantData_o *ServantData; // x25
  const MethodInfo *v23; // x3
  const MethodInfo *v24; // x2
  System_Collections_Generic_List_int__o *v25; // x26
  System_Collections_Generic_IEnumerable_T__o *BuffIndividualities; // x0
  __int64 v28; // x0

  if ( (byte_4189B64 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Func_int____bool__Invoke__, list);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__AddRange__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__ToArray__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v13);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v14);
    byte_4189B64 = 1;
  }
  v15 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v15,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !list )
    goto LABEL_22;
  v18 = *(_QWORD *)&list->max_length;
  if ( (int)v18 >= 1 )
  {
    v19 = 0LL;
    v20 = &list->m_Items[1];
    v21 = isResurrectable;
    do
    {
      if ( v19 >= (unsigned int)v18 )
      {
LABEL_23:
        v28 = sub_B2C460(data);
        sub_B2C400(v28, 0LL);
      }
      data = this->fields.data;
      if ( !data )
        goto LABEL_22;
      ServantData = BattleData__getServantData(data, v20[v19], 0LL);
      if ( BattleLogicTarget__IsTargetAlive(this, ServantData, v21, v23)
        || (data = (BattleData_o *)BattleLogicTarget__IsTargetGuts(this, ServantData, v24),
            ((unsigned __int8)data & 1) != 0) )
      {
        v25 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
        System_Collections_Generic_List_int____ctor(
          v25,
          (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
        if ( !ServantData )
          goto LABEL_22;
        data = (BattleData_o *)BattleServantData__getIndividualities(ServantData, 0LL, 0LL);
        if ( !v25 )
          goto LABEL_22;
        System_Collections_Generic_List_int___AddRange(
          v25,
          (System_Collections_Generic_IEnumerable_T__o *)data,
          (const MethodInfo_2F6724C *)Method_System_Collections_Generic_List_int__AddRange__);
        if ( isCheckBuff )
        {
          BuffIndividualities = (System_Collections_Generic_IEnumerable_T__o *)BattleServantData__getBuffIndividualities(
                                                                                 ServantData,
                                                                                 0,
                                                                                 0,
                                                                                 0,
                                                                                 0LL);
          System_Collections_Generic_List_int___AddRange(
            v25,
            BuffIndividualities,
            (const MethodInfo_2F6724C *)Method_System_Collections_Generic_List_int__AddRange__);
        }
        data = (BattleData_o *)System_Collections_Generic_List_int___ToArray(
                                 v25,
                                 (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__);
        if ( !funcContainsIndividuality )
          goto LABEL_22;
        data = (BattleData_o *)System_Func_BattleBuffData_BuffData__bool___Invoke(
                                 (System_Func_BattleBuffData_BuffData__bool__o *)funcContainsIndividuality,
                                 (BattleBuffData_BuffData_o *)data,
                                 (const MethodInfo_2711C18 *)Method_System_Func_int____bool__Invoke__);
        if ( ((unsigned __int8)data & 1) != 0 )
        {
          if ( v19 >= list->max_length )
            goto LABEL_23;
          if ( !v15 )
            goto LABEL_22;
          System_Collections_Generic_List_int___Add(
            v15,
            v20[v19],
            (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
        }
      }
      LODWORD(v18) = list->max_length;
    }
    while ( (__int64)++v19 < (int)v18 );
  }
  if ( !v15 )
LABEL_22:
    sub_B2C434(data, v17);
  return System_Collections_Generic_List_int___ToArray(
           v15,
           (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__);
}


void __fastcall BattleLogicTarget__setInit(BattleLogicTarget_o *this, BattleData_o *data, const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.data = data;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields,
    (System_Int32_array **)data,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall BattleLogicTarget__updateEnemyTarget(
        BattleLogicTarget_o *this,
        System_Int32_array *targetIdList,
        const MethodInfo *method)
{
  System_Int32_array *FieldEnemyServantIDList; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  BattleData_o *data; // x0
  System_Collections_Generic_List_int__o *v8; // x21
  __int64 v9; // x8
  unsigned __int64 v10; // x23
  int32_t *v11; // x24
  BattleServantData_o *v12; // x22
  __int64 v13; // x0

  FieldEnemyServantIDList = targetIdList;
  if ( (byte_4189B67 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, targetIdList);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v5);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v6);
    byte_4189B67 = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_23;
  if ( !data->fields.isMultiTargetBattle )
  {
    if ( !FieldEnemyServantIDList )
      FieldEnemyServantIDList = BattleData__getFieldEnemyServantIDList(data, 1, 0LL);
    v8 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v8,
      (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
    data = this->fields.data;
    if ( !data )
      goto LABEL_23;
    data = (BattleData_o *)BattleData__getFieldEnemyServantIDList(data, 1, 0LL);
    if ( !FieldEnemyServantIDList )
      goto LABEL_23;
    v9 = *(_QWORD *)&FieldEnemyServantIDList->max_length;
    data = this->fields.data;
    if ( (int)v9 >= 1 )
    {
      v10 = 0LL;
      v11 = &FieldEnemyServantIDList->m_Items[1];
      while ( 1 )
      {
        if ( v10 >= (unsigned int)v9 )
        {
LABEL_24:
          v13 = sub_B2C460(data);
          sub_B2C400(v13, 0LL);
        }
        if ( !data )
          break;
        data = (BattleData_o *)BattleData__getEnemyServantData(data, v11[v10], 0LL);
        if ( !data )
          break;
        v12 = (BattleServantData_o *)data;
        if ( BattleServantData__isAlive((BattleServantData_o *)data, 0, 0LL) || BattleServantData__isGuts(v12, 0LL) )
        {
          data = (BattleData_o *)BattleServantData__isUpHate(v12, 0LL, 0LL);
          if ( ((unsigned __int8)data & 1) != 0 )
          {
            if ( v10 >= FieldEnemyServantIDList->max_length )
              goto LABEL_24;
            if ( !v8 )
              break;
            System_Collections_Generic_List_int___Add(
              v8,
              v11[v10],
              (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
          }
        }
        LODWORD(v9) = FieldEnemyServantIDList->max_length;
        data = this->fields.data;
        if ( (__int64)++v10 >= (int)v9 )
          goto LABEL_21;
      }
LABEL_23:
      sub_B2C434(data, targetIdList);
    }
LABEL_21:
    if ( !data )
      goto LABEL_23;
    BattleData__setTargetLock(data, v8, 0LL);
  }
}


void __fastcall BattleLogicTarget__updateGlobalTarget(BattleLogicTarget_o *this, const MethodInfo *method)
{
  BattleData_o *data; // x0
  struct PlayMakerFSM_o *rootfsm; // x8
  BattleData_o *v5; // x20
  unsigned __int64 v6; // x21
  struct BattleData_o *v7; // x8
  __int64 v8; // x0

  data = this->fields.data;
  if ( !data )
    goto LABEL_16;
  data = (BattleData_o *)BattleData__getFieldEnemyServantIDList(data, 1, 0LL);
  if ( !data )
    goto LABEL_16;
  rootfsm = data->fields.rootfsm;
  v5 = data;
  if ( rootfsm && (int)rootfsm >= 1 )
  {
    v6 = 0LL;
    while ( 1 )
    {
      if ( v6 >= (unsigned int)rootfsm )
        goto LABEL_17;
      data = this->fields.data;
      if ( !data )
        goto LABEL_16;
      data = (BattleData_o *)BattleData__getEnemyServantData(data, *((_DWORD *)&v5->fields.fsm + v6), 0LL);
      if ( !data )
        goto LABEL_16;
      data = (BattleData_o *)BattleServantData__isDeadWaitNotAlive((BattleServantData_o *)data, 0LL);
      if ( ((unsigned __int8)data & 1) == 0 )
        break;
      LODWORD(rootfsm) = v5->fields.rootfsm;
      if ( (__int64)++v6 >= (int)rootfsm )
        return;
    }
    if ( (unsigned int)v6 >= LODWORD(v5->fields.rootfsm) )
    {
LABEL_17:
      v8 = sub_B2C460(data);
      sub_B2C400(v8, 0LL);
    }
    v7 = this->fields.data;
    if ( v7 )
    {
      v7->fields.globaltargetId = *((_DWORD *)&v5->fields.fsm + v6);
      return;
    }
LABEL_16:
    sub_B2C434(data, method);
  }
}


void __fastcall BattleLogicTarget___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_41871C9 & 1) == 0 )
  {
    sub_B2C35C(&BattleLogicTarget___c_TypeInfo, v1);
    byte_41871C9 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(BattleLogicTarget___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = (BattleServantConfConponent_o *)BattleLogicTarget___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v2;
  sub_B2C2F8(static_fields, (System_Int32_array **)v2, v4, v5, v6, v7, v8, v9);
}


void __fastcall BattleLogicTarget___c___ctor(BattleLogicTarget___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleLogicTarget___c___getTargetBattleServantData_b__20_0(
        BattleLogicTarget___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B2C434(this, 0LL);
  return x->fields.isEntry;
}


void __fastcall BattleLogicTarget___c__DisplayClass14_0___ctor(
        BattleLogicTarget___c__DisplayClass14_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BattleLogicTarget___c__DisplayClass14_0___getTargetActiveIndividualities_b__0(
        BattleLogicTarget___c__DisplayClass14_0_o *this,
        int32_t x,
        int32_t y,
        const MethodInfo *method)
{
  BattleLogicTarget___c__DisplayClass14_0_o *v6; // x20
  struct BattleLogicTarget_o *_4__this; // x8
  struct BattleLogicTarget_o *v8; // x8
  BattleServantData_o *v9; // x22
  BattleServantData_o *v10; // x23
  int32_t v11; // w22
  int32_t v12; // w23

  v6 = this;
  if ( (byte_41871CA & 1) == 0 )
  {
    this = (BattleLogicTarget___c__DisplayClass14_0_o *)sub_B2C35C(
                                                          &Method_System_Collections_Generic_Dictionary_int__int__set_Item__,
                                                          *(_QWORD *)&x);
    byte_41871CA = 1;
  }
  _4__this = v6->fields.__4__this;
  if ( !_4__this )
    goto LABEL_12;
  this = (BattleLogicTarget___c__DisplayClass14_0_o *)_4__this->fields.data;
  if ( !this )
    goto LABEL_12;
  this = (BattleLogicTarget___c__DisplayClass14_0_o *)BattleData__getServantData((BattleData_o *)this, x, 0LL);
  v8 = v6->fields.__4__this;
  if ( !v8 )
    goto LABEL_12;
  v9 = (BattleServantData_o *)this;
  this = (BattleLogicTarget___c__DisplayClass14_0_o *)v8->fields.data;
  if ( !this )
    goto LABEL_12;
  this = (BattleLogicTarget___c__DisplayClass14_0_o *)BattleData__getServantData((BattleData_o *)this, y, 0LL);
  if ( !v9
    || (v10 = (BattleServantData_o *)this,
        this = (BattleLogicTarget___c__DisplayClass14_0_o *)BattleServantData__getActiveIndividualitiesNum(
                                                              v9,
                                                              v6->fields.indv,
                                                              0LL),
        !v10)
    || (v11 = (int)this,
        this = (BattleLogicTarget___c__DisplayClass14_0_o *)BattleServantData__getActiveIndividualitiesNum(
                                                              v10,
                                                              v6->fields.indv,
                                                              0LL),
        !v6->fields.indNum)
    || (v12 = (int)this,
        System_Collections_Generic_Dictionary_int__int___set_Item(
          v6->fields.indNum,
          x,
          v11,
          (const MethodInfo_2E24518 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__),
        (this = (BattleLogicTarget___c__DisplayClass14_0_o *)v6->fields.indNum) == 0LL) )
  {
LABEL_12:
    sub_B2C434(this, *(_QWORD *)&x);
  }
  System_Collections_Generic_Dictionary_int__int___set_Item(
    (System_Collections_Generic_Dictionary_int__int__o *)this,
    y,
    v12,
    (const MethodInfo_2E24518 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
  return v12 - v11;
}


void __fastcall BattleLogicTarget___c__DisplayClass15_0___ctor(
        BattleLogicTarget___c__DisplayClass15_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BattleLogicTarget___c__DisplayClass15_0___getTargetActiveBuff_b__0(
        BattleLogicTarget___c__DisplayClass15_0_o *this,
        int32_t x,
        int32_t y,
        const MethodInfo *method)
{
  struct BattleLogicTarget_o *_4__this; // x8
  BattleLogicTarget___c__DisplayClass15_0_o *v5; // x19
  struct BattleLogicTarget_o *v7; // x8
  BattleServantData_o *v8; // x20

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_8;
  v5 = this;
  this = (BattleLogicTarget___c__DisplayClass15_0_o *)_4__this->fields.data;
  if ( !this
    || (this = (BattleLogicTarget___c__DisplayClass15_0_o *)BattleData__getServantData((BattleData_o *)this, x, 0LL),
        (v7 = v5->fields.__4__this) == 0LL)
    || (v8 = (BattleServantData_o *)this, (this = (BattleLogicTarget___c__DisplayClass15_0_o *)v7->fields.data) == 0LL)
    || (this = (BattleLogicTarget___c__DisplayClass15_0_o *)BattleData__getServantData((BattleData_o *)this, y, 0LL)) == 0LL
    || (this = (BattleLogicTarget___c__DisplayClass15_0_o *)BattleServantData__getActiveBuffNum(
                                                              (BattleServantData_o *)this,
                                                              v5->fields.ids,
                                                              0LL),
        !v8) )
  {
LABEL_8:
    sub_B2C434(this, *(_QWORD *)&x);
  }
  return (_DWORD)this - BattleServantData__getActiveBuffNum(v8, v5->fields.ids, 0LL);
}


void __fastcall BattleLogicTarget___c__DisplayClass17_0___ctor(
        BattleLogicTarget___c__DisplayClass17_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleLogicTarget___c__DisplayClass17_0___getTargetAiAct_b__1(
        BattleLogicTarget___c__DisplayClass17_0_o *this,
        System_Int32_array *self,
        const MethodInfo *method)
{
  return Individuality__CheckSignedIndividualities(self, this->fields.individuality, 0LL);
}


void __fastcall BattleLogicTarget___c__DisplayClass17_1___ctor(
        BattleLogicTarget___c__DisplayClass17_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleLogicTarget___c__DisplayClass17_1___getTargetAiAct_b__0(
        BattleLogicTarget___c__DisplayClass17_1_o *this,
        System_Int32_array *self,
        const MethodInfo *method)
{
  return Individuality__CheckSignedMultiIndividuality(self, this->fields.multiIndividuality, 0LL);
}