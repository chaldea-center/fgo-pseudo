void __fastcall SvtMultiPortraitMaster___ctor(SvtMultiPortraitMaster_o *this, const MethodInfo *method)
{
  if ( (byte_418B200 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_SvtMultiPortraitMaster__SvtMultiPortraitEntity__string___ctor__, method);
    byte_418B200 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    393,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_SvtMultiPortraitMaster__SvtMultiPortraitEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_SvtMultiPortraitEntity__o *__fastcall SvtMultiPortraitMaster__GetEntityListOrderBy(
        SvtMultiPortraitMaster_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v21; // x19
  __int64 v22; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v24; // x1
  __int64 v25; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v28; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v31; // x3
  System_Collections_Generic_IEnumerator_T__c *v32; // x8
  unsigned __int64 v33; // x10
  int32_t *v34; // x11
  __int64 v35; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v36; // x0
  SvtMultiPortraitEntity_c *v37; // x1
  __int64 v38; // x10
  System_Collections_Generic_IEnumerator_T__c *v39; // x8
  unsigned __int64 v40; // x10
  int32_t *v41; // x11
  __int64 v42; // x0
  SvtMultiPortraitMaster___c_c *v43; // x0
  struct SvtMultiPortraitMaster___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__1_0; // x20
  Il2CppObject *v46; // x21
  struct SvtMultiPortraitMaster___c_StaticFields *v47; // x0
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v54; // x0

  if ( (byte_418B201 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&svtId);
    sub_B2C35C(&Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___, v7);
    sub_B2C35C(&Method_System_Linq_Enumerable_OrderBy_SvtMultiPortraitEntity__int___, v8);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToList_SvtMultiPortraitEntity___, v9);
    sub_B2C35C(&Method_System_Func_SvtMultiPortraitEntity__int___ctor__, v10);
    sub_B2C35C(&System_Func_SvtMultiPortraitEntity__int__TypeInfo, v11);
    sub_B2C35C(&System_IDisposable_TypeInfo, v12);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v13);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_SvtMultiPortraitEntity__Add__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_SvtMultiPortraitEntity___ctor__, v16);
    sub_B2C35C(&System_Collections_Generic_List_SvtMultiPortraitEntity__TypeInfo, v17);
    sub_B2C35C(&SvtMultiPortraitEntity_TypeInfo, v18);
    sub_B2C35C(&Method_SvtMultiPortraitMaster___c__GetEntityListOrderBy_b__1_0__, v19);
    sub_B2C35C(&SvtMultiPortraitMaster___c_TypeInfo, v20);
    byte_418B201 = 1;
  }
  v21 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_SvtMultiPortraitEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v21,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_SvtMultiPortraitEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B2C434(0LL, v22);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2A0E96C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B2C434(0LL, v24);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v28 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v28;
        p_offset += 4;
        if ( v28 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v25);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v32 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v33 = 0LL;
      v34 = &v32->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v34 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v33;
        v34 += 4;
        if ( v33 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v35 = (__int64)&v32->vtable[*v34].method;
    }
    else
    {
LABEL_16:
      v35 = sub_AC5258(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v31);
    }
    v36 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v35)(
                                                                   Enumerator,
                                                                   *(_QWORD *)(v35 + 8));
    if ( v36 )
    {
      v37 = SvtMultiPortraitEntity_TypeInfo;
      v38 = *(&SvtMultiPortraitEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v36->klass->_2.bitflags2 + 1) < (unsigned int)v38
        || (SvtMultiPortraitEntity_c *)v36->klass->_2.typeHierarchy[v38 - 1] != SvtMultiPortraitEntity_TypeInfo )
      {
        sub_B2C728(v36);
LABEL_43:
        sub_B2C434(v36, v37);
      }
      if ( v36->fields.missionTargetId == svtId && v36->fields.missionConditionDetailId == limitCount )
      {
        if ( !v21 )
          goto LABEL_43;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v21,
          v36,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_SvtMultiPortraitEntity__Add__);
      }
    }
  }
  v39 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v40 = 0LL;
    v41 = &v39->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v41 - 1) != System_IDisposable_TypeInfo )
    {
      ++v40;
      v41 += 4;
      if ( v40 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_29;
    }
    v42 = (__int64)&v39->vtable[*v41].method;
  }
  else
  {
LABEL_29:
    v42 = sub_AC5258(Enumerator, System_IDisposable_TypeInfo, 0LL, v31);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v42)(Enumerator, *(_QWORD *)(v42 + 8));
  if ( !System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v21,
          (const MethodInfo_17385C0 *)Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___) )
    return 0LL;
  v43 = SvtMultiPortraitMaster___c_TypeInfo;
  if ( (BYTE3(SvtMultiPortraitMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SvtMultiPortraitMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SvtMultiPortraitMaster___c_TypeInfo);
    v43 = SvtMultiPortraitMaster___c_TypeInfo;
  }
  static_fields = v43->static_fields;
  _9__1_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__1_0;
  if ( !_9__1_0 )
  {
    if ( (BYTE3(v43->vtable._0_Equals.methodPtr) & 4) != 0 && !v43->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v43);
      static_fields = SvtMultiPortraitMaster___c_TypeInfo->static_fields;
    }
    v46 = (Il2CppObject *)static_fields->__9;
    _9__1_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B2C42C(System_Func_SvtMultiPortraitEntity__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__1_0,
      v46,
      Method_SvtMultiPortraitMaster___c__GetEntityListOrderBy_b__1_0__,
      (const MethodInfo_27127B0 *)Method_System_Func_SvtMultiPortraitEntity__int___ctor__);
    v47 = SvtMultiPortraitMaster___c_TypeInfo->static_fields;
    v47->__9__1_0 = (struct System_Func_SvtMultiPortraitEntity__int__o *)_9__1_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v47->__9__1_0,
      (System_Int32_array **)_9__1_0,
      v48,
      v49,
      v50,
      v51,
      v52,
      v53);
  }
  v54 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_QuestPhaseDetailEntity_BoardInfo__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v21,
                                                               (System_Func_TSource__TKey__o *)_9__1_0,
                                                               (const MethodInfo_1A93658 *)Method_System_Linq_Enumerable_OrderBy_SvtMultiPortraitEntity__int___);
  return (System_Collections_Generic_List_SvtMultiPortraitEntity__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                        v54,
                                                                        (const MethodInfo_1A9DE9C *)Method_System_Linq_Enumerable_ToList_SvtMultiPortraitEntity___);
}


void __fastcall SvtMultiPortraitMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct SvtMultiPortraitMaster___c_StaticFields *static_fields; // x0

  if ( (byte_41847E2 & 1) == 0 )
  {
    sub_B2C35C(&SvtMultiPortraitMaster___c_TypeInfo, v1);
    byte_41847E2 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(SvtMultiPortraitMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = SvtMultiPortraitMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct SvtMultiPortraitMaster___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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
    sub_B2C434(this, 0LL);
  return x->fields.idx;
}