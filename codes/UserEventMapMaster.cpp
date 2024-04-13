void __fastcall UserEventMapMaster___ctor(UserEventMapMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E7083 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_UserEventMapMaster__UserEventMapEntity__string___ctor__, (_DWORD)method, v2, v3);
    byte_42E7083 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    349,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_UserEventMapMaster__UserEventMapEntity__string___ctor__);
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

  if ( (byte_42E7081 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_UserEventMapMaster__UserEventMapEntity__string__GetEntity__,
      userId,
      eventId,
      *(_QWORD *)&mapId);
    byte_42E7081 = 1;
  }
  PK = UserEventMapEntity__CreatePK(userId, eventId, mapId, *(const MethodInfo **)&mapId);
  return (UserEventMapEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                   (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                   PK,
                                   (const MethodInfo_23FB260 *)Method_DataMasterBase_UserEventMapMaster__UserEventMapEntity__string__GetEntity__);
}


System_Collections_Generic_List_UserEventMapEntity__o *__fastcall UserEventMapMaster__GetEntityListFromEventId(
        UserEventMapMaster_o *this,
        int64_t userId,
        int32_t eventId,
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v28; // x19
  __int64 v29; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v31; // x1
  __int64 v32; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v35; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v38; // x3
  System_Collections_Generic_IEnumerator_T__c *v39; // x8
  unsigned __int64 v40; // x10
  int32_t *v41; // x11
  __int64 v42; // x0
  __int64 v43; // x0
  UserEventMapEntity_c *v44; // x1
  __int64 v45; // x10
  System_Collections_Generic_IEnumerator_T__c *v46; // x8
  unsigned __int64 v47; // x10
  int32_t *v48; // x11
  __int64 v49; // x0

  if ( (byte_42E7085 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      userId,
      eventId,
      method);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v10, v11, v12);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserEventMapEntity__Add__, v16, v17, v18);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserEventMapEntity___ctor__, v19, v20, v21);
    sub_B5D5C4(&System_Collections_Generic_List_UserEventMapEntity__TypeInfo, v22, v23, v24);
    sub_B5D5C4(&UserEventMapEntity_TypeInfo, v25, v26, v27);
    byte_42E7085 = 1;
  }
  v28 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_UserEventMapEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v28,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_UserEventMapEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B5D69C(0LL, v29);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2BB8C48 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B5D69C(0LL, v31);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v35 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v35;
        p_offset += 4;
        if ( v35 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v32);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v39 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v40 = 0LL;
      v41 = &v39->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v41 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v40;
        v41 += 4;
        if ( v40 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v42 = (__int64)&v39->vtable[*v41].method;
    }
    else
    {
LABEL_16:
      v42 = sub_AF54C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v38);
    }
    v43 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v42)(
            Enumerator,
            *(_QWORD *)(v42 + 8));
    if ( v43 )
    {
      v44 = UserEventMapEntity_TypeInfo;
      v45 = *(&UserEventMapEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)v43 + 300LL) < (unsigned int)v45
        || *(UserEventMapEntity_c **)(*(_QWORD *)(*(_QWORD *)v43 + 200LL) + 8 * v45 - 8) != UserEventMapEntity_TypeInfo )
      {
        v43 = sub_B5D990(v43);
LABEL_33:
        sub_B5D69C(v43, v44);
      }
      if ( *(_QWORD *)(v43 + 16) == userId && *(_DWORD *)(v43 + 24) == eventId )
      {
        if ( !v28 )
          goto LABEL_33;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v28,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v43,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_UserEventMapEntity__Add__);
      }
    }
  }
  v46 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v47 = 0LL;
    v48 = &v46->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v48 - 1) != System_IDisposable_TypeInfo )
    {
      ++v47;
      v48 += 4;
      if ( v47 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_29;
    }
    v49 = (__int64)&v46->vtable[*v48].method;
  }
  else
  {
LABEL_29:
    v49 = sub_AF54C0(Enumerator, System_IDisposable_TypeInfo, 0LL, v38);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v49)(Enumerator, *(_QWORD *)(v49 + 8));
  return (System_Collections_Generic_List_UserEventMapEntity__o *)v28;
}


