void __fastcall UserServantCollectionMaster___ctor(UserServantCollectionMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  Il2CppObject *v7; // x20
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4B16FF5 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_UserServantCollectionMaster__UserServantCollectionEntity__string___ctor__,
      method,
      v2);
    sub_1BCA7E0(&UserServantCollectionMaster_UserServantCollectionEntityDataCache_TypeInfo, v5, v6);
    byte_4B16FF5 = 1;
  }
  v7 = (Il2CppObject *)sub_1BCAA2C(
                         UserServantCollectionMaster_UserServantCollectionEntityDataCache_TypeInfo,
                         method,
                         v2,
                         v3);
  System_Object___ctor(v7, 0LL);
  this->fields.cachedUserServantCollectionEntityData = (struct UserServantCollectionMaster_UserServantCollectionEntityDataCache_o *)v7;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.cachedUserServantCollectionEntityData,
    (int64_t)v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    30,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_UserServantCollectionMaster__UserServantCollectionEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserServantCollectionEntity_o *__fastcall UserServantCollectionMaster__GetEntity(
        UserServantCollectionMaster_o *this,
        int64_t userId,
        int32_t svtId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B16FF3 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_UserServantCollectionMaster__UserServantCollectionEntity__string__GetEntity__,
      userId,
      *(_QWORD *)&svtId);
    byte_4B16FF3 = 1;
  }
  PK = (Il2CppObject *)UserServantCollectionEntity__CreatePK(userId, svtId, *(const MethodInfo **)&svtId);
  return (UserServantCollectionEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                            PK,
                                            (const MethodInfo_31B3198 *)Method_DataMasterBase_UserServantCollectionMaster__UserServantCollectionEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
UserServantCollectionEntity_o *__fastcall UserServantCollectionMaster__GetEntityDefinitely(
        UserServantCollectionMaster_o *this,
        int64_t userId,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  System_String_o *PK; // x19
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *lookup; // x0
  __int64 v11; // x1
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *klass; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v13; // x23
  __int64 v14; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *v20; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v21; // x20
  __int64 v22; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v23; // x10
  __int64 v24; // x0
  UserServantCollectionEntity_o *v25; // x19
  const MethodInfo *v26; // x3
  UserServantCollectionEntity_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4B16FF6 & 1) == 0 )
  {
    sub_1BCA7E0(
      &System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
      userId,
      *(_QWORD *)&svtId);
    sub_1BCA7E0(&UserServantCollectionEntity_TypeInfo, v7, v8);
    byte_4B16FF6 = 1;
  }
  PK = UserServantCollectionEntity__CreatePK(userId, svtId, *(const MethodInfo **)&svtId);
  lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !lookup )
    goto LABEL_25;
  klass = lookup->klass;
  v13 = lookup;
  v14 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      --v14;
      p_offset += 4;
      if ( !v14 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1C1C7C0(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 0LL);
  }
  if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, _QWORD))p_method)(
          v13,
          PK,
          *(_QWORD *)(p_method + 8)) & 1) == 0 )
  {
    v25 = (UserServantCollectionEntity_o *)sub_1BCAA2C(UserServantCollectionEntity_TypeInfo, v17, v18, v19);
    UserServantCollectionEntity___ctor_40897688(v25, userId, svtId, v26);
    return v25;
  }
  lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !lookup )
LABEL_25:
    sub_1BCAA3C(lookup, v11);
  v20 = lookup->klass;
  v21 = lookup;
  v22 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
  {
    v23 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&v20->_1.interfaceOffsets->offset;
    while ( *(v23 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      --v22;
      v23 += 2;
      if ( !v22 )
        goto LABEL_16;
    }
    v24 = (__int64)&v20->vtable[*(_DWORD *)v23 + 2].method;
  }
  else
  {
LABEL_16:
    v24 = sub_1C1C7C0(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 2LL);
  }
  result = (UserServantCollectionEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, _QWORD))v24)(
                                              v21,
                                              PK,
                                              *(_QWORD *)(v24 + 8));
  if ( result )
  {
    methodPtr_low = LOBYTE(UserServantCollectionEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
    {
      if ( (UserServantCollectionEntity_c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] != UserServantCollectionEntity_TypeInfo )
        return 0LL;
    }
    else
    {
      return 0LL;
    }
  }
  return result;
}


System_Int32_array *__fastcall UserServantCollectionMaster__GetNewList(
        UserServantCollectionMaster_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  System_Collections_Generic_List_int__o *v19; // x20
  const MethodInfo *v20; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int v22; // w21
  int32_t v23; // w22
  System_Collections_ObjectModel_Collection_T__o *v24; // x23
  __int64 methodPtr_low; // x10
  void *monitor; // x23
  System_Collections_ObjectModel_Collection_T__c *klass; // x24
  struct System_Int32_array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v32; // 0:x0.16

  if ( (byte_4B16FFB & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__ToArray__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v11, v12);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v13, v14);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15, v16);
    sub_1BCA7E0(&UserServantCollectionEntity_TypeInfo, v17, v18);
    byte_4B16FFB = 1;
  }
  v19 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    method,
                                                    v2,
                                                    v3);
  System_Collections_Generic_List_int____ctor(
    v19,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_21;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v22 = (int)list;
    v23 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v23,
                                                                 (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v24 = list;
        methodPtr_low = LOBYTE(UserServantCollectionEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (UserServantCollectionEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == UserServantCollectionEntity_TypeInfo )
        {
          list = (System_Collections_ObjectModel_Collection_T__o *)UserServantCollectionEntity__IsNew(
                                                                     (UserServantCollectionEntity_o *)list,
                                                                     v20);
          if ( ((unsigned __int8)list & 1) != 0 )
          {
            klass = v24[1].klass;
            monitor = v24[1].monitor;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v20);
            *(_QWORD *)&v32.fields.currentCryptoKey = klass;
            *(_QWORD *)&v32.fields.fakeValue = monitor;
            list = (System_Collections_ObjectModel_Collection_T__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                                                       v32,
                                                                       0LL);
            if ( !v19 )
              break;
            items = v19->fields._items;
            v29 = Method_System_Collections_Generic_List_int__Add__;
            ++v19->fields._version;
            if ( !items )
              break;
            size = v19->fields._size;
            v20 = (const MethodInfo *)(unsigned int)list;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v19,
                (int32_t)list,
                *(const MethodInfo_3584C38 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
            }
            else
            {
              v19->fields._size = size + 1;
              items->m_Items[size + 1] = (int)list;
            }
          }
        }
      }
      if ( v22 == ++v23 )
        goto LABEL_19;
    }
