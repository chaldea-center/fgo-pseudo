void __fastcall UserEventMapMaster___ctor(UserEventMapMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4AB69C3 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataMasterBase_UserEventMapMaster__UserEventMapEntity__string___ctor__, method);
    byte_4AB69C3 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    350,
    (const MethodInfo_31640A8 *)Method_DataMasterBase_UserEventMapMaster__UserEventMapEntity__string___ctor__);
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

  if ( (byte_4AB69C1 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataMasterBase_UserEventMapMaster__UserEventMapEntity__string__GetEntity__, userId);
    byte_4AB69C1 = 1;
  }
  PK = (Il2CppObject *)UserEventMapEntity__CreatePK(userId, eventId, mapId, *(const MethodInfo **)&mapId);
  return (UserEventMapEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                   PK,
                                   (const MethodInfo_31640E8 *)Method_DataMasterBase_UserEventMapMaster__UserEventMapEntity__string__GetEntity__);
}


System_Collections_Generic_List_UserEventMapEntity__o *__fastcall UserEventMapMaster__GetEntityListFromEventId(
        UserEventMapMaster_o *this,
        int64_t userId,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_object__o *v14; // x20
  __int64 v15; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v17; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v20; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v23; // x8
  __int64 v24; // x9
  int32_t *v25; // x10
  __int64 v26; // x0
  __int64 v27; // x0
  int32_t v28; // w2
  int32_t v29; // w3
  __int64 v30; // x8
  UserEventMapEntity_c *v31; // x1
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x9
  _QWORD *v34; // x10
  __int64 size; // x11
  Il2CppClass **v36; // x0
  System_Collections_Generic_IEnumerator_T__c *v37; // x8
  __int64 v38; // x9
  int32_t *v39; // x10
  __int64 v40; // x0

  if ( (byte_4AB69C5 & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, userId);
    sub_1BAB41C(&System_IDisposable_TypeInfo, v7);
    sub_1BAB41C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v8);
    sub_1BAB41C(&System_Collections_IEnumerator_TypeInfo, v9);
    sub_1BAB41C(&Method_System_Collections_Generic_List_UserEventMapEntity__Add__, v10);
    sub_1BAB41C(&Method_System_Collections_Generic_List_UserEventMapEntity___ctor__, v11);
    sub_1BAB41C(&System_Collections_Generic_List_UserEventMapEntity__TypeInfo, v12);
    sub_1BAB41C(&UserEventMapEntity_TypeInfo, v13);
    byte_4AB69C5 = 1;
  }
  v14 = (System_Collections_Generic_List_object__o *)sub_1BAB668(System_Collections_Generic_List_UserEventMapEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_354D088 *)Method_System_Collections_Generic_List_UserEventMapEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1BAB678(0LL, v15);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3100938 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BAB678(0LL, v17);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v20 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v20;
        p_offset += 4;
        if ( !v20 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1BFD3FC(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v23 = Enumerator->klass;
    v24 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v25 = &v23->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v25 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v24;
        v25 += 4;
        if ( !v24 )
          goto LABEL_16;
      }
      v26 = (__int64)&v23->vtable[*v25].method;
    }
    else
    {
LABEL_16:
      v26 = sub_1BFD3FC(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v27 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v26)(
            Enumerator,
            *(_QWORD *)(v26 + 8));
    v30 = v27;
    if ( v27 )
    {
      v31 = UserEventMapEntity_TypeInfo;
      methodPtr_low = LOBYTE(UserEventMapEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)v27 + 304LL) < (unsigned int)methodPtr_low
        || *(UserEventMapEntity_c **)(*(_QWORD *)(*(_QWORD *)v27 + 200LL) + 8 * methodPtr_low - 8) != UserEventMapEntity_TypeInfo )
      {
        sub_1BAB938(v27);
LABEL_36:
        sub_1BAB678(v27, v31);
      }
      if ( *(_QWORD *)(v27 + 16) == userId && *(_DWORD *)(v27 + 24) == eventId )
      {
        if ( !v14 )
          sub_1BAB678(v27, UserEventMapEntity_TypeInfo);
        items = v14->fields._items;
        v34 = Method_System_Collections_Generic_List_UserEventMapEntity__Add__;
        ++v14->fields._version;
        if ( !items )
          goto LABEL_36;
        size = v14->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v14,
            (Il2CppObject *)v27,
            *(const MethodInfo_354D8BC **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
        }
        else
        {
          v36 = &items->obj.klass + size;
          v14->fields._size = size + 1;
          v36[4] = (Il2CppClass *)v30;
          sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v36 + 4), v30, v28, v29);
        }
      }
    }
  }
  v37 = Enumerator->klass;
  v38 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v39 = &v37->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v39 - 1) != System_IDisposable_TypeInfo )
    {
      --v38;
      v39 += 4;
      if ( !v38 )
        goto LABEL_32;
    }
    v40 = (__int64)&v37->vtable[*v39].method;
  }
  else
  {
LABEL_32:
    v40 = sub_1BFD3FC(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v40)(Enumerator, *(_QWORD *)(v40 + 8));
  return (System_Collections_Generic_List_UserEventMapEntity__o *)v14;
}


