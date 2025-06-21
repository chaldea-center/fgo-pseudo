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
  if ( (byte_4B1F577 & 1) == 0 )
  {
    this = (BattleLogicTarget_o *)sub_1BCAFF8(&Method_BasicHelper_ContainsSelfNotNull_int___, svtData);
    byte_4B1F577 = 1;
  }
  if ( !svtData )
    sub_1BCB254(this, svtData);
  return !BasicHelper__ContainsSelfNotNull_int_(
            (System_Collections_Generic_HashSet_T__o *)v6->fields.tempDeadSvtHash,
            svtData->fields.uniqueId,
            (const MethodInfo_300449C *)Method_BasicHelper_ContainsSelfNotNull_int___)
      && BattleServantData__isAlive(svtData, isResurrectable, 0LL);
}


bool __fastcall BattleLogicTarget__IsTargetGuts(
        BattleLogicTarget_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  BattleLogicTarget_o *v4; // x20

  v4 = this;
  if ( (byte_4B1F578 & 1) == 0 )
  {
    this = (BattleLogicTarget_o *)sub_1BCAFF8(&Method_BasicHelper_ContainsSelfNotNull_int___, svtData);
    byte_4B1F578 = 1;
  }
  if ( !svtData )
    sub_1BCB254(this, svtData);
  return !svtData->fields.isDeadAnime
      && BasicHelper__ContainsSelfNotNull_int_(
           (System_Collections_Generic_HashSet_T__o *)v4->fields.tempDeadSvtHash,
           svtData->fields.uniqueId,
           (const MethodInfo_300449C *)Method_BasicHelper_ContainsSelfNotNull_int___)
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
    sub_1BCB254(data, *(_QWORD *)&a);
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
    sub_1BCB254(data, *(_QWORD *)&x);
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
    sub_1BCB254(data, *(_QWORD *)&x);
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
    sub_1BCB254(data, *(_QWORD *)&x);
  }
  return HIDWORD(data->fields.totalDamageInTurn) - HIDWORD(v8->fields.totalDamageInTurn);
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
    sub_1BCB254(data, *(_QWORD *)&x);
  }
  if ( *(&v8->fields.battleGenderType + 1) <= 0 )
    v9 = 999;
  else
    v9 = 0;
  v10 = v9 + LODWORD(v8->fields.playerFieldStatus);
  if ( *(&data->fields.battleGenderType + 1) <= 0 )
    v11 = -999;
  else
    v11 = 0;
  return v10 - LODWORD(data->fields.playerFieldStatus) + v11;
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
  __int64 uniqueId; // x1
  const MethodInfo *v13; // x2
  __int64 v14; // x8
  unsigned __int64 v15; // x24
  bool v16; // w22
  const MethodInfo *v17; // x3
  BattleServantData_o *v18; // x23
  struct System_Int32_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  struct BattleData_o *v22; // x8

  if ( (byte_4B1F579 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__Add__, targetlist);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__ToArray__, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int___ctor__, v8);
    sub_1BCAFF8(&System_Collections_Generic_List_int__TypeInfo, v9);
    byte_4B1F579 = 1;
  }
  v10 = (System_Collections_Generic_List_int__o *)sub_1BCB244(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v10,
    (const MethodInfo_369C358 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !targetlist )
    goto LABEL_22;
  v14 = *(_QWORD *)&targetlist->max_length;
  if ( (int)v14 >= 1 )
  {
    v15 = 0LL;
    v16 = isResurrectable;
    while ( 1 )
    {
      if ( v15 >= (unsigned int)v14 )
        sub_1BCB25C(data, uniqueId, v13);
      data = this->fields.data;
      if ( !data )
        break;
      data = (BattleData_o *)BattleData__getServantData(data, targetlist->m_Items[v15 + 1], 0LL);
      if ( data )
      {
        v18 = (BattleServantData_o *)data;
        data = (BattleData_o *)BattleLogicTarget__IsTargetAlive(this, (BattleServantData_o *)data, v16, v17);
        if ( ((unsigned __int8)data & 1) != 0 )
          goto LABEL_26;
        data = (BattleData_o *)BattleLogicTarget__IsTargetGuts(this, v18, v13);
        if ( ((unsigned __int8)data & 1) != 0 )
        {
          v22 = this->fields.data;
          if ( !v22 )
            break;
          data = (BattleData_o *)BattleServantData__checkDeadTurn(v18, v22->fields.typeTurn, 0LL);
          if ( ((unsigned __int8)data & 1) == 0 )
          {
LABEL_26:
            if ( !v10 )
              break;
            uniqueId = (unsigned int)v18->fields.uniqueId;
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
                *(const MethodInfo_369CBAC **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
            }
            else
            {
              v10->fields._size = size + 1;
              items->m_Items[size + 1] = uniqueId;
            }
          }
        }
      }
      LODWORD(v14) = targetlist->max_length;
      if ( (__int64)++v15 >= (int)v14 )
        goto LABEL_20;
    }
LABEL_22:
    sub_1BCB254(data, uniqueId);
  }
LABEL_20:
  if ( !v10 )
    goto LABEL_22;
  return System_Collections_Generic_List_int___ToArray(
           v10,
           (const MethodInfo_369E664 *)Method_System_Collections_Generic_List_int__ToArray__);
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
    sub_1BCB254(data, *(_QWORD *)&uniqueId);
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
    sub_1BCB254(data, *(_QWORD *)&actId);
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
  __int64 v14; // x1
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  System_Comparison_int__o *v19; // x22
  const MethodInfo *v20; // x4

  if ( (byte_4B1F580 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Array_Sort_int____76914264, ids);
    sub_1BCAFF8(&System_Comparison_int__TypeInfo, v9);
    sub_1BCAFF8(&Method_BattleLogicTarget___c__DisplayClass15_0__getTargetActiveBuff_b__0__, v10);
    sub_1BCAFF8(&BattleLogicTarget___c__DisplayClass15_0_TypeInfo, v11);
    byte_4B1F580 = 1;
  }
  v12 = sub_1BCB244(BattleLogicTarget___c__DisplayClass15_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12 )
    sub_1BCB254(v13, v14);
  *(_QWORD *)(v12 + 16) = this;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v12 + 16), (int32_t)this, v15, v16);
  *(_QWORD *)(v12 + 24) = ids;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v12 + 24), (int32_t)ids, v17, v18);
  v19 = (System_Comparison_int__o *)sub_1BCB244(System_Comparison_int__TypeInfo);
  System_Comparison_int____ctor(
    v19,
    (Il2CppObject *)v12,
    Method_BattleLogicTarget___c__DisplayClass15_0__getTargetActiveBuff_b__0__,
    0LL);
  System_Array__Sort_int__50231784(
    targetlist,
    (System_Comparison_T__o *)v19,
    (const MethodInfo_2FE79E8 *)Method_System_Array_Sort_int____76914264);
  return BattleLogicTarget__getTargetBase(this, targetlist, 0, isDeadToEnableUpHate, v20);
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
  __int64 v27; // x24
  System_Collections_Generic_Dictionary_int__int__o *Count; // x0
  __int64 v29; // x1
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  const MethodInfo *v34; // x3
  System_Collections_Generic_Dictionary_int__int__o *v35; // x23
  System_Collections_Generic_Dictionary_int__int__o **v36; // x22
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  System_Comparison_int__o *v39; // x23
  __int64 v40; // x2
  const MethodInfo *v41; // x4
  int32_t Item; // w23
  System_Collections_Generic_List_int__o *v43; // x21
  __int64 v44; // x1
  int32_t currentKey; // w24
  __int64 v46; // x0
  __int64 v47; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v49; // x9
  __int64 size; // x10
  System_Int32_array *v51; // x0
  const MethodInfo *v52; // x4
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o v54; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o v55; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4B1F57F & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Array_Sort_int____76914264, indv);
    sub_1BCAFF8(&System_Comparison_int__TypeInfo, v11);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v12);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__int__get_Count__, v13);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__, v14);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__int__get_Keys__, v15);
    sub_1BCAFF8(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v16);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__int__Dispose__, v17);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__int__MoveNext__, v18);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__int__get_Current__, v19);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_KeyCollection_int__int__GetEnumerator__, v20);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__Add__, v21);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__ToArray__, v22);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int___ctor__, v23);
    sub_1BCAFF8(&System_Collections_Generic_List_int__TypeInfo, v24);
    sub_1BCAFF8(&Method_BattleLogicTarget___c__DisplayClass14_0__getTargetActiveIndividualities_b__0__, v25);
    sub_1BCAFF8(&BattleLogicTarget___c__DisplayClass14_0_TypeInfo, v26);
    byte_4B1F57F = 1;
  }
  memset(&v55, 0, sizeof(v55));
  v27 = sub_1BCB244(BattleLogicTarget___c__DisplayClass14_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v27, 0LL);
  if ( !v27 )
    goto LABEL_30;
  *(_QWORD *)(v27 + 16) = this;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v27 + 16), (int32_t)this, v30, v31);
  *(_QWORD *)(v27 + 24) = indv;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v27 + 24), (int32_t)indv, v32, v33);
  if ( aiActEnt && !AiActEntity__IsIncludeDeathSvt(aiActEnt, 0LL) )
    targetlist = BattleLogicTarget__deathSvtExclusion(this, targetlist, 0, v34);
  v35 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1BCB244(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v35,
    (const MethodInfo_3317E68 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  *(_QWORD *)(v27 + 32) = v35;
  v36 = (System_Collections_Generic_Dictionary_int__int__o **)(v27 + 32);
  sub_1BCAF9C((CGThumbnailListItem_o *)(v27 + 32), (int32_t)v35, v37, v38);
  v39 = (System_Comparison_int__o *)sub_1BCB244(System_Comparison_int__TypeInfo);
  System_Comparison_int____ctor(
    v39,
    (Il2CppObject *)v27,
    Method_BattleLogicTarget___c__DisplayClass14_0__getTargetActiveIndividualities_b__0__,
    0LL);
  System_Array__Sort_int__50231784(
    targetlist,
    (System_Comparison_T__o *)v39,
    (const MethodInfo_2FE79E8 *)Method_System_Array_Sort_int____76914264);
  Count = *(System_Collections_Generic_Dictionary_int__int__o **)(v27 + 32);
  if ( !Count )
    goto LABEL_30;
  Count = (System_Collections_Generic_Dictionary_int__int__o *)System_Collections_Generic_Dictionary_int__int___get_Count(
                                                                 Count,
                                                                 (const MethodInfo_33184E0 *)Method_System_Collections_Generic_Dictionary_int__int__get_Count__);
  if ( (int)Count >= 1 )
  {
    if ( targetlist )
    {
      if ( !targetlist->max_length )
        sub_1BCB25C(Count, v29, v40);
      Count = *v36;
      if ( *v36 )
      {
        Item = System_Collections_Generic_Dictionary_int__int___get_Item(
                 Count,
                 targetlist->m_Items[1],
                 (const MethodInfo_3318790 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
        v43 = (System_Collections_Generic_List_int__o *)sub_1BCB244(System_Collections_Generic_List_int__TypeInfo);
        System_Collections_Generic_List_int____ctor(
          v43,
          (const MethodInfo_369C358 *)Method_System_Collections_Generic_List_int___ctor__);
        Count = *v36;
        if ( *v36 )
        {
          Count = (System_Collections_Generic_Dictionary_int__int__o *)System_Collections_Generic_Dictionary_int__int___get_Keys(
                                                                         Count,
                                                                         (const MethodInfo_33184F0 *)Method_System_Collections_Generic_Dictionary_int__int__get_Keys__);
          if ( Count )
          {
            System_Collections_Generic_Dictionary_KeyCollection_int__int___GetEnumerator(
              &v54,
              (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)Count,
              (const MethodInfo_35D9360 *)Method_System_Collections_Generic_Dictionary_KeyCollection_int__int__GetEnumerator__);
            v55 = v54;
            while ( System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__int___MoveNext(
                      &v55,
                      (const MethodInfo_34718C8 *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__int__MoveNext__) )
            {
              if ( !*v36 )
                sub_1BCB254(0LL, v44);
              currentKey = (int32_t)v55.fields._currentKey;
              v46 = System_Collections_Generic_Dictionary_int__int___get_Item(
                      *v36,
                      (int32_t)v55.fields._currentKey,
                      (const MethodInfo_3318790 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
              if ( Item == (_DWORD)v46 )
              {
                if ( !v43 )
                  sub_1BCB254(v46, v47);
                items = v43->fields._items;
                v49 = Method_System_Collections_Generic_List_int__Add__;
                ++v43->fields._version;
                if ( !items )
                  sub_1BCB254(v46, v47);
                size = v43->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_int___AddWithResize(
                    v43,
                    currentKey,
                    *(const MethodInfo_369CBAC **)(*(_QWORD *)(v49[4] + 192LL) + 112LL));
                }
                else
                {
                  v43->fields._size = size + 1;
                  items->m_Items[size + 1] = currentKey;
                }
              }
            }
            System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__int___Dispose(
              &v55,
              (const MethodInfo_34718C4 *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__int__Dispose__);
            if ( v43 )
            {
              v51 = System_Collections_Generic_List_int___ToArray(
                      v43,
                      (const MethodInfo_369E664 *)Method_System_Collections_Generic_List_int__ToArray__);
              return BattleLogicTarget__getTargetRandom(this, v51, 0, isDeadToEnableUpHate, v52);
            }
          }
        }
      }
    }
LABEL_30:
    sub_1BCB254(Count, v29);
  }
  return BattleLogicTarget__getTargetBase(this, targetlist, 0, isDeadToEnableUpHate, v41);
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
  __int64 v25; // x1
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  System_Collections_ICollection_o **v28; // x25
  BattleData_o *v29; // x27
  bool v30; // w26
  BattleServantData_o *ServantData; // x0
  const MethodInfo *v32; // x6
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  System_Int32_array *v34; // x0
  const MethodInfo *v35; // x3
  const MethodInfo *v36; // x4
  System_Int32_array *Shuffle_int; // x5
  int32_t result; // w0
  __int64 v39; // x21
  __int64 *v40; // x29
  System_Func_int____bool__o *v41; // x29
  System_Func_object__bool__o *v42; // x0
  __int64 v43; // x2
  const MethodInfo *v44; // x5
  bool v45; // w3
  BattleLogicTarget_o *v46; // x0
  int32_t v47; // w1

  if ( (byte_4B1F581 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_BattleRandom_getShuffle_int___, *(_QWORD *)&target);
    sub_1BCAFF8(&System_Func_int____bool__TypeInfo, v17);
    sub_1BCAFF8(&int___TypeInfo, v18);
    sub_1BCAFF8(&Method_BattleLogicTarget___c__DisplayClass17_0__getTargetAiAct_b__1__, v19);
    sub_1BCAFF8(&BattleLogicTarget___c__DisplayClass17_0_TypeInfo, v20);
    sub_1BCAFF8(&Method_BattleLogicTarget___c__DisplayClass17_1__getTargetAiAct_b__0__, v21);
    sub_1BCAFF8(&BattleLogicTarget___c__DisplayClass17_1_TypeInfo, v22);
    byte_4B1F581 = 1;
  }
  v23 = sub_1BCB244(BattleLogicTarget___c__DisplayClass17_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v23, 0LL);
  if ( !v23 )
    goto LABEL_41;
  *(_QWORD *)(v23 + 16) = individuality;
  v28 = (System_Collections_ICollection_o **)(v23 + 16);
  sub_1BCAF9C((CGThumbnailListItem_o *)(v23 + 16), (int32_t)individuality, v26, v27);
  NoTargetNoActionType = (BattleData_o *)sub_1BCB0A0(int___TypeInfo, 0LL);
  v29 = NoTargetNoActionType;
  if ( aiActEnt )
  {
    NoTargetNoActionType = (BattleData_o *)AiActEntity__GetNoTargetNoActionType(aiActEnt, 0LL);
    v30 = (_DWORD)NoTargetNoActionType != 0;
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
                                             v32);
    v29 = NoTargetNoActionType;
    goto LABEL_10;
  }
  v30 = 0;
  if ( isCheckHate )
    goto LABEL_8;
LABEL_10:
  if ( !v29 )
    goto LABEL_41;
  m_CancellationTokenSource = v29->fields.m_CancellationTokenSource;
  if ( m_CancellationTokenSource )
    goto LABEL_12;
  v39 = sub_1BCB244(BattleLogicTarget___c__DisplayClass17_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v39, 0LL);
  if ( !aiActEnt )
    goto LABEL_21;
  if ( !v39 )
    goto LABEL_41;
  if ( AiActEntity__TryGetMultiIndividuality(aiActEnt, (System_Int32_array_array **)(v39 + 16), 0LL) )
  {
    v40 = &Method_BattleLogicTarget___c__DisplayClass17_1__getTargetAiAct_b__0__;
  }
  else
  {
LABEL_21:
    if ( BasicHelper__IsNullOrEmpty(*v28, 0LL) )
    {
      v41 = 0LL;
      goto LABEL_27;
    }
    v40 = &Method_BattleLogicTarget___c__DisplayClass17_0__getTargetAiAct_b__1__;
    v39 = v23;
  }
  v42 = (System_Func_object__bool__o *)sub_1BCB244(System_Func_int____bool__TypeInfo);
  v43 = *v40;
  v41 = (System_Func_int____bool__o *)v42;
  System_Func_object__bool____ctor(v42, (Il2CppObject *)v39, v43, 0LL);
  if ( !v41 )
    goto LABEL_27;
  NoTargetNoActionType = (BattleData_o *)BattleLogicTarget__narrowDownIndividuality(
                                           this,
                                           targetlist,
                                           v41,
                                           isResurrectable,
                                           target != 13,
                                           v44);
  if ( !NoTargetNoActionType )
LABEL_41:
    sub_1BCB254(NoTargetNoActionType, v25);
  v29 = NoTargetNoActionType;
LABEL_27:
  m_CancellationTokenSource = v29->fields.m_CancellationTokenSource;
  if ( v30 && v41 != 0LL && m_CancellationTokenSource == 0LL )
    return -1;
LABEL_12:
  if ( m_CancellationTokenSource )
    v34 = (System_Int32_array *)v29;
  else
    v34 = targetlist;
  Shuffle_int = BattleRandom__getShuffle_int_(v34, (const MethodInfo_300BACC *)Method_BattleRandom_getShuffle_int___);
  switch ( target )
  {
    case 2:
      return BattleLogicTarget__getTargetHighHp(this, Shuffle_int, isDeadToEnableUpHate, v35);
    case 3:
      return BattleLogicTarget__getTargetLowHp(this, Shuffle_int, isDeadToEnableUpHate, v35);
    case 10:
      return BattleLogicTarget__getTargetNpTurnLower(this, Shuffle_int, isDeadToEnableUpHate, v35);
    case 11:
      return BattleLogicTarget__getTargetNpGaugeHeighter(this, Shuffle_int, isDeadToEnableUpHate, v35);
    case 12:
      return BattleLogicTarget__getRevenge(this, actId, Shuffle_int, isDeadToEnableUpHate, v36);
    case 13:
      return BattleLogicTarget__getTargetActiveIndividualities(
               this,
               (System_Int32_array *)*v28,
               Shuffle_int,
               aiActEnt,
               isDeadToEnableUpHate,
               (const MethodInfo *)Shuffle_int);
    case 14:
      return BattleLogicTarget__getTargetActiveBuff(
               this,
               (System_Int32_array *)*v28,
               Shuffle_int,
               isDeadToEnableUpHate,
               v36);
    case 15:
      v45 = isDeadToEnableUpHate;
      v46 = this;
      v47 = 0;
      goto LABEL_40;
    case 16:
      v45 = isDeadToEnableUpHate;
      v47 = 1;
      goto LABEL_39;
    case 17:
      v45 = isDeadToEnableUpHate;
      v47 = 2;
LABEL_39:
      v46 = this;
LABEL_40:
      result = BattleLogicTarget__getTargetPosition(v46, v47, Shuffle_int, v45, v30, (const MethodInfo *)Shuffle_int);
      break;
    default:
      result = BattleLogicTarget__getTargetBase(this, Shuffle_int, isResurrectable, isDeadToEnableUpHate, v36);
      break;
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
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
    sub_1BCB254(this, targetlist);
  v5 = *(_QWORD *)&targetlist->max_length;
  if ( (int)v5 < 1 )
    return -1;
  v8 = this;
  v9 = 0LL;
  v10 = isResurrectable;
  while ( 1 )
  {
    if ( v9 >= (unsigned int)v5 )
      sub_1BCB25C(this, targetlist, isResurrectable);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  BattleData_o *data; // x0
  const MethodInfo *v12; // x2
  struct System_Int32_array *actorIdlist; // x8
  struct BattleData_o *v14; // x21
  struct System_Int32_array *v15; // x8
  int v16; // w22
  System_Int32_array *v17; // x3
  BattleData_o *v18; // x0
  struct BattleData_o *v19; // x8
  BattleServantData_o *ServantData; // x0
  BattleLogicTarget___c_c *v21; // x8
  Il2CppObject *v22; // x21
  System_Predicate_object__o *_9__20_0; // x22
  Il2CppObject *v24; // x23
  struct BattleLogicTarget___c_StaticFields *static_fields; // x0
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  Il2CppObject *v28; // x0
  BattleServantData_o *v29; // x21
  const MethodInfo *v30; // x2
  struct BattleData_o *v31; // x8
  struct System_Int32_array *v33; // x8
  int32_t v34; // w1
  const MethodInfo *v35; // x2
  struct BattleData_o *v36; // x8
  struct BattleData_o *v37; // x8
  System_Int32_array *v38; // x21
  const MethodInfo *v39; // x4
  System_Comparison_int__o *v40; // x22
  struct BattleData_o *v41; // x22
  const MethodInfo *v42; // x2
  struct System_Int32_array *v43; // x8
  struct BattleData_o *v44; // x21
  int32_t v45; // w22
  System_Int32_array *v46; // x3
  struct BattleData_o *v47; // x8
  struct BattleData_o *v48; // x8

  v3 = task;
  if ( (byte_4B1F584 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Array_Sort_int____76914264, task);
    sub_1BCAFF8(&Method_BasicHelper_TakeIf_BattleServantData___, v5);
    sub_1BCAFF8(&Method_BattleLogicTarget__getTargetBattleServantData_b__20_1__, v6);
    sub_1BCAFF8(&System_Comparison_int__TypeInfo, v7);
    sub_1BCAFF8(&System_Predicate_BattleServantData__TypeInfo, v8);
    sub_1BCAFF8(&Method_BattleLogicTarget___c__getTargetBattleServantData_b__20_0__, v9);
    sub_1BCAFF8(&BattleLogicTarget___c_TypeInfo, v10);
    byte_4B1F584 = 1;
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
    BattleLogicTarget__updateEnemyTarget(this, 0LL, v12);
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
    v14 = this->fields.data;
    if ( actorIdlist )
    {
      if ( !actorIdlist->max_length )
        goto LABEL_85;
      task = (BattleLogicTask_o *)(unsigned int)actorIdlist->m_Items[1];
      if ( !v14 )
        goto LABEL_84;
    }
    else
    {
      task = (BattleLogicTask_o *)0xFFFFFFFFLL;
      if ( !v14 )
        goto LABEL_84;
    }
    v18 = this->fields.data;
    v17 = 0LL;
  }
  else
  {
    v15 = v3->fields.actorIdlist;
    v14 = this->fields.data;
    if ( v15 )
    {
      if ( !v15->max_length )
        goto LABEL_85;
      v16 = v15->m_Items[1];
    }
    else
    {
      v16 = -1;
    }
    data = (BattleData_o *)v3->fields.skillInfo;
    if ( data )
    {
      data = (BattleData_o *)BattleSkillInfoData__GetAddIndiv((BattleSkillInfoData_o *)data, 0LL);
      v17 = (System_Int32_array *)data;
      if ( !v14 )
        goto LABEL_84;
    }
    else
    {
      v17 = 0LL;
      if ( !v14 )
        goto LABEL_84;
    }
    v18 = v14;
    LODWORD(task) = v16;
  }
  data = (BattleData_o *)BattleData__getTargetLock(v18, (int32_t)task, 0, v17, 0LL);
  v14->fields.globaltargetId = (int)data;
LABEL_29:
  v19 = this->fields.data;
  if ( !v19 )
    goto LABEL_84;
  data = (BattleData_o *)v19->fields.perf;
  if ( !data )
    goto LABEL_84;
  BattlePerformance__reViewTargetMarks((BattlePerformance_o *)data, 0LL);
LABEL_32:
  data = this->fields.data;
  if ( !data )
    goto LABEL_84;
  ServantData = BattleData__getServantData(data, data->fields.globaltargetId, 0LL);
  v21 = BattleLogicTarget___c_TypeInfo;
  v22 = (Il2CppObject *)ServantData;
  if ( !BattleLogicTarget___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicTarget___c_TypeInfo);
    v21 = BattleLogicTarget___c_TypeInfo;
  }
  _9__20_0 = (System_Predicate_object__o *)v21->static_fields->__9__20_0;
  if ( !_9__20_0 )
  {
    if ( !v21->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v21);
      v21 = BattleLogicTarget___c_TypeInfo;
    }
    v24 = (Il2CppObject *)v21->static_fields->__9;
    _9__20_0 = (System_Predicate_object__o *)sub_1BCB244(System_Predicate_BattleServantData__TypeInfo);
    System_Predicate_object____ctor(
      _9__20_0,
      v24,
      Method_BattleLogicTarget___c__getTargetBattleServantData_b__20_0__,
      0LL);
    static_fields = BattleLogicTarget___c_TypeInfo->static_fields;
    static_fields->__9__20_0 = (struct System_Predicate_BattleServantData__o *)_9__20_0;
    sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->__9__20_0, (int32_t)_9__20_0, v26, v27);
  }
  v28 = BasicHelper__TakeIf_object_(
          v22,
          (System_Predicate_T__o *)_9__20_0,
          (const MethodInfo_300A694 *)Method_BasicHelper_TakeIf_BattleServantData___);
  if ( v28 )
  {
    v29 = (BattleServantData_o *)v28;
    data = (BattleData_o *)BattleServantData__isAlive((BattleServantData_o *)v28, 0, 0LL);
    if ( ((unsigned __int8)data & 1) != 0 )
    {
      v31 = this->fields.data;
      if ( v31 && v3 )
        goto LABEL_43;
      goto LABEL_84;
    }
    data = (BattleData_o *)BattleServantData__isAlive(v29, 0, 0LL);
    if ( ((unsigned __int8)data & 1) == 0 )
    {
      if ( !v3 )
        goto LABEL_84;
      v33 = v3->fields.actorIdlist;
      if ( v33 )
      {
        if ( !v33->max_length )
          goto LABEL_85;
        v34 = v33->m_Items[1];
      }
      else
      {
        v34 = -1;
      }
      data = (BattleData_o *)BattleServantData__checkOverKill(v29, v34, 0LL);
      if ( ((unsigned __int8)data & 1) != 0 )
      {
        v31 = this->fields.data;
        if ( v31 )
        {
LABEL_43:
          BattleLogicTask__setTarget(v3, v31->fields.globaltargetId, v30);
          return v29;
        }
        goto LABEL_84;
      }
    }
    if ( !BattleServantData__isAlive(v29, 0, 0LL) )
    {
      data = (BattleData_o *)BattleServantData__isGuts(v29, 0LL);
      if ( ((unsigned __int8)data & 1) != 0 )
      {
        v36 = this->fields.data;
        if ( v36 && v3 )
        {
          BattleLogicTask__setTarget(v3, v36->fields.globaltargetId, v35);
          v29->fields.overkillTargetId = -1;
          return v29;
        }
        goto LABEL_84;
      }
    }
    v29->fields.overkillTargetId = -1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_84;
  data = (BattleData_o *)BattleData__getFieldEnemyServantIDList(data, 1, 0LL);
  v37 = this->fields.data;
  if ( !v37 )
    goto LABEL_84;
  v38 = (System_Int32_array *)data;
  data = (BattleData_o *)v37->fields.quest_ent;
  if ( !data )
    goto LABEL_84;
  if ( QuestEntity__HasFlag((QuestEntity_o *)data, 0x40000000000000LL, 0LL) )
  {
    v40 = (System_Comparison_int__o *)sub_1BCB244(System_Comparison_int__TypeInfo);
    System_Comparison_int____ctor(
      v40,
      (Il2CppObject *)this,
      Method_BattleLogicTarget__getTargetBattleServantData_b__20_1__,
      0LL);
    System_Array__Sort_int__50231784(
      v38,
      (System_Comparison_T__o *)v40,
      (const MethodInfo_2FE79E8 *)Method_System_Array_Sort_int____76914264);
  }
  v41 = this->fields.data;
  data = (BattleData_o *)BattleLogicTarget__getTargetBase(this, v38, 0, 1, v39);
  if ( !v41 )
    goto LABEL_84;
  v41->fields.globaltargetId = (int)data;
  BattleLogicTarget__updateEnemyTarget(this, v38, v42);
  data = this->fields.data;
  if ( !data )
    goto LABEL_84;
  data = (BattleData_o *)BattleData__isTargetLock(data, 0LL);
  if ( ((unsigned __int8)data & 1) == 0 )
    goto LABEL_80;
  if ( !v3 )
    goto LABEL_84;
  v43 = v3->fields.actorIdlist;
  v44 = this->fields.data;
  if ( !v43 )
  {
    v45 = -1;
    goto LABEL_73;
  }
  if ( !v43->max_length )
LABEL_85:
    sub_1BCB25C(data, task, v12);
  v45 = v43->m_Items[1];
LABEL_73:
  data = (BattleData_o *)v3->fields.skillInfo;
  if ( data )
  {
    data = (BattleData_o *)BattleSkillInfoData__GetAddIndiv((BattleSkillInfoData_o *)data, 0LL);
    v46 = (System_Int32_array *)data;
    if ( !v44 )
      goto LABEL_84;
  }
  else
  {
    v46 = 0LL;
    if ( !v44 )
      goto LABEL_84;
  }
  data = (BattleData_o *)BattleData__getTargetLock(v44, v45, 0, v46, 0LL);
  v44->fields.globaltargetId = (int)data;
  v47 = this->fields.data;
  if ( !v47 || (data = (BattleData_o *)v47->fields.perf) == 0LL )
LABEL_84:
    sub_1BCB254(data, task);
  BattlePerformance__reViewTargetMarks((BattlePerformance_o *)data, 0LL);
LABEL_80:
  v48 = this->fields.data;
  if ( !v48 )
    goto LABEL_84;
  if ( !v3 )
    goto LABEL_84;
  BattleLogicTask__setTarget(v3, v48->fields.globaltargetId, v12);
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
  __int64 v7; // x1
  __int64 v8; // x1
  System_Comparison_int__o *v9; // x22
  const MethodInfo *v10; // x4

  if ( (byte_4B1F57B & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Array_Sort_int____76914264, targetlist);
    sub_1BCAFF8(&Method_BattleLogicTarget__getTargetHighHp_b__9_0__, v7);
    sub_1BCAFF8(&System_Comparison_int__TypeInfo, v8);
    byte_4B1F57B = 1;
  }
  v9 = (System_Comparison_int__o *)sub_1BCB244(System_Comparison_int__TypeInfo);
  System_Comparison_int____ctor(v9, (Il2CppObject *)this, Method_BattleLogicTarget__getTargetHighHp_b__9_0__, 0LL);
  System_Array__Sort_int__50231784(
    targetlist,
    (System_Comparison_T__o *)v9,
    (const MethodInfo_2FE79E8 *)Method_System_Array_Sort_int____76914264);
  return BattleLogicTarget__getTargetBase(this, targetlist, 0, isDeadToEnableUpHate, v10);
}


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

  if ( (byte_4B1F57C & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Array_Sort_int____76914264, targetlist);
    sub_1BCAFF8(&Method_BattleLogicTarget__getTargetLowHp_b__10_0__, v7);
    sub_1BCAFF8(&System_Comparison_int__TypeInfo, v8);
    byte_4B1F57C = 1;
  }
  v9 = (System_Comparison_int__o *)sub_1BCB244(System_Comparison_int__TypeInfo);
  System_Comparison_int____ctor(v9, (Il2CppObject *)this, Method_BattleLogicTarget__getTargetLowHp_b__10_0__, 0LL);
  System_Array__Sort_int__50231784(
    targetlist,
    (System_Comparison_T__o *)v9,
    (const MethodInfo_2FE79E8 *)Method_System_Array_Sort_int____76914264);
  return BattleLogicTarget__getTargetBase(this, targetlist, 0, isDeadToEnableUpHate, v10);
}


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

  if ( (byte_4B1F57E & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Array_Sort_int____76914264, targetlist);
    sub_1BCAFF8(&Method_BattleLogicTarget__getTargetNpGaugeHeighter_b__12_0__, v7);
    sub_1BCAFF8(&System_Comparison_int__TypeInfo, v8);
    byte_4B1F57E = 1;
  }
  v9 = (System_Comparison_int__o *)sub_1BCB244(System_Comparison_int__TypeInfo);
  System_Comparison_int____ctor(
    v9,
    (Il2CppObject *)this,
    Method_BattleLogicTarget__getTargetNpGaugeHeighter_b__12_0__,
    0LL);
  System_Array__Sort_int__50231784(
    targetlist,
    (System_Comparison_T__o *)v9,
    (const MethodInfo_2FE79E8 *)Method_System_Array_Sort_int____76914264);
  return BattleLogicTarget__getTargetBase(this, targetlist, 0, isDeadToEnableUpHate, v10);
}


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

  if ( (byte_4B1F57D & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Array_Sort_int____76914264, targetlist);
    sub_1BCAFF8(&Method_BattleLogicTarget__getTargetNpTurnLower_b__11_0__, v7);
    sub_1BCAFF8(&System_Comparison_int__TypeInfo, v8);
    byte_4B1F57D = 1;
  }
  v9 = (System_Comparison_int__o *)sub_1BCB244(System_Comparison_int__TypeInfo);
  System_Comparison_int____ctor(v9, (Il2CppObject *)this, Method_BattleLogicTarget__getTargetNpTurnLower_b__11_0__, 0LL);
  System_Array__Sort_int__50231784(
    targetlist,
    (System_Comparison_T__o *)v9,
    (const MethodInfo_2FE79E8 *)Method_System_Array_Sort_int____76914264);
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
    sub_1BCB254(this, *(_QWORD *)&position);
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
      sub_1BCB25C(this, *(_QWORD *)&position, targetlist);
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

  if ( (byte_4B1F57A & 1) == 0 )
  {
    sub_1BCAFF8(&Method_BattleRandom_getShuffle_int___, targetlist);
    byte_4B1F57A = 1;
  }
  Shuffle_int = BattleRandom__getShuffle_int_(
                  targetlist,
                  (const MethodInfo_300BACC *)Method_BattleRandom_getShuffle_int___);
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
  __int64 v22; // x2
  __int64 v23; // x8
  System_Int32_array *v24; // x23
  unsigned __int64 v25; // x26
  int32_t *v26; // x28
  bool v27; // w24
  BattleServantData_o *ServantData; // x25
  const MethodInfo *v29; // x3
  const MethodInfo *v30; // x2
  struct System_Int32_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10
  struct BattleData_o *v34; // x8

  if ( (byte_4B1F583 & 1) == 0 )
  {
    sub_1BCAFF8(&BattleBuffData_CheckIndividualitiesData_TypeInfo, list);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__Add__, v13);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__ToArray__, v14);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int___ctor__, v15);
    sub_1BCAFF8(&System_Collections_Generic_List_int__TypeInfo, v16);
    byte_4B1F583 = 1;
  }
  v17 = (System_Collections_Generic_List_int__o *)sub_1BCB244(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v17,
    (const MethodInfo_369C358 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( atkSvt )
  {
    v18 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1BCB244(BattleBuffData_CheckIndividualitiesData_TypeInfo);
    BattleBuffData_CheckIndividualitiesData___ctor_44896728(v18, atkSvt, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
    if ( !v18 )
      goto LABEL_30;
    selfConcatSvtIndividualities_k__BackingField = v18->fields._selfConcatSvtIndividualities_k__BackingField;
  }
  else
  {
    selfConcatSvtIndividualities_k__BackingField = 0LL;
  }
  data = CommonFunction__JoinIndiv(selfConcatSvtIndividualities_k__BackingField, addIndiv, 0LL);
  if ( !list )
    goto LABEL_30;
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
LABEL_31:
        sub_1BCB25C(data, v20, v22);
      data = (System_Int32_array *)this->fields.data;
      if ( !data )
        goto LABEL_30;
      ServantData = BattleData__getServantData((BattleData_o *)data, v26[v25], 0LL);
      data = (System_Int32_array *)BattleLogicTarget__IsTargetAlive(this, ServantData, v27, v29);
      if ( ((unsigned __int8)data & 1) != 0
        || (data = (System_Int32_array *)BattleLogicTarget__IsTargetGuts(this, ServantData, v30),
            ((unsigned __int8)data & 1) != 0) )
      {
        if ( !ServantData )
          goto LABEL_30;
      }
      else
      {
        v34 = this->fields.data;
        if ( !v34 || !ServantData )
          goto LABEL_30;
        data = (System_Int32_array *)BattleServantData__checkDeadTurn(ServantData, v34->fields.typeTurn, 0LL);
        if ( ((unsigned __int8)data & 1) == 0 || !isDeadToEnableUpHate )
          goto LABEL_27;
      }
      data = (System_Int32_array *)BattleServantData__isUpHate(ServantData, v24, 0LL);
      if ( ((unsigned __int8)data & 1) != 0 )
      {
        if ( v25 >= list->max_length )
          goto LABEL_31;
        if ( !v17 )
          goto LABEL_30;
        v20 = (unsigned int)v26[v25];
        items = v17->fields._items;
        v32 = Method_System_Collections_Generic_List_int__Add__;
        ++v17->fields._version;
        if ( !items )
          goto LABEL_30;
        size = v17->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v17,
            v20,
            *(const MethodInfo_369CBAC **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
        }
        else
        {
          v17->fields._size = size + 1;
          items->m_Items[size + 1] = v20;
        }
      }
LABEL_27:
      LODWORD(v23) = list->max_length;
    }
    while ( (__int64)++v25 < (int)v23 );
  }
  if ( !v17 )
LABEL_30:
    sub_1BCB254(data, v20);
  return System_Collections_Generic_List_int___ToArray(
           v17,
           (const MethodInfo_369E664 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  __int64 v18; // x2
  __int64 v19; // x8
  unsigned __int64 v20; // x27
  int32_t *v21; // x29
  bool v22; // w24
  BattleServantData_o *ServantData; // x25
  const MethodInfo *v24; // x3
  const MethodInfo *v25; // x2
  System_Collections_Generic_List_int__o *v26; // x26
  System_Collections_Generic_IEnumerable_T__o *BuffIndividualities; // x0
  struct System_Int32_array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10

  if ( (byte_4B1F582 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__AddRange__, list);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__Add__, v11);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__ToArray__, v12);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int___ctor__, v13);
    sub_1BCAFF8(&System_Collections_Generic_List_int__TypeInfo, v14);
    byte_4B1F582 = 1;
  }
  v15 = (System_Collections_Generic_List_int__o *)sub_1BCB244(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v15,
    (const MethodInfo_369C358 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !list )
    goto LABEL_25;
  v19 = *(_QWORD *)&list->max_length;
  if ( (int)v19 >= 1 )
  {
    v20 = 0LL;
    v21 = &list->m_Items[1];
    v22 = isResurrectable;
    do
    {
      if ( v20 >= (unsigned int)v19 )
LABEL_26:
        sub_1BCB25C(data, v17, v18);
      data = this->fields.data;
      if ( !data )
        goto LABEL_25;
      ServantData = BattleData__getServantData(data, v21[v20], 0LL);
      if ( BattleLogicTarget__IsTargetAlive(this, ServantData, v22, v24)
        || (data = (BattleData_o *)BattleLogicTarget__IsTargetGuts(this, ServantData, v25),
            ((unsigned __int8)data & 1) != 0) )
      {
        v26 = (System_Collections_Generic_List_int__o *)sub_1BCB244(System_Collections_Generic_List_int__TypeInfo);
        System_Collections_Generic_List_int____ctor(
          v26,
          (const MethodInfo_369C358 *)Method_System_Collections_Generic_List_int___ctor__);
        if ( !ServantData )
          goto LABEL_25;
        data = (BattleData_o *)BattleServantData__getIndividualities(ServantData, 0LL, 1, 0, 0LL);
        if ( !v26 )
          goto LABEL_25;
        System_Collections_Generic_List_int___AddRange(
          v26,
          (System_Collections_Generic_IEnumerable_T__o *)data,
          (const MethodInfo_369CDB8 *)Method_System_Collections_Generic_List_int__AddRange__);
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
            v26,
            BuffIndividualities,
            (const MethodInfo_369CDB8 *)Method_System_Collections_Generic_List_int__AddRange__);
        }
        data = (BattleData_o *)System_Collections_Generic_List_int___ToArray(
                                 v26,
                                 (const MethodInfo_369E664 *)Method_System_Collections_Generic_List_int__ToArray__);
        if ( !funcContainsIndividuality )
          goto LABEL_25;
        data = (BattleData_o *)((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, BattleData_o *, _QWORD))funcContainsIndividuality->fields.m_target)(
                                 funcContainsIndividuality->fields.original_method_info,
                                 data,
                                 *(_QWORD *)&funcContainsIndividuality->fields.extra_arg);
        if ( ((unsigned __int8)data & 1) != 0 )
        {
          if ( v20 >= list->max_length )
            goto LABEL_26;
          if ( !v15 )
            goto LABEL_25;
          v17 = (unsigned int)v21[v20];
          items = v15->fields._items;
          v29 = Method_System_Collections_Generic_List_int__Add__;
          ++v15->fields._version;
          if ( !items )
            goto LABEL_25;
          size = v15->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v15,
              v17,
              *(const MethodInfo_369CBAC **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
          }
          else
          {
            v15->fields._size = size + 1;
            items->m_Items[size + 1] = v17;
          }
        }
      }
      LODWORD(v19) = list->max_length;
    }
    while ( (__int64)++v20 < (int)v19 );
  }
  if ( !v15 )
