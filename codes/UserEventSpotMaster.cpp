void __fastcall UserEventSpotMaster___ctor(UserEventSpotMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BDD27D & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_UserEventSpotMaster__UserEventSpotEntity__string___ctor__);
    byte_4BDD27D = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    355,
    (const MethodInfo_325E55C *)Method_DataMasterBase_UserEventSpotMaster__UserEventSpotEntity__string___ctor__);
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

  if ( (byte_4BDD27B & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_UserEventSpotMaster__UserEventSpotEntity__string__GetEntity__);
    byte_4BDD27B = 1;
  }
  PK = (Il2CppObject *)UserEventSpotEntity__CreatePK(userId, eventId, spotId, *(const MethodInfo **)&spotId);
  return (UserEventSpotEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                    PK,
                                    (const MethodInfo_3260880 *)Method_DataMasterBase_UserEventSpotMaster__UserEventSpotEntity__string__GetEntity__);
}


UserEventSpotEntity_array *__fastcall UserEventSpotMaster__GetEntityList(
        UserEventSpotMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  __int64 v6; // x1
  int64_t list; // x0
  int v8; // w22
  int32_t v9; // w23
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  int64_t v16; // x25
  System_Collections_Generic_IList_T__c *v17; // x27
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0

  if ( (byte_4BDD27F & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_UserEventSpotEntity__get_Count__);
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_UserEventSpotEntity__get_Item__);
    sub_1C21E38(&Method_System_Collections_Generic_List_UserEventSpotEntity__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_UserEventSpotEntity__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_UserEventSpotEntity___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_UserEventSpotEntity__TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    byte_4BDD27F = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_UserEventSpotEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_UserEventSpotEntity___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_24;
  list = System_Collections_ObjectModel_Collection_object___get_Count(
           (System_Collections_ObjectModel_Collection_T__o *)list,
           (const MethodInfo_31F60CC *)Method_System_Collections_ObjectModel_Collection_UserEventSpotEntity__get_Count__);
  if ( (int)list >= 1 )
  {
    v8 = list;
    v9 = 0;
    while ( 1 )
    {
      list = (int64_t)this->fields.list;
      if ( !list )
        break;
      list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)list,
                        v9,
                        (const MethodInfo_31F615C *)Method_System_Collections_ObjectModel_Collection_UserEventSpotEntity__get_Item__);
      if ( list )
      {
        v16 = list;
        v17 = *(System_Collections_Generic_IList_T__c **)(list + 16);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4BD6FF5 )
        {
          sub_1C21E38(&NetworkManager_TypeInfo);
          byte_4BD6FF5 = 1;
        }
        list = (int64_t)NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          list = (int64_t)NetworkManager_TypeInfo;
        }
        if ( v17 == *(System_Collections_Generic_IList_T__c **)(*(_QWORD *)(list + 184) + 64LL)
          && *(_DWORD *)(v16 + 24) == eventId )
        {
          if ( !v5 )
            break;
          items = v5->fields._items;
          v19 = Method_System_Collections_Generic_List_UserEventSpotEntity__Add__;
          ++v5->fields._version;
          if ( !items )
            break;
          size = v5->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v5,
              (Il2CppObject *)v16,
              *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
          }
          else
          {
            v21 = &items->obj.klass + size;
            v5->fields._size = size + 1;
            v21[4] = (Il2CppClass *)v16;
            sub_1C21DDC((PartyOrganizationUtility_o *)(v21 + 4), v16, v10, v11, v12, v13, v14, v15);
          }
        }
      }
      if ( v8 == ++v9 )
        goto LABEL_22;
    }
LABEL_24:
    sub_1C22094(list, v6);
  }
LABEL_22:
  if ( !v5 )
    goto LABEL_24;
  return (UserEventSpotEntity_array *)System_Collections_Generic_List_object___ToArray(
                                        v5,
                                        (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_UserEventSpotEntity__ToArray__);
}


