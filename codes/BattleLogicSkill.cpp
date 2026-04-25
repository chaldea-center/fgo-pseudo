void BattleLogicSkill___ctor(BattleLogicSkill_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


BattleLogicTask_array *BattleLogicSkill__CreateTaskFromFunctionBuff(
        BattleLogicSkill_o *this,
        BattleServantData_o *actionSvtData,
        BattleBuffData_BuffData_o *functionBuff,
        bool checkAlive,
        int32_t targetId,
        const MethodInfo *method)
{
  BattleLogicSkill_o *v10; // x20
  int32_t uniqueId; // w26
  BattleSkillInfoData_o *v12; // x21
  struct System_Int32_array *vals; // x8
  struct System_Int32_array *v14; // x8
  BattleLogicSkill_o *v15; // x23
  int32_t v16; // w0
  System_Int32_array *TargetIds; // x24
  bool exists; // w0
  const MethodInfo *v20; // [xsp+8h] [xbp-58h]

  v10 = this;
  if ( (byte_4E07DB2 & 1) == 0 )
  {
    sub_1CE6700(&BattleSkillInfoData_TypeInfo);
    this = (BattleLogicSkill_o *)sub_1CE6700(&int___TypeInfo);
    byte_4E07DB2 = 1;
  }
  if ( !actionSvtData )
    goto LABEL_20;
  uniqueId = actionSvtData->fields.uniqueId;
  v12 = (BattleSkillInfoData_o *)sub_1CE694C(BattleSkillInfoData_TypeInfo);
  BattleSkillInfoData___ctor(v12, 0);
  if ( !v12 )
    goto LABEL_20;
  v12->fields.svtUniqueId = uniqueId;
  if ( !functionBuff )
    goto LABEL_20;
  vals = functionBuff->fields.vals;
  if ( !vals )
    goto LABEL_20;
  if ( !LODWORD(vals->max_length) )
    goto LABEL_21;
  this = (BattleLogicSkill_o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, _QWORD, const MethodInfo *))v12->klass->vtable._4_set_skillId.methodPtr)(
                                 v12,
                                 (unsigned int)vals->m_Items[0],
                                 v12->klass->vtable._4_set_skillId.method);
  v14 = functionBuff->fields.vals;
  if ( !v14 )
    goto LABEL_20;
  if ( LODWORD(v14->max_length) <= 1 )
    goto LABEL_21;
  v12->fields.skilllv = v14->m_Items[1];
  this = (BattleLogicSkill_o *)sub_1CE67A8(int___TypeInfo, 1);
  if ( !this )
    goto LABEL_20;
  v15 = this;
  if ( !LODWORD(this->fields.logic) )
    goto LABEL_21;
  LODWORD(this->fields.logictarget) = uniqueId;
  if ( targetId < 1 )
  {
    v16 = BattleServantData__GetRevengeIdIncludeSelfDamageCheckOpponentOnly(actionSvtData, functionBuff, 0);
    if ( v16 < 0 )
    {
      TargetIds = Target__getTargetIds(v10->fields.data, uniqueId, -1, uniqueId, 13, 0, 0);
      exists = BattleSkillInfoData__ExistsNoTargetNoActionType(v12, 0);
      return BattleLogicSkill__taskSkill(
               v10,
               v12,
               (System_Int32_array *)v15,
               TargetIds,
               checkAlive,
               exists,
               0,
               0,
               0,
               v20);
    }
    targetId = v16;
  }
  this = (BattleLogicSkill_o *)sub_1CE67A8(int___TypeInfo, 1);
  if ( !this )
LABEL_20:
    sub_1CE6958(this, actionSvtData);
  TargetIds = (System_Int32_array *)this;
  if ( !LODWORD(this->fields.logic) )
LABEL_21:
    sub_1CE6960(this);
  exists = 0;
  TargetIds->m_Items[0] = targetId;
  return BattleLogicSkill__taskSkill(v10, v12, (System_Int32_array *)v15, TargetIds, checkAlive, exists, 0, 0, 0, v20);
}


void BattleLogicSkill__ExecuteShortenSkillBuff(
        BattleLogicSkill_o *this,
        BattleSkillInfoData_o *actSkillInfo,
        int32_t actorSvtUniqueId,
        const MethodInfo *method)
{
  BattleData_o *data; // x0
  BattleServantData_o *ServantData; // x0
  BattleBuffData_o *buffData; // x21
  BattleServantData_o *v10; // x19
  BattleBuffData_CheckIndividualitiesData_o *v11; // x22
  BattleBuffData_BuffData_array *BuffList_46756288; // x21
  int max_length; // w8
  int32_t index; // w20
  unsigned int v15; // w24
  int32_t v16; // w22
  Il2CppClass **v17; // x8
  BattleBuffData_BuffData_o *v18; // x23

  if ( (byte_4E07DB1 & 1) == 0 )
  {
    sub_1CE6700(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_4E07DB1 = 1;
  }
  if ( actSkillInfo && actSkillInfo->fields.type == 11 )
  {
    data = this->fields.data;
    if ( data )
    {
      ServantData = BattleData__getServantData(data, actorSvtUniqueId, 0);
      if ( !ServantData )
        return;
      buffData = ServantData->fields.buffData;
      v10 = ServantData;
      if ( !buffData )
        return;
      v11 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1CE694C(BattleBuffData_CheckIndividualitiesData_TypeInfo);
      BattleBuffData_CheckIndividualitiesData___ctor_47103252(v11, v10, 0, 0, 0, 0, 0, 1, 0);
      BuffList_46756288 = BattleBuffData__getBuffList_46756288(buffData, 143, v11, 1, 0, 0, 0, 0);
      data = (BattleData_o *)BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)BuffList_46756288, 0);
      if ( ((unsigned __int8)data & 1) != 0 )
        return;
      if ( BuffList_46756288 )
      {
        max_length = BuffList_46756288->max_length;
        index = actSkillInfo->fields.index;
        if ( max_length < 1 )
        {
          v16 = 0;
LABEL_21:
          data = (BattleData_o *)v10->fields.buffData;
          if ( data )
          {
            BattleBuffData__usedProgressing((BattleBuffData_o *)data, 1, 0, 0);
            BattleServantData__skillChageShorten(v10, v16, 0, index, 0, 0);
            return;
          }
        }
        else
        {
          v15 = 0;
          v16 = 0;
          while ( 1 )
          {
            if ( v15 >= max_length )
              sub_1CE6960(data);
            v17 = &BuffList_46756288->obj.klass + (int)v15;
            v18 = (BattleBuffData_BuffData_o *)v17[4];
            if ( !v18 )
              break;
            if ( BattleBuffData_BuffData__CheckShortenSkillBuff((BattleBuffData_BuffData_o *)v17[4], index, 0) )
            {
              v16 += v18->fields.param;
              BattleBuffData_BuffData__UsedShortenSkillCountProgress(v18, index, 0);
            }
            else
            {
              BattleBuffData_BuffData__RevertUnused(v18, 1, 0);
            }
            max_length = BuffList_46756288->max_length;
            if ( (int)++v15 >= max_length )
              goto LABEL_21;
          }
        }
      }
    }
    sub_1CE6958(data, actSkillInfo);
  }
}


int32_t BattleLogicSkill__GetHitGimmickSkillId(
        BattleLogicSkill_o *this,
        System_Int32_array *rateArray,
        const MethodInfo *method)
{
  WeightRate_int__o *v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v8; // x21
  int32_t Next; // w1

  if ( (byte_4E07DAD & 1) == 0 )
  {
    sub_1CE6700(&Method_WeightRate_int___ctor__);
    sub_1CE6700(&Method_WeightRate_int__getData__);
    sub_1CE6700(&Method_WeightRate_int__getTotalWeight__);
    sub_1CE6700(&Method_WeightRate_int__setWeight__);
    sub_1CE6700(&WeightRate_int__TypeInfo);
    byte_4E07DAD = 1;
  }
  if ( !rateArray )
    return -1;
  v4 = (WeightRate_int__o *)sub_1CE694C(WeightRate_int__TypeInfo);
  WeightRate_int____ctor(v4, (const MethodInfo_3D383F0 *)Method_WeightRate_int___ctor__);
  max_length = rateArray->max_length;
  if ( (int)max_length >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      if ( v8 >= (unsigned int)max_length )
        sub_1CE6960(v5);
      if ( !v4 )
        break;
      WeightRate_int___setWeight(
        v4,
        rateArray->m_Items[v8],
        v8,
        (const MethodInfo_3D3790C *)Method_WeightRate_int__setWeight__);
      LODWORD(max_length) = rateArray->max_length;
      if ( (__int64)++v8 >= (int)max_length )
        goto LABEL_12;
    }
LABEL_13:
    sub_1CE6958(v5, v6);
  }
  if ( !v4 )
    goto LABEL_13;
LABEL_12:
  Next = BattleRandom__getNext(v4->fields.totalweight, 0);
  return WeightRate_int___getData(v4, Next, (const MethodInfo_3D37D80 *)Method_WeightRate_int__getData__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *BattleLogicSkill__GetSkillMessage(
        BattleLogicSkill_o *this,
        int32_t actorId,
        SkillEntity_o *skillEntity,
        const MethodInfo *method)
{
  BattleData_o *data; // x0
  BattleLogicSkill_o *ServantData; // x0
  const MethodInfo *v7; // x3
  ServantLimitAddEntity_o *v8; // x20
  int32_t id; // w21
  System_String_o *Name; // x0
  System_String_o *result; // x0
  System_String_o *message; // [xsp+8h] [xbp-28h] BYREF

  message = 0;
  data = this->fields.data;
  if ( !data )
    goto LABEL_13;
  ServantData = (BattleLogicSkill_o *)BattleData__getServantData(data, actorId, 0);
  if ( !ServantData )
  {
    data = (BattleData_o *)BattleLogicSkill__TryGetSkillUseMessageFromScript(0, skillEntity, &message, v7);
    if ( ((unsigned __int8)data & 1) == 0 )
      goto LABEL_10;
    return message;
  }
  v8 = (ServantLimitAddEntity_o *)ServantData[6].fields.data;
  data = (BattleData_o *)BattleLogicSkill__TryGetSkillUseMessageFromScript(ServantData, skillEntity, &message, v7);
  if ( ((unsigned __int8)data & 1) != 0 )
    return message;
  if ( v8 )
  {
    if ( skillEntity )
    {
      id = skillEntity->fields.id;
      Name = SkillEntity__getName(skillEntity, 0);
      result = ServantLimitAddEntity__GetOverwriteSkillName(v8, id, Name, 0);
      if ( result )
        return result;
      return SkillEntity__getName(skillEntity, 0);
    }
LABEL_13:
    sub_1CE6958(data, *(_QWORD *)&actorId);
  }
LABEL_10:
  if ( !skillEntity )
    goto LABEL_13;
  return SkillEntity__getName(skillEntity, 0);
}


System_Collections_Generic_List_BattleLogicTask__o *BattleLogicSkill__GetSkillTargetedBeforeFunctionSkill(
        BattleLogicSkill_o *this,
        BattleLogicTask_o *task,
        System_Int32_array *ptTargetArray,
        System_Int32_array *enemyTargetArray,
        const MethodInfo *method)
{
  __int64 v9; // x21
  __int64 *v10; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  __int64 v18; // x25
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  System_Collections_Generic_List_object__o *v25; // x19
  long double inited; // q0
  _QWORD *v27; // x24
  __int64 v28; // x8
  __int64 v29; // x0
  System_Collections_Generic_IEnumerable_TSource__o **v30; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x24
  DataVals_array *DataValArray; // x0
  BattleLogicSkill___c_c *v33; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x22
  System_Func_T__TResult__o *_9__7_0; // x23
  Il2CppObject *v36; // x25
  struct BattleLogicSkill___c_StaticFields *static_fields; // x0
  int32_t v38; // w2
  int32_t v39; // w3
  System_String_o *v40; // x4
  int32_t v41; // w5
  int64_t v42; // x6
  System_String_o *v43; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v44; // x22
  System_Func_T1__T2__TResult__o *v45; // x23
  System_Func_T__TResult__o *v46; // x22
  System_Collections_Generic_IEnumerable_TResult__o *v47; // x0
  BattleLogicSkill___c_c *v48; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v49; // x22
  System_Func_object__bool__o *_9__7_3; // x23
  Il2CppObject *v51; // x24
  struct BattleLogicSkill___c_StaticFields *v52; // x0
  int32_t v53; // w2
  int32_t v54; // w3
  System_String_o *v55; // x4
  int32_t v56; // w5
  int64_t v57; // x6
  System_String_o *v58; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v59; // x22
  System_Func_object__object__o *v60; // x23
  __int64 v61; // x8
  void *v62; // x21
  __int64 v63; // x9
  int *v64; // x10
  __int64 v65; // x0
  __int64 v66; // x1
  __int64 v67; // x21
  __int64 v68; // x8
  __int64 v69; // x9
  int *v70; // x10
  __int64 v71; // x0
  __int64 v72; // x8
  __int64 v73; // x9
  int *v74; // x10
  __int64 v75; // x0
  BattleSkillInfoData_o *v76; // x22
  __int64 v77; // x0
  __int64 v78; // x1
  System_Collections_Generic_IEnumerable_T__o *v79; // x0
  __int64 v80; // x8
  __int64 v81; // x9
  int *v82; // x10
  __int64 v83; // x0
  BattleLogicSkill___c_c *v84; // x8
  System_Func_object__int__o *_9__7_5; // x20
  Il2CppObject *v86; // x21
  struct BattleLogicSkill___c_StaticFields *v87; // x0
  int32_t v88; // w2
  int32_t v89; // w3
  System_String_o *v90; // x4
  int32_t v91; // w5
  int64_t v92; // x6
  System_String_o *v93; // x7
  const MethodInfo *v95; // [xsp+8h] [xbp-68h]

  if ( (byte_4E07DA3 & 1) == 0 )
  {
    sub_1CE6700(&Method_System_Array_Empty_int___);
    sub_1CE6700(&Method_BasicHelper_StableSort_BattleLogicTask___);
    sub_1CE6700(&Method_System_Linq_Enumerable_Aggregate_Target_TYPE__IEnumerable_int____);
    sub_1CE6700(&Method_System_Linq_Enumerable_SelectMany_BattleServantData__BattleSkillInfoData___);
    sub_1CE6700(&Method_System_Linq_Enumerable_Select_DataVals__Target_TYPE___);
    sub_1CE6700(&Method_System_Linq_Enumerable_Select_int__BattleServantData___);
    sub_1CE6700(&Method_System_Linq_Enumerable_Union_int___);
    sub_1CE6700(&Method_System_Linq_Enumerable_Where_BattleServantData___);
    sub_1CE6700(&System_Func_BattleServantData__IEnumerable_BattleSkillInfoData___TypeInfo);
    sub_1CE6700(&System_Func_BattleLogicTask__int__TypeInfo);
    sub_1CE6700(&System_Func_int__BattleServantData__TypeInfo);
    sub_1CE6700(&System_Func_BattleServantData__bool__TypeInfo);
    sub_1CE6700(&System_Func_DataVals__Target_TYPE__TypeInfo);
    sub_1CE6700(&System_Func_IEnumerable_int___Target_TYPE__IEnumerable_int___TypeInfo);
    sub_1CE6700(&System_IDisposable_TypeInfo);
    sub_1CE6700(&System_Collections_Generic_IEnumerable_BattleSkillInfoData__TypeInfo);
    sub_1CE6700(&System_Collections_Generic_IEnumerator_BattleSkillInfoData__TypeInfo);
    sub_1CE6700(&System_Collections_IEnumerator_TypeInfo);
    sub_1CE6700(&int___TypeInfo);
    sub_1CE6700(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
    sub_1CE6700(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1CE6700(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    sub_1CE6700(&Method_BattleLogicSkill___c__GetSkillTargetedBeforeFunctionSkill_b__7_0__);
    sub_1CE6700(&Method_BattleLogicSkill___c__GetSkillTargetedBeforeFunctionSkill_b__7_3__);
    sub_1CE6700(&Method_BattleLogicSkill___c__GetSkillTargetedBeforeFunctionSkill_b__7_5__);
    sub_1CE6700(&Method_BattleLogicSkill___c__DisplayClass7_0__GetSkillTargetedBeforeFunctionSkill_b__1__);
    sub_1CE6700(&Method_BattleLogicSkill___c__DisplayClass7_0__GetSkillTargetedBeforeFunctionSkill_b__2__);
    sub_1CE6700(&Method_BattleLogicSkill___c__DisplayClass7_0__GetSkillTargetedBeforeFunctionSkill_b__4__);
    sub_1CE6700(&BattleLogicSkill___c__DisplayClass7_0_TypeInfo);
    sub_1CE6700(&BattleLogicSkill___c_TypeInfo);
    byte_4E07DA3 = 1;
  }
  v9 = sub_1CE694C(BattleLogicSkill___c__DisplayClass7_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_75;
  *(_QWORD *)(v9 + 16) = this;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v9 + 16), (int32_t)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 24) = task;
  v18 = v9 + 24;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v9 + 24), (int32_t)task, v19, v20, v21, v22, v23, v24);
  v25 = (System_Collections_Generic_List_object__o *)sub_1CE694C(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v25,
    (const MethodInfo_3905734 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v27 = Method_System_Array_Empty_int___;
  v28 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v28 )
  {
    sub_1CBC7E4(Method_System_Array_Empty_int___);
    v28 = v27[7];
  }
  v29 = *(_QWORD *)(v28 + 16);
  if ( (*(_BYTE *)(v29 + 309) & 1) == 0 )
    v29 = sub_1CBC788(inited);
  if ( !*(_DWORD *)(v29 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v29);
  v10 = *(__int64 **)(v27[7] + 16LL);
  if ( (*((_BYTE *)v10 + 309) & 1) == 0 )
    v10 = (__int64 *)sub_1CBC788(inited);
  v30 = (System_Collections_Generic_IEnumerable_TSource__o **)v10[23];
  v31 = *v30;
  if ( ptTargetArray )
  {
    v10 = (__int64 *)System_Linq_Enumerable__Union_int_(
                       *v30,
                       (System_Collections_Generic_IEnumerable_TSource__o *)ptTargetArray,
                       (const MethodInfo_3248F8C *)Method_System_Linq_Enumerable_Union_int___);
    v31 = (System_Collections_Generic_IEnumerable_TSource__o *)v10;
  }
  if ( enemyTargetArray )
  {
    v10 = (__int64 *)System_Linq_Enumerable__Union_int_(
                       v31,
                       (System_Collections_Generic_IEnumerable_TSource__o *)enemyTargetArray,
                       (const MethodInfo_3248F8C *)Method_System_Linq_Enumerable_Union_int___);
    v31 = (System_Collections_Generic_IEnumerable_TSource__o *)v10;
  }
  if ( !*(_QWORD *)v18 )
    goto LABEL_75;
  v10 = *(__int64 **)(*(_QWORD *)v18 + 72LL);
  if ( !v10 )
    goto LABEL_75;
  if ( *((_DWORD *)v10 + 4) != 2 )
  {
    DataValArray = BattleSkillInfoData__get_DataValArray((BattleSkillInfoData_o *)v10, 0);
    v33 = BattleLogicSkill___c_TypeInfo;
    v34 = (System_Collections_Generic_IEnumerable_TSource__o *)DataValArray;
    if ( !BattleLogicSkill___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleLogicSkill___c_TypeInfo);
      v33 = BattleLogicSkill___c_TypeInfo;
    }
    _9__7_0 = (System_Func_T__TResult__o *)v33->static_fields->__9__7_0;
    if ( !_9__7_0 )
    {
      if ( !v33->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v33);
        v33 = BattleLogicSkill___c_TypeInfo;
      }
      v36 = (Il2CppObject *)v33->static_fields->__9;
      _9__7_0 = (System_Func_T__TResult__o *)sub_1CE694C(System_Func_DataVals__Target_TYPE__TypeInfo);
      System_Func_object__Int32Enum____ctor(
        _9__7_0,
        v36,
        Method_BattleLogicSkill___c__GetSkillTargetedBeforeFunctionSkill_b__7_0__,
        0);
      static_fields = BattleLogicSkill___c_TypeInfo->static_fields;
      static_fields->__9__7_0 = (struct System_Func_DataVals__Target_TYPE__o *)_9__7_0;
      sub_1CE66A4(
        (GrandQuestFolderBoardItem_o *)&static_fields->__9__7_0,
        (int32_t)_9__7_0,
        v38,
        v39,
        v40,
        v41,
        v42,
        v43);
    }
    v44 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__Int32Enum_(
                                                                 v34,
                                                                 (System_Func_TSource__TResult__o *)_9__7_0,
                                                                 (const MethodInfo_323A054 *)Method_System_Linq_Enumerable_Select_DataVals__Target_TYPE___);
    v45 = (System_Func_T1__T2__TResult__o *)sub_1CE694C(System_Func_IEnumerable_int___Target_TYPE__IEnumerable_int___TypeInfo);
    System_Func_object__Int32Enum__object____ctor(
      v45,
      (Il2CppObject *)v9,
      Method_BattleLogicSkill___c__DisplayClass7_0__GetSkillTargetedBeforeFunctionSkill_b__1__,
      0);
    v31 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Aggregate_Int32Enum__object_(
                                                                 v44,
                                                                 (Il2CppObject *)v31,
                                                                 (System_Func_TAccumulate__TSource__TAccumulate__o *)v45,
                                                                 (const MethodInfo_320CB1C *)Method_System_Linq_Enumerable_Aggregate_Target_TYPE__IEnumerable_int____);
  }
  v46 = (System_Func_T__TResult__o *)sub_1CE694C(System_Func_int__BattleServantData__TypeInfo);
  System_Func_int__object____ctor(
    v46,
    (Il2CppObject *)v9,
    Method_BattleLogicSkill___c__DisplayClass7_0__GetSkillTargetedBeforeFunctionSkill_b__2__,
    0);
  v47 = System_Linq_Enumerable__Select_int__object_(
          v31,
          (System_Func_TSource__TResult__o *)v46,
          (const MethodInfo_3237910 *)Method_System_Linq_Enumerable_Select_int__BattleServantData___);
  v48 = BattleLogicSkill___c_TypeInfo;
  v49 = (System_Collections_Generic_IEnumerable_TSource__o *)v47;
  if ( !BattleLogicSkill___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicSkill___c_TypeInfo);
    v48 = BattleLogicSkill___c_TypeInfo;
  }
  _9__7_3 = (System_Func_object__bool__o *)v48->static_fields->__9__7_3;
  if ( !_9__7_3 )
  {
    if ( !v48->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v48);
      v48 = BattleLogicSkill___c_TypeInfo;
    }
    v51 = (Il2CppObject *)v48->static_fields->__9;
    _9__7_3 = (System_Func_object__bool__o *)sub_1CE694C(System_Func_BattleServantData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__7_3,
      v51,
      Method_BattleLogicSkill___c__GetSkillTargetedBeforeFunctionSkill_b__7_3__,
      0);
    v52 = BattleLogicSkill___c_TypeInfo->static_fields;
    v52->__9__7_3 = (struct System_Func_BattleServantData__bool__o *)_9__7_3;
    sub_1CE66A4((GrandQuestFolderBoardItem_o *)&v52->__9__7_3, (int32_t)_9__7_3, v53, v54, v55, v56, v57, v58);
  }
  v59 = System_Linq_Enumerable__Where_object_(
          v49,
          (System_Func_TSource__bool__o *)_9__7_3,
          (const MethodInfo_324B214 *)Method_System_Linq_Enumerable_Where_BattleServantData___);
  v60 = (System_Func_object__object__o *)sub_1CE694C(System_Func_BattleServantData__IEnumerable_BattleSkillInfoData___TypeInfo);
  System_Func_object__object____ctor(
    v60,
    (Il2CppObject *)v9,
    Method_BattleLogicSkill___c__DisplayClass7_0__GetSkillTargetedBeforeFunctionSkill_b__4__,
    0);
  v10 = (__int64 *)System_Linq_Enumerable__SelectMany_object__object_(
                     v59,
                     (System_Func_TSource__IEnumerable_TResult___o *)v60,
                     (const MethodInfo_323CECC *)Method_System_Linq_Enumerable_SelectMany_BattleServantData__BattleSkillInfoData___);
  if ( !v10 )