LABEL_25:
    sub_1BCB254(data, v17);
  return System_Collections_Generic_List_int___ToArray(
           v15,
           (const MethodInfo_369E664 *)Method_System_Collections_Generic_List_int__ToArray__);
}


void __fastcall BattleLogicTarget__setInit(BattleLogicTarget_o *this, BattleData_o *data, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.data = data;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields, (int32_t)data, (int32_t)method, v3);
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
  __int64 v9; // x2
  __int64 v10; // x8
  unsigned __int64 v11; // x23
  int32_t *v12; // x24
  BattleServantData_o *v13; // x22
  struct System_Int32_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10

  FieldEnemyServantIDList = targetIdList;
  if ( (byte_4B1F585 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__Add__, targetIdList);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int___ctor__, v5);
    sub_1BCAFF8(&System_Collections_Generic_List_int__TypeInfo, v6);
    byte_4B1F585 = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_26;
  if ( !data->fields.isMultiTargetBattle )
  {
    if ( !FieldEnemyServantIDList )
      FieldEnemyServantIDList = BattleData__getFieldEnemyServantIDList(data, 1, 0LL);
    v8 = (System_Collections_Generic_List_int__o *)sub_1BCB244(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v8,
      (const MethodInfo_369C358 *)Method_System_Collections_Generic_List_int___ctor__);
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
          sub_1BCB25C(data, targetIdList, v9);
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
            targetIdList = (System_Int32_array *)(unsigned int)v12[v11];
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
                (int32_t)targetIdList,
                *(const MethodInfo_369CBAC **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
            }
            else
            {
              v8->fields._size = size + 1;
              items->m_Items[size + 1] = (int)targetIdList;
            }
          }
        }
        LODWORD(v10) = FieldEnemyServantIDList->max_length;
        data = this->fields.data;
        if ( (__int64)++v11 >= (int)v10 )
          goto LABEL_24;
      }