LABEL_21:
    sub_1BCAA3C(list, v20);
  }
LABEL_19:
  if ( !v19 )
    goto LABEL_21;
  return System_Collections_Generic_List_int___ToArray(
           v19,
           (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UserServantCollectionMaster__IsCostumeAlreadyGet(
        UserServantCollectionMaster_o *this,
        int32_t svtId,
        int32_t costumeId,
        const MethodInfo *method)
{
  int64_t UserId; // x0
  const MethodInfo *v8; // x3
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  __int64 v10; // x1
  struct System_Int32_array *costumeIds; // x8
  __int64 v12; // x9
  bool v13; // vf
  int v14; // w9
  int v15; // w10
  int32_t v16; // w11
  bool result; // w0

  if ( (byte_4B16FFE & 1) == 0 )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, *(_QWORD *)&svtId, *(_QWORD *)&costumeId);
    byte_4B16FFE = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&svtId);
  UserId = NetworkManager__get_UserId(0LL);
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(this, UserId, svtId, v8);
  if ( !EntityDefinitely )
    sub_1BCAA3C(0LL, v10);
  costumeIds = EntityDefinitely->fields.costumeIds;
  if ( !costumeIds )
    return 0;
  v12 = *(_QWORD *)&costumeIds->max_length;
  if ( !v12 )
    return 0;
  v13 = __OFSUB__((_DWORD)v12, 1);
  v14 = v12 - 1;
  if ( v14 < 0 != v13 )
    return 0;
  v15 = 0;
  do
  {
    v16 = costumeIds->m_Items[v15 + 1];
    result = v16 == costumeId;
    if ( v16 == costumeId )
      break;
  }
  while ( v14 != v15++ );
  return result;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UserServantCollectionMaster__IsGet(
        UserServantCollectionMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  int64_t UserId; // x0
  const MethodInfo *v6; // x4
  _BOOL8 v7; // x0
  __int64 v8; // x1
  UserServantCollectionEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B17000 & 1) == 0 )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, *(_QWORD *)&svtId, method);
    byte_4B17000 = 1;
  }
  entity = 0LL;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&svtId);
  UserId = NetworkManager__get_UserId(0LL);
  v7 = UserServantCollectionMaster__TryGetEntity(this, &entity, UserId, svtId, v6);
  if ( !v7 )
    return 0;
  if ( !entity )
    sub_1BCAA3C(v7, v8);
  return entity->fields.status == 2;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UserServantCollectionMaster__IsNew(
        UserServantCollectionMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v13; // w21
  int32_t v14; // w22
  Il2CppObject *Item; // x0
  UserServantCollectionEntity_o *v16; // x23
  __int64 methodPtr_low; // x10
  Il2CppClass *klass; // x24
  void *monitor; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  if ( (byte_4B16FFA & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&svtId,
      method);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5, v6);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7, v8);
    sub_1BCA7E0(&UserServantCollectionEntity_TypeInfo, v9, v10);
    byte_4B16FFA = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_16:
    sub_1BCAA3C(list, *(_QWORD *)&svtId);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return 0;
  v13 = Count;
  v14 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_16;
    Item = System_Collections_ObjectModel_Collection_object___get_Item(
             list,
             v14,
             (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      v16 = (UserServantCollectionEntity_o *)Item;
      methodPtr_low = LOBYTE(UserServantCollectionEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
        && (UserServantCollectionEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == UserServantCollectionEntity_TypeInfo )
      {
        monitor = Item[1].monitor;
        klass = Item[2].klass;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, *(_QWORD *)&svtId);
        *(_QWORD *)&v21.fields.currentCryptoKey = monitor;
        *(_QWORD *)&v21.fields.fakeValue = klass;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v21, 0LL) == svtId )
          return UserServantCollectionEntity__IsNew(v16, *(const MethodInfo **)&svtId);
      }
    }
    if ( v13 == ++v14 )
      return 0;
  }
}


bool __fastcall UserServantCollectionMaster__IsServantHaving(
        UserServantCollectionMaster_o *this,
        System_Int32_array *svtIds,
        const MethodInfo *method)
{
  UserServantCollectionMaster_o *v4; // x20
  __int64 v5; // x8
  unsigned __int64 v6; // x22
  int32_t v7; // w21
  int64_t UserId; // x0
  const MethodInfo *v9; // x4
  UserServantCollectionEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  v4 = this;
  if ( (byte_4B16FFF & 1) == 0 )
  {
    this = (UserServantCollectionMaster_o *)sub_1BCA7E0(&NetworkManager_TypeInfo, svtIds, method);
    byte_4B16FFF = 1;
  }
  if ( !svtIds )
    return 1;
  v5 = *(_QWORD *)&svtIds->max_length;
  if ( !v5 )
    return 1;
  entity = 0LL;
  if ( (int)v5 < 1 )
    return 1;
  v6 = 0LL;
  while ( 1 )
  {
    if ( v6 >= (unsigned int)v5 )
      sub_1BCAA44(this, svtIds);
    v7 = svtIds->m_Items[v6 + 1];
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, svtIds);
    UserId = NetworkManager__get_UserId(0LL);
    this = (UserServantCollectionMaster_o *)UserServantCollectionMaster__TryGetEntity(v4, &entity, UserId, v7, v9);
    if ( ((unsigned __int8)this & 1) == 0 )
      break;
    if ( !entity )
      sub_1BCAA3C(this, svtIds);
    if ( (unsigned int)(entity->fields.status - 1) > 1 )
      break;
    LODWORD(v5) = svtIds->max_length;
    if ( (__int64)++v6 >= (int)v5 )
      return 1;
  }
  return 0;
}


