void __fastcall UserCommandCodeCollectionMaster___ctor(
        UserCommandCodeCollectionMaster_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B4577C & 1) == 0 )
  {
    sub_1BDB878(
      &Method_DataMasterBase_UserCommandCodeCollectionMaster__UserCommandCodeCollectionEntity__string___ctor__,
      method);
    byte_4B4577C = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    259,
    (const MethodInfo_32E45D0 *)Method_DataMasterBase_UserCommandCodeCollectionMaster__UserCommandCodeCollectionEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserCommandCodeCollectionEntity_o *__fastcall UserCommandCodeCollectionMaster__GetEntity(
        UserCommandCodeCollectionMaster_o *this,
        int64_t userId,
        int32_t commandCodeId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B4577A & 1) == 0 )
  {
    sub_1BDB878(
      &Method_DataMasterBase_UserCommandCodeCollectionMaster__UserCommandCodeCollectionEntity__string__GetEntity__,
      userId);
    byte_4B4577A = 1;
  }
  PK = (Il2CppObject *)UserCommandCodeCollectionEntity__CreatePK(
                         userId,
                         commandCodeId,
                         *(const MethodInfo **)&commandCodeId);
  return (UserCommandCodeCollectionEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                PK,
                                                (const MethodInfo_32E68F4 *)Method_DataMasterBase_UserCommandCodeCollectionMaster__UserCommandCodeCollectionEntity__string__GetEntity__);
}


UserCommandCodeCollectionEntity_o *__fastcall UserCommandCodeCollectionMaster__GetEntityDefinitely(
        UserCommandCodeCollectionMaster_o *this,
        int64_t userId,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_String_o *v8; // x19
  System_String_o *v9; // x0
  System_String_o *v10; // x19
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *lookup; // x0
  __int64 v12; // x1
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__c *klass; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *v14; // x21
  __int64 v15; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__c *v18; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *v19; // x20
  __int64 v20; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__UserCommandCodeCollectionEntity__c **v21; // x10
  __int64 v22; // x0
  int64_t v23; // x20
  int32_t v24; // w21
  UserCommandCodeCollectionEntity_o *v25; // x19
  const MethodInfo *v26; // x3
  int32_t v28; // [xsp+4h] [xbp-3Ch] BYREF
  int64_t v29; // [xsp+8h] [xbp-38h] BYREF

  v29 = userId;
  v28 = svtId;
  if ( (byte_4B4577D & 1) == 0 )
  {
    sub_1BDB878(
      &Method_DataMasterBase_UserCommandCodeCollectionMaster__UserCommandCodeCollectionEntity__string__get_lookup__,
      userId);
    sub_1BDB878(&System_Collections_Generic_IReadOnlyDictionary_string__UserCommandCodeCollectionEntity__TypeInfo, v5);
    sub_1BDB878(&UserCommandCodeCollectionEntity_TypeInfo, v6);
    sub_1BDB878(&StringLiteral_1479/*":"*/, v7);
    byte_4B4577D = 1;
  }
  v8 = System_Int64__ToString((int64_t)&v29, 0LL);
  v9 = System_Int32__ToString((int32_t)&v28, 0LL);
  v10 = System_String__Concat_62610508(v8, (System_String_o *)StringLiteral_1479/*":"*/, v9, 0LL);
  lookup = DataMasterBase_object__object__object___get_lookup(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             (const MethodInfo_32E46E8 *)Method_DataMasterBase_UserCommandCodeCollectionMaster__UserCommandCodeCollectionEntity__string__get_lookup__);
  if ( !lookup )
    goto LABEL_21;
  klass = lookup->klass;
  v14 = lookup;
  v15 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IReadOnlyDictionary_string__UserCommandCodeCollectionEntity__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__UserCommandCodeCollectionEntity__TypeInfo )
    {
      --v15;
      p_offset += 4;
      if ( !v15 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1C2C00C(
                 lookup,
                 System_Collections_Generic_IReadOnlyDictionary_string__UserCommandCodeCollectionEntity__TypeInfo,
                 0LL);
  }
  if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *, System_String_o *, _QWORD))p_method)(
          v14,
          v10,
          *(_QWORD *)(p_method + 8)) & 1) == 0 )
  {
    v23 = v29;
    v24 = v28;
    v25 = (UserCommandCodeCollectionEntity_o *)sub_1BDBAC4(UserCommandCodeCollectionEntity_TypeInfo);
    UserCommandCodeCollectionEntity___ctor_41939740(v25, v23, v24, v26);
    return v25;
  }
  lookup = DataMasterBase_object__object__object___get_lookup(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             (const MethodInfo_32E46E8 *)Method_DataMasterBase_UserCommandCodeCollectionMaster__UserCommandCodeCollectionEntity__string__get_lookup__);
  if ( !lookup )