LABEL_26:
      sub_1BCB254(data, targetIdList);
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
  __int64 v4; // x2
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
      sub_1BCB25C(data, method, v4);
    v8 = this->fields.data;
    if ( v8 )
    {
      v8->fields.globaltargetId = *((_DWORD *)&v6->fields.rootfsm + v7);
      return;
    }
LABEL_16:
    sub_1BCB254(data, method);
  }
}


void __fastcall BattleLogicTarget___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B1F586 & 1) == 0 )
  {
    sub_1BCAFF8(&BattleLogicTarget___c_TypeInfo, v1);
    byte_4B1F586 = 1;
  }
  v2 = (Il2CppObject *)sub_1BCB244(BattleLogicTarget___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  BattleLogicTarget___c_TypeInfo->static_fields->__9 = (struct BattleLogicTarget___c_o *)v2;
  sub_1BCAF9C((CGThumbnailListItem_o *)BattleLogicTarget___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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
    sub_1BCB254(this, 0LL);
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
  if ( (byte_4B1F587 & 1) == 0 )
  {
    this = (BattleLogicTarget___c__DisplayClass14_0_o *)sub_1BCAFF8(
                                                          &Method_System_Collections_Generic_Dictionary_int__int__set_Item__,
                                                          *(_QWORD *)&x);
    byte_4B1F587 = 1;
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
          (const MethodInfo_3318818 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__),
        (this = (BattleLogicTarget___c__DisplayClass14_0_o *)v6->fields.indNum) == 0LL) )
  {
LABEL_12:
    sub_1BCB254(this, *(_QWORD *)&x);
  }
  System_Collections_Generic_Dictionary_int__int___set_Item(
    (System_Collections_Generic_Dictionary_int__int__o *)this,
    y,
    v12,
    (const MethodInfo_3318818 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
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
    sub_1BCB254(this, *(_QWORD *)&x);
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
  System_Int32_array *individuality; // x20

  if ( (byte_4B1F588 & 1) == 0 )
  {
    sub_1BCAFF8(&Individuality_TypeInfo, self);
    byte_4B1F588 = 1;
  }
  individuality = this->fields.individuality;
  if ( !Individuality_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Individuality_TypeInfo);
  return Individuality__CheckSignedIndividualities(self, individuality, 0LL);
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
  System_Int32_array_array *multiIndividuality; // x20

  if ( (byte_4B1F589 & 1) == 0 )
  {
    sub_1BCAFF8(&Individuality_TypeInfo, self);
    byte_4B1F589 = 1;
  }
  multiIndividuality = this->fields.multiIndividuality;
  if ( !Individuality_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Individuality_TypeInfo);
  return Individuality__CheckSignedMultiIndividuality(self, multiIndividuality, 0LL);
}