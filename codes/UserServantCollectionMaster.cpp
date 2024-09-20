void __fastcall UserServantCollectionMaster___ctor(UserServantCollectionMaster_o *this, const MethodInfo *method)
{
  Il2CppObject *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4A5BF3D & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_UserServantCollectionMaster__UserServantCollectionEntity__string___ctor__);
    sub_1B885B0(&UserServantCollectionMaster_UserServantCollectionEntityDataCache_TypeInfo);
    byte_4A5BF3D = 1;
  }
  v3 = (Il2CppObject *)sub_1B887FC(UserServantCollectionMaster_UserServantCollectionEntityDataCache_TypeInfo);
  System_Object___ctor(v3, 0LL);
  this->fields.cachedUserServantCollectionEntityData = (struct UserServantCollectionMaster_UserServantCollectionEntityDataCache_o *)v3;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.cachedUserServantCollectionEntityData,
    (int32_t)v3,
    v4,
    v5);
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    30,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_UserServantCollectionMaster__UserServantCollectionEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserServantCollectionEntity_o *__fastcall UserServantCollectionMaster__GetEntity(
        UserServantCollectionMaster_o *this,
        int64_t userId,
        int32_t svtId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A5BF3B & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_UserServantCollectionMaster__UserServantCollectionEntity__string__GetEntity__);
    byte_4A5BF3B = 1;
  }
  PK = (Il2CppObject *)UserServantCollectionEntity__CreatePK(userId, svtId, *(const MethodInfo **)&svtId);
  return (UserServantCollectionEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                            PK,
                                            (const MethodInfo_311DC8C *)Method_DataMasterBase_UserServantCollectionMaster__UserServantCollectionEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
UserServantCollectionEntity_o *__fastcall UserServantCollectionMaster__GetEntityDefinitely(
        UserServantCollectionMaster_o *this,
        int64_t userId,
        int32_t svtId,
        const MethodInfo *method)
{
  System_String_o *PK; // x19
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *lookup; // x0
  __int64 v9; // x1
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *klass; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v11; // x23
  __int64 v12; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *v15; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v16; // x20
  __int64 v17; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v18; // x10
  __int64 v19; // x0
  UserServantCollectionEntity_o *v20; // x19
  const MethodInfo *v21; // x3
  UserServantCollectionEntity_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4A5BF3E & 1) == 0 )
  {
    sub_1B885B0(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo);
    sub_1B885B0(&UserServantCollectionEntity_TypeInfo);
    byte_4A5BF3E = 1;
  }
  PK = UserServantCollectionEntity__CreatePK(userId, svtId, *(const MethodInfo **)&svtId);
  lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !lookup )
    goto LABEL_25;
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
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1BDA590(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 0LL);
  }
  if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, _QWORD))p_method)(
          v11,
          PK,
          *(_QWORD *)(p_method + 8)) & 1) == 0 )
  {
    v20 = (UserServantCollectionEntity_o *)sub_1B887FC(UserServantCollectionEntity_TypeInfo);
    UserServantCollectionEntity___ctor_40166256(v20, userId, svtId, v21);
    return v20;
  }
  lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !lookup )
LABEL_25:
    sub_1B8880C(lookup, v9);
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
    v19 = (__int64)&v15->vtable[*(_DWORD *)v18 + 2].method;
  }
  else
  {
LABEL_16:
    v19 = sub_1BDA590(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 2LL);
  }
  result = (UserServantCollectionEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, _QWORD))v19)(
                                              v16,
                                              PK,
                                              *(_QWORD *)(v19 + 8));
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
  System_Collections_Generic_List_int__o *v3; // x20
  const MethodInfo *v4; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int v6; // w21
  int32_t v7; // w22
  System_Collections_ObjectModel_Collection_T__o *v8; // x23
  __int64 methodPtr_low; // x10
  void *monitor; // x23
  System_Collections_ObjectModel_Collection_T__c *klass; // x24
  struct System_Int32_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_4A5BF43 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&UserServantCollectionEntity_TypeInfo);
    byte_4A5BF43 = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_21;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v6 = (int)list;
    v7 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v7,
                                                                 (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v8 = list;
        methodPtr_low = LOBYTE(UserServantCollectionEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (UserServantCollectionEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == UserServantCollectionEntity_TypeInfo )
        {
          list = (System_Collections_ObjectModel_Collection_T__o *)UserServantCollectionEntity__IsNew(
                                                                     (UserServantCollectionEntity_o *)list,
                                                                     v4);
          if ( ((unsigned __int8)list & 1) != 0 )
          {
            klass = v8[1].klass;
            monitor = v8[1].monitor;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v16.fields.currentCryptoKey = klass;
            *(_QWORD *)&v16.fields.fakeValue = monitor;
            list = (System_Collections_ObjectModel_Collection_T__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                                                       v16,
                                                                       0LL);
            if ( !v3 )
              break;
            items = v3->fields._items;
            v13 = Method_System_Collections_Generic_List_int__Add__;
            ++v3->fields._version;
            if ( !items )
              break;
            size = v3->fields._size;
            v4 = (const MethodInfo *)(unsigned int)list;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v3,
                (int32_t)list,
                *(const MethodInfo_34E0810 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
            }
            else
            {
              v3->fields._size = size + 1;
              items->m_Items[size + 1] = (int)list;
            }
          }
        }
      }
      if ( v6 == ++v7 )
        goto LABEL_19;
    }
