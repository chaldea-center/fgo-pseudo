void UserCommandCodeCollectionMaster___ctor(UserCommandCodeCollectionMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4D3174A & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataMasterBase_UserCommandCodeCollectionMaster__UserCommandCodeCollectionEntity__string___ctor__);
    byte_4D3174A = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    259,
    (const MethodInfo_3465C5C *)Method_DataMasterBase_UserCommandCodeCollectionMaster__UserCommandCodeCollectionEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserCommandCodeCollectionEntity_o *UserCommandCodeCollectionMaster__GetEntity(
        UserCommandCodeCollectionMaster_o *this,
        int64_t userId,
        int32_t commandCodeId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4D31748 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataMasterBase_UserCommandCodeCollectionMaster__UserCommandCodeCollectionEntity__string__GetEntity__);
    byte_4D31748 = 1;
  }
  PK = (Il2CppObject *)UserCommandCodeCollectionEntity__CreatePK(
                         userId,
                         commandCodeId,
                         *(const MethodInfo **)&commandCodeId);
  return (UserCommandCodeCollectionEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                PK,
                                                (const MethodInfo_34681D4 *)Method_DataMasterBase_UserCommandCodeCollectionMaster__UserCommandCodeCollectionEntity__string__GetEntity__);
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
  if ( (byte_4D3174B & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataMasterBase_UserCommandCodeCollectionMaster__UserCommandCodeCollectionEntity__string__get_lookup__);
    sub_1C93AD4(&System_Collections_Generic_IReadOnlyDictionary_string__UserCommandCodeCollectionEntity__TypeInfo);
    sub_1C93AD4(&UserCommandCodeCollectionEntity_TypeInfo);
    sub_1C93AD4(&StringLiteral_1451/*":"*/);
    byte_4D3174B = 1;
  }
  v5 = System_Int64__ToString((int64_t)&v26, 0);
  v6 = System_Int32__ToString((int32_t)&v25, 0);
  v7 = System_String__Concat_64463988(v5, (System_String_o *)StringLiteral_1451/*":"*/, v6, 0);
  lookup = DataMasterBase_object__object__object___get_lookup(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             (const MethodInfo_3465D74 *)Method_DataMasterBase_UserCommandCodeCollectionMaster__UserCommandCodeCollectionEntity__string__get_lookup__);
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
    v14 = sub_1C69E5C(
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
    v22 = (UserCommandCodeCollectionEntity_o *)sub_1C93D20(UserCommandCodeCollectionEntity_TypeInfo);
    UserCommandCodeCollectionEntity___ctor_43702876(v22, v20, v21, v23);
    return v22;
  }
  lookup = DataMasterBase_object__object__object___get_lookup(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             (const MethodInfo_3465D74 *)Method_DataMasterBase_UserCommandCodeCollectionMaster__UserCommandCodeCollectionEntity__string__get_lookup__);
  if ( !lookup )
