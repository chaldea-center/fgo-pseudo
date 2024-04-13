void __fastcall SvtMultiPortraitMaster___ctor(SvtMultiPortraitMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E5AFE & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_SvtMultiPortraitMaster__SvtMultiPortraitEntity__string___ctor__,
      (_DWORD)method,
      v2,
      v3);
    byte_42E5AFE = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    394,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_SvtMultiPortraitMaster__SvtMultiPortraitEntity__string___ctor__);
}


System_Collections_Generic_List_SvtMultiPortraitEntity__o *__fastcall SvtMultiPortraitMaster__GetEntityListOrderBy(
        SvtMultiPortraitMaster_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
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
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  int v43; // w1
  int v44; // w2
  __int64 v45; // x3
  int v46; // w1
  int v47; // w2
  __int64 v48; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v49; // x19
  __int64 v50; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v52; // x1
  __int64 v53; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v56; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v59; // x3
  System_Collections_Generic_IEnumerator_T__c *v60; // x8
  unsigned __int64 v61; // x10
  int32_t *v62; // x11
  __int64 v63; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v64; // x0
  SvtMultiPortraitEntity_c *v65; // x1
  __int64 v66; // x10
  System_Collections_Generic_IEnumerator_T__c *v67; // x8
  unsigned __int64 v68; // x10
  int32_t *v69; // x11
  __int64 v70; // x0
  SvtMultiPortraitMaster___c_c *v71; // x0
  struct SvtMultiPortraitMaster___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__1_0; // x20
  Il2CppObject *v74; // x21
  struct SvtMultiPortraitMaster___c_StaticFields *v75; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v76; // x0

  if ( (byte_42E5AFF & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      svtId,
      limitCount,
      method);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___, v7, v8, v9);
    sub_B5D5C4(&Method_System_Linq_Enumerable_OrderBy_SvtMultiPortraitEntity__int___, v10, v11, v12);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToList_SvtMultiPortraitEntity___, v13, v14, v15);
    sub_B5D5C4(&Method_System_Func_SvtMultiPortraitEntity__int___ctor__, v16, v17, v18);
    sub_B5D5C4(&System_Func_SvtMultiPortraitEntity__int__TypeInfo, v19, v20, v21);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v22, v23, v24);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v25, v26, v27);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v28, v29, v30);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SvtMultiPortraitEntity__Add__, v31, v32, v33);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SvtMultiPortraitEntity___ctor__, v34, v35, v36);
    sub_B5D5C4(&System_Collections_Generic_List_SvtMultiPortraitEntity__TypeInfo, v37, v38, v39);
    sub_B5D5C4(&SvtMultiPortraitEntity_TypeInfo, v40, v41, v42);
    sub_B5D5C4(&Method_SvtMultiPortraitMaster___c__GetEntityListOrderBy_b__1_0__, v43, v44, v45);
    sub_B5D5C4(&SvtMultiPortraitMaster___c_TypeInfo, v46, v47, v48);
    byte_42E5AFF = 1;
  }
  v49 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_SvtMultiPortraitEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v49,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_SvtMultiPortraitEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B5D69C(0LL, v50);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2BB8C48 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B5D69C(0LL, v52);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v56 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v56;
        p_offset += 4;
        if ( v56 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v53);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v60 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v61 = 0LL;
      v62 = &v60->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v62 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v61;
        v62 += 4;
        if ( v61 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v63 = (__int64)&v60->vtable[*v62].method;
    }
    else
    {
LABEL_16:
      v63 = sub_AF54C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v59);
    }
    v64 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v63)(
                                                                   Enumerator,
                                                                   *(_QWORD *)(v63 + 8));
    if ( v64 )
    {
      v65 = SvtMultiPortraitEntity_TypeInfo;
      v66 = *(&SvtMultiPortraitEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v64->klass->_2.bitflags2 + 1) < (unsigned int)v66
        || (SvtMultiPortraitEntity_c *)v64->klass->_2.typeHierarchy[v66 - 1] != SvtMultiPortraitEntity_TypeInfo )
      {
        v64 = (EventMissionProgressRequest_Argument_ProgressData_o *)sub_B5D990(v64);
LABEL_43:
        sub_B5D69C(v64, v65);
      }
      if ( v64->fields.missionTargetId == svtId && v64->fields.missionConditionDetailId == limitCount )
      {
        if ( !v49 )
          goto LABEL_43;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v49,
          v64,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_SvtMultiPortraitEntity__Add__);
      }
    }
  }
  v67 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v68 = 0LL;
    v69 = &v67->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v69 - 1) != System_IDisposable_TypeInfo )
    {
      ++v68;
      v69 += 4;
      if ( v68 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_29;
    }
    v70 = (__int64)&v67->vtable[*v69].method;
  }
  else
  {
LABEL_29:
    v70 = sub_AF54C0(Enumerator, System_IDisposable_TypeInfo, 0LL, v59);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v70)(Enumerator, *(_QWORD *)(v70 + 8));
  if ( !System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v49,
          (const MethodInfo_1C98BF4 *)Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___) )
    return 0LL;
  v71 = SvtMultiPortraitMaster___c_TypeInfo;
  if ( (BYTE3(SvtMultiPortraitMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SvtMultiPortraitMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SvtMultiPortraitMaster___c_TypeInfo);
    v71 = SvtMultiPortraitMaster___c_TypeInfo;
  }
  static_fields = v71->static_fields;
  _9__1_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__1_0;
  if ( !_9__1_0 )
  {
    if ( (BYTE3(v71->vtable._0_Equals.methodPtr) & 4) != 0 && !v71->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v71);
      static_fields = SvtMultiPortraitMaster___c_TypeInfo->static_fields;
    }
    v74 = (Il2CppObject *)static_fields->__9;
    _9__1_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B5D694(System_Func_SvtMultiPortraitEntity__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__1_0,
      v74,
      Method_SvtMultiPortraitMaster___c__GetEntityListOrderBy_b__1_0__,
      (const MethodInfo_2C2F87C *)Method_System_Func_SvtMultiPortraitEntity__int___ctor__);
    v75 = SvtMultiPortraitMaster___c_TypeInfo->static_fields;
    v75->__9__1_0 = (struct System_Func_SvtMultiPortraitEntity__int__o *)_9__1_0;
    sub_B5D560(&v75->__9__1_0);
  }
  v76 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_QuestPhaseDetailEntity_BoardInfo__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v49,
                                                               (System_Func_TSource__TKey__o *)_9__1_0,
                                                               (const MethodInfo_1CAF208 *)Method_System_Linq_Enumerable_OrderBy_SvtMultiPortraitEntity__int___);
  return (System_Collections_Generic_List_SvtMultiPortraitEntity__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                        v76,
                                                                        (const MethodInfo_1CBA734 *)Method_System_Linq_Enumerable_ToList_SvtMultiPortraitEntity___);
}


void __fastcall SvtMultiPortraitMaster___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct SvtMultiPortraitMaster___c_StaticFields *static_fields; // x0

  if ( (byte_42E6498 & 1) == 0 )
  {
    sub_B5D5C4(&SvtMultiPortraitMaster___c_TypeInfo, v1, v2, v3);
    byte_42E6498 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(SvtMultiPortraitMaster___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = SvtMultiPortraitMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct SvtMultiPortraitMaster___c_o *)v4;
  sub_B5D560(static_fields);
}


void __fastcall SvtMultiPortraitMaster___c___ctor(SvtMultiPortraitMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall SvtMultiPortraitMaster___c___GetEntityListOrderBy_b__1_0(
        SvtMultiPortraitMaster___c_o *this,
        SvtMultiPortraitEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
  return x->fields.idx;
}