LABEL_21:
    sub_1B8880C(list, v4);
  }
LABEL_19:
  if ( !v3 )
    goto LABEL_21;
  return System_Collections_Generic_List_int___ToArray(
           v3,
           (const MethodInfo_34E22C8 *)Method_System_Collections_Generic_List_int__ToArray__);
}


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

  if ( (byte_4A5BF46 & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5BF46 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  UserId = NetworkManager__get_UserId(0LL);
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(this, UserId, svtId, v8);
  if ( !EntityDefinitely )
    sub_1B8880C(0LL, v10);
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

  if ( (byte_4A5BF48 & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5BF48 = 1;
  }
  entity = 0LL;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  UserId = NetworkManager__get_UserId(0LL);
  v7 = UserServantCollectionMaster__TryGetEntity(this, &entity, UserId, svtId, v6);
  if ( !v7 )
    return 0;
  if ( !entity )
    sub_1B8880C(v7, v8);
  return entity->fields.status == 2;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UserServantCollectionMaster__IsNew(
        UserServantCollectionMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v7; // w21
  int32_t v8; // w22
  Il2CppObject *Item; // x0
  UserServantCollectionEntity_o *v10; // x23
  __int64 methodPtr_low; // x10
  Il2CppClass *klass; // x24
  void *monitor; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_4A5BF42 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&UserServantCollectionEntity_TypeInfo);
    byte_4A5BF42 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_16:
    sub_1B8880C(list, *(_QWORD *)&svtId);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return 0;
  v7 = Count;
  v8 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_16;
    Item = System_Collections_ObjectModel_Collection_object___get_Item(
             list,
             v8,
             (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      v10 = (UserServantCollectionEntity_o *)Item;
      methodPtr_low = LOBYTE(UserServantCollectionEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
        && (UserServantCollectionEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == UserServantCollectionEntity_TypeInfo )
      {
        monitor = Item[1].monitor;
        klass = Item[2].klass;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v15.fields.currentCryptoKey = monitor;
        *(_QWORD *)&v15.fields.fakeValue = klass;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v15, 0LL) == svtId )
          return UserServantCollectionEntity__IsNew(v10, *(const MethodInfo **)&svtId);
      }
    }
    if ( v7 == ++v8 )
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
  if ( (byte_4A5BF47 & 1) == 0 )
  {
    this = (UserServantCollectionMaster_o *)sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5BF47 = 1;
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
      sub_1B88814(this, svtIds);
    v7 = svtIds->m_Items[v6 + 1];
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    UserId = NetworkManager__get_UserId(0LL);
    this = (UserServantCollectionMaster_o *)UserServantCollectionMaster__TryGetEntity(v4, &entity, UserId, v7, v9);
    if ( ((unsigned __int8)this & 1) == 0 )
      break;
    if ( !entity )
      sub_1B8880C(this, svtIds);
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
  struct System_Collections_Generic_Dictionary_string__DataEntityBase__o **p_lookup; // x0
  __int64 v5; // x0
  System_NotImplementedException_o *v6; // x19
  __int64 v7; // x0

  if ( !e )
    goto LABEL_5;
  if ( e->fields._action > 4u )
  {
    v5 = sub_1B885C4(&System_NotImplementedException_TypeInfo);
    v6 = (System_NotImplementedException_o *)sub_1B887FC(v5);
    System_NotImplementedException___ctor(v6, 0LL);
    v7 = sub_1B885C4(&Method_UserServantCollectionMaster_OnListChangedImplementation__);
    sub_1B886D8(v6, v7);
  }
  this = (UserServantCollectionMaster_o *)this->fields.cachedUserServantCollectionEntityData;
  if ( !this )
LABEL_5:
    sub_1B8880C(this, e);
  this->fields._lookup = 0LL;
  p_lookup = &this->fields._lookup;
  *(p_lookup - 3) = 0LL;
  *((_WORD *)p_lookup - 8) = 0;
  *(struct System_Collections_Generic_Dictionary_string__DataEntityBase__o **)((char *)p_lookup - 12) = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)p_lookup, 0, (int32_t)method, v3);
}


bool __fastcall UserServantCollectionMaster__TryGetEntity(
        UserServantCollectionMaster_o *this,
        UserServantCollectionEntity_o **entity,
        int64_t userId,
        int32_t svtId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4A5BF3C & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_UserServantCollectionMaster__UserServantCollectionEntity__string__TryGetEntity__);
    byte_4A5BF3C = 1;
  }
  PK = (Il2CppObject *)UserServantCollectionEntity__CreatePK(userId, svtId, (const MethodInfo *)userId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_UserServantCollectionMaster__UserServantCollectionEntity__string__TryGetEntity__);
}


