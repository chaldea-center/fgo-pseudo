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
  if ( (byte_4217702 & 1) == 0 )
  {
    this = (BattleLogicTarget_o *)sub_B0D8A4(&Method_BasicHelper_ContainsSelfNotNull_int___, svtData);
    byte_4217702 = 1;
  }
  if ( !svtData )
    sub_B0D97C(this);
  return !BasicHelper__ContainsSelfNotNull_int_(
            (System_Collections_Generic_HashSet_T__o *)v6->fields.tempDeadSvtHash,
            svtData->fields.uniqueId,
            (const MethodInfo_1707354 *)Method_BasicHelper_ContainsSelfNotNull_int___)
      && BattleServantData__isAlive(svtData, isResurrectable, 0LL);
}


bool __fastcall BattleLogicTarget__IsTargetGuts(
        BattleLogicTarget_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  BattleLogicTarget_o *v4; // x20

  v4 = this;
  if ( (byte_4217703 & 1) == 0 )
  {
    this = (BattleLogicTarget_o *)sub_B0D8A4(&Method_BasicHelper_ContainsSelfNotNull_int___, svtData);
    byte_4217703 = 1;
  }
  if ( !svtData )
    sub_B0D97C(this);
  return !svtData->fields.isDeadAnime
      && BasicHelper__ContainsSelfNotNull_int_(
           (System_Collections_Generic_HashSet_T__o *)v4->fields.tempDeadSvtHash,
           svtData->fields.uniqueId,
           (const MethodInfo_1707354 *)Method_BasicHelper_ContainsSelfNotNull_int___)
      || BattleServantData__isGuts(svtData, 0LL);
}


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
    sub_B0D97C(data);
  }
  return m_CachedPtr - data->fields.m_CachedPtr;
}


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
    sub_B0D97C(data);
  }
  return (_DWORD)data
       - (*(__int64 (__fastcall **)(BattleData_o *, Il2CppClass *))&v8->klass[1]._1.this_arg.bits)(
           v8,
           v8->klass[1]._1.element_class);
}


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
    sub_B0D97C(data);
  }
  return (_DWORD)data
       - (*(__int64 (__fastcall **)(BattleData_o *, Il2CppClass *))&v9->klass[1]._1.this_arg.bits)(
           v9,
           v9->klass[1]._1.element_class);
}


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
    sub_B0D97C(data);
  }
  return HIDWORD(data->fields.enemyAppearValid) - HIDWORD(v8->fields.enemyAppearValid);
}


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
    sub_B0D97C(data);
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


// local variable allocation has failed, the output may be wrong!
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
  __int64 v12; // x8
  unsigned __int64 v13; // x24
  bool v14; // w22
  const MethodInfo *v15; // x3
  BattleServantData_o *v16; // x23
  const MethodInfo *v17; // x2
  struct BattleData_o *v18; // x8
  __int64 v20; // x0

  if ( (byte_4217704 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, targetlist);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__ToArray__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v8);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v9);
    byte_4217704 = 1;
  }
  v10 = (System_Collections_Generic_List_int__o *)sub_B0D974(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    targetlist,
                                                    isResurrectable);
  System_Collections_Generic_List_int____ctor(
    v10,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !targetlist )
    goto LABEL_18;
  v12 = *(_QWORD *)&targetlist->max_length;
  if ( (int)v12 >= 1 )
  {
    v13 = 0LL;
    v14 = isResurrectable;
    while ( 1 )
    {
      if ( v13 >= (unsigned int)v12 )
      {
        v20 = sub_B0D9A8(data);
        sub_B0D948(v20, 0LL);
      }
      data = this->fields.data;
      if ( !data )
        break;
      data = (BattleData_o *)BattleData__getServantData(data, targetlist->m_Items[v13 + 1], 0LL);
      if ( data )
      {
        v16 = (BattleServantData_o *)data;
        data = (BattleData_o *)BattleLogicTarget__IsTargetAlive(this, (BattleServantData_o *)data, v14, v15);
        if ( ((unsigned __int8)data & 1) != 0 )
          goto LABEL_10;
        data = (BattleData_o *)BattleLogicTarget__IsTargetGuts(this, v16, v17);
        if ( ((unsigned __int8)data & 1) != 0 )
        {
          v18 = this->fields.data;
          if ( !v18 )
            break;
          data = (BattleData_o *)BattleServantData__checkDeadTurn(v16, v18->fields.typeTurn, 0LL);
          if ( ((unsigned __int8)data & 1) == 0 )
          {
LABEL_10:
            if ( !v10 )
              break;
            System_Collections_Generic_List_int___Add(
              v10,
              v16->fields.uniqueId,
              (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
          }
        }
      }
      LODWORD(v12) = targetlist->max_length;
      if ( (__int64)++v13 >= (int)v12 )
        goto LABEL_16;
    }
LABEL_18:
    sub_B0D97C(data);
  }
LABEL_16:
  if ( !v10 )
    goto LABEL_18;
  return System_Collections_Generic_List_int___ToArray(
           v10,
           (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__);
}


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
    sub_B0D97C(data);
  }
  BattlePerformance__reViewTargetMarks((BattlePerformance_o *)data, 0LL);
LABEL_7:
  v12 = this->fields.data;
  if ( !v12 )
    goto LABEL_9;
  return v12->fields.globaltargetId;
}


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
    sub_B0D97C(data);
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
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  __int64 v27; // x1
  __int64 v28; // x2
  System_Comparison_int__o *v29; // x22
  const MethodInfo *v30; // x4

  if ( (byte_421770B & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Array_Sort_int____67949840, ids);
    sub_B0D8A4(&Method_System_Comparison_int___ctor__, v9);
    sub_B0D8A4(&System_Comparison_int__TypeInfo, v10);
    sub_B0D8A4(&Method_BattleLogicTarget___c__DisplayClass15_0__getTargetActiveBuff_b__0__, v11);
    sub_B0D8A4(&BattleLogicTarget___c__DisplayClass15_0_TypeInfo, v12);
    byte_421770B = 1;
  }
  v13 = sub_B0D974(BattleLogicTarget___c__DisplayClass15_0_TypeInfo, ids, targetlist);
  BattleLogicTarget___c__DisplayClass15_0___ctor((BattleLogicTarget___c__DisplayClass15_0_o *)v13, 0LL);
  if ( !v13 )
    sub_B0D97C(v14);
  *(_QWORD *)(v13 + 16) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v13 + 16), (System_Int32_array **)this, v15, v16, v17, v18, v19, v20);
  *(_QWORD *)(v13 + 24) = ids;
  sub_B0D840((BattleServantConfConponent_o *)(v13 + 24), (System_Int32_array **)ids, v21, v22, v23, v24, v25, v26);
  v29 = (System_Comparison_int__o *)sub_B0D974(System_Comparison_int__TypeInfo, v27, v28);
  System_Comparison_int____ctor(
    v29,
    (Il2CppObject *)v13,
    Method_BattleLogicTarget___c__DisplayClass15_0__getTargetActiveBuff_b__0__,
    (const MethodInfo_241155C *)Method_System_Comparison_int___ctor__);
  System_Array__Sort_int__36935640(
    targetlist,
    (System_Comparison_T__o *)v29,
    (const MethodInfo_23397D8 *)Method_System_Array_Sort_int____67949840);
  return BattleLogicTarget__getTargetBase(this, targetlist, 0, isDeadToEnableUpHate, v30);
}


