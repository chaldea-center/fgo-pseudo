void UserEventSpotMaster___ctor(UserEventSpotMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4D2D703 & 1) == 0 )
  {
    sub_1C94098(&Method_DataMasterBase_UserEventSpotMaster__UserEventSpotEntity__string___ctor__);
    byte_4D2D703 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    357,
    (const MethodInfo_345DC54 *)Method_DataMasterBase_UserEventSpotMaster__UserEventSpotEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserEventSpotEntity_o *UserEventSpotMaster__GetEntity(
        UserEventSpotMaster_o *this,
        int64_t userId,
        int32_t eventId,
        int32_t spotId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4D2D701 & 1) == 0 )
  {
    sub_1C94098(&Method_DataMasterBase_UserEventSpotMaster__UserEventSpotEntity__string__GetEntity__);
    byte_4D2D701 = 1;
  }
  PK = (Il2CppObject *)UserEventSpotEntity__CreatePK(userId, eventId, spotId, *(const MethodInfo **)&spotId);
  return (UserEventSpotEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                    PK,
                                    (const MethodInfo_345FF78 *)Method_DataMasterBase_UserEventSpotMaster__UserEventSpotEntity__string__GetEntity__);
}


UserEventSpotEntity_array *UserEventSpotMaster__GetEntityList(
        UserEventSpotMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  __int64 v6; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int v8; // w22
  int32_t v9; // w23
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  System_Collections_ObjectModel_Collection_T__o *v16; // x25
  System_Collections_Generic_IList_T__c *items; // x27
  struct System_Object_array *v18; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0

  if ( (byte_4D2D705 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_ObjectModel_Collection_UserEventSpotEntity__get_Count__);
    sub_1C94098(&Method_System_Collections_ObjectModel_Collection_UserEventSpotEntity__get_Item__);
    sub_1C94098(&Method_System_Collections_Generic_List_UserEventSpotEntity__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_UserEventSpotEntity__ToArray__);
    sub_1C94098(&Method_System_Collections_Generic_List_UserEventSpotEntity___ctor__);
    sub_1C94098(&System_Collections_Generic_List_UserEventSpotEntity__TypeInfo);
    sub_1C94098(&NetworkManager_TypeInfo);
    byte_4D2D705 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_UserEventSpotEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_UserEventSpotEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_24;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_33F3B64 *)Method_System_Collections_ObjectModel_Collection_UserEventSpotEntity__get_Count__);
  if ( (int)list >= 1 )
  {
    v8 = (int)list;
    v9 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v9,
                                                                 (const MethodInfo_33F3BF4 *)Method_System_Collections_ObjectModel_Collection_UserEventSpotEntity__get_Item__);
      if ( list )
      {
        v16 = list;
        items = (System_Collections_Generic_IList_T__c *)list->fields.items;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4D2633A )
        {
          sub_1C94098(&NetworkManager_TypeInfo);
          byte_4D2633A = 1;
        }
        list = (System_Collections_ObjectModel_Collection_T__o *)NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          list = (System_Collections_ObjectModel_Collection_T__o *)NetworkManager_TypeInfo;
        }
        if ( items == list[7].fields.items[4].klass && LODWORD(v16[1].klass) == eventId )
        {
          if ( !v5 )
            break;
          v18 = v5->fields._items;
          v19 = Method_System_Collections_Generic_List_UserEventSpotEntity__Add__;
          ++v5->fields._version;
          if ( !v18 )
            break;
          size = v5->fields._size;
          if ( (unsigned int)size >= LODWORD(v18->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v5,
              (Il2CppObject *)v16,
              *(const MethodInfo_386AE34 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
          }
          else
          {
            v21 = &v18->obj.klass + size;
            v5->fields._size = size + 1;
            v21[4] = (Il2CppClass *)v16;
            sub_1C9403C((GrandQuestFolderBoardItem_o *)(v21 + 4), (int32_t)v16, v10, v11, v12, v13, v14, v15);
          }
        }
      }
      if ( v8 == ++v9 )
        goto LABEL_22;
    }
LABEL_24:
    sub_1C942F0(list, v6);
  }
LABEL_22:
  if ( !v5 )
    goto LABEL_24;
  return (UserEventSpotEntity_array *)System_Collections_Generic_List_object___ToArray(
                                        v5,
                                        (const MethodInfo_386C98C *)Method_System_Collections_Generic_List_UserEventSpotEntity__ToArray__);
}


