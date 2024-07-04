void __fastcall UserServantCollectionMaster___ctor(UserServantCollectionMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *v4; // x20
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_48E3544 & 1) == 0 )
  {
    sub_1B00CCC(
      &Method_DataMasterBase_UserServantCollectionMaster__UserServantCollectionEntity__string___ctor__,
      method);
    sub_1B00CCC(&UserServantCollectionMaster_UserServantCollectionEntityDataCache_TypeInfo, v3);
    byte_48E3544 = 1;
  }
  v4 = (Il2CppObject *)sub_1B00F18(UserServantCollectionMaster_UserServantCollectionEntityDataCache_TypeInfo);
  System_Object___ctor(v4, 0LL);
  this->fields.cachedUserServantCollectionEntityData = (struct UserServantCollectionMaster_UserServantCollectionEntityDataCache_o *)v4;
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)&this->fields.cachedUserServantCollectionEntityData,
    (int32_t)v4,
    v5,
    v6);
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    30,
    (const MethodInfo_2FE6D64 *)Method_DataMasterBase_UserServantCollectionMaster__UserServantCollectionEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserServantCollectionEntity_o *__fastcall UserServantCollectionMaster__GetEntity(
        UserServantCollectionMaster_o *this,
        int64_t userId,
        int32_t svtId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_48E3542 & 1) == 0 )
  {
    sub_1B00CCC(
      &Method_DataMasterBase_UserServantCollectionMaster__UserServantCollectionEntity__string__GetEntity__,
      userId);
    byte_48E3542 = 1;
  }
  PK = (Il2CppObject *)UserServantCollectionEntity__CreatePK(userId, svtId, *(const MethodInfo **)&svtId);
  return (UserServantCollectionEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                            PK,
                                            (const MethodInfo_2FE6DA4 *)Method_DataMasterBase_UserServantCollectionMaster__UserServantCollectionEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
UserServantCollectionEntity_o *__fastcall UserServantCollectionMaster__GetEntityDefinitely(
        UserServantCollectionMaster_o *this,
        int64_t userId,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  System_String_o *PK; // x19
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *lookup; // x0
  __int64 v10; // x1
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *klass; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v12; // x23
  __int64 v13; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *v16; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v17; // x20
  __int64 v18; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v19; // x10
  __int64 v20; // x0
  UserServantCollectionEntity_o *v21; // x19
  const MethodInfo *v22; // x3
  UserServantCollectionEntity_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_48E3545 & 1) == 0 )
  {
    sub_1B00CCC(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, userId);
    sub_1B00CCC(&UserServantCollectionEntity_TypeInfo, v7);
    byte_48E3545 = 1;
  }
  PK = UserServantCollectionEntity__CreatePK(userId, svtId, *(const MethodInfo **)&svtId);
  lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !lookup )
    goto LABEL_25;
  klass = lookup->klass;
  v12 = lookup;
  v13 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      --v13;
      p_offset += 4;
      if ( !v13 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1B52CAC(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 0LL);
  }
  if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, _QWORD))p_method)(
          v12,
          PK,
          *(_QWORD *)(p_method + 8)) & 1) == 0 )
  {
    v21 = (UserServantCollectionEntity_o *)sub_1B00F18(UserServantCollectionEntity_TypeInfo);
    UserServantCollectionEntity___ctor_38887736(v21, userId, svtId, v22);
    return v21;
  }
  lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !lookup )