LABEL_75:
    sub_1CE6958(v10, v11);
  v61 = *v10;
  v62 = v10;
  v63 = *(unsigned __int16 *)(*v10 + 302);
  if ( *(_WORD *)(*v10 + 302) )
  {
    v64 = (int *)(*(_QWORD *)(v61 + 176) + 8LL);
    while ( *((System_Collections_Generic_IEnumerable_BattleSkillInfoData__c **)v64 - 1) != System_Collections_Generic_IEnumerable_BattleSkillInfoData__TypeInfo )
    {
      --v63;
      v64 += 4;
      if ( !v63 )
        goto LABEL_37;
    }
    v65 = v61 + 16LL * *v64 + 312;
  }
  else
  {
LABEL_37:
    v65 = sub_1CBCA7C(v10, System_Collections_Generic_IEnumerable_BattleSkillInfoData__TypeInfo, 0);
  }
  v67 = (*(__int64 (__fastcall **)(void *, _QWORD))v65)(v62, *(_QWORD *)(v65 + 8));
  if ( !v67 )
    sub_1CE6958(0, v66);
  while ( 1 )
  {
    v68 = *(_QWORD *)v67;
    v69 = *(unsigned __int16 *)(*(_QWORD *)v67 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v67 + 302LL) )
    {
      v70 = (int *)(*(_QWORD *)(v68 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v70 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v69;
        v70 += 4;
        if ( !v69 )
          goto LABEL_44;
      }
      v71 = v68 + 16LL * *v70 + 312;
    }
    else
    {
LABEL_44:
      v71 = sub_1CBCA7C(v67, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v71)(v67, *(_QWORD *)(v71 + 8)) & 1) == 0 )
      break;
    v72 = *(_QWORD *)v67;
    v73 = *(unsigned __int16 *)(*(_QWORD *)v67 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v67 + 302LL) )
    {
      v74 = (int *)(*(_QWORD *)(v72 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BattleSkillInfoData__c **)v74 - 1) != System_Collections_Generic_IEnumerator_BattleSkillInfoData__TypeInfo )
      {
        --v73;
        v74 += 4;
        if ( !v73 )
          goto LABEL_51;
      }
      v75 = v72 + 16LL * *v74 + 312;
    }
    else
    {
LABEL_51:
      v75 = sub_1CBCA7C(v67, System_Collections_Generic_IEnumerator_BattleSkillInfoData__TypeInfo, 0);
    }
    v76 = (BattleSkillInfoData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v75)(v67, *(_QWORD *)(v75 + 8));
    v77 = sub_1CE67A8(int___TypeInfo, 1);
    if ( !v76 )
      sub_1CE6958(v77, v78);
    if ( !v77 )
      sub_1CE6958(0, v78);
    if ( !*(_DWORD *)(v77 + 24) )
      sub_1CE6960(v77);
    *(_DWORD *)(v77 + 32) = v76->fields.svtUniqueId;
    v79 = (System_Collections_Generic_IEnumerable_T__o *)BattleLogicSkill__taskSkill(
                                                           this,
                                                           v76,
                                                           (System_Int32_array *)v77,
                                                           0,
                                                           0,
                                                           0,
                                                           0,
                                                           0,
                                                           1,
                                                           v95);
    if ( !v25 )
      sub_1CE6958(v79, v79);
    System_Collections_Generic_List_object___AddRange(
      v25,
      v79,
      (const MethodInfo_3906174 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
  }
  v80 = *(_QWORD *)v67;
  v81 = *(unsigned __int16 *)(*(_QWORD *)v67 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v67 + 302LL) )
  {
    v82 = (int *)(*(_QWORD *)(v80 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v82 - 1) != System_IDisposable_TypeInfo )
    {
      --v81;
      v82 += 4;
      if ( !v81 )
        goto LABEL_62;
    }
    v83 = v80 + 16LL * *v82 + 312;
  }
  else
  {
LABEL_62:
    v83 = sub_1CBCA7C(v67, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v83)(v67, *(_QWORD *)(v83 + 8));
  v84 = BattleLogicSkill___c_TypeInfo;
  if ( !BattleLogicSkill___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicSkill___c_TypeInfo);
    v84 = BattleLogicSkill___c_TypeInfo;
  }
  _9__7_5 = (System_Func_object__int__o *)v84->static_fields->__9__7_5;
  if ( !_9__7_5 )
  {
    if ( !v84->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v84);
      v84 = BattleLogicSkill___c_TypeInfo;
    }
    v86 = (Il2CppObject *)v84->static_fields->__9;
    _9__7_5 = (System_Func_object__int__o *)sub_1CE694C(System_Func_BattleLogicTask__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__7_5,
      v86,
      Method_BattleLogicSkill___c__GetSkillTargetedBeforeFunctionSkill_b__7_5__,
      0);
    v87 = BattleLogicSkill___c_TypeInfo->static_fields;
    v87->__9__7_5 = (struct System_Func_BattleLogicTask__int__o *)_9__7_5;
    sub_1CE66A4((GrandQuestFolderBoardItem_o *)&v87->__9__7_5, (int32_t)_9__7_5, v88, v89, v90, v91, v92, v93);
  }
  return (System_Collections_Generic_List_BattleLogicTask__o *)BasicHelper__StableSort_object_(
                                                                 (System_Collections_Generic_List_T__o *)v25,
                                                                 (System_Func_T__int__o *)_9__7_5,
                                                                 0,
                                                                 (const MethodInfo_31F3934 *)Method_BasicHelper_StableSort_BattleLogicTask___);
}


bool BattleLogicSkill__IsNotSkillCopyTargetIndividuality(
        BattleLogicSkill_o *this,
        System_Int32_array *actorIndividualities,
        System_Int32_array *notSkillCopyTargetIndividualities,
        const MethodInfo *method)
{
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v7; // x1
  unsigned __int64 v8; // x23
  __int64 v9; // x21
  System_Func_int__bool__o *v10; // x22
  bool v11; // w0

  if ( (byte_4E07DAF & 1) == 0 )
  {
    sub_1CE6700(&Method_BasicHelper_Any_int____79907888);
    sub_1CE6700(&System_Func_int__bool__TypeInfo);
    sub_1CE6700(&Method_BattleLogicSkill___c__DisplayClass20_0__IsNotSkillCopyTargetIndividuality_b__0__);
    sub_1CE6700(&BattleLogicSkill___c__DisplayClass20_0_TypeInfo);
    byte_4E07DAF = 1;
  }
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)actorIndividualities, 0) )
  {
    IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)notSkillCopyTargetIndividualities, 0);
    if ( !IsNullOrEmpty )
    {
      if ( !notSkillCopyTargetIndividualities )
        goto LABEL_16;
      if ( SLODWORD(notSkillCopyTargetIndividualities->max_length) >= 1 )
      {
        v8 = 0;
        while ( 1 )
        {
          v9 = sub_1CE694C(BattleLogicSkill___c__DisplayClass20_0_TypeInfo);
          System_Object___ctor((Il2CppObject *)v9, 0);
          if ( v8 >= LODWORD(notSkillCopyTargetIndividualities->max_length) )
            sub_1CE6960(IsNullOrEmpty);
          if ( !v9 )
            break;
          *(_DWORD *)(v9 + 16) = notSkillCopyTargetIndividualities->m_Items[v8];
          v10 = (System_Func_int__bool__o *)sub_1CE694C(System_Func_int__bool__TypeInfo);
          System_Func_int__bool____ctor(
            v10,
            (Il2CppObject *)v9,
            Method_BattleLogicSkill___c__DisplayClass20_0__IsNotSkillCopyTargetIndividuality_b__0__,
            0);
          v11 = BasicHelper__Any_int__52351580(
                  actorIndividualities,
                  (System_Func_T__bool__o *)v10,
                  (const MethodInfo_31ED25C *)Method_BasicHelper_Any_int____79907888);
          if ( !v11 && (__int64)++v8 < SLODWORD(notSkillCopyTargetIndividualities->max_length) )
            continue;
          return v11;
        }
LABEL_16:
        sub_1CE6958(IsNullOrEmpty, v7);
      }
    }
  }
  return 0;
}


bool BattleLogicSkill__IsSelfLossNpFuncSkill(
        BattleLogicSkill_o *this,
        SkillLvEntity_o *skillLvEnt,
        BattleSkillInfoData_o *skillInfo,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x21
  DataVals_array *SetTypeDataValArray; // x0
  __int64 v8; // x1
  struct System_Int32_array *funcId; // x8
  DataVals_array *v10; // x22
  unsigned __int64 v11; // x25
  DataVals_o **m_Items; // x27
  unsigned __int64 max_length_low; // x9
  bool v14; // w23
  DataVals_array *v15; // x24

  if ( (byte_4E07DB3 & 1) == 0 )
  {
    sub_1CE6700(&Method_DataManager_GetMaster_FunctionMaster___);
    sub_1CE6700(&DataManager_TypeInfo);
    sub_1CE6700(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
    byte_4E07DB3 = 1;
  }
  if ( !skillLvEnt )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_FunctionMaster___);
  SetTypeDataValArray = SkillLvEntity__GetSetTypeDataValArray(skillLvEnt, 0);
  funcId = skillLvEnt->fields.funcId;
  if ( !funcId )
LABEL_19:
    sub_1CE6958(SetTypeDataValArray, v8);
  v10 = SetTypeDataValArray;
  v11 = 0;
  m_Items = SetTypeDataValArray->m_Items;
  while ( 1 )
  {
    max_length_low = LODWORD(funcId->max_length);
    v14 = (__int64)v11 < (int)max_length_low;
    if ( (__int64)v11 >= (int)max_length_low )
      return v14;
    if ( v11 >= max_length_low )
      goto LABEL_22;
    if ( !Master_object )
      goto LABEL_19;
    SetTypeDataValArray = (DataVals_array *)DataMasterBase_object__object__int___GetEntity(
                                              (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                              funcId->m_Items[v11],
                                              (const MethodInfo_34E925C *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
    if ( SetTypeDataValArray )
    {
      v15 = SetTypeDataValArray;
      SetTypeDataValArray = (DataVals_array *)FuncList__IsRelatedNpDecrease(SetTypeDataValArray->max_length, 0);
      if ( ((unsigned __int8)SetTypeDataValArray & 1) != 0 )
      {
        if ( !v10 )
          goto LABEL_19;
        if ( v11 >= LODWORD(v10->max_length) )
LABEL_22:
          sub_1CE6960(SetTypeDataValArray);
        if ( !skillInfo )
          goto LABEL_19;
        SetTypeDataValArray = (DataVals_array *)BattleSkillInfoData__IsSelectedAddTargetIndex(
                                                  skillInfo,
                                                  m_Items[v11],
                                                  0);
        if ( ((unsigned __int8)SetTypeDataValArray & 1) != 0 && !HIDWORD(v15->max_length) )
          return v14;
      }
    }
    funcId = skillLvEnt->fields.funcId;
    ++v11;
    if ( !funcId )
      goto LABEL_19;
  }
}


bool BattleLogicSkill__IsSkillAvailable(
        BattleSkillInfoData_o *skillInfo,
        System_String_o **messageNotAvailable,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct System_String_StaticFields *static_fields; // x8
  System_String_o *Empty; // x1
  __int64 v12; // x0
  __int64 v13; // x1
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  __int64 v21; // x20
  __int64 *v22; // x8
  __int64 v23; // x1
  System_String_o *IfExists; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7

  if ( (byte_4E07DAA & 1) == 0 )
  {
    sub_1CE6700(&LocalizationManager_TypeInfo);
    sub_1CE6700(&string___TypeInfo);
    sub_1CE6700(&string_TypeInfo);
    sub_1CE6700(&StringLiteral_2896/*"BATTLE_SKILL_ERROR_NOT_SATISFY_OPEN_COND"*/);
    sub_1CE6700(&StringLiteral_2895/*"BATTLE_SKILL_ERROR_NOT_CHARGING"*/);
    byte_4E07DAA = 1;
  }
  static_fields = string_TypeInfo->static_fields;
  Empty = static_fields->Empty;
  *messageNotAvailable = static_fields->Empty;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)messageNotAvailable, (int32_t)Empty, (int32_t)method, v3, v4, v5, v6, v7);
  if ( !skillInfo )
    goto LABEL_16;
  if ( BattleSkillInfoData__isChargeOK(skillInfo, 0) )
  {
    if ( BattleSkillInfoData__IsOpenCond(skillInfo, 0) )
      return 1;
    v12 = sub_1CE67A8(string___TypeInfo, 1);
    if ( v12 )
    {
      v21 = v12;
      if ( *(_DWORD *)(v12 + 24) )
      {
        v22 = &StringLiteral_2896/*"BATTLE_SKILL_ERROR_NOT_SATISFY_OPEN_COND"*/;
        goto LABEL_13;
      }
LABEL_17:
      sub_1CE6960(v12);
    }
LABEL_16:
    sub_1CE6958(v12, v13);
  }
  v12 = sub_1CE67A8(string___TypeInfo, 1);
  if ( !v12 )
    goto LABEL_16;
  v21 = v12;
  if ( !*(_DWORD *)(v12 + 24) )
    goto LABEL_17;
  v22 = &StringLiteral_2895/*"BATTLE_SKILL_ERROR_NOT_CHARGING"*/;
LABEL_13:
  v23 = *v22;
  *(_QWORD *)(v21 + 32) = *v22;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v21 + 32), v23, v15, v16, v17, v18, v19, v20);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  IfExists = LocalizationManager__GetIfExists((System_String_array *)v21, 0);
  *messageNotAvailable = IfExists;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)messageNotAvailable, (int32_t)IfExists, v25, v26, v27, v28, v29, v30);
  return 0;
}


bool BattleLogicSkill__IsSkillExecutable(
        BattleLogicSkill_o *this,
        BattleSkillInfoData_o *skillInfo,
        System_String_o **messageNotExecutable,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // x3

  if ( (byte_4E07DA8 & 1) == 0 )
  {
    sub_1CE6700(&StringLiteral_1/*""*/);
    byte_4E07DA8 = 1;
  }
  *messageNotExecutable = (System_String_o *)StringLiteral_1/*""*/;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)messageNotExecutable,
    StringLiteral_1/*""*/,
    (int32_t)messageNotExecutable,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  return BattleLogicSkill__IsSkillAvailable(skillInfo, messageNotExecutable, v11)
      && BattleLogicSkill__checkConditions(this, skillInfo, messageNotExecutable, v12);
}


BattleLogicTask_o *BattleLogicSkill__MakeAddInvokeSkillTask(
        BattleLogicSkill_o *this,
        SkillLvMaster_o *skillLvMst,
        SkillLvEntity_o *skillLvEnt,
        BattleLogicTask_o *baseTask,
        const MethodInfo *method)
{
  BattleLogicSkill_o *v8; // x21
  struct System_Int32_array *actorIdlist; // x8
  BattleLogicSkill_o *v10; // x20
  int32_t v11; // w22
  int32_t actortype; // w24
  const MethodInfo *v13; // x1
  BattleData_o *data; // x21
  bool isPlayerID; // w21
  int32_t data_high; // w20
  int32_t v17; // w23
  TempBattleSkillInfoData_o *v18; // x25
  const MethodInfo *v19; // x4
  const MethodInfo *v20; // x2

  v8 = this;
  if ( (byte_4E07DA5 & 1) == 0 )
  {
    this = (BattleLogicSkill_o *)sub_1CE6700(&TempBattleSkillInfoData_TypeInfo);
    byte_4E07DA5 = 1;
  }
  if ( !skillLvMst )
    goto LABEL_18;
  this = (BattleLogicSkill_o *)SkillLvMaster__GetAddInvokeSkillLvEntity(skillLvMst, skillLvEnt, 0);
  if ( this )
  {
    if ( !baseTask )
      goto LABEL_18;
    actorIdlist = baseTask->fields.actorIdlist;
    v10 = this;
    if ( actorIdlist )
    {
      if ( !LODWORD(actorIdlist->max_length) )
        sub_1CE6960(this);
      v11 = actorIdlist->m_Items[0];
      if ( !skillLvEnt )
        goto LABEL_18;
    }
    else
    {
      v11 = -1;
      if ( !skillLvEnt )
        goto LABEL_18;
    }
    actortype = baseTask->fields.actortype;
    if ( SkillLvEntity__GetAddInvokeSkillActorType(skillLvEnt, 0) == 1 )
    {
      data = v8->fields.data;
      this = (BattleLogicSkill_o *)BattleLogicTask__getTarget(baseTask, v13);
      if ( !data )
        goto LABEL_18;
      isPlayerID = BattleData__isPlayerID(data, (int32_t)this, 0);
      v11 = -1;
      actortype = 5;
    }
    else
    {
      isPlayerID = 0;
    }
    v17 = (int32_t)v10->fields.data;
    data_high = HIDWORD(v10->fields.data);
    v18 = (TempBattleSkillInfoData_o *)sub_1CE694C(TempBattleSkillInfoData_TypeInfo);
    TempBattleSkillInfoData___ctor(v18, v17, data_high, v11, 0);
    this = (BattleLogicSkill_o *)BattleLogicTask__CloneSkillTask(
                                   baseTask,
                                   (BattleSkillInfoData_o *)v18,
                                   actortype,
                                   isPlayerID,
                                   v19);
    if ( this )
      return BattleLogicTask__SetInheritParamToAddInvokeSkillTask((BattleLogicTask_o *)this, baseTask, v20);
LABEL_18:
    sub_1CE6958(this, skillLvMst);
  }
  return (BattleLogicTask_o *)this;
}


void BattleLogicSkill__SetCommandSpellAddFunctionData(
        BattleLogicSkill_o *this,
        int32_t commandSpellId,
        System_Int32_array *targetIds,
        System_Collections_Generic_List_int__o *funcIdList,
        System_Collections_Generic_List_DataVals__o *dataValsList,
        const MethodInfo *method)
{
  BalanceConfig_c *v11; // x0
  int32_t ClassBoardReleaseQuestId; // w24
  BattleData_o *IsQuestClear_41467300; // x0
  __int64 v14; // x1
  BattleServantData_o *ServantData; // x0
  BattleServantData_o *v16; // x22
  struct AddSkillData_array *classBoardAddCommandSpells; // x23
  int max_length; // w8
  ClassBoardCommandSpellMaster_o *v19; // x22
  unsigned int v20; // w24
  AddSkillData_o *v21; // x8
  ClassBoardCommandSpellEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4E07DB0 & 1) == 0 )
  {
    sub_1CE6700(&BalanceConfig_TypeInfo);
    sub_1CE6700(&CondType_TypeInfo);
    sub_1CE6700(&Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___);
    sub_1CE6700(&DataManager_TypeInfo);
    sub_1CE6700(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1CE6700(&Method_System_Collections_Generic_List_DataVals__AddRange__);
    byte_4E07DB0 = 1;
  }
  v11 = BalanceConfig_TypeInfo;
  entity = 0;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v11 = BalanceConfig_TypeInfo;
  }
  ClassBoardReleaseQuestId = v11->static_fields->ClassBoardReleaseQuestId;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  IsQuestClear_41467300 = (BattleData_o *)CondType__IsQuestClear_41467300(ClassBoardReleaseQuestId, -1, 0, 0);
  if ( ((unsigned __int8)IsQuestClear_41467300 & 1) != 0 )
  {
    if ( !targetIds )
      goto LABEL_29;
    if ( !LODWORD(targetIds->max_length) )
      goto LABEL_30;
    IsQuestClear_41467300 = this->fields.data;
    if ( !IsQuestClear_41467300 )
      goto LABEL_29;
    ServantData = BattleData__getServantData(IsQuestClear_41467300, targetIds->m_Items[0], 0);
    if ( !ServantData )
      return;
    v16 = ServantData;
    if ( BasicHelper__IsNullOrEmpty(
           (System_Collections_ICollection_o *)ServantData->fields.classBoardAddCommandSpells,
           0) )
    {
      return;
    }
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    IsQuestClear_41467300 = (BattleData_o *)DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___);
    classBoardAddCommandSpells = v16->fields.classBoardAddCommandSpells;
    if ( !classBoardAddCommandSpells )
LABEL_29:
      sub_1CE6958(IsQuestClear_41467300, v14);
    max_length = classBoardAddCommandSpells->max_length;
    if ( max_length >= 1 )
    {
      v19 = (ClassBoardCommandSpellMaster_o *)IsQuestClear_41467300;
      v20 = 0;
      while ( v20 < max_length )
      {
        v21 = classBoardAddCommandSpells->m_Items[v20];
        if ( !v21 || !v19 )
          goto LABEL_29;
        IsQuestClear_41467300 = (BattleData_o *)ClassBoardCommandSpellMaster__TryGetEntity(
                                                  v19,
                                                  &entity,
                                                  v21->fields.id,
                                                  commandSpellId,
                                                  v21->fields.lv,
                                                  0);
        if ( ((unsigned __int8)IsQuestClear_41467300 & 1) != 0 )
        {
          if ( !entity )
            goto LABEL_29;
          if ( !funcIdList )
            goto LABEL_29;
          System_Collections_Generic_List_int___AddRange(
            funcIdList,
            (System_Collections_Generic_IEnumerable_T__o *)entity->fields.funcIds,
            (const MethodInfo_38E9150 *)Method_System_Collections_Generic_List_int__AddRange__);
          IsQuestClear_41467300 = (BattleData_o *)entity;
          if ( !entity )
            goto LABEL_29;
          IsQuestClear_41467300 = (BattleData_o *)ClassBoardCommandSpellEntity__getDataValsList(entity, 0);
          if ( !dataValsList )
            goto LABEL_29;
          System_Collections_Generic_List_object___AddRange(
            (System_Collections_Generic_List_object__o *)dataValsList,
            (System_Collections_Generic_IEnumerable_T__o *)IsQuestClear_41467300,
            (const MethodInfo_3906174 *)Method_System_Collections_Generic_List_DataVals__AddRange__);
        }
        max_length = classBoardAddCommandSpells->max_length;
        if ( (int)++v20 >= max_length )
          return;
      }
LABEL_30:
      sub_1CE6960(IsQuestClear_41467300);
    }
  }
}


