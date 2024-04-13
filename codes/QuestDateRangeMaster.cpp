void __fastcall QuestDateRangeMaster___ctor(QuestDateRangeMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E8A95 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_QuestDateRangeMaster__QuestDateRangeEntity__string___ctor__,
      (_DWORD)method,
      v2,
      v3);
    byte_42E8A95 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    283,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_QuestDateRangeMaster__QuestDateRangeEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
QuestDateRangeEntity_o *__fastcall QuestDateRangeMaster__GetEntity(
        QuestDateRangeMaster_o *this,
        int32_t id,
        int32_t idx,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42E8A93 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_QuestDateRangeMaster__QuestDateRangeEntity__string__GetEntity__, id, idx, method);
    byte_42E8A93 = 1;
  }
  PK = QuestDateRangeEntity__CreatePK(id, idx, *(const MethodInfo **)&idx);
  return (QuestDateRangeEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                     (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                     PK,
                                     (const MethodInfo_23FB260 *)Method_DataMasterBase_QuestDateRangeMaster__QuestDateRangeEntity__string__GetEntity__);
}


System_Collections_Generic_List_QuestDateRangeEntity__o *__fastcall QuestDateRangeMaster__GetQuestDateRangeEntityList(
        QuestDateRangeMaster_o *this,
        int32_t questDateRangeId,
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v42; // x19
  __int64 v43; // x1
  void *list; // x0
  __int64 v45; // x1
  __int64 v46; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v49; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v52; // x3
  System_Collections_Generic_IEnumerator_T__c *v53; // x8
  unsigned __int64 v54; // x10
  int32_t *v55; // x11
  __int64 v56; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v57; // x0
  __int64 v58; // x1
  __int64 v59; // x10
  System_Collections_Generic_IEnumerator_T__c *v60; // x8
  unsigned __int64 v61; // x10
  int32_t *v62; // x11
  __int64 v63; // x0
  struct QuestDateRangeMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__3_0; // x20
  Il2CppObject *v66; // x21
  struct QuestDateRangeMaster___c_StaticFields *v67; // x0
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7

  if ( (byte_42E8A96 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      questDateRangeId,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Comparison_QuestDateRangeEntity___ctor__, v6, v7, v8);
    sub_B5D5C4(&System_Comparison_QuestDateRangeEntity__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v15, v16, v17);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_QuestDateRangeEntity__Add__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_QuestDateRangeEntity__Sort__, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_List_QuestDateRangeEntity___ctor__, v27, v28, v29);
    sub_B5D5C4(&System_Collections_Generic_List_QuestDateRangeEntity__TypeInfo, v30, v31, v32);
    sub_B5D5C4(&QuestDateRangeEntity_TypeInfo, v33, v34, v35);
    sub_B5D5C4(&Method_QuestDateRangeMaster___c__GetQuestDateRangeEntityList_b__3_0__, v36, v37, v38);
    sub_B5D5C4(&QuestDateRangeMaster___c_TypeInfo, v39, v40, v41);
    byte_42E8A96 = 1;
  }
  v42 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_QuestDateRangeEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v42,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_QuestDateRangeEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_43;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                 (const MethodInfo_2BB8C48 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B5D69C(0LL, v45);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v49 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v49;
        p_offset += 4;
        if ( v49 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v46);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v53 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v54 = 0LL;
      v55 = &v53->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v55 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v54;
        v55 += 4;
        if ( v54 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v56 = (__int64)&v53->vtable[*v55].method;
    }
    else
    {
LABEL_16:
      v56 = sub_AF54C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v52);
    }
    v57 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v56)(
                                                                   Enumerator,
                                                                   *(_QWORD *)(v56 + 8));
    if ( !v57 )
      goto LABEL_41;
    v59 = *(&QuestDateRangeEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v57->klass->_2.bitflags2 + 1) < (unsigned int)v59
      || (QuestDateRangeEntity_c *)v57->klass->_2.typeHierarchy[v59 - 1] != QuestDateRangeEntity_TypeInfo )
    {
      v57 = (EventMissionProgressRequest_Argument_ProgressData_o *)sub_B5D990(v57);
LABEL_41:
      sub_B5D69C(v57, v58);
    }
    if ( v57->fields.missionTargetId == questDateRangeId )
    {
      if ( !v42 )
        sub_B5D69C(v57, QuestDateRangeEntity_TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v42,
        v57,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_QuestDateRangeEntity__Add__);
    }
  }
  v60 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v61 = 0LL;
    v62 = &v60->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v62 - 1) != System_IDisposable_TypeInfo )
    {
      ++v61;
      v62 += 4;
      if ( v61 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_28;
    }
    v63 = (__int64)&v60->vtable[*v62].method;
  }
  else
  {
LABEL_28:
    v63 = sub_AF54C0(Enumerator, System_IDisposable_TypeInfo, 0LL, v52);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v63)(Enumerator, *(_QWORD *)(v63 + 8));
  list = QuestDateRangeMaster___c_TypeInfo;
  if ( (BYTE3(QuestDateRangeMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestDateRangeMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestDateRangeMaster___c_TypeInfo);
    list = QuestDateRangeMaster___c_TypeInfo;
  }
  static_fields = (struct QuestDateRangeMaster___c_StaticFields *)*((_QWORD *)list + 23);
  _9__3_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( (*((_BYTE *)list + 307) & 4) != 0 && !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      static_fields = QuestDateRangeMaster___c_TypeInfo->static_fields;
    }
    v66 = (Il2CppObject *)static_fields->__9;
    _9__3_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_QuestDateRangeEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__3_0,
      v66,
      Method_QuestDateRangeMaster___c__GetQuestDateRangeEntityList_b__3_0__,
      (const MethodInfo_249B1FC *)Method_System_Comparison_QuestDateRangeEntity___ctor__);
    v67 = QuestDateRangeMaster___c_TypeInfo->static_fields;
    v67->__9__3_0 = (struct System_Comparison_QuestDateRangeEntity__o *)_9__3_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v67->__9__3_0,
      (System_Int32_array **)_9__3_0,
      v68,
      v69,
      v70,
      v71,
      v72,
      v73);
  }
  if ( !v42 )