void __fastcall UserServantCollectionMaster__OnListChangedImplementation(
        UserServantCollectionMaster_o *this,
        System_Collections_Specialized_NotifyCollectionChangedEventArgs_o *e,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct System_Collections_Generic_Dictionary_string__DataEntityBase__o **p_lookup; // x0
  __int64 v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  System_NotImplementedException_o *v13; // x19
  __int64 v14; // x1
  __int64 v15; // x0

  if ( !e )
    goto LABEL_5;
  if ( e->fields._action > 4u )
  {
    v9 = sub_1BCA7F4(&System_NotImplementedException_TypeInfo, e);
    v13 = (System_NotImplementedException_o *)sub_1BCAA2C(v9, v10, v11, v12);
    System_NotImplementedException___ctor(v13, 0LL);
    v15 = sub_1BCA7F4(&Method_UserServantCollectionMaster_OnListChangedImplementation__, v14);
    sub_1BCA908(v13, v15);
  }
  this = (UserServantCollectionMaster_o *)this->fields.cachedUserServantCollectionEntityData;
  if ( !this )
LABEL_5:
    sub_1BCAA3C(this, e);
  this->fields._lookup = 0LL;
  p_lookup = &this->fields._lookup;
  *(p_lookup - 3) = 0LL;
  *((_WORD *)p_lookup - 8) = 0;
  *(struct System_Collections_Generic_Dictionary_string__DataEntityBase__o **)((char *)p_lookup - 12) = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)p_lookup, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
}


bool __fastcall UserServantCollectionMaster__TryGetEntity(
        UserServantCollectionMaster_o *this,
        UserServantCollectionEntity_o **entity,
        int64_t userId,
        int32_t svtId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4B16FF4 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_UserServantCollectionMaster__UserServantCollectionEntity__string__TryGetEntity__,
      entity,
      userId);
    byte_4B16FF4 = 1;
  }
  PK = (Il2CppObject *)UserServantCollectionEntity__CreatePK(userId, svtId, (const MethodInfo *)userId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31B31E8 *)Method_DataMasterBase_UserServantCollectionMaster__UserServantCollectionEntity__string__TryGetEntity__);
}


void __fastcall UserServantCollectionMaster__continueDeviceServantComment(
        UserServantCollectionMaster_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
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
  DataManager_o *Instance; // x0
  __int64 v17; // x1
  ServantCommentMaster_o *v18; // x20
  int32_t Count; // w0
  int32_t v20; // w21
  int32_t v21; // w22
  Il2CppObject *Item; // x0
  Il2CppObject *v23; // x23
  __int64 methodPtr_low; // x10
  Il2CppClass *klass; // x24
  void *monitor; // x25
  Il2CppClass *v27; // x23
  void *v28; // x24
  int32_t v29; // w0
  __int64 v30; // x1
  System_Int32_array *v31; // x23
  System_Int32_array *v32; // x24
  int32_t v33; // w25
  System_Int32_array *v34; // [xsp+0h] [xbp-70h] BYREF
  System_Int32_array *idList; // [xsp+8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v36; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v37; // 0:x0.16

  if ( (byte_4B16FFC & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v4, v5);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantCommentMaster___, v6, v7);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8, v9);
    sub_1BCA7E0(&ServantCommentManager_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12, v13);
    sub_1BCA7E0(&UserServantCollectionEntity_TypeInfo, v14, v15);
    byte_4B16FFC = 1;
  }
  v34 = 0LL;
  idList = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantCommentMaster___);
  if ( !this->fields.list )
    goto LABEL_22;
  v18 = (ServantCommentMaster_o *)Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v20 = Count;
    v21 = 0;
    while ( 1 )
    {
      Instance = (DataManager_o *)this->fields.list;
      if ( !Instance )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)Instance,
               v21,
               (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v23 = Item;
        methodPtr_low = LOBYTE(UserServantCollectionEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
          && (UserServantCollectionEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == UserServantCollectionEntity_TypeInfo )
        {
          monitor = Item[1].monitor;
          klass = Item[2].klass;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17);
          *(_QWORD *)&v36.fields.currentCryptoKey = monitor;
          *(_QWORD *)&v36.fields.fakeValue = klass;
          Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v36, 0LL);
          if ( !v18 )
            break;
          if ( ServantCommentMaster__GetNewList(v18, &idList, &v34, (int32_t)Instance, 0LL) )
          {
            v28 = v23[1].monitor;
            v27 = v23[2].klass;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17);
            *(_QWORD *)&v37.fields.currentCryptoKey = v28;
            *(_QWORD *)&v37.fields.fakeValue = v27;
            v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v37, 0LL);
            v31 = v34;
            v32 = idList;
            v33 = v29;
            if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo, v30);
            ServantCommentManager__SetOpen_41219032(v33, v32, v31, 0LL);
          }
        }
      }
      if ( v20 == ++v21 )
        return;
    }
LABEL_22:
    sub_1BCAA3C(Instance, v17);
  }
}


void __fastcall UserServantCollectionMaster__continueDeviceUserServantCollection(
        UserServantCollectionMaster_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  System_Collections_Generic_List_int__o *v21; // x20
  __int64 v22; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int v24; // w21
  int32_t v25; // w22
  __int64 methodPtr_low; // x10
  void *monitor; // x23
  System_Collections_ObjectModel_Collection_T__c *klass; // x24
  struct System_Int32_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  __int64 v32; // x1
  System_Int32_array *v33; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v34; // 0:x0.16

  if ( (byte_4B16FFD & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__ToArray__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v11, v12);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v13, v14);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15, v16);
    sub_1BCA7E0(&UserServantCollectionEntity_TypeInfo, v17, v18);
    sub_1BCA7E0(&UserServantCollectionManager_TypeInfo, v19, v20);
    byte_4B16FFD = 1;
  }
  v21 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    method,
                                                    v2,
                                                    v3);
  System_Collections_Generic_List_int____ctor(
    v21,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_23;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v24 = (int)list;
    v25 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v25,
                                                                 (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        methodPtr_low = LOBYTE(UserServantCollectionEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (UserServantCollectionEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == UserServantCollectionEntity_TypeInfo
          && LODWORD(list[1].fields.items) == 2 )
        {
          klass = list[1].klass;
          monitor = list[1].monitor;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v22);
          *(_QWORD *)&v34.fields.currentCryptoKey = klass;
          *(_QWORD *)&v34.fields.fakeValue = monitor;
          list = (System_Collections_ObjectModel_Collection_T__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                                                     v34,
                                                                     0LL);
          if ( !v21 )
            break;
          items = v21->fields._items;
          v30 = Method_System_Collections_Generic_List_int__Add__;
          ++v21->fields._version;
          if ( !items )
            break;
          size = v21->fields._size;
          v22 = (unsigned int)list;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v21,
              (int32_t)list,
              *(const MethodInfo_3584C38 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
          }
          else
          {
            v21->fields._size = size + 1;
            items->m_Items[size + 1] = (int)list;
          }
        }
      }
      if ( v24 == ++v25 )
        goto LABEL_19;
    }