UserEventMapEntity_o *__fastcall UserEventMapMaster__GetEntity_22454016(
        UserEventMapMaster_o *this,
        int32_t eventId,
        int32_t mapId,
        const MethodInfo *method)
{
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  System_String_array *v17; // x20
  System_Int32_array **lookup; // x0
  __int64 v19; // x1
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_Int32_array **v26; // x21
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_Int32_array **v33; // x1
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_Int32_array **v40; // x21
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_Int32_array **v47; // x1
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  System_Int32_array **v54; // x21
  System_String_o *v55; // x20
  __int64 v56; // x3
  System_Int32_array *v57; // x8
  System_Int32_array **v58; // x19
  unsigned __int64 v59; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v60; // x11
  __int64 v61; // x0
  __int64 v62; // x11
  __int64 v64; // x0
  __int64 v65; // x0
  int64_t UserId; // [xsp+8h] [xbp-38h] BYREF
  UserEventMapEntity_o *v67; // [xsp+10h] [xbp-30h] BYREF
  int32_t v68; // [xsp+18h] [xbp-28h] BYREF
  int32_t v69; // [xsp+1Ch] [xbp-24h] BYREF

  v68 = mapId;
  v69 = eventId;
  if ( (byte_42E7084 & 1) == 0 )
  {
    sub_B5D5C4(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, eventId, mapId, method);
    sub_B5D5C4(&NetworkManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&string___TypeInfo, v8, v9, v10);
    sub_B5D5C4(&UserEventMapEntity_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_1245/*":"*/, v14, v15, v16);
    byte_42E7084 = 1;
  }
  UserId = 0LL;
  v67 = 0LL;
  v17 = (System_String_array *)sub_B5D5DC(string___TypeInfo, 5LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  lookup = (System_Int32_array **)System_Int64__ToString((int64_t)&UserId, 0LL);
  if ( !v17 )
LABEL_43:
    sub_B5D69C(lookup, v19);
  v26 = lookup;
  if ( lookup )
  {
    lookup = (System_Int32_array **)sub_B5D684(lookup, v17->obj.klass->_1.element_class);
    if ( !lookup )
      goto LABEL_42;
  }
  if ( !v17->max_length )
    goto LABEL_41;
  v17->m_Items[0] = (System_String_o *)v26;
  sub_B5D560((BattleServantConfConponent_o *)v17->m_Items, v26, v20, v21, v22, v23, v24, v25);
  lookup = (System_Int32_array **)StringLiteral_1245/*":"*/;
  if ( StringLiteral_1245/*":"*/ )
  {
    lookup = (System_Int32_array **)sub_B5D684(StringLiteral_1245/*":"*/, v17->obj.klass->_1.element_class);
    if ( !lookup )
      goto LABEL_42;
    v33 = (System_Int32_array **)StringLiteral_1245/*":"*/;
  }
  else
  {
    v33 = 0LL;
  }
  if ( v17->max_length <= 1 )
    goto LABEL_41;
  v17->m_Items[1] = (System_String_o *)v33;
  sub_B5D560((BattleServantConfConponent_o *)&v17->m_Items[1], v33, v27, v28, v29, v30, v31, v32);
  lookup = (System_Int32_array **)System_Int32__ToString((int32_t)&v69, 0LL);
  v40 = lookup;
  if ( lookup )
  {
    lookup = (System_Int32_array **)sub_B5D684(lookup, v17->obj.klass->_1.element_class);
    if ( !lookup )
      goto LABEL_42;
  }
  if ( v17->max_length <= 2 )
    goto LABEL_41;
  v17->m_Items[2] = (System_String_o *)v40;
  sub_B5D560((BattleServantConfConponent_o *)&v17->m_Items[2], v40, v34, v35, v36, v37, v38, v39);
  lookup = (System_Int32_array **)StringLiteral_1245/*":"*/;
  if ( StringLiteral_1245/*":"*/ )
  {
    lookup = (System_Int32_array **)sub_B5D684(StringLiteral_1245/*":"*/, v17->obj.klass->_1.element_class);
    if ( !lookup )
      goto LABEL_42;
    v47 = (System_Int32_array **)StringLiteral_1245/*":"*/;
  }
  else
  {
    v47 = 0LL;
  }
  if ( v17->max_length <= 3 )
    goto LABEL_41;
  v17->m_Items[3] = (System_String_o *)v47;
  sub_B5D560((BattleServantConfConponent_o *)&v17->m_Items[3], v47, v41, v42, v43, v44, v45, v46);
  lookup = (System_Int32_array **)System_Int32__ToString((int32_t)&v68, 0LL);
  v54 = lookup;
  if ( lookup )
  {
    lookup = (System_Int32_array **)sub_B5D684(lookup, v17->obj.klass->_1.element_class);
    if ( !lookup )
    {
LABEL_42:
      v65 = sub_B5D6BC();
      sub_B5D668(v65, 0LL);
    }
  }
  if ( v17->max_length <= 4 )
  {
LABEL_41:
    v64 = sub_B5D6C8(lookup);
    sub_B5D668(v64, 0LL);
  }
  v17->m_Items[4] = (System_String_o *)v54;
  sub_B5D560((BattleServantConfConponent_o *)&v17->m_Items[4], v54, v48, v49, v50, v51, v52, v53);
  v55 = System_String__Concat_44657912(v17, 0LL);
  lookup = (System_Int32_array **)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !lookup )
    goto LABEL_43;
  v57 = *lookup;
  v58 = lookup;
  if ( HIWORD((*lookup)->m_Items[67]) )
  {
    v59 = 0LL;
    v60 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)(*(_QWORD *)&v57->m_Items[37]
                                                                                      + 8LL);
    while ( *(v60 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      ++v59;
      v60 += 2;
      if ( v59 >= HIWORD((*lookup)->m_Items[67]) )
        goto LABEL_31;
    }
    v61 = (__int64)&(&v57->bounds)[2 * *(_DWORD *)v60 + 39];
  }
  else
  {
LABEL_31:
    v61 = sub_AF54C0(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 1LL, v56);
  }
  if ( ((*(__int64 (__fastcall **)(System_Int32_array **, System_String_o *, UserEventMapEntity_o **, _QWORD))v61)(
          v58,
          v55,
          &v67,
          *(_QWORD *)(v61 + 8)) & 1) == 0 )
    return 0LL;
  if ( !v67 )
    return 0LL;
  v62 = *(&UserEventMapEntity_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v67->klass->_2.bitflags2 + 1) < (unsigned int)v62 )
    return 0LL;
  if ( (UserEventMapEntity_c *)v67->klass->_2.typeHierarchy[v62 - 1] == UserEventMapEntity_TypeInfo )
    return v67;
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

  if ( (byte_42E7082 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_UserEventMapMaster__UserEventMapEntity__string__TryGetEntity__,
      (_DWORD)entity,
      userId,
      *(_QWORD *)&eventId);
    byte_42E7082 = 1;
  }
  PK = UserEventMapEntity__CreatePK(userId, eventId, mapId, *(const MethodInfo **)&eventId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_UserEventMapMaster__UserEventMapEntity__string__TryGetEntity__);
}