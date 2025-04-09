void __fastcall UserEventSpotMaster___ctor(UserEventSpotMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49BBC06 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataMasterBase_UserEventSpotMaster__UserEventSpotEntity__string___ctor__, method);
    byte_49BBC06 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    357,
    (const MethodInfo_31A0130 *)Method_DataMasterBase_UserEventSpotMaster__UserEventSpotEntity__string___ctor__);
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

  if ( (byte_49BBC04 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataMasterBase_UserEventSpotMaster__UserEventSpotEntity__string__GetEntity__, userId);
    byte_49BBC04 = 1;
  }
  PK = (Il2CppObject *)UserEventSpotEntity__CreatePK(userId, eventId, spotId, *(const MethodInfo **)&spotId);
  return (UserEventSpotEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                    PK,
                                    (const MethodInfo_31A2454 *)Method_DataMasterBase_UserEventSpotMaster__UserEventSpotEntity__string__GetEntity__);
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
  System_Collections_Generic_List_object__o *v11; // x21
  __int64 v12; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int v14; // w22
  int32_t v15; // w23
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  System_Collections_ObjectModel_Collection_T__o *v18; // x25
  System_Collections_Generic_IList_T__c *items; // x27
  struct System_Object_array *v20; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0

  if ( (byte_49BBC08 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_ObjectModel_Collection_UserEventSpotEntity__get_Count__, *(_QWORD *)&eventId);
    sub_1B4CF90(&Method_System_Collections_ObjectModel_Collection_UserEventSpotEntity__get_Item__, v5);
    sub_1B4CF90(&Method_System_Collections_Generic_List_UserEventSpotEntity__Add__, v6);
    sub_1B4CF90(&Method_System_Collections_Generic_List_UserEventSpotEntity__ToArray__, v7);
    sub_1B4CF90(&Method_System_Collections_Generic_List_UserEventSpotEntity___ctor__, v8);
    sub_1B4CF90(&System_Collections_Generic_List_UserEventSpotEntity__TypeInfo, v9);
    sub_1B4CF90(&NetworkManager_TypeInfo, v10);
    byte_49BBC08 = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_UserEventSpotEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_UserEventSpotEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_24;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_313AEE4 *)Method_System_Collections_ObjectModel_Collection_UserEventSpotEntity__get_Count__);
  if ( (int)list >= 1 )
  {
    v14 = (int)list;
    v15 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v15,
                                                                 (const MethodInfo_313AF74 *)Method_System_Collections_ObjectModel_Collection_UserEventSpotEntity__get_Item__);
      if ( list )
      {
        v18 = list;
        items = (System_Collections_Generic_IList_T__c *)list->fields.items;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_49B57A5 )
        {
          sub_1B4CF90(&NetworkManager_TypeInfo, v12);
          byte_49B57A5 = 1;
        }
        list = (System_Collections_ObjectModel_Collection_T__o *)NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          list = (System_Collections_ObjectModel_Collection_T__o *)NetworkManager_TypeInfo;
        }
        if ( items == list[7].fields.items[4].klass && LODWORD(v18[1].klass) == eventId )
        {
          if ( !v11 )
            break;
          v20 = v11->fields._items;
          v21 = Method_System_Collections_Generic_List_UserEventSpotEntity__Add__;
          ++v11->fields._version;
          if ( !v20 )
            break;
          size = v11->fields._size;
          if ( (unsigned int)size >= v20->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v11,
              (Il2CppObject *)v18,
              *(const MethodInfo_35801DC **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
          }
          else
          {
            v23 = &v20->obj.klass + size;
            v11->fields._size = size + 1;
            v23[4] = (Il2CppClass *)v18;
            sub_1B4CF34((CGThumbnailListItem_o *)(v23 + 4), (int32_t)v18, v16, v17);
          }
        }
      }
      if ( v14 == ++v15 )
        goto LABEL_22;
    }
LABEL_24:
    sub_1B4D1EC(list, v12);
  }
