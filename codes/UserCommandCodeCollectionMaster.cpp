void __fastcall UserCommandCodeCollectionMaster___ctor(
        UserCommandCodeCollectionMaster_o *this,
        const MethodInfo *method)
{
  if ( (byte_49FCEDD & 1) == 0 )
  {
    sub_1B640C8(
      &Method_DataMasterBase_UserCommandCodeCollectionMaster__UserCommandCodeCollectionEntity__string___ctor__,
      method);
    byte_49FCEDD = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    253,
    (const MethodInfo_30D41BC *)Method_DataMasterBase_UserCommandCodeCollectionMaster__UserCommandCodeCollectionEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserCommandCodeCollectionEntity_o *__fastcall UserCommandCodeCollectionMaster__GetEntity(
        UserCommandCodeCollectionMaster_o *this,
        int64_t userId,
        int32_t commandCodeId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_49FCEDB & 1) == 0 )
  {
    sub_1B640C8(
      &Method_DataMasterBase_UserCommandCodeCollectionMaster__UserCommandCodeCollectionEntity__string__GetEntity__,
      userId);
    byte_49FCEDB = 1;
  }
  PK = (Il2CppObject *)UserCommandCodeCollectionEntity__CreatePK(
                         userId,
                         commandCodeId,
                         *(const MethodInfo **)&commandCodeId);
  return (UserCommandCodeCollectionEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                PK,
                                                (const MethodInfo_30D41FC *)Method_DataMasterBase_UserCommandCodeCollectionMaster__UserCommandCodeCollectionEntity__string__GetEntity__);
}


UserCommandCodeCollectionEntity_o *__fastcall UserCommandCodeCollectionMaster__GetEntityDefinitely(
        UserCommandCodeCollectionMaster_o *this,
        int64_t userId,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  System_String_o *v7; // x19
  System_String_o *v8; // x0
  System_String_o *v9; // x19
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *lookup; // x0
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *klass; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v12; // x21
  __int64 v13; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *v18; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v19; // x20
  __int64 v20; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v21; // x10
  __int64 v22; // x0
  int64_t v23; // x20
  int32_t v24; // w21
  UserCommandCodeCollectionEntity_o *v25; // x19
  const MethodInfo *v26; // x3
  UserCommandCodeCollectionEntity_o *v27; // x0
  __int64 methodPtr_low; // x10
  int32_t v30; // [xsp+Ch] [xbp-34h] BYREF
  int64_t v31; // [xsp+18h] [xbp-28h] BYREF

  v31 = userId;
  v30 = svtId;
  if ( (byte_49FCEDE & 1) == 0 )
  {
    sub_1B640C8(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, userId);
    sub_1B640C8(&UserCommandCodeCollectionEntity_TypeInfo, v5);
    sub_1B640C8(&StringLiteral_1546/*":"*/, v6);
    byte_49FCEDE = 1;
  }
  v7 = System_Int64__ToString((int64_t)&v31, 0LL);
  v8 = System_Int32__ToString((int32_t)&v30, 0LL);
  v9 = System_String__Concat_61386656(v7, (System_String_o *)StringLiteral_1546/*":"*/, v8, 0LL);
  lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !lookup )
    goto LABEL_26;
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
    p_method = sub_1BB60A8(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 0LL);
  }
  if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, _QWORD))p_method)(
          v12,
          v9,
          *(_QWORD *)(p_method + 8)) & 1) == 0 )
  {
    v23 = v31;
    v24 = v30;
    v25 = (UserCommandCodeCollectionEntity_o *)sub_1B64314(UserCommandCodeCollectionEntity_TypeInfo, v16, v17);
    UserCommandCodeCollectionEntity___ctor_39624940(v25, v23, v24, v26);
    return v25;
  }
  lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !lookup )
