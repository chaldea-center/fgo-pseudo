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
  Il2CppClass *v15; // x0
  BattleLogicSkill_o *v16; // x23
  int32_t v17; // w0
  System_Int32_array *TargetIds; // x24
  bool exists; // w0
  const MethodInfo *v21; // [xsp+8h] [xbp-58h]

  v10 = this;
  if ( (byte_5973D06 & 1) == 0 )
  {
    sub_2213A60(&BattleSkillInfoData_TypeInfo);
    this = (BattleLogicSkill_o *)sub_2213A60(&int___TypeInfo);
    byte_5973D06 = 1;
  }
  if ( !actionSvtData )
    goto LABEL_20;
  uniqueId = actionSvtData->fields.uniqueId;
  v12 = (BattleSkillInfoData_o *)sub_2213CCC(BattleSkillInfoData_TypeInfo);
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
  if ( (v14->max_length & 0xFFFFFFFE) == 0 )
    goto LABEL_21;
  v15 = int___TypeInfo;
  v12->fields.skilllv = v14->m_Items[1];
  this = (BattleLogicSkill_o *)sub_2213B20(v15, 1);
  if ( !this )
    goto LABEL_20;
  v16 = this;
  if ( !LODWORD(this->fields.logic) )
    goto LABEL_21;
  LODWORD(this->fields.logictarget) = uniqueId;
  if ( targetId < 1 )
  {
    v17 = BattleServantData__GetRevengeIdIncludeSelfDamageCheckOpponentOnly(actionSvtData, functionBuff, 0);
    if ( v17 < 0 )
    {
      TargetIds = Target__getTargetIds(v10->fields.data, uniqueId, -1, uniqueId, 13, 0, 0);
      exists = BattleSkillInfoData__ExistsNoTargetNoActionType(v12, 0);
      return BattleLogicSkill__taskSkill(
               v10,
               v12,
               (System_Int32_array *)v16,
               TargetIds,
               checkAlive,
               exists,
               0,
               0,
               0,
               v21);
    }
    targetId = v17;
  }
  this = (BattleLogicSkill_o *)sub_2213B20(int___TypeInfo, 1);
  if ( !this )
LABEL_20:
    sub_2213CDC(this, actionSvtData);
  TargetIds = (System_Int32_array *)this;
  if ( !LODWORD(this->fields.logic) )
LABEL_21:
    sub_2213CE4(this);
  exists = 0;
  TargetIds->m_Items[0] = targetId;
  return BattleLogicSkill__taskSkill(v10, v12, (System_Int32_array *)v16, TargetIds, checkAlive, exists, 0, 0, 0, v21);
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
  BattleBuffData_BuffData_array *BuffList_52648620; // x21
  int max_length; // w8
  int32_t index; // w20
  unsigned int v15; // w24
  int32_t v16; // w22
  Il2CppClass **v17; // x8
  BattleBuffData_BuffData_o *v18; // x23

  if ( (byte_5973D05 & 1) == 0 )
  {
    sub_2213A60(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_5973D05 = 1;
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
      v11 = (BattleBuffData_CheckIndividualitiesData_o *)sub_2213CCC(BattleBuffData_CheckIndividualitiesData_TypeInfo);
      BattleBuffData_CheckIndividualitiesData___ctor_52826232(v11, v10, 0, 0, 0, 0, 0, 1, 0);
      BuffList_52648620 = BattleBuffData__getBuffList_52648620(buffData, 143, v11, 1, 0, 0, 0, 0);
      data = (BattleData_o *)BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)BuffList_52648620, 0);
      if ( ((unsigned __int8)data & 1) != 0 )
        return;
      if ( BuffList_52648620 )
      {
        max_length = BuffList_52648620->max_length;
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
              sub_2213CE4(data);
            v17 = &BuffList_52648620->obj.klass + (int)v15;
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
            max_length = BuffList_52648620->max_length;
            if ( (int)++v15 >= max_length )
              goto LABEL_21;
          }
        }
      }
    }
    sub_2213CDC(data, actSkillInfo);
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

  if ( (byte_5973D01 & 1) == 0 )
  {
    sub_2213A60(&Method_WeightRate_int___ctor__);
    sub_2213A60(&Method_WeightRate_int__getData__);
    sub_2213A60(&Method_WeightRate_int__getTotalWeight__);
    sub_2213A60(&Method_WeightRate_int__setWeight__);
    sub_2213A60(&WeightRate_int__TypeInfo);
    byte_5973D01 = 1;
  }
  if ( !rateArray )
    return -1;
  v4 = (WeightRate_int__o *)sub_2213CCC(WeightRate_int__TypeInfo);
  WeightRate_int____ctor(v4, (const MethodInfo_3DA1D84 *)Method_WeightRate_int___ctor__);
  max_length = rateArray->max_length;
  if ( (int)max_length >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      if ( v8 >= (unsigned int)max_length )
        sub_2213CE4(v5);
      if ( !v4 )
        break;
      WeightRate_int___setWeight(
        v4,
        rateArray->m_Items[v8],
        v8,
        (const MethodInfo_3DA11F8 *)Method_WeightRate_int__setWeight__);
      LODWORD(max_length) = rateArray->max_length;
      if ( (__int64)++v8 >= (int)max_length )
        goto LABEL_12;
    }
LABEL_13:
    sub_2213CDC(v5, v6);
  }
  if ( !v4 )
    goto LABEL_13;
LABEL_12:
  Next = BattleRandom__getNext(v4->fields.totalweight, 0);
  return WeightRate_int___getData(v4, Next, (const MethodInfo_3DA1690 *)Method_WeightRate_int__getData__);
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

  data = this->fields.data;
  message = 0;
  if ( !data )
    goto LABEL_13;
  ServantData = (BattleLogicSkill_o *)BattleData__getServantData(data, actorId, 0);
  if ( !ServantData )
  {
    data = (BattleData_o *)BattleLogicSkill__TryGetSkillUseMessageFromScript(0, skillEntity, &message, v7);
    if ( ((unsigned __int8)data & 1) == 0 )
    {
LABEL_10:
      if ( skillEntity )
      {
LABEL_11:
        result = SkillEntity__getName(skillEntity, 0);
        goto LABEL_12;
      }
LABEL_13:
      sub_2213CDC(data, *(_QWORD *)&actorId);
    }
    return message;
  }
  v8 = (ServantLimitAddEntity_o *)ServantData[6].fields.data;
  data = (BattleData_o *)BattleLogicSkill__TryGetSkillUseMessageFromScript(ServantData, skillEntity, &message, v7);
  if ( ((unsigned __int8)data & 1) != 0 )
    return message;
  if ( !v8 )
    goto LABEL_10;
  if ( !skillEntity )
    goto LABEL_13;
  id = skillEntity->fields.id;
  Name = SkillEntity__getName(skillEntity, 0);
  result = ServantLimitAddEntity__GetOverwriteSkillName(v8, id, Name, 0);
  if ( !result )
    goto LABEL_11;
LABEL_12:
  message = result;
  return result;
}


System_Collections_Generic_List_BattleLogicTask__o *BattleLogicSkill__GetSkillTargetedBeforeFunctionSkill(
        BattleLogicSkill_o *this,
        BattleLogicTask_o *task,
        System_Int32_array *ptTargetArray,
        System_Int32_array *enemyTargetArray,
        const MethodInfo *method)
{
  __int64 v9; // x21
  void *v10; // x0
  __int64 v11; // x1
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  __int64 v18; // x25
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  System_Collections_Generic_List_object__o *v25; // x19
  long double v26; // q0
  _QWORD *v27; // x24
  __int64 v28; // x8
  __int64 v29; // x0
  System_Collections_Generic_IEnumerable_TSource__o **v30; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x24
  DataVals_array *DataValArray; // x0
  __int64 v33; // x1
  BattleLogicSkill___c_c *v34; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v35; // x22
  struct BattleLogicSkill___c_StaticFields *static_fields; // x9
  System_Func_T__TResult__o *_9__7_0; // x23
  Il2CppObject *v38; // x25
  struct BattleLogicSkill___c_StaticFields *v39; // x0
  System_String_o *v40; // x2
  System_String_o *v41; // x3
  int32_t v42; // w4
  int32_t v43; // w5
  bool v44; // w6
  bool v45; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v46; // x22
  System_Func_T1__T2__TResult__o *v47; // x23
  System_Func_T__TResult__o *v48; // x22
  System_Collections_Generic_IEnumerable_TResult__o *v49; // x0
  __int64 v50; // x1
  BattleLogicSkill___c_c *v51; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v52; // x22
  struct BattleLogicSkill___c_StaticFields *v53; // x9
  System_Func_object__bool__o *_9__7_3; // x23
  Il2CppObject *v55; // x24
  struct BattleLogicSkill___c_StaticFields *v56; // x0
  System_String_o *v57; // x2
  System_String_o *v58; // x3
  int32_t v59; // w4
  int32_t v60; // w5
  bool v61; // w6
  bool v62; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v63; // x22
  System_Func_object__object__o *v64; // x23
  __int64 v65; // x8
  void *v66; // x21
  __int64 v67; // x9
  int *v68; // x10
  __int64 v69; // x0
  __int64 v70; // x0
  __int64 v71; // x1
  __int64 v72; // x8
  __int64 v73; // x9
  int *v74; // x10
  __int64 v75; // x0
  __int64 v76; // x8
  __int64 v77; // x9
  int *v78; // x10
  __int64 v79; // x0
  BattleSkillInfoData_o *v80; // x21
  __int64 v81; // x0
  __int64 v82; // x1
  System_Collections_Generic_IEnumerable_T__o *v83; // x0
  __int64 v84; // x8
  __int64 v85; // x9
  int *v86; // x10
  __int64 v87; // x0
  __int64 v88; // x1
  BattleLogicSkill___c_c *v89; // x0
  struct BattleLogicSkill___c_StaticFields *v90; // x8
  System_Func_object__int__o *_9__7_5; // x20
  Il2CppObject *v92; // x21
  struct BattleLogicSkill___c_StaticFields *v93; // x0
  System_String_o *v94; // x2
  System_String_o *v95; // x3
  int32_t v96; // w4
  int32_t v97; // w5
  bool v98; // w6
  bool v99; // w7
  const MethodInfo *v101; // [xsp+8h] [xbp-88h]
  __int64 v102; // [xsp+28h] [xbp-68h]

  if ( (byte_5973CF7 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Array_Empty_int___);
    sub_2213A60(&Method_BasicHelper_StableSort_BattleLogicTask___);
    sub_2213A60(&Method_System_Linq_Enumerable_Aggregate_Target_TYPE__IEnumerable_int____);
    sub_2213A60(&Method_System_Linq_Enumerable_SelectMany_BattleServantData__BattleSkillInfoData___);
    sub_2213A60(&Method_System_Linq_Enumerable_Select_DataVals__Target_TYPE___);
    sub_2213A60(&Method_System_Linq_Enumerable_Select_int__BattleServantData___);
    sub_2213A60(&Method_System_Linq_Enumerable_Union_int___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_BattleServantData___);
    sub_2213A60(&System_Func_BattleServantData__IEnumerable_BattleSkillInfoData___TypeInfo);
    sub_2213A60(&System_Func_BattleLogicTask__int__TypeInfo);
    sub_2213A60(&System_Func_int__BattleServantData__TypeInfo);
    sub_2213A60(&System_Func_BattleServantData__bool__TypeInfo);
    sub_2213A60(&System_Func_DataVals__Target_TYPE__TypeInfo);
    sub_2213A60(&System_Func_IEnumerable_int___Target_TYPE__IEnumerable_int___TypeInfo);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerable_BattleSkillInfoData__TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_BattleSkillInfoData__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_2213A60(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    sub_2213A60(&Method_BattleLogicSkill___c__GetSkillTargetedBeforeFunctionSkill_b__7_0__);
    sub_2213A60(&Method_BattleLogicSkill___c__GetSkillTargetedBeforeFunctionSkill_b__7_3__);
    sub_2213A60(&Method_BattleLogicSkill___c__GetSkillTargetedBeforeFunctionSkill_b__7_5__);
    sub_2213A60(&Method_BattleLogicSkill___c__DisplayClass7_0__GetSkillTargetedBeforeFunctionSkill_b__1__);
    sub_2213A60(&Method_BattleLogicSkill___c__DisplayClass7_0__GetSkillTargetedBeforeFunctionSkill_b__2__);
    sub_2213A60(&Method_BattleLogicSkill___c__DisplayClass7_0__GetSkillTargetedBeforeFunctionSkill_b__4__);
    sub_2213A60(&BattleLogicSkill___c__DisplayClass7_0_TypeInfo);
    sub_2213A60(&BattleLogicSkill___c_TypeInfo);
    byte_5973CF7 = 1;
  }
  v9 = sub_2213CCC(BattleLogicSkill___c__DisplayClass7_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_77;
  *(_QWORD *)(v9 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 16), (int32_t)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 24) = task;
  v18 = v9 + 24;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 24), (int32_t)task, v19, v20, v21, v22, v23, v24);
  v25 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v25,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v27 = Method_System_Array_Empty_int___;
  v28 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v28 )
  {
    sub_224B964(Method_System_Array_Empty_int___);
    v28 = v27[7];
  }
  v29 = *(_QWORD *)(v28 + 16);
  if ( (*(_WORD *)(v29 + 309) & 1) == 0 )
    v29 = sub_224B908(v26);
  if ( !*(_DWORD *)(v29 + 228) )
    *(__n128 *)&v26 = j_il2cpp_runtime_class_init_0(v29, v11);
  v10 = *(void **)(v27[7] + 16LL);
  if ( (*(_WORD *)((_BYTE *)v10 + 309) & 1) == 0 )
    v10 = (void *)sub_224B908(v26);
  v30 = (System_Collections_Generic_IEnumerable_TSource__o **)*((_QWORD *)v10 + 23);
  v31 = *v30;
  if ( ptTargetArray )
  {
    v10 = System_Linq_Enumerable__Union_int_(
            *v30,
            (System_Collections_Generic_IEnumerable_TSource__o *)ptTargetArray,
            (const MethodInfo_38A1344 *)Method_System_Linq_Enumerable_Union_int___);
    v31 = (System_Collections_Generic_IEnumerable_TSource__o *)v10;
  }
  if ( enemyTargetArray )
  {
    v10 = System_Linq_Enumerable__Union_int_(
            v31,
            (System_Collections_Generic_IEnumerable_TSource__o *)enemyTargetArray,
            (const MethodInfo_38A1344 *)Method_System_Linq_Enumerable_Union_int___);
    v31 = (System_Collections_Generic_IEnumerable_TSource__o *)v10;
  }
  if ( !*(_QWORD *)v18 )
    goto LABEL_77;
  v10 = *(void **)(*(_QWORD *)v18 + 72LL);
  if ( !v10 )
    goto LABEL_77;
  if ( *((_DWORD *)v10 + 4) != 2 )
  {
    DataValArray = BattleSkillInfoData__get_DataValArray((BattleSkillInfoData_o *)v10, 0);
    v34 = BattleLogicSkill___c_TypeInfo;
    v35 = (System_Collections_Generic_IEnumerable_TSource__o *)DataValArray;
    if ( !*(&BattleLogicSkill___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BattleLogicSkill___c_TypeInfo, v33);
      v34 = BattleLogicSkill___c_TypeInfo;
    }
    static_fields = v34->static_fields;
    _9__7_0 = (System_Func_T__TResult__o *)static_fields->__9__7_0;
    if ( !_9__7_0 )
    {
      if ( !*(&v34->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v34, v33);
        static_fields = BattleLogicSkill___c_TypeInfo->static_fields;
      }
      v38 = (Il2CppObject *)static_fields->__9;
      _9__7_0 = (System_Func_T__TResult__o *)sub_2213CCC(System_Func_DataVals__Target_TYPE__TypeInfo);
      System_Func_object__Int32Enum____ctor(
        _9__7_0,
        v38,
        Method_BattleLogicSkill___c__GetSkillTargetedBeforeFunctionSkill_b__7_0__,
        0);
      v39 = BattleLogicSkill___c_TypeInfo->static_fields;
      v39->__9__7_0 = (struct System_Func_DataVals__Target_TYPE__o *)_9__7_0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v39->__9__7_0, (int32_t)_9__7_0, v40, v41, v42, v43, v44, v45);
    }
    v46 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__Int32Enum_(
                                                                 v35,
                                                                 (System_Func_TSource__TResult__o *)_9__7_0,
                                                                 (const MethodInfo_3890B80 *)Method_System_Linq_Enumerable_Select_DataVals__Target_TYPE___);
    v47 = (System_Func_T1__T2__TResult__o *)sub_2213CCC(System_Func_IEnumerable_int___Target_TYPE__IEnumerable_int___TypeInfo);
    System_Func_object__Int32Enum__object____ctor(
      v47,
      (Il2CppObject *)v9,
      Method_BattleLogicSkill___c__DisplayClass7_0__GetSkillTargetedBeforeFunctionSkill_b__1__,
      0);
    v31 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Aggregate_Int32Enum__object_(
                                                                 v46,
                                                                 (Il2CppObject *)v31,
                                                                 (System_Func_TAccumulate__TSource__TAccumulate__o *)v47,
                                                                 (const MethodInfo_3862FCC *)Method_System_Linq_Enumerable_Aggregate_Target_TYPE__IEnumerable_int____);
  }
  v48 = (System_Func_T__TResult__o *)sub_2213CCC(System_Func_int__BattleServantData__TypeInfo);
  System_Func_int__object____ctor(
    v48,
    (Il2CppObject *)v9,
    Method_BattleLogicSkill___c__DisplayClass7_0__GetSkillTargetedBeforeFunctionSkill_b__2__,
    0);
  v49 = System_Linq_Enumerable__Select_int__object_(
          v31,
          (System_Func_TSource__TResult__o *)v48,
          (const MethodInfo_388DEA8 *)Method_System_Linq_Enumerable_Select_int__BattleServantData___);
  v51 = BattleLogicSkill___c_TypeInfo;
  v52 = (System_Collections_Generic_IEnumerable_TSource__o *)v49;
  if ( !*(&BattleLogicSkill___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicSkill___c_TypeInfo, v50);
    v51 = BattleLogicSkill___c_TypeInfo;
  }
  v53 = v51->static_fields;
  _9__7_3 = (System_Func_object__bool__o *)v53->__9__7_3;
  if ( !_9__7_3 )
  {
    if ( !*(&v51->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v51, v50);
      v53 = BattleLogicSkill___c_TypeInfo->static_fields;
    }
    v55 = (Il2CppObject *)v53->__9;
    _9__7_3 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_BattleServantData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__7_3,
      v55,
      Method_BattleLogicSkill___c__GetSkillTargetedBeforeFunctionSkill_b__7_3__,
      0);
    v56 = BattleLogicSkill___c_TypeInfo->static_fields;
    v56->__9__7_3 = (struct System_Func_BattleServantData__bool__o *)_9__7_3;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v56->__9__7_3, (int32_t)_9__7_3, v57, v58, v59, v60, v61, v62);
  }
  v63 = System_Linq_Enumerable__Where_object_(
          v52,
          (System_Func_TSource__bool__o *)_9__7_3,
          (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_BattleServantData___);
  v64 = (System_Func_object__object__o *)sub_2213CCC(System_Func_BattleServantData__IEnumerable_BattleSkillInfoData___TypeInfo);
  System_Func_object__object____ctor(
    v64,
    (Il2CppObject *)v9,
    Method_BattleLogicSkill___c__DisplayClass7_0__GetSkillTargetedBeforeFunctionSkill_b__4__,
    0);
  v10 = System_Linq_Enumerable__SelectMany_object__object_(
          v63,
          (System_Func_TSource__IEnumerable_TResult___o *)v64,
          (const MethodInfo_3893CAC *)Method_System_Linq_Enumerable_SelectMany_BattleServantData__BattleSkillInfoData___);
  if ( !v10 )
LABEL_77:
    sub_2213CDC(v10, v11);
  v65 = *(_QWORD *)v10;
  v66 = v10;
  v67 = *(unsigned __int16 *)(*(_QWORD *)v10 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v10 + 302LL) )
  {
    v68 = (int *)(*(_QWORD *)(v65 + 176) + 8LL);
    while ( *((System_Collections_Generic_IEnumerable_BattleSkillInfoData__c **)v68 - 1) != System_Collections_Generic_IEnumerable_BattleSkillInfoData__TypeInfo )
    {
      --v67;
      v68 += 4;
      if ( !v67 )
        goto LABEL_37;
    }
    v69 = v65 + 16LL * *v68 + 312;
  }
  else
  {
LABEL_37:
    v69 = sub_224BC3C(v10, System_Collections_Generic_IEnumerable_BattleSkillInfoData__TypeInfo, 0);
  }
  v70 = (*(__int64 (__fastcall **)(void *, _QWORD))v69)(v66, *(_QWORD *)(v69 + 8));
  v102 = v70;
  while ( 1 )
  {
    if ( !v102 )
      sub_2213CDC(v70, v71);
    v72 = *(_QWORD *)v102;
    v73 = *(unsigned __int16 *)(*(_QWORD *)v102 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v102 + 302LL) )
    {
      v74 = (int *)(*(_QWORD *)(v72 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v74 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v73;
        v74 += 4;
        if ( !v73 )
          goto LABEL_45;
      }
      v75 = v72 + 16LL * *v74 + 312;
    }
    else
    {
LABEL_45:
      v75 = sub_224BC3C(v102, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v75)(v102, *(_QWORD *)(v75 + 8)) & 1) == 0 )
      break;
    v76 = *(_QWORD *)v102;
    v77 = *(unsigned __int16 *)(*(_QWORD *)v102 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v102 + 302LL) )
    {
      v78 = (int *)(*(_QWORD *)(v76 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BattleSkillInfoData__c **)v78 - 1) != System_Collections_Generic_IEnumerator_BattleSkillInfoData__TypeInfo )
      {
        --v77;
        v78 += 4;
        if ( !v77 )
          goto LABEL_52;
      }
      v79 = v76 + 16LL * *v78 + 312;
    }
    else
    {
LABEL_52:
      v79 = sub_224BC3C(v102, System_Collections_Generic_IEnumerator_BattleSkillInfoData__TypeInfo, 0);
    }
    v80 = (BattleSkillInfoData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v79)(v102, *(_QWORD *)(v79 + 8));
    v81 = sub_2213B20(int___TypeInfo, 1);
    if ( !v80 )
      sub_2213CDC(v81, v82);
    if ( !v81 )
      sub_2213CDC(0, v82);
    if ( !*(_DWORD *)(v81 + 24) )
      sub_2213CE4(v81);
    *(_DWORD *)(v81 + 32) = v80->fields.svtUniqueId;
    v83 = (System_Collections_Generic_IEnumerable_T__o *)BattleLogicSkill__taskSkill(
                                                           this,
                                                           v80,
                                                           (System_Int32_array *)v81,
                                                           0,
                                                           0,
                                                           0,
                                                           0,
                                                           0,
                                                           1,
                                                           v101);
    if ( !v25 )
      sub_2213CDC(v83, v83);
    System_Collections_Generic_List_object___AddRange(
      v25,
      v83,
      (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
  }
  v84 = *(_QWORD *)v102;
  v85 = *(unsigned __int16 *)(*(_QWORD *)v102 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v102 + 302LL) )
  {
    v86 = (int *)(*(_QWORD *)(v84 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v86 - 1) != System_IDisposable_TypeInfo )
    {
      --v85;
      v86 += 4;
      if ( !v85 )
        goto LABEL_63;
    }
    v87 = v84 + 16LL * *v86 + 312;
  }
  else
  {
LABEL_63:
    v87 = sub_224BC3C(v102, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v87)(v102, *(_QWORD *)(v87 + 8));
  v89 = BattleLogicSkill___c_TypeInfo;
  if ( !*(&BattleLogicSkill___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicSkill___c_TypeInfo, v88);
    v89 = BattleLogicSkill___c_TypeInfo;
  }
  v90 = v89->static_fields;
  _9__7_5 = (System_Func_object__int__o *)v90->__9__7_5;
  if ( !_9__7_5 )
  {
    if ( !*(&v89->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v89, v88);
      v90 = BattleLogicSkill___c_TypeInfo->static_fields;
    }
    v92 = (Il2CppObject *)v90->__9;
    _9__7_5 = (System_Func_object__int__o *)sub_2213CCC(System_Func_BattleLogicTask__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__7_5,
      v92,
      Method_BattleLogicSkill___c__GetSkillTargetedBeforeFunctionSkill_b__7_5__,
      0);
    v93 = BattleLogicSkill___c_TypeInfo->static_fields;
    v93->__9__7_5 = (struct System_Func_BattleLogicTask__int__o *)_9__7_5;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v93->__9__7_5, (int32_t)_9__7_5, v94, v95, v96, v97, v98, v99);
  }
  return (System_Collections_Generic_List_BattleLogicTask__o *)BasicHelper__StableSort_object_(
                                                                 (System_Collections_Generic_List_T__o *)v25,
                                                                 (System_Func_T__int__o *)_9__7_5,
                                                                 0,
                                                                 (const MethodInfo_3815EE8 *)Method_BasicHelper_StableSort_BattleLogicTask___);
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
  System_Func_int__bool__c *v10; // x0
  System_Func_int__bool__o *v11; // x22
  bool v12; // w0

  if ( (byte_5973D03 & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_Any_int____91711248);
    sub_2213A60(&System_Func_int__bool__TypeInfo);
    sub_2213A60(&Method_BattleLogicSkill___c__DisplayClass20_0__IsNotSkillCopyTargetIndividuality_b__0__);
    sub_2213A60(&BattleLogicSkill___c__DisplayClass20_0_TypeInfo);
    byte_5973D03 = 1;
  }
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)actorIndividualities, 0) )
  {
    IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)notSkillCopyTargetIndividualities, 0);
    if ( !IsNullOrEmpty )
    {
      if ( !notSkillCopyTargetIndividualities )
        goto LABEL_15;
      if ( SLODWORD(notSkillCopyTargetIndividualities->max_length) >= 1 )
      {
        v8 = 0;
        while ( 1 )
        {
          v9 = sub_2213CCC(BattleLogicSkill___c__DisplayClass20_0_TypeInfo);
          System_Object___ctor((Il2CppObject *)v9, 0);
          if ( v8 >= LODWORD(notSkillCopyTargetIndividualities->max_length) )
            sub_2213CE4(IsNullOrEmpty);
          if ( !v9 )
            break;
          v10 = System_Func_int__bool__TypeInfo;
          *(_DWORD *)(v9 + 16) = notSkillCopyTargetIndividualities->m_Items[v8];
          v11 = (System_Func_int__bool__o *)sub_2213CCC(v10);
          System_Func_int__bool____ctor(
            v11,
            (Il2CppObject *)v9,
            Method_BattleLogicSkill___c__DisplayClass20_0__IsNotSkillCopyTargetIndividuality_b__0__,
            0);
          v12 = BasicHelper__Any_int__58784608(
                  actorIndividualities,
                  (System_Func_T__bool__o *)v11,
                  (const MethodInfo_380FB60 *)Method_BasicHelper_Any_int____91711248);
          if ( !v12 && (__int64)++v8 < SLODWORD(notSkillCopyTargetIndividualities->max_length) )
            continue;
          return v12;
        }
LABEL_15:
        sub_2213CDC(IsNullOrEmpty, v7);
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

  if ( (byte_5973D07 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_FunctionMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
    byte_5973D07 = 1;
  }
  if ( !skillLvEnt )
    return 0;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, skillLvEnt);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_FunctionMaster___);
  SetTypeDataValArray = SkillLvEntity__GetSetTypeDataValArray(skillLvEnt, 0);
  funcId = skillLvEnt->fields.funcId;
  if ( !funcId )
LABEL_19:
    sub_2213CDC(SetTypeDataValArray, v8);
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
                                              (const MethodInfo_3F10B30 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
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
          sub_2213CE4(SetTypeDataValArray);
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_String_o **v10; // x8
  System_String_o *v11; // x1
  __int64 v12; // x0
  __int64 v13; // x1
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  __int64 v21; // x20
  __int64 *v22; // x8
  __int64 v23; // x1
  __int64 v24; // x1
  System_String_o *IfExists; // x0
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7

  if ( (byte_5973CFE & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&string___TypeInfo);
    sub_2213A60(&StringLiteral_2997/*"BATTLE_SKILL_ERROR_NOT_SATISFY_OPEN_COND"*/);
    sub_2213A60(&StringLiteral_2996/*"BATTLE_SKILL_ERROR_NOT_CHARGING"*/);
    byte_5973CFE = 1;
  }
  v10 = *(System_String_o ***)(qword_5984390 + 184);
  v11 = *v10;
  *messageNotAvailable = *v10;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)messageNotAvailable,
    (int32_t)v11,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( !skillInfo )
    goto LABEL_16;
  if ( BattleSkillInfoData__isChargeOK(skillInfo, 0) )
  {
    if ( BattleSkillInfoData__IsOpenCond(skillInfo, 0) )
      return 1;
    v12 = sub_2213B20(string___TypeInfo, 1);
    if ( v12 )
    {
      v21 = v12;
      if ( *(_DWORD *)(v12 + 24) )
      {
        v22 = &StringLiteral_2997/*"BATTLE_SKILL_ERROR_NOT_SATISFY_OPEN_COND"*/;
        goto LABEL_13;
      }
LABEL_17:
      sub_2213CE4(v12);
    }
LABEL_16:
    sub_2213CDC(v12, v13);
  }
  v12 = sub_2213B20(string___TypeInfo, 1);
  if ( !v12 )
    goto LABEL_16;
  v21 = v12;
  if ( !*(_DWORD *)(v12 + 24) )
    goto LABEL_17;
  v22 = &StringLiteral_2996/*"BATTLE_SKILL_ERROR_NOT_CHARGING"*/;
LABEL_13:
  v23 = *v22;
  *(_QWORD *)(v21 + 32) = *v22;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v21 + 32), v23, v15, v16, v17, v18, v19, v20);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v24);
  IfExists = LocalizationManager__GetIfExists((System_String_array *)v21, 0);
  *messageNotAvailable = IfExists;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)messageNotAvailable, (int32_t)IfExists, v26, v27, v28, v29, v30, v31);
  return 0;
}