LABEL_21:
    sub_1BDBAD4(lookup, v12);
  v18 = lookup->klass;
  v19 = lookup;
  v20 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
  {
    v21 = (System_Collections_Generic_IReadOnlyDictionary_string__UserCommandCodeCollectionEntity__c **)&v18->_1.interfaceOffsets->offset;
    while ( *(v21 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__UserCommandCodeCollectionEntity__TypeInfo )
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
    v22 = sub_1C2C00C(
            lookup,
            System_Collections_Generic_IReadOnlyDictionary_string__UserCommandCodeCollectionEntity__TypeInfo,
            2LL);
  }
  return (UserCommandCodeCollectionEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *, System_String_o *, _QWORD))v22)(
                                                v19,
                                                v10,
                                                *(_QWORD *)(v22 + 8));
}


System_Int32_array *__fastcall UserCommandCodeCollectionMaster__GetNewList(
        UserCommandCodeCollectionMaster_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_int__o *v9; // x20
  const MethodInfo *v10; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int v12; // w21
  int32_t v13; // w22
  System_Collections_ObjectModel_Collection_T__o *v14; // x23
  void *monitor; // x23
  System_Collections_ObjectModel_Collection_T__c *klass; // x24
  struct System_Int32_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  if ( (byte_4B45781 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_ObjectModel_Collection_UserCommandCodeCollectionEntity__get_Count__, method);
    sub_1BDB878(&Method_System_Collections_ObjectModel_Collection_UserCommandCodeCollectionEntity__get_Item__, v3);
    sub_1BDB878(&Method_System_Collections_Generic_List_int__Add__, v4);
    sub_1BDB878(&Method_System_Collections_Generic_List_int__ToArray__, v5);
    sub_1BDB878(&Method_System_Collections_Generic_List_int___ctor__, v6);
    sub_1BDB878(&System_Collections_Generic_List_int__TypeInfo, v7);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    byte_4B45781 = 1;
  }
  v9 = (System_Collections_Generic_List_int__o *)sub_1BDBAC4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_36B854C *)Method_System_Collections_Generic_List_int___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_19;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_327D624 *)Method_System_Collections_ObjectModel_Collection_UserCommandCodeCollectionEntity__get_Count__);
  if ( (int)list >= 1 )
  {
    v12 = (int)list;
    v13 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v13,
                                                                 (const MethodInfo_327D6B4 *)Method_System_Collections_ObjectModel_Collection_UserCommandCodeCollectionEntity__get_Item__);
      if ( list )
      {
        v14 = list;
        list = (System_Collections_ObjectModel_Collection_T__o *)UserCommandCodeCollectionEntity__IsNew(
                                                                   (UserCommandCodeCollectionEntity_o *)list,
                                                                   v10);
        if ( ((unsigned __int8)list & 1) != 0 )
        {
          klass = v14[1].klass;
          monitor = v14[1].monitor;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v21.fields.currentCryptoKey = klass;
          *(_QWORD *)&v21.fields.fakeValue = monitor;
          list = (System_Collections_ObjectModel_Collection_T__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(
                                                                     v21,
                                                                     0LL);
          if ( !v9 )
            break;
          items = v9->fields._items;
          v18 = Method_System_Collections_Generic_List_int__Add__;
          ++v9->fields._version;
          if ( !items )
            break;
          size = v9->fields._size;
          v10 = (const MethodInfo *)(unsigned int)list;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v9,
              (int32_t)list,
              *(const MethodInfo_36B8DA0 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
          }
          else
          {
            v9->fields._size = size + 1;
            items->m_Items[size + 1] = (int)list;
          }
        }
      }
      if ( v12 == ++v13 )
        goto LABEL_17;
    }
LABEL_19:
    sub_1BDBAD4(list, v10);
  }
