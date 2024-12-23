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
  if ( (byte_4B6995E & 1) == 0 )
  {
    this = (BattleLogicTarget_o *)sub_1BE4ACC(&Method_BasicHelper_ContainsSelfNotNull_int___, svtData);
    byte_4B6995E = 1;
  }
  if ( !svtData )
    sub_1BE4D28(this, svtData);
  return !BasicHelper__ContainsSelfNotNull_int_(
            (System_Collections_Generic_HashSet_T__o *)v6->fields.tempDeadSvtHash,
            svtData->fields.uniqueId,
            (const MethodInfo_2F445FC *)Method_BasicHelper_ContainsSelfNotNull_int___)
      && BattleServantData__isAlive(svtData, isResurrectable, 0LL);
}


bool __fastcall BattleLogicTarget__IsTargetGuts(
        BattleLogicTarget_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  BattleLogicTarget_o *v4; // x20

  v4 = this;
  if ( (byte_4B6995F & 1) == 0 )
  {
    this = (BattleLogicTarget_o *)sub_1BE4ACC(&Method_BasicHelper_ContainsSelfNotNull_int___, svtData);
    byte_4B6995F = 1;
  }
  if ( !svtData )
    sub_1BE4D28(this, svtData);
  return !svtData->fields.isDeadAnime
      && BasicHelper__ContainsSelfNotNull_int_(
           (System_Collections_Generic_HashSet_T__o *)v4->fields.tempDeadSvtHash,
           svtData->fields.uniqueId,
           (const MethodInfo_2F445FC *)Method_BasicHelper_ContainsSelfNotNull_int___)
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
    sub_1BE4D28(data, *(_QWORD *)&a);
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
    sub_1BE4D28(data, *(_QWORD *)&x);
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
    sub_1BE4D28(data, *(_QWORD *)&x);
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
    sub_1BE4D28(data, *(_QWORD *)&x);
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
    sub_1BE4D28(data, *(_QWORD *)&x);
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

  if ( (byte_4B69960 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int__Add__, targetlist);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int__ToArray__, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int___ctor__, v8);
    sub_1BE4ACC(&System_Collections_Generic_List_int__TypeInfo, v9);
    byte_4B69960 = 1;
  }
  v10 = (System_Collections_Generic_List_int__o *)sub_1BE4D18(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v10,
    (const MethodInfo_35CE9AC *)Method_System_Collections_Generic_List_int___ctor__);
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
        sub_1BE4D30(data, uniqueId);
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
                *(const MethodInfo_35CF200 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
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
    sub_1BE4D28(data, uniqueId);
  }