LABEL_25:
    sub_1B00F28(lookup, v10);
  v16 = lookup->klass;
  v17 = lookup;
  v18 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
  {
    v19 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&v16->_1.interfaceOffsets->offset;
    while ( *(v19 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      --v18;
      v19 += 2;
      if ( !v18 )
        goto LABEL_16;
    }
    v20 = (__int64)&v16->vtable[*(_DWORD *)v19 + 2].method;
  }
  else
  {
LABEL_16:
    v20 = sub_1B52CAC(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 2LL);
  }
  result = (UserServantCollectionEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, _QWORD))v20)(
                                              v17,
                                              PK,
                                              *(_QWORD *)(v20 + 8));
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_int__o *v10; // x20
  const MethodInfo *v11; // x1
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

  if ( (byte_48E354A & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_1B00CCC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_1B00CCC(&Method_System_Collections_Generic_List_int__Add__, v4);
    sub_1B00CCC(&Method_System_Collections_Generic_List_int__ToArray__, v5);
    sub_1B00CCC(&Method_System_Collections_Generic_List_int___ctor__, v6);
    sub_1B00CCC(&System_Collections_Generic_List_int__TypeInfo, v7);
    sub_1B00CCC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_1B00CCC(&UserServantCollectionEntity_TypeInfo, v9);
    byte_48E354A = 1;
  }
  v10 = (System_Collections_Generic_List_int__o *)sub_1B00F18(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v10,
    (const MethodInfo_33A4158 *)Method_System_Collections_Generic_List_int___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_21;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_2F836B0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
                                                                 (const MethodInfo_2F83740 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v15 = list;
        methodPtr_low = LOBYTE(UserServantCollectionEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (UserServantCollectionEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == UserServantCollectionEntity_TypeInfo )
        {
          list = (System_Collections_ObjectModel_Collection_T__o *)UserServantCollectionEntity__IsNew(
                                                                     (UserServantCollectionEntity_o *)list,
                                                                     v11);
          if ( ((unsigned __int8)list & 1) != 0 )
          {
            klass = v15[1].klass;
            monitor = v15[1].monitor;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v23.fields.currentCryptoKey = klass;
            *(_QWORD *)&v23.fields.fakeValue = monitor;
            list = (System_Collections_ObjectModel_Collection_T__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45313044(
                                                                       v23,
                                                                       0LL);
            if ( !v10 )
              break;
            items = v10->fields._items;
            v20 = Method_System_Collections_Generic_List_int__Add__;
            ++v10->fields._version;
            if ( !items )
              break;
            size = v10->fields._size;
            v11 = (const MethodInfo *)(unsigned int)list;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v10,
                (int32_t)list,
                *(const MethodInfo_33A49AC **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
            }
            else
            {
              v10->fields._size = size + 1;
              items->m_Items[size + 1] = (int)list;
            }
          }
        }
      }
      if ( v13 == ++v14 )
        goto LABEL_19;
    }
LABEL_21:
    sub_1B00F28(list, v11);
  }
LABEL_19:
  if ( !v10 )
    goto LABEL_21;
  return System_Collections_Generic_List_int___ToArray(
           v10,
           (const MethodInfo_33A6464 *)Method_System_Collections_Generic_List_int__ToArray__);
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

  if ( (byte_48E354D & 1) == 0 )
  {
    sub_1B00CCC(&NetworkManager_TypeInfo, *(_QWORD *)&svtId);
    byte_48E354D = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  UserId = NetworkManager__get_UserId(0LL);
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(this, UserId, svtId, v8);
  if ( !EntityDefinitely )
    sub_1B00F28(0LL, v10);
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

  if ( (byte_48E3549 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&svtId);
    sub_1B00CCC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1B00CCC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_1B00CCC(&UserServantCollectionEntity_TypeInfo, v7);
    byte_48E3549 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_16:
    sub_1B00F28(list, *(_QWORD *)&svtId);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_2F836B0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
             (const MethodInfo_2F83740 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45313044(v18, 0LL) == svtId )
          return UserServantCollectionEntity__IsNew(v13, *(const MethodInfo **)&svtId);
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
  if ( (byte_48E354E & 1) == 0 )
  {
    this = (UserServantCollectionMaster_o *)sub_1B00CCC(&NetworkManager_TypeInfo, svtIds);
    byte_48E354E = 1;
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
      sub_1B00F30(this, svtIds);
    v7 = svtIds->m_Items[v6 + 1];
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    UserId = NetworkManager__get_UserId(0LL);
    this = (UserServantCollectionMaster_o *)UserServantCollectionMaster__TryGetEntity(v4, &entity, UserId, v7, v9);
    if ( ((unsigned __int8)this & 1) == 0 )
      break;
    if ( !entity )
      sub_1B00F28(this, svtIds);
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
    v5 = sub_1B00CE0(&System_NotImplementedException_TypeInfo);
    v6 = (System_NotImplementedException_o *)sub_1B00F18(v5);
    System_NotImplementedException___ctor(v6, 0LL);
    v7 = sub_1B00CE0(&Method_UserServantCollectionMaster_OnListChangedImplementation__);
    sub_1B00DF4(v6, v7);
  }
  this = (UserServantCollectionMaster_o *)this->fields.cachedUserServantCollectionEntityData;
  if ( !this )
LABEL_5:
    sub_1B00F28(this, e);
  this->fields._lookup = 0LL;
  p_lookup = &this->fields._lookup;
  *(p_lookup - 3) = 0LL;
  *((_WORD *)p_lookup - 8) = 0;
  *(struct System_Collections_Generic_Dictionary_string__DataEntityBase__o **)((char *)p_lookup - 12) = 0LL;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)p_lookup, 0, (int32_t)method, v3);
}


bool __fastcall UserServantCollectionMaster__TryGetEntity(
        UserServantCollectionMaster_o *this,
        UserServantCollectionEntity_o **entity,
        int64_t userId,
        int32_t svtId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_48E3543 & 1) == 0 )
  {
    sub_1B00CCC(
      &Method_DataMasterBase_UserServantCollectionMaster__UserServantCollectionEntity__string__TryGetEntity__,
      entity);
    byte_48E3543 = 1;
  }
  PK = (Il2CppObject *)UserServantCollectionEntity__CreatePK(userId, svtId, (const MethodInfo *)userId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_2FE6DF4 *)Method_DataMasterBase_UserServantCollectionMaster__UserServantCollectionEntity__string__TryGetEntity__);
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
  __int64 v10; // x1
  ServantCommentMaster_o *v11; // x20
  int32_t Count; // w0
  int32_t v13; // w21
  int32_t v14; // w22
  Il2CppObject *Item; // x0
  Il2CppObject *v16; // x23
  __int64 methodPtr_low; // x10
  Il2CppClass *klass; // x24
  void *monitor; // x25
  Il2CppClass *v20; // x23
  void *v21; // x24
  int32_t v22; // w0
  System_Int32_array *v23; // x23
  System_Int32_array *v24; // x24
  int32_t v25; // w25
  System_Int32_array *v26; // [xsp+0h] [xbp-70h] BYREF
  System_Int32_array *idList; // [xsp+8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v29; // 0:x0.16

  if ( (byte_48E354B & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_1B00CCC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_1B00CCC(&Method_DataManager_GetMasterData_ServantCommentMaster___, v4);
    sub_1B00CCC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    sub_1B00CCC(&ServantCommentManager_TypeInfo, v6);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_1B00CCC(&UserServantCollectionEntity_TypeInfo, v8);
    byte_48E354B = 1;
  }
  v26 = 0LL;
  idList = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_ServantCommentMaster___);
  if ( !this->fields.list )
    goto LABEL_22;
  v11 = (ServantCommentMaster_o *)Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_2F836B0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v13 = Count;
    v14 = 0;
    while ( 1 )
    {
      Instance = (DataManager_o *)this->fields.list;
      if ( !Instance )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)Instance,
               v14,
               (const MethodInfo_2F83740 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v16 = Item;
        methodPtr_low = LOBYTE(UserServantCollectionEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
          && (UserServantCollectionEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == UserServantCollectionEntity_TypeInfo )
        {
          monitor = Item[1].monitor;
          klass = Item[2].klass;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v28.fields.currentCryptoKey = monitor;
          *(_QWORD *)&v28.fields.fakeValue = klass;
          Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45313044(v28, 0LL);
          if ( !v11 )
            break;
          if ( ServantCommentMaster__GetNewList(v11, &idList, &v26, (int32_t)Instance, 0LL) )
          {
            v21 = v16[1].monitor;
            v20 = v16[2].klass;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v29.fields.currentCryptoKey = v21;
            *(_QWORD *)&v29.fields.fakeValue = v20;
            v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45313044(v29, 0LL);
            v23 = v26;
            v24 = idList;
            v25 = v22;
            if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
            ServantCommentManager__SetOpen_39195752(v25, v24, v23, 0LL);
          }
        }
      }
      if ( v13 == ++v14 )
        return;
    }