LABEL_17:
  if ( !v9 )
    goto LABEL_19;
  return System_Collections_Generic_List_int___ToArray(
           v9,
           (const MethodInfo_36BA858 *)Method_System_Collections_Generic_List_int__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UserCommandCodeCollectionMaster__IsNew(
        UserCommandCodeCollectionMaster_o *this,
        int32_t commandCodeId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v9; // w21
  int32_t v10; // w22
  Il2CppObject *Item; // x0
  UserCommandCodeCollectionEntity_o *v12; // x23
  Il2CppClass *klass; // x24
  void *monitor; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_4B45780 & 1) == 0 )
  {
    sub_1BDB878(
      &Method_System_Collections_ObjectModel_Collection_UserCommandCodeCollectionEntity__get_Count__,
      *(_QWORD *)&commandCodeId);
    sub_1BDB878(&Method_System_Collections_ObjectModel_Collection_UserCommandCodeCollectionEntity__get_Item__, v5);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    byte_4B45780 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_14:
    sub_1BDBAD4(list, *(_QWORD *)&commandCodeId);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_327D624 *)Method_System_Collections_ObjectModel_Collection_UserCommandCodeCollectionEntity__get_Count__);
  if ( Count < 1 )
    return 0;
  v9 = Count;
  v10 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_14;
    Item = System_Collections_ObjectModel_Collection_object___get_Item(
             list,
             v10,
             (const MethodInfo_327D6B4 *)Method_System_Collections_ObjectModel_Collection_UserCommandCodeCollectionEntity__get_Item__);
    if ( Item )
    {
      v12 = (UserCommandCodeCollectionEntity_o *)Item;
      monitor = Item[1].monitor;
      klass = Item[2].klass;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v16.fields.currentCryptoKey = monitor;
      *(_QWORD *)&v16.fields.fakeValue = klass;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v16, 0LL) == commandCodeId )
        return UserCommandCodeCollectionEntity__IsNew(v12, *(const MethodInfo **)&commandCodeId);
    }
    if ( v9 == ++v10 )
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

  if ( (byte_4B4577B & 1) == 0 )
  {
    sub_1BDB878(
      &Method_DataMasterBase_UserCommandCodeCollectionMaster__UserCommandCodeCollectionEntity__string__TryGetEntity__,
      entity);
    byte_4B4577B = 1;
  }
  PK = (Il2CppObject *)UserCommandCodeCollectionEntity__CreatePK(userId, commandCodeId, (const MethodInfo *)userId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_32E6940 *)Method_DataMasterBase_UserCommandCodeCollectionMaster__UserCommandCodeCollectionEntity__string__TryGetEntity__);
}


void __fastcall UserCommandCodeCollectionMaster__continueDeviceUserCommandCodeCollection(
        UserCommandCodeCollectionMaster_o *this,
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
  __int64 v11; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int v13; // w21
  int32_t v14; // w22
  void *monitor; // x23
  System_Collections_ObjectModel_Collection_T__c *klass; // x24
  struct System_Int32_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  System_Int32_array *v20; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  if ( (byte_4B45782 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_ObjectModel_Collection_UserCommandCodeCollectionEntity__get_Count__, method);
    sub_1BDB878(&Method_System_Collections_ObjectModel_Collection_UserCommandCodeCollectionEntity__get_Item__, v3);
    sub_1BDB878(&Method_System_Collections_Generic_List_int__Add__, v4);
    sub_1BDB878(&Method_System_Collections_Generic_List_int__ToArray__, v5);
    sub_1BDB878(&Method_System_Collections_Generic_List_int___ctor__, v6);
    sub_1BDB878(&System_Collections_Generic_List_int__TypeInfo, v7);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_1BDB878(&UserCommandCodeCollectionManager_TypeInfo, v9);
    byte_4B45782 = 1;
  }
  v10 = (System_Collections_Generic_List_int__o *)sub_1BDBAC4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v10,
    (const MethodInfo_36B854C *)Method_System_Collections_Generic_List_int___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_21;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_327D624 *)Method_System_Collections_ObjectModel_Collection_UserCommandCodeCollectionEntity__get_Count__);
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
                                                                 (const MethodInfo_327D6B4 *)Method_System_Collections_ObjectModel_Collection_UserCommandCodeCollectionEntity__get_Item__);
      if ( list && LODWORD(list[1].fields.items) == 2 )
      {
        klass = list[1].klass;
        monitor = list[1].monitor;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v21.fields.currentCryptoKey = klass;
        *(_QWORD *)&v21.fields.fakeValue = monitor;
        list = (System_Collections_ObjectModel_Collection_T__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(
                                                                   v21,
                                                                   0LL);
        if ( !v10 )
          break;
        items = v10->fields._items;
        v18 = Method_System_Collections_Generic_List_int__Add__;
        ++v10->fields._version;
        if ( !items )
          break;
        size = v10->fields._size;
        v11 = (unsigned int)list;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v10,
            (int32_t)list,
            *(const MethodInfo_36B8DA0 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
        }
        else
        {
          v10->fields._size = size + 1;
          items->m_Items[size + 1] = (int)list;
        }
      }
      if ( v13 == ++v14 )
        goto LABEL_17;
    }