bool BattleLogicSkill__SetSkillCopyFunction(
        BattleLogicSkill_o *this,
        SkillLvEntity_o *skillLvEnt,
        DataVals_o *copyFuncVals,
        System_Int32_array **functionIdArray,
        DataVals_array **dataValsArray,
        int32_t actorId,
        const MethodInfo *method)
{
  SkillLvEntity_o *v11; // x22
  BattleLogicSkill_o *v12; // x25
  BattleData_o *data; // x8
  BattleLogicSkill_o *v14; // x25
  BattleServantData_o *v15; // x23
  struct System_Int32_array *funcId; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v17; // x23
  unsigned __int64 v18; // x20
  __int64 v19; // x24
  struct System_Int32_array *v20; // x8
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  System_Func_int__bool__o *v27; // x27
  __int64 v28; // x27
  System_Func_int__bool__o *v29; // x27
  BattleLogicSkill_o *NotSkillCopyTargetIndividualities; // x0
  const MethodInfo *v31; // x3
  System_Func_int__bool__o *v32; // x27
  struct System_Int32_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  int32_t v36; // w2
  int32_t v37; // w3
  System_String_o *v38; // x4
  int32_t v39; // w5
  int64_t v40; // x6
  System_String_o *v41; // x7
  struct System_Object_array *v42; // x8
  _QWORD *v43; // x9
  __int64 v44; // x10
  Il2CppClass **v45; // x0
  System_Int32_array *v46; // x0
  int32_t v47; // w2
  int32_t v48; // w3
  System_String_o *v49; // x4
  int32_t v50; // w5
  int64_t v51; // x6
  System_String_o *v52; // x7
  System_Object_array *v53; // x0
  int32_t v54; // w2
  int32_t v55; // w3
  System_String_o *v56; // x4
  int32_t v57; // w5
  int64_t v58; // x6
  System_String_o *v59; // x7
  System_Collections_ICollection_o *CopyTargetFunctionTypeArray; // [xsp+0h] [xbp-B0h]
  System_Int32_array *actorIndividualities; // [xsp+10h] [xbp-A0h]
  GrandQuestFolderBoardItem_o *v63; // [xsp+20h] [xbp-90h]
  System_Collections_Generic_List_object__o *v64; // [xsp+28h] [xbp-88h]
  System_Collections_Generic_List_int__o *v65; // [xsp+30h] [xbp-80h]
  System_Collections_ICollection_o *self; // [xsp+38h] [xbp-78h]
  DataVals_array *SetTypeDataValArray; // [xsp+48h] [xbp-68h]

  v11 = skillLvEnt;
  v12 = this;
  if ( (byte_4E07DAE & 1) == 0 )
  {
    sub_1CE6700(&Method_BasicHelper_Any_int____79907888);
    sub_1CE6700(&Method_DataManager_GetMasterData_FunctionMaster___);
    sub_1CE6700(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
    sub_1CE6700(&System_Func_int__bool__TypeInfo);
    sub_1CE6700(&Method_System_Collections_Generic_List_int__Add__);
    sub_1CE6700(&Method_System_Collections_Generic_List_DataVals__Add__);
    sub_1CE6700(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1CE6700(&Method_System_Collections_Generic_List_DataVals__ToArray__);
    sub_1CE6700(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1CE6700(&Method_System_Collections_Generic_List_DataVals___ctor__);
    sub_1CE6700(&System_Collections_Generic_List_int__TypeInfo);
    sub_1CE6700(&System_Collections_Generic_List_DataVals__TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1CE6700(&Method_BattleLogicSkill___c__DisplayClass19_0__SetSkillCopyFunction_b__0__);
    sub_1CE6700(&Method_BattleLogicSkill___c__DisplayClass19_0__SetSkillCopyFunction_b__1__);
    sub_1CE6700(&Method_BattleLogicSkill___c__DisplayClass19_0__SetSkillCopyFunction_b__2__);
    this = (BattleLogicSkill_o *)sub_1CE6700(&BattleLogicSkill___c__DisplayClass19_0_TypeInfo);
    byte_4E07DAE = 1;
  }
  if ( !copyFuncVals )
    goto LABEL_52;
  CopyTargetFunctionTypeArray = (System_Collections_ICollection_o *)DataVals__GetCopyTargetFunctionTypeArray(
                                                                      copyFuncVals,
                                                                      0);
  self = (System_Collections_ICollection_o *)DataVals__GetCopyTargetBuffTypeArray(copyFuncVals, 0);
  this = (BattleLogicSkill_o *)DataVals__GetNotSkillCopyTargetFuncIdArray(copyFuncVals, 0);
  data = v12->fields.data;
  if ( !data )
    goto LABEL_52;
  v14 = this;
  this = (BattleLogicSkill_o *)BattleData__getServantData(data, actorId, 0);
  if ( !v11 )
    goto LABEL_52;
  v15 = (BattleServantData_o *)this;
  SetTypeDataValArray = SkillLvEntity__GetSetTypeDataValArray(v11, 0);
  actorIndividualities = v15 ? BattleServantData__getConcatServantAndBuffIndividualityies(v15, 0, 0, 0, 0, 0, 0) : 0LL;
  v63 = (GrandQuestFolderBoardItem_o *)functionIdArray;
  v65 = (System_Collections_Generic_List_int__o *)sub_1CE694C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v65,
    (const MethodInfo_38E86F0 *)Method_System_Collections_Generic_List_int___ctor__);
  v64 = (System_Collections_Generic_List_object__o *)sub_1CE694C(System_Collections_Generic_List_DataVals__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v64,
    (const MethodInfo_3905734 *)Method_System_Collections_Generic_List_DataVals___ctor__);
  this = (BattleLogicSkill_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_52;
  this = (BattleLogicSkill_o *)DataManager__GetMasterData_object_(
                                 (DataManager_o *)this,
                                 (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_FunctionMaster___);
  funcId = v11->fields.funcId;
  if ( !funcId )
    goto LABEL_52;
  v17 = (DataMasterBase_TMaster__TEntity__PKType__o *)this;
  v18 = 0;
  while ( (__int64)v18 < SLODWORD(funcId->max_length) )
  {
    v19 = sub_1CE694C(BattleLogicSkill___c__DisplayClass19_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v19, 0);
    v20 = v11->fields.funcId;
    if ( !v20 )
      goto LABEL_52;
    if ( v18 >= LODWORD(v20->max_length) )
      goto LABEL_57;
    if ( !v19 )
      goto LABEL_52;
    *(_DWORD *)(v19 + 16) = v20->m_Items[v18];
    if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v14, 0)
      || (v27 = (System_Func_int__bool__o *)sub_1CE694C(System_Func_int__bool__TypeInfo),
          System_Func_int__bool____ctor(
            v27,
            (Il2CppObject *)v19,
            Method_BattleLogicSkill___c__DisplayClass19_0__SetSkillCopyFunction_b__0__,
            0),
          this = (BattleLogicSkill_o *)BasicHelper__Any_int__52351580(
                                         (System_Int32_array *)v14,
                                         (System_Func_T__bool__o *)v27,
                                         (const MethodInfo_31ED25C *)Method_BasicHelper_Any_int____79907888),
          ((unsigned __int8)this & 1) == 0) )
    {
      *(_QWORD *)(v19 + 24) = 0;
      v28 = v19 + 24;
      sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v19 + 24), 0, v21, v22, v23, v24, v25, v26);
      if ( !v17 )
        goto LABEL_52;
      this = (BattleLogicSkill_o *)DataMasterBase_object__object__int___TryGetEntity(
                                     v17,
                                     (Il2CppObject **)(v19 + 24),
                                     *(_DWORD *)(v19 + 16),
                                     (const MethodInfo_34E92A8 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !*(_QWORD *)v28 )
          goto LABEL_52;
        this = (BattleLogicSkill_o *)FuncList__Check(135, *(_DWORD *)(*(_QWORD *)v28 + 24LL), 0);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          if ( !*(_QWORD *)v28 )
            goto LABEL_52;
          this = (BattleLogicSkill_o *)FuncList__Check(109, *(_DWORD *)(*(_QWORD *)v28 + 24LL), 0);
          if ( ((unsigned __int8)this & 1) == 0 )
          {
            if ( !*(_QWORD *)v28 )
              goto LABEL_52;
            this = (BattleLogicSkill_o *)FuncList__Check(54, *(_DWORD *)(*(_QWORD *)v28 + 24LL), 0);
            if ( ((unsigned __int8)this & 1) == 0 )
            {
              this = (BattleLogicSkill_o *)DataVals__IsCopyFunctionTargetPTOnly(copyFuncVals, 0);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_29;
              if ( !*(_QWORD *)v28 )
                goto LABEL_52;
              this = (BattleLogicSkill_o *)Target__isFieldPlayer(*(_DWORD *)(*(_QWORD *)v28 + 28LL), 0);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
LABEL_29:
                this = (BattleLogicSkill_o *)BasicHelper__IsNullOrEmpty(self, 0);
                if ( ((unsigned __int8)this & 1) != 0 )
                  goto LABEL_33;
                if ( !*(_QWORD *)v28 )
                  goto LABEL_52;
                this = (BattleLogicSkill_o *)FuncList__isAddState(*(_DWORD *)(*(_QWORD *)v28 + 24LL), 0);
                if ( ((unsigned __int8)this & 1) == 0
                  || (v29 = (System_Func_int__bool__o *)sub_1CE694C(System_Func_int__bool__TypeInfo),
                      System_Func_int__bool____ctor(
                        v29,
                        (Il2CppObject *)v19,
                        Method_BattleLogicSkill___c__DisplayClass19_0__SetSkillCopyFunction_b__1__,
                        0),
                      this = (BattleLogicSkill_o *)BasicHelper__Any_int__52351580(
                                                     (System_Int32_array *)self,
                                                     (System_Func_T__bool__o *)v29,
                                                     (const MethodInfo_31ED25C *)Method_BasicHelper_Any_int____79907888),
                      ((unsigned __int8)this & 1) != 0) )
                {
LABEL_33:
                  if ( !SetTypeDataValArray )
                    goto LABEL_52;
                  if ( v18 >= LODWORD(SetTypeDataValArray->max_length) )
LABEL_57:
                    sub_1CE6960(this);
                  this = (BattleLogicSkill_o *)SetTypeDataValArray->m_Items[v18];
                  if ( !this )
                    goto LABEL_52;
                  NotSkillCopyTargetIndividualities = (BattleLogicSkill_o *)DataVals__GetNotSkillCopyTargetIndividualities(
                                                                              (DataVals_o *)this,
                                                                              0);
                  this = (BattleLogicSkill_o *)BattleLogicSkill__IsNotSkillCopyTargetIndividuality(
                                                 NotSkillCopyTargetIndividualities,
                                                 actorIndividualities,
                                                 (System_Int32_array *)NotSkillCopyTargetIndividualities,
                                                 v31);
                  if ( ((unsigned __int8)this & 1) == 0 )
                  {
                    if ( BasicHelper__IsNullOrEmpty(CopyTargetFunctionTypeArray, 0)
                      || (v32 = (System_Func_int__bool__o *)sub_1CE694C(System_Func_int__bool__TypeInfo),
                          System_Func_int__bool____ctor(
                            v32,
                            (Il2CppObject *)v19,
                            Method_BattleLogicSkill___c__DisplayClass19_0__SetSkillCopyFunction_b__2__,
                            0),
                          this = (BattleLogicSkill_o *)BasicHelper__Any_int__52351580(
                                                         (System_Int32_array *)CopyTargetFunctionTypeArray,
                                                         (System_Func_T__bool__o *)v32,
                                                         (const MethodInfo_31ED25C *)Method_BasicHelper_Any_int____79907888),
                          ((unsigned __int8)this & 1) != 0) )
                    {
                      this = (BattleLogicSkill_o *)v65;
                      if ( !v65 )
                        goto LABEL_52;
                      skillLvEnt = (SkillLvEntity_o *)*(unsigned int *)(v19 + 16);
                      items = v65->fields._items;
                      v34 = Method_System_Collections_Generic_List_int__Add__;
                      ++v65->fields._version;
                      if ( !items )
                        goto LABEL_52;
                      size = v65->fields._size;
                      if ( (unsigned int)size >= LODWORD(items->max_length) )
                      {
                        System_Collections_Generic_List_int___AddWithResize(
                          v65,
                          (int32_t)skillLvEnt,
                          *(const MethodInfo_38E8F44 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
                      }
                      else
                      {
                        v65->fields._size = size + 1;
                        items->m_Items[size] = (int)skillLvEnt;
                      }
                      this = (BattleLogicSkill_o *)SkillLvEntity__getDataValsList(v11, 0);
                      if ( !this )
                        goto LABEL_52;
                      if ( v18 >= LODWORD(this->fields.logic) )
                        goto LABEL_57;
                      if ( !v64 )
                        goto LABEL_52;
                      skillLvEnt = (SkillLvEntity_o *)*((_QWORD *)&this->fields.logictarget + v18);
                      v42 = v64->fields._items;
                      v43 = Method_System_Collections_Generic_List_DataVals__Add__;
                      ++v64->fields._version;
                      if ( !v42 )
                        goto LABEL_52;
                      v44 = v64->fields._size;
                      if ( (unsigned int)v44 >= LODWORD(v42->max_length) )
                      {
                        System_Collections_Generic_List_object___AddWithResize(
                          v64,
                          (Il2CppObject *)skillLvEnt,
                          *(const MethodInfo_3905F68 **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
                      }
                      else
                      {
                        v45 = &v42->obj.klass + v44;
                        v64->fields._size = v44 + 1;
                        v45[4] = (Il2CppClass *)skillLvEnt;
                        sub_1CE66A4(
                          (GrandQuestFolderBoardItem_o *)(v45 + 4),
                          (int32_t)skillLvEnt,
                          v36,
                          v37,
                          v38,
                          v39,
                          v40,
                          v41);
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    funcId = v11->fields.funcId;
    ++v18;
    if ( !funcId )
      goto LABEL_52;
  }
  this = (BattleLogicSkill_o *)v65;
  if ( !v65
    || (v46 = System_Collections_Generic_List_int___ToArray(
                v65,
                (const MethodInfo_38EA9FC *)Method_System_Collections_Generic_List_int__ToArray__),
        v63->klass = (GrandQuestFolderBoardItem_c *)v46,
        sub_1CE66A4(v63, (int32_t)v46, v47, v48, v49, v50, v51, v52),
        (this = (BattleLogicSkill_o *)v64) == 0)
    || (v53 = System_Collections_Generic_List_object___ToArray(
                v64,
                (const MethodInfo_3907AC0 *)Method_System_Collections_Generic_List_DataVals__ToArray__),
        *dataValsArray = (DataVals_array *)v53,
        sub_1CE66A4((GrandQuestFolderBoardItem_o *)dataValsArray, (int32_t)v53, v54, v55, v56, v57, v58, v59),
        !v63->klass) )
  {
LABEL_52:
    sub_1CE6958(this, skillLvEnt);
  }
  return LODWORD(v63->klass->_1.namespaze) != 0;
}


bool BattleLogicSkill__TryGetSkillUseMessageFromScript(
        BattleLogicSkill_o *this,
        SkillEntity_o *skillEntity,
        System_String_o **message,
        const MethodInfo *method)
{
  System_String_o *BattleSkillUseMessage; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7

  if ( !skillEntity )
    sub_1CE6958(this, 0);
  BattleSkillUseMessage = SkillEntity__GetBattleSkillUseMessage(skillEntity, 0);
  *message = BattleSkillUseMessage;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)message, (int32_t)BattleSkillUseMessage, v6, v7, v8, v9, v10, v11);
  return !System_String__IsNullOrEmpty(*message, 0);
}


// local variable allocation has failed, the output may be wrong!
void BattleLogicSkill__actPassiveSkill(
        BattleLogicSkill_o *this,
        BattleSkillInfoData_o *skillInfo,
        bool isShift,
        bool isDeckDataLoad,
        BattleLogicSkill_SkillExecArgs_o *skillExecArgs,
        const MethodInfo *method)
{
  BattleLogicSkill_o *v10; // x19
  int32_t svtUniqueId; // w26
  int32_t v12; // w0
  int32_t skilllv; // w27
  int32_t v14; // w29
  BattleActionData_o *v15; // x24
  BattleServantData_o *ServantData; // x25
  bool v17; // w22
  Il2CppObject *Entity; // x0
  SkillEntity_o *v19; // x28
  SkillLvEntity_o *v20; // x27
  System_Int32_array *Individualities; // x29
  System_Int32_array *ActIndividuality; // x21
  ServantEntity_o *svtdata; // x21
  int32_t Rarity; // w0
  __int64 v25; // x21
  __int64 v26; // x26
  int32_t v27; // w0
  bool v28; // w28
  int32_t Timing_k__BackingField; // w21
  BattleLogicFunction_FunctionArgument_o *argument; // x26
  int32_t type; // w8
  BattleLogicFunction_o *logicfunction; // x22
  System_Int32_array *funcId; // x23
  struct BattleBuffData_o *buffData; // x8
  struct System_Collections_Generic_List_int__o *unfixedBuffList; // x8
  int v36; // w9
  BattleData_o *data; // x20
  struct FunctionMaster_o *master; // x21
  Il2CppObject *klass; // x22
  struct BattleLogicSkill___c_StaticFields *static_fields; // x0
  int32_t v41; // w2
  int32_t v42; // w3
  System_String_o *v43; // x4
  int32_t v44; // w5
  int64_t v45; // x6
  System_String_o *v46; // x7
  bool v47; // [xsp+3Ch] [xbp-64h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v48; // 0:x0.16

  v10 = this;
  if ( (byte_4E07DA6 & 1) == 0 )
  {
    sub_1CE6700(&System_Action_BattleServantData__TypeInfo);
    sub_1CE6700(&BattleActionData_TypeInfo);
    sub_1CE6700(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1CE6700(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_1CE6700(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_1CE6700(&BattleLogicFunction_FunctionArgument_TypeInfo);
    sub_1CE6700(&Individuality_TypeInfo);
    sub_1CE6700(&Method_System_Collections_Generic_List_int__Clear__);
    sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1CE6700(&Method_BattleLogicSkill___c__actPassiveSkill_b__11_0__);
    this = (BattleLogicSkill_o *)sub_1CE6700(&BattleLogicSkill___c_TypeInfo);
    byte_4E07DA6 = 1;
  }
  if ( !skillInfo )
    goto LABEL_45;
  svtUniqueId = skillInfo->fields.svtUniqueId;
  v12 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, const MethodInfo *, bool, bool, BattleLogicSkill_SkillExecArgs_o *, const MethodInfo *))skillInfo->klass->vtable._5_get_skillId.methodPtr)(
          skillInfo,
          skillInfo->klass->vtable._5_get_skillId.method,
          isShift,
          isDeckDataLoad,
          skillExecArgs,
          method);
  skilllv = skillInfo->fields.skilllv;
  v14 = v12;
  v15 = (BattleActionData_o *)sub_1CE694C(BattleActionData_TypeInfo);
  BattleActionData___ctor(v15, 0);
  this = (BattleLogicSkill_o *)v10->fields.data;
  if ( !this )
    goto LABEL_45;
  v47 = isDeckDataLoad;
  ServantData = BattleData__getServantData((BattleData_o *)this, svtUniqueId, 0);
  this = (BattleLogicSkill_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_45;
  v17 = isShift;
  this = (BattleLogicSkill_o *)DataManager__GetMasterData_object_(
                                 (DataManager_o *)this,
                                 (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_SkillMaster___);
  if ( !this )
    goto LABEL_45;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             v14,
             (const MethodInfo_34E925C *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( !Entity )
    return;
  v19 = (SkillEntity_o *)Entity;
  if ( SkillEntity__isActive((SkillEntity_o *)Entity, 0) )
    return;
  this = (BattleLogicSkill_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_45;
  this = (BattleLogicSkill_o *)DataManager__GetMasterData_object_(
                                 (DataManager_o *)this,
                                 (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  if ( !this )
    goto LABEL_45;
  this = (BattleLogicSkill_o *)SkillLvMaster__GetEntity((SkillLvMaster_o *)this, v14, skilllv, 0);
  v20 = (SkillLvEntity_o *)this;
  if ( skillInfo->fields.type != 12 )
    goto LABEL_48;
  if ( !ServantData )
    goto LABEL_45;
  Individualities = BattleServantData__getIndividualities(ServantData, 0, 1, 0, 1, 0);
  ActIndividuality = SkillEntity__getActIndividuality(v19, 0);
  if ( !Individuality_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Individuality_TypeInfo);
  if ( Individuality__CheckIndividualities(Individualities, ActIndividuality, 0) )
  {
    svtdata = ServantData->fields.svtdata;
    Rarity = BattleServantData__getRarity(ServantData, 0);
    this = (BattleLogicSkill_o *)RarityRestrictedSkillUtil__IsDisabled(v20, svtdata, Rarity, 0);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
LABEL_48:
      if ( v15 )
      {
        v15->fields.actorId = svtUniqueId;
        if ( ServantData )
        {
          v26 = *(_QWORD *)&ServantData->fields.svtId.fields.currentCryptoKey;
          v25 = *(_QWORD *)&ServantData->fields.svtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v48.fields.currentCryptoKey = v26;
          *(_QWORD *)&v48.fields.fakeValue = v25;
          v27 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v48, 0);
          v15->fields.motionId = SkillEntity__GetMotionId(v19, v27, 0);
          v28 = v17;
          v15->fields.userCommandCodeId = skillInfo->fields.userCommandCodeId;
          v15->fields.commandAssistId = skillInfo->fields.commandAssistId;
          v15->fields.cardIndex = skillInfo->fields.index;
          if ( skillExecArgs )
          {
            if ( !skillExecArgs->fields._AllowUpdateFieldServantResultStatus_k__BackingField )
              goto LABEL_26;
          }
          this = (BattleLogicSkill_o *)v10->fields.logic;
          if ( !this )
            goto LABEL_45;
          BattleLogic__updateResultServant((BattleLogic_o *)this, 0);
          if ( skillExecArgs )
LABEL_26:
            Timing_k__BackingField = skillExecArgs->fields._Timing_k__BackingField;
          else
            Timing_k__BackingField = 0;
          argument = (BattleLogicFunction_FunctionArgument_o *)sub_1CE694C(BattleLogicFunction_FunctionArgument_TypeInfo);
          BattleLogicFunction_FunctionArgument___ctor(argument, 0);
          if ( argument )
          {
            type = skillInfo->fields.type;
            argument->fields.isDeckDataLoad = v47;
            argument->fields._SkillTiming_k__BackingField = Timing_k__BackingField;
            argument->fields.grantSkillType = type;
            if ( v20 )
            {
              logicfunction = v10->fields.logicfunction;
              funcId = v20->fields.funcId;
              this = (BattleLogicSkill_o *)SkillLvEntity__getDataValsList(v20, 0);
              if ( logicfunction )
              {
                this = (BattleLogicSkill_o *)BattleLogicFunction__procList(
                                               logicfunction,
                                               v15,
                                               funcId,
                                               (DataVals_array *)this,
                                               1,
                                               1,
                                               0,
                                               v28,
                                               0,
                                               1,
                                               1,
                                               argument,
                                               v20->fields.skillId,
                                               0);
                if ( !skillExecArgs || skillExecArgs->fields._RemoveActorUnfixedBuff_k__BackingField )
                {
                  buffData = ServantData->fields.buffData;
                  if ( !buffData )
                    goto LABEL_45;
                  unfixedBuffList = buffData->fields.unfixedBuffList;
                  if ( !unfixedBuffList )
                    goto LABEL_45;
                  v36 = unfixedBuffList->fields._version + 1;
                  unfixedBuffList->fields._size = 0;
                  unfixedBuffList->fields._version = v36;
                }
                data = v10->fields.data;
                this = (BattleLogicSkill_o *)BattleLogicSkill___c_TypeInfo;
                if ( !BattleLogicSkill___c_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(BattleLogicSkill___c_TypeInfo);
                  this = (BattleLogicSkill_o *)BattleLogicSkill___c_TypeInfo;
                }
                master = this[3].fields.logicfunction->fields.master;
                if ( !master )
                {
                  if ( !LODWORD(this[4].fields.logictarget) )
                  {
                    j_il2cpp_runtime_class_init_0(this);
                    this = (BattleLogicSkill_o *)BattleLogicSkill___c_TypeInfo;
                  }
                  klass = (Il2CppObject *)this[3].fields.logicfunction->klass;
                  master = (struct FunctionMaster_o *)sub_1CE694C(System_Action_BattleServantData__TypeInfo);
                  System_Action_object____ctor(
                    (System_Action_object__o *)master,
                    klass,
                    Method_BattleLogicSkill___c__actPassiveSkill_b__11_0__,
                    0);
                  static_fields = BattleLogicSkill___c_TypeInfo->static_fields;
                  static_fields->__9__11_0 = (struct System_Action_BattleServantData__o *)master;
                  sub_1CE66A4(
                    (GrandQuestFolderBoardItem_o *)&static_fields->__9__11_0,
                    (int32_t)master,
                    v41,
                    v42,
                    v43,
                    v44,
                    v45,
                    v46);
                }
                if ( data )
                {
                  BattleData__ExecFuncAllServant(data, (System_Action_BattleServantData__o *)master, 0);
                  this = (BattleLogicSkill_o *)v10->fields.logic;
                  if ( this )
                  {
                    BattleLogic__updateConditionsBuffAll((BattleLogic_o *)this, 0, 0, 0);
                    return;
                  }
                }
              }
            }
          }
        }
      }
LABEL_45:
      sub_1CE6958(this, skillInfo);
    }
  }
}


bool BattleLogicSkill__checkConditions(
        BattleLogicSkill_o *this,
        BattleSkillInfoData_o *skillInfo,
        System_String_o **text,
        const MethodInfo *method)
{
  __int64 v7; // x24
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  __int64 Instance; // x0
  __int64 v15; // x1
  SkillLvMaster_o *v16; // x22
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  __int64 v23; // x1
  SkillLvEntity_o *v24; // x27
  System_Collections_Generic_Dictionary_object__object__o *v25; // x0
  __int64 v26; // x26
  __int64 v27; // x25
  __int64 v28; // x23
  __int64 v29; // x22
  BattleServantData_o *v30; // x24
  BattleLogicSkill_o *v31; // x0
  const MethodInfo *v32; // x3
  __int64 *v33; // x8
  struct BattleData_o *data; // x8
  struct BattleData_o *v35; // x8
  unsigned int NowHp; // w0
  unsigned int v37; // w0
  int32_t v38; // w20
  int32_t v39; // w20
  System_String_o *v41; // x0
  int32_t v42; // w2
  int32_t v43; // w3
  System_String_o *v44; // x4
  int32_t v45; // w5
  int64_t v46; // x6
  System_String_o *v47; // x7
  int32_t limitMinNp; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4E07DA9 & 1) == 0 )
  {
    sub_1CE6700(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1CE6700(&Method_System_Collections_Generic_Dictionary_string__object__get_Count__);
    sub_1CE6700(&System_Func_string__int__bool__TypeInfo);
    sub_1CE6700(&System_Func_string__double__bool__TypeInfo);
    sub_1CE6700(&LocalizationManager_TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1CE6700(&Method_BattleLogicSkill___c__DisplayClass14_0__checkConditions_b__0__);
    sub_1CE6700(&Method_BattleLogicSkill___c__DisplayClass14_0__checkConditions_b__1__);
    sub_1CE6700(&Method_BattleLogicSkill___c__DisplayClass14_0__checkConditions_b__2__);
    sub_1CE6700(&Method_BattleLogicSkill___c__DisplayClass14_0__checkConditions_b__3__);
    sub_1CE6700(&BattleLogicSkill___c__DisplayClass14_0_TypeInfo);
    sub_1CE6700(&StringLiteral_2890/*"BATTLE_SKILLERROR_NP_LOWER"*/);
    sub_1CE6700(&StringLiteral_2888/*"BATTLE_SKILLERROR_HP_LOWER"*/);
    sub_1CE6700(&StringLiteral_12474/*"STAR_HIGHER"*/);
    sub_1CE6700(&StringLiteral_7311/*"HP_PER_LOWER"*/);
    sub_1CE6700(&StringLiteral_2889/*"BATTLE_SKILLERROR_NP_HIGHER"*/);
    sub_1CE6700(&StringLiteral_2887/*"BATTLE_SKILLERROR_HP_HIGHER"*/);
    sub_1CE6700(&StringLiteral_7310/*"HP_PER_HIGHER"*/);
    sub_1CE6700(&StringLiteral_2891/*"BATTLE_SKILLERROR_STAR_HIGHER"*/);
    sub_1CE6700(&StringLiteral_9430/*"NP_HIGHER"*/);
    sub_1CE6700(&StringLiteral_2892/*"BATTLE_SKILLERROR_STAR_LOWER"*/);
    sub_1CE6700(&StringLiteral_7312/*"HP_VAL_HIGHER"*/);
    sub_1CE6700(&StringLiteral_12475/*"STAR_LOWER"*/);
    sub_1CE6700(&StringLiteral_1/*""*/);
    sub_1CE6700(&StringLiteral_2893/*"BATTLE_SKILLERROR_USABLE_NP_HIGHER"*/);
    sub_1CE6700(&StringLiteral_9432/*"NP_LOWER"*/);
    sub_1CE6700(&StringLiteral_7313/*"HP_VAL_LOWER"*/);
    byte_4E07DA9 = 1;
  }
  limitMinNp = 0;
  v7 = sub_1CE694C(BattleLogicSkill___c__DisplayClass14_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  *text = (System_String_o *)StringLiteral_1/*""*/;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)text, StringLiteral_1/*""*/, v8, v9, v10, v11, v12, v13);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_56;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  if ( !skillInfo )
    goto LABEL_56;
  v16 = (SkillLvMaster_o *)Instance;
  Instance = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, const MethodInfo *))skillInfo->klass->vtable._5_get_skillId.methodPtr)(
               skillInfo,
               skillInfo->klass->vtable._5_get_skillId.method);
  if ( !v16 )
    goto LABEL_56;
  Instance = (__int64)SkillLvMaster__GetEntity(v16, Instance, skillInfo->fields.skilllv, 0);
  if ( !Instance || !v7 )
    goto LABEL_56;
  v23 = *(_QWORD *)(Instance + 56);
  v24 = (SkillLvEntity_o *)Instance;
  *(_QWORD *)(v7 + 16) = v23;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v7 + 16), v23, v17, v18, v19, v20, v21, v22);
  v25 = *(System_Collections_Generic_Dictionary_object__object__o **)(v7 + 16);
  if ( !v25 )
    return 1;
  if ( System_Collections_Generic_Dictionary_object__object___get_Count(
         v25,
         (const MethodInfo_35B4660 *)Method_System_Collections_Generic_Dictionary_string__object__get_Count__) < 1 )
    return 1;
  v26 = sub_1CE694C(System_Func_string__int__bool__TypeInfo);
  System_Func_object__int__bool____ctor(
    (System_Func_T1__T2__TResult__o *)v26,
    (Il2CppObject *)v7,
    Method_BattleLogicSkill___c__DisplayClass14_0__checkConditions_b__0__,
    0);
  v27 = sub_1CE694C(System_Func_string__int__bool__TypeInfo);
  System_Func_object__int__bool____ctor(
    (System_Func_T1__T2__TResult__o *)v27,
    (Il2CppObject *)v7,
    Method_BattleLogicSkill___c__DisplayClass14_0__checkConditions_b__1__,
    0);
  v28 = sub_1CE694C(System_Func_string__double__bool__TypeInfo);
  System_Func_object__double__bool____ctor(
    (System_Func_T1__T2__TResult__o *)v28,
    (Il2CppObject *)v7,
    Method_BattleLogicSkill___c__DisplayClass14_0__checkConditions_b__2__,
    0);
  v29 = sub_1CE694C(System_Func_string__double__bool__TypeInfo);
  System_Func_object__double__bool____ctor(
    (System_Func_T1__T2__TResult__o *)v29,
    (Il2CppObject *)v7,
    Method_BattleLogicSkill___c__DisplayClass14_0__checkConditions_b__3__,
    0);
  if ( !BattleSkillInfoData__isServantSkill(skillInfo, 0) )
    return 1;
  Instance = (__int64)this->fields.data;
  if ( !Instance )
    goto LABEL_56;
  Instance = (__int64)BattleData__getServantData((BattleData_o *)Instance, skillInfo->fields.svtUniqueId, 0);
  if ( !Instance )
    goto LABEL_56;
  v30 = (BattleServantData_o *)Instance;
  if ( !BattleServantData__TryGetLimitMinNp((BattleServantData_o *)Instance, &limitMinNp, 0) )
  {
    Instance = BattleServantData__getNPVal(v30, 0);
    if ( !v26 )
      goto LABEL_56;
LABEL_23:
    if ( ((*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(v26 + 24))(
            *(_QWORD *)(v26 + 64),
            StringLiteral_9430/*"NP_HIGHER"*/,
            (unsigned int)Instance,
            *(_QWORD *)(v26 + 40))
        & 1) == 0 )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v33 = &StringLiteral_2889/*"BATTLE_SKILLERROR_NP_HIGHER"*/;
      goto LABEL_55;
    }
    Instance = BattleServantData__getNPVal(v30, 0);
    if ( !v27 )
      goto LABEL_56;
    Instance = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(v27 + 24))(
                 *(_QWORD *)(v27 + 64),
                 StringLiteral_9432/*"NP_LOWER"*/,
                 (unsigned int)Instance,
                 *(_QWORD *)(v27 + 40));
    if ( (Instance & 1) == 0 )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v33 = &StringLiteral_2890/*"BATTLE_SKILLERROR_NP_LOWER"*/;
      goto LABEL_55;
    }
    data = this->fields.data;
    if ( !data )
      goto LABEL_56;
    Instance = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(v26 + 24))(
                 *(_QWORD *)(v26 + 64),
                 StringLiteral_12474/*"STAR_HIGHER"*/,
                 (unsigned int)data->fields.totalCriticalStars,
                 *(_QWORD *)(v26 + 40));
    if ( (Instance & 1) == 0 )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v33 = &StringLiteral_2891/*"BATTLE_SKILLERROR_STAR_HIGHER"*/;
      goto LABEL_55;
    }
    v35 = this->fields.data;
    if ( !v35 )
      goto LABEL_56;
    if ( ((*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(v27 + 24))(
            *(_QWORD *)(v27 + 64),
            StringLiteral_12475/*"STAR_LOWER"*/,
            (unsigned int)v35->fields.totalCriticalStars,
            *(_QWORD *)(v27 + 40))
        & 1) == 0 )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v33 = &StringLiteral_2892/*"BATTLE_SKILLERROR_STAR_LOWER"*/;
      goto LABEL_55;
    }
    NowHp = BattleServantData__getNowHp(v30, 0);
    if ( ((*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(v26 + 24))(
            *(_QWORD *)(v26 + 64),
            StringLiteral_7312/*"HP_VAL_HIGHER"*/,
            NowHp,
            *(_QWORD *)(v26 + 40))
        & 1) != 0 )
    {
      v37 = BattleServantData__getNowHp(v30, 0);
      if ( ((*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(v27 + 24))(
              *(_QWORD *)(v27 + 64),
              StringLiteral_7313/*"HP_VAL_LOWER"*/,
              v37,
              *(_QWORD *)(v27 + 40))
          & 1) == 0 )
        goto LABEL_52;
      v38 = BattleServantData__getNowHp(v30, 0);
      Instance = BattleServantData__getMaxHp(v30, 0);
      if ( !v28 )
LABEL_56:
        sub_1CE6958(Instance, v15);
      if ( ((*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, double))(v28 + 24))(
              *(_QWORD *)(v28 + 64),
              StringLiteral_7310/*"HP_PER_HIGHER"*/,
              *(_QWORD *)(v28 + 40),
              (double)v38 * 1000.0 / (double)(int)Instance)
          & 1) != 0 )
      {
        v39 = BattleServantData__getNowHp(v30, 0);
        Instance = BattleServantData__getMaxHp(v30, 0);
        if ( v29 )
        {
          if ( ((*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, double))(v29 + 24))(
                  *(_QWORD *)(v29 + 64),
                  StringLiteral_7311/*"HP_PER_LOWER"*/,
                  *(_QWORD *)(v29 + 40),
                  (double)v39 * 1000.0 / (double)(int)Instance)
              & 1) != 0 )
            return 1;
LABEL_52:
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v33 = &StringLiteral_2888/*"BATTLE_SKILLERROR_HP_LOWER"*/;
          goto LABEL_55;
        }
        goto LABEL_56;
      }
    }
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v33 = &StringLiteral_2887/*"BATTLE_SKILLERROR_HP_HIGHER"*/;
    goto LABEL_55;
  }
  Instance = BattleServantData__GetUsableNpVal(v30, 0);
  if ( !v26 )
    goto LABEL_56;
  v31 = (BattleLogicSkill_o *)(*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(v26 + 24))(
                                *(_QWORD *)(v26 + 64),
                                StringLiteral_9430/*"NP_HIGHER"*/,
                                (unsigned int)Instance,
                                *(_QWORD *)(v26 + 40));
  if ( ((unsigned __int8)v31 & 1) != 0 || !BattleLogicSkill__IsSelfLossNpFuncSkill(v31, v24, skillInfo, v32) )
  {
    LODWORD(Instance) = BattleServantData__getNPVal(v30, 0);
    goto LABEL_23;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v33 = &StringLiteral_2893/*"BATTLE_SKILLERROR_USABLE_NP_HIGHER"*/;
LABEL_55:
  v41 = LocalizationManager__Get((System_String_o *)*v33, 0);
  *text = v41;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)text, (int32_t)v41, v42, v43, v44, v45, v46, v47);
  return 0;
}


