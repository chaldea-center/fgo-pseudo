void __fastcall BattleLogicTarget___ctor(BattleLogicTarget_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleLogicTarget__IsTargetAlive(
        BattleLogicTarget_o *this,
        BattleServantData_o *svtData,
        bool isResurrectable,
        const MethodInfo *method)
{
  BattleLogicTarget_o *v6; // x21

  v6 = this;
  if ( (byte_4B18EFF & 1) == 0 )
  {
    this = (BattleLogicTarget_o *)sub_1BCA7E0(&Method_BasicHelper_ContainsSelfNotNull_int___, svtData, isResurrectable);
    byte_4B18EFF = 1;
  }
  if ( !svtData )
    sub_1BCAA3C(this, svtData);
  return !BasicHelper__ContainsSelfNotNull_int_(
            (System_Collections_Generic_HashSet_T__o *)v6->fields.tempDeadSvtHash,
            svtData->fields.uniqueId,
            (const MethodInfo_2EFE214 *)Method_BasicHelper_ContainsSelfNotNull_int___)
      && BattleServantData__isAlive(svtData, isResurrectable, 0LL);
}


bool __fastcall BattleLogicTarget__IsTargetGuts(
        BattleLogicTarget_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  BattleLogicTarget_o *v4; // x20

  v4 = this;
  if ( (byte_4B18F00 & 1) == 0 )
  {
    this = (BattleLogicTarget_o *)sub_1BCA7E0(&Method_BasicHelper_ContainsSelfNotNull_int___, svtData, method);
    byte_4B18F00 = 1;
  }
  if ( !svtData )
    sub_1BCAA3C(this, svtData);
  return !svtData->fields.isDeadAnime
      && BasicHelper__ContainsSelfNotNull_int_(
           (System_Collections_Generic_HashSet_T__o *)v4->fields.tempDeadSvtHash,
           svtData->fields.uniqueId,
           (const MethodInfo_2EFE214 *)Method_BasicHelper_ContainsSelfNotNull_int___)
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
    sub_1BCAA3C(data, *(_QWORD *)&a);
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
    sub_1BCAA3C(data, *(_QWORD *)&x);
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
    sub_1BCAA3C(data, *(_QWORD *)&x);
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
    sub_1BCAA3C(data, *(_QWORD *)&x);
  }
  return HIDWORD(data->fields.maxTurnDamageRecord) - HIDWORD(v8->fields.maxTurnDamageRecord);
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
    sub_1BCAA3C(data, *(_QWORD *)&x);
  }
  if ( SHIDWORD(v8->fields.currenctKnockdown) <= 0 )
    v9 = 999;
  else
    v9 = 0;
  v10 = v9 + LODWORD(v8->fields.waveKnockdownNums);
  if ( SHIDWORD(data->fields.currenctKnockdown) <= 0 )
    v11 = -999;
  else
    v11 = 0;
  return v10 - LODWORD(data->fields.waveKnockdownNums) + v11;
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall BattleLogicTarget__deathSvtExclusion(
        BattleLogicTarget_o *this,
        System_Int32_array *targetlist,
        bool isResurrectable,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  System_Collections_Generic_List_int__o *v13; // x21
  BattleData_o *data; // x0
  __int64 uniqueId; // x1
  __int64 v16; // x8
  unsigned __int64 v17; // x24
  bool v18; // w22
  const MethodInfo *v19; // x3
  BattleServantData_o *v20; // x23
  const MethodInfo *v21; // x2
  struct System_Int32_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  struct BattleData_o *v25; // x8

  if ( (byte_4B18F01 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, targetlist, isResurrectable);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__ToArray__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v9, v10);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v11, v12);
    byte_4B18F01 = 1;
  }
  v13 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    targetlist,
                                                    isResurrectable,
                                                    method);
  System_Collections_Generic_List_int____ctor(
    v13,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !targetlist )
    goto LABEL_22;
  v16 = *(_QWORD *)&targetlist->max_length;
  if ( (int)v16 >= 1 )
  {
    v17 = 0LL;
    v18 = isResurrectable;
    while ( 1 )
    {
      if ( v17 >= (unsigned int)v16 )
        sub_1BCAA44(data, uniqueId);
      data = this->fields.data;
      if ( !data )
        break;
      data = (BattleData_o *)BattleData__getServantData(data, targetlist->m_Items[v17 + 1], 0LL);
      if ( data )
      {
        v20 = (BattleServantData_o *)data;
        data = (BattleData_o *)BattleLogicTarget__IsTargetAlive(this, (BattleServantData_o *)data, v18, v19);
        if ( ((unsigned __int8)data & 1) != 0 )
          goto LABEL_26;
        data = (BattleData_o *)BattleLogicTarget__IsTargetGuts(this, v20, v21);
        if ( ((unsigned __int8)data & 1) != 0 )
        {
          v25 = this->fields.data;
          if ( !v25 )
            break;
          data = (BattleData_o *)BattleServantData__checkDeadTurn(v20, v25->fields.typeTurn, 0LL);
          if ( ((unsigned __int8)data & 1) == 0 )
          {
LABEL_26:
            if ( !v13 )
              break;
            uniqueId = (unsigned int)v20->fields.uniqueId;
            items = v13->fields._items;
            v23 = Method_System_Collections_Generic_List_int__Add__;
            ++v13->fields._version;
            if ( !items )
              break;
            size = v13->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v13,
                uniqueId,
                *(const MethodInfo_3584C38 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
            }
            else
            {
              v13->fields._size = size + 1;
              items->m_Items[size + 1] = uniqueId;
            }
          }
        }
      }
      LODWORD(v16) = targetlist->max_length;
      if ( (__int64)++v17 >= (int)v16 )
        goto LABEL_20;
    }
LABEL_22:
    sub_1BCAA3C(data, uniqueId);
  }