bool BattleLogicSkill__IsSkillExecutable(
        BattleLogicSkill_o *this,
        BattleSkillInfoData_o *skillInfo,
        System_String_o **messageNotExecutable,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t v11; // w1
  const MethodInfo *v12; // x2
  const MethodInfo *v13; // x3

  if ( (byte_5973CFC & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_5973CFC = 1;
  }
  v11 = (int)StringLiteral_1/*""*/;
  *messageNotExecutable = (System_String_o *)StringLiteral_1/*""*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)messageNotExecutable,
    v11,
    (System_String_o *)messageNotExecutable,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  return BattleLogicSkill__IsSkillAvailable(skillInfo, messageNotExecutable, v12)
      && BattleLogicSkill__checkConditions(this, skillInfo, messageNotExecutable, v13);
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
  int32_t v11; // w23
  int32_t actortype; // w24
  const MethodInfo *v13; // x1
  BattleData_o *data; // x21
  bool isPlayerID; // w21
  int32_t data_high; // w20
  int32_t v17; // w22
  TempBattleSkillInfoData_o *v18; // x25
  const MethodInfo *v19; // x4
  const MethodInfo *v20; // x2

  v8 = this;
  if ( (byte_5973CF9 & 1) == 0 )
  {
    this = (BattleLogicSkill_o *)sub_2213A60(&TempBattleSkillInfoData_TypeInfo);
    byte_5973CF9 = 1;
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
        sub_2213CE4(this);
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
    v18 = (TempBattleSkillInfoData_o *)sub_2213CCC(TempBattleSkillInfoData_TypeInfo);
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
    sub_2213CDC(this, skillLvMst);
  }
  return (BattleLogicTask_o *)this;
}


// local variable allocation has failed, the output may be wrong!
void BattleLogicSkill__SetCommandSpellAddFunctionData(
        BattleLogicSkill_o *this,
        int32_t commandSpellId,
        System_Int32_array *targetIds,
        System_Collections_Generic_List_int__o *funcIdList,
        System_Collections_Generic_List_DataVals__o *dataValsList,
        const MethodInfo *method)
{
  BalanceConfig_c *v11; // x0
  int v12; // w8
  int32_t ClassBoardReleaseQuestId; // w24
  BattleData_o *IsQuestClear_47284152; // x0
  __int64 v15; // x1
  BattleServantData_o *ServantData; // x0
  BattleServantData_o *v17; // x22
  __int64 v18; // x1
  struct AddSkillData_array *classBoardAddCommandSpells; // x23
  int max_length; // w8
  ClassBoardCommandSpellMaster_o *v21; // x22
  unsigned int v22; // w26
  AddSkillData_o *v23; // x8
  ClassBoardCommandSpellEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_5973D04 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&CondType_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_2213A60(&Method_System_Collections_Generic_List_DataVals__AddRange__);
    byte_5973D04 = 1;
  }
  v11 = BalanceConfig_TypeInfo;
  v12 = *(&BalanceConfig_TypeInfo->_2.cctor_finished + 1);
  entity = 0;
  if ( !v12 )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, *(_QWORD *)&commandSpellId);
    v11 = BalanceConfig_TypeInfo;
  }
  ClassBoardReleaseQuestId = v11->static_fields->ClassBoardReleaseQuestId;
  if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&commandSpellId);
  IsQuestClear_47284152 = (BattleData_o *)CondType__IsQuestClear_47284152(ClassBoardReleaseQuestId, -1, 0, 0);
  if ( ((unsigned __int8)IsQuestClear_47284152 & 1) != 0 )
  {
    if ( !targetIds )
      goto LABEL_29;
    if ( !LODWORD(targetIds->max_length) )
      goto LABEL_30;
    IsQuestClear_47284152 = this->fields.data;
    if ( !IsQuestClear_47284152 )
      goto LABEL_29;
    ServantData = BattleData__getServantData(IsQuestClear_47284152, targetIds->m_Items[0], 0);
    if ( !ServantData )
      return;
    v17 = ServantData;
    if ( BasicHelper__IsNullOrEmpty(
           (System_Collections_ICollection_o *)ServantData->fields.classBoardAddCommandSpells,
           0) )
    {
      return;
    }
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v18);
    IsQuestClear_47284152 = (BattleData_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___);
    classBoardAddCommandSpells = v17->fields.classBoardAddCommandSpells;
    if ( !classBoardAddCommandSpells )
LABEL_29:
      sub_2213CDC(IsQuestClear_47284152, v15);
    max_length = classBoardAddCommandSpells->max_length;
    if ( max_length >= 1 )
    {
      v21 = (ClassBoardCommandSpellMaster_o *)IsQuestClear_47284152;
      v22 = 0;
      while ( v22 < max_length )
      {
        v23 = classBoardAddCommandSpells->m_Items[v22];
        if ( !v23 || !v21 )
          goto LABEL_29;
        IsQuestClear_47284152 = (BattleData_o *)ClassBoardCommandSpellMaster__TryGetEntity(
                                                  v21,
                                                  &entity,
                                                  v23->fields.id,
                                                  commandSpellId,
                                                  v23->fields.lv,
                                                  0);
        if ( ((unsigned __int8)IsQuestClear_47284152 & 1) != 0 )
        {
          if ( !entity )
            goto LABEL_29;
          if ( !funcIdList )
            goto LABEL_29;
          System_Collections_Generic_List_int___AddRange(
            funcIdList,
            (System_Collections_Generic_IEnumerable_T__o *)entity->fields.funcIds,
            (const MethodInfo_446747C *)Method_System_Collections_Generic_List_int__AddRange__);
          IsQuestClear_47284152 = (BattleData_o *)entity;
          if ( !entity )
            goto LABEL_29;
          IsQuestClear_47284152 = (BattleData_o *)ClassBoardCommandSpellEntity__getDataValsList(entity, 0);
          if ( !dataValsList )
            goto LABEL_29;
          System_Collections_Generic_List_object___AddRange(
            (System_Collections_Generic_List_object__o *)dataValsList,
            (System_Collections_Generic_IEnumerable_T__o *)IsQuestClear_47284152,
            (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_DataVals__AddRange__);
        }
        max_length = classBoardAddCommandSpells->max_length;
        if ( (int)++v22 >= max_length )
          return;
      }
LABEL_30:
      sub_2213CE4(IsQuestClear_47284152);
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
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  System_Func_int__bool__o *v27; // x27
  __int64 v28; // x27
  System_Func_int__bool__o *v29; // x27
  BattleLogicSkill_o *NotSkillCopyTargetIndividualities; // x0
  const MethodInfo *v31; // x3
  System_Func_int__bool__o *v32; // x27
  struct System_Int32_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  System_String_o *v36; // x2
  System_String_o *v37; // x3
  int32_t v38; // w4
  int32_t v39; // w5
  bool v40; // w6
  bool v41; // w7
  struct System_Object_array *v42; // x8
  __int64 v43; // x10
  Il2CppClass **v44; // x0
  System_Int32_array *v45; // x0
  System_String_o *v46; // x2
  System_String_o *v47; // x3
  int32_t v48; // w4
  int32_t v49; // w5
  bool v50; // w6
  bool v51; // w7
  System_Object_array *v52; // x0
  System_String_o *v53; // x2
  System_String_o *v54; // x3
  int32_t v55; // w4
  int32_t v56; // w5
  bool v57; // w6
  bool v58; // w7
  System_Collections_ICollection_o *CopyTargetFunctionTypeArray; // [xsp+0h] [xbp-B0h]
  System_Int32_array *actorIndividualities; // [xsp+10h] [xbp-A0h]
  MissionNaviTransitionBoardItem_o *v62; // [xsp+20h] [xbp-90h]
  System_Collections_Generic_List_object__o *v63; // [xsp+28h] [xbp-88h]
  System_Collections_Generic_List_int__o *v64; // [xsp+30h] [xbp-80h]
  System_Collections_ICollection_o *self; // [xsp+38h] [xbp-78h]
  DataVals_array *SetTypeDataValArray; // [xsp+48h] [xbp-68h]

  v11 = skillLvEnt;
  v12 = this;
  if ( (byte_5973D02 & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_Any_int____91711248);
    sub_2213A60(&Method_DataManager_GetMasterData_FunctionMaster___);
    sub_2213A60(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
    sub_2213A60(&System_Func_int__bool__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_DataVals__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_DataVals__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_DataVals___ctor__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    sub_2213A60(&System_Collections_Generic_List_DataVals__TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_BattleLogicSkill___c__DisplayClass19_0__SetSkillCopyFunction_b__0__);
    sub_2213A60(&Method_BattleLogicSkill___c__DisplayClass19_0__SetSkillCopyFunction_b__1__);
    sub_2213A60(&Method_BattleLogicSkill___c__DisplayClass19_0__SetSkillCopyFunction_b__2__);
    this = (BattleLogicSkill_o *)sub_2213A60(&BattleLogicSkill___c__DisplayClass19_0_TypeInfo);
    byte_5973D02 = 1;
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
  v62 = (MissionNaviTransitionBoardItem_o *)functionIdArray;
  v64 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v64,
    (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
  v63 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_DataVals__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v63,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_DataVals___ctor__);
  this = (BattleLogicSkill_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_52;
  this = (BattleLogicSkill_o *)DataManager__GetMasterData_object_(
                                 (DataManager_o *)this,
                                 (const MethodInfo_385636C *)Method_DataManager_GetMasterData_FunctionMaster___);
  funcId = v11->fields.funcId;
  if ( !funcId )
    goto LABEL_52;
  v17 = (DataMasterBase_TMaster__TEntity__PKType__o *)this;
  v18 = 0;
  while ( (__int64)v18 < SLODWORD(funcId->max_length) )
  {
    v19 = sub_2213CCC(BattleLogicSkill___c__DisplayClass19_0_TypeInfo);
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
      || (v27 = (System_Func_int__bool__o *)sub_2213CCC(System_Func_int__bool__TypeInfo),
          System_Func_int__bool____ctor(
            v27,
            (Il2CppObject *)v19,
            Method_BattleLogicSkill___c__DisplayClass19_0__SetSkillCopyFunction_b__0__,
            0),
          this = (BattleLogicSkill_o *)BasicHelper__Any_int__58784608(
                                         (System_Int32_array *)v14,
                                         (System_Func_T__bool__o *)v27,
                                         (const MethodInfo_380FB60 *)Method_BasicHelper_Any_int____91711248),
          ((unsigned __int8)this & 1) == 0) )
    {
      *(_QWORD *)(v19 + 24) = 0;
      v28 = v19 + 24;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v19 + 24), 0, v21, v22, v23, v24, v25, v26);
      if ( !v17 )
        goto LABEL_52;
      this = (BattleLogicSkill_o *)DataMasterBase_object__object__int___TryGetEntity(
                                     v17,
                                     (Il2CppObject **)(v19 + 24),
                                     *(_DWORD *)(v19 + 16),
                                     (const MethodInfo_3F10B80 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
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
                  || (v29 = (System_Func_int__bool__o *)sub_2213CCC(System_Func_int__bool__TypeInfo),
                      System_Func_int__bool____ctor(
                        v29,
                        (Il2CppObject *)v19,
                        Method_BattleLogicSkill___c__DisplayClass19_0__SetSkillCopyFunction_b__1__,
                        0),
                      this = (BattleLogicSkill_o *)BasicHelper__Any_int__58784608(
                                                     (System_Int32_array *)self,
                                                     (System_Func_T__bool__o *)v29,
                                                     (const MethodInfo_380FB60 *)Method_BasicHelper_Any_int____91711248),
                      ((unsigned __int8)this & 1) != 0) )
                {
LABEL_33:
                  if ( !SetTypeDataValArray )
                    goto LABEL_52;
                  if ( v18 >= LODWORD(SetTypeDataValArray->max_length) )
LABEL_57:
                    sub_2213CE4(this);
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
                      || (v32 = (System_Func_int__bool__o *)sub_2213CCC(System_Func_int__bool__TypeInfo),
                          System_Func_int__bool____ctor(
                            v32,
                            (Il2CppObject *)v19,
                            Method_BattleLogicSkill___c__DisplayClass19_0__SetSkillCopyFunction_b__2__,
                            0),
                          this = (BattleLogicSkill_o *)BasicHelper__Any_int__58784608(
                                                         (System_Int32_array *)CopyTargetFunctionTypeArray,
                                                         (System_Func_T__bool__o *)v32,
                                                         (const MethodInfo_380FB60 *)Method_BasicHelper_Any_int____91711248),
                          ((unsigned __int8)this & 1) != 0) )
                    {
                      this = (BattleLogicSkill_o *)v64;
                      if ( !v64 )
                        goto LABEL_52;
                      items = v64->fields._items;
                      skillLvEnt = (SkillLvEntity_o *)*(unsigned int *)(v19 + 16);
                      v34 = Method_System_Collections_Generic_List_int__Add__;
                      ++v64->fields._version;
                      if ( !items )
                        goto LABEL_52;
                      size = v64->fields._size;
                      if ( (unsigned int)size >= LODWORD(items->max_length) )
                      {
                        System_Collections_Generic_List_int___AddWithResize(
                          v64,
                          (int32_t)skillLvEnt,
                          *(const MethodInfo_4467270 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
                      }
                      else
                      {
                        v64->fields._size = size + 1;
                        items->m_Items[size] = (int)skillLvEnt;
                      }
                      this = (BattleLogicSkill_o *)SkillLvEntity__getDataValsList(v11, 0);
                      if ( !this )
                        goto LABEL_52;
                      if ( v18 >= LODWORD(this->fields.logic) )
                        goto LABEL_57;
                      if ( !v63 )
                        goto LABEL_52;
                      v42 = v63->fields._items;
                      skillLvEnt = (SkillLvEntity_o *)*((_QWORD *)&this->fields.logictarget + v18);
                      ++v63->fields._version;
                      if ( !v42 )
                        goto LABEL_52;
                      v43 = v63->fields._size;
                      if ( (unsigned int)v43 >= LODWORD(v42->max_length) )
                      {
                        System_Collections_Generic_List_object___AddWithResize(
                          v63,
                          (Il2CppObject *)skillLvEnt,
                          *(const MethodInfo_4483C64 **)(*(_QWORD *)(*((_QWORD *)Method_System_Collections_Generic_List_DataVals__Add__
                                                                     + 4)
                                                                   + 192LL)
                                                       + 112LL));
                      }
                      else
                      {
                        v44 = &v42->obj.klass + v43;
                        v63->fields._size = v43 + 1;
                        v44[4] = (Il2CppClass *)skillLvEnt;
                        sub_2213A04(
                          (MissionNaviTransitionBoardItem_o *)(v44 + 4),
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
  this = (BattleLogicSkill_o *)v64;
  if ( !v64
    || (v45 = System_Collections_Generic_List_int___ToArray(
                v64,
                (const MethodInfo_4468CF0 *)Method_System_Collections_Generic_List_int__ToArray__),
        v62->klass = (MissionNaviTransitionBoardItem_c *)v45,
        sub_2213A04(v62, (int32_t)v45, v46, v47, v48, v49, v50, v51),
        (this = (BattleLogicSkill_o *)v63) == 0)
    || (v52 = System_Collections_Generic_List_object___ToArray(
                v63,
                (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_DataVals__ToArray__),
        *dataValsArray = (DataVals_array *)v52,
        sub_2213A04((MissionNaviTransitionBoardItem_o *)dataValsArray, (int32_t)v52, v53, v54, v55, v56, v57, v58),
        !v62->klass) )
  {
LABEL_52:
    sub_2213CDC(this, skillLvEnt);
  }
  return LODWORD(v62->klass->_1.namespaze) != 0;
}


bool BattleLogicSkill__TryGetSkillUseMessageFromScript(
        BattleLogicSkill_o *this,
        SkillEntity_o *skillEntity,
        System_String_o **message,
        const MethodInfo *method)
{
  System_String_o *BattleSkillUseMessage; // x0
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  if ( !skillEntity )
    sub_2213CDC(this, 0);
  BattleSkillUseMessage = SkillEntity__GetBattleSkillUseMessage(skillEntity, 0);
  *message = BattleSkillUseMessage;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)message, (int32_t)BattleSkillUseMessage, v6, v7, v8, v9, v10, v11);
  return !System_String__IsNullOrEmpty(*message, 0);
}


// local variable allocation has failed, the output may be wrong!
void BattleLogicSkill__actPassiveSkill(
        BattleLogicSkill_o *this,
        BattleSkillInfoData_o *skillInfo,
        bool isShift,
        bool isDeckDataLoad,
        BattleLogicSkill_SkillExecArgs_o *skillExecArgs,
        int32_t summonedEnemyUniqueId,
        const MethodInfo *method)
{
  BattleLogicSkill_o *v12; // x19
  int32_t svtUniqueId; // w28
  int32_t v14; // w0
  int32_t skilllv; // w27
  int32_t v16; // w21
  BattleActionData_o *v17; // x25
  int32_t v18; // w20
  BattleServantData_o *ServantData; // x26
  bool v20; // w23
  Il2CppObject *Entity; // x0
  SkillEntity_o *v22; // x29
  SkillLvEntity_o *v23; // x27
  System_Int32_array *Individualities; // x21
  __int64 v25; // x1
  System_Int32_array *ActIndividuality; // x24
  ServantEntity_o *svtdata; // x21
  int32_t Rarity; // w0
  __int64 v29; // x21
  __int64 v30; // x24
  int32_t v31; // w0
  int32_t MotionId; // w0
  int64_t userCommandCodeId; // x8
  int32_t commandAssistId; // w9
  int32_t index; // w10
  bool v36; // w29
  int32_t Timing_k__BackingField; // w24
  bool v38; // w28
  __int64 argument; // x21
  int32_t v40; // w8
  int32_t type; // w8
  BattleLogicFunction_o *logicfunction; // x23
  System_Int32_array *funcId; // x22
  struct BattleBuffData_o *buffData; // x8
  struct System_Collections_Generic_List_int__o *unfixedBuffList; // x8
  int v46; // w9
  BattleData_o *data; // x20
  void *static_fields; // x8
  System_Action_object__o *v49; // x21
  Il2CppObject *v50; // x22
  struct BattleLogicSkill___c_StaticFields *v51; // x0
  System_String_o *v52; // x2
  System_String_o *v53; // x3
  int32_t v54; // w4
  int32_t v55; // w5
  bool v56; // w6
  bool v57; // w7
  bool v58; // [xsp+34h] [xbp-6Ch]
  BattleLogicSkill_SkillExecArgs_o *v59; // [xsp+38h] [xbp-68h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v60; // 0:x0.16

  v12 = this;
  if ( (byte_5973CFA & 1) == 0 )
  {
    sub_2213A60(&System_Action_BattleServantData__TypeInfo);
    sub_2213A60(&BattleActionData_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_2213A60(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_2213A60(&BattleLogicFunction_ForSummonedEnemyFunctionArgument_TypeInfo);
    sub_2213A60(&BattleLogicFunction_FunctionArgument_TypeInfo);
    sub_2213A60(&Individuality_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Clear__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_BattleLogicSkill___c__actPassiveSkill_b__11_0__);
    this = (BattleLogicSkill_o *)sub_2213A60(&BattleLogicSkill___c_TypeInfo);
    byte_5973CFA = 1;
  }
  if ( !skillInfo )
    goto LABEL_50;
  v58 = isDeckDataLoad;
  v59 = skillExecArgs;
  svtUniqueId = skillInfo->fields.svtUniqueId;
  v14 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, const MethodInfo *, bool, bool, BattleLogicSkill_SkillExecArgs_o *, _QWORD, const MethodInfo *))skillInfo->klass->vtable._5_get_skillId.methodPtr)(
          skillInfo,
          skillInfo->klass->vtable._5_get_skillId.method,
          isShift,
          isDeckDataLoad,
          skillExecArgs,
          *(_QWORD *)&summonedEnemyUniqueId,
          method);
  skilllv = skillInfo->fields.skilllv;
  v16 = v14;
  v17 = (BattleActionData_o *)sub_2213CCC(BattleActionData_TypeInfo);
  BattleActionData___ctor(v17, 0);
  this = (BattleLogicSkill_o *)v12->fields.data;
  if ( !this )
    goto LABEL_50;
  v18 = summonedEnemyUniqueId;
  ServantData = BattleData__getServantData((BattleData_o *)this, svtUniqueId, 0);
  this = (BattleLogicSkill_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_50;
  v20 = isShift;
  this = (BattleLogicSkill_o *)DataManager__GetMasterData_object_(
                                 (DataManager_o *)this,
                                 (const MethodInfo_385636C *)Method_DataManager_GetMasterData_SkillMaster___);
  if ( !this )
    goto LABEL_50;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             v16,
             (const MethodInfo_3F10B30 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( !Entity )
    return;
  v22 = (SkillEntity_o *)Entity;
  if ( SkillEntity__isActive((SkillEntity_o *)Entity, 0) )
    return;
  this = (BattleLogicSkill_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_50;
  this = (BattleLogicSkill_o *)DataManager__GetMasterData_object_(
                                 (DataManager_o *)this,
                                 (const MethodInfo_385636C *)Method_DataManager_GetMasterData_SkillLvMaster___);
  if ( !this )
    goto LABEL_50;
  this = (BattleLogicSkill_o *)SkillLvMaster__GetEntity((SkillLvMaster_o *)this, v16, skilllv, 0);
  v23 = (SkillLvEntity_o *)this;
  if ( skillInfo->fields.type != 12 )
    goto LABEL_53;
  if ( !ServantData )
    goto LABEL_50;
  Individualities = BattleServantData__getIndividualities(ServantData, 0, 1, 0, 1, 0);
  ActIndividuality = SkillEntity__getActIndividuality(v22, 0);
  if ( !*(&Individuality_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(Individuality_TypeInfo, v25);
  if ( Individuality__CheckIndividualities(Individualities, ActIndividuality, 0) )
  {
    svtdata = ServantData->fields.svtdata;
    Rarity = BattleServantData__getRarity(ServantData, 0);
    this = (BattleLogicSkill_o *)RarityRestrictedSkillUtil__IsDisabled(v23, svtdata, Rarity, 0);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
LABEL_53:
      if ( v17 )
      {
        v17->fields.actorId = svtUniqueId;
        if ( ServantData )
        {
          v29 = *(_QWORD *)&ServantData->fields.svtId.fields.currentCryptoKey;
          v30 = *(_QWORD *)&ServantData->fields.svtId.fields.fakeValue;
          if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, skillInfo);
          *(_QWORD *)&v60.fields.currentCryptoKey = v29;
          *(_QWORD *)&v60.fields.fakeValue = v30;
          v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v60, 0);
          MotionId = SkillEntity__GetMotionId(v22, v31, 0);
          userCommandCodeId = skillInfo->fields.userCommandCodeId;
          commandAssistId = skillInfo->fields.commandAssistId;
          index = skillInfo->fields.index;
          v17->fields.motionId = MotionId;
          v17->fields.userCommandCodeId = userCommandCodeId;
          v17->fields.commandAssistId = commandAssistId;
          v17->fields.cardIndex = index;
          if ( v59 )
          {
            v36 = v20;
            if ( v59->fields._AllowUpdateFieldServantResultStatus_k__BackingField )
            {
              this = (BattleLogicSkill_o *)v12->fields.logic;
              if ( !this )
                goto LABEL_50;
              BattleLogic__updateResultServant((BattleLogic_o *)this, 0);
            }
            Timing_k__BackingField = v59->fields._Timing_k__BackingField;
          }
          else
          {
            this = (BattleLogicSkill_o *)v12->fields.logic;
            if ( !this )
              goto LABEL_50;
            v36 = v20;
            BattleLogic__updateResultServant((BattleLogic_o *)this, 0);
            Timing_k__BackingField = 0;
          }
          v38 = v58;
          if ( v18 < 1 )
          {
            argument = sub_2213CCC(BattleLogicFunction_FunctionArgument_TypeInfo);
            BattleLogicFunction_FunctionArgument___ctor((BattleLogicFunction_FunctionArgument_o *)argument, 0);
            if ( !argument )
              goto LABEL_50;
            type = skillInfo->fields.type;
            *(_BYTE *)(argument + 24) = v38;
            *(_DWORD *)(argument + 56) = Timing_k__BackingField;
            *(_DWORD *)(argument + 20) = type;
          }
          else
          {
            argument = sub_2213CCC(BattleLogicFunction_ForSummonedEnemyFunctionArgument_TypeInfo);
            BattleLogicFunction_ForSummonedEnemyFunctionArgument___ctor(
              (BattleLogicFunction_ForSummonedEnemyFunctionArgument_o *)argument,
              0);
            if ( !argument )
              goto LABEL_50;
            v40 = skillInfo->fields.type;
            *(_BYTE *)(argument + 24) = v38;
            *(_DWORD *)(argument + 56) = Timing_k__BackingField;
            *(_DWORD *)(argument + 20) = v40;
            *(_DWORD *)(argument + 80) = v18;
          }
          if ( v23 )
          {
            logicfunction = v12->fields.logicfunction;
            funcId = v23->fields.funcId;
            this = (BattleLogicSkill_o *)SkillLvEntity__getDataValsList(v23, 0);
            if ( logicfunction )
            {
              this = (BattleLogicSkill_o *)BattleLogicFunction__procList(
                                             logicfunction,
                                             v17,
                                             funcId,
                                             (DataVals_array *)this,
                                             1,
                                             1,
                                             0,
                                             v36,
                                             0,
                                             1,
                                             1,
                                             (BattleLogicFunction_FunctionArgument_o *)argument,
                                             v23->fields.skillId,
                                             0);
              if ( !v59 || v59->fields._RemoveActorUnfixedBuff_k__BackingField )
              {
                buffData = ServantData->fields.buffData;
                if ( !buffData )
                  goto LABEL_50;
                unfixedBuffList = buffData->fields.unfixedBuffList;
                if ( !unfixedBuffList )
                  goto LABEL_50;
                v46 = unfixedBuffList->fields._version + 1;
                unfixedBuffList->fields._size = 0;
                unfixedBuffList->fields._version = v46;
              }
              data = v12->fields.data;
              this = (BattleLogicSkill_o *)BattleLogicSkill___c_TypeInfo;
              if ( !*(&BattleLogicSkill___c_TypeInfo->_2.cctor_finished + 1) )
              {
                j_il2cpp_runtime_class_init_0(BattleLogicSkill___c_TypeInfo, skillInfo);
                this = (BattleLogicSkill_o *)BattleLogicSkill___c_TypeInfo;
              }
              static_fields = this[3].fields.logicfunction;
              v49 = (System_Action_object__o *)*((_QWORD *)static_fields + 5);
              if ( !v49 )
              {
                if ( !HIDWORD(this[4].fields.logictarget) )
                {
                  j_il2cpp_runtime_class_init_0(this, skillInfo);
                  static_fields = BattleLogicSkill___c_TypeInfo->static_fields;
                }
                v50 = *(Il2CppObject **)static_fields;
                v49 = (System_Action_object__o *)sub_2213CCC(System_Action_BattleServantData__TypeInfo);
                System_Action_object____ctor(v49, v50, Method_BattleLogicSkill___c__actPassiveSkill_b__11_0__, 0);
                v51 = BattleLogicSkill___c_TypeInfo->static_fields;
                v51->__9__11_0 = (struct System_Action_BattleServantData__o *)v49;
                sub_2213A04(
                  (MissionNaviTransitionBoardItem_o *)&v51->__9__11_0,
                  (int32_t)v49,
                  v52,
                  v53,
                  v54,
                  v55,
                  v56,
                  v57);
              }
              if ( data )
              {
                BattleData__ExecFuncAllServant(data, (System_Action_BattleServantData__o *)v49, 0);
                this = (BattleLogicSkill_o *)v12->fields.logic;
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
LABEL_50:
      sub_2213CDC(this, skillInfo);
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
  int32_t v8; // w1
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  __int64 Instance; // x0
  __int64 v16; // x1
  SkillLvMaster_o *v17; // x22
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  __int64 v24; // x1
  SkillLvEntity_o *v25; // x27
  System_Collections_Generic_Dictionary_object__object__o *v26; // x0
  __int64 v27; // x26
  __int64 v28; // x25
  __int64 v29; // x23
  __int64 v30; // x22
  BattleServantData_o *v31; // x24
  BattleLogicSkill_o *v32; // x0
  const MethodInfo *v33; // x3
  LocalizationManager_c *v34; // x0
  __int64 *v35; // x20
  struct BattleData_o *data; // x8
  struct BattleData_o *v37; // x8
  unsigned int NowHp; // w0
  unsigned int v39; // w0
  int32_t v40; // w20
  int32_t v41; // w20
  System_String_o *v43; // x0
  System_String_o *v44; // x2
  System_String_o *v45; // x3
  int32_t v46; // w4
  int32_t v47; // w5
  bool v48; // w6
  bool v49; // w7
  int32_t limitMinNp; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_5973CFD & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__get_Count__);
    sub_2213A60(&System_Func_string__int__bool__TypeInfo);
    sub_2213A60(&System_Func_string__double__bool__TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_BattleLogicSkill___c__DisplayClass14_0__checkConditions_b__0__);
    sub_2213A60(&Method_BattleLogicSkill___c__DisplayClass14_0__checkConditions_b__1__);
    sub_2213A60(&Method_BattleLogicSkill___c__DisplayClass14_0__checkConditions_b__2__);
    sub_2213A60(&Method_BattleLogicSkill___c__DisplayClass14_0__checkConditions_b__3__);
    sub_2213A60(&BattleLogicSkill___c__DisplayClass14_0_TypeInfo);
    sub_2213A60(&StringLiteral_2991/*"BATTLE_SKILLERROR_NP_LOWER"*/);
    sub_2213A60(&StringLiteral_2989/*"BATTLE_SKILLERROR_HP_LOWER"*/);
    sub_2213A60(&StringLiteral_12868/*"STAR_HIGHER"*/);
    sub_2213A60(&StringLiteral_7556/*"HP_PER_LOWER"*/);
    sub_2213A60(&StringLiteral_2990/*"BATTLE_SKILLERROR_NP_HIGHER"*/);
    sub_2213A60(&StringLiteral_2988/*"BATTLE_SKILLERROR_HP_HIGHER"*/);
    sub_2213A60(&StringLiteral_7555/*"HP_PER_HIGHER"*/);
    sub_2213A60(&StringLiteral_2992/*"BATTLE_SKILLERROR_STAR_HIGHER"*/);
    sub_2213A60(&StringLiteral_9744/*"NP_HIGHER"*/);
    sub_2213A60(&StringLiteral_2993/*"BATTLE_SKILLERROR_STAR_LOWER"*/);
    sub_2213A60(&StringLiteral_7557/*"HP_VAL_HIGHER"*/);
    sub_2213A60(&StringLiteral_12869/*"STAR_LOWER"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    sub_2213A60(&StringLiteral_2994/*"BATTLE_SKILLERROR_USABLE_NP_HIGHER"*/);
    sub_2213A60(&StringLiteral_9746/*"NP_LOWER"*/);
    sub_2213A60(&StringLiteral_7558/*"HP_VAL_LOWER"*/);
    byte_5973CFD = 1;
  }
  limitMinNp = 0;
  v7 = sub_2213CCC(BattleLogicSkill___c__DisplayClass14_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  v8 = (int)StringLiteral_1/*""*/;
  *text = (System_String_o *)StringLiteral_1/*""*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)text, v8, v9, v10, v11, v12, v13, v14);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_49;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_SkillLvMaster___);
  if ( !skillInfo )
    goto LABEL_49;
  v17 = (SkillLvMaster_o *)Instance;
  Instance = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, const MethodInfo *))skillInfo->klass->vtable._5_get_skillId.methodPtr)(
               skillInfo,
               skillInfo->klass->vtable._5_get_skillId.method);
  if ( !v17 )
    goto LABEL_49;
  Instance = (__int64)SkillLvMaster__GetEntity(v17, Instance, skillInfo->fields.skilllv, 0);
  if ( !Instance || !v7 )
    goto LABEL_49;
  v24 = *(_QWORD *)(Instance + 56);
  v25 = (SkillLvEntity_o *)Instance;
  *(_QWORD *)(v7 + 16) = v24;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 16), v24, v18, v19, v20, v21, v22, v23);
  v26 = *(System_Collections_Generic_Dictionary_object__object__o **)(v7 + 16);
  if ( !v26 )
    return 1;
  if ( System_Collections_Generic_Dictionary_object__object___get_Count(
         v26,
         (const MethodInfo_3FFD8C8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Count__) < 1 )
    return 1;
  v27 = sub_2213CCC(System_Func_string__int__bool__TypeInfo);
  System_Func_object__int__bool____ctor(
    (System_Func_T1__T2__TResult__o *)v27,
    (Il2CppObject *)v7,
    Method_BattleLogicSkill___c__DisplayClass14_0__checkConditions_b__0__,
    0);
  v28 = sub_2213CCC(System_Func_string__int__bool__TypeInfo);
  System_Func_object__int__bool____ctor(
    (System_Func_T1__T2__TResult__o *)v28,
    (Il2CppObject *)v7,
    Method_BattleLogicSkill___c__DisplayClass14_0__checkConditions_b__1__,
    0);
  v29 = sub_2213CCC(System_Func_string__double__bool__TypeInfo);
  System_Func_object__double__bool____ctor(
    (System_Func_T1__T2__TResult__o *)v29,
    (Il2CppObject *)v7,
    Method_BattleLogicSkill___c__DisplayClass14_0__checkConditions_b__2__,
    0);
  v30 = sub_2213CCC(System_Func_string__double__bool__TypeInfo);
  System_Func_object__double__bool____ctor(
    (System_Func_T1__T2__TResult__o *)v30,
    (Il2CppObject *)v7,
    Method_BattleLogicSkill___c__DisplayClass14_0__checkConditions_b__3__,
    0);
  if ( !BattleSkillInfoData__isServantSkill(skillInfo, 0) )
    return 1;
  Instance = (__int64)this->fields.data;
  if ( !Instance )
    goto LABEL_49;
  Instance = (__int64)BattleData__getServantData((BattleData_o *)Instance, skillInfo->fields.svtUniqueId, 0);
  if ( !Instance )
    goto LABEL_49;
  v31 = (BattleServantData_o *)Instance;
  if ( BattleServantData__TryGetLimitMinNp((BattleServantData_o *)Instance, &limitMinNp, 0) )
  {
    Instance = BattleServantData__GetUsableNpVal(v31, 0);
    if ( !v27 )
      goto LABEL_49;
    v32 = (BattleLogicSkill_o *)(*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(v27 + 24))(
                                  *(_QWORD *)(v27 + 64),
                                  StringLiteral_9744/*"NP_HIGHER"*/,
                                  (unsigned int)Instance,
                                  *(_QWORD *)(v27 + 40));
    if ( ((unsigned __int8)v32 & 1) == 0 && BattleLogicSkill__IsSelfLossNpFuncSkill(v32, v25, skillInfo, v33) )
    {
      v34 = LocalizationManager_TypeInfo;
      v35 = &StringLiteral_2994/*"BATTLE_SKILLERROR_USABLE_NP_HIGHER"*/;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        goto LABEL_37;
      goto LABEL_38;
    }
    LODWORD(Instance) = BattleServantData__getNPVal(v31, 0);
  }
  else
  {
    Instance = BattleServantData__getNPVal(v31, 0);
    if ( !v27 )
      goto LABEL_49;
  }
  if ( ((*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(v27 + 24))(
          *(_QWORD *)(v27 + 64),
          StringLiteral_9744/*"NP_HIGHER"*/,
          (unsigned int)Instance,
          *(_QWORD *)(v27 + 40))
      & 1) != 0 )
  {
    Instance = BattleServantData__getNPVal(v31, 0);
    if ( !v28 )
      goto LABEL_49;
    Instance = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(v28 + 24))(
                 *(_QWORD *)(v28 + 64),
                 StringLiteral_9746/*"NP_LOWER"*/,
                 (unsigned int)Instance,
                 *(_QWORD *)(v28 + 40));
    if ( (Instance & 1) == 0 )
    {
      v34 = LocalizationManager_TypeInfo;
      v35 = &StringLiteral_2991/*"BATTLE_SKILLERROR_NP_LOWER"*/;
      if ( *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        goto LABEL_38;
      goto LABEL_37;
    }
    data = this->fields.data;
    if ( !data )
      goto LABEL_49;
    Instance = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(v27 + 24))(
                 *(_QWORD *)(v27 + 64),
                 StringLiteral_12868/*"STAR_HIGHER"*/,
                 (unsigned int)data->fields.totalCriticalStars,
                 *(_QWORD *)(v27 + 40));
    if ( (Instance & 1) == 0 )
    {
      v34 = LocalizationManager_TypeInfo;
      v35 = &StringLiteral_2992/*"BATTLE_SKILLERROR_STAR_HIGHER"*/;
      if ( *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        goto LABEL_38;
      goto LABEL_37;
    }
    v37 = this->fields.data;
    if ( !v37 )
      goto LABEL_49;
    if ( ((*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(v28 + 24))(
            *(_QWORD *)(v28 + 64),
            StringLiteral_12869/*"STAR_LOWER"*/,
            (unsigned int)v37->fields.totalCriticalStars,
            *(_QWORD *)(v28 + 40))
        & 1) == 0 )
    {
      v34 = LocalizationManager_TypeInfo;
      v35 = &StringLiteral_2993/*"BATTLE_SKILLERROR_STAR_LOWER"*/;
      if ( *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        goto LABEL_38;
      goto LABEL_37;
    }
    NowHp = BattleServantData__getNowHp(v31, 0);
    if ( ((*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(v27 + 24))(
            *(_QWORD *)(v27 + 64),
            StringLiteral_7557/*"HP_VAL_HIGHER"*/,
            NowHp,
            *(_QWORD *)(v27 + 40))
        & 1) != 0 )
    {
      v39 = BattleServantData__getNowHp(v31, 0);
      if ( ((*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(v28 + 24))(
              *(_QWORD *)(v28 + 64),
              StringLiteral_7558/*"HP_VAL_LOWER"*/,
              v39,
              *(_QWORD *)(v28 + 40))
          & 1) == 0 )
        goto LABEL_47;
      v40 = BattleServantData__getNowHp(v31, 0);
      Instance = BattleServantData__getMaxHp(v31, 0);
      if ( !v29 )
LABEL_49:
        sub_2213CDC(Instance, v16);
      if ( ((*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, double))(v29 + 24))(
              *(_QWORD *)(v29 + 64),
              StringLiteral_7555/*"HP_PER_HIGHER"*/,
              *(_QWORD *)(v29 + 40),
              (double)v40 * 1000.0 / (double)(int)Instance)
          & 1) != 0 )
      {
        v41 = BattleServantData__getNowHp(v31, 0);
        Instance = BattleServantData__getMaxHp(v31, 0);
        if ( v30 )
        {
          if ( ((*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, double))(v30 + 24))(
                  *(_QWORD *)(v30 + 64),
                  StringLiteral_7556/*"HP_PER_LOWER"*/,
                  *(_QWORD *)(v30 + 40),
                  (double)v41 * 1000.0 / (double)(int)Instance)
              & 1) != 0 )
            return 1;
LABEL_47:
          v34 = LocalizationManager_TypeInfo;
          v35 = &StringLiteral_2989/*"BATTLE_SKILLERROR_HP_LOWER"*/;
          if ( *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            goto LABEL_38;
          goto LABEL_37;
        }
        goto LABEL_49;
      }
    }
    v34 = LocalizationManager_TypeInfo;
    v35 = &StringLiteral_2988/*"BATTLE_SKILLERROR_HP_HIGHER"*/;
    if ( *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      goto LABEL_38;
    goto LABEL_37;
  }
  v34 = LocalizationManager_TypeInfo;
  v35 = &StringLiteral_2990/*"BATTLE_SKILLERROR_NP_HIGHER"*/;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
