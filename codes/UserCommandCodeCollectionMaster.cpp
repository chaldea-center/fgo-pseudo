void UserCommandCodeCollectionMaster___ctor(UserCommandCodeCollectionMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5939473 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_UserCommandCodeCollectionMaster__UserCommandCodeCollectionEntity__string___ctor__);
    byte_5939473 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    261,
    (const MethodInfo_3EDFBF4 *)Method_DataMasterBase_UserCommandCodeCollectionMaster__UserCommandCodeCollectionEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserCommandCodeCollectionEntity_o *UserCommandCodeCollectionMaster__GetEntity(
        UserCommandCodeCollectionMaster_o *this,
        int64_t userId,
        int32_t commandCodeId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_5939471 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_UserCommandCodeCollectionMaster__UserCommandCodeCollectionEntity__string__GetEntity__);
    byte_5939471 = 1;
  }
  PK = (Il2CppObject *)UserCommandCodeCollectionEntity__CreatePK(
                         userId,
                         commandCodeId,
                         *(const MethodInfo **)&commandCodeId);
  return (UserCommandCodeCollectionEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                PK,
                                                (const MethodInfo_3EE2044 *)Method_DataMasterBase_UserCommandCodeCollectionMaster__UserCommandCodeCollectionEntity__string__GetEntity__);
}


UserCommandCodeCollectionEntity_o *UserCommandCodeCollectionMaster__GetEntityDefinitely(
        UserCommandCodeCollectionMaster_o *this,
        int64_t userId,
        int32_t svtId,
        const MethodInfo *method)
{
  System_String_o *v5; // x19
  System_String_o *v6; // x0
  System_String_o *v7; // x19
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *lookup; // x0
  __int64 v9; // x1
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__c *klass; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *v11; // x21
  __int64 v12; // x9
  int32_t *p_offset; // x10
  __int64 v14; // x0
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__c *v15; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *v16; // x20
  __int64 v17; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__UserCommandCodeCollectionEntity__c **v18; // x10
  __int64 v19; // x0
  int64_t v20; // x20
  int32_t v21; // w21
  UserCommandCodeCollectionEntity_o *v22; // x19
  const MethodInfo *v23; // x3
  int32_t v25; // [xsp+4h] [xbp-3Ch] BYREF
  int64_t v26; // [xsp+8h] [xbp-38h] BYREF

  v26 = userId;
  v25 = svtId;
  if ( (byte_5939474 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_UserCommandCodeCollectionMaster__UserCommandCodeCollectionEntity__string__get_lookup__);
    sub_21FFC50(&System_Collections_Generic_IReadOnlyDictionary_string__UserCommandCodeCollectionEntity__TypeInfo);
    sub_21FFC50(&UserCommandCodeCollectionEntity_TypeInfo);
    sub_21FFC50(&StringLiteral_1532/*":"*/);
    byte_5939474 = 1;
  }
  v5 = System_Int64__ToString((int64_t)&v26, 0);
  v6 = System_Int32__ToString((int32_t)&v25, 0);
  v7 = System_String__Concat_75481624(v5, (System_String_o *)StringLiteral_1532/*":"*/, v6, 0);
  lookup = DataMasterBase_object__object__object___get_lookup(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             (const MethodInfo_3EDFD10 *)Method_DataMasterBase_UserCommandCodeCollectionMaster__UserCommandCodeCollectionEntity__string__get_lookup__);
  if ( !lookup )
    goto LABEL_21;
  klass = lookup->klass;
  v11 = lookup;
  v12 = *(unsigned __int16 *)&lookup->klass->_2.rank;
  if ( *(_WORD *)&lookup->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IReadOnlyDictionary_string__UserCommandCodeCollectionEntity__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__UserCommandCodeCollectionEntity__TypeInfo )
    {
      --v12;
      p_offset += 4;
      if ( !v12 )
        goto LABEL_8;
    }
    v14 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_8:
    v14 = sub_2237E2C(
            lookup,
            System_Collections_Generic_IReadOnlyDictionary_string__UserCommandCodeCollectionEntity__TypeInfo,
            0);
  }
  if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *, System_String_o *, _QWORD))v14)(
          v11,
          v7,
          *(_QWORD *)(v14 + 8))
      & 1) == 0 )
  {
    v20 = v26;
    v21 = v25;
    v22 = (UserCommandCodeCollectionEntity_o *)sub_21FFEBC(UserCommandCodeCollectionEntity_TypeInfo);
    UserCommandCodeCollectionEntity___ctor_49956736(v22, v20, v21, v23);
    return v22;
  }
  lookup = DataMasterBase_object__object__object___get_lookup(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             (const MethodInfo_3EDFD10 *)Method_DataMasterBase_UserCommandCodeCollectionMaster__UserCommandCodeCollectionEntity__string__get_lookup__);
  if ( !lookup )
