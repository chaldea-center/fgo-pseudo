void __fastcall UserCommandCodeCollectionMaster___ctor(
        UserCommandCodeCollectionMaster_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A5BD30 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_UserCommandCodeCollectionMaster__UserCommandCodeCollectionEntity__string___ctor__);
    byte_4A5BD30 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    253,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_UserCommandCodeCollectionMaster__UserCommandCodeCollectionEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserCommandCodeCollectionEntity_o *__fastcall UserCommandCodeCollectionMaster__GetEntity(
        UserCommandCodeCollectionMaster_o *this,
        int64_t userId,
        int32_t commandCodeId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A5BD2E & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_UserCommandCodeCollectionMaster__UserCommandCodeCollectionEntity__string__GetEntity__);
    byte_4A5BD2E = 1;
  }
  PK = (Il2CppObject *)UserCommandCodeCollectionEntity__CreatePK(
                         userId,
                         commandCodeId,
                         *(const MethodInfo **)&commandCodeId);
  return (UserCommandCodeCollectionEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                PK,
                                                (const MethodInfo_311DC8C *)Method_DataMasterBase_UserCommandCodeCollectionMaster__UserCommandCodeCollectionEntity__string__GetEntity__);
}


UserCommandCodeCollectionEntity_o *__fastcall UserCommandCodeCollectionMaster__GetEntityDefinitely(
        UserCommandCodeCollectionMaster_o *this,
        int64_t userId,
        int32_t svtId,
        const MethodInfo *method)
{
  System_String_o *v5; // x19
  System_String_o *v6; // x0
  System_String_o *v7; // x19
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *lookup; // x0
  __int64 v9; // x1
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *klass; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v11; // x21
  __int64 v12; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *v15; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v16; // x20
  __int64 v17; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v18; // x10
  __int64 v19; // x0
  int64_t v20; // x20
  int32_t v21; // w21
  UserCommandCodeCollectionEntity_o *v22; // x19
  const MethodInfo *v23; // x3
  UserCommandCodeCollectionEntity_o *v24; // x0
  __int64 methodPtr_low; // x10
  int32_t v27; // [xsp+Ch] [xbp-34h] BYREF
  int64_t v28; // [xsp+18h] [xbp-28h] BYREF

  v28 = userId;
  v27 = svtId;
  if ( (byte_4A5BD31 & 1) == 0 )
  {
    sub_1B885B0(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo);
    sub_1B885B0(&UserCommandCodeCollectionEntity_TypeInfo);
    sub_1B885B0(&StringLiteral_1544/*":"*/);
    byte_4A5BD31 = 1;
  }
  v5 = System_Int64__ToString((int64_t)&v28, 0LL);
  v6 = System_Int32__ToString((int32_t)&v27, 0LL);
  v7 = System_String__Concat_61718292(v5, (System_String_o *)StringLiteral_1544/*":"*/, v6, 0LL);
  lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !lookup )
    goto LABEL_26;
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
          v7,
          *(_QWORD *)(p_method + 8)) & 1) == 0 )
  {
    v20 = v28;
    v21 = v27;
    v22 = (UserCommandCodeCollectionEntity_o *)sub_1B887FC(UserCommandCodeCollectionEntity_TypeInfo);
    UserCommandCodeCollectionEntity___ctor_40041276(v22, v20, v21, v23);
    return v22;
  }
  lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !lookup )