LABEL_37:
    j_il2cpp_runtime_class_init_0(v34, v16);
LABEL_38:
  v43 = LocalizationManager__Get((System_String_o *)*v35, 0);
  *text = v43;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)text, (int32_t)v43, v44, v45, v46, v47, v48, v49);
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
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  BattleActionData_c *v16; // x0
  int v17; // w9
  struct System_Int32_array *ptTarget; // x1
  int32_t TYPE_COMMAND_SPELL; // w8
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  System_Collections_Generic_List_int__o *v26; // x24
  System_Collections_Generic_List_object__o *v27; // x25
  const MethodInfo *v28; // x5
  BattleLogicFunction_o *logicfunction; // x26
  System_Int32_array *v30; // x24
  System_Object_array *v31; // x25
  BattleActionData_o *v32; // x22
  struct BattleData_o *data; // x8
  struct BattleActionLogManagerInterface_o *actionLogManager; // x23
  BattleActionLogManagerInterface_c *klass; // x8
  __int64 v36; // x9
  BattleActionLogManagerInterface_c **p_offset; // x10
  __int64 v38; // x0
  struct BattleLogic_o *logic; // x8
  BattlePerformance_o *perf; // x20
  float CutinAdditionalTime; // s0
  BattleData_o *v42; // x20
  int32_t actorId; // w21
  BattleLogic_o *v44; // x20
  BattleLogicTask_array *FunctionedFunctionBuffTaskArray; // x0

  if ( (byte_5973CFB & 1) == 0 )
  {
    sub_2213A60(&BattleActionData_TypeInfo);
    sub_2213A60(&BattleActionLogManagerInterface_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_CommandSpellMaster___);
    sub_2213A60(&Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_2213A60(&Method_System_Collections_Generic_List_DataVals__AddRange__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_DataVals__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_DataVals___ctor__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    sub_2213A60(&System_Collections_Generic_List_DataVals__TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5973CFB = 1;
  }
  skillId = this->fields.data;
  if ( !skillId )
    goto LABEL_34;
  BattleData__ResetFunctionedFunctionIds(skillId, 0);
  v6 = sub_2213CCC(BattleActionData_TypeInfo);
  BattleActionData___ctor((BattleActionData_o *)v6, 0);
  if ( !task )
    goto LABEL_34;
  skillInfo = task->fields.skillInfo;
  skillId = (BattleData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !skillId )
    goto LABEL_34;
  skillId = (BattleData_o *)DataManager__GetMasterData_object_(
                              (DataManager_o *)skillId,
                              (const MethodInfo_385636C *)Method_DataManager_GetMasterData_CommandSpellMaster___);
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
                              (const MethodInfo_3F10B30 *)Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__);
  if ( !v6 )
    goto LABEL_34;
  v9 = skillId;
  BattleActionData__setStateField((BattleActionData_o *)v6, 0);
  *(_DWORD *)(v6 + 32) = -1;
  if ( !v9 )
    goto LABEL_34;
  v16 = BattleActionData_TypeInfo;
  v17 = *(&BattleActionData_TypeInfo->_2.cctor_finished + 1);
  *(_DWORD *)(v6 + 48) = HIDWORD(v9->fields.m_CancellationTokenSource);
  if ( !v17 )
  {
    j_il2cpp_runtime_class_init_0(v16, task);
    v16 = BattleActionData_TypeInfo;
  }
  ptTarget = task->fields.ptTarget;
  TYPE_COMMAND_SPELL = v16->static_fields->TYPE_COMMAND_SPELL;
  *(_QWORD *)(v6 + 40) = ptTarget;
  *(_DWORD *)(v6 + 60) = TYPE_COMMAND_SPELL;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v6 + 40), (int32_t)ptTarget, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v6 + 160) = skillInfo;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v6 + 160), (int32_t)skillInfo, v20, v21, v22, v23, v24, v25);
  skillId = (BattleData_o *)this->fields.logic;
  if ( !skillId )
    goto LABEL_34;
  BattleLogic__updateResultServant((BattleLogic_o *)skillId, 0);
  v26 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v26,
    (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
  v27 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_DataVals__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v27,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_DataVals___ctor__);
  if ( !v26 )
    goto LABEL_34;
  System_Collections_Generic_List_int___AddRange(
    v26,
    (System_Collections_Generic_IEnumerable_T__o *)v9->fields.data,
    (const MethodInfo_446747C *)Method_System_Collections_Generic_List_int__AddRange__);
  skillId = (BattleData_o *)CommandSpellEntity__getDataValsList((CommandSpellEntity_o *)v9, 0);
  if ( !v27 )
    goto LABEL_34;
  System_Collections_Generic_List_object___AddRange(
    v27,
    (System_Collections_Generic_IEnumerable_T__o *)skillId,
    (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_DataVals__AddRange__);
  BattleLogicSkill__SetCommandSpellAddFunctionData(
    this,
    v9->fields.m_CachedPtr,
    task->fields.ptTarget,
    v26,
    (System_Collections_Generic_List_DataVals__o *)v27,
    v28);
  logicfunction = this->fields.logicfunction;
  v30 = System_Collections_Generic_List_int___ToArray(
          v26,
          (const MethodInfo_4468CF0 *)Method_System_Collections_Generic_List_int__ToArray__);
  v31 = System_Collections_Generic_List_object___ToArray(
          v27,
          (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_DataVals__ToArray__);
  skillId = (BattleData_o *)((__int64 (__fastcall *)(struct BattleSkillInfoData_o *, const MethodInfo *))skillInfo->klass->vtable._5_get_skillId.methodPtr)(
                              skillInfo,
                              skillInfo->klass->vtable._5_get_skillId.method);
  if ( !logicfunction )
    goto LABEL_34;
  skillId = (BattleData_o *)BattleLogicFunction__procList(
                              logicfunction,
                              (BattleActionData_o *)v6,
                              v30,
                              (DataVals_array *)v31,
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
  v32 = (BattleActionData_o *)skillId;
  BattleLogic__updateConditionsBuffAll(this->fields.logic, 0, 0, 0);
  data = this->fields.data;
  if ( !data )
    goto LABEL_34;
  actionLogManager = data->fields.actionLogManager;
  if ( !actionLogManager )
    goto LABEL_34;
  klass = actionLogManager->klass;
  v36 = *(unsigned __int16 *)&actionLogManager->klass->_2.rank;
  if ( *(_WORD *)&actionLogManager->klass->_2.rank )
  {
    p_offset = (BattleActionLogManagerInterface_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != BattleActionLogManagerInterface_TypeInfo )
    {
      --v36;
      p_offset += 2;
      if ( !v36 )
        goto LABEL_23;
    }
    v38 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 6];
  }
  else
  {
LABEL_23:
    v38 = sub_224BC3C(actionLogManager, BattleActionLogManagerInterface_TypeInfo, 6);
  }
  (*(void (__fastcall **)(struct BattleActionLogManagerInterface_o *, BattleLogicTask_o *, _QWORD))v38)(
    actionLogManager,
    task,
    *(_QWORD *)(v38 + 8));
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
    sub_2213CDC(skillId, task);
  }
LABEL_29:
  if ( !v32 )
    goto LABEL_34;
  skillId = (BattleData_o *)v32->fields.funcTargetList;
  if ( !skillId )
    goto LABEL_34;
  v42 = this->fields.data;
  actorId = v32->fields.actorId;
  skillId = (BattleData_o *)System_Collections_Generic_List_int___ToArray(
                              (System_Collections_Generic_List_int__o *)skillId,
                              (const MethodInfo_4468CF0 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !v42 )
    goto LABEL_34;
  BattleData__SetFunctionedTargetIdArray(v42, actorId, (System_Int32_array *)skillId, 0);
  v44 = this->fields.logic;
  if ( !v44 )
    goto LABEL_34;
  FunctionedFunctionBuffTaskArray = BattleLogic__GetFunctionedFunctionBuffTaskArray(
                                      this->fields.logic,
                                      this->fields.data,
                                      0);
  BattleLogic__addBattleLogicTask(v44, FunctionedFunctionBuffTaskArray, 0);
  return v32;
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

  logic = this->fields.logic;
  baseActionData = 0;
  v5 = BattleLogicSkill__createSkillData_54261512(this, task, 0, 0, &baseActionData, v3);
  if ( !logic )
    sub_2213CDC(v5, v6);
  return BattleLogic__PrevReturnCreateActionData(logic, v5, baseActionData, 0);
}


BattleActionData_o *BattleLogicSkill__createSkillData_54261512(
        BattleLogicSkill_o *this,
        BattleLogicTask_o *task,
        bool fromSkillCopyFunc,
        DataVals_o *baseVals,
        BattleActionData_o **baseActionData,
        const MethodInfo *method)
{
  BattleLogicTask_o *v9; // x19
  BattleLogicSkill_o *v10; // x21
  BattleActionData_o *v11; // x20
  BattleActionData_o *v12; // x27
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  int32_t *skillInfo; // x22
  DataMasterBase_TMaster__TEntity__PKType__o *v20; // x20
  SkillEntity_o *Entity; // x23
  Il2CppObject *MasterData_object; // x26
  BattleActionData_c *v23; // x8
  SkillLvEntity_o *v24; // x29
  struct BattleActionData_StaticFields *static_fields; // x9
  __int64 naturalAligment; // x10
  struct System_Int32_array *actorIdlist; // x8
  BattleLogicSkill_o *v28; // x26
  char v29; // w26
  struct System_Int32_array *v30; // x8
  int v31; // w8
  BattleData_o *data; // x20
  BattleServantData_o *EnemyServantData; // x0
  __int64 v34; // x1
  __int64 v35; // x20
  __int64 v36; // x29
  struct System_Int32_array *v37; // x8
  const MethodInfo *v38; // x1
  struct System_Int32_array *ptTarget; // x1
  System_String_o *v40; // x2
  System_String_o *v41; // x3
  int32_t v42; // w4
  int32_t v43; // w5
  bool v44; // w6
  bool v45; // w7
  const MethodInfo *v46; // x3
  System_String_o *SkillMessage; // x0
  System_String_o *v48; // x2
  System_String_o *v49; // x3
  int32_t v50; // w4
  int32_t v51; // w5
  bool v52; // w6
  bool v53; // w7
  System_String_o *v54; // x2
  System_String_o *v55; // x3
  int32_t v56; // w4
  int32_t v57; // w5
  bool v58; // w6
  bool v59; // w7
  int32_t playerAttackPreselectTargetUniqueId; // w8
  System_String_o *v61; // x2
  System_String_o *v62; // x3
  int32_t v63; // w4
  int32_t v64; // w5
  bool v65; // w6
  bool v66; // w7
  bool v67; // w0
  System_String_array *gimmickStartVoices; // x26
  System_Object_array *gimmickResultVoices; // x29
  System_Int32_array *gimmickAnimTypes; // x4
  struct System_String_o *motionMessage; // x1
  MissionNaviTransitionBoardItem_o *p_motionMessage; // x0
  System_String_o *v73; // x2
  System_String_o *v74; // x3
  int32_t v75; // w4
  int32_t v76; // w5
  bool v77; // w6
  bool v78; // w7
  struct System_Int32_array *effectList; // x1
  int logic; // w8
  BattleLogicSkill_o *v81; // x26
  int v82; // w9
  __int64 v83; // x12
  BattleLogicFunction_o *v84; // x28
  System_Int32_array *funcId; // x20
  int32_t v86; // w8
  const MethodInfo *v87; // x6
  _BOOL4 v88; // w24
  struct System_Int32_array *v89; // x8
  int32_t v90; // w5
  struct BattleData_o *v91; // x8
  bool v92; // w8
  __int64 argument; // x26
  BattleLogicFunction_SkillSideEffectFunctionArgument_o *overwriteFuncSideEffectArg; // x20
  bool v95; // w23
  char v96; // w8
  System_Int32_array *v97; // x28
  DataVals_array *v98; // x29
  BattleLogicFunction_o *logicfunction; // x20
  __int64 v100; // x1
  int v101; // w28
  UnityEngine_Object_o *logictarget; // x20
  System_String_o *v103; // x2
  System_String_o *v104; // x3
  int32_t v105; // w4
  int32_t v106; // w5
  bool v107; // w6
  bool v108; // w7
  struct BattleLogic_o *v109; // x8
  UnityEngine_GameObject_o *ServantGameObject; // x0
  System_String_o *v111; // x2
  System_String_o *v112; // x3
  int32_t v113; // w4
  int32_t v114; // w5
  bool v115; // w6
  bool v116; // w7
  struct BattleLogicFunction_o *v117; // x1
  int32_t v118; // w20
  BattleData_o *v119; // x29
  bool isEnemyID; // w0
  struct BattleLogic_o *v121; // x8
  __int64 v122; // x1
  BattleData_o *v123; // x0
  int32_t current; // w28
  BattleServantData_o *ServantData; // x0
  struct BattleLogic_o *v126; // x8
  __int64 v127; // x1
  UnityEngine_Object_o *v128; // x20
  System_String_o *v129; // x2
  System_String_o *v130; // x3
  int32_t v131; // w4
  int32_t v132; // w5
  bool v133; // w6
  bool v134; // w7
  _BOOL4 isShowBattlePointEffect; // w20
  struct BattleData_o *v136; // x8
  struct BattleActionLogManagerInterface_o *actionLogManager; // x27
  BattleActionLogManagerInterface_c *klass; // x8
  __int64 v139; // x9
  BattleActionLogManagerInterface_c **p_offset; // x10
  __int64 v141; // x0
  System_String_o *v142; // x2
  System_String_o *v143; // x3
  int32_t v144; // w4
  int32_t v145; // w5
  bool v146; // w6
  bool v147; // w7
  struct BattleLogicFunction_o *v148; // x1
  int32_t v149; // w1
  System_String_o *v150; // x2
  System_String_o *v151; // x3
  int32_t v152; // w4
  int32_t v153; // w5
  bool v154; // w6
  bool v155; // w7
  BattleLogicSkill_o *v156; // x27
  System_String_o *v157; // x2
  System_String_o *v158; // x3
  int32_t v159; // w4
  int32_t v160; // w5
  bool v161; // w6
  bool v162; // w7
  struct BattleLogicFunction_o *v163; // x1
  int32_t v164; // w1
  System_String_o *v165; // x2
  System_String_o *v166; // x3
  int32_t v167; // w4
  int32_t v168; // w5
  bool v169; // w6
  bool v170; // w7
  struct System_Int32_array *v171; // x8
  int32_t v172; // w20
  struct System_Int32_array *v173; // x8
  BattleLogicSkill_o *v174; // x27
  BattleData_o *v175; // x20
  int32_t v176; // w28
  struct BattleLogic_o *v177; // x20
  BattleLogicTask_array *v178; // x0
  BattleData_o *v179; // x27
  const MethodInfo *v180; // x4
  struct System_Int32_array *v181; // x8
  int32_t v182; // w20
  BattleLogic_o *v183; // x20
  BattleLogicTask_array *FunctionedFunctionBuffTaskArray; // x0
  BattleLogicTask_o *v185; // x20
  bool IsAdditionalSkillInsertCurrentSkillAfter; // w8
  BattleData_o *v187; // x20
  struct BattleLogic_o *v188; // x8
  BattleEventTutorial_o *eventTutorial; // x20
  int32_t v190; // w0
  BattleLogicTask_o *v191; // x20
  const MethodInfo *v192; // x1
  System_String_o *v193; // x2
  System_String_o *v194; // x3
  int32_t v195; // w4
  int32_t v196; // w5
  bool v197; // w6
  bool v198; // w7
  struct BattleLogic_o *v199; // x8
  BattlePerformance_o *perf; // x20
  float CutinAdditionalTime; // s0
  struct BattleData_o *v202; // x8
  struct BattlePerformance_o *v203; // x8
  System_String_o *v204; // x2
  System_String_o *v205; // x3
  int32_t v206; // w4
  int32_t v207; // w5
  bool v208; // w6
  bool v209; // w7
  const MethodInfo *v210; // x3
  BattleLogicTask_o *v211; // x20
  const MethodInfo *v212; // x1
  struct System_Int32_array *v213; // x8
  int32_t v214; // w2
  const MethodInfo *v215; // x2
  struct BattleLogic_o *v216; // x20
  struct BattleLogic_o *v217; // x8
  struct BattlePerformance_o *v218; // x9
  struct System_Int32_array *v219; // x8
  BattleServantData_o *v220; // x0
  SkillEntity_o *v222; // [xsp+30h] [xbp-C0h]
  SkillLvMaster_o *skillLvMst; // [xsp+38h] [xbp-B8h]
  SkillLvEntity_o *v224; // [xsp+40h] [xbp-B0h]
  System_Collections_Generic_List_Enumerator_int__o v225; // [xsp+48h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v226; // [xsp+60h] [xbp-90h] BYREF
  DataVals_array *dataValsArray; // [xsp+80h] [xbp-70h] BYREF
  System_Int32_array *functionIdArray; // [xsp+88h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v229; // 0:x0.16

  v9 = task;
  v10 = this;
  if ( (byte_5973CF8 & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_IndexValue_int___);
    sub_2213A60(&BattleActionData_TypeInfo);
    sub_2213A60(&BattleActionLogManagerInterface_TypeInfo);
    sub_2213A60(&BattleBoostItemInfoData_TypeInfo);
    sub_2213A60(&BattleLogicTask_TypeInfo);
    sub_2213A60(&CheckUpdateShiftTask_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_2213A60(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_2213A60(&BattleLogicFunction_FunctionArgument_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&BattleLogicFunction_SkillSideEffectFunctionArgument_TypeInfo);
    this = (BattleLogicSkill_o *)sub_2213A60(&StringLiteral_1/*""*/);
    byte_5973CF8 = 1;
  }
  dataValsArray = 0;
  functionIdArray = 0;
  memset(&v226, 0, sizeof(v226));
  if ( !v9 )
    goto LABEL_260;
  if ( v9->fields.IsResetWasAttackTargetId )
  {
    this = (BattleLogicSkill_o *)v10->fields.data;
    if ( !this )
      goto LABEL_260;
    BattleData__ResetWasAttackTargetId((BattleData_o *)this, 0);
  }
  if ( v9->fields.IsResetFunctionedFunctionIds )
  {
    this = (BattleLogicSkill_o *)v10->fields.data;
    if ( !this )
      goto LABEL_260;
    BattleData__ResetFunctionedFunctionIds((BattleData_o *)this, 0);
  }
  v11 = (BattleActionData_o *)sub_2213CCC(BattleActionData_TypeInfo);
  BattleActionData___ctor(v11, 0);
  if ( !v11 )
    goto LABEL_260;
  v12 = BattleActionData__AddDisplayTriggerIntervalBuff(v11, v9, 0);
  *baseActionData = v12;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)baseActionData, (int32_t)v12, v13, v14, v15, v16, v17, v18);
  if ( !v12 )
    goto LABEL_260;
  v12->fields.taskActorType = v9->fields.actortype;
  skillInfo = (int32_t *)v9->fields.skillInfo;
  this = (BattleLogicSkill_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_260;
  this = (BattleLogicSkill_o *)DataManager__GetMasterData_object_(
                                 (DataManager_o *)this,
                                 (const MethodInfo_385636C *)Method_DataManager_GetMasterData_SkillMaster___);
  if ( !skillInfo )
    goto LABEL_260;
  v20 = (DataMasterBase_TMaster__TEntity__PKType__o *)this;
  this = (BattleLogicSkill_o *)(*(__int64 (__fastcall **)(int32_t *, _QWORD))(*(_QWORD *)skillInfo + 392LL))(
                                 skillInfo,
                                 *(_QWORD *)(*(_QWORD *)skillInfo + 400LL));
  if ( !v20 )
    goto LABEL_260;
  Entity = (SkillEntity_o *)DataMasterBase_object__object__int___GetEntity(
                              v20,
                              (int32_t)this,
                              (const MethodInfo_3F10B30 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  this = (BattleLogicSkill_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_260;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)this,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_SkillLvMaster___);
  this = (BattleLogicSkill_o *)(*(__int64 (__fastcall **)(int32_t *, _QWORD))(*(_QWORD *)skillInfo + 392LL))(
                                 skillInfo,
                                 *(_QWORD *)(*(_QWORD *)skillInfo + 400LL));
  if ( !MasterData_object )
    goto LABEL_260;
  this = (BattleLogicSkill_o *)SkillLvMaster__GetEntity(
                                 (SkillLvMaster_o *)MasterData_object,
                                 (int32_t)this,
                                 skillInfo[9],
                                 0);
  v23 = BattleActionData_TypeInfo;
  v24 = (SkillLvEntity_o *)this;
  v12->fields.isCounter = v9->fields.isCounter;
  if ( !*(&v23->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v23, task);
    v23 = BattleActionData_TypeInfo;
  }
  static_fields = v23->static_fields;
  v12->fields.type = static_fields->TYPE_SKILL;
  if ( skillInfo[4] == 21 )
  {
    if ( !*(&v23->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v23, task);
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
  skillLvMst = (SkillLvMaster_o *)MasterData_object;
  if ( v9->fields.checkAlive )
  {
    actorIdlist = v9->fields.actorIdlist;
    this = (BattleLogicSkill_o *)v10->fields.data;
    if ( actorIdlist )
    {
      if ( !LODWORD(actorIdlist->max_length) )
        goto LABEL_261;
      task = (BattleLogicTask_o *)(unsigned int)actorIdlist->m_Items[0];
      if ( !this )
        goto LABEL_260;
    }
    else
    {
      task = (BattleLogicTask_o *)0xFFFFFFFFLL;
      if ( !this )
        goto LABEL_260;
    }
    this = (BattleLogicSkill_o *)BattleData__getServantData((BattleData_o *)this, (int32_t)task, 0);
    if ( this )
    {
      this = (BattleLogicSkill_o *)BattleServantData__isAlive((BattleServantData_o *)this, 0, 0);
      v28 = 0;
      if ( ((unsigned __int8)this & 1) == 0 )
        return (BattleActionData_o *)v28;
    }
  }
  if ( v9->fields.isForcedSpeedOne )
  {
    v29 = 1;
  }
  else
  {
    if ( !Entity )
      goto LABEL_260;
    this = (BattleLogicSkill_o *)SkillEntity__isForcedSkillSpeedOne(Entity, 0);
    if ( ((unsigned __int8)this & 1) == 0 )
      goto LABEL_41;
    this = (BattleLogicSkill_o *)v10->fields.data;
    if ( !this )
      goto LABEL_260;
    this = (BattleLogicSkill_o *)BattleData__checkEnablePlaySpeedOneFromSkillIdList(
                                   (BattleData_o *)this,
                                   Entity->fields.id,
                                   0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      this = (BattleLogicSkill_o *)SkillEntity__isForcedSkillSpeedOne(Entity, 0);
      v29 = (char)this;
    }
    else
    {
LABEL_41:
      v29 = 0;
    }
  }
  v30 = v9->fields.actorIdlist;
  if ( v30 )
  {
    if ( !LODWORD(v30->max_length) )
      goto LABEL_261;
    v31 = v30->m_Items[0];
  }
  else
  {
    v31 = -1;
  }
  v12->fields.actorId = v31;
  if ( !v24 )
    goto LABEL_260;
  data = v10->fields.data;
  this = (BattleLogicSkill_o *)SkillLvEntity__GetActNpcServantId(v24, 0);
  if ( !data )
    goto LABEL_260;
  EnemyServantData = BattleData__getEnemyServantData(data, (int32_t)this, 0);
  v224 = v24;
  if ( EnemyServantData && (EnemyServantData->fields.uniqueId & 0x80000000) == 0 )
  {
    v35 = *(_QWORD *)&EnemyServantData->fields.svtId.fields.currentCryptoKey;
    v36 = *(_QWORD *)&EnemyServantData->fields.svtId.fields.fakeValue;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v34);
    *(_QWORD *)&v229.fields.currentCryptoKey = v35;
    *(_QWORD *)&v229.fields.fakeValue = v36;
    v24 = v224;
    v12->fields.actorId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v229, 0);
  }
  v37 = v9->fields.actorIdlist;
  this = (BattleLogicSkill_o *)v10->fields.data;
  if ( v37 )
  {
    if ( !LODWORD(v37->max_length) )
      goto LABEL_261;
    task = (BattleLogicTask_o *)(unsigned int)v37->m_Items[0];
    if ( !this )
      goto LABEL_260;
  }
  else
  {
    task = (BattleLogicTask_o *)0xFFFFFFFFLL;
    if ( !this )
      goto LABEL_260;
  }
  this = (BattleLogicSkill_o *)BattleData__getServantId((BattleData_o *)this, (int32_t)task, 0);
  if ( !Entity )
    goto LABEL_260;
  v12->fields.motionId = SkillEntity__GetMotionId(Entity, (int32_t)this, 0);
  v12->fields.targetId = BattleLogicTask__getTarget(v9, v38);
  ptTarget = v9->fields.ptTarget;
  v12->fields.pttargetIds = ptTarget;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v12->fields.pttargetIds,
    (int32_t)ptTarget,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
  SkillMessage = BattleLogicSkill__GetSkillMessage(v10, v12->fields.actorId, Entity, v46);
  v12->fields.skillMessage = SkillMessage;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v12->fields.skillMessage,
    (int32_t)SkillMessage,
    v48,
    v49,
    v50,
    v51,
    v52,
    v53);
  v12->fields.skillInfo = (struct BattleSkillInfoData_o *)skillInfo;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v12->fields.skillInfo,
    (int32_t)skillInfo,
    v54,
    v55,
    v56,
    v57,
    v58,
    v59);
  v12->fields.isPlayerAttackPreselectTargetExecution = v9->fields.isPlayerAttackPreselectTargetExecution;
  playerAttackPreselectTargetUniqueId = v9->fields.playerAttackPreselectTargetUniqueId;
  v12->fields.isForcedSpeedOne = v29 & 1;
  v12->fields.playerAttackPreselectTargetUniqueId = playerAttackPreselectTargetUniqueId;
  v12->fields.checkRevengeId = v9->fields.checkRevengeId;
  v67 = SkillEntity__IsSkipCameraReset(Entity, 0)
     || SkillEntity__TryGetSkipCameraResetStates(Entity, &v12->fields.SkipCameraResetStateNames, 0);
  v12->fields.IsSkipCameraReset = v67;
  if ( v9->fields.gimmickIndexArray )
  {
    gimmickStartVoices = v9->fields.gimmickStartVoices;
    if ( !gimmickStartVoices )
    {
      this = (BattleLogicSkill_o *)v10->fields.data;
      if ( !this )
        goto LABEL_260;
      gimmickStartVoices = BattleData__GetGimmickStartVoiceArray((BattleData_o *)this, 0);
    }
    gimmickResultVoices = v9->fields.gimmickResultVoices;
    if ( !gimmickResultVoices )
    {
      this = (BattleLogicSkill_o *)v10->fields.data;
      if ( !this )
        goto LABEL_260;
      gimmickResultVoices = BattleData__GetGimmickResultVoiceArray((BattleData_o *)this, 0);
    }
    gimmickAnimTypes = v9->fields.gimmickAnimTypes;
    if ( !gimmickAnimTypes )
    {
      this = (BattleLogicSkill_o *)v10->fields.data;
      if ( !this )
        goto LABEL_260;
      gimmickAnimTypes = BattleData__GetGimmickAnimTypeArray((BattleData_o *)this, 0);
    }
    BattleActionData__SetGimmickData(
      v12,
      v9->fields.gimmickIndexArray,
      gimmickStartVoices,
      gimmickResultVoices,
      gimmickAnimTypes,
      v9->fields.gimmickObjName,
      v9->fields.gimmickSvtId,
      v9->fields.gimmickReelIcons,
      v9->fields.gimmickFixedReelOrder,
      0);
    v24 = v224;
  }
  motionMessage = v9->fields.motionMessage;
  if ( motionMessage && motionMessage->fields._stringLength >= 1 )
  {
    v12->fields.motionMessage = motionMessage;
    p_motionMessage = (MissionNaviTransitionBoardItem_o *)&v12->fields.motionMessage;
  }
  else
  {
    LODWORD(motionMessage) = 0;
    v12->fields.motionMessage = 0;
    p_motionMessage = (MissionNaviTransitionBoardItem_o *)&v12->fields.motionMessage;
  }
  sub_2213A04(p_motionMessage, (int32_t)motionMessage, v61, v62, v63, v64, v65, v66);
  if ( (v9->fields.actortype | 4) == 5 )
    BattleActionData__setStateField(v12, 0);
  effectList = Entity->fields.effectList;
  v12->fields.effectlist = effectList;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v12->fields.effectlist,
    (int32_t)effectList,
    v73,
    v74,
    v75,
    v76,
    v77,
    v78);
  this = (BattleLogicSkill_o *)v10->fields.logic;
  if ( !this )
LABEL_260:
    sub_2213CDC(this, task);
  BattleLogic__updateResultServant((BattleLogic_o *)this, 0);
  if ( skillInfo[4] != 21 )
  {
    v86 = skillInfo[23];
    if ( (v86 & 0x80000000) == 0 )
      v12->fields.commandType = v86;
    functionIdArray = v24->fields.funcId;
    this = (BattleLogicSkill_o *)SkillLvEntity__getDataValsList(v24, 0);
    dataValsArray = (DataVals_array *)this;
    v88 = baseVals != 0 && fromSkillCopyFunc;
    if ( v88 )
    {
      v89 = v9->fields.actorIdlist;
      if ( v89 )
      {
        if ( !LODWORD(v89->max_length) )
          goto LABEL_261;
        v90 = v89->m_Items[0];
      }
      else
      {
        v90 = -1;
      }
      if ( !BattleLogicSkill__SetSkillCopyFunction(v10, v24, baseVals, &functionIdArray, &dataValsArray, v90, v87) )
        return 0;
      this = (BattleLogicSkill_o *)v10->fields.data;
      if ( !this )
        goto LABEL_260;
      this = (BattleLogicSkill_o *)BattleData__isEnemyID((BattleData_o *)this, v12->fields.actorId, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v91 = v10->fields.data;
        if ( !v91 )
          goto LABEL_260;
        v92 = v91->fields.currentTurn == 0;
      }
      else
      {
        v92 = 0;
      }
      v12->fields.isReversalShortBuffTurn = v92;
    }
    v222 = Entity;
    if ( skillInfo[4] == 1 )
    {
      argument = sub_2213CCC(BattleLogicFunction_FunctionArgument_TypeInfo);
      BattleLogicFunction_FunctionArgument___ctor((BattleLogicFunction_FunctionArgument_o *)argument, 0);
      if ( !argument )
        goto LABEL_260;
      *(_DWORD *)(argument + 20) = skillInfo[4];
      if ( !v9->fields.isSideEffectTriggerSkill )
      {
LABEL_113:
        if ( !v9->fields.isShowBattlePointEffect )
        {
          v95 = fromSkillCopyFunc;
          goto LABEL_117;
        }
        v95 = fromSkillCopyFunc;
        v96 = 1;
LABEL_115:
        *(_BYTE *)(argument + 40) = v96;
LABEL_117:
        v98 = dataValsArray;
        v97 = functionIdArray;
        *(_BYTE *)(argument + 60) = 1;
        *(_QWORD *)(argument + 72) = *((_QWORD *)skillInfo + 21);
        logicfunction = v10->fields.logicfunction;
        this = (BattleLogicSkill_o *)(*(__int64 (__fastcall **)(int32_t *, _QWORD))(*(_QWORD *)skillInfo + 392LL))(
                                       skillInfo,
                                       *(_QWORD *)(*(_QWORD *)skillInfo + 400LL));
        if ( !logicfunction )
          goto LABEL_260;
        this = (BattleLogicSkill_o *)BattleLogicFunction__procList(
                                       logicfunction,
                                       v12,
                                       v97,
                                       v98,
                                       0,
                                       1,
                                       0,
                                       0,
                                       0,
                                       !v88,
                                       1,
                                       (BattleLogicFunction_FunctionArgument_o *)argument,
                                       (int32_t)this,
                                       0);
        fromSkillCopyFunc = v95;
        Entity = v222;
        v24 = v224;
        goto LABEL_119;
      }
    }
    else
    {
      if ( !v9->fields.isSideEffectTriggerSkill )
      {
        isShowBattlePointEffect = v9->fields.isShowBattlePointEffect;
        argument = sub_2213CCC(BattleLogicFunction_FunctionArgument_TypeInfo);
        BattleLogicFunction_FunctionArgument___ctor((BattleLogicFunction_FunctionArgument_o *)argument, 0);
        if ( !isShowBattlePointEffect )
        {
          v95 = fromSkillCopyFunc;
          if ( !argument )
            goto LABEL_260;
          goto LABEL_117;
        }
        if ( !argument )
          goto LABEL_260;
        v96 = v9->fields.isShowBattlePointEffect;
        v95 = fromSkillCopyFunc;
        goto LABEL_115;
      }
      argument = sub_2213CCC(BattleLogicFunction_FunctionArgument_TypeInfo);
      BattleLogicFunction_FunctionArgument___ctor((BattleLogicFunction_FunctionArgument_o *)argument, 0);
    }
    overwriteFuncSideEffectArg = (BattleLogicFunction_SkillSideEffectFunctionArgument_o *)v9->fields.overwriteFuncSideEffectArg;
    if ( !overwriteFuncSideEffectArg )
    {
      overwriteFuncSideEffectArg = (BattleLogicFunction_SkillSideEffectFunctionArgument_o *)sub_2213CCC(BattleLogicFunction_SkillSideEffectFunctionArgument_TypeInfo);
      BattleLogicFunction_SkillSideEffectFunctionArgument___ctor(overwriteFuncSideEffectArg, 0);
    }
    if ( !argument )
      goto LABEL_260;
    BattleLogicFunction_FunctionArgument__SetAfterFuncSideEffectArgument(
      (BattleLogicFunction_FunctionArgument_o *)argument,
      (BattleLogicFunction_FuncSideEffectFunctionArgument_o *)overwriteFuncSideEffectArg,
      0);
    goto LABEL_113;
  }
  this = (BattleLogicSkill_o *)SkillLvEntity__getDataValsList(v24, 0);
  if ( !this )
    goto LABEL_260;
  logic = (int)this->fields.logic;
  v81 = this;
  if ( logic >= 1 )
  {
    v82 = 0;
    while ( logic != v82 )
    {
      v83 = *((_QWORD *)&this->fields.logictarget + v82);
      if ( !v83 )
        goto LABEL_260;
      ++v82;
      *(_BYTE *)(v83 + 72) = 1;
      if ( (logic & ~(logic >> 31)) == v82 )
        goto LABEL_87;
    }
LABEL_261:
    sub_2213CE4(this);
  }
LABEL_87:
  v84 = v10->fields.logicfunction;
  funcId = v24->fields.funcId;
  this = (BattleLogicSkill_o *)(*(__int64 (__fastcall **)(int32_t *, _QWORD))(*(_QWORD *)skillInfo + 392LL))(
                                 skillInfo,
                                 *(_QWORD *)(*(_QWORD *)skillInfo + 400LL));
  if ( !v84 )
    goto LABEL_260;
  this = (BattleLogicSkill_o *)BattleLogicFunction__procList(
                                 v84,
                                 v12,
                                 funcId,
                                 (DataVals_array *)v81,
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
LABEL_119:
  v28 = this;
  if ( v9->fields.actortype == 5 )
  {
    if ( !this )
      goto LABEL_260;
    v101 = BasicHelper__IndexValue_int__58805096(
             (System_Collections_Generic_List_T__o *)this[6].fields.logic,
             0,
             0,
             (const MethodInfo_3814B68 *)Method_BasicHelper_IndexValue_int___);
    logictarget = (UnityEngine_Object_o *)v28[1].fields.logictarget;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v100);
    this = (BattleLogicSkill_o *)UnityEngine_Object__op_Equality(logictarget, 0, 0);
    if ( v101 >= 1 && ((unsigned __int8)this & 1) != 0 )
    {
      v109 = v10->fields.logic;
      if ( !v109 )
        goto LABEL_260;
      this = (BattleLogicSkill_o *)v109->fields.perf;
      if ( !this )
        goto LABEL_260;
      ServantGameObject = BattlePerformance__getServantGameObject((BattlePerformance_o *)this, v101, 0);
      v28[1].fields.logictarget = (struct BattleLogicTarget_o *)ServantGameObject;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v28[1].fields.logictarget,
        (int32_t)ServantGameObject,
        v111,
        v112,
        v113,
        v114,
        v115,
        v116);
    }
    v117 = (struct BattleLogicFunction_o *)v28[1].fields.logictarget;
    v28[1].fields.logicfunction = v117;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v28[1].fields.logicfunction,
      (int32_t)v117,
      v103,
      v104,
      v105,
      v106,
      v107,
      v108);
    this = (BattleLogicSkill_o *)SkillEntity__GetCameraFocusTargetPosition(Entity, 0);
    if ( v101 < 1 || (v118 = (_DWORD)this - 1, (_DWORD)this - 1 < 0) )
    {
      if ( v101 >= 1 )
      {
        this = (BattleLogicSkill_o *)v28[6].fields.logic;
        if ( !this )
          goto LABEL_260;
        System_Collections_Generic_List_int___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v225,
          (System_Collections_Generic_List_int__o *)this,
          (const MethodInfo_4467D20 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
        v226 = v225;
        v225.fields._list = 0;
        *(_QWORD *)&v225.fields._index = &v226;
        do
        {
          if ( !System_Collections_Generic_List_Enumerator_int___MoveNext(
                  &v226,
                  (const MethodInfo_40F5CBC *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
          {
            System_Collections_Generic_List_Enumerator_int___Dispose(
              &v226,
              (const MethodInfo_40F5CB8 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
            goto LABEL_156;
          }
          v123 = v10->fields.data;
          if ( !v123 )
            sub_2213CDC(0, v122);
          current = v226.fields._current;
          ServantData = BattleData__getServantData(v123, v226.fields._current, 0);
        }
        while ( !ServantData || !BattleServantData__isAlive(ServantData, 0, 0) );
        System_Collections_Generic_List_Enumerator_int___Dispose(
          &v226,
          (const MethodInfo_40F5CB8 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
        if ( current >= 1 )
        {
          v126 = v10->fields.logic;
          if ( v126 )
          {
            this = (BattleLogicSkill_o *)v126->fields.perf;
            if ( this )
            {
              LODWORD(task) = current;
              goto LABEL_148;
            }
          }
          goto LABEL_260;
        }
      }
    }
    else
    {
      v119 = v10->fields.data;
      if ( !v119 )
        goto LABEL_260;
      isEnemyID = BattleData__isEnemyID(v10->fields.data, v101, 0);
      this = (BattleLogicSkill_o *)BattleData__GetUniqueIdByEntryIndex(v119, v118, isEnemyID, 0);
      v24 = v224;
      if ( (int)this >= 1 )
      {
        v121 = v10->fields.logic;
        if ( !v121 )
          goto LABEL_260;
        task = (BattleLogicTask_o *)(unsigned int)this;
        this = (BattleLogicSkill_o *)v121->fields.perf;
        if ( !this )
          goto LABEL_260;
LABEL_148:
        v128 = (UnityEngine_Object_o *)BattlePerformance__getServantGameObject(
                                         (BattlePerformance_o *)this,
                                         (int32_t)task,
                                         0);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v127);
        if ( UnityEngine_Object__op_Inequality(v128, 0, 0) )
        {
          v28[1].fields.logicfunction = (struct BattleLogicFunction_o *)v128;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&v28[1].fields.logicfunction,
            (int32_t)v128,
            v129,
            v130,
            v131,
            v132,
            v133,
            v134);
        }
      }
    }
  }
LABEL_156:
  (*(void (__fastcall **)(int32_t *, _QWORD))(*(_QWORD *)skillInfo + 552LL))(
    skillInfo,
    *(_QWORD *)(*(_QWORD *)skillInfo + 560LL));
  BattleSkillInfoData__UpdateSelectAddIndex((BattleSkillInfoData_o *)skillInfo, -1, 0);
  this = (BattleLogicSkill_o *)v10->fields.logic;
  if ( !this )
    goto LABEL_260;
  BattleLogic__updateConditionsBuffAll((BattleLogic_o *)this, 0, 0, 0);
  if ( v9->fields.IsResetPrevAttackInfo )
  {
    if ( !v28 )
      goto LABEL_260;
    BYTE4(v28[2].monitor) = 0;
    this = (BattleLogicSkill_o *)v10->fields.data;
    if ( !this )
      goto LABEL_260;
    BattleData__setCommandAttack((BattleData_o *)this, 0, 0, 0);
  }
  v136 = v10->fields.data;
  if ( !v136 )
    goto LABEL_260;
  actionLogManager = v136->fields.actionLogManager;
  if ( !actionLogManager )
    goto LABEL_260;
  klass = actionLogManager->klass;
  v139 = *(unsigned __int16 *)&actionLogManager->klass->_2.rank;
  if ( *(_WORD *)&actionLogManager->klass->_2.rank )
  {
    p_offset = (BattleActionLogManagerInterface_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != BattleActionLogManagerInterface_TypeInfo )
    {
      --v139;
      p_offset += 2;
      if ( !v139 )
        goto LABEL_167;
    }
    v141 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 5];
  }
  else
  {
LABEL_167:
    v141 = sub_224BC3C(actionLogManager, BattleActionLogManagerInterface_TypeInfo, 5);
  }
  this = (BattleLogicSkill_o *)(*(__int64 (__fastcall **)(struct BattleActionLogManagerInterface_o *, BattleLogicTask_o *, _QWORD))v141)(
                                 actionLogManager,
                                 v9,
                                 *(_QWORD *)(v141 + 8));
  if ( !v28 )
    goto LABEL_260;
  if ( BattleActionData__isSkillCutIn((BattleActionData_o *)v28, 0) )
  {
    v148 = v28[2].fields.logicfunction;
    v28[11].fields.logicfunction = v148;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v28[11].fields.logicfunction,
      (int32_t)v148,
      v142,
      v143,
      v144,
      v145,
      v146,
      v147);
    v149 = (int)StringLiteral_1/*""*/;
    v28[2].fields.logicfunction = (struct BattleLogicFunction_o *)StringLiteral_1/*""*/;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v28[2].fields.logicfunction,
      v149,
      v150,
      v151,
      v152,
      v153,
      v154,
      v155);
    v156 = v28 + 3;
    if ( !System_String__IsNullOrEmpty((System_String_o *)v28[3].klass, 0) )
    {
      v163 = (struct BattleLogicFunction_o *)v156->klass;
      v28[11].fields.logicfunction = (struct BattleLogicFunction_o *)v156->klass;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v28[11].fields.logicfunction,
        (int32_t)v163,
        v157,
        v158,
        v159,
        v160,
        v161,
        v162);
      v164 = (int)StringLiteral_1/*""*/;
      v156->klass = (BattleLogicSkill_c *)StringLiteral_1/*""*/;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v28[3], v164, v165, v166, v167, v168, v169, v170);
    }
  }
  v171 = v9->fields.actorIdlist;
  v172 = skillInfo[4];
  this = (BattleLogicSkill_o *)v10->fields.data;
  if ( v171 )
  {
    if ( !LODWORD(v171->max_length) )
      goto LABEL_261;
    task = (BattleLogicTask_o *)(unsigned int)v171->m_Items[0];
    if ( !this )
      goto LABEL_260;
  }
  else
  {
    task = (BattleLogicTask_o *)0xFFFFFFFFLL;
    if ( !this )
      goto LABEL_260;
  }
  if ( BattleData__getServantData((BattleData_o *)this, (int32_t)task, 0) || v172 == 1 )
  {
    this = (BattleLogicSkill_o *)SkillLvEntity__IsNoTargetSkipSkill(v24, 0);
    if ( ((unsigned __int8)this & 1) == 0 )
      goto LABEL_184;
  }
  else
  {
    this = (BattleLogicSkill_o *)(&dword_0 + 1);
  }
  if ( !LOBYTE(v28[5].fields.data) )
    return 0;
