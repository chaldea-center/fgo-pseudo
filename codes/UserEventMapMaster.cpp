void __fastcall UserEventMapMaster___ctor(UserEventMapMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5BDC1 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_UserEventMapMaster__UserEventMapEntity__string___ctor__);
    byte_4A5BDC1 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    350,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_UserEventMapMaster__UserEventMapEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserEventMapEntity_o *__fastcall UserEventMapMaster__GetEntity(
        UserEventMapMaster_o *this,
        int64_t userId,
        int32_t eventId,
        int32_t mapId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A5BDBF & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_UserEventMapMaster__UserEventMapEntity__string__GetEntity__);
    byte_4A5BDBF = 1;
  }
  PK = (Il2CppObject *)UserEventMapEntity__CreatePK(userId, eventId, mapId, *(const MethodInfo **)&mapId);
  return (UserEventMapEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                   PK,
                                   (const MethodInfo_311DC8C *)Method_DataMasterBase_UserEventMapMaster__UserEventMapEntity__string__GetEntity__);
}


System_Collections_Generic_List_UserEventMapEntity__o *__fastcall UserEventMapMaster__GetEntityListFromEventId(
        UserEventMapMaster_o *this,
        int64_t userId,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x20
  __int64 v8; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v10; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v13; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v16; // x8
  __int64 v17; // x9
  int32_t *v18; // x10
  __int64 v19; // x0
  __int64 v20; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  __int64 v23; // x8
  UserEventMapEntity_c *v24; // x1
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x9
  _QWORD *v27; // x10
  __int64 size; // x11
  Il2CppClass **v29; // x0
  System_Collections_Generic_IEnumerator_T__c *v30; // x8
  __int64 v31; // x9
  int32_t *v32; // x10
  __int64 v33; // x0

  if ( (byte_4A5BDC3 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserEventMapEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserEventMapEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_UserEventMapEntity__TypeInfo);
    sub_1B885B0(&UserEventMapEntity_TypeInfo);
    byte_4A5BDC3 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_UserEventMapEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_UserEventMapEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1B8880C(0LL, v8);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_30BAB58 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B8880C(0LL, v10);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v13 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v13;
        p_offset += 4;
        if ( !v13 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1BDA590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v16 = Enumerator->klass;
    v17 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v18 = &v16->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v18 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v17;
        v18 += 4;
        if ( !v17 )
          goto LABEL_16;
      }
      v19 = (__int64)&v16->vtable[*v18].method;
    }
    else
    {
LABEL_16:
      v19 = sub_1BDA590(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v20 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v19)(
            Enumerator,
            *(_QWORD *)(v19 + 8));
    v23 = v20;
    if ( v20 )
    {
      v24 = UserEventMapEntity_TypeInfo;
      methodPtr_low = LOBYTE(UserEventMapEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)v20 + 304LL) < (unsigned int)methodPtr_low
        || *(UserEventMapEntity_c **)(*(_QWORD *)(*(_QWORD *)v20 + 200LL) + 8 * methodPtr_low - 8) != UserEventMapEntity_TypeInfo )
      {
        sub_1B88ACC(v20);
LABEL_36:
        sub_1B8880C(v20, v24);
      }
      if ( *(_QWORD *)(v20 + 16) == userId && *(_DWORD *)(v20 + 24) == eventId )
      {
        if ( !v7 )
          sub_1B8880C(v20, UserEventMapEntity_TypeInfo);
        items = v7->fields._items;
        v27 = Method_System_Collections_Generic_List_UserEventMapEntity__Add__;
        ++v7->fields._version;
        if ( !items )
          goto LABEL_36;
        size = v7->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v7,
            (Il2CppObject *)v20,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
        }
        else
        {
          v29 = &items->obj.klass + size;
          v7->fields._size = size + 1;
          v29[4] = (Il2CppClass *)v23;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v29 + 4), v23, v21, v22);
        }
      }
    }
  }
  v30 = Enumerator->klass;
  v31 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v32 = &v30->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v32 - 1) != System_IDisposable_TypeInfo )
    {
      --v31;
      v32 += 4;
      if ( !v31 )
        goto LABEL_32;
    }
    v33 = (__int64)&v30->vtable[*v32].method;
  }
  else
  {
LABEL_32:
    v33 = sub_1BDA590(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v33)(Enumerator, *(_QWORD *)(v33 + 8));
  return (System_Collections_Generic_List_UserEventMapEntity__o *)v7;
}