LABEL_26:
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
  v24 = (UserCommandCodeCollectionEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, _QWORD))v19)(
                                               v16,
                                               v7,
                                               *(_QWORD *)(v19 + 8));
  if ( !v24 )
    return 0LL;
  methodPtr_low = LOBYTE(UserCommandCodeCollectionEntity_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(v24->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
    return 0LL;
  if ( (UserCommandCodeCollectionEntity_c *)v24->klass->_2.typeHierarchy[methodPtr_low - 1] == UserCommandCodeCollectionEntity_TypeInfo )
    return v24;
  return 0LL;
}


System_Int32_array *__fastcall UserCommandCodeCollectionMaster__GetNewList(
        UserCommandCodeCollectionMaster_o *this,
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

  if ( (byte_4A5BD35 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&UserCommandCodeCollectionEntity_TypeInfo);
    byte_4A5BD35 = 1;
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
        methodPtr_low = LOBYTE(UserCommandCodeCollectionEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (UserCommandCodeCollectionEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == UserCommandCodeCollectionEntity_TypeInfo )
        {
          list = (System_Collections_ObjectModel_Collection_T__o *)UserCommandCodeCollectionEntity__IsNew(
                                                                     (UserCommandCodeCollectionEntity_o *)list,
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


// local variable allocation has failed, the output may be wrong!
bool __fastcall UserCommandCodeCollectionMaster__IsNew(
        UserCommandCodeCollectionMaster_o *this,
        int32_t commandCodeId,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v7; // w21
  int32_t v8; // w22
  Il2CppObject *Item; // x0
  UserCommandCodeCollectionEntity_o *v10; // x23
  __int64 methodPtr_low; // x10
  Il2CppClass *klass; // x24
  void *monitor; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_4A5BD34 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&UserCommandCodeCollectionEntity_TypeInfo);
    byte_4A5BD34 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_16:
    sub_1B8880C(list, *(_QWORD *)&commandCodeId);
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
      v10 = (UserCommandCodeCollectionEntity_o *)Item;
      methodPtr_low = LOBYTE(UserCommandCodeCollectionEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
        && (UserCommandCodeCollectionEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == UserCommandCodeCollectionEntity_TypeInfo )
      {
        monitor = Item[1].monitor;
        klass = Item[2].klass;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v15.fields.currentCryptoKey = monitor;
        *(_QWORD *)&v15.fields.fakeValue = klass;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v15, 0LL) == commandCodeId )
          return UserCommandCodeCollectionEntity__IsNew(v10, *(const MethodInfo **)&commandCodeId);
      }
    }
    if ( v7 == ++v8 )
      return 0;
  }
}


bool __fastcall UserCommandCodeCollectionMaster__TryGetEntity(
        UserCommandCodeCollectionMaster_o *this,
        UserCommandCodeCollectionEntity_o **entity,
        int64_t userId,
        int32_t commandCodeId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4A5BD2F & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_UserCommandCodeCollectionMaster__UserCommandCodeCollectionEntity__string__TryGetEntity__);
    byte_4A5BD2F = 1;
  }
  PK = (Il2CppObject *)UserCommandCodeCollectionEntity__CreatePK(userId, commandCodeId, (const MethodInfo *)userId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_UserCommandCodeCollectionMaster__UserCommandCodeCollectionEntity__string__TryGetEntity__);
}


