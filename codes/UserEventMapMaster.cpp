void __fastcall UserEventMapMaster___ctor(UserEventMapMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42B1554 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_UserEventMapMaster__UserEventMapEntity__string___ctor__);
    byte_42B1554 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    349,
    (const MethodInfo_23E268C *)Method_DataMasterBase_UserEventMapMaster__UserEventMapEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserEventMapEntity_o *__fastcall UserEventMapMaster__GetEntity(
        UserEventMapMaster_o *this,
        int64_t userId,
        int32_t eventId,
        int32_t mapId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42B1552 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_UserEventMapMaster__UserEventMapEntity__string__GetEntity__);
    byte_42B1552 = 1;
  }
  PK = UserEventMapEntity__CreatePK(userId, eventId, mapId, *(const MethodInfo **)&mapId);
  return (UserEventMapEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                   (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                   PK,
                                   (const MethodInfo_23E2728 *)Method_DataMasterBase_UserEventMapMaster__UserEventMapEntity__string__GetEntity__);
}


System_Collections_Generic_List_UserEventMapEntity__o *__fastcall UserEventMapMaster__GetEntityListFromEventId(
        UserEventMapMaster_o *this,
        int64_t userId,
        int32_t eventId,
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
  __int64 v22; // x0
  UserEventMapEntity_c *v23; // x1
  __int64 v24; // x10
  System_Collections_Generic_IEnumerator_T__c *v25; // x8
  unsigned __int64 v26; // x10
  int32_t *v27; // x11
  __int64 v28; // x0

  if ( (byte_42B1556 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_UserEventMapEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_UserEventMapEntity___ctor__);
    sub_B52984(&System_Collections_Generic_List_UserEventMapEntity__TypeInfo);
    sub_B52984(&UserEventMapEntity_TypeInfo);
    byte_42B1556 = 1;
  }
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_UserEventMapEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_UserEventMapEntity___ctor__);
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
    v22 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v21)(
            Enumerator,
            *(_QWORD *)(v21 + 8));
    if ( v22 )
    {
      v23 = UserEventMapEntity_TypeInfo;
      v24 = *(&UserEventMapEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)v22 + 300LL) < (unsigned int)v24
        || *(UserEventMapEntity_c **)(*(_QWORD *)(*(_QWORD *)v22 + 200LL) + 8 * v24 - 8) != UserEventMapEntity_TypeInfo )
      {
        v22 = sub_B52D50(v22);
LABEL_33:
        sub_B52A5C(v22, v23);
      }
      if ( *(_QWORD *)(v22 + 16) == userId && *(_DWORD *)(v22 + 24) == eventId )
      {
        if ( !v7 )
          goto LABEL_33;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v7,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v22,
          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_UserEventMapEntity__Add__);
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
  return (System_Collections_Generic_List_UserEventMapEntity__o *)v7;
}