UserEventSpotEntity_o *UserEventSpotMaster__GetEntity_43851320(
        UserEventSpotMaster_o *this,
        int32_t eventId,
        int32_t spotId,
        const MethodInfo *method)
{
  __int64 v5; // x20
  NetworkManager_c *v6; // x0
  __int64 *lookup; // x0
  __int64 v8; // x1
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  int32_t v21; // w1
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  int32_t v34; // w1
  int32_t v35; // w2
  int32_t v36; // w3
  System_String_o *v37; // x4
  int32_t v38; // w5
  int64_t v39; // x6
  System_String_o *v40; // x7
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
  if ( (byte_4D2D704 & 1) == 0 )
  {
    sub_1C94098(&Method_DataMasterBase_UserEventSpotMaster__UserEventSpotEntity__string__get_lookup__);
    sub_1C94098(&System_Collections_Generic_IReadOnlyDictionary_string__UserEventSpotEntity__TypeInfo);
    sub_1C94098(&NetworkManager_TypeInfo);
    sub_1C94098(&string___TypeInfo);
    sub_1C94098(&StringLiteral_1450/*":"*/);
    byte_4D2D704 = 1;
  }
  v49 = 0;
  v5 = sub_1C94140(string___TypeInfo, 5);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4D2633A )
  {
    sub_1C94098(&NetworkManager_TypeInfo);
    byte_4D2633A = 1;
  }
  v6 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v6 = NetworkManager_TypeInfo;
  }
  userIdNumber = v6->static_fields->userIdNumber;
  lookup = (__int64 *)System_Int64__ToString((int64_t)&userIdNumber, 0);
  if ( !v5 )
    goto LABEL_26;
  if ( !*(_DWORD *)(v5 + 24) )
    goto LABEL_25;
  *(_QWORD *)(v5 + 32) = lookup;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v5 + 32), (int32_t)lookup, v9, v10, v11, v12, v13, v14);
  if ( *(_DWORD *)(v5 + 24) <= 1u )
    goto LABEL_25;
  v21 = StringLiteral_1450/*":"*/;
  *(_QWORD *)(v5 + 40) = StringLiteral_1450/*":"*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v5 + 40), v21, v15, v16, v17, v18, v19, v20);
  lookup = (__int64 *)System_Int32__ToString((int32_t)&v51, 0);
  if ( *(_DWORD *)(v5 + 24) <= 2u
    || (*(_QWORD *)(v5 + 48) = lookup,
        sub_1C9403C((GrandQuestFolderBoardItem_o *)(v5 + 48), (int32_t)lookup, v22, v23, v24, v25, v26, v27),
        *(_DWORD *)(v5 + 24) <= 3u)
    || (v34 = StringLiteral_1450/*":"*/,
        *(_QWORD *)(v5 + 56) = StringLiteral_1450/*":"*/,
        sub_1C9403C((GrandQuestFolderBoardItem_o *)(v5 + 56), v34, v28, v29, v30, v31, v32, v33),
        lookup = (__int64 *)System_Int32__ToString((int32_t)&v50, 0),
        *(_DWORD *)(v5 + 24) <= 4u) )
  {
LABEL_25:
    sub_1C942F8(lookup);
  }
  *(_QWORD *)(v5 + 64) = lookup;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v5 + 64), (int32_t)lookup, v35, v36, v37, v38, v39, v40);
  v41 = System_String__Concat_64458276((System_String_array *)v5, 0);
  lookup = (__int64 *)DataMasterBase_object__object__object___get_lookup(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                        (const MethodInfo_345DD6C *)Method_DataMasterBase_UserEventSpotMaster__UserEventSpotEntity__string__get_lookup__);
  if ( !lookup )
LABEL_26:
    sub_1C942F0(lookup, v8);
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
    v46 = sub_1C6A420(lookup, System_Collections_Generic_IReadOnlyDictionary_string__UserEventSpotEntity__TypeInfo, 1);
  }
  if ( ((*(__int64 (__fastcall **)(void *, System_String_o *, UserEventSpotEntity_o **, _QWORD))v46)(
          v43,
          v41,
          &v49,
          *(_QWORD *)(v46 + 8))
      & 1) != 0 )
    return v49;
  else
    return 0;
}


// local variable allocation has failed, the output may be wrong!
bool UserEventSpotMaster__TryGetEntity(
        UserEventSpotMaster_o *this,
        UserEventSpotEntity_o **entity,
        int64_t userId,
        int32_t eventId,
        int32_t spotId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4D2D702 & 1) == 0 )
  {
    sub_1C94098(&Method_DataMasterBase_UserEventSpotMaster__UserEventSpotEntity__string__TryGetEntity__);
    byte_4D2D702 = 1;
  }
  PK = (Il2CppObject *)UserEventSpotEntity__CreatePK(userId, eventId, spotId, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_345FFC4 *)Method_DataMasterBase_UserEventSpotMaster__UserEventSpotEntity__string__TryGetEntity__);
}