BattleActionData_o *BattleLogicSkill__createCommandSpell(
        BattleLogicSkill_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  BattleData_o *skillId; // x0
  __int64 v6; // x22
  struct BattleSkillInfoData_o *skillInfo; // x23
  DataMasterBase_TMaster__TEntity__PKType__o *v8; // x21
  BattleData_o *v9; // x21
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  BattleActionData_c *v16; // x0
  struct System_Int32_array *ptTarget; // x1
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  System_Collections_Generic_List_int__o *v24; // x24
  System_Collections_Generic_List_object__o *v25; // x25
  const MethodInfo *v26; // x5
  BattleLogicFunction_o *logicfunction; // x26
  System_Int32_array *v28; // x24
  System_Object_array *v29; // x25
  BattleActionData_o *v30; // x22
  struct BattleData_o *data; // x8
  struct BattleActionLogManagerInterface_o *actionLogManager; // x23
  BattleActionLogManagerInterface_c *klass; // x8
  __int64 v34; // x9
  BattleActionLogManagerInterface_c **p_offset; // x10
  __int64 v36; // x0
  struct BattleLogic_o *logic; // x8
  BattlePerformance_o *perf; // x20
  float CutinAdditionalTime; // s0
  BattleData_o *v40; // x20
  int32_t actorId; // w21
  BattleLogic_o *v42; // x20
  BattleLogicTask_array *FunctionedFunctionBuffTaskArray; // x0

  if ( (byte_4E07DA7 & 1) == 0 )
  {
    sub_1CE6700(&BattleActionData_TypeInfo);
    sub_1CE6700(&BattleActionLogManagerInterface_TypeInfo);
    sub_1CE6700(&Method_DataManager_GetMasterData_CommandSpellMaster___);
    sub_1CE6700(&Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__);
    sub_1CE6700(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1CE6700(&Method_System_Collections_Generic_List_DataVals__AddRange__);
    sub_1CE6700(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1CE6700(&Method_System_Collections_Generic_List_DataVals__ToArray__);
    sub_1CE6700(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1CE6700(&Method_System_Collections_Generic_List_DataVals___ctor__);
    sub_1CE6700(&System_Collections_Generic_List_int__TypeInfo);
    sub_1CE6700(&System_Collections_Generic_List_DataVals__TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4E07DA7 = 1;
  }
  skillId = this->fields.data;
  if ( !skillId )
    goto LABEL_34;
  BattleData__ResetFunctionedFunctionIds(skillId, 0);
  v6 = sub_1CE694C(BattleActionData_TypeInfo);
  BattleActionData___ctor((BattleActionData_o *)v6, 0);
  if ( !task )
    goto LABEL_34;
  skillInfo = task->fields.skillInfo;
  skillId = (BattleData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !skillId )
    goto LABEL_34;
  skillId = (BattleData_o *)DataManager__GetMasterData_object_(
                              (DataManager_o *)skillId,
                              (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_CommandSpellMaster___);
  if ( !skillInfo )
    goto LABEL_34;
  v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)skillId;
  skillId = (BattleData_o *)((__int64 (__fastcall *)(struct BattleSkillInfoData_o *, const MethodInfo *))skillInfo->klass->vtable._5_get_skillId.methodPtr)(
                              skillInfo,
                              skillInfo->klass->vtable._5_get_skillId.method);
  if ( !v8 )
    goto LABEL_34;
  skillId = (BattleData_o *)DataMasterBase_object__object__int___GetEntity(
                              v8,
                              (int32_t)skillId,
                              (const MethodInfo_34E925C *)Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__);
  if ( !v6 )
    goto LABEL_34;
  v9 = skillId;
  BattleActionData__setStateField((BattleActionData_o *)v6, 0);
  *(_DWORD *)(v6 + 32) = -1;
  if ( !v9 )
    goto LABEL_34;
  *(_DWORD *)(v6 + 48) = HIDWORD(v9->fields.m_CancellationTokenSource);
  v16 = BattleActionData_TypeInfo;
  if ( !BattleActionData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo);
    v16 = BattleActionData_TypeInfo;
  }
  *(_DWORD *)(v6 + 60) = v16->static_fields->TYPE_COMMAND_SPELL;
  ptTarget = task->fields.ptTarget;
  *(_QWORD *)(v6 + 40) = ptTarget;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v6 + 40), (int32_t)ptTarget, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v6 + 152) = skillInfo;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v6 + 152), (int32_t)skillInfo, v18, v19, v20, v21, v22, v23);
  skillId = (BattleData_o *)this->fields.logic;
  if ( !skillId )
    goto LABEL_34;
  BattleLogic__updateResultServant((BattleLogic_o *)skillId, 0);
  v24 = (System_Collections_Generic_List_int__o *)sub_1CE694C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v24,
    (const MethodInfo_38E86F0 *)Method_System_Collections_Generic_List_int___ctor__);
  v25 = (System_Collections_Generic_List_object__o *)sub_1CE694C(System_Collections_Generic_List_DataVals__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v25,
    (const MethodInfo_3905734 *)Method_System_Collections_Generic_List_DataVals___ctor__);
  if ( !v24 )
    goto LABEL_34;
  System_Collections_Generic_List_int___AddRange(
    v24,
    (System_Collections_Generic_IEnumerable_T__o *)v9->fields.data,
    (const MethodInfo_38E9150 *)Method_System_Collections_Generic_List_int__AddRange__);
  skillId = (BattleData_o *)CommandSpellEntity__getDataValsList((CommandSpellEntity_o *)v9, 0);
  if ( !v25 )
    goto LABEL_34;
  System_Collections_Generic_List_object___AddRange(
    v25,
    (System_Collections_Generic_IEnumerable_T__o *)skillId,
    (const MethodInfo_3906174 *)Method_System_Collections_Generic_List_DataVals__AddRange__);
  BattleLogicSkill__SetCommandSpellAddFunctionData(
    this,
    v9->fields.m_CachedPtr,
    task->fields.ptTarget,
    v24,
    (System_Collections_Generic_List_DataVals__o *)v25,
    v26);
  logicfunction = this->fields.logicfunction;
  v28 = System_Collections_Generic_List_int___ToArray(
          v24,
          (const MethodInfo_38EA9FC *)Method_System_Collections_Generic_List_int__ToArray__);
  v29 = System_Collections_Generic_List_object___ToArray(
          v25,
          (const MethodInfo_3907AC0 *)Method_System_Collections_Generic_List_DataVals__ToArray__);
  skillId = (BattleData_o *)((__int64 (__fastcall *)(struct BattleSkillInfoData_o *, const MethodInfo *))skillInfo->klass->vtable._5_get_skillId.methodPtr)(
                              skillInfo,
                              skillInfo->klass->vtable._5_get_skillId.method);
  if ( !logicfunction )
    goto LABEL_34;
  skillId = (BattleData_o *)BattleLogicFunction__procList(
                              logicfunction,
                              (BattleActionData_o *)v6,
                              v28,
                              (DataVals_array *)v29,
                              0,
                              1,
                              0,
                              0,
                              0,
                              1,
                              1,
                              0,
                              (int32_t)skillId,
                              0);
  if ( !this->fields.logic )
    goto LABEL_34;
  v30 = (BattleActionData_o *)skillId;
  BattleLogic__updateConditionsBuffAll(this->fields.logic, 0, 0, 0);
  data = this->fields.data;
  if ( !data )
    goto LABEL_34;
  actionLogManager = data->fields.actionLogManager;
  if ( !actionLogManager )
    goto LABEL_34;
  klass = actionLogManager->klass;
  v34 = *(unsigned __int16 *)&actionLogManager->klass->_2.rank;
  if ( *(_WORD *)&actionLogManager->klass->_2.rank )
  {
    p_offset = (BattleActionLogManagerInterface_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != BattleActionLogManagerInterface_TypeInfo )
    {
      --v34;
      p_offset += 2;
      if ( !v34 )
        goto LABEL_23;
    }
    v36 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 6];
  }
  else
  {
LABEL_23:
    v36 = sub_1CBCA7C(actionLogManager, BattleActionLogManagerInterface_TypeInfo, 6);
  }
  (*(void (__fastcall **)(struct BattleActionLogManagerInterface_o *, BattleLogicTask_o *, _QWORD))v36)(
    actionLogManager,
    task,
    *(_QWORD *)(v36 + 8));
  if ( CommandSpellEntity__GetCutinAdditionalTime((CommandSpellEntity_o *)v9, 0) > 0.0 )
  {
    logic = this->fields.logic;
    if ( logic )
    {
      perf = logic->fields.perf;
      CutinAdditionalTime = CommandSpellEntity__GetCutinAdditionalTime((CommandSpellEntity_o *)v9, 0);
      if ( perf )
      {
        BattlePerformance__InsertWaitAction(perf, CutinAdditionalTime, 0, 0);
        goto LABEL_29;
      }
    }
LABEL_34:
    sub_1CE6958(skillId, task);
  }
