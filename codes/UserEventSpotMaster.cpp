void __fastcall UserEventSpotMaster___ctor(UserEventSpotMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B02E24 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataMasterBase_UserEventSpotMaster__UserEventSpotEntity__string___ctor__, method);
    byte_4B02E24 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    357,
    (const MethodInfo_32B1804 *)Method_DataMasterBase_UserEventSpotMaster__UserEventSpotEntity__string___ctor__);
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

  if ( (byte_4B02E22 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataMasterBase_UserEventSpotMaster__UserEventSpotEntity__string__GetEntity__, userId);
    byte_4B02E22 = 1;
  }
  PK = (Il2CppObject *)UserEventSpotEntity__CreatePK(userId, eventId, spotId, *(const MethodInfo **)&spotId);
  return (UserEventSpotEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                    PK,
                                    (const MethodInfo_32B3B28 *)Method_DataMasterBase_UserEventSpotMaster__UserEventSpotEntity__string__GetEntity__);
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

  if ( (byte_4B02E26 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_ObjectModel_Collection_UserEventSpotEntity__get_Count__, *(_QWORD *)&eventId);
    sub_1BC3008(&Method_System_Collections_ObjectModel_Collection_UserEventSpotEntity__get_Item__, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_UserEventSpotEntity__Add__, v6);
    sub_1BC3008(&Method_System_Collections_Generic_List_UserEventSpotEntity__ToArray__, v7);
    sub_1BC3008(&Method_System_Collections_Generic_List_UserEventSpotEntity___ctor__, v8);
    sub_1BC3008(&System_Collections_Generic_List_UserEventSpotEntity__TypeInfo, v9);
    sub_1BC3008(&NetworkManager_TypeInfo, v10);
    byte_4B02E26 = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_UserEventSpotEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_UserEventSpotEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_24;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_324A858 *)Method_System_Collections_ObjectModel_Collection_UserEventSpotEntity__get_Count__);
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
                                                                 (const MethodInfo_324A8E8 *)Method_System_Collections_ObjectModel_Collection_UserEventSpotEntity__get_Item__);
      if ( list )
      {
        v18 = list;
        items = (System_Collections_Generic_IList_T__c *)list->fields.items;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4AFC1F1 )
        {
          sub_1BC3008(&NetworkManager_TypeInfo, v12);
          byte_4AFC1F1 = 1;
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
              *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
          }
          else
          {
            v23 = &v20->obj.klass + size;
            v11->fields._size = size + 1;
            v23[4] = (Il2CppClass *)v18;
            sub_1BC2FAC((CGThumbnailListItem_o *)(v23 + 4), (int32_t)v18, v16, v17);
          }
        }
      }
      if ( v14 == ++v15 )
        goto LABEL_22;
    }
LABEL_24:
    sub_1BC3264(list, v12);
  }
