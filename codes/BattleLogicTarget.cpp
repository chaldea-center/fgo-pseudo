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
  if ( (byte_4A5DDEB & 1) == 0 )
  {
    this = (BattleLogicTarget_o *)sub_1B885B0(&Method_BasicHelper_ContainsSelfNotNull_int___);
    byte_4A5DDEB = 1;
  }
  if ( !svtData )
    sub_1B8880C(this, svtData);
  return !BasicHelper__ContainsSelfNotNull_int_(
            (System_Collections_Generic_HashSet_T__o *)v6->fields.tempDeadSvtHash,
            svtData->fields.uniqueId,
            (const MethodInfo_2E6B250 *)Method_BasicHelper_ContainsSelfNotNull_int___)
      && BattleServantData__isAlive(svtData, isResurrectable, 0LL);
}


bool __fastcall BattleLogicTarget__IsTargetGuts(
        BattleLogicTarget_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  BattleLogicTarget_o *v4; // x20

  v4 = this;
  if ( (byte_4A5DDEC & 1) == 0 )
  {
    this = (BattleLogicTarget_o *)sub_1B885B0(&Method_BasicHelper_ContainsSelfNotNull_int___);
    byte_4A5DDEC = 1;
  }
  if ( !svtData )
    sub_1B8880C(this, svtData);
  return !svtData->fields.isDeadAnime
      && BasicHelper__ContainsSelfNotNull_int_(
           (System_Collections_Generic_HashSet_T__o *)v4->fields.tempDeadSvtHash,
           svtData->fields.uniqueId,
           (const MethodInfo_2E6B250 *)Method_BasicHelper_ContainsSelfNotNull_int___)
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
    sub_1B8880C(data, *(_QWORD *)&a);
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
    sub_1B8880C(data, *(_QWORD *)&x);
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
    sub_1B8880C(data, *(_QWORD *)&x);
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
    sub_1B8880C(data, *(_QWORD *)&x);
  }
  return *(&data->fields.enemyMasterCommandSpellUseCnt + 1) - *(&v8->fields.enemyMasterCommandSpellUseCnt + 1);
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
    sub_1B8880C(data, *(_QWORD *)&x);
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


