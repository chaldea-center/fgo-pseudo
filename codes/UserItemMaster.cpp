void __fastcall UserItemMaster___ctor(UserItemMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5BEA9 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_UserItemMaster__UserItemEntity__string___ctor__);
    byte_4A5BEA9 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    36,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_UserItemMaster__UserItemEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserItemEntity_o *__fastcall UserItemMaster__GetEntity(
        UserItemMaster_o *this,
        int64_t userId,
        int32_t itemId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A5BEA7 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_UserItemMaster__UserItemEntity__string__GetEntity__);
    byte_4A5BEA7 = 1;
  }
  PK = (Il2CppObject *)UserItemEntity__CreatePK(userId, itemId, *(const MethodInfo **)&itemId);
  return (UserItemEntity_o *)DataMasterBase_object__object__object___GetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                               PK,
                               (const MethodInfo_311DC8C *)Method_DataMasterBase_UserItemMaster__UserItemEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
UserItemEntity_o *__fastcall UserItemMaster__GetEntityDefinitely(
        UserItemMaster_o *this,
        int64_t userId,
        int32_t itemId,
        const MethodInfo *method)
{
  System_String_o *PK; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *lookup; // x0
  __int64 v9; // x1
  DataMasterBase_TMaster__TEntity__PKType__c *klass; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v11; // x23
  __int64 v12; // x9
  int32_t *p_offset; // x10
  __int64 v14; // x0
  DataMasterBase_TMaster__TEntity__PKType__c *v15; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v16; // x19
  __int64 v17; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v18; // x10
  __int64 v19; // x0
  UserItemEntity_o *v20; // x21
  const MethodInfo *v21; // x3
  UserItemEntity_o *v22; // x0
  __int64 methodPtr_low; // x10
  UserSvtCoinEntity_o *v25; // [xsp+8h] [xbp-48h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4A5BEAB & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_UserSvtCoinMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_1B885B0(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo);
    sub_1B885B0(&UserItemEntity_TypeInfo);
    byte_4A5BEAB = 1;
  }
  entity = 0LL;
  v25 = 0LL;
  PK = UserItemEntity__CreatePK(userId, itemId, *(const MethodInfo **)&itemId);
  lookup = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !lookup )
    goto LABEL_39;
  klass = lookup->klass;
  v11 = lookup;
  v12 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      --v12;
      p_offset += 4;
      if ( !v12 )
        goto LABEL_8;
    }
    v14 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_8:
    v14 = sub_1BDA590(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 0LL);
  }
  if ( ((*(__int64 (__fastcall **)(DataMasterBase_TMaster__TEntity__PKType__o *, System_String_o *, _QWORD))v14)(
          v11,
          PK,
          *(_QWORD *)(v14 + 8)) & 1) == 0 )
  {
    v20 = (UserItemEntity_o *)sub_1B887FC(UserItemEntity_TypeInfo);
    UserItemEntity___ctor_40136616(v20, userId, itemId, v21);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    lookup = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ItemMaster___);
    if ( lookup )
    {
      lookup = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___TryGetEntity(
                                                               lookup,
                                                               &entity,
                                                               itemId,
                                                               (const MethodInfo_311D988 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)lookup & 1) == 0 )
        return v20;
      if ( entity )
      {
        if ( LODWORD(entity[3].klass) != 29 )
          return v20;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        lookup = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserSvtCoinMaster___);
        if ( entity && lookup )
        {
          lookup = (DataMasterBase_TMaster__TEntity__PKType__o *)UserSvtCoinMaster__TryGetEntity(
                                                                   (UserSvtCoinMaster_o *)lookup,
                                                                   &v25,
                                                                   userId,
                                                                   (int32_t)entity[4].klass,
                                                                   0LL);
          if ( ((unsigned __int8)lookup & 1) == 0 )
            return v20;
          if ( v25 && v20 )
          {
            v20->fields.num = v25->fields.num;
            return v20;
          }
        }
      }
    }