LABEL_22:
  if ( !v11 )
    goto LABEL_24;
  return (UserEventSpotEntity_array *)System_Collections_Generic_List_object___ToArray(
                                        v11,
                                        (const MethodInfo_36A2998 *)Method_System_Collections_Generic_List_UserEventSpotEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
UserEventSpotEntity_o *__fastcall UserEventSpotMaster__GetEntity_42045020(
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
  __int64 v14; // x2
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x3
  int32_t v17; // w1
  const MethodInfo *v18; // x3
  const MethodInfo *v19; // x3
  int32_t v20; // w1
  const MethodInfo *v21; // x3
  System_String_o *v22; // x20
  __int64 v23; // x8
  void *v24; // x19
  __int64 v25; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__UserEventSpotEntity__c **v26; // x10
  __int64 v27; // x0
  int64_t userIdNumber; // [xsp+0h] [xbp-40h] BYREF
  UserEventSpotEntity_o *v30; // [xsp+8h] [xbp-38h] BYREF
  int32_t v31; // [xsp+18h] [xbp-28h] BYREF
  int32_t v32; // [xsp+1Ch] [xbp-24h] BYREF

  v31 = spotId;
  v32 = eventId;
  if ( (byte_4B02E25 & 1) == 0 )
  {
    sub_1BC3008(
      &Method_DataMasterBase_UserEventSpotMaster__UserEventSpotEntity__string__get_lookup__,
      *(_QWORD *)&eventId);
    sub_1BC3008(&System_Collections_Generic_IReadOnlyDictionary_string__UserEventSpotEntity__TypeInfo, v5);
    sub_1BC3008(&NetworkManager_TypeInfo, v6);
    sub_1BC3008(&string___TypeInfo, v7);
    sub_1BC3008(&StringLiteral_1447/*":"*/, v8);
    byte_4B02E25 = 1;
  }
  v30 = 0LL;
  v10 = sub_1BC30B0(string___TypeInfo, 5LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4AFC1F1 )
  {
    sub_1BC3008(&NetworkManager_TypeInfo, v9);
    byte_4AFC1F1 = 1;
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
  sub_1BC2FAC((CGThumbnailListItem_o *)(v10 + 32), (int32_t)lookup, v14, v15);
  if ( *(_DWORD *)(v10 + 24) <= 1u )
    goto LABEL_25;
  v17 = StringLiteral_1447/*":"*/;
  *(_QWORD *)(v10 + 40) = StringLiteral_1447/*":"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v10 + 40), v17, v14, v16);
  lookup = (__int64 *)System_Int32__ToString((int32_t)&v32, 0LL);
  if ( *(_DWORD *)(v10 + 24) <= 2u
    || (*(_QWORD *)(v10 + 48) = lookup,
        sub_1BC2FAC((CGThumbnailListItem_o *)(v10 + 48), (int32_t)lookup, v14, v18),
        *(_DWORD *)(v10 + 24) <= 3u)
    || (v20 = StringLiteral_1447/*":"*/,
        *(_QWORD *)(v10 + 56) = StringLiteral_1447/*":"*/,
        sub_1BC2FAC((CGThumbnailListItem_o *)(v10 + 56), v20, v14, v19),
        lookup = (__int64 *)System_Int32__ToString((int32_t)&v31, 0LL),
        *(_DWORD *)(v10 + 24) <= 4u) )
  {
LABEL_25:
    sub_1BC326C(lookup, v13, v14);
  }
  *(_QWORD *)(v10 + 64) = lookup;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v10 + 64), (int32_t)lookup, v14, v21);
  v22 = System_String__Concat_62389164((System_String_array *)v10, 0LL);
  lookup = (__int64 *)DataMasterBase_object__object__object___get_lookup(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                        (const MethodInfo_32B191C *)Method_DataMasterBase_UserEventSpotMaster__UserEventSpotEntity__string__get_lookup__);
  if ( !lookup )
LABEL_26:
    sub_1BC3264(lookup, v13);
  v23 = *lookup;
  v24 = lookup;
  v25 = *(unsigned __int16 *)(*lookup + 302);
  if ( *(_WORD *)(*lookup + 302) )
  {
    v26 = (System_Collections_Generic_IReadOnlyDictionary_string__UserEventSpotEntity__c **)(*(_QWORD *)(v23 + 176) + 8LL);
    while ( *(v26 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__UserEventSpotEntity__TypeInfo )
    {
      --v25;
      v26 += 2;
      if ( !v25 )
        goto LABEL_20;
    }
    v27 = v23 + 16LL * (*(_DWORD *)v26 + 1) + 312;
  }
  else
  {
LABEL_20:
    v27 = sub_1C13570(lookup, System_Collections_Generic_IReadOnlyDictionary_string__UserEventSpotEntity__TypeInfo, 1LL);
  }
  if ( ((*(__int64 (__fastcall **)(void *, System_String_o *, UserEventSpotEntity_o **, _QWORD))v27)(
          v24,
          v22,
          &v30,
          *(_QWORD *)(v27 + 8)) & 1) != 0 )
    return v30;
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

  if ( (byte_4B02E23 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataMasterBase_UserEventSpotMaster__UserEventSpotEntity__string__TryGetEntity__, entity);
    byte_4B02E23 = 1;
  }
  PK = (Il2CppObject *)UserEventSpotEntity__CreatePK(userId, eventId, spotId, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_32B3B74 *)Method_DataMasterBase_UserEventSpotMaster__UserEventSpotEntity__string__TryGetEntity__);
}