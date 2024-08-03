void __fastcall UserServantCollectionMaster___ctor(UserServantCollectionMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  Il2CppObject *v5; // x20
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_49FD1C4 & 1) == 0 )
  {
    sub_1B640C8(
      &Method_DataMasterBase_UserServantCollectionMaster__UserServantCollectionEntity__string___ctor__,
      method);
    sub_1B640C8(&UserServantCollectionMaster_UserServantCollectionEntityDataCache_TypeInfo, v4);
    byte_49FD1C4 = 1;
  }
  v5 = (Il2CppObject *)sub_1B64314(
                         UserServantCollectionMaster_UserServantCollectionEntityDataCache_TypeInfo,
                         method,
                         v2);
  System_Object___ctor(v5, 0LL);
  this->fields.cachedUserServantCollectionEntityData = (struct UserServantCollectionMaster_UserServantCollectionEntityDataCache_o *)v5;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.cachedUserServantCollectionEntityData,
    (int32_t)v5,
    v6,
    v7);
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    30,
    (const MethodInfo_30D41BC *)Method_DataMasterBase_UserServantCollectionMaster__UserServantCollectionEntity__string___ctor__);
}


UserServantCollectionEntity_o *__fastcall UserServantCollectionMaster__GetEntity(
        UserServantCollectionMaster_o *this,
        int64_t userId,
        int32_t svtId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_49FD1C2 & 1) == 0 )
  {
    sub_1B640C8(
      &Method_DataMasterBase_UserServantCollectionMaster__UserServantCollectionEntity__string__GetEntity__,
      userId);
    byte_49FD1C2 = 1;
  }
  PK = (Il2CppObject *)UserServantCollectionEntity__CreatePK(userId, svtId, 0LL);
  return (UserServantCollectionEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                            PK,
                                            (const MethodInfo_30D41FC *)Method_DataMasterBase_UserServantCollectionMaster__UserServantCollectionEntity__string__GetEntity__);
}


UserServantCollectionEntity_o *__fastcall UserServantCollectionMaster__GetEntityDefinitely(
        UserServantCollectionMaster_o *this,
        int64_t userId,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  System_String_o *PK; // x19
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *lookup; // x0
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *klass; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v11; // x23
  __int64 v12; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *v17; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v18; // x20
  __int64 v19; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v20; // x10
  __int64 v21; // x0
  UserServantCollectionEntity_o *v22; // x19
  UserServantCollectionEntity_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_49FD1C5 & 1) == 0 )
  {
    sub_1B640C8(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, userId);
    sub_1B640C8(&UserServantCollectionEntity_TypeInfo, v7);
    byte_49FD1C5 = 1;
  }
  PK = UserServantCollectionEntity__CreatePK(userId, svtId, 0LL);
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
    p_method = sub_1BB60A8(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 0LL);
  }
  if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, _QWORD))p_method)(
          v11,
          PK,
          *(_QWORD *)(p_method + 8)) & 1) == 0 )
  {
    v22 = (UserServantCollectionEntity_o *)sub_1B64314(UserServantCollectionEntity_TypeInfo, v15, v16);
    UserServantCollectionEntity___ctor_39833700(v22, userId, svtId, 0LL);
    return v22;
  }
  lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !lookup )