LABEL_21:
    sub_21FFECC(lookup, v9);
  v15 = lookup->klass;
  v16 = lookup;
  v17 = *(unsigned __int16 *)&lookup->klass->_2.rank;
  if ( *(_WORD *)&lookup->klass->_2.rank )
  {
    v18 = (System_Collections_Generic_IReadOnlyDictionary_string__UserCommandCodeCollectionEntity__c **)&v15->_1.interfaceOffsets->offset;
    while ( *(v18 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__UserCommandCodeCollectionEntity__TypeInfo )
    {
      --v17;
      v18 += 2;
      if ( !v17 )
        goto LABEL_16;
    }
    v19 = (__int64)&v15->vtable[*(_DWORD *)v18 + 2];
  }
  else
  {
LABEL_16:
    v19 = sub_2237E2C(
            lookup,
            System_Collections_Generic_IReadOnlyDictionary_string__UserCommandCodeCollectionEntity__TypeInfo,
            2);
  }
  return (UserCommandCodeCollectionEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *, System_String_o *, _QWORD))v19)(
                                                v16,
                                                v7,
                                                *(_QWORD *)(v19 + 8));
}


bool UserCommandCodeCollectionMaster__TryGetEntity(
        UserCommandCodeCollectionMaster_o *this,
        UserCommandCodeCollectionEntity_o **entity,
        int64_t userId,
        int32_t commandCodeId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_5939472 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_UserCommandCodeCollectionMaster__UserCommandCodeCollectionEntity__string__TryGetEntity__);
    byte_5939472 = 1;
  }
  PK = (Il2CppObject *)UserCommandCodeCollectionEntity__CreatePK(userId, commandCodeId, (const MethodInfo *)userId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3EE2090 *)Method_DataMasterBase_UserCommandCodeCollectionMaster__UserCommandCodeCollectionEntity__string__TryGetEntity__);
}


void UserCommandCodeCollectionMaster__continueDeviceUserCommandCodeCollection(
        UserCommandCodeCollectionMaster_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v3; // x20
  __int64 v4; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int v6; // w21
  int32_t v7; // w22
  System_Collections_ObjectModel_Collection_T__c *klass; // x23
  void *monitor; // x24
  struct System_Int32_array *items; // x8
  _QWORD *v11; // x9
  __int64 size; // x10
  __int64 v13; // x1
  System_Int32_array *v14; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_5939476 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_UserCommandCodeCollectionEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_UserCommandCodeCollectionEntity__get_Item__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_int__TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&UserCommandCodeCollectionManager_TypeInfo);
    byte_5939476 = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_21FFEBC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_44328A8 *)Method_System_Collections_Generic_List_int___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_21;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_3E60A6C *)Method_System_Collections_ObjectModel_Collection_UserCommandCodeCollectionEntity__get_Count__);
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
                                                                 (const MethodInfo_3E60B00 *)Method_System_Collections_ObjectModel_Collection_UserCommandCodeCollectionEntity__get_Item__);
      if ( list && LODWORD(list[1].fields.items) == 2 )
      {
        klass = list[1].klass;
        monitor = list[1].monitor;
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
        *(_QWORD *)&v15.fields.currentCryptoKey = klass;
        *(_QWORD *)&v15.fields.fakeValue = monitor;
        list = (System_Collections_ObjectModel_Collection_T__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(
                                                                   v15,
                                                                   0);
        if ( !v3 )
          break;
        items = v3->fields._items;
        v11 = Method_System_Collections_Generic_List_int__Add__;
        ++v3->fields._version;
        if ( !items )
          break;
        size = v3->fields._size;
        v4 = (unsigned int)list;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v3,
            (int32_t)list,
            *(const MethodInfo_4433138 **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
        }
        else
        {
          v3->fields._size = size + 1;
          items->m_Items[size] = (int)list;
        }
      }
      if ( v6 == ++v7 )
        goto LABEL_17;
    }
LABEL_21:
    sub_21FFECC(list, v4);
  }