LABEL_22:
  if ( !v11 )
    goto LABEL_24;
  return (UserEventSpotEntity_array *)System_Collections_Generic_List_object___ToArray(
                                        v11,
                                        (const MethodInfo_3581D34 *)Method_System_Collections_Generic_List_UserEventSpotEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
UserEventSpotEntity_o *__fastcall UserEventSpotMaster__GetEntity_40707728(
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
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int32_t v18; // w1
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  int32_t v23; // w1
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  System_String_o *v26; // x20
  __int64 v27; // x8
  void *v28; // x19
  __int64 v29; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__UserEventSpotEntity__c **v30; // x10
  __int64 v31; // x0
  int64_t userIdNumber; // [xsp+0h] [xbp-40h] BYREF
  UserEventSpotEntity_o *v34; // [xsp+8h] [xbp-38h] BYREF
  int32_t v35; // [xsp+18h] [xbp-28h] BYREF
  int32_t v36; // [xsp+1Ch] [xbp-24h] BYREF

  v35 = spotId;
  v36 = eventId;
  if ( (byte_49BBC07 & 1) == 0 )
  {
    sub_1B4CF90(
      &Method_DataMasterBase_UserEventSpotMaster__UserEventSpotEntity__string__get_lookup__,
      *(_QWORD *)&eventId);
    sub_1B4CF90(&System_Collections_Generic_IReadOnlyDictionary_string__UserEventSpotEntity__TypeInfo, v5);
    sub_1B4CF90(&NetworkManager_TypeInfo, v6);
    sub_1B4CF90(&string___TypeInfo, v7);
    sub_1B4CF90(&StringLiteral_1468/*":"*/, v8);
    byte_49BBC07 = 1;
  }
  v34 = 0LL;
  v10 = sub_1B4D038(string___TypeInfo, 5LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_49B57A5 )
  {
    sub_1B4CF90(&NetworkManager_TypeInfo, v9);
    byte_49B57A5 = 1;
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
    goto LABEL_26;
  if ( !*(_DWORD *)(v10 + 24) )
    goto LABEL_25;
  *(_QWORD *)(v10 + 32) = lookup;
  sub_1B4CF34((CGThumbnailListItem_o *)(v10 + 32), (int32_t)lookup, v14, v15);
  if ( *(_DWORD *)(v10 + 24) <= 1u )
    goto LABEL_25;
  v18 = StringLiteral_1468/*":"*/;
  *(_QWORD *)(v10 + 40) = StringLiteral_1468/*":"*/;
  sub_1B4CF34((CGThumbnailListItem_o *)(v10 + 40), v18, v16, v17);
  lookup = (__int64 *)System_Int32__ToString((int32_t)&v36, 0LL);
  if ( *(_DWORD *)(v10 + 24) <= 2u
    || (*(_QWORD *)(v10 + 48) = lookup,
        sub_1B4CF34((CGThumbnailListItem_o *)(v10 + 48), (int32_t)lookup, v19, v20),
        *(_DWORD *)(v10 + 24) <= 3u)
    || (v23 = StringLiteral_1468/*":"*/,
        *(_QWORD *)(v10 + 56) = StringLiteral_1468/*":"*/,
        sub_1B4CF34((CGThumbnailListItem_o *)(v10 + 56), v23, v21, v22),
        lookup = (__int64 *)System_Int32__ToString((int32_t)&v35, 0LL),
        *(_DWORD *)(v10 + 24) <= 4u) )
  {
LABEL_25:
    sub_1B4D1F4(lookup, v13);
  }
  *(_QWORD *)(v10 + 64) = lookup;
  sub_1B4CF34((CGThumbnailListItem_o *)(v10 + 64), (int32_t)lookup, v24, v25);
  v26 = System_String__Concat_61133984((System_String_array *)v10, 0LL);
  lookup = (__int64 *)DataMasterBase_object__object__object___get_lookup(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                        (const MethodInfo_31A0248 *)Method_DataMasterBase_UserEventSpotMaster__UserEventSpotEntity__string__get_lookup__);
  if ( !lookup )
LABEL_26:
    sub_1B4D1EC(lookup, v13);
  v27 = *lookup;
  v28 = lookup;
  v29 = *(unsigned __int16 *)(*lookup + 302);
  if ( *(_WORD *)(*lookup + 302) )
  {
    v30 = (System_Collections_Generic_IReadOnlyDictionary_string__UserEventSpotEntity__c **)(*(_QWORD *)(v27 + 176) + 8LL);
    while ( *(v30 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__UserEventSpotEntity__TypeInfo )
    {
      --v29;
      v30 += 2;
      if ( !v29 )
        goto LABEL_20;
    }
    v31 = v27 + 16LL * (*(_DWORD *)v30 + 1) + 312;
  }
  else
  {
LABEL_20:
    v31 = sub_1B9D724(lookup, System_Collections_Generic_IReadOnlyDictionary_string__UserEventSpotEntity__TypeInfo, 1LL);
  }
  if ( ((*(__int64 (__fastcall **)(void *, System_String_o *, UserEventSpotEntity_o **, _QWORD))v31)(
          v28,
          v26,
          &v34,
          *(_QWORD *)(v31 + 8)) & 1) != 0 )
    return v34;
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

  if ( (byte_49BBC05 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataMasterBase_UserEventSpotMaster__UserEventSpotEntity__string__TryGetEntity__, entity);
    byte_49BBC05 = 1;
  }
  PK = (Il2CppObject *)UserEventSpotEntity__CreatePK(userId, eventId, spotId, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31A24A0 *)Method_DataMasterBase_UserEventSpotMaster__UserEventSpotEntity__string__TryGetEntity__);
}