LABEL_39:
    sub_1B8880C(lookup, v9);
  }
  lookup = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !lookup )
    goto LABEL_39;
  v15 = lookup->klass;
  v16 = lookup;
  v17 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
  {
    v18 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&v15->_1.interfaceOffsets->offset;
    while ( *(v18 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      --v17;
      v18 += 2;
      if ( !v17 )
        goto LABEL_16;
    }
    v19 = (__int64)(&v15->vtable._2_GetHashCode.method + 2 * *(_DWORD *)v18);
  }
  else
  {
LABEL_16:
    v19 = sub_1BDA590(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 2LL);
  }
  v22 = (UserItemEntity_o *)(*(__int64 (__fastcall **)(DataMasterBase_TMaster__TEntity__PKType__o *, System_String_o *, _QWORD))v19)(
                              v16,
                              PK,
                              *(_QWORD *)(v19 + 8));
  if ( !v22 )
    return 0LL;
  methodPtr_low = LOBYTE(UserItemEntity_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(v22->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
    return 0LL;
  if ( (UserItemEntity_c *)v22->klass->_2.typeHierarchy[methodPtr_low - 1] == UserItemEntity_TypeInfo )
    return v22;
  return 0LL;
}


int32_t __fastcall UserItemMaster__GetUserStoneFragmentNum(UserItemMaster_o *this, const MethodInfo *method)
{
  int64_t UserId; // x20
  _DWORD *Master_object; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x3

  if ( (byte_4A5BEAE & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5BEAE = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  UserId = NetworkManager__get_UserId(0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !Master_object
    || (Master_object = UserItemMaster__GetEntityDefinitely(this, UserId, Master_object[22], v6)) == 0LL )
  {
    sub_1B8880C(Master_object, v5);
  }
  return Master_object[7];
}


bool __fastcall UserItemMaster__TryGetEntity(
        UserItemMaster_o *this,
        UserItemEntity_o **entity,
        int64_t userId,
        int32_t itemId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4A5BEA8 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_UserItemMaster__UserItemEntity__string__TryGetEntity__);
    byte_4A5BEA8 = 1;
  }
  PK = (Il2CppObject *)UserItemEntity__CreatePK(userId, itemId, (const MethodInfo *)userId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_UserItemMaster__UserItemEntity__string__TryGetEntity__);
}


UserItemEntity_array *__fastcall UserItemMaster__getList(UserItemMaster_o *this, const MethodInfo *method)
{
  int64_t UserId; // x1
  const MethodInfo *v4; // x2

  if ( (byte_4A5BEAA & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5BEAA = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  UserId = NetworkManager__get_UserId(0LL);
  return UserItemMaster__getList_40137256(this, UserId, v4);
}


UserItemEntity_array *__fastcall UserItemMaster__getList_40137256(
        UserItemMaster_o *this,
        int64_t userId,
        const MethodInfo *method)
{
  int64_t v3; // x19
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w21
  System_Collections_Generic_List_object__o *v7; // x22
  int32_t v8; // w23
  int32_t v9; // w2
  int32_t v10; // w3
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  Il2CppClass **v15; // x0

  v3 = userId;
  if ( (byte_4A5BEAD & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserItemEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserItemEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserItemEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_UserItemEntity__TypeInfo);
    sub_1B885B0(&UserItemEntity_TypeInfo);
    byte_4A5BEAD = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_19;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v7 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_UserItemEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_UserItemEntity___ctor__);
  if ( Count >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v8,
                                                                 (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        userId = (int64_t)list;
        methodPtr_low = LOBYTE(UserItemEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (UserItemEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == UserItemEntity_TypeInfo
          && list->fields.items == (struct System_Collections_Generic_IList_T__o *)v3 )
        {
          if ( !v7 )
            break;
          items = v7->fields._items;
          v13 = Method_System_Collections_Generic_List_UserItemEntity__Add__;
          ++v7->fields._version;
          if ( !items )
            break;
          size = v7->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v7,
              (Il2CppObject *)list,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
          }
          else
          {
            v15 = &items->obj.klass + size;
            v7->fields._size = size + 1;
            v15[4] = (Il2CppClass *)userId;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v15 + 4), userId, v9, v10);
          }
        }
      }
      if ( Count == ++v8 )
        goto LABEL_17;
    }
LABEL_19:
    sub_1B8880C(list, userId);
  }
LABEL_17:
  if ( !v7 )
    goto LABEL_19;
  return (UserItemEntity_array *)System_Collections_Generic_List_object___ToArray(
                                   v7,
                                   (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_UserItemEntity__ToArray__);
}


int32_t __fastcall UserItemMaster__getSum(UserItemMaster_o *this, int64_t userId, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v7; // w22
  int32_t v8; // w21
  int32_t v9; // w23
  Il2CppObject *Item; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4A5BEAC & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&UserItemEntity_TypeInfo);
    byte_4A5BEAC = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_16;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v7 = Count;
    v8 = 0;
    v9 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               list,
               v9,
               (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        methodPtr_low = LOBYTE(UserItemEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
          && (UserItemEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == UserItemEntity_TypeInfo
          && Item[1].klass == (Il2CppClass *)userId )
        {
          ++v8;
        }
      }
      if ( v7 == ++v9 )
        return v8;
    }
LABEL_16:
    sub_1B8880C(list, userId);
  }
  return 0;
}