LABEL_23:
    sub_1BCAA3C(list, v22);
  }
LABEL_19:
  if ( !v21 )
    goto LABEL_23;
  v33 = System_Collections_Generic_List_int___ToArray(
          v21,
          (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !UserServantCollectionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo, v32);
  UserServantCollectionManager__SetOld_41301344(v33, 0LL);
}


UserServantCollectionEntity_array *__fastcall UserServantCollectionMaster__getCollectionList(
        UserServantCollectionMaster_o *this,
        int32_t *getSum,
        int32_t *findSum,
        bool isEquip,
        bool ignoreHideStateSvt,
        const MethodInfo *method)
{
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
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  const MethodInfo *v28; // x7
  const MethodInfo *v29; // x1
  __int64 cachedUserServantCollectionEntityData; // x0
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x21
  __int64 v34; // x25
  System_Collections_Generic_List_object__o *v35; // x24
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  unsigned __int64 i; // x29
  System_String_o *v43; // x26
  System_String_o *v44; // x0
  System_String_o *v45; // x26
  __int64 v46; // x8
  __int64 v47; // x27
  __int64 v48; // x9
  int *v49; // x10
  __int64 v50; // x0
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x3
  __int64 v54; // x8
  __int64 v55; // x27
  __int64 v56; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v57; // x10
  __int64 v58; // x0
  int64_t v59; // x27
  int32_t v60; // w28
  UserServantCollectionEntity_o *v61; // x26
  const MethodInfo *v62; // x3
  __int64 methodPtr_low; // x10
  int32_t status; // w8
  struct System_Object_array *items; // x8
  _QWORD *v66; // x9
  __int64 size; // x10
  Il2CppClass **v68; // x0
  int64_t v69; // x10
  int32_t v70; // w8
  int32_t v71; // w9
  PartyOrganizationUtility_o *v72; // x0
  bool v74; // [xsp+Ch] [xbp-94h]
  int32_t *v75; // [xsp+10h] [xbp-90h]
  int32_t v77; // [xsp+24h] [xbp-7Ch] BYREF
  System_Collections_Generic_List_UserServantCollectionEntity__o *userServantCollectionEntityList; // [xsp+28h] [xbp-78h] BYREF
  __int64 findSuma; // [xsp+30h] [xbp-70h] BYREF
  const MethodInfo *UserId; // [xsp+38h] [xbp-68h] BYREF

  if ( (byte_4B16FF8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, getSum, findSum);
    sub_1BCA7E0(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserServantCollectionEntity__Add__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserServantCollectionEntity__ToArray__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserServantCollectionEntity___ctor__, v16, v17);
    sub_1BCA7E0(&System_Collections_Generic_List_UserServantCollectionEntity__TypeInfo, v18, v19);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v20, v21);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22, v23);
    sub_1BCA7E0(&UserServantCollectionEntity_TypeInfo, v24, v25);
    sub_1BCA7E0(&StringLiteral_1541/*":"*/, v26, v27);
    byte_4B16FF8 = 1;
  }
  userServantCollectionEntityList = 0LL;
  findSuma = 0LL;
  v77 = 0;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, getSum);
  UserId = (const MethodInfo *)NetworkManager__get_UserId(0LL);
  v29 = UserId;
  cachedUserServantCollectionEntityData = (__int64)this->fields.cachedUserServantCollectionEntityData;
  if ( !cachedUserServantCollectionEntityData )
    goto LABEL_59;
  if ( UserServantCollectionMaster_UserServantCollectionEntityDataCache__LoadCache(
         (UserServantCollectionMaster_UserServantCollectionEntityDataCache_o *)cachedUserServantCollectionEntityData,
         (int64_t)UserId,
         isEquip,
         ignoreHideStateSvt,
         (int32_t *)&findSuma + 1,
         (int32_t *)&findSuma,
         &userServantCollectionEntityList,
         v28) )
  {
    *getSum = HIDWORD(findSuma);
    *findSum = findSuma;
    cachedUserServantCollectionEntityData = (__int64)userServantCollectionEntityList;
    if ( userServantCollectionEntityList )
      return (UserServantCollectionEntity_array *)System_Collections_Generic_List_object___ToArray(
                                                    (System_Collections_Generic_List_object__o *)cachedUserServantCollectionEntityData,
                                                    (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_UserServantCollectionEntity__ToArray__);
LABEL_59:
    sub_1BCAA3C(cachedUserServantCollectionEntityData, v29);
  }
  cachedUserServantCollectionEntityData = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !cachedUserServantCollectionEntityData )
    goto LABEL_59;
  cachedUserServantCollectionEntityData = (__int64)DataManager__GetMasterData_object_(
                                                     (DataManager_o *)cachedUserServantCollectionEntityData,
                                                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !cachedUserServantCollectionEntityData )
    goto LABEL_59;
  v74 = isEquip;
  cachedUserServantCollectionEntityData = (__int64)ServantMaster__GetCollectionList_40519096(
                                                     (ServantMaster_o *)cachedUserServantCollectionEntityData,
                                                     isEquip,
                                                     0LL);
  if ( !cachedUserServantCollectionEntityData )
    goto LABEL_59;
  v33 = *(_QWORD *)(cachedUserServantCollectionEntityData + 24);
  v34 = cachedUserServantCollectionEntityData;
  v35 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_UserServantCollectionEntity__TypeInfo,
                                                       v29,
                                                       v31,
                                                       v32);
  System_Collections_Generic_List_object____ctor(
    v35,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_UserServantCollectionEntity___ctor__);
  v75 = getSum;
  *getSum = 0;
  *findSum = 0;
  if ( (int)v33 >= 1 )
  {
    for ( i = 0LL; i != (unsigned int)v33; ++i )
    {
      if ( i >= *(unsigned int *)(v34 + 24) )
        sub_1BCAA44(cachedUserServantCollectionEntityData, v29);
      v77 = *(_DWORD *)(v34 + 4 * i + 32);
      v43 = System_Int64__ToString((int64_t)&UserId, 0LL);
      v44 = System_Int32__ToString((int32_t)&v77, 0LL);
      v45 = System_String__Concat_62412480(v43, (System_String_o *)StringLiteral_1541/*":"*/, v44, 0LL);
      cachedUserServantCollectionEntityData = (__int64)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( !cachedUserServantCollectionEntityData )
        goto LABEL_59;
      v46 = *(_QWORD *)cachedUserServantCollectionEntityData;
      v47 = cachedUserServantCollectionEntityData;
      v48 = *(unsigned __int16 *)(*(_QWORD *)cachedUserServantCollectionEntityData + 302LL);
      if ( *(_WORD *)(*(_QWORD *)cachedUserServantCollectionEntityData + 302LL) )
      {
        v49 = (int *)(*(_QWORD *)(v46 + 176) + 8LL);
        while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)v49 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
        {
          --v48;
          v49 += 4;
          if ( !v48 )
            goto LABEL_20;
        }
        v50 = v46 + 16LL * *v49 + 312;
      }
      else
      {
LABEL_20:
        v50 = sub_1C1C7C0(
                cachedUserServantCollectionEntityData,
                System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                0LL);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v50)(v47, v45, *(_QWORD *)(v50 + 8)) & 1) == 0 )
      {
        v59 = (int64_t)UserId;
        v60 = v77;
        v61 = (UserServantCollectionEntity_o *)sub_1BCAA2C(UserServantCollectionEntity_TypeInfo, v51, v52, v53);
        UserServantCollectionEntity___ctor_40897688(v61, v59, v60, v62);
        if ( ignoreHideStateSvt )
        {
          if ( !v61 )
            goto LABEL_59;
          cachedUserServantCollectionEntityData = UserServantCollectionEntity__IsHideStateServant(v61, v29);
          if ( (cachedUserServantCollectionEntityData & 1) != 0 )
            continue;
        }
        goto LABEL_49;
      }
      cachedUserServantCollectionEntityData = (__int64)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( !cachedUserServantCollectionEntityData )
        goto LABEL_59;
      v54 = *(_QWORD *)cachedUserServantCollectionEntityData;
      v55 = cachedUserServantCollectionEntityData;
      v56 = *(unsigned __int16 *)(*(_QWORD *)cachedUserServantCollectionEntityData + 302LL);
      if ( *(_WORD *)(*(_QWORD *)cachedUserServantCollectionEntityData + 302LL) )
      {
        v57 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)(*(_QWORD *)(v54 + 176) + 8LL);
        while ( *(v57 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
        {
          --v56;
          v57 += 2;
          if ( !v56 )
            goto LABEL_28;
        }
        v58 = v54 + 16LL * (*(_DWORD *)v57 + 2) + 312;
      }
      else
      {
LABEL_28:
        v58 = sub_1C1C7C0(
                cachedUserServantCollectionEntityData,
                System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                2LL);
      }
      cachedUserServantCollectionEntityData = (*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v58)(
                                                v55,
                                                v45,
                                                *(_QWORD *)(v58 + 8));
      if ( cachedUserServantCollectionEntityData
        && (methodPtr_low = LOBYTE(UserServantCollectionEntity_TypeInfo->vtable._0_Equals.methodPtr),
            *(unsigned __int8 *)(*(_QWORD *)cachedUserServantCollectionEntityData + 304LL) >= (unsigned int)methodPtr_low) )
      {
        if ( *(UserServantCollectionEntity_c **)(*(_QWORD *)(*(_QWORD *)cachedUserServantCollectionEntityData + 200LL)
                                               + 8 * methodPtr_low
                                               - 8) == UserServantCollectionEntity_TypeInfo )
          v61 = (UserServantCollectionEntity_o *)cachedUserServantCollectionEntityData;
        else
          v61 = 0LL;
        if ( !ignoreHideStateSvt )
        {
LABEL_44:
          if ( !v61 )
            goto LABEL_59;
          goto LABEL_45;
        }
      }
      else
      {
        v61 = 0LL;
        if ( !ignoreHideStateSvt )
          goto LABEL_44;
      }
      if ( !v61 )
        goto LABEL_59;
      cachedUserServantCollectionEntityData = UserServantCollectionEntity__IsHideStateServant(v61, v29);
      if ( (cachedUserServantCollectionEntityData & 1) != 0 )
        continue;
LABEL_45:
      status = v61->fields.status;
      if ( status != 1 )
      {
        if ( status != 2 )
          goto LABEL_49;
        ++*v75;
      }
      ++*findSum;
LABEL_49:
      if ( !v35 )
        goto LABEL_59;
      items = v35->fields._items;
      v66 = Method_System_Collections_Generic_List_UserServantCollectionEntity__Add__;
      ++v35->fields._version;
      if ( !items )
        goto LABEL_59;
      size = v35->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v35,
          (Il2CppObject *)v61,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v66[4] + 192LL) + 112LL));
      }
      else
      {
        v68 = &items->obj.klass + size;
        v35->fields._size = size + 1;
        v68[4] = (Il2CppClass *)v61;
        sub_1BCA784((PartyOrganizationUtility_o *)(v68 + 4), (int64_t)v61, v36, v37, v38, v39, v40, v41);
      }
    }
  }
  cachedUserServantCollectionEntityData = (__int64)this->fields.cachedUserServantCollectionEntityData;
  if ( !cachedUserServantCollectionEntityData )
    goto LABEL_59;
  v69 = (int64_t)UserId;
  v70 = *findSum;
  v71 = *v75;
  *(_QWORD *)(cachedUserServantCollectionEntityData + 40) = v35;
  v72 = (PartyOrganizationUtility_o *)(cachedUserServantCollectionEntityData + 40);
  LOBYTE(v72[-1].fields._TransitionDestinationFromDetail_k__BackingField) = v74;
  BYTE1(v72[-1].fields._TransitionDestinationFromDetail_k__BackingField) = ignoreHideStateSvt;
  v72[-1].fields.temporaryPartyInfo = (struct PartyOrganizationUtility_TemporaryPartyInfo_o *)v69;
  HIDWORD(v72[-1].fields._TransitionDestinationFromDetail_k__BackingField) = v71;
  *(_DWORD *)&v72[-1].fields._IsQuestStartMenuMode_k__BackingField = v70;
  sub_1BCA784(v72, (int64_t)v35, v36, v37, v38, v39, v40, v41);
  if ( !v35 )
    goto LABEL_59;
  cachedUserServantCollectionEntityData = (__int64)v35;
  return (UserServantCollectionEntity_array *)System_Collections_Generic_List_object___ToArray(
                                                (System_Collections_Generic_List_object__o *)cachedUserServantCollectionEntityData,
                                                (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_UserServantCollectionEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
UserServantCollectionEntity_array *__fastcall UserServantCollectionMaster__getList(
        UserServantCollectionMaster_o *this,
        int32_t kind,
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
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  System_Collections_Generic_List_object__o *v24; // x21
  __int64 v25; // x1
  __int64 Instance; // x0
  int64_t v27; // x1
  __int64 v28; // x22
  unsigned __int64 v29; // x25
  __int64 v30; // x29
  System_String_o *v31; // x0
  __int64 v32; // x1
  System_String_o *v33; // x23
  System_String_o *v34; // x0
  System_String_o *v35; // x23
  __int64 v36; // x8
  __int64 v37; // x24
  __int64 v38; // x9
  int *v39; // x10
  __int64 v40; // x0
  __int64 v41; // x8
  __int64 v42; // x24
  __int64 v43; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v44; // x10
  __int64 v45; // x0
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v54; // x9
  __int64 size; // x10
  Il2CppClass **v56; // x0
  int64_t UserId; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B16FF7 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, *(_QWORD *)&kind, method);
    sub_1BCA7E0(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserServantCollectionEntity__Add__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserServantCollectionEntity__ToArray__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserServantCollectionEntity___ctor__, v12, v13);
    sub_1BCA7E0(&System_Collections_Generic_List_UserServantCollectionEntity__TypeInfo, v14, v15);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v16, v17);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18, v19);
    sub_1BCA7E0(&UserServantCollectionEntity_TypeInfo, v20, v21);
    sub_1BCA7E0(&StringLiteral_1541/*":"*/, v22, v23);
    byte_4B16FF7 = 1;
  }
  v24 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_UserServantCollectionEntity__TypeInfo,
                                                       *(_QWORD *)&kind,
                                                       method,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v24,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_UserServantCollectionEntity___ctor__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v25);
  UserId = NetworkManager__get_UserId(0LL);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_38;
  Instance = (__int64)ServantMaster__GetCollectionList((ServantMaster_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_38;
  v28 = Instance;
  if ( (int)*(_QWORD *)(Instance + 24) >= 1 )
  {
    v29 = 0LL;
    v30 = (unsigned int)*(_QWORD *)(Instance + 24);
    while ( 1 )
    {
      v31 = System_Int64__ToString((int64_t)&UserId, 0LL);
      if ( v29 >= *(unsigned int *)(v28 + 24) )
        sub_1BCAA44(v31, v32);
      v33 = v31;
      v34 = System_Int32__ToString((int)v28 + 4 * (int)v29 + 32, 0LL);
      v35 = System_String__Concat_62412480(v33, (System_String_o *)StringLiteral_1541/*":"*/, v34, 0LL);
      Instance = (__int64)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( !Instance )
        break;
      v36 = *(_QWORD *)Instance;
      v37 = Instance;
      v38 = *(unsigned __int16 *)(*(_QWORD *)Instance + 302LL);
      if ( *(_WORD *)(*(_QWORD *)Instance + 302LL) )
      {
        v39 = (int *)(*(_QWORD *)(v36 + 176) + 8LL);
        while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)v39 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
        {
          --v38;
          v39 += 4;
          if ( !v38 )
            goto LABEL_16;
        }
        v40 = v36 + 16LL * *v39 + 312;
      }
      else
      {
LABEL_16:
        v40 = sub_1C1C7C0(
                Instance,
                System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                0LL);
      }
      Instance = (*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v40)(v37, v35, *(_QWORD *)(v40 + 8));
      if ( (Instance & 1) != 0 )
      {
        Instance = (__int64)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
        if ( !Instance )
          break;
        v41 = *(_QWORD *)Instance;
        v42 = Instance;
        v43 = *(unsigned __int16 *)(*(_QWORD *)Instance + 302LL);
        if ( *(_WORD *)(*(_QWORD *)Instance + 302LL) )
        {
          v44 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)(*(_QWORD *)(v41 + 176)
                                                                                            + 8LL);
          while ( *(v44 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
          {
            --v43;
            v44 += 2;
            if ( !v43 )
              goto LABEL_24;
          }
          v45 = v41 + 16LL * (*(_DWORD *)v44 + 2) + 312;
        }
        else
        {
LABEL_24:
          v45 = sub_1C1C7C0(
                  Instance,
                  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                  2LL);
        }
        Instance = (*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v45)(v42, v35, *(_QWORD *)(v45 + 8));
        if ( !Instance )
          break;
        v27 = Instance;
        methodPtr_low = LOBYTE(UserServantCollectionEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) < (unsigned int)methodPtr_low
          || *(UserServantCollectionEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) != UserServantCollectionEntity_TypeInfo )
        {
          break;
        }
        if ( *(_DWORD *)(Instance + 40) == kind )
        {
          if ( !v24 )
            break;
          items = v24->fields._items;
          v54 = Method_System_Collections_Generic_List_UserServantCollectionEntity__Add__;
          ++v24->fields._version;
          if ( !items )
            break;
          size = v24->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v24,
              (Il2CppObject *)Instance,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v54[4] + 192LL) + 112LL));
          }
          else
          {
            v56 = &items->obj.klass + size;
            v24->fields._size = size + 1;
            v56[4] = (Il2CppClass *)v27;
            sub_1BCA784((PartyOrganizationUtility_o *)(v56 + 4), v27, v46, v47, v48, v49, v50, v51);
          }
        }
      }
      if ( ++v29 == v30 )
        goto LABEL_36;
    }