void __fastcall UserServantCollectionMaster__continueDeviceServantComment(
        UserServantCollectionMaster_o *this,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  ServantCommentMaster_o *v5; // x20
  int32_t Count; // w0
  int32_t v7; // w21
  int32_t v8; // w22
  Il2CppObject *Item; // x0
  Il2CppObject *v10; // x23
  __int64 methodPtr_low; // x10
  Il2CppClass *klass; // x24
  void *monitor; // x25
  Il2CppClass *v14; // x23
  void *v15; // x24
  int32_t v16; // w0
  System_Int32_array *v17; // x23
  System_Int32_array *v18; // x24
  int32_t v19; // w25
  System_Int32_array *v20; // [xsp+0h] [xbp-70h] BYREF
  System_Int32_array *idList; // [xsp+8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16

  if ( (byte_4A5BF44 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantCommentMaster___);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&ServantCommentManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&UserServantCollectionEntity_TypeInfo);
    byte_4A5BF44 = 1;
  }
  v20 = 0LL;
  idList = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantCommentMaster___);
  if ( !this->fields.list )
    goto LABEL_22;
  v5 = (ServantCommentMaster_o *)Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v7 = Count;
    v8 = 0;
    while ( 1 )
    {
      Instance = (DataManager_o *)this->fields.list;
      if ( !Instance )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)Instance,
               v8,
               (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v10 = Item;
        methodPtr_low = LOBYTE(UserServantCollectionEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
          && (UserServantCollectionEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == UserServantCollectionEntity_TypeInfo )
        {
          monitor = Item[1].monitor;
          klass = Item[2].klass;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v22.fields.currentCryptoKey = monitor;
          *(_QWORD *)&v22.fields.fakeValue = klass;
          Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v22, 0LL);
          if ( !v5 )
            break;
          if ( ServantCommentMaster__GetNewList(v5, &idList, &v20, (int32_t)Instance, 0LL) )
          {
            v15 = v10[1].monitor;
            v14 = v10[2].klass;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v23.fields.currentCryptoKey = v15;
            *(_QWORD *)&v23.fields.fakeValue = v14;
            v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v23, 0LL);
            v17 = v20;
            v18 = idList;
            v19 = v16;
            if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
            ServantCommentManager__SetOpen_40480624(v19, v18, v17, 0LL);
          }
        }
      }
      if ( v7 == ++v8 )
        return;
    }
LABEL_22:
    sub_1B8880C(Instance, v4);
  }
}


void __fastcall UserServantCollectionMaster__continueDeviceUserServantCollection(
        UserServantCollectionMaster_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v3; // x20
  __int64 v4; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int v6; // w21
  int32_t v7; // w22
  __int64 methodPtr_low; // x10
  void *monitor; // x23
  System_Collections_ObjectModel_Collection_T__c *klass; // x24
  struct System_Int32_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  System_Int32_array *v14; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_4A5BF45 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&UserServantCollectionEntity_TypeInfo);
    sub_1B885B0(&UserServantCollectionManager_TypeInfo);
    byte_4A5BF45 = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_23;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v6 = (int)list;
    v7 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v7,
                                                                 (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v15.fields.currentCryptoKey = klass;
          *(_QWORD *)&v15.fields.fakeValue = monitor;
          list = (System_Collections_ObjectModel_Collection_T__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                                                     v15,
                                                                     0LL);
          if ( !v3 )
            break;
          items = v3->fields._items;
          v12 = Method_System_Collections_Generic_List_int__Add__;
          ++v3->fields._version;
          if ( !items )
            break;
          size = v3->fields._size;
          v4 = (unsigned int)list;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v3,
              (int32_t)list,
              *(const MethodInfo_34E0810 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
          }
          else
          {
            v3->fields._size = size + 1;
            items->m_Items[size + 1] = (int)list;
          }
        }
      }
      if ( v6 == ++v7 )
        goto LABEL_19;
    }
LABEL_23:
    sub_1B8880C(list, v4);
  }
LABEL_19:
  if ( !v3 )
    goto LABEL_23;
  v14 = System_Collections_Generic_List_int___ToArray(
          v3,
          (const MethodInfo_34E22C8 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !UserServantCollectionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo);
  UserServantCollectionManager__SetOld_40562940(v14, 0LL);
}