LABEL_21:
    sub_1C93D2C(lookup, v9);
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
    v19 = sub_1C69E5C(
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

  if ( (byte_4D31749 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataMasterBase_UserCommandCodeCollectionMaster__UserCommandCodeCollectionEntity__string__TryGetEntity__);
    byte_4D31749 = 1;
  }
  PK = (Il2CppObject *)UserCommandCodeCollectionEntity__CreatePK(userId, commandCodeId, (const MethodInfo *)userId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3468220 *)Method_DataMasterBase_UserCommandCodeCollectionMaster__UserCommandCodeCollectionEntity__string__TryGetEntity__);
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
  void *monitor; // x23
  System_Collections_ObjectModel_Collection_T__c *klass; // x24
  struct System_Int32_array *items; // x8
  _QWORD *v11; // x9
  __int64 size; // x10
  System_Int32_array *v13; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  if ( (byte_4D3174D & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_UserCommandCodeCollectionEntity__get_Count__);
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_UserCommandCodeCollectionEntity__get_Item__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C93AD4(&UserCommandCodeCollectionManager_TypeInfo);
    byte_4D3174D = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_1C93D20(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_385C124 *)Method_System_Collections_Generic_List_int___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_21;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_33FBDAC *)Method_System_Collections_ObjectModel_Collection_UserCommandCodeCollectionEntity__get_Count__);
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
                                                                 (const MethodInfo_33FBE3C *)Method_System_Collections_ObjectModel_Collection_UserCommandCodeCollectionEntity__get_Item__);
      if ( list && LODWORD(list[1].fields.items) == 2 )
      {
        klass = list[1].klass;
        monitor = list[1].monitor;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v14.fields.currentCryptoKey = klass;
        *(_QWORD *)&v14.fields.fakeValue = monitor;
        list = (System_Collections_ObjectModel_Collection_T__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(
                                                                   v14,
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
            *(const MethodInfo_385C978 **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
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
    sub_1C93D2C(list, v4);
  }
LABEL_17:
  if ( !v3 )
    goto LABEL_21;
  v13 = System_Collections_Generic_List_int___ToArray(
          v3,
          (const MethodInfo_385E430 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !UserCommandCodeCollectionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserCommandCodeCollectionManager_TypeInfo);
  UserCommandCodeCollectionManager__SetOld_44308692(v13, 0);
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
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x19
  System_Collections_Generic_List_object__o *v10; // x23
  unsigned __int64 v11; // x27
  System_String_o *v12; // x24
  System_String_o *v13; // x0
  System_String_o *v14; // x24
  DataManager_c *klass; // x8
  DataManager_o *v16; // x25
  __int64 v17; // x9
  int *p_offset; // x10
  __int64 v19; // x0
  DataManager_c *v20; // x8
  DataManager_o *v21; // x25
  __int64 v22; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__UserCommandCodeCollectionEntity__c **v23; // x10
  __int64 v24; // x0
  int64_t v25; // x25
  UserCommandCodeCollectionEntity_o *v26; // x24
  const MethodInfo *v27; // x3
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  struct System_Object_array *items; // x8
  _QWORD *v35; // x9
  __int64 size; // x10
  Il2CppClass **v37; // x0
  GrandQuestFolderBoardItem_o *v38; // x0
  __int64 v39; // x8
  System_Collections_Generic_List_object__o *v40; // x0
  int datalist; // w8
  struct System_Object_array *v42; // x8
  _QWORD *v43; // x9
  __int64 v44; // x10
  Il2CppClass **v45; // x0
  int32_t commandCodeId; // [xsp+10h] [xbp-70h]
  int32_t v50; // [xsp+14h] [xbp-6Ch] BYREF
  int64_t userIdNumber; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4D3174C & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_CommandCodeMaster___);
    sub_1C93AD4(&Method_DataMasterBase_UserCommandCodeCollectionMaster__UserCommandCodeCollectionEntity__string__get_lookup__);
    sub_1C93AD4(&System_Collections_Generic_IReadOnlyDictionary_string__UserCommandCodeCollectionEntity__TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_UserCommandCodeCollectionEntity__TypeInfo);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&UserCommandCodeCollectionEntity_TypeInfo);
    sub_1C93AD4(&StringLiteral_1451/*":"*/);
    byte_4D3174C = 1;
  }
  v50 = 0;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4D2A55B )
  {
    sub_1C93AD4(&NetworkManager_TypeInfo);
    byte_4D2A55B = 1;
  }
  v5 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v5 = NetworkManager_TypeInfo;
  }
  userIdNumber = v5->static_fields->userIdNumber;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_51;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  if ( !Instance )
    goto LABEL_51;
  Instance = (DataManager_o *)CommandCodeMaster__GetCollectionList((CommandCodeMaster_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_51;
  v8 = Instance;
  m_CancellationTokenSource = Instance->fields.m_CancellationTokenSource;
  v10 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_UserCommandCodeCollectionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity___ctor__);
  *getSum = 0;
  *findSum = 0;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    v11 = 0;
    while ( 1 )
    {
      if ( v11 >= LODWORD(v8->fields.m_CancellationTokenSource) )
        sub_1C93D34(Instance);
      v50 = *((_DWORD *)&v8->fields._DispLog + v11);
      v12 = System_Int64__ToString((int64_t)&userIdNumber, 0);
      v13 = System_Int32__ToString((int32_t)&v50, 0);
      v14 = System_String__Concat_64463988(v12, (System_String_o *)StringLiteral_1451/*":"*/, v13, 0);
      Instance = (DataManager_o *)DataMasterBase_object__object__object___get_lookup(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                    (const MethodInfo_3465D74 *)Method_DataMasterBase_UserCommandCodeCollectionMaster__UserCommandCodeCollectionEntity__string__get_lookup__);
      if ( !Instance )
        goto LABEL_51;
      klass = Instance->klass;
      v16 = Instance;
      v17 = *(unsigned __int16 *)&Instance->klass->_2.rank;
      if ( *(_WORD *)&Instance->klass->_2.rank )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IReadOnlyDictionary_string__UserCommandCodeCollectionEntity__c **)p_offset
                - 1) != System_Collections_Generic_IReadOnlyDictionary_string__UserCommandCodeCollectionEntity__TypeInfo )
        {
          --v17;
          p_offset += 4;
          if ( !v17 )
            goto LABEL_20;
        }
        v19 = (__int64)&klass->vtable + 16 * *p_offset;
      }
      else
      {
LABEL_20:
        v19 = sub_1C69E5C(
                Instance,
                System_Collections_Generic_IReadOnlyDictionary_string__UserCommandCodeCollectionEntity__TypeInfo,
                0);
      }
      if ( ((*(__int64 (__fastcall **)(DataManager_o *, System_String_o *, _QWORD))v19)(v16, v14, *(_QWORD *)(v19 + 8))
          & 1) != 0 )
        break;
      v25 = userIdNumber;
      commandCodeId = v50;
      v26 = (UserCommandCodeCollectionEntity_o *)sub_1C93D20(UserCommandCodeCollectionEntity_TypeInfo);
      UserCommandCodeCollectionEntity___ctor_43702876(v26, v25, commandCodeId, v27);
      if ( !v10 )
        goto LABEL_51;
      items = v10->fields._items;
      v35 = Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity__Add__;
      ++v10->fields._version;
      if ( !items )
        goto LABEL_51;
      size = v10->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        v39 = v35[4];
        v40 = v10;
        v7 = (Il2CppObject *)v26;