UserEventMapEntity_o *__fastcall UserEventMapMaster__GetEntity_27465848(
        UserEventMapMaster_o *this,
        int32_t eventId,
        int32_t mapId,
        const MethodInfo *method)
{
  System_String_array *v5; // x20
  System_Int32_array **lookup; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_Int32_array **v14; // x21
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_Int32_array **v21; // x1
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_Int32_array **v28; // x21
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_Int32_array **v35; // x1
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_Int32_array **v42; // x21
  System_String_o *v43; // x20
  __int64 v44; // x3
  System_Int32_array *v45; // x8
  System_Int32_array **v46; // x19
  unsigned __int64 v47; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v48; // x11
  __int64 v49; // x0
  __int64 v50; // x11
  __int64 v52; // x0
  __int64 v53; // x0
  int64_t UserId; // [xsp+8h] [xbp-38h] BYREF
  UserEventMapEntity_o *v55; // [xsp+10h] [xbp-30h] BYREF
  int32_t v56; // [xsp+18h] [xbp-28h] BYREF
  int32_t v57; // [xsp+1Ch] [xbp-24h] BYREF

  v56 = mapId;
  v57 = eventId;
  if ( (byte_42B1555 & 1) == 0 )
  {
    sub_B52984(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&string___TypeInfo);
    sub_B52984(&UserEventMapEntity_TypeInfo);
    sub_B52984(&StringLiteral_1240/*":"*/);
    byte_42B1555 = 1;
  }
  UserId = 0LL;
  v55 = 0LL;
  v5 = (System_String_array *)sub_B5299C(string___TypeInfo, 5LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  lookup = (System_Int32_array **)System_Int64__ToString((int64_t)&UserId, 0LL);
  if ( !v5 )
LABEL_43:
    sub_B52A5C(lookup, v7);
  v14 = lookup;
  if ( lookup )
  {
    lookup = (System_Int32_array **)sub_B52A44(lookup, v5->obj.klass->_1.element_class);
    if ( !lookup )
      goto LABEL_42;
  }
  if ( !v5->max_length )
    goto LABEL_41;
  v5->m_Items[0] = (System_String_o *)v14;
  sub_B52920((BattleServantConfConponent_o *)v5->m_Items, v14, v8, v9, v10, v11, v12, v13);
  lookup = (System_Int32_array **)StringLiteral_1240/*":"*/;
  if ( StringLiteral_1240/*":"*/ )
  {
    lookup = (System_Int32_array **)sub_B52A44(StringLiteral_1240/*":"*/, v5->obj.klass->_1.element_class);
    if ( !lookup )
      goto LABEL_42;
    v21 = (System_Int32_array **)StringLiteral_1240/*":"*/;
  }
  else
  {
    v21 = 0LL;
  }
  if ( v5->max_length <= 1 )
    goto LABEL_41;
  v5->m_Items[1] = (System_String_o *)v21;
  sub_B52920((BattleServantConfConponent_o *)&v5->m_Items[1], v21, v15, v16, v17, v18, v19, v20);
  lookup = (System_Int32_array **)System_Int32__ToString((int32_t)&v57, 0LL);
  v28 = lookup;
  if ( lookup )
  {
    lookup = (System_Int32_array **)sub_B52A44(lookup, v5->obj.klass->_1.element_class);
    if ( !lookup )
      goto LABEL_42;
  }
  if ( v5->max_length <= 2 )
    goto LABEL_41;
  v5->m_Items[2] = (System_String_o *)v28;
  sub_B52920((BattleServantConfConponent_o *)&v5->m_Items[2], v28, v22, v23, v24, v25, v26, v27);
  lookup = (System_Int32_array **)StringLiteral_1240/*":"*/;
  if ( StringLiteral_1240/*":"*/ )
  {
    lookup = (System_Int32_array **)sub_B52A44(StringLiteral_1240/*":"*/, v5->obj.klass->_1.element_class);
    if ( !lookup )
      goto LABEL_42;
    v35 = (System_Int32_array **)StringLiteral_1240/*":"*/;
  }
  else
  {
    v35 = 0LL;
  }
  if ( v5->max_length <= 3 )
    goto LABEL_41;
  v5->m_Items[3] = (System_String_o *)v35;
  sub_B52920((BattleServantConfConponent_o *)&v5->m_Items[3], v35, v29, v30, v31, v32, v33, v34);
  lookup = (System_Int32_array **)System_Int32__ToString((int32_t)&v56, 0LL);
  v42 = lookup;
  if ( lookup )
  {
    lookup = (System_Int32_array **)sub_B52A44(lookup, v5->obj.klass->_1.element_class);
    if ( !lookup )
    {
LABEL_42:
      v53 = sub_B52A7C(lookup);
      sub_B52A28(v53, 0LL);
    }
  }
  if ( v5->max_length <= 4 )
  {
LABEL_41:
    v52 = sub_B52A88(lookup);
    sub_B52A28(v52, 0LL);
  }
  v5->m_Items[4] = (System_String_o *)v42;
  sub_B52920((BattleServantConfConponent_o *)&v5->m_Items[4], v42, v36, v37, v38, v39, v40, v41);
  v43 = System_String__Concat_44648440(v5, 0LL);
  lookup = (System_Int32_array **)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !lookup )
    goto LABEL_43;
  v45 = *lookup;
  v46 = lookup;
  if ( HIWORD((*lookup)->m_Items[67]) )
  {
    v47 = 0LL;
    v48 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)(*(_QWORD *)&v45->m_Items[37]
                                                                                      + 8LL);
    while ( *(v48 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      ++v47;
      v48 += 2;
      if ( v47 >= HIWORD((*lookup)->m_Items[67]) )
        goto LABEL_31;
    }
    v49 = (__int64)&(&v45->bounds)[2 * *(_DWORD *)v48 + 39];
  }
  else
  {
LABEL_31:
    v49 = sub_AEB880(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 1LL, v44);
  }
  if ( ((*(__int64 (__fastcall **)(System_Int32_array **, System_String_o *, UserEventMapEntity_o **, _QWORD))v49)(
          v46,
          v43,
          &v55,
          *(_QWORD *)(v49 + 8)) & 1) == 0 )
    return 0LL;
  if ( !v55 )
    return 0LL;
  v50 = *(&UserEventMapEntity_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v55->klass->_2.bitflags2 + 1) < (unsigned int)v50 )
    return 0LL;
  if ( (UserEventMapEntity_c *)v55->klass->_2.typeHierarchy[v50 - 1] == UserEventMapEntity_TypeInfo )
    return v55;
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UserEventMapMaster__TryGetEntity(
        UserEventMapMaster_o *this,
        UserEventMapEntity_o **entity,
        int64_t userId,
        int32_t eventId,
        int32_t mapId,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_42B1553 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_UserEventMapMaster__UserEventMapEntity__string__TryGetEntity__);
    byte_42B1553 = 1;
  }
  PK = UserEventMapEntity__CreatePK(userId, eventId, mapId, *(const MethodInfo **)&eventId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23E2780 *)Method_DataMasterBase_UserEventMapMaster__UserEventMapEntity__string__TryGetEntity__);
}