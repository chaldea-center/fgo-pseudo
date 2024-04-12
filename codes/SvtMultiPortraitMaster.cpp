void __fastcall SvtMultiPortraitMaster___ctor(SvtMultiPortraitMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42ACFC5 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_SvtMultiPortraitMaster__SvtMultiPortraitEntity__string___ctor__);
    byte_42ACFC5 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    394,
    (const MethodInfo_23E268C *)Method_DataMasterBase_SvtMultiPortraitMaster__SvtMultiPortraitEntity__string___ctor__);
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
  __int64 v11; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v14; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v17; // x3
  System_Collections_Generic_IEnumerator_T__c *v18; // x8
  unsigned __int64 v19; // x10
  int32_t *v20; // x11
  __int64 v21; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v22; // x0
  SvtMultiPortraitEntity_c *v23; // x1
  __int64 v24; // x10
  System_Collections_Generic_IEnumerator_T__c *v25; // x8
  unsigned __int64 v26; // x10
  int32_t *v27; // x11
  __int64 v28; // x0
  SvtMultiPortraitMaster___c_c *v29; // x0
  struct SvtMultiPortraitMaster___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__1_0; // x20
  Il2CppObject *v32; // x21
  struct SvtMultiPortraitMaster___c_StaticFields *v33; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x0

  if ( (byte_42ACFC6 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B52984(&Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___);
    sub_B52984(&Method_System_Linq_Enumerable_OrderBy_SvtMultiPortraitEntity__int___);
    sub_B52984(&Method_System_Linq_Enumerable_ToList_SvtMultiPortraitEntity___);
    sub_B52984(&Method_System_Func_SvtMultiPortraitEntity__int___ctor__);
    sub_B52984(&System_Func_SvtMultiPortraitEntity__int__TypeInfo);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_SvtMultiPortraitEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_SvtMultiPortraitEntity___ctor__);
    sub_B52984(&System_Collections_Generic_List_SvtMultiPortraitEntity__TypeInfo);
    sub_B52984(&SvtMultiPortraitEntity_TypeInfo);
    sub_B52984(&Method_SvtMultiPortraitMaster___c__GetEntityListOrderBy_b__1_0__);
    sub_B52984(&SvtMultiPortraitMaster___c_TypeInfo);
    byte_42ACFC6 = 1;
  }
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_SvtMultiPortraitEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_SvtMultiPortraitEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B52A5C(0LL, v8);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2B98BDC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B52A5C(0LL, v10);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v14 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v14;
        p_offset += 4;
        if ( v14 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AEB880(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v11);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v18 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v19 = 0LL;
      v20 = &v18->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v20 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v19;
        v20 += 4;
        if ( v19 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v21 = (__int64)&v18->vtable[*v20].method;
    }
    else
    {
LABEL_16:
      v21 = sub_AEB880(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v17);
    }
    v22 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v21)(
                                                                   Enumerator,
                                                                   *(_QWORD *)(v21 + 8));
    if ( v22 )
    {
      v23 = SvtMultiPortraitEntity_TypeInfo;
      v24 = *(&SvtMultiPortraitEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v22->klass->_2.bitflags2 + 1) < (unsigned int)v24
        || (SvtMultiPortraitEntity_c *)v22->klass->_2.typeHierarchy[v24 - 1] != SvtMultiPortraitEntity_TypeInfo )
      {
        v22 = (EventMissionProgressRequest_Argument_ProgressData_o *)sub_B52D50(v22);
LABEL_43:
        sub_B52A5C(v22, v23);
      }
      if ( v22->fields.missionTargetId == svtId && v22->fields.missionConditionDetailId == limitCount )
      {
        if ( !v7 )
          goto LABEL_43;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v7,
          v22,
          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_SvtMultiPortraitEntity__Add__);
      }
    }
  }
  v25 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v26 = 0LL;
    v27 = &v25->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v27 - 1) != System_IDisposable_TypeInfo )
    {
      ++v26;
      v27 += 4;
      if ( v26 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_29;
    }
    v28 = (__int64)&v25->vtable[*v27].method;
  }
  else
  {
LABEL_29:
    v28 = sub_AEB880(Enumerator, System_IDisposable_TypeInfo, 0LL, v17);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v28)(Enumerator, *(_QWORD *)(v28 + 8));
  if ( !System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v7,
          (const MethodInfo_1B5080C *)Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___) )
    return 0LL;
  v29 = SvtMultiPortraitMaster___c_TypeInfo;
  if ( (BYTE3(SvtMultiPortraitMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SvtMultiPortraitMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SvtMultiPortraitMaster___c_TypeInfo);
    v29 = SvtMultiPortraitMaster___c_TypeInfo;
  }
  static_fields = v29->static_fields;
  _9__1_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__1_0;
  if ( !_9__1_0 )
  {
    if ( (BYTE3(v29->vtable._0_Equals.methodPtr) & 4) != 0 && !v29->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v29);
      static_fields = SvtMultiPortraitMaster___c_TypeInfo->static_fields;
    }
    v32 = (Il2CppObject *)static_fields->__9;
    _9__1_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B52A54(System_Func_SvtMultiPortraitEntity__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__1_0,
      v32,
      Method_SvtMultiPortraitMaster___c__GetEntityListOrderBy_b__1_0__,
      (const MethodInfo_2BC9C68 *)Method_System_Func_SvtMultiPortraitEntity__int___ctor__);
    v33 = SvtMultiPortraitMaster___c_TypeInfo->static_fields;
    v33->__9__1_0 = (struct System_Func_SvtMultiPortraitEntity__int__o *)_9__1_0;
    sub_B52920(&v33->__9__1_0);
  }
  v34 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_QuestPhaseDetailEntity_BoardInfo__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v7,
                                                               (System_Func_TSource__TKey__o *)_9__1_0,
                                                               (const MethodInfo_1B66330 *)Method_System_Linq_Enumerable_OrderBy_SvtMultiPortraitEntity__int___);
  return (System_Collections_Generic_List_SvtMultiPortraitEntity__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                        v34,
                                                                        (const MethodInfo_1B714E4 *)Method_System_Linq_Enumerable_ToList_SvtMultiPortraitEntity___);
}


void __fastcall SvtMultiPortraitMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct SvtMultiPortraitMaster___c_StaticFields *static_fields; // x0

  if ( (byte_42ADDBE & 1) == 0 )
  {
    sub_B52984(&SvtMultiPortraitMaster___c_TypeInfo);
    byte_42ADDBE = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(SvtMultiPortraitMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = SvtMultiPortraitMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct SvtMultiPortraitMaster___c_o *)v1;
  sub_B52920(static_fields);
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
    sub_B52A5C(this, 0LL);
  return x->fields.idx;
}