LABEL_29:
  if ( !v30 )
    goto LABEL_34;
  skillId = (BattleData_o *)v30->fields.funcTargetList;
  if ( !skillId )
    goto LABEL_34;
  v40 = this->fields.data;
  actorId = v30->fields.actorId;
  skillId = (BattleData_o *)System_Collections_Generic_List_int___ToArray(
                              (System_Collections_Generic_List_int__o *)skillId,
                              (const MethodInfo_38EA9FC *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !v40 )
    goto LABEL_34;
  BattleData__SetFunctionedTargetIdArray(v40, actorId, (System_Int32_array *)skillId, 0);
  v42 = this->fields.logic;
  if ( !v42 )
    goto LABEL_34;
  FunctionedFunctionBuffTaskArray = BattleLogic__GetFunctionedFunctionBuffTaskArray(
                                      this->fields.logic,
                                      this->fields.data,
                                      0);
  BattleLogic__addBattleLogicTask(v42, FunctionedFunctionBuffTaskArray, 0);
  return v30;
}


BattleActionData_o *BattleLogicSkill__createSkillData(
        BattleLogicSkill_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x5
  BattleLogic_o *logic; // x19
  BattleActionData_o *v5; // x0
  __int64 v6; // x1
  BattleActionData_o *baseActionData; // [xsp+8h] [xbp-18h] BYREF

  baseActionData = 0;
  logic = this->fields.logic;
  v5 = BattleLogicSkill__createSkillData_48312492(this, task, 0, 0, &baseActionData, v3);
  if ( !logic )
    sub_1CE6958(v5, v6);
  return BattleLogic__PrevReturnCreateActionData(logic, v5, baseActionData, 0);
}


