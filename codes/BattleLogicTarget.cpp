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
  if ( (byte_40FC471 & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_ContainsSelfNotNull_int___, svtData);
    byte_40FC471 = 1;
  }
  if ( !svtData )
    sub_B170D4();
  return !BasicHelper__ContainsSelfNotNull_int_(
            (System_Collections_Generic_HashSet_T__o *)this->fields.tempDeadSvtHash,
            svtData->fields.uniqueId,
            (const MethodInfo_18B61E4 *)Method_BasicHelper_ContainsSelfNotNull_int___)
      && BattleServantData__isAlive(svtData, isResurrectable, 0LL);
}


bool __fastcall BattleLogicTarget__IsTargetGuts(
        BattleLogicTarget_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  if ( (byte_40FC472 & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_ContainsSelfNotNull_int___, svtData);
    byte_40FC472 = 1;
  }
  if ( !svtData )
    sub_B170D4();
  return !svtData->fields.isDeadAnime
      && BasicHelper__ContainsSelfNotNull_int_(
           (System_Collections_Generic_HashSet_T__o *)this->fields.tempDeadSvtHash,
           svtData->fields.uniqueId,
           (const MethodInfo_18B61E4 *)Method_BasicHelper_ContainsSelfNotNull_int___)
      || BattleServantData__isGuts(svtData, 0LL);
}


int32_t __fastcall BattleLogicTarget___getTargetBattleServantData_b__20_1(
        BattleLogicTarget_o *this,
        int32_t a,
        int32_t b,
        const MethodInfo *method)
{
  BattleData_o *data; // x0
  BattleServantData_o *EnemyServantData; // x0
  BattleData_o *v8; // x8
  int32_t index; // w20
  BattleServantData_o *v10; // x0

  data = this->fields.data;
  if ( !data
    || (EnemyServantData = BattleData__getEnemyServantData(data, a, 0LL)) == 0LL
    || (v8 = this->fields.data) == 0LL
    || (index = EnemyServantData->fields.index, (v10 = BattleData__getEnemyServantData(v8, b, 0LL)) == 0LL) )
  {
    sub_B170D4();
  }
  return index - v10->fields.index;
}


int32_t __fastcall BattleLogicTarget___getTargetHighHp_b__9_0(
        BattleLogicTarget_o *this,
        int32_t x,
        int32_t y,
        const MethodInfo *method)
{
  BattleData_o *data; // x0
  BattleServantData_o *ServantData; // x0
  BattleData_o *v8; // x8
  BattleServantData_o *v9; // x19
  BattleServantData_o *v10; // x0
  int v11; // w0

  data = this->fields.data;
  if ( !data
    || (ServantData = BattleData__getServantData(data, x, 0LL), (v8 = this->fields.data) == 0LL)
    || (v9 = ServantData, (v10 = BattleData__getServantData(v8, y, 0LL)) == 0LL)
    || (v11 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))v10->klass->vtable._9_get_hp.method)(
                v10,
                v10->klass->vtable._10_set_hp.methodPtr),
        !v9) )
  {
    sub_B170D4();
  }
  return v11
       - ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))v9->klass->vtable._9_get_hp.method)(
           v9,
           v9->klass->vtable._10_set_hp.methodPtr);
}


int32_t __fastcall BattleLogicTarget___getTargetLowHp_b__10_0(
        BattleLogicTarget_o *this,
        int32_t x,
        int32_t y,
        const MethodInfo *method)
{
  BattleData_o *data; // x0
  BattleServantData_o *ServantData; // x0
  BattleData_o *v8; // x8
  BattleServantData_o *v9; // x20
  BattleServantData_o *v10; // x0
  BattleServantData_o *v11; // x19
  int v12; // w0

  data = this->fields.data;
  if ( !data
    || (ServantData = BattleData__getServantData(data, x, 0LL), (v8 = this->fields.data) == 0LL)
    || (v9 = ServantData, v10 = BattleData__getServantData(v8, y, 0LL), !v9)
    || (v11 = v10,
        v12 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))v9->klass->vtable._9_get_hp.method)(
                v9,
                v9->klass->vtable._10_set_hp.methodPtr),
        !v11) )
  {
    sub_B170D4();
  }
  return v12
       - ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))v11->klass->vtable._9_get_hp.method)(
           v11,
           v11->klass->vtable._10_set_hp.methodPtr);
}


int32_t __fastcall BattleLogicTarget___getTargetNpGaugeHeighter_b__12_0(
        BattleLogicTarget_o *this,
        int32_t x,
        int32_t y,
        const MethodInfo *method)
{
  BattleData_o *data; // x0
  BattleServantData_o *ServantData; // x0
  BattleData_o *v8; // x8
  BattleServantData_o *v9; // x20
  BattleServantData_o *v10; // x0

  data = this->fields.data;
  if ( !data
    || (ServantData = BattleData__getServantData(data, x, 0LL), (v8 = this->fields.data) == 0LL)
    || (v9 = ServantData, (v10 = BattleData__getServantData(v8, y, 0LL)) == 0LL)
    || !v9 )
  {
    sub_B170D4();
  }
  return v10->fields.np - v9->fields.np;
}