UserEventMapEntity_o *__fastcall UserEventMapMaster__GetEntity_40084972(
        UserEventMapMaster_o *this,
        int32_t eventId,
        int32_t mapId,
        const MethodInfo *method)
{
  __int64 v5; // x20
  __int64 *lookup; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  int32_t v10; // w2
  int32_t v11; // w3
  int32_t v12; // w1
  int32_t v13; // w2
  int32_t v14; // w3
  int32_t v15; // w2
  int32_t v16; // w3
  int32_t v17; // w1
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x20
  __int64 v21; // x8
  void *v22; // x19
  __int64 v23; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v24; // x10
  __int64 v25; // x0
  __int64 methodPtr_low; // x11
  int64_t UserId; // [xsp+0h] [xbp-40h] BYREF
  UserEventMapEntity_o *v29; // [xsp+8h] [xbp-38h] BYREF
  int32_t v30; // [xsp+18h] [xbp-28h] BYREF
  int32_t v31; // [xsp+1Ch] [xbp-24h] BYREF

  v30 = mapId;
  v31 = eventId;
  if ( (byte_4A5BDC2 & 1) == 0 )
  {
    sub_1B885B0(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&string___TypeInfo);
    sub_1B885B0(&UserEventMapEntity_TypeInfo);
    sub_1B885B0(&StringLiteral_1544/*":"*/);
    byte_4A5BDC2 = 1;
  }
  v29 = 0LL;
  v5 = sub_1B88658(string___TypeInfo, 5LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  UserId = NetworkManager__get_UserId(0LL);
  lookup = (__int64 *)System_Int64__ToString((int64_t)&UserId, 0LL);
  if ( !v5 )
    goto LABEL_26;
  if ( !*(_DWORD *)(v5 + 24) )
    goto LABEL_25;
  *(_QWORD *)(v5 + 32) = lookup;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 32), (int32_t)lookup, v8, v9);
  if ( *(_DWORD *)(v5 + 24) <= 1u )
    goto LABEL_25;
  v12 = StringLiteral_1544/*":"*/;
  *(_QWORD *)(v5 + 40) = StringLiteral_1544/*":"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 40), v12, v10, v11);
  lookup = (__int64 *)System_Int32__ToString((int32_t)&v31, 0LL);
  if ( *(_DWORD *)(v5 + 24) <= 2u
    || (*(_QWORD *)(v5 + 48) = lookup,
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 48), (int32_t)lookup, v13, v14),
        *(_DWORD *)(v5 + 24) <= 3u)
    || (v17 = StringLiteral_1544/*":"*/,
        *(_QWORD *)(v5 + 56) = StringLiteral_1544/*":"*/,
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 56), v17, v15, v16),
        lookup = (__int64 *)System_Int32__ToString((int32_t)&v30, 0LL),
        *(_DWORD *)(v5 + 24) <= 4u) )
  {
LABEL_25:
    sub_1B88814(lookup, v7);
  }
  *(_QWORD *)(v5 + 64) = lookup;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 64), (int32_t)lookup, v18, v19);
  v20 = System_String__Concat_61720560((System_String_array *)v5, 0LL);
  lookup = (__int64 *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !lookup )
LABEL_26:
    sub_1B8880C(lookup, v7);
  v21 = *lookup;
  v22 = lookup;
  v23 = *(unsigned __int16 *)(*lookup + 302);
  if ( *(_WORD *)(*lookup + 302) )
  {
    v24 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)(*(_QWORD *)(v21 + 176) + 8LL);
    while ( *(v24 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      --v23;
      v24 += 2;
      if ( !v23 )
        goto LABEL_16;
    }
    v25 = v21 + 16LL * (*(_DWORD *)v24 + 1) + 312;
  }
  else
  {
LABEL_16:
    v25 = sub_1BDA590(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 1LL);
  }
  if ( ((*(__int64 (__fastcall **)(void *, System_String_o *, UserEventMapEntity_o **, _QWORD))v25)(
          v22,
          v20,
          &v29,
          *(_QWORD *)(v25 + 8)) & 1) == 0 )
    return 0LL;
  if ( !v29 )
    return 0LL;
  methodPtr_low = LOBYTE(UserEventMapEntity_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(v29->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
    return 0LL;
  if ( (UserEventMapEntity_c *)v29->klass->_2.typeHierarchy[methodPtr_low - 1] == UserEventMapEntity_TypeInfo )
    return v29;
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
  Il2CppObject *PK; // x2

  if ( (byte_4A5BDC0 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_UserEventMapMaster__UserEventMapEntity__string__TryGetEntity__);
    byte_4A5BDC0 = 1;
  }
  PK = (Il2CppObject *)UserEventMapEntity__CreatePK(userId, eventId, mapId, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_UserEventMapMaster__UserEventMapEntity__string__TryGetEntity__);
}