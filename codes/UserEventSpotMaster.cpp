void __fastcall UserEventSpotMaster___ctor(UserEventSpotMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B37E9D & 1) == 0 )
  {
    sub_1BD3458(&Method_DataMasterBase_UserEventSpotMaster__UserEventSpotEntity__string___ctor__, method);
    byte_4B37E9D = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    351,
    (const MethodInfo_31D2208 *)Method_DataMasterBase_UserEventSpotMaster__UserEventSpotEntity__string___ctor__);
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

  if ( (byte_4B37E9B & 1) == 0 )
  {
    sub_1BD3458(&Method_DataMasterBase_UserEventSpotMaster__UserEventSpotEntity__string__GetEntity__, userId);
    byte_4B37E9B = 1;
  }
  PK = (Il2CppObject *)UserEventSpotEntity__CreatePK(userId, eventId, spotId, *(const MethodInfo **)&spotId);
  return (UserEventSpotEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                    PK,
                                    (const MethodInfo_31D2248 *)Method_DataMasterBase_UserEventSpotMaster__UserEventSpotEntity__string__GetEntity__);
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
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  int64_t v23; // x25
  __int64 methodPtr_low; // x10
  System_Collections_Generic_IList_T__c *v25; // x28
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x0

  if ( (byte_4B37E9F & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_1BD3458(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1BD3458(&Method_System_Collections_Generic_List_UserEventSpotEntity__Add__, v6);
    sub_1BD3458(&Method_System_Collections_Generic_List_UserEventSpotEntity__ToArray__, v7);
    sub_1BD3458(&Method_System_Collections_Generic_List_UserEventSpotEntity___ctor__, v8);
    sub_1BD3458(&System_Collections_Generic_List_UserEventSpotEntity__TypeInfo, v9);
    sub_1BD3458(&NetworkManager_TypeInfo, v10);
    sub_1BD3458(&UserEventSpotEntity_TypeInfo, v11);
    byte_4B37E9F = 1;
  }
  v12 = (System_Collections_Generic_List_object__o *)sub_1BD36A4(System_Collections_Generic_List_UserEventSpotEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_35C055C *)Method_System_Collections_Generic_List_UserEventSpotEntity___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_26;
  list = System_Collections_ObjectModel_Collection_object___get_Count(
           (System_Collections_ObjectModel_Collection_T__o *)list,
           (const MethodInfo_316E4C0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
                        (const MethodInfo_316E550 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v23 = list;
        methodPtr_low = LOBYTE(UserEventSpotEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) >= (unsigned int)methodPtr_low
          && *(UserEventSpotEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) == UserEventSpotEntity_TypeInfo )
        {
          v25 = *(System_Collections_Generic_IList_T__c **)(list + 16);
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          if ( !byte_4B31D77 )
          {
            sub_1BD3458(&NetworkManager_TypeInfo, v13);
            byte_4B31D77 = 1;
          }
          list = (int64_t)NetworkManager_TypeInfo;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            list = (int64_t)NetworkManager_TypeInfo;
          }
          if ( v25 == *(System_Collections_Generic_IList_T__c **)(*(_QWORD *)(list + 184) + 64LL)
            && *(_DWORD *)(v23 + 24) == eventId )
          {
            if ( !v12 )
              break;
            items = v12->fields._items;
            v27 = Method_System_Collections_Generic_List_UserEventSpotEntity__Add__;
            ++v12->fields._version;
            if ( !items )
              break;
            size = v12->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v12,
                (Il2CppObject *)v23,
                *(const MethodInfo_35C0D90 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
            }
            else
            {
              v29 = &items->obj.klass + size;
              v12->fields._size = size + 1;
              v29[4] = (Il2CppClass *)v23;
              sub_1BD33FC((PartyOrganizationUtility_o *)(v29 + 4), v23, v17, v18, v19, v20, v21, v22);
            }
          }
        }
      }
      if ( v15 == ++v16 )
        goto LABEL_24;
    }
LABEL_26:
    sub_1BD36B4(list, v13);
  }