int32_t __fastcall BattleLogicTarget__getTargetActiveIndividualities(
        BattleLogicTarget_o *this,
        System_Int32_array *indv,
        System_Int32_array *targetlist,
        AiActEntity_o *aiActEnt,
        bool isDeadToEnableUpHate,
        const MethodInfo *method)
{
  System_Int32_array *v8; // x21
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
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  __int64 v42; // x1
  __int64 v43; // x2
  const MethodInfo *v44; // x3
  System_Collections_Generic_Dictionary_int__int__o *v45; // x23
  System_Collections_Generic_Dictionary_int__int__o **v46; // x22
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  __int64 v53; // x1
  __int64 v54; // x2
  System_Comparison_int__o *v55; // x23
  const MethodInfo *v56; // x4
  int32_t Item; // w23
  __int64 v58; // x1
  __int64 v59; // x2
  System_Collections_Generic_List_int__o *v60; // x21
  int32_t currentKey; // w24
  __int64 v62; // x0
  System_Int32_array *v63; // x0
  const MethodInfo *v64; // x4
  __int64 v66; // x0
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o v67; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o v68; // [xsp+20h] [xbp-70h] BYREF

  v8 = targetlist;
  if ( (byte_421770A & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Array_Sort_int____67949840, indv);
    sub_B0D8A4(&Method_System_Comparison_int___ctor__, v11);
    sub_B0D8A4(&System_Comparison_int__TypeInfo, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__int__get_Count__, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__int__get_Keys__, v16);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v17);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__int__Dispose__, v18);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__int__MoveNext__, v19);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__int__get_Current__, v20);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_KeyCollection_int__int__GetEnumerator__, v21);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, v22);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__ToArray__, v23);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v24);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v25);
    sub_B0D8A4(&Method_BattleLogicTarget___c__DisplayClass14_0__getTargetActiveIndividualities_b__0__, v26);
    sub_B0D8A4(&BattleLogicTarget___c__DisplayClass14_0_TypeInfo, v27);
    byte_421770A = 1;
  }
  memset(&v68, 0, sizeof(v68));
  v28 = sub_B0D974(BattleLogicTarget___c__DisplayClass14_0_TypeInfo, indv, targetlist);
  BattleLogicTarget___c__DisplayClass14_0___ctor((BattleLogicTarget___c__DisplayClass14_0_o *)v28, 0LL);
  if ( !v28 )
    goto LABEL_26;
  *(_QWORD *)(v28 + 16) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v28 + 16), (System_Int32_array **)this, v30, v31, v32, v33, v34, v35);
  *(_QWORD *)(v28 + 24) = indv;
  sub_B0D840((BattleServantConfConponent_o *)(v28 + 24), (System_Int32_array **)indv, v36, v37, v38, v39, v40, v41);
  if ( aiActEnt && !AiActEntity__IsIncludeDeathSvt(aiActEnt, 0LL) )
    v8 = BattleLogicTarget__deathSvtExclusion(this, v8, 0, v44);
  v45 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B0D974(
                                                               System_Collections_Generic_Dictionary_int__int__TypeInfo,
                                                               v42,
                                                               v43);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v45,
    (const MethodInfo_2E68CB0 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  *(_QWORD *)(v28 + 32) = v45;
  v46 = (System_Collections_Generic_Dictionary_int__int__o **)(v28 + 32);
  sub_B0D840((BattleServantConfConponent_o *)(v28 + 32), (System_Int32_array **)v45, v47, v48, v49, v50, v51, v52);
  v55 = (System_Comparison_int__o *)sub_B0D974(System_Comparison_int__TypeInfo, v53, v54);
  System_Comparison_int____ctor(
    v55,
    (Il2CppObject *)v28,
    Method_BattleLogicTarget___c__DisplayClass14_0__getTargetActiveIndividualities_b__0__,
    (const MethodInfo_241155C *)Method_System_Comparison_int___ctor__);
  System_Array__Sort_int__36935640(
    v8,
    (System_Comparison_T__o *)v55,
    (const MethodInfo_23397D8 *)Method_System_Array_Sort_int____67949840);
  Count = *(System_Collections_Generic_Dictionary_int__int__o **)(v28 + 32);
  if ( !Count )
    goto LABEL_26;
  Count = (System_Collections_Generic_Dictionary_int__int__o *)System_Collections_Generic_Dictionary_int__int___get_Count(
                                                                 Count,
                                                                 (const MethodInfo_2E69454 *)Method_System_Collections_Generic_Dictionary_int__int__get_Count__);
  if ( (int)Count >= 1 )
  {
    if ( v8 )
    {
      if ( !v8->max_length )
      {
        v66 = sub_B0D9A8(Count);
        sub_B0D948(v66, 0LL);
      }
      Count = *v46;
      if ( *v46 )
      {
        Item = System_Collections_Generic_Dictionary_int__int___get_Item(
                 Count,
                 v8->m_Items[1],
                 (const MethodInfo_2E69794 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
        v60 = (System_Collections_Generic_List_int__o *)sub_B0D974(
                                                          System_Collections_Generic_List_int__TypeInfo,
                                                          v58,
                                                          v59);
        System_Collections_Generic_List_int____ctor(
          v60,
          (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
        Count = *v46;
        if ( *v46 )
        {
          Count = (System_Collections_Generic_Dictionary_int__int__o *)System_Collections_Generic_Dictionary_int__int___get_Keys(
                                                                         Count,
                                                                         (const MethodInfo_2E69464 *)Method_System_Collections_Generic_Dictionary_int__int__get_Keys__);
          if ( Count )
          {
            System_Collections_Generic_Dictionary_KeyCollection_int__int___GetEnumerator(
              &v67,
              (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)Count,
              (const MethodInfo_2045CAC *)Method_System_Collections_Generic_Dictionary_KeyCollection_int__int__GetEnumerator__);
            v68 = v67;
            while ( System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__int___MoveNext(
                      &v68,
                      (const MethodInfo_280E934 *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__int__MoveNext__) )
            {
              if ( !*v46 )
                sub_B0D97C(0LL);
              currentKey = (int32_t)v68.fields.currentKey;
              v62 = System_Collections_Generic_Dictionary_int__int___get_Item(
                      *v46,
                      (int32_t)v68.fields.currentKey,
                      (const MethodInfo_2E69794 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
              if ( Item == (_DWORD)v62 )
              {
                if ( !v60 )
                  sub_B0D97C(v62);
                System_Collections_Generic_List_int___Add(
                  v60,
                  currentKey,
                  (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
              }
            }
            System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__int___Dispose(
              &v68,
              (const MethodInfo_280E930 *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__int__Dispose__);
            if ( v60 )
            {
              v63 = System_Collections_Generic_List_int___ToArray(
                      v60,
                      (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__);
              return BattleLogicTarget__getTargetRandom(this, v63, 0, isDeadToEnableUpHate, v64);
            }
          }
        }
      }
    }
LABEL_26:
    sub_B0D97C(Count);
  }
  return BattleLogicTarget__getTargetBase(this, v8, 0, isDeadToEnableUpHate, v56);
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
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_Collections_ICollection_o **v31; // x25
  __int64 v32; // x1
  __int64 v33; // x2
  BattleData_o *v34; // x27
  bool v35; // w26
  BattleServantData_o *ServantData; // x0
  const MethodInfo *v37; // x6
  struct PlayMakerFSM_o *rootfsm; // x8
  System_Int32_array *v39; // x0
  const MethodInfo *v40; // x3
  const MethodInfo *v41; // x4
  System_Int32_array *Shuffle_int; // x5
  int32_t result; // w0
  BattleLogicTarget___c__DisplayClass17_1_o *v44; // x21
  __int64 v45; // x1
  __int64 v46; // x2
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v47; // x0
  __int64 *v48; // x8
  System_Func_int____bool__o *v49; // x20
  Il2CppObject *v50; // x1
  __int64 v51; // x1
  __int64 v52; // x2
  const MethodInfo *v53; // x5
  bool v54; // w3
  int32_t v55; // w1
  BattleLogicTarget_o *v56; // x0

  if ( (byte_421770C & 1) == 0 )
  {
    sub_B0D8A4(&Method_BattleRandom_getShuffle_int___, *(_QWORD *)&target);
    sub_B0D8A4(&Method_System_Func_int____bool___ctor__, v16);
    sub_B0D8A4(&System_Func_int____bool__TypeInfo, v17);
    sub_B0D8A4(&int___TypeInfo, v18);
    sub_B0D8A4(&Method_BattleLogicTarget___c__DisplayClass17_0__getTargetAiAct_b__1__, v19);
    sub_B0D8A4(&BattleLogicTarget___c__DisplayClass17_0_TypeInfo, v20);
    sub_B0D8A4(&Method_BattleLogicTarget___c__DisplayClass17_1__getTargetAiAct_b__0__, v21);
    sub_B0D8A4(&BattleLogicTarget___c__DisplayClass17_1_TypeInfo, v22);
    byte_421770C = 1;
  }
  v23 = sub_B0D974(BattleLogicTarget___c__DisplayClass17_0_TypeInfo, *(_QWORD *)&target, *(_QWORD *)&actId);
  BattleLogicTarget___c__DisplayClass17_0___ctor((BattleLogicTarget___c__DisplayClass17_0_o *)v23, 0LL);
  if ( !v23 )
    goto LABEL_41;
  *(_QWORD *)(v23 + 16) = individuality;
  v31 = (System_Collections_ICollection_o **)(v23 + 16);
  sub_B0D840(
    (BattleServantConfConponent_o *)(v23 + 16),
    (System_Int32_array **)individuality,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  NoTargetNoActionType = (BattleData_o *)sub_B0D8BC(int___TypeInfo, 0LL);
  v34 = NoTargetNoActionType;
  if ( aiActEnt )
  {
    NoTargetNoActionType = (BattleData_o *)AiActEntity__GetNoTargetNoActionType(aiActEnt, 0LL);
    v35 = (_DWORD)NoTargetNoActionType != 0;
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
                                             v37);
    v34 = NoTargetNoActionType;
    goto LABEL_10;
  }
  v35 = 0;
  if ( isCheckHate )
    goto LABEL_8;
LABEL_10:
  if ( !v34 )
    goto LABEL_41;
  rootfsm = v34->fields.rootfsm;
  if ( rootfsm )
    goto LABEL_12;
  v44 = (BattleLogicTarget___c__DisplayClass17_1_o *)sub_B0D974(
                                                       BattleLogicTarget___c__DisplayClass17_1_TypeInfo,
                                                       v32,
                                                       v33);
  BattleLogicTarget___c__DisplayClass17_1___ctor(v44, 0LL);
  if ( !aiActEnt )
    goto LABEL_21;
  if ( !v44 )
    goto LABEL_41;
  if ( AiActEntity__TryGetMultiIndividuality(aiActEnt, &v44->fields.multiIndividuality, 0LL) )
  {
    v47 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                               System_Func_int____bool__TypeInfo,
                                                                               v45,
                                                                               v46);
    v48 = &Method_BattleLogicTarget___c__DisplayClass17_1__getTargetAiAct_b__0__;
    v49 = (System_Func_int____bool__o *)v47;
    v50 = (Il2CppObject *)v44;
  }
  else
  {
LABEL_21:
    if ( BasicHelper__IsNullOrEmpty(*v31, 0LL) )
    {
      v49 = 0LL;
      goto LABEL_27;
    }
    v47 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                               System_Func_int____bool__TypeInfo,
                                                                               v51,
                                                                               v52);
    v48 = &Method_BattleLogicTarget___c__DisplayClass17_0__getTargetAiAct_b__1__;
    v49 = (System_Func_int____bool__o *)v47;
    v50 = (Il2CppObject *)v23;
  }
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v47,
    v50,
    *v48,
    (const MethodInfo_26189B8 *)Method_System_Func_int____bool___ctor__);
  if ( !v49 )
    goto LABEL_27;
  NoTargetNoActionType = (BattleData_o *)BattleLogicTarget__narrowDownIndividuality(
                                           this,
                                           targetlist,
                                           v49,
                                           isResurrectable,
                                           target != 13,
                                           v53);
  if ( !NoTargetNoActionType )
LABEL_41:
    sub_B0D97C(NoTargetNoActionType);
  v34 = NoTargetNoActionType;
LABEL_27:
  rootfsm = v34->fields.rootfsm;
  if ( v35 && v49 != 0LL && rootfsm == 0LL )
    return -1;
LABEL_12:
  if ( rootfsm )
    v39 = (System_Int32_array *)v34;
  else
    v39 = targetlist;
  Shuffle_int = BattleRandom__getShuffle_int_(v39, (const MethodInfo_170B2E8 *)Method_BattleRandom_getShuffle_int___);
  switch ( target )
  {
    case 2:
      return BattleLogicTarget__getTargetHighHp(this, Shuffle_int, isDeadToEnableUpHate, v40);
    case 3:
      return BattleLogicTarget__getTargetLowHp(this, Shuffle_int, isDeadToEnableUpHate, v40);
    case 10:
      return BattleLogicTarget__getTargetNpTurnLower(this, Shuffle_int, isDeadToEnableUpHate, v40);
    case 11:
      return BattleLogicTarget__getTargetNpGaugeHeighter(this, Shuffle_int, isDeadToEnableUpHate, v40);
    case 12:
      return BattleLogicTarget__getRevenge(this, actId, Shuffle_int, isDeadToEnableUpHate, v41);
    case 13:
      return BattleLogicTarget__getTargetActiveIndividualities(
               this,
               (System_Int32_array *)*v31,
               Shuffle_int,
               aiActEnt,
               isDeadToEnableUpHate,
               (const MethodInfo *)Shuffle_int);
    case 14:
      return BattleLogicTarget__getTargetActiveBuff(
               this,
               (System_Int32_array *)*v31,
               Shuffle_int,
               isDeadToEnableUpHate,
               v41);
    case 15:
      v54 = isDeadToEnableUpHate;
      v56 = this;
      v55 = 0;
      goto LABEL_40;
    case 16:
      v54 = isDeadToEnableUpHate;
      v55 = 1;
      goto LABEL_39;
    case 17:
      v54 = isDeadToEnableUpHate;
      v55 = 2;
LABEL_39:
      v56 = this;
LABEL_40:
      result = BattleLogicTarget__getTargetPosition(v56, v55, Shuffle_int, v54, v35, (const MethodInfo *)Shuffle_int);
      break;
    default:
      result = BattleLogicTarget__getTargetBase(this, Shuffle_int, isResurrectable, isDeadToEnableUpHate, v41);
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
    sub_B0D97C(this);
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
      v16 = sub_B0D9A8(this);
      sub_B0D948(v16, 0LL);
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
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x2
  const MethodInfo *v16; // x1
  struct BattleData_o *v17; // x21
  int32_t v18; // w1
  BattleData_o *v19; // x0
  System_Int32_array *v20; // x3
  int32_t v21; // w22
  struct BattleData_o *v22; // x8
  __int64 v23; // x1
  __int64 v24; // x2
  Il2CppObject *ServantData; // x21
  BattleLogicTarget___c_c *v26; // x8
  struct BattleLogicTarget___c_StaticFields *static_fields; // x9
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__20_0; // x22
  Il2CppObject *v29; // x23
  struct BattleLogicTarget___c_StaticFields *v30; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  Il2CppObject *v37; // x0
  BattleServantData_o *v38; // x21
  const MethodInfo *v39; // x2
  struct BattleData_o *v40; // x8
  const MethodInfo *v42; // x1
  int32_t ActorId; // w0
  const MethodInfo *v44; // x2
  struct BattleData_o *v45; // x8
  struct BattleData_o *v46; // x8
  System_Int32_array *v47; // x21
  __int64 v48; // x1
  __int64 v49; // x2
  const MethodInfo *v50; // x4
  System_Comparison_int__o *v51; // x22
  struct BattleData_o *v52; // x22
  const MethodInfo *v53; // x2
  const MethodInfo *v54; // x1
  const MethodInfo *v55; // x2
  struct BattleData_o *v56; // x21
  int32_t v57; // w22
  System_Int32_array *v58; // x3
  struct BattleData_o *v59; // x8
  struct BattleData_o *v60; // x8

  if ( (byte_421770F & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Array_Sort_int____67949840, task);
    sub_B0D8A4(&Method_BasicHelper_TakeIf_BattleServantData___, v5);
    sub_B0D8A4(&Method_BattleLogicTarget__getTargetBattleServantData_b__20_1__, v6);
    sub_B0D8A4(&Method_System_Comparison_int___ctor__, v7);
    sub_B0D8A4(&System_Comparison_int__TypeInfo, v8);
    sub_B0D8A4(&Method_System_Predicate_BattleServantData___ctor__, v9);
    sub_B0D8A4(&System_Predicate_BattleServantData__TypeInfo, v10);
    sub_B0D8A4(&Method_BattleLogicTarget___c__getTargetBattleServantData_b__20_0__, v11);
    sub_B0D8A4(&BattleLogicTarget___c_TypeInfo, v12);
    byte_421770F = 1;
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
    BattleLogicTarget__updateEnemyTarget(this, 0LL, v15);
    goto LABEL_24;
  }
  if ( !task )
    goto LABEL_70;
  if ( task->fields.actiontype == 4 )
  {
    data = (BattleData_o *)BattleLogicTask__IsTargetTypeEnemy(task, v14);
    if ( ((unsigned __int8)data & 1) == 0 )
      goto LABEL_21;
    v17 = this->fields.data;
    data = (BattleData_o *)BattleLogicTask__getActorId(task, v16);
    if ( !v17 )
      goto LABEL_70;
    v18 = (int)data;
    v19 = v17;
    v20 = 0LL;
  }
  else
  {
    v17 = this->fields.data;
    data = (BattleData_o *)BattleLogicTask__getActorId(task, v14);
    v21 = (int)data;
    if ( task->fields.skillInfo )
    {
      data = (BattleData_o *)BattleSkillInfoData__GetAddIndiv(task->fields.skillInfo, 0LL);
      v20 = (System_Int32_array *)data;
      if ( !v17 )
        goto LABEL_70;
    }
    else
    {
      v20 = 0LL;
      if ( !v17 )
        goto LABEL_70;
    }
    v19 = v17;
    v18 = v21;
  }
  data = (BattleData_o *)BattleData__getTargetLock(v19, v18, 0, v20, 0LL);
  v17->fields.globaltargetId = (int)data;
LABEL_21:
  v22 = this->fields.data;
  if ( !v22 )
    goto LABEL_70;
  data = (BattleData_o *)v22->fields.perf;
  if ( !data )
    goto LABEL_70;
  BattlePerformance__reViewTargetMarks((BattlePerformance_o *)data, 0LL);
LABEL_24:
  data = this->fields.data;
  if ( !data )
    goto LABEL_70;
  ServantData = (Il2CppObject *)BattleData__getServantData(data, data->fields.globaltargetId, 0LL);
  v26 = BattleLogicTarget___c_TypeInfo;
  if ( (BYTE3(BattleLogicTarget___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleLogicTarget___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicTarget___c_TypeInfo);
    v26 = BattleLogicTarget___c_TypeInfo;
  }
  static_fields = v26->static_fields;
  _9__20_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__20_0;
  if ( !_9__20_0 )
  {
    if ( (BYTE3(v26->vtable._0_Equals.methodPtr) & 4) != 0 && !v26->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v26);
      static_fields = BattleLogicTarget___c_TypeInfo->static_fields;
    }
    v29 = (Il2CppObject *)static_fields->__9;
    _9__20_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                          System_Predicate_BattleServantData__TypeInfo,
                                                                          v23,
                                                                          v24);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__20_0,
      v29,
      Method_BattleLogicTarget___c__getTargetBattleServantData_b__20_0__,
      (const MethodInfo_2AF7E30 *)Method_System_Predicate_BattleServantData___ctor__);
    v30 = BattleLogicTarget___c_TypeInfo->static_fields;
    v30->__9__20_0 = (struct System_Predicate_BattleServantData__o *)_9__20_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v30->__9__20_0,
      (System_Int32_array **)_9__20_0,
      v31,
      v32,
      v33,
      v34,
      v35,
      v36);
  }
  v37 = BasicHelper__TakeIf_object_(
          ServantData,
          (System_Predicate_T__o *)_9__20_0,
          (const MethodInfo_1709FCC *)Method_BasicHelper_TakeIf_BattleServantData___);
  if ( v37 )
  {
    v38 = (BattleServantData_o *)v37;
    data = (BattleData_o *)BattleServantData__isAlive((BattleServantData_o *)v37, 0, 0LL);
    if ( ((unsigned __int8)data & 1) != 0 )
    {
      v40 = this->fields.data;
      if ( v40 && task )
        goto LABEL_37;
      goto LABEL_70;
    }
    data = (BattleData_o *)BattleServantData__isAlive(v38, 0, 0LL);
    if ( ((unsigned __int8)data & 1) == 0 )
    {
      if ( !task )
        goto LABEL_70;
      ActorId = BattleLogicTask__getActorId(task, v42);
      data = (BattleData_o *)BattleServantData__checkOverKill(v38, ActorId, 0LL);
      if ( ((unsigned __int8)data & 1) != 0 )
      {
        v40 = this->fields.data;
        if ( v40 )
        {
LABEL_37:
          BattleLogicTask__setTarget(task, v40->fields.globaltargetId, v39);
          return v38;
        }
        goto LABEL_70;
      }
    }
    if ( !BattleServantData__isAlive(v38, 0, 0LL) )
    {
      data = (BattleData_o *)BattleServantData__isGuts(v38, 0LL);
      if ( ((unsigned __int8)data & 1) != 0 )
      {
        v45 = this->fields.data;
        if ( v45 && task )
        {
          BattleLogicTask__setTarget(task, v45->fields.globaltargetId, v44);
          v38->fields.overkillTargetId = -1;
          return v38;
        }
        goto LABEL_70;
      }
    }
    v38->fields.overkillTargetId = -1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_70;
  data = (BattleData_o *)BattleData__getFieldEnemyServantIDList(data, 1, 0LL);
  v46 = this->fields.data;
  if ( !v46 )
    goto LABEL_70;
  v47 = (System_Int32_array *)data;
  data = (BattleData_o *)v46->fields.quest_ent;
  if ( !data )
    goto LABEL_70;
  if ( QuestEntity__HasFlag((QuestEntity_o *)data, 0x40000000000000LL, 0LL) )
  {
    v51 = (System_Comparison_int__o *)sub_B0D974(System_Comparison_int__TypeInfo, v48, v49);
    System_Comparison_int____ctor(
      v51,
      (Il2CppObject *)this,
      Method_BattleLogicTarget__getTargetBattleServantData_b__20_1__,
      (const MethodInfo_241155C *)Method_System_Comparison_int___ctor__);
    System_Array__Sort_int__36935640(
      v47,
      (System_Comparison_T__o *)v51,
      (const MethodInfo_23397D8 *)Method_System_Array_Sort_int____67949840);
  }
  v52 = this->fields.data;
  data = (BattleData_o *)BattleLogicTarget__getTargetBase(this, v47, 0, 1, v50);
  if ( !v52 )
    goto LABEL_70;
  v52->fields.globaltargetId = (int)data;
  BattleLogicTarget__updateEnemyTarget(this, v47, v53);
  data = this->fields.data;
  if ( !data )
    goto LABEL_70;
  data = (BattleData_o *)BattleData__isTargetLock(data, 0LL);
  if ( ((unsigned __int8)data & 1) != 0 )
  {
    if ( !task )
      goto LABEL_70;
    v56 = this->fields.data;
    data = (BattleData_o *)BattleLogicTask__getActorId(task, v54);
    v57 = (int)data;
    if ( task->fields.skillInfo )
    {
      data = (BattleData_o *)BattleSkillInfoData__GetAddIndiv(task->fields.skillInfo, 0LL);
      v58 = (System_Int32_array *)data;
      if ( !v56 )
        goto LABEL_70;
    }
    else
    {
      v58 = 0LL;
      if ( !v56 )
        goto LABEL_70;
    }
    data = (BattleData_o *)BattleData__getTargetLock(v56, v57, 0, v58, 0LL);
    v56->fields.globaltargetId = (int)data;
    v59 = this->fields.data;
    if ( v59 )
    {
      data = (BattleData_o *)v59->fields.perf;
      if ( data )
      {
        BattlePerformance__reViewTargetMarks((BattlePerformance_o *)data, 0LL);
        goto LABEL_66;
      }
    }
LABEL_70:
    sub_B0D97C(data);
  }
LABEL_66:
  v60 = this->fields.data;
  if ( !v60 )
    goto LABEL_70;
  if ( !task )
    goto LABEL_70;
  BattleLogicTask__setTarget(task, v60->fields.globaltargetId, v55);
  data = this->fields.data;
  if ( !data )
    goto LABEL_70;
  return BattleData__getServantData(data, data->fields.globaltargetId, 0LL);
}


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_4217706 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Array_Sort_int____67949840, targetlist);
    sub_B0D8A4(&Method_BattleLogicTarget__getTargetHighHp_b__9_0__, v7);
    sub_B0D8A4(&Method_System_Comparison_int___ctor__, v8);
    sub_B0D8A4(&System_Comparison_int__TypeInfo, v9);
    byte_4217706 = 1;
  }
  v10 = (System_Comparison_int__o *)sub_B0D974(System_Comparison_int__TypeInfo, targetlist, isDeadToEnableUpHate);
  System_Comparison_int____ctor(
    v10,
    (Il2CppObject *)this,
    Method_BattleLogicTarget__getTargetHighHp_b__9_0__,
    (const MethodInfo_241155C *)Method_System_Comparison_int___ctor__);
  System_Array__Sort_int__36935640(
    targetlist,
    (System_Comparison_T__o *)v10,
    (const MethodInfo_23397D8 *)Method_System_Array_Sort_int____67949840);
  return BattleLogicTarget__getTargetBase(this, targetlist, 0, isDeadToEnableUpHate, v11);
}


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_4217707 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Array_Sort_int____67949840, targetlist);
    sub_B0D8A4(&Method_BattleLogicTarget__getTargetLowHp_b__10_0__, v7);
    sub_B0D8A4(&Method_System_Comparison_int___ctor__, v8);
    sub_B0D8A4(&System_Comparison_int__TypeInfo, v9);
    byte_4217707 = 1;
  }
  v10 = (System_Comparison_int__o *)sub_B0D974(System_Comparison_int__TypeInfo, targetlist, isDeadToEnableUpHate);
  System_Comparison_int____ctor(
    v10,
    (Il2CppObject *)this,
    Method_BattleLogicTarget__getTargetLowHp_b__10_0__,
    (const MethodInfo_241155C *)Method_System_Comparison_int___ctor__);
  System_Array__Sort_int__36935640(
    targetlist,
    (System_Comparison_T__o *)v10,
    (const MethodInfo_23397D8 *)Method_System_Array_Sort_int____67949840);
  return BattleLogicTarget__getTargetBase(this, targetlist, 0, isDeadToEnableUpHate, v11);
}


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_4217709 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Array_Sort_int____67949840, targetlist);
    sub_B0D8A4(&Method_BattleLogicTarget__getTargetNpGaugeHeighter_b__12_0__, v7);
    sub_B0D8A4(&Method_System_Comparison_int___ctor__, v8);
    sub_B0D8A4(&System_Comparison_int__TypeInfo, v9);
    byte_4217709 = 1;
  }
  v10 = (System_Comparison_int__o *)sub_B0D974(System_Comparison_int__TypeInfo, targetlist, isDeadToEnableUpHate);
  System_Comparison_int____ctor(
    v10,
    (Il2CppObject *)this,
    Method_BattleLogicTarget__getTargetNpGaugeHeighter_b__12_0__,
    (const MethodInfo_241155C *)Method_System_Comparison_int___ctor__);
  System_Array__Sort_int__36935640(
    targetlist,
    (System_Comparison_T__o *)v10,
    (const MethodInfo_23397D8 *)Method_System_Array_Sort_int____67949840);
  return BattleLogicTarget__getTargetBase(this, targetlist, 0, isDeadToEnableUpHate, v11);
}


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_4217708 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Array_Sort_int____67949840, targetlist);
    sub_B0D8A4(&Method_BattleLogicTarget__getTargetNpTurnLower_b__11_0__, v7);
    sub_B0D8A4(&Method_System_Comparison_int___ctor__, v8);
    sub_B0D8A4(&System_Comparison_int__TypeInfo, v9);
    byte_4217708 = 1;
  }
  v10 = (System_Comparison_int__o *)sub_B0D974(System_Comparison_int__TypeInfo, targetlist, isDeadToEnableUpHate);
  System_Comparison_int____ctor(
    v10,
    (Il2CppObject *)this,
    Method_BattleLogicTarget__getTargetNpTurnLower_b__11_0__,
    (const MethodInfo_241155C *)Method_System_Comparison_int___ctor__);
  System_Array__Sort_int__36935640(
    targetlist,
    (System_Comparison_T__o *)v10,
    (const MethodInfo_23397D8 *)Method_System_Array_Sort_int____67949840);
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
    sub_B0D97C(this);
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
      v16 = sub_B0D9A8(this);
      sub_B0D948(v16, 0LL);
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

  if ( (byte_4217705 & 1) == 0 )
  {
    sub_B0D8A4(&Method_BattleRandom_getShuffle_int___, targetlist);
    byte_4217705 = 1;
  }
  Shuffle_int = BattleRandom__getShuffle_int_(
                  targetlist,
                  (const MethodInfo_170B2E8 *)Method_BattleRandom_getShuffle_int___);
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
  __int64 v18; // x1
  __int64 v19; // x2
  BattleBuffData_CheckIndividualitiesData_o *v20; // x26
  System_Int32_array *data; // x0
  System_Int32_array *selfConcatSvtIndividualities_k__BackingField; // x0
  __int64 v23; // x8
  System_Int32_array *v24; // x23
  unsigned __int64 v25; // x26
  int32_t *v26; // x27
  bool v27; // w24
  struct BattleData_o *v28; // x8
  BattleServantData_o *ServantData; // x25
  const MethodInfo *v30; // x3
  const MethodInfo *v31; // x2
  __int64 v33; // x0

  if ( (byte_421770E & 1) == 0 )
  {
    sub_B0D8A4(&BattleBuffData_CheckIndividualitiesData_TypeInfo, list);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__ToArray__, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v15);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v16);
    byte_421770E = 1;
  }
  v17 = (System_Collections_Generic_List_int__o *)sub_B0D974(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    list,
                                                    atkSvt);
  System_Collections_Generic_List_int____ctor(
    v17,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( atkSvt )
  {
    v20 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B0D974(
                                                         BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                         v18,
                                                         v19);
    BattleBuffData_CheckIndividualitiesData___ctor(v20, atkSvt, 0LL, 0LL, 0LL, 0LL, 0LL);
    if ( !v20 )
      goto LABEL_27;
    selfConcatSvtIndividualities_k__BackingField = v20->fields._selfConcatSvtIndividualities_k__BackingField;
  }
  else
  {
    selfConcatSvtIndividualities_k__BackingField = 0LL;
  }
  data = CommonFunction__JoinIndiv(selfConcatSvtIndividualities_k__BackingField, addIndiv, 0LL);
  if ( !list )
    goto LABEL_27;
  v23 = *(_QWORD *)&list->max_length;
  if ( (int)v23 >= 1 )
  {
    v24 = data;
    v25 = 0LL;
    v26 = &list->m_Items[1];
    v27 = isResurrectable;
    do
    {
      if ( v25 >= (unsigned int)v23 )
      {
LABEL_28:
        v33 = sub_B0D9A8(data);
        sub_B0D948(v33, 0LL);
      }
      data = (System_Int32_array *)this->fields.data;
      if ( !data )
        goto LABEL_27;
      ServantData = BattleData__getServantData((BattleData_o *)data, v26[v25], 0LL);
      data = (System_Int32_array *)BattleLogicTarget__IsTargetAlive(this, ServantData, v27, v30);
      if ( ((unsigned __int8)data & 1) != 0
        || (data = (System_Int32_array *)BattleLogicTarget__IsTargetGuts(this, ServantData, v31),
            ((unsigned __int8)data & 1) != 0) )
      {
        if ( !ServantData )
          goto LABEL_27;
      }
      else
      {
        v28 = this->fields.data;
        if ( !v28 || !ServantData )
          goto LABEL_27;
        data = (System_Int32_array *)BattleServantData__checkDeadTurn(ServantData, v28->fields.typeTurn, 0LL);
        if ( ((unsigned __int8)data & 1) == 0 || !isDeadToEnableUpHate )
          goto LABEL_24;
      }
      data = (System_Int32_array *)BattleServantData__isUpHate(ServantData, v24, 0LL);
      if ( ((unsigned __int8)data & 1) != 0 )
      {
        if ( v25 >= list->max_length )
          goto LABEL_28;
        if ( !v17 )
          goto LABEL_27;
        System_Collections_Generic_List_int___Add(
          v17,
          v26[v25],
          (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
      }
LABEL_24:
      LODWORD(v23) = list->max_length;
    }
    while ( (__int64)++v25 < (int)v23 );
  }
  if ( !v17 )
LABEL_27:
    sub_B0D97C(data);
  return System_Collections_Generic_List_int___ToArray(
           v17,
           (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__);
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
  __int64 v17; // x8
  unsigned __int64 v18; // x27
  int32_t *v19; // x28
  bool v20; // w24
  BattleServantData_o *ServantData; // x25
  const MethodInfo *v22; // x3
  __int64 v23; // x1
  const MethodInfo *v24; // x2
  System_Collections_Generic_List_int__o *v25; // x26
  System_Collections_Generic_IEnumerable_T__o *BuffIndividualities; // x0
  __int64 v28; // x0

  if ( (byte_421770D & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Func_int____bool__Invoke__, list);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__AddRange__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__ToArray__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v13);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v14);
    byte_421770D = 1;
  }
  v15 = (System_Collections_Generic_List_int__o *)sub_B0D974(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    list,
                                                    funcContainsIndividuality);
  System_Collections_Generic_List_int____ctor(
    v15,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !list )
    goto LABEL_22;
  v17 = *(_QWORD *)&list->max_length;
  if ( (int)v17 >= 1 )
  {
    v18 = 0LL;
    v19 = &list->m_Items[1];
    v20 = isResurrectable;
    do
    {
      if ( v18 >= (unsigned int)v17 )
      {
LABEL_23:
        v28 = sub_B0D9A8(data);
        sub_B0D948(v28, 0LL);
      }
      data = this->fields.data;
      if ( !data )
        goto LABEL_22;
      ServantData = BattleData__getServantData(data, v19[v18], 0LL);
      if ( BattleLogicTarget__IsTargetAlive(this, ServantData, v20, v22)
        || (data = (BattleData_o *)BattleLogicTarget__IsTargetGuts(this, ServantData, v24),
            ((unsigned __int8)data & 1) != 0) )
      {
        v25 = (System_Collections_Generic_List_int__o *)sub_B0D974(
                                                          System_Collections_Generic_List_int__TypeInfo,
                                                          v23,
                                                          v24);
        System_Collections_Generic_List_int____ctor(
          v25,
          (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
        if ( !ServantData )
          goto LABEL_22;
        data = (BattleData_o *)BattleServantData__getIndividualities(ServantData, 0LL, 0LL);
        if ( !v25 )
          goto LABEL_22;
        System_Collections_Generic_List_int___AddRange(
          v25,
          (System_Collections_Generic_IEnumerable_T__o *)data,
          (const MethodInfo_2FB0154 *)Method_System_Collections_Generic_List_int__AddRange__);
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
            (const MethodInfo_2FB0154 *)Method_System_Collections_Generic_List_int__AddRange__);
        }
        data = (BattleData_o *)System_Collections_Generic_List_int___ToArray(
                                 v25,
                                 (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__);
        if ( !funcContainsIndividuality )
          goto LABEL_22;
        data = (BattleData_o *)System_Func_BattleBuffData_BuffData__bool___Invoke(
                                 (System_Func_BattleBuffData_BuffData__bool__o *)funcContainsIndividuality,
                                 (BattleBuffData_BuffData_o *)data,
                                 (const MethodInfo_26189CC *)Method_System_Func_int____bool__Invoke__);
        if ( ((unsigned __int8)data & 1) != 0 )
        {
          if ( v18 >= list->max_length )
            goto LABEL_23;
          if ( !v15 )
            goto LABEL_22;
          System_Collections_Generic_List_int___Add(
            v15,
            v19[v18],
            (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
        }
      }
      LODWORD(v17) = list->max_length;
    }
    while ( (__int64)++v18 < (int)v17 );
  }
  if ( !v15 )
LABEL_22:
    sub_B0D97C(data);
  return System_Collections_Generic_List_int___ToArray(
           v15,
           (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__);
}


void __fastcall BattleLogicTarget__setInit(BattleLogicTarget_o *this, BattleData_o *data, const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.data = data;
  sub_B0D840(
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
  if ( (byte_4217710 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, targetIdList);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v5);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v6);
    byte_4217710 = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_23;
  if ( !data->fields.isMultiTargetBattle )
  {
    if ( !FieldEnemyServantIDList )
      FieldEnemyServantIDList = BattleData__getFieldEnemyServantIDList(data, 1, 0LL);
    v8 = (System_Collections_Generic_List_int__o *)sub_B0D974(
                                                     System_Collections_Generic_List_int__TypeInfo,
                                                     targetIdList,
                                                     method);
    System_Collections_Generic_List_int____ctor(
      v8,
      (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
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
          v13 = sub_B0D9A8(data);
          sub_B0D948(v13, 0LL);
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
              (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
          }
        }
        LODWORD(v9) = FieldEnemyServantIDList->max_length;
        data = this->fields.data;
        if ( (__int64)++v10 >= (int)v9 )
          goto LABEL_21;
      }
LABEL_23:
      sub_B0D97C(data);
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
      v8 = sub_B0D9A8(data);
      sub_B0D948(v8, 0LL);
    }
    v7 = this->fields.data;
    if ( v7 )
    {
      v7->fields.globaltargetId = *((_DWORD *)&v5->fields.fsm + v6);
      return;
    }
LABEL_16:
    sub_B0D97C(data);
  }
}


void __fastcall BattleLogicTarget___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_4213BE0 & 1) == 0 )
  {
    sub_B0D8A4(&BattleLogicTarget___c_TypeInfo, v1);
    byte_4213BE0 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(BattleLogicTarget___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = (BattleServantConfConponent_o *)BattleLogicTarget___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v3;
  sub_B0D840(static_fields, (System_Int32_array **)v3, v5, v6, v7, v8, v9, v10);
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
    sub_B0D97C(this);
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
  if ( (byte_4213BE1 & 1) == 0 )
  {
    this = (BattleLogicTarget___c__DisplayClass14_0_o *)sub_B0D8A4(
                                                          &Method_System_Collections_Generic_Dictionary_int__int__set_Item__,
                                                          *(_QWORD *)&x);
    byte_4213BE1 = 1;
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
          (const MethodInfo_2E6982C *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__),
        (this = (BattleLogicTarget___c__DisplayClass14_0_o *)v6->fields.indNum) == 0LL) )
  {
LABEL_12:
    sub_B0D97C(this);
  }
  System_Collections_Generic_Dictionary_int__int___set_Item(
    (System_Collections_Generic_Dictionary_int__int__o *)this,
    y,
    v12,
    (const MethodInfo_2E6982C *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
  return v12 - v11;
}


void __fastcall BattleLogicTarget___c__DisplayClass15_0___ctor(
        BattleLogicTarget___c__DisplayClass15_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


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
    sub_B0D97C(this);
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