LABEL_17:
  if ( !v3 )
    goto LABEL_21;
  v14 = System_Collections_Generic_List_int___ToArray(
          v3,
          (const MethodInfo_4434BB8 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !*(&UserCommandCodeCollectionManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UserCommandCodeCollectionManager_TypeInfo, v13);
  UserCommandCodeCollectionManager__SetOld_50566336(v14, 0);
}


UserCommandCodeCollectionEntity_array *UserCommandCodeCollectionMaster__getCollectionList(
        UserCommandCodeCollectionMaster_o *this,
        int32_t *getSum,
        int32_t *findSum,
        const MethodInfo *method)
{
  NetworkManager_c *v5; // x0
  DataManager_o *Instance; // x0
  Il2CppObject *v7; // x1
  DataManager_o *v8; // x22
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x24
  System_Collections_Generic_List_object__o *v10; // x23
  unsigned __int64 v11; // x27
  __int64 v12; // x28
  System_String_o *v13; // x24
  System_String_o *v14; // x0
  System_String_o *v15; // x24
  DataManager_c *klass; // x8
  DataManager_o *v17; // x25
  __int64 v18; // x9
  int *p_offset; // x10
  __int64 v20; // x0
  DataManager_c *v21; // x8
  DataManager_o *v22; // x25
  __int64 v23; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__UserCommandCodeCollectionEntity__c **v24; // x10
  __int64 v25; // x0
  int64_t v26; // x25
  UserCommandCodeCollectionEntity_o *v27; // x24
  const MethodInfo *v28; // x3
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  struct System_Object_array *items; // x8
  _QWORD *v36; // x9
  __int64 size; // x10
  Il2CppClass **v38; // x0
  MissionNaviTransitionBoardItem_o *v39; // x0
  __int64 v40; // x8
  System_Collections_Generic_List_object__o *v41; // x0
  int datalist; // w8
  struct System_Object_array *v43; // x8
  _QWORD *v44; // x9
  __int64 v45; // x10
  Il2CppClass **v46; // x0
  int32_t commandCodeId; // [xsp+10h] [xbp-70h]
  int32_t v51; // [xsp+14h] [xbp-6Ch] BYREF
  int64_t userIdNumber; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_5939475 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_CommandCodeMaster___);
    sub_21FFC50(&Method_DataMasterBase_UserCommandCodeCollectionMaster__UserCommandCodeCollectionEntity__string__get_lookup__);
    sub_21FFC50(&System_Collections_Generic_IReadOnlyDictionary_string__UserCommandCodeCollectionEntity__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_UserCommandCodeCollectionEntity__TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&UserCommandCodeCollectionEntity_TypeInfo);
    sub_21FFC50(&StringLiteral_1532/*":"*/);
    byte_5939475 = 1;
  }
  userIdNumber = 0;
  v51 = 0;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, getSum);
  if ( !byte_5931D52 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_5931D52 = 1;
  }
  v5 = NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, getSum);
    v5 = NetworkManager_TypeInfo;
  }
  userIdNumber = v5->static_fields->userIdNumber;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_51;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  if ( !Instance )
    goto LABEL_51;
  Instance = (DataManager_o *)CommandCodeMaster__GetCollectionList((CommandCodeMaster_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_51;
  v8 = Instance;
  m_CancellationTokenSource = Instance->fields.m_CancellationTokenSource;
  v10 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_UserCommandCodeCollectionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity___ctor__);
  *getSum = 0;
  *findSum = 0;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    v11 = 0;
    v12 = (unsigned int)m_CancellationTokenSource;
    while ( 1 )
    {
      if ( v11 >= LODWORD(v8->fields.m_CancellationTokenSource) )
        sub_21FFED4(Instance);
      v51 = *((_DWORD *)&v8->fields._DispLog + v11);
      v13 = System_Int64__ToString((int64_t)&userIdNumber, 0);
      v14 = System_Int32__ToString((int32_t)&v51, 0);
      v15 = System_String__Concat_75481624(v13, (System_String_o *)StringLiteral_1532/*":"*/, v14, 0);
      Instance = (DataManager_o *)DataMasterBase_object__object__object___get_lookup(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                    (const MethodInfo_3EDFD10 *)Method_DataMasterBase_UserCommandCodeCollectionMaster__UserCommandCodeCollectionEntity__string__get_lookup__);
      if ( !Instance )
        goto LABEL_51;
      klass = Instance->klass;
      v17 = Instance;
      v18 = *(unsigned __int16 *)&Instance->klass->_2.rank;
      if ( *(_WORD *)&Instance->klass->_2.rank )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IReadOnlyDictionary_string__UserCommandCodeCollectionEntity__c **)p_offset
                - 1) != System_Collections_Generic_IReadOnlyDictionary_string__UserCommandCodeCollectionEntity__TypeInfo )
        {
          --v18;
          p_offset += 4;
          if ( !v18 )
            goto LABEL_20;
        }
        v20 = (__int64)&klass->vtable + 16 * *p_offset;
      }
      else
      {
LABEL_20:
        v20 = sub_2237E2C(
                Instance,
                System_Collections_Generic_IReadOnlyDictionary_string__UserCommandCodeCollectionEntity__TypeInfo,
                0);
      }
      if ( ((*(__int64 (__fastcall **)(DataManager_o *, System_String_o *, _QWORD))v20)(v17, v15, *(_QWORD *)(v20 + 8))
          & 1) != 0 )
        break;
      v26 = userIdNumber;
      commandCodeId = v51;
      v27 = (UserCommandCodeCollectionEntity_o *)sub_21FFEBC(UserCommandCodeCollectionEntity_TypeInfo);
      UserCommandCodeCollectionEntity___ctor_49956736(v27, v26, commandCodeId, v28);
      if ( !v10 )
        goto LABEL_51;
      items = v10->fields._items;
      v36 = Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity__Add__;
      ++v10->fields._version;
      if ( !items )
        goto LABEL_51;
      size = v10->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        v40 = v36[4];
        v41 = v10;
        v7 = (Il2CppObject *)v27;
