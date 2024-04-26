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
  if ( (byte_4355004 & 1) == 0 )
  {
    this = (BattleLogicTarget_o *)sub_B70694(&Method_BasicHelper_ContainsSelfNotNull_int___);
    byte_4355004 = 1;
  }
  if ( !svtData )
    sub_B7076C(this, svtData);
  return !BasicHelper__ContainsSelfNotNull_int_(
            (System_Collections_Generic_HashSet_T__o *)v6->fields.tempDeadSvtHash,
            svtData->fields.uniqueId,
            (const MethodInfo_1BDCCA4 *)Method_BasicHelper_ContainsSelfNotNull_int___)
      && BattleServantData__isAlive(svtData, isResurrectable, 0LL);
}


bool __fastcall BattleLogicTarget__IsTargetGuts(
        BattleLogicTarget_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  BattleLogicTarget_o *v4; // x20

  v4 = this;
  if ( (byte_4355005 & 1) == 0 )
  {
    this = (BattleLogicTarget_o *)sub_B70694(&Method_BasicHelper_ContainsSelfNotNull_int___);
    byte_4355005 = 1;
  }
  if ( !svtData )
    sub_B7076C(this, svtData);
  return !svtData->fields.isDeadAnime
      && BasicHelper__ContainsSelfNotNull_int_(
           (System_Collections_Generic_HashSet_T__o *)v4->fields.tempDeadSvtHash,
           svtData->fields.uniqueId,
           (const MethodInfo_1BDCCA4 *)Method_BasicHelper_ContainsSelfNotNull_int___)
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
    sub_B7076C(data, *(_QWORD *)&a);
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
    sub_B7076C(data, *(_QWORD *)&x);
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
    sub_B7076C(data, *(_QWORD *)&x);
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
    sub_B7076C(data, *(_QWORD *)&x);
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
    sub_B7076C(data, *(_QWORD *)&x);
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
  System_Collections_Generic_List_int__o *v7; // x21
  BattleData_o *data; // x0
  __int64 v9; // x1
  __int64 v10; // x8
  unsigned __int64 v11; // x24
  bool v12; // w22
  const MethodInfo *v13; // x3
  BattleServantData_o *v14; // x23
  const MethodInfo *v15; // x2
  struct BattleData_o *v16; // x8
  __int64 v18; // x0

  if ( (byte_4355006 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_int__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B70694(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B70694(&System_Collections_Generic_List_int__TypeInfo);
    byte_4355006 = 1;
  }
  v7 = (System_Collections_Generic_List_int__o *)sub_B70764(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v7,
    (const MethodInfo_30B547C *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !targetlist )
    goto LABEL_18;
  v10 = *(_QWORD *)&targetlist->max_length;
  if ( (int)v10 >= 1 )
  {
    v11 = 0LL;
    v12 = isResurrectable;
    while ( 1 )
    {
      if ( v11 >= (unsigned int)v10 )
      {
        v18 = sub_B70798(data);
        sub_B70738(v18, 0LL);
      }
      data = this->fields.data;
      if ( !data )
        break;
      data = (BattleData_o *)BattleData__getServantData(data, targetlist->m_Items[v11 + 1], 0LL);
      if ( data )
      {
        v14 = (BattleServantData_o *)data;
        data = (BattleData_o *)BattleLogicTarget__IsTargetAlive(this, (BattleServantData_o *)data, v12, v13);
        if ( ((unsigned __int8)data & 1) != 0 )
          goto LABEL_10;
        data = (BattleData_o *)BattleLogicTarget__IsTargetGuts(this, v14, v15);
        if ( ((unsigned __int8)data & 1) != 0 )
        {
          v16 = this->fields.data;
          if ( !v16 )
            break;
          data = (BattleData_o *)BattleServantData__checkDeadTurn(v14, v16->fields.typeTurn, 0LL);
          if ( ((unsigned __int8)data & 1) == 0 )
          {
LABEL_10:
            if ( !v7 )
              break;
            System_Collections_Generic_List_int___Add(
              v7,
              v14->fields.uniqueId,
              (const MethodInfo_30B61D8 *)Method_System_Collections_Generic_List_int__Add__);
          }
        }
      }
      LODWORD(v10) = targetlist->max_length;
      if ( (__int64)++v11 >= (int)v10 )
        goto LABEL_16;
    }
LABEL_18:
    sub_B7076C(data, v9);
  }
LABEL_16:
  if ( !v7 )
    goto LABEL_18;
  return System_Collections_Generic_List_int___ToArray(
           v7,
           (const MethodInfo_30B82E4 *)Method_System_Collections_Generic_List_int__ToArray__);
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
    sub_B7076C(data, *(_QWORD *)&uniqueId);
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
    sub_B7076C(data, *(_QWORD *)&actId);
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
  __int64 v9; // x23
  __int64 v10; // x0
  __int64 v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Comparison_int__o *v24; // x22
  const MethodInfo *v25; // x4

  if ( (byte_435500D & 1) == 0 )
  {
    sub_B70694(&Method_System_Array_Sort_int____69231064);
    sub_B70694(&Method_System_Comparison_int___ctor__);
    sub_B70694(&System_Comparison_int__TypeInfo);
    sub_B70694(&Method_BattleLogicTarget___c__DisplayClass15_0__getTargetActiveBuff_b__0__);
    sub_B70694(&BattleLogicTarget___c__DisplayClass15_0_TypeInfo);
    byte_435500D = 1;
  }
  v9 = sub_B70764(BattleLogicTarget___c__DisplayClass15_0_TypeInfo);
  BattleLogicTarget___c__DisplayClass15_0___ctor((BattleLogicTarget___c__DisplayClass15_0_o *)v9, 0LL);
  if ( !v9 )
    sub_B7076C(v10, v11);
  *(_QWORD *)(v9 + 16) = this;
  sub_B70630((BattleServantConfConponent_o *)(v9 + 16), (System_Int32_array **)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 24) = ids;
  sub_B70630((BattleServantConfConponent_o *)(v9 + 24), (System_Int32_array **)ids, v18, v19, v20, v21, v22, v23);
  v24 = (System_Comparison_int__o *)sub_B70764(System_Comparison_int__TypeInfo);
  System_Comparison_int____ctor(
    v24,
    (Il2CppObject *)v9,
    Method_BattleLogicTarget___c__DisplayClass15_0__getTargetActiveBuff_b__0__,
    (const MethodInfo_2B04204 *)Method_System_Comparison_int___ctor__);
  System_Array__Sort_int__29152136(
    targetlist,
    (System_Comparison_T__o *)v24,
    (const MethodInfo_1BCD388 *)Method_System_Array_Sort_int____69231064);
  return BattleLogicTarget__getTargetBase(this, targetlist, 0, isDeadToEnableUpHate, v25);
}


int32_t __fastcall BattleLogicTarget__getTargetActiveIndividualities(
        BattleLogicTarget_o *this,
        System_Int32_array *indv,
        System_Int32_array *targetlist,
        AiActEntity_o *aiActEnt,
        bool isDeadToEnableUpHate,
        const MethodInfo *method)
{
  __int64 v11; // x24
  System_Collections_Generic_Dictionary_int__int__o *Count; // x0
  __int64 v13; // x1
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  const MethodInfo *v26; // x3
  System_Collections_Generic_Dictionary_int__int__o *v27; // x23
  System_Collections_Generic_Dictionary_int__int__o **v28; // x22
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_Comparison_int__o *v35; // x23
  const MethodInfo *v36; // x4
  int32_t Item; // w23
  System_Collections_Generic_List_int__o *v38; // x21
  __int64 v39; // x1
  int32_t currentKey; // w24
  __int64 v41; // x0
  __int64 v42; // x1
  System_Int32_array *v43; // x0
  const MethodInfo *v44; // x4
  __int64 v46; // x0
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o v47; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o v48; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_435500C & 1) == 0 )
  {
    sub_B70694(&Method_System_Array_Sort_int____69231064);
    sub_B70694(&Method_System_Comparison_int___ctor__);
    sub_B70694(&System_Comparison_int__TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__int__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__int__get_Keys__);
    sub_B70694(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__int__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__int__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__int__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_KeyCollection_int__int__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_int__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B70694(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B70694(&System_Collections_Generic_List_int__TypeInfo);
    sub_B70694(&Method_BattleLogicTarget___c__DisplayClass14_0__getTargetActiveIndividualities_b__0__);
    sub_B70694(&BattleLogicTarget___c__DisplayClass14_0_TypeInfo);
    byte_435500C = 1;
  }
  memset(&v48, 0, sizeof(v48));
  v11 = sub_B70764(BattleLogicTarget___c__DisplayClass14_0_TypeInfo);
  BattleLogicTarget___c__DisplayClass14_0___ctor((BattleLogicTarget___c__DisplayClass14_0_o *)v11, 0LL);
  if ( !v11 )
    goto LABEL_26;
  *(_QWORD *)(v11 + 16) = this;
  sub_B70630((BattleServantConfConponent_o *)(v11 + 16), (System_Int32_array **)this, v14, v15, v16, v17, v18, v19);
  *(_QWORD *)(v11 + 24) = indv;
  sub_B70630((BattleServantConfConponent_o *)(v11 + 24), (System_Int32_array **)indv, v20, v21, v22, v23, v24, v25);
  if ( aiActEnt && !AiActEntity__IsIncludeDeathSvt(aiActEnt, 0LL) )
    targetlist = BattleLogicTarget__deathSvtExclusion(this, targetlist, 0, v26);
  v27 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B70764(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v27,
    (const MethodInfo_2FBA5BC *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  *(_QWORD *)(v11 + 32) = v27;
  v28 = (System_Collections_Generic_Dictionary_int__int__o **)(v11 + 32);
  sub_B70630((BattleServantConfConponent_o *)(v11 + 32), (System_Int32_array **)v27, v29, v30, v31, v32, v33, v34);
  v35 = (System_Comparison_int__o *)sub_B70764(System_Comparison_int__TypeInfo);
  System_Comparison_int____ctor(
    v35,
    (Il2CppObject *)v11,
    Method_BattleLogicTarget___c__DisplayClass14_0__getTargetActiveIndividualities_b__0__,
    (const MethodInfo_2B04204 *)Method_System_Comparison_int___ctor__);
  System_Array__Sort_int__29152136(
    targetlist,
    (System_Comparison_T__o *)v35,
    (const MethodInfo_1BCD388 *)Method_System_Array_Sort_int____69231064);
  Count = *(System_Collections_Generic_Dictionary_int__int__o **)(v11 + 32);
  if ( !Count )
    goto LABEL_26;
  Count = (System_Collections_Generic_Dictionary_int__int__o *)System_Collections_Generic_Dictionary_int__int___get_Count(
                                                                 Count,
                                                                 (const MethodInfo_2FBAD60 *)Method_System_Collections_Generic_Dictionary_int__int__get_Count__);
  if ( (int)Count >= 1 )
  {
    if ( targetlist )
    {
      if ( !targetlist->max_length )
      {
        v46 = sub_B70798(Count);
        sub_B70738(v46, 0LL);
      }
      Count = *v28;
      if ( *v28 )
      {
        Item = System_Collections_Generic_Dictionary_int__int___get_Item(
                 Count,
                 targetlist->m_Items[1],
                 (const MethodInfo_2FBB0A0 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
        v38 = (System_Collections_Generic_List_int__o *)sub_B70764(System_Collections_Generic_List_int__TypeInfo);
        System_Collections_Generic_List_int____ctor(
          v38,
          (const MethodInfo_30B547C *)Method_System_Collections_Generic_List_int___ctor__);
        Count = *v28;
        if ( *v28 )
        {
          Count = (System_Collections_Generic_Dictionary_int__int__o *)System_Collections_Generic_Dictionary_int__int___get_Keys(
                                                                         Count,
                                                                         (const MethodInfo_2FBAD70 *)Method_System_Collections_Generic_Dictionary_int__int__get_Keys__);
          if ( Count )
          {
            System_Collections_Generic_Dictionary_KeyCollection_int__int___GetEnumerator(
              &v47,
              (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)Count,
              (const MethodInfo_2298B1C *)Method_System_Collections_Generic_Dictionary_KeyCollection_int__int__GetEnumerator__);
            v48 = v47;
            while ( System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__int___MoveNext(
                      &v48,
                      (const MethodInfo_2830E54 *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__int__MoveNext__) )
            {
              if ( !*v28 )
                sub_B7076C(0LL, v39);
              currentKey = (int32_t)v48.fields.currentKey;
              v41 = System_Collections_Generic_Dictionary_int__int___get_Item(
                      *v28,
                      (int32_t)v48.fields.currentKey,
                      (const MethodInfo_2FBB0A0 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
              if ( Item == (_DWORD)v41 )
              {
                if ( !v38 )
                  sub_B7076C(v41, v42);
                System_Collections_Generic_List_int___Add(
                  v38,
                  currentKey,
                  (const MethodInfo_30B61D8 *)Method_System_Collections_Generic_List_int__Add__);
              }
            }
            System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__int___Dispose(
              &v48,
              (const MethodInfo_2830E50 *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__int__Dispose__);
            if ( v38 )
            {
              v43 = System_Collections_Generic_List_int___ToArray(
                      v38,
                      (const MethodInfo_30B82E4 *)Method_System_Collections_Generic_List_int__ToArray__);
              return BattleLogicTarget__getTargetRandom(this, v43, 0, isDeadToEnableUpHate, v44);
            }
          }
        }
      }
    }
LABEL_26:
    sub_B7076C(Count, v13);
  }
  return BattleLogicTarget__getTargetBase(this, targetlist, 0, isDeadToEnableUpHate, v36);
}


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
  __int64 v16; // x28
  BattleData_o *NoTargetNoActionType; // x0
  __int64 v18; // x1
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_Collections_ICollection_o **v25; // x25
  BattleData_o *v26; // x27
  bool v27; // w26
  BattleServantData_o *ServantData; // x0
  const MethodInfo *v29; // x6
  struct PlayMakerFSM_o *rootfsm; // x8
  System_Int32_array *v31; // x0
  const MethodInfo *v32; // x3
  const MethodInfo *v33; // x4
  System_Int32_array *Shuffle_int; // x5
  int32_t result; // w0
  BattleLogicTarget___c__DisplayClass17_1_o *v36; // x21
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v37; // x0
  __int64 *v38; // x8
  System_Func_int____bool__o *v39; // x20
  Il2CppObject *v40; // x1
  const MethodInfo *v41; // x5
  bool v42; // w3
  int32_t v43; // w1
  BattleLogicTarget_o *v44; // x0

  if ( (byte_435500E & 1) == 0 )
  {
    sub_B70694(&Method_BattleRandom_getShuffle_int___);
    sub_B70694(&Method_System_Func_int____bool___ctor__);
    sub_B70694(&System_Func_int____bool__TypeInfo);
    sub_B70694(&int___TypeInfo);
    sub_B70694(&Method_BattleLogicTarget___c__DisplayClass17_0__getTargetAiAct_b__1__);
    sub_B70694(&BattleLogicTarget___c__DisplayClass17_0_TypeInfo);
    sub_B70694(&Method_BattleLogicTarget___c__DisplayClass17_1__getTargetAiAct_b__0__);
    sub_B70694(&BattleLogicTarget___c__DisplayClass17_1_TypeInfo);
    byte_435500E = 1;
  }
  v16 = sub_B70764(BattleLogicTarget___c__DisplayClass17_0_TypeInfo);
  BattleLogicTarget___c__DisplayClass17_0___ctor((BattleLogicTarget___c__DisplayClass17_0_o *)v16, 0LL);
  if ( !v16 )
    goto LABEL_41;
  *(_QWORD *)(v16 + 16) = individuality;
  v25 = (System_Collections_ICollection_o **)(v16 + 16);
  sub_B70630(
    (BattleServantConfConponent_o *)(v16 + 16),
    (System_Int32_array **)individuality,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  NoTargetNoActionType = (BattleData_o *)sub_B706AC(int___TypeInfo, 0LL);
  v26 = NoTargetNoActionType;
  if ( aiActEnt )
  {
    NoTargetNoActionType = (BattleData_o *)AiActEntity__GetNoTargetNoActionType(aiActEnt, 0LL);
    v27 = (_DWORD)NoTargetNoActionType != 0;
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
                                             v29);
    v26 = NoTargetNoActionType;
    goto LABEL_10;
  }
  v27 = 0;
  if ( isCheckHate )
    goto LABEL_8;
LABEL_10:
  if ( !v26 )
    goto LABEL_41;
  rootfsm = v26->fields.rootfsm;
  if ( rootfsm )
    goto LABEL_12;
  v36 = (BattleLogicTarget___c__DisplayClass17_1_o *)sub_B70764(BattleLogicTarget___c__DisplayClass17_1_TypeInfo);
  BattleLogicTarget___c__DisplayClass17_1___ctor(v36, 0LL);
  if ( !aiActEnt )
    goto LABEL_21;
  if ( !v36 )
    goto LABEL_41;
  if ( AiActEntity__TryGetMultiIndividuality(aiActEnt, &v36->fields.multiIndividuality, 0LL) )
  {
    v37 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B70764(System_Func_int____bool__TypeInfo);
    v38 = &Method_BattleLogicTarget___c__DisplayClass17_1__getTargetAiAct_b__0__;
    v39 = (System_Func_int____bool__o *)v37;
    v40 = (Il2CppObject *)v36;
  }
  else
  {
LABEL_21:
    if ( BasicHelper__IsNullOrEmpty(*v25, 0LL) )
    {
      v39 = 0LL;
      goto LABEL_27;
    }
    v37 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B70764(System_Func_int____bool__TypeInfo);
    v38 = &Method_BattleLogicTarget___c__DisplayClass17_0__getTargetAiAct_b__1__;
    v39 = (System_Func_int____bool__o *)v37;
    v40 = (Il2CppObject *)v16;
  }
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v37,
    v40,
    *v38,
    (const MethodInfo_29AC578 *)Method_System_Func_int____bool___ctor__);
  if ( !v39 )
    goto LABEL_27;
  NoTargetNoActionType = (BattleData_o *)BattleLogicTarget__narrowDownIndividuality(
                                           this,
                                           targetlist,
                                           v39,
                                           isResurrectable,
                                           target != 13,
                                           v41);
  if ( !NoTargetNoActionType )
LABEL_41:
    sub_B7076C(NoTargetNoActionType, v18);
  v26 = NoTargetNoActionType;
LABEL_27:
  rootfsm = v26->fields.rootfsm;
  if ( v27 && v39 != 0LL && rootfsm == 0LL )
    return -1;
LABEL_12:
  if ( rootfsm )
    v31 = (System_Int32_array *)v26;
  else
    v31 = targetlist;
  Shuffle_int = BattleRandom__getShuffle_int_(v31, (const MethodInfo_1BE0C38 *)Method_BattleRandom_getShuffle_int___);
  switch ( target )
  {
    case 2:
      return BattleLogicTarget__getTargetHighHp(this, Shuffle_int, isDeadToEnableUpHate, v32);
    case 3:
      return BattleLogicTarget__getTargetLowHp(this, Shuffle_int, isDeadToEnableUpHate, v32);
    case 10:
      return BattleLogicTarget__getTargetNpTurnLower(this, Shuffle_int, isDeadToEnableUpHate, v32);
    case 11:
      return BattleLogicTarget__getTargetNpGaugeHeighter(this, Shuffle_int, isDeadToEnableUpHate, v32);
    case 12:
      return BattleLogicTarget__getRevenge(this, actId, Shuffle_int, isDeadToEnableUpHate, v33);
    case 13:
      return BattleLogicTarget__getTargetActiveIndividualities(
               this,
               (System_Int32_array *)*v25,
               Shuffle_int,
               aiActEnt,
               isDeadToEnableUpHate,
               (const MethodInfo *)Shuffle_int);
    case 14:
      return BattleLogicTarget__getTargetActiveBuff(
               this,
               (System_Int32_array *)*v25,
               Shuffle_int,
               isDeadToEnableUpHate,
               v33);
    case 15:
      v42 = isDeadToEnableUpHate;
      v44 = this;
      v43 = 0;
      goto LABEL_40;
    case 16:
      v42 = isDeadToEnableUpHate;
      v43 = 1;
      goto LABEL_39;
    case 17:
      v42 = isDeadToEnableUpHate;
      v43 = 2;
LABEL_39:
      v44 = this;
LABEL_40:
      result = BattleLogicTarget__getTargetPosition(v44, v43, Shuffle_int, v42, v27, (const MethodInfo *)Shuffle_int);
      break;
    default:
      result = BattleLogicTarget__getTargetBase(this, Shuffle_int, isResurrectable, isDeadToEnableUpHate, v33);
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
    sub_B7076C(this, targetlist);
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
      v16 = sub_B70798(this);
      sub_B70738(v16, 0LL);
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
  BattleData_o *data; // x0
  const MethodInfo *v6; // x2
  struct BattleData_o *v7; // x21
  int32_t v8; // w1
  BattleData_o *v9; // x0
  System_Int32_array *v10; // x3
  int32_t v11; // w22
  struct BattleData_o *v12; // x8
  Il2CppObject *ServantData; // x21
  BattleLogicTarget___c_c *v14; // x8
  struct BattleLogicTarget___c_StaticFields *static_fields; // x9
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__20_0; // x22
  Il2CppObject *v17; // x23
  struct BattleLogicTarget___c_StaticFields *v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  Il2CppObject *v25; // x0
  BattleServantData_o *v26; // x21
  const MethodInfo *v27; // x2
  struct BattleData_o *v28; // x8
  int32_t ActorId; // w0
  const MethodInfo *v31; // x2
  struct BattleData_o *v32; // x8
  struct BattleData_o *v33; // x8
  System_Int32_array *v34; // x21
  const MethodInfo *v35; // x4
  System_Comparison_int__o *v36; // x22
  struct BattleData_o *v37; // x22
  const MethodInfo *v38; // x2
  const MethodInfo *v39; // x2
  struct BattleData_o *v40; // x21
  int32_t v41; // w22
  System_Int32_array *v42; // x3
  struct BattleData_o *v43; // x8
  struct BattleData_o *v44; // x8

  if ( (byte_4355011 & 1) == 0 )
  {
    sub_B70694(&Method_System_Array_Sort_int____69231064);
    sub_B70694(&Method_BasicHelper_TakeIf_BattleServantData___);
    sub_B70694(&Method_BattleLogicTarget__getTargetBattleServantData_b__20_1__);
    sub_B70694(&Method_System_Comparison_int___ctor__);
    sub_B70694(&System_Comparison_int__TypeInfo);
    sub_B70694(&Method_System_Predicate_BattleServantData___ctor__);
    sub_B70694(&System_Predicate_BattleServantData__TypeInfo);
    sub_B70694(&Method_BattleLogicTarget___c__getTargetBattleServantData_b__20_0__);
    sub_B70694(&BattleLogicTarget___c_TypeInfo);
    byte_4355011 = 1;
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
    BattleLogicTarget__updateEnemyTarget(this, 0LL, v6);
    goto LABEL_24;
  }
  if ( !task )
    goto LABEL_70;
  if ( task->fields.actiontype == 4 )
  {
    data = (BattleData_o *)BattleLogicTask__IsTargetTypeEnemy(task, (const MethodInfo *)task);
    if ( ((unsigned __int8)data & 1) == 0 )
      goto LABEL_21;
    v7 = this->fields.data;
    data = (BattleData_o *)BattleLogicTask__getActorId(task, (const MethodInfo *)task);
    if ( !v7 )
      goto LABEL_70;
    v8 = (int)data;
    v9 = v7;
    v10 = 0LL;
  }
  else
  {
    v7 = this->fields.data;
    data = (BattleData_o *)BattleLogicTask__getActorId(task, (const MethodInfo *)task);
    v11 = (int)data;
    if ( task->fields.skillInfo )
    {
      data = (BattleData_o *)BattleSkillInfoData__GetAddIndiv(task->fields.skillInfo, 0LL);
      v10 = (System_Int32_array *)data;
      if ( !v7 )
        goto LABEL_70;
    }
    else
    {
      v10 = 0LL;
      if ( !v7 )
        goto LABEL_70;
    }
    v9 = v7;
    v8 = v11;
  }
  data = (BattleData_o *)BattleData__getTargetLock(v9, v8, 0, v10, 0LL);
  v7->fields.globaltargetId = (int)data;
LABEL_21:
  v12 = this->fields.data;
  if ( !v12 )
    goto LABEL_70;
  data = (BattleData_o *)v12->fields.perf;
  if ( !data )
    goto LABEL_70;
  BattlePerformance__reViewTargetMarks((BattlePerformance_o *)data, 0LL);
LABEL_24:
  data = this->fields.data;
  if ( !data )
    goto LABEL_70;
  ServantData = (Il2CppObject *)BattleData__getServantData(data, data->fields.globaltargetId, 0LL);
  v14 = BattleLogicTarget___c_TypeInfo;
  if ( (BYTE3(BattleLogicTarget___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleLogicTarget___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicTarget___c_TypeInfo);
    v14 = BattleLogicTarget___c_TypeInfo;
  }
  static_fields = v14->static_fields;
  _9__20_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__20_0;
  if ( !_9__20_0 )
  {
    if ( (BYTE3(v14->vtable._0_Equals.methodPtr) & 4) != 0 && !v14->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v14);
      static_fields = BattleLogicTarget___c_TypeInfo->static_fields;
    }
    v17 = (Il2CppObject *)static_fields->__9;
    _9__20_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B70764(System_Predicate_BattleServantData__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__20_0,
      v17,
      Method_BattleLogicTarget___c__getTargetBattleServantData_b__20_0__,
      (const MethodInfo_2BF23B8 *)Method_System_Predicate_BattleServantData___ctor__);
    v18 = BattleLogicTarget___c_TypeInfo->static_fields;
    v18->__9__20_0 = (struct System_Predicate_BattleServantData__o *)_9__20_0;
    sub_B70630(
      (BattleServantConfConponent_o *)&v18->__9__20_0,
      (System_Int32_array **)_9__20_0,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24);
  }
  v25 = BasicHelper__TakeIf_object_(
          ServantData,
          (System_Predicate_T__o *)_9__20_0,
          (const MethodInfo_1BDF91C *)Method_BasicHelper_TakeIf_BattleServantData___);
  if ( v25 )
  {
    v26 = (BattleServantData_o *)v25;
    data = (BattleData_o *)BattleServantData__isAlive((BattleServantData_o *)v25, 0, 0LL);
    if ( ((unsigned __int8)data & 1) != 0 )
    {
      v28 = this->fields.data;
      if ( v28 && task )
        goto LABEL_37;
      goto LABEL_70;
    }
    data = (BattleData_o *)BattleServantData__isAlive(v26, 0, 0LL);
    if ( ((unsigned __int8)data & 1) == 0 )
    {
      if ( !task )
        goto LABEL_70;
      ActorId = BattleLogicTask__getActorId(task, (const MethodInfo *)task);
      data = (BattleData_o *)BattleServantData__checkOverKill(v26, ActorId, 0LL);
      if ( ((unsigned __int8)data & 1) != 0 )
      {
        v28 = this->fields.data;
        if ( v28 )
        {
LABEL_37:
          BattleLogicTask__setTarget(task, v28->fields.globaltargetId, v27);
          return v26;
        }
        goto LABEL_70;
      }
    }
    if ( !BattleServantData__isAlive(v26, 0, 0LL) )
    {
      data = (BattleData_o *)BattleServantData__isGuts(v26, 0LL);
      if ( ((unsigned __int8)data & 1) != 0 )
      {
        v32 = this->fields.data;
        if ( v32 && task )
        {
          BattleLogicTask__setTarget(task, v32->fields.globaltargetId, v31);
          v26->fields.overkillTargetId = -1;
          return v26;
        }
        goto LABEL_70;
      }
    }
    v26->fields.overkillTargetId = -1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_70;
  data = (BattleData_o *)BattleData__getFieldEnemyServantIDList(data, 1, 0LL);
  v33 = this->fields.data;
  if ( !v33 )
    goto LABEL_70;
  v34 = (System_Int32_array *)data;
  data = (BattleData_o *)v33->fields.quest_ent;
  if ( !data )
    goto LABEL_70;
  if ( QuestEntity__HasFlag((QuestEntity_o *)data, 0x40000000000000LL, 0LL) )
  {
    v36 = (System_Comparison_int__o *)sub_B70764(System_Comparison_int__TypeInfo);
    System_Comparison_int____ctor(
      v36,
      (Il2CppObject *)this,
      Method_BattleLogicTarget__getTargetBattleServantData_b__20_1__,
      (const MethodInfo_2B04204 *)Method_System_Comparison_int___ctor__);
    System_Array__Sort_int__29152136(
      v34,
      (System_Comparison_T__o *)v36,
      (const MethodInfo_1BCD388 *)Method_System_Array_Sort_int____69231064);
  }
  v37 = this->fields.data;
  data = (BattleData_o *)BattleLogicTarget__getTargetBase(this, v34, 0, 1, v35);
  if ( !v37 )
    goto LABEL_70;
  v37->fields.globaltargetId = (int)data;
  BattleLogicTarget__updateEnemyTarget(this, v34, v38);
  data = this->fields.data;
  if ( !data )
    goto LABEL_70;
  data = (BattleData_o *)BattleData__isTargetLock(data, 0LL);
  if ( ((unsigned __int8)data & 1) != 0 )
  {
    if ( !task )
      goto LABEL_70;
    v40 = this->fields.data;
    data = (BattleData_o *)BattleLogicTask__getActorId(task, (const MethodInfo *)task);
    v41 = (int)data;
    if ( task->fields.skillInfo )
    {
      data = (BattleData_o *)BattleSkillInfoData__GetAddIndiv(task->fields.skillInfo, 0LL);
      v42 = (System_Int32_array *)data;
      if ( !v40 )
        goto LABEL_70;
    }
    else
    {
      v42 = 0LL;
      if ( !v40 )
        goto LABEL_70;
    }
    data = (BattleData_o *)BattleData__getTargetLock(v40, v41, 0, v42, 0LL);
    v40->fields.globaltargetId = (int)data;
    v43 = this->fields.data;
    if ( v43 )
    {
      data = (BattleData_o *)v43->fields.perf;
      if ( data )
      {
        BattlePerformance__reViewTargetMarks((BattlePerformance_o *)data, 0LL);
        goto LABEL_66;
      }
    }
LABEL_70:
    sub_B7076C(data, task);
  }
LABEL_66:
  v44 = this->fields.data;
  if ( !v44 )
    goto LABEL_70;
  if ( !task )
    goto LABEL_70;
  BattleLogicTask__setTarget(task, v44->fields.globaltargetId, v39);
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
  System_Comparison_int__o *v7; // x22
  const MethodInfo *v8; // x4

  if ( (byte_4355008 & 1) == 0 )
  {
    sub_B70694(&Method_System_Array_Sort_int____69231064);
    sub_B70694(&Method_BattleLogicTarget__getTargetHighHp_b__9_0__);
    sub_B70694(&Method_System_Comparison_int___ctor__);
    sub_B70694(&System_Comparison_int__TypeInfo);
    byte_4355008 = 1;
  }
  v7 = (System_Comparison_int__o *)sub_B70764(System_Comparison_int__TypeInfo);
  System_Comparison_int____ctor(
    v7,
    (Il2CppObject *)this,
    Method_BattleLogicTarget__getTargetHighHp_b__9_0__,
    (const MethodInfo_2B04204 *)Method_System_Comparison_int___ctor__);
  System_Array__Sort_int__29152136(
    targetlist,
    (System_Comparison_T__o *)v7,
    (const MethodInfo_1BCD388 *)Method_System_Array_Sort_int____69231064);
  return BattleLogicTarget__getTargetBase(this, targetlist, 0, isDeadToEnableUpHate, v8);
}


int32_t __fastcall BattleLogicTarget__getTargetLowHp(
        BattleLogicTarget_o *this,
        System_Int32_array *targetlist,
        bool isDeadToEnableUpHate,
        const MethodInfo *method)
{
  System_Comparison_int__o *v7; // x22
  const MethodInfo *v8; // x4

  if ( (byte_4355009 & 1) == 0 )
  {
    sub_B70694(&Method_System_Array_Sort_int____69231064);
    sub_B70694(&Method_BattleLogicTarget__getTargetLowHp_b__10_0__);
    sub_B70694(&Method_System_Comparison_int___ctor__);
    sub_B70694(&System_Comparison_int__TypeInfo);
    byte_4355009 = 1;
  }
  v7 = (System_Comparison_int__o *)sub_B70764(System_Comparison_int__TypeInfo);
  System_Comparison_int____ctor(
    v7,
    (Il2CppObject *)this,
    Method_BattleLogicTarget__getTargetLowHp_b__10_0__,
    (const MethodInfo_2B04204 *)Method_System_Comparison_int___ctor__);
  System_Array__Sort_int__29152136(
    targetlist,
    (System_Comparison_T__o *)v7,
    (const MethodInfo_1BCD388 *)Method_System_Array_Sort_int____69231064);
  return BattleLogicTarget__getTargetBase(this, targetlist, 0, isDeadToEnableUpHate, v8);
}


int32_t __fastcall BattleLogicTarget__getTargetNpGaugeHeighter(
        BattleLogicTarget_o *this,
        System_Int32_array *targetlist,
        bool isDeadToEnableUpHate,
        const MethodInfo *method)
{
  System_Comparison_int__o *v7; // x22
  const MethodInfo *v8; // x4

  if ( (byte_435500B & 1) == 0 )
  {
    sub_B70694(&Method_System_Array_Sort_int____69231064);
    sub_B70694(&Method_BattleLogicTarget__getTargetNpGaugeHeighter_b__12_0__);
    sub_B70694(&Method_System_Comparison_int___ctor__);
    sub_B70694(&System_Comparison_int__TypeInfo);
    byte_435500B = 1;
  }
  v7 = (System_Comparison_int__o *)sub_B70764(System_Comparison_int__TypeInfo);
  System_Comparison_int____ctor(
    v7,
    (Il2CppObject *)this,
    Method_BattleLogicTarget__getTargetNpGaugeHeighter_b__12_0__,
    (const MethodInfo_2B04204 *)Method_System_Comparison_int___ctor__);
  System_Array__Sort_int__29152136(
    targetlist,
    (System_Comparison_T__o *)v7,
    (const MethodInfo_1BCD388 *)Method_System_Array_Sort_int____69231064);
  return BattleLogicTarget__getTargetBase(this, targetlist, 0, isDeadToEnableUpHate, v8);
}


int32_t __fastcall BattleLogicTarget__getTargetNpTurnLower(
        BattleLogicTarget_o *this,
        System_Int32_array *targetlist,
        bool isDeadToEnableUpHate,
        const MethodInfo *method)
{
  System_Comparison_int__o *v7; // x22
  const MethodInfo *v8; // x4

  if ( (byte_435500A & 1) == 0 )
  {
    sub_B70694(&Method_System_Array_Sort_int____69231064);
    sub_B70694(&Method_BattleLogicTarget__getTargetNpTurnLower_b__11_0__);
    sub_B70694(&Method_System_Comparison_int___ctor__);
    sub_B70694(&System_Comparison_int__TypeInfo);
    byte_435500A = 1;
  }
  v7 = (System_Comparison_int__o *)sub_B70764(System_Comparison_int__TypeInfo);
  System_Comparison_int____ctor(
    v7,
    (Il2CppObject *)this,
    Method_BattleLogicTarget__getTargetNpTurnLower_b__11_0__,
    (const MethodInfo_2B04204 *)Method_System_Comparison_int___ctor__);
  System_Array__Sort_int__29152136(
    targetlist,
    (System_Comparison_T__o *)v7,
    (const MethodInfo_1BCD388 *)Method_System_Array_Sort_int____69231064);
  return BattleLogicTarget__getTargetBase(this, targetlist, 0, isDeadToEnableUpHate, v8);
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
    sub_B7076C(this, *(_QWORD *)&position);
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
      v16 = sub_B70798(this);
      sub_B70738(v16, 0LL);
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

  if ( (byte_4355007 & 1) == 0 )
  {
    sub_B70694(&Method_BattleRandom_getShuffle_int___);
    byte_4355007 = 1;
  }
  Shuffle_int = BattleRandom__getShuffle_int_(
                  targetlist,
                  (const MethodInfo_1BE0C38 *)Method_BattleRandom_getShuffle_int___);
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
  System_Collections_Generic_List_int__o *v13; // x22
  BattleBuffData_CheckIndividualitiesData_o *v14; // x26
  System_Int32_array *data; // x0
  __int64 v16; // x1
  System_Int32_array *selfConcatSvtIndividualities_k__BackingField; // x0
  __int64 v18; // x8
  System_Int32_array *v19; // x23
  unsigned __int64 v20; // x26
  int32_t *v21; // x27
  bool v22; // w24
  struct BattleData_o *v23; // x8
  BattleServantData_o *ServantData; // x25
  const MethodInfo *v25; // x3
  const MethodInfo *v26; // x2
  __int64 v28; // x0

  if ( (byte_4355010 & 1) == 0 )
  {
    sub_B70694(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_int__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B70694(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B70694(&System_Collections_Generic_List_int__TypeInfo);
    byte_4355010 = 1;
  }
  v13 = (System_Collections_Generic_List_int__o *)sub_B70764(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v13,
    (const MethodInfo_30B547C *)Method_System_Collections_Generic_List_int___ctor__);
  if ( atkSvt )
  {
    v14 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B70764(BattleBuffData_CheckIndividualitiesData_TypeInfo);
    BattleBuffData_CheckIndividualitiesData___ctor(v14, atkSvt, 0LL, 0LL, 0LL, 0LL, 0LL);
    if ( !v14 )
      goto LABEL_27;
    selfConcatSvtIndividualities_k__BackingField = v14->fields._selfConcatSvtIndividualities_k__BackingField;
  }
  else
  {
    selfConcatSvtIndividualities_k__BackingField = 0LL;
  }
  data = CommonFunction__JoinIndiv(selfConcatSvtIndividualities_k__BackingField, addIndiv, 0LL);
  if ( !list )
    goto LABEL_27;
  v18 = *(_QWORD *)&list->max_length;
  if ( (int)v18 >= 1 )
  {
    v19 = data;
    v20 = 0LL;
    v21 = &list->m_Items[1];
    v22 = isResurrectable;
    do
    {
      if ( v20 >= (unsigned int)v18 )
      {
LABEL_28:
        v28 = sub_B70798(data);
        sub_B70738(v28, 0LL);
      }
      data = (System_Int32_array *)this->fields.data;
      if ( !data )
        goto LABEL_27;
      ServantData = BattleData__getServantData((BattleData_o *)data, v21[v20], 0LL);
      data = (System_Int32_array *)BattleLogicTarget__IsTargetAlive(this, ServantData, v22, v25);
      if ( ((unsigned __int8)data & 1) != 0
        || (data = (System_Int32_array *)BattleLogicTarget__IsTargetGuts(this, ServantData, v26),
            ((unsigned __int8)data & 1) != 0) )
      {
        if ( !ServantData )
          goto LABEL_27;
      }
      else
      {
        v23 = this->fields.data;
        if ( !v23 || !ServantData )
          goto LABEL_27;
        data = (System_Int32_array *)BattleServantData__checkDeadTurn(ServantData, v23->fields.typeTurn, 0LL);
        if ( ((unsigned __int8)data & 1) == 0 || !isDeadToEnableUpHate )
          goto LABEL_24;
      }
      data = (System_Int32_array *)BattleServantData__isUpHate(ServantData, v19, 0LL);
      if ( ((unsigned __int8)data & 1) != 0 )
      {
        if ( v20 >= list->max_length )
          goto LABEL_28;
        if ( !v13 )
          goto LABEL_27;
        System_Collections_Generic_List_int___Add(
          v13,
          v21[v20],
          (const MethodInfo_30B61D8 *)Method_System_Collections_Generic_List_int__Add__);
      }
LABEL_24:
      LODWORD(v18) = list->max_length;
    }
    while ( (__int64)++v20 < (int)v18 );
  }
  if ( !v13 )
LABEL_27:
    sub_B7076C(data, v16);
  return System_Collections_Generic_List_int___ToArray(
           v13,
           (const MethodInfo_30B82E4 *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_Int32_array *__fastcall BattleLogicTarget__narrowDownIndividuality(
        BattleLogicTarget_o *this,
        System_Int32_array *list,
        System_Func_int____bool__o *funcContainsIndividuality,
        bool isResurrectable,
        bool isCheckBuff,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v10; // x23
  BattleData_o *data; // x0
  __int64 v12; // x1
  __int64 v13; // x8
  unsigned __int64 v14; // x27
  int32_t *v15; // x28
  bool v16; // w24
  BattleServantData_o *ServantData; // x25
  const MethodInfo *v18; // x3
  const MethodInfo *v19; // x2
  System_Collections_Generic_List_int__o *v20; // x26
  System_Collections_Generic_IEnumerable_T__o *BuffIndividualities; // x0
  __int64 v23; // x0

  if ( (byte_435500F & 1) == 0 )
  {
    sub_B70694(&Method_System_Func_int____bool__Invoke__);
    sub_B70694(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_B70694(&Method_System_Collections_Generic_List_int__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B70694(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B70694(&System_Collections_Generic_List_int__TypeInfo);
    byte_435500F = 1;
  }
  v10 = (System_Collections_Generic_List_int__o *)sub_B70764(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v10,
    (const MethodInfo_30B547C *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !list )
    goto LABEL_22;
  v13 = *(_QWORD *)&list->max_length;
  if ( (int)v13 >= 1 )
  {
    v14 = 0LL;
    v15 = &list->m_Items[1];
    v16 = isResurrectable;
    do
    {
      if ( v14 >= (unsigned int)v13 )
      {
LABEL_23:
        v23 = sub_B70798(data);
        sub_B70738(v23, 0LL);
      }
      data = this->fields.data;
      if ( !data )
        goto LABEL_22;
      ServantData = BattleData__getServantData(data, v15[v14], 0LL);
      if ( BattleLogicTarget__IsTargetAlive(this, ServantData, v16, v18)
        || (data = (BattleData_o *)BattleLogicTarget__IsTargetGuts(this, ServantData, v19),
            ((unsigned __int8)data & 1) != 0) )
      {
        v20 = (System_Collections_Generic_List_int__o *)sub_B70764(System_Collections_Generic_List_int__TypeInfo);
        System_Collections_Generic_List_int____ctor(
          v20,
          (const MethodInfo_30B547C *)Method_System_Collections_Generic_List_int___ctor__);
        if ( !ServantData )
          goto LABEL_22;
        data = (BattleData_o *)BattleServantData__getIndividualities(ServantData, 0LL, 0LL);
        if ( !v20 )
          goto LABEL_22;
        System_Collections_Generic_List_int___AddRange(
          v20,
          (System_Collections_Generic_IEnumerable_T__o *)data,
          (const MethodInfo_30B642C *)Method_System_Collections_Generic_List_int__AddRange__);
        if ( isCheckBuff )
        {
          BuffIndividualities = (System_Collections_Generic_IEnumerable_T__o *)BattleServantData__getBuffIndividualities(
                                                                                 ServantData,
                                                                                 0,
                                                                                 0,
                                                                                 0,
                                                                                 0LL);
          System_Collections_Generic_List_int___AddRange(
            v20,
            BuffIndividualities,
            (const MethodInfo_30B642C *)Method_System_Collections_Generic_List_int__AddRange__);
        }
        data = (BattleData_o *)System_Collections_Generic_List_int___ToArray(
                                 v20,
                                 (const MethodInfo_30B82E4 *)Method_System_Collections_Generic_List_int__ToArray__);
        if ( !funcContainsIndividuality )
          goto LABEL_22;
        data = (BattleData_o *)System_Func_BattleBuffData_BuffData__bool___Invoke(
                                 (System_Func_BattleBuffData_BuffData__bool__o *)funcContainsIndividuality,
                                 (BattleBuffData_BuffData_o *)data,
                                 (const MethodInfo_29AC58C *)Method_System_Func_int____bool__Invoke__);
        if ( ((unsigned __int8)data & 1) != 0 )
        {
          if ( v14 >= list->max_length )
            goto LABEL_23;
          if ( !v10 )
            goto LABEL_22;
          System_Collections_Generic_List_int___Add(
            v10,
            v15[v14],
            (const MethodInfo_30B61D8 *)Method_System_Collections_Generic_List_int__Add__);
        }
      }
      LODWORD(v13) = list->max_length;
    }
    while ( (__int64)++v14 < (int)v13 );
  }
  if ( !v10 )
LABEL_22:
    sub_B7076C(data, v12);
  return System_Collections_Generic_List_int___ToArray(
           v10,
           (const MethodInfo_30B82E4 *)Method_System_Collections_Generic_List_int__ToArray__);
}


void __fastcall BattleLogicTarget__setInit(BattleLogicTarget_o *this, BattleData_o *data, const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.data = data;
  sub_B70630(
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
  BattleData_o *data; // x0
  System_Collections_Generic_List_int__o *v6; // x21
  __int64 v7; // x8
  unsigned __int64 v8; // x23
  int32_t *v9; // x24
  BattleServantData_o *v10; // x22
  __int64 v11; // x0

  FieldEnemyServantIDList = targetIdList;
  if ( (byte_4355012 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_int__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B70694(&System_Collections_Generic_List_int__TypeInfo);
    byte_4355012 = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_23;
  if ( !data->fields.isMultiTargetBattle )
  {
    if ( !FieldEnemyServantIDList )
      FieldEnemyServantIDList = BattleData__getFieldEnemyServantIDList(data, 1, 0LL);
    v6 = (System_Collections_Generic_List_int__o *)sub_B70764(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v6,
      (const MethodInfo_30B547C *)Method_System_Collections_Generic_List_int___ctor__);
    data = this->fields.data;
    if ( !data )
      goto LABEL_23;
    data = (BattleData_o *)BattleData__getFieldEnemyServantIDList(data, 1, 0LL);
    if ( !FieldEnemyServantIDList )
      goto LABEL_23;
    v7 = *(_QWORD *)&FieldEnemyServantIDList->max_length;
    data = this->fields.data;
    if ( (int)v7 >= 1 )
    {
      v8 = 0LL;
      v9 = &FieldEnemyServantIDList->m_Items[1];
      while ( 1 )
      {
        if ( v8 >= (unsigned int)v7 )
        {
LABEL_24:
          v11 = sub_B70798(data);
          sub_B70738(v11, 0LL);
        }
        if ( !data )
          break;
        data = (BattleData_o *)BattleData__getEnemyServantData(data, v9[v8], 0LL);
        if ( !data )
          break;
        v10 = (BattleServantData_o *)data;
        if ( BattleServantData__isAlive((BattleServantData_o *)data, 0, 0LL) || BattleServantData__isGuts(v10, 0LL) )
        {
          data = (BattleData_o *)BattleServantData__isUpHate(v10, 0LL, 0LL);
          if ( ((unsigned __int8)data & 1) != 0 )
          {
            if ( v8 >= FieldEnemyServantIDList->max_length )
              goto LABEL_24;
            if ( !v6 )
              break;
            System_Collections_Generic_List_int___Add(
              v6,
              v9[v8],
              (const MethodInfo_30B61D8 *)Method_System_Collections_Generic_List_int__Add__);
          }
        }
        LODWORD(v7) = FieldEnemyServantIDList->max_length;
        data = this->fields.data;
        if ( (__int64)++v8 >= (int)v7 )
          goto LABEL_21;
      }
LABEL_23:
      sub_B7076C(data, targetIdList);
    }
LABEL_21:
    if ( !data )
      goto LABEL_23;
    BattleData__setTargetLock(data, v6, 0LL);
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
      v8 = sub_B70798(data);
      sub_B70738(v8, 0LL);
    }
    v7 = this->fields.data;
    if ( v7 )
    {
      v7->fields.globaltargetId = *((_DWORD *)&v5->fields.fsm + v6);
      return;
    }
LABEL_16:
    sub_B7076C(data, method);
  }
}


void __fastcall BattleLogicTarget___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_4351426 & 1) == 0 )
  {
    sub_B70694(&BattleLogicTarget___c_TypeInfo);
    byte_4351426 = 1;
  }
  v1 = (Il2CppObject *)sub_B70764(BattleLogicTarget___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)BattleLogicTarget___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B70630(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
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
    sub_B7076C(this, 0LL);
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
  if ( (byte_4351427 & 1) == 0 )
  {
    this = (BattleLogicTarget___c__DisplayClass14_0_o *)sub_B70694(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
    byte_4351427 = 1;
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
          (const MethodInfo_2FBB138 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__),
        (this = (BattleLogicTarget___c__DisplayClass14_0_o *)v6->fields.indNum) == 0LL) )
  {
LABEL_12:
    sub_B7076C(this, *(_QWORD *)&x);
  }
  System_Collections_Generic_Dictionary_int__int___set_Item(
    (System_Collections_Generic_Dictionary_int__int__o *)this,
    y,
    v12,
    (const MethodInfo_2FBB138 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
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
    sub_B7076C(this, *(_QWORD *)&x);
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