void __fastcall UserCommandCodeCollectionMaster__continueDeviceUserCommandCodeCollection(
        UserCommandCodeCollectionMaster_o *this,
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

  if ( (byte_4A5BD36 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&UserCommandCodeCollectionEntity_TypeInfo);
    sub_1B885B0(&UserCommandCodeCollectionManager_TypeInfo);
    byte_4A5BD36 = 1;
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
        methodPtr_low = LOBYTE(UserCommandCodeCollectionEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (UserCommandCodeCollectionEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == UserCommandCodeCollectionEntity_TypeInfo
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
  if ( !UserCommandCodeCollectionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserCommandCodeCollectionManager_TypeInfo);
  UserCommandCodeCollectionManager__SetOld_40535512(v14, 0LL);
}


UserCommandCodeCollectionEntity_array *__fastcall UserCommandCodeCollectionMaster__getCollectionList(
        UserCommandCodeCollectionMaster_o *this,
        int32_t *getSum,
        int32_t *findSum,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  Il2CppObject *v6; // x1
  DataManager_o *v7; // x22
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x20
  System_Collections_Generic_List_object__o *v9; // x23
  unsigned __int64 v10; // x27
  System_String_o *v11; // x24
  System_String_o *v12; // x0
  System_String_o *v13; // x24
  DataManager_c *klass; // x8
  DataManager_o *v15; // x25
  __int64 v16; // x9
  int *p_offset; // x10
  __int64 v18; // x0
  DataManager_c *v19; // x8
  DataManager_o *v20; // x25
  __int64 v21; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v22; // x10
  __int64 v23; // x0
  int64_t v24; // x25
  int32_t v25; // w19
  UserCommandCodeCollectionEntity_o *v26; // x24
  const MethodInfo *v27; // x3
  int32_t v28; // w2
  int32_t v29; // w3
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x0
  ServantStatusBattleListViewItem_o *v34; // x0
  __int64 v35; // x8
  System_Collections_Generic_List_object__o *v36; // x0
  __int64 methodPtr_low; // x10
  int datalist; // w8
  struct System_Object_array *v39; // x8
  _QWORD *v40; // x9
  __int64 v41; // x10
  Il2CppClass **v42; // x0
  int32_t v46; // [xsp+14h] [xbp-6Ch] BYREF
  int64_t UserId; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4A5BD33 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_CommandCodeMaster___);
    sub_1B885B0(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_UserCommandCodeCollectionEntity__TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&UserCommandCodeCollectionEntity_TypeInfo);
    sub_1B885B0(&StringLiteral_1544/*":"*/);
    byte_4A5BD33 = 1;
  }
  v46 = 0;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  UserId = NetworkManager__get_UserId(0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_49;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  if ( !Instance )
    goto LABEL_49;
  Instance = (DataManager_o *)CommandCodeMaster__GetCollectionList((CommandCodeMaster_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_49;
  v7 = Instance;
  m_CancellationTokenSource = Instance->fields.m_CancellationTokenSource;
  v9 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_UserCommandCodeCollectionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity___ctor__);
  *getSum = 0;
  *findSum = 0;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    v10 = 0LL;
    while ( 1 )
    {
      if ( v10 >= LODWORD(v7->fields.m_CancellationTokenSource) )
        sub_1B88814(Instance, v6);
      v46 = *((_DWORD *)&v7->fields._DispLog + v10);
      v11 = System_Int64__ToString((int64_t)&UserId, 0LL);
      v12 = System_Int32__ToString((int32_t)&v46, 0LL);
      v13 = System_String__Concat_61718292(v11, (System_String_o *)StringLiteral_1544/*":"*/, v12, 0LL);
      Instance = (DataManager_o *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( !Instance )
        goto LABEL_49;
      klass = Instance->klass;
      v15 = Instance;
      v16 = *(unsigned __int16 *)(&Instance->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&Instance->klass->_2.bitflags2 + 3) )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
        {
          --v16;
          p_offset += 4;
          if ( !v16 )
            goto LABEL_16;
        }
        v18 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
      }
      else
      {
LABEL_16:
        v18 = sub_1BDA590(
                Instance,
                System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                0LL);
      }
      if ( ((*(__int64 (__fastcall **)(DataManager_o *, System_String_o *, _QWORD))v18)(v15, v13, *(_QWORD *)(v18 + 8)) & 1) != 0 )
        break;
      v24 = UserId;
      v25 = v46;
      v26 = (UserCommandCodeCollectionEntity_o *)sub_1B887FC(UserCommandCodeCollectionEntity_TypeInfo);
      UserCommandCodeCollectionEntity___ctor_40041276(v26, v24, v25, v27);
      if ( !v9 )
        goto LABEL_49;
      items = v9->fields._items;
      v31 = Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity__Add__;
      ++v9->fields._version;
      if ( !items )
        goto LABEL_49;
      size = v9->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        v35 = v31[4];
        v36 = v9;
        v6 = (Il2CppObject *)v26;
LABEL_44:
        System_Collections_Generic_List_object___AddWithResize(
          v36,
          v6,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v35 + 192) + 112LL));
        goto LABEL_45;
      }
      v33 = &items->obj.klass + size;
      v9->fields._size = size + 1;
      v33[4] = (Il2CppClass *)v26;
      v34 = (ServantStatusBattleListViewItem_o *)(v33 + 4);
      LODWORD(v6) = (_DWORD)v26;
LABEL_42:
      sub_1B88554(v34, (int32_t)v6, v28, v29);
LABEL_45:
      if ( ++v10 == (unsigned int)m_CancellationTokenSource )
        return (UserCommandCodeCollectionEntity_array *)System_Collections_Generic_List_object___ToArray(
                                                          v9,
                                                          (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity__ToArray__);
    }
    Instance = (DataManager_o *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
    if ( !Instance )
      goto LABEL_49;
    v19 = Instance->klass;
    v20 = Instance;
    v21 = *(unsigned __int16 *)(&Instance->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Instance->klass->_2.bitflags2 + 3) )
    {
      v22 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&v19->_1.interfaceOffsets->offset;
      while ( *(v22 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
      {
        --v21;
        v22 += 2;
        if ( !v21 )
          goto LABEL_24;
      }
      v23 = (__int64)(&v19->vtable._2_GetHashCode.method + 2 * *(_DWORD *)v22);
    }
    else
    {
LABEL_24:
      v23 = sub_1BDA590(Instance, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 2LL);
    }
    Instance = (DataManager_o *)(*(__int64 (__fastcall **)(DataManager_o *, System_String_o *, _QWORD))v23)(
                                  v20,
                                  v13,
                                  *(_QWORD *)(v23 + 8));
    if ( !Instance )
      goto LABEL_49;
    v6 = (Il2CppObject *)Instance;
    methodPtr_low = LOBYTE(UserCommandCodeCollectionEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(Instance->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (UserCommandCodeCollectionEntity_c *)Instance->klass->_2.typeHierarchy[methodPtr_low - 1] != UserCommandCodeCollectionEntity_TypeInfo )
    {
      goto LABEL_49;
    }
    datalist = (int)Instance->fields.datalist;
    if ( datalist != 1 )
    {
      if ( datalist != 2 )
        goto LABEL_38;
      ++*getSum;
    }
    ++*findSum;
LABEL_38:
    if ( !v9 )
      goto LABEL_49;
    v39 = v9->fields._items;
    v40 = Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity__Add__;
    ++v9->fields._version;
    if ( !v39 )
      goto LABEL_49;
    v41 = v9->fields._size;
    if ( (unsigned int)v41 >= v39->max_length )
    {
      v35 = v40[4];
      v36 = v9;
      goto LABEL_44;
    }
    v42 = &v39->obj.klass + v41;
    v9->fields._size = v41 + 1;
    v42[4] = (Il2CppClass *)v6;
    v34 = (ServantStatusBattleListViewItem_o *)(v42 + 4);
    goto LABEL_42;
  }
  if ( !v9 )
LABEL_49:
    sub_1B8880C(Instance, v6);
  return (UserCommandCodeCollectionEntity_array *)System_Collections_Generic_List_object___ToArray(
                                                    v9,
                                                    (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity__ToArray__);
}


System_Int32_array *__fastcall UserCommandCodeCollectionMaster__getCommandCodeIdList(
        UserCommandCodeCollectionMaster_o *this,
        int64_t userId,
        int32_t svtId,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v7; // x1

  if ( (byte_4A5BD37 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5BD37 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___)) == 0LL )
  {
    sub_1B8880C(Instance, v7);
  }
  return UserServantCommandCodeMaster__getCommandCodeIdList(
           (UserServantCommandCodeMaster_o *)Instance,
           userId,
           svtId,
           0LL);
}


UserCommandCodeCollectionEntity_array *__fastcall UserCommandCodeCollectionMaster__getList(
        UserCommandCodeCollectionMaster_o *this,
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

  if ( (byte_4A5BD32 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_UserCommandCodeCollectionEntity__TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&UserCommandCodeCollectionEntity_TypeInfo);
    sub_1B885B0(&StringLiteral_1544/*":"*/);
    byte_4A5BD32 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_UserCommandCodeCollectionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity___ctor__);
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
        methodPtr_low = LOBYTE(UserCommandCodeCollectionEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) < (unsigned int)methodPtr_low
          || *(UserCommandCodeCollectionEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) != UserCommandCodeCollectionEntity_TypeInfo )
        {
          break;
        }
        if ( *(_DWORD *)(Instance + 40) == kind )
        {
          if ( !v5 )
            break;
          items = v5->fields._items;
          v30 = Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity__Add__;
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
  return (UserCommandCodeCollectionEntity_array *)System_Collections_Generic_List_object___ToArray(
                                                    v5,
                                                    (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity__ToArray__);
}