LABEL_38:
    sub_1BCAA3C(Instance, v27);
  }
LABEL_36:
  if ( !v24 )
    goto LABEL_38;
  return (UserServantCollectionEntity_array *)System_Collections_Generic_List_object___ToArray(
                                                v24,
                                                (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_UserServantCollectionEntity__ToArray__);
}


System_Collections_Generic_List_UserServantCollectionEntity__o *__fastcall UserServantCollectionMaster__getServantEquipCollectionList(
        UserServantCollectionMaster_o *this,
        System_Collections_Generic_Dictionary_int__string__o *servantEquipIdStrDic,
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
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  System_String_o *v25; // x21
  DataManager_o *Instance; // x0
  Il2CppObject *v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  DataManager_o *v30; // x22
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x24
  System_Collections_Generic_List_object__o *v32; // x23
  __int64 v33; // x0
  __int64 v34; // x1
  unsigned __int64 v35; // x26
  __int64 v36; // x29
  int32_t v37; // w1
  System_String_o *v38; // x0
  System_String_o *v39; // x0
  DataManager_c *klass; // x8
  Il2CppObject *v41; // x25
  DataManager_o *v42; // x24
  __int64 v43; // x9
  int32_t *p_offset; // x10
  __int64 v45; // x0
  DataManager_c *v46; // x8
  Il2CppObject *v47; // x25
  DataManager_o *v48; // x24
  __int64 v49; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v50; // x10
  __int64 v51; // x0
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v60; // x9
  __int64 size; // x10
  Il2CppClass **v62; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-78h] BYREF
  int32_t key; // [xsp+14h] [xbp-6Ch] BYREF
  int64_t UserId; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4B16FF9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, servantEquipIdStrDic, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__string__Add__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__string__TryGetValue__, v7, v8);
    sub_1BCA7E0(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserServantCollectionEntity__Add__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserServantCollectionEntity___ctor__, v13, v14);
    sub_1BCA7E0(&System_Collections_Generic_List_UserServantCollectionEntity__TypeInfo, v15, v16);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19, v20);
    sub_1BCA7E0(&UserServantCollectionEntity_TypeInfo, v21, v22);
    sub_1BCA7E0(&StringLiteral_1541/*":"*/, v23, v24);
    byte_4B16FF9 = 1;
  }
  key = 0;
  value = 0LL;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, servantEquipIdStrDic);
  UserId = NetworkManager__get_UserId(0LL);
  v25 = System_Int64__ToString((int64_t)&UserId, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_44;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_44;
  Instance = (DataManager_o *)ServantMaster__GetCollectionList_40519096((ServantMaster_o *)Instance, 1, 0LL);
  if ( !Instance )
    goto LABEL_44;
  v30 = Instance;
  m_CancellationTokenSource = Instance->fields.m_CancellationTokenSource;
  v32 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_UserServantCollectionEntity__TypeInfo,
                                                       v27,
                                                       v28,
                                                       v29);
  System_Collections_Generic_List_object____ctor(
    v32,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_UserServantCollectionEntity___ctor__);
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    v35 = 0LL;
    v36 = (unsigned int)m_CancellationTokenSource;
    while ( 1 )
    {
      if ( v35 >= LODWORD(v30->fields.m_CancellationTokenSource) )
        sub_1BCAA44(v33, v34);
      v37 = *((_DWORD *)&v30->fields._DispLog + v35);
      key = v37;
      if ( servantEquipIdStrDic )
      {
        if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
                (System_Collections_Generic_Dictionary_int__object__o *)servantEquipIdStrDic,
                v37,
                &value,
                (const MethodInfo_3207670 *)Method_System_Collections_Generic_Dictionary_int__string__TryGetValue__) )
        {
          v38 = System_Int32__ToString((int32_t)&key, 0LL);
          value = (Il2CppObject *)System_String__Concat_62412480(v25, (System_String_o *)StringLiteral_1541/*":"*/, v38, 0LL);
          System_Collections_Generic_Dictionary_int__object___Add(
            (System_Collections_Generic_Dictionary_int__object__o *)servantEquipIdStrDic,
            key,
            value,
            (const MethodInfo_3205EE4 *)Method_System_Collections_Generic_Dictionary_int__string__Add__);
        }
      }
      else
      {
        v39 = System_Int32__ToString((int32_t)&key, 0LL);
        value = (Il2CppObject *)System_String__Concat_62412480(v25, (System_String_o *)StringLiteral_1541/*":"*/, v39, 0LL);
      }
      Instance = (DataManager_o *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( !Instance )
        break;
      klass = Instance->klass;
      v41 = value;
      v42 = Instance;
      v43 = *(unsigned __int16 *)(&Instance->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&Instance->klass->_2.bitflags2 + 3) )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
        {
          --v43;
          p_offset += 4;
          if ( !v43 )
            goto LABEL_20;
        }
        v45 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
      }
      else
      {
LABEL_20:
        v45 = sub_1C1C7C0(
                Instance,
                System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                0LL);
      }
      v33 = (*(__int64 (__fastcall **)(DataManager_o *, Il2CppObject *, _QWORD))v45)(v42, v41, *(_QWORD *)(v45 + 8));
      if ( (v33 & 1) != 0 )
      {
        Instance = (DataManager_o *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
        if ( !Instance )
          break;
        v46 = Instance->klass;
        v47 = value;
        v48 = Instance;
        v49 = *(unsigned __int16 *)(&Instance->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&Instance->klass->_2.bitflags2 + 3) )
        {
          v50 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&v46->_1.interfaceOffsets->offset;
          while ( *(v50 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
          {
            --v49;
            v50 += 2;
            if ( !v49 )
              goto LABEL_28;
          }
          v51 = (__int64)(&v46->vtable._2_GetHashCode.method + 2 * *(_DWORD *)v50);
        }
        else
        {
LABEL_28:
          v51 = sub_1C1C7C0(
                  Instance,
                  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                  2LL);
        }
        Instance = (DataManager_o *)(*(__int64 (__fastcall **)(DataManager_o *, Il2CppObject *, _QWORD))v51)(
                                      v48,
                                      v47,
                                      *(_QWORD *)(v51 + 8));
        if ( Instance
          && (methodPtr_low = LOBYTE(UserServantCollectionEntity_TypeInfo->vtable._0_Equals.methodPtr),
              LOBYTE(Instance->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
        {
          if ( (UserServantCollectionEntity_c *)Instance->klass->_2.typeHierarchy[methodPtr_low - 1] == UserServantCollectionEntity_TypeInfo )
            v27 = (Il2CppObject *)Instance;
          else
            v27 = 0LL;
          if ( !v32 )
            break;
        }
        else
        {
          v27 = 0LL;
          if ( !v32 )
            break;
        }
        items = v32->fields._items;
        v60 = Method_System_Collections_Generic_List_UserServantCollectionEntity__Add__;
        ++v32->fields._version;
        if ( !items )
          break;
        size = v32->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v32,
            v27,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v60[4] + 192LL) + 112LL));
        }
        else
        {
          v62 = &items->obj.klass + size;
          v32->fields._size = size + 1;
          v62[4] = (Il2CppClass *)v27;
          sub_1BCA784((PartyOrganizationUtility_o *)(v62 + 4), (int64_t)v27, v52, v53, v54, v55, v56, v57);
        }
      }
      if ( ++v35 == v36 )
        return (System_Collections_Generic_List_UserServantCollectionEntity__o *)v32;
    }