LABEL_46:
        System_Collections_Generic_List_object___AddWithResize(
          v40,
          v7,
          *(const MethodInfo_387999C **)(*(_QWORD *)(v39 + 192) + 112LL));
        goto LABEL_47;
      }
      v37 = &items->obj.klass + size;
      v10->fields._size = size + 1;
      v37[4] = (Il2CppClass *)v26;
      v38 = (GrandQuestFolderBoardItem_o *)(v37 + 4);
      LODWORD(v7) = (_DWORD)v26;
LABEL_44:
      sub_1C93A78(v38, (int32_t)v7, v28, v29, v30, v31, v32, v33);
LABEL_47:
      if ( ++v11 == (unsigned int)m_CancellationTokenSource )
        return (UserCommandCodeCollectionEntity_array *)System_Collections_Generic_List_object___ToArray(
                                                          v10,
                                                          (const MethodInfo_387B4F4 *)Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity__ToArray__);
    }
    Instance = (DataManager_o *)DataMasterBase_object__object__object___get_lookup(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                  (const MethodInfo_3465D74 *)Method_DataMasterBase_UserCommandCodeCollectionMaster__UserCommandCodeCollectionEntity__string__get_lookup__);
    if ( !Instance )
      goto LABEL_51;
    v20 = Instance->klass;
    v21 = Instance;
    v22 = *(unsigned __int16 *)&Instance->klass->_2.rank;
    if ( *(_WORD *)&Instance->klass->_2.rank )
    {
      v23 = (System_Collections_Generic_IReadOnlyDictionary_string__UserCommandCodeCollectionEntity__c **)&v20->_1.interfaceOffsets->offset;
      while ( *(v23 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__UserCommandCodeCollectionEntity__TypeInfo )
      {
        --v22;
        v23 += 2;
        if ( !v22 )
          goto LABEL_28;
      }
      v24 = (__int64)(&v20->vtable._2_GetHashCode + *(_DWORD *)v23);
    }
    else
    {
LABEL_28:
      v24 = sub_1C69E5C(
              Instance,
              System_Collections_Generic_IReadOnlyDictionary_string__UserCommandCodeCollectionEntity__TypeInfo,
              2);
    }
    Instance = (DataManager_o *)(*(__int64 (__fastcall **)(DataManager_o *, System_String_o *, _QWORD))v24)(
                                  v21,
                                  v14,
                                  *(_QWORD *)(v24 + 8));
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
    v42 = v10->fields._items;
    v43 = Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity__Add__;
    ++v10->fields._version;
    if ( !v42 )
      goto LABEL_51;
    v44 = v10->fields._size;
    if ( (unsigned int)v44 >= LODWORD(v42->max_length) )
    {
      v39 = v43[4];
      v40 = v10;
      goto LABEL_46;
    }
    v45 = &v42->obj.klass + v44;
    v10->fields._size = v44 + 1;
    v45[4] = (Il2CppClass *)v7;
    v38 = (GrandQuestFolderBoardItem_o *)(v45 + 4);
    goto LABEL_44;
  }
  if ( !v10 )
LABEL_51:
    sub_1C93D2C(Instance, v7);
  return (UserCommandCodeCollectionEntity_array *)System_Collections_Generic_List_object___ToArray(
                                                    v10,
                                                    (const MethodInfo_387B4F4 *)Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity__ToArray__);
}