// local variable allocation has failed, the output may be wrong!
UserEventMapEntity_o *__fastcall UserEventMapMaster__GetEntity_40476652(
        UserEventMapMaster_o *this,
        int32_t eventId,
        int32_t mapId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x20
  __int64 *lookup; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  int32_t v14; // w2
  int32_t v15; // w3
  int32_t v16; // w1
  int32_t v17; // w2
  int32_t v18; // w3
  int32_t v19; // w2
  int32_t v20; // w3
  int32_t v21; // w1
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x20
  __int64 v25; // x8
  void *v26; // x19
  __int64 v27; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v28; // x10
  __int64 v29; // x0
  __int64 methodPtr_low; // x11
  int64_t UserId; // [xsp+0h] [xbp-40h] BYREF
  UserEventMapEntity_o *v33; // [xsp+8h] [xbp-38h] BYREF
  int32_t v34; // [xsp+18h] [xbp-28h] BYREF
  int32_t v35; // [xsp+1Ch] [xbp-24h] BYREF

  v34 = mapId;
  v35 = eventId;
  if ( (byte_4AB69C4 & 1) == 0 )
  {
    sub_1BAB41C(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, *(_QWORD *)&eventId);
    sub_1BAB41C(&NetworkManager_TypeInfo, v5);
    sub_1BAB41C(&string___TypeInfo, v6);
    sub_1BAB41C(&UserEventMapEntity_TypeInfo, v7);
    sub_1BAB41C(&StringLiteral_1541/*":"*/, v8);
    byte_4AB69C4 = 1;
  }
  v33 = 0LL;
  v9 = sub_1BAB4C4(string___TypeInfo, 5LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  UserId = NetworkManager__get_UserId(0LL);
  lookup = (__int64 *)System_Int64__ToString((int64_t)&UserId, 0LL);
  if ( !v9 )
    goto LABEL_26;
  if ( !*(_DWORD *)(v9 + 24) )
    goto LABEL_25;
  *(_QWORD *)(v9 + 32) = lookup;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v9 + 32), (int32_t)lookup, v12, v13);
  if ( *(_DWORD *)(v9 + 24) <= 1u )
    goto LABEL_25;
  v16 = StringLiteral_1541/*":"*/;
  *(_QWORD *)(v9 + 40) = StringLiteral_1541/*":"*/;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v9 + 40), v16, v14, v15);
  lookup = (__int64 *)System_Int32__ToString((int32_t)&v35, 0LL);
  if ( *(_DWORD *)(v9 + 24) <= 2u
    || (*(_QWORD *)(v9 + 48) = lookup,
        sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v9 + 48), (int32_t)lookup, v17, v18),
        *(_DWORD *)(v9 + 24) <= 3u)
    || (v21 = StringLiteral_1541/*":"*/,
        *(_QWORD *)(v9 + 56) = StringLiteral_1541/*":"*/,
        sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v9 + 56), v21, v19, v20),
        lookup = (__int64 *)System_Int32__ToString((int32_t)&v34, 0LL),
        *(_DWORD *)(v9 + 24) <= 4u) )
  {
LABEL_25:
    sub_1BAB680(lookup, v11);
  }
  *(_QWORD *)(v9 + 64) = lookup;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v9 + 64), (int32_t)lookup, v22, v23);
  v24 = System_String__Concat_62061656((System_String_array *)v9, 0LL);
  lookup = (__int64 *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !lookup )
LABEL_26:
    sub_1BAB678(lookup, v11);
  v25 = *lookup;
  v26 = lookup;
  v27 = *(unsigned __int16 *)(*lookup + 302);
  if ( *(_WORD *)(*lookup + 302) )
  {
    v28 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)(*(_QWORD *)(v25 + 176) + 8LL);
    while ( *(v28 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      --v27;
      v28 += 2;
      if ( !v27 )
        goto LABEL_16;
    }
    v29 = v25 + 16LL * (*(_DWORD *)v28 + 1) + 312;
  }
  else
  {
LABEL_16:
    v29 = sub_1BFD3FC(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 1LL);
  }
  if ( ((*(__int64 (__fastcall **)(void *, System_String_o *, UserEventMapEntity_o **, _QWORD))v29)(
          v26,
          v24,
          &v33,
          *(_QWORD *)(v29 + 8)) & 1) == 0 )
    return 0LL;
  if ( !v33 )
    return 0LL;
  methodPtr_low = LOBYTE(UserEventMapEntity_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(v33->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
    return 0LL;
  if ( (UserEventMapEntity_c *)v33->klass->_2.typeHierarchy[methodPtr_low - 1] == UserEventMapEntity_TypeInfo )
    return v33;
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

  if ( (byte_4AB69C2 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataMasterBase_UserEventMapMaster__UserEventMapEntity__string__TryGetEntity__, entity);
    byte_4AB69C2 = 1;
  }
  PK = (Il2CppObject *)UserEventMapEntity__CreatePK(userId, eventId, mapId, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3164138 *)Method_DataMasterBase_UserEventMapMaster__UserEventMapEntity__string__TryGetEntity__);
}