LABEL_184:
  if ( BYTE1(v28[6].fields.logictarget) && !BYTE2(v28[6].fields.logictarget) )
    return 0;
  if ( v9->fields.isCanCounterTask )
  {
    v173 = v9->fields.actorIdlist;
    this = (BattleLogicSkill_o *)v10->fields.data;
    if ( v173 )
    {
      if ( !LODWORD(v173->max_length) )
        goto LABEL_261;
      task = (BattleLogicTask_o *)(unsigned int)v173->m_Items[0];
      if ( !this )
        goto LABEL_260;
    }
    else
    {
      task = (BattleLogicTask_o *)0xFFFFFFFFLL;
      if ( !this )
        goto LABEL_260;
    }
    this = (BattleLogicSkill_o *)BattleData__getServantData((BattleData_o *)this, (int32_t)task, 0);
    if ( this )
    {
      v174 = this;
      ((void (__fastcall *)(BattleLogicSkill_o *, struct BattleData_o *, Il2CppClass *))v28->klass[1]._1.element_class)(
        v28,
        v10->fields.data,
        v28->klass[1]._1.castClass);
      this = (BattleLogicSkill_o *)v28[6].fields.logic;
      if ( !this )
        goto LABEL_260;
      v175 = v10->fields.data;
      v176 = (int32_t)v174->fields.logic;
      this = (BattleLogicSkill_o *)System_Collections_Generic_List_int___ToArray(
                                     (System_Collections_Generic_List_int__o *)this,
                                     (const MethodInfo_4468CF0 *)Method_System_Collections_Generic_List_int__ToArray__);
      if ( !v175 )
        goto LABEL_260;
      BattleData__SetWasAttackTargetIdList(v175, v176, (System_Int32_array *)this, 0);
      v177 = v10->fields.logic;
      if ( !v177 )
        goto LABEL_260;
      this = (BattleLogicSkill_o *)v177->fields.logicnomal;
      if ( !this )
        goto LABEL_260;
      v178 = BattleLogicNomal__taskCounterFunc(
               (BattleLogicNomal_o *)this,
               v10->fields.data,
               BYTE3(v174[10].fields.logictarget) == 0,
               1,
               0,
               0);
      BattleLogic__AddBuffTriggeredTask_53756684(v177, v178, v9, 0);
    }
  }
  v179 = v10->fields.data;
  if ( v9->fields.isFunctionedFunction )
  {
    if ( !v179 )
      goto LABEL_260;
    BattleData__ResetFunctionedFunctionIds(v10->fields.data, 0);
  }
  else
  {
    v181 = v9->fields.actorIdlist;
    if ( v181 )
    {
      if ( !LODWORD(v181->max_length) )
        goto LABEL_261;
      v182 = v181->m_Items[0];
    }
    else
    {
      v182 = -1;
    }
    this = (BattleLogicSkill_o *)v28[6].fields.logic;
    if ( !this )
      goto LABEL_260;
    this = (BattleLogicSkill_o *)System_Collections_Generic_List_int___ToArray(
                                   (System_Collections_Generic_List_int__o *)this,
                                   (const MethodInfo_4468CF0 *)Method_System_Collections_Generic_List_int__ToArray__);
    if ( !v179 )
      goto LABEL_260;
    BattleData__SetFunctionedTargetIdArray(v179, v182, (System_Int32_array *)this, 0);
    v183 = v10->fields.logic;
    if ( !v183 )
      goto LABEL_260;
    FunctionedFunctionBuffTaskArray = BattleLogic__GetFunctionedFunctionBuffTaskArray(
                                        v10->fields.logic,
                                        v10->fields.data,
                                        0);
    BattleLogic__AddBuffTriggeredTask_53756684(v183, FunctionedFunctionBuffTaskArray, v9, 0);
  }
  v185 = BattleLogicSkill__MakeAddInvokeSkillTask(v10, skillLvMst, v24, v9, v180);
  IsAdditionalSkillInsertCurrentSkillAfter = SkillLvEntity__IsAdditionalSkillInsertCurrentSkillAfter(v24, 0);
  this = (BattleLogicSkill_o *)v10->fields.logic;
  if ( IsAdditionalSkillInsertCurrentSkillAfter )
  {
    if ( !this )
      goto LABEL_260;
    BattleLogic__AddTaskTargetTaskAfter((BattleLogic_o *)this, v9, v185, 0);
  }
  else
  {
    if ( !this )
      goto LABEL_260;
    BattleLogic__AddBuffTriggeredTask((BattleLogic_o *)this, v185, v9, 0);
  }
  v187 = v10->fields.data;
  this = (BattleLogicSkill_o *)(*(__int64 (__fastcall **)(int32_t *, _QWORD))(*(_QWORD *)skillInfo + 392LL))(
                                 skillInfo,
                                 *(_QWORD *)(*(_QWORD *)skillInfo + 400LL));
  if ( !v187 )
    goto LABEL_260;
  BattleData__AddUseSkillId(v187, (int32_t)this, 0);
  if ( !*((_BYTE *)skillInfo + 28) && v9->fields.actortype == 3 )
  {
    v188 = v10->fields.logic;
    if ( !v188 )
      goto LABEL_260;
    eventTutorial = v188->fields.eventTutorial;
    if ( eventTutorial )
    {
      v190 = (*(__int64 (__fastcall **)(int32_t *, _QWORD))(*(_QWORD *)skillInfo + 392LL))(
               skillInfo,
               *(_QWORD *)(*(_QWORD *)skillInfo + 400LL));
      BattleEventTutorial__ReserveFirstPlayerTurnAfterSkillTutorial(eventTutorial, v190, 0);
    }
  }
  if ( BattleActionData__checkSummonServantList((BattleActionData_o *)v28, 0) )
  {
    v191 = (BattleLogicTask_o *)sub_2213CCC(BattleLogicTask_TypeInfo);
    BattleLogicTask___ctor(v191, v192);
    if ( !v191 )
      goto LABEL_260;
    v191->fields.actiontype = 24;
    this = (BattleLogicSkill_o *)v10->fields.logic;
    if ( !this )
      goto LABEL_260;
    BattleLogic__AddBuffTriggeredTask((BattleLogic_o *)this, v191, v9, 0);
  }
  if ( SkillEntity__GetCutinAdditionalTime(Entity, 0) > 0.0 )
  {
    this = (BattleLogicSkill_o *)SkillEntity__getSkillCutInId(Entity, 0);
    if ( !(_DWORD)this )
    {
      v199 = v10->fields.logic;
      if ( !v199 )
        goto LABEL_260;
      perf = v199->fields.perf;
      CutinAdditionalTime = SkillEntity__GetCutinAdditionalTime(Entity, 0);
      if ( !perf )
        goto LABEL_260;
      BattlePerformance__InsertWaitAction(perf, CutinAdditionalTime, 1, 0);
      if ( v28[2].fields.logicfunction )
      {
        v202 = v10->fields.data;
        if ( !v202 )
          goto LABEL_260;
        v203 = v202->fields.perf;
        if ( !v203 )
          goto LABEL_260;
        this = (BattleLogicSkill_o *)v203->fields.infoComp;
        if ( !this )
          goto LABEL_260;
        BattleInformationComponent__showCommonMessage(
          (BattleInformationComponent_o *)this,
          (BattleActionData_o *)v28,
          0);
        v28[2].fields.logicfunction = 0;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v28[2].fields.logicfunction,
          0,
          v204,
          v205,
          v206,
          v207,
          v208,
          v209);
        BYTE4(v28[6].fields.logicfunction) = 1;
      }
    }
  }
  if ( v9->fields.IsNotShowSkillMessage )
  {
    v28[2].fields.logicfunction = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v28[2].fields.logicfunction, 0, v193, v194, v195, v196, v197, v198);
    BYTE4(v28[6].fields.logicfunction) = 1;
  }
  this = (BattleLogicSkill_o *)SkillEntity__IsCheckUpdateShiftServant(Entity, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v211 = (BattleLogicTask_o *)sub_2213CCC(CheckUpdateShiftTask_TypeInfo);
    BattleLogicTask___ctor(v211, v212);
    v211->fields.actiontype = 68;
    this = (BattleLogicSkill_o *)v10->fields.logic;
    if ( !this )
      goto LABEL_260;
    this = (BattleLogicSkill_o *)BattleLogic__AddTaskTargetTaskAfter((BattleLogic_o *)this, v9, v211, 0);
  }
  v213 = v9->fields.actorIdlist;
  if ( v213 )
  {
    if ( !LODWORD(v213->max_length) )
      goto LABEL_261;
    v214 = v213->m_Items[0];
  }
  else
  {
    v214 = -1;
  }
  BattleLogicSkill__ExecuteShortenSkillBuff(v10, (BattleSkillInfoData_o *)skillInfo, v214, v210);
  if ( !v9->fields.isForcedSpeedOne )
  {
    this = (BattleLogicSkill_o *)SkillEntity__IsBehaveAsAssistSkill(Entity, 0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v216 = v10->fields.logic;
      if ( !v216 )
        goto LABEL_260;
      this = (BattleLogicSkill_o *)v216->fields.perf;
      if ( !this )
        goto LABEL_260;
      this = (BattleLogicSkill_o *)BattlePerformance__isEnableSkipStartQuest((BattlePerformance_o *)this, 0);
      v216->fields.isEnableSkipAssistSkill = (unsigned __int8)this & 1;
      v217 = v10->fields.logic;
      if ( !v217 )
        goto LABEL_260;
      v218 = v217->fields.perf;
      if ( !v218 )
        goto LABEL_260;
      v218->fields.isEnableSkipSkillCutIn = v217->fields.isEnableSkipAssistSkill;
    }
  }
  BattleLogicTask__SetInterruptLoadChangeModelAction(v9, (BattleActionData_o *)v28, v215);
  if ( !fromSkillCopyFunc )
  {
    v219 = v9->fields.actorIdlist;
    this = (BattleLogicSkill_o *)v10->fields.data;
    if ( v219 )
    {
      if ( !LODWORD(v219->max_length) )
        goto LABEL_261;
      task = (BattleLogicTask_o *)(unsigned int)v219->m_Items[0];
      if ( !this )
        goto LABEL_260;
    }
    else
    {
      task = (BattleLogicTask_o *)0xFFFFFFFFLL;
      if ( !this )
        goto LABEL_260;
    }
    v220 = BattleData__getServantData((BattleData_o *)this, (int32_t)task, 0);
    if ( !v220 || !v220->fields.isEnemy )
    {
      BattleActionData__SetExistTargetLock((BattleActionData_o *)v28, v9, 0);
      BattleActionData__SetRestoreGlobalTargetAfterAction((BattleActionData_o *)v28, 0);
    }
  }
  return (BattleActionData_o *)v28;
}


