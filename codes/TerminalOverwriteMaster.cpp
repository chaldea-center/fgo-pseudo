void __fastcall TerminalOverwriteMaster___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_Dictionary_int__int__o *v8; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  System_Collections_Generic_Dictionary_int__int__o *v20; // x19
  struct TerminalOverwriteMaster_StaticFields *v21; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  System_Collections_Generic_Dictionary_int__int__o *v32; // x19
  struct TerminalOverwriteMaster_StaticFields *v33; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7

  if ( (byte_40F6C83 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__int__Add__, v1);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v5);
    sub_B16FFC(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v6);
    sub_B16FFC(&TerminalOverwriteMaster_TypeInfo, v7);
    byte_40F6C83 = 1;
  }
  v8 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B170CC(
                                                              System_Collections_Generic_Dictionary_int__int__TypeInfo,
                                                              v1,
                                                              v2,
                                                              v3,
                                                              v4);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v8,
    (const MethodInfo_2DDC410 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  if ( !v8 )
    goto LABEL_7;
  System_Collections_Generic_Dictionary_int__int___Add(
    v8,
    2,
    3,
    (const MethodInfo_2DDCFB4 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
  System_Collections_Generic_Dictionary_int__int___Add(
    v8,
    4,
    4,
    (const MethodInfo_2DDCFB4 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
  System_Collections_Generic_Dictionary_int__int___Add(
    v8,
    7,
    2,
    (const MethodInfo_2DDCFB4 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
  static_fields = (BattleServantConfConponent_o *)TerminalOverwriteMaster_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v8;
  sub_B16F98(static_fields, (System_Int32_array **)v8, v10, v11, v12, v13, v14, v15);
  v20 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B170CC(
                                                               System_Collections_Generic_Dictionary_int__int__TypeInfo,
                                                               v16,
                                                               v17,
                                                               v18,
                                                               v19);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v20,
    (const MethodInfo_2DDC410 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  if ( !v20 )
    goto LABEL_7;
  System_Collections_Generic_Dictionary_int__int___Add(
    v20,
    2,
    7,
    (const MethodInfo_2DDCFB4 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
  System_Collections_Generic_Dictionary_int__int___Add(
    v20,
    4,
    8,
    (const MethodInfo_2DDCFB4 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
  System_Collections_Generic_Dictionary_int__int___Add(
    v20,
    7,
    6,
    (const MethodInfo_2DDCFB4 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
  v21 = TerminalOverwriteMaster_TypeInfo->static_fields;
  v21->overwriteEffectTypeTable = v20;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v21->overwriteEffectTypeTable,
    (System_Int32_array **)v20,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  v32 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B170CC(
                                                               System_Collections_Generic_Dictionary_int__int__TypeInfo,
                                                               v28,
                                                               v29,
                                                               v30,
                                                               v31);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v32,
    (const MethodInfo_2DDC410 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  if ( !v32 )
LABEL_7:
    sub_B170D4();
  System_Collections_Generic_Dictionary_int__int___Add(
    v32,
    7,
    5,
    (const MethodInfo_2DDCFB4 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
  v33 = TerminalOverwriteMaster_TypeInfo->static_fields;
  v33->overwriteSpriteTypeTable = v32;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v33->overwriteSpriteTypeTable,
    (System_Int32_array **)v32,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
}


void __fastcall TerminalOverwriteMaster___ctor(TerminalOverwriteMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40F6C7B & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_TerminalOverwriteMaster__TerminalOverwriteEntity__string___ctor__, method);
    byte_40F6C7B = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    460,
    (const MethodInfo_266F73C *)Method_DataMasterBase_TerminalOverwriteMaster__TerminalOverwriteEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
TerminalOverwriteEntity_o *__fastcall TerminalOverwriteMaster__GetEntity(
        TerminalOverwriteMaster_o *this,
        int32_t id,
        int32_t type,
        int32_t priority,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_40F6C79 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_DataMasterBase_TerminalOverwriteMaster__TerminalOverwriteEntity__string__GetEntity__,
      *(_QWORD *)&id);
    byte_40F6C79 = 1;
  }
  PK = TerminalOverwriteEntity__CreatePK(id, type, priority, *(const MethodInfo **)&priority);
  return (TerminalOverwriteEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                        (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                        PK,
                                        (const MethodInfo_266F7D8 *)Method_DataMasterBase_TerminalOverwriteMaster__TerminalOverwriteEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_TerminalOverwriteEntity__o *__fastcall TerminalOverwriteMaster__GetEntityList(
        TerminalOverwriteMaster_o *this,
        int32_t type,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x19
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v18; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v21; // x8
  unsigned __int64 v22; // x10
  int32_t *v23; // x11
  __int64 v24; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v25; // x0
  __int64 v26; // x10
  System_Collections_Generic_IEnumerator_T__c *v27; // x8
  unsigned __int64 v28; // x10
  int32_t *v29; // x11
  __int64 v30; // x0

  if ( (byte_40F6C7C & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&type);
    sub_B16FFC(&System_IDisposable_TypeInfo, v7);
    sub_B16FFC(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v8);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_TerminalOverwriteEntity__Add__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_TerminalOverwriteEntity___ctor__, v11);
    sub_B16FFC(&System_Collections_Generic_List_TerminalOverwriteEntity__TypeInfo, v12);
    sub_B16FFC(&TerminalOverwriteEntity_TypeInfo, v13);
    byte_40F6C7C = 1;
  }
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_TerminalOverwriteEntity__TypeInfo,
                                                                                                  *(_QWORD *)&type,
                                                                                                  method,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_TerminalOverwriteEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B170D4();
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_290E508 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B170D4();
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v18 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v18;
        p_offset += 4;
        if ( v18 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AAFEF8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v21 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v22 = 0LL;
      v23 = &v21->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v23 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v22;
        v23 += 4;
        if ( v22 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v24 = (__int64)&v21->vtable[*v23].method;
    }
    else
    {
LABEL_16:
      v24 = sub_AAFEF8(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v25 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v24)(
                                                                   Enumerator,
                                                                   *(_QWORD *)(v24 + 8));
    if ( !v25 )
      goto LABEL_32;
    v26 = *(&TerminalOverwriteEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v25->klass->_2.bitflags2 + 1) < (unsigned int)v26
      || (TerminalOverwriteEntity_c *)v25->klass->_2.typeHierarchy[v26 - 1] != TerminalOverwriteEntity_TypeInfo )
    {
      sub_B173C8(v25);
LABEL_32:
      sub_B170D4();
    }
    if ( v25->fields.missionConditionDetailId == type )
    {
      if ( !v14 )
        sub_B170D4();
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v14,
        v25,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_TerminalOverwriteEntity__Add__);
    }
  }
  v27 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v28 = 0LL;
    v29 = &v27->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v29 - 1) != System_IDisposable_TypeInfo )
    {
      ++v28;
      v29 += 4;
      if ( v28 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_28;
    }
    v30 = (__int64)&v27->vtable[*v29].method;
  }
  else
  {
LABEL_28:
    v30 = sub_AAFEF8(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v30)(Enumerator, *(_QWORD *)(v30 + 8));
  return (System_Collections_Generic_List_TerminalOverwriteEntity__o *)v14;
}


int32_t __fastcall TerminalOverwriteMaster__GetOverwriteType(
        TerminalOverwriteMaster_o *this,
        System_Collections_Generic_Dictionary_int__int__o *table,
        int32_t type,
        const MethodInfo *method)
{
  __int64 v6; // x1

  if ( (byte_40F6C7F & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__, table);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__, v6);
    byte_40F6C7F = 1;
  }
  if ( !table )
    sub_B170D4();
  if ( System_Collections_Generic_Dictionary_int__int___ContainsKey(
         table,
         type,
         (const MethodInfo_2DDD218 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
  {
    return System_Collections_Generic_Dictionary_int__int___get_Item(
             table,
             type,
             (const MethodInfo_2DDCEF4 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
  }
  else
  {
    return -1;
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall TerminalOverwriteMaster__TryGetEntity(
        TerminalOverwriteMaster_o *this,
        TerminalOverwriteEntity_o **entity,
        int32_t id,
        int32_t type,
        int32_t priority,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_40F6C7A & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_TerminalOverwriteMaster__TerminalOverwriteEntity__string__TryGetEntity__, entity);
    byte_40F6C7A = 1;
  }
  PK = TerminalOverwriteEntity__CreatePK(id, type, priority, *(const MethodInfo **)&type);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266F830 *)Method_DataMasterBase_TerminalOverwriteMaster__TerminalOverwriteEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall TerminalOverwriteMaster__TryGetOverwriteEffectNames(
        TerminalOverwriteMaster_o *this,
        int32_t type,
        System_Collections_Generic_List_string__o **EffectNameList,
        const MethodInfo *method)
{
  TerminalOverwriteMaster_o *v7; // x0
  int32_t OverwriteType; // w1
  const MethodInfo *v9; // x3

  if ( (byte_40F6C82 & 1) == 0 )
  {
    sub_B16FFC(&TerminalOverwriteMaster_TypeInfo, *(_QWORD *)&type);
    byte_40F6C82 = 1;
  }
  v7 = (TerminalOverwriteMaster_o *)TerminalOverwriteMaster_TypeInfo;
  if ( (BYTE3(TerminalOverwriteMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalOverwriteMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalOverwriteMaster_TypeInfo);
    v7 = (TerminalOverwriteMaster_o *)TerminalOverwriteMaster_TypeInfo;
  }
  OverwriteType = TerminalOverwriteMaster__GetOverwriteType(
                    v7,
                    (System_Collections_Generic_Dictionary_int__int__o *)v7[2].fields._lookup->monitor,
                    type,
                    method);
  return TerminalOverwriteMaster__TryGetOverwriteIds(this, OverwriteType, EffectNameList, v9);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall TerminalOverwriteMaster__TryGetOverwriteId(
        TerminalOverwriteMaster_o *this,
        int32_t type,
        System_String_o **overwriteId,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
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
  struct System_String_StaticFields *static_fields; // x8
  System_String_o *Empty; // x1
  const MethodInfo *v24; // x2
  System_Collections_Generic_List_TerminalOverwriteEntity__o *EntityList; // x0
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v30; // x20
  TerminalOverwriteMaster___c_c *v31; // x0
  struct TerminalOverwriteMaster___c_StaticFields *v32; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__7_0; // x21
  Il2CppObject *v34; // x22
  struct TerminalOverwriteMaster___c_StaticFields *v35; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  Il2CppObject *current; // x25
  int32_t monitor_high; // w20
  int32_t monitor; // w22
  int64_t klass_low; // x21
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  System_String_o *klass; // x1
  char v53; // w19
  int v54; // w20
  System_Collections_Generic_List_Enumerator_T__o v56; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_40F6C7D & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Comparison_TerminalOverwriteEntity___ctor__, *(_QWORD *)&type);
    sub_B16FFC(&System_Comparison_TerminalOverwriteEntity__TypeInfo, v11);
    sub_B16FFC(&CondType_TypeInfo, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_TerminalOverwriteEntity__Dispose__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_TerminalOverwriteEntity__MoveNext__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_TerminalOverwriteEntity__get_Current__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_TerminalOverwriteEntity__GetEnumerator__, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_TerminalOverwriteEntity__Sort__, v17);
    sub_B16FFC(&Method_System_Collections_Generic_List_TerminalOverwriteEntity__get_Count__, v18);
    sub_B16FFC(&string_TypeInfo, v19);
    sub_B16FFC(&Method_TerminalOverwriteMaster___c__TryGetOverwriteId_b__7_0__, v20);
    sub_B16FFC(&TerminalOverwriteMaster___c_TypeInfo, v21);
    byte_40F6C7D = 1;
  }
  memset(&v56, 0, sizeof(v56));
  static_fields = string_TypeInfo->static_fields;
  Empty = static_fields->Empty;
  *overwriteId = static_fields->Empty;
  sub_B16F98(
    (BattleServantConfConponent_o *)overwriteId,
    (System_Int32_array **)Empty,
    (System_String_array **)overwriteId,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  EntityList = TerminalOverwriteMaster__GetEntityList(this, type, v24);
  if ( !EntityList )
    sub_B170D4();
  v30 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)EntityList;
  if ( !EntityList->fields._size )
    return 0;
  v31 = TerminalOverwriteMaster___c_TypeInfo;
  if ( (BYTE3(TerminalOverwriteMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalOverwriteMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalOverwriteMaster___c_TypeInfo);
    v31 = TerminalOverwriteMaster___c_TypeInfo;
  }
  v32 = v31->static_fields;
  _9__7_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)v32->__9__7_0;
  if ( !_9__7_0 )
  {
    if ( (BYTE3(v31->vtable._0_Equals.methodPtr) & 4) != 0 && !v31->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v31);
      v32 = TerminalOverwriteMaster___c_TypeInfo->static_fields;
    }
    v34 = (Il2CppObject *)v32->__9;
    _9__7_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                          System_Comparison_TerminalOverwriteEntity__TypeInfo,
                                                                          v26,
                                                                          v27,
                                                                          v28,
                                                                          v29);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__7_0,
      v34,
      Method_TerminalOverwriteMaster___c__TryGetOverwriteId_b__7_0__,
      (const MethodInfo_25BFD48 *)Method_System_Comparison_TerminalOverwriteEntity___ctor__);
    v35 = TerminalOverwriteMaster___c_TypeInfo->static_fields;
    v35->__9__7_0 = (struct System_Comparison_TerminalOverwriteEntity__o *)_9__7_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v35->__9__7_0,
      (System_Int32_array **)_9__7_0,
      v36,
      v37,
      v38,
      v39,
      v40,
      v41);
  }
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    v30,
    (System_Comparison_T__o *)_9__7_0,
    (const MethodInfo_2F27DB4 *)Method_System_Collections_Generic_List_TerminalOverwriteEntity__Sort__);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v56,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v30,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_TerminalOverwriteEntity__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v56,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_TerminalOverwriteEntity__MoveNext__) )
  {
    current = v56.fields.current;
    if ( !v56.fields.current )
      sub_B170D4();
    monitor = (int32_t)v56.fields.current[2].monitor;
    monitor_high = HIDWORD(v56.fields.current[2].monitor);
    klass_low = SLODWORD(v56.fields.current[3].klass);
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( CondType__IsOpen(monitor, monitor_high, klass_low, 0, 0LL) )
    {
      klass = (System_String_o *)current[2].klass;
      *overwriteId = klass;
      sub_B16F98(
        (BattleServantConfConponent_o *)overwriteId,
        (System_Int32_array **)klass,
        v46,
        v47,
        v48,
        v49,
        v50,
        v51);
      v53 = 1;
      v54 = 17;
      goto LABEL_22;
    }
  }
  v53 = 0;
  v54 = 15;
LABEL_22:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v56,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_TerminalOverwriteEntity__Dispose__);
  return (v54 == 17) & v53;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall TerminalOverwriteMaster__TryGetOverwriteIds(
        TerminalOverwriteMaster_o *this,
        int32_t type,
        System_Collections_Generic_List_string__o **overwriteIds,
        const MethodInfo *method)
{
  __int64 v4; // x4
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
  __int64 v21; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v22; // x22
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  const MethodInfo *v29; // x2
  System_Collections_Generic_List_TerminalOverwriteEntity__o *EntityList; // x0
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v35; // x20
  TerminalOverwriteMaster___c_c *v36; // x0
  struct TerminalOverwriteMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__8_0; // x21
  Il2CppObject *v39; // x22
  struct TerminalOverwriteMaster___c_StaticFields *v40; // x0
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  int v47; // w26
  Il2CppObject *current; // x27
  int32_t monitor_high; // w20
  int32_t monitor; // w22
  int64_t klass_low; // x21
  System_Collections_Generic_List_Enumerator_T__o v53; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v54; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_40F6C7E & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Comparison_TerminalOverwriteEntity___ctor__, *(_QWORD *)&type);
    sub_B16FFC(&System_Comparison_TerminalOverwriteEntity__TypeInfo, v8);
    sub_B16FFC(&CondType_TypeInfo, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_TerminalOverwriteEntity__Dispose__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_TerminalOverwriteEntity__MoveNext__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_TerminalOverwriteEntity__get_Current__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__Add__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_TerminalOverwriteEntity__GetEnumerator__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_TerminalOverwriteEntity__Sort__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_string___ctor__, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__get_Count__, v17);
    sub_B16FFC(&Method_System_Collections_Generic_List_TerminalOverwriteEntity__get_Count__, v18);
    sub_B16FFC(&System_Collections_Generic_List_string__TypeInfo, v19);
    sub_B16FFC(&Method_TerminalOverwriteMaster___c__TryGetOverwriteIds_b__8_0__, v20);
    sub_B16FFC(&TerminalOverwriteMaster___c_TypeInfo, v21);
    byte_40F6C7E = 1;
  }
  memset(&v54, 0, sizeof(v54));
  v22 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_string__TypeInfo,
                                                                                                  *(_QWORD *)&type,
                                                                                                  overwriteIds,
                                                                                                  method,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v22,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_string___ctor__);
  *overwriteIds = (System_Collections_Generic_List_string__o *)v22;
  sub_B16F98((BattleServantConfConponent_o *)overwriteIds, (System_Int32_array **)v22, v23, v24, v25, v26, v27, v28);
  EntityList = TerminalOverwriteMaster__GetEntityList(this, type, v29);
  if ( !EntityList )
    goto LABEL_29;
  v35 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)EntityList;
  if ( EntityList->fields._size )
  {
    v36 = TerminalOverwriteMaster___c_TypeInfo;
    if ( (BYTE3(TerminalOverwriteMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalOverwriteMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalOverwriteMaster___c_TypeInfo);
      v36 = TerminalOverwriteMaster___c_TypeInfo;
    }
    static_fields = v36->static_fields;
    _9__8_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__8_0;
    if ( !_9__8_0 )
    {
      if ( (BYTE3(v36->vtable._0_Equals.methodPtr) & 4) != 0 && !v36->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v36);
        static_fields = TerminalOverwriteMaster___c_TypeInfo->static_fields;
      }
      v39 = (Il2CppObject *)static_fields->__9;
      _9__8_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                            System_Comparison_TerminalOverwriteEntity__TypeInfo,
                                                                            v31,
                                                                            v32,
                                                                            v33,
                                                                            v34);
      System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
        _9__8_0,
        v39,
        Method_TerminalOverwriteMaster___c__TryGetOverwriteIds_b__8_0__,
        (const MethodInfo_25BFD48 *)Method_System_Comparison_TerminalOverwriteEntity___ctor__);
      v40 = TerminalOverwriteMaster___c_TypeInfo->static_fields;
      v40->__9__8_0 = (struct System_Comparison_TerminalOverwriteEntity__o *)_9__8_0;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v40->__9__8_0,
        (System_Int32_array **)_9__8_0,
        v41,
        v42,
        v43,
        v44,
        v45,
        v46);
    }
    System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
      v35,
      (System_Comparison_T__o *)_9__8_0,
      (const MethodInfo_2F27DB4 *)Method_System_Collections_Generic_List_TerminalOverwriteEntity__Sort__);
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v53,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v35,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_TerminalOverwriteEntity__GetEnumerator__);
    v54 = v53;
    v47 = -1;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v54,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_TerminalOverwriteEntity__MoveNext__) )
    {
      current = v54.fields.current;
      if ( !v54.fields.current )
        sub_B170D4();
      monitor = (int32_t)v54.fields.current[2].monitor;
      monitor_high = HIDWORD(v54.fields.current[2].monitor);
      klass_low = SLODWORD(v54.fields.current[3].klass);
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      if ( CondType__IsOpen(monitor, monitor_high, klass_low, 0, 0LL) )
      {
        if ( v47 != -1 && v47 != LODWORD(current[1].monitor) )
          break;
        if ( !*overwriteIds )
          sub_B170D4();
        v47 = (int)current[1].monitor;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)*overwriteIds,
          (EventMissionProgressRequest_Argument_ProgressData_o *)current[2].klass,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_string__Add__);
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v54,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_TerminalOverwriteEntity__Dispose__);
    if ( *overwriteIds )
      return (*overwriteIds)->fields._size > 0;
LABEL_29:
    sub_B170D4();
  }
  return 0;
}