LABEL_22:
    sub_1B00F28(Instance, v10);
  }
}


void __fastcall UserServantCollectionMaster__continueDeviceUserServantCollection(
        UserServantCollectionMaster_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_int__o *v11; // x20
  __int64 v12; // x1
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

  if ( (byte_48E354C & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_1B00CCC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_1B00CCC(&Method_System_Collections_Generic_List_int__Add__, v4);
    sub_1B00CCC(&Method_System_Collections_Generic_List_int__ToArray__, v5);
    sub_1B00CCC(&Method_System_Collections_Generic_List_int___ctor__, v6);
    sub_1B00CCC(&System_Collections_Generic_List_int__TypeInfo, v7);
    sub_1B00CCC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_1B00CCC(&UserServantCollectionEntity_TypeInfo, v9);
    sub_1B00CCC(&UserServantCollectionManager_TypeInfo, v10);
    byte_48E354C = 1;
  }
  v11 = (System_Collections_Generic_List_int__o *)sub_1B00F18(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v11,
    (const MethodInfo_33A4158 *)Method_System_Collections_Generic_List_int___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_23;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_2F836B0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
                                                                 (const MethodInfo_2F83740 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
          list = (System_Collections_ObjectModel_Collection_T__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45313044(
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
          v12 = (unsigned int)list;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v11,
              (int32_t)list,
              *(const MethodInfo_33A49AC **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
          }
          else
          {
            v11->fields._size = size + 1;
            items->m_Items[size + 1] = (int)list;
          }
        }
      }
      if ( v14 == ++v15 )
        goto LABEL_19;
    }
LABEL_23:
    sub_1B00F28(list, v12);
  }
LABEL_19:
  if ( !v11 )
    goto LABEL_23;
  v22 = System_Collections_Generic_List_int___ToArray(
          v11,
          (const MethodInfo_33A6464 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !UserServantCollectionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo);
  UserServantCollectionManager__SetOld_39277236(v22, 0LL);
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
  const MethodInfo *v20; // x1
  __int64 cachedUserServantCollectionEntityData; // x0
  __int64 v22; // x21
  __int64 v23; // x25
  System_Collections_Generic_List_object__o *v24; // x24
  int32_t v25; // w2
  int32_t v26; // w3
  unsigned __int64 i; // x29
  System_String_o *v28; // x26
  System_String_o *v29; // x0
  System_String_o *v30; // x26
  __int64 v31; // x8
  __int64 v32; // x27
  __int64 v33; // x9
  int *v34; // x10
  __int64 v35; // x0
  __int64 v36; // x8
  __int64 v37; // x27
  __int64 v38; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v39; // x10
  __int64 v40; // x0
  int64_t v41; // x27
  int32_t v42; // w28
  UserServantCollectionEntity_o *v43; // x26
  const MethodInfo *v44; // x3
  __int64 methodPtr_low; // x10
  int32_t status; // w8
  struct System_Object_array *items; // x8
  _QWORD *v48; // x9
  __int64 size; // x10
  Il2CppClass **v50; // x0
  int64_t v51; // x10
  int32_t v52; // w8
  int32_t v53; // w9
  ServantStatusBattleListViewItem_o *v54; // x0
  bool v56; // [xsp+Ch] [xbp-94h]
  int32_t *v57; // [xsp+10h] [xbp-90h]
  int32_t v59; // [xsp+24h] [xbp-7Ch] BYREF
  System_Collections_Generic_List_UserServantCollectionEntity__o *userServantCollectionEntityList; // [xsp+28h] [xbp-78h] BYREF
  __int64 findSuma; // [xsp+30h] [xbp-70h] BYREF
  const MethodInfo *UserId; // [xsp+38h] [xbp-68h] BYREF

  if ( (byte_48E3547 & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataManager_GetMasterData_ServantMaster___, getSum);
    sub_1B00CCC(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, v10);
    sub_1B00CCC(&Method_System_Collections_Generic_List_UserServantCollectionEntity__Add__, v11);
    sub_1B00CCC(&Method_System_Collections_Generic_List_UserServantCollectionEntity__ToArray__, v12);
    sub_1B00CCC(&Method_System_Collections_Generic_List_UserServantCollectionEntity___ctor__, v13);
    sub_1B00CCC(&System_Collections_Generic_List_UserServantCollectionEntity__TypeInfo, v14);
    sub_1B00CCC(&NetworkManager_TypeInfo, v15);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_1B00CCC(&UserServantCollectionEntity_TypeInfo, v17);
    sub_1B00CCC(&StringLiteral_1540/*":"*/, v18);
    byte_48E3547 = 1;
  }
  userServantCollectionEntityList = 0LL;
  findSuma = 0LL;
  v59 = 0;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  UserId = (const MethodInfo *)NetworkManager__get_UserId(0LL);
  v20 = UserId;
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
         v19) )
  {
    *getSum = HIDWORD(findSuma);
    *findSum = findSuma;
    cachedUserServantCollectionEntityData = (__int64)userServantCollectionEntityList;
    if ( userServantCollectionEntityList )
      return (UserServantCollectionEntity_array *)System_Collections_Generic_List_object___ToArray(
                                                    (System_Collections_Generic_List_object__o *)cachedUserServantCollectionEntityData,
                                                    (const MethodInfo_33C3528 *)Method_System_Collections_Generic_List_UserServantCollectionEntity__ToArray__);
LABEL_59:
    sub_1B00F28(cachedUserServantCollectionEntityData, v20);
  }
  cachedUserServantCollectionEntityData = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !cachedUserServantCollectionEntityData )
    goto LABEL_59;
  cachedUserServantCollectionEntityData = (__int64)DataManager__GetMasterData_object_(
                                                     (DataManager_o *)cachedUserServantCollectionEntityData,
                                                     (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !cachedUserServantCollectionEntityData )
    goto LABEL_59;
  v56 = isEquip;
  cachedUserServantCollectionEntityData = (__int64)ServantMaster__GetCollectionList_38438872(
                                                     (ServantMaster_o *)cachedUserServantCollectionEntityData,
                                                     isEquip,
                                                     0LL);
  if ( !cachedUserServantCollectionEntityData )
    goto LABEL_59;
  v22 = *(_QWORD *)(cachedUserServantCollectionEntityData + 24);
  v23 = cachedUserServantCollectionEntityData;
  v24 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_UserServantCollectionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v24,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_UserServantCollectionEntity___ctor__);
  v57 = getSum;
  *getSum = 0;
  *findSum = 0;
  if ( (int)v22 >= 1 )
  {
    for ( i = 0LL; i != (unsigned int)v22; ++i )
    {
      if ( i >= *(unsigned int *)(v23 + 24) )
        sub_1B00F30(cachedUserServantCollectionEntityData, v20);
      v59 = *(_DWORD *)(v23 + 4 * i + 32);
      v28 = System_Int64__ToString((int64_t)&UserId, 0LL);
      v29 = System_Int32__ToString((int32_t)&v59, 0LL);
      v30 = System_String__Concat_60337008(v28, (System_String_o *)StringLiteral_1540/*":"*/, v29, 0LL);
      cachedUserServantCollectionEntityData = (__int64)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( !cachedUserServantCollectionEntityData )
        goto LABEL_59;
      v31 = *(_QWORD *)cachedUserServantCollectionEntityData;
      v32 = cachedUserServantCollectionEntityData;
      v33 = *(unsigned __int16 *)(*(_QWORD *)cachedUserServantCollectionEntityData + 302LL);
      if ( *(_WORD *)(*(_QWORD *)cachedUserServantCollectionEntityData + 302LL) )
      {
        v34 = (int *)(*(_QWORD *)(v31 + 176) + 8LL);
        while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)v34 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
        {
          --v33;
          v34 += 4;
          if ( !v33 )
            goto LABEL_20;
        }
        v35 = v31 + 16LL * *v34 + 312;
      }
      else
      {
LABEL_20:
        v35 = sub_1B52CAC(
                cachedUserServantCollectionEntityData,
                System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                0LL);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v35)(v32, v30, *(_QWORD *)(v35 + 8)) & 1) == 0 )
      {
        v41 = (int64_t)UserId;
        v42 = v59;
        v43 = (UserServantCollectionEntity_o *)sub_1B00F18(UserServantCollectionEntity_TypeInfo);
        UserServantCollectionEntity___ctor_38887736(v43, v41, v42, v44);
        if ( ignoreHideStateSvt )
        {
          if ( !v43 )
            goto LABEL_59;
          cachedUserServantCollectionEntityData = UserServantCollectionEntity__IsHideStateServant(v43, v20);
          if ( (cachedUserServantCollectionEntityData & 1) != 0 )
            continue;
        }
        goto LABEL_49;
      }
      cachedUserServantCollectionEntityData = (__int64)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( !cachedUserServantCollectionEntityData )
        goto LABEL_59;
      v36 = *(_QWORD *)cachedUserServantCollectionEntityData;
      v37 = cachedUserServantCollectionEntityData;
      v38 = *(unsigned __int16 *)(*(_QWORD *)cachedUserServantCollectionEntityData + 302LL);
      if ( *(_WORD *)(*(_QWORD *)cachedUserServantCollectionEntityData + 302LL) )
      {
        v39 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)(*(_QWORD *)(v36 + 176) + 8LL);
        while ( *(v39 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
        {
          --v38;
          v39 += 2;
          if ( !v38 )
            goto LABEL_28;
        }
        v40 = v36 + 16LL * (*(_DWORD *)v39 + 2) + 312;
      }
      else
      {
LABEL_28:
        v40 = sub_1B52CAC(
                cachedUserServantCollectionEntityData,
                System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                2LL);
      }
      cachedUserServantCollectionEntityData = (*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v40)(
                                                v37,
                                                v30,
                                                *(_QWORD *)(v40 + 8));
      if ( cachedUserServantCollectionEntityData
        && (methodPtr_low = LOBYTE(UserServantCollectionEntity_TypeInfo->vtable._0_Equals.methodPtr),
            *(unsigned __int8 *)(*(_QWORD *)cachedUserServantCollectionEntityData + 304LL) >= (unsigned int)methodPtr_low) )
      {
        if ( *(UserServantCollectionEntity_c **)(*(_QWORD *)(*(_QWORD *)cachedUserServantCollectionEntityData + 200LL)
                                               + 8 * methodPtr_low
                                               - 8) == UserServantCollectionEntity_TypeInfo )
          v43 = (UserServantCollectionEntity_o *)cachedUserServantCollectionEntityData;
        else
          v43 = 0LL;
        if ( !ignoreHideStateSvt )
        {
LABEL_44:
          if ( !v43 )
            goto LABEL_59;
          goto LABEL_45;
        }
      }
      else
      {
        v43 = 0LL;
        if ( !ignoreHideStateSvt )
          goto LABEL_44;
      }
      if ( !v43 )
        goto LABEL_59;
      cachedUserServantCollectionEntityData = UserServantCollectionEntity__IsHideStateServant(v43, v20);
      if ( (cachedUserServantCollectionEntityData & 1) != 0 )
        continue;
LABEL_45:
      status = v43->fields.status;
      if ( status != 1 )
      {
        if ( status != 2 )
          goto LABEL_49;
        ++*v57;
      }
      ++*findSum;
LABEL_49:
      if ( !v24 )
        goto LABEL_59;
      items = v24->fields._items;
      v48 = Method_System_Collections_Generic_List_UserServantCollectionEntity__Add__;
      ++v24->fields._version;
      if ( !items )
        goto LABEL_59;
      size = v24->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v24,
          (Il2CppObject *)v43,
          *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v48[4] + 192LL) + 112LL));
      }
      else
      {
        v50 = &items->obj.klass + size;
        v24->fields._size = size + 1;
        v50[4] = (Il2CppClass *)v43;
        sub_1B00C70((ServantStatusBattleListViewItem_o *)(v50 + 4), (int32_t)v43, v25, v26);
      }
    }
  }
  cachedUserServantCollectionEntityData = (__int64)this->fields.cachedUserServantCollectionEntityData;
  if ( !cachedUserServantCollectionEntityData )
    goto LABEL_59;
  v51 = (int64_t)UserId;
  v52 = *findSum;
  v53 = *v57;
  *(_QWORD *)(cachedUserServantCollectionEntityData + 40) = v24;
  v54 = (ServantStatusBattleListViewItem_o *)(cachedUserServantCollectionEntityData + 40);
  LOBYTE(v54[-1].fields.name) = v56;
  BYTE1(v54[-1].fields.name) = ignoreHideStateSvt;
  *(_QWORD *)&v54[-1].fields.isEnabled = v51;
  HIDWORD(v54[-1].fields.name) = v53;
  *(_DWORD *)&v54[-1].fields.isMine = v52;
  sub_1B00C70(v54, (int32_t)v24, v25, v26);
  if ( !v24 )
    goto LABEL_59;
  cachedUserServantCollectionEntityData = (__int64)v24;
  return (UserServantCollectionEntity_array *)System_Collections_Generic_List_object___ToArray(
                                                (System_Collections_Generic_List_object__o *)cachedUserServantCollectionEntityData,
                                                (const MethodInfo_33C3528 *)Method_System_Collections_Generic_List_UserServantCollectionEntity__ToArray__);
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
  __int64 v16; // x1
  __int64 v17; // x22
  unsigned __int64 v18; // x25
  __int64 v19; // x29
  System_String_o *v20; // x0
  __int64 v21; // x1
  System_String_o *v22; // x23
  System_String_o *v23; // x0
  System_String_o *v24; // x23
  __int64 v25; // x8
  __int64 v26; // x24
  __int64 v27; // x9
  int *v28; // x10
  __int64 v29; // x0
  __int64 v30; // x8
  __int64 v31; // x24
  __int64 v32; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v33; // x10
  __int64 v34; // x0
  int32_t v35; // w2
  int32_t v36; // w3
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v39; // x9
  __int64 size; // x10
  Il2CppClass **v41; // x0
  int64_t UserId; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_48E3546 & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataManager_GetMasterData_ServantMaster___, *(_QWORD *)&kind);
    sub_1B00CCC(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, v5);
    sub_1B00CCC(&Method_System_Collections_Generic_List_UserServantCollectionEntity__Add__, v6);
    sub_1B00CCC(&Method_System_Collections_Generic_List_UserServantCollectionEntity__ToArray__, v7);
    sub_1B00CCC(&Method_System_Collections_Generic_List_UserServantCollectionEntity___ctor__, v8);
    sub_1B00CCC(&System_Collections_Generic_List_UserServantCollectionEntity__TypeInfo, v9);
    sub_1B00CCC(&NetworkManager_TypeInfo, v10);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_1B00CCC(&UserServantCollectionEntity_TypeInfo, v12);
    sub_1B00CCC(&StringLiteral_1540/*":"*/, v13);
    byte_48E3546 = 1;
  }
  v14 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_UserServantCollectionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_UserServantCollectionEntity___ctor__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  UserId = NetworkManager__get_UserId(0LL);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_38;
  Instance = (__int64)ServantMaster__GetCollectionList((ServantMaster_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_38;
  v17 = Instance;
  if ( (int)*(_QWORD *)(Instance + 24) >= 1 )
  {
    v18 = 0LL;
    v19 = (unsigned int)*(_QWORD *)(Instance + 24);
    while ( 1 )
    {
      v20 = System_Int64__ToString((int64_t)&UserId, 0LL);
      if ( v18 >= *(unsigned int *)(v17 + 24) )
        sub_1B00F30(v20, v21);
      v22 = v20;
      v23 = System_Int32__ToString((int)v17 + 4 * (int)v18 + 32, 0LL);
      v24 = System_String__Concat_60337008(v22, (System_String_o *)StringLiteral_1540/*":"*/, v23, 0LL);
      Instance = (__int64)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( !Instance )
        break;
      v25 = *(_QWORD *)Instance;
      v26 = Instance;
      v27 = *(unsigned __int16 *)(*(_QWORD *)Instance + 302LL);
      if ( *(_WORD *)(*(_QWORD *)Instance + 302LL) )
      {
        v28 = (int *)(*(_QWORD *)(v25 + 176) + 8LL);
        while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)v28 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
        {
          --v27;
          v28 += 4;
          if ( !v27 )
            goto LABEL_16;
        }
        v29 = v25 + 16LL * *v28 + 312;
      }
      else
      {
LABEL_16:
        v29 = sub_1B52CAC(
                Instance,
                System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                0LL);
      }
      Instance = (*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v29)(v26, v24, *(_QWORD *)(v29 + 8));
      if ( (Instance & 1) != 0 )
      {
        Instance = (__int64)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
        if ( !Instance )
          break;
        v30 = *(_QWORD *)Instance;
        v31 = Instance;
        v32 = *(unsigned __int16 *)(*(_QWORD *)Instance + 302LL);
        if ( *(_WORD *)(*(_QWORD *)Instance + 302LL) )
        {
          v33 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)(*(_QWORD *)(v30 + 176)
                                                                                            + 8LL);
          while ( *(v33 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
          {
            --v32;
            v33 += 2;
            if ( !v32 )
              goto LABEL_24;
          }
          v34 = v30 + 16LL * (*(_DWORD *)v33 + 2) + 312;
        }
        else
        {
LABEL_24:
          v34 = sub_1B52CAC(
                  Instance,
                  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                  2LL);
        }
        Instance = (*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v34)(v31, v24, *(_QWORD *)(v34 + 8));
        if ( !Instance )
          break;
        v16 = Instance;
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
              *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
          }
          else
          {
            v41 = &items->obj.klass + size;
            v14->fields._size = size + 1;
            v41[4] = (Il2CppClass *)v16;
            sub_1B00C70((ServantStatusBattleListViewItem_o *)(v41 + 4), v16, v35, v36);
          }
        }
      }
      if ( ++v18 == v19 )
        goto LABEL_36;
    }
LABEL_38:
    sub_1B00F28(Instance, v16);
  }