UserEventSpotEntity_o *__fastcall UserEventSpotMaster__GetEntity_41380812(
        UserEventSpotMaster_o *this,
        int32_t eventId,
        int32_t spotId,
        const MethodInfo *method)
{
  __int64 v5; // x20
  NetworkManager_c *v6; // x0
  __int64 *lookup; // x0
  __int64 v8; // x1
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  int64_t v21; // x1
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  int64_t v34; // x1
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  System_String_o *v41; // x20
  __int64 v42; // x8
  void *v43; // x19
  __int64 v44; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__UserEventSpotEntity__c **v45; // x10
  __int64 v46; // x0
  int64_t userIdNumber; // [xsp+0h] [xbp-40h] BYREF
  UserEventSpotEntity_o *v49; // [xsp+8h] [xbp-38h] BYREF
  int32_t v50; // [xsp+18h] [xbp-28h] BYREF
  int32_t v51; // [xsp+1Ch] [xbp-24h] BYREF

  v50 = spotId;
  v51 = eventId;
  if ( (byte_4BDD27E & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_UserEventSpotMaster__UserEventSpotEntity__string__get_lookup__);
    sub_1C21E38(&System_Collections_Generic_IReadOnlyDictionary_string__UserEventSpotEntity__TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&string___TypeInfo);
    sub_1C21E38(&StringLiteral_1546/*":"*/);
    byte_4BDD27E = 1;
  }
  v49 = 0LL;
  v5 = sub_1C21EE0(string___TypeInfo, 5LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4BD6FF5 )
  {
    sub_1C21E38(&NetworkManager_TypeInfo);
    byte_4BD6FF5 = 1;
  }
  v6 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v6 = NetworkManager_TypeInfo;
  }
  userIdNumber = v6->static_fields->userIdNumber;
  lookup = (__int64 *)System_Int64__ToString((int64_t)&userIdNumber, 0LL);
  if ( !v5 )
    goto LABEL_26;
  if ( !*(_DWORD *)(v5 + 24) )
    goto LABEL_25;
  *(_QWORD *)(v5 + 32) = lookup;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 32), (int64_t)lookup, v9, v10, v11, v12, v13, v14);
  if ( *(_DWORD *)(v5 + 24) <= 1u )
    goto LABEL_25;
  v21 = StringLiteral_1546/*":"*/;
  *(_QWORD *)(v5 + 40) = StringLiteral_1546/*":"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 40), v21, v15, v16, v17, v18, v19, v20);
  lookup = (__int64 *)System_Int32__ToString((int32_t)&v51, 0LL);
  if ( *(_DWORD *)(v5 + 24) <= 2u
    || (*(_QWORD *)(v5 + 48) = lookup,
        sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 48), (int64_t)lookup, v22, v23, v24, v25, v26, v27),
        *(_DWORD *)(v5 + 24) <= 3u)
    || (v34 = StringLiteral_1546/*":"*/,
        *(_QWORD *)(v5 + 56) = StringLiteral_1546/*":"*/,
        sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 56), v34, v28, v29, v30, v31, v32, v33),
        lookup = (__int64 *)System_Int32__ToString((int32_t)&v50, 0LL),
        *(_DWORD *)(v5 + 24) <= 4u) )
  {
LABEL_25:
    sub_1C2209C(lookup, v8);
  }
  *(_QWORD *)(v5 + 64) = lookup;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 64), (int64_t)lookup, v35, v36, v37, v38, v39, v40);
  v41 = System_String__Concat_63129004((System_String_array *)v5, 0LL);
  lookup = (__int64 *)DataMasterBase_object__object__object___get_lookup(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                        (const MethodInfo_325E674 *)Method_DataMasterBase_UserEventSpotMaster__UserEventSpotEntity__string__get_lookup__);
  if ( !lookup )
LABEL_26:
    sub_1C22094(lookup, v8);
  v42 = *lookup;
  v43 = lookup;
  v44 = *(unsigned __int16 *)(*lookup + 302);
  if ( *(_WORD *)(*lookup + 302) )
  {
    v45 = (System_Collections_Generic_IReadOnlyDictionary_string__UserEventSpotEntity__c **)(*(_QWORD *)(v42 + 176) + 8LL);
    while ( *(v45 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__UserEventSpotEntity__TypeInfo )
    {
      --v44;
      v45 += 2;
      if ( !v44 )
        goto LABEL_20;
    }
    v46 = v42 + 16LL * (*(_DWORD *)v45 + 1) + 312;
  }
  else
  {
LABEL_20:
    v46 = sub_1C73E18(lookup, System_Collections_Generic_IReadOnlyDictionary_string__UserEventSpotEntity__TypeInfo, 1LL);
  }
  if ( ((*(__int64 (__fastcall **)(void *, System_String_o *, UserEventSpotEntity_o **, _QWORD))v46)(
          v43,
          v41,
          &v49,
          *(_QWORD *)(v46 + 8)) & 1) != 0 )
    return v49;
  else
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

  if ( (byte_4BDD27C & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_UserEventSpotMaster__UserEventSpotEntity__string__TryGetEntity__);
    byte_4BDD27C = 1;
  }
  PK = (Il2CppObject *)UserEventSpotEntity__CreatePK(userId, eventId, spotId, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_32608CC *)Method_DataMasterBase_UserEventSpotMaster__UserEventSpotEntity__string__TryGetEntity__);
}