UserServantCollectionEntity_array *__fastcall UserServantCollectionMaster__getCollectionList(
        UserServantCollectionMaster_o *this,
        int32_t *getSum,
        int32_t *findSum,
        bool isEquip,
        bool ignoreHideStateSvt,
        const MethodInfo *method)
{
  const MethodInfo *v10; // x7
  const MethodInfo *v11; // x1
  __int64 cachedUserServantCollectionEntityData; // x0
  __int64 v13; // x21
  __int64 v14; // x25
  System_Collections_Generic_List_object__o *v15; // x24
  int32_t v16; // w2
  int32_t v17; // w3
  unsigned __int64 i; // x29
  System_String_o *v19; // x26
  System_String_o *v20; // x0
  System_String_o *v21; // x26
  __int64 v22; // x8
  __int64 v23; // x27
  __int64 v24; // x9
  int *v25; // x10
  __int64 v26; // x0
  __int64 v27; // x8
  __int64 v28; // x27
  __int64 v29; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v30; // x10
  __int64 v31; // x0
  int64_t v32; // x27
  int32_t v33; // w28
  UserServantCollectionEntity_o *v34; // x26
  const MethodInfo *v35; // x3
  __int64 methodPtr_low; // x10
  int32_t status; // w8
  struct System_Object_array *items; // x8
  _QWORD *v39; // x9
  __int64 size; // x10
  Il2CppClass **v41; // x0
  int64_t v42; // x10
  int32_t v43; // w8
  int32_t v44; // w9
  ServantStatusBattleListViewItem_o *v45; // x0
  bool v47; // [xsp+Ch] [xbp-94h]
  int32_t *v48; // [xsp+10h] [xbp-90h]
  int32_t v50; // [xsp+24h] [xbp-7Ch] BYREF
  System_Collections_Generic_List_UserServantCollectionEntity__o *userServantCollectionEntityList; // [xsp+28h] [xbp-78h] BYREF
  __int64 findSuma; // [xsp+30h] [xbp-70h] BYREF
  const MethodInfo *UserId; // [xsp+38h] [xbp-68h] BYREF

  if ( (byte_4A5BF40 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserServantCollectionEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserServantCollectionEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserServantCollectionEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_UserServantCollectionEntity__TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&UserServantCollectionEntity_TypeInfo);
    sub_1B885B0(&StringLiteral_1544/*":"*/);
    byte_4A5BF40 = 1;
  }
  userServantCollectionEntityList = 0LL;
  findSuma = 0LL;
  v50 = 0;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  UserId = (const MethodInfo *)NetworkManager__get_UserId(0LL);
  v11 = UserId;
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
         v10) )
  {
    *getSum = HIDWORD(findSuma);
    *findSum = findSuma;
    cachedUserServantCollectionEntityData = (__int64)userServantCollectionEntityList;
    if ( userServantCollectionEntityList )
      return (UserServantCollectionEntity_array *)System_Collections_Generic_List_object___ToArray(
                                                    (System_Collections_Generic_List_object__o *)cachedUserServantCollectionEntityData,
                                                    (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_UserServantCollectionEntity__ToArray__);
LABEL_59:
    sub_1B8880C(cachedUserServantCollectionEntityData, v11);
  }
  cachedUserServantCollectionEntityData = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !cachedUserServantCollectionEntityData )
    goto LABEL_59;
  cachedUserServantCollectionEntityData = (__int64)DataManager__GetMasterData_object_(
                                                     (DataManager_o *)cachedUserServantCollectionEntityData,
                                                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !cachedUserServantCollectionEntityData )
    goto LABEL_59;
  v47 = isEquip;
  cachedUserServantCollectionEntityData = (__int64)ServantMaster__GetCollectionList_39705836(
                                                     (ServantMaster_o *)cachedUserServantCollectionEntityData,
                                                     isEquip,
                                                     0LL);
  if ( !cachedUserServantCollectionEntityData )
    goto LABEL_59;
  v13 = *(_QWORD *)(cachedUserServantCollectionEntityData + 24);
  v14 = cachedUserServantCollectionEntityData;
  v15 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_UserServantCollectionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_UserServantCollectionEntity___ctor__);
  v48 = getSum;
  *getSum = 0;
  *findSum = 0;
  if ( (int)v13 >= 1 )
  {
    for ( i = 0LL; i != (unsigned int)v13; ++i )
    {
      if ( i >= *(unsigned int *)(v14 + 24) )
        sub_1B88814(cachedUserServantCollectionEntityData, v11);
      v50 = *(_DWORD *)(v14 + 4 * i + 32);
      v19 = System_Int64__ToString((int64_t)&UserId, 0LL);
      v20 = System_Int32__ToString((int32_t)&v50, 0LL);
      v21 = System_String__Concat_61718292(v19, (System_String_o *)StringLiteral_1544/*":"*/, v20, 0LL);
      cachedUserServantCollectionEntityData = (__int64)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( !cachedUserServantCollectionEntityData )
        goto LABEL_59;
      v22 = *(_QWORD *)cachedUserServantCollectionEntityData;
      v23 = cachedUserServantCollectionEntityData;
      v24 = *(unsigned __int16 *)(*(_QWORD *)cachedUserServantCollectionEntityData + 302LL);
      if ( *(_WORD *)(*(_QWORD *)cachedUserServantCollectionEntityData + 302LL) )
      {
        v25 = (int *)(*(_QWORD *)(v22 + 176) + 8LL);
        while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)v25 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
        {
          --v24;
          v25 += 4;
          if ( !v24 )
            goto LABEL_20;
        }
        v26 = v22 + 16LL * *v25 + 312;
      }
      else
      {
LABEL_20:
        v26 = sub_1BDA590(
                cachedUserServantCollectionEntityData,
                System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                0LL);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v26)(v23, v21, *(_QWORD *)(v26 + 8)) & 1) == 0 )
      {
        v32 = (int64_t)UserId;
        v33 = v50;
        v34 = (UserServantCollectionEntity_o *)sub_1B887FC(UserServantCollectionEntity_TypeInfo);
        UserServantCollectionEntity___ctor_40166256(v34, v32, v33, v35);
        if ( ignoreHideStateSvt )
        {
          if ( !v34 )
            goto LABEL_59;
          cachedUserServantCollectionEntityData = UserServantCollectionEntity__IsHideStateServant(v34, v11);
          if ( (cachedUserServantCollectionEntityData & 1) != 0 )
            continue;
        }
        goto LABEL_49;
      }
      cachedUserServantCollectionEntityData = (__int64)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( !cachedUserServantCollectionEntityData )
        goto LABEL_59;
      v27 = *(_QWORD *)cachedUserServantCollectionEntityData;
      v28 = cachedUserServantCollectionEntityData;
      v29 = *(unsigned __int16 *)(*(_QWORD *)cachedUserServantCollectionEntityData + 302LL);
      if ( *(_WORD *)(*(_QWORD *)cachedUserServantCollectionEntityData + 302LL) )
      {
        v30 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)(*(_QWORD *)(v27 + 176) + 8LL);
        while ( *(v30 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
        {
          --v29;
          v30 += 2;
          if ( !v29 )
            goto LABEL_28;
        }
        v31 = v27 + 16LL * (*(_DWORD *)v30 + 2) + 312;
      }
      else
      {
LABEL_28:
        v31 = sub_1BDA590(
                cachedUserServantCollectionEntityData,
                System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                2LL);
      }
      cachedUserServantCollectionEntityData = (*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v31)(
                                                v28,
                                                v21,
                                                *(_QWORD *)(v31 + 8));
      if ( cachedUserServantCollectionEntityData
        && (methodPtr_low = LOBYTE(UserServantCollectionEntity_TypeInfo->vtable._0_Equals.methodPtr),
            *(unsigned __int8 *)(*(_QWORD *)cachedUserServantCollectionEntityData + 304LL) >= (unsigned int)methodPtr_low) )
      {
        if ( *(UserServantCollectionEntity_c **)(*(_QWORD *)(*(_QWORD *)cachedUserServantCollectionEntityData + 200LL)
                                               + 8 * methodPtr_low
                                               - 8) == UserServantCollectionEntity_TypeInfo )
          v34 = (UserServantCollectionEntity_o *)cachedUserServantCollectionEntityData;
        else
          v34 = 0LL;
        if ( !ignoreHideStateSvt )
        {
LABEL_44:
          if ( !v34 )
            goto LABEL_59;
          goto LABEL_45;
        }
      }
      else
      {
        v34 = 0LL;
        if ( !ignoreHideStateSvt )
          goto LABEL_44;
      }
      if ( !v34 )
        goto LABEL_59;
      cachedUserServantCollectionEntityData = UserServantCollectionEntity__IsHideStateServant(v34, v11);
      if ( (cachedUserServantCollectionEntityData & 1) != 0 )
        continue;
LABEL_45:
      status = v34->fields.status;
      if ( status != 1 )
      {
        if ( status != 2 )
          goto LABEL_49;
        ++*v48;
      }
      ++*findSum;
LABEL_49:
      if ( !v15 )
        goto LABEL_59;
      items = v15->fields._items;
      v39 = Method_System_Collections_Generic_List_UserServantCollectionEntity__Add__;
      ++v15->fields._version;
      if ( !items )
        goto LABEL_59;
      size = v15->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v15,
          (Il2CppObject *)v34,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
      }
      else
      {
        v41 = &items->obj.klass + size;
        v15->fields._size = size + 1;
        v41[4] = (Il2CppClass *)v34;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v41 + 4), (int32_t)v34, v16, v17);
      }
    }
  }
  cachedUserServantCollectionEntityData = (__int64)this->fields.cachedUserServantCollectionEntityData;
  if ( !cachedUserServantCollectionEntityData )
    goto LABEL_59;
  v42 = (int64_t)UserId;
  v43 = *findSum;
  v44 = *v48;
  *(_QWORD *)(cachedUserServantCollectionEntityData + 40) = v15;
  v45 = (ServantStatusBattleListViewItem_o *)(cachedUserServantCollectionEntityData + 40);
  LOBYTE(v45[-1].fields.name) = v47;
  BYTE1(v45[-1].fields.name) = ignoreHideStateSvt;
  *(_QWORD *)&v45[-1].fields.isEnabled = v42;
  HIDWORD(v45[-1].fields.name) = v44;
  *(_DWORD *)&v45[-1].fields.isMine = v43;
  sub_1B88554(v45, (int32_t)v15, v16, v17);
  if ( !v15 )
    goto LABEL_59;
  cachedUserServantCollectionEntityData = (__int64)v15;
  return (UserServantCollectionEntity_array *)System_Collections_Generic_List_object___ToArray(
                                                (System_Collections_Generic_List_object__o *)cachedUserServantCollectionEntityData,
                                                (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_UserServantCollectionEntity__ToArray__);
}