LABEL_44:
    sub_1BCAA3C(Instance, v27);
  }
  return (System_Collections_Generic_List_UserServantCollectionEntity__o *)v32;
}


void __fastcall UserServantCollectionMaster_UserServantCollectionEntityDataCache___ctor(
        UserServantCollectionMaster_UserServantCollectionEntityDataCache_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall UserServantCollectionMaster_UserServantCollectionEntityDataCache__Clear(
        UserServantCollectionMaster_UserServantCollectionEntityDataCache_o *this,
        const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct System_Collections_Generic_List_UserServantCollectionEntity__o **p_cachedUserServantCollectionEntityList; // x0

  this->fields.cachedUserServantCollectionEntityList = 0LL;
  p_cachedUserServantCollectionEntityList = &this->fields.cachedUserServantCollectionEntityList;
  *(p_cachedUserServantCollectionEntityList - 3) = 0LL;
  *((_WORD *)p_cachedUserServantCollectionEntityList - 8) = 0;
  *(struct System_Collections_Generic_List_UserServantCollectionEntity__o **)((char *)p_cachedUserServantCollectionEntityList
                                                                            - 12) = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)p_cachedUserServantCollectionEntityList, 0LL, v2, v3, v4, v5, v6, v7);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UserServantCollectionMaster_UserServantCollectionEntityDataCache__LoadCache(
        UserServantCollectionMaster_UserServantCollectionEntityDataCache_o *this,
        int64_t userId,
        bool isEquip,
        bool ignoreHideStateServant,
        int32_t *getSum,
        int32_t *findSum,
        System_Collections_Generic_List_UserServantCollectionEntity__o **userServantCollectionEntityList,
        const MethodInfo *method)
{
  int64_t v15; // x2
  char v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  bool result; // w0
  System_Collections_Generic_List_UserServantCollectionEntity__o *cachedUserServantCollectionEntityList; // x1

  *getSum = 0;
  *findSum = 0;
  *userServantCollectionEntityList = 0LL;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)userServantCollectionEntityList,
    0LL,
    isEquip,
    ignoreHideStateServant,
    (System_String_o *)getSum,
    (BattleSetupInfo_o *)findSum,
    (FollowerInfo_o *)userServantCollectionEntityList,
    (PartyListViewItem_o *)method);
  result = 0;
  if ( this->fields.cachedUserId == userId )
  {
    if ( this->fields.cachedIsEquip == isEquip && this->fields.cachedIgnoreHideStateServant == ignoreHideStateServant )
    {
      *getSum = this->fields.cachedGetSum;
      *findSum = this->fields.cachedFindSum;
      cachedUserServantCollectionEntityList = this->fields.cachedUserServantCollectionEntityList;
      *userServantCollectionEntityList = cachedUserServantCollectionEntityList;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)userServantCollectionEntityList,
        (int64_t)cachedUserServantCollectionEntityList,
        v15,
        v16,
        v17,
        v18,
        v19,
        v20);
      return 1;
    }
    else
    {
      return 0;
    }
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserServantCollectionMaster_UserServantCollectionEntityDataCache__SaveCache(
        UserServantCollectionMaster_UserServantCollectionEntityDataCache_o *this,
        int64_t userId,
        bool isEquip,
        bool ignoreHideStateServant,
        int32_t getSum,
        int32_t findSum,
        System_Collections_Generic_List_UserServantCollectionEntity__o *userServantCollectionEntityList,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_UserServantCollectionEntity__o **p_cachedUserServantCollectionEntityList; // x0

  this->fields.cachedUserServantCollectionEntityList = userServantCollectionEntityList;
  p_cachedUserServantCollectionEntityList = &this->fields.cachedUserServantCollectionEntityList;
  *(p_cachedUserServantCollectionEntityList - 3) = (struct System_Collections_Generic_List_UserServantCollectionEntity__o *)userId;
  *((_BYTE *)p_cachedUserServantCollectionEntityList - 16) = isEquip;
  *((_BYTE *)p_cachedUserServantCollectionEntityList - 15) = ignoreHideStateServant;
  *((_DWORD *)p_cachedUserServantCollectionEntityList - 3) = getSum;
  *((_DWORD *)p_cachedUserServantCollectionEntityList - 2) = findSum;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)p_cachedUserServantCollectionEntityList,
    (int64_t)userServantCollectionEntityList,
    isEquip,
    ignoreHideStateServant,
    *(System_String_o **)&getSum,
    *(BattleSetupInfo_o **)&findSum,
    (FollowerInfo_o *)userServantCollectionEntityList,
    (PartyListViewItem_o *)method);
}