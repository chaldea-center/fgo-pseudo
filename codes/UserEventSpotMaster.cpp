void __fastcall UserEventSpotMaster___ctor(UserEventSpotMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BC87DA & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataMasterBase_UserEventSpotMaster__UserEventSpotEntity__string___ctor__, method);
    byte_4BC87DA = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    355,
    (const MethodInfo_324AE0C *)Method_DataMasterBase_UserEventSpotMaster__UserEventSpotEntity__string___ctor__);
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

  if ( (byte_4BC87D8 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataMasterBase_UserEventSpotMaster__UserEventSpotEntity__string__GetEntity__, userId);
    byte_4BC87D8 = 1;
  }
  PK = (Il2CppObject *)UserEventSpotEntity__CreatePK(userId, eventId, spotId, *(const MethodInfo **)&spotId);
  return (UserEventSpotEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                    PK,
                                    (const MethodInfo_324D130 *)Method_DataMasterBase_UserEventSpotMaster__UserEventSpotEntity__string__GetEntity__);
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
  int64_t list; // x0
  int v14; // w22
  int32_t v15; // w23
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  int64_t v22; // x25
  System_Collections_Generic_IList_T__c *v23; // x27
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  Il2CppClass **v27; // x0

  if ( (byte_4BC87DC & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_ObjectModel_Collection_UserEventSpotEntity__get_Count__, *(_QWORD *)&eventId);
    sub_1C1ABD4(&Method_System_Collections_ObjectModel_Collection_UserEventSpotEntity__get_Item__, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_UserEventSpotEntity__Add__, v6);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_UserEventSpotEntity__ToArray__, v7);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_UserEventSpotEntity___ctor__, v8);
    sub_1C1ABD4(&System_Collections_Generic_List_UserEventSpotEntity__TypeInfo, v9);
    sub_1C1ABD4(&NetworkManager_TypeInfo, v10);
    byte_4BC87DC = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_UserEventSpotEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_UserEventSpotEntity___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_24;
  list = System_Collections_ObjectModel_Collection_object___get_Count(
           (System_Collections_ObjectModel_Collection_T__o *)list,
           (const MethodInfo_31E297C *)Method_System_Collections_ObjectModel_Collection_UserEventSpotEntity__get_Count__);
  if ( (int)list >= 1 )
  {
    v14 = list;
    v15 = 0;
    while ( 1 )
    {
      list = (int64_t)this->fields.list;
      if ( !list )
        break;
      list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)list,
                        v15,
                        (const MethodInfo_31E2A0C *)Method_System_Collections_ObjectModel_Collection_UserEventSpotEntity__get_Item__);
      if ( list )
      {
        v22 = list;
        v23 = *(System_Collections_Generic_IList_T__c **)(list + 16);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4BC2585 )
        {
          sub_1C1ABD4(&NetworkManager_TypeInfo, v12);
          byte_4BC2585 = 1;
        }
        list = (int64_t)NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          list = (int64_t)NetworkManager_TypeInfo;
        }
        if ( v23 == *(System_Collections_Generic_IList_T__c **)(*(_QWORD *)(list + 184) + 64LL)
          && *(_DWORD *)(v22 + 24) == eventId )
        {
          if ( !v11 )
            break;
          items = v11->fields._items;
          v25 = Method_System_Collections_Generic_List_UserEventSpotEntity__Add__;
          ++v11->fields._version;
          if ( !items )
            break;
          size = v11->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v11,
              (Il2CppObject *)v22,
              *(const MethodInfo_363C890 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
          }
          else
          {
            v27 = &items->obj.klass + size;
            v11->fields._size = size + 1;
            v27[4] = (Il2CppClass *)v22;
            sub_1C1AB78((PartyOrganizationUtility_o *)(v27 + 4), v22, v16, v17, v18, v19, v20, v21);
          }
        }
      }
      if ( v14 == ++v15 )
        goto LABEL_22;
    }
LABEL_24:
    sub_1C1AE30(list, v12);
  }