BattleActionData_o *BattleLogicSkill__createSkillData_48312492(
        BattleLogicSkill_o *this,
        BattleLogicTask_o *task,
        bool fromSkillCopyFunc,
        DataVals_o *baseVals,
        BattleActionData_o **baseActionData,
        const MethodInfo *method)
{
  _BOOL4 v8; // w27
  BattleLogicTask_o *v9; // x19
  BattleLogicSkill_o *v10; // x20
  BattleActionData_o *v11; // x22
  BattleActionData_o *v12; // x25
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  int32_t *skillInfo; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v20; // x22
  SkillEntity_o *Entity; // x22
  Il2CppObject *MasterData_object; // x24
  BattleActionData_c *v23; // x8
  struct BattleActionData_StaticFields *static_fields; // x9
  __int64 naturalAligment; // x10
  struct System_Int32_array *actorIdlist; // x8
  BattleLogicSkill_o *v27; // x26
  char v28; // w26
  struct System_Int32_array *v29; // x8
  int v30; // w8
  BattleData_o *data; // x29
  BattleServantData_o *EnemyServantData; // x0
  __int64 v33; // x28
  __int64 v34; // x29
  struct System_Int32_array *v35; // x8
  const MethodInfo *v36; // x1
  struct System_Int32_array *ptTarget; // x1
  int32_t v38; // w2
  int32_t v39; // w3
  System_String_o *v40; // x4
  int32_t v41; // w5
  int64_t v42; // x6
  System_String_o *v43; // x7
  const MethodInfo *v44; // x3
  System_String_o *SkillMessage; // x0
  int32_t v46; // w2
  int32_t v47; // w3
  System_String_o *v48; // x4
  int32_t v49; // w5
  int64_t v50; // x6
  System_String_o *v51; // x7
  int32_t v52; // w2
  int32_t v53; // w3
  System_String_o *v54; // x4
  int32_t v55; // w5
  int64_t v56; // x6
  System_String_o *v57; // x7
  int32_t v58; // w2
  int32_t v59; // w3
  System_String_o *v60; // x4
  int32_t v61; // w5
  int64_t v62; // x6
  System_String_o *v63; // x7
  bool v64; // w8
  BattleLogicSkill_o *v65; // x26
  BattleLogicSkill_o *v66; // x29
  System_Int32_array *GimmickAnimTypeArray; // x0
  struct System_String_o *motionMessage; // x1
  GrandQuestFolderBoardItem_o *p_motionMessage; // x0
  int32_t v70; // w2
  int32_t v71; // w3
  System_String_o *v72; // x4
  int32_t v73; // w5
  int64_t v74; // x6
  System_String_o *v75; // x7
  struct System_Int32_array *effectList; // x1
  int logic; // w8
  BattleLogicSkill_o *v78; // x26
  int v79; // w9
  __int64 v80; // x11
  BattleLogicFunction_o *logicfunction; // x28
  System_Int32_array *funcId; // x27
  int32_t v83; // w8
  const MethodInfo *v84; // x6
  bool v85; // w28
  struct System_Int32_array *v86; // x8
  int32_t v87; // w5
  struct BattleData_o *v88; // x8
  bool v89; // w8
  __int64 argument; // x26
  BattleLogicFunction_SkillSideEffectFunctionArgument_o *overwriteFuncSideEffectArg; // x27
  bool *p_isShowBattlePointEffect; // x27
  Il2CppObject *v93; // x22
  bool v94; // w23
  BattleLogicFunction_o *v95; // x29
  System_Int32_array *v96; // x27
  DataVals_array *v97; // x28
  int32_t v98; // w0
  UnityEngine_Object_o *logictarget; // x28
  int32_t v100; // w27
  struct BattleLogic_o *v101; // x8
  UnityEngine_GameObject_o *ServantGameObject; // x0
  int32_t v103; // w2
  int32_t v104; // w3
  System_String_o *v105; // x4
  int32_t v106; // w5
  int64_t v107; // x6
  System_String_o *v108; // x7
  struct BattleData_o *v109; // x8
  struct BattleActionLogManagerInterface_o *actionLogManager; // x25
  BattleActionLogManagerInterface_c *klass; // x8
  __int64 v112; // x9
  BattleActionLogManagerInterface_c **p_offset; // x10
  __int64 v114; // x0
  int32_t v115; // w2
  int32_t v116; // w3
  System_String_o *v117; // x4
  int32_t v118; // w5
  int64_t v119; // x6
  System_String_o *v120; // x7
  BattleLogicSkill_c *v121; // x1
  int32_t v122; // w1
  int32_t v123; // w2
  int32_t v124; // w3
  System_String_o *v125; // x4
  int32_t v126; // w5
  int64_t v127; // x6
  System_String_o *v128; // x7
  BattleLogicSkill_c **p_logicfunction; // x27
  int32_t v130; // w2
  int32_t v131; // w3
  System_String_o *v132; // x4
  int32_t v133; // w5
  int64_t v134; // x6
  System_String_o *v135; // x7
  BattleLogicSkill_c *v136; // x1
  int32_t v137; // w1
  int32_t v138; // w2
  int32_t v139; // w3
  System_String_o *v140; // x4
  int32_t v141; // w5
  int64_t v142; // x6
  System_String_o *v143; // x7
  int32_t v144; // w23
  struct System_Int32_array *v145; // x8
  SkillLvEntity_o *v146; // x23
  int v147; // w8
  struct System_Int32_array *v148; // x8
  _BOOL4 isShowBattlePointEffect; // w24
  BattleLogicSkill_o *v150; // x25
  BattleData_o *v151; // x27
  int32_t v152; // w28
  struct BattleLogic_o *v153; // x27
  BattleLogicTask_array *v154; // x0
  BattleData_o *v155; // x25
  const MethodInfo *v156; // x4
  struct System_Int32_array *v157; // x8
  int32_t v158; // w27
  BattleLogic_o *v159; // x25
  BattleLogicTask_array *FunctionedFunctionBuffTaskArray; // x0
  BattleLogicTask_o *v161; // x0
  SkillLvEntity_o *v162; // x8
  BattleLogicTask_o *v163; // x23
  BattleData_o *v164; // x23
  BattleLogicTask_o *v165; // x23
  const MethodInfo *v166; // x1
  int32_t v167; // w2
  int32_t v168; // w3
  System_String_o *v169; // x4
  int32_t v170; // w5
  int64_t v171; // x6
  System_String_o *v172; // x7
  struct BattleLogic_o *v173; // x8
  BattlePerformance_o *perf; // x23
  float CutinAdditionalTime; // s0
  struct BattleData_o *v176; // x8
  struct BattlePerformance_o *v177; // x8
  int32_t v178; // w2
  int32_t v179; // w3
  System_String_o *v180; // x4
  int32_t v181; // w5
  int64_t v182; // x6
  System_String_o *v183; // x7
  const MethodInfo *v184; // x3
  BattleLogicTask_o *v185; // x23
  const MethodInfo *v186; // x1
  struct System_Int32_array *v187; // x8
  int32_t v188; // w2
  const MethodInfo *v189; // x2
  struct BattleLogic_o *v190; // x21
  struct BattleLogic_o *v191; // x8
  struct BattlePerformance_o *v192; // x9
  SkillEntity_o *v194; // [xsp+38h] [xbp-88h]
  SkillLvEntity_o *v195; // [xsp+48h] [xbp-78h]
  DataVals_array *dataValsArray; // [xsp+50h] [xbp-70h] BYREF
  System_Int32_array *functionIdArray; // [xsp+58h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v198; // 0:x0.16

  v8 = fromSkillCopyFunc;
  v9 = task;
  v10 = this;
  if ( (byte_4E07DA4 & 1) == 0 )
  {
    sub_1CE6700(&Method_BasicHelper_IndexValue_int___);
    sub_1CE6700(&BattleActionData_TypeInfo);
    sub_1CE6700(&BattleActionLogManagerInterface_TypeInfo);
    sub_1CE6700(&BattleBoostItemInfoData_TypeInfo);
    sub_1CE6700(&BattleLogicTask_TypeInfo);
    sub_1CE6700(&CheckUpdateShiftTask_TypeInfo);
    sub_1CE6700(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1CE6700(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_1CE6700(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_1CE6700(&BattleLogicFunction_FunctionArgument_TypeInfo);
    sub_1CE6700(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1CE6700(&BattleLogicFunction_SkillSideEffectFunctionArgument_TypeInfo);
    this = (BattleLogicSkill_o *)sub_1CE6700(&StringLiteral_1/*""*/);
    byte_4E07DA4 = 1;
  }
  dataValsArray = 0;
  functionIdArray = 0;
  if ( !v9 )
    goto LABEL_215;
  if ( v9->fields.IsResetWasAttackTargetId )
  {
    this = (BattleLogicSkill_o *)v10->fields.data;
    if ( !this )
      goto LABEL_215;
    BattleData__ResetWasAttackTargetId((BattleData_o *)this, 0);
  }
  if ( v9->fields.IsResetFunctionedFunctionIds )
  {
    this = (BattleLogicSkill_o *)v10->fields.data;
    if ( !this )
      goto LABEL_215;
    BattleData__ResetFunctionedFunctionIds((BattleData_o *)this, 0);
  }
  v11 = (BattleActionData_o *)sub_1CE694C(BattleActionData_TypeInfo);
  BattleActionData___ctor(v11, 0);
  if ( !v11 )
    goto LABEL_215;
  v12 = BattleActionData__AddDisplayTriggerIntervalBuff(v11, v9, 0);
  *baseActionData = v12;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)baseActionData, (int32_t)v12, v13, v14, v15, v16, v17, v18);
  if ( !v12 )
    goto LABEL_215;
  v12->fields.taskActorType = v9->fields.actortype;
  skillInfo = (int32_t *)v9->fields.skillInfo;
  this = (BattleLogicSkill_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_215;
  this = (BattleLogicSkill_o *)DataManager__GetMasterData_object_(
                                 (DataManager_o *)this,
                                 (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_SkillMaster___);
  if ( !skillInfo )
    goto LABEL_215;
  v20 = (DataMasterBase_TMaster__TEntity__PKType__o *)this;
  this = (BattleLogicSkill_o *)(*(__int64 (__fastcall **)(int32_t *, _QWORD))(*(_QWORD *)skillInfo + 392LL))(
                                 skillInfo,
                                 *(_QWORD *)(*(_QWORD *)skillInfo + 400LL));
  if ( !v20 )
    goto LABEL_215;
  Entity = (SkillEntity_o *)DataMasterBase_object__object__int___GetEntity(
                              v20,
                              (int32_t)this,
                              (const MethodInfo_34E925C *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  this = (BattleLogicSkill_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_215;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)this,
                        (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  this = (BattleLogicSkill_o *)(*(__int64 (__fastcall **)(int32_t *, _QWORD))(*(_QWORD *)skillInfo + 392LL))(
                                 skillInfo,
                                 *(_QWORD *)(*(_QWORD *)skillInfo + 400LL));
  if ( !MasterData_object )
    goto LABEL_215;
  this = (BattleLogicSkill_o *)SkillLvMaster__GetEntity(
                                 (SkillLvMaster_o *)MasterData_object,
                                 (int32_t)this,
                                 skillInfo[9],
                                 0);
  v195 = (SkillLvEntity_o *)this;
  v12->fields.isCounter = v9->fields.isCounter;
  v23 = BattleActionData_TypeInfo;
  if ( !BattleActionData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo);
    v23 = BattleActionData_TypeInfo;
  }
  static_fields = v23->static_fields;
  v12->fields.type = static_fields->TYPE_SKILL;
  if ( skillInfo[4] == 21 )
  {
    if ( !v23->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v23);
      static_fields = BattleActionData_TypeInfo->static_fields;
    }
    v12->fields.type = static_fields->TYPE_BOOSTSKILL;
    v12->fields.imageId = skillInfo[16];
    naturalAligment = BattleBoostItemInfoData_TypeInfo->_2.naturalAligment;
    if ( *(unsigned __int8 *)(*(_QWORD *)skillInfo + 304LL) >= (unsigned int)naturalAligment
      && *(BattleBoostItemInfoData_c **)(*(_QWORD *)(*(_QWORD *)skillInfo + 200LL) + 8 * naturalAligment - 8) == BattleBoostItemInfoData_TypeInfo )
    {
      this = (BattleLogicSkill_o *)BattleBoostItemInfoData__checkEffectTiming(
                                     (BattleBoostItemInfoData_o *)skillInfo,
                                     1,
                                     0);
      if ( ((unsigned __int8)this & 1) != 0 )
        v12->fields.noOperation = 1;
    }
  }
  if ( !v9->fields.checkAlive )
    goto LABEL_219;
  actorIdlist = v9->fields.actorIdlist;
  this = (BattleLogicSkill_o *)v10->fields.data;
  if ( actorIdlist )
  {
    if ( !LODWORD(actorIdlist->max_length) )
      goto LABEL_216;
    task = (BattleLogicTask_o *)(unsigned int)actorIdlist->m_Items[0];
    if ( !this )
      goto LABEL_215;
  }
  else
  {
    task = (BattleLogicTask_o *)0xFFFFFFFFLL;
    if ( !this )
      goto LABEL_215;
  }
  this = (BattleLogicSkill_o *)BattleData__getServantData((BattleData_o *)this, (int32_t)task, 0);
  if ( !this
    || (this = (BattleLogicSkill_o *)BattleServantData__isAlive((BattleServantData_o *)this, 0, 0),
        v27 = 0,
        ((unsigned __int8)this & 1) != 0) )
  {
LABEL_219:
    if ( v9->fields.isForcedSpeedOne )
    {
      v28 = 1;
    }
    else
    {
      if ( !Entity )
        goto LABEL_215;
      this = (BattleLogicSkill_o *)SkillEntity__isForcedSkillSpeedOne(Entity, 0);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_41;
      this = (BattleLogicSkill_o *)v10->fields.data;
      if ( !this )
        goto LABEL_215;
      this = (BattleLogicSkill_o *)BattleData__checkEnablePlaySpeedOneFromSkillIdList(
                                     (BattleData_o *)this,
                                     Entity->fields.id,
                                     0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        this = (BattleLogicSkill_o *)SkillEntity__isForcedSkillSpeedOne(Entity, 0);
        v28 = (char)this;
      }
      else
      {
LABEL_41:
        v28 = 0;
      }
    }
    v29 = v9->fields.actorIdlist;
    if ( v29 )
    {
      if ( !LODWORD(v29->max_length) )
        goto LABEL_216;
      v30 = v29->m_Items[0];
    }
    else
    {
      v30 = -1;
    }
    v12->fields.actorId = v30;
    if ( !v195 )
      goto LABEL_215;
    data = v10->fields.data;
    this = (BattleLogicSkill_o *)SkillLvEntity__GetActNpcServantId(v195, 0);
    if ( !data )
      goto LABEL_215;
    EnemyServantData = BattleData__getEnemyServantData(data, (int32_t)this, 0);
    if ( EnemyServantData && (EnemyServantData->fields.uniqueId & 0x80000000) == 0 )
    {
      v33 = *(_QWORD *)&EnemyServantData->fields.svtId.fields.currentCryptoKey;
      v34 = *(_QWORD *)&EnemyServantData->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v198.fields.currentCryptoKey = v33;
      *(_QWORD *)&v198.fields.fakeValue = v34;
      v12->fields.actorId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v198, 0);
    }
    v35 = v9->fields.actorIdlist;
    this = (BattleLogicSkill_o *)v10->fields.data;
    if ( v35 )
    {
      if ( !LODWORD(v35->max_length) )
        goto LABEL_216;
      task = (BattleLogicTask_o *)(unsigned int)v35->m_Items[0];
      if ( !this )
        goto LABEL_215;
    }
    else
    {
      task = (BattleLogicTask_o *)0xFFFFFFFFLL;
      if ( !this )
        goto LABEL_215;
    }
    this = (BattleLogicSkill_o *)BattleData__getServantId((BattleData_o *)this, (int32_t)task, 0);
    if ( !Entity )
      goto LABEL_215;
    v12->fields.motionId = SkillEntity__GetMotionId(Entity, (int32_t)this, 0);
    v12->fields.targetId = BattleLogicTask__getTarget(v9, v36);
    ptTarget = v9->fields.ptTarget;
    v12->fields.pttargetIds = ptTarget;
    sub_1CE66A4(
      (GrandQuestFolderBoardItem_o *)&v12->fields.pttargetIds,
      (int32_t)ptTarget,
      v38,
      v39,
      v40,
      v41,
      v42,
      v43);
    SkillMessage = BattleLogicSkill__GetSkillMessage(v10, v12->fields.actorId, Entity, v44);
    v12->fields.skillMessage = SkillMessage;
    sub_1CE66A4(
      (GrandQuestFolderBoardItem_o *)&v12->fields.skillMessage,
      (int32_t)SkillMessage,
      v46,
      v47,
      v48,
      v49,
      v50,
      v51);
    v12->fields.skillInfo = (struct BattleSkillInfoData_o *)skillInfo;
    sub_1CE66A4((GrandQuestFolderBoardItem_o *)&v12->fields.skillInfo, (int32_t)skillInfo, v52, v53, v54, v55, v56, v57);
    v12->fields.isForcedSpeedOne = v28 & 1;
    v12->fields.checkRevengeId = v9->fields.checkRevengeId;
    v64 = SkillEntity__IsSkipCameraReset(Entity, 0)
       || SkillEntity__TryGetSkipCameraResetStates(Entity, &v12->fields.SkipCameraResetStateNames, 0);
    v12->fields.IsSkipCameraReset = v64;
    if ( v9->fields.gimmickIndexArray )
    {
      this = (BattleLogicSkill_o *)v10->fields.data;
      if ( !this )
        goto LABEL_215;
      this = (BattleLogicSkill_o *)BattleData__GetGimmickStartVoiceArray((BattleData_o *)this, 0);
      if ( !v10->fields.data )
        goto LABEL_215;
      v65 = this;
      this = (BattleLogicSkill_o *)BattleData__GetGimmickResultVoiceArray(v10->fields.data, 0);
      if ( !v10->fields.data )
        goto LABEL_215;
      v66 = this;
      GimmickAnimTypeArray = BattleData__GetGimmickAnimTypeArray(v10->fields.data, 0);
      BattleActionData__SetGimmickData(
        v12,
        v9->fields.gimmickIndexArray,
        (System_String_array *)v65,
        (System_Object_array *)v66,
        GimmickAnimTypeArray,
        0);
    }
    motionMessage = v9->fields.motionMessage;
    if ( motionMessage && motionMessage->fields._stringLength >= 1 )
    {
      v12->fields.motionMessage = motionMessage;
      p_motionMessage = (GrandQuestFolderBoardItem_o *)&v12->fields.motionMessage;
    }
    else
    {
      v12->fields.motionMessage = 0;
      p_motionMessage = (GrandQuestFolderBoardItem_o *)&v12->fields.motionMessage;
      LODWORD(motionMessage) = 0;
    }
    sub_1CE66A4(p_motionMessage, (int32_t)motionMessage, v58, v59, v60, v61, v62, v63);
    if ( (v9->fields.actortype | 4) == 5 )
      BattleActionData__setStateField(v12, 0);
    effectList = Entity->fields.effectList;
    v12->fields.effectlist = effectList;
    sub_1CE66A4(
      (GrandQuestFolderBoardItem_o *)&v12->fields.effectlist,
      (int32_t)effectList,
      v70,
      v71,
      v72,
      v73,
      v74,
      v75);
    this = (BattleLogicSkill_o *)v10->fields.logic;
    if ( !this )
      goto LABEL_215;
    BattleLogic__updateResultServant((BattleLogic_o *)this, 0);
    if ( skillInfo[4] == 21 )
    {
      this = (BattleLogicSkill_o *)SkillLvEntity__getDataValsList(v195, 0);
      if ( !this )
        goto LABEL_215;
      logic = (int)this->fields.logic;
      v78 = this;
      if ( logic >= 1 )
      {
        v79 = 0;
        while ( logic != v79 )
        {
          v80 = *((_QWORD *)&this->fields.logictarget + v79);
          if ( !v80 )
            goto LABEL_215;
          ++v79;
          *(_BYTE *)(v80 + 72) = 1;
          if ( logic == v79 )
            goto LABEL_81;
        }
LABEL_216:
        sub_1CE6960(this);
      }
LABEL_81:
      logicfunction = v10->fields.logicfunction;
      funcId = v195->fields.funcId;
      this = (BattleLogicSkill_o *)(*(__int64 (__fastcall **)(int32_t *, _QWORD))(*(_QWORD *)skillInfo + 392LL))(
                                     skillInfo,
                                     *(_QWORD *)(*(_QWORD *)skillInfo + 400LL));
      if ( !logicfunction )
        goto LABEL_215;
      this = (BattleLogicSkill_o *)BattleLogicFunction__procList(
                                     logicfunction,
                                     v12,
                                     funcId,
                                     (DataVals_array *)v78,
                                     1,
                                     1,
                                     0,
                                     0,
                                     0,
                                     1,
                                     1,
                                     0,
                                     (int32_t)this,
                                     0);
LABEL_113:
      v27 = this;
      if ( v9->fields.actortype == 5 )
      {
        if ( !this )
          goto LABEL_215;
        v98 = BasicHelper__IndexValue_int__52372860(
                (System_Collections_Generic_List_T__o *)this[6].monitor,
                0,
                0,
                (const MethodInfo_31F257C *)Method_BasicHelper_IndexValue_int___);
        logictarget = (UnityEngine_Object_o *)v27[1].fields.logictarget;
        v100 = v98;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (BattleLogicSkill_o *)UnityEngine_Object__op_Equality(logictarget, 0, 0);
        if ( v100 >= 1 && ((unsigned __int8)this & 1) != 0 )
        {
          v101 = v10->fields.logic;
          if ( !v101 )
            goto LABEL_215;
          this = (BattleLogicSkill_o *)v101->fields.perf;
          if ( !this )
            goto LABEL_215;
          ServantGameObject = BattlePerformance__getServantGameObject((BattlePerformance_o *)this, v100, 0);
          v27[1].fields.logictarget = (struct BattleLogicTarget_o *)ServantGameObject;
          sub_1CE66A4(
            (GrandQuestFolderBoardItem_o *)&v27[1].fields.logictarget,
            (int32_t)ServantGameObject,
            v103,
            v104,
            v105,
            v106,
            v107,
            v108);
        }
      }
      (*(void (__fastcall **)(int32_t *, _QWORD))(*(_QWORD *)skillInfo + 552LL))(
        skillInfo,
        *(_QWORD *)(*(_QWORD *)skillInfo + 560LL));
      BattleSkillInfoData__UpdateSelectAddIndex((BattleSkillInfoData_o *)skillInfo, -1, 0);
      this = (BattleLogicSkill_o *)v10->fields.logic;
      if ( !this )
        goto LABEL_215;
      BattleLogic__updateConditionsBuffAll((BattleLogic_o *)this, 0, 0, 0);
      if ( v9->fields.IsResetPrevAttackInfo )
      {
        if ( !v27 )
          goto LABEL_215;
        BYTE4(v27[2].klass) = 0;
        this = (BattleLogicSkill_o *)v10->fields.data;
        if ( !this )
          goto LABEL_215;
        BattleData__setCommandAttack((BattleData_o *)this, 0, 0, 0);
      }
      v109 = v10->fields.data;
      if ( !v109 )
        goto LABEL_215;
      actionLogManager = v109->fields.actionLogManager;
      if ( !actionLogManager )
        goto LABEL_215;
      klass = actionLogManager->klass;
      v112 = *(unsigned __int16 *)&actionLogManager->klass->_2.rank;
      if ( *(_WORD *)&actionLogManager->klass->_2.rank )
      {
        p_offset = (BattleActionLogManagerInterface_c **)&klass->_1.interfaceOffsets->offset;
        while ( *(p_offset - 1) != BattleActionLogManagerInterface_TypeInfo )
        {
          --v112;
          p_offset += 2;
          if ( !v112 )
            goto LABEL_133;
        }
        v114 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 5];
      }
      else
      {
LABEL_133:
        v114 = sub_1CBCA7C(actionLogManager, BattleActionLogManagerInterface_TypeInfo, 5);
      }
      this = (BattleLogicSkill_o *)(*(__int64 (__fastcall **)(struct BattleActionLogManagerInterface_o *, BattleLogicTask_o *, _QWORD))v114)(
                                     actionLogManager,
                                     v9,
                                     *(_QWORD *)(v114 + 8));
      if ( !v27 )
        goto LABEL_215;
      if ( BattleActionData__isSkillCutIn((BattleActionData_o *)v27, 0) )
      {
        v121 = (BattleLogicSkill_c *)v27[2].fields.logictarget;
        v27[11].klass = v121;
        sub_1CE66A4((GrandQuestFolderBoardItem_o *)&v27[11], (int32_t)v121, v115, v116, v117, v118, v119, v120);
        v122 = StringLiteral_1/*""*/;
        v27[2].fields.logictarget = (struct BattleLogicTarget_o *)StringLiteral_1/*""*/;
        sub_1CE66A4((GrandQuestFolderBoardItem_o *)&v27[2].fields.logictarget, v122, v123, v124, v125, v126, v127, v128);
        p_logicfunction = (BattleLogicSkill_c **)&v27[2].fields.logicfunction;
        if ( !System_String__IsNullOrEmpty((System_String_o *)v27[2].fields.logicfunction, 0) )
        {
          v136 = *p_logicfunction;
          v27[11].klass = *p_logicfunction;
          sub_1CE66A4((GrandQuestFolderBoardItem_o *)&v27[11], (int32_t)v136, v130, v131, v132, v133, v134, v135);
          v137 = StringLiteral_1/*""*/;
          *p_logicfunction = (BattleLogicSkill_c *)StringLiteral_1/*""*/;
          sub_1CE66A4(
            (GrandQuestFolderBoardItem_o *)&v27[2].fields.logicfunction,
            v137,
            v138,
            v139,
            v140,
            v141,
            v142,
            v143);
        }
      }
      v144 = skillInfo[4];
      v145 = v9->fields.actorIdlist;
      this = (BattleLogicSkill_o *)v10->fields.data;
      if ( v145 )
      {
        if ( !LODWORD(v145->max_length) )
          goto LABEL_216;
        task = (BattleLogicTask_o *)(unsigned int)v145->m_Items[0];
        if ( !this )
          goto LABEL_215;
      }
      else
      {
        task = (BattleLogicTask_o *)0xFFFFFFFFLL;
        if ( !this )
          goto LABEL_215;
      }
      this = (BattleLogicSkill_o *)BattleData__getServantData((BattleData_o *)this, (int32_t)task, 0);
      if ( v144 == 1 || this )
      {
        v146 = v195;
        this = (BattleLogicSkill_o *)SkillLvEntity__IsNoTargetSkipSkill(v195, 0);
        v147 = (unsigned __int8)this & 1;
      }
      else
      {
        v146 = v195;
        v147 = 1;
      }
      if ( (v147 & (LOBYTE(v27[5].monitor) ^ 1)) == 0 && (!BYTE1(v27[6].fields.data) || BYTE2(v27[6].fields.data)) )
      {
        if ( v9->fields.isCanCounterTask )
        {
          v148 = v9->fields.actorIdlist;
          this = (BattleLogicSkill_o *)v10->fields.data;
          if ( v148 )
          {
            if ( !LODWORD(v148->max_length) )
              goto LABEL_216;
            task = (BattleLogicTask_o *)(unsigned int)v148->m_Items[0];
            if ( !this )
              goto LABEL_215;
          }
          else
          {
            task = (BattleLogicTask_o *)0xFFFFFFFFLL;
            if ( !this )
              goto LABEL_215;
          }
          this = (BattleLogicSkill_o *)BattleData__getServantData((BattleData_o *)this, (int32_t)task, 0);
          if ( this )
          {
            v150 = this;
            ((void (__fastcall *)(BattleLogicSkill_o *, struct BattleData_o *, Il2CppClass *))v27->klass[1]._1.element_class)(
              v27,
              v10->fields.data,
              v27->klass[1]._1.castClass);
            this = (BattleLogicSkill_o *)v27[6].monitor;
            if ( !this )
              goto LABEL_215;
            v151 = v10->fields.data;
            v152 = (int32_t)v150->fields.logic;
            this = (BattleLogicSkill_o *)System_Collections_Generic_List_int___ToArray(
                                           (System_Collections_Generic_List_int__o *)this,
                                           (const MethodInfo_38EA9FC *)Method_System_Collections_Generic_List_int__ToArray__);
            if ( !v151 )
              goto LABEL_215;
            BattleData__SetWasAttackTargetIdList(v151, v152, (System_Int32_array *)this, 0);
            v153 = v10->fields.logic;
            if ( !v153 )
              goto LABEL_215;
            this = (BattleLogicSkill_o *)v153->fields.logicnomal;
            if ( !this )
              goto LABEL_215;
            v154 = BattleLogicNomal__taskCounterFunc(
                     (BattleLogicNomal_o *)this,
                     v10->fields.data,
                     BYTE3(v150[10].fields.logictarget) == 0,
                     1,
                     0,
                     0);
            BattleLogic__AddBuffTriggeredTask_47740052(v153, v154, v9, 0);
          }
        }
        v155 = v10->fields.data;
        if ( v9->fields.isFunctionedFunction )
        {
          if ( !v155 )
            goto LABEL_215;
          BattleData__ResetFunctionedFunctionIds(v10->fields.data, 0);
          goto LABEL_178;
        }
        v157 = v9->fields.actorIdlist;
        if ( v157 )
        {
          if ( !LODWORD(v157->max_length) )
            goto LABEL_216;
          v158 = v157->m_Items[0];
        }
        else
        {
          v158 = -1;
        }
        this = (BattleLogicSkill_o *)v27[6].monitor;
        if ( this )
        {
          this = (BattleLogicSkill_o *)System_Collections_Generic_List_int___ToArray(
                                         (System_Collections_Generic_List_int__o *)this,
                                         (const MethodInfo_38EA9FC *)Method_System_Collections_Generic_List_int__ToArray__);
          if ( v155 )
          {
            BattleData__SetFunctionedTargetIdArray(v155, v158, (System_Int32_array *)this, 0);
            v159 = v10->fields.logic;
            if ( v159 )
            {
              FunctionedFunctionBuffTaskArray = BattleLogic__GetFunctionedFunctionBuffTaskArray(
                                                  v10->fields.logic,
                                                  v10->fields.data,
                                                  0);
              BattleLogic__AddBuffTriggeredTask_47740052(v159, FunctionedFunctionBuffTaskArray, v9, 0);
LABEL_178:
              v161 = BattleLogicSkill__MakeAddInvokeSkillTask(v10, (SkillLvMaster_o *)MasterData_object, v146, v9, v156);
              v162 = v146;
              v163 = v161;
              this = (BattleLogicSkill_o *)SkillLvEntity__IsAdditionalSkillInsertCurrentSkillAfter(v162, 0);
              if ( !v10->fields.logic )
                goto LABEL_215;
              if ( ((unsigned __int8)this & 1) != 0 )
                BattleLogic__AddTaskTargetTaskAfter(v10->fields.logic, v9, v163, 0);
              else
                BattleLogic__AddBuffTriggeredTask(v10->fields.logic, v163, v9, 0);
              v164 = v10->fields.data;
              this = (BattleLogicSkill_o *)(*(__int64 (__fastcall **)(int32_t *, _QWORD))(*(_QWORD *)skillInfo + 392LL))(
                                             skillInfo,
                                             *(_QWORD *)(*(_QWORD *)skillInfo + 400LL));
              if ( !v164 )
                goto LABEL_215;
              BattleData__AddUseSkillId(v164, (int32_t)this, 0);
              if ( BattleActionData__checkSummonServantList((BattleActionData_o *)v27, 0) )
              {
                v165 = (BattleLogicTask_o *)sub_1CE694C(BattleLogicTask_TypeInfo);
                BattleLogicTask___ctor(v165, v166);
                if ( !v165 )
                  goto LABEL_215;
                v165->fields.actiontype = 24;
                this = (BattleLogicSkill_o *)v10->fields.logic;
                if ( !this )
                  goto LABEL_215;
                BattleLogic__AddBuffTriggeredTask((BattleLogic_o *)this, v165, v9, 0);
              }
              if ( SkillEntity__GetCutinAdditionalTime(Entity, 0) > 0.0 )
              {
                this = (BattleLogicSkill_o *)SkillEntity__getSkillCutInId(Entity, 0);
                if ( !(_DWORD)this )
                {
                  v173 = v10->fields.logic;
                  if ( !v173 )
                    goto LABEL_215;
                  perf = v173->fields.perf;
                  CutinAdditionalTime = SkillEntity__GetCutinAdditionalTime(Entity, 0);
                  if ( !perf )
                    goto LABEL_215;
                  BattlePerformance__InsertWaitAction(perf, CutinAdditionalTime, 1, 0);
                  if ( v27[2].fields.logictarget )
                  {
                    v176 = v10->fields.data;
                    if ( !v176 )
                      goto LABEL_215;
                    v177 = v176->fields.perf;
                    if ( !v177 )
                      goto LABEL_215;
                    this = (BattleLogicSkill_o *)v177->fields.infoComp;
                    if ( !this )
                      goto LABEL_215;
                    BattleInformationComponent__showCommonMessage(
                      (BattleInformationComponent_o *)this,
                      (BattleActionData_o *)v27,
                      0);
                    v27[2].fields.logictarget = 0;
                    sub_1CE66A4(
                      (GrandQuestFolderBoardItem_o *)&v27[2].fields.logictarget,
                      0,
                      v178,
                      v179,
                      v180,
                      v181,
                      v182,
                      v183);
                    BYTE4(v27[6].fields.logic) = 1;
                  }
                }
              }
              if ( v9->fields.IsNotShowSkillMessage )
              {
                v27[2].fields.logictarget = 0;
                sub_1CE66A4(
                  (GrandQuestFolderBoardItem_o *)&v27[2].fields.logictarget,
                  0,
                  v167,
                  v168,
                  v169,
                  v170,
                  v171,
                  v172);
                BYTE4(v27[6].fields.logic) = 1;
              }
              this = (BattleLogicSkill_o *)SkillEntity__IsCheckUpdateShiftServant(Entity, 0);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                v185 = (BattleLogicTask_o *)sub_1CE694C(CheckUpdateShiftTask_TypeInfo);
                BattleLogicTask___ctor(v185, v186);
                v185->fields.actiontype = 68;
                this = (BattleLogicSkill_o *)v10->fields.logic;
                if ( !this )
                  goto LABEL_215;
                this = (BattleLogicSkill_o *)BattleLogic__AddTaskTargetTaskAfter((BattleLogic_o *)this, v9, v185, 0);
              }
              v187 = v9->fields.actorIdlist;
              if ( v187 )
              {
                if ( !LODWORD(v187->max_length) )
                  goto LABEL_216;
                v188 = v187->m_Items[0];
              }
              else
              {
                v188 = -1;
              }
              BattleLogicSkill__ExecuteShortenSkillBuff(v10, (BattleSkillInfoData_o *)skillInfo, v188, v184);
              if ( !v9->fields.isForcedSpeedOne )
              {
                this = (BattleLogicSkill_o *)SkillEntity__IsBehaveAsAssistSkill(Entity, 0);
                if ( ((unsigned __int8)this & 1) != 0 )
                {
                  v190 = v10->fields.logic;
                  if ( !v190 )
                    goto LABEL_215;
                  this = (BattleLogicSkill_o *)v190->fields.perf;
                  if ( !this )
                    goto LABEL_215;
                  this = (BattleLogicSkill_o *)BattlePerformance__isEnableSkipStartQuest((BattlePerformance_o *)this, 0);
                  v190->fields.isEnableSkipAssistSkill = (unsigned __int8)this & 1;
                  v191 = v10->fields.logic;
                  if ( !v191 )
                    goto LABEL_215;
                  v192 = v191->fields.perf;
                  if ( !v192 )
                    goto LABEL_215;
                  v192->fields.isEnableSkipSkillCutIn = v191->fields.isEnableSkipAssistSkill;
                }
              }
              BattleLogicTask__SetInterruptLoadChangeModelAction(v9, (BattleActionData_o *)v27, v189);
              return (BattleActionData_o *)v27;
            }
          }
        }
LABEL_215:
        sub_1CE6958(this, task);
      }
      return 0;
    }
    v83 = skillInfo[23];
    if ( (v83 & 0x80000000) == 0 )
      v12->fields.commandType = v83;
    functionIdArray = v195->fields.funcId;
    this = (BattleLogicSkill_o *)SkillLvEntity__getDataValsList(v195, 0);
    dataValsArray = (DataVals_array *)this;
    v85 = baseVals == 0 || !v8;
    if ( baseVals != 0 && v8 )
    {
      v86 = v9->fields.actorIdlist;
      if ( v86 )
      {
        if ( !LODWORD(v86->max_length) )
          goto LABEL_216;
        v87 = v86->m_Items[0];
      }
      else
      {
        v87 = -1;
      }
      if ( !BattleLogicSkill__SetSkillCopyFunction(v10, v195, baseVals, &functionIdArray, &dataValsArray, v87, v84) )
        return 0;
      this = (BattleLogicSkill_o *)v10->fields.data;
      if ( !this )
        goto LABEL_215;
      this = (BattleLogicSkill_o *)BattleData__isEnemyID((BattleData_o *)this, v12->fields.actorId, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v88 = v10->fields.data;
        if ( !v88 )
          goto LABEL_215;
        v89 = v88->fields.currentTurn == 0;
      }
      else
      {
        v89 = 0;
      }
      v12->fields.isReversalShortBuffTurn = v89;
    }
    v194 = Entity;
    if ( skillInfo[4] == 1 )
    {
      argument = sub_1CE694C(BattleLogicFunction_FunctionArgument_TypeInfo);
      BattleLogicFunction_FunctionArgument___ctor((BattleLogicFunction_FunctionArgument_o *)argument, 0);
      if ( !argument )
        goto LABEL_215;
      *(_DWORD *)(argument + 20) = skillInfo[4];
      if ( !v9->fields.isSideEffectTriggerSkill )
      {
LABEL_107:
        p_isShowBattlePointEffect = &v9->fields.isShowBattlePointEffect;
        if ( !v9->fields.isShowBattlePointEffect )
        {
          v94 = v85;
          v93 = MasterData_object;
          goto LABEL_111;
        }
        v93 = MasterData_object;
LABEL_109:
        v94 = v85;
        *(_BYTE *)(argument + 40) = *p_isShowBattlePointEffect;
LABEL_111:
        *(_BYTE *)(argument + 60) = 1;
        *(_QWORD *)(argument + 72) = *((_QWORD *)skillInfo + 21);
        v95 = v10->fields.logicfunction;
        v97 = dataValsArray;
        v96 = functionIdArray;
        this = (BattleLogicSkill_o *)(*(__int64 (__fastcall **)(int32_t *, _QWORD))(*(_QWORD *)skillInfo + 392LL))(
                                       skillInfo,
                                       *(_QWORD *)(*(_QWORD *)skillInfo + 400LL));
        if ( !v95 )
          goto LABEL_215;
        this = (BattleLogicSkill_o *)BattleLogicFunction__procList(
                                       v95,
                                       v12,
                                       v96,
                                       v97,
                                       0,
                                       1,
                                       0,
                                       0,
                                       0,
                                       v94,
                                       1,
                                       (BattleLogicFunction_FunctionArgument_o *)argument,
                                       (int32_t)this,
                                       0);
        MasterData_object = v93;
        Entity = v194;
        goto LABEL_113;
      }
    }
    else
    {
      if ( !v9->fields.isSideEffectTriggerSkill )
      {
        v93 = MasterData_object;
        p_isShowBattlePointEffect = &v9->fields.isShowBattlePointEffect;
        isShowBattlePointEffect = v9->fields.isShowBattlePointEffect;
        argument = sub_1CE694C(BattleLogicFunction_FunctionArgument_TypeInfo);
        BattleLogicFunction_FunctionArgument___ctor((BattleLogicFunction_FunctionArgument_o *)argument, 0);
        if ( !isShowBattlePointEffect )
        {
          v94 = v85;
          if ( !argument )
            goto LABEL_215;
          goto LABEL_111;
        }
        if ( !argument )
          goto LABEL_215;
        goto LABEL_109;
      }
      argument = sub_1CE694C(BattleLogicFunction_FunctionArgument_TypeInfo);
      BattleLogicFunction_FunctionArgument___ctor((BattleLogicFunction_FunctionArgument_o *)argument, 0);
    }
    overwriteFuncSideEffectArg = (BattleLogicFunction_SkillSideEffectFunctionArgument_o *)v9->fields.overwriteFuncSideEffectArg;
    if ( !overwriteFuncSideEffectArg )
    {
      overwriteFuncSideEffectArg = (BattleLogicFunction_SkillSideEffectFunctionArgument_o *)sub_1CE694C(BattleLogicFunction_SkillSideEffectFunctionArgument_TypeInfo);
      BattleLogicFunction_SkillSideEffectFunctionArgument___ctor(overwriteFuncSideEffectArg, 0);
    }
    if ( !argument )
      goto LABEL_215;
    BattleLogicFunction_FunctionArgument__SetAfterFuncSideEffectArgument(
      (BattleLogicFunction_FunctionArgument_o *)argument,
      (BattleLogicFunction_FuncSideEffectFunctionArgument_o *)overwriteFuncSideEffectArg,
      0);
    goto LABEL_107;
  }
  return (BattleActionData_o *)v27;
}


BattleLogicTask_array *BattleLogicSkill__getGimmickTask(BattleLogicSkill_o *this, const MethodInfo *method)
{
  BattleData_o *data; // x0
  BattleData_o *v4; // x20
  System_Int32_array *v5; // x21
  const MethodInfo *v6; // x2
  int32_t HitGimmickSkillId; // w0
  unsigned int v8; // w22
  __int64 v9; // x21
  __int64 v10; // x20
  const MethodInfo *v11; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  BattleData_o *v18; // x8
  System_Int32_array *v19; // x19
  System_Int32_array *FieldPlayerServantIDList; // x0
  const MethodInfo *v21; // x6
  const MethodInfo *v22; // x3
  BattleData_o *v23; // x19
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  __int64 v31; // x0

  if ( (byte_4E07DAC & 1) == 0 )
  {
    sub_1CE6700(&BattleLogicTask___TypeInfo);
    sub_1CE6700(&BattleLogicTask_TypeInfo);
    sub_1CE6700(&BattleSkillInfoData_TypeInfo);
    sub_1CE6700(&int___TypeInfo);
    byte_4E07DAC = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_26;
  data = (BattleData_o *)BattleData__GetGimmickSkillIdArray(data, 0);
  if ( !this->fields.data )
    goto LABEL_26;
  v4 = data;
  data = (BattleData_o *)BattleData__GetGimmickSkillRateArray(this->fields.data, 0);
  if ( !this->fields.data )
    goto LABEL_26;
  v5 = (System_Int32_array *)data;
  data = (BattleData_o *)BattleData__GetReelIconArray(this->fields.data, 0);
  if ( !v4 )
    goto LABEL_26;
  if ( !v4->fields.m_CancellationTokenSource )
    return 0;
  if ( !v5 )
    goto LABEL_26;
  if ( !v5->max_length )
    return 0;
  if ( !data )
    goto LABEL_26;
  if ( !data->fields.m_CancellationTokenSource )
    return 0;
  HitGimmickSkillId = BattleLogicSkill__GetHitGimmickSkillId((BattleLogicSkill_o *)data, v5, v6);
  if ( HitGimmickSkillId < 0 )
    return 0;
  v8 = HitGimmickSkillId;
  v9 = sub_1CE694C(BattleSkillInfoData_TypeInfo);
  BattleSkillInfoData___ctor((BattleSkillInfoData_o *)v9, 0);
  if ( !v9 )
    goto LABEL_26;
  *(_DWORD *)(v9 + 24) = -1;
  *(_QWORD *)(v9 + 16) = 20;
  if ( v8 >= LODWORD(v4->fields.m_CancellationTokenSource) )
    goto LABEL_27;
  (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v9 + 376LL))(
    v9,
    *((unsigned int *)&v4->fields.rootfsm + v8),
    *(_QWORD *)(*(_QWORD *)v9 + 384LL));
  *(_DWORD *)(v9 + 36) = 1;
  v10 = sub_1CE694C(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor((BattleLogicTask_o *)v10, v11);
  data = (BattleData_o *)sub_1CE67A8(int___TypeInfo, 1);
  if ( !data )
    goto LABEL_26;
  method = (const MethodInfo *)data;
  if ( !LODWORD(data->fields.m_CancellationTokenSource) )
    goto LABEL_27;
  LODWORD(data->fields.rootfsm) = v8;
  if ( !v10 )
    goto LABEL_26;
  *(_QWORD *)(v10 + 160) = data;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v10 + 160), (int32_t)data, v12, v13, v14, v15, v16, v17);
  data = this->fields.data;
  if ( !data
    || (data = (BattleData_o *)BattleData__getFieldEnemyServantIDList(data, 0, 0), (v18 = this->fields.data) == 0)
    || (v19 = (System_Int32_array *)data,
        FieldPlayerServantIDList = BattleData__getFieldPlayerServantIDList(v18, 0, 0),
        BattleLogicTask__setActionSkill(
          (BattleLogicTask_o *)v10,
          (BattleSkillInfoData_o *)v9,
          v19,
          FieldPlayerServantIDList,
          0,
          0,
          v21),
        BattleLogicTask__setActor((BattleLogicTask_o *)v10, 5, -1, v22),
        (data = (BattleData_o *)sub_1CE67A8(BattleLogicTask___TypeInfo, 1)) == 0) )
  {
LABEL_26:
    sub_1CE6958(data, method);
  }
  v23 = data;
  data = (BattleData_o *)sub_1CE683C(v10, data->klass->_1.element_class);
  if ( !data )
  {
    v31 = sub_1CE697C(0);
    sub_1CE6828(v31, 0);
  }
  if ( !LODWORD(v23->fields.m_CancellationTokenSource) )
LABEL_27:
    sub_1CE6960(data);
  v23->fields.rootfsm = (struct PlayMakerFSM_o *)v10;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&v23->fields.rootfsm, v10, v24, v25, v26, v27, v28, v29);
  return (BattleLogicTask_array *)v23;
}


