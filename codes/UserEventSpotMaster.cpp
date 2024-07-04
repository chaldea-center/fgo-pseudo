void __fastcall UserEventSpotMaster___ctor(UserEventSpotMaster_o *this, const MethodInfo *method)
{
  if ( (byte_48E3447 & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataMasterBase_UserEventSpotMaster__UserEventSpotEntity__string___ctor__, method);
    byte_48E3447 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    350,
    (const MethodInfo_2FE6D64 *)Method_DataMasterBase_UserEventSpotMaster__UserEventSpotEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserEventSpotEntity_o *__fastcall UserEventSpotMaster__GetEntity(
        UserEventSpotMaster_o *this,
        int64_t userId,
        int32_t eventId,
        int32_t spotId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_48E3445 & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataMasterBase_UserEventSpotMaster__UserEventSpotEntity__string__GetEntity__, userId);
    byte_48E3445 = 1;
  }
  PK = (Il2CppObject *)UserEventSpotEntity__CreatePK(userId, eventId, spotId, *(const MethodInfo **)&spotId);
  return (UserEventSpotEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                    PK,
                                    (const MethodInfo_2FE6DA4 *)Method_DataMasterBase_UserEventSpotMaster__UserEventSpotEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
UserEventSpotEntity_array *__fastcall UserEventSpotMaster__GetEntityList(
        UserEventSpotMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_object__o *v12; // x21
  __int64 v13; // x1
  int64_t list; // x0
  int v15; // w22
  int32_t v16; // w23
  int64_t v17; // x24
  __int64 methodPtr_low; // x10
  __int64 v19; // x29
  int32_t v20; // w2
  int32_t v21; // w3
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0

  if ( (byte_48E3449 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_1B00CCC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1B00CCC(&Method_System_Collections_Generic_List_UserEventSpotEntity__Add__, v6);
    sub_1B00CCC(&Method_System_Collections_Generic_List_UserEventSpotEntity__ToArray__, v7);
    sub_1B00CCC(&Method_System_Collections_Generic_List_UserEventSpotEntity___ctor__, v8);
    sub_1B00CCC(&System_Collections_Generic_List_UserEventSpotEntity__TypeInfo, v9);
    sub_1B00CCC(&NetworkManager_TypeInfo, v10);
    sub_1B00CCC(&UserEventSpotEntity_TypeInfo, v11);
    byte_48E3449 = 1;
  }
  v12 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_UserEventSpotEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_UserEventSpotEntity___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_22;
  list = System_Collections_ObjectModel_Collection_object___get_Count(
           (System_Collections_ObjectModel_Collection_T__o *)list,
           (const MethodInfo_2F836B0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v15 = list;
    v16 = 0;
    while ( 1 )
    {
      list = (int64_t)this->fields.list;
      if ( !list )
        break;
      list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)list,
                        v16,
                        (const MethodInfo_2F83740 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v17 = list;
        methodPtr_low = LOBYTE(UserEventSpotEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) >= (unsigned int)methodPtr_low
          && *(UserEventSpotEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) == UserEventSpotEntity_TypeInfo )
        {
          v19 = *(_QWORD *)(list + 16);
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          list = NetworkManager__get_UserId(0LL);
          if ( v19 == list && *(_DWORD *)(v17 + 24) == eventId )
          {
            if ( !v12 )
              break;
            items = v12->fields._items;
            v23 = Method_System_Collections_Generic_List_UserEventSpotEntity__Add__;
            ++v12->fields._version;
            if ( !items )
              break;
            size = v12->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v12,
                (Il2CppObject *)v17,
                *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
            }
            else
            {
              v25 = &items->obj.klass + size;
              v12->fields._size = size + 1;
              v25[4] = (Il2CppClass *)v17;
              sub_1B00C70((ServantStatusBattleListViewItem_o *)(v25 + 4), v17, v20, v21);
            }
          }
        }
      }
      if ( v15 == ++v16 )
        goto LABEL_20;
    }
LABEL_22:
    sub_1B00F28(list, v13);
  }
LABEL_20:
  if ( !v12 )
    goto LABEL_22;
  return (UserEventSpotEntity_array *)System_Collections_Generic_List_object___ToArray(
                                        v12,
                                        (const MethodInfo_33C3528 *)Method_System_Collections_Generic_List_UserEventSpotEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
UserEventSpotEntity_o *__fastcall UserEventSpotMaster__GetEntity_38838308(
        UserEventSpotMaster_o *this,
        int32_t eventId,
        int32_t spotId,
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
  UserEventSpotEntity_o *v33; // [xsp+8h] [xbp-38h] BYREF
  int32_t v34; // [xsp+18h] [xbp-28h] BYREF
  int32_t v35; // [xsp+1Ch] [xbp-24h] BYREF

  v34 = spotId;
  v35 = eventId;
  if ( (byte_48E3448 & 1) == 0 )
  {
    sub_1B00CCC(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, *(_QWORD *)&eventId);
    sub_1B00CCC(&NetworkManager_TypeInfo, v5);
    sub_1B00CCC(&string___TypeInfo, v6);
    sub_1B00CCC(&UserEventSpotEntity_TypeInfo, v7);
    sub_1B00CCC(&StringLiteral_1540/*":"*/, v8);
    byte_48E3448 = 1;
  }
  v33 = 0LL;
  v9 = sub_1B00D74(string___TypeInfo, 5LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  UserId = NetworkManager__get_UserId(0LL);
  lookup = (__int64 *)System_Int64__ToString((int64_t)&UserId, 0LL);
  if ( !v9 )
    goto LABEL_26;
  if ( !*(_DWORD *)(v9 + 24) )
    goto LABEL_25;
  *(_QWORD *)(v9 + 32) = lookup;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v9 + 32), (int32_t)lookup, v12, v13);
  if ( *(_DWORD *)(v9 + 24) <= 1u )
    goto LABEL_25;
  v16 = StringLiteral_1540/*":"*/;
  *(_QWORD *)(v9 + 40) = StringLiteral_1540/*":"*/;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v9 + 40), v16, v14, v15);
  lookup = (__int64 *)System_Int32__ToString((int32_t)&v35, 0LL);
  if ( *(_DWORD *)(v9 + 24) <= 2u
    || (*(_QWORD *)(v9 + 48) = lookup,
        sub_1B00C70((ServantStatusBattleListViewItem_o *)(v9 + 48), (int32_t)lookup, v17, v18),
        *(_DWORD *)(v9 + 24) <= 3u)
    || (v21 = StringLiteral_1540/*":"*/,
        *(_QWORD *)(v9 + 56) = StringLiteral_1540/*":"*/,
        sub_1B00C70((ServantStatusBattleListViewItem_o *)(v9 + 56), v21, v19, v20),
        lookup = (__int64 *)System_Int32__ToString((int32_t)&v34, 0LL),
        *(_DWORD *)(v9 + 24) <= 4u) )
  {
LABEL_25:
    sub_1B00F30(lookup, v11);
  }
  *(_QWORD *)(v9 + 64) = lookup;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v9 + 64), (int32_t)lookup, v22, v23);
  v24 = System_String__Concat_60339276((System_String_array *)v9, 0LL);
  lookup = (__int64 *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !lookup )