LABEL_24:
  if ( !v12 )
    goto LABEL_26;
  return (UserEventSpotEntity_array *)System_Collections_Generic_List_object___ToArray(
                                        v12,
                                        (const MethodInfo_35C28E8 *)Method_System_Collections_Generic_List_UserEventSpotEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
UserEventSpotEntity_o *__fastcall UserEventSpotMaster__GetEntity_40934444(
        UserEventSpotMaster_o *this,
        int32_t eventId,
        int32_t spotId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x20
  NetworkManager_c *v11; // x0
  __int64 *lookup; // x0
  __int64 v13; // x1
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  int64_t v26; // x1
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  int64_t v39; // x1
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  System_String_o *v46; // x20
  __int64 v47; // x8
  void *v48; // x19
  __int64 v49; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v50; // x10
  __int64 v51; // x0
  __int64 methodPtr_low; // x11
  int64_t userIdNumber; // [xsp+0h] [xbp-40h] BYREF
  UserEventSpotEntity_o *v55; // [xsp+8h] [xbp-38h] BYREF
  int32_t v56; // [xsp+18h] [xbp-28h] BYREF
  int32_t v57; // [xsp+1Ch] [xbp-24h] BYREF

  v56 = spotId;
  v57 = eventId;
  if ( (byte_4B37E9E & 1) == 0 )
  {
    sub_1BD3458(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, *(_QWORD *)&eventId);
    sub_1BD3458(&NetworkManager_TypeInfo, v5);
    sub_1BD3458(&string___TypeInfo, v6);
    sub_1BD3458(&UserEventSpotEntity_TypeInfo, v7);
    sub_1BD3458(&StringLiteral_1541/*":"*/, v8);
    byte_4B37E9E = 1;
  }
  v55 = 0LL;
  v10 = sub_1BD3500(string___TypeInfo, 5LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B31D77 )
  {
    sub_1BD3458(&NetworkManager_TypeInfo, v9);
    byte_4B31D77 = 1;
  }
  v11 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v11 = NetworkManager_TypeInfo;
  }
  userIdNumber = v11->static_fields->userIdNumber;
  lookup = (__int64 *)System_Int64__ToString((int64_t)&userIdNumber, 0LL);
  if ( !v10 )
    goto LABEL_30;
  if ( !*(_DWORD *)(v10 + 24) )
    goto LABEL_29;
  *(_QWORD *)(v10 + 32) = lookup;
  sub_1BD33FC((PartyOrganizationUtility_o *)(v10 + 32), (int64_t)lookup, v14, v15, v16, v17, v18, v19);
  if ( *(_DWORD *)(v10 + 24) <= 1u )
    goto LABEL_29;
  v26 = StringLiteral_1541/*":"*/;
  *(_QWORD *)(v10 + 40) = StringLiteral_1541/*":"*/;
  sub_1BD33FC((PartyOrganizationUtility_o *)(v10 + 40), v26, v20, v21, v22, v23, v24, v25);
  lookup = (__int64 *)System_Int32__ToString((int32_t)&v57, 0LL);
  if ( *(_DWORD *)(v10 + 24) <= 2u
    || (*(_QWORD *)(v10 + 48) = lookup,
        sub_1BD33FC((PartyOrganizationUtility_o *)(v10 + 48), (int64_t)lookup, v27, v28, v29, v30, v31, v32),
        *(_DWORD *)(v10 + 24) <= 3u)
    || (v39 = StringLiteral_1541/*":"*/,
        *(_QWORD *)(v10 + 56) = StringLiteral_1541/*":"*/,
        sub_1BD33FC((PartyOrganizationUtility_o *)(v10 + 56), v39, v33, v34, v35, v36, v37, v38),
        lookup = (__int64 *)System_Int32__ToString((int32_t)&v56, 0LL),
        *(_DWORD *)(v10 + 24) <= 4u) )
  {
LABEL_29:
    sub_1BD36BC(lookup, v13);
  }
  *(_QWORD *)(v10 + 64) = lookup;
  sub_1BD33FC((PartyOrganizationUtility_o *)(v10 + 64), (int64_t)lookup, v40, v41, v42, v43, v44, v45);
  v46 = System_String__Concat_62538776((System_String_array *)v10, 0LL);
  lookup = (__int64 *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !lookup )
LABEL_30:
    sub_1BD36B4(lookup, v13);
  v47 = *lookup;
  v48 = lookup;
  v49 = *(unsigned __int16 *)(*lookup + 302);
  if ( *(_WORD *)(*lookup + 302) )
  {
    v50 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)(*(_QWORD *)(v47 + 176) + 8LL);
    while ( *(v50 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      --v49;
      v50 += 2;
      if ( !v49 )
        goto LABEL_20;
    }
    v51 = v47 + 16LL * (*(_DWORD *)v50 + 1) + 312;
  }
  else
  {
LABEL_20:
    v51 = sub_1C25438(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 1LL);
  }
  if ( ((*(__int64 (__fastcall **)(void *, System_String_o *, UserEventSpotEntity_o **, _QWORD))v51)(
          v48,
          v46,
          &v55,
          *(_QWORD *)(v51 + 8)) & 1) == 0 )
    return 0LL;
  if ( !v55 )
    return 0LL;
  methodPtr_low = LOBYTE(UserEventSpotEntity_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(v55->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
    return 0LL;
  if ( (UserEventSpotEntity_c *)v55->klass->_2.typeHierarchy[methodPtr_low - 1] == UserEventSpotEntity_TypeInfo )
    return v55;
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

  if ( (byte_4B37E9C & 1) == 0 )
  {
    sub_1BD3458(&Method_DataMasterBase_UserEventSpotMaster__UserEventSpotEntity__string__TryGetEntity__, entity);
    byte_4B37E9C = 1;
  }
  PK = (Il2CppObject *)UserEventSpotEntity__CreatePK(userId, eventId, spotId, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31D2298 *)Method_DataMasterBase_UserEventSpotMaster__UserEventSpotEntity__string__TryGetEntity__);
}