UserServantCollectionEntity_array *__fastcall UserServantCollectionMaster__getList(
        UserServantCollectionMaster_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  __int64 Instance; // x0
  __int64 v7; // x1
  __int64 v8; // x22
  unsigned __int64 v9; // x25
  __int64 v10; // x29
  System_String_o *v11; // x0
  __int64 v12; // x1
  System_String_o *v13; // x23
  System_String_o *v14; // x0
  System_String_o *v15; // x23
  __int64 v16; // x8
  __int64 v17; // x24
  __int64 v18; // x9
  int *v19; // x10
  __int64 v20; // x0
  __int64 v21; // x8
  __int64 v22; // x24
  __int64 v23; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v24; // x10
  __int64 v25; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  Il2CppClass **v32; // x0
  int64_t UserId; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4A5BF3F & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserServantCollectionEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserServantCollectionEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserServantCollectionEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_UserServantCollectionEntity__TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&UserServantCollectionEntity_TypeInfo);
    sub_1B885B0(&StringLiteral_1544/*":"*/);
    byte_4A5BF3F = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_UserServantCollectionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_UserServantCollectionEntity___ctor__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  UserId = NetworkManager__get_UserId(0LL);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_38;
  Instance = (__int64)ServantMaster__GetCollectionList((ServantMaster_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_38;
  v8 = Instance;
  if ( (int)*(_QWORD *)(Instance + 24) >= 1 )
  {
    v9 = 0LL;
    v10 = (unsigned int)*(_QWORD *)(Instance + 24);
    while ( 1 )
    {
      v11 = System_Int64__ToString((int64_t)&UserId, 0LL);
      if ( v9 >= *(unsigned int *)(v8 + 24) )
        sub_1B88814(v11, v12);
      v13 = v11;
      v14 = System_Int32__ToString((int)v8 + 4 * (int)v9 + 32, 0LL);
      v15 = System_String__Concat_61718292(v13, (System_String_o *)StringLiteral_1544/*":"*/, v14, 0LL);
      Instance = (__int64)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( !Instance )
        break;
      v16 = *(_QWORD *)Instance;
      v17 = Instance;
      v18 = *(unsigned __int16 *)(*(_QWORD *)Instance + 302LL);
      if ( *(_WORD *)(*(_QWORD *)Instance + 302LL) )
      {
        v19 = (int *)(*(_QWORD *)(v16 + 176) + 8LL);
        while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)v19 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
        {
          --v18;
          v19 += 4;
          if ( !v18 )
            goto LABEL_16;
        }
        v20 = v16 + 16LL * *v19 + 312;
      }
      else
      {
LABEL_16:
        v20 = sub_1BDA590(
                Instance,
                System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                0LL);
      }
      Instance = (*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v20)(v17, v15, *(_QWORD *)(v20 + 8));
      if ( (Instance & 1) != 0 )
      {
        Instance = (__int64)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
        if ( !Instance )
          break;
        v21 = *(_QWORD *)Instance;
        v22 = Instance;
        v23 = *(unsigned __int16 *)(*(_QWORD *)Instance + 302LL);
        if ( *(_WORD *)(*(_QWORD *)Instance + 302LL) )
        {
          v24 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)(*(_QWORD *)(v21 + 176)
                                                                                            + 8LL);
          while ( *(v24 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
          {
            --v23;
            v24 += 2;
            if ( !v23 )
              goto LABEL_24;
          }
          v25 = v21 + 16LL * (*(_DWORD *)v24 + 2) + 312;
        }
        else
        {
LABEL_24:
          v25 = sub_1BDA590(
                  Instance,
                  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                  2LL);
        }
        Instance = (*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v25)(v22, v15, *(_QWORD *)(v25 + 8));
        if ( !Instance )
          break;
        v7 = Instance;
        methodPtr_low = LOBYTE(UserServantCollectionEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) < (unsigned int)methodPtr_low
          || *(UserServantCollectionEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) != UserServantCollectionEntity_TypeInfo )
        {
          break;
        }
        if ( *(_DWORD *)(Instance + 40) == kind )
        {
          if ( !v5 )
            break;
          items = v5->fields._items;
          v30 = Method_System_Collections_Generic_List_UserServantCollectionEntity__Add__;
          ++v5->fields._version;
          if ( !items )
            break;
          size = v5->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v5,
              (Il2CppObject *)Instance,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
          }
          else
          {
            v32 = &items->obj.klass + size;
            v5->fields._size = size + 1;
            v32[4] = (Il2CppClass *)v7;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v32 + 4), v7, v26, v27);
          }
        }
      }
      if ( ++v9 == v10 )
        goto LABEL_36;
    }