LABEL_21:
    sub_1BDBAD4(list, v11);
  }
LABEL_17:
  if ( !v10 )
    goto LABEL_21;
  v20 = System_Collections_Generic_List_int___ToArray(
          v10,
          (const MethodInfo_36BA858 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !UserCommandCodeCollectionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserCommandCodeCollectionManager_TypeInfo);
  UserCommandCodeCollectionManager__SetOld_42462904(v20, 0LL);
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
  __int64 v14; // x1
  NetworkManager_c *v15; // x0
  DataManager_o *Instance; // x0
  Il2CppObject *v17; // x1
  DataManager_o *v18; // x22
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x19
  System_Collections_Generic_List_object__o *v20; // x23
  __int64 v21; // x2
  unsigned __int64 v22; // x27
  System_String_o *v23; // x24
  System_String_o *v24; // x0
  System_String_o *v25; // x24
  DataManager_c *klass; // x8
  DataManager_o *v27; // x25
  __int64 v28; // x9
  int *p_offset; // x10
  __int64 v30; // x0
  DataManager_c *v31; // x8
  DataManager_o *v32; // x25
  __int64 v33; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__UserCommandCodeCollectionEntity__c **v34; // x10
  __int64 v35; // x0
  int64_t v36; // x25
  UserCommandCodeCollectionEntity_o *v37; // x24
  const MethodInfo *v38; // x3
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  struct System_Object_array *items; // x8
  _QWORD *v42; // x9
  __int64 size; // x10
  Il2CppClass **v44; // x0
  CGThumbnailListItem_o *v45; // x0
  __int64 v46; // x8
  System_Collections_Generic_List_object__o *v47; // x0
  int datalist; // w8
  struct System_Object_array *v49; // x8
  _QWORD *v50; // x9
  __int64 v51; // x10
  Il2CppClass **v52; // x0
  int commandCodeId; // [xsp+10h] [xbp-70h]
  int v57; // [xsp+14h] [xbp-6Ch] BYREF
  int64_t userIdNumber; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4B4577F & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMasterData_CommandCodeMaster___, getSum);
    sub_1BDB878(
      &Method_DataMasterBase_UserCommandCodeCollectionMaster__UserCommandCodeCollectionEntity__string__get_lookup__,
      v5);
    sub_1BDB878(&System_Collections_Generic_IReadOnlyDictionary_string__UserCommandCodeCollectionEntity__TypeInfo, v6);
    sub_1BDB878(&Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity__Add__, v7);
    sub_1BDB878(&Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity__ToArray__, v8);
    sub_1BDB878(&Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity___ctor__, v9);
    sub_1BDB878(&System_Collections_Generic_List_UserCommandCodeCollectionEntity__TypeInfo, v10);
    sub_1BDB878(&NetworkManager_TypeInfo, v11);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_1BDB878(&UserCommandCodeCollectionEntity_TypeInfo, v13);
    sub_1BDB878(&StringLiteral_1479/*":"*/, v14);
    byte_4B4577F = 1;
  }
  v57 = 0;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B3ED56 )
  {
    sub_1BDB878(&NetworkManager_TypeInfo, getSum);
    byte_4B3ED56 = 1;
  }
  v15 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v15 = NetworkManager_TypeInfo;
  }
  userIdNumber = v15->static_fields->userIdNumber;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_51;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_303395C *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  if ( !Instance )
    goto LABEL_51;
  Instance = (DataManager_o *)CommandCodeMaster__GetCollectionList((CommandCodeMaster_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_51;
  v18 = Instance;
  m_CancellationTokenSource = Instance->fields.m_CancellationTokenSource;
  v20 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_UserCommandCodeCollectionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity___ctor__);
  *getSum = 0;
  *findSum = 0;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    v22 = 0LL;
    while ( 1 )
    {
      if ( v22 >= LODWORD(v18->fields.m_CancellationTokenSource) )
        sub_1BDBADC(Instance, v17, v21);
      v57 = *((_DWORD *)&v18->fields._DispLog + v22);
      v23 = System_Int64__ToString((int64_t)&userIdNumber, 0LL);
      v24 = System_Int32__ToString((int32_t)&v57, 0LL);
      v25 = System_String__Concat_62610508(v23, (System_String_o *)StringLiteral_1479/*":"*/, v24, 0LL);
      Instance = (DataManager_o *)DataMasterBase_object__object__object___get_lookup(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                    (const MethodInfo_32E46E8 *)Method_DataMasterBase_UserCommandCodeCollectionMaster__UserCommandCodeCollectionEntity__string__get_lookup__);
      if ( !Instance )
        goto LABEL_51;
      klass = Instance->klass;
      v27 = Instance;
      v28 = *(unsigned __int16 *)(&Instance->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&Instance->klass->_2.bitflags2 + 3) )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IReadOnlyDictionary_string__UserCommandCodeCollectionEntity__c **)p_offset
                - 1) != System_Collections_Generic_IReadOnlyDictionary_string__UserCommandCodeCollectionEntity__TypeInfo )
        {
          --v28;
          p_offset += 4;
          if ( !v28 )
            goto LABEL_20;
        }
        v30 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
      }
      else
      {
LABEL_20:
        v30 = sub_1C2C00C(
                Instance,
                System_Collections_Generic_IReadOnlyDictionary_string__UserCommandCodeCollectionEntity__TypeInfo,
                0LL);
      }
      if ( ((*(__int64 (__fastcall **)(DataManager_o *, System_String_o *, _QWORD))v30)(v27, v25, *(_QWORD *)(v30 + 8)) & 1) != 0 )
        break;
      v36 = userIdNumber;
      commandCodeId = v57;
      v37 = (UserCommandCodeCollectionEntity_o *)sub_1BDBAC4(UserCommandCodeCollectionEntity_TypeInfo);
      UserCommandCodeCollectionEntity___ctor_41939740(v37, v36, commandCodeId, v38);
      if ( !v20 )
        goto LABEL_51;
      items = v20->fields._items;
      v42 = Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity__Add__;
      ++v20->fields._version;
      if ( !items )
        goto LABEL_51;
      size = v20->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        v46 = v42[4];
        v47 = v20;
        v17 = (Il2CppObject *)v37;