LABEL_22:
  if ( !v11 )
    goto LABEL_24;
  return (UserEventSpotEntity_array *)System_Collections_Generic_List_object___ToArray(
                                        v11,
                                        (const MethodInfo_363E3E8 *)Method_System_Collections_Generic_List_UserEventSpotEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
UserEventSpotEntity_o *__fastcall UserEventSpotMaster__GetEntity_41329416(
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
  System_Collections_Generic_IReadOnlyDictionary_string__UserEventSpotEntity__c **v50; // x10
  __int64 v51; // x0
  int64_t userIdNumber; // [xsp+0h] [xbp-40h] BYREF
  UserEventSpotEntity_o *v54; // [xsp+8h] [xbp-38h] BYREF
  int32_t v55; // [xsp+18h] [xbp-28h] BYREF
  int32_t v56; // [xsp+1Ch] [xbp-24h] BYREF

  v55 = spotId;
  v56 = eventId;
  if ( (byte_4BC87DB & 1) == 0 )
  {
    sub_1C1ABD4(
      &Method_DataMasterBase_UserEventSpotMaster__UserEventSpotEntity__string__get_lookup__,
      *(_QWORD *)&eventId);
    sub_1C1ABD4(&System_Collections_Generic_IReadOnlyDictionary_string__UserEventSpotEntity__TypeInfo, v5);
    sub_1C1ABD4(&NetworkManager_TypeInfo, v6);
    sub_1C1ABD4(&string___TypeInfo, v7);
    sub_1C1ABD4(&StringLiteral_1546/*":"*/, v8);
    byte_4BC87DB = 1;
  }
  v54 = 0LL;
  v10 = sub_1C1AC7C(string___TypeInfo, 5LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4BC2585 )
  {
    sub_1C1ABD4(&NetworkManager_TypeInfo, v9);
    byte_4BC2585 = 1;
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
  sub_1C1AB78((PartyOrganizationUtility_o *)(v10 + 32), (int64_t)lookup, v14, v15, v16, v17, v18, v19);
  if ( *(_DWORD *)(v10 + 24) <= 1u )
    goto LABEL_25;
  v26 = StringLiteral_1546/*":"*/;
  *(_QWORD *)(v10 + 40) = StringLiteral_1546/*":"*/;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v10 + 40), v26, v20, v21, v22, v23, v24, v25);
  lookup = (__int64 *)System_Int32__ToString((int32_t)&v56, 0LL);
  if ( *(_DWORD *)(v10 + 24) <= 2u
    || (*(_QWORD *)(v10 + 48) = lookup,
        sub_1C1AB78((PartyOrganizationUtility_o *)(v10 + 48), (int64_t)lookup, v27, v28, v29, v30, v31, v32),
        *(_DWORD *)(v10 + 24) <= 3u)
    || (v39 = StringLiteral_1546/*":"*/,
        *(_QWORD *)(v10 + 56) = StringLiteral_1546/*":"*/,
        sub_1C1AB78((PartyOrganizationUtility_o *)(v10 + 56), v39, v33, v34, v35, v36, v37, v38),
        lookup = (__int64 *)System_Int32__ToString((int32_t)&v55, 0LL),
        *(_DWORD *)(v10 + 24) <= 4u) )
  {
LABEL_25:
    sub_1C1AE38(lookup, v13);
  }
  *(_QWORD *)(v10 + 64) = lookup;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v10 + 64), (int64_t)lookup, v40, v41, v42, v43, v44, v45);
  v46 = System_String__Concat_63053896((System_String_array *)v10, 0LL);
  lookup = (__int64 *)DataMasterBase_object__object__object___get_lookup(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                        (const MethodInfo_324AF24 *)Method_DataMasterBase_UserEventSpotMaster__UserEventSpotEntity__string__get_lookup__);
  if ( !lookup )
LABEL_26:
    sub_1C1AE30(lookup, v13);
  v47 = *lookup;
  v48 = lookup;
  v49 = *(unsigned __int16 *)(*lookup + 302);
  if ( *(_WORD *)(*lookup + 302) )
  {
    v50 = (System_Collections_Generic_IReadOnlyDictionary_string__UserEventSpotEntity__c **)(*(_QWORD *)(v47 + 176) + 8LL);
    while ( *(v50 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__UserEventSpotEntity__TypeInfo )
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
    v51 = sub_1C6CBB4(lookup, System_Collections_Generic_IReadOnlyDictionary_string__UserEventSpotEntity__TypeInfo, 1LL);
  }
  if ( ((*(__int64 (__fastcall **)(void *, System_String_o *, UserEventSpotEntity_o **, _QWORD))v51)(
          v48,
          v46,
          &v54,
          *(_QWORD *)(v51 + 8)) & 1) != 0 )
    return v54;
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

  if ( (byte_4BC87D9 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataMasterBase_UserEventSpotMaster__UserEventSpotEntity__string__TryGetEntity__, entity);
    byte_4BC87D9 = 1;
  }
  PK = (Il2CppObject *)UserEventSpotEntity__CreatePK(userId, eventId, spotId, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_324D17C *)Method_DataMasterBase_UserEventSpotMaster__UserEventSpotEntity__string__TryGetEntity__);
}