LABEL_36:
  if ( !v14 )
    goto LABEL_38;
  return (UserServantCollectionEntity_array *)System_Collections_Generic_List_object___ToArray(
                                                v14,
                                                (const MethodInfo_33C3528 *)Method_System_Collections_Generic_List_UserServantCollectionEntity__ToArray__);
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
  Il2CppObject *v17; // x1
  DataManager_o *v18; // x22
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x24
  System_Collections_Generic_List_object__o *v20; // x23
  __int64 v21; // x0
  __int64 v22; // x1
  unsigned __int64 v23; // x26
  __int64 v24; // x29
  int32_t v25; // w1
  System_String_o *v26; // x0
  System_String_o *v27; // x0
  DataManager_c *klass; // x8
  Il2CppObject *v29; // x25
  DataManager_o *v30; // x24
  __int64 v31; // x9
  int32_t *p_offset; // x10
  __int64 v33; // x0
  DataManager_c *v34; // x8
  Il2CppObject *v35; // x25
  DataManager_o *v36; // x24
  __int64 v37; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v38; // x10
  __int64 v39; // x0
  int32_t v40; // w2
  int32_t v41; // w3
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v44; // x9
  __int64 size; // x10
  Il2CppClass **v46; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-78h] BYREF
  int32_t key; // [xsp+14h] [xbp-6Ch] BYREF
  int64_t UserId; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_48E3548 & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataManager_GetMasterData_ServantMaster___, servantEquipIdStrDic);
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_int__string__Add__, v5);
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_int__string__TryGetValue__, v6);
    sub_1B00CCC(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, v7);
    sub_1B00CCC(&Method_System_Collections_Generic_List_UserServantCollectionEntity__Add__, v8);
    sub_1B00CCC(&Method_System_Collections_Generic_List_UserServantCollectionEntity___ctor__, v9);
    sub_1B00CCC(&System_Collections_Generic_List_UserServantCollectionEntity__TypeInfo, v10);
    sub_1B00CCC(&NetworkManager_TypeInfo, v11);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_1B00CCC(&UserServantCollectionEntity_TypeInfo, v13);
    sub_1B00CCC(&StringLiteral_1540/*":"*/, v14);
    byte_48E3548 = 1;
  }
  key = 0;
  value = 0LL;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  UserId = NetworkManager__get_UserId(0LL);
  v15 = System_Int64__ToString((int64_t)&UserId, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_44;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_44;
  Instance = (DataManager_o *)ServantMaster__GetCollectionList_38438872((ServantMaster_o *)Instance, 1, 0LL);
  if ( !Instance )
    goto LABEL_44;
  v18 = Instance;
  m_CancellationTokenSource = Instance->fields.m_CancellationTokenSource;
  v20 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_UserServantCollectionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_UserServantCollectionEntity___ctor__);
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    v23 = 0LL;
    v24 = (unsigned int)m_CancellationTokenSource;
    while ( 1 )
    {
      if ( v23 >= LODWORD(v18->fields.m_CancellationTokenSource) )
        sub_1B00F30(v21, v22);
      v25 = *((_DWORD *)&v18->fields._DispLog + v23);
      key = v25;
      if ( servantEquipIdStrDic )
      {
        if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
                (System_Collections_Generic_Dictionary_int__object__o *)servantEquipIdStrDic,
                v25,
                &value,
                (const MethodInfo_3037CB8 *)Method_System_Collections_Generic_Dictionary_int__string__TryGetValue__) )
        {
          v26 = System_Int32__ToString((int32_t)&key, 0LL);
          value = (Il2CppObject *)System_String__Concat_60337008(v15, (System_String_o *)StringLiteral_1540/*":"*/, v26, 0LL);
          System_Collections_Generic_Dictionary_int__object___Add(
            (System_Collections_Generic_Dictionary_int__object__o *)servantEquipIdStrDic,
            key,
            value,
            (const MethodInfo_303652C *)Method_System_Collections_Generic_Dictionary_int__string__Add__);
        }
      }
      else
      {
        v27 = System_Int32__ToString((int32_t)&key, 0LL);
        value = (Il2CppObject *)System_String__Concat_60337008(v15, (System_String_o *)StringLiteral_1540/*":"*/, v27, 0LL);
      }
      Instance = (DataManager_o *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( !Instance )
        break;
      klass = Instance->klass;
      v29 = value;
      v30 = Instance;
      v31 = *(unsigned __int16 *)(&Instance->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&Instance->klass->_2.bitflags2 + 3) )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
        {
          --v31;
          p_offset += 4;
          if ( !v31 )
            goto LABEL_20;
        }
        v33 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
      }
      else
      {
LABEL_20:
        v33 = sub_1B52CAC(
                Instance,
                System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                0LL);
      }
      v21 = (*(__int64 (__fastcall **)(DataManager_o *, Il2CppObject *, _QWORD))v33)(v30, v29, *(_QWORD *)(v33 + 8));
      if ( (v21 & 1) != 0 )
      {
        Instance = (DataManager_o *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
        if ( !Instance )
          break;
        v34 = Instance->klass;
        v35 = value;
        v36 = Instance;
        v37 = *(unsigned __int16 *)(&Instance->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&Instance->klass->_2.bitflags2 + 3) )
        {
          v38 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&v34->_1.interfaceOffsets->offset;
          while ( *(v38 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
          {
            --v37;
            v38 += 2;
            if ( !v37 )
              goto LABEL_28;
          }
          v39 = (__int64)(&v34->vtable._2_GetHashCode.method + 2 * *(_DWORD *)v38);
        }
        else
        {
LABEL_28:
          v39 = sub_1B52CAC(
                  Instance,
                  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                  2LL);
        }
        Instance = (DataManager_o *)(*(__int64 (__fastcall **)(DataManager_o *, Il2CppObject *, _QWORD))v39)(
                                      v36,
                                      v35,
                                      *(_QWORD *)(v39 + 8));
        if ( Instance
          && (methodPtr_low = LOBYTE(UserServantCollectionEntity_TypeInfo->vtable._0_Equals.methodPtr),
              LOBYTE(Instance->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
        {
          if ( (UserServantCollectionEntity_c *)Instance->klass->_2.typeHierarchy[methodPtr_low - 1] == UserServantCollectionEntity_TypeInfo )
            v17 = (Il2CppObject *)Instance;
          else
            v17 = 0LL;
          if ( !v20 )
            break;
        }
        else
        {
          v17 = 0LL;
          if ( !v20 )
            break;
        }
        items = v20->fields._items;
        v44 = Method_System_Collections_Generic_List_UserServantCollectionEntity__Add__;
        ++v20->fields._version;
        if ( !items )
          break;
        size = v20->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v20,
            v17,
            *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
        }
        else
        {
          v46 = &items->obj.klass + size;
          v20->fields._size = size + 1;
          v46[4] = (Il2CppClass *)v17;
          sub_1B00C70((ServantStatusBattleListViewItem_o *)(v46 + 4), (int32_t)v17, v40, v41);
        }
      }
      if ( ++v23 == v24 )
        return (System_Collections_Generic_List_UserServantCollectionEntity__o *)v20;
    }
LABEL_44:
    sub_1B00F28(Instance, v17);
  }
  return (System_Collections_Generic_List_UserServantCollectionEntity__o *)v20;
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
  sub_1B00C70((ServantStatusBattleListViewItem_o *)p_cachedUserServantCollectionEntityList, 0, v2, v3);
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
  sub_1B00C70((ServantStatusBattleListViewItem_o *)userServantCollectionEntityList, 0, isEquip, ignoreHideStateServant);
  result = 0;
  if ( this->fields.cachedUserId == userId )
  {
    if ( this->fields.cachedIsEquip == isEquip && this->fields.cachedIgnoreHideStateServant == ignoreHideStateServant )
    {
      *getSum = this->fields.cachedGetSum;
      *findSum = this->fields.cachedFindSum;
      cachedUserServantCollectionEntityList = this->fields.cachedUserServantCollectionEntityList;
      *userServantCollectionEntityList = cachedUserServantCollectionEntityList;
      sub_1B00C70(
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
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)p_cachedUserServantCollectionEntityList,
    (int32_t)userServantCollectionEntityList,
    isEquip,
    ignoreHideStateServant);
}