LABEL_25:
    sub_1B64324(lookup);
  v17 = lookup->klass;
  v18 = lookup;
  v19 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
  {
    v20 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&v17->_1.interfaceOffsets->offset;
    while ( *(v20 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      --v19;
      v20 += 2;
      if ( !v19 )
        goto LABEL_16;
    }
    v21 = (__int64)&v17->vtable[*(_DWORD *)v20 + 2].method;
  }
  else
  {
LABEL_16:
    v21 = sub_1BB60A8(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 2LL);
  }
  result = (UserServantCollectionEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, _QWORD))v21)(
                                              v18,
                                              PK,
                                              *(_QWORD *)(v21 + 8));
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
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_int__o *v11; // x20
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int v13; // w21
  int32_t v14; // w22
  System_Collections_ObjectModel_Collection_T__o *v15; // x23
  __int64 methodPtr_low; // x10
  void *monitor; // x23
  System_Collections_ObjectModel_Collection_T__c *klass; // x24
  struct System_Int32_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16

  if ( (byte_49FD1CA & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__ToArray__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v7);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v8);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    sub_1B640C8(&UserServantCollectionEntity_TypeInfo, v10);
    byte_49FD1CA = 1;
  }
  v11 = (System_Collections_Generic_List_int__o *)sub_1B64314(System_Collections_Generic_List_int__TypeInfo, method, v2);
  System_Collections_Generic_List_int____ctor(
    v11,
    (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_21;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v13 = (int)list;
    v14 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v14,
                                                                 (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v15 = list;
        methodPtr_low = LOBYTE(UserServantCollectionEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (UserServantCollectionEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == UserServantCollectionEntity_TypeInfo )
        {
          list = (System_Collections_ObjectModel_Collection_T__o *)UserServantCollectionEntity__IsNew(
                                                                     (UserServantCollectionEntity_o *)list,
                                                                     0LL);
          if ( ((unsigned __int8)list & 1) != 0 )
          {
            klass = v15[1].klass;
            monitor = v15[1].monitor;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v23.fields.currentCryptoKey = klass;
            *(_QWORD *)&v23.fields.fakeValue = monitor;
            list = (System_Collections_ObjectModel_Collection_T__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                                                                       v23,
                                                                       0LL);
            if ( !v11 )
              break;
            items = v11->fields._items;
            v20 = Method_System_Collections_Generic_List_int__Add__;
            ++v11->fields._version;
            if ( !items )
              break;
            size = v11->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v11,
                (int32_t)list,
                *(const MethodInfo_348FEDC **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
            }
            else
            {
              v11->fields._size = size + 1;
              items->m_Items[size + 1] = (int)list;
            }
          }
        }
      }
      if ( v13 == ++v14 )
        goto LABEL_19;
    }
LABEL_21:
    sub_1B64324(list);
  }
LABEL_19:
  if ( !v11 )
    goto LABEL_21;
  return System_Collections_Generic_List_int___ToArray(
           v11,
           (const MethodInfo_3491A34 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  struct System_Int32_array *costumeIds; // x8
  __int64 v11; // x9
  bool v12; // vf
  int v13; // w9
  int v14; // w10
  int32_t v15; // w11
  bool result; // w0

  if ( (byte_49FD1CD & 1) == 0 )
  {
    sub_1B640C8(&NetworkManager_TypeInfo, *(_QWORD *)&svtId);
    byte_49FD1CD = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  UserId = NetworkManager__get_UserId(0LL);
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(this, UserId, svtId, v8);
  if ( !EntityDefinitely )
    sub_1B64324(0LL);
  costumeIds = EntityDefinitely->fields.costumeIds;
  if ( !costumeIds )
    return 0;
  v11 = *(_QWORD *)&costumeIds->max_length;
  if ( !v11 )
    return 0;
  v12 = __OFSUB__((_DWORD)v11, 1);
  v13 = v11 - 1;
  if ( v13 < 0 != v12 )
    return 0;
  v14 = 0;
  do
  {
    v15 = costumeIds->m_Items[v14 + 1];
    result = v15 == costumeId;
    if ( v15 == costumeId )
      break;
  }
  while ( v13 != v14++ );
  return result;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UserServantCollectionMaster__IsNew(
        UserServantCollectionMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v10; // w21
  int32_t v11; // w22
  Il2CppObject *Item; // x0
  UserServantCollectionEntity_o *v13; // x23
  __int64 methodPtr_low; // x10
  Il2CppClass *klass; // x24
  void *monitor; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_49FD1C9 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&svtId);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_1B640C8(&UserServantCollectionEntity_TypeInfo, v7);
    byte_49FD1C9 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_16:
    sub_1B64324(list);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return 0;
  v10 = Count;
  v11 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_16;
    Item = System_Collections_ObjectModel_Collection_object___get_Item(
             list,
             v11,
             (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      v13 = (UserServantCollectionEntity_o *)Item;
      methodPtr_low = LOBYTE(UserServantCollectionEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
        && (UserServantCollectionEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == UserServantCollectionEntity_TypeInfo )
      {
        monitor = Item[1].monitor;
        klass = Item[2].klass;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v18.fields.currentCryptoKey = monitor;
        *(_QWORD *)&v18.fields.fakeValue = klass;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v18, 0LL) == svtId )
          return UserServantCollectionEntity__IsNew(v13, 0LL);
      }
    }
    if ( v10 == ++v11 )
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
  if ( (byte_49FD1CE & 1) == 0 )
  {
    this = (UserServantCollectionMaster_o *)sub_1B640C8(&NetworkManager_TypeInfo, svtIds);
    byte_49FD1CE = 1;
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
      sub_1B6432C(this, svtIds);
    v7 = svtIds->m_Items[v6 + 1];
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    UserId = NetworkManager__get_UserId(0LL);
    this = (UserServantCollectionMaster_o *)UserServantCollectionMaster__TryGetEntity(v4, &entity, UserId, v7, v9);
    if ( ((unsigned __int8)this & 1) == 0 )
      break;
    if ( !entity )
      sub_1B64324(this);
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
  __int64 v6; // x1
  __int64 v7; // x2
  System_NotImplementedException_o *v8; // x19
  __int64 v9; // x0

  if ( !e )
    goto LABEL_5;
  if ( e->fields._action > 4u )
  {
    v5 = sub_1B640DC(&System_NotImplementedException_TypeInfo);
    v8 = (System_NotImplementedException_o *)sub_1B64314(v5, v6, v7);
    System_NotImplementedException___ctor(v8, 0LL);
    v9 = sub_1B640DC(&Method_UserServantCollectionMaster_OnListChangedImplementation__);
    sub_1B641F0(v8, v9);
  }
  this = (UserServantCollectionMaster_o *)this->fields.cachedUserServantCollectionEntityData;
  if ( !this )
LABEL_5:
    sub_1B64324(this);
  this->fields._lookup = 0LL;
  p_lookup = &this->fields._lookup;
  *(p_lookup - 3) = 0LL;
  *((_WORD *)p_lookup - 8) = 0;
  *(struct System_Collections_Generic_Dictionary_string__DataEntityBase__o **)((char *)p_lookup - 12) = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)p_lookup, 0, (int32_t)method, v3);
}


bool __fastcall UserServantCollectionMaster__TryGetEntity(
        UserServantCollectionMaster_o *this,
        UserServantCollectionEntity_o **entity,
        int64_t userId,
        int32_t svtId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_49FD1C3 & 1) == 0 )
  {
    sub_1B640C8(
      &Method_DataMasterBase_UserServantCollectionMaster__UserServantCollectionEntity__string__TryGetEntity__,
      entity);
    byte_49FD1C3 = 1;
  }
  PK = (Il2CppObject *)UserServantCollectionEntity__CreatePK(userId, svtId, 0LL);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_30D424C *)Method_DataMasterBase_UserServantCollectionMaster__UserServantCollectionEntity__string__TryGetEntity__);
}