int32_t __fastcall BattleLogicTarget___getTargetNpTurnLower_b__11_0(
        BattleLogicTarget_o *this,
        int32_t x,
        int32_t y,
        const MethodInfo *method)
{
  BattleData_o *data; // x0
  BattleServantData_o *ServantData; // x0
  BattleData_o *v8; // x8
  BattleServantData_o *v9; // x19
  BattleServantData_o *v10; // x0
  int v11; // w8
  int v12; // w8
  int v13; // w9

  data = this->fields.data;
  if ( !data
    || (ServantData = BattleData__getServantData(data, x, 0LL), (v8 = this->fields.data) == 0LL)
    || (v9 = ServantData, v10 = BattleData__getServantData(v8, y, 0LL), !v9)
    || !v10 )
  {
    sub_B170D4();
  }
  if ( v9->fields.maxtpturn <= 0 )
    v11 = 999;
  else
    v11 = 0;
  v12 = v11 + v9->fields.nexttpturn;
  if ( v10->fields.maxtpturn <= 0 )
    v13 = -999;
  else
    v13 = 0;
  return v12 - v10->fields.nexttpturn + v13;
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall BattleLogicTarget__deathSvtExclusion(
        BattleLogicTarget_o *this,
        System_Int32_array *targetlist,
        bool isResurrectable,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_int__o *v11; // x21
  BattleServantData_o *ServantData; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x8
  unsigned __int64 v16; // x24
  bool v17; // w22
  BattleData_o *data; // x0
  const MethodInfo *v19; // x3
  BattleServantData_o *v20; // x23
  const MethodInfo *v21; // x2
  struct BattleData_o *v22; // x8

  if ( (byte_40FC473 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, targetlist);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__ToArray__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v9);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v10);
    byte_40FC473 = 1;
  }
  v11 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    targetlist,
                                                    isResurrectable,
                                                    method,
                                                    v4);
  System_Collections_Generic_List_int____ctor(
    v11,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !targetlist )
    goto LABEL_18;
  v15 = *(_QWORD *)&targetlist->max_length;
  if ( (int)v15 >= 1 )
  {
    v16 = 0LL;
    v17 = isResurrectable;
    while ( 1 )
    {
      if ( v16 >= (unsigned int)v15 )
      {
        sub_B17100(ServantData, v13, v14);
        sub_B170A0();
      }
      data = this->fields.data;
      if ( !data )
        break;
      ServantData = BattleData__getServantData(data, targetlist->m_Items[v16 + 1], 0LL);
      if ( ServantData )
      {
        v20 = ServantData;
        if ( BattleLogicTarget__IsTargetAlive(this, ServantData, v17, v19) )
          goto LABEL_10;
        ServantData = (BattleServantData_o *)BattleLogicTarget__IsTargetGuts(this, v20, v21);
        if ( ((unsigned __int8)ServantData & 1) != 0 )
        {
          v22 = this->fields.data;
          if ( !v22 )
            break;
          ServantData = (BattleServantData_o *)BattleServantData__checkDeadTurn(v20, v22->fields.typeTurn, 0LL);
          if ( ((unsigned __int8)ServantData & 1) == 0 )
          {
LABEL_10:
            if ( !v11 )
              break;
            System_Collections_Generic_List_int___Add(
              v11,
              v20->fields.uniqueId,
              (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
          }
        }
      }
      LODWORD(v15) = targetlist->max_length;
      if ( (__int64)++v16 >= (int)v15 )
        goto LABEL_16;
    }
LABEL_18:
    sub_B170D4();
  }
LABEL_16:
  if ( !v11 )
    goto LABEL_18;
  return System_Collections_Generic_List_int___ToArray(
           v11,
           (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
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
  BattlePerformance_o *perf; // x0
  struct BattleData_o *v13; // x8

  data = this->fields.data;
  if ( !data )
    goto LABEL_9;
  if ( !BattleData__isTargetLock(data, 0LL) )
    goto LABEL_7;
  v10 = this->fields.data;
  if ( !v10
    || (v10->fields.globaltargetId = BattleData__getTargetLock(this->fields.data, uniqueId, isMaster, addIndiv, 0LL),
        (v11 = this->fields.data) == 0LL)
    || (perf = v11->fields.perf) == 0LL )
  {
LABEL_9:
    sub_B170D4();
  }
  BattlePerformance__reViewTargetMarks(perf, 0LL);
LABEL_7:
  v13 = this->fields.data;
  if ( !v13 )
    goto LABEL_9;
  return v13->fields.globaltargetId;
}


int32_t __fastcall BattleLogicTarget__getRevenge(
        BattleLogicTarget_o *this,
        int32_t actId,
        System_Int32_array *targetlist,
        bool isDeadToEnableUpHate,
        const MethodInfo *method)
{
  BattleData_o *data; // x0
  BattleServantData_o *ServantData; // x0
  BattleServantData_o *v10; // x22
  int32_t RevengeTargetUniqueId; // w0
  const MethodInfo *v12; // x4
  int32_t v13; // w23
  BattleData_o *v14; // x0
  BattleServantData_o *v15; // x0
  const MethodInfo *v16; // x3
  const MethodInfo *v17; // x2

  data = this->fields.data;
  if ( !data )
    goto LABEL_10;
  ServantData = BattleData__getServantData(data, actId, 0LL);
  if ( !ServantData )
    goto LABEL_10;
  v10 = ServantData;
  RevengeTargetUniqueId = BattleServantData__getRevengeTargetUniqueId(ServantData, 0LL);
  if ( RevengeTargetUniqueId < 1 )
    return BattleLogicTarget__getTargetRandom(this, targetlist, 0, isDeadToEnableUpHate, v12);
  v13 = RevengeTargetUniqueId;
  v14 = this->fields.data;
  if ( !v14 )
LABEL_10:
    sub_B170D4();
  v15 = BattleData__getServantData(v14, v13, 0LL);
  if ( v15 && (BattleLogicTarget__IsTargetAlive(this, v15, 0, v16) || BattleLogicTarget__IsTargetGuts(this, v10, v17)) )
    return v13;
  return BattleLogicTarget__getTargetRandom(this, targetlist, 0, isDeadToEnableUpHate, v12);
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
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x23
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
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  System_Comparison_int__o *v30; // x22
  const MethodInfo *v31; // x4

  if ( (byte_40FC47A & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Array_Sort_int____66801208, ids);
    sub_B16FFC(&Method_System_Comparison_int___ctor__, v9);
    sub_B16FFC(&System_Comparison_int__TypeInfo, v10);
    sub_B16FFC(&Method_BattleLogicTarget___c__DisplayClass15_0__getTargetActiveBuff_b__0__, v11);
    sub_B16FFC(&BattleLogicTarget___c__DisplayClass15_0_TypeInfo, v12);
    byte_40FC47A = 1;
  }
  v13 = sub_B170CC(BattleLogicTarget___c__DisplayClass15_0_TypeInfo, ids, targetlist, isDeadToEnableUpHate, method);
  BattleLogicTarget___c__DisplayClass15_0___ctor((BattleLogicTarget___c__DisplayClass15_0_o *)v13, 0LL);
  if ( !v13 )
    sub_B170D4();
  *(_QWORD *)(v13 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v13 + 16), (System_Int32_array **)this, v14, v15, v16, v17, v18, v19);
  *(_QWORD *)(v13 + 24) = ids;
  sub_B16F98((BattleServantConfConponent_o *)(v13 + 24), (System_Int32_array **)ids, v20, v21, v22, v23, v24, v25);
  v30 = (System_Comparison_int__o *)sub_B170CC(System_Comparison_int__TypeInfo, v26, v27, v28, v29);
  System_Comparison_int____ctor(
    v30,
    (Il2CppObject *)v13,
    Method_BattleLogicTarget___c__DisplayClass15_0__getTargetActiveBuff_b__0__,
    (const MethodInfo_25BE414 *)Method_System_Comparison_int___ctor__);
  System_Array__Sort_int__38824640(
    targetlist,
    (System_Comparison_T__o *)v30,
    (const MethodInfo_2506AC0 *)Method_System_Array_Sort_int____66801208);
  return BattleLogicTarget__getTargetBase(this, targetlist, 0, isDeadToEnableUpHate, v31);
}


// local variable allocation has failed, the output may be wrong!
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
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  __int64 v41; // x1
  __int64 v42; // x2
  const MethodInfo *v43; // x3
  __int64 v44; // x4
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
  __int64 v55; // x3
  __int64 v56; // x4
  System_Comparison_int__o *v57; // x23
  System_Collections_Generic_Dictionary_int__int__o *v58; // x0
  __int64 Count; // x0
  __int64 v60; // x1
  __int64 v61; // x2
  const MethodInfo *v62; // x4
  int32_t Item; // w23
  __int64 v64; // x1
  __int64 v65; // x2
  __int64 v66; // x3
  __int64 v67; // x4
  System_Collections_Generic_List_int__o *v68; // x21
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0
  int32_t currentKey; // w24
  System_Int32_array *v71; // x0
  const MethodInfo *v72; // x4
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o v74; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o v75; // [xsp+20h] [xbp-70h] BYREF

  v8 = targetlist;
  if ( (byte_40FC479 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Array_Sort_int____66801208, indv);
    sub_B16FFC(&Method_System_Comparison_int___ctor__, v11);
    sub_B16FFC(&System_Comparison_int__TypeInfo, v12);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__int__get_Count__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__int__get_Keys__, v16);
    sub_B16FFC(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v17);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__int__Dispose__, v18);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__int__MoveNext__, v19);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__int__get_Current__, v20);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_KeyCollection_int__int__GetEnumerator__, v21);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v22);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__ToArray__, v23);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v24);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v25);
    sub_B16FFC(&Method_BattleLogicTarget___c__DisplayClass14_0__getTargetActiveIndividualities_b__0__, v26);
    sub_B16FFC(&BattleLogicTarget___c__DisplayClass14_0_TypeInfo, v27);
    byte_40FC479 = 1;
  }
  memset(&v75, 0, sizeof(v75));
  v28 = sub_B170CC(BattleLogicTarget___c__DisplayClass14_0_TypeInfo, indv, targetlist, aiActEnt, isDeadToEnableUpHate);
  BattleLogicTarget___c__DisplayClass14_0___ctor((BattleLogicTarget___c__DisplayClass14_0_o *)v28, 0LL);
  if ( !v28 )
    goto LABEL_26;
  *(_QWORD *)(v28 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v28 + 16), (System_Int32_array **)this, v29, v30, v31, v32, v33, v34);
  *(_QWORD *)(v28 + 24) = indv;
  sub_B16F98((BattleServantConfConponent_o *)(v28 + 24), (System_Int32_array **)indv, v35, v36, v37, v38, v39, v40);
  if ( aiActEnt && !AiActEntity__IsIncludeDeathSvt(aiActEnt, 0LL) )
    v8 = BattleLogicTarget__deathSvtExclusion(this, v8, 0, v43);
  v45 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B170CC(
                                                               System_Collections_Generic_Dictionary_int__int__TypeInfo,
                                                               v41,
                                                               v42,
                                                               v43,
                                                               v44);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v45,
    (const MethodInfo_2DDC410 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  *(_QWORD *)(v28 + 32) = v45;
  v46 = (System_Collections_Generic_Dictionary_int__int__o **)(v28 + 32);
  sub_B16F98((BattleServantConfConponent_o *)(v28 + 32), (System_Int32_array **)v45, v47, v48, v49, v50, v51, v52);
  v57 = (System_Comparison_int__o *)sub_B170CC(System_Comparison_int__TypeInfo, v53, v54, v55, v56);
  System_Comparison_int____ctor(
    v57,
    (Il2CppObject *)v28,
    Method_BattleLogicTarget___c__DisplayClass14_0__getTargetActiveIndividualities_b__0__,
    (const MethodInfo_25BE414 *)Method_System_Comparison_int___ctor__);
  System_Array__Sort_int__38824640(
    v8,
    (System_Comparison_T__o *)v57,
    (const MethodInfo_2506AC0 *)Method_System_Array_Sort_int____66801208);
  v58 = *(System_Collections_Generic_Dictionary_int__int__o **)(v28 + 32);
  if ( !v58 )
    goto LABEL_26;
  Count = System_Collections_Generic_Dictionary_int__int___get_Count(
            v58,
            (const MethodInfo_2DDCBB4 *)Method_System_Collections_Generic_Dictionary_int__int__get_Count__);
  if ( (int)Count >= 1 )
  {
    if ( v8 )
    {
      if ( !v8->max_length )
      {
        sub_B17100(Count, v60, v61);
        sub_B170A0();
      }
      if ( *v46 )
      {
        Item = System_Collections_Generic_Dictionary_int__int___get_Item(
                 *v46,
                 v8->m_Items[1],
                 (const MethodInfo_2DDCEF4 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
        v68 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                          System_Collections_Generic_List_int__TypeInfo,
                                                          v64,
                                                          v65,
                                                          v66,
                                                          v67);
        System_Collections_Generic_List_int____ctor(
          v68,
          (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
        if ( *v46 )
        {
          Keys = System_Collections_Generic_Dictionary_int__int___get_Keys(
                   *v46,
                   (const MethodInfo_2DDCBC4 *)Method_System_Collections_Generic_Dictionary_int__int__get_Keys__);
          if ( Keys )
          {
            System_Collections_Generic_Dictionary_KeyCollection_int__int___GetEnumerator(
              &v74,
              Keys,
              (const MethodInfo_22BAB44 *)Method_System_Collections_Generic_Dictionary_KeyCollection_int__int__GetEnumerator__);
            v75 = v74;
            while ( System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__int___MoveNext(
                      &v75,
                      (const MethodInfo_27267CC *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__int__MoveNext__) )
            {
              if ( !*v46 )
                sub_B170D4();
              currentKey = (int32_t)v75.fields.currentKey;
              if ( Item == System_Collections_Generic_Dictionary_int__int___get_Item(
                             *v46,
                             (int32_t)v75.fields.currentKey,
                             (const MethodInfo_2DDCEF4 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__) )
              {
                if ( !v68 )
                  sub_B170D4();
                System_Collections_Generic_List_int___Add(
                  v68,
                  currentKey,
                  (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
              }
            }
            System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__int___Dispose(
              &v75,
              (const MethodInfo_27267C8 *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__int__Dispose__);
            if ( v68 )
            {
              v71 = System_Collections_Generic_List_int___ToArray(
                      v68,
                      (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
              return BattleLogicTarget__getTargetRandom(this, v71, 0, isDeadToEnableUpHate, v72);
            }
          }
        }
      }
    }
LABEL_26:
    sub_B170D4();
  }
  return BattleLogicTarget__getTargetBase(this, v8, 0, isDeadToEnableUpHate, v62);
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
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_Collections_ICollection_o **v30; // x25
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x4
  System_Int32_array *v36; // x27
  bool v37; // w26
  BattleData_o *data; // x0
  BattleServantData_o *ServantData; // x0
  const MethodInfo *v40; // x6
  __int64 v41; // x8
  System_Int32_array *v42; // x0
  const MethodInfo *v43; // x3
  const MethodInfo *v44; // x4
  System_Int32_array *Shuffle_int; // x5
  int32_t result; // w0
  BattleLogicTarget___c__DisplayClass17_1_o *v47; // x21
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x3
  __int64 v51; // x4
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v52; // x0
  __int64 *v53; // x8
  System_Func_int____bool__o *v54; // x20
  Il2CppObject *v55; // x1
  __int64 v56; // x1
  __int64 v57; // x2
  __int64 v58; // x3
  __int64 v59; // x4
  const MethodInfo *v60; // x5
  System_Int32_array *v61; // x0
  bool v62; // w3
  int32_t v63; // w1
  BattleLogicTarget_o *v64; // x0

  if ( (byte_40FC47B & 1) == 0 )
  {
    sub_B16FFC(&Method_BattleRandom_getShuffle_int___, *(_QWORD *)&target);
    sub_B16FFC(&Method_System_Func_int____bool___ctor__, v16);
    sub_B16FFC(&System_Func_int____bool__TypeInfo, v17);
    sub_B16FFC(&int___TypeInfo, v18);
    sub_B16FFC(&Method_BattleLogicTarget___c__DisplayClass17_0__getTargetAiAct_b__1__, v19);
    sub_B16FFC(&BattleLogicTarget___c__DisplayClass17_0_TypeInfo, v20);
    sub_B16FFC(&Method_BattleLogicTarget___c__DisplayClass17_1__getTargetAiAct_b__0__, v21);
    sub_B16FFC(&BattleLogicTarget___c__DisplayClass17_1_TypeInfo, v22);
    byte_40FC47B = 1;
  }
  v23 = sub_B170CC(
          BattleLogicTarget___c__DisplayClass17_0_TypeInfo,
          *(_QWORD *)&target,
          *(_QWORD *)&actId,
          individuality,
          targetlist);
  BattleLogicTarget___c__DisplayClass17_0___ctor((BattleLogicTarget___c__DisplayClass17_0_o *)v23, 0LL);
  if ( !v23 )
    goto LABEL_41;
  *(_QWORD *)(v23 + 16) = individuality;
  v30 = (System_Collections_ICollection_o **)(v23 + 16);
  sub_B16F98(
    (BattleServantConfConponent_o *)(v23 + 16),
    (System_Int32_array **)individuality,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  v36 = (System_Int32_array *)sub_B17014(int___TypeInfo, 0LL, v31);
  if ( aiActEnt )
  {
    v37 = AiActEntity__GetNoTargetNoActionType(aiActEnt, 0LL) != 0;
    if ( !isCheckHate )
      goto LABEL_10;
LABEL_8:
    data = this->fields.data;
    if ( !data )
      goto LABEL_41;
    ServantData = BattleData__getServantData(data, actId, 0LL);
    v36 = BattleLogicTarget__narrowDownHate(
            this,
            targetlist,
            ServantData,
            isResurrectable,
            addIndiv,
            isDeadToEnableUpHate,
            v40);
    goto LABEL_10;
  }
  v37 = 0;
  if ( isCheckHate )
    goto LABEL_8;
LABEL_10:
  if ( !v36 )
    goto LABEL_41;
  v41 = *(_QWORD *)&v36->max_length;
  if ( v41 )
    goto LABEL_12;
  v47 = (BattleLogicTarget___c__DisplayClass17_1_o *)sub_B170CC(
                                                       BattleLogicTarget___c__DisplayClass17_1_TypeInfo,
                                                       v32,
                                                       v33,
                                                       v34,
                                                       v35);
  BattleLogicTarget___c__DisplayClass17_1___ctor(v47, 0LL);
  if ( !aiActEnt )
    goto LABEL_21;
  if ( !v47 )
    goto LABEL_41;
  if ( AiActEntity__TryGetMultiIndividuality(aiActEnt, &v47->fields.multiIndividuality, 0LL) )
  {
    v52 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                               System_Func_int____bool__TypeInfo,
                                                                               v48,
                                                                               v49,
                                                                               v50,
                                                                               v51);
    v53 = &Method_BattleLogicTarget___c__DisplayClass17_1__getTargetAiAct_b__0__;
    v54 = (System_Func_int____bool__o *)v52;
    v55 = (Il2CppObject *)v47;
  }
  else
  {
LABEL_21:
    if ( BasicHelper__IsNullOrEmpty(*v30, 0LL) )
    {
      v54 = 0LL;
      goto LABEL_27;
    }
    v52 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                               System_Func_int____bool__TypeInfo,
                                                                               v56,
                                                                               v57,
                                                                               v58,
                                                                               v59);
    v53 = &Method_BattleLogicTarget___c__DisplayClass17_0__getTargetAiAct_b__1__;
    v54 = (System_Func_int____bool__o *)v52;
    v55 = (Il2CppObject *)v23;
  }
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v52,
    v55,
    *v53,
    (const MethodInfo_2B6AB40 *)Method_System_Func_int____bool___ctor__);
  if ( !v54 )
    goto LABEL_27;
  v61 = BattleLogicTarget__narrowDownIndividuality(this, targetlist, v54, isResurrectable, target != 13, v60);
  if ( !v61 )
LABEL_41:
    sub_B170D4();
  v36 = v61;
LABEL_27:
  v41 = *(_QWORD *)&v36->max_length;
  if ( v37 && v54 != 0LL && v41 == 0 )
    return -1;
LABEL_12:
  if ( v41 )
    v42 = v36;
  else
    v42 = targetlist;
  Shuffle_int = BattleRandom__getShuffle_int_(v42, (const MethodInfo_18BA0D4 *)Method_BattleRandom_getShuffle_int___);
  switch ( target )
  {
    case 2:
      return BattleLogicTarget__getTargetHighHp(this, Shuffle_int, isDeadToEnableUpHate, v43);
    case 3:
      return BattleLogicTarget__getTargetLowHp(this, Shuffle_int, isDeadToEnableUpHate, v43);
    case 10:
      return BattleLogicTarget__getTargetNpTurnLower(this, Shuffle_int, isDeadToEnableUpHate, v43);
    case 11:
      return BattleLogicTarget__getTargetNpGaugeHeighter(this, Shuffle_int, isDeadToEnableUpHate, v43);
    case 12:
      return BattleLogicTarget__getRevenge(this, actId, Shuffle_int, isDeadToEnableUpHate, v44);
    case 13:
      return BattleLogicTarget__getTargetActiveIndividualities(
               this,
               (System_Int32_array *)*v30,
               Shuffle_int,
               aiActEnt,
               isDeadToEnableUpHate,
               (const MethodInfo *)Shuffle_int);
    case 14:
      return BattleLogicTarget__getTargetActiveBuff(
               this,
               (System_Int32_array *)*v30,
               Shuffle_int,
               isDeadToEnableUpHate,
               v44);
    case 15:
      v62 = isDeadToEnableUpHate;
      v64 = this;
      v63 = 0;
      goto LABEL_40;
    case 16:
      v62 = isDeadToEnableUpHate;
      v63 = 1;
      goto LABEL_39;
    case 17:
      v62 = isDeadToEnableUpHate;
      v63 = 2;
LABEL_39:
      v64 = this;
LABEL_40:
      result = BattleLogicTarget__getTargetPosition(v64, v63, Shuffle_int, v62, v37, (const MethodInfo *)Shuffle_int);
      break;
    default:
      result = BattleLogicTarget__getTargetBase(this, Shuffle_int, isResurrectable, isDeadToEnableUpHate, v44);
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
  BattleData_o *data; // x0
  const MethodInfo *v12; // x3
  BattleServantData_o *v13; // x23
  const MethodInfo *v14; // x2
  struct BattleData_o *v15; // x8

  if ( !targetlist )
LABEL_16:
    sub_B170D4();
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
      sub_B17100(this, targetlist, isResurrectable);
      sub_B170A0();
    }
    data = v8->fields.data;
    if ( !data )
      goto LABEL_16;
    this = (BattleLogicTarget_o *)BattleData__getServantData(data, targetlist->m_Items[v9 + 1], 0LL);
    if ( this )
    {
      v13 = (BattleServantData_o *)this;
      if ( BattleLogicTarget__IsTargetAlive(v8, (BattleServantData_o *)this, v10, v12) )
        return v13->fields.uniqueId;
      this = (BattleLogicTarget_o *)BattleLogicTarget__IsTargetGuts(v8, v13, v14);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v15 = v8->fields.data;
        if ( !v15 )
          goto LABEL_16;
        this = (BattleLogicTarget_o *)BattleServantData__checkDeadTurn(v13, v15->fields.typeTurn, 0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
          break;
      }
      if ( !isDeadToEnableUpHate )
      {
        this = (BattleLogicTarget_o *)BattleServantData__getNowHp(v13, 0LL);
        if ( (int)this >= 1 )
          break;
      }
    }
    LODWORD(v5) = targetlist->max_length;
    if ( (__int64)++v9 >= (int)v5 )
      return -1;
  }
  return v13->fields.uniqueId;
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
  BattleData_o *v14; // x0
  BattleData_o *v15; // x0
  const MethodInfo *v16; // x1
  const MethodInfo *v17; // x2
  const MethodInfo *v18; // x1
  struct BattleData_o *v19; // x21
  int32_t ActorId; // w0
  int32_t v21; // w1
  BattleData_o *v22; // x0
  System_Int32_array *AddIndiv; // x3
  int32_t v24; // w22
  struct BattleData_o *v25; // x8
  BattlePerformance_o *perf; // x0
  struct BattleData_o *v27; // x0
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  Il2CppObject *ServantData; // x21
  BattleLogicTarget___c_c *v33; // x8
  struct BattleLogicTarget___c_StaticFields *static_fields; // x9
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__20_0; // x22
  Il2CppObject *v36; // x23
  struct BattleLogicTarget___c_StaticFields *v37; // x0
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  Il2CppObject *v44; // x0
  BattleServantData_o *v45; // x21
  const MethodInfo *v46; // x2
  struct BattleData_o *v47; // x8
  const MethodInfo *v49; // x1
  int32_t v50; // w0
  const MethodInfo *v51; // x2
  struct BattleData_o *v52; // x8
  BattleData_o *v53; // x0
  System_Int32_array *FieldEnemyServantIDList; // x0
  struct BattleData_o *v55; // x8
  System_Int32_array *v56; // x21
  QuestEntity_o *quest_ent; // x0
  __int64 v58; // x1
  __int64 v59; // x2
  __int64 v60; // x3
  const MethodInfo *v61; // x4
  System_Comparison_int__o *v62; // x22
  struct BattleData_o *v63; // x22
  int32_t TargetBase; // w0
  const MethodInfo *v65; // x2
  BattleData_o *v66; // x0
  const MethodInfo *v67; // x1
  const MethodInfo *v68; // x2
  struct BattleData_o *v69; // x21
  int32_t v70; // w22
  System_Int32_array *v71; // x3
  struct BattleData_o *v72; // x8
  BattlePerformance_o *v73; // x0
  struct BattleData_o *v74; // x8
  struct BattleData_o *v75; // x0

  if ( (byte_40FC47E & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Array_Sort_int____66801208, task);
    sub_B16FFC(&Method_BasicHelper_TakeIf_BattleServantData___, v5);
    sub_B16FFC(&Method_BattleLogicTarget__getTargetBattleServantData_b__20_1__, v6);
    sub_B16FFC(&Method_System_Comparison_int___ctor__, v7);
    sub_B16FFC(&System_Comparison_int__TypeInfo, v8);
    sub_B16FFC(&Method_System_Predicate_BattleServantData___ctor__, v9);
    sub_B16FFC(&System_Predicate_BattleServantData__TypeInfo, v10);
    sub_B16FFC(&Method_BattleLogicTarget___c__getTargetBattleServantData_b__20_0__, v11);
    sub_B16FFC(&BattleLogicTarget___c_TypeInfo, v12);
    byte_40FC47E = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_70;
  if ( BattleData__ExistsFieldEnemyIntervalBuff(data, 38, 0LL) )
  {
    v14 = this->fields.data;
    if ( !v14 )
      goto LABEL_70;
    BattleData__ResetFieldEnemyUseBuff(v14, 38, 0, 0LL);
  }
  v15 = this->fields.data;
  if ( !v15 )
    goto LABEL_70;
  if ( !BattleData__isTargetLock(v15, 0LL) )
  {
    BattleLogicTarget__updateEnemyTarget(this, 0LL, v17);
    goto LABEL_24;
  }
  if ( !task )
    goto LABEL_70;
  if ( task->fields.actiontype == 4 )
  {
    if ( !BattleLogicTask__IsTargetTypeEnemy(task, v16) )
      goto LABEL_21;
    v19 = this->fields.data;
    ActorId = BattleLogicTask__getActorId(task, v18);
    if ( !v19 )
      goto LABEL_70;
    v21 = ActorId;
    v22 = v19;
    AddIndiv = 0LL;
  }
  else
  {
    v19 = this->fields.data;
    v24 = BattleLogicTask__getActorId(task, v16);
    if ( task->fields.skillInfo )
    {
      AddIndiv = BattleSkillInfoData__GetAddIndiv(task->fields.skillInfo, 0LL);
      if ( !v19 )
        goto LABEL_70;
    }
    else
    {
      AddIndiv = 0LL;
      if ( !v19 )
        goto LABEL_70;
    }
    v22 = v19;
    v21 = v24;
  }
  v19->fields.globaltargetId = BattleData__getTargetLock(v22, v21, 0, AddIndiv, 0LL);
LABEL_21:
  v25 = this->fields.data;
  if ( !v25 )
    goto LABEL_70;
  perf = v25->fields.perf;
  if ( !perf )
    goto LABEL_70;
  BattlePerformance__reViewTargetMarks(perf, 0LL);
LABEL_24:
  v27 = this->fields.data;
  if ( !v27 )
    goto LABEL_70;
  ServantData = (Il2CppObject *)BattleData__getServantData(v27, v27->fields.globaltargetId, 0LL);
  v33 = BattleLogicTarget___c_TypeInfo;
  if ( (BYTE3(BattleLogicTarget___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleLogicTarget___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicTarget___c_TypeInfo);
    v33 = BattleLogicTarget___c_TypeInfo;
  }
  static_fields = v33->static_fields;
  _9__20_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__20_0;
  if ( !_9__20_0 )
  {
    if ( (BYTE3(v33->vtable._0_Equals.methodPtr) & 4) != 0 && !v33->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v33);
      static_fields = BattleLogicTarget___c_TypeInfo->static_fields;
    }
    v36 = (Il2CppObject *)static_fields->__9;
    _9__20_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                          System_Predicate_BattleServantData__TypeInfo,
                                                                          v28,
                                                                          v29,
                                                                          v30,
                                                                          v31);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__20_0,
      v36,
      Method_BattleLogicTarget___c__getTargetBattleServantData_b__20_0__,
      (const MethodInfo_2B0B204 *)Method_System_Predicate_BattleServantData___ctor__);
    v37 = BattleLogicTarget___c_TypeInfo->static_fields;
    v37->__9__20_0 = (struct System_Predicate_BattleServantData__o *)_9__20_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v37->__9__20_0,
      (System_Int32_array **)_9__20_0,
      v38,
      v39,
      v40,
      v41,
      v42,
      v43);
  }
  v44 = BasicHelper__TakeIf_object_(
          ServantData,
          (System_Predicate_T__o *)_9__20_0,
          (const MethodInfo_18B8DB8 *)Method_BasicHelper_TakeIf_BattleServantData___);
  if ( v44 )
  {
    v45 = (BattleServantData_o *)v44;
    if ( BattleServantData__isAlive((BattleServantData_o *)v44, 0, 0LL) )
    {
      v47 = this->fields.data;
      if ( v47 && task )
        goto LABEL_37;
      goto LABEL_70;
    }
    if ( !BattleServantData__isAlive(v45, 0, 0LL) )
    {
      if ( !task )
        goto LABEL_70;
      v50 = BattleLogicTask__getActorId(task, v49);
      if ( BattleServantData__checkOverKill(v45, v50, 0LL) )
      {
        v47 = this->fields.data;
        if ( v47 )
        {
LABEL_37:
          BattleLogicTask__setTarget(task, v47->fields.globaltargetId, v46);
          return v45;
        }
        goto LABEL_70;
      }
    }
    if ( !BattleServantData__isAlive(v45, 0, 0LL) && BattleServantData__isGuts(v45, 0LL) )
    {
      v52 = this->fields.data;
      if ( v52 && task )
      {
        BattleLogicTask__setTarget(task, v52->fields.globaltargetId, v51);
        v45->fields.overkillTargetId = -1;
        return v45;
      }
      goto LABEL_70;
    }
    v45->fields.overkillTargetId = -1;
  }
  v53 = this->fields.data;
  if ( !v53 )
    goto LABEL_70;
  FieldEnemyServantIDList = BattleData__getFieldEnemyServantIDList(v53, 1, 0LL);
  v55 = this->fields.data;
  if ( !v55 )
    goto LABEL_70;
  v56 = FieldEnemyServantIDList;
  quest_ent = v55->fields.quest_ent;
  if ( !quest_ent )
    goto LABEL_70;
  if ( QuestEntity__HasFlag(quest_ent, 0x40000000000000LL, 0LL) )
  {
    v62 = (System_Comparison_int__o *)sub_B170CC(System_Comparison_int__TypeInfo, v58, v59, v60, v61);
    System_Comparison_int____ctor(
      v62,
      (Il2CppObject *)this,
      Method_BattleLogicTarget__getTargetBattleServantData_b__20_1__,
      (const MethodInfo_25BE414 *)Method_System_Comparison_int___ctor__);
    System_Array__Sort_int__38824640(
      v56,
      (System_Comparison_T__o *)v62,
      (const MethodInfo_2506AC0 *)Method_System_Array_Sort_int____66801208);
  }
  v63 = this->fields.data;
  TargetBase = BattleLogicTarget__getTargetBase(this, v56, 0, 1, v61);
  if ( !v63 )
    goto LABEL_70;
  v63->fields.globaltargetId = TargetBase;
  BattleLogicTarget__updateEnemyTarget(this, v56, v65);
  v66 = this->fields.data;
  if ( !v66 )
    goto LABEL_70;
  if ( BattleData__isTargetLock(v66, 0LL) )
  {
    if ( !task )
      goto LABEL_70;
    v69 = this->fields.data;
    v70 = BattleLogicTask__getActorId(task, v67);
    if ( task->fields.skillInfo )
    {
      v71 = BattleSkillInfoData__GetAddIndiv(task->fields.skillInfo, 0LL);
      if ( !v69 )
        goto LABEL_70;
    }
    else
    {
      v71 = 0LL;
      if ( !v69 )
        goto LABEL_70;
    }
    v69->fields.globaltargetId = BattleData__getTargetLock(v69, v70, 0, v71, 0LL);
    v72 = this->fields.data;
    if ( v72 )
    {
      v73 = v72->fields.perf;
      if ( v73 )
      {
        BattlePerformance__reViewTargetMarks(v73, 0LL);
        goto LABEL_66;
      }
    }
LABEL_70:
    sub_B170D4();
  }
LABEL_66:
  v74 = this->fields.data;
  if ( !v74 )
    goto LABEL_70;
  if ( !task )
    goto LABEL_70;
  BattleLogicTask__setTarget(task, v74->fields.globaltargetId, v68);
  v75 = this->fields.data;
  if ( !v75 )
    goto LABEL_70;
  return BattleData__getServantData(v75, v75->fields.globaltargetId, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BattleLogicTarget__getTargetHighHp(
        BattleLogicTarget_o *this,
        System_Int32_array *targetlist,
        bool isDeadToEnableUpHate,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Comparison_int__o *v11; // x22
  const MethodInfo *v12; // x4

  if ( (byte_40FC475 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Array_Sort_int____66801208, targetlist);
    sub_B16FFC(&Method_BattleLogicTarget__getTargetHighHp_b__9_0__, v8);
    sub_B16FFC(&Method_System_Comparison_int___ctor__, v9);
    sub_B16FFC(&System_Comparison_int__TypeInfo, v10);
    byte_40FC475 = 1;
  }
  v11 = (System_Comparison_int__o *)sub_B170CC(
                                      System_Comparison_int__TypeInfo,
                                      targetlist,
                                      isDeadToEnableUpHate,
                                      method,
                                      v4);
  System_Comparison_int____ctor(
    v11,
    (Il2CppObject *)this,
    Method_BattleLogicTarget__getTargetHighHp_b__9_0__,
    (const MethodInfo_25BE414 *)Method_System_Comparison_int___ctor__);
  System_Array__Sort_int__38824640(
    targetlist,
    (System_Comparison_T__o *)v11,
    (const MethodInfo_2506AC0 *)Method_System_Array_Sort_int____66801208);
  return BattleLogicTarget__getTargetBase(this, targetlist, 0, isDeadToEnableUpHate, v12);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BattleLogicTarget__getTargetLowHp(
        BattleLogicTarget_o *this,
        System_Int32_array *targetlist,
        bool isDeadToEnableUpHate,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Comparison_int__o *v11; // x22
  const MethodInfo *v12; // x4

  if ( (byte_40FC476 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Array_Sort_int____66801208, targetlist);
    sub_B16FFC(&Method_BattleLogicTarget__getTargetLowHp_b__10_0__, v8);
    sub_B16FFC(&Method_System_Comparison_int___ctor__, v9);
    sub_B16FFC(&System_Comparison_int__TypeInfo, v10);
    byte_40FC476 = 1;
  }
  v11 = (System_Comparison_int__o *)sub_B170CC(
                                      System_Comparison_int__TypeInfo,
                                      targetlist,
                                      isDeadToEnableUpHate,
                                      method,
                                      v4);
  System_Comparison_int____ctor(
    v11,
    (Il2CppObject *)this,
    Method_BattleLogicTarget__getTargetLowHp_b__10_0__,
    (const MethodInfo_25BE414 *)Method_System_Comparison_int___ctor__);
  System_Array__Sort_int__38824640(
    targetlist,
    (System_Comparison_T__o *)v11,
    (const MethodInfo_2506AC0 *)Method_System_Array_Sort_int____66801208);
  return BattleLogicTarget__getTargetBase(this, targetlist, 0, isDeadToEnableUpHate, v12);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BattleLogicTarget__getTargetNpGaugeHeighter(
        BattleLogicTarget_o *this,
        System_Int32_array *targetlist,
        bool isDeadToEnableUpHate,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Comparison_int__o *v11; // x22
  const MethodInfo *v12; // x4

  if ( (byte_40FC478 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Array_Sort_int____66801208, targetlist);
    sub_B16FFC(&Method_BattleLogicTarget__getTargetNpGaugeHeighter_b__12_0__, v8);
    sub_B16FFC(&Method_System_Comparison_int___ctor__, v9);
    sub_B16FFC(&System_Comparison_int__TypeInfo, v10);
    byte_40FC478 = 1;
  }
  v11 = (System_Comparison_int__o *)sub_B170CC(
                                      System_Comparison_int__TypeInfo,
                                      targetlist,
                                      isDeadToEnableUpHate,
                                      method,
                                      v4);
  System_Comparison_int____ctor(
    v11,
    (Il2CppObject *)this,
    Method_BattleLogicTarget__getTargetNpGaugeHeighter_b__12_0__,
    (const MethodInfo_25BE414 *)Method_System_Comparison_int___ctor__);
  System_Array__Sort_int__38824640(
    targetlist,
    (System_Comparison_T__o *)v11,
    (const MethodInfo_2506AC0 *)Method_System_Array_Sort_int____66801208);
  return BattleLogicTarget__getTargetBase(this, targetlist, 0, isDeadToEnableUpHate, v12);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BattleLogicTarget__getTargetNpTurnLower(
        BattleLogicTarget_o *this,
        System_Int32_array *targetlist,
        bool isDeadToEnableUpHate,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Comparison_int__o *v11; // x22
  const MethodInfo *v12; // x4

  if ( (byte_40FC477 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Array_Sort_int____66801208, targetlist);
    sub_B16FFC(&Method_BattleLogicTarget__getTargetNpTurnLower_b__11_0__, v8);
    sub_B16FFC(&Method_System_Comparison_int___ctor__, v9);
    sub_B16FFC(&System_Comparison_int__TypeInfo, v10);
    byte_40FC477 = 1;
  }
  v11 = (System_Comparison_int__o *)sub_B170CC(
                                      System_Comparison_int__TypeInfo,
                                      targetlist,
                                      isDeadToEnableUpHate,
                                      method,
                                      v4);
  System_Comparison_int____ctor(
    v11,
    (Il2CppObject *)this,
    Method_BattleLogicTarget__getTargetNpTurnLower_b__11_0__,
    (const MethodInfo_25BE414 *)Method_System_Comparison_int___ctor__);
  System_Array__Sort_int__38824640(
    targetlist,
    (System_Comparison_T__o *)v11,
    (const MethodInfo_2506AC0 *)Method_System_Array_Sort_int____66801208);
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
  BattleData_o *data; // x0
  BattleServantData_o *ServantData; // x0
  BattleServantData_o *v15; // x24
  const MethodInfo *v16; // x3

  if ( !targetlist )
LABEL_15:
    sub_B170D4();
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
      data = v10->fields.data;
      if ( !data )
        goto LABEL_15;
      ServantData = BattleData__getServantData(data, targetlist->m_Items[v12 + 1], 0LL);
      if ( !ServantData )
        goto LABEL_15;
      v15 = ServantData;
      this = (BattleLogicTarget_o *)BattleServantData__getDeckIndex(ServantData, 0LL);
      if ( (_DWORD)this == position )
      {
        this = (BattleLogicTarget_o *)BattleLogicTarget__IsTargetAlive(v10, v15, 0, v16);
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
      sub_B17100(this, *(_QWORD *)&position, targetlist);
      sub_B170A0();
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

  if ( (byte_40FC474 & 1) == 0 )
  {
    sub_B16FFC(&Method_BattleRandom_getShuffle_int___, targetlist);
    byte_40FC474 = 1;
  }
  Shuffle_int = BattleRandom__getShuffle_int_(
                  targetlist,
                  (const MethodInfo_18BA0D4 *)Method_BattleRandom_getShuffle_int___);
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
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  System_Collections_Generic_List_int__o *v17; // x22
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  BattleBuffData_CheckIndividualitiesData_o *v22; // x26
  System_Int32_array *selfConcatSvtIndividualities_k__BackingField; // x0
  System_Int32_array *isUpHate; // x0
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x8
  System_Int32_array *v28; // x23
  unsigned __int64 v29; // x26
  int32_t *v30; // x27
  bool v31; // w24
  struct BattleData_o *v32; // x8
  BattleData_o *data; // x0
  BattleServantData_o *ServantData; // x25
  const MethodInfo *v35; // x3
  const MethodInfo *v36; // x2

  if ( (byte_40FC47D & 1) == 0 )
  {
    sub_B16FFC(&BattleBuffData_CheckIndividualitiesData_TypeInfo, list);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__ToArray__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v15);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v16);
    byte_40FC47D = 1;
  }
  v17 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    list,
                                                    atkSvt,
                                                    isResurrectable,
                                                    addIndiv);
  System_Collections_Generic_List_int____ctor(
    v17,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( atkSvt )
  {
    v22 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B170CC(
                                                         BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                         v18,
                                                         v19,
                                                         v20,
                                                         v21);
    BattleBuffData_CheckIndividualitiesData___ctor(v22, atkSvt, 0LL, 0LL, 0LL, 0LL, 0LL);
    if ( !v22 )
      goto LABEL_27;
    selfConcatSvtIndividualities_k__BackingField = v22->fields._selfConcatSvtIndividualities_k__BackingField;
  }
  else
  {
    selfConcatSvtIndividualities_k__BackingField = 0LL;
  }
  isUpHate = CommonFunction__JoinIndiv(selfConcatSvtIndividualities_k__BackingField, addIndiv, 0LL);
  if ( !list )
    goto LABEL_27;
  v27 = *(_QWORD *)&list->max_length;
  if ( (int)v27 >= 1 )
  {
    v28 = isUpHate;
    v29 = 0LL;
    v30 = &list->m_Items[1];
    v31 = isResurrectable;
    do
    {
      if ( v29 >= (unsigned int)v27 )
      {
LABEL_28:
        sub_B17100(isUpHate, v25, v26);
        sub_B170A0();
      }
      data = this->fields.data;
      if ( !data )
        goto LABEL_27;
      ServantData = BattleData__getServantData(data, v30[v29], 0LL);
      if ( BattleLogicTarget__IsTargetAlive(this, ServantData, v31, v35)
        || BattleLogicTarget__IsTargetGuts(this, ServantData, v36) )
      {
        if ( !ServantData )
          goto LABEL_27;
      }
      else
      {
        v32 = this->fields.data;
        if ( !v32 || !ServantData )
          goto LABEL_27;
        isUpHate = (System_Int32_array *)BattleServantData__checkDeadTurn(ServantData, v32->fields.typeTurn, 0LL);
        if ( ((unsigned __int8)isUpHate & 1) == 0 || !isDeadToEnableUpHate )
          goto LABEL_24;
      }
      isUpHate = (System_Int32_array *)BattleServantData__isUpHate(ServantData, v28, 0LL);
      if ( ((unsigned __int8)isUpHate & 1) != 0 )
      {
        if ( v29 >= list->max_length )
          goto LABEL_28;
        if ( !v17 )
          goto LABEL_27;
        System_Collections_Generic_List_int___Add(
          v17,
          v30[v29],
          (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
      }
LABEL_24:
      LODWORD(v27) = list->max_length;
    }
    while ( (__int64)++v29 < (int)v27 );
  }
  if ( !v17 )
LABEL_27:
    sub_B170D4();
  return System_Collections_Generic_List_int___ToArray(
           v17,
           (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
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
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_Collections_Generic_List_int__o *v15; // x23
  _BOOL8 IsTargetGuts; // x0
  __int64 v17; // x1
  const MethodInfo *v18; // x2
  __int64 v19; // x8
  unsigned __int64 v20; // x27
  int32_t *v21; // x28
  bool v22; // w24
  BattleData_o *data; // x0
  BattleServantData_o *ServantData; // x25
  const MethodInfo *v25; // x3
  __int64 v26; // x3
  __int64 v27; // x4
  System_Collections_Generic_List_int__o *v28; // x26
  System_Collections_Generic_IEnumerable_T__o *Individualities; // x0
  System_Collections_Generic_IEnumerable_T__o *BuffIndividualities; // x0
  BattleBuffData_BuffData_o *v31; // x0

  if ( (byte_40FC47C & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Func_int____bool__Invoke__, list);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__AddRange__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__ToArray__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v13);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v14);
    byte_40FC47C = 1;
  }
  v15 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    list,
                                                    funcContainsIndividuality,
                                                    isResurrectable,
                                                    isCheckBuff);
  System_Collections_Generic_List_int____ctor(
    v15,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !list )
    goto LABEL_22;
  v19 = *(_QWORD *)&list->max_length;
  if ( (int)v19 >= 1 )
  {
    v20 = 0LL;
    v21 = &list->m_Items[1];
    v22 = isResurrectable;
    do
    {
      if ( v20 >= (unsigned int)v19 )
      {
LABEL_23:
        sub_B17100(IsTargetGuts, v17, v18);
        sub_B170A0();
      }
      data = this->fields.data;
      if ( !data )
        goto LABEL_22;
      ServantData = BattleData__getServantData(data, v21[v20], 0LL);
      if ( BattleLogicTarget__IsTargetAlive(this, ServantData, v22, v25)
        || (IsTargetGuts = BattleLogicTarget__IsTargetGuts(this, ServantData, v18)) )
      {
        v28 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                          System_Collections_Generic_List_int__TypeInfo,
                                                          v17,
                                                          v18,
                                                          v26,
                                                          v27);
        System_Collections_Generic_List_int____ctor(
          v28,
          (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
        if ( !ServantData )
          goto LABEL_22;
        Individualities = (System_Collections_Generic_IEnumerable_T__o *)BattleServantData__getIndividualities(
                                                                           ServantData,
                                                                           0LL,
                                                                           0LL);
        if ( !v28 )
          goto LABEL_22;
        System_Collections_Generic_List_int___AddRange(
          v28,
          Individualities,
          (const MethodInfo_2F10744 *)Method_System_Collections_Generic_List_int__AddRange__);
        if ( isCheckBuff )
        {
          BuffIndividualities = (System_Collections_Generic_IEnumerable_T__o *)BattleServantData__getBuffIndividualities(
                                                                                 ServantData,
                                                                                 0,
                                                                                 0,
                                                                                 0,
                                                                                 0LL);
          System_Collections_Generic_List_int___AddRange(
            v28,
            BuffIndividualities,
            (const MethodInfo_2F10744 *)Method_System_Collections_Generic_List_int__AddRange__);
        }
        v31 = (BattleBuffData_BuffData_o *)System_Collections_Generic_List_int___ToArray(
                                             v28,
                                             (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
        if ( !funcContainsIndividuality )
          goto LABEL_22;
        IsTargetGuts = System_Func_BattleBuffData_BuffData__bool___Invoke(
                         (System_Func_BattleBuffData_BuffData__bool__o *)funcContainsIndividuality,
                         v31,
                         (const MethodInfo_2B6AB54 *)Method_System_Func_int____bool__Invoke__);
        if ( IsTargetGuts )
        {
          if ( v20 >= list->max_length )
            goto LABEL_23;
          if ( !v15 )
            goto LABEL_22;
          System_Collections_Generic_List_int___Add(
            v15,
            v21[v20],
            (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
        }
      }
      LODWORD(v19) = list->max_length;
    }
    while ( (__int64)++v20 < (int)v19 );
  }
  if ( !v15 )
LABEL_22:
    sub_B170D4();
  return System_Collections_Generic_List_int___ToArray(
           v15,
           (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
}


void __fastcall BattleLogicTarget__setInit(BattleLogicTarget_o *this, BattleData_o *data, const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.data = data;
  sub_B16F98(
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
  __int64 v3; // x3
  __int64 v4; // x4
  System_Int32_array *FieldEnemyServantIDList; // x20
  __int64 v7; // x1
  __int64 v8; // x1
  struct BattleData_o *data; // x0
  System_Collections_Generic_List_int__o *v10; // x21
  BattleData_o *v11; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x8
  BattleData_o *isUpHate; // x0
  unsigned __int64 v16; // x23
  int32_t *v17; // x24
  BattleServantData_o *EnemyServantData; // x0
  BattleServantData_o *v19; // x22

  FieldEnemyServantIDList = targetIdList;
  if ( (byte_40FC47F & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, targetIdList);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v7);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v8);
    byte_40FC47F = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_23;
  if ( !data->fields.isMultiTargetBattle )
  {
    if ( !FieldEnemyServantIDList )
      FieldEnemyServantIDList = BattleData__getFieldEnemyServantIDList(data, 1, 0LL);
    v10 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                      System_Collections_Generic_List_int__TypeInfo,
                                                      targetIdList,
                                                      method,
                                                      v3,
                                                      v4);
    System_Collections_Generic_List_int____ctor(
      v10,
      (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
    v11 = this->fields.data;
    if ( !v11 )
      goto LABEL_23;
    BattleData__getFieldEnemyServantIDList(v11, 1, 0LL);
    if ( !FieldEnemyServantIDList )
      goto LABEL_23;
    v14 = *(_QWORD *)&FieldEnemyServantIDList->max_length;
    isUpHate = this->fields.data;
    if ( (int)v14 >= 1 )
    {
      v16 = 0LL;
      v17 = &FieldEnemyServantIDList->m_Items[1];
      while ( 1 )
      {
        if ( v16 >= (unsigned int)v14 )
        {
LABEL_24:
          sub_B17100(isUpHate, v12, v13);
          sub_B170A0();
        }
        if ( !isUpHate )
          break;
        EnemyServantData = BattleData__getEnemyServantData(isUpHate, v17[v16], 0LL);
        if ( !EnemyServantData )
          break;
        v19 = EnemyServantData;
        if ( BattleServantData__isAlive(EnemyServantData, 0, 0LL) || BattleServantData__isGuts(v19, 0LL) )
        {
          isUpHate = (BattleData_o *)BattleServantData__isUpHate(v19, 0LL, 0LL);
          if ( ((unsigned __int8)isUpHate & 1) != 0 )
          {
            if ( v16 >= FieldEnemyServantIDList->max_length )
              goto LABEL_24;
            if ( !v10 )
              break;
            System_Collections_Generic_List_int___Add(
              v10,
              v17[v16],
              (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
          }
        }
        LODWORD(v14) = FieldEnemyServantIDList->max_length;
        isUpHate = this->fields.data;
        if ( (__int64)++v16 >= (int)v14 )
          goto LABEL_21;
      }
LABEL_23:
      sub_B170D4();
    }
LABEL_21:
    if ( !isUpHate )
      goto LABEL_23;
    BattleData__setTargetLock(isUpHate, v10, 0LL);
  }
}


void __fastcall BattleLogicTarget__updateGlobalTarget(BattleLogicTarget_o *this, const MethodInfo *method)
{
  BattleData_o *data; // x0
  System_Int32_array *FieldEnemyServantIDList; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x8
  System_Int32_array *v8; // x20
  unsigned __int64 v9; // x21
  BattleData_o *v10; // x0
  BattleServantData_o *EnemyServantData; // x0
  struct BattleData_o *v12; // x8

  data = this->fields.data;
  if ( !data )
    goto LABEL_16;
  FieldEnemyServantIDList = BattleData__getFieldEnemyServantIDList(data, 1, 0LL);
  if ( !FieldEnemyServantIDList )
    goto LABEL_16;
  v7 = *(_QWORD *)&FieldEnemyServantIDList->max_length;
  v8 = FieldEnemyServantIDList;
  if ( v7 && (int)v7 >= 1 )
  {
    v9 = 0LL;
    while ( 1 )
    {
      if ( v9 >= (unsigned int)v7 )
        goto LABEL_17;
      v10 = this->fields.data;
      if ( !v10 )
        goto LABEL_16;
      EnemyServantData = BattleData__getEnemyServantData(v10, v8->m_Items[v9 + 1], 0LL);
      if ( !EnemyServantData )
        goto LABEL_16;
      FieldEnemyServantIDList = (System_Int32_array *)BattleServantData__isDeadWaitNotAlive(EnemyServantData, 0LL);
      if ( ((unsigned __int8)FieldEnemyServantIDList & 1) == 0 )
        break;
      LODWORD(v7) = v8->max_length;
      if ( (__int64)++v9 >= (int)v7 )
        return;
    }
    if ( (unsigned int)v9 >= v8->max_length )
    {
LABEL_17:
      sub_B17100(FieldEnemyServantIDList, v5, v6);
      sub_B170A0();
    }
    v12 = this->fields.data;
    if ( v12 )
    {
      v12->fields.globaltargetId = v8->m_Items[v9 + 1];
      return;
    }
LABEL_16:
    sub_B170D4();
  }
}


void __fastcall BattleLogicTarget___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F9DDA & 1) == 0 )
  {
    sub_B16FFC(&BattleLogicTarget___c_TypeInfo, v1);
    byte_40F9DDA = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(BattleLogicTarget___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)BattleLogicTarget___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
    sub_B170D4();
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
  struct BattleLogicTarget_o *_4__this; // x8
  BattleData_o *data; // x0
  BattleServantData_o *ServantData; // x0
  struct BattleLogicTarget_o *v10; // x8
  BattleServantData_o *v11; // x22
  BattleData_o *v12; // x0
  BattleServantData_o *v13; // x0
  BattleServantData_o *v14; // x23
  int32_t ActiveIndividualitiesNum; // w0
  int32_t v16; // w22
  int32_t v17; // w0
  int32_t v18; // w23
  System_Collections_Generic_Dictionary_int__int__o *indNum; // x0

  if ( (byte_40F9DDB & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__, *(_QWORD *)&x);
    byte_40F9DDB = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_12;
  data = _4__this->fields.data;
  if ( !data )
    goto LABEL_12;
  ServantData = BattleData__getServantData(data, x, 0LL);
  v10 = this->fields.__4__this;
  if ( !v10 )
    goto LABEL_12;
  v11 = ServantData;
  v12 = v10->fields.data;
  if ( !v12 )
    goto LABEL_12;
  v13 = BattleData__getServantData(v12, y, 0LL);
  if ( !v11
    || (v14 = v13,
        ActiveIndividualitiesNum = BattleServantData__getActiveIndividualitiesNum(v11, this->fields.indv, 0LL),
        !v14)
    || (v16 = ActiveIndividualitiesNum,
        v17 = BattleServantData__getActiveIndividualitiesNum(v14, this->fields.indv, 0LL),
        !this->fields.indNum)
    || (v18 = v17,
        System_Collections_Generic_Dictionary_int__int___set_Item(
          this->fields.indNum,
          x,
          v16,
          (const MethodInfo_2DDCF8C *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__),
        (indNum = this->fields.indNum) == 0LL) )
  {
LABEL_12:
    sub_B170D4();
  }
  System_Collections_Generic_Dictionary_int__int___set_Item(
    indNum,
    y,
    v18,
    (const MethodInfo_2DDCF8C *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
  return v18 - v16;
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
  BattleData_o *data; // x0
  BattleServantData_o *ServantData; // x0
  struct BattleLogicTarget_o *v9; // x8
  BattleServantData_o *v10; // x20
  BattleData_o *v11; // x0
  BattleServantData_o *v12; // x0
  int32_t ActiveBuffNum; // w0

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (data = _4__this->fields.data) == 0LL
    || (ServantData = BattleData__getServantData(data, x, 0LL), (v9 = this->fields.__4__this) == 0LL)
    || (v10 = ServantData, (v11 = v9->fields.data) == 0LL)
    || (v12 = BattleData__getServantData(v11, y, 0LL)) == 0LL
    || (ActiveBuffNum = BattleServantData__getActiveBuffNum(v12, this->fields.ids, 0LL), !v10) )
  {
    sub_B170D4();
  }
  return ActiveBuffNum - BattleServantData__getActiveBuffNum(v10, this->fields.ids, 0LL);
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