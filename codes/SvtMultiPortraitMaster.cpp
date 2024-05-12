void __fastcall SvtMultiPortraitMaster___ctor(SvtMultiPortraitMaster_o *this, const MethodInfo *method)
{
  if ( (byte_43882D8 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_SvtMultiPortraitMaster__SvtMultiPortraitEntity__string___ctor__);
    byte_43882D8 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    394,
    (const MethodInfo_21FBC48 *)Method_DataMasterBase_SvtMultiPortraitMaster__SvtMultiPortraitEntity__string___ctor__);
}


System_Collections_Generic_List_SvtMultiPortraitEntity__o *__fastcall SvtMultiPortraitMaster__GetEntityListOrderBy(
        SvtMultiPortraitMaster_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x19
  __int64 v8; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v10; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v13; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v16; // x8
  unsigned __int64 v17; // x10
  int32_t *v18; // x11
  __int64 v19; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v20; // x0
  SvtMultiPortraitEntity_c *v21; // x1
  __int64 v22; // x10
  System_Collections_Generic_IEnumerator_T__c *v23; // x8
  unsigned __int64 v24; // x10
  int32_t *v25; // x11
  __int64 v26; // x0
  SvtMultiPortraitMaster___c_c *v27; // x0
  struct SvtMultiPortraitMaster___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__1_0; // x20
  Il2CppObject *v30; // x21
  struct SvtMultiPortraitMaster___c_StaticFields *v31; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x0

  if ( (byte_43882D9 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B775C4(&Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___);
    sub_B775C4(&Method_System_Linq_Enumerable_OrderBy_SvtMultiPortraitEntity__int___);
    sub_B775C4(&Method_System_Linq_Enumerable_ToList_SvtMultiPortraitEntity___);
    sub_B775C4(&Method_System_Func_SvtMultiPortraitEntity__int___ctor__);
    sub_B775C4(&System_Func_SvtMultiPortraitEntity__int__TypeInfo);
    sub_B775C4(&System_IDisposable_TypeInfo);
    sub_B775C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B775C4(&System_Collections_IEnumerator_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_SvtMultiPortraitEntity__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_SvtMultiPortraitEntity___ctor__);
    sub_B775C4(&System_Collections_Generic_List_SvtMultiPortraitEntity__TypeInfo);
    sub_B775C4(&SvtMultiPortraitEntity_TypeInfo);
    sub_B775C4(&Method_SvtMultiPortraitMaster___c__GetEntityListOrderBy_b__1_0__);
    sub_B775C4(&SvtMultiPortraitMaster___c_TypeInfo);
    byte_43882D9 = 1;
  }
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_SvtMultiPortraitEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_SvtMultiPortraitEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B7769C(0LL, v8);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2CC56C8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B7769C(0LL, v10);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v13 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v13;
        p_offset += 4;
        if ( v13 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_B0F4C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v16 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v17 = 0LL;
      v18 = &v16->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v18 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v17;
        v18 += 4;
        if ( v17 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v19 = (__int64)&v16->vtable[*v18].method;
    }
    else
    {
LABEL_16:
      v19 = sub_B0F4C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v20 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v19)(
                                                                   Enumerator,
                                                                   *(_QWORD *)(v19 + 8));
    if ( v20 )
    {
      v21 = SvtMultiPortraitEntity_TypeInfo;
      v22 = *(&SvtMultiPortraitEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v20->klass->_2.bitflags2 + 1) < (unsigned int)v22
        || (SvtMultiPortraitEntity_c *)v20->klass->_2.typeHierarchy[v22 - 1] != SvtMultiPortraitEntity_TypeInfo )
      {
        v20 = (EventMissionProgressRequest_Argument_ProgressData_o *)sub_B77990(v20);
LABEL_43:
        sub_B7769C(v20, v21);
      }
      if ( v20->fields.missionTargetId == svtId && v20->fields.missionConditionDetailId == limitCount )
      {
        if ( !v7 )
          goto LABEL_43;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v7,
          v20,
          (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_SvtMultiPortraitEntity__Add__);
      }
    }
  }
  v23 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v24 = 0LL;
    v25 = &v23->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v25 - 1) != System_IDisposable_TypeInfo )
    {
      ++v24;
      v25 += 4;
      if ( v24 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_29;
    }
    v26 = (__int64)&v23->vtable[*v25].method;
  }
  else
  {
LABEL_29:
    v26 = sub_B0F4C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v26)(Enumerator, *(_QWORD *)(v26 + 8));
  if ( !System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v7,
          (const MethodInfo_1D1D960 *)Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___) )
    return 0LL;
  v27 = SvtMultiPortraitMaster___c_TypeInfo;
  if ( (BYTE3(SvtMultiPortraitMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SvtMultiPortraitMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SvtMultiPortraitMaster___c_TypeInfo);
    v27 = SvtMultiPortraitMaster___c_TypeInfo;
  }
  static_fields = v27->static_fields;
  _9__1_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__1_0;
  if ( !_9__1_0 )
  {
    if ( (BYTE3(v27->vtable._0_Equals.methodPtr) & 4) != 0 && !v27->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v27);
      static_fields = SvtMultiPortraitMaster___c_TypeInfo->static_fields;
    }
    v30 = (Il2CppObject *)static_fields->__9;
    _9__1_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B77694(System_Func_SvtMultiPortraitEntity__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__1_0,
      v30,
      Method_SvtMultiPortraitMaster___c__GetEntityListOrderBy_b__1_0__,
      (const MethodInfo_29E9E70 *)Method_System_Func_SvtMultiPortraitEntity__int___ctor__);
    v31 = SvtMultiPortraitMaster___c_TypeInfo->static_fields;
    v31->__9__1_0 = (struct System_Func_SvtMultiPortraitEntity__int__o *)_9__1_0;
    sub_B77560(&v31->__9__1_0);
  }
  v32 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_QuestPhaseDetailEntity_BoardInfo__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v7,
                                                               (System_Func_TSource__TKey__o *)_9__1_0,
                                                               (const MethodInfo_1D3499C *)Method_System_Linq_Enumerable_OrderBy_SvtMultiPortraitEntity__int___);
  return (System_Collections_Generic_List_SvtMultiPortraitEntity__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                        v32,
                                                                        (const MethodInfo_1D404B8 *)Method_System_Linq_Enumerable_ToList_SvtMultiPortraitEntity___);
}


void __fastcall SvtMultiPortraitMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct SvtMultiPortraitMaster___c_StaticFields *static_fields; // x0

  if ( (byte_43886E7 & 1) == 0 )
  {
    sub_B775C4(&SvtMultiPortraitMaster___c_TypeInfo);
    byte_43886E7 = 1;
  }
  v1 = (Il2CppObject *)sub_B77694(SvtMultiPortraitMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = SvtMultiPortraitMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct SvtMultiPortraitMaster___c_o *)v1;
  sub_B77560(static_fields);
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
    sub_B7769C(this, 0LL);
  return x->fields.idx;
}