bool __fastcall TerminalOverwriteMaster__TryGetOverwriteMainBgmName(
        TerminalOverwriteMaster_o *this,
        System_String_o **bgmName,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  return TerminalOverwriteMaster__TryGetOverwriteId(this, 1, bgmName, v3);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall TerminalOverwriteMaster__TryGetOverwriteSkinName(
        TerminalOverwriteMaster_o *this,
        int32_t type,
        System_String_o **skinName,
        const MethodInfo *method)
{
  TerminalOverwriteMaster_c *v7; // x0
  int32_t OverwriteType; // w1
  const MethodInfo *v9; // x3

  if ( (byte_40F6C80 & 1) == 0 )
  {
    sub_B16FFC(&TerminalOverwriteMaster_TypeInfo, *(_QWORD *)&type);
    byte_40F6C80 = 1;
  }
  v7 = TerminalOverwriteMaster_TypeInfo;
  if ( (BYTE3(TerminalOverwriteMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalOverwriteMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalOverwriteMaster_TypeInfo);
    v7 = TerminalOverwriteMaster_TypeInfo;
  }
  OverwriteType = TerminalOverwriteMaster__GetOverwriteType(
                    (TerminalOverwriteMaster_o *)v7,
                    v7->static_fields->overwriteSkinTypeTable,
                    type,
                    method);
  return TerminalOverwriteMaster__TryGetOverwriteId(this, OverwriteType, skinName, v9);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall TerminalOverwriteMaster__TryGetOverwriteSpriteName(
        TerminalOverwriteMaster_o *this,
        int32_t type,
        System_String_o **spriteName,
        const MethodInfo *method)
{
  TerminalOverwriteMaster_o *v7; // x0
  int32_t OverwriteType; // w1
  const MethodInfo *v9; // x3

  if ( (byte_40F6C81 & 1) == 0 )
  {
    sub_B16FFC(&TerminalOverwriteMaster_TypeInfo, *(_QWORD *)&type);
    byte_40F6C81 = 1;
  }
  v7 = (TerminalOverwriteMaster_o *)TerminalOverwriteMaster_TypeInfo;
  if ( (BYTE3(TerminalOverwriteMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalOverwriteMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalOverwriteMaster_TypeInfo);
    v7 = (TerminalOverwriteMaster_o *)TerminalOverwriteMaster_TypeInfo;
  }
  OverwriteType = TerminalOverwriteMaster__GetOverwriteType(
                    v7,
                    (System_Collections_Generic_Dictionary_int__int__o *)v7[2].fields._lookup->fields.buckets,
                    type,
                    method);
  return TerminalOverwriteMaster__TryGetOverwriteId(this, OverwriteType, spriteName, v9);
}


void __fastcall TerminalOverwriteMaster___c___cctor(const MethodInfo *method)
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

  if ( (byte_40F77A9 & 1) == 0 )
  {
    sub_B16FFC(&TerminalOverwriteMaster___c_TypeInfo, v1);
    byte_40F77A9 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(TerminalOverwriteMaster___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)TerminalOverwriteMaster___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
}


void __fastcall TerminalOverwriteMaster___c___ctor(TerminalOverwriteMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall TerminalOverwriteMaster___c___TryGetOverwriteId_b__7_0(
        TerminalOverwriteMaster___c_o *this,
        TerminalOverwriteEntity_o *a,
        TerminalOverwriteEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_B170D4();
  return b->fields.priority - a->fields.priority;
}


int32_t __fastcall TerminalOverwriteMaster___c___TryGetOverwriteIds_b__8_0(
        TerminalOverwriteMaster___c_o *this,
        TerminalOverwriteEntity_o *a,
        TerminalOverwriteEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_B170D4();
  return b->fields.priority - a->fields.priority;
}