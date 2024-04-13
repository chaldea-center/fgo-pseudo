void __fastcall WarMessageMaster___ctor(WarMessageMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E939D & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_WarMessageMaster__WarMessageEntity__string___ctor__, (_DWORD)method, v2, v3);
    byte_42E939D = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    483,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_WarMessageMaster__WarMessageEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
WarMessageEntity_o *__fastcall WarMessageMaster__GetEntity(
        WarMessageMaster_o *this,
        int32_t warId,
        int32_t idx,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  System_String_o *PK; // x1

  if ( (byte_42E939E & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_WarMessageMaster__WarMessageEntity__string__GetEntity__, warId, idx, method);
    sub_B5D5C4(&WarMessageEntity_TypeInfo, v7, v8, v9);
    byte_42E939E = 1;
  }
  if ( (BYTE3(WarMessageEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarMessageEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarMessageEntity_TypeInfo);
  }
  PK = WarMessageEntity__CreatePK(warId, idx, *(const MethodInfo **)&idx);
  return DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
           (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
           PK,
           (const MethodInfo_23FB260 *)Method_DataMasterBase_WarMessageMaster__WarMessageEntity__string__GetEntity__);
}


System_Collections_Generic_List_WarMessageEntity__o *__fastcall WarMessageMaster__GetValidMessageList(
        WarMessageMaster_o *this,
        int32_t warId,
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
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v46; // x19
  __int64 v47; // x0
  __int64 v48; // x1
  __int64 v49; // x1
  __int64 v50; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v53; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v56; // x3
  System_Collections_Generic_IEnumerator_T__c *v57; // x8
  unsigned __int64 v58; // x10
  int32_t *v59; // x11
  __int64 v60; // x0
  WarMessageEntity_o *v61; // x0
  __int64 v62; // x1
  WarMessageEntity_o *v63; // x22
  __int64 v64; // x9
  const MethodInfo *v65; // x1
  _BOOL8 v66; // x0
  __int64 v67; // x1
  System_Collections_Generic_IEnumerator_T__c *v68; // x8
  unsigned __int64 v69; // x10
  int32_t *v70; // x11
  __int64 v71; // x0
  WarMessageMaster___c_c *v72; // x0
  struct WarMessageMaster___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__0_0; // x20
  Il2CppObject *v75; // x21
  struct WarMessageMaster___c_StaticFields *v76; // x0
  System_String_array **v77; // x2
  System_String_array **v78; // x3
  System_Boolean_array **v79; // x4
  System_Int32_array **v80; // x5
  System_Int32_array *v81; // x6
  System_Int32_array *v82; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v83; // x0

  if ( (byte_42E939C & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      warId,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Linq_Enumerable_OrderBy_WarMessageEntity__int___, v6, v7, v8);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToList_WarMessageEntity___, v9, v10, v11);
    sub_B5D5C4(&Method_System_Func_WarMessageEntity__int___ctor__, v12, v13, v14);
    sub_B5D5C4(&System_Func_WarMessageEntity__int__TypeInfo, v15, v16, v17);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v21, v22, v23);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarMessageEntity__Add__, v27, v28, v29);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarMessageEntity___ctor__, v30, v31, v32);
    sub_B5D5C4(&System_Collections_Generic_List_WarMessageEntity__TypeInfo, v33, v34, v35);
    sub_B5D5C4(&Method_WarMessageMaster___c__GetValidMessageList_b__0_0__, v36, v37, v38);
    sub_B5D5C4(&WarMessageMaster___c_TypeInfo, v39, v40, v41);
    sub_B5D5C4(&WarMessageEntity_TypeInfo, v42, v43, v44);
    byte_42E939C = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  v46 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_WarMessageEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v46,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_WarMessageEntity___ctor__);
  if ( !list )
    sub_B5D69C(v47, v48);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2BB8C48 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B5D69C(0LL, v49);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v53 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v53;
        p_offset += 4;
        if ( v53 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v50);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v57 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v58 = 0LL;
      v59 = &v57->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v59 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v58;
        v59 += 4;
        if ( v58 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v60 = (__int64)&v57->vtable[*v59].method;
    }
    else
    {
LABEL_16:
      v60 = sub_AF54C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v56);
    }
    v61 = (WarMessageEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v60)(
                                  Enumerator,
                                  *(_QWORD *)(v60 + 8));
    v63 = v61;
    if ( !v61 )
      goto LABEL_42;
    v64 = *(&WarMessageEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v61->klass->_2.bitflags2 + 1) < (unsigned int)v64
      || (WarMessageEntity_c *)v61->klass->_2.typeHierarchy[v64 - 1] != WarMessageEntity_TypeInfo )
    {
      v61 = (WarMessageEntity_o *)sub_B5D990(v61);
LABEL_42:
      sub_B5D69C(v61, v62);
    }
    if ( v61->fields.warId == warId
      && WarMessageEntity__CheckCondition(v61, (const MethodInfo *)WarMessageEntity_TypeInfo) )
    {
      v66 = WarMessageEntity__CheckFrequencyCondition(v63, v65);
      if ( v66 )
      {
        if ( !v46 )
          sub_B5D69C(v66, v67);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v46,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v63,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_WarMessageEntity__Add__);
      }
    }
  }
  v68 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v69 = 0LL;
    v70 = &v68->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v70 - 1) != System_IDisposable_TypeInfo )
    {
      ++v69;
      v70 += 4;
      if ( v69 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_30;
    }
    v71 = (__int64)&v68->vtable[*v70].method;
  }
  else
  {
LABEL_30:
    v71 = sub_AF54C0(Enumerator, System_IDisposable_TypeInfo, 0LL, v56);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v71)(Enumerator, *(_QWORD *)(v71 + 8));
  v72 = WarMessageMaster___c_TypeInfo;
  if ( (BYTE3(WarMessageMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarMessageMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarMessageMaster___c_TypeInfo);
    v72 = WarMessageMaster___c_TypeInfo;
  }
  static_fields = v72->static_fields;
  _9__0_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__0_0;
  if ( !_9__0_0 )
  {
    if ( (BYTE3(v72->vtable._0_Equals.methodPtr) & 4) != 0 && !v72->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v72);
      static_fields = WarMessageMaster___c_TypeInfo->static_fields;
    }
    v75 = (Il2CppObject *)static_fields->__9;
    _9__0_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B5D694(System_Func_WarMessageEntity__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__0_0,
      v75,
      Method_WarMessageMaster___c__GetValidMessageList_b__0_0__,
      (const MethodInfo_2C2F87C *)Method_System_Func_WarMessageEntity__int___ctor__);
    v76 = WarMessageMaster___c_TypeInfo->static_fields;
    v76->__9__0_0 = (struct System_Func_WarMessageEntity__int__o *)_9__0_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v76->__9__0_0,
      (System_Int32_array **)_9__0_0,
      v77,
      v78,
      v79,
      v80,
      v81,
      v82);
  }
  v83 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_QuestPhaseDetailEntity_BoardInfo__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v46,
                                                               (System_Func_TSource__TKey__o *)_9__0_0,
                                                               (const MethodInfo_1CAF208 *)Method_System_Linq_Enumerable_OrderBy_WarMessageEntity__int___);
  return (System_Collections_Generic_List_WarMessageEntity__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                  v83,
                                                                  (const MethodInfo_1CBA734 *)Method_System_Linq_Enumerable_ToList_WarMessageEntity___);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall WarMessageMaster__TryGetEntity(
        WarMessageMaster_o *this,
        WarMessageEntity_o **entity,
        int32_t warId,
        int32_t idx,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  System_String_o *PK; // x2

  if ( (byte_42E939F & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_WarMessageMaster__WarMessageEntity__string__TryGetEntity__,
      (_DWORD)entity,
      warId,
      *(_QWORD *)&idx);
    sub_B5D5C4(&WarMessageEntity_TypeInfo, v9, v10, v11);
    byte_42E939F = 1;
  }
  if ( (BYTE3(WarMessageEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarMessageEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarMessageEntity_TypeInfo);
  }
  PK = WarMessageEntity__CreatePK(warId, idx, *(const MethodInfo **)&warId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_WarMessageMaster__WarMessageEntity__string__TryGetEntity__);
}


void __fastcall WarMessageMaster___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct WarMessageMaster___c_StaticFields *static_fields; // x0

  if ( (byte_42E5FEB & 1) == 0 )
  {
    sub_B5D5C4(&WarMessageMaster___c_TypeInfo, v1, v2, v3);
    byte_42E5FEB = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(WarMessageMaster___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = WarMessageMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct WarMessageMaster___c_o *)v4;
  sub_B5D560(static_fields);
}


void __fastcall WarMessageMaster___c___ctor(WarMessageMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall WarMessageMaster___c___GetValidMessageList_b__0_0(
        WarMessageMaster___c_o *this,
        WarMessageEntity_o *v,
        const MethodInfo *method)
{
  if ( !v )
    sub_B5D69C(this, 0LL);
  return v->fields.idx;
}