LABEL_20:
  if ( !v10 )
    goto LABEL_22;
  return System_Collections_Generic_List_int___ToArray(
           v10,
           (const MethodInfo_35D0CB8 *)Method_System_Collections_Generic_List_int__ToArray__);
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
    sub_1BE4D28(data, *(_QWORD *)&uniqueId);
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
    sub_1BE4D28(data, *(_QWORD *)&actId);
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
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  System_Comparison_int__o *v27; // x22
  const MethodInfo *v28; // x4

  if ( (byte_4B69967 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Array_Sort_int____77157216, ids);
    sub_1BE4ACC(&System_Comparison_int__TypeInfo, v9);
    sub_1BE4ACC(&Method_BattleLogicTarget___c__DisplayClass15_0__getTargetActiveBuff_b__0__, v10);
    sub_1BE4ACC(&BattleLogicTarget___c__DisplayClass15_0_TypeInfo, v11);
    byte_4B69967 = 1;
  }
  v12 = sub_1BE4D18(BattleLogicTarget___c__DisplayClass15_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12 )
    sub_1BE4D28(v13, v14);
  *(_QWORD *)(v12 + 16) = this;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v12 + 16), (int64_t)this, v15, v16, v17, v18, v19, v20);
  *(_QWORD *)(v12 + 24) = ids;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v12 + 24), (int64_t)ids, v21, v22, v23, v24, v25, v26);
  v27 = (System_Comparison_int__o *)sub_1BE4D18(System_Comparison_int__TypeInfo);
  System_Comparison_int____ctor(
    v27,
    (Il2CppObject *)v12,
    Method_BattleLogicTarget___c__DisplayClass15_0__getTargetActiveBuff_b__0__,
    0LL);
  System_Array__Sort_int__49441276(
    targetlist,
    (System_Comparison_T__o *)v27,
    (const MethodInfo_2F269FC *)Method_System_Array_Sort_int____77157216);
  return BattleLogicTarget__getTargetBase(this, targetlist, 0, isDeadToEnableUpHate, v28);
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
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  const MethodInfo *v42; // x3
  System_Collections_Generic_Dictionary_int__int__o *v43; // x23
  System_Collections_Generic_Dictionary_int__int__o **v44; // x22
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  System_Comparison_int__o *v51; // x23
  const MethodInfo *v52; // x4
  int32_t Item; // w23
  System_Collections_Generic_List_int__o *v54; // x21
  __int64 v55; // x1
  int32_t currentKey; // w24
  __int64 v57; // x0
  __int64 v58; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v60; // x9
  __int64 size; // x10
  System_Int32_array *v62; // x0
  const MethodInfo *v63; // x4
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o v65; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o v66; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4B69966 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Array_Sort_int____77157216, indv);
    sub_1BE4ACC(&System_Comparison_int__TypeInfo, v11);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v12);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_int__int__get_Count__, v13);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__, v14);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_int__int__get_Keys__, v15);
    sub_1BE4ACC(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v16);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__int__Dispose__, v17);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__int__MoveNext__, v18);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__int__get_Current__, v19);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_KeyCollection_int__int__GetEnumerator__, v20);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int__Add__, v21);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int__ToArray__, v22);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int___ctor__, v23);
    sub_1BE4ACC(&System_Collections_Generic_List_int__TypeInfo, v24);
    sub_1BE4ACC(&Method_BattleLogicTarget___c__DisplayClass14_0__getTargetActiveIndividualities_b__0__, v25);
    sub_1BE4ACC(&BattleLogicTarget___c__DisplayClass14_0_TypeInfo, v26);
    byte_4B69966 = 1;
  }
  memset(&v66, 0, sizeof(v66));
  v27 = sub_1BE4D18(BattleLogicTarget___c__DisplayClass14_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v27, 0LL);
  if ( !v27 )
    goto LABEL_30;
  *(_QWORD *)(v27 + 16) = this;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v27 + 16), (int64_t)this, v30, v31, v32, v33, v34, v35);
  *(_QWORD *)(v27 + 24) = indv;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v27 + 24), (int64_t)indv, v36, v37, v38, v39, v40, v41);
  if ( aiActEnt && !AiActEntity__IsIncludeDeathSvt(aiActEnt, 0LL) )
    targetlist = BattleLogicTarget__deathSvtExclusion(this, targetlist, 0, v42);
  v43 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1BE4D18(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v43,
    (const MethodInfo_3247234 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  *(_QWORD *)(v27 + 32) = v43;
  v44 = (System_Collections_Generic_Dictionary_int__int__o **)(v27 + 32);
  sub_1BE4A70((PartyOrganizationUtility_o *)(v27 + 32), (int64_t)v43, v45, v46, v47, v48, v49, v50);
  v51 = (System_Comparison_int__o *)sub_1BE4D18(System_Comparison_int__TypeInfo);
  System_Comparison_int____ctor(
    v51,
    (Il2CppObject *)v27,
    Method_BattleLogicTarget___c__DisplayClass14_0__getTargetActiveIndividualities_b__0__,
    0LL);
  System_Array__Sort_int__49441276(
    targetlist,
    (System_Comparison_T__o *)v51,
    (const MethodInfo_2F269FC *)Method_System_Array_Sort_int____77157216);
  Count = *(System_Collections_Generic_Dictionary_int__int__o **)(v27 + 32);
  if ( !Count )
    goto LABEL_30;
  Count = (System_Collections_Generic_Dictionary_int__int__o *)System_Collections_Generic_Dictionary_int__int___get_Count(
                                                                 Count,
                                                                 (const MethodInfo_32478AC *)Method_System_Collections_Generic_Dictionary_int__int__get_Count__);
  if ( (int)Count >= 1 )
  {
    if ( targetlist )
    {
      if ( !targetlist->max_length )
        sub_1BE4D30(Count, v29);
      Count = *v44;
      if ( *v44 )
      {
        Item = System_Collections_Generic_Dictionary_int__int___get_Item(
                 Count,
                 targetlist->m_Items[1],
                 (const MethodInfo_3247B5C *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
        v54 = (System_Collections_Generic_List_int__o *)sub_1BE4D18(System_Collections_Generic_List_int__TypeInfo);
        System_Collections_Generic_List_int____ctor(
          v54,
          (const MethodInfo_35CE9AC *)Method_System_Collections_Generic_List_int___ctor__);
        Count = *v44;
        if ( *v44 )
        {
          Count = (System_Collections_Generic_Dictionary_int__int__o *)System_Collections_Generic_Dictionary_int__int___get_Keys(
                                                                         Count,
                                                                         (const MethodInfo_32478BC *)Method_System_Collections_Generic_Dictionary_int__int__get_Keys__);
          if ( Count )
          {
            System_Collections_Generic_Dictionary_KeyCollection_int__int___GetEnumerator(
              &v65,
              (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)Count,
              (const MethodInfo_35065F8 *)Method_System_Collections_Generic_Dictionary_KeyCollection_int__int__GetEnumerator__);
            v66 = v65;
            while ( System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__int___MoveNext(
                      &v66,
                      (const MethodInfo_339F894 *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__int__MoveNext__) )
            {
              if ( !*v44 )
                sub_1BE4D28(0LL, v55);
              currentKey = (int32_t)v66.fields._currentKey;
              v57 = System_Collections_Generic_Dictionary_int__int___get_Item(
                      *v44,
                      (int32_t)v66.fields._currentKey,
                      (const MethodInfo_3247B5C *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
              if ( Item == (_DWORD)v57 )
              {
                if ( !v54 )
                  sub_1BE4D28(v57, v58);
                items = v54->fields._items;
                v60 = Method_System_Collections_Generic_List_int__Add__;
                ++v54->fields._version;
                if ( !items )
                  sub_1BE4D28(v57, v58);
                size = v54->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_int___AddWithResize(
                    v54,
                    currentKey,
                    *(const MethodInfo_35CF200 **)(*(_QWORD *)(v60[4] + 192LL) + 112LL));
                }
                else
                {
                  v54->fields._size = size + 1;
                  items->m_Items[size + 1] = currentKey;
                }
              }
            }
            System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__int___Dispose(
              &v66,
              (const MethodInfo_339F890 *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__int__Dispose__);
            if ( v54 )
            {
              v62 = System_Collections_Generic_List_int___ToArray(
                      v54,
                      (const MethodInfo_35D0CB8 *)Method_System_Collections_Generic_List_int__ToArray__);
              return BattleLogicTarget__getTargetRandom(this, v62, 0, isDeadToEnableUpHate, v63);
            }
          }
        }
      }
    }
LABEL_30:
    sub_1BE4D28(Count, v29);
  }
  return BattleLogicTarget__getTargetBase(this, targetlist, 0, isDeadToEnableUpHate, v52);
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
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  System_Collections_ICollection_o **v32; // x25
  BattleData_o *v33; // x27
  bool v34; // w26
  BattleServantData_o *ServantData; // x0
  const MethodInfo *v36; // x6
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  System_Int32_array *v38; // x0
  const MethodInfo *v39; // x3
  const MethodInfo *v40; // x4
  System_Int32_array *Shuffle_int; // x5
  int32_t result; // w0
  __int64 v43; // x21
  __int64 *v44; // x29
  System_Func_int____bool__o *v45; // x29
  System_Func_object__bool__o *v46; // x0
  __int64 v47; // x2
  const MethodInfo *v48; // x5
  bool v49; // w3
  BattleLogicTarget_o *v50; // x0
  int32_t v51; // w1

  if ( (byte_4B69968 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_BattleRandom_getShuffle_int___, *(_QWORD *)&target);
    sub_1BE4ACC(&System_Func_int____bool__TypeInfo, v17);
    sub_1BE4ACC(&int___TypeInfo, v18);
    sub_1BE4ACC(&Method_BattleLogicTarget___c__DisplayClass17_0__getTargetAiAct_b__1__, v19);
    sub_1BE4ACC(&BattleLogicTarget___c__DisplayClass17_0_TypeInfo, v20);
    sub_1BE4ACC(&Method_BattleLogicTarget___c__DisplayClass17_1__getTargetAiAct_b__0__, v21);
    sub_1BE4ACC(&BattleLogicTarget___c__DisplayClass17_1_TypeInfo, v22);
    byte_4B69968 = 1;
  }
  v23 = sub_1BE4D18(BattleLogicTarget___c__DisplayClass17_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v23, 0LL);
  if ( !v23 )
    goto LABEL_41;
  *(_QWORD *)(v23 + 16) = individuality;
  v32 = (System_Collections_ICollection_o **)(v23 + 16);
  sub_1BE4A70((PartyOrganizationUtility_o *)(v23 + 16), (int64_t)individuality, v26, v27, v28, v29, v30, v31);
  NoTargetNoActionType = (BattleData_o *)sub_1BE4B74(int___TypeInfo, 0LL);
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
  m_CancellationTokenSource = v33->fields.m_CancellationTokenSource;
  if ( m_CancellationTokenSource )
    goto LABEL_12;
  v43 = sub_1BE4D18(BattleLogicTarget___c__DisplayClass17_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v43, 0LL);
  if ( !aiActEnt )
    goto LABEL_21;
  if ( !v43 )
    goto LABEL_41;
  if ( AiActEntity__TryGetMultiIndividuality(aiActEnt, (System_Int32_array_array **)(v43 + 16), 0LL) )
  {
    v44 = &Method_BattleLogicTarget___c__DisplayClass17_1__getTargetAiAct_b__0__;
  }
  else
  {
LABEL_21:
    if ( BasicHelper__IsNullOrEmpty(*v32, 0LL) )
    {
      v45 = 0LL;
      goto LABEL_27;
    }
    v44 = &Method_BattleLogicTarget___c__DisplayClass17_0__getTargetAiAct_b__1__;
    v43 = v23;
  }
  v46 = (System_Func_object__bool__o *)sub_1BE4D18(System_Func_int____bool__TypeInfo);
  v47 = *v44;
  v45 = (System_Func_int____bool__o *)v46;
  System_Func_object__bool____ctor(v46, (Il2CppObject *)v43, v47, 0LL);
  if ( !v45 )
    goto LABEL_27;
  NoTargetNoActionType = (BattleData_o *)BattleLogicTarget__narrowDownIndividuality(
                                           this,
                                           targetlist,
                                           v45,
                                           isResurrectable,
                                           target != 13,
                                           v48);
  if ( !NoTargetNoActionType )
LABEL_41:
    sub_1BE4D28(NoTargetNoActionType, v25);
  v33 = NoTargetNoActionType;
LABEL_27:
  m_CancellationTokenSource = v33->fields.m_CancellationTokenSource;
  if ( v34 && v45 != 0LL && m_CancellationTokenSource == 0LL )
    return -1;
LABEL_12:
  if ( m_CancellationTokenSource )
    v38 = (System_Int32_array *)v33;
  else
    v38 = targetlist;
  Shuffle_int = BattleRandom__getShuffle_int_(v38, (const MethodInfo_2F4A688 *)Method_BattleRandom_getShuffle_int___);
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
      v50 = this;
      v51 = 0;
      goto LABEL_40;
    case 16:
      v49 = isDeadToEnableUpHate;
      v51 = 1;
      goto LABEL_39;
    case 17:
      v49 = isDeadToEnableUpHate;
      v51 = 2;
LABEL_39:
      v50 = this;
LABEL_40:
      result = BattleLogicTarget__getTargetPosition(v50, v51, Shuffle_int, v49, v34, (const MethodInfo *)Shuffle_int);
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

  if ( !targetlist )
LABEL_16:
    sub_1BE4D28(this, targetlist);
  v5 = *(_QWORD *)&targetlist->max_length;
  if ( (int)v5 < 1 )
    return -1;
  v8 = this;
  v9 = 0LL;
  v10 = isResurrectable;
  while ( 1 )
  {
    if ( v9 >= (unsigned int)v5 )
      sub_1BE4D30(this, targetlist);
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
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  Il2CppObject *v32; // x0
  BattleServantData_o *v33; // x21
  const MethodInfo *v34; // x2
  struct BattleData_o *v35; // x8
  struct System_Int32_array *v37; // x8
  int32_t v38; // w1
  const MethodInfo *v39; // x2
  struct BattleData_o *v40; // x8
  struct BattleData_o *v41; // x8
  System_Int32_array *v42; // x21
  const MethodInfo *v43; // x4
  System_Comparison_int__o *v44; // x22
  struct BattleData_o *v45; // x22
  const MethodInfo *v46; // x2
  const MethodInfo *v47; // x2
  struct System_Int32_array *v48; // x8
  struct BattleData_o *v49; // x21
  int32_t v50; // w22
  System_Int32_array *v51; // x3
  struct BattleData_o *v52; // x8
  struct BattleData_o *v53; // x8

  v3 = task;
  if ( (byte_4B6996B & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Array_Sort_int____77157216, task);
    sub_1BE4ACC(&Method_BasicHelper_TakeIf_BattleServantData___, v5);
    sub_1BE4ACC(&Method_BattleLogicTarget__getTargetBattleServantData_b__20_1__, v6);
    sub_1BE4ACC(&System_Comparison_int__TypeInfo, v7);
    sub_1BE4ACC(&System_Predicate_BattleServantData__TypeInfo, v8);
    sub_1BE4ACC(&Method_BattleLogicTarget___c__getTargetBattleServantData_b__20_0__, v9);
    sub_1BE4ACC(&BattleLogicTarget___c_TypeInfo, v10);
    byte_4B6996B = 1;
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
    _9__20_0 = (System_Predicate_object__o *)sub_1BE4D18(System_Predicate_BattleServantData__TypeInfo);
    System_Predicate_object____ctor(
      _9__20_0,
      v24,
      Method_BattleLogicTarget___c__getTargetBattleServantData_b__20_0__,
      0LL);
    static_fields = BattleLogicTarget___c_TypeInfo->static_fields;
    static_fields->__9__20_0 = (struct System_Predicate_BattleServantData__o *)_9__20_0;
    sub_1BE4A70(
      (PartyOrganizationUtility_o *)&static_fields->__9__20_0,
      (int64_t)_9__20_0,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31);
  }
  v32 = BasicHelper__TakeIf_object_(
          v22,
          (System_Predicate_T__o *)_9__20_0,
          (const MethodInfo_2F49250 *)Method_BasicHelper_TakeIf_BattleServantData___);
  if ( v32 )
  {
    v33 = (BattleServantData_o *)v32;
    data = (BattleData_o *)BattleServantData__isAlive((BattleServantData_o *)v32, 0, 0LL);
    if ( ((unsigned __int8)data & 1) != 0 )
    {
      v35 = this->fields.data;
      if ( v35 && v3 )
        goto LABEL_43;
      goto LABEL_84;
    }
    data = (BattleData_o *)BattleServantData__isAlive(v33, 0, 0LL);
    if ( ((unsigned __int8)data & 1) == 0 )
    {
      if ( !v3 )
        goto LABEL_84;
      v37 = v3->fields.actorIdlist;
      if ( v37 )
      {
        if ( !v37->max_length )
          goto LABEL_85;
        v38 = v37->m_Items[1];
      }
      else
      {
        v38 = -1;
      }
      data = (BattleData_o *)BattleServantData__checkOverKill(v33, v38, 0LL);
      if ( ((unsigned __int8)data & 1) != 0 )
      {
        v35 = this->fields.data;
        if ( v35 )
        {
LABEL_43:
          BattleLogicTask__setTarget(v3, v35->fields.globaltargetId, v34);
          return v33;
        }
        goto LABEL_84;
      }
    }
    if ( !BattleServantData__isAlive(v33, 0, 0LL) )
    {
      data = (BattleData_o *)BattleServantData__isGuts(v33, 0LL);
      if ( ((unsigned __int8)data & 1) != 0 )
      {
        v40 = this->fields.data;
        if ( v40 && v3 )
        {
          BattleLogicTask__setTarget(v3, v40->fields.globaltargetId, v39);
          v33->fields.overkillTargetId = -1;
          return v33;
        }
        goto LABEL_84;
      }
    }
    v33->fields.overkillTargetId = -1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_84;
  data = (BattleData_o *)BattleData__getFieldEnemyServantIDList(data, 1, 0LL);
  v41 = this->fields.data;
  if ( !v41 )
    goto LABEL_84;
  v42 = (System_Int32_array *)data;
  data = (BattleData_o *)v41->fields.quest_ent;
  if ( !data )
    goto LABEL_84;
  if ( QuestEntity__HasFlag((QuestEntity_o *)data, 0x40000000000000LL, 0LL) )
  {
    v44 = (System_Comparison_int__o *)sub_1BE4D18(System_Comparison_int__TypeInfo);
    System_Comparison_int____ctor(
      v44,
      (Il2CppObject *)this,
      Method_BattleLogicTarget__getTargetBattleServantData_b__20_1__,
      0LL);
    System_Array__Sort_int__49441276(
      v42,
      (System_Comparison_T__o *)v44,
      (const MethodInfo_2F269FC *)Method_System_Array_Sort_int____77157216);
  }
  v45 = this->fields.data;
  data = (BattleData_o *)BattleLogicTarget__getTargetBase(this, v42, 0, 1, v43);
  if ( !v45 )
    goto LABEL_84;
  v45->fields.globaltargetId = (int)data;
  BattleLogicTarget__updateEnemyTarget(this, v42, v46);
  data = this->fields.data;
  if ( !data )
    goto LABEL_84;
  data = (BattleData_o *)BattleData__isTargetLock(data, 0LL);
  if ( ((unsigned __int8)data & 1) == 0 )
    goto LABEL_80;
  if ( !v3 )
    goto LABEL_84;
  v48 = v3->fields.actorIdlist;
  v49 = this->fields.data;
  if ( !v48 )
  {
    v50 = -1;
    goto LABEL_73;
  }
  if ( !v48->max_length )
LABEL_85:
    sub_1BE4D30(data, task);
  v50 = v48->m_Items[1];
LABEL_73:
  data = (BattleData_o *)v3->fields.skillInfo;
  if ( data )
  {
    data = (BattleData_o *)BattleSkillInfoData__GetAddIndiv((BattleSkillInfoData_o *)data, 0LL);
    v51 = (System_Int32_array *)data;
    if ( !v49 )
      goto LABEL_84;
  }
  else
  {
    v51 = 0LL;
    if ( !v49 )
      goto LABEL_84;
  }
  data = (BattleData_o *)BattleData__getTargetLock(v49, v50, 0, v51, 0LL);
  v49->fields.globaltargetId = (int)data;
  v52 = this->fields.data;
  if ( !v52 || (data = (BattleData_o *)v52->fields.perf) == 0LL )
LABEL_84:
    sub_1BE4D28(data, task);
  BattlePerformance__reViewTargetMarks((BattlePerformance_o *)data, 0LL);
LABEL_80:
  v53 = this->fields.data;
  if ( !v53 )
    goto LABEL_84;
  if ( !v3 )
    goto LABEL_84;
  BattleLogicTask__setTarget(v3, v53->fields.globaltargetId, v47);
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

  if ( (byte_4B69962 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Array_Sort_int____77157216, targetlist);
    sub_1BE4ACC(&Method_BattleLogicTarget__getTargetHighHp_b__9_0__, v7);
    sub_1BE4ACC(&System_Comparison_int__TypeInfo, v8);
    byte_4B69962 = 1;
  }
  v9 = (System_Comparison_int__o *)sub_1BE4D18(System_Comparison_int__TypeInfo);
  System_Comparison_int____ctor(v9, (Il2CppObject *)this, Method_BattleLogicTarget__getTargetHighHp_b__9_0__, 0LL);
  System_Array__Sort_int__49441276(
    targetlist,
    (System_Comparison_T__o *)v9,
    (const MethodInfo_2F269FC *)Method_System_Array_Sort_int____77157216);
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

  if ( (byte_4B69963 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Array_Sort_int____77157216, targetlist);
    sub_1BE4ACC(&Method_BattleLogicTarget__getTargetLowHp_b__10_0__, v7);
    sub_1BE4ACC(&System_Comparison_int__TypeInfo, v8);
    byte_4B69963 = 1;
  }
  v9 = (System_Comparison_int__o *)sub_1BE4D18(System_Comparison_int__TypeInfo);
  System_Comparison_int____ctor(v9, (Il2CppObject *)this, Method_BattleLogicTarget__getTargetLowHp_b__10_0__, 0LL);
  System_Array__Sort_int__49441276(
    targetlist,
    (System_Comparison_T__o *)v9,
    (const MethodInfo_2F269FC *)Method_System_Array_Sort_int____77157216);
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

  if ( (byte_4B69965 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Array_Sort_int____77157216, targetlist);
    sub_1BE4ACC(&Method_BattleLogicTarget__getTargetNpGaugeHeighter_b__12_0__, v7);
    sub_1BE4ACC(&System_Comparison_int__TypeInfo, v8);
    byte_4B69965 = 1;
  }
  v9 = (System_Comparison_int__o *)sub_1BE4D18(System_Comparison_int__TypeInfo);
  System_Comparison_int____ctor(
    v9,
    (Il2CppObject *)this,
    Method_BattleLogicTarget__getTargetNpGaugeHeighter_b__12_0__,
    0LL);
  System_Array__Sort_int__49441276(
    targetlist,
    (System_Comparison_T__o *)v9,
    (const MethodInfo_2F269FC *)Method_System_Array_Sort_int____77157216);
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

  if ( (byte_4B69964 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Array_Sort_int____77157216, targetlist);
    sub_1BE4ACC(&Method_BattleLogicTarget__getTargetNpTurnLower_b__11_0__, v7);
    sub_1BE4ACC(&System_Comparison_int__TypeInfo, v8);
    byte_4B69964 = 1;
  }
  v9 = (System_Comparison_int__o *)sub_1BE4D18(System_Comparison_int__TypeInfo);
  System_Comparison_int____ctor(v9, (Il2CppObject *)this, Method_BattleLogicTarget__getTargetNpTurnLower_b__11_0__, 0LL);
  System_Array__Sort_int__49441276(
    targetlist,
    (System_Comparison_T__o *)v9,
    (const MethodInfo_2F269FC *)Method_System_Array_Sort_int____77157216);
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
    sub_1BE4D28(this, *(_QWORD *)&position);
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
      sub_1BE4D30(this, *(_QWORD *)&position);
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

  if ( (byte_4B69961 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_BattleRandom_getShuffle_int___, targetlist);
    byte_4B69961 = 1;
  }
  Shuffle_int = BattleRandom__getShuffle_int_(
                  targetlist,
                  (const MethodInfo_2F4A688 *)Method_BattleRandom_getShuffle_int___);
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
  int32_t *v25; // x28
  bool v26; // w24
  BattleServantData_o *ServantData; // x25
  const MethodInfo *v28; // x3
  const MethodInfo *v29; // x2
  struct System_Int32_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  struct BattleData_o *v33; // x8

  if ( (byte_4B6996A & 1) == 0 )
  {
    sub_1BE4ACC(&BattleBuffData_CheckIndividualitiesData_TypeInfo, list);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int__Add__, v13);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int__ToArray__, v14);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int___ctor__, v15);
    sub_1BE4ACC(&System_Collections_Generic_List_int__TypeInfo, v16);
    byte_4B6996A = 1;
  }
  v17 = (System_Collections_Generic_List_int__o *)sub_1BE4D18(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v17,
    (const MethodInfo_35CE9AC *)Method_System_Collections_Generic_List_int___ctor__);
  if ( atkSvt )
  {
    v18 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1BE4D18(BattleBuffData_CheckIndividualitiesData_TypeInfo);
    BattleBuffData_CheckIndividualitiesData___ctor_43634876(v18, atkSvt, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
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
LABEL_31:
        sub_1BE4D30(data, v20);
      data = (System_Int32_array *)this->fields.data;
      if ( !data )
        goto LABEL_30;
      ServantData = BattleData__getServantData((BattleData_o *)data, v25[v24], 0LL);
      data = (System_Int32_array *)BattleLogicTarget__IsTargetAlive(this, ServantData, v26, v28);
      if ( ((unsigned __int8)data & 1) != 0
        || (data = (System_Int32_array *)BattleLogicTarget__IsTargetGuts(this, ServantData, v29),
            ((unsigned __int8)data & 1) != 0) )
      {
        if ( !ServantData )
          goto LABEL_30;
      }
      else
      {
        v33 = this->fields.data;
        if ( !v33 || !ServantData )
          goto LABEL_30;
        data = (System_Int32_array *)BattleServantData__checkDeadTurn(ServantData, v33->fields.typeTurn, 0LL);
        if ( ((unsigned __int8)data & 1) == 0 || !isDeadToEnableUpHate )
          goto LABEL_27;
      }
      data = (System_Int32_array *)BattleServantData__isUpHate(ServantData, v23, 0LL);
      if ( ((unsigned __int8)data & 1) != 0 )
      {
        if ( v24 >= list->max_length )
          goto LABEL_31;
        if ( !v17 )
          goto LABEL_30;
        v20 = (unsigned int)v25[v24];
        items = v17->fields._items;
        v31 = Method_System_Collections_Generic_List_int__Add__;
        ++v17->fields._version;
        if ( !items )
          goto LABEL_30;
        size = v17->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v17,
            v20,
            *(const MethodInfo_35CF200 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
        }
        else
        {
          v17->fields._size = size + 1;
          items->m_Items[size + 1] = v20;
        }
      }
LABEL_27:
      LODWORD(v22) = list->max_length;
    }
    while ( (__int64)++v24 < (int)v22 );
  }
  if ( !v17 )
LABEL_30:
    sub_1BE4D28(data, v20);
  return System_Collections_Generic_List_int___ToArray(
           v17,
           (const MethodInfo_35D0CB8 *)Method_System_Collections_Generic_List_int__ToArray__);
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

  if ( (byte_4B69969 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int__AddRange__, list);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int__Add__, v11);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int__ToArray__, v12);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int___ctor__, v13);
    sub_1BE4ACC(&System_Collections_Generic_List_int__TypeInfo, v14);
    byte_4B69969 = 1;
  }
  v15 = (System_Collections_Generic_List_int__o *)sub_1BE4D18(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v15,
    (const MethodInfo_35CE9AC *)Method_System_Collections_Generic_List_int___ctor__);
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
        sub_1BE4D30(data, v17);
      data = this->fields.data;
      if ( !data )
        goto LABEL_25;
      ServantData = BattleData__getServantData(data, v20[v19], 0LL);
      if ( BattleLogicTarget__IsTargetAlive(this, ServantData, v21, v23)
        || (data = (BattleData_o *)BattleLogicTarget__IsTargetGuts(this, ServantData, v24),
            ((unsigned __int8)data & 1) != 0) )
      {
        v25 = (System_Collections_Generic_List_int__o *)sub_1BE4D18(System_Collections_Generic_List_int__TypeInfo);
        System_Collections_Generic_List_int____ctor(
          v25,
          (const MethodInfo_35CE9AC *)Method_System_Collections_Generic_List_int___ctor__);
        if ( !ServantData )
          goto LABEL_25;
        data = (BattleData_o *)BattleServantData__getIndividualities(ServantData, 0LL, 1, 0, 0LL);
        if ( !v25 )
          goto LABEL_25;
        System_Collections_Generic_List_int___AddRange(
          v25,
          (System_Collections_Generic_IEnumerable_T__o *)data,
          (const MethodInfo_35CF40C *)Method_System_Collections_Generic_List_int__AddRange__);
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
            v25,
            BuffIndividualities,
            (const MethodInfo_35CF40C *)Method_System_Collections_Generic_List_int__AddRange__);
        }
        data = (BattleData_o *)System_Collections_Generic_List_int___ToArray(
                                 v25,
                                 (const MethodInfo_35D0CB8 *)Method_System_Collections_Generic_List_int__ToArray__);
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
              *(const MethodInfo_35CF200 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
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
    sub_1BE4D28(data, v17);
  return System_Collections_Generic_List_int___ToArray(
           v15,
           (const MethodInfo_35D0CB8 *)Method_System_Collections_Generic_List_int__ToArray__);
}


void __fastcall BattleLogicTarget__setInit(BattleLogicTarget_o *this, BattleData_o *data, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.data = data;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields, (int64_t)data, (int64_t)method, v3, v4, v5, v6, v7);
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
  struct System_Int32_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10

  FieldEnemyServantIDList = targetIdList;
  if ( (byte_4B6996C & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int__Add__, targetIdList);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int___ctor__, v5);
    sub_1BE4ACC(&System_Collections_Generic_List_int__TypeInfo, v6);
    byte_4B6996C = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_26;
  if ( !data->fields.isMultiTargetBattle )
  {
    if ( !FieldEnemyServantIDList )
      FieldEnemyServantIDList = BattleData__getFieldEnemyServantIDList(data, 1, 0LL);
    v8 = (System_Collections_Generic_List_int__o *)sub_1BE4D18(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v8,
      (const MethodInfo_35CE9AC *)Method_System_Collections_Generic_List_int___ctor__);
    data = this->fields.data;
    if ( !data )
      goto LABEL_26;
    data = (BattleData_o *)BattleData__getFieldEnemyServantIDList(data, 1, 0LL);
    if ( !FieldEnemyServantIDList )
      goto LABEL_26;
    v9 = *(_QWORD *)&FieldEnemyServantIDList->max_length;
    data = this->fields.data;
    if ( (int)v9 >= 1 )
    {
      v10 = 0LL;
      v11 = &FieldEnemyServantIDList->m_Items[1];
      while ( 1 )
      {
        if ( v10 >= (unsigned int)v9 )
LABEL_27:
          sub_1BE4D30(data, targetIdList);
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
              goto LABEL_27;
            if ( !v8 )
              break;
            targetIdList = (System_Int32_array *)(unsigned int)v11[v10];
            items = v8->fields._items;
            v14 = Method_System_Collections_Generic_List_int__Add__;
            ++v8->fields._version;
            if ( !items )
              break;
            size = v8->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v8,
                (int32_t)targetIdList,
                *(const MethodInfo_35CF200 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
            }
            else
            {
              v8->fields._size = size + 1;
              items->m_Items[size + 1] = (int)targetIdList;
            }
          }
        }
        LODWORD(v9) = FieldEnemyServantIDList->max_length;
        data = this->fields.data;
        if ( (__int64)++v10 >= (int)v9 )
          goto LABEL_24;
      }
LABEL_26:
      sub_1BE4D28(data, targetIdList);
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
      sub_1BE4D30(data, method);
    v7 = this->fields.data;
    if ( v7 )
    {
      v7->fields.globaltargetId = *((_DWORD *)&v5->fields.rootfsm + v6);
      return;
    }
LABEL_16:
    sub_1BE4D28(data, method);
  }
}