LABEL_46:
        System_Collections_Generic_List_object___AddWithResize(
          v47,
          v17,
          *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v46 + 192) + 112LL));
        goto LABEL_47;
      }
      v44 = &items->obj.klass + size;
      v20->fields._size = size + 1;
      v44[4] = (Il2CppClass *)v37;
      v45 = (CGThumbnailListItem_o *)(v44 + 4);
      LODWORD(v17) = (_DWORD)v37;
LABEL_44:
      sub_1BDB81C(v45, (int32_t)v17, v39, v40);
LABEL_47:
      if ( ++v22 == (unsigned int)m_CancellationTokenSource )
        return (UserCommandCodeCollectionEntity_array *)System_Collections_Generic_List_object___ToArray(
                                                          v20,
                                                          (const MethodInfo_36D791C *)Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity__ToArray__);
    }
    Instance = (DataManager_o *)DataMasterBase_object__object__object___get_lookup(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                  (const MethodInfo_32E46E8 *)Method_DataMasterBase_UserCommandCodeCollectionMaster__UserCommandCodeCollectionEntity__string__get_lookup__);
    if ( !Instance )
      goto LABEL_51;
    v31 = Instance->klass;
    v32 = Instance;
    v33 = *(unsigned __int16 *)(&Instance->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Instance->klass->_2.bitflags2 + 3) )
    {
      v34 = (System_Collections_Generic_IReadOnlyDictionary_string__UserCommandCodeCollectionEntity__c **)&v31->_1.interfaceOffsets->offset;
      while ( *(v34 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__UserCommandCodeCollectionEntity__TypeInfo )
      {
        --v33;
        v34 += 2;
        if ( !v33 )
          goto LABEL_28;
      }
      v35 = (__int64)(&v31->vtable._2_GetHashCode.method + 2 * *(_DWORD *)v34);
    }
    else
    {
LABEL_28:
      v35 = sub_1C2C00C(
              Instance,
              System_Collections_Generic_IReadOnlyDictionary_string__UserCommandCodeCollectionEntity__TypeInfo,
              2LL);
    }
    Instance = (DataManager_o *)(*(__int64 (__fastcall **)(DataManager_o *, System_String_o *, _QWORD))v35)(
                                  v32,
                                  v25,
                                  *(_QWORD *)(v35 + 8));
    if ( !Instance )
      goto LABEL_51;
    datalist = (int)Instance->fields.datalist;
    v17 = (Il2CppObject *)Instance;
    if ( datalist != 1 )
    {
      if ( datalist != 2 )
        goto LABEL_40;
      ++*getSum;
    }
    ++*findSum;
LABEL_40:
    if ( !v20 )
      goto LABEL_51;
    v49 = v20->fields._items;
    v50 = Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity__Add__;
    ++v20->fields._version;
    if ( !v49 )
      goto LABEL_51;
    v51 = v20->fields._size;
    if ( (unsigned int)v51 >= v49->max_length )
    {
      v46 = v50[4];
      v47 = v20;
      goto LABEL_46;
    }
    v52 = &v49->obj.klass + v51;
    v20->fields._size = v51 + 1;
    v52[4] = (Il2CppClass *)v17;
    v45 = (CGThumbnailListItem_o *)(v52 + 4);
    goto LABEL_44;
  }
  if ( !v20 )