void __fastcall UserServantCollectionMaster__continueDeviceServantComment(
        UserServantCollectionMaster_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  DataManager_o *Instance; // x0
  ServantCommentMaster_o *v10; // x20
  int32_t Count; // w0
  int32_t v12; // w21
  int32_t v13; // w22
  Il2CppObject *Item; // x0
  Il2CppObject *v15; // x23
  __int64 methodPtr_low; // x10
  Il2CppClass *klass; // x24
  void *monitor; // x25
  Il2CppClass *v19; // x23
  void *v20; // x24
  int32_t v21; // w0
  System_Int32_array *v22; // x23
  System_Int32_array *v23; // x24
  int32_t v24; // w25
  System_Int32_array *v25; // [xsp+0h] [xbp-70h] BYREF
  System_Int32_array *idList; // [xsp+8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // 0:x0.16

  if ( (byte_49FD1CB & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantCommentMaster___, v4);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    sub_1B640C8(&ServantCommentManager_TypeInfo, v6);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_1B640C8(&UserServantCollectionEntity_TypeInfo, v8);
    byte_49FD1CB = 1;
  }
  v25 = 0LL;
  idList = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantCommentMaster___);
  if ( !this->fields.list )
    goto LABEL_22;
  v10 = (ServantCommentMaster_o *)Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v12 = Count;
    v13 = 0;
    while ( 1 )
    {
      Instance = (DataManager_o *)this->fields.list;
      if ( !Instance )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)Instance,
               v13,
               (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v15 = Item;
        methodPtr_low = LOBYTE(UserServantCollectionEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
          && (UserServantCollectionEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == UserServantCollectionEntity_TypeInfo )
        {
          monitor = Item[1].monitor;
          klass = Item[2].klass;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v27.fields.currentCryptoKey = monitor;
          *(_QWORD *)&v27.fields.fakeValue = klass;
          Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v27, 0LL);
          if ( !v10 )
            break;
          if ( ServantCommentMaster__GetNewList(v10, &idList, &v25, (int32_t)Instance, 0LL) )
          {
            v20 = v15[1].monitor;
            v19 = v15[2].klass;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v28.fields.currentCryptoKey = v20;
            *(_QWORD *)&v28.fields.fakeValue = v19;
            v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v28, 0LL);
            v22 = v25;
            v23 = idList;
            v24 = v21;
            if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
            ServantCommentManager__SetOpen_40145556(v24, v23, v22, 0LL);
          }
        }
      }
      if ( v12 == ++v13 )
        return;
    }
LABEL_22:
    sub_1B64324(Instance);
  }
}


void __fastcall UserServantCollectionMaster__continueDeviceUserServantCollection(
        UserServantCollectionMaster_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_int__o *v12; // x20
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int v14; // w21
  int32_t v15; // w22
  __int64 methodPtr_low; // x10
  void *monitor; // x23
  System_Collections_ObjectModel_Collection_T__c *klass; // x24
  struct System_Int32_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  System_Int32_array *v22; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16

  if ( (byte_49FD1CC & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__ToArray__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v7);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v8);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    sub_1B640C8(&UserServantCollectionEntity_TypeInfo, v10);
    sub_1B640C8(&UserServantCollectionManager_TypeInfo, v11);
    byte_49FD1CC = 1;
  }
  v12 = (System_Collections_Generic_List_int__o *)sub_1B64314(System_Collections_Generic_List_int__TypeInfo, method, v2);
  System_Collections_Generic_List_int____ctor(
    v12,
    (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_23;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
                                                                 (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
          *(_QWORD *)&v23.fields.currentCryptoKey = klass;
          *(_QWORD *)&v23.fields.fakeValue = monitor;
          list = (System_Collections_ObjectModel_Collection_T__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                                                                     v23,
                                                                     0LL);
          if ( !v12 )
            break;
          items = v12->fields._items;
          v20 = Method_System_Collections_Generic_List_int__Add__;
          ++v12->fields._version;
          if ( !items )
            break;
          size = v12->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v12,
              (int32_t)list,
              *(const MethodInfo_348FEDC **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
          }
          else
          {
            v12->fields._size = size + 1;
            items->m_Items[size + 1] = (int)list;
          }
        }
      }
      if ( v14 == ++v15 )
        goto LABEL_19;
    }