System_Int32_array *__fastcall BattleLogicTarget__deathSvtExclusion(
        BattleLogicTarget_o *this,
        System_Int32_array *targetlist,
        bool isResurrectable,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v7; // x21
  BattleData_o *data; // x0
  __int64 uniqueId; // x1
  __int64 v10; // x8
  unsigned __int64 v11; // x24
  bool v12; // w22
  const MethodInfo *v13; // x3
  BattleServantData_o *v14; // x23
  const MethodInfo *v15; // x2
  struct System_Int32_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  struct BattleData_o *v19; // x8

  if ( (byte_4A5DDED & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    byte_4A5DDED = 1;
  }
  v7 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v7,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !targetlist )
    goto LABEL_22;
  v10 = *(_QWORD *)&targetlist->max_length;
  if ( (int)v10 >= 1 )
  {
    v11 = 0LL;
    v12 = isResurrectable;
    while ( 1 )
    {
      if ( v11 >= (unsigned int)v10 )
        sub_1B88814(data, uniqueId);
      data = this->fields.data;
      if ( !data )
        break;
      data = (BattleData_o *)BattleData__getServantData(data, targetlist->m_Items[v11 + 1], 0LL);
      if ( data )
      {
        v14 = (BattleServantData_o *)data;
        data = (BattleData_o *)BattleLogicTarget__IsTargetAlive(this, (BattleServantData_o *)data, v12, v13);
        if ( ((unsigned __int8)data & 1) != 0 )
          goto LABEL_26;
        data = (BattleData_o *)BattleLogicTarget__IsTargetGuts(this, v14, v15);
        if ( ((unsigned __int8)data & 1) != 0 )
        {
          v19 = this->fields.data;
          if ( !v19 )
            break;
          data = (BattleData_o *)BattleServantData__checkDeadTurn(v14, v19->fields.typeTurn, 0LL);
          if ( ((unsigned __int8)data & 1) == 0 )
          {
LABEL_26:
            if ( !v7 )
              break;
            uniqueId = (unsigned int)v14->fields.uniqueId;
            items = v7->fields._items;
            v17 = Method_System_Collections_Generic_List_int__Add__;
            ++v7->fields._version;
            if ( !items )
              break;
            size = v7->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v7,
                uniqueId,
                *(const MethodInfo_34E0810 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
            }
            else
            {
              v7->fields._size = size + 1;
              items->m_Items[size + 1] = uniqueId;
            }
          }
        }
      }
      LODWORD(v10) = targetlist->max_length;
      if ( (__int64)++v11 >= (int)v10 )
        goto LABEL_20;
    }
LABEL_22:
    sub_1B8880C(data, uniqueId);
  }
LABEL_20:
  if ( !v7 )
    goto LABEL_22;
  return System_Collections_Generic_List_int___ToArray(
           v7,
           (const MethodInfo_34E22C8 *)Method_System_Collections_Generic_List_int__ToArray__);
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
    sub_1B8880C(data, *(_QWORD *)&uniqueId);
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
    sub_1B8880C(data, *(_QWORD *)&actId);
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
  int32_t v12; // w2
  int32_t v13; // w3
  int32_t v14; // w2
  int32_t v15; // w3
  System_Comparison_int__o *v16; // x22
  const MethodInfo *v17; // x4

  if ( (byte_4A5DDF4 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Array_Sort_int____76084160);
    sub_1B885B0(&System_Comparison_int__TypeInfo);
    sub_1B885B0(&Method_BattleLogicTarget___c__DisplayClass15_0__getTargetActiveBuff_b__0__);
    sub_1B885B0(&BattleLogicTarget___c__DisplayClass15_0_TypeInfo);
    byte_4A5DDF4 = 1;
  }
  v9 = sub_1B887FC(BattleLogicTarget___c__DisplayClass15_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    sub_1B8880C(v10, v11);
  *(_QWORD *)(v9 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 16), (int32_t)this, v12, v13);
  *(_QWORD *)(v9 + 24) = ids;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 24), (int32_t)ids, v14, v15);
  v16 = (System_Comparison_int__o *)sub_1B887FC(System_Comparison_int__TypeInfo);
  System_Comparison_int____ctor(
    v16,
    (Il2CppObject *)v9,
    Method_BattleLogicTarget___c__DisplayClass15_0__getTargetActiveBuff_b__0__,
    0LL);
  System_Array__Sort_int__48551588(
    targetlist,
    (System_Comparison_T__o *)v16,
    (const MethodInfo_2E4D6A4 *)Method_System_Array_Sort_int____76084160);
  return BattleLogicTarget__getTargetBase(this, targetlist, 0, isDeadToEnableUpHate, v17);
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
  int32_t v14; // w2
  int32_t v15; // w3
  int32_t v16; // w2
  int32_t v17; // w3
  const MethodInfo *v18; // x3
  System_Collections_Generic_Dictionary_int__int__o *v19; // x23
  System_Collections_Generic_Dictionary_int__int__o **v20; // x22
  int32_t v21; // w2
  int32_t v22; // w3
  System_Comparison_int__o *v23; // x23
  const MethodInfo *v24; // x4
  int32_t Item; // w23
  System_Collections_Generic_List_int__o *v26; // x21
  __int64 v27; // x1
  int32_t currentKey; // w24
  __int64 v29; // x0
  __int64 v30; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10
  System_Int32_array *v34; // x0
  const MethodInfo *v35; // x4
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o v37; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o v38; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4A5DDF3 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Array_Sort_int____76084160);
    sub_1B885B0(&System_Comparison_int__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__int__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__int__get_Keys__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__int__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__int__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__int__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_KeyCollection_int__int__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1B885B0(&Method_BattleLogicTarget___c__DisplayClass14_0__getTargetActiveIndividualities_b__0__);
    sub_1B885B0(&BattleLogicTarget___c__DisplayClass14_0_TypeInfo);
    byte_4A5DDF3 = 1;
  }
  memset(&v38, 0, sizeof(v38));
  v11 = sub_1B887FC(BattleLogicTarget___c__DisplayClass14_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    goto LABEL_30;
  *(_QWORD *)(v11 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v11 + 16), (int32_t)this, v14, v15);
  *(_QWORD *)(v11 + 24) = indv;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v11 + 24), (int32_t)indv, v16, v17);
  if ( aiActEnt && !AiActEntity__IsIncludeDeathSvt(aiActEnt, 0LL) )
    targetlist = BattleLogicTarget__deathSvtExclusion(this, targetlist, 0, v18);
  v19 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1B887FC(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v19,
    (const MethodInfo_31644C4 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  *(_QWORD *)(v11 + 32) = v19;
  v20 = (System_Collections_Generic_Dictionary_int__int__o **)(v11 + 32);
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v11 + 32), (int32_t)v19, v21, v22);
  v23 = (System_Comparison_int__o *)sub_1B887FC(System_Comparison_int__TypeInfo);
  System_Comparison_int____ctor(
    v23,
    (Il2CppObject *)v11,
    Method_BattleLogicTarget___c__DisplayClass14_0__getTargetActiveIndividualities_b__0__,
    0LL);
  System_Array__Sort_int__48551588(
    targetlist,
    (System_Comparison_T__o *)v23,
    (const MethodInfo_2E4D6A4 *)Method_System_Array_Sort_int____76084160);
  Count = *(System_Collections_Generic_Dictionary_int__int__o **)(v11 + 32);
  if ( !Count )
    goto LABEL_30;
  Count = (System_Collections_Generic_Dictionary_int__int__o *)System_Collections_Generic_Dictionary_int__int___get_Count(
                                                                 Count,
                                                                 (const MethodInfo_3164B3C *)Method_System_Collections_Generic_Dictionary_int__int__get_Count__);
  if ( (int)Count >= 1 )
  {
    if ( targetlist )
    {
      if ( !targetlist->max_length )
        sub_1B88814(Count, v13);
      Count = *v20;
      if ( *v20 )
      {
        Item = System_Collections_Generic_Dictionary_int__int___get_Item(
                 Count,
                 targetlist->m_Items[1],
                 (const MethodInfo_3164DEC *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
        v26 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
        System_Collections_Generic_List_int____ctor(
          v26,
          (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
        Count = *v20;
        if ( *v20 )
        {
          Count = (System_Collections_Generic_Dictionary_int__int__o *)System_Collections_Generic_Dictionary_int__int___get_Keys(
                                                                         Count,
                                                                         (const MethodInfo_3164B4C *)Method_System_Collections_Generic_Dictionary_int__int__get_Keys__);
          if ( Count )
          {
            System_Collections_Generic_Dictionary_KeyCollection_int__int___GetEnumerator(
              &v37,
              (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)Count,
              (const MethodInfo_3418F58 *)Method_System_Collections_Generic_Dictionary_KeyCollection_int__int__GetEnumerator__);
            v38 = v37;
            while ( System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__int___MoveNext(
                      &v38,
                      (const MethodInfo_32B5FD0 *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__int__MoveNext__) )
            {
              if ( !*v20 )
                sub_1B8880C(0LL, v27);
              currentKey = (int32_t)v38.fields._currentKey;
              v29 = System_Collections_Generic_Dictionary_int__int___get_Item(
                      *v20,
                      (int32_t)v38.fields._currentKey,
                      (const MethodInfo_3164DEC *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
              if ( Item == (_DWORD)v29 )
              {
                if ( !v26 )
                  sub_1B8880C(v29, v30);
                items = v26->fields._items;
                v32 = Method_System_Collections_Generic_List_int__Add__;
                ++v26->fields._version;
                if ( !items )
                  sub_1B8880C(v29, v30);
                size = v26->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_int___AddWithResize(
                    v26,
                    currentKey,
                    *(const MethodInfo_34E0810 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
                }
                else
                {
                  v26->fields._size = size + 1;
                  items->m_Items[size + 1] = currentKey;
                }
              }
            }
            System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__int___Dispose(
              &v38,
              (const MethodInfo_32B5FCC *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__int__Dispose__);
            if ( v26 )
            {
              v34 = System_Collections_Generic_List_int___ToArray(
                      v26,
                      (const MethodInfo_34E22C8 *)Method_System_Collections_Generic_List_int__ToArray__);
              return BattleLogicTarget__getTargetRandom(this, v34, 0, isDeadToEnableUpHate, v35);
            }
          }
        }
      }
    }
LABEL_30:
    sub_1B8880C(Count, v13);
  }
  return BattleLogicTarget__getTargetBase(this, targetlist, 0, isDeadToEnableUpHate, v24);
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
  __int64 v17; // x28
  BattleData_o *NoTargetNoActionType; // x0
  __int64 v19; // x1
  int32_t v20; // w2
  int32_t v21; // w3
  System_Collections_ICollection_o **v22; // x25
  BattleData_o *v23; // x27
  bool v24; // w26
  BattleServantData_o *ServantData; // x0
  const MethodInfo *v26; // x6
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  System_Int32_array *v28; // x0
  const MethodInfo *v29; // x3
  const MethodInfo *v30; // x4
  System_Int32_array *Shuffle_int; // x5
  int32_t result; // w0
  __int64 v33; // x21
  __int64 *v34; // x29
  System_Func_int____bool__o *v35; // x29
  System_Func_object__bool__o *v36; // x0
  __int64 v37; // x2
  const MethodInfo *v38; // x5
  bool v39; // w3
  BattleLogicTarget_o *v40; // x0
  int32_t v41; // w1

  if ( (byte_4A5DDF5 & 1) == 0 )
  {
    sub_1B885B0(&Method_BattleRandom_getShuffle_int___);
    sub_1B885B0(&System_Func_int____bool__TypeInfo);
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&Method_BattleLogicTarget___c__DisplayClass17_0__getTargetAiAct_b__1__);
    sub_1B885B0(&BattleLogicTarget___c__DisplayClass17_0_TypeInfo);
    sub_1B885B0(&Method_BattleLogicTarget___c__DisplayClass17_1__getTargetAiAct_b__0__);
    sub_1B885B0(&BattleLogicTarget___c__DisplayClass17_1_TypeInfo);
    byte_4A5DDF5 = 1;
  }
  v17 = sub_1B887FC(BattleLogicTarget___c__DisplayClass17_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v17, 0LL);
  if ( !v17 )
    goto LABEL_41;
  *(_QWORD *)(v17 + 16) = individuality;
  v22 = (System_Collections_ICollection_o **)(v17 + 16);
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v17 + 16), (int32_t)individuality, v20, v21);
  NoTargetNoActionType = (BattleData_o *)sub_1B88658(int___TypeInfo, 0LL);
  v23 = NoTargetNoActionType;
  if ( aiActEnt )
  {
    NoTargetNoActionType = (BattleData_o *)AiActEntity__GetNoTargetNoActionType(aiActEnt, 0LL);
    v24 = (_DWORD)NoTargetNoActionType != 0;
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
                                             v26);
    v23 = NoTargetNoActionType;
    goto LABEL_10;
  }
  v24 = 0;
  if ( isCheckHate )
    goto LABEL_8;
LABEL_10:
  if ( !v23 )
    goto LABEL_41;
  m_CancellationTokenSource = v23->fields.m_CancellationTokenSource;
  if ( m_CancellationTokenSource )
    goto LABEL_12;
  v33 = sub_1B887FC(BattleLogicTarget___c__DisplayClass17_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v33, 0LL);
  if ( !aiActEnt )
    goto LABEL_21;
  if ( !v33 )
    goto LABEL_41;
  if ( AiActEntity__TryGetMultiIndividuality(aiActEnt, (System_Int32_array_array **)(v33 + 16), 0LL) )
  {
    v34 = &Method_BattleLogicTarget___c__DisplayClass17_1__getTargetAiAct_b__0__;
  }
  else
  {
LABEL_21:
    if ( BasicHelper__IsNullOrEmpty(*v22, 0LL) )
    {
      v35 = 0LL;
      goto LABEL_27;
    }
    v34 = &Method_BattleLogicTarget___c__DisplayClass17_0__getTargetAiAct_b__1__;
    v33 = v17;
  }
  v36 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_int____bool__TypeInfo);
  v37 = *v34;
  v35 = (System_Func_int____bool__o *)v36;
  System_Func_object__bool____ctor(v36, (Il2CppObject *)v33, v37, 0LL);
  if ( !v35 )
    goto LABEL_27;
  NoTargetNoActionType = (BattleData_o *)BattleLogicTarget__narrowDownIndividuality(
                                           this,
                                           targetlist,
                                           v35,
                                           isResurrectable,
                                           target != 13,
                                           v38);
  if ( !NoTargetNoActionType )
LABEL_41:
    sub_1B8880C(NoTargetNoActionType, v19);
  v23 = NoTargetNoActionType;
LABEL_27:
  m_CancellationTokenSource = v23->fields.m_CancellationTokenSource;
  if ( v24 && v35 != 0LL && m_CancellationTokenSource == 0LL )
    return -1;
LABEL_12:
  if ( m_CancellationTokenSource )
    v28 = (System_Int32_array *)v23;
  else
    v28 = targetlist;
  Shuffle_int = BattleRandom__getShuffle_int_(v28, (const MethodInfo_2E71104 *)Method_BattleRandom_getShuffle_int___);
  switch ( target )
  {
    case 2:
      return BattleLogicTarget__getTargetHighHp(this, Shuffle_int, isDeadToEnableUpHate, v29);
    case 3:
      return BattleLogicTarget__getTargetLowHp(this, Shuffle_int, isDeadToEnableUpHate, v29);
    case 10:
      return BattleLogicTarget__getTargetNpTurnLower(this, Shuffle_int, isDeadToEnableUpHate, v29);
    case 11:
      return BattleLogicTarget__getTargetNpGaugeHeighter(this, Shuffle_int, isDeadToEnableUpHate, v29);
    case 12:
      return BattleLogicTarget__getRevenge(this, actId, Shuffle_int, isDeadToEnableUpHate, v30);
    case 13:
      return BattleLogicTarget__getTargetActiveIndividualities(
               this,
               (System_Int32_array *)*v22,
               Shuffle_int,
               aiActEnt,
               isDeadToEnableUpHate,
               (const MethodInfo *)Shuffle_int);
    case 14:
      return BattleLogicTarget__getTargetActiveBuff(
               this,
               (System_Int32_array *)*v22,
               Shuffle_int,
               isDeadToEnableUpHate,
               v30);
    case 15:
      v39 = isDeadToEnableUpHate;
      v40 = this;
      v41 = 0;
      goto LABEL_40;
    case 16:
      v39 = isDeadToEnableUpHate;
      v41 = 1;
      goto LABEL_39;
    case 17:
      v39 = isDeadToEnableUpHate;
      v41 = 2;
LABEL_39:
      v40 = this;
LABEL_40:
      result = BattleLogicTarget__getTargetPosition(v40, v41, Shuffle_int, v39, v24, (const MethodInfo *)Shuffle_int);
      break;
    default:
      result = BattleLogicTarget__getTargetBase(this, Shuffle_int, isResurrectable, isDeadToEnableUpHate, v30);
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
    sub_1B8880C(this, targetlist);
  v5 = *(_QWORD *)&targetlist->max_length;
  if ( (int)v5 < 1 )
    return -1;
  v8 = this;
  v9 = 0LL;
  v10 = isResurrectable;
  while ( 1 )
  {
    if ( v9 >= (unsigned int)v5 )
      sub_1B88814(this, targetlist);
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
  BattleLogicTask_o *v3; // x19
  BattleData_o *data; // x0
  const MethodInfo *v6; // x2
  struct System_Int32_array *actorIdlist; // x8
  struct BattleData_o *v8; // x21
  struct System_Int32_array *v9; // x8
  int v10; // w22
  System_Int32_array *v11; // x3
  BattleData_o *v12; // x0
  struct BattleData_o *v13; // x8
  BattleServantData_o *ServantData; // x0
  BattleLogicTarget___c_c *v15; // x8
  Il2CppObject *v16; // x21
  System_Predicate_object__o *_9__20_0; // x22
  Il2CppObject *v18; // x23
  struct BattleLogicTarget___c_StaticFields *static_fields; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  Il2CppObject *v22; // x0
  BattleServantData_o *v23; // x21
  const MethodInfo *v24; // x2
  struct BattleData_o *v25; // x8
  struct System_Int32_array *v27; // x8
  int32_t v28; // w1
  const MethodInfo *v29; // x2
  struct BattleData_o *v30; // x8
  struct BattleData_o *v31; // x8
  System_Int32_array *v32; // x21
  const MethodInfo *v33; // x4
  System_Comparison_int__o *v34; // x22
  struct BattleData_o *v35; // x22
  const MethodInfo *v36; // x2
  const MethodInfo *v37; // x2
  struct System_Int32_array *v38; // x8
  struct BattleData_o *v39; // x21
  int32_t v40; // w22
  System_Int32_array *v41; // x3
  struct BattleData_o *v42; // x8
  struct BattleData_o *v43; // x8

  v3 = task;
  if ( (byte_4A5DDF8 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Array_Sort_int____76084160);
    sub_1B885B0(&Method_BasicHelper_TakeIf_BattleServantData___);
    sub_1B885B0(&Method_BattleLogicTarget__getTargetBattleServantData_b__20_1__);
    sub_1B885B0(&System_Comparison_int__TypeInfo);
    sub_1B885B0(&System_Predicate_BattleServantData__TypeInfo);
    sub_1B885B0(&Method_BattleLogicTarget___c__getTargetBattleServantData_b__20_0__);
    sub_1B885B0(&BattleLogicTarget___c_TypeInfo);
    byte_4A5DDF8 = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_84;
  if ( BattleData__ExistsFieldEnemyIntervalBuff(data, 38, 0LL) )
  {
    data = this->fields.data;
    if ( !data )
      goto LABEL_84;
    BattleData__ResetFieldEnemyUseBuff(data, 38, 0, 0LL);
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_84;
  data = (BattleData_o *)BattleData__isTargetLock(data, 0LL);
  if ( ((unsigned __int8)data & 1) == 0 )
  {
    BattleLogicTarget__updateEnemyTarget(this, 0LL, v6);
    goto LABEL_32;
  }
  if ( !v3 )
    goto LABEL_84;
  if ( v3->fields.actiontype == 4 )
  {
    data = (BattleData_o *)BattleLogicTask__IsTargetTypeEnemy(v3, (const MethodInfo *)task);
    if ( ((unsigned __int8)data & 1) == 0 )
      goto LABEL_29;
    actorIdlist = v3->fields.actorIdlist;
    v8 = this->fields.data;
    if ( actorIdlist )
    {
      if ( !actorIdlist->max_length )
        goto LABEL_85;
      task = (BattleLogicTask_o *)(unsigned int)actorIdlist->m_Items[1];
      if ( !v8 )
        goto LABEL_84;
    }
    else
    {
      task = (BattleLogicTask_o *)0xFFFFFFFFLL;
      if ( !v8 )
        goto LABEL_84;
    }
    v12 = this->fields.data;
    v11 = 0LL;
  }
  else
  {
    v9 = v3->fields.actorIdlist;
    v8 = this->fields.data;
    if ( v9 )
    {
      if ( !v9->max_length )
        goto LABEL_85;
      v10 = v9->m_Items[1];
    }
    else
    {
      v10 = -1;
    }
    data = (BattleData_o *)v3->fields.skillInfo;
    if ( data )
    {
      data = (BattleData_o *)BattleSkillInfoData__GetAddIndiv((BattleSkillInfoData_o *)data, 0LL);
      v11 = (System_Int32_array *)data;
      if ( !v8 )
        goto LABEL_84;
    }
    else
    {
      v11 = 0LL;
      if ( !v8 )
        goto LABEL_84;
    }
    v12 = v8;
    LODWORD(task) = v10;
  }
  data = (BattleData_o *)BattleData__getTargetLock(v12, (int32_t)task, 0, v11, 0LL);
  v8->fields.globaltargetId = (int)data;
LABEL_29:
  v13 = this->fields.data;
  if ( !v13 )
    goto LABEL_84;
  data = (BattleData_o *)v13->fields.perf;
  if ( !data )
    goto LABEL_84;
  BattlePerformance__reViewTargetMarks((BattlePerformance_o *)data, 0LL);
LABEL_32:
  data = this->fields.data;
  if ( !data )
    goto LABEL_84;
  ServantData = BattleData__getServantData(data, data->fields.globaltargetId, 0LL);
  v15 = BattleLogicTarget___c_TypeInfo;
  v16 = (Il2CppObject *)ServantData;
  if ( !BattleLogicTarget___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicTarget___c_TypeInfo);
    v15 = BattleLogicTarget___c_TypeInfo;
  }
  _9__20_0 = (System_Predicate_object__o *)v15->static_fields->__9__20_0;
  if ( !_9__20_0 )
  {
    if ( !v15->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v15);
      v15 = BattleLogicTarget___c_TypeInfo;
    }
    v18 = (Il2CppObject *)v15->static_fields->__9;
    _9__20_0 = (System_Predicate_object__o *)sub_1B887FC(System_Predicate_BattleServantData__TypeInfo);
    System_Predicate_object____ctor(
      _9__20_0,
      v18,
      Method_BattleLogicTarget___c__getTargetBattleServantData_b__20_0__,
      0LL);
    static_fields = BattleLogicTarget___c_TypeInfo->static_fields;
    static_fields->__9__20_0 = (struct System_Predicate_BattleServantData__o *)_9__20_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__20_0, (int32_t)_9__20_0, v20, v21);
  }
  v22 = BasicHelper__TakeIf_object_(
          v16,
          (System_Predicate_T__o *)_9__20_0,
          (const MethodInfo_2E6FCCC *)Method_BasicHelper_TakeIf_BattleServantData___);
  if ( v22 )
  {
    v23 = (BattleServantData_o *)v22;
    data = (BattleData_o *)BattleServantData__isAlive((BattleServantData_o *)v22, 0, 0LL);
    if ( ((unsigned __int8)data & 1) != 0 )
    {
      v25 = this->fields.data;
      if ( v25 && v3 )
        goto LABEL_43;
      goto LABEL_84;
    }
    data = (BattleData_o *)BattleServantData__isAlive(v23, 0, 0LL);
    if ( ((unsigned __int8)data & 1) == 0 )
    {
      if ( !v3 )
        goto LABEL_84;
      v27 = v3->fields.actorIdlist;
      if ( v27 )
      {
        if ( !v27->max_length )
          goto LABEL_85;
        v28 = v27->m_Items[1];
      }
      else
      {
        v28 = -1;
      }
      data = (BattleData_o *)BattleServantData__checkOverKill(v23, v28, 0LL);
      if ( ((unsigned __int8)data & 1) != 0 )
      {
        v25 = this->fields.data;
        if ( v25 )
        {
LABEL_43:
          BattleLogicTask__setTarget(v3, v25->fields.globaltargetId, v24);
          return v23;
        }
        goto LABEL_84;
      }
    }
    if ( !BattleServantData__isAlive(v23, 0, 0LL) )
    {
      data = (BattleData_o *)BattleServantData__isGuts(v23, 0LL);
      if ( ((unsigned __int8)data & 1) != 0 )
      {
        v30 = this->fields.data;
        if ( v30 && v3 )
        {
          BattleLogicTask__setTarget(v3, v30->fields.globaltargetId, v29);
          v23->fields.overkillTargetId = -1;
          return v23;
        }
        goto LABEL_84;
      }
    }
    v23->fields.overkillTargetId = -1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_84;
  data = (BattleData_o *)BattleData__getFieldEnemyServantIDList(data, 1, 0LL);
  v31 = this->fields.data;
  if ( !v31 )
    goto LABEL_84;
  v32 = (System_Int32_array *)data;
  data = (BattleData_o *)v31->fields.quest_ent;
  if ( !data )
    goto LABEL_84;
  if ( QuestEntity__HasFlag((QuestEntity_o *)data, 0x40000000000000LL, 0LL) )
  {
    v34 = (System_Comparison_int__o *)sub_1B887FC(System_Comparison_int__TypeInfo);
    System_Comparison_int____ctor(
      v34,
      (Il2CppObject *)this,
      Method_BattleLogicTarget__getTargetBattleServantData_b__20_1__,
      0LL);
    System_Array__Sort_int__48551588(
      v32,
      (System_Comparison_T__o *)v34,
      (const MethodInfo_2E4D6A4 *)Method_System_Array_Sort_int____76084160);
  }
  v35 = this->fields.data;
  data = (BattleData_o *)BattleLogicTarget__getTargetBase(this, v32, 0, 1, v33);
  if ( !v35 )
    goto LABEL_84;
  v35->fields.globaltargetId = (int)data;
  BattleLogicTarget__updateEnemyTarget(this, v32, v36);
  data = this->fields.data;
  if ( !data )
    goto LABEL_84;
  data = (BattleData_o *)BattleData__isTargetLock(data, 0LL);
  if ( ((unsigned __int8)data & 1) == 0 )
    goto LABEL_80;
  if ( !v3 )
    goto LABEL_84;
  v38 = v3->fields.actorIdlist;
  v39 = this->fields.data;
  if ( !v38 )
  {
    v40 = -1;
    goto LABEL_73;
  }
  if ( !v38->max_length )
LABEL_85:
    sub_1B88814(data, task);
  v40 = v38->m_Items[1];
LABEL_73:
  data = (BattleData_o *)v3->fields.skillInfo;
  if ( data )
  {
    data = (BattleData_o *)BattleSkillInfoData__GetAddIndiv((BattleSkillInfoData_o *)data, 0LL);
    v41 = (System_Int32_array *)data;
    if ( !v39 )
      goto LABEL_84;
  }
  else
  {
    v41 = 0LL;
    if ( !v39 )
      goto LABEL_84;
  }
  data = (BattleData_o *)BattleData__getTargetLock(v39, v40, 0, v41, 0LL);
  v39->fields.globaltargetId = (int)data;
  v42 = this->fields.data;
  if ( !v42 || (data = (BattleData_o *)v42->fields.perf) == 0LL )
LABEL_84:
    sub_1B8880C(data, task);
  BattlePerformance__reViewTargetMarks((BattlePerformance_o *)data, 0LL);
LABEL_80:
  v43 = this->fields.data;
  if ( !v43 )
    goto LABEL_84;
  if ( !v3 )
    goto LABEL_84;
  BattleLogicTask__setTarget(v3, v43->fields.globaltargetId, v37);
  data = this->fields.data;
  if ( !data )
    goto LABEL_84;
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

  if ( (byte_4A5DDEF & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Array_Sort_int____76084160);
    sub_1B885B0(&Method_BattleLogicTarget__getTargetHighHp_b__9_0__);
    sub_1B885B0(&System_Comparison_int__TypeInfo);
    byte_4A5DDEF = 1;
  }
  v7 = (System_Comparison_int__o *)sub_1B887FC(System_Comparison_int__TypeInfo);
  System_Comparison_int____ctor(v7, (Il2CppObject *)this, Method_BattleLogicTarget__getTargetHighHp_b__9_0__, 0LL);
  System_Array__Sort_int__48551588(
    targetlist,
    (System_Comparison_T__o *)v7,
    (const MethodInfo_2E4D6A4 *)Method_System_Array_Sort_int____76084160);
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

  if ( (byte_4A5DDF0 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Array_Sort_int____76084160);
    sub_1B885B0(&Method_BattleLogicTarget__getTargetLowHp_b__10_0__);
    sub_1B885B0(&System_Comparison_int__TypeInfo);
    byte_4A5DDF0 = 1;
  }
  v7 = (System_Comparison_int__o *)sub_1B887FC(System_Comparison_int__TypeInfo);
  System_Comparison_int____ctor(v7, (Il2CppObject *)this, Method_BattleLogicTarget__getTargetLowHp_b__10_0__, 0LL);
  System_Array__Sort_int__48551588(
    targetlist,
    (System_Comparison_T__o *)v7,
    (const MethodInfo_2E4D6A4 *)Method_System_Array_Sort_int____76084160);
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

  if ( (byte_4A5DDF2 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Array_Sort_int____76084160);
    sub_1B885B0(&Method_BattleLogicTarget__getTargetNpGaugeHeighter_b__12_0__);
    sub_1B885B0(&System_Comparison_int__TypeInfo);
    byte_4A5DDF2 = 1;
  }
  v7 = (System_Comparison_int__o *)sub_1B887FC(System_Comparison_int__TypeInfo);
  System_Comparison_int____ctor(
    v7,
    (Il2CppObject *)this,
    Method_BattleLogicTarget__getTargetNpGaugeHeighter_b__12_0__,
    0LL);
  System_Array__Sort_int__48551588(
    targetlist,
    (System_Comparison_T__o *)v7,
    (const MethodInfo_2E4D6A4 *)Method_System_Array_Sort_int____76084160);
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

  if ( (byte_4A5DDF1 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Array_Sort_int____76084160);
    sub_1B885B0(&Method_BattleLogicTarget__getTargetNpTurnLower_b__11_0__);
    sub_1B885B0(&System_Comparison_int__TypeInfo);
    byte_4A5DDF1 = 1;
  }
  v7 = (System_Comparison_int__o *)sub_1B887FC(System_Comparison_int__TypeInfo);
  System_Comparison_int____ctor(v7, (Il2CppObject *)this, Method_BattleLogicTarget__getTargetNpTurnLower_b__11_0__, 0LL);
  System_Array__Sort_int__48551588(
    targetlist,
    (System_Comparison_T__o *)v7,
    (const MethodInfo_2E4D6A4 *)Method_System_Array_Sort_int____76084160);
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

  if ( !targetlist )
LABEL_15:
    sub_1B8880C(this, *(_QWORD *)&position);
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
      sub_1B88814(this, *(_QWORD *)&position);
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

  if ( (byte_4A5DDEE & 1) == 0 )
  {
    sub_1B885B0(&Method_BattleRandom_getShuffle_int___);
    byte_4A5DDEE = 1;
  }
  Shuffle_int = BattleRandom__getShuffle_int_(
                  targetlist,
                  (const MethodInfo_2E71104 *)Method_BattleRandom_getShuffle_int___);
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
  int32_t *v21; // x28
  bool v22; // w24
  BattleServantData_o *ServantData; // x25
  const MethodInfo *v24; // x3
  const MethodInfo *v25; // x2
  struct System_Int32_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  struct BattleData_o *v29; // x8

  if ( (byte_4A5DDF7 & 1) == 0 )
  {
    sub_1B885B0(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    byte_4A5DDF7 = 1;
  }
  v13 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v13,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  if ( atkSvt )
  {
    v14 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B887FC(BattleBuffData_CheckIndividualitiesData_TypeInfo);
    BattleBuffData_CheckIndividualitiesData___ctor(v14, atkSvt, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
    if ( !v14 )
      goto LABEL_30;
    selfConcatSvtIndividualities_k__BackingField = v14->fields._selfConcatSvtIndividualities_k__BackingField;
  }
  else
  {
    selfConcatSvtIndividualities_k__BackingField = 0LL;
  }
  data = CommonFunction__JoinIndiv(selfConcatSvtIndividualities_k__BackingField, addIndiv, 0LL);
  if ( !list )
    goto LABEL_30;
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
LABEL_31:
        sub_1B88814(data, v16);
      data = (System_Int32_array *)this->fields.data;
      if ( !data )
        goto LABEL_30;
      ServantData = BattleData__getServantData((BattleData_o *)data, v21[v20], 0LL);
      data = (System_Int32_array *)BattleLogicTarget__IsTargetAlive(this, ServantData, v22, v24);
      if ( ((unsigned __int8)data & 1) != 0
        || (data = (System_Int32_array *)BattleLogicTarget__IsTargetGuts(this, ServantData, v25),
            ((unsigned __int8)data & 1) != 0) )
      {
        if ( !ServantData )
          goto LABEL_30;
      }
      else
      {
        v29 = this->fields.data;
        if ( !v29 || !ServantData )
          goto LABEL_30;
        data = (System_Int32_array *)BattleServantData__checkDeadTurn(ServantData, v29->fields.typeTurn, 0LL);
        if ( ((unsigned __int8)data & 1) == 0 || !isDeadToEnableUpHate )
          goto LABEL_27;
      }
      data = (System_Int32_array *)BattleServantData__isUpHate(ServantData, v19, 0LL);
      if ( ((unsigned __int8)data & 1) != 0 )
      {
        if ( v20 >= list->max_length )
          goto LABEL_31;
        if ( !v13 )
          goto LABEL_30;
        v16 = (unsigned int)v21[v20];
        items = v13->fields._items;
        v27 = Method_System_Collections_Generic_List_int__Add__;
        ++v13->fields._version;
        if ( !items )
          goto LABEL_30;
        size = v13->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v13,
            v16,
            *(const MethodInfo_34E0810 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
        }
        else
        {
          v13->fields._size = size + 1;
          items->m_Items[size + 1] = v16;
        }
      }
LABEL_27:
      LODWORD(v18) = list->max_length;
    }
    while ( (__int64)++v20 < (int)v18 );
  }
  if ( !v13 )
LABEL_30:
    sub_1B8880C(data, v16);
  return System_Collections_Generic_List_int___ToArray(
           v13,
           (const MethodInfo_34E22C8 *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_Int32_array *__fastcall BattleLogicTarget__narrowDownIndividuality(
        BattleLogicTarget_o *this,
        System_Int32_array *list,
        System_Func_int____bool__o *funcContainsIndividuality,
        bool isResurrectable,
        bool isCheckBuff,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v11; // x23
  BattleData_o *data; // x0
  __int64 v13; // x1
  __int64 v14; // x8
  unsigned __int64 v15; // x27
  int32_t *v16; // x29
  bool v17; // w24
  BattleServantData_o *ServantData; // x25
  const MethodInfo *v19; // x3
  const MethodInfo *v20; // x2
  System_Collections_Generic_List_int__o *v21; // x26
  System_Collections_Generic_IEnumerable_T__o *BuffIndividualities; // x0
  struct System_Int32_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10

  if ( (byte_4A5DDF6 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    byte_4A5DDF6 = 1;
  }
  v11 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v11,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !list )
    goto LABEL_25;
  v14 = *(_QWORD *)&list->max_length;
  if ( (int)v14 >= 1 )
  {
    v15 = 0LL;
    v16 = &list->m_Items[1];
    v17 = isResurrectable;
    do
    {
      if ( v15 >= (unsigned int)v14 )
LABEL_26:
        sub_1B88814(data, v13);
      data = this->fields.data;
      if ( !data )
        goto LABEL_25;
      ServantData = BattleData__getServantData(data, v16[v15], 0LL);
      if ( BattleLogicTarget__IsTargetAlive(this, ServantData, v17, v19)
        || (data = (BattleData_o *)BattleLogicTarget__IsTargetGuts(this, ServantData, v20),
            ((unsigned __int8)data & 1) != 0) )
      {
        v21 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
        System_Collections_Generic_List_int____ctor(
          v21,
          (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
        if ( !ServantData )
          goto LABEL_25;
        data = (BattleData_o *)BattleServantData__getIndividualities(ServantData, 0LL, 1, 0, 0LL);
        if ( !v21 )
          goto LABEL_25;
        System_Collections_Generic_List_int___AddRange(
          v21,
          (System_Collections_Generic_IEnumerable_T__o *)data,
          (const MethodInfo_34E0A1C *)Method_System_Collections_Generic_List_int__AddRange__);
        if ( isCheckBuff )
        {
          BuffIndividualities = (System_Collections_Generic_IEnumerable_T__o *)BattleServantData__getBuffIndividualities(
                                                                                 ServantData,
                                                                                 0,
                                                                                 0,
                                                                                 0,
                                                                                 0LL,
                                                                                 0LL);
          System_Collections_Generic_List_int___AddRange(
            v21,
            BuffIndividualities,
            (const MethodInfo_34E0A1C *)Method_System_Collections_Generic_List_int__AddRange__);
        }
        data = (BattleData_o *)System_Collections_Generic_List_int___ToArray(
                                 v21,
                                 (const MethodInfo_34E22C8 *)Method_System_Collections_Generic_List_int__ToArray__);
        if ( !funcContainsIndividuality )
          goto LABEL_25;
        data = (BattleData_o *)((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, BattleData_o *, _QWORD))funcContainsIndividuality->fields.m_target)(
                                 funcContainsIndividuality->fields.original_method_info,
                                 data,
                                 *(_QWORD *)&funcContainsIndividuality->fields.extra_arg);
        if ( ((unsigned __int8)data & 1) != 0 )
        {
          if ( v15 >= list->max_length )
            goto LABEL_26;
          if ( !v11 )
            goto LABEL_25;
          v13 = (unsigned int)v16[v15];
          items = v11->fields._items;
          v24 = Method_System_Collections_Generic_List_int__Add__;
          ++v11->fields._version;
          if ( !items )
            goto LABEL_25;
          size = v11->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v11,
              v13,
              *(const MethodInfo_34E0810 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
          }
          else
          {
            v11->fields._size = size + 1;
            items->m_Items[size + 1] = v13;
          }
        }
      }
      LODWORD(v14) = list->max_length;
    }
    while ( (__int64)++v15 < (int)v14 );
  }
  if ( !v11 )
LABEL_25:
    sub_1B8880C(data, v13);
  return System_Collections_Generic_List_int___ToArray(
           v11,
           (const MethodInfo_34E22C8 *)Method_System_Collections_Generic_List_int__ToArray__);
}


void __fastcall BattleLogicTarget__setInit(BattleLogicTarget_o *this, BattleData_o *data, const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields.data = data;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)data, (int32_t)method, v3);
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
  struct System_Int32_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10

  FieldEnemyServantIDList = targetIdList;
  if ( (byte_4A5DDF9 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    byte_4A5DDF9 = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_26;
  if ( !data->fields.isMultiTargetBattle )
  {
    if ( !FieldEnemyServantIDList )
      FieldEnemyServantIDList = BattleData__getFieldEnemyServantIDList(data, 1, 0LL);
    v6 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v6,
      (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
    data = this->fields.data;
    if ( !data )
      goto LABEL_26;
    data = (BattleData_o *)BattleData__getFieldEnemyServantIDList(data, 1, 0LL);
    if ( !FieldEnemyServantIDList )
      goto LABEL_26;
    v7 = *(_QWORD *)&FieldEnemyServantIDList->max_length;
    data = this->fields.data;
    if ( (int)v7 >= 1 )
    {
      v8 = 0LL;
      v9 = &FieldEnemyServantIDList->m_Items[1];
      while ( 1 )
      {
        if ( v8 >= (unsigned int)v7 )
LABEL_27:
          sub_1B88814(data, targetIdList);
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
              goto LABEL_27;
            if ( !v6 )
              break;
            targetIdList = (System_Int32_array *)(unsigned int)v9[v8];
            items = v6->fields._items;
            v12 = Method_System_Collections_Generic_List_int__Add__;
            ++v6->fields._version;
            if ( !items )
              break;
            size = v6->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v6,
                (int32_t)targetIdList,
                *(const MethodInfo_34E0810 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
            }
            else
            {
              v6->fields._size = size + 1;
              items->m_Items[size + 1] = (int)targetIdList;
            }
          }
        }
        LODWORD(v7) = FieldEnemyServantIDList->max_length;
        data = this->fields.data;
        if ( (__int64)++v8 >= (int)v7 )
          goto LABEL_24;
      }
LABEL_26:
      sub_1B8880C(data, targetIdList);
    }
LABEL_24:
    if ( !data )
      goto LABEL_26;
    BattleData__setTargetLock(data, v6, 0LL);
  }
}


void __fastcall BattleLogicTarget__updateGlobalTarget(BattleLogicTarget_o *this, const MethodInfo *method)
{
  BattleData_o *data; // x0
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  BattleData_o *v5; // x20
  unsigned __int64 v6; // x21
  struct BattleData_o *v7; // x8

  data = this->fields.data;
  if ( !data )
    goto LABEL_16;
  data = (BattleData_o *)BattleData__getFieldEnemyServantIDList(data, 1, 0LL);
  if ( !data )
    goto LABEL_16;
  m_CancellationTokenSource = data->fields.m_CancellationTokenSource;
  v5 = data;
  if ( m_CancellationTokenSource && (int)m_CancellationTokenSource >= 1 )
  {
    v6 = 0LL;
    while ( 1 )
    {
      if ( v6 >= (unsigned int)m_CancellationTokenSource )
        goto LABEL_17;
      data = this->fields.data;
      if ( !data )
        goto LABEL_16;
      data = (BattleData_o *)BattleData__getEnemyServantData(data, *((_DWORD *)&v5->fields.rootfsm + v6), 0LL);
      if ( !data )
        goto LABEL_16;
      data = (BattleData_o *)BattleServantData__isDeadWaitNotAlive((BattleServantData_o *)data, 0LL);
      if ( ((unsigned __int8)data & 1) == 0 )
        break;
      LODWORD(m_CancellationTokenSource) = v5->fields.m_CancellationTokenSource;
      if ( (__int64)++v6 >= (int)m_CancellationTokenSource )
        return;
    }
    if ( (unsigned int)v6 >= LODWORD(v5->fields.m_CancellationTokenSource) )
LABEL_17:
      sub_1B88814(data, method);
    v7 = this->fields.data;
    if ( v7 )
    {
      v7->fields.globaltargetId = *((_DWORD *)&v5->fields.rootfsm + v6);
      return;
    }
LABEL_16:
    sub_1B8880C(data, method);
  }
}


void __fastcall BattleLogicTarget___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5DDFA & 1) == 0 )
  {
    sub_1B885B0(&BattleLogicTarget___c_TypeInfo);
    byte_4A5DDFA = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(BattleLogicTarget___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  BattleLogicTarget___c_TypeInfo->static_fields->__9 = (struct BattleLogicTarget___c_o *)v1;
  sub_1B88554((ServantStatusBattleListViewItem_o *)BattleLogicTarget___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1B8880C(this, 0LL);
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
  if ( (byte_4A5DDFB & 1) == 0 )
  {
    this = (BattleLogicTarget___c__DisplayClass14_0_o *)sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
    byte_4A5DDFB = 1;
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
          (const MethodInfo_3164E74 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__),
        (this = (BattleLogicTarget___c__DisplayClass14_0_o *)v6->fields.indNum) == 0LL) )
  {
LABEL_12:
    sub_1B8880C(this, *(_QWORD *)&x);
  }
  System_Collections_Generic_Dictionary_int__int___set_Item(
    (System_Collections_Generic_Dictionary_int__int__o *)this,
    y,
    v12,
    (const MethodInfo_3164E74 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
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
    sub_1B8880C(this, *(_QWORD *)&x);
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