LABEL_26:
    sub_1B00F28(lookup, v11);
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
    v29 = sub_1B52CAC(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 1LL);
  }
  if ( ((*(__int64 (__fastcall **)(void *, System_String_o *, UserEventSpotEntity_o **, _QWORD))v29)(
          v26,
          v24,
          &v33,
          *(_QWORD *)(v29 + 8)) & 1) == 0 )
    return 0LL;
  if ( !v33 )
    return 0LL;
  methodPtr_low = LOBYTE(UserEventSpotEntity_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(v33->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
    return 0LL;
  if ( (UserEventSpotEntity_c *)v33->klass->_2.typeHierarchy[methodPtr_low - 1] == UserEventSpotEntity_TypeInfo )
    return v33;
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UserEventSpotMaster__TryGetEntity(
        UserEventSpotMaster_o *this,
        UserEventSpotEntity_o **entity,
        int64_t userId,
        int32_t eventId,
        int32_t spotId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_48E3446 & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataMasterBase_UserEventSpotMaster__UserEventSpotEntity__string__TryGetEntity__, entity);
    byte_48E3446 = 1;
  }
  PK = (Il2CppObject *)UserEventSpotEntity__CreatePK(userId, eventId, spotId, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_2FE6DF4 *)Method_DataMasterBase_UserEventSpotMaster__UserEventSpotEntity__string__TryGetEntity__);
}