BattleLogicTask_array *BattleLogicSkill__getQuestBehaviorSkillTask(BattleLogicSkill_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x0
  QuestBehaviorMaster_o *v6; // x20
  int32_t v7; // w21
  int32_t Phase; // w0
  QuestBehaviorEntity_array *BattleSkill; // x0
  QuestBehaviorEntity_array *v10; // x20
  System_Collections_Generic_List_object__o *v11; // x21
  __int64 v12; // x25
  QuestBehaviorEntity_o **m_Items; // x26
  __int64 v14; // x22
  unsigned int v15; // w0
  BattleLogicTask_o *v16; // x23
  const MethodInfo *v17; // x1
  const MethodInfo *v18; // x3
  System_Int32_array *v19; // x24
  System_Int32_array *FieldPlayerServantIDList; // x0
  const MethodInfo *v21; // x6
  const MethodInfo *v22; // x3
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  Il2CppClass **v32; // x0

  if ( (byte_4E07DAB & 1) == 0 )
  {
    sub_1CE6700(&BattleLogicTask_TypeInfo);
    sub_1CE6700(&BattleSkillInfoData_TypeInfo);
    sub_1CE6700(&Method_DataManager_GetMasterData_QuestBehaviorMaster___);
    sub_1CE6700(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1CE6700(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1CE6700(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1CE6700(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4E07DAB = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_QuestBehaviorMaster___);
  if ( !MasterData_object )
    return 0;
  v6 = (QuestBehaviorMaster_o *)MasterData_object;
  Instance = (DataManager_o *)this->fields.data;
  if ( !Instance )
    goto LABEL_28;
  Instance = (DataManager_o *)BattleData__getQuestId((BattleData_o *)Instance, 0);
  if ( !this->fields.data )
    goto LABEL_28;
  v7 = (int)Instance;
  Phase = BattleData__getPhase(this->fields.data, 0);
  BattleSkill = QuestBehaviorMaster__getBattleSkill(v6, v7, Phase, 0);
  if ( !BattleSkill )
    return 0;
  v10 = BattleSkill;
  v11 = (System_Collections_Generic_List_object__o *)sub_1CE694C(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_3905734 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  if ( SLODWORD(v10->max_length) >= 1 )
  {
    v12 = 0;
    m_Items = v10->m_Items;
    while ( 1 )
    {
      v14 = sub_1CE694C(BattleSkillInfoData_TypeInfo);
      BattleSkillInfoData___ctor((BattleSkillInfoData_o *)v14, 0);
      if ( !v14 )
        break;
      *(_DWORD *)(v14 + 24) = -1;
      *(_QWORD *)(v14 + 16) = 20;
      if ( (unsigned int)v12 >= LODWORD(v10->max_length) )
        goto LABEL_29;
      Instance = (DataManager_o *)m_Items[v12];
      if ( !Instance )
        break;
      v15 = QuestBehaviorEntity__getskillId((QuestBehaviorEntity_o *)Instance, 0);
      Instance = (DataManager_o *)(*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v14 + 376LL))(
                                    v14,
                                    v15,
                                    *(_QWORD *)(*(_QWORD *)v14 + 384LL));
      if ( (unsigned int)v12 >= LODWORD(v10->max_length) )
LABEL_29:
        sub_1CE6960(Instance);
      Instance = (DataManager_o *)m_Items[v12];
      if ( !Instance )
        break;
      *(_DWORD *)(v14 + 36) = QuestBehaviorEntity__getskillLv((QuestBehaviorEntity_o *)Instance, 0);
      v16 = (BattleLogicTask_o *)sub_1CE694C(BattleLogicTask_TypeInfo);
      BattleLogicTask___ctor(v16, v17);
      if ( !v16 )
        break;
      BattleLogicTask__setActor(v16, 5, -1, v18);
      Instance = (DataManager_o *)this->fields.data;
      if ( !Instance )
        break;
      Instance = (DataManager_o *)BattleData__getFieldEnemyServantIDList((BattleData_o *)Instance, 0, 0);
      if ( !this->fields.data )
        break;
      v19 = (System_Int32_array *)Instance;
      FieldPlayerServantIDList = BattleData__getFieldPlayerServantIDList(this->fields.data, 0, 0);
      BattleLogicTask__setActionSkill(v16, (BattleSkillInfoData_o *)v14, v19, FieldPlayerServantIDList, 0, 0, v21);
      BattleLogicTask__setActor(v16, 5, -1, v22);
      if ( !v11 )
        break;
      items = v11->fields._items;
      v30 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
      ++v11->fields._version;
      if ( !items )
        break;
      size = v11->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v11,
          (Il2CppObject *)v16,
          *(const MethodInfo_3905F68 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
      }
      else
      {
        v32 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v32[4] = (Il2CppClass *)v16;
        sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v32 + 4), (int32_t)v16, v23, v24, v25, v26, v27, v28);
      }
      if ( (int)++v12 >= SLODWORD(v10->max_length) )
        return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                          v11,
                                          (const MethodInfo_3907AC0 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    }
LABEL_28:
    sub_1CE6958(Instance, v4);
  }
  if ( !v11 )
    goto LABEL_28;
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v11,
                                    (const MethodInfo_3907AC0 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


BattleLogicTask_array *BattleLogicSkill__taskCommandSpell(
        BattleLogicSkill_o *this,
        int32_t skillId,
        int32_t skillLv,
        System_Int32_array *ptTargetList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v8; // x21
  BattleLogicTask_o *v9; // x23
  const MethodInfo *v10; // x1
  __int64 v11; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x4
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0
  const MethodInfo *v24; // x4
  System_Collections_Generic_IEnumerable_T__o *SkillTargetedBeforeFunctionSkill; // x0

  if ( (byte_4E07DA2 & 1) == 0 )
  {
    sub_1CE6700(&BattleLogicTask_TypeInfo);
    sub_1CE6700(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1CE6700(&Method_System_Collections_Generic_List_BattleLogicTask__InsertRange__);
    sub_1CE6700(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1CE6700(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1CE6700(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    byte_4E07DA2 = 1;
  }
  v8 = (System_Collections_Generic_List_object__o *)sub_1CE694C(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_3905734 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v9 = (BattleLogicTask_o *)sub_1CE694C(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor(v9, v10);
  if ( !v9
    || (BattleLogicTask__setCommandSpell(v9, skillId, 0, ptTargetList, v13), !v8)
    || (items = v8->fields._items,
        v21 = Method_System_Collections_Generic_List_BattleLogicTask__Add__,
        ++v8->fields._version,
        !items) )
  {
    sub_1CE6958(v11, v12);
  }
  size = v8->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v8,
      (Il2CppObject *)v9,
      *(const MethodInfo_3905F68 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
  }
  else
  {
    v23 = &items->obj.klass + size;
    v8->fields._size = size + 1;
    v23[4] = (Il2CppClass *)v9;
    sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v23 + 4), (int32_t)v9, v14, v15, v16, v17, v18, v19);
  }
  SkillTargetedBeforeFunctionSkill = (System_Collections_Generic_IEnumerable_T__o *)BattleLogicSkill__GetSkillTargetedBeforeFunctionSkill(
                                                                                      this,
                                                                                      v9,
                                                                                      ptTargetList,
                                                                                      0,
                                                                                      v24);
  System_Collections_Generic_List_object___InsertRange(
    v8,
    0,
    SkillTargetedBeforeFunctionSkill,
    (const MethodInfo_3906F4C *)Method_System_Collections_Generic_List_BattleLogicTask__InsertRange__);
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v8,
                                    (const MethodInfo_3907AC0 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


BattleLogicTask_array *BattleLogicSkill__taskSkill(
        BattleLogicSkill_o *this,
        BattleSkillInfoData_o *skillInfo,
        System_Int32_array *ptTargetList,
        System_Int32_array *enemyTargetList,
        bool checkAlive,
        bool checkRevengeId,
        bool isCanCounterSkill,
        bool isManualBoot,
        bool isRecursiveCalled,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v17; // x19
  BattleLogicTask_o *execTask; // x23
  const MethodInfo *v19; // x1
  __int64 data; // x0
  __int64 svtUniqueId; // x1
  const MethodInfo *v22; // x6
  BattleServantData_o *v23; // x25
  const MethodInfo *v24; // x3
  BattleLogicTarget_o *logictarget; // x20
  int32_t v26; // w21
  const MethodInfo *v27; // x4
  int32_t GlobalTargetId; // w0
  BattleData_o *v29; // x21
  int32_t v30; // w29
  System_Int32_array *AddIndiv; // x20
  int32_t v32; // w21
  const MethodInfo *v33; // x6
  BattleLogicTarget_o *v34; // x29
  int32_t v35; // w21
  int32_t TargetAiAct; // w20
  const MethodInfo *v37; // x6
  bool IsNeedUpHate; // w0
  const MethodInfo *v39; // x2
  bool isPlayerID; // w0
  int32_t v41; // w2
  int32_t v42; // w1
  int32_t v43; // w2
  int32_t v44; // w3
  System_String_o *v45; // x4
  int32_t v46; // w5
  int64_t v47; // x6
  System_String_o *v48; // x7
  struct System_Object_array *items; // x8
  _QWORD *v50; // x9
  __int64 size; // x10
  Il2CppClass **v52; // x0
  System_Collections_Generic_List_object__o *v53; // x24
  __int64 v54; // x8
  __int64 v55; // x25
  __int64 v56; // x9
  int *v57; // x10
  __int64 v58; // x0
  const MethodInfo *v59; // x4
  __int64 v60; // x1
  __int64 v61; // x25
  __int64 v62; // x8
  __int64 v63; // x9
  int *v64; // x10
  __int64 v65; // x0
  __int64 v66; // x8
  __int64 v67; // x9
  int *v68; // x10
  __int64 v69; // x0
  BattleSkillInfoData_o *v70; // x26
  __int64 v71; // x0
  __int64 v72; // x1
  System_Collections_Generic_IEnumerable_T__o *v73; // x0
  __int64 v74; // x8
  __int64 v75; // x9
  int *v76; // x10
  __int64 v77; // x0
  BattleLogicSkill___c_c *v78; // x0
  System_Func_object__int__o *_9__5_0; // x20
  Il2CppObject *v80; // x21
  struct BattleLogicSkill___c_StaticFields *static_fields; // x0
  int32_t v82; // w2
  int32_t v83; // w3
  System_String_o *v84; // x4
  int32_t v85; // w5
  int64_t v86; // x6
  System_String_o *v87; // x7
  System_Collections_Generic_IEnumerable_T__o *v88; // x0
  const MethodInfo *isDeadToEnableUpHate; // [xsp+8h] [xbp-98h]
  const MethodInfo *v91; // [xsp+18h] [xbp-88h]
  bool v92; // [xsp+28h] [xbp-78h]
  bool isNotTargetLock; // [xsp+3Ch] [xbp-64h] BYREF

  if ( (byte_4E07DA1 & 1) == 0 )
  {
    sub_1CE6700(&Method_BasicHelper_StableSort_BattleLogicTask___);
    sub_1CE6700(&BattleLogicTask_TypeInfo);
    sub_1CE6700(&Method_System_Linq_Enumerable_Any_BattleLogicTask___);
    sub_1CE6700(&System_Func_BattleLogicTask__int__TypeInfo);
    sub_1CE6700(&System_IDisposable_TypeInfo);
    sub_1CE6700(&System_Collections_Generic_IEnumerable_BattleSkillInfoData__TypeInfo);
    sub_1CE6700(&System_Collections_Generic_IEnumerator_BattleSkillInfoData__TypeInfo);
    sub_1CE6700(&System_Collections_IEnumerator_TypeInfo);
    sub_1CE6700(&int___TypeInfo);
    sub_1CE6700(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
    sub_1CE6700(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1CE6700(&Method_System_Collections_Generic_List_BattleLogicTask__InsertRange__);
    sub_1CE6700(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1CE6700(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1CE6700(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    sub_1CE6700(&Method_BattleLogicSkill___c__taskSkill_b__5_0__);
    sub_1CE6700(&BattleLogicSkill___c_TypeInfo);
    byte_4E07DA1 = 1;
  }
  isNotTargetLock = 0;
  v17 = (System_Collections_Generic_List_object__o *)sub_1CE694C(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_3905734 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  execTask = (BattleLogicTask_o *)sub_1CE694C(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor(execTask, v19);
  if ( !skillInfo )
    goto LABEL_97;
  data = (__int64)this->fields.data;
  v92 = isManualBoot;
  if ( !data )
    goto LABEL_97;
  data = (__int64)BattleData__getServantData((BattleData_o *)data, skillInfo->fields.svtUniqueId, 0);
  v23 = (BattleServantData_o *)data;
  if ( data )
  {
    data = BattleSkillInfoData__isServantSkill(skillInfo, 0);
    if ( (data & 1) != 0 )
    {
      if ( !execTask )
        goto LABEL_97;
      execTask->fields.isCanCounterTask = isCanCounterSkill;
      execTask->fields.isSideEffectTriggerSkill = isCanCounterSkill;
    }
  }
  if ( enemyTargetList )
  {
    if ( !execTask )
      goto LABEL_97;
    BattleLogicTask__setActionSkill(execTask, skillInfo, enemyTargetList, ptTargetList, checkAlive, checkRevengeId, v22);
    goto LABEL_31;
  }
  svtUniqueId = (unsigned int)skillInfo->fields.svtUniqueId;
  if ( (_DWORD)svtUniqueId == -1 )
    goto LABEL_15;
  data = (__int64)this->fields.data;
  if ( !data )
    goto LABEL_97;
  data = BattleData__isPlayerID((BattleData_o *)data, svtUniqueId, 0);
  if ( (data & 1) != 0 )
  {
LABEL_15:
    if ( !this->fields.data )
      goto LABEL_97;
    if ( BattleSkillInfoData__IsTargetTypeEnemy(skillInfo, 0) )
    {
      logictarget = this->fields.logictarget;
      v26 = skillInfo->fields.svtUniqueId;
      data = (__int64)BattleSkillInfoData__GetAddIndiv(skillInfo, 0);
      if ( !logictarget )
        goto LABEL_97;
      GlobalTargetId = BattleLogicTarget__getGlobalTargetId(
                         logictarget,
                         v26,
                         v26 == -1,
                         (System_Int32_array *)data,
                         v27);
    }
    else
    {
      v29 = this->fields.data;
      v30 = skillInfo->fields.svtUniqueId;
      AddIndiv = BattleSkillInfoData__GetAddIndiv(skillInfo, 0);
      data = BattleSkillInfoData__IsNeedUpHate(skillInfo, 0);
      if ( !v29 )
        goto LABEL_97;
      GlobalTargetId = BattleData__getTargetLock(v29, v30, &isNotTargetLock, v30 == -1, AddIndiv, data & 1, 0);
    }
    v32 = GlobalTargetId;
    data = sub_1CE67A8(int___TypeInfo, 1);
    if ( !data )
      goto LABEL_97;
    if ( *(_DWORD *)(data + 24) )
    {
      *(_DWORD *)(data + 32) = v32;
      if ( !execTask )
        goto LABEL_97;
      BattleLogicTask__setActionSkill(
        execTask,
        skillInfo,
        (System_Int32_array *)data,
        ptTargetList,
        checkAlive,
        checkRevengeId,
        v33);
      enemyTargetList = 0;
      goto LABEL_31;
    }
LABEL_99:
    sub_1CE6960(data);
  }
  data = (__int64)this->fields.data;
  if ( !data )
    goto LABEL_97;
  v34 = this->fields.logictarget;
  v35 = skillInfo->fields.svtUniqueId;
  data = (__int64)BattleData__getFieldPlayerServantIDList((BattleData_o *)data, 0, 0);
  if ( !v34 )
    goto LABEL_97;
  TargetAiAct = BattleLogicTarget__getTargetAiAct(
                  v34,
                  1,
                  v35,
                  0,
                  (System_Int32_array *)data,
                  1,
                  0,
                  0,
                  0,
                  (bool)&dword_0 + 1,
                  execTask,
                  v91);
  data = sub_1CE67A8(int___TypeInfo, 1);
  if ( !data )
    goto LABEL_97;
  if ( !*(_DWORD *)(data + 24) )
    goto LABEL_99;
  enemyTargetList = 0;
  *(_DWORD *)(data + 32) = TargetAiAct;
  if ( !execTask )
    goto LABEL_97;
  BattleLogicTask__setActionSkill(
    execTask,
    skillInfo,
    (System_Int32_array *)data,
    ptTargetList,
    checkAlive,
    checkRevengeId,
    v37);
  IsNeedUpHate = BattleSkillInfoData__IsNeedUpHate(skillInfo, 0);
  BattleLogicTask__RevertUnusedNoNeedUpHateBuff(execTask, IsNeedUpHate, v39);
LABEL_31:
  svtUniqueId = (unsigned int)skillInfo->fields.svtUniqueId;
  if ( (_DWORD)svtUniqueId == -1 )
  {
    v42 = 1;
    v41 = -1;
  }
  else
  {
    data = (__int64)this->fields.data;
    if ( !data )
      goto LABEL_97;
    isPlayerID = BattleData__isPlayerID((BattleData_o *)data, svtUniqueId, 0);
    v41 = skillInfo->fields.svtUniqueId;
    if ( isPlayerID )
      v42 = 2;
    else
      v42 = 3;
  }
  BattleLogicTask__setActor(execTask, v42, v41, v24);
  if ( !v17
    || (items = v17->fields._items,
        v50 = Method_System_Collections_Generic_List_BattleLogicTask__Add__,
        ++v17->fields._version,
        !items) )
  {
LABEL_97:
    sub_1CE6958(data, svtUniqueId);
  }
  size = v17->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v17,
      (Il2CppObject *)execTask,
      *(const MethodInfo_3905F68 **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
  }
  else
  {
    v52 = &items->obj.klass + size;
    v17->fields._size = size + 1;
    v52[4] = (Il2CppClass *)execTask;
    sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v52 + 4), (int32_t)execTask, v43, v44, v45, v46, v47, v48);
  }
  if ( !v23 || !v92 )
  {
    if ( isRecursiveCalled )
      return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                        v17,
                                        (const MethodInfo_3907AC0 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
LABEL_51:
    v53 = (System_Collections_Generic_List_object__o *)sub_1CE694C(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v53,
      (const MethodInfo_3905734 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    goto LABEL_82;
  }
  v53 = (System_Collections_Generic_List_object__o *)sub_1CE694C(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v53,
    (const MethodInfo_3905734 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  data = (__int64)BattleServantData__EnumerateSkillBeforeFunctionSkill(v23, this->fields.data, 0);
  if ( !data )
    goto LABEL_97;
  v54 = *(_QWORD *)data;
  v55 = data;
  v56 = *(unsigned __int16 *)(*(_QWORD *)data + 302LL);
  if ( *(_WORD *)(*(_QWORD *)data + 302LL) )
  {
    v57 = (int *)(*(_QWORD *)(v54 + 176) + 8LL);
    while ( *((System_Collections_Generic_IEnumerable_BattleSkillInfoData__c **)v57 - 1) != System_Collections_Generic_IEnumerable_BattleSkillInfoData__TypeInfo )
    {
      --v56;
      v57 += 4;
      if ( !v56 )
        goto LABEL_49;
    }
    v58 = v54 + 16LL * *v57 + 312;
  }
  else
  {
LABEL_49:
    v58 = sub_1CBCA7C(data, System_Collections_Generic_IEnumerable_BattleSkillInfoData__TypeInfo, 0);
  }
  v61 = (*(__int64 (__fastcall **)(__int64, _QWORD))v58)(v55, *(_QWORD *)(v58 + 8));
  if ( !v61 )
    sub_1CE6958(0, v60);
  while ( 1 )
  {
    v62 = *(_QWORD *)v61;
    v63 = *(unsigned __int16 *)(*(_QWORD *)v61 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v61 + 302LL) )
    {
      v64 = (int *)(*(_QWORD *)(v62 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v64 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v63;
        v64 += 4;
        if ( !v63 )
          goto LABEL_58;
      }
      v65 = v62 + 16LL * *v64 + 312;
    }
    else
    {
LABEL_58:
      v65 = sub_1CBCA7C(v61, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v65)(v61, *(_QWORD *)(v65 + 8)) & 1) == 0 )
      break;
    v66 = *(_QWORD *)v61;
    v67 = *(unsigned __int16 *)(*(_QWORD *)v61 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v61 + 302LL) )
    {
      v68 = (int *)(*(_QWORD *)(v66 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BattleSkillInfoData__c **)v68 - 1) != System_Collections_Generic_IEnumerator_BattleSkillInfoData__TypeInfo )
      {
        --v67;
        v68 += 4;
        if ( !v67 )
          goto LABEL_65;
      }
      v69 = v66 + 16LL * *v68 + 312;
    }
    else
    {
LABEL_65:
      v69 = sub_1CBCA7C(v61, System_Collections_Generic_IEnumerator_BattleSkillInfoData__TypeInfo, 0);
    }
    v70 = (BattleSkillInfoData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v69)(v61, *(_QWORD *)(v69 + 8));
    v71 = sub_1CE67A8(int___TypeInfo, 1);
    if ( !v70 )
      sub_1CE6958(v71, v72);
    if ( !v71 )
      sub_1CE6958(0, v72);
    if ( !*(_DWORD *)(v71 + 24) )
      sub_1CE6960(v71);
    *(_DWORD *)(v71 + 32) = v70->fields.svtUniqueId;
    v73 = (System_Collections_Generic_IEnumerable_T__o *)BattleLogicSkill__taskSkill(
                                                           this,
                                                           v70,
                                                           (System_Int32_array *)v71,
                                                           0,
                                                           0,
                                                           0,
                                                           0,
                                                           0,
                                                           1,
                                                           isDeadToEnableUpHate);
    if ( !v53 )
      sub_1CE6958(v73, v73);
    System_Collections_Generic_List_object___AddRange(
      v53,
      v73,
      (const MethodInfo_3906174 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
  }
  v74 = *(_QWORD *)v61;
  v75 = *(unsigned __int16 *)(*(_QWORD *)v61 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v61 + 302LL) )
  {
    v76 = (int *)(*(_QWORD *)(v74 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v76 - 1) != System_IDisposable_TypeInfo )
    {
      --v75;
      v76 += 4;
      if ( !v75 )
        goto LABEL_76;
    }
    v77 = v74 + 16LL * *v76 + 312;
  }
  else
  {
LABEL_76:
    v77 = sub_1CBCA7C(v61, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v77)(v61, *(_QWORD *)(v77 + 8));
  if ( isRecursiveCalled )
  {
    if ( !v53 )
      return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                        v17,
                                        (const MethodInfo_3907AC0 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    goto LABEL_84;
  }
  if ( !v53 )
    goto LABEL_51;
LABEL_82:
  data = (__int64)BattleLogicSkill__GetSkillTargetedBeforeFunctionSkill(
                    this,
                    execTask,
                    ptTargetList,
                    enemyTargetList,
                    v59);
  if ( !v53 )
    goto LABEL_97;
  System_Collections_Generic_List_object___AddRange(
    v53,
    (System_Collections_Generic_IEnumerable_T__o *)data,
    (const MethodInfo_3906174 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
LABEL_84:
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v53,
         (const MethodInfo_3210080 *)Method_System_Linq_Enumerable_Any_BattleLogicTask___) )
  {
    v78 = BattleLogicSkill___c_TypeInfo;
    if ( !BattleLogicSkill___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleLogicSkill___c_TypeInfo);
      v78 = BattleLogicSkill___c_TypeInfo;
    }
    _9__5_0 = (System_Func_object__int__o *)v78->static_fields->__9__5_0;
    if ( !_9__5_0 )
    {
      if ( !v78->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v78);
        v78 = BattleLogicSkill___c_TypeInfo;
      }
      v80 = (Il2CppObject *)v78->static_fields->__9;
      _9__5_0 = (System_Func_object__int__o *)sub_1CE694C(System_Func_BattleLogicTask__int__TypeInfo);
      System_Func_object__int____ctor(_9__5_0, v80, Method_BattleLogicSkill___c__taskSkill_b__5_0__, 0);
      static_fields = BattleLogicSkill___c_TypeInfo->static_fields;
      static_fields->__9__5_0 = (struct System_Func_BattleLogicTask__int__o *)_9__5_0;
      sub_1CE66A4(
        (GrandQuestFolderBoardItem_o *)&static_fields->__9__5_0,
        (int32_t)_9__5_0,
        v82,
        v83,
        v84,
        v85,
        v86,
        v87);
    }
    v88 = (System_Collections_Generic_IEnumerable_T__o *)BasicHelper__StableSort_object_(
                                                           (System_Collections_Generic_List_T__o *)v53,
                                                           (System_Func_T__int__o *)_9__5_0,
                                                           0,
                                                           (const MethodInfo_31F3934 *)Method_BasicHelper_StableSort_BattleLogicTask___);
    System_Collections_Generic_List_object___InsertRange(
      v17,
      0,
      v88,
      (const MethodInfo_3906F4C *)Method_System_Collections_Generic_List_BattleLogicTask__InsertRange__);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v17,
                                    (const MethodInfo_3907AC0 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


void BattleLogicSkill_SkillExecArgs___ctor(BattleLogicSkill_SkillExecArgs_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleLogicSkill_SkillExecArgs__get_AllowUpdateFieldServantResultStatus(
        BattleLogicSkill_SkillExecArgs_o *this,
        const MethodInfo *method)
{
  return this->fields._AllowUpdateFieldServantResultStatus_k__BackingField;
}


bool BattleLogicSkill_SkillExecArgs__get_RemoveActorUnfixedBuff(
        BattleLogicSkill_SkillExecArgs_o *this,
        const MethodInfo *method)
{
  return this->fields._RemoveActorUnfixedBuff_k__BackingField;
}


bool BattleLogicSkill_SkillExecArgs__get_RemoveAllUnfixedBuff(
        BattleLogicSkill_SkillExecArgs_o *this,
        const MethodInfo *method)
{
  return this->fields._RemoveAllUnfixedBuff_k__BackingField;
}


int32_t BattleLogicSkill_SkillExecArgs__get_Timing(BattleLogicSkill_SkillExecArgs_o *this, const MethodInfo *method)
{
  return this->fields._Timing_k__BackingField;
}


void BattleLogicSkill_SkillExecArgs__set_AllowUpdateFieldServantResultStatus(
        BattleLogicSkill_SkillExecArgs_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._AllowUpdateFieldServantResultStatus_k__BackingField = value;
}


void BattleLogicSkill_SkillExecArgs__set_RemoveActorUnfixedBuff(
        BattleLogicSkill_SkillExecArgs_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._RemoveActorUnfixedBuff_k__BackingField = value;
}


void BattleLogicSkill_SkillExecArgs__set_RemoveAllUnfixedBuff(
        BattleLogicSkill_SkillExecArgs_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._RemoveAllUnfixedBuff_k__BackingField = value;
}


void BattleLogicSkill_SkillExecArgs__set_Timing(
        BattleLogicSkill_SkillExecArgs_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._Timing_k__BackingField = value;
}


void BattleLogicSkill___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4E07DB4 & 1) == 0 )
  {
    sub_1CE6700(&BattleLogicSkill___c_TypeInfo);
    byte_4E07DB4 = 1;
  }
  v1 = (Il2CppObject *)sub_1CE694C(BattleLogicSkill___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleLogicSkill___c_TypeInfo->static_fields->__9 = (struct BattleLogicSkill___c_o *)v1;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)BattleLogicSkill___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BattleLogicSkill___c___ctor(BattleLogicSkill___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t BattleLogicSkill___c___GetSkillTargetedBeforeFunctionSkill_b__7_0(
        BattleLogicSkill___c_o *this,
        DataVals_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1CE6958(this, 0);
  return x->fields.targetType;
}


bool BattleLogicSkill___c___GetSkillTargetedBeforeFunctionSkill_b__7_3(
        BattleLogicSkill___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  return x && x->fields.isEntry;
}


int32_t BattleLogicSkill___c___GetSkillTargetedBeforeFunctionSkill_b__7_5(
        BattleLogicSkill___c_o *this,
        BattleLogicTask_o *x,
        const MethodInfo *method)
{
  struct BattleSkillInfoData_o *skillInfo; // x8

  if ( !x || (skillInfo = x->fields.skillInfo) == 0 )
    sub_1CE6958(this, x);
  return skillInfo->fields.priority;
}


void BattleLogicSkill___c___actPassiveSkill_b__11_0(
        BattleLogicSkill___c_o *this,
        BattleServantData_o *svt,
        const MethodInfo *method)
{
  if ( !svt || (this = (BattleLogicSkill___c_o *)BattleServantData__get_BuffData(svt, 0)) == 0 )
    sub_1CE6958(this, svt);
  BattleBuffData__DirectUpdateWaitIntervalBuff((BattleBuffData_o *)this, 0);
}


int32_t BattleLogicSkill___c___taskSkill_b__5_0(
        BattleLogicSkill___c_o *this,
        BattleLogicTask_o *x,
        const MethodInfo *method)
{
  struct BattleSkillInfoData_o *skillInfo; // x8

  if ( !x || (skillInfo = x->fields.skillInfo) == 0 )
    sub_1CE6958(this, x);
  return skillInfo->fields.priority;
}


void BattleLogicSkill___c__DisplayClass14_0___ctor(
        BattleLogicSkill___c__DisplayClass14_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleLogicSkill___c__DisplayClass14_0___checkConditions_b__0(
        BattleLogicSkill___c__DisplayClass14_0_o *this,
        System_String_o *key,
        int32_t val,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *conditions; // x0
  System_String_o *v8; // x0
  int64_t result; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4E07DB5 & 1) == 0 )
  {
    sub_1CE6700(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1CE6700(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    byte_4E07DB5 = 1;
  }
  conditions = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.conditions;
  if ( !conditions )
    goto LABEL_10;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          conditions,
          (Il2CppObject *)key,
          (const MethodInfo_35B4B84 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return 1;
  result = 0;
  conditions = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.conditions;
  if ( !conditions
    || (conditions = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                  conditions,
                                                                                  (Il2CppObject *)key,
                                                                                  (const MethodInfo_35B4910 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0 )
  {
LABEL_10:
    sub_1CE6958(conditions, key);
  }
  v8 = (System_String_o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_object__object__o *, const MethodInfo *))conditions->klass->vtable._3_ToString.methodPtr)(
                            conditions,
                            conditions->klass->vtable._3_ToString.method);
  if ( System_Int64__TryParse(v8, &result, 0) )
    return (int)result <= val;
  return 1;
}


bool BattleLogicSkill___c__DisplayClass14_0___checkConditions_b__1(
        BattleLogicSkill___c__DisplayClass14_0_o *this,
        System_String_o *key,
        int32_t val,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *conditions; // x0
  System_String_o *v8; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  BattleLogicSkill___c__DisplayClass14_0_o *v12; // x0
  System_String_o *v13; // x1
  const MethodInfo *v14; // x2
  long double v15; // q0
  int64_t result; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4E07DB6 & 1) == 0 )
  {
    sub_1CE6700(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1CE6700(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1CE6700(&long_TypeInfo);
    byte_4E07DB6 = 1;
  }
  conditions = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.conditions;
  if ( !conditions )
    goto LABEL_13;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          conditions,
          (Il2CppObject *)key,
          (const MethodInfo_35B4B84 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return 1;
  result = 0;
  conditions = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.conditions;
  if ( !conditions
    || (conditions = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                  conditions,
                                                                                  (Il2CppObject *)key,
                                                                                  (const MethodInfo_35B4910 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0 )
  {
LABEL_13:
    sub_1CE6958(conditions, key);
  }
  v8 = (System_String_o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_object__object__o *, const MethodInfo *))conditions->klass->vtable._3_ToString.methodPtr)(
                            conditions,
                            conditions->klass->vtable._3_ToString.method);
  if ( !System_Int64__TryParse(v8, &result, 0) )
    return 1;
  conditions = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.conditions;
  if ( !conditions )
    goto LABEL_13;
  conditions = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                            conditions,
                                                                            (Il2CppObject *)key,
                                                                            (const MethodInfo_35B4910 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !conditions )
    goto LABEL_13;
  if ( conditions->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(conditions, long_TypeInfo, v9, v10) >= val;
  v15 = sub_1CE6CF4(conditions);
  return BattleLogicSkill___c__DisplayClass14_0___checkConditions_b__2(v12, v13, *(double *)&v15, v14);
}


bool BattleLogicSkill___c__DisplayClass14_0___checkConditions_b__2(
        BattleLogicSkill___c__DisplayClass14_0_o *this,
        System_String_o *key,
        double val,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *conditions; // x0
  System_String_o *v8; // x0
  int64_t result; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4E07DB7 & 1) == 0 )
  {
    sub_1CE6700(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1CE6700(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    byte_4E07DB7 = 1;
  }
  conditions = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.conditions;
  if ( !conditions )
    goto LABEL_10;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          conditions,
          (Il2CppObject *)key,
          (const MethodInfo_35B4B84 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return 1;
  result = 0;
  conditions = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.conditions;
  if ( !conditions
    || (conditions = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                  conditions,
                                                                                  (Il2CppObject *)key,
                                                                                  (const MethodInfo_35B4910 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0 )
  {
LABEL_10:
    sub_1CE6958(conditions, key);
  }
  v8 = (System_String_o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_object__object__o *, const MethodInfo *))conditions->klass->vtable._3_ToString.methodPtr)(
                            conditions,
                            conditions->klass->vtable._3_ToString.method);
  if ( System_Int64__TryParse(v8, &result, 0) )
    return (double)(int)result <= val;
  return 1;
}


bool BattleLogicSkill___c__DisplayClass14_0___checkConditions_b__3(
        BattleLogicSkill___c__DisplayClass14_0_o *this,
        System_String_o *key,
        double val,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *conditions; // x0
  System_String_o *v8; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  BattleLogicSkill___c__DisplayClass19_0_o *v12; // x0
  int32_t v13; // w1
  const MethodInfo *v14; // x2
  int64_t result; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4E07DB8 & 1) == 0 )
  {
    sub_1CE6700(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1CE6700(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1CE6700(&long_TypeInfo);
    byte_4E07DB8 = 1;
  }
  conditions = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.conditions;
  if ( !conditions )
    goto LABEL_13;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          conditions,
          (Il2CppObject *)key,
          (const MethodInfo_35B4B84 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return 1;
  result = 0;
  conditions = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.conditions;
  if ( !conditions
    || (conditions = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                  conditions,
                                                                                  (Il2CppObject *)key,
                                                                                  (const MethodInfo_35B4910 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0 )
  {
LABEL_13:
    sub_1CE6958(conditions, key);
  }
  v8 = (System_String_o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_object__object__o *, const MethodInfo *))conditions->klass->vtable._3_ToString.methodPtr)(
                            conditions,
                            conditions->klass->vtable._3_ToString.method);
  if ( !System_Int64__TryParse(v8, &result, 0) )
    return 1;
  conditions = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.conditions;
  if ( !conditions )
    goto LABEL_13;
  conditions = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                            conditions,
                                                                            (Il2CppObject *)key,
                                                                            (const MethodInfo_35B4910 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !conditions )
    goto LABEL_13;
  if ( conditions->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return (double)*(int *)j_il2cpp_object_unbox_0(conditions, long_TypeInfo, v9, v10) >= val;
  sub_1CE6CF4(conditions);
  return BattleLogicSkill___c__DisplayClass19_0___SetSkillCopyFunction_b__0(v12, v13, v14);
}


void BattleLogicSkill___c__DisplayClass19_0___ctor(
        BattleLogicSkill___c__DisplayClass19_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleLogicSkill___c__DisplayClass19_0___SetSkillCopyFunction_b__0(
        BattleLogicSkill___c__DisplayClass19_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return this->fields.funcId == x;
}


bool BattleLogicSkill___c__DisplayClass19_0___SetSkillCopyFunction_b__1(
        BattleLogicSkill___c__DisplayClass19_0_o *this,
        int32_t type,
        const MethodInfo *method)
{
  FunctionEntity_o *funcEntity; // x0

  funcEntity = this->fields.funcEntity;
  if ( !funcEntity )
    sub_1CE6958(0, type);
  return FunctionEntity__GetAddStateBuffTypeFromFunction(funcEntity, 0) == type;
}


bool BattleLogicSkill___c__DisplayClass19_0___SetSkillCopyFunction_b__2(
        BattleLogicSkill___c__DisplayClass19_0_o *this,
        int32_t type,
        const MethodInfo *method)
{
  struct FunctionEntity_o *funcEntity; // x8

  funcEntity = this->fields.funcEntity;
  if ( !funcEntity )
    sub_1CE6958(this, type);
  return funcEntity->fields.funcType == type;
}


void BattleLogicSkill___c__DisplayClass20_0___ctor(
        BattleLogicSkill___c__DisplayClass20_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleLogicSkill___c__DisplayClass20_0___IsNotSkillCopyTargetIndividuality_b__0(
        BattleLogicSkill___c__DisplayClass20_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return this->fields.individuality == x;
}


void BattleLogicSkill___c__DisplayClass7_0___ctor(
        BattleLogicSkill___c__DisplayClass7_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


System_Collections_Generic_IEnumerable_int__o *BattleLogicSkill___c__DisplayClass7_0___GetSkillTargetedBeforeFunctionSkill_b__1(
        BattleLogicSkill___c__DisplayClass7_0_o *this,
        System_Collections_Generic_IEnumerable_int__o *current,
        int32_t targetType,
        const MethodInfo *method)
{
  BattleLogicSkill___c__DisplayClass7_0_o *v6; // x21
  struct BattleLogicSkill_o *_4__this; // x8
  struct BattleLogicTask_o *task; // x9
  struct System_Int32_array *actorIdlist; // x9
  BattleData_o *data; // x0
  int32_t v11; // w1
  System_Collections_Generic_IEnumerable_TSource__o *TargetIds; // x1

  v6 = this;
  if ( (byte_4E07DB9 & 1) == 0 )
  {
    this = (BattleLogicSkill___c__DisplayClass7_0_o *)sub_1CE6700(&Method_System_Linq_Enumerable_Union_int___);
    byte_4E07DB9 = 1;
  }
  _4__this = v6->fields.__4__this;
  if ( !_4__this || (task = v6->fields.task) == 0 )
    sub_1CE6958(this, current);
  actorIdlist = task->fields.actorIdlist;
  data = _4__this->fields.data;
  if ( actorIdlist )
  {
    if ( !LODWORD(actorIdlist->max_length) )
      sub_1CE6960(data);
    v11 = actorIdlist->m_Items[0];
  }
  else
  {
    v11 = -1;
  }
  TargetIds = (System_Collections_Generic_IEnumerable_TSource__o *)Target__getTargetIds(
                                                                     data,
                                                                     v11,
                                                                     -1,
                                                                     -1,
                                                                     targetType,
                                                                     0,
                                                                     0);
  return (System_Collections_Generic_IEnumerable_int__o *)System_Linq_Enumerable__Union_int_(
                                                            (System_Collections_Generic_IEnumerable_TSource__o *)current,
                                                            TargetIds,
                                                            (const MethodInfo_3248F8C *)Method_System_Linq_Enumerable_Union_int___);
}


BattleServantData_o *BattleLogicSkill___c__DisplayClass7_0___GetSkillTargetedBeforeFunctionSkill_b__2(
        BattleLogicSkill___c__DisplayClass7_0_o *this,
        int32_t uniqueId,
        const MethodInfo *method)
{
  struct BattleLogicSkill_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || (this = (BattleLogicSkill___c__DisplayClass7_0_o *)_4__this->fields.data) == 0 )
    sub_1CE6958(this, uniqueId);
  return BattleData__getServantData((BattleData_o *)this, uniqueId, 0);
}


System_Collections_Generic_IEnumerable_BattleSkillInfoData__o *BattleLogicSkill___c__DisplayClass7_0___GetSkillTargetedBeforeFunctionSkill_b__4(
        BattleLogicSkill___c__DisplayClass7_0_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  struct BattleLogicTask_o *task; // x8

  task = this->fields.task;
  if ( !task || !svtData )
    sub_1CE6958(this, svtData);
  return BattleServantData__EnumerateSkillTargetedBeforeFunctionSkill(svtData, task->fields.skillInfo, 0);
}