LABEL_38:
    sub_1B8880C(Instance, v7);
  }
LABEL_36:
  if ( !v5 )
    goto LABEL_38;
  return (UserServantCollectionEntity_array *)System_Collections_Generic_List_object___ToArray(
                                                v5,
                                                (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_UserServantCollectionEntity__ToArray__);
}


System_Collections_Generic_List_UserServantCollectionEntity__o *__fastcall UserServantCollectionMaster__getServantEquipCollectionList(
        UserServantCollectionMaster_o *this,
        System_Collections_Generic_Dictionary_int__string__o *servantEquipIdStrDic,
        const MethodInfo *method)
{
  System_String_o *v5; // x21
  DataManager_o *Instance; // x0
  Il2CppObject *v7; // x1
  DataManager_o *v8; // x22
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x24
  System_Collections_Generic_List_object__o *v10; // x23
  __int64 v11; // x0
  __int64 v12; // x1
  unsigned __int64 v13; // x26
  __int64 v14; // x29
  int32_t v15; // w1
  System_String_o *v16; // x0
  System_String_o *v17; // x0
  DataManager_c *klass; // x8
  Il2CppObject *v19; // x25
  DataManager_o *v20; // x24
  __int64 v21; // x9
  int32_t *p_offset; // x10
  __int64 v23; // x0
  DataManager_c *v24; // x8
  Il2CppObject *v25; // x25
  DataManager_o *v26; // x24
  __int64 v27; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v28; // x10
  __int64 v29; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  Il2CppClass **v36; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-78h] BYREF
  int32_t key; // [xsp+14h] [xbp-6Ch] BYREF
  int64_t UserId; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4A5BF41 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__string__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__string__TryGetValue__);
    sub_1B885B0(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserServantCollectionEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserServantCollectionEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_UserServantCollectionEntity__TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&UserServantCollectionEntity_TypeInfo);
    sub_1B885B0(&StringLiteral_1544/*":"*/);
    byte_4A5BF41 = 1;
  }
  key = 0;
  value = 0LL;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  UserId = NetworkManager__get_UserId(0LL);
  v5 = System_Int64__ToString((int64_t)&UserId, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_44;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_44;
  Instance = (DataManager_o *)ServantMaster__GetCollectionList_39705836((ServantMaster_o *)Instance, 1, 0LL);
  if ( !Instance )
    goto LABEL_44;
  v8 = Instance;
  m_CancellationTokenSource = Instance->fields.m_CancellationTokenSource;
  v10 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_UserServantCollectionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_UserServantCollectionEntity___ctor__);
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    v13 = 0LL;
    v14 = (unsigned int)m_CancellationTokenSource;
    while ( 1 )
    {
      if ( v13 >= LODWORD(v8->fields.m_CancellationTokenSource) )
        sub_1B88814(v11, v12);
      v15 = *((_DWORD *)&v8->fields._DispLog + v13);
      key = v15;
      if ( servantEquipIdStrDic )
      {
        if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
                (System_Collections_Generic_Dictionary_int__object__o *)servantEquipIdStrDic,
                v15,
                &value,
                (const MethodInfo_316F0E4 *)Method_System_Collections_Generic_Dictionary_int__string__TryGetValue__) )
        {
          v16 = System_Int32__ToString((int32_t)&key, 0LL);
          value = (Il2CppObject *)System_String__Concat_61718292(v5, (System_String_o *)StringLiteral_1544/*":"*/, v16, 0LL);
          System_Collections_Generic_Dictionary_int__object___Add(
            (System_Collections_Generic_Dictionary_int__object__o *)servantEquipIdStrDic,
            key,
            value,
            (const MethodInfo_316D958 *)Method_System_Collections_Generic_Dictionary_int__string__Add__);
        }
      }
      else
      {
        v17 = System_Int32__ToString((int32_t)&key, 0LL);
        value = (Il2CppObject *)System_String__Concat_61718292(v5, (System_String_o *)StringLiteral_1544/*":"*/, v17, 0LL);
      }
      Instance = (DataManager_o *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( !Instance )
        break;
      klass = Instance->klass;
      v19 = value;
      v20 = Instance;
      v21 = *(unsigned __int16 *)(&Instance->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&Instance->klass->_2.bitflags2 + 3) )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
        {
          --v21;
          p_offset += 4;
          if ( !v21 )
            goto LABEL_20;
        }
        v23 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
      }
      else
      {
LABEL_20:
        v23 = sub_1BDA590(
                Instance,
                System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                0LL);
      }
      v11 = (*(__int64 (__fastcall **)(DataManager_o *, Il2CppObject *, _QWORD))v23)(v20, v19, *(_QWORD *)(v23 + 8));
      if ( (v11 & 1) != 0 )
      {
        Instance = (DataManager_o *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
        if ( !Instance )
          break;
        v24 = Instance->klass;
        v25 = value;
        v26 = Instance;
        v27 = *(unsigned __int16 *)(&Instance->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&Instance->klass->_2.bitflags2 + 3) )
        {
          v28 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&v24->_1.interfaceOffsets->offset;
          while ( *(v28 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
          {
            --v27;
            v28 += 2;
            if ( !v27 )
              goto LABEL_28;
          }
          v29 = (__int64)(&v24->vtable._2_GetHashCode.method + 2 * *(_DWORD *)v28);
        }
        else
        {
LABEL_28:
          v29 = sub_1BDA590(
                  Instance,
                  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                  2LL);
        }
        Instance = (DataManager_o *)(*(__int64 (__fastcall **)(DataManager_o *, Il2CppObject *, _QWORD))v29)(
                                      v26,
                                      v25,
                                      *(_QWORD *)(v29 + 8));
        if ( Instance
          && (methodPtr_low = LOBYTE(UserServantCollectionEntity_TypeInfo->vtable._0_Equals.methodPtr),
              LOBYTE(Instance->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
        {
          if ( (UserServantCollectionEntity_c *)Instance->klass->_2.typeHierarchy[methodPtr_low - 1] == UserServantCollectionEntity_TypeInfo )
            v7 = (Il2CppObject *)Instance;
          else
            v7 = 0LL;
          if ( !v10 )
            break;
        }
        else
        {
          v7 = 0LL;
          if ( !v10 )
            break;
        }
        items = v10->fields._items;
        v34 = Method_System_Collections_Generic_List_UserServantCollectionEntity__Add__;
        ++v10->fields._version;
        if ( !items )
          break;
        size = v10->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v10,
            v7,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
        }
        else
        {
          v36 = &items->obj.klass + size;
          v10->fields._size = size + 1;
          v36[4] = (Il2CppClass *)v7;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v36 + 4), (int32_t)v7, v30, v31);
        }
      }
      if ( ++v13 == v14 )
        return (System_Collections_Generic_List_UserServantCollectionEntity__o *)v10;
    }
LABEL_44:
    sub_1B8880C(Instance, v7);
  }
  return (System_Collections_Generic_List_UserServantCollectionEntity__o *)v10;
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
  int32_t v2; // w2
  int32_t v3; // w3
  struct System_Collections_Generic_List_UserServantCollectionEntity__o **p_cachedUserServantCollectionEntityList; // x0

  this->fields.cachedUserServantCollectionEntityList = 0LL;
  p_cachedUserServantCollectionEntityList = &this->fields.cachedUserServantCollectionEntityList;
  *(p_cachedUserServantCollectionEntityList - 3) = 0LL;
  *((_WORD *)p_cachedUserServantCollectionEntityList - 8) = 0;
  *(struct System_Collections_Generic_List_UserServantCollectionEntity__o **)((char *)p_cachedUserServantCollectionEntityList
                                                                            - 12) = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)p_cachedUserServantCollectionEntityList, 0, v2, v3);
}


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
  char v15; // w2
  char v16; // w3
  bool result; // w0
  System_Collections_Generic_List_UserServantCollectionEntity__o *cachedUserServantCollectionEntityList; // x1

  *getSum = 0;
  *findSum = 0;
  *userServantCollectionEntityList = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)userServantCollectionEntityList, 0, isEquip, ignoreHideStateServant);
  result = 0;
  if ( this->fields.cachedUserId == userId )
  {
    if ( this->fields.cachedIsEquip == isEquip && this->fields.cachedIgnoreHideStateServant == ignoreHideStateServant )
    {
      *getSum = this->fields.cachedGetSum;
      *findSum = this->fields.cachedFindSum;
      cachedUserServantCollectionEntityList = this->fields.cachedUserServantCollectionEntityList;
      *userServantCollectionEntityList = cachedUserServantCollectionEntityList;
      sub_1B88554(
        (ServantStatusBattleListViewItem_o *)userServantCollectionEntityList,
        (int32_t)cachedUserServantCollectionEntityList,
        v15,
        v16);
      return 1;
    }
    else
    {
      return 0;
    }
  }
  return result;
}


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
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)p_cachedUserServantCollectionEntityList,
    (int32_t)userServantCollectionEntityList,
    isEquip,
    ignoreHideStateServant);
}