void __fastcall UserEventSpotMaster___ctor(UserEventSpotMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16EE0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_UserEventSpotMaster__UserEventSpotEntity__string___ctor__, method, v2);
    byte_4B16EE0 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    351,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_UserEventSpotMaster__UserEventSpotEntity__string___ctor__);
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

  if ( (byte_4B16EDE & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_UserEventSpotMaster__UserEventSpotEntity__string__GetEntity__,
      userId,
      *(_QWORD *)&eventId);
    byte_4B16EDE = 1;
  }
  PK = (Il2CppObject *)UserEventSpotEntity__CreatePK(userId, eventId, spotId, *(const MethodInfo **)&spotId);
  return (UserEventSpotEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                    PK,
                                    (const MethodInfo_31B3198 *)Method_DataMasterBase_UserEventSpotMaster__UserEventSpotEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
UserEventSpotEntity_array *__fastcall UserEventSpotMaster__GetEntityList(
        UserEventSpotMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  System_Collections_Generic_List_object__o *v20; // x21
  __int64 v21; // x1
  int64_t list; // x0
  int v23; // w22
  int32_t v24; // w23
  int64_t v25; // x24
  __int64 methodPtr_low; // x10
  __int64 v27; // x29
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  struct System_Object_array *items; // x8
  _QWORD *v35; // x9
  __int64 size; // x10
  Il2CppClass **v37; // x0

  if ( (byte_4B16EE2 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&eventId,
      method);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserEventSpotEntity__Add__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserEventSpotEntity__ToArray__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserEventSpotEntity___ctor__, v12, v13);
    sub_1BCA7E0(&System_Collections_Generic_List_UserEventSpotEntity__TypeInfo, v14, v15);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v16, v17);
    sub_1BCA7E0(&UserEventSpotEntity_TypeInfo, v18, v19);
    byte_4B16EE2 = 1;
  }
  v20 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_UserEventSpotEntity__TypeInfo,
                                                       *(_QWORD *)&eventId,
                                                       method,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_UserEventSpotEntity___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_22;
  list = System_Collections_ObjectModel_Collection_object___get_Count(
           (System_Collections_ObjectModel_Collection_T__o *)list,
           (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v23 = list;
    v24 = 0;
    while ( 1 )
    {
      list = (int64_t)this->fields.list;
      if ( !list )
        break;
      list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)list,
                        v24,
                        (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v25 = list;
        methodPtr_low = LOBYTE(UserEventSpotEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) >= (unsigned int)methodPtr_low
          && *(UserEventSpotEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) == UserEventSpotEntity_TypeInfo )
        {
          v27 = *(_QWORD *)(list + 16);
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v21);
          list = NetworkManager__get_UserId(0LL);
          if ( v27 == list && *(_DWORD *)(v25 + 24) == eventId )
          {
            if ( !v20 )
              break;
            items = v20->fields._items;
            v35 = Method_System_Collections_Generic_List_UserEventSpotEntity__Add__;
            ++v20->fields._version;
            if ( !items )
              break;
            size = v20->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v20,
                (Il2CppObject *)v25,
                *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
            }
            else
            {
              v37 = &items->obj.klass + size;
              v20->fields._size = size + 1;
              v37[4] = (Il2CppClass *)v25;
              sub_1BCA784((PartyOrganizationUtility_o *)(v37 + 4), v25, v28, v29, v30, v31, v32, v33);
            }
          }
        }
      }
      if ( v23 == ++v24 )
        goto LABEL_20;
    }
LABEL_22:
    sub_1BCAA3C(list, v21);
  }