BattleLogicTask_array *BattleLogicSkill__getGimmickTask(BattleLogicSkill_o *this, const MethodInfo *method)
{
  BattleData_o *data; // x0
  BattleData_o *v4; // x21
  System_Int32_array *v5; // x20
  const MethodInfo *v6; // x2
  int32_t HitGimmickSkillId; // w0
  unsigned int v8; // w22
  __int64 v9; // x20
  unsigned int m_CancellationTokenSource; // w9
  __int64 v11; // x21
  const MethodInfo *v12; // x1
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  BattleData_o *v19; // x8
  System_Int32_array *v20; // x19
  System_Int32_array *FieldPlayerServantIDList; // x0
  const MethodInfo *v22; // x6
  const MethodInfo *v23; // x3
  BattleData_o *v24; // x19
  __int64 v25; // x1
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  __int64 v33; // x0

  if ( (byte_5973D00 & 1) == 0 )
  {
    sub_2213A60(&BattleLogicTask___TypeInfo);
    sub_2213A60(&BattleLogicTask_TypeInfo);
    sub_2213A60(&BattleSkillInfoData_TypeInfo);
    sub_2213A60(&int___TypeInfo);
    byte_5973D00 = 1;
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
  v9 = sub_2213CCC(BattleSkillInfoData_TypeInfo);
  BattleSkillInfoData___ctor((BattleSkillInfoData_o *)v9, 0);
  if ( !v9 )
    goto LABEL_26;
  m_CancellationTokenSource = (unsigned int)v4->fields.m_CancellationTokenSource;
  *(_DWORD *)(v9 + 24) = -1;
  *(_QWORD *)(v9 + 16) = 20;
  if ( v8 >= m_CancellationTokenSource )
    goto LABEL_27;
  (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v9 + 376LL))(
    v9,
    *((unsigned int *)&v4->fields.rootfsm + v8),
    *(_QWORD *)(*(_QWORD *)v9 + 384LL));
  *(_DWORD *)(v9 + 36) = 1;
  v11 = sub_2213CCC(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor((BattleLogicTask_o *)v11, v12);
  data = (BattleData_o *)sub_2213B20(int___TypeInfo, 1);
  if ( !data )
    goto LABEL_26;
  method = (const MethodInfo *)data;
  if ( !LODWORD(data->fields.m_CancellationTokenSource) )
    goto LABEL_27;
  LODWORD(data->fields.rootfsm) = v8;
  if ( !v11 )
    goto LABEL_26;
  *(_QWORD *)(v11 + 160) = data;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v11 + 160), (int32_t)data, v13, v14, v15, v16, v17, v18);
  data = this->fields.data;
  if ( !data
    || (data = (BattleData_o *)BattleData__getFieldEnemyServantIDList(data, 0, 0), (v19 = this->fields.data) == 0)
    || (v20 = (System_Int32_array *)data,
        FieldPlayerServantIDList = BattleData__getFieldPlayerServantIDList(v19, 0, 0),
        BattleLogicTask__setActionSkill(
          (BattleLogicTask_o *)v11,
          (BattleSkillInfoData_o *)v9,
          v20,
          FieldPlayerServantIDList,
          0,
          0,
          v22),
        BattleLogicTask__setActor((BattleLogicTask_o *)v11, 5, -1, v23),
        (data = (BattleData_o *)sub_2213B20(BattleLogicTask___TypeInfo, 1)) == 0) )
  {
LABEL_26:
    sub_2213CDC(data, method);
  }
  v24 = data;
  data = (BattleData_o *)sub_2213BB4(v11, data->klass->_1.element_class);
  if ( !data )
  {
    v33 = sub_2213D00(0, v25);
    sub_2213BA0(v33, 0);
  }
  if ( !LODWORD(v24->fields.m_CancellationTokenSource) )
