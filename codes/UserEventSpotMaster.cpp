void UserEventSpotMaster___ctor(UserEventSpotMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C28124 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_UserEventSpotMaster__UserEventSpotEntity__string___ctor__);
    byte_4C28124 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    357,
    (const MethodInfo_338A52C *)Method_DataMasterBase_UserEventSpotMaster__UserEventSpotEntity__string___ctor__);
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

  if ( (byte_4C28122 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_UserEventSpotMaster__UserEventSpotEntity__string__GetEntity__);
    byte_4C28122 = 1;
  }
  PK = (Il2CppObject *)UserEventSpotEntity__CreatePK(userId, eventId, spotId, *(const MethodInfo **)&spotId);
  return (UserEventSpotEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                    PK,
                                    (const MethodInfo_338C850 *)Method_DataMasterBase_UserEventSpotMaster__UserEventSpotEntity__string__GetEntity__);
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
  const MethodInfo *v11; // x3
  System_Collections_ObjectModel_Collection_T__o *v12; // x25
  System_Collections_Generic_IList_T__c *items; // x27
  struct System_Object_array *v14; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  Il2CppClass **v17; // x0

  if ( (byte_4C28126 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_UserEventSpotEntity__get_Count__);
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_UserEventSpotEntity__get_Item__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserEventSpotEntity__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserEventSpotEntity__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserEventSpotEntity___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_UserEventSpotEntity__TypeInfo);
    sub_1C2D490(&NetworkManager_TypeInfo);
    byte_4C28126 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_UserEventSpotEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_UserEventSpotEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_24;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_3321208 *)Method_System_Collections_ObjectModel_Collection_UserEventSpotEntity__get_Count__);
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
                                                                 (const MethodInfo_3321298 *)Method_System_Collections_ObjectModel_Collection_UserEventSpotEntity__get_Item__);
      if ( list )
      {
        v12 = list;
        items = (System_Collections_Generic_IList_T__c *)list->fields.items;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4C211E1 )
        {
          sub_1C2D490(&NetworkManager_TypeInfo);
          byte_4C211E1 = 1;
        }
        list = (System_Collections_ObjectModel_Collection_T__o *)NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          list = (System_Collections_ObjectModel_Collection_T__o *)NetworkManager_TypeInfo;
        }
        if ( items == list[7].fields.items[4].klass && LODWORD(v12[1].klass) == eventId )
        {
          if ( !v5 )
            break;
          v14 = v5->fields._items;
          v15 = Method_System_Collections_Generic_List_UserEventSpotEntity__Add__;
          ++v5->fields._version;
          if ( !v14 )
            break;
          size = v5->fields._size;
          if ( (unsigned int)size >= LODWORD(v14->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v5,
              (Il2CppObject *)v12,
              *(const MethodInfo_3789B84 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
          }
          else
          {
            v17 = &v14->obj.klass + size;
            v5->fields._size = size + 1;
            v17[4] = (Il2CppClass *)v12;
            sub_1C2D434((CGThumbnailListItem_o *)(v17 + 4), (int32_t)v12, v10, v11);
          }
        }
      }
      if ( v8 == ++v9 )
        goto LABEL_22;
    }
LABEL_24:
    sub_1C2D6EC(list, v6);
  }
LABEL_22:
  if ( !v5 )
    goto LABEL_24;
  return (UserEventSpotEntity_array *)System_Collections_Generic_List_object___ToArray(
                                        v5,
                                        (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_UserEventSpotEntity__ToArray__);
}