LABEL_43:
    sub_B5D69C(list, v43);
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v42,
    (System_Comparison_T__o *)_9__3_0,
    (const MethodInfo_305909C *)Method_System_Collections_Generic_List_QuestDateRangeEntity__Sort__);
  return (System_Collections_Generic_List_QuestDateRangeEntity__o *)v42;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestDateRangeMaster__IsPeriodFromOpenedToClosed(
        QuestDateRangeMaster_o *this,
        int32_t questDateRangeId,
        int64_t nowTime,
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
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v20; // x1
  __int64 v21; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v24; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v27; // x8
  unsigned __int64 v28; // x10
  int32_t *v29; // x11
  __int64 v30; // x0
  _DWORD *v31; // x0
  __int64 v32; // x1
  __int64 v33; // x9
  bool v34; // w20
  System_Collections_Generic_IEnumerator_T__c *v35; // x8
  unsigned __int64 v36; // x10
  int32_t *v37; // x11
  __int64 v38; // x0
  int v40; // [xsp+0h] [xbp-40h]

  if ( (byte_42E8A97 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      questDateRangeId,
      nowTime,
      method);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v10, v11, v12);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&QuestDateRangeEntity_TypeInfo, v16, v17, v18);
    byte_42E8A97 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B5D69C(0LL, *(_QWORD *)&questDateRangeId);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2BB8C48 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B5D69C(0LL, v20);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v24 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v24;
        p_offset += 4;
        if ( v24 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v21);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v27 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v28 = 0LL;
      v29 = &v27->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v29 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v28;
        v29 += 4;
        if ( v28 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v30 = (__int64)&v27->vtable[*v29].method;
    }
    else
    {
LABEL_16:
      v30 = sub_AF54C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v21);
    }
    v31 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v30)(
                      Enumerator,
                      *(_QWORD *)(v30 + 8));
    if ( !v31 )
      goto LABEL_36;
    v33 = *(&QuestDateRangeEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)v31 + 300LL) < (unsigned int)v33
      || *(QuestDateRangeEntity_c **)(*(_QWORD *)(*(_QWORD *)v31 + 200LL) + 8 * v33 - 8) != QuestDateRangeEntity_TypeInfo )
    {
      v31 = (_DWORD *)sub_B5D990(v31);
LABEL_36:
      sub_B5D69C(v31, v32);
    }
    if ( v31[4] == questDateRangeId && (int)v31[6] <= nowTime && (int)v31[7] > nowTime )
    {
      v40 = 79;
      v34 = 1;
      goto LABEL_26;
    }
  }
  v34 = 0;
  v40 = 77;
LABEL_26:
  v35 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v36 = 0LL;
    v37 = &v35->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v37 - 1) != System_IDisposable_TypeInfo )
    {
      ++v36;
      v37 += 4;
      if ( v36 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_30;
    }
    v38 = (__int64)&v35->vtable[*v37].method;
  }
  else
  {
LABEL_30:
    v38 = sub_AF54C0(Enumerator, System_IDisposable_TypeInfo, 0LL, v21);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v38)(Enumerator, *(_QWORD *)(v38 + 8));
  if ( v40 == 77 )
    return 0;
  return v34;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestDateRangeMaster__TryGetEntity(
        QuestDateRangeMaster_o *this,
        QuestDateRangeEntity_o **entity,
        int32_t id,
        int32_t idx,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_42E8A94 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_QuestDateRangeMaster__QuestDateRangeEntity__string__TryGetEntity__,
      (_DWORD)entity,
      id,
      *(_QWORD *)&idx);
    byte_42E8A94 = 1;
  }
  PK = QuestDateRangeEntity__CreatePK(id, idx, *(const MethodInfo **)&id);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_QuestDateRangeMaster__QuestDateRangeEntity__string__TryGetEntity__);
}


void __fastcall QuestDateRangeMaster___c___cctor(const MethodInfo *method)
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

  if ( (byte_42E7EED & 1) == 0 )
  {
    sub_B5D5C4(&QuestDateRangeMaster___c_TypeInfo, v1, v2, v3);
    byte_42E7EED = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(QuestDateRangeMaster___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = (BattleServantConfConponent_o *)QuestDateRangeMaster___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v4;
  sub_B5D560(static_fields, (System_Int32_array **)v4, v6, v7, v8, v9, v10, v11);
}


void __fastcall QuestDateRangeMaster___c___ctor(QuestDateRangeMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall QuestDateRangeMaster___c___GetQuestDateRangeEntityList_b__3_0(
        QuestDateRangeMaster___c_o *this,
        QuestDateRangeEntity_o *a,
        QuestDateRangeEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B5D69C(this, a);
  return a->fields.idx - b->fields.idx;
}