LABEL_26:
    sub_1B64324(lookup);
  v18 = lookup->klass;
  v19 = lookup;
  v20 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
  {
    v21 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&v18->_1.interfaceOffsets->offset;
    while ( *(v21 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      --v20;
      v21 += 2;
      if ( !v20 )
        goto LABEL_16;
    }
    v22 = (__int64)&v18->vtable[*(_DWORD *)v21 + 2].method;
  }
  else
  {
LABEL_16:
    v22 = sub_1BB60A8(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 2LL);
  }
  v27 = (UserCommandCodeCollectionEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, _QWORD))v22)(
                                               v19,
                                               v9,
                                               *(_QWORD *)(v22 + 8));
  if ( !v27 )
    return 0LL;
  methodPtr_low = LOBYTE(UserCommandCodeCollectionEntity_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(v27->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
    return 0LL;
  if ( (UserCommandCodeCollectionEntity_c *)v27->klass->_2.typeHierarchy[methodPtr_low - 1] == UserCommandCodeCollectionEntity_TypeInfo )
    return v27;
  return 0LL;
}


System_Int32_array *__fastcall UserCommandCodeCollectionMaster__GetNewList(
        UserCommandCodeCollectionMaster_o *this,
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
  const MethodInfo *v15; // x1
  System_Collections_ObjectModel_Collection_T__o *v16; // x23
  __int64 methodPtr_low; // x10
  void *monitor; // x23
  System_Collections_ObjectModel_Collection_T__c *klass; // x24
  struct System_Int32_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v24; // 0:x0.16

  if ( (byte_49FCEE2 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__ToArray__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v7);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v8);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    sub_1B640C8(&UserCommandCodeCollectionEntity_TypeInfo, v10);
    byte_49FCEE2 = 1;
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
        v16 = list;
        methodPtr_low = LOBYTE(UserCommandCodeCollectionEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (UserCommandCodeCollectionEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == UserCommandCodeCollectionEntity_TypeInfo )
        {
          list = (System_Collections_ObjectModel_Collection_T__o *)UserCommandCodeCollectionEntity__IsNew(
                                                                     (UserCommandCodeCollectionEntity_o *)list,
                                                                     v15);
          if ( ((unsigned __int8)list & 1) != 0 )
          {
            klass = v16[1].klass;
            monitor = v16[1].monitor;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v24.fields.currentCryptoKey = klass;
            *(_QWORD *)&v24.fields.fakeValue = monitor;
            list = (System_Collections_ObjectModel_Collection_T__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                                                                       v24,
                                                                       0LL);
            if ( !v11 )
              break;
            items = v11->fields._items;
            v21 = Method_System_Collections_Generic_List_int__Add__;
            ++v11->fields._version;
            if ( !items )
              break;
            size = v11->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v11,
                (int32_t)list,
                *(const MethodInfo_348FEDC **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
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
bool __fastcall UserCommandCodeCollectionMaster__IsNew(
        UserCommandCodeCollectionMaster_o *this,
        int32_t commandCodeId,
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
  UserCommandCodeCollectionEntity_o *v13; // x23
  __int64 methodPtr_low; // x10
  Il2CppClass *klass; // x24
  void *monitor; // x25
  const MethodInfo *v17; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  if ( (byte_49FCEE1 & 1) == 0 )
  {
    sub_1B640C8(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&commandCodeId);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_1B640C8(&UserCommandCodeCollectionEntity_TypeInfo, v7);
    byte_49FCEE1 = 1;
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
      v13 = (UserCommandCodeCollectionEntity_o *)Item;
      methodPtr_low = LOBYTE(UserCommandCodeCollectionEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
        && (UserCommandCodeCollectionEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == UserCommandCodeCollectionEntity_TypeInfo )
      {
        monitor = Item[1].monitor;
        klass = Item[2].klass;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v19.fields.currentCryptoKey = monitor;
        *(_QWORD *)&v19.fields.fakeValue = klass;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v19, 0LL) == commandCodeId )
          return UserCommandCodeCollectionEntity__IsNew(v13, v17);
      }
    }
    if ( v10 == ++v11 )
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

  if ( (byte_49FCEDC & 1) == 0 )
  {
    sub_1B640C8(
      &Method_DataMasterBase_UserCommandCodeCollectionMaster__UserCommandCodeCollectionEntity__string__TryGetEntity__,
      entity);
    byte_49FCEDC = 1;
  }
  PK = (Il2CppObject *)UserCommandCodeCollectionEntity__CreatePK(userId, commandCodeId, (const MethodInfo *)userId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_30D424C *)Method_DataMasterBase_UserCommandCodeCollectionMaster__UserCommandCodeCollectionEntity__string__TryGetEntity__);
}


void __fastcall UserCommandCodeCollectionMaster__continueDeviceUserCommandCodeCollection(
        UserCommandCodeCollectionMaster_o *this,
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

  if ( (byte_49FCEE3 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__ToArray__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v7);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v8);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    sub_1B640C8(&UserCommandCodeCollectionEntity_TypeInfo, v10);
    sub_1B640C8(&UserCommandCodeCollectionManager_TypeInfo, v11);
    byte_49FCEE3 = 1;
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
        methodPtr_low = LOBYTE(UserCommandCodeCollectionEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (UserCommandCodeCollectionEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == UserCommandCodeCollectionEntity_TypeInfo
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
  if ( !UserCommandCodeCollectionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserCommandCodeCollectionManager_TypeInfo);
  UserCommandCodeCollectionManager__SetOld_40200496(v22, 0LL);
}


UserCommandCodeCollectionEntity_array *__fastcall UserCommandCodeCollectionMaster__getCollectionList(
        UserCommandCodeCollectionMaster_o *this,
        int32_t *getSum,
        int32_t *findSum,
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
  DataManager_o *Instance; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  DataManager_o *v17; // x22
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x20
  System_Collections_Generic_List_object__o *v19; // x23
  __int64 v20; // x1
  unsigned __int64 v21; // x27
  System_String_o *v22; // x24
  System_String_o *v23; // x0
  System_String_o *v24; // x24
  DataManager_c *klass; // x8
  DataManager_o *v26; // x25
  __int64 v27; // x9
  int *p_offset; // x10
  __int64 v29; // x0
  __int64 v30; // x1
  __int64 v31; // x2
  DataManager_c *v32; // x8
  DataManager_o *v33; // x25
  __int64 v34; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v35; // x10
  __int64 v36; // x0
  int64_t v37; // x25
  int32_t v38; // w19
  UserCommandCodeCollectionEntity_o *v39; // x24
  const MethodInfo *v40; // x3
  int32_t v41; // w2
  int32_t v42; // w3
  struct System_Object_array *items; // x8
  _QWORD *v44; // x9
  __int64 size; // x10
  Il2CppClass **v46; // x0
  ServantStatusBattleListViewItem_o *v47; // x0
  Il2CppObject *v48; // x1
  __int64 v49; // x8
  System_Collections_Generic_List_object__o *v50; // x0
  __int64 methodPtr_low; // x10
  int datalist; // w8
  struct System_Object_array *v53; // x8
  _QWORD *v54; // x9
  __int64 v55; // x10
  Il2CppClass **v56; // x0
  int32_t v60; // [xsp+14h] [xbp-6Ch] BYREF
  int64_t UserId; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_49FCEE0 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_CommandCodeMaster___, getSum);
    sub_1B640C8(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity__Add__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity__ToArray__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity___ctor__, v8);
    sub_1B640C8(&System_Collections_Generic_List_UserCommandCodeCollectionEntity__TypeInfo, v9);
    sub_1B640C8(&NetworkManager_TypeInfo, v10);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_1B640C8(&UserCommandCodeCollectionEntity_TypeInfo, v12);
    sub_1B640C8(&StringLiteral_1546/*":"*/, v13);
    byte_49FCEE0 = 1;
  }
  v60 = 0;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  UserId = NetworkManager__get_UserId(0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_49;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  if ( !Instance )
    goto LABEL_49;
  Instance = (DataManager_o *)CommandCodeMaster__GetCollectionList((CommandCodeMaster_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_49;
  v17 = Instance;
  m_CancellationTokenSource = Instance->fields.m_CancellationTokenSource;
  v19 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_UserCommandCodeCollectionEntity__TypeInfo,
                                                       v15,
                                                       v16);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity___ctor__);
  *getSum = 0;
  *findSum = 0;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    v21 = 0LL;
    while ( 1 )
    {
      if ( v21 >= LODWORD(v17->fields.m_CancellationTokenSource) )
        sub_1B6432C(Instance, v20);
      v60 = *((_DWORD *)&v17->fields._DispLog + v21);
      v22 = System_Int64__ToString((int64_t)&UserId, 0LL);
      v23 = System_Int32__ToString((int32_t)&v60, 0LL);
      v24 = System_String__Concat_61386656(v22, (System_String_o *)StringLiteral_1546/*":"*/, v23, 0LL);
      Instance = (DataManager_o *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( !Instance )
        goto LABEL_49;
      klass = Instance->klass;
      v26 = Instance;
      v27 = *(unsigned __int16 *)(&Instance->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&Instance->klass->_2.bitflags2 + 3) )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
        {
          --v27;
          p_offset += 4;
          if ( !v27 )
            goto LABEL_16;
        }
        v29 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
      }
      else
      {
LABEL_16:
        v29 = sub_1BB60A8(
                Instance,
                System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                0LL);
      }
      if ( ((*(__int64 (__fastcall **)(DataManager_o *, System_String_o *, _QWORD))v29)(v26, v24, *(_QWORD *)(v29 + 8)) & 1) != 0 )
        break;
      v37 = UserId;
      v38 = v60;
      v39 = (UserCommandCodeCollectionEntity_o *)sub_1B64314(UserCommandCodeCollectionEntity_TypeInfo, v30, v31);
      UserCommandCodeCollectionEntity___ctor_39624940(v39, v37, v38, v40);
      if ( !v19 )
        goto LABEL_49;
      items = v19->fields._items;
      v44 = Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity__Add__;
      ++v19->fields._version;
      if ( !items )
        goto LABEL_49;
      size = v19->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        v49 = v44[4];
        v50 = v19;
        v48 = (Il2CppObject *)v39;
LABEL_44:
        System_Collections_Generic_List_object___AddWithResize(
          v50,
          v48,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v49 + 192) + 112LL));
        goto LABEL_45;
      }
      v46 = &items->obj.klass + size;
      v19->fields._size = size + 1;
      v46[4] = (Il2CppClass *)v39;
      v47 = (ServantStatusBattleListViewItem_o *)(v46 + 4);
      LODWORD(v48) = (_DWORD)v39;
LABEL_42:
      sub_1B6406C(v47, (int32_t)v48, v41, v42);
LABEL_45:
      if ( ++v21 == (unsigned int)m_CancellationTokenSource )
        return (UserCommandCodeCollectionEntity_array *)System_Collections_Generic_List_object___ToArray(
                                                          v19,
                                                          (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity__ToArray__);
    }
    Instance = (DataManager_o *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
    if ( !Instance )
      goto LABEL_49;
    v32 = Instance->klass;
    v33 = Instance;
    v34 = *(unsigned __int16 *)(&Instance->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Instance->klass->_2.bitflags2 + 3) )
    {
      v35 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&v32->_1.interfaceOffsets->offset;
      while ( *(v35 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
      {
        --v34;
        v35 += 2;
        if ( !v34 )
          goto LABEL_24;
      }
      v36 = (__int64)(&v32->vtable._2_GetHashCode.method + 2 * *(_DWORD *)v35);
    }
    else
    {
LABEL_24:
      v36 = sub_1BB60A8(Instance, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 2LL);
    }
    Instance = (DataManager_o *)(*(__int64 (__fastcall **)(DataManager_o *, System_String_o *, _QWORD))v36)(
                                  v33,
                                  v24,
                                  *(_QWORD *)(v36 + 8));
    if ( !Instance )
      goto LABEL_49;
    v48 = (Il2CppObject *)Instance;
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
    if ( !v19 )
      goto LABEL_49;
    v53 = v19->fields._items;
    v54 = Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity__Add__;
    ++v19->fields._version;
    if ( !v53 )
      goto LABEL_49;
    v55 = v19->fields._size;
    if ( (unsigned int)v55 >= v53->max_length )
    {
      v49 = v54[4];
      v50 = v19;
      goto LABEL_44;
    }
    v56 = &v53->obj.klass + v55;
    v19->fields._size = v55 + 1;
    v56[4] = (Il2CppClass *)v48;
    v47 = (ServantStatusBattleListViewItem_o *)(v56 + 4);
    goto LABEL_42;
  }
  if ( !v19 )
LABEL_49:
    sub_1B64324(Instance);
  return (UserCommandCodeCollectionEntity_array *)System_Collections_Generic_List_object___ToArray(
                                                    v19,
                                                    (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity__ToArray__);
}


System_Int32_array *__fastcall UserCommandCodeCollectionMaster__getCommandCodeIdList(
        UserCommandCodeCollectionMaster_o *this,
        int64_t userId,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v6; // x1
  Il2CppObject *Instance; // x0

  if ( (byte_49FCEE4 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___, userId);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_49FCEE4 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___)) == 0LL )
  {
    sub_1B64324(Instance);
  }
  return UserServantCommandCodeMaster__getCommandCodeIdList(
           (UserServantCommandCodeMaster_o *)Instance,
           userId,
           svtId,
           0LL);
}


// local variable allocation has failed, the output may be wrong!
UserCommandCodeCollectionEntity_array *__fastcall UserCommandCodeCollectionMaster__getList(
        UserCommandCodeCollectionMaster_o *this,
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

  if ( (byte_49FCEDF & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, *(_QWORD *)&kind);
    sub_1B640C8(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity__Add__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity__ToArray__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity___ctor__, v8);
    sub_1B640C8(&System_Collections_Generic_List_UserCommandCodeCollectionEntity__TypeInfo, v9);
    sub_1B640C8(&NetworkManager_TypeInfo, v10);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_1B640C8(&UserCommandCodeCollectionEntity_TypeInfo, v12);
    sub_1B640C8(&StringLiteral_1546/*":"*/, v13);
    byte_49FCEDF = 1;
  }
  v14 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_UserCommandCodeCollectionEntity__TypeInfo,
                                                       *(_QWORD *)&kind,
                                                       method);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity___ctor__);
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
        methodPtr_low = LOBYTE(UserCommandCodeCollectionEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) < (unsigned int)methodPtr_low
          || *(UserCommandCodeCollectionEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) != UserCommandCodeCollectionEntity_TypeInfo )
        {
          break;
        }
        if ( *(_DWORD *)(Instance + 40) == kind )
        {
          if ( !v14 )
            break;
          items = v14->fields._items;
          v39 = Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity__Add__;
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
  return (UserCommandCodeCollectionEntity_array *)System_Collections_Generic_List_object___ToArray(
                                                    v14,
                                                    (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity__ToArray__);
}