LABEL_51:
    sub_1BDBAD4(Instance, v17);
  return (UserCommandCodeCollectionEntity_array *)System_Collections_Generic_List_object___ToArray(
                                                    v20,
                                                    (const MethodInfo_36D791C *)Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity__ToArray__);
}


System_Int32_array *__fastcall UserCommandCodeCollectionMaster__getCommandCodeIdList(
        UserCommandCodeCollectionMaster_o *this,
        int64_t userId,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v6; // x1
  Il2CppObject *Instance; // x0
  __int64 v8; // x1

  if ( (byte_4B45783 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___, userId);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4B45783 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_303395C *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___)) == 0LL )
  {
    sub_1BDBAD4(Instance, v8);
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
  __int64 v15; // x1
  NetworkManager_c *v16; // x0
  __int64 Instance; // x0
  __int64 v18; // x1
  __int64 v19; // x22
  unsigned __int64 v20; // x25
  __int64 v21; // x29
  System_String_o *v22; // x0
  __int64 v23; // x1
  __int64 v24; // x2
  System_String_o *v25; // x23
  System_String_o *v26; // x0
  System_String_o *v27; // x23
  __int64 v28; // x8
  __int64 v29; // x24
  __int64 v30; // x9
  int *v31; // x10
  __int64 v32; // x0
  __int64 v33; // x8
  __int64 v34; // x24
  __int64 v35; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__UserCommandCodeCollectionEntity__c **v36; // x10
  __int64 v37; // x0
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  struct System_Object_array *items; // x8
  _QWORD *v41; // x9
  __int64 size; // x10
  Il2CppClass **v43; // x0
  int64_t userIdNumber; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B4577E & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMasterData_ServantMaster___, *(_QWORD *)&kind);
    sub_1BDB878(
      &Method_DataMasterBase_UserCommandCodeCollectionMaster__UserCommandCodeCollectionEntity__string__get_lookup__,
      v5);
    sub_1BDB878(&System_Collections_Generic_IReadOnlyDictionary_string__UserCommandCodeCollectionEntity__TypeInfo, v6);
    sub_1BDB878(&Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity__Add__, v7);
    sub_1BDB878(&Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity__ToArray__, v8);
    sub_1BDB878(&Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity___ctor__, v9);
    sub_1BDB878(&System_Collections_Generic_List_UserCommandCodeCollectionEntity__TypeInfo, v10);
    sub_1BDB878(&NetworkManager_TypeInfo, v11);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_1BDB878(&StringLiteral_1479/*":"*/, v13);
    byte_4B4577E = 1;
  }
  v14 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_UserCommandCodeCollectionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity___ctor__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B3ED56 )
  {
    sub_1BDB878(&NetworkManager_TypeInfo, v15);
    byte_4B3ED56 = 1;
  }
  v16 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v16 = NetworkManager_TypeInfo;
  }
  userIdNumber = v16->static_fields->userIdNumber;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_303395C *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_40;
  Instance = (__int64)ServantMaster__GetCollectionList((ServantMaster_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_40;
  v19 = Instance;
  if ( (int)*(_QWORD *)(Instance + 24) >= 1 )
  {
    v20 = 0LL;
    v21 = (unsigned int)*(_QWORD *)(Instance + 24);
    while ( 1 )
    {
      v22 = System_Int64__ToString((int64_t)&userIdNumber, 0LL);
      if ( v20 >= *(unsigned int *)(v19 + 24) )
        sub_1BDBADC(v22, v23, v24);
      v25 = v22;
      v26 = System_Int32__ToString((int)v19 + 4 * (int)v20 + 32, 0LL);
      v27 = System_String__Concat_62610508(v25, (System_String_o *)StringLiteral_1479/*":"*/, v26, 0LL);
      Instance = (__int64)DataMasterBase_object__object__object___get_lookup(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                            (const MethodInfo_32E46E8 *)Method_DataMasterBase_UserCommandCodeCollectionMaster__UserCommandCodeCollectionEntity__string__get_lookup__);
      if ( !Instance )
        break;
      v28 = *(_QWORD *)Instance;
      v29 = Instance;
      v30 = *(unsigned __int16 *)(*(_QWORD *)Instance + 302LL);
      if ( *(_WORD *)(*(_QWORD *)Instance + 302LL) )
      {
        v31 = (int *)(*(_QWORD *)(v28 + 176) + 8LL);
        while ( *((System_Collections_Generic_IReadOnlyDictionary_string__UserCommandCodeCollectionEntity__c **)v31 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__UserCommandCodeCollectionEntity__TypeInfo )
        {
          --v30;
          v31 += 4;
          if ( !v30 )
            goto LABEL_20;
        }
        v32 = v28 + 16LL * *v31 + 312;
      }
      else
      {
LABEL_20:
        v32 = sub_1C2C00C(
                Instance,
                System_Collections_Generic_IReadOnlyDictionary_string__UserCommandCodeCollectionEntity__TypeInfo,
                0LL);
      }
      Instance = (*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v32)(v29, v27, *(_QWORD *)(v32 + 8));
      if ( (Instance & 1) != 0 )
      {
        Instance = (__int64)DataMasterBase_object__object__object___get_lookup(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                              (const MethodInfo_32E46E8 *)Method_DataMasterBase_UserCommandCodeCollectionMaster__UserCommandCodeCollectionEntity__string__get_lookup__);
        if ( !Instance )
          break;
        v33 = *(_QWORD *)Instance;
        v34 = Instance;
        v35 = *(unsigned __int16 *)(*(_QWORD *)Instance + 302LL);
        if ( *(_WORD *)(*(_QWORD *)Instance + 302LL) )
        {
          v36 = (System_Collections_Generic_IReadOnlyDictionary_string__UserCommandCodeCollectionEntity__c **)(*(_QWORD *)(v33 + 176) + 8LL);
          while ( *(v36 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__UserCommandCodeCollectionEntity__TypeInfo )
          {
            --v35;
            v36 += 2;
            if ( !v35 )
              goto LABEL_28;
          }
          v37 = v33 + 16LL * (*(_DWORD *)v36 + 2) + 312;
        }
        else
        {
LABEL_28:
          v37 = sub_1C2C00C(
                  Instance,
                  System_Collections_Generic_IReadOnlyDictionary_string__UserCommandCodeCollectionEntity__TypeInfo,
                  2LL);
        }
        Instance = (*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v37)(v34, v27, *(_QWORD *)(v37 + 8));
        if ( !Instance )
          break;
        v18 = Instance;
        if ( *(_DWORD *)(Instance + 40) == kind )
        {
          if ( !v14 )
            break;
          items = v14->fields._items;
          v41 = Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity__Add__;
          ++v14->fields._version;
          if ( !items )
            break;
          size = v14->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v14,
              (Il2CppObject *)Instance,
              *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
          }
          else
          {
            v43 = &items->obj.klass + size;
            v14->fields._size = size + 1;
            v43[4] = (Il2CppClass *)v18;
            sub_1BDB81C((CGThumbnailListItem_o *)(v43 + 4), v18, v38, v39);
          }
        }
      }
      if ( ++v20 == v21 )
        goto LABEL_38;
    }
LABEL_40:
    sub_1BDBAD4(Instance, v18);
  }
LABEL_38:
  if ( !v14 )
    goto LABEL_40;
  return (UserCommandCodeCollectionEntity_array *)System_Collections_Generic_List_object___ToArray(
                                                    v14,
                                                    (const MethodInfo_36D791C *)Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity__ToArray__);
}