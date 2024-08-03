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
  if ( (byte_49FF026 & 1) == 0 )
  {
    this = (BattleLogicTarget_o *)sub_1B640C8(&Method_BasicHelper_ContainsSelfNotNull_int___, svtData);
    byte_49FF026 = 1;
  }
  if ( !svtData )
    sub_1B64324(this);
  return !BasicHelper__ContainsSelfNotNull_int_(
            (System_Collections_Generic_HashSet_T__o *)v6->fields.tempDeadSvtHash,
            svtData->fields.uniqueId,
            (const MethodInfo_2E24DF0 *)Method_BasicHelper_ContainsSelfNotNull_int___)
      && BattleServantData__isAlive(svtData, isResurrectable, 0LL);
}


bool __fastcall BattleLogicTarget__IsTargetGuts(
        BattleLogicTarget_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  BattleLogicTarget_o *v4; // x20

  v4 = this;
  if ( (byte_49FF027 & 1) == 0 )
  {
    this = (BattleLogicTarget_o *)sub_1B640C8(&Method_BasicHelper_ContainsSelfNotNull_int___, svtData);
    byte_49FF027 = 1;
  }
  if ( !svtData )
    sub_1B64324(this);
  return !svtData->fields.isDeadAnime
      && BasicHelper__ContainsSelfNotNull_int_(
           (System_Collections_Generic_HashSet_T__o *)v4->fields.tempDeadSvtHash,
           svtData->fields.uniqueId,
           (const MethodInfo_2E24DF0 *)Method_BasicHelper_ContainsSelfNotNull_int___)
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
    sub_1B64324(data);
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
    sub_1B64324(data);
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
    sub_1B64324(data);
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
    sub_1B64324(data);
  }
  return *(&data->fields.enemyMasterCommandSpellUseCnt + 1) - *(&v8->fields.enemyMasterCommandSpellUseCnt + 1);
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
    sub_1B64324(data);
  }
  if ( SHIDWORD(v8->fields.totalDamageInTurn) <= 0 )
    v9 = 999;
  else
    v9 = 0;
  v10 = v9 + LODWORD(v8->fields.currenctKnockdown);
  if ( SHIDWORD(data->fields.totalDamageInTurn) <= 0 )
    v11 = -999;
  else
    v11 = 0;
  return v10 - LODWORD(data->fields.currenctKnockdown) + v11;
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
  __int64 uniqueId; // x1
  __int64 v13; // x8
  unsigned __int64 v14; // x24
  bool v15; // w22
  const MethodInfo *v16; // x3
  BattleServantData_o *v17; // x23
  const MethodInfo *v18; // x2
  struct System_Int32_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  struct BattleData_o *v22; // x8

  if ( (byte_49FF028 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, targetlist);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__ToArray__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v8);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v9);
    byte_49FF028 = 1;
  }
  v10 = (System_Collections_Generic_List_int__o *)sub_1B64314(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    targetlist,
                                                    isResurrectable);
  System_Collections_Generic_List_int____ctor(
    v10,
    (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !targetlist )
    goto LABEL_22;
  v13 = *(_QWORD *)&targetlist->max_length;
  if ( (int)v13 >= 1 )
  {
    v14 = 0LL;
    v15 = isResurrectable;
    while ( 1 )
    {
      if ( v14 >= (unsigned int)v13 )
        sub_1B6432C(data, uniqueId);
      data = this->fields.data;
      if ( !data )
        break;
      data = (BattleData_o *)BattleData__getServantData(data, targetlist->m_Items[v14 + 1], 0LL);
      if ( data )
      {
        v17 = (BattleServantData_o *)data;
        data = (BattleData_o *)BattleLogicTarget__IsTargetAlive(this, (BattleServantData_o *)data, v15, v16);
        if ( ((unsigned __int8)data & 1) != 0 )
          goto LABEL_26;
        data = (BattleData_o *)BattleLogicTarget__IsTargetGuts(this, v17, v18);
        if ( ((unsigned __int8)data & 1) != 0 )
        {
          v22 = this->fields.data;
          if ( !v22 )
            break;
          data = (BattleData_o *)BattleServantData__checkDeadTurn(v17, v22->fields.typeTurn, 0LL);
          if ( ((unsigned __int8)data & 1) == 0 )
          {
LABEL_26:
            if ( !v10 )
              break;
            uniqueId = (unsigned int)v17->fields.uniqueId;
            items = v10->fields._items;
            v20 = Method_System_Collections_Generic_List_int__Add__;
            ++v10->fields._version;
            if ( !items )
              break;
            size = v10->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v10,
                uniqueId,
                *(const MethodInfo_348FEDC **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
            }
            else
            {
              v10->fields._size = size + 1;
              items->m_Items[size + 1] = uniqueId;
            }
          }
        }
      }
      LODWORD(v13) = targetlist->max_length;
      if ( (__int64)++v14 >= (int)v13 )
        goto LABEL_20;
    }
LABEL_22:
    sub_1B64324(data);
  }
LABEL_20:
  if ( !v10 )
    goto LABEL_22;
  return System_Collections_Generic_List_int___ToArray(
           v10,
           (const MethodInfo_3491A34 *)Method_System_Collections_Generic_List_int__ToArray__);
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
    sub_1B64324(data);
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
    sub_1B64324(data);
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
  __int64 v12; // x23
  __int64 v13; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  int32_t v16; // w2
  int32_t v17; // w3
  __int64 v18; // x1
  __int64 v19; // x2
  System_Comparison_int__o *v20; // x22
  const MethodInfo *v21; // x4

  if ( (byte_49FF02F & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Array_Sort_int____75704768, ids);
    sub_1B640C8(&System_Comparison_int__TypeInfo, v9);
    sub_1B640C8(&Method_BattleLogicTarget___c__DisplayClass15_0__getTargetActiveBuff_b__0__, v10);
    sub_1B640C8(&BattleLogicTarget___c__DisplayClass15_0_TypeInfo, v11);
    byte_49FF02F = 1;
  }
  v12 = sub_1B64314(BattleLogicTarget___c__DisplayClass15_0_TypeInfo, ids, targetlist);
  BattleLogicTarget___c__DisplayClass15_0___ctor((BattleLogicTarget___c__DisplayClass15_0_o *)v12, 0LL);
  if ( !v12 )
    sub_1B64324(v13);
  *(_QWORD *)(v12 + 16) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v12 + 16), (int32_t)this, v14, v15);
  *(_QWORD *)(v12 + 24) = ids;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v12 + 24), (int32_t)ids, v16, v17);
  v20 = (System_Comparison_int__o *)sub_1B64314(System_Comparison_int__TypeInfo, v18, v19);
  System_Comparison_int____ctor(
    v20,
    (Il2CppObject *)v12,
    Method_BattleLogicTarget___c__DisplayClass15_0__getTargetActiveBuff_b__0__,
    0LL);
  System_Array__Sort_int__48264244(
    targetlist,
    (System_Comparison_T__o *)v20,
    (const MethodInfo_2E07434 *)Method_System_Array_Sort_int____75704768);
  return BattleLogicTarget__getTargetBase(this, targetlist, 0, isDeadToEnableUpHate, v21);
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
  __int64 v27; // x24
  System_Collections_Generic_Dictionary_int__int__o *Count; // x0
  int32_t v29; // w2
  int32_t v30; // w3
  int32_t v31; // w2
  int32_t v32; // w3
  __int64 v33; // x1
  __int64 v34; // x2
  const MethodInfo *v35; // x3
  System_Collections_Generic_Dictionary_int__int__o *v36; // x23
  System_Collections_Generic_Dictionary_int__int__o **v37; // x22
  int32_t v38; // w2
  int32_t v39; // w3
  __int64 v40; // x1
  __int64 v41; // x2
  System_Comparison_int__o *v42; // x23
  __int64 v43; // x1
  const MethodInfo *v44; // x4
  int32_t Item; // w23
  __int64 v46; // x1
  __int64 v47; // x2
  System_Collections_Generic_List_int__o *v48; // x21
  int32_t currentKey; // w24
  __int64 v50; // x0
  struct System_Int32_array *items; // x8
  _QWORD *v52; // x9
  __int64 size; // x10
  System_Int32_array *v54; // x0
  const MethodInfo *v55; // x4
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o v57; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o v58; // [xsp+20h] [xbp-80h] BYREF

  v8 = targetlist;
  if ( (byte_49FF02E & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Array_Sort_int____75704768, indv);
    sub_1B640C8(&System_Comparison_int__TypeInfo, v11);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__int__get_Count__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__, v14);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__int__get_Keys__, v15);
    sub_1B640C8(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v16);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__int__Dispose__, v17);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__int__MoveNext__, v18);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__int__get_Current__, v19);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_KeyCollection_int__int__GetEnumerator__, v20);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, v21);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__ToArray__, v22);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v23);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v24);
    sub_1B640C8(&Method_BattleLogicTarget___c__DisplayClass14_0__getTargetActiveIndividualities_b__0__, v25);
    sub_1B640C8(&BattleLogicTarget___c__DisplayClass14_0_TypeInfo, v26);
    byte_49FF02E = 1;
  }
  memset(&v58, 0, sizeof(v58));
  v27 = sub_1B64314(BattleLogicTarget___c__DisplayClass14_0_TypeInfo, indv, targetlist);
  BattleLogicTarget___c__DisplayClass14_0___ctor((BattleLogicTarget___c__DisplayClass14_0_o *)v27, 0LL);
  if ( !v27 )
    goto LABEL_30;
  *(_QWORD *)(v27 + 16) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v27 + 16), (int32_t)this, v29, v30);
  *(_QWORD *)(v27 + 24) = indv;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v27 + 24), (int32_t)indv, v31, v32);
  if ( aiActEnt && !AiActEntity__IsIncludeDeathSvt(aiActEnt, 0LL) )
    v8 = BattleLogicTarget__deathSvtExclusion(this, v8, 0, v35);
  v36 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1B64314(
                                                               System_Collections_Generic_Dictionary_int__int__TypeInfo,
                                                               v33,
                                                               v34);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v36,
    (const MethodInfo_311A4F0 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  *(_QWORD *)(v27 + 32) = v36;
  v37 = (System_Collections_Generic_Dictionary_int__int__o **)(v27 + 32);
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v27 + 32), (int32_t)v36, v38, v39);
  v42 = (System_Comparison_int__o *)sub_1B64314(System_Comparison_int__TypeInfo, v40, v41);
  System_Comparison_int____ctor(
    v42,
    (Il2CppObject *)v27,
    Method_BattleLogicTarget___c__DisplayClass14_0__getTargetActiveIndividualities_b__0__,
    0LL);
  System_Array__Sort_int__48264244(
    v8,
    (System_Comparison_T__o *)v42,
    (const MethodInfo_2E07434 *)Method_System_Array_Sort_int____75704768);
  Count = *(System_Collections_Generic_Dictionary_int__int__o **)(v27 + 32);
  if ( !Count )
    goto LABEL_30;
  Count = (System_Collections_Generic_Dictionary_int__int__o *)System_Collections_Generic_Dictionary_int__int___get_Count(
                                                                 Count,
                                                                 (const MethodInfo_311AB68 *)Method_System_Collections_Generic_Dictionary_int__int__get_Count__);
  if ( (int)Count >= 1 )
  {
    if ( v8 )
    {
      if ( !v8->max_length )
        sub_1B6432C(Count, v43);
      Count = *v37;
      if ( *v37 )
      {
        Item = System_Collections_Generic_Dictionary_int__int___get_Item(
                 Count,
                 v8->m_Items[1],
                 (const MethodInfo_311AE18 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
        v48 = (System_Collections_Generic_List_int__o *)sub_1B64314(
                                                          System_Collections_Generic_List_int__TypeInfo,
                                                          v46,
                                                          v47);
        System_Collections_Generic_List_int____ctor(
          v48,
          (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
        Count = *v37;
        if ( *v37 )
        {
          Count = (System_Collections_Generic_Dictionary_int__int__o *)System_Collections_Generic_Dictionary_int__int___get_Keys(
                                                                         Count,
                                                                         (const MethodInfo_311AB78 *)Method_System_Collections_Generic_Dictionary_int__int__get_Keys__);
          if ( Count )
          {
            System_Collections_Generic_Dictionary_KeyCollection_int__int___GetEnumerator(
              &v57,
              (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)Count,
              (const MethodInfo_33C94FC *)Method_System_Collections_Generic_Dictionary_KeyCollection_int__int__GetEnumerator__);
            v58 = v57;
            while ( System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__int___MoveNext(
                      &v58,
                      (const MethodInfo_326882C *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__int__MoveNext__) )
            {
              if ( !*v37 )
                sub_1B64324(0LL);
              currentKey = (int32_t)v58.fields._currentKey;
              v50 = System_Collections_Generic_Dictionary_int__int___get_Item(
                      *v37,
                      (int32_t)v58.fields._currentKey,
                      (const MethodInfo_311AE18 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
              if ( Item == (_DWORD)v50 )
              {
                if ( !v48 )
                  sub_1B64324(v50);
                items = v48->fields._items;
                v52 = Method_System_Collections_Generic_List_int__Add__;
                ++v48->fields._version;
                if ( !items )
                  sub_1B64324(v50);
                size = v48->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_int___AddWithResize(
                    v48,
                    currentKey,
                    *(const MethodInfo_348FEDC **)(*(_QWORD *)(v52[4] + 192LL) + 112LL));
                }
                else
                {
                  v48->fields._size = size + 1;
                  items->m_Items[size + 1] = currentKey;
                }
              }
            }
            System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__int___Dispose(
              &v58,
              (const MethodInfo_3268828 *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__int__Dispose__);
            if ( v48 )
            {
              v54 = System_Collections_Generic_List_int___ToArray(
                      v48,
                      (const MethodInfo_3491A34 *)Method_System_Collections_Generic_List_int__ToArray__);
              return BattleLogicTarget__getTargetRandom(this, v54, 0, isDeadToEnableUpHate, v55);
            }
          }
        }
      }
    }
LABEL_30:
    sub_1B64324(Count);
  }
  return BattleLogicTarget__getTargetBase(this, v8, 0, isDeadToEnableUpHate, v44);
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
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x28
  BattleData_o *NoTargetNoActionType; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  System_Collections_ICollection_o **v27; // x25
  __int64 v28; // x1
  __int64 v29; // x2
  BattleData_o *v30; // x27
  bool v31; // w26
  BattleServantData_o *ServantData; // x0
  const MethodInfo *v33; // x6
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  System_Int32_array *v35; // x0
  const MethodInfo *v36; // x3
  const MethodInfo *v37; // x4
  System_Int32_array *Shuffle_int; // x5
  int32_t result; // w0
  BattleLogicTarget___c__DisplayClass17_1_o *v40; // x21
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 *v43; // x29
  System_Func_int____bool__o *v44; // x29
  System_Func_object__bool__o *v45; // x0
  __int64 v46; // x2
  const MethodInfo *v47; // x5
  bool v48; // w3
  BattleLogicTarget_o *v49; // x0
  int32_t v50; // w1

  if ( (byte_49FF030 & 1) == 0 )
  {
    sub_1B640C8(&Method_BattleRandom_getShuffle_int___, *(_QWORD *)&target);
    sub_1B640C8(&System_Func_int____bool__TypeInfo, v17);
    sub_1B640C8(&int___TypeInfo, v18);
    sub_1B640C8(&Method_BattleLogicTarget___c__DisplayClass17_0__getTargetAiAct_b__1__, v19);
    sub_1B640C8(&BattleLogicTarget___c__DisplayClass17_0_TypeInfo, v20);
    sub_1B640C8(&Method_BattleLogicTarget___c__DisplayClass17_1__getTargetAiAct_b__0__, v21);
    sub_1B640C8(&BattleLogicTarget___c__DisplayClass17_1_TypeInfo, v22);
    byte_49FF030 = 1;
  }
  v23 = sub_1B64314(BattleLogicTarget___c__DisplayClass17_0_TypeInfo, *(_QWORD *)&target, *(_QWORD *)&actId);
  BattleLogicTarget___c__DisplayClass17_0___ctor((BattleLogicTarget___c__DisplayClass17_0_o *)v23, 0LL);
  if ( !v23 )
    goto LABEL_41;
  *(_QWORD *)(v23 + 16) = individuality;
  v27 = (System_Collections_ICollection_o **)(v23 + 16);
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v23 + 16), (int32_t)individuality, v25, v26);
  NoTargetNoActionType = (BattleData_o *)sub_1B64170(int___TypeInfo, 0LL);
  v30 = NoTargetNoActionType;
  if ( aiActEnt )
  {
    NoTargetNoActionType = (BattleData_o *)AiActEntity__GetNoTargetNoActionType(aiActEnt, 0LL);
    v31 = (_DWORD)NoTargetNoActionType != 0;
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
                                             v33);
    v30 = NoTargetNoActionType;
    goto LABEL_10;
  }
  v31 = 0;
  if ( isCheckHate )
    goto LABEL_8;
LABEL_10:
  if ( !v30 )
    goto LABEL_41;
  m_CancellationTokenSource = v30->fields.m_CancellationTokenSource;
  if ( m_CancellationTokenSource )
    goto LABEL_12;
  v40 = (BattleLogicTarget___c__DisplayClass17_1_o *)sub_1B64314(
                                                       BattleLogicTarget___c__DisplayClass17_1_TypeInfo,
                                                       v28,
                                                       v29);
  BattleLogicTarget___c__DisplayClass17_1___ctor(v40, 0LL);
  if ( !aiActEnt )
    goto LABEL_21;
  if ( !v40 )
    goto LABEL_41;
  if ( AiActEntity__TryGetMultiIndividuality(aiActEnt, &v40->fields.multiIndividuality, 0LL) )
  {
    v43 = &Method_BattleLogicTarget___c__DisplayClass17_1__getTargetAiAct_b__0__;
  }
  else
  {
LABEL_21:
    if ( BasicHelper__IsNullOrEmpty(*v27, 0LL) )
    {
      v44 = 0LL;
      goto LABEL_27;
    }
    v43 = &Method_BattleLogicTarget___c__DisplayClass17_0__getTargetAiAct_b__1__;
    v40 = (BattleLogicTarget___c__DisplayClass17_1_o *)v23;
  }
  v45 = (System_Func_object__bool__o *)sub_1B64314(System_Func_int____bool__TypeInfo, v41, v42);
  v46 = *v43;
  v44 = (System_Func_int____bool__o *)v45;
  System_Func_object__bool____ctor(v45, (Il2CppObject *)v40, v46, 0LL);
  if ( !v44 )
    goto LABEL_27;
  NoTargetNoActionType = (BattleData_o *)BattleLogicTarget__narrowDownIndividuality(
                                           this,
                                           targetlist,
                                           v44,
                                           isResurrectable,
                                           target != 13,
                                           v47);
  if ( !NoTargetNoActionType )
LABEL_41:
    sub_1B64324(NoTargetNoActionType);
  v30 = NoTargetNoActionType;
LABEL_27:
  m_CancellationTokenSource = v30->fields.m_CancellationTokenSource;
  if ( v31 && v44 != 0LL && m_CancellationTokenSource == 0LL )
    return -1;
LABEL_12:
  if ( m_CancellationTokenSource )
    v35 = (System_Int32_array *)v30;
  else
    v35 = targetlist;
  Shuffle_int = BattleRandom__getShuffle_int_(v35, (const MethodInfo_2E2ABE8 *)Method_BattleRandom_getShuffle_int___);
  switch ( target )
  {
    case 2:
      return BattleLogicTarget__getTargetHighHp(this, Shuffle_int, isDeadToEnableUpHate, v36);
    case 3:
      return BattleLogicTarget__getTargetLowHp(this, Shuffle_int, isDeadToEnableUpHate, v36);
    case 10:
      return BattleLogicTarget__getTargetNpTurnLower(this, Shuffle_int, isDeadToEnableUpHate, v36);
    case 11:
      return BattleLogicTarget__getTargetNpGaugeHeighter(this, Shuffle_int, isDeadToEnableUpHate, v36);
    case 12:
      return BattleLogicTarget__getRevenge(this, actId, Shuffle_int, isDeadToEnableUpHate, v37);
    case 13:
      return BattleLogicTarget__getTargetActiveIndividualities(
               this,
               (System_Int32_array *)*v27,
               Shuffle_int,
               aiActEnt,
               isDeadToEnableUpHate,
               (const MethodInfo *)Shuffle_int);
    case 14:
      return BattleLogicTarget__getTargetActiveBuff(
               this,
               (System_Int32_array *)*v27,
               Shuffle_int,
               isDeadToEnableUpHate,
               v37);
    case 15:
      v48 = isDeadToEnableUpHate;
      v49 = this;
      v50 = 0;
      goto LABEL_40;
    case 16:
      v48 = isDeadToEnableUpHate;
      v50 = 1;
      goto LABEL_39;
    case 17:
      v48 = isDeadToEnableUpHate;
      v50 = 2;
LABEL_39:
      v49 = this;
LABEL_40:
      result = BattleLogicTarget__getTargetPosition(v49, v50, Shuffle_int, v48, v31, (const MethodInfo *)Shuffle_int);
      break;
    default:
      result = BattleLogicTarget__getTargetBase(this, Shuffle_int, isResurrectable, isDeadToEnableUpHate, v37);
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

  if ( !targetlist )
LABEL_16:
    sub_1B64324(this);
  v5 = *(_QWORD *)&targetlist->max_length;
  if ( (int)v5 < 1 )
    return -1;
  v8 = this;
  v9 = 0LL;
  v10 = isResurrectable;
  while ( 1 )
  {
    if ( v9 >= (unsigned int)v5 )
      sub_1B6432C(this, targetlist);
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
  BattleData_o *data; // x0
  const MethodInfo *v12; // x2
  struct BattleData_o *v13; // x21
  int32_t v14; // w1
  BattleData_o *v15; // x0
  System_Int32_array *v16; // x3
  int32_t ActorId; // w22
  struct BattleData_o *v18; // x8
  BattleServantData_o *ServantData; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  BattleLogicTarget___c_c *v22; // x8
  Il2CppObject *v23; // x21
  System_Predicate_object__o *_9__20_0; // x22
  Il2CppObject *v25; // x23
  struct BattleLogicTarget___c_StaticFields *static_fields; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  Il2CppObject *v29; // x0
  BattleServantData_o *v30; // x21
  struct BattleData_o *v31; // x8
  int32_t v33; // w0
  struct BattleData_o *v34; // x8
  struct BattleData_o *v35; // x8
  System_Int32_array *v36; // x21
  __int64 v37; // x1
  __int64 v38; // x2
  const MethodInfo *v39; // x4
  System_Comparison_int__o *v40; // x22
  struct BattleData_o *v41; // x22
  const MethodInfo *v42; // x2
  struct BattleData_o *v43; // x21
  int32_t v44; // w22
  struct BattleData_o *v45; // x8
  struct BattleData_o *v46; // x8

  if ( (byte_49FF033 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Array_Sort_int____75704768, task);
    sub_1B640C8(&Method_BasicHelper_TakeIf_BattleServantData___, v5);
    sub_1B640C8(&Method_BattleLogicTarget__getTargetBattleServantData_b__20_1__, v6);
    sub_1B640C8(&System_Comparison_int__TypeInfo, v7);
    sub_1B640C8(&System_Predicate_BattleServantData__TypeInfo, v8);
    sub_1B640C8(&Method_BattleLogicTarget___c__getTargetBattleServantData_b__20_0__, v9);
    sub_1B640C8(&BattleLogicTarget___c_TypeInfo, v10);
    byte_49FF033 = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_62;
  if ( BattleData__ExistsFieldEnemyIntervalBuff(data, 38, 0LL) )
  {
    data = this->fields.data;
    if ( !data )
      goto LABEL_62;
    BattleData__ResetFieldEnemyUseBuff(data, 38, 0, 0LL);
  }
  data = this->fields.data;
  if ( !data )
LABEL_62:
    sub_1B64324(data);
  data = (BattleData_o *)BattleData__isTargetLock(data, 0LL);
  if ( ((unsigned __int8)data & 1) == 0 )
  {
    BattleLogicTarget__updateEnemyTarget(this, 0LL, v12);
    goto LABEL_21;
  }
  if ( !task )
    goto LABEL_62;
  if ( task->fields.actiontype == 4 )
  {
    data = (BattleData_o *)BattleLogicTask__IsTargetTypeEnemy(task, 0LL);
    if ( ((unsigned __int8)data & 1) == 0 )
      goto LABEL_18;
    v13 = this->fields.data;
    data = (BattleData_o *)BattleLogicTask__getActorId(task, 0LL);
    if ( !v13 )
      goto LABEL_62;
    v14 = (int)data;
    v15 = v13;
    v16 = 0LL;
  }
  else
  {
    v13 = this->fields.data;
    ActorId = BattleLogicTask__getActorId(task, 0LL);
    data = (BattleData_o *)BattleLogicTask__GetSkillAddIndiv(task, 0LL);
    if ( !v13 )
      goto LABEL_62;
    v16 = (System_Int32_array *)data;
    v15 = v13;
    v14 = ActorId;
  }
  data = (BattleData_o *)BattleData__getTargetLock(v15, v14, 0, v16, 0LL);
  v13->fields.globaltargetId = (int)data;
LABEL_18:
  v18 = this->fields.data;
  if ( !v18 )
    goto LABEL_62;
  data = (BattleData_o *)v18->fields.perf;
  if ( !data )
    goto LABEL_62;
  BattlePerformance__reViewTargetMarks((BattlePerformance_o *)data, 0LL);
LABEL_21:
  data = this->fields.data;
  if ( !data )
    goto LABEL_62;
  ServantData = BattleData__getServantData(data, data->fields.globaltargetId, 0LL);
  v22 = BattleLogicTarget___c_TypeInfo;
  v23 = (Il2CppObject *)ServantData;
  if ( !BattleLogicTarget___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicTarget___c_TypeInfo);
    v22 = BattleLogicTarget___c_TypeInfo;
  }
  _9__20_0 = (System_Predicate_object__o *)v22->static_fields->__9__20_0;
  if ( !_9__20_0 )
  {
    if ( !v22->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v22);
      v22 = BattleLogicTarget___c_TypeInfo;
    }
    v25 = (Il2CppObject *)v22->static_fields->__9;
    _9__20_0 = (System_Predicate_object__o *)sub_1B64314(System_Predicate_BattleServantData__TypeInfo, v20, v21);
    System_Predicate_object____ctor(
      _9__20_0,
      v25,
      Method_BattleLogicTarget___c__getTargetBattleServantData_b__20_0__,
      0LL);
    static_fields = BattleLogicTarget___c_TypeInfo->static_fields;
    static_fields->__9__20_0 = (struct System_Predicate_BattleServantData__o *)_9__20_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__20_0, (int32_t)_9__20_0, v27, v28);
  }
  v29 = BasicHelper__TakeIf_object_(
          v23,
          (System_Predicate_T__o *)_9__20_0,
          (const MethodInfo_2E297B0 *)Method_BasicHelper_TakeIf_BattleServantData___);
  if ( v29 )
  {
    v30 = (BattleServantData_o *)v29;
    data = (BattleData_o *)BattleServantData__isAlive((BattleServantData_o *)v29, 0, 0LL);
    if ( ((unsigned __int8)data & 1) != 0 )
    {
      v31 = this->fields.data;
      if ( v31 && task )
        goto LABEL_32;
      goto LABEL_62;
    }
    data = (BattleData_o *)BattleServantData__isAlive(v30, 0, 0LL);
    if ( ((unsigned __int8)data & 1) == 0 )
    {
      if ( !task )
        goto LABEL_62;
      v33 = BattleLogicTask__getActorId(task, 0LL);
      data = (BattleData_o *)BattleServantData__checkOverKill(v30, v33, 0LL);
      if ( ((unsigned __int8)data & 1) != 0 )
      {
        v31 = this->fields.data;
        if ( v31 )
        {
LABEL_32:
          BattleLogicTask__setTarget(task, v31->fields.globaltargetId, 0LL);
          return v30;
        }
        goto LABEL_62;
      }
    }
    if ( !BattleServantData__isAlive(v30, 0, 0LL) )
    {
      data = (BattleData_o *)BattleServantData__isGuts(v30, 0LL);
      if ( ((unsigned __int8)data & 1) != 0 )
      {
        v34 = this->fields.data;
        if ( v34 && task )
        {
          BattleLogicTask__setTarget(task, v34->fields.globaltargetId, 0LL);
          v30->fields.overkillTargetId = -1;
          return v30;
        }
        goto LABEL_62;
      }
    }
    v30->fields.overkillTargetId = -1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_62;
  data = (BattleData_o *)BattleData__getFieldEnemyServantIDList(data, 1, 0LL);
  v35 = this->fields.data;
  if ( !v35 )
    goto LABEL_62;
  v36 = (System_Int32_array *)data;
  data = (BattleData_o *)v35->fields.quest_ent;
  if ( !data )
    goto LABEL_62;
  if ( QuestEntity__HasFlag((QuestEntity_o *)data, 0x40000000000000LL, 0LL) )
  {
    v40 = (System_Comparison_int__o *)sub_1B64314(System_Comparison_int__TypeInfo, v37, v38);
    System_Comparison_int____ctor(
      v40,
      (Il2CppObject *)this,
      Method_BattleLogicTarget__getTargetBattleServantData_b__20_1__,
      0LL);
    System_Array__Sort_int__48264244(
      v36,
      (System_Comparison_T__o *)v40,
      (const MethodInfo_2E07434 *)Method_System_Array_Sort_int____75704768);
  }
  v41 = this->fields.data;
  data = (BattleData_o *)BattleLogicTarget__getTargetBase(this, v36, 0, 1, v39);
  if ( !v41 )
    goto LABEL_62;
  v41->fields.globaltargetId = (int)data;
  BattleLogicTarget__updateEnemyTarget(this, v36, v42);
  data = this->fields.data;
  if ( !data )
    goto LABEL_62;
  data = (BattleData_o *)BattleData__isTargetLock(data, 0LL);
  if ( ((unsigned __int8)data & 1) != 0 )
  {
    if ( !task )
      goto LABEL_62;
    v43 = this->fields.data;
    v44 = BattleLogicTask__getActorId(task, 0LL);
    data = (BattleData_o *)BattleLogicTask__GetSkillAddIndiv(task, 0LL);
    if ( !v43 )
      goto LABEL_62;
    data = (BattleData_o *)BattleData__getTargetLock(v43, v44, 0, (System_Int32_array *)data, 0LL);
    v43->fields.globaltargetId = (int)data;
    v45 = this->fields.data;
    if ( !v45 )
      goto LABEL_62;
    data = (BattleData_o *)v45->fields.perf;
    if ( !data )
      goto LABEL_62;
    BattlePerformance__reViewTargetMarks((BattlePerformance_o *)data, 0LL);
  }
  v46 = this->fields.data;
  if ( !v46 )
    goto LABEL_62;
  if ( !task )
    goto LABEL_62;
  BattleLogicTask__setTarget(task, v46->fields.globaltargetId, 0LL);
  data = this->fields.data;
  if ( !data )
    goto LABEL_62;
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
  System_Comparison_int__o *v9; // x22
  const MethodInfo *v10; // x4

  if ( (byte_49FF02A & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Array_Sort_int____75704768, targetlist);
    sub_1B640C8(&Method_BattleLogicTarget__getTargetHighHp_b__9_0__, v7);
    sub_1B640C8(&System_Comparison_int__TypeInfo, v8);
    byte_49FF02A = 1;
  }
  v9 = (System_Comparison_int__o *)sub_1B64314(System_Comparison_int__TypeInfo, targetlist, isDeadToEnableUpHate);
  System_Comparison_int____ctor(v9, (Il2CppObject *)this, Method_BattleLogicTarget__getTargetHighHp_b__9_0__, 0LL);
  System_Array__Sort_int__48264244(
    targetlist,
    (System_Comparison_T__o *)v9,
    (const MethodInfo_2E07434 *)Method_System_Array_Sort_int____75704768);
  return BattleLogicTarget__getTargetBase(this, targetlist, 0, isDeadToEnableUpHate, v10);
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
  System_Comparison_int__o *v9; // x22
  const MethodInfo *v10; // x4

  if ( (byte_49FF02B & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Array_Sort_int____75704768, targetlist);
    sub_1B640C8(&Method_BattleLogicTarget__getTargetLowHp_b__10_0__, v7);
    sub_1B640C8(&System_Comparison_int__TypeInfo, v8);
    byte_49FF02B = 1;
  }
  v9 = (System_Comparison_int__o *)sub_1B64314(System_Comparison_int__TypeInfo, targetlist, isDeadToEnableUpHate);
  System_Comparison_int____ctor(v9, (Il2CppObject *)this, Method_BattleLogicTarget__getTargetLowHp_b__10_0__, 0LL);
  System_Array__Sort_int__48264244(
    targetlist,
    (System_Comparison_T__o *)v9,
    (const MethodInfo_2E07434 *)Method_System_Array_Sort_int____75704768);
  return BattleLogicTarget__getTargetBase(this, targetlist, 0, isDeadToEnableUpHate, v10);
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
  System_Comparison_int__o *v9; // x22
  const MethodInfo *v10; // x4

  if ( (byte_49FF02D & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Array_Sort_int____75704768, targetlist);
    sub_1B640C8(&Method_BattleLogicTarget__getTargetNpGaugeHeighter_b__12_0__, v7);
    sub_1B640C8(&System_Comparison_int__TypeInfo, v8);
    byte_49FF02D = 1;
  }
  v9 = (System_Comparison_int__o *)sub_1B64314(System_Comparison_int__TypeInfo, targetlist, isDeadToEnableUpHate);
  System_Comparison_int____ctor(
    v9,
    (Il2CppObject *)this,
    Method_BattleLogicTarget__getTargetNpGaugeHeighter_b__12_0__,
    0LL);
  System_Array__Sort_int__48264244(
    targetlist,
    (System_Comparison_T__o *)v9,
    (const MethodInfo_2E07434 *)Method_System_Array_Sort_int____75704768);
  return BattleLogicTarget__getTargetBase(this, targetlist, 0, isDeadToEnableUpHate, v10);
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
  System_Comparison_int__o *v9; // x22
  const MethodInfo *v10; // x4

  if ( (byte_49FF02C & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Array_Sort_int____75704768, targetlist);
    sub_1B640C8(&Method_BattleLogicTarget__getTargetNpTurnLower_b__11_0__, v7);
    sub_1B640C8(&System_Comparison_int__TypeInfo, v8);
    byte_49FF02C = 1;
  }
  v9 = (System_Comparison_int__o *)sub_1B64314(System_Comparison_int__TypeInfo, targetlist, isDeadToEnableUpHate);
  System_Comparison_int____ctor(v9, (Il2CppObject *)this, Method_BattleLogicTarget__getTargetNpTurnLower_b__11_0__, 0LL);
  System_Array__Sort_int__48264244(
    targetlist,
    (System_Comparison_T__o *)v9,
    (const MethodInfo_2E07434 *)Method_System_Array_Sort_int____75704768);
  return BattleLogicTarget__getTargetBase(this, targetlist, 0, isDeadToEnableUpHate, v10);
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

  if ( !targetlist )
LABEL_15:
    sub_1B64324(this);
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
LABEL_16:
      sub_1B6432C(this, *(_QWORD *)&position);
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

  if ( (byte_49FF029 & 1) == 0 )
  {
    sub_1B640C8(&Method_BattleRandom_getShuffle_int___, targetlist);
    byte_49FF029 = 1;
  }
  Shuffle_int = BattleRandom__getShuffle_int_(
                  targetlist,
                  (const MethodInfo_2E2ABE8 *)Method_BattleRandom_getShuffle_int___);
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
  __int64 v23; // x1
  __int64 v24; // x8
  System_Int32_array *v25; // x23
  unsigned __int64 v26; // x26
  int32_t *v27; // x28
  bool v28; // w24
  BattleServantData_o *ServantData; // x25
  const MethodInfo *v30; // x3
  const MethodInfo *v31; // x2
  struct System_Int32_array *items; // x8
  _QWORD *v33; // x9
  __int64 size; // x10
  struct BattleData_o *v35; // x8

  if ( (byte_49FF032 & 1) == 0 )
  {
    sub_1B640C8(&BattleBuffData_CheckIndividualitiesData_TypeInfo, list);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__ToArray__, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v15);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v16);
    byte_49FF032 = 1;
  }
  v17 = (System_Collections_Generic_List_int__o *)sub_1B64314(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    list,
                                                    atkSvt);
  System_Collections_Generic_List_int____ctor(
    v17,
    (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( atkSvt )
  {
    v20 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B64314(
                                                         BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                         v18,
                                                         v19);
    BattleBuffData_CheckIndividualitiesData___ctor(v20, atkSvt, 0LL, 0LL, 0LL, 0LL, 0LL);
    if ( !v20 )
      goto LABEL_30;
    selfConcatSvtIndividualities_k__BackingField = v20->fields._selfConcatSvtIndividualities_k__BackingField;
  }
  else
  {
    selfConcatSvtIndividualities_k__BackingField = 0LL;
  }
  data = CommonFunction__JoinIndiv(selfConcatSvtIndividualities_k__BackingField, addIndiv, 0LL);
  if ( !list )
    goto LABEL_30;
  v24 = *(_QWORD *)&list->max_length;
  if ( (int)v24 >= 1 )
  {
    v25 = data;
    v26 = 0LL;
    v27 = &list->m_Items[1];
    v28 = isResurrectable;
    do
    {
      if ( v26 >= (unsigned int)v24 )
LABEL_31:
        sub_1B6432C(data, v23);
      data = (System_Int32_array *)this->fields.data;
      if ( !data )
        goto LABEL_30;
      ServantData = BattleData__getServantData((BattleData_o *)data, v27[v26], 0LL);
      data = (System_Int32_array *)BattleLogicTarget__IsTargetAlive(this, ServantData, v28, v30);
      if ( ((unsigned __int8)data & 1) != 0
        || (data = (System_Int32_array *)BattleLogicTarget__IsTargetGuts(this, ServantData, v31),
            ((unsigned __int8)data & 1) != 0) )
      {
        if ( !ServantData )
          goto LABEL_30;
      }
      else
      {
        v35 = this->fields.data;
        if ( !v35 || !ServantData )
          goto LABEL_30;
        data = (System_Int32_array *)BattleServantData__checkDeadTurn(ServantData, v35->fields.typeTurn, 0LL);
        if ( ((unsigned __int8)data & 1) == 0 || !isDeadToEnableUpHate )
          goto LABEL_27;
      }
      data = (System_Int32_array *)BattleServantData__isUpHate(ServantData, v25, 0LL);
      if ( ((unsigned __int8)data & 1) != 0 )
      {
        if ( v26 >= list->max_length )
          goto LABEL_31;
        if ( !v17 )
          goto LABEL_30;
        v23 = (unsigned int)v27[v26];
        items = v17->fields._items;
        v33 = Method_System_Collections_Generic_List_int__Add__;
        ++v17->fields._version;
        if ( !items )
          goto LABEL_30;
        size = v17->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v17,
            v23,
            *(const MethodInfo_348FEDC **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
        }
        else
        {
          v17->fields._size = size + 1;
          items->m_Items[size + 1] = v23;
        }
      }
LABEL_27:
      LODWORD(v24) = list->max_length;
    }
    while ( (__int64)++v26 < (int)v24 );
  }
  if ( !v17 )
LABEL_30:
    sub_1B64324(data);
  return System_Collections_Generic_List_int___ToArray(
           v17,
           (const MethodInfo_3491A34 *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_Int32_array *__fastcall BattleLogicTarget__narrowDownIndividuality(
        BattleLogicTarget_o *this,
        System_Int32_array *list,
        System_Func_int____bool__o *funcContainsIndividuality,
        bool isResurrectable,
        bool isCheckBuff,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_Collections_Generic_List_int__o *v15; // x23
  BattleData_o *data; // x0
  __int64 v17; // x1
  __int64 v18; // x8
  unsigned __int64 v19; // x27
  int32_t *v20; // x29
  bool v21; // w24
  BattleServantData_o *ServantData; // x25
  const MethodInfo *v23; // x3
  const MethodInfo *v24; // x2
  System_Collections_Generic_List_int__o *v25; // x26
  System_Collections_Generic_IEnumerable_T__o *BuffIndividualities; // x0
  struct System_Int32_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10

  if ( (byte_49FF031 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_int__AddRange__, list);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__ToArray__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v13);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v14);
    byte_49FF031 = 1;
  }
  v15 = (System_Collections_Generic_List_int__o *)sub_1B64314(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    list,
                                                    funcContainsIndividuality);
  System_Collections_Generic_List_int____ctor(
    v15,
    (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !list )
    goto LABEL_25;
  v18 = *(_QWORD *)&list->max_length;
  if ( (int)v18 >= 1 )
  {
    v19 = 0LL;
    v20 = &list->m_Items[1];
    v21 = isResurrectable;
    do
    {
      if ( v19 >= (unsigned int)v18 )
LABEL_26:
        sub_1B6432C(data, v17);
      data = this->fields.data;
      if ( !data )
        goto LABEL_25;
      ServantData = BattleData__getServantData(data, v20[v19], 0LL);
      if ( BattleLogicTarget__IsTargetAlive(this, ServantData, v21, v23)
        || (data = (BattleData_o *)BattleLogicTarget__IsTargetGuts(this, ServantData, v24),
            ((unsigned __int8)data & 1) != 0) )
      {
        v25 = (System_Collections_Generic_List_int__o *)sub_1B64314(
                                                          System_Collections_Generic_List_int__TypeInfo,
                                                          v17,
                                                          v24);
        System_Collections_Generic_List_int____ctor(
          v25,
          (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
        if ( !ServantData )
          goto LABEL_25;
        data = (BattleData_o *)BattleServantData__getIndividualities(ServantData, 0LL, 0LL);
        if ( !v25 )
          goto LABEL_25;
        System_Collections_Generic_List_int___AddRange(
          v25,
          (System_Collections_Generic_IEnumerable_T__o *)data,
          (const MethodInfo_34900E8 *)Method_System_Collections_Generic_List_int__AddRange__);
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
            (const MethodInfo_34900E8 *)Method_System_Collections_Generic_List_int__AddRange__);
        }
        data = (BattleData_o *)System_Collections_Generic_List_int___ToArray(
                                 v25,
                                 (const MethodInfo_3491A34 *)Method_System_Collections_Generic_List_int__ToArray__);
        if ( !funcContainsIndividuality )
          goto LABEL_25;
        data = (BattleData_o *)((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, BattleData_o *, _QWORD))funcContainsIndividuality->fields.m_target)(
                                 funcContainsIndividuality->fields.original_method_info,
                                 data,
                                 *(_QWORD *)&funcContainsIndividuality->fields.extra_arg);
        if ( ((unsigned __int8)data & 1) != 0 )
        {
          if ( v19 >= list->max_length )
            goto LABEL_26;
          if ( !v15 )
            goto LABEL_25;
          v17 = (unsigned int)v20[v19];
          items = v15->fields._items;
          v28 = Method_System_Collections_Generic_List_int__Add__;
          ++v15->fields._version;
          if ( !items )
            goto LABEL_25;
          size = v15->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v15,
              v17,
              *(const MethodInfo_348FEDC **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
          }
          else
          {
            v15->fields._size = size + 1;
            items->m_Items[size + 1] = v17;
          }
        }
      }
      LODWORD(v18) = list->max_length;
    }
    while ( (__int64)++v19 < (int)v18 );
  }
  if ( !v15 )
LABEL_25:
    sub_1B64324(data);
  return System_Collections_Generic_List_int___ToArray(
           v15,
           (const MethodInfo_3491A34 *)Method_System_Collections_Generic_List_int__ToArray__);
}


void __fastcall BattleLogicTarget__setInit(BattleLogicTarget_o *this, BattleData_o *data, const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields.data = data;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)data, (int32_t)method, v3);
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
  __int64 v9; // x1
  __int64 v10; // x8
  unsigned __int64 v11; // x23
  int32_t *v12; // x24
  BattleServantData_o *v13; // x22
  struct System_Int32_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10

  FieldEnemyServantIDList = targetIdList;
  if ( (byte_49FF034 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, targetIdList);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v5);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v6);
    byte_49FF034 = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_26;
  if ( !data->fields.isMultiTargetBattle )
  {
    if ( !FieldEnemyServantIDList )
      FieldEnemyServantIDList = BattleData__getFieldEnemyServantIDList(data, 1, 0LL);
    v8 = (System_Collections_Generic_List_int__o *)sub_1B64314(
                                                     System_Collections_Generic_List_int__TypeInfo,
                                                     targetIdList,
                                                     method);
    System_Collections_Generic_List_int____ctor(
      v8,
      (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
    data = this->fields.data;
    if ( !data )
      goto LABEL_26;
    data = (BattleData_o *)BattleData__getFieldEnemyServantIDList(data, 1, 0LL);
    if ( !FieldEnemyServantIDList )
      goto LABEL_26;
    v10 = *(_QWORD *)&FieldEnemyServantIDList->max_length;
    data = this->fields.data;
    if ( (int)v10 >= 1 )
    {
      v11 = 0LL;
      v12 = &FieldEnemyServantIDList->m_Items[1];
      while ( 1 )
      {
        if ( v11 >= (unsigned int)v10 )
LABEL_27:
          sub_1B6432C(data, v9);
        if ( !data )
          break;
        data = (BattleData_o *)BattleData__getEnemyServantData(data, v12[v11], 0LL);
        if ( !data )
          break;
        v13 = (BattleServantData_o *)data;
        if ( BattleServantData__isAlive((BattleServantData_o *)data, 0, 0LL) || BattleServantData__isGuts(v13, 0LL) )
        {
          data = (BattleData_o *)BattleServantData__isUpHate(v13, 0LL, 0LL);
          if ( ((unsigned __int8)data & 1) != 0 )
          {
            if ( v11 >= FieldEnemyServantIDList->max_length )
              goto LABEL_27;
            if ( !v8 )
              break;
            v9 = (unsigned int)v12[v11];
            items = v8->fields._items;
            v15 = Method_System_Collections_Generic_List_int__Add__;
            ++v8->fields._version;
            if ( !items )
              break;
            size = v8->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v8,
                v9,
                *(const MethodInfo_348FEDC **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
            }
            else
            {
              v8->fields._size = size + 1;
              items->m_Items[size + 1] = v9;
            }
          }
        }
        LODWORD(v10) = FieldEnemyServantIDList->max_length;
        data = this->fields.data;
        if ( (__int64)++v11 >= (int)v10 )
          goto LABEL_24;
      }
LABEL_26:
      sub_1B64324(data);
    }
LABEL_24:
    if ( !data )
      goto LABEL_26;
    BattleData__setTargetLock(data, v8, 0LL);
  }
}


void __fastcall BattleLogicTarget__updateGlobalTarget(BattleLogicTarget_o *this, const MethodInfo *method)
{
  BattleData_o *data; // x0
  __int64 v4; // x1
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  BattleData_o *v6; // x20
  unsigned __int64 v7; // x21
  struct BattleData_o *v8; // x8

  data = this->fields.data;
  if ( !data )
    goto LABEL_16;
  data = (BattleData_o *)BattleData__getFieldEnemyServantIDList(data, 1, 0LL);
  if ( !data )
    goto LABEL_16;
  m_CancellationTokenSource = data->fields.m_CancellationTokenSource;
  v6 = data;
  if ( m_CancellationTokenSource && (int)m_CancellationTokenSource >= 1 )
  {
    v7 = 0LL;
    while ( 1 )
    {
      if ( v7 >= (unsigned int)m_CancellationTokenSource )
        goto LABEL_17;
      data = this->fields.data;
      if ( !data )
        goto LABEL_16;
      data = (BattleData_o *)BattleData__getEnemyServantData(data, *((_DWORD *)&v6->fields.rootfsm + v7), 0LL);
      if ( !data )
        goto LABEL_16;
      data = (BattleData_o *)BattleServantData__isDeadWaitNotAlive((BattleServantData_o *)data, 0LL);
      if ( ((unsigned __int8)data & 1) == 0 )
        break;
      LODWORD(m_CancellationTokenSource) = v6->fields.m_CancellationTokenSource;
      if ( (__int64)++v7 >= (int)m_CancellationTokenSource )
        return;
    }
    if ( (unsigned int)v7 >= LODWORD(v6->fields.m_CancellationTokenSource) )
LABEL_17:
      sub_1B6432C(data, v4);
    v8 = this->fields.data;
    if ( v8 )
    {
      v8->fields.globaltargetId = *((_DWORD *)&v6->fields.rootfsm + v7);
      return;
    }
LABEL_16:
    sub_1B64324(data);
  }
}


void __fastcall BattleLogicTarget___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FF035 & 1) == 0 )
  {
    sub_1B640C8(&BattleLogicTarget___c_TypeInfo, v1);
    byte_49FF035 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(BattleLogicTarget___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  BattleLogicTarget___c_TypeInfo->static_fields->__9 = (struct BattleLogicTarget___c_o *)v3;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)BattleLogicTarget___c_TypeInfo->static_fields, (int32_t)v3, v4, v5);
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
    sub_1B64324(this);
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
  if ( (byte_49FF036 & 1) == 0 )
  {
    this = (BattleLogicTarget___c__DisplayClass14_0_o *)sub_1B640C8(
                                                          &Method_System_Collections_Generic_Dictionary_int__int__set_Item__,
                                                          *(_QWORD *)&x);
    byte_49FF036 = 1;
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
          (const MethodInfo_311AEA0 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__),
        (this = (BattleLogicTarget___c__DisplayClass14_0_o *)v6->fields.indNum) == 0LL) )
  {
LABEL_12:
    sub_1B64324(this);
  }
  System_Collections_Generic_Dictionary_int__int___set_Item(
    (System_Collections_Generic_Dictionary_int__int__o *)this,
    y,
    v12,
    (const MethodInfo_311AEA0 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
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
    sub_1B64324(this);
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