LABEL_20:
  if ( !v20 )
    goto LABEL_22;
  return (UserEventSpotEntity_array *)System_Collections_Generic_List_object___ToArray(
                                        v20,
                                        (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_UserEventSpotEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
UserEventSpotEntity_o *__fastcall UserEventSpotMaster__GetEntity_40841644(
        UserEventSpotMaster_o *this,
        int32_t eventId,
        int32_t spotId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x20
  __int64 *lookup; // x0
  __int64 v16; // x1
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  int64_t v29; // x1
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  int64_t v42; // x1
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  System_String_o *v49; // x20
  __int64 v50; // x8
  void *v51; // x19
  __int64 v52; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v53; // x10
  __int64 v54; // x0
  __int64 methodPtr_low; // x11
  int64_t UserId; // [xsp+0h] [xbp-40h] BYREF
  UserEventSpotEntity_o *v58; // [xsp+8h] [xbp-38h] BYREF
  int32_t v59; // [xsp+18h] [xbp-28h] BYREF
  int32_t v60; // [xsp+1Ch] [xbp-24h] BYREF

  v59 = spotId;
  v60 = eventId;
  if ( (byte_4B16EE1 & 1) == 0 )
  {
    sub_1BCA7E0(
      &System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
      *(_QWORD *)&eventId,
      *(_QWORD *)&spotId);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&string___TypeInfo, v7, v8);
    sub_1BCA7E0(&UserEventSpotEntity_TypeInfo, v9, v10);
    sub_1BCA7E0(&StringLiteral_1541/*":"*/, v11, v12);
    byte_4B16EE1 = 1;
  }
  v58 = 0LL;
  v14 = sub_1BCA888(string___TypeInfo, 5LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v13);
  UserId = NetworkManager__get_UserId(0LL);
  lookup = (__int64 *)System_Int64__ToString((int64_t)&UserId, 0LL);
  if ( !v14 )
    goto LABEL_26;
  if ( !*(_DWORD *)(v14 + 24) )
    goto LABEL_25;
  *(_QWORD *)(v14 + 32) = lookup;
  sub_1BCA784((PartyOrganizationUtility_o *)(v14 + 32), (int64_t)lookup, v17, v18, v19, v20, v21, v22);
  if ( *(_DWORD *)(v14 + 24) <= 1u )
    goto LABEL_25;
  v29 = StringLiteral_1541/*":"*/;
  *(_QWORD *)(v14 + 40) = StringLiteral_1541/*":"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v14 + 40), v29, v23, v24, v25, v26, v27, v28);
  lookup = (__int64 *)System_Int32__ToString((int32_t)&v60, 0LL);
  if ( *(_DWORD *)(v14 + 24) <= 2u
    || (*(_QWORD *)(v14 + 48) = lookup,
        sub_1BCA784((PartyOrganizationUtility_o *)(v14 + 48), (int64_t)lookup, v30, v31, v32, v33, v34, v35),
        *(_DWORD *)(v14 + 24) <= 3u)
    || (v42 = StringLiteral_1541/*":"*/,
        *(_QWORD *)(v14 + 56) = StringLiteral_1541/*":"*/,
        sub_1BCA784((PartyOrganizationUtility_o *)(v14 + 56), v42, v36, v37, v38, v39, v40, v41),
        lookup = (__int64 *)System_Int32__ToString((int32_t)&v59, 0LL),
        *(_DWORD *)(v14 + 24) <= 4u) )
  {
LABEL_25:
    sub_1BCAA44(lookup, v16);
  }
  *(_QWORD *)(v14 + 64) = lookup;
  sub_1BCA784((PartyOrganizationUtility_o *)(v14 + 64), (int64_t)lookup, v43, v44, v45, v46, v47, v48);
  v49 = System_String__Concat_62414748((System_String_array *)v14, 0LL);
  lookup = (__int64 *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !lookup )
LABEL_26:
    sub_1BCAA3C(lookup, v16);
  v50 = *lookup;
  v51 = lookup;
  v52 = *(unsigned __int16 *)(*lookup + 302);
  if ( *(_WORD *)(*lookup + 302) )
  {
    v53 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)(*(_QWORD *)(v50 + 176) + 8LL);
    while ( *(v53 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      --v52;
      v53 += 2;
      if ( !v52 )
        goto LABEL_16;
    }
    v54 = v50 + 16LL * (*(_DWORD *)v53 + 1) + 312;
  }
  else
  {
LABEL_16:
    v54 = sub_1C1C7C0(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 1LL);
  }
  if ( ((*(__int64 (__fastcall **)(void *, System_String_o *, UserEventSpotEntity_o **, _QWORD))v54)(
          v51,
          v49,
          &v58,
          *(_QWORD *)(v54 + 8)) & 1) == 0 )
    return 0LL;
  if ( !v58 )
    return 0LL;
  methodPtr_low = LOBYTE(UserEventSpotEntity_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(v58->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
    return 0LL;
  if ( (UserEventSpotEntity_c *)v58->klass->_2.typeHierarchy[methodPtr_low - 1] == UserEventSpotEntity_TypeInfo )
    return v58;
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

  if ( (byte_4B16EDF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_UserEventSpotMaster__UserEventSpotEntity__string__TryGetEntity__, entity, userId);
    byte_4B16EDF = 1;
  }
  PK = (Il2CppObject *)UserEventSpotEntity__CreatePK(userId, eventId, spotId, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31B31E8 *)Method_DataMasterBase_UserEventSpotMaster__UserEventSpotEntity__string__TryGetEntity__);
}