LABEL_23:
    sub_1B64324(list);
  }
LABEL_19:
  if ( !v12 )
    goto LABEL_23;
  v22 = System_Collections_Generic_List_int___ToArray(
          v12,
          (const MethodInfo_3491A34 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !UserServantCollectionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo);
  UserServantCollectionManager__SetOld_40227900(v22, 0LL);
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
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  const MethodInfo *v19; // x7
  __int64 cachedUserServantCollectionEntityData; // x0
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x21
  __int64 v24; // x25
  System_Collections_Generic_List_object__o *v25; // x24
  __int64 v26; // x1
  int32_t v27; // w2
  int32_t v28; // w3
  unsigned __int64 i; // x29
  System_String_o *v30; // x26
  System_String_o *v31; // x0
  System_String_o *v32; // x26
  __int64 v33; // x8
  __int64 v34; // x27
  __int64 v35; // x9
  int *v36; // x10
  __int64 v37; // x0
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x8
  __int64 v41; // x27
  __int64 v42; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v43; // x10
  __int64 v44; // x0
  int64_t v45; // x27
  int32_t v46; // w28
  UserServantCollectionEntity_o *v47; // x26
  __int64 methodPtr_low; // x10
  int32_t status; // w8
  struct System_Object_array *items; // x8
  _QWORD *v51; // x9
  __int64 size; // x10
  Il2CppClass **v53; // x0
  int64_t v54; // x10
  int32_t v55; // w8
  int32_t v56; // w9
  ServantStatusBattleListViewItem_o *v57; // x0
  bool v59; // [xsp+Ch] [xbp-94h]
  int32_t *v60; // [xsp+10h] [xbp-90h]
  int32_t v62; // [xsp+24h] [xbp-7Ch] BYREF
  System_Collections_Generic_List_UserServantCollectionEntity__o *userServantCollectionEntityList; // [xsp+28h] [xbp-78h] BYREF
  __int64 findSuma; // [xsp+30h] [xbp-70h] BYREF
  int64_t UserId; // [xsp+38h] [xbp-68h] BYREF

  if ( (byte_49FD1C7 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, getSum);
    sub_1B640C8(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserServantCollectionEntity__Add__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserServantCollectionEntity__ToArray__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserServantCollectionEntity___ctor__, v13);
    sub_1B640C8(&System_Collections_Generic_List_UserServantCollectionEntity__TypeInfo, v14);
    sub_1B640C8(&NetworkManager_TypeInfo, v15);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_1B640C8(&UserServantCollectionEntity_TypeInfo, v17);
    sub_1B640C8(&StringLiteral_1546/*":"*/, v18);
    byte_49FD1C7 = 1;
  }
  userServantCollectionEntityList = 0LL;
  findSuma = 0LL;
  v62 = 0;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  UserId = NetworkManager__get_UserId(0LL);
  cachedUserServantCollectionEntityData = (__int64)this->fields.cachedUserServantCollectionEntityData;
  if ( !cachedUserServantCollectionEntityData )
    goto LABEL_59;
  if ( UserServantCollectionMaster_UserServantCollectionEntityDataCache__LoadCache(
         (UserServantCollectionMaster_UserServantCollectionEntityDataCache_o *)cachedUserServantCollectionEntityData,
         UserId,
         isEquip,
         ignoreHideStateSvt,
         (int32_t *)&findSuma + 1,
         (int32_t *)&findSuma,
         &userServantCollectionEntityList,
         v19) )
  {
    *getSum = HIDWORD(findSuma);
    *findSum = findSuma;
    cachedUserServantCollectionEntityData = (__int64)userServantCollectionEntityList;
    if ( userServantCollectionEntityList )
      return (UserServantCollectionEntity_array *)System_Collections_Generic_List_object___ToArray(
                                                    (System_Collections_Generic_List_object__o *)cachedUserServantCollectionEntityData,
                                                    (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_UserServantCollectionEntity__ToArray__);
LABEL_59:
    sub_1B64324(cachedUserServantCollectionEntityData);
  }
  cachedUserServantCollectionEntityData = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !cachedUserServantCollectionEntityData )
    goto LABEL_59;
  cachedUserServantCollectionEntityData = (__int64)DataManager__GetMasterData_object_(
                                                     (DataManager_o *)cachedUserServantCollectionEntityData,
                                                     (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !cachedUserServantCollectionEntityData )
    goto LABEL_59;
  v59 = isEquip;
  cachedUserServantCollectionEntityData = (__int64)ServantMaster__GetCollectionList_39376492(
                                                     (ServantMaster_o *)cachedUserServantCollectionEntityData,
                                                     isEquip,
                                                     0LL);
  if ( !cachedUserServantCollectionEntityData )
    goto LABEL_59;
  v23 = *(_QWORD *)(cachedUserServantCollectionEntityData + 24);
  v24 = cachedUserServantCollectionEntityData;
  v25 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_UserServantCollectionEntity__TypeInfo,
                                                       v21,
                                                       v22);
  System_Collections_Generic_List_object____ctor(
    v25,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_UserServantCollectionEntity___ctor__);
  v60 = getSum;
  *getSum = 0;
  *findSum = 0;
  if ( (int)v23 >= 1 )
  {
    for ( i = 0LL; i != (unsigned int)v23; ++i )
    {
      if ( i >= *(unsigned int *)(v24 + 24) )
        sub_1B6432C(cachedUserServantCollectionEntityData, v26);
      v62 = *(_DWORD *)(v24 + 4 * i + 32);
      v30 = System_Int64__ToString((int64_t)&UserId, 0LL);
      v31 = System_Int32__ToString((int32_t)&v62, 0LL);
      v32 = System_String__Concat_61386656(v30, (System_String_o *)StringLiteral_1546/*":"*/, v31, 0LL);
      cachedUserServantCollectionEntityData = (__int64)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( !cachedUserServantCollectionEntityData )
        goto LABEL_59;
      v33 = *(_QWORD *)cachedUserServantCollectionEntityData;
      v34 = cachedUserServantCollectionEntityData;
      v35 = *(unsigned __int16 *)(*(_QWORD *)cachedUserServantCollectionEntityData + 302LL);
      if ( *(_WORD *)(*(_QWORD *)cachedUserServantCollectionEntityData + 302LL) )
      {
        v36 = (int *)(*(_QWORD *)(v33 + 176) + 8LL);
        while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)v36 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
        {
          --v35;
          v36 += 4;
          if ( !v35 )
            goto LABEL_20;
        }
        v37 = v33 + 16LL * *v36 + 312;
      }
      else
      {
LABEL_20:
        v37 = sub_1BB60A8(
                cachedUserServantCollectionEntityData,
                System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                0LL);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v37)(v34, v32, *(_QWORD *)(v37 + 8)) & 1) == 0 )
      {
        v45 = UserId;
        v46 = v62;
        v47 = (UserServantCollectionEntity_o *)sub_1B64314(UserServantCollectionEntity_TypeInfo, v38, v39);
        UserServantCollectionEntity___ctor_39833700(v47, v45, v46, 0LL);
        if ( ignoreHideStateSvt )
        {
          if ( !v47 )
            goto LABEL_59;
          cachedUserServantCollectionEntityData = UserServantCollectionEntity__IsHideStateServant(v47, 0LL);
          if ( (cachedUserServantCollectionEntityData & 1) != 0 )
            continue;
        }
        goto LABEL_49;
      }
      cachedUserServantCollectionEntityData = (__int64)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( !cachedUserServantCollectionEntityData )
        goto LABEL_59;
      v40 = *(_QWORD *)cachedUserServantCollectionEntityData;
      v41 = cachedUserServantCollectionEntityData;
      v42 = *(unsigned __int16 *)(*(_QWORD *)cachedUserServantCollectionEntityData + 302LL);
      if ( *(_WORD *)(*(_QWORD *)cachedUserServantCollectionEntityData + 302LL) )
      {
        v43 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)(*(_QWORD *)(v40 + 176) + 8LL);
        while ( *(v43 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
        {
          --v42;
          v43 += 2;
          if ( !v42 )
            goto LABEL_28;
        }
        v44 = v40 + 16LL * (*(_DWORD *)v43 + 2) + 312;
      }
      else
      {
LABEL_28:
        v44 = sub_1BB60A8(
                cachedUserServantCollectionEntityData,
                System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                2LL);
      }
      cachedUserServantCollectionEntityData = (*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v44)(
                                                v41,
                                                v32,
                                                *(_QWORD *)(v44 + 8));
      if ( cachedUserServantCollectionEntityData
        && (methodPtr_low = LOBYTE(UserServantCollectionEntity_TypeInfo->vtable._0_Equals.methodPtr),
            *(unsigned __int8 *)(*(_QWORD *)cachedUserServantCollectionEntityData + 304LL) >= (unsigned int)methodPtr_low) )
      {
        if ( *(UserServantCollectionEntity_c **)(*(_QWORD *)(*(_QWORD *)cachedUserServantCollectionEntityData + 200LL)
                                               + 8 * methodPtr_low
                                               - 8) == UserServantCollectionEntity_TypeInfo )
          v47 = (UserServantCollectionEntity_o *)cachedUserServantCollectionEntityData;
        else
          v47 = 0LL;
        if ( !ignoreHideStateSvt )
        {
LABEL_44:
          if ( !v47 )
            goto LABEL_59;
          goto LABEL_45;
        }
      }
      else
      {
        v47 = 0LL;
        if ( !ignoreHideStateSvt )
          goto LABEL_44;
      }
      if ( !v47 )
        goto LABEL_59;
      cachedUserServantCollectionEntityData = UserServantCollectionEntity__IsHideStateServant(v47, 0LL);
      if ( (cachedUserServantCollectionEntityData & 1) != 0 )
        continue;
LABEL_45:
      status = v47->fields.status;
      if ( status != 1 )
      {
        if ( status != 2 )
          goto LABEL_49;
        ++*v60;
      }
      ++*findSum;
LABEL_49:
      if ( !v25 )
        goto LABEL_59;
      items = v25->fields._items;
      v51 = Method_System_Collections_Generic_List_UserServantCollectionEntity__Add__;
      ++v25->fields._version;
      if ( !items )
        goto LABEL_59;
      size = v25->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v25,
          (Il2CppObject *)v47,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v51[4] + 192LL) + 112LL));
      }
      else
      {
        v53 = &items->obj.klass + size;
        v25->fields._size = size + 1;
        v53[4] = (Il2CppClass *)v47;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v53 + 4), (int32_t)v47, v27, v28);
      }
    }
  }
  cachedUserServantCollectionEntityData = (__int64)this->fields.cachedUserServantCollectionEntityData;
  if ( !cachedUserServantCollectionEntityData )
    goto LABEL_59;
  v54 = UserId;
  v55 = *findSum;
  v56 = *v60;
  *(_QWORD *)(cachedUserServantCollectionEntityData + 40) = v25;
  v57 = (ServantStatusBattleListViewItem_o *)(cachedUserServantCollectionEntityData + 40);
  LOBYTE(v57[-1].fields.name) = v59;
  BYTE1(v57[-1].fields.name) = ignoreHideStateSvt;
  *(_QWORD *)&v57[-1].fields.isEnabled = v54;
  HIDWORD(v57[-1].fields.name) = v56;
  *(_DWORD *)&v57[-1].fields.isMine = v55;
  sub_1B6406C(v57, (int32_t)v25, v27, v28);
  if ( !v25 )
    goto LABEL_59;
  cachedUserServantCollectionEntityData = (__int64)v25;
  return (UserServantCollectionEntity_array *)System_Collections_Generic_List_object___ToArray(
                                                (System_Collections_Generic_List_object__o *)cachedUserServantCollectionEntityData,
                                                (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_UserServantCollectionEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
UserServantCollectionEntity_array *__fastcall UserServantCollectionMaster__getList(
        UserServantCollectionMaster_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_object__o *v14; // x21
  __int64 Instance; // x0
  __int64 v16; // x22
  unsigned __int64 v17; // x25
  __int64 v18; // x29
  System_String_o *v19; // x0
  __int64 v20; // x1
  System_String_o *v21; // x23
  System_String_o *v22; // x0
  System_String_o *v23; // x23
  __int64 v24; // x8
  __int64 v25; // x24
  __int64 v26; // x9
  int *v27; // x10
  __int64 v28; // x0
  __int64 v29; // x8
  __int64 v30; // x24
  __int64 v31; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v32; // x10
  __int64 v33; // x0
  int32_t v34; // w2
  int32_t v35; // w3
  __int64 v36; // x1
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v39; // x9
  __int64 size; // x10
  Il2CppClass **v41; // x0
  int64_t UserId; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_49FD1C6 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, *(_QWORD *)&kind);
    sub_1B640C8(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserServantCollectionEntity__Add__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserServantCollectionEntity__ToArray__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserServantCollectionEntity___ctor__, v8);
    sub_1B640C8(&System_Collections_Generic_List_UserServantCollectionEntity__TypeInfo, v9);
    sub_1B640C8(&NetworkManager_TypeInfo, v10);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_1B640C8(&UserServantCollectionEntity_TypeInfo, v12);
    sub_1B640C8(&StringLiteral_1546/*":"*/, v13);
    byte_49FD1C6 = 1;
  }
  v14 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_UserServantCollectionEntity__TypeInfo,
                                                       *(_QWORD *)&kind,
                                                       method);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_UserServantCollectionEntity___ctor__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  UserId = NetworkManager__get_UserId(0LL);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_38;
  Instance = (__int64)ServantMaster__GetCollectionList((ServantMaster_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_38;
  v16 = Instance;
  if ( (int)*(_QWORD *)(Instance + 24) >= 1 )
  {
    v17 = 0LL;
    v18 = (unsigned int)*(_QWORD *)(Instance + 24);
    while ( 1 )
    {
      v19 = System_Int64__ToString((int64_t)&UserId, 0LL);
      if ( v17 >= *(unsigned int *)(v16 + 24) )
        sub_1B6432C(v19, v20);
      v21 = v19;
      v22 = System_Int32__ToString((int)v16 + 4 * (int)v17 + 32, 0LL);
      v23 = System_String__Concat_61386656(v21, (System_String_o *)StringLiteral_1546/*":"*/, v22, 0LL);
      Instance = (__int64)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( !Instance )
        break;
      v24 = *(_QWORD *)Instance;
      v25 = Instance;
      v26 = *(unsigned __int16 *)(*(_QWORD *)Instance + 302LL);
      if ( *(_WORD *)(*(_QWORD *)Instance + 302LL) )
      {
        v27 = (int *)(*(_QWORD *)(v24 + 176) + 8LL);
        while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)v27 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
        {
          --v26;
          v27 += 4;
          if ( !v26 )
            goto LABEL_16;
        }
        v28 = v24 + 16LL * *v27 + 312;
      }
      else
      {
LABEL_16:
        v28 = sub_1BB60A8(
                Instance,
                System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                0LL);
      }
      Instance = (*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v28)(v25, v23, *(_QWORD *)(v28 + 8));
      if ( (Instance & 1) != 0 )
      {
        Instance = (__int64)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
        if ( !Instance )
          break;
        v29 = *(_QWORD *)Instance;
        v30 = Instance;
        v31 = *(unsigned __int16 *)(*(_QWORD *)Instance + 302LL);
        if ( *(_WORD *)(*(_QWORD *)Instance + 302LL) )
        {
          v32 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)(*(_QWORD *)(v29 + 176)
                                                                                            + 8LL);
          while ( *(v32 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
          {
            --v31;
            v32 += 2;
            if ( !v31 )
              goto LABEL_24;
          }
          v33 = v29 + 16LL * (*(_DWORD *)v32 + 2) + 312;
        }
        else
        {
LABEL_24:
          v33 = sub_1BB60A8(
                  Instance,
                  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                  2LL);
        }
        Instance = (*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v33)(v30, v23, *(_QWORD *)(v33 + 8));
        if ( !Instance )
          break;
        v36 = Instance;
        methodPtr_low = LOBYTE(UserServantCollectionEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) < (unsigned int)methodPtr_low
          || *(UserServantCollectionEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) != UserServantCollectionEntity_TypeInfo )
        {
          break;
        }
        if ( *(_DWORD *)(Instance + 40) == kind )
        {
          if ( !v14 )
            break;
          items = v14->fields._items;
          v39 = Method_System_Collections_Generic_List_UserServantCollectionEntity__Add__;
          ++v14->fields._version;
          if ( !items )
            break;
          size = v14->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v14,
              (Il2CppObject *)Instance,
              *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
          }
          else
          {
            v41 = &items->obj.klass + size;
            v14->fields._size = size + 1;
            v41[4] = (Il2CppClass *)v36;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v41 + 4), v36, v34, v35);
          }
        }
      }
      if ( ++v17 == v18 )
        goto LABEL_36;
    }