LABEL_46:
        System_Collections_Generic_List_object___AddWithResize(
          v41,
          v7,
          *(const MethodInfo_444FB2C **)(*(_QWORD *)(v40 + 192) + 112LL));
        goto LABEL_47;
      }
      v38 = &items->obj.klass + size;
      LODWORD(v7) = (_DWORD)v27;
      v10->fields._size = size + 1;
      v38[4] = (Il2CppClass *)v27;
      v39 = (MissionNaviTransitionBoardItem_o *)(v38 + 4);
LABEL_44:
      sub_21FFBF4(v39, (int32_t)v7, v29, v30, v31, v32, v33, v34);
LABEL_47:
      if ( ++v11 == v12 )
        return (UserCommandCodeCollectionEntity_array *)System_Collections_Generic_List_object___ToArray(
                                                          v10,
                                                          (const MethodInfo_445164C *)Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity__ToArray__);
    }
    Instance = (DataManager_o *)DataMasterBase_object__object__object___get_lookup(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                  (const MethodInfo_3EDFD10 *)Method_DataMasterBase_UserCommandCodeCollectionMaster__UserCommandCodeCollectionEntity__string__get_lookup__);
    if ( !Instance )
      goto LABEL_51;
    v21 = Instance->klass;
    v22 = Instance;
    v23 = *(unsigned __int16 *)&Instance->klass->_2.rank;
    if ( *(_WORD *)&Instance->klass->_2.rank )
    {
      v24 = (System_Collections_Generic_IReadOnlyDictionary_string__UserCommandCodeCollectionEntity__c **)&v21->_1.interfaceOffsets->offset;
      while ( *(v24 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__UserCommandCodeCollectionEntity__TypeInfo )
      {
        --v23;
        v24 += 2;
        if ( !v23 )
          goto LABEL_28;
      }
      v25 = (__int64)(&v21->vtable._2_GetHashCode + *(_DWORD *)v24);
    }
    else
    {
LABEL_28:
      v25 = sub_2237E2C(
              Instance,
              System_Collections_Generic_IReadOnlyDictionary_string__UserCommandCodeCollectionEntity__TypeInfo,
              2);
    }
    Instance = (DataManager_o *)(*(__int64 (__fastcall **)(DataManager_o *, System_String_o *, _QWORD))v25)(
                                  v22,
                                  v15,
                                  *(_QWORD *)(v25 + 8));
    if ( !Instance )
      goto LABEL_51;
    datalist = (int)Instance->fields.datalist;
    v7 = (Il2CppObject *)Instance;
    if ( datalist != 1 )
    {
      if ( datalist != 2 )
        goto LABEL_40;
      ++*getSum;
    }
    ++*findSum;
LABEL_40:
    if ( !v10 )
      goto LABEL_51;
    v43 = v10->fields._items;
    v44 = Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity__Add__;
    ++v10->fields._version;
    if ( !v43 )
      goto LABEL_51;
    v45 = v10->fields._size;
    if ( (unsigned int)v45 >= LODWORD(v43->max_length) )
    {
      v40 = v44[4];
      v41 = v10;
      goto LABEL_46;
    }
    v46 = &v43->obj.klass + v45;
    v10->fields._size = v45 + 1;
    v46[4] = (Il2CppClass *)v7;
    v39 = (MissionNaviTransitionBoardItem_o *)(v46 + 4);
    goto LABEL_44;
  }
  if ( !v10 )
LABEL_51:
    sub_21FFECC(Instance, v7);
  return (UserCommandCodeCollectionEntity_array *)System_Collections_Generic_List_object___ToArray(
                                                    v10,
                                                    (const MethodInfo_445164C *)Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity__ToArray__);
}