LABEL_27:
    sub_2213CE4(data);
  v24->fields.rootfsm = (struct PlayMakerFSM_o *)v11;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v24->fields.rootfsm, v11, v26, v27, v28, v29, v30, v31);
  return (BattleLogicTask_array *)v24;
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
  QuestBehaviorEntity_o **m_Items; // x29
  __int64 v14; // x22
  unsigned int max_length; // w8
  unsigned int v16; // w0
  int32_t v17; // w0
  BattleLogicTask_c *v18; // x8
  BattleLogicTask_o *v19; // x23
  const MethodInfo *v20; // x1
  const MethodInfo *v21; // x3
  System_Int32_array *v22; // x24
  System_Int32_array *FieldPlayerServantIDList; // x0
  const MethodInfo *v24; // x6
  const MethodInfo *v25; // x3
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  struct System_Object_array *items; // x8
  _QWORD *v33; // x9
  __int64 size; // x10
  Il2CppClass **v35; // x0

  if ( (byte_5973CFF & 1) == 0 )
  {
    sub_2213A60(&BattleLogicTask_TypeInfo);
    sub_2213A60(&BattleSkillInfoData_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_QuestBehaviorMaster___);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_2213A60(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5973CFF = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_QuestBehaviorMaster___);
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
  v11 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  if ( SLODWORD(v10->max_length) >= 1 )
  {
    v12 = 0;
    m_Items = v10->m_Items;
    while ( 1 )
    {
      v14 = sub_2213CCC(BattleSkillInfoData_TypeInfo);
      BattleSkillInfoData___ctor((BattleSkillInfoData_o *)v14, 0);
      if ( !v14 )
        break;
      max_length = v10->max_length;
      *(_DWORD *)(v14 + 24) = -1;
      *(_QWORD *)(v14 + 16) = 20;
      if ( (unsigned int)v12 >= max_length )
        goto LABEL_29;
      Instance = (DataManager_o *)m_Items[v12];
      if ( !Instance )
        break;
      v16 = QuestBehaviorEntity__getskillId((QuestBehaviorEntity_o *)Instance, 0);
      Instance = (DataManager_o *)(*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v14 + 376LL))(
                                    v14,
                                    v16,
                                    *(_QWORD *)(*(_QWORD *)v14 + 384LL));
      if ( (unsigned int)v12 >= LODWORD(v10->max_length) )
LABEL_29:
        sub_2213CE4(Instance);
      Instance = (DataManager_o *)m_Items[v12];
      if ( !Instance )
        break;
      v17 = QuestBehaviorEntity__getskillLv((QuestBehaviorEntity_o *)Instance, 0);
      v18 = BattleLogicTask_TypeInfo;
      *(_DWORD *)(v14 + 36) = v17;
      v19 = (BattleLogicTask_o *)sub_2213CCC(v18);
      BattleLogicTask___ctor(v19, v20);
      if ( !v19 )
        break;
      BattleLogicTask__setActor(v19, 5, -1, v21);
      Instance = (DataManager_o *)this->fields.data;
      if ( !Instance )
        break;
      Instance = (DataManager_o *)BattleData__getFieldEnemyServantIDList((BattleData_o *)Instance, 0, 0);
      if ( !this->fields.data )
        break;
      v22 = (System_Int32_array *)Instance;
      FieldPlayerServantIDList = BattleData__getFieldPlayerServantIDList(this->fields.data, 0, 0);
      BattleLogicTask__setActionSkill(v19, (BattleSkillInfoData_o *)v14, v22, FieldPlayerServantIDList, 0, 0, v24);
      BattleLogicTask__setActor(v19, 5, -1, v25);
      if ( !v11 )
        break;
      items = v11->fields._items;
      v33 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
      ++v11->fields._version;
      if ( !items )
        break;
      size = v11->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v11,
          (Il2CppObject *)v19,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
      }
      else
      {
        v35 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v35[4] = (Il2CppClass *)v19;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v35 + 4), (int32_t)v19, v26, v27, v28, v29, v30, v31);
      }
      if ( (int)++v12 >= SLODWORD(v10->max_length) )
        return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                          v11,
                                          (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    }