LABEL_20:
  if ( !v13 )
    goto LABEL_22;
  return System_Collections_Generic_List_int___ToArray(
           v13,
           (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
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
    sub_1BCAA3C(data, *(_QWORD *)&uniqueId);
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
    sub_1BCAA3C(data, *(_QWORD *)&actId);
  ServantData = BattleData__getServantData(data, v12, 0LL);
  if ( ServantData
    && (BattleLogicTarget__IsTargetAlive(this, ServantData, 0, v14) || BattleLogicTarget__IsTargetGuts(this, v9, v15)) )
  {
    return v12;
  }
  return BattleLogicTarget__getTargetRandom(this, targetlist, 0, isDeadToEnableUpHate, v11);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BattleLogicTarget__getTargetActiveBuff(
        BattleLogicTarget_o *this,
        System_Int32_array *ids,
        System_Int32_array *targetlist,
        bool isDeadToEnableUpHate,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x23
  __int64 v16; // x0
  __int64 v17; // x1
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  System_Comparison_int__o *v33; // x22
  const MethodInfo *v34; // x4

  if ( (byte_4B18F08 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_Sort_int____76835504, ids, targetlist);
    sub_1BCA7E0(&System_Comparison_int__TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_BattleLogicTarget___c__DisplayClass15_0__getTargetActiveBuff_b__0__, v11, v12);
    sub_1BCA7E0(&BattleLogicTarget___c__DisplayClass15_0_TypeInfo, v13, v14);
    byte_4B18F08 = 1;
  }
  v15 = sub_1BCAA2C(BattleLogicTarget___c__DisplayClass15_0_TypeInfo, ids, targetlist, isDeadToEnableUpHate);
  System_Object___ctor((Il2CppObject *)v15, 0LL);
  if ( !v15 )
    sub_1BCAA3C(v16, v17);
  *(_QWORD *)(v15 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v15 + 16), (int64_t)this, v18, v19, v20, v21, v22, v23);
  *(_QWORD *)(v15 + 24) = ids;
  sub_1BCA784((PartyOrganizationUtility_o *)(v15 + 24), (int64_t)ids, v24, v25, v26, v27, v28, v29);
  v33 = (System_Comparison_int__o *)sub_1BCAA2C(System_Comparison_int__TypeInfo, v30, v31, v32);
  System_Comparison_int____ctor(
    v33,
    (Il2CppObject *)v15,
    Method_BattleLogicTarget___c__DisplayClass15_0__getTargetActiveBuff_b__0__,
    0LL);
  System_Array__Sort_int__49153640(
    targetlist,
    (System_Comparison_T__o *)v33,
    (const MethodInfo_2EE0668 *)Method_System_Array_Sort_int____76835504);
  return BattleLogicTarget__getTargetBase(this, targetlist, 0, isDeadToEnableUpHate, v34);
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
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x24
  System_Collections_Generic_Dictionary_int__int__o *Count; // x0
  __int64 v45; // x1
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  __int64 v58; // x1
  __int64 v59; // x2
  const MethodInfo *v60; // x3
  System_Collections_Generic_Dictionary_int__int__o *v61; // x23
  System_Collections_Generic_Dictionary_int__int__o **v62; // x22
  int64_t v63; // x2
  int32_t v64; // w3
  System_String_o *v65; // x4
  BattleSetupInfo_o *v66; // x5
  FollowerInfo_o *v67; // x6
  PartyListViewItem_o *v68; // x7
  __int64 v69; // x1
  __int64 v70; // x2
  __int64 v71; // x3
  System_Comparison_int__o *v72; // x23
  const MethodInfo *v73; // x4
  int32_t Item; // w23
  __int64 v75; // x1
  __int64 v76; // x2
  __int64 v77; // x3
  System_Collections_Generic_List_int__o *v78; // x21
  __int64 v79; // x1
  int32_t currentKey; // w24
  __int64 v81; // x0
  __int64 v82; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v84; // x9
  __int64 size; // x10
  System_Int32_array *v86; // x0
  const MethodInfo *v87; // x4
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o v89; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o v90; // [xsp+20h] [xbp-80h] BYREF

  v8 = targetlist;
  if ( (byte_4B18F07 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_Sort_int____76835504, indv, targetlist);
    sub_1BCA7E0(&System_Comparison_int__TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int__get_Count__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int__get_Keys__, v19, v20);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__int__Dispose__, v23, v24);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__int__MoveNext__, v25, v26);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__int__get_Current__,
      v27,
      v28);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_KeyCollection_int__int__GetEnumerator__, v29, v30);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v31, v32);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__ToArray__, v33, v34);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v35, v36);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v37, v38);
    sub_1BCA7E0(&Method_BattleLogicTarget___c__DisplayClass14_0__getTargetActiveIndividualities_b__0__, v39, v40);
    sub_1BCA7E0(&BattleLogicTarget___c__DisplayClass14_0_TypeInfo, v41, v42);
    byte_4B18F07 = 1;
  }
  memset(&v90, 0, sizeof(v90));
  v43 = sub_1BCAA2C(BattleLogicTarget___c__DisplayClass14_0_TypeInfo, indv, targetlist, aiActEnt);
  System_Object___ctor((Il2CppObject *)v43, 0LL);
  if ( !v43 )
    goto LABEL_30;
  *(_QWORD *)(v43 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v43 + 16), (int64_t)this, v46, v47, v48, v49, v50, v51);
  *(_QWORD *)(v43 + 24) = indv;
  sub_1BCA784((PartyOrganizationUtility_o *)(v43 + 24), (int64_t)indv, v52, v53, v54, v55, v56, v57);
  if ( aiActEnt && !AiActEntity__IsIncludeDeathSvt(aiActEnt, 0LL) )
    v8 = BattleLogicTarget__deathSvtExclusion(this, v8, 0, v60);
  v61 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1BCAA2C(
                                                               System_Collections_Generic_Dictionary_int__int__TypeInfo,
                                                               v58,
                                                               v59,
                                                               v60);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v61,
    (const MethodInfo_31FC8B0 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  *(_QWORD *)(v43 + 32) = v61;
  v62 = (System_Collections_Generic_Dictionary_int__int__o **)(v43 + 32);
  sub_1BCA784((PartyOrganizationUtility_o *)(v43 + 32), (int64_t)v61, v63, v64, v65, v66, v67, v68);
  v72 = (System_Comparison_int__o *)sub_1BCAA2C(System_Comparison_int__TypeInfo, v69, v70, v71);
  System_Comparison_int____ctor(
    v72,
    (Il2CppObject *)v43,
    Method_BattleLogicTarget___c__DisplayClass14_0__getTargetActiveIndividualities_b__0__,
    0LL);
  System_Array__Sort_int__49153640(
    v8,
    (System_Comparison_T__o *)v72,
    (const MethodInfo_2EE0668 *)Method_System_Array_Sort_int____76835504);
  Count = *(System_Collections_Generic_Dictionary_int__int__o **)(v43 + 32);
  if ( !Count )
    goto LABEL_30;
  Count = (System_Collections_Generic_Dictionary_int__int__o *)System_Collections_Generic_Dictionary_int__int___get_Count(
                                                                 Count,
                                                                 (const MethodInfo_31FCF28 *)Method_System_Collections_Generic_Dictionary_int__int__get_Count__);
  if ( (int)Count >= 1 )
  {
    if ( v8 )
    {
      if ( !v8->max_length )
        sub_1BCAA44(Count, v45);
      Count = *v62;
      if ( *v62 )
      {
        Item = System_Collections_Generic_Dictionary_int__int___get_Item(
                 Count,
                 v8->m_Items[1],
                 (const MethodInfo_31FD1D8 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
        v78 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                          System_Collections_Generic_List_int__TypeInfo,
                                                          v75,
                                                          v76,
                                                          v77);
        System_Collections_Generic_List_int____ctor(
          v78,
          (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
        Count = *v62;
        if ( *v62 )
        {
          Count = (System_Collections_Generic_Dictionary_int__int__o *)System_Collections_Generic_Dictionary_int__int___get_Keys(
                                                                         Count,
                                                                         (const MethodInfo_31FCF38 *)Method_System_Collections_Generic_Dictionary_int__int__get_Keys__);
          if ( Count )
          {
            System_Collections_Generic_Dictionary_KeyCollection_int__int___GetEnumerator(
              &v89,
              (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)Count,
              (const MethodInfo_34BC330 *)Method_System_Collections_Generic_Dictionary_KeyCollection_int__int__GetEnumerator__);
            v90 = v89;
            while ( System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__int___MoveNext(
                      &v90,
                      (const MethodInfo_33552D4 *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__int__MoveNext__) )
            {
              if ( !*v62 )
                sub_1BCAA3C(0LL, v79);
              currentKey = (int32_t)v90.fields._currentKey;
              v81 = System_Collections_Generic_Dictionary_int__int___get_Item(
                      *v62,
                      (int32_t)v90.fields._currentKey,
                      (const MethodInfo_31FD1D8 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
              if ( Item == (_DWORD)v81 )
              {
                if ( !v78 )
                  sub_1BCAA3C(v81, v82);
                items = v78->fields._items;
                v84 = Method_System_Collections_Generic_List_int__Add__;
                ++v78->fields._version;
                if ( !items )
                  sub_1BCAA3C(v81, v82);
                size = v78->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_int___AddWithResize(
                    v78,
                    currentKey,
                    *(const MethodInfo_3584C38 **)(*(_QWORD *)(v84[4] + 192LL) + 112LL));
                }
                else
                {
                  v78->fields._size = size + 1;
                  items->m_Items[size + 1] = currentKey;
                }
              }
            }
            System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__int___Dispose(
              &v90,
              (const MethodInfo_33552D0 *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__int__Dispose__);
            if ( v78 )
            {
              v86 = System_Collections_Generic_List_int___ToArray(
                      v78,
                      (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
              return BattleLogicTarget__getTargetRandom(this, v86, 0, isDeadToEnableUpHate, v87);
            }
          }
        }
      }
    }
LABEL_30:
    sub_1BCAA3C(Count, v45);
  }
  return BattleLogicTarget__getTargetBase(this, v8, 0, isDeadToEnableUpHate, v73);
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
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x28
  BattleData_o *NoTargetNoActionType; // x0
  __int64 v31; // x1
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  System_Collections_ICollection_o **v38; // x25
  __int64 v39; // x2
  __int64 v40; // x3
  BattleData_o *v41; // x27
  bool v42; // w26
  BattleServantData_o *ServantData; // x0
  const MethodInfo *v44; // x6
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  System_Int32_array *v46; // x0
  const MethodInfo *v47; // x3
  const MethodInfo *v48; // x4
  System_Int32_array *Shuffle_int; // x5
  int32_t result; // w0
  __int64 v51; // x21
  __int64 v52; // x1
  __int64 v53; // x2
  __int64 v54; // x3
  __int64 *v55; // x29
  System_Func_int____bool__o *v56; // x29
  System_Func_object__bool__o *v57; // x0
  __int64 v58; // x2
  const MethodInfo *v59; // x5
  bool v60; // w3
  BattleLogicTarget_o *v61; // x0
  int32_t v62; // w1

  if ( (byte_4B18F09 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattleRandom_getShuffle_int___, *(_QWORD *)&target, *(_QWORD *)&actId);
    sub_1BCA7E0(&System_Func_int____bool__TypeInfo, v17, v18);
    sub_1BCA7E0(&int___TypeInfo, v19, v20);
    sub_1BCA7E0(&Method_BattleLogicTarget___c__DisplayClass17_0__getTargetAiAct_b__1__, v21, v22);
    sub_1BCA7E0(&BattleLogicTarget___c__DisplayClass17_0_TypeInfo, v23, v24);
    sub_1BCA7E0(&Method_BattleLogicTarget___c__DisplayClass17_1__getTargetAiAct_b__0__, v25, v26);
    sub_1BCA7E0(&BattleLogicTarget___c__DisplayClass17_1_TypeInfo, v27, v28);
    byte_4B18F09 = 1;
  }
  v29 = sub_1BCAA2C(
          BattleLogicTarget___c__DisplayClass17_0_TypeInfo,
          *(_QWORD *)&target,
          *(_QWORD *)&actId,
          individuality);
  System_Object___ctor((Il2CppObject *)v29, 0LL);
  if ( !v29 )
    goto LABEL_41;
  *(_QWORD *)(v29 + 16) = individuality;
  v38 = (System_Collections_ICollection_o **)(v29 + 16);
  sub_1BCA784((PartyOrganizationUtility_o *)(v29 + 16), (int64_t)individuality, v32, v33, v34, v35, v36, v37);
  NoTargetNoActionType = (BattleData_o *)sub_1BCA888(int___TypeInfo, 0LL);
  v41 = NoTargetNoActionType;
  if ( aiActEnt )
  {
    NoTargetNoActionType = (BattleData_o *)AiActEntity__GetNoTargetNoActionType(aiActEnt, 0LL);
    v42 = (_DWORD)NoTargetNoActionType != 0;
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
                                             v44);
    v41 = NoTargetNoActionType;
    goto LABEL_10;
  }
  v42 = 0;
  if ( isCheckHate )
    goto LABEL_8;
LABEL_10:
  if ( !v41 )
    goto LABEL_41;
  m_CancellationTokenSource = v41->fields.m_CancellationTokenSource;
  if ( m_CancellationTokenSource )
    goto LABEL_12;
  v51 = sub_1BCAA2C(BattleLogicTarget___c__DisplayClass17_1_TypeInfo, v31, v39, v40);
  System_Object___ctor((Il2CppObject *)v51, 0LL);
  if ( !aiActEnt )
    goto LABEL_21;
  if ( !v51 )
    goto LABEL_41;
  if ( AiActEntity__TryGetMultiIndividuality(aiActEnt, (System_Int32_array_array **)(v51 + 16), 0LL) )
  {
    v55 = &Method_BattleLogicTarget___c__DisplayClass17_1__getTargetAiAct_b__0__;
  }
  else
  {
LABEL_21:
    if ( BasicHelper__IsNullOrEmpty(*v38, 0LL) )
    {
      v56 = 0LL;
      goto LABEL_27;
    }
    v55 = &Method_BattleLogicTarget___c__DisplayClass17_0__getTargetAiAct_b__1__;
    v51 = v29;
  }
  v57 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_int____bool__TypeInfo, v52, v53, v54);
  v58 = *v55;
  v56 = (System_Func_int____bool__o *)v57;
  System_Func_object__bool____ctor(v57, (Il2CppObject *)v51, v58, 0LL);
  if ( !v56 )
    goto LABEL_27;
  NoTargetNoActionType = (BattleData_o *)BattleLogicTarget__narrowDownIndividuality(
                                           this,
                                           targetlist,
                                           v56,
                                           isResurrectable,
                                           target != 13,
                                           v59);
  if ( !NoTargetNoActionType )
LABEL_41:
    sub_1BCAA3C(NoTargetNoActionType, v31);
  v41 = NoTargetNoActionType;
LABEL_27:
  m_CancellationTokenSource = v41->fields.m_CancellationTokenSource;
  if ( v42 && v56 != 0LL && m_CancellationTokenSource == 0LL )
    return -1;
LABEL_12:
  if ( m_CancellationTokenSource )
    v46 = (System_Int32_array *)v41;
  else
    v46 = targetlist;
  Shuffle_int = BattleRandom__getShuffle_int_(v46, (const MethodInfo_2F04208 *)Method_BattleRandom_getShuffle_int___);
  switch ( target )
  {
    case 2:
      return BattleLogicTarget__getTargetHighHp(this, Shuffle_int, isDeadToEnableUpHate, v47);
    case 3:
      return BattleLogicTarget__getTargetLowHp(this, Shuffle_int, isDeadToEnableUpHate, v47);
    case 10:
      return BattleLogicTarget__getTargetNpTurnLower(this, Shuffle_int, isDeadToEnableUpHate, v47);
    case 11:
      return BattleLogicTarget__getTargetNpGaugeHeighter(this, Shuffle_int, isDeadToEnableUpHate, v47);
    case 12:
      return BattleLogicTarget__getRevenge(this, actId, Shuffle_int, isDeadToEnableUpHate, v48);
    case 13:
      return BattleLogicTarget__getTargetActiveIndividualities(
               this,
               (System_Int32_array *)*v38,
               Shuffle_int,
               aiActEnt,
               isDeadToEnableUpHate,
               (const MethodInfo *)Shuffle_int);
    case 14:
      return BattleLogicTarget__getTargetActiveBuff(
               this,
               (System_Int32_array *)*v38,
               Shuffle_int,
               isDeadToEnableUpHate,
               v48);
    case 15:
      v60 = isDeadToEnableUpHate;
      v61 = this;
      v62 = 0;
      goto LABEL_40;
    case 16:
      v60 = isDeadToEnableUpHate;
      v62 = 1;
      goto LABEL_39;
    case 17:
      v60 = isDeadToEnableUpHate;
      v62 = 2;
LABEL_39:
      v61 = this;
LABEL_40:
      result = BattleLogicTarget__getTargetPosition(v61, v62, Shuffle_int, v60, v42, (const MethodInfo *)Shuffle_int);
      break;
    default:
      result = BattleLogicTarget__getTargetBase(this, Shuffle_int, isResurrectable, isDeadToEnableUpHate, v48);
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
    sub_1BCAA3C(this, targetlist);
  v5 = *(_QWORD *)&targetlist->max_length;
  if ( (int)v5 < 1 )
    return -1;
  v8 = this;
  v9 = 0LL;
  v10 = isResurrectable;
  while ( 1 )
  {
    if ( v9 >= (unsigned int)v5 )
      sub_1BCAA44(this, targetlist);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  BattleData_o *data; // x0
  const MethodInfo *v18; // x2
  struct System_Int32_array *actorIdlist; // x8
  struct BattleData_o *v20; // x21
  struct System_Int32_array *v21; // x8
  int v22; // w22
  System_Int32_array *v23; // x3
  BattleData_o *v24; // x0
  struct BattleData_o *v25; // x8
  BattleServantData_o *ServantData; // x0
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  BattleLogicTarget___c_c *v30; // x8
  Il2CppObject *v31; // x21
  System_Predicate_object__o *_9__20_0; // x22
  Il2CppObject *v33; // x23
  struct BattleLogicTarget___c_StaticFields *static_fields; // x0
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  Il2CppObject *v41; // x0
  BattleServantData_o *v42; // x21
  const MethodInfo *v43; // x2
  struct BattleData_o *v44; // x8
  struct System_Int32_array *v46; // x8
  int32_t v47; // w1
  const MethodInfo *v48; // x2
  struct BattleData_o *v49; // x8
  struct BattleData_o *v50; // x8
  System_Int32_array *v51; // x21
  __int64 v52; // x1
  __int64 v53; // x2
  __int64 v54; // x3
  const MethodInfo *v55; // x4
  System_Comparison_int__o *v56; // x22
  struct BattleData_o *v57; // x22
  const MethodInfo *v58; // x2
  const MethodInfo *v59; // x2
  struct System_Int32_array *v60; // x8
  struct BattleData_o *v61; // x21
  int32_t v62; // w22
  System_Int32_array *v63; // x3
  struct BattleData_o *v64; // x8
  struct BattleData_o *v65; // x8

  v3 = task;
  if ( (byte_4B18F0C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_Sort_int____76835504, task, method);
    sub_1BCA7E0(&Method_BasicHelper_TakeIf_BattleServantData___, v5, v6);
    sub_1BCA7E0(&Method_BattleLogicTarget__getTargetBattleServantData_b__20_1__, v7, v8);
    sub_1BCA7E0(&System_Comparison_int__TypeInfo, v9, v10);
    sub_1BCA7E0(&System_Predicate_BattleServantData__TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_BattleLogicTarget___c__getTargetBattleServantData_b__20_0__, v13, v14);
    sub_1BCA7E0(&BattleLogicTarget___c_TypeInfo, v15, v16);
    byte_4B18F0C = 1;
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
    BattleLogicTarget__updateEnemyTarget(this, 0LL, v18);
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
    v20 = this->fields.data;
    if ( actorIdlist )
    {
      if ( !actorIdlist->max_length )
        goto LABEL_85;
      task = (BattleLogicTask_o *)(unsigned int)actorIdlist->m_Items[1];
      if ( !v20 )
        goto LABEL_84;
    }
    else
    {
      task = (BattleLogicTask_o *)0xFFFFFFFFLL;
      if ( !v20 )
        goto LABEL_84;
    }
    v24 = this->fields.data;
    v23 = 0LL;
  }
  else
  {
    v21 = v3->fields.actorIdlist;
    v20 = this->fields.data;
    if ( v21 )
    {
      if ( !v21->max_length )
        goto LABEL_85;
      v22 = v21->m_Items[1];
    }
    else
    {
      v22 = -1;
    }
    data = (BattleData_o *)v3->fields.skillInfo;
    if ( data )
    {
      data = (BattleData_o *)BattleSkillInfoData__GetAddIndiv((BattleSkillInfoData_o *)data, 0LL);
      v23 = (System_Int32_array *)data;
      if ( !v20 )
        goto LABEL_84;
    }
    else
    {
      v23 = 0LL;
      if ( !v20 )
        goto LABEL_84;
    }
    v24 = v20;
    LODWORD(task) = v22;
  }
  data = (BattleData_o *)BattleData__getTargetLock(v24, (int32_t)task, 0, v23, 0LL);
  v20->fields.globaltargetId = (int)data;
LABEL_29:
  v25 = this->fields.data;
  if ( !v25 )
    goto LABEL_84;
  data = (BattleData_o *)v25->fields.perf;
  if ( !data )
    goto LABEL_84;
  BattlePerformance__reViewTargetMarks((BattlePerformance_o *)data, 0LL);
LABEL_32:
  data = this->fields.data;
  if ( !data )
    goto LABEL_84;
  ServantData = BattleData__getServantData(data, data->fields.globaltargetId, 0LL);
  v30 = BattleLogicTarget___c_TypeInfo;
  v31 = (Il2CppObject *)ServantData;
  if ( !BattleLogicTarget___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicTarget___c_TypeInfo, v27);
    v30 = BattleLogicTarget___c_TypeInfo;
  }
  _9__20_0 = (System_Predicate_object__o *)v30->static_fields->__9__20_0;
  if ( !_9__20_0 )
  {
    if ( !v30->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v30, v27);
      v30 = BattleLogicTarget___c_TypeInfo;
    }
    v33 = (Il2CppObject *)v30->static_fields->__9;
    _9__20_0 = (System_Predicate_object__o *)sub_1BCAA2C(System_Predicate_BattleServantData__TypeInfo, v27, v28, v29);
    System_Predicate_object____ctor(
      _9__20_0,
      v33,
      Method_BattleLogicTarget___c__getTargetBattleServantData_b__20_0__,
      0LL);
    static_fields = BattleLogicTarget___c_TypeInfo->static_fields;
    static_fields->__9__20_0 = (struct System_Predicate_BattleServantData__o *)_9__20_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__20_0,
      (int64_t)_9__20_0,
      v35,
      v36,
      v37,
      v38,
      v39,
      v40);
  }
  v41 = BasicHelper__TakeIf_object_(
          v31,
          (System_Predicate_T__o *)_9__20_0,
          (const MethodInfo_2F02DD0 *)Method_BasicHelper_TakeIf_BattleServantData___);
  if ( v41 )
  {
    v42 = (BattleServantData_o *)v41;
    data = (BattleData_o *)BattleServantData__isAlive((BattleServantData_o *)v41, 0, 0LL);
    if ( ((unsigned __int8)data & 1) != 0 )
    {
      v44 = this->fields.data;
      if ( v44 && v3 )
        goto LABEL_43;
      goto LABEL_84;
    }
    data = (BattleData_o *)BattleServantData__isAlive(v42, 0, 0LL);
    if ( ((unsigned __int8)data & 1) == 0 )
    {
      if ( !v3 )
        goto LABEL_84;
      v46 = v3->fields.actorIdlist;
      if ( v46 )
      {
        if ( !v46->max_length )
          goto LABEL_85;
        v47 = v46->m_Items[1];
      }
      else
      {
        v47 = -1;
      }
      data = (BattleData_o *)BattleServantData__checkOverKill(v42, v47, 0LL);
      if ( ((unsigned __int8)data & 1) != 0 )
      {
        v44 = this->fields.data;
        if ( v44 )
        {
LABEL_43:
          BattleLogicTask__setTarget(v3, v44->fields.globaltargetId, v43);
          return v42;
        }
        goto LABEL_84;
      }
    }
    if ( !BattleServantData__isAlive(v42, 0, 0LL) )
    {
      data = (BattleData_o *)BattleServantData__isGuts(v42, 0LL);
      if ( ((unsigned __int8)data & 1) != 0 )
      {
        v49 = this->fields.data;
        if ( v49 && v3 )
        {
          BattleLogicTask__setTarget(v3, v49->fields.globaltargetId, v48);
          v42->fields.overkillTargetId = -1;
          return v42;
        }
        goto LABEL_84;
      }
    }
    v42->fields.overkillTargetId = -1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_84;
  data = (BattleData_o *)BattleData__getFieldEnemyServantIDList(data, 1, 0LL);
  v50 = this->fields.data;
  if ( !v50 )
    goto LABEL_84;
  v51 = (System_Int32_array *)data;
  data = (BattleData_o *)v50->fields.quest_ent;
  if ( !data )
    goto LABEL_84;
  if ( QuestEntity__HasFlag((QuestEntity_o *)data, 0x40000000000000LL, 0LL) )
  {
    v56 = (System_Comparison_int__o *)sub_1BCAA2C(System_Comparison_int__TypeInfo, v52, v53, v54);
    System_Comparison_int____ctor(
      v56,
      (Il2CppObject *)this,
      Method_BattleLogicTarget__getTargetBattleServantData_b__20_1__,
      0LL);
    System_Array__Sort_int__49153640(
      v51,
      (System_Comparison_T__o *)v56,
      (const MethodInfo_2EE0668 *)Method_System_Array_Sort_int____76835504);
  }
  v57 = this->fields.data;
  data = (BattleData_o *)BattleLogicTarget__getTargetBase(this, v51, 0, 1, v55);
  if ( !v57 )
    goto LABEL_84;
  v57->fields.globaltargetId = (int)data;
  BattleLogicTarget__updateEnemyTarget(this, v51, v58);
  data = this->fields.data;
  if ( !data )
    goto LABEL_84;
  data = (BattleData_o *)BattleData__isTargetLock(data, 0LL);
  if ( ((unsigned __int8)data & 1) == 0 )
    goto LABEL_80;
  if ( !v3 )
    goto LABEL_84;
  v60 = v3->fields.actorIdlist;
  v61 = this->fields.data;
  if ( !v60 )
  {
    v62 = -1;
    goto LABEL_73;
  }
  if ( !v60->max_length )
LABEL_85:
    sub_1BCAA44(data, task);
  v62 = v60->m_Items[1];
LABEL_73:
  data = (BattleData_o *)v3->fields.skillInfo;
  if ( data )
  {
    data = (BattleData_o *)BattleSkillInfoData__GetAddIndiv((BattleSkillInfoData_o *)data, 0LL);
    v63 = (System_Int32_array *)data;
    if ( !v61 )
      goto LABEL_84;
  }
  else
  {
    v63 = 0LL;
    if ( !v61 )
      goto LABEL_84;
  }
  data = (BattleData_o *)BattleData__getTargetLock(v61, v62, 0, v63, 0LL);
  v61->fields.globaltargetId = (int)data;
  v64 = this->fields.data;
  if ( !v64 || (data = (BattleData_o *)v64->fields.perf) == 0LL )
LABEL_84:
    sub_1BCAA3C(data, task);
  BattlePerformance__reViewTargetMarks((BattlePerformance_o *)data, 0LL);
LABEL_80:
  v65 = this->fields.data;
  if ( !v65 )
    goto LABEL_84;
  if ( !v3 )
    goto LABEL_84;
  BattleLogicTask__setTarget(v3, v65->fields.globaltargetId, v59);
  data = this->fields.data;
  if ( !data )
    goto LABEL_84;
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  System_Comparison_int__o *v11; // x22
  const MethodInfo *v12; // x4

  if ( (byte_4B18F03 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_Sort_int____76835504, targetlist, isDeadToEnableUpHate);
    sub_1BCA7E0(&Method_BattleLogicTarget__getTargetHighHp_b__9_0__, v7, v8);
    sub_1BCA7E0(&System_Comparison_int__TypeInfo, v9, v10);
    byte_4B18F03 = 1;
  }
  v11 = (System_Comparison_int__o *)sub_1BCAA2C(
                                      System_Comparison_int__TypeInfo,
                                      targetlist,
                                      isDeadToEnableUpHate,
                                      method);
  System_Comparison_int____ctor(v11, (Il2CppObject *)this, Method_BattleLogicTarget__getTargetHighHp_b__9_0__, 0LL);
  System_Array__Sort_int__49153640(
    targetlist,
    (System_Comparison_T__o *)v11,
    (const MethodInfo_2EE0668 *)Method_System_Array_Sort_int____76835504);
  return BattleLogicTarget__getTargetBase(this, targetlist, 0, isDeadToEnableUpHate, v12);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BattleLogicTarget__getTargetLowHp(
        BattleLogicTarget_o *this,
        System_Int32_array *targetlist,
        bool isDeadToEnableUpHate,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  System_Comparison_int__o *v11; // x22
  const MethodInfo *v12; // x4

  if ( (byte_4B18F04 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_Sort_int____76835504, targetlist, isDeadToEnableUpHate);
    sub_1BCA7E0(&Method_BattleLogicTarget__getTargetLowHp_b__10_0__, v7, v8);
    sub_1BCA7E0(&System_Comparison_int__TypeInfo, v9, v10);
    byte_4B18F04 = 1;
  }
  v11 = (System_Comparison_int__o *)sub_1BCAA2C(
                                      System_Comparison_int__TypeInfo,
                                      targetlist,
                                      isDeadToEnableUpHate,
                                      method);
  System_Comparison_int____ctor(v11, (Il2CppObject *)this, Method_BattleLogicTarget__getTargetLowHp_b__10_0__, 0LL);
  System_Array__Sort_int__49153640(
    targetlist,
    (System_Comparison_T__o *)v11,
    (const MethodInfo_2EE0668 *)Method_System_Array_Sort_int____76835504);
  return BattleLogicTarget__getTargetBase(this, targetlist, 0, isDeadToEnableUpHate, v12);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BattleLogicTarget__getTargetNpGaugeHeighter(
        BattleLogicTarget_o *this,
        System_Int32_array *targetlist,
        bool isDeadToEnableUpHate,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  System_Comparison_int__o *v11; // x22
  const MethodInfo *v12; // x4

  if ( (byte_4B18F06 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_Sort_int____76835504, targetlist, isDeadToEnableUpHate);
    sub_1BCA7E0(&Method_BattleLogicTarget__getTargetNpGaugeHeighter_b__12_0__, v7, v8);
    sub_1BCA7E0(&System_Comparison_int__TypeInfo, v9, v10);
    byte_4B18F06 = 1;
  }
  v11 = (System_Comparison_int__o *)sub_1BCAA2C(
                                      System_Comparison_int__TypeInfo,
                                      targetlist,
                                      isDeadToEnableUpHate,
                                      method);
  System_Comparison_int____ctor(
    v11,
    (Il2CppObject *)this,
    Method_BattleLogicTarget__getTargetNpGaugeHeighter_b__12_0__,
    0LL);
  System_Array__Sort_int__49153640(
    targetlist,
    (System_Comparison_T__o *)v11,
    (const MethodInfo_2EE0668 *)Method_System_Array_Sort_int____76835504);
  return BattleLogicTarget__getTargetBase(this, targetlist, 0, isDeadToEnableUpHate, v12);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BattleLogicTarget__getTargetNpTurnLower(
        BattleLogicTarget_o *this,
        System_Int32_array *targetlist,
        bool isDeadToEnableUpHate,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  System_Comparison_int__o *v11; // x22
  const MethodInfo *v12; // x4

  if ( (byte_4B18F05 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_Sort_int____76835504, targetlist, isDeadToEnableUpHate);
    sub_1BCA7E0(&Method_BattleLogicTarget__getTargetNpTurnLower_b__11_0__, v7, v8);
    sub_1BCA7E0(&System_Comparison_int__TypeInfo, v9, v10);
    byte_4B18F05 = 1;
  }
  v11 = (System_Comparison_int__o *)sub_1BCAA2C(
                                      System_Comparison_int__TypeInfo,
                                      targetlist,
                                      isDeadToEnableUpHate,
                                      method);
  System_Comparison_int____ctor(
    v11,
    (Il2CppObject *)this,
    Method_BattleLogicTarget__getTargetNpTurnLower_b__11_0__,
    0LL);
  System_Array__Sort_int__49153640(
    targetlist,
    (System_Comparison_T__o *)v11,
    (const MethodInfo_2EE0668 *)Method_System_Array_Sort_int____76835504);
  return BattleLogicTarget__getTargetBase(this, targetlist, 0, isDeadToEnableUpHate, v12);
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
    sub_1BCAA3C(this, *(_QWORD *)&position);
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
      sub_1BCAA44(this, *(_QWORD *)&position);
    return targetlist->m_Items[v12 + 1];
  }
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BattleLogicTarget__getTargetRandom(
        BattleLogicTarget_o *this,
        System_Int32_array *targetlist,
        bool isResurrectable,
        bool isDeadToEnableUpHate,
        const MethodInfo *method)
{
  System_Int32_array *Shuffle_int; // x0
  const MethodInfo *v10; // x4

  if ( (byte_4B18F02 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattleRandom_getShuffle_int___, targetlist, isResurrectable);
    byte_4B18F02 = 1;
  }
  Shuffle_int = BattleRandom__getShuffle_int_(
                  targetlist,
                  (const MethodInfo_2F04208 *)Method_BattleRandom_getShuffle_int___);
  return BattleLogicTarget__getTargetBase(this, Shuffle_int, isResurrectable, isDeadToEnableUpHate, v10);
}


// local variable allocation has failed, the output may be wrong!
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
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  System_Collections_Generic_List_int__o *v21; // x22
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  BattleBuffData_CheckIndividualitiesData_o *v25; // x26
  System_Int32_array *data; // x0
  __int64 v27; // x1
  System_Int32_array *selfConcatSvtIndividualities_k__BackingField; // x0
  __int64 v29; // x8
  System_Int32_array *v30; // x23
  unsigned __int64 v31; // x26
  int32_t *v32; // x28
  bool v33; // w24
  BattleServantData_o *ServantData; // x25
  const MethodInfo *v35; // x3
  const MethodInfo *v36; // x2
  struct System_Int32_array *items; // x8
  _QWORD *v38; // x9
  __int64 size; // x10
  struct BattleData_o *v40; // x8

  if ( (byte_4B18F0B & 1) == 0 )
  {
    sub_1BCA7E0(&BattleBuffData_CheckIndividualitiesData_TypeInfo, list, atkSvt);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__ToArray__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v17, v18);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v19, v20);
    byte_4B18F0B = 1;
  }
  v21 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    list,
                                                    atkSvt,
                                                    isResurrectable);
  System_Collections_Generic_List_int____ctor(
    v21,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( atkSvt )
  {
    v25 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1BCAA2C(
                                                         BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                         v22,
                                                         v23,
                                                         v24);
    BattleBuffData_CheckIndividualitiesData___ctor_43379556(v25, atkSvt, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
    if ( !v25 )
      goto LABEL_30;
    selfConcatSvtIndividualities_k__BackingField = v25->fields._selfConcatSvtIndividualities_k__BackingField;
  }
  else
  {
    selfConcatSvtIndividualities_k__BackingField = 0LL;
  }
  data = CommonFunction__JoinIndiv(selfConcatSvtIndividualities_k__BackingField, addIndiv, 0LL);
  if ( !list )
    goto LABEL_30;
  v29 = *(_QWORD *)&list->max_length;
  if ( (int)v29 >= 1 )
  {
    v30 = data;
    v31 = 0LL;
    v32 = &list->m_Items[1];
    v33 = isResurrectable;
    do
    {
      if ( v31 >= (unsigned int)v29 )
LABEL_31:
        sub_1BCAA44(data, v27);
      data = (System_Int32_array *)this->fields.data;
      if ( !data )
        goto LABEL_30;
      ServantData = BattleData__getServantData((BattleData_o *)data, v32[v31], 0LL);
      data = (System_Int32_array *)BattleLogicTarget__IsTargetAlive(this, ServantData, v33, v35);
      if ( ((unsigned __int8)data & 1) != 0
        || (data = (System_Int32_array *)BattleLogicTarget__IsTargetGuts(this, ServantData, v36),
            ((unsigned __int8)data & 1) != 0) )
      {
        if ( !ServantData )
          goto LABEL_30;
      }
      else
      {
        v40 = this->fields.data;
        if ( !v40 || !ServantData )
          goto LABEL_30;
        data = (System_Int32_array *)BattleServantData__checkDeadTurn(ServantData, v40->fields.typeTurn, 0LL);
        if ( ((unsigned __int8)data & 1) == 0 || !isDeadToEnableUpHate )
          goto LABEL_27;
      }
      data = (System_Int32_array *)BattleServantData__isUpHate(ServantData, v30, 0LL);
      if ( ((unsigned __int8)data & 1) != 0 )
      {
        if ( v31 >= list->max_length )
          goto LABEL_31;
        if ( !v21 )
          goto LABEL_30;
        v27 = (unsigned int)v32[v31];
        items = v21->fields._items;
        v38 = Method_System_Collections_Generic_List_int__Add__;
        ++v21->fields._version;
        if ( !items )
          goto LABEL_30;
        size = v21->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v21,
            v27,
            *(const MethodInfo_3584C38 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
        }
        else
        {
          v21->fields._size = size + 1;
          items->m_Items[size + 1] = v27;
        }
      }
LABEL_27:
      LODWORD(v29) = list->max_length;
    }
    while ( (__int64)++v31 < (int)v29 );
  }
  if ( !v21 )
LABEL_30:
    sub_1BCAA3C(data, v27);
  return System_Collections_Generic_List_int___ToArray(
           v21,
           (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall BattleLogicTarget__narrowDownIndividuality(
        BattleLogicTarget_o *this,
        System_Int32_array *list,
        System_Func_int____bool__o *funcContainsIndividuality,
        bool isResurrectable,
        bool isCheckBuff,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  System_Collections_Generic_List_int__o *v19; // x23
  BattleData_o *data; // x0
  __int64 v21; // x1
  __int64 v22; // x8
  unsigned __int64 v23; // x27
  int32_t *v24; // x29
  bool v25; // w24
  BattleServantData_o *ServantData; // x25
  const MethodInfo *v27; // x3
  const MethodInfo *v28; // x2
  __int64 v29; // x3
  System_Collections_Generic_List_int__o *v30; // x26
  System_Collections_Generic_IEnumerable_T__o *BuffIndividualities; // x0
  struct System_Int32_array *items; // x8
  _QWORD *v33; // x9
  __int64 size; // x10

  if ( (byte_4B18F0A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__AddRange__, list, funcContainsIndividuality);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__ToArray__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v15, v16);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v17, v18);
    byte_4B18F0A = 1;
  }
  v19 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    list,
                                                    funcContainsIndividuality,
                                                    isResurrectable);
  System_Collections_Generic_List_int____ctor(
    v19,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !list )
    goto LABEL_25;
  v22 = *(_QWORD *)&list->max_length;
  if ( (int)v22 >= 1 )
  {
    v23 = 0LL;
    v24 = &list->m_Items[1];
    v25 = isResurrectable;
    do
    {
      if ( v23 >= (unsigned int)v22 )
LABEL_26:
        sub_1BCAA44(data, v21);
      data = this->fields.data;
      if ( !data )
        goto LABEL_25;
      ServantData = BattleData__getServantData(data, v24[v23], 0LL);
      if ( BattleLogicTarget__IsTargetAlive(this, ServantData, v25, v27)
        || (data = (BattleData_o *)BattleLogicTarget__IsTargetGuts(this, ServantData, v28),
            ((unsigned __int8)data & 1) != 0) )
      {
        v30 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                          System_Collections_Generic_List_int__TypeInfo,
                                                          v21,
                                                          v28,
                                                          v29);
        System_Collections_Generic_List_int____ctor(
          v30,
          (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
        if ( !ServantData )
          goto LABEL_25;
        data = (BattleData_o *)BattleServantData__getIndividualities(ServantData, 0LL, 1, 0, 0LL);
        if ( !v30 )
          goto LABEL_25;
        System_Collections_Generic_List_int___AddRange(
          v30,
          (System_Collections_Generic_IEnumerable_T__o *)data,
          (const MethodInfo_3584E44 *)Method_System_Collections_Generic_List_int__AddRange__);
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
            v30,
            BuffIndividualities,
            (const MethodInfo_3584E44 *)Method_System_Collections_Generic_List_int__AddRange__);
        }
        data = (BattleData_o *)System_Collections_Generic_List_int___ToArray(
                                 v30,
                                 (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
        if ( !funcContainsIndividuality )
          goto LABEL_25;
        data = (BattleData_o *)((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, BattleData_o *, _QWORD))funcContainsIndividuality->fields.m_target)(
                                 funcContainsIndividuality->fields.original_method_info,
                                 data,
                                 *(_QWORD *)&funcContainsIndividuality->fields.extra_arg);
        if ( ((unsigned __int8)data & 1) != 0 )
        {
          if ( v23 >= list->max_length )
            goto LABEL_26;
          if ( !v19 )
            goto LABEL_25;
          v21 = (unsigned int)v24[v23];
          items = v19->fields._items;
          v33 = Method_System_Collections_Generic_List_int__Add__;
          ++v19->fields._version;
          if ( !items )
            goto LABEL_25;
          size = v19->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v19,
              v21,
              *(const MethodInfo_3584C38 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
          }
          else
          {
            v19->fields._size = size + 1;
            items->m_Items[size + 1] = v21;
          }
        }
      }
      LODWORD(v22) = list->max_length;
    }
    while ( (__int64)++v23 < (int)v22 );
  }
  if ( !v19 )
LABEL_25:
    sub_1BCAA3C(data, v21);
  return System_Collections_Generic_List_int___ToArray(
           v19,
           (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
}


void __fastcall BattleLogicTarget__setInit(BattleLogicTarget_o *this, BattleData_o *data, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.data = data;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)data, (int64_t)method, v3, v4, v5, v6, v7);
}


void __fastcall BattleLogicTarget__updateEnemyTarget(
        BattleLogicTarget_o *this,
        System_Int32_array *targetIdList,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Int32_array *FieldEnemyServantIDList; // x20
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  BattleData_o *data; // x0
  System_Collections_Generic_List_int__o *v11; // x21
  __int64 v12; // x8
  unsigned __int64 v13; // x23
  int32_t *v14; // x24
  BattleServantData_o *v15; // x22
  struct System_Int32_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10

  FieldEnemyServantIDList = targetIdList;
  if ( (byte_4B18F0D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, targetIdList, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v6, v7);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v8, v9);
    byte_4B18F0D = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_26;
  if ( !data->fields.isMultiTargetBattle )
  {
    if ( !FieldEnemyServantIDList )
      FieldEnemyServantIDList = BattleData__getFieldEnemyServantIDList(data, 1, 0LL);
    v11 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                      System_Collections_Generic_List_int__TypeInfo,
                                                      targetIdList,
                                                      method,
                                                      v3);
    System_Collections_Generic_List_int____ctor(
      v11,
      (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
    data = this->fields.data;
    if ( !data )
      goto LABEL_26;
    data = (BattleData_o *)BattleData__getFieldEnemyServantIDList(data, 1, 0LL);
    if ( !FieldEnemyServantIDList )
      goto LABEL_26;
    v12 = *(_QWORD *)&FieldEnemyServantIDList->max_length;
    data = this->fields.data;
    if ( (int)v12 >= 1 )
    {
      v13 = 0LL;
      v14 = &FieldEnemyServantIDList->m_Items[1];
      while ( 1 )
      {
        if ( v13 >= (unsigned int)v12 )
LABEL_27:
          sub_1BCAA44(data, targetIdList);
        if ( !data )
          break;
        data = (BattleData_o *)BattleData__getEnemyServantData(data, v14[v13], 0LL);
        if ( !data )
          break;
        v15 = (BattleServantData_o *)data;
        if ( BattleServantData__isAlive((BattleServantData_o *)data, 0, 0LL) || BattleServantData__isGuts(v15, 0LL) )
        {
          data = (BattleData_o *)BattleServantData__isUpHate(v15, 0LL, 0LL);
          if ( ((unsigned __int8)data & 1) != 0 )
          {
            if ( v13 >= FieldEnemyServantIDList->max_length )
              goto LABEL_27;
            if ( !v11 )
              break;
            targetIdList = (System_Int32_array *)(unsigned int)v14[v13];
            items = v11->fields._items;
            v17 = Method_System_Collections_Generic_List_int__Add__;
            ++v11->fields._version;
            if ( !items )
              break;
            size = v11->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v11,
                (int32_t)targetIdList,
                *(const MethodInfo_3584C38 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
            }
            else
            {
              v11->fields._size = size + 1;
              items->m_Items[size + 1] = (int)targetIdList;
            }
          }
        }
        LODWORD(v12) = FieldEnemyServantIDList->max_length;
        data = this->fields.data;
        if ( (__int64)++v13 >= (int)v12 )
          goto LABEL_24;
      }
LABEL_26:
      sub_1BCAA3C(data, targetIdList);
    }
LABEL_24:
    if ( !data )
      goto LABEL_26;
    BattleData__setTargetLock(data, v11, 0LL);
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
      sub_1BCAA44(data, method);
    v7 = this->fields.data;
    if ( v7 )
    {
      v7->fields.globaltargetId = *((_DWORD *)&v5->fields.rootfsm + v6);
      return;
    }
LABEL_16:
    sub_1BCAA3C(data, method);
  }
}


void __fastcall BattleLogicTarget___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B18F0E & 1) == 0 )
  {
    sub_1BCA7E0(&BattleLogicTarget___c_TypeInfo, v1, v2);
    byte_4B18F0E = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(BattleLogicTarget___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  BattleLogicTarget___c_TypeInfo->static_fields->__9 = (struct BattleLogicTarget___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)BattleLogicTarget___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
    sub_1BCAA3C(this, 0LL);
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
  if ( (byte_4B18F0F & 1) == 0 )
  {
    this = (BattleLogicTarget___c__DisplayClass14_0_o *)sub_1BCA7E0(
                                                          &Method_System_Collections_Generic_Dictionary_int__int__set_Item__,
                                                          *(_QWORD *)&x,
                                                          *(_QWORD *)&y);
    byte_4B18F0F = 1;
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
          (const MethodInfo_31FD260 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__),
        (this = (BattleLogicTarget___c__DisplayClass14_0_o *)v6->fields.indNum) == 0LL) )
  {
LABEL_12:
    sub_1BCAA3C(this, *(_QWORD *)&x);
  }
  System_Collections_Generic_Dictionary_int__int___set_Item(
    (System_Collections_Generic_Dictionary_int__int__o *)this,
    y,
    v12,
    (const MethodInfo_31FD260 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
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
    sub_1BCAA3C(this, *(_QWORD *)&x);
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

  if ( (byte_4B18F10 & 1) == 0 )
  {
    sub_1BCA7E0(&Individuality_TypeInfo, self, method);
    byte_4B18F10 = 1;
  }
  individuality = this->fields.individuality;
  if ( !Individuality_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Individuality_TypeInfo, self);
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

  if ( (byte_4B18F11 & 1) == 0 )
  {
    sub_1BCA7E0(&Individuality_TypeInfo, self, method);
    byte_4B18F11 = 1;
  }
  multiIndividuality = this->fields.multiIndividuality;
  if ( !Individuality_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Individuality_TypeInfo, self);
  return Individuality__CheckSignedMultiIndividuality(self, multiIndividuality, 0LL);
}