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
  if ( (byte_42EBEC2 & 1) == 0 )
  {
    this = (BattleLogicTarget_o *)sub_B5D5C4(
                                    &Method_BasicHelper_ContainsSelfNotNull_int___,
                                    (_DWORD)svtData,
                                    isResurrectable,
                                    method);
    byte_42EBEC2 = 1;
  }
  if ( !svtData )
    sub_B5D69C(this, svtData);
  return !BasicHelper__ContainsSelfNotNull_int_(
            (System_Collections_Generic_HashSet_T__o *)v6->fields.tempDeadSvtHash,
            svtData->fields.uniqueId,
            (const MethodInfo_1AD6F50 *)Method_BasicHelper_ContainsSelfNotNull_int___)
      && BattleServantData__isAlive(svtData, isResurrectable, 0LL);
}


bool __fastcall BattleLogicTarget__IsTargetGuts(
        BattleLogicTarget_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  __int64 v3; // x3
  BattleLogicTarget_o *v5; // x20

  v5 = this;
  if ( (byte_42EBEC3 & 1) == 0 )
  {
    this = (BattleLogicTarget_o *)sub_B5D5C4(
                                    &Method_BasicHelper_ContainsSelfNotNull_int___,
                                    (_DWORD)svtData,
                                    (_DWORD)method,
                                    v3);
    byte_42EBEC3 = 1;
  }
  if ( !svtData )
    sub_B5D69C(this, svtData);
  return !svtData->fields.isDeadAnime
      && BasicHelper__ContainsSelfNotNull_int_(
           (System_Collections_Generic_HashSet_T__o *)v5->fields.tempDeadSvtHash,
           svtData->fields.uniqueId,
           (const MethodInfo_1AD6F50 *)Method_BasicHelper_ContainsSelfNotNull_int___)
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
    sub_B5D69C(data, *(_QWORD *)&a);
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
    sub_B5D69C(data, *(_QWORD *)&x);
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
    sub_B5D69C(data, *(_QWORD *)&x);
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
    sub_B5D69C(data, *(_QWORD *)&x);
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
    sub_B5D69C(data, *(_QWORD *)&x);
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
  int v7; // w1
  char v8; // w2
  __int64 v9; // x3
  int v10; // w1
  char v11; // w2
  __int64 v12; // x3
  int v13; // w1
  char v14; // w2
  __int64 v15; // x3
  System_Collections_Generic_List_int__o *v16; // x21
  BattleData_o *data; // x0
  __int64 v18; // x1
  __int64 v19; // x8
  unsigned __int64 v20; // x24
  bool v21; // w22
  const MethodInfo *v22; // x3
  BattleServantData_o *v23; // x23
  const MethodInfo *v24; // x2
  struct BattleData_o *v25; // x8
  __int64 v27; // x0

  if ( (byte_42EBEC4 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, (_DWORD)targetlist, isResurrectable, method);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v10, v11, v12);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v13, v14, v15);
    byte_42EBEC4 = 1;
  }
  v16 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v16,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  if ( !targetlist )
    goto LABEL_18;
  v19 = *(_QWORD *)&targetlist->max_length;
  if ( (int)v19 >= 1 )
  {
    v20 = 0LL;
    v21 = isResurrectable;
    while ( 1 )
    {
      if ( v20 >= (unsigned int)v19 )
      {
        v27 = sub_B5D6C8(data);
        sub_B5D668(v27, 0LL);
      }
      data = this->fields.data;
      if ( !data )
        break;
      data = (BattleData_o *)BattleData__getServantData(data, targetlist->m_Items[v20 + 1], 0LL);
      if ( data )
      {
        v23 = (BattleServantData_o *)data;
        data = (BattleData_o *)BattleLogicTarget__IsTargetAlive(this, (BattleServantData_o *)data, v21, v22);
        if ( ((unsigned __int8)data & 1) != 0 )
          goto LABEL_10;
        data = (BattleData_o *)BattleLogicTarget__IsTargetGuts(this, v23, v24);
        if ( ((unsigned __int8)data & 1) != 0 )
        {
          v25 = this->fields.data;
          if ( !v25 )
            break;
          data = (BattleData_o *)BattleServantData__checkDeadTurn(v23, v25->fields.typeTurn, 0LL);
          if ( ((unsigned __int8)data & 1) == 0 )
          {
LABEL_10:
            if ( !v16 )
              break;
            System_Collections_Generic_List_int___Add(
              v16,
              v23->fields.uniqueId,
              (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
          }
        }
      }
      LODWORD(v19) = targetlist->max_length;
      if ( (__int64)++v20 >= (int)v19 )
        goto LABEL_16;
    }
LABEL_18:
    sub_B5D69C(data, v18);
  }
LABEL_16:
  if ( !v16 )
    goto LABEL_18;
  return System_Collections_Generic_List_int___ToArray(
           v16,
           (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
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
    sub_B5D69C(data, *(_QWORD *)&uniqueId);
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
    sub_B5D69C(data, *(_QWORD *)&actId);
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  __int64 v21; // x23
  __int64 v22; // x0
  __int64 v23; // x1
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_Comparison_int__o *v36; // x22
  const MethodInfo *v37; // x4

  if ( (byte_42EBECB & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Array_Sort_int____68805856, (_DWORD)ids, (_DWORD)targetlist, isDeadToEnableUpHate);
    sub_B5D5C4(&Method_System_Comparison_int___ctor__, v9, v10, v11);
    sub_B5D5C4(&System_Comparison_int__TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_BattleLogicTarget___c__DisplayClass15_0__getTargetActiveBuff_b__0__, v15, v16, v17);
    sub_B5D5C4(&BattleLogicTarget___c__DisplayClass15_0_TypeInfo, v18, v19, v20);
    byte_42EBECB = 1;
  }
  v21 = sub_B5D694(BattleLogicTarget___c__DisplayClass15_0_TypeInfo);
  BattleLogicTarget___c__DisplayClass15_0___ctor((BattleLogicTarget___c__DisplayClass15_0_o *)v21, 0LL);
  if ( !v21 )
    sub_B5D69C(v22, v23);
  *(_QWORD *)(v21 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v21 + 16), (System_Int32_array **)this, v24, v25, v26, v27, v28, v29);
  *(_QWORD *)(v21 + 24) = ids;
  sub_B5D560((BattleServantConfConponent_o *)(v21 + 24), (System_Int32_array **)ids, v30, v31, v32, v33, v34, v35);
  v36 = (System_Comparison_int__o *)sub_B5D694(System_Comparison_int__TypeInfo);
  System_Comparison_int____ctor(
    v36,
    (Il2CppObject *)v21,
    Method_BattleLogicTarget___c__DisplayClass15_0__getTargetActiveBuff_b__0__,
    (const MethodInfo_24998C8 *)Method_System_Comparison_int___ctor__);
  System_Array__Sort_int__28083228(
    targetlist,
    (System_Comparison_T__o *)v36,
    (const MethodInfo_1AC841C *)Method_System_Array_Sort_int____68805856);
  return BattleLogicTarget__getTargetBase(this, targetlist, 0, isDeadToEnableUpHate, v37);
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
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  int v56; // w1
  int v57; // w2
  __int64 v58; // x3
  int v59; // w1
  int v60; // w2
  __int64 v61; // x3
  __int64 v62; // x24
  System_Collections_Generic_Dictionary_int__int__o *Count; // x0
  __int64 v64; // x1
  System_String_array **v65; // x2
  System_String_array **v66; // x3
  System_Boolean_array **v67; // x4
  System_Int32_array **v68; // x5
  System_Int32_array *v69; // x6
  System_Int32_array *v70; // x7
  System_String_array **v71; // x2
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7
  const MethodInfo *v77; // x3
  System_Collections_Generic_Dictionary_int__int__o *v78; // x23
  System_Collections_Generic_Dictionary_int__int__o **v79; // x22
  System_String_array **v80; // x2
  System_String_array **v81; // x3
  System_Boolean_array **v82; // x4
  System_Int32_array **v83; // x5
  System_Int32_array *v84; // x6
  System_Int32_array *v85; // x7
  System_Comparison_int__o *v86; // x23
  const MethodInfo *v87; // x4
  int32_t Item; // w23
  System_Collections_Generic_List_int__o *v89; // x21
  __int64 v90; // x1
  int32_t currentKey; // w24
  __int64 v92; // x0
  __int64 v93; // x1
  System_Int32_array *v94; // x0
  const MethodInfo *v95; // x4
  __int64 v97; // x0
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o v98; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o v99; // [xsp+20h] [xbp-70h] BYREF

  v8 = targetlist;
  if ( (byte_42EBECA & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Array_Sort_int____68805856, (_DWORD)indv, (_DWORD)targetlist, aiActEnt);
    sub_B5D5C4(&Method_System_Comparison_int___ctor__, v11, v12, v13);
    sub_B5D5C4(&System_Comparison_int__TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__int__get_Count__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__int__get_Keys__, v26, v27, v28);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v29, v30, v31);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__int__Dispose__,
      v32,
      v33,
      v34);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__int__MoveNext__,
      v35,
      v36,
      v37);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__int__get_Current__,
      v38,
      v39,
      v40);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_KeyCollection_int__int__GetEnumerator__, v41, v42, v43);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v44, v45, v46);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, v47, v48, v49);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v50, v51, v52);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v53, v54, v55);
    sub_B5D5C4(&Method_BattleLogicTarget___c__DisplayClass14_0__getTargetActiveIndividualities_b__0__, v56, v57, v58);
    sub_B5D5C4(&BattleLogicTarget___c__DisplayClass14_0_TypeInfo, v59, v60, v61);
    byte_42EBECA = 1;
  }
  memset(&v99, 0, sizeof(v99));
  v62 = sub_B5D694(BattleLogicTarget___c__DisplayClass14_0_TypeInfo);
  BattleLogicTarget___c__DisplayClass14_0___ctor((BattleLogicTarget___c__DisplayClass14_0_o *)v62, 0LL);
  if ( !v62 )
    goto LABEL_26;
  *(_QWORD *)(v62 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v62 + 16), (System_Int32_array **)this, v65, v66, v67, v68, v69, v70);
  *(_QWORD *)(v62 + 24) = indv;
  sub_B5D560((BattleServantConfConponent_o *)(v62 + 24), (System_Int32_array **)indv, v71, v72, v73, v74, v75, v76);
  if ( aiActEnt && !AiActEntity__IsIncludeDeathSvt(aiActEnt, 0LL) )
    v8 = BattleLogicTarget__deathSvtExclusion(this, v8, 0, v77);
  v78 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B5D694(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v78,
    (const MethodInfo_2F0A2B4 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  *(_QWORD *)(v62 + 32) = v78;
  v79 = (System_Collections_Generic_Dictionary_int__int__o **)(v62 + 32);
  sub_B5D560((BattleServantConfConponent_o *)(v62 + 32), (System_Int32_array **)v78, v80, v81, v82, v83, v84, v85);
  v86 = (System_Comparison_int__o *)sub_B5D694(System_Comparison_int__TypeInfo);
  System_Comparison_int____ctor(
    v86,
    (Il2CppObject *)v62,
    Method_BattleLogicTarget___c__DisplayClass14_0__getTargetActiveIndividualities_b__0__,
    (const MethodInfo_24998C8 *)Method_System_Comparison_int___ctor__);
  System_Array__Sort_int__28083228(
    v8,
    (System_Comparison_T__o *)v86,
    (const MethodInfo_1AC841C *)Method_System_Array_Sort_int____68805856);
  Count = *(System_Collections_Generic_Dictionary_int__int__o **)(v62 + 32);
  if ( !Count )
    goto LABEL_26;
  Count = (System_Collections_Generic_Dictionary_int__int__o *)System_Collections_Generic_Dictionary_int__int___get_Count(
                                                                 Count,
                                                                 (const MethodInfo_2F0AA58 *)Method_System_Collections_Generic_Dictionary_int__int__get_Count__);
  if ( (int)Count >= 1 )
  {
    if ( v8 )
    {
      if ( !v8->max_length )
      {
        v97 = sub_B5D6C8(Count);
        sub_B5D668(v97, 0LL);
      }
      Count = *v79;
      if ( *v79 )
      {
        Item = System_Collections_Generic_Dictionary_int__int___get_Item(
                 Count,
                 v8->m_Items[1],
                 (const MethodInfo_2F0AD98 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
        v89 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
        System_Collections_Generic_List_int____ctor(
          v89,
          (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
        Count = *v79;
        if ( *v79 )
        {
          Count = (System_Collections_Generic_Dictionary_int__int__o *)System_Collections_Generic_Dictionary_int__int___get_Keys(
                                                                         Count,
                                                                         (const MethodInfo_2F0AA68 *)Method_System_Collections_Generic_Dictionary_int__int__get_Keys__);
          if ( Count )
          {
            System_Collections_Generic_Dictionary_KeyCollection_int__int___GetEnumerator(
              &v98,
              (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)Count,
              (const MethodInfo_2433BAC *)Method_System_Collections_Generic_Dictionary_KeyCollection_int__int__GetEnumerator__);
            v99 = v98;
            while ( System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__int___MoveNext(
                      &v99,
                      (const MethodInfo_289FE04 *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__int__MoveNext__) )
            {
              if ( !*v79 )
                sub_B5D69C(0LL, v90);
              currentKey = (int32_t)v99.fields.currentKey;
              v92 = System_Collections_Generic_Dictionary_int__int___get_Item(
                      *v79,
                      (int32_t)v99.fields.currentKey,
                      (const MethodInfo_2F0AD98 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
              if ( Item == (_DWORD)v92 )
              {
                if ( !v89 )
                  sub_B5D69C(v92, v93);
                System_Collections_Generic_List_int___Add(
                  v89,
                  currentKey,
                  (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
              }
            }
            System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__int___Dispose(
              &v99,
              (const MethodInfo_289FE00 *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__int__Dispose__);
            if ( v89 )
            {
              v94 = System_Collections_Generic_List_int___ToArray(
                      v89,
                      (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
              return BattleLogicTarget__getTargetRandom(this, v94, 0, isDeadToEnableUpHate, v95);
            }
          }
        }
      }
    }
LABEL_26:
    sub_B5D69C(Count, v64);
  }
  return BattleLogicTarget__getTargetBase(this, v8, 0, isDeadToEnableUpHate, v87);
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
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  __int64 v37; // x28
  BattleData_o *NoTargetNoActionType; // x0
  __int64 v39; // x1
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  System_Collections_ICollection_o **v46; // x25
  BattleData_o *v47; // x27
  bool v48; // w26
  BattleServantData_o *ServantData; // x0
  const MethodInfo *v50; // x6
  struct PlayMakerFSM_o *rootfsm; // x8
  System_Int32_array *v52; // x0
  const MethodInfo *v53; // x3
  const MethodInfo *v54; // x4
  System_Int32_array *Shuffle_int; // x5
  int32_t result; // w0
  BattleLogicTarget___c__DisplayClass17_1_o *v57; // x21
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v58; // x0
  __int64 *v59; // x8
  System_Func_int____bool__o *v60; // x20
  Il2CppObject *v61; // x1
  const MethodInfo *v62; // x5
  bool v63; // w3
  int32_t v64; // w1
  BattleLogicTarget_o *v65; // x0

  if ( (byte_42EBECC & 1) == 0 )
  {
    sub_B5D5C4(&Method_BattleRandom_getShuffle_int___, target, actId, individuality);
    sub_B5D5C4(&Method_System_Func_int____bool___ctor__, v16, v17, v18);
    sub_B5D5C4(&System_Func_int____bool__TypeInfo, v19, v20, v21);
    sub_B5D5C4(&int___TypeInfo, v22, v23, v24);
    sub_B5D5C4(&Method_BattleLogicTarget___c__DisplayClass17_0__getTargetAiAct_b__1__, v25, v26, v27);
    sub_B5D5C4(&BattleLogicTarget___c__DisplayClass17_0_TypeInfo, v28, v29, v30);
    sub_B5D5C4(&Method_BattleLogicTarget___c__DisplayClass17_1__getTargetAiAct_b__0__, v31, v32, v33);
    sub_B5D5C4(&BattleLogicTarget___c__DisplayClass17_1_TypeInfo, v34, v35, v36);
    byte_42EBECC = 1;
  }
  v37 = sub_B5D694(BattleLogicTarget___c__DisplayClass17_0_TypeInfo);
  BattleLogicTarget___c__DisplayClass17_0___ctor((BattleLogicTarget___c__DisplayClass17_0_o *)v37, 0LL);
  if ( !v37 )
    goto LABEL_41;
  *(_QWORD *)(v37 + 16) = individuality;
  v46 = (System_Collections_ICollection_o **)(v37 + 16);
  sub_B5D560(
    (BattleServantConfConponent_o *)(v37 + 16),
    (System_Int32_array **)individuality,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
  NoTargetNoActionType = (BattleData_o *)sub_B5D5DC(int___TypeInfo, 0LL);
  v47 = NoTargetNoActionType;
  if ( aiActEnt )
  {
    NoTargetNoActionType = (BattleData_o *)AiActEntity__GetNoTargetNoActionType(aiActEnt, 0LL);
    v48 = (_DWORD)NoTargetNoActionType != 0;
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
                                             v50);
    v47 = NoTargetNoActionType;
    goto LABEL_10;
  }
  v48 = 0;
  if ( isCheckHate )
    goto LABEL_8;
LABEL_10:
  if ( !v47 )
    goto LABEL_41;
  rootfsm = v47->fields.rootfsm;
  if ( rootfsm )
    goto LABEL_12;
  v57 = (BattleLogicTarget___c__DisplayClass17_1_o *)sub_B5D694(BattleLogicTarget___c__DisplayClass17_1_TypeInfo);
  BattleLogicTarget___c__DisplayClass17_1___ctor(v57, 0LL);
  if ( !aiActEnt )
    goto LABEL_21;
  if ( !v57 )
    goto LABEL_41;
  if ( AiActEntity__TryGetMultiIndividuality(aiActEnt, &v57->fields.multiIndividuality, 0LL) )
  {
    v58 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_int____bool__TypeInfo);
    v59 = &Method_BattleLogicTarget___c__DisplayClass17_1__getTargetAiAct_b__0__;
    v60 = (System_Func_int____bool__o *)v58;
    v61 = (Il2CppObject *)v57;
  }
  else
  {
LABEL_21:
    if ( BasicHelper__IsNullOrEmpty(*v46, 0LL) )
    {
      v60 = 0LL;
      goto LABEL_27;
    }
    v58 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_int____bool__TypeInfo);
    v59 = &Method_BattleLogicTarget___c__DisplayClass17_0__getTargetAiAct_b__1__;
    v60 = (System_Func_int____bool__o *)v58;
    v61 = (Il2CppObject *)v37;
  }
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v58,
    v61,
    *v59,
    (const MethodInfo_2C2ECD0 *)Method_System_Func_int____bool___ctor__);
  if ( !v60 )
    goto LABEL_27;
  NoTargetNoActionType = (BattleData_o *)BattleLogicTarget__narrowDownIndividuality(
                                           this,
                                           targetlist,
                                           v60,
                                           isResurrectable,
                                           target != 13,
                                           v62);
  if ( !NoTargetNoActionType )
LABEL_41:
    sub_B5D69C(NoTargetNoActionType, v39);
  v47 = NoTargetNoActionType;
LABEL_27:
  rootfsm = v47->fields.rootfsm;
  if ( v48 && v60 != 0LL && rootfsm == 0LL )
    return -1;
LABEL_12:
  if ( rootfsm )
    v52 = (System_Int32_array *)v47;
  else
    v52 = targetlist;
  Shuffle_int = BattleRandom__getShuffle_int_(v52, (const MethodInfo_1ADAEE4 *)Method_BattleRandom_getShuffle_int___);
  switch ( target )
  {
    case 2:
      return BattleLogicTarget__getTargetHighHp(this, Shuffle_int, isDeadToEnableUpHate, v53);
    case 3:
      return BattleLogicTarget__getTargetLowHp(this, Shuffle_int, isDeadToEnableUpHate, v53);
    case 10:
      return BattleLogicTarget__getTargetNpTurnLower(this, Shuffle_int, isDeadToEnableUpHate, v53);
    case 11:
      return BattleLogicTarget__getTargetNpGaugeHeighter(this, Shuffle_int, isDeadToEnableUpHate, v53);
    case 12:
      return BattleLogicTarget__getRevenge(this, actId, Shuffle_int, isDeadToEnableUpHate, v54);
    case 13:
      return BattleLogicTarget__getTargetActiveIndividualities(
               this,
               (System_Int32_array *)*v46,
               Shuffle_int,
               aiActEnt,
               isDeadToEnableUpHate,
               (const MethodInfo *)Shuffle_int);
    case 14:
      return BattleLogicTarget__getTargetActiveBuff(
               this,
               (System_Int32_array *)*v46,
               Shuffle_int,
               isDeadToEnableUpHate,
               v54);
    case 15:
      v63 = isDeadToEnableUpHate;
      v65 = this;
      v64 = 0;
      goto LABEL_40;
    case 16:
      v63 = isDeadToEnableUpHate;
      v64 = 1;
      goto LABEL_39;
    case 17:
      v63 = isDeadToEnableUpHate;
      v64 = 2;
LABEL_39:
      v65 = this;
LABEL_40:
      result = BattleLogicTarget__getTargetPosition(v65, v64, Shuffle_int, v63, v48, (const MethodInfo *)Shuffle_int);
      break;
    default:
      result = BattleLogicTarget__getTargetBase(this, Shuffle_int, isResurrectable, isDeadToEnableUpHate, v54);
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
    sub_B5D69C(this, targetlist);
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
      v16 = sub_B5D6C8(this);
      sub_B5D668(v16, 0LL);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  BattleData_o *data; // x0
  const MethodInfo *v31; // x2
  struct BattleData_o *v32; // x21
  int32_t v33; // w1
  BattleData_o *v34; // x0
  System_Int32_array *v35; // x3
  int32_t v36; // w22
  struct BattleData_o *v37; // x8
  Il2CppObject *ServantData; // x21
  BattleLogicTarget___c_c *v39; // x8
  struct BattleLogicTarget___c_StaticFields *static_fields; // x9
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__20_0; // x22
  Il2CppObject *v42; // x23
  struct BattleLogicTarget___c_StaticFields *v43; // x0
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  Il2CppObject *v50; // x0
  BattleServantData_o *v51; // x21
  const MethodInfo *v52; // x2
  struct BattleData_o *v53; // x8
  int32_t ActorId; // w0
  const MethodInfo *v56; // x2
  struct BattleData_o *v57; // x8
  struct BattleData_o *v58; // x8
  System_Int32_array *v59; // x21
  const MethodInfo *v60; // x4
  System_Comparison_int__o *v61; // x22
  struct BattleData_o *v62; // x22
  const MethodInfo *v63; // x2
  const MethodInfo *v64; // x2
  struct BattleData_o *v65; // x21
  int32_t v66; // w22
  System_Int32_array *v67; // x3
  struct BattleData_o *v68; // x8
  struct BattleData_o *v69; // x8

  if ( (byte_42EBECF & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Array_Sort_int____68805856, (_DWORD)task, (_DWORD)method, v3);
    sub_B5D5C4(&Method_BasicHelper_TakeIf_BattleServantData___, v6, v7, v8);
    sub_B5D5C4(&Method_BattleLogicTarget__getTargetBattleServantData_b__20_1__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Comparison_int___ctor__, v12, v13, v14);
    sub_B5D5C4(&System_Comparison_int__TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_System_Predicate_BattleServantData___ctor__, v18, v19, v20);
    sub_B5D5C4(&System_Predicate_BattleServantData__TypeInfo, v21, v22, v23);
    sub_B5D5C4(&Method_BattleLogicTarget___c__getTargetBattleServantData_b__20_0__, v24, v25, v26);
    sub_B5D5C4(&BattleLogicTarget___c_TypeInfo, v27, v28, v29);
    byte_42EBECF = 1;
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
    BattleLogicTarget__updateEnemyTarget(this, 0LL, v31);
    goto LABEL_24;
  }
  if ( !task )
    goto LABEL_70;
  if ( task->fields.actiontype == 4 )
  {
    data = (BattleData_o *)BattleLogicTask__IsTargetTypeEnemy(task, (const MethodInfo *)task);
    if ( ((unsigned __int8)data & 1) == 0 )
      goto LABEL_21;
    v32 = this->fields.data;
    data = (BattleData_o *)BattleLogicTask__getActorId(task, (const MethodInfo *)task);
    if ( !v32 )
      goto LABEL_70;
    v33 = (int)data;
    v34 = v32;
    v35 = 0LL;
  }
  else
  {
    v32 = this->fields.data;
    data = (BattleData_o *)BattleLogicTask__getActorId(task, (const MethodInfo *)task);
    v36 = (int)data;
    if ( task->fields.skillInfo )
    {
      data = (BattleData_o *)BattleSkillInfoData__GetAddIndiv(task->fields.skillInfo, 0LL);
      v35 = (System_Int32_array *)data;
      if ( !v32 )
        goto LABEL_70;
    }
    else
    {
      v35 = 0LL;
      if ( !v32 )
        goto LABEL_70;
    }
    v34 = v32;
    v33 = v36;
  }
  data = (BattleData_o *)BattleData__getTargetLock(v34, v33, 0, v35, 0LL);
  v32->fields.globaltargetId = (int)data;
LABEL_21:
  v37 = this->fields.data;
  if ( !v37 )
    goto LABEL_70;
  data = (BattleData_o *)v37->fields.perf;
  if ( !data )
    goto LABEL_70;
  BattlePerformance__reViewTargetMarks((BattlePerformance_o *)data, 0LL);
LABEL_24:
  data = this->fields.data;
  if ( !data )
    goto LABEL_70;
  ServantData = (Il2CppObject *)BattleData__getServantData(data, data->fields.globaltargetId, 0LL);
  v39 = BattleLogicTarget___c_TypeInfo;
  if ( (BYTE3(BattleLogicTarget___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleLogicTarget___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicTarget___c_TypeInfo);
    v39 = BattleLogicTarget___c_TypeInfo;
  }
  static_fields = v39->static_fields;
  _9__20_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__20_0;
  if ( !_9__20_0 )
  {
    if ( (BYTE3(v39->vtable._0_Equals.methodPtr) & 4) != 0 && !v39->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v39);
      static_fields = BattleLogicTarget___c_TypeInfo->static_fields;
    }
    v42 = (Il2CppObject *)static_fields->__9;
    _9__20_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_BattleServantData__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__20_0,
      v42,
      Method_BattleLogicTarget___c__getTargetBattleServantData_b__20_0__,
      (const MethodInfo_2B9320C *)Method_System_Predicate_BattleServantData___ctor__);
    v43 = BattleLogicTarget___c_TypeInfo->static_fields;
    v43->__9__20_0 = (struct System_Predicate_BattleServantData__o *)_9__20_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v43->__9__20_0,
      (System_Int32_array **)_9__20_0,
      v44,
      v45,
      v46,
      v47,
      v48,
      v49);
  }
  v50 = BasicHelper__TakeIf_object_(
          ServantData,
          (System_Predicate_T__o *)_9__20_0,
          (const MethodInfo_1AD9BC8 *)Method_BasicHelper_TakeIf_BattleServantData___);
  if ( v50 )
  {
    v51 = (BattleServantData_o *)v50;
    data = (BattleData_o *)BattleServantData__isAlive((BattleServantData_o *)v50, 0, 0LL);
    if ( ((unsigned __int8)data & 1) != 0 )
    {
      v53 = this->fields.data;
      if ( v53 && task )
        goto LABEL_37;
      goto LABEL_70;
    }
    data = (BattleData_o *)BattleServantData__isAlive(v51, 0, 0LL);
    if ( ((unsigned __int8)data & 1) == 0 )
    {
      if ( !task )
        goto LABEL_70;
      ActorId = BattleLogicTask__getActorId(task, (const MethodInfo *)task);
      data = (BattleData_o *)BattleServantData__checkOverKill(v51, ActorId, 0LL);
      if ( ((unsigned __int8)data & 1) != 0 )
      {
        v53 = this->fields.data;
        if ( v53 )
        {
LABEL_37:
          BattleLogicTask__setTarget(task, v53->fields.globaltargetId, v52);
          return v51;
        }
        goto LABEL_70;
      }
    }
    if ( !BattleServantData__isAlive(v51, 0, 0LL) )
    {
      data = (BattleData_o *)BattleServantData__isGuts(v51, 0LL);
      if ( ((unsigned __int8)data & 1) != 0 )
      {
        v57 = this->fields.data;
        if ( v57 && task )
        {
          BattleLogicTask__setTarget(task, v57->fields.globaltargetId, v56);
          v51->fields.overkillTargetId = -1;
          return v51;
        }
        goto LABEL_70;
      }
    }
    v51->fields.overkillTargetId = -1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_70;
  data = (BattleData_o *)BattleData__getFieldEnemyServantIDList(data, 1, 0LL);
  v58 = this->fields.data;
  if ( !v58 )
    goto LABEL_70;
  v59 = (System_Int32_array *)data;
  data = (BattleData_o *)v58->fields.quest_ent;
  if ( !data )
    goto LABEL_70;
  if ( QuestEntity__HasFlag((QuestEntity_o *)data, 0x40000000000000LL, 0LL) )
  {
    v61 = (System_Comparison_int__o *)sub_B5D694(System_Comparison_int__TypeInfo);
    System_Comparison_int____ctor(
      v61,
      (Il2CppObject *)this,
      Method_BattleLogicTarget__getTargetBattleServantData_b__20_1__,
      (const MethodInfo_24998C8 *)Method_System_Comparison_int___ctor__);
    System_Array__Sort_int__28083228(
      v59,
      (System_Comparison_T__o *)v61,
      (const MethodInfo_1AC841C *)Method_System_Array_Sort_int____68805856);
  }
  v62 = this->fields.data;
  data = (BattleData_o *)BattleLogicTarget__getTargetBase(this, v59, 0, 1, v60);
  if ( !v62 )
    goto LABEL_70;
  v62->fields.globaltargetId = (int)data;
  BattleLogicTarget__updateEnemyTarget(this, v59, v63);
  data = this->fields.data;
  if ( !data )
    goto LABEL_70;
  data = (BattleData_o *)BattleData__isTargetLock(data, 0LL);
  if ( ((unsigned __int8)data & 1) != 0 )
  {
    if ( !task )
      goto LABEL_70;
    v65 = this->fields.data;
    data = (BattleData_o *)BattleLogicTask__getActorId(task, (const MethodInfo *)task);
    v66 = (int)data;
    if ( task->fields.skillInfo )
    {
      data = (BattleData_o *)BattleSkillInfoData__GetAddIndiv(task->fields.skillInfo, 0LL);
      v67 = (System_Int32_array *)data;
      if ( !v65 )
        goto LABEL_70;
    }
    else
    {
      v67 = 0LL;
      if ( !v65 )
        goto LABEL_70;
    }
    data = (BattleData_o *)BattleData__getTargetLock(v65, v66, 0, v67, 0LL);
    v65->fields.globaltargetId = (int)data;
    v68 = this->fields.data;
    if ( v68 )
    {
      data = (BattleData_o *)v68->fields.perf;
      if ( data )
      {
        BattlePerformance__reViewTargetMarks((BattlePerformance_o *)data, 0LL);
        goto LABEL_66;
      }
    }
LABEL_70:
    sub_B5D69C(data, task);
  }
LABEL_66:
  v69 = this->fields.data;
  if ( !v69 )
    goto LABEL_70;
  if ( !task )
    goto LABEL_70;
  BattleLogicTask__setTarget(task, v69->fields.globaltargetId, v64);
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
  int v7; // w1
  char v8; // w2
  __int64 v9; // x3
  int v10; // w1
  char v11; // w2
  __int64 v12; // x3
  int v13; // w1
  char v14; // w2
  __int64 v15; // x3
  System_Comparison_int__o *v16; // x22
  const MethodInfo *v17; // x4

  if ( (byte_42EBEC6 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Array_Sort_int____68805856, (_DWORD)targetlist, isDeadToEnableUpHate, method);
    sub_B5D5C4(&Method_BattleLogicTarget__getTargetHighHp_b__9_0__, v7, v8, v9);
    sub_B5D5C4(&Method_System_Comparison_int___ctor__, v10, v11, v12);
    sub_B5D5C4(&System_Comparison_int__TypeInfo, v13, v14, v15);
    byte_42EBEC6 = 1;
  }
  v16 = (System_Comparison_int__o *)sub_B5D694(System_Comparison_int__TypeInfo);
  System_Comparison_int____ctor(
    v16,
    (Il2CppObject *)this,
    Method_BattleLogicTarget__getTargetHighHp_b__9_0__,
    (const MethodInfo_24998C8 *)Method_System_Comparison_int___ctor__);
  System_Array__Sort_int__28083228(
    targetlist,
    (System_Comparison_T__o *)v16,
    (const MethodInfo_1AC841C *)Method_System_Array_Sort_int____68805856);
  return BattleLogicTarget__getTargetBase(this, targetlist, 0, isDeadToEnableUpHate, v17);
}


int32_t __fastcall BattleLogicTarget__getTargetLowHp(
        BattleLogicTarget_o *this,
        System_Int32_array *targetlist,
        bool isDeadToEnableUpHate,
        const MethodInfo *method)
{
  int v7; // w1
  char v8; // w2
  __int64 v9; // x3
  int v10; // w1
  char v11; // w2
  __int64 v12; // x3
  int v13; // w1
  char v14; // w2
  __int64 v15; // x3
  System_Comparison_int__o *v16; // x22
  const MethodInfo *v17; // x4

  if ( (byte_42EBEC7 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Array_Sort_int____68805856, (_DWORD)targetlist, isDeadToEnableUpHate, method);
    sub_B5D5C4(&Method_BattleLogicTarget__getTargetLowHp_b__10_0__, v7, v8, v9);
    sub_B5D5C4(&Method_System_Comparison_int___ctor__, v10, v11, v12);
    sub_B5D5C4(&System_Comparison_int__TypeInfo, v13, v14, v15);
    byte_42EBEC7 = 1;
  }
  v16 = (System_Comparison_int__o *)sub_B5D694(System_Comparison_int__TypeInfo);
  System_Comparison_int____ctor(
    v16,
    (Il2CppObject *)this,
    Method_BattleLogicTarget__getTargetLowHp_b__10_0__,
    (const MethodInfo_24998C8 *)Method_System_Comparison_int___ctor__);
  System_Array__Sort_int__28083228(
    targetlist,
    (System_Comparison_T__o *)v16,
    (const MethodInfo_1AC841C *)Method_System_Array_Sort_int____68805856);
  return BattleLogicTarget__getTargetBase(this, targetlist, 0, isDeadToEnableUpHate, v17);
}


int32_t __fastcall BattleLogicTarget__getTargetNpGaugeHeighter(
        BattleLogicTarget_o *this,
        System_Int32_array *targetlist,
        bool isDeadToEnableUpHate,
        const MethodInfo *method)
{
  int v7; // w1
  char v8; // w2
  __int64 v9; // x3
  int v10; // w1
  char v11; // w2
  __int64 v12; // x3
  int v13; // w1
  char v14; // w2
  __int64 v15; // x3
  System_Comparison_int__o *v16; // x22
  const MethodInfo *v17; // x4

  if ( (byte_42EBEC9 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Array_Sort_int____68805856, (_DWORD)targetlist, isDeadToEnableUpHate, method);
    sub_B5D5C4(&Method_BattleLogicTarget__getTargetNpGaugeHeighter_b__12_0__, v7, v8, v9);
    sub_B5D5C4(&Method_System_Comparison_int___ctor__, v10, v11, v12);
    sub_B5D5C4(&System_Comparison_int__TypeInfo, v13, v14, v15);
    byte_42EBEC9 = 1;
  }
  v16 = (System_Comparison_int__o *)sub_B5D694(System_Comparison_int__TypeInfo);
  System_Comparison_int____ctor(
    v16,
    (Il2CppObject *)this,
    Method_BattleLogicTarget__getTargetNpGaugeHeighter_b__12_0__,
    (const MethodInfo_24998C8 *)Method_System_Comparison_int___ctor__);
  System_Array__Sort_int__28083228(
    targetlist,
    (System_Comparison_T__o *)v16,
    (const MethodInfo_1AC841C *)Method_System_Array_Sort_int____68805856);
  return BattleLogicTarget__getTargetBase(this, targetlist, 0, isDeadToEnableUpHate, v17);
}


int32_t __fastcall BattleLogicTarget__getTargetNpTurnLower(
        BattleLogicTarget_o *this,
        System_Int32_array *targetlist,
        bool isDeadToEnableUpHate,
        const MethodInfo *method)
{
  int v7; // w1
  char v8; // w2
  __int64 v9; // x3
  int v10; // w1
  char v11; // w2
  __int64 v12; // x3
  int v13; // w1
  char v14; // w2
  __int64 v15; // x3
  System_Comparison_int__o *v16; // x22
  const MethodInfo *v17; // x4

  if ( (byte_42EBEC8 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Array_Sort_int____68805856, (_DWORD)targetlist, isDeadToEnableUpHate, method);
    sub_B5D5C4(&Method_BattleLogicTarget__getTargetNpTurnLower_b__11_0__, v7, v8, v9);
    sub_B5D5C4(&Method_System_Comparison_int___ctor__, v10, v11, v12);
    sub_B5D5C4(&System_Comparison_int__TypeInfo, v13, v14, v15);
    byte_42EBEC8 = 1;
  }
  v16 = (System_Comparison_int__o *)sub_B5D694(System_Comparison_int__TypeInfo);
  System_Comparison_int____ctor(
    v16,
    (Il2CppObject *)this,
    Method_BattleLogicTarget__getTargetNpTurnLower_b__11_0__,
    (const MethodInfo_24998C8 *)Method_System_Comparison_int___ctor__);
  System_Array__Sort_int__28083228(
    targetlist,
    (System_Comparison_T__o *)v16,
    (const MethodInfo_1AC841C *)Method_System_Array_Sort_int____68805856);
  return BattleLogicTarget__getTargetBase(this, targetlist, 0, isDeadToEnableUpHate, v17);
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
    sub_B5D69C(this, *(_QWORD *)&position);
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
      v16 = sub_B5D6C8(this);
      sub_B5D668(v16, 0LL);
    }
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

  if ( (byte_42EBEC5 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BattleRandom_getShuffle_int___, (_DWORD)targetlist, isResurrectable, isDeadToEnableUpHate);
    byte_42EBEC5 = 1;
  }
  Shuffle_int = BattleRandom__getShuffle_int_(
                  targetlist,
                  (const MethodInfo_1ADAEE4 *)Method_BattleRandom_getShuffle_int___);
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
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  System_Collections_Generic_List_int__o *v25; // x22
  BattleBuffData_CheckIndividualitiesData_o *v26; // x26
  System_Int32_array *data; // x0
  __int64 v28; // x1
  System_Int32_array *selfConcatSvtIndividualities_k__BackingField; // x0
  __int64 v30; // x8
  System_Int32_array *v31; // x23
  unsigned __int64 v32; // x26
  int32_t *v33; // x27
  bool v34; // w24
  struct BattleData_o *v35; // x8
  BattleServantData_o *ServantData; // x25
  const MethodInfo *v37; // x3
  const MethodInfo *v38; // x2
  __int64 v40; // x0

  if ( (byte_42EBECE & 1) == 0 )
  {
    sub_B5D5C4(&BattleBuffData_CheckIndividualitiesData_TypeInfo, (_DWORD)list, (_DWORD)atkSvt, isResurrectable);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v13, v14, v15);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, v16, v17, v18);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v19, v20, v21);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v22, v23, v24);
    byte_42EBECE = 1;
  }
  v25 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v25,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  if ( atkSvt )
  {
    v26 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B5D694(BattleBuffData_CheckIndividualitiesData_TypeInfo);
    BattleBuffData_CheckIndividualitiesData___ctor(v26, atkSvt, 0LL, 0LL, 0LL, 0LL, 0LL);
    if ( !v26 )
      goto LABEL_27;
    selfConcatSvtIndividualities_k__BackingField = v26->fields._selfConcatSvtIndividualities_k__BackingField;
  }
  else
  {
    selfConcatSvtIndividualities_k__BackingField = 0LL;
  }
  data = CommonFunction__JoinIndiv(selfConcatSvtIndividualities_k__BackingField, addIndiv, 0LL);
  if ( !list )
    goto LABEL_27;
  v30 = *(_QWORD *)&list->max_length;
  if ( (int)v30 >= 1 )
  {
    v31 = data;
    v32 = 0LL;
    v33 = &list->m_Items[1];
    v34 = isResurrectable;
    do
    {
      if ( v32 >= (unsigned int)v30 )
      {
LABEL_28:
        v40 = sub_B5D6C8(data);
        sub_B5D668(v40, 0LL);
      }
      data = (System_Int32_array *)this->fields.data;
      if ( !data )
        goto LABEL_27;
      ServantData = BattleData__getServantData((BattleData_o *)data, v33[v32], 0LL);
      data = (System_Int32_array *)BattleLogicTarget__IsTargetAlive(this, ServantData, v34, v37);
      if ( ((unsigned __int8)data & 1) != 0
        || (data = (System_Int32_array *)BattleLogicTarget__IsTargetGuts(this, ServantData, v38),
            ((unsigned __int8)data & 1) != 0) )
      {
        if ( !ServantData )
          goto LABEL_27;
      }
      else
      {
        v35 = this->fields.data;
        if ( !v35 || !ServantData )
          goto LABEL_27;
        data = (System_Int32_array *)BattleServantData__checkDeadTurn(ServantData, v35->fields.typeTurn, 0LL);
        if ( ((unsigned __int8)data & 1) == 0 || !isDeadToEnableUpHate )
          goto LABEL_24;
      }
      data = (System_Int32_array *)BattleServantData__isUpHate(ServantData, v31, 0LL);
      if ( ((unsigned __int8)data & 1) != 0 )
      {
        if ( v32 >= list->max_length )
          goto LABEL_28;
        if ( !v25 )
          goto LABEL_27;
        System_Collections_Generic_List_int___Add(
          v25,
          v33[v32],
          (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
      }
LABEL_24:
      LODWORD(v30) = list->max_length;
    }
    while ( (__int64)++v32 < (int)v30 );
  }
  if ( !v25 )
LABEL_27:
    sub_B5D69C(data, v28);
  return System_Collections_Generic_List_int___ToArray(
           v25,
           (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  System_Collections_Generic_List_int__o *v25; // x23
  BattleData_o *data; // x0
  __int64 v27; // x1
  __int64 v28; // x8
  unsigned __int64 v29; // x27
  int32_t *v30; // x28
  bool v31; // w24
  BattleServantData_o *ServantData; // x25
  const MethodInfo *v33; // x3
  const MethodInfo *v34; // x2
  System_Collections_Generic_List_int__o *v35; // x26
  System_Collections_Generic_IEnumerable_T__o *BuffIndividualities; // x0
  __int64 v38; // x0

  if ( (byte_42EBECD & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Func_int____bool__Invoke__,
      (_DWORD)list,
      (_DWORD)funcContainsIndividuality,
      isResurrectable);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__AddRange__, v10, v11, v12);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v13, v14, v15);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, v16, v17, v18);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v19, v20, v21);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v22, v23, v24);
    byte_42EBECD = 1;
  }
  v25 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v25,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  if ( !list )
    goto LABEL_22;
  v28 = *(_QWORD *)&list->max_length;
  if ( (int)v28 >= 1 )
  {
    v29 = 0LL;
    v30 = &list->m_Items[1];
    v31 = isResurrectable;
    do
    {
      if ( v29 >= (unsigned int)v28 )
      {
LABEL_23:
        v38 = sub_B5D6C8(data);
        sub_B5D668(v38, 0LL);
      }
      data = this->fields.data;
      if ( !data )
        goto LABEL_22;
      ServantData = BattleData__getServantData(data, v30[v29], 0LL);
      if ( BattleLogicTarget__IsTargetAlive(this, ServantData, v31, v33)
        || (data = (BattleData_o *)BattleLogicTarget__IsTargetGuts(this, ServantData, v34),
            ((unsigned __int8)data & 1) != 0) )
      {
        v35 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
        System_Collections_Generic_List_int____ctor(
          v35,
          (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
        if ( !ServantData )
          goto LABEL_22;
        data = (BattleData_o *)BattleServantData__getIndividualities(ServantData, 0LL, 0LL);
        if ( !v35 )
          goto LABEL_22;
        System_Collections_Generic_List_int___AddRange(
          v35,
          (System_Collections_Generic_IEnumerable_T__o *)data,
          (const MethodInfo_3084660 *)Method_System_Collections_Generic_List_int__AddRange__);
        if ( isCheckBuff )
        {
          BuffIndividualities = (System_Collections_Generic_IEnumerable_T__o *)BattleServantData__getBuffIndividualities(
                                                                                 ServantData,
                                                                                 0,
                                                                                 0,
                                                                                 0,
                                                                                 0LL);
          System_Collections_Generic_List_int___AddRange(
            v35,
            BuffIndividualities,
            (const MethodInfo_3084660 *)Method_System_Collections_Generic_List_int__AddRange__);
        }
        data = (BattleData_o *)System_Collections_Generic_List_int___ToArray(
                                 v35,
                                 (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
        if ( !funcContainsIndividuality )
          goto LABEL_22;
        data = (BattleData_o *)System_Func_BattleBuffData_BuffData__bool___Invoke(
                                 (System_Func_BattleBuffData_BuffData__bool__o *)funcContainsIndividuality,
                                 (BattleBuffData_BuffData_o *)data,
                                 (const MethodInfo_2C2ECE4 *)Method_System_Func_int____bool__Invoke__);
        if ( ((unsigned __int8)data & 1) != 0 )
        {
          if ( v29 >= list->max_length )
            goto LABEL_23;
          if ( !v25 )
            goto LABEL_22;
          System_Collections_Generic_List_int___Add(
            v25,
            v30[v29],
            (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
        }
      }
      LODWORD(v28) = list->max_length;
    }
    while ( (__int64)++v29 < (int)v28 );
  }
  if ( !v25 )
LABEL_22:
    sub_B5D69C(data, v27);
  return System_Collections_Generic_List_int___ToArray(
           v25,
           (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
}


void __fastcall BattleLogicTarget__setInit(BattleLogicTarget_o *this, BattleData_o *data, const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.data = data;
  sub_B5D560(
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
  System_Int32_array *FieldEnemyServantIDList; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  BattleData_o *data; // x0
  System_Collections_Generic_List_int__o *v13; // x21
  __int64 v14; // x8
  unsigned __int64 v15; // x23
  int32_t *v16; // x24
  BattleServantData_o *v17; // x22
  __int64 v18; // x0

  FieldEnemyServantIDList = targetIdList;
  if ( (byte_42EBED0 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, (_DWORD)targetIdList, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v6, v7, v8);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v9, v10, v11);
    byte_42EBED0 = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_23;
  if ( !data->fields.isMultiTargetBattle )
  {
    if ( !FieldEnemyServantIDList )
      FieldEnemyServantIDList = BattleData__getFieldEnemyServantIDList(data, 1, 0LL);
    v13 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v13,
      (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
    data = this->fields.data;
    if ( !data )
      goto LABEL_23;
    data = (BattleData_o *)BattleData__getFieldEnemyServantIDList(data, 1, 0LL);
    if ( !FieldEnemyServantIDList )
      goto LABEL_23;
    v14 = *(_QWORD *)&FieldEnemyServantIDList->max_length;
    data = this->fields.data;
    if ( (int)v14 >= 1 )
    {
      v15 = 0LL;
      v16 = &FieldEnemyServantIDList->m_Items[1];
      while ( 1 )
      {
        if ( v15 >= (unsigned int)v14 )
        {
LABEL_24:
          v18 = sub_B5D6C8(data);
          sub_B5D668(v18, 0LL);
        }
        if ( !data )
          break;
        data = (BattleData_o *)BattleData__getEnemyServantData(data, v16[v15], 0LL);
        if ( !data )
          break;
        v17 = (BattleServantData_o *)data;
        if ( BattleServantData__isAlive((BattleServantData_o *)data, 0, 0LL) || BattleServantData__isGuts(v17, 0LL) )
        {
          data = (BattleData_o *)BattleServantData__isUpHate(v17, 0LL, 0LL);
          if ( ((unsigned __int8)data & 1) != 0 )
          {
            if ( v15 >= FieldEnemyServantIDList->max_length )
              goto LABEL_24;
            if ( !v13 )
              break;
            System_Collections_Generic_List_int___Add(
              v13,
              v16[v15],
              (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
          }
        }
        LODWORD(v14) = FieldEnemyServantIDList->max_length;
        data = this->fields.data;
        if ( (__int64)++v15 >= (int)v14 )
          goto LABEL_21;
      }
LABEL_23:
      sub_B5D69C(data, targetIdList);
    }
LABEL_21:
    if ( !data )
      goto LABEL_23;
    BattleData__setTargetLock(data, v13, 0LL);
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
      v8 = sub_B5D6C8(data);
      sub_B5D668(v8, 0LL);
    }
    v7 = this->fields.data;
    if ( v7 )
    {
      v7->fields.globaltargetId = *((_DWORD *)&v5->fields.fsm + v6);
      return;
    }
LABEL_16:
    sub_B5D69C(data, method);
  }
}


void __fastcall BattleLogicTarget___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42E7CB4 & 1) == 0 )
  {
    sub_B5D5C4(&BattleLogicTarget___c_TypeInfo, v1, v2, v3);
    byte_42E7CB4 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(BattleLogicTarget___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = (BattleServantConfConponent_o *)BattleLogicTarget___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v4;
  sub_B5D560(static_fields, (System_Int32_array **)v4, v6, v7, v8, v9, v10, v11);
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
    sub_B5D69C(this, 0LL);
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
  if ( (byte_42E7CB5 & 1) == 0 )
  {
    this = (BattleLogicTarget___c__DisplayClass14_0_o *)sub_B5D5C4(
                                                          &Method_System_Collections_Generic_Dictionary_int__int__set_Item__,
                                                          x,
                                                          y,
                                                          method);
    byte_42E7CB5 = 1;
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
          (const MethodInfo_2F0AE30 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__),
        (this = (BattleLogicTarget___c__DisplayClass14_0_o *)v6->fields.indNum) == 0LL) )
  {
LABEL_12:
    sub_B5D69C(this, *(_QWORD *)&x);
  }
  System_Collections_Generic_Dictionary_int__int___set_Item(
    (System_Collections_Generic_Dictionary_int__int__o *)this,
    y,
    v12,
    (const MethodInfo_2F0AE30 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
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
    sub_B5D69C(this, *(_QWORD *)&x);
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