LABEL_28:
    sub_2213CDC(Instance, v4);
  }
  if ( !v11 )
    goto LABEL_28;
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v11,
                                    (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0
  const MethodInfo *v24; // x4
  System_Collections_Generic_IEnumerable_T__o *SkillTargetedBeforeFunctionSkill; // x0

  if ( (byte_5973CF6 & 1) == 0 )
  {
    sub_2213A60(&BattleLogicTask_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleLogicTask__InsertRange__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_2213A60(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    byte_5973CF6 = 1;
  }
  v8 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v9 = (BattleLogicTask_o *)sub_2213CCC(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor(v9, v10);
  if ( !v9
    || (BattleLogicTask__setCommandSpell(v9, skillId, 0, ptTargetList, v13), !v8)
    || (items = v8->fields._items,
        v21 = Method_System_Collections_Generic_List_BattleLogicTask__Add__,
        ++v8->fields._version,
        !items) )
  {
    sub_2213CDC(v11, v12);
  }
  size = v8->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v8,
      (Il2CppObject *)v9,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
  }
  else
  {
    v23 = &items->obj.klass + size;
    v8->fields._size = size + 1;
    v23[4] = (Il2CppClass *)v9;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v23 + 4), (int32_t)v9, v14, v15, v16, v17, v18, v19);
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
    (const MethodInfo_4484C38 *)Method_System_Collections_Generic_List_BattleLogicTask__InsertRange__);
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v8,
                                    (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  bool v24; // w4
  bool v25; // w5
  BattleLogicTask_o *v26; // x0
  BattleSkillInfoData_o *v27; // x1
  System_Int32_array *v28; // x2
  System_Int32_array *v29; // x3
  BattleLogicTarget_o *logictarget; // x20
  int32_t v31; // w21
  const MethodInfo *v32; // x4
  BattleData_o *v33; // x29
  int32_t v34; // w21
  System_Int32_array *AddIndiv; // x20
  int32_t v36; // w29
  const MethodInfo *v37; // x3
  bool isPlayerID; // w0
  int32_t v39; // w2
  BattleLogicTask_o *v40; // x0
  int32_t v41; // w1
  System_String_o *v42; // x2
  System_String_o *v43; // x3
  int32_t v44; // w4
  int32_t v45; // w5
  bool v46; // w6
  bool v47; // w7
  struct System_Object_array *items; // x8
  _QWORD *v49; // x9
  __int64 size; // x10
  Il2CppClass **v51; // x0
  System_Collections_Generic_List_object__o *v52; // x24
  __int64 v53; // x8
  __int64 v54; // x25
  __int64 v55; // x9
  int *v56; // x10
  __int64 v57; // x0
  const MethodInfo *v58; // x4
  __int64 v59; // x0
  __int64 v60; // x1
  __int64 v61; // x8
  __int64 v62; // x9
  int *v63; // x10
  __int64 v64; // x0
  __int64 v65; // x8
  __int64 v66; // x9
  int *v67; // x10
  __int64 v68; // x0
  BattleSkillInfoData_o *v69; // x25
  __int64 v70; // x0
  __int64 v71; // x1
  System_Collections_Generic_IEnumerable_T__o *v72; // x0
  __int64 v73; // x8
  __int64 v74; // x9
  int *v75; // x10
  __int64 v76; // x0
  BattleLogicTarget_o *v77; // x21
  int32_t v78; // w20
  int32_t TargetAiAct; // w20
  const MethodInfo *v80; // x6
  bool IsNeedUpHate; // w0
  const MethodInfo *v82; // x2
  const MethodInfo *v83; // x4
  __int64 v84; // x1
  BattleLogicSkill___c_c *v85; // x0
  struct BattleLogicSkill___c_StaticFields *static_fields; // x8
  System_Func_object__int__o *_9__5_0; // x20
  Il2CppObject *v88; // x21
  struct BattleLogicSkill___c_StaticFields *v89; // x0
  System_String_o *v90; // x2
  System_String_o *v91; // x3
  int32_t v92; // w4
  int32_t v93; // w5
  bool v94; // w6
  bool v95; // w7
  System_Collections_Generic_IEnumerable_T__o *v96; // x0
  const MethodInfo *isDeadToEnableUpHate; // [xsp+8h] [xbp-B8h]
  const MethodInfo *v99; // [xsp+18h] [xbp-A8h]
  System_Int32_array *ptTargetArray; // [xsp+38h] [xbp-88h]
  __int64 v102; // [xsp+50h] [xbp-70h]
  bool isResotreTarget; // [xsp+5Ch] [xbp-64h] BYREF

  if ( (byte_5973CF5 & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_StableSort_BattleLogicTask___);
    sub_2213A60(&BattleLogicTask_TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_Any_BattleLogicTask___);
    sub_2213A60(&System_Func_BattleLogicTask__int__TypeInfo);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerable_BattleSkillInfoData__TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_BattleSkillInfoData__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleLogicTask__InsertRange__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_2213A60(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    sub_2213A60(&Method_BattleLogicSkill___c__taskSkill_b__5_0__);
    sub_2213A60(&BattleLogicSkill___c_TypeInfo);
    byte_5973CF5 = 1;
  }
  isResotreTarget = 0;
  v17 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  execTask = (BattleLogicTask_o *)sub_2213CCC(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor(execTask, v19);
  if ( !skillInfo )
    goto LABEL_102;
  data = (__int64)this->fields.data;
  if ( !data )
    goto LABEL_102;
  data = (__int64)BattleData__getServantData((BattleData_o *)data, skillInfo->fields.svtUniqueId, 0);
  v23 = (BattleServantData_o *)data;
  if ( data )
  {
    data = BattleSkillInfoData__isServantSkill(skillInfo, 0);
    if ( (data & 1) != 0 )
    {
      if ( !execTask )
        goto LABEL_102;
      execTask->fields.isCanCounterTask = isCanCounterSkill;
      execTask->fields.isSideEffectTriggerSkill = isCanCounterSkill;
    }
  }
  ptTargetArray = ptTargetList;
  if ( enemyTargetList )
  {
    if ( !execTask )
      goto LABEL_102;
    v24 = checkAlive;
    v25 = checkRevengeId;
    v26 = execTask;
    v27 = skillInfo;
    v28 = enemyTargetList;
    v29 = ptTargetList;
    goto LABEL_26;
  }
  svtUniqueId = (unsigned int)skillInfo->fields.svtUniqueId;
  if ( (_DWORD)svtUniqueId == -1 )
    goto LABEL_15;
  data = (__int64)this->fields.data;
  if ( !data )
    goto LABEL_102;
  data = BattleData__isPlayerID((BattleData_o *)data, svtUniqueId, 0);
  if ( (data & 1) != 0 )
  {
LABEL_15:
    if ( !this->fields.data )
      goto LABEL_102;
    if ( BattleSkillInfoData__IsTargetTypeEnemy(skillInfo, 0) )
    {
      logictarget = this->fields.logictarget;
      v31 = skillInfo->fields.svtUniqueId;
      data = (__int64)BattleSkillInfoData__GetAddIndiv(skillInfo, 0);
      if ( !logictarget )
        goto LABEL_102;
      data = BattleLogicTarget__getGlobalTargetId(logictarget, v31, v31 == -1, (System_Int32_array *)data, v32);
    }
    else
    {
      v33 = this->fields.data;
      v34 = skillInfo->fields.svtUniqueId;
      AddIndiv = BattleSkillInfoData__GetAddIndiv(skillInfo, 0);
      data = BattleSkillInfoData__IsNeedUpHate(skillInfo, 0);
      if ( !v33 )
        goto LABEL_102;
      data = BattleData__getTargetLock(v33, &isResotreTarget, v34, 0, v34 == -1, AddIndiv, data & 1, 0);
    }
    v36 = data;
    if ( !execTask )
      goto LABEL_102;
    data = (__int64)this->fields.data;
    if ( !data )
      goto LABEL_102;
    enemyTargetList = 0;
    execTask->fields._ExistTargetLock_k__BackingField = BattleData__isTargetLock((BattleData_o *)data, 0);
    data = sub_2213B20(int___TypeInfo, 1);
    if ( !data )
      goto LABEL_102;
    v28 = (System_Int32_array *)data;
    if ( *(_DWORD *)(data + 24) )
    {
      v24 = checkAlive;
      v25 = checkRevengeId;
      v26 = execTask;
      v27 = skillInfo;
      v29 = ptTargetList;
      v28->m_Items[0] = v36;
LABEL_26:
      BattleLogicTask__setActionSkill(v26, v27, v28, v29, v24, v25, v22);
      goto LABEL_27;
    }
LABEL_103:
    sub_2213CE4(data);
  }
  data = (__int64)this->fields.data;
  if ( !data )
    goto LABEL_102;
  v77 = this->fields.logictarget;
  v78 = skillInfo->fields.svtUniqueId;
  data = (__int64)BattleData__getFieldPlayerServantIDList((BattleData_o *)data, 0, 0);
  if ( !v77 )
    goto LABEL_102;
  TargetAiAct = BattleLogicTarget__getTargetAiAct(
                  v77,
                  1,
                  v78,
                  0,
                  (System_Int32_array *)data,
                  1,
                  0,
                  0,
                  0,
                  1,
                  execTask,
                  v99);
  data = sub_2213B20(int___TypeInfo, 1);
  if ( !data )
    goto LABEL_102;
  if ( !*(_DWORD *)(data + 24) )
    goto LABEL_103;
  *(_DWORD *)(data + 32) = TargetAiAct;
  if ( !execTask )
    goto LABEL_102;
  enemyTargetList = 0;
  BattleLogicTask__setActionSkill(
    execTask,
    skillInfo,
    (System_Int32_array *)data,
    ptTargetList,
    checkAlive,
    checkRevengeId,
    v80);
  IsNeedUpHate = BattleSkillInfoData__IsNeedUpHate(skillInfo, 0);
  BattleLogicTask__RevertUnusedNoNeedUpHateBuff(execTask, IsNeedUpHate, v82);
LABEL_27:
  svtUniqueId = (unsigned int)skillInfo->fields.svtUniqueId;
  if ( (_DWORD)svtUniqueId == -1 )
  {
    v40 = execTask;
    v41 = 1;
    v39 = -1;
  }
  else
  {
    data = (__int64)this->fields.data;
    if ( !data )
      goto LABEL_102;
    isPlayerID = BattleData__isPlayerID((BattleData_o *)data, svtUniqueId, 0);
    v39 = skillInfo->fields.svtUniqueId;
    if ( isPlayerID )
    {
      v40 = execTask;
      v41 = 2;
    }
    else
    {
      v40 = execTask;
      v41 = 3;
    }
  }
  BattleLogicTask__setActor(v40, v41, v39, v37);
  if ( !v17 )
    goto LABEL_102;
  items = v17->fields._items;
  v49 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
  ++v17->fields._version;
  if ( !items )
    goto LABEL_102;
  size = v17->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v17,
      (Il2CppObject *)execTask,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v49[4] + 192LL) + 112LL));
  }
  else
  {
    v51 = &items->obj.klass + size;
    v17->fields._size = size + 1;
    v51[4] = (Il2CppClass *)execTask;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v51 + 4), (int32_t)execTask, v42, v43, v44, v45, v46, v47);
  }
  if ( v23 && isManualBoot )
  {
    v52 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v52,
      (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    data = (__int64)BattleServantData__EnumerateSkillBeforeFunctionSkill(v23, this->fields.data, 0);
    if ( !data )
      goto LABEL_102;
    v53 = *(_QWORD *)data;
    v54 = data;
    v55 = *(unsigned __int16 *)(*(_QWORD *)data + 302LL);
    if ( *(_WORD *)(*(_QWORD *)data + 302LL) )
    {
      v56 = (int *)(*(_QWORD *)(v53 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerable_BattleSkillInfoData__c **)v56 - 1) != System_Collections_Generic_IEnumerable_BattleSkillInfoData__TypeInfo )
      {
        --v55;
        v56 += 4;
        if ( !v55 )
          goto LABEL_45;
      }
      v57 = v53 + 16LL * *v56 + 312;
    }
    else
    {
LABEL_45:
      v57 = sub_224BC3C(data, System_Collections_Generic_IEnumerable_BattleSkillInfoData__TypeInfo, 0);
    }
    v59 = (*(__int64 (__fastcall **)(__int64, _QWORD))v57)(v54, *(_QWORD *)(v57 + 8));
    v102 = v59;
    while ( 1 )
    {
      if ( !v102 )
        sub_2213CDC(v59, v60);
      v61 = *(_QWORD *)v102;
      v62 = *(unsigned __int16 *)(*(_QWORD *)v102 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v102 + 302LL) )
      {
        v63 = (int *)(*(_QWORD *)(v61 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v63 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v62;
          v63 += 4;
          if ( !v62 )
            goto LABEL_56;
        }
        v64 = v61 + 16LL * *v63 + 312;
      }
      else
      {
LABEL_56:
        v64 = sub_224BC3C(v102, System_Collections_IEnumerator_TypeInfo, 0);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v64)(v102, *(_QWORD *)(v64 + 8)) & 1) == 0 )
        break;
      v65 = *(_QWORD *)v102;
      v66 = *(unsigned __int16 *)(*(_QWORD *)v102 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v102 + 302LL) )
      {
        v67 = (int *)(*(_QWORD *)(v65 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_BattleSkillInfoData__c **)v67 - 1) != System_Collections_Generic_IEnumerator_BattleSkillInfoData__TypeInfo )
        {
          --v66;
          v67 += 4;
          if ( !v66 )
            goto LABEL_63;
        }
        v68 = v65 + 16LL * *v67 + 312;
      }
      else
      {
LABEL_63:
        v68 = sub_224BC3C(v102, System_Collections_Generic_IEnumerator_BattleSkillInfoData__TypeInfo, 0);
      }
      v69 = (BattleSkillInfoData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v68)(v102, *(_QWORD *)(v68 + 8));
      v70 = sub_2213B20(int___TypeInfo, 1);
      if ( !v69 )
        sub_2213CDC(v70, v71);
      if ( !v70 )
        sub_2213CDC(0, v71);
      if ( !*(_DWORD *)(v70 + 24) )
        sub_2213CE4(v70);
      *(_DWORD *)(v70 + 32) = v69->fields.svtUniqueId;
      v72 = (System_Collections_Generic_IEnumerable_T__o *)BattleLogicSkill__taskSkill(
                                                             this,
                                                             v69,
                                                             (System_Int32_array *)v70,
                                                             0,
                                                             0,
                                                             0,
                                                             0,
                                                             0,
                                                             1,
                                                             isDeadToEnableUpHate);
      if ( !v52 )
        sub_2213CDC(v72, v72);
      System_Collections_Generic_List_object___AddRange(
        v52,
        v72,
        (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
    }
    v73 = *(_QWORD *)v102;
    v74 = *(unsigned __int16 *)(*(_QWORD *)v102 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v102 + 302LL) )
    {
      v75 = (int *)(*(_QWORD *)(v73 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v75 - 1) != System_IDisposable_TypeInfo )
      {
        --v74;
        v75 += 4;
        if ( !v74 )
          goto LABEL_74;
      }
      v76 = v73 + 16LL * *v75 + 312;
    }
    else
    {
LABEL_74:
      v76 = sub_224BC3C(v102, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v76)(v102, *(_QWORD *)(v76 + 8));
    if ( isRecursiveCalled )
    {
      if ( !v52 )
        return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                          v17,
                                          (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
      goto LABEL_88;
    }
    if ( v52 )
    {
      data = (__int64)BattleLogicSkill__GetSkillTargetedBeforeFunctionSkill(
                        this,
                        execTask,
                        ptTargetArray,
                        enemyTargetList,
                        v83);
      goto LABEL_87;
    }
  }
  else if ( isRecursiveCalled )
  {
    return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                      v17,
                                      (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
  }
  v52 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v52,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  data = (__int64)BattleLogicSkill__GetSkillTargetedBeforeFunctionSkill(
                    this,
                    execTask,
                    ptTargetArray,
                    enemyTargetList,
                    v58);
  if ( !v52 )
LABEL_102:
    sub_2213CDC(data, svtUniqueId);
LABEL_87:
  System_Collections_Generic_List_object___AddRange(
    v52,
    (System_Collections_Generic_IEnumerable_T__o *)data,
    (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
LABEL_88:
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v52,
         (const MethodInfo_38660DC *)Method_System_Linq_Enumerable_Any_BattleLogicTask___) )
  {
    v85 = BattleLogicSkill___c_TypeInfo;
    if ( !*(&BattleLogicSkill___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BattleLogicSkill___c_TypeInfo, v84);
      v85 = BattleLogicSkill___c_TypeInfo;
    }
    static_fields = v85->static_fields;
    _9__5_0 = (System_Func_object__int__o *)static_fields->__9__5_0;
    if ( !_9__5_0 )
    {
      if ( !*(&v85->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v85, v84);
        static_fields = BattleLogicSkill___c_TypeInfo->static_fields;
      }
      v88 = (Il2CppObject *)static_fields->__9;
      _9__5_0 = (System_Func_object__int__o *)sub_2213CCC(System_Func_BattleLogicTask__int__TypeInfo);
      System_Func_object__int____ctor(_9__5_0, v88, Method_BattleLogicSkill___c__taskSkill_b__5_0__, 0);
      v89 = BattleLogicSkill___c_TypeInfo->static_fields;
      v89->__9__5_0 = (struct System_Func_BattleLogicTask__int__o *)_9__5_0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v89->__9__5_0, (int32_t)_9__5_0, v90, v91, v92, v93, v94, v95);
    }
    v96 = (System_Collections_Generic_IEnumerable_T__o *)BasicHelper__StableSort_object_(
                                                           (System_Collections_Generic_List_T__o *)v52,
                                                           (System_Func_T__int__o *)_9__5_0,
                                                           0,
                                                           (const MethodInfo_3815EE8 *)Method_BasicHelper_StableSort_BattleLogicTask___);
    System_Collections_Generic_List_object___InsertRange(
      v17,
      0,
      v96,
      (const MethodInfo_4484C38 *)Method_System_Collections_Generic_List_BattleLogicTask__InsertRange__);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v17,
                                    (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5973D08 & 1) == 0 )
  {
    sub_2213A60(&BattleLogicSkill___c_TypeInfo);
    byte_5973D08 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(BattleLogicSkill___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleLogicSkill___c_TypeInfo->static_fields->__9 = (struct BattleLogicSkill___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)BattleLogicSkill___c_TypeInfo->static_fields,
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
    sub_2213CDC(this, 0);
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
    sub_2213CDC(this, x);
  return skillInfo->fields.priority;
}


void BattleLogicSkill___c___actPassiveSkill_b__11_0(
        BattleLogicSkill___c_o *this,
        BattleServantData_o *svt,
        const MethodInfo *method)
{
  if ( !svt || (this = (BattleLogicSkill___c_o *)BattleServantData__get_BuffData(svt, 0)) == 0 )
    sub_2213CDC(this, svt);
  BattleBuffData__DirectUpdateWaitIntervalBuff((BattleBuffData_o *)this, 0);
}


int32_t BattleLogicSkill___c___taskSkill_b__5_0(
        BattleLogicSkill___c_o *this,
        BattleLogicTask_o *x,
        const MethodInfo *method)
{
  struct BattleSkillInfoData_o *skillInfo; // x8

  if ( !x || (skillInfo = x->fields.skillInfo) == 0 )
    sub_2213CDC(this, x);
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

  if ( (byte_5973D09 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    byte_5973D09 = 1;
  }
  conditions = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.conditions;
  result = 0;
  if ( !conditions )
    goto LABEL_10;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          conditions,
          (Il2CppObject *)key,
          (const MethodInfo_3FFDE04 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return 1;
  conditions = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.conditions;
  result = 0;
  if ( !conditions
    || (conditions = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                  conditions,
                                                                                  (Il2CppObject *)key,
                                                                                  (const MethodInfo_3FFDB90 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0 )
  {
LABEL_10:
    sub_2213CDC(conditions, key);
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
  BattleLogicSkill___c__DisplayClass14_0_o *v11; // x0
  System_String_o *v12; // x1
  const MethodInfo *v13; // x2
  long double v14; // q0
  int64_t result; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5973D0A & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    byte_5973D0A = 1;
  }
  conditions = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.conditions;
  result = 0;
  if ( !conditions )
    goto LABEL_13;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          conditions,
          (Il2CppObject *)key,
          (const MethodInfo_3FFDE04 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return 1;
  conditions = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.conditions;
  result = 0;
  if ( !conditions
    || (conditions = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                  conditions,
                                                                                  (Il2CppObject *)key,
                                                                                  (const MethodInfo_3FFDB90 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0 )
  {
LABEL_13:
    sub_2213CDC(conditions, key);
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
                                                                            (const MethodInfo_3FFDB90 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !conditions )
    goto LABEL_13;
  if ( conditions->klass->_1.element_class == *(Il2CppClass **)(qword_5984368 + 64) )
    return *(_DWORD *)j_il2cpp_object_unbox_0(conditions, qword_5984368, v9) >= val;
  v14 = sub_221405C(conditions, qword_5984368, v9);
  return BattleLogicSkill___c__DisplayClass14_0___checkConditions_b__2(v11, v12, *(double *)&v14, v13);
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

  if ( (byte_5973D0B & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    byte_5973D0B = 1;
  }
  conditions = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.conditions;
  result = 0;
  if ( !conditions )
    goto LABEL_10;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          conditions,
          (Il2CppObject *)key,
          (const MethodInfo_3FFDE04 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return 1;
  conditions = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.conditions;
  result = 0;
  if ( !conditions
    || (conditions = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                  conditions,
                                                                                  (Il2CppObject *)key,
                                                                                  (const MethodInfo_3FFDB90 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0 )
  {
LABEL_10:
    sub_2213CDC(conditions, key);
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
  BattleLogicSkill___c__DisplayClass19_0_o *v11; // x0
  int32_t v12; // w1
  const MethodInfo *v13; // x2
  int64_t result; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5973D0C & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    byte_5973D0C = 1;
  }
  conditions = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.conditions;
  result = 0;
  if ( !conditions )
    goto LABEL_13;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          conditions,
          (Il2CppObject *)key,
          (const MethodInfo_3FFDE04 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return 1;
  conditions = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.conditions;
  result = 0;
  if ( !conditions
    || (conditions = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                  conditions,
                                                                                  (Il2CppObject *)key,
                                                                                  (const MethodInfo_3FFDB90 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0 )
  {
LABEL_13:
    sub_2213CDC(conditions, key);
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
                                                                            (const MethodInfo_3FFDB90 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !conditions )
    goto LABEL_13;
  if ( conditions->klass->_1.element_class == *(Il2CppClass **)(qword_5984368 + 64) )
    return (double)*(int *)j_il2cpp_object_unbox_0(conditions, qword_5984368, v9) >= val;
  sub_221405C(conditions, qword_5984368, v9);
  return BattleLogicSkill___c__DisplayClass19_0___SetSkillCopyFunction_b__0(v11, v12, v13);
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


// local variable allocation has failed, the output may be wrong!
bool BattleLogicSkill___c__DisplayClass19_0___SetSkillCopyFunction_b__1(
        BattleLogicSkill___c__DisplayClass19_0_o *this,
        int32_t type,
        const MethodInfo *method)
{
  FunctionEntity_o *funcEntity; // x0

  funcEntity = this->fields.funcEntity;
  if ( !funcEntity )
    sub_2213CDC(0, *(_QWORD *)&type);
  return FunctionEntity__GetAddStateBuffTypeFromFunction(funcEntity, 0) == type;
}


// local variable allocation has failed, the output may be wrong!
bool BattleLogicSkill___c__DisplayClass19_0___SetSkillCopyFunction_b__2(
        BattleLogicSkill___c__DisplayClass19_0_o *this,
        int32_t type,
        const MethodInfo *method)
{
  struct FunctionEntity_o *funcEntity; // x8

  funcEntity = this->fields.funcEntity;
  if ( !funcEntity )
    sub_2213CDC(this, *(_QWORD *)&type);
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
  if ( (byte_5973D0D & 1) == 0 )
  {
    this = (BattleLogicSkill___c__DisplayClass7_0_o *)sub_2213A60(&Method_System_Linq_Enumerable_Union_int___);
    byte_5973D0D = 1;
  }
  _4__this = v6->fields.__4__this;
  if ( !_4__this || (task = v6->fields.task) == 0 )
    sub_2213CDC(this, current);
  actorIdlist = task->fields.actorIdlist;
  data = _4__this->fields.data;
  if ( actorIdlist )
  {
    if ( !LODWORD(actorIdlist->max_length) )
      sub_2213CE4(data);
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
                                                            (const MethodInfo_38A1344 *)Method_System_Linq_Enumerable_Union_int___);
}


// local variable allocation has failed, the output may be wrong!
BattleServantData_o *BattleLogicSkill___c__DisplayClass7_0___GetSkillTargetedBeforeFunctionSkill_b__2(
        BattleLogicSkill___c__DisplayClass7_0_o *this,
        int32_t uniqueId,
        const MethodInfo *method)
{
  struct BattleLogicSkill_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || (this = (BattleLogicSkill___c__DisplayClass7_0_o *)_4__this->fields.data) == 0 )
    sub_2213CDC(this, *(_QWORD *)&uniqueId);
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
    sub_2213CDC(this, svtData);
  return BattleServantData__EnumerateSkillTargetedBeforeFunctionSkill(svtData, task->fields.skillInfo, 0);
}