UserEventSpotEntity_o *UserEventSpotMaster__GetEntity_42834740(
        UserEventSpotMaster_o *this,
        int32_t eventId,
        int32_t spotId,
        const MethodInfo *method)
{
  __int64 v5; // x20
  NetworkManager_c *v6; // x0
  __int64 *lookup; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x3
  int32_t v12; // w1
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x3
  int32_t v15; // w1
  const MethodInfo *v16; // x3
  System_String_o *v17; // x20
  __int64 v18; // x8
  void *v19; // x19
  __int64 v20; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__UserEventSpotEntity__c **v21; // x10
  __int64 v22; // x0
  int64_t userIdNumber; // [xsp+0h] [xbp-40h] BYREF
  UserEventSpotEntity_o *v25; // [xsp+8h] [xbp-38h] BYREF
  int32_t v26; // [xsp+18h] [xbp-28h] BYREF
  int32_t v27; // [xsp+1Ch] [xbp-24h] BYREF

  v26 = spotId;
  v27 = eventId;
  if ( (byte_4C28125 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_UserEventSpotMaster__UserEventSpotEntity__string__get_lookup__);
    sub_1C2D490(&System_Collections_Generic_IReadOnlyDictionary_string__UserEventSpotEntity__TypeInfo);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&string___TypeInfo);
    sub_1C2D490(&StringLiteral_1456/*":"*/);
    byte_4C28125 = 1;
  }
  v25 = 0;
  v5 = sub_1C2D538(string___TypeInfo, 5);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C211E1 )
  {
    sub_1C2D490(&NetworkManager_TypeInfo);
    byte_4C211E1 = 1;
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
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 32), (int32_t)lookup, v9, v10);
  if ( *(_DWORD *)(v5 + 24) <= 1u )
    goto LABEL_25;
  v12 = StringLiteral_1456/*":"*/;
  *(_QWORD *)(v5 + 40) = StringLiteral_1456/*":"*/;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 40), v12, v9, v11);
  lookup = (__int64 *)System_Int32__ToString((int32_t)&v27, 0);
  if ( *(_DWORD *)(v5 + 24) <= 2u
    || (*(_QWORD *)(v5 + 48) = lookup,
        sub_1C2D434((CGThumbnailListItem_o *)(v5 + 48), (int32_t)lookup, v9, v13),
        *(_DWORD *)(v5 + 24) <= 3u)
    || (v15 = StringLiteral_1456/*":"*/,
        *(_QWORD *)(v5 + 56) = StringLiteral_1456/*":"*/,
        sub_1C2D434((CGThumbnailListItem_o *)(v5 + 56), v15, v9, v14),
        lookup = (__int64 *)System_Int32__ToString((int32_t)&v26, 0),
        *(_DWORD *)(v5 + 24) <= 4u) )
  {
LABEL_25:
    sub_1C2D6F4(lookup, v8, v9);
  }
  *(_QWORD *)(v5 + 64) = lookup;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 64), (int32_t)lookup, v9, v16);
  v17 = System_String__Concat_63498380((System_String_array *)v5, 0);
  lookup = (__int64 *)DataMasterBase_object__object__object___get_lookup(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                        (const MethodInfo_338A644 *)Method_DataMasterBase_UserEventSpotMaster__UserEventSpotEntity__string__get_lookup__);
  if ( !lookup )
LABEL_26:
    sub_1C2D6EC(lookup, v8);
  v18 = *lookup;
  v19 = lookup;
  v20 = *(unsigned __int16 *)(*lookup + 302);
  if ( *(_WORD *)(*lookup + 302) )
  {
    v21 = (System_Collections_Generic_IReadOnlyDictionary_string__UserEventSpotEntity__c **)(*(_QWORD *)(v18 + 176) + 8LL);
    while ( *(v21 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__UserEventSpotEntity__TypeInfo )
    {
      --v20;
      v21 += 2;
      if ( !v20 )
        goto LABEL_20;
    }
    v22 = v18 + 16LL * (*(_DWORD *)v21 + 1) + 312;
  }
  else
  {
LABEL_20:
    v22 = sub_1C7DCA8(lookup, System_Collections_Generic_IReadOnlyDictionary_string__UserEventSpotEntity__TypeInfo, 1);
  }
  if ( ((*(__int64 (__fastcall **)(void *, System_String_o *, UserEventSpotEntity_o **, _QWORD))v22)(
          v19,
          v17,
          &v25,
          *(_QWORD *)(v22 + 8))
      & 1) != 0 )
    return v25;
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

  if ( (byte_4C28123 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_UserEventSpotMaster__UserEventSpotEntity__string__TryGetEntity__);
    byte_4C28123 = 1;
  }
  PK = (Il2CppObject *)UserEventSpotEntity__CreatePK(userId, eventId, spotId, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_338C89C *)Method_DataMasterBase_UserEventSpotMaster__UserEventSpotEntity__string__TryGetEntity__);
}