LABEL_38:
    sub_1B64324(Instance);
  }
LABEL_36:
  if ( !v14 )
    goto LABEL_38;
  return (UserServantCollectionEntity_array *)System_Collections_Generic_List_object___ToArray(
                                                v14,
                                                (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_UserServantCollectionEntity__ToArray__);
}


System_Collections_Generic_List_UserServantCollectionEntity__o *__fastcall UserServantCollectionMaster__getServantEquipCollectionList(
        UserServantCollectionMaster_o *this,
        System_Collections_Generic_Dictionary_int__string__o *servantEquipIdStrDic,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_String_o *v15; // x21
  DataManager_o *Instance; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  DataManager_o *v19; // x22
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x24
  System_Collections_Generic_List_object__o *v21; // x23
  __int64 v22; // x0
  __int64 v23; // x1
  unsigned __int64 v24; // x26
  __int64 v25; // x29
  int32_t v26; // w1
  System_String_o *v27; // x0
  System_String_o *v28; // x0
  DataManager_c *klass; // x8
  Il2CppObject *v30; // x25
  DataManager_o *v31; // x24
  __int64 v32; // x9
  int32_t *p_offset; // x10
  __int64 v34; // x0
  DataManager_c *v35; // x8
  Il2CppObject *v36; // x25
  DataManager_o *v37; // x24
  __int64 v38; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v39; // x10
  __int64 v40; // x0
  int32_t v41; // w2
  int32_t v42; // w3
  __int64 methodPtr_low; // x10
  Il2CppObject *v44; // x1
  struct System_Object_array *items; // x8
  _QWORD *v46; // x9
  __int64 size; // x10
  Il2CppClass **v48; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-78h] BYREF
  int32_t key; // [xsp+14h] [xbp-6Ch] BYREF
  int64_t UserId; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_49FD1C8 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, servantEquipIdStrDic);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__string__Add__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__string__TryGetValue__, v6);
    sub_1B640C8(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserServantCollectionEntity__Add__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserServantCollectionEntity___ctor__, v9);
    sub_1B640C8(&System_Collections_Generic_List_UserServantCollectionEntity__TypeInfo, v10);
    sub_1B640C8(&NetworkManager_TypeInfo, v11);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_1B640C8(&UserServantCollectionEntity_TypeInfo, v13);
    sub_1B640C8(&StringLiteral_1546/*":"*/, v14);
    byte_49FD1C8 = 1;
  }
  key = 0;
  value = 0LL;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  UserId = NetworkManager__get_UserId(0LL);
  v15 = System_Int64__ToString((int64_t)&UserId, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_44;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_44;
  Instance = (DataManager_o *)ServantMaster__GetCollectionList_39376492((ServantMaster_o *)Instance, 1, 0LL);
  if ( !Instance )
    goto LABEL_44;
  v19 = Instance;
  m_CancellationTokenSource = Instance->fields.m_CancellationTokenSource;
  v21 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_UserServantCollectionEntity__TypeInfo,
                                                       v17,
                                                       v18);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_UserServantCollectionEntity___ctor__);
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    v24 = 0LL;
    v25 = (unsigned int)m_CancellationTokenSource;
    while ( 1 )
    {
      if ( v24 >= LODWORD(v19->fields.m_CancellationTokenSource) )
        sub_1B6432C(v22, v23);
      v26 = *((_DWORD *)&v19->fields._DispLog + v24);
      key = v26;
      if ( servantEquipIdStrDic )
      {
        if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
                (System_Collections_Generic_Dictionary_int__object__o *)servantEquipIdStrDic,
                v26,
                &value,
                (const MethodInfo_3125110 *)Method_System_Collections_Generic_Dictionary_int__string__TryGetValue__) )
        {
          v27 = System_Int32__ToString((int32_t)&key, 0LL);
          value = (Il2CppObject *)System_String__Concat_61386656(v15, (System_String_o *)StringLiteral_1546/*":"*/, v27, 0LL);
          System_Collections_Generic_Dictionary_int__object___Add(
            (System_Collections_Generic_Dictionary_int__object__o *)servantEquipIdStrDic,
            key,
            value,
            (const MethodInfo_3123984 *)Method_System_Collections_Generic_Dictionary_int__string__Add__);
        }
      }
      else
      {
        v28 = System_Int32__ToString((int32_t)&key, 0LL);
        value = (Il2CppObject *)System_String__Concat_61386656(v15, (System_String_o *)StringLiteral_1546/*":"*/, v28, 0LL);
      }
      Instance = (DataManager_o *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( !Instance )
        break;
      klass = Instance->klass;
      v30 = value;
      v31 = Instance;
      v32 = *(unsigned __int16 *)(&Instance->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&Instance->klass->_2.bitflags2 + 3) )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
        {
          --v32;
          p_offset += 4;
          if ( !v32 )
            goto LABEL_20;
        }
        v34 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
      }
      else
      {
LABEL_20:
        v34 = sub_1BB60A8(
                Instance,
                System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                0LL);
      }
      v22 = (*(__int64 (__fastcall **)(DataManager_o *, Il2CppObject *, _QWORD))v34)(v31, v30, *(_QWORD *)(v34 + 8));
      if ( (v22 & 1) != 0 )
      {
        Instance = (DataManager_o *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
        if ( !Instance )
          break;
        v35 = Instance->klass;
        v36 = value;
        v37 = Instance;
        v38 = *(unsigned __int16 *)(&Instance->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&Instance->klass->_2.bitflags2 + 3) )
        {
          v39 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&v35->_1.interfaceOffsets->offset;
          while ( *(v39 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
          {
            --v38;
            v39 += 2;
            if ( !v38 )
              goto LABEL_28;
          }
          v40 = (__int64)(&v35->vtable._2_GetHashCode.method + 2 * *(_DWORD *)v39);
        }
        else
        {
LABEL_28:
          v40 = sub_1BB60A8(
                  Instance,
                  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                  2LL);
        }
        Instance = (DataManager_o *)(*(__int64 (__fastcall **)(DataManager_o *, Il2CppObject *, _QWORD))v40)(
                                      v37,
                                      v36,
                                      *(_QWORD *)(v40 + 8));
        if ( Instance
          && (methodPtr_low = LOBYTE(UserServantCollectionEntity_TypeInfo->vtable._0_Equals.methodPtr),
              LOBYTE(Instance->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
        {
          if ( (UserServantCollectionEntity_c *)Instance->klass->_2.typeHierarchy[methodPtr_low - 1] == UserServantCollectionEntity_TypeInfo )
            v44 = (Il2CppObject *)Instance;
          else
            v44 = 0LL;
          if ( !v21 )
            break;
        }
        else
        {
          v44 = 0LL;
          if ( !v21 )
            break;
        }
        items = v21->fields._items;
        v46 = Method_System_Collections_Generic_List_UserServantCollectionEntity__Add__;
        ++v21->fields._version;
        if ( !items )
          break;
        size = v21->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v21,
            v44,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
        }
        else
        {
          v48 = &items->obj.klass + size;
          v21->fields._size = size + 1;
          v48[4] = (Il2CppClass *)v44;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v48 + 4), (int32_t)v44, v41, v42);
        }
      }
      if ( ++v24 == v25 )
        return (System_Collections_Generic_List_UserServantCollectionEntity__o *)v21;
    }
LABEL_44:
    sub_1B64324(Instance);
  }
  return (System_Collections_Generic_List_UserServantCollectionEntity__o *)v21;
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)p_cachedUserServantCollectionEntityList, 0, v2, v3);
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)userServantCollectionEntityList, 0, isEquip, ignoreHideStateServant);
  result = 0;
  if ( this->fields.cachedUserId == userId )
  {
    if ( this->fields.cachedIsEquip == isEquip && this->fields.cachedIgnoreHideStateServant == ignoreHideStateServant )
    {
      *getSum = this->fields.cachedGetSum;
      *findSum = this->fields.cachedFindSum;
      cachedUserServantCollectionEntityList = this->fields.cachedUserServantCollectionEntityList;
      *userServantCollectionEntityList = cachedUserServantCollectionEntityList;
      sub_1B6406C(
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
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)p_cachedUserServantCollectionEntityList,
    (int32_t)userServantCollectionEntityList,
    isEquip,
    ignoreHideStateServant);
}