void __fastcall BattleLogicTarget___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4B6996D & 1) == 0 )
  {
    sub_1BE4ACC(&BattleLogicTarget___c_TypeInfo, v1);
    byte_4B6996D = 1;
  }
  v2 = (Il2CppObject *)sub_1BE4D18(BattleLogicTarget___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  BattleLogicTarget___c_TypeInfo->static_fields->__9 = (struct BattleLogicTarget___c_o *)v2;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)BattleLogicTarget___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
    sub_1BE4D28(this, 0LL);
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
  if ( (byte_4B6996E & 1) == 0 )
  {
    this = (BattleLogicTarget___c__DisplayClass14_0_o *)sub_1BE4ACC(
                                                          &Method_System_Collections_Generic_Dictionary_int__int__set_Item__,
                                                          *(_QWORD *)&x);
    byte_4B6996E = 1;
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
          (const MethodInfo_3247BE4 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__),
        (this = (BattleLogicTarget___c__DisplayClass14_0_o *)v6->fields.indNum) == 0LL) )
  {
LABEL_12:
    sub_1BE4D28(this, *(_QWORD *)&x);
  }
  System_Collections_Generic_Dictionary_int__int___set_Item(
    (System_Collections_Generic_Dictionary_int__int__o *)this,
    y,
    v12,
    (const MethodInfo_3247BE4 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
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
    sub_1BE4D28(this, *(_QWORD *)&x);
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

  if ( (byte_4B6996F & 1) == 0 )
  {
    sub_1BE4ACC(&Individuality_TypeInfo, self);
    byte_4B6996F = 1;
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

  if ( (byte_4B69970 & 1) == 0 )
  {
    sub_1BE4ACC(&Individuality_TypeInfo, self);
    byte_4B69970 = 1;
  }
  multiIndividuality = this->fields.multiIndividuality;
  if ( !Individuality_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Individuality_TypeInfo);
  return Individuality__CheckSignedMultiIndividuality(self, multiIndividuality, 0LL);
}