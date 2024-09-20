void __fastcall UserEventSpotMaster___ctor(UserEventSpotMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5BE2B & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_UserEventSpotMaster__UserEventSpotEntity__string___ctor__);
    byte_4A5BE2B = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    351,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_UserEventSpotMaster__UserEventSpotEntity__string___ctor__);
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

  if ( (byte_4A5BE29 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_UserEventSpotMaster__UserEventSpotEntity__string__GetEntity__);
    byte_4A5BE29 = 1;
  }
  PK = (Il2CppObject *)UserEventSpotEntity__CreatePK(userId, eventId, spotId, *(const MethodInfo **)&spotId);
  return (UserEventSpotEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                    PK,
                                    (const MethodInfo_311DC8C *)Method_DataMasterBase_UserEventSpotMaster__UserEventSpotEntity__string__GetEntity__);
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
  int64_t v10; // x24
  __int64 methodPtr_low; // x10
  __int64 v12; // x29
  int32_t v13; // w2
  int32_t v14; // w3
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0

  if ( (byte_4A5BE2D & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserEventSpotEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserEventSpotEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserEventSpotEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_UserEventSpotEntity__TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&UserEventSpotEntity_TypeInfo);
    byte_4A5BE2D = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_UserEventSpotEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_UserEventSpotEntity___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_22;
  list = System_Collections_ObjectModel_Collection_object___get_Count(
           (System_Collections_ObjectModel_Collection_T__o *)list,
           (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
                        (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v10 = list;
        methodPtr_low = LOBYTE(UserEventSpotEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) >= (unsigned int)methodPtr_low
          && *(UserEventSpotEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) == UserEventSpotEntity_TypeInfo )
        {
          v12 = *(_QWORD *)(list + 16);
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          list = NetworkManager__get_UserId(0LL);
          if ( v12 == list && *(_DWORD *)(v10 + 24) == eventId )
          {
            if ( !v5 )
              break;
            items = v5->fields._items;
            v16 = Method_System_Collections_Generic_List_UserEventSpotEntity__Add__;
            ++v5->fields._version;
            if ( !items )
              break;
            size = v5->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v5,
                (Il2CppObject *)v10,
                *(const MethodInfo_34FD834 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
            }
            else
            {
              v18 = &items->obj.klass + size;
              v5->fields._size = size + 1;
              v18[4] = (Il2CppClass *)v10;
              sub_1B88554((ServantStatusBattleListViewItem_o *)(v18 + 4), v10, v13, v14);
            }
          }
        }
      }
      if ( v8 == ++v9 )
        goto LABEL_20;
    }
LABEL_22:
    sub_1B8880C(list, v6);
  }
LABEL_20:
  if ( !v5 )
    goto LABEL_22;
  return (UserEventSpotEntity_array *)System_Collections_Generic_List_object___ToArray(
                                        v5,
                                        (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_UserEventSpotEntity__ToArray__);
}


UserEventSpotEntity_o *__fastcall UserEventSpotMaster__GetEntity_40111856(
        UserEventSpotMaster_o *this,
        int32_t eventId,
        int32_t spotId,
        const MethodInfo *method)
{
  __int64 v5; // x20
  __int64 *lookup; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  int32_t v10; // w2
  int32_t v11; // w3
  int32_t v12; // w1
  int32_t v13; // w2
  int32_t v14; // w3
  int32_t v15; // w2
  int32_t v16; // w3
  int32_t v17; // w1
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x20
  __int64 v21; // x8
  void *v22; // x19
  __int64 v23; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v24; // x10
  __int64 v25; // x0
  __int64 methodPtr_low; // x11
  int64_t UserId; // [xsp+0h] [xbp-40h] BYREF
  UserEventSpotEntity_o *v29; // [xsp+8h] [xbp-38h] BYREF
  int32_t v30; // [xsp+18h] [xbp-28h] BYREF
  int32_t v31; // [xsp+1Ch] [xbp-24h] BYREF

  v30 = spotId;
  v31 = eventId;
  if ( (byte_4A5BE2C & 1) == 0 )
  {
    sub_1B885B0(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&string___TypeInfo);
    sub_1B885B0(&UserEventSpotEntity_TypeInfo);
    sub_1B885B0(&StringLiteral_1544/*":"*/);
    byte_4A5BE2C = 1;
  }
  v29 = 0LL;
  v5 = sub_1B88658(string___TypeInfo, 5LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  UserId = NetworkManager__get_UserId(0LL);
  lookup = (__int64 *)System_Int64__ToString((int64_t)&UserId, 0LL);
  if ( !v5 )
    goto LABEL_26;
  if ( !*(_DWORD *)(v5 + 24) )
    goto LABEL_25;
  *(_QWORD *)(v5 + 32) = lookup;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 32), (int32_t)lookup, v8, v9);
  if ( *(_DWORD *)(v5 + 24) <= 1u )
    goto LABEL_25;
  v12 = StringLiteral_1544/*":"*/;
  *(_QWORD *)(v5 + 40) = StringLiteral_1544/*":"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 40), v12, v10, v11);
  lookup = (__int64 *)System_Int32__ToString((int32_t)&v31, 0LL);
  if ( *(_DWORD *)(v5 + 24) <= 2u
    || (*(_QWORD *)(v5 + 48) = lookup,
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 48), (int32_t)lookup, v13, v14),
        *(_DWORD *)(v5 + 24) <= 3u)
    || (v17 = StringLiteral_1544/*":"*/,
        *(_QWORD *)(v5 + 56) = StringLiteral_1544/*":"*/,
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 56), v17, v15, v16),
        lookup = (__int64 *)System_Int32__ToString((int32_t)&v30, 0LL),
        *(_DWORD *)(v5 + 24) <= 4u) )
  {
LABEL_25:
    sub_1B88814(lookup, v7);
  }
  *(_QWORD *)(v5 + 64) = lookup;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 64), (int32_t)lookup, v18, v19);
  v20 = System_String__Concat_61720560((System_String_array *)v5, 0LL);
  lookup = (__int64 *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !lookup )
LABEL_26:
    sub_1B8880C(lookup, v7);
  v21 = *lookup;
  v22 = lookup;
  v23 = *(unsigned __int16 *)(*lookup + 302);
  if ( *(_WORD *)(*lookup + 302) )
  {
    v24 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)(*(_QWORD *)(v21 + 176) + 8LL);
    while ( *(v24 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      --v23;
      v24 += 2;
      if ( !v23 )
        goto LABEL_16;
    }
    v25 = v21 + 16LL * (*(_DWORD *)v24 + 1) + 312;
  }
  else
  {
LABEL_16:
    v25 = sub_1BDA590(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 1LL);
  }
  if ( ((*(__int64 (__fastcall **)(void *, System_String_o *, UserEventSpotEntity_o **, _QWORD))v25)(
          v22,
          v20,
          &v29,
          *(_QWORD *)(v25 + 8)) & 1) == 0 )
    return 0LL;
  if ( !v29 )
    return 0LL;
  methodPtr_low = LOBYTE(UserEventSpotEntity_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(v29->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
    return 0LL;
  if ( (UserEventSpotEntity_c *)v29->klass->_2.typeHierarchy[methodPtr_low - 1] == UserEventSpotEntity_TypeInfo )
    return v29;
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

  if ( (byte_4A5BE2A & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_UserEventSpotMaster__UserEventSpotEntity__string__TryGetEntity__);
    byte_4A5BE2A = 1;
  }
  PK = (Il2CppObject *)UserEventSpotEntity__CreatePK(userId, eventId, spotId, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_UserEventSpotMaster__UserEventSpotEntity__string__TryGetEntity__);
}