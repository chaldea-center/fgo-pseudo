void UserCommandCodeCollectionMaster___ctor(UserCommandCodeCollectionMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C28027 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_UserCommandCodeCollectionMaster__UserCommandCodeCollectionEntity__string___ctor__);
    byte_4C28027 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    259,
    (const MethodInfo_338A52C *)Method_DataMasterBase_UserCommandCodeCollectionMaster__UserCommandCodeCollectionEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserCommandCodeCollectionEntity_o *UserCommandCodeCollectionMaster__GetEntity(
        UserCommandCodeCollectionMaster_o *this,
        int64_t userId,
        int32_t commandCodeId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C28025 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_UserCommandCodeCollectionMaster__UserCommandCodeCollectionEntity__string__GetEntity__);
    byte_4C28025 = 1;
  }
  PK = (Il2CppObject *)UserCommandCodeCollectionEntity__CreatePK(
                         userId,
                         commandCodeId,
                         *(const MethodInfo **)&commandCodeId);
  return (UserCommandCodeCollectionEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                PK,
                                                (const MethodInfo_338C850 *)Method_DataMasterBase_UserCommandCodeCollectionMaster__UserCommandCodeCollectionEntity__string__GetEntity__);
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
  if ( (byte_4C28028 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_UserCommandCodeCollectionMaster__UserCommandCodeCollectionEntity__string__get_lookup__);
    sub_1C2D490(&System_Collections_Generic_IReadOnlyDictionary_string__UserCommandCodeCollectionEntity__TypeInfo);
    sub_1C2D490(&UserCommandCodeCollectionEntity_TypeInfo);
    sub_1C2D490(&StringLiteral_1456/*":"*/);
    byte_4C28028 = 1;
  }
  v5 = System_Int64__ToString((int64_t)&v26, 0);
  v6 = System_Int32__ToString((int32_t)&v25, 0);
  v7 = System_String__Concat_63496112(v5, (System_String_o *)StringLiteral_1456/*":"*/, v6, 0);
  lookup = DataMasterBase_object__object__object___get_lookup(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             (const MethodInfo_338A644 *)Method_DataMasterBase_UserCommandCodeCollectionMaster__UserCommandCodeCollectionEntity__string__get_lookup__);
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
    v14 = sub_1C7DCA8(
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
    v22 = (UserCommandCodeCollectionEntity_o *)sub_1C2D6DC(UserCommandCodeCollectionEntity_TypeInfo);
    UserCommandCodeCollectionEntity___ctor_42764900(v22, v20, v21, v23);
    return v22;
  }
  lookup = DataMasterBase_object__object__object___get_lookup(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             (const MethodInfo_338A644 *)Method_DataMasterBase_UserCommandCodeCollectionMaster__UserCommandCodeCollectionEntity__string__get_lookup__);
  if ( !lookup )
LABEL_21:
    sub_1C2D6EC(lookup, v9);
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
    v19 = sub_1C7DCA8(
            lookup,
            System_Collections_Generic_IReadOnlyDictionary_string__UserCommandCodeCollectionEntity__TypeInfo,
            2);
  }
  return (UserCommandCodeCollectionEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *, System_String_o *, _QWORD))v19)(
                                                v16,
                                                v7,
                                                *(_QWORD *)(v19 + 8));
}


System_Int32_array *UserCommandCodeCollectionMaster__GetNewList(
        UserCommandCodeCollectionMaster_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v3; // x20
  const MethodInfo *v4; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int v6; // w21
  int32_t v7; // w22
  System_Collections_ObjectModel_Collection_T__o *v8; // x23
  void *monitor; // x23
  System_Collections_ObjectModel_Collection_T__c *klass; // x24
  struct System_Int32_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_4C2802C & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_UserCommandCodeCollectionEntity__get_Count__);
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_UserCommandCodeCollectionEntity__get_Item__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C2802C = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_1C2D6DC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_376C30C *)Method_System_Collections_Generic_List_int___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_19;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_3321208 *)Method_System_Collections_ObjectModel_Collection_UserCommandCodeCollectionEntity__get_Count__);
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
                                                                 (const MethodInfo_3321298 *)Method_System_Collections_ObjectModel_Collection_UserCommandCodeCollectionEntity__get_Item__);
      if ( list )
      {
        v8 = list;
        list = (System_Collections_ObjectModel_Collection_T__o *)UserCommandCodeCollectionEntity__IsNew(
                                                                   (UserCommandCodeCollectionEntity_o *)list,
                                                                   v4);
        if ( ((unsigned __int8)list & 1) != 0 )
        {
          klass = v8[1].klass;
          monitor = v8[1].monitor;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v15.fields.currentCryptoKey = klass;
          *(_QWORD *)&v15.fields.fakeValue = monitor;
          list = (System_Collections_ObjectModel_Collection_T__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
                                                                     v15,
                                                                     0);
          if ( !v3 )
            break;
          items = v3->fields._items;
          v12 = Method_System_Collections_Generic_List_int__Add__;
          ++v3->fields._version;
          if ( !items )
            break;
          size = v3->fields._size;
          v4 = (const MethodInfo *)(unsigned int)list;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v3,
              (int32_t)list,
              *(const MethodInfo_376CB60 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
          }
          else
          {
            v3->fields._size = size + 1;
            items->m_Items[size] = (int)list;
          }
        }
      }
      if ( v6 == ++v7 )
        goto LABEL_17;
    }
LABEL_19:
    sub_1C2D6EC(list, v4);
  }
LABEL_17:
  if ( !v3 )
    goto LABEL_19;
  return System_Collections_Generic_List_int___ToArray(
           v3,
           (const MethodInfo_376E618 *)Method_System_Collections_Generic_List_int__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
bool UserCommandCodeCollectionMaster__IsNew(
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
  Il2CppClass *klass; // x24
  void *monitor; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  if ( (byte_4C2802B & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_UserCommandCodeCollectionEntity__get_Count__);
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_UserCommandCodeCollectionEntity__get_Item__);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C2802B = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_14:
    sub_1C2D6EC(list, *(_QWORD *)&commandCodeId);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3321208 *)Method_System_Collections_ObjectModel_Collection_UserCommandCodeCollectionEntity__get_Count__);
  if ( Count < 1 )
    return 0;
  v7 = Count;
  v8 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_14;
    Item = System_Collections_ObjectModel_Collection_object___get_Item(
             list,
             v8,
             (const MethodInfo_3321298 *)Method_System_Collections_ObjectModel_Collection_UserCommandCodeCollectionEntity__get_Item__);
    if ( Item )
    {
      v10 = (UserCommandCodeCollectionEntity_o *)Item;
      monitor = Item[1].monitor;
      klass = Item[2].klass;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v14.fields.currentCryptoKey = monitor;
      *(_QWORD *)&v14.fields.fakeValue = klass;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v14, 0) == commandCodeId )
        return UserCommandCodeCollectionEntity__IsNew(v10, *(const MethodInfo **)&commandCodeId);
    }
    if ( v7 == ++v8 )
      return 0;
  }
}


bool UserCommandCodeCollectionMaster__TryGetEntity(
        UserCommandCodeCollectionMaster_o *this,
        UserCommandCodeCollectionEntity_o **entity,
        int64_t userId,
        int32_t commandCodeId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4C28026 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_UserCommandCodeCollectionMaster__UserCommandCodeCollectionEntity__string__TryGetEntity__);
    byte_4C28026 = 1;
  }
  PK = (Il2CppObject *)UserCommandCodeCollectionEntity__CreatePK(userId, commandCodeId, (const MethodInfo *)userId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_338C89C *)Method_DataMasterBase_UserCommandCodeCollectionMaster__UserCommandCodeCollectionEntity__string__TryGetEntity__);
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

  if ( (byte_4C2802D & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_UserCommandCodeCollectionEntity__get_Count__);
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_UserCommandCodeCollectionEntity__get_Item__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&UserCommandCodeCollectionManager_TypeInfo);
    byte_4C2802D = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_1C2D6DC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_376C30C *)Method_System_Collections_Generic_List_int___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_21;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_3321208 *)Method_System_Collections_ObjectModel_Collection_UserCommandCodeCollectionEntity__get_Count__);
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
                                                                 (const MethodInfo_3321298 *)Method_System_Collections_ObjectModel_Collection_UserCommandCodeCollectionEntity__get_Item__);
      if ( list && LODWORD(list[1].fields.items) == 2 )
      {
        klass = list[1].klass;
        monitor = list[1].monitor;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v14.fields.currentCryptoKey = klass;
        *(_QWORD *)&v14.fields.fakeValue = monitor;
        list = (System_Collections_ObjectModel_Collection_T__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
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
            *(const MethodInfo_376CB60 **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
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
    sub_1C2D6EC(list, v4);
  }
LABEL_17:
  if ( !v3 )
    goto LABEL_21;
  v13 = System_Collections_Generic_List_int___ToArray(
          v3,
          (const MethodInfo_376E618 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !UserCommandCodeCollectionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserCommandCodeCollectionManager_TypeInfo);
  UserCommandCodeCollectionManager__SetOld_43293984(v13, 0);
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
  __int64 v11; // x2
  unsigned __int64 v12; // x27
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
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  struct System_Object_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10
  Il2CppClass **v34; // x0
  CGThumbnailListItem_o *v35; // x0
  __int64 v36; // x8
  System_Collections_Generic_List_object__o *v37; // x0
  int datalist; // w8
  struct System_Object_array *v39; // x8
  _QWORD *v40; // x9
  __int64 v41; // x10
  Il2CppClass **v42; // x0
  int32_t commandCodeId; // [xsp+10h] [xbp-70h]
  int32_t v47; // [xsp+14h] [xbp-6Ch] BYREF
  int64_t userIdNumber; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4C2802A & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_CommandCodeMaster___);
    sub_1C2D490(&Method_DataMasterBase_UserCommandCodeCollectionMaster__UserCommandCodeCollectionEntity__string__get_lookup__);
    sub_1C2D490(&System_Collections_Generic_IReadOnlyDictionary_string__UserCommandCodeCollectionEntity__TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_UserCommandCodeCollectionEntity__TypeInfo);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&UserCommandCodeCollectionEntity_TypeInfo);
    sub_1C2D490(&StringLiteral_1456/*":"*/);
    byte_4C2802A = 1;
  }
  v47 = 0;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C211E1 )
  {
    sub_1C2D490(&NetworkManager_TypeInfo);
    byte_4C211E1 = 1;
  }
  v5 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v5 = NetworkManager_TypeInfo;
  }
  userIdNumber = v5->static_fields->userIdNumber;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_51;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  if ( !Instance )
    goto LABEL_51;
  Instance = (DataManager_o *)CommandCodeMaster__GetCollectionList((CommandCodeMaster_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_51;
  v8 = Instance;
  m_CancellationTokenSource = Instance->fields.m_CancellationTokenSource;
  v10 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_UserCommandCodeCollectionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity___ctor__);
  *getSum = 0;
  *findSum = 0;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    v12 = 0;
    while ( 1 )
    {
      if ( v12 >= LODWORD(v8->fields.m_CancellationTokenSource) )
        sub_1C2D6F4(Instance, v7, v11);
      v47 = *((_DWORD *)&v8->fields._DispLog + v12);
      v13 = System_Int64__ToString((int64_t)&userIdNumber, 0);
      v14 = System_Int32__ToString((int32_t)&v47, 0);
      v15 = System_String__Concat_63496112(v13, (System_String_o *)StringLiteral_1456/*":"*/, v14, 0);
      Instance = (DataManager_o *)DataMasterBase_object__object__object___get_lookup(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                    (const MethodInfo_338A644 *)Method_DataMasterBase_UserCommandCodeCollectionMaster__UserCommandCodeCollectionEntity__string__get_lookup__);
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
        v20 = sub_1C7DCA8(
                Instance,
                System_Collections_Generic_IReadOnlyDictionary_string__UserCommandCodeCollectionEntity__TypeInfo,
                0);
      }
      if ( ((*(__int64 (__fastcall **)(DataManager_o *, System_String_o *, _QWORD))v20)(v17, v15, *(_QWORD *)(v20 + 8))
          & 1) != 0 )
        break;
      v26 = userIdNumber;
      commandCodeId = v47;
      v27 = (UserCommandCodeCollectionEntity_o *)sub_1C2D6DC(UserCommandCodeCollectionEntity_TypeInfo);
      UserCommandCodeCollectionEntity___ctor_42764900(v27, v26, commandCodeId, v28);
      if ( !v10 )
        goto LABEL_51;
      items = v10->fields._items;
      v32 = Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity__Add__;
      ++v10->fields._version;
      if ( !items )
        goto LABEL_51;
      size = v10->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        v36 = v32[4];
        v37 = v10;
        v7 = (Il2CppObject *)v27;
LABEL_46:
        System_Collections_Generic_List_object___AddWithResize(
          v37,
          v7,
          *(const MethodInfo_3789B84 **)(*(_QWORD *)(v36 + 192) + 112LL));
        goto LABEL_47;
      }
      v34 = &items->obj.klass + size;
      v10->fields._size = size + 1;
      v34[4] = (Il2CppClass *)v27;
      v35 = (CGThumbnailListItem_o *)(v34 + 4);
      LODWORD(v7) = (_DWORD)v27;
LABEL_44:
      sub_1C2D434(v35, (int32_t)v7, v29, v30);
LABEL_47:
      if ( ++v12 == (unsigned int)m_CancellationTokenSource )
        return (UserCommandCodeCollectionEntity_array *)System_Collections_Generic_List_object___ToArray(
                                                          v10,
                                                          (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity__ToArray__);
    }
    Instance = (DataManager_o *)DataMasterBase_object__object__object___get_lookup(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                  (const MethodInfo_338A644 *)Method_DataMasterBase_UserCommandCodeCollectionMaster__UserCommandCodeCollectionEntity__string__get_lookup__);
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
      v25 = sub_1C7DCA8(
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
    v39 = v10->fields._items;
    v40 = Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity__Add__;
    ++v10->fields._version;
    if ( !v39 )
      goto LABEL_51;
    v41 = v10->fields._size;
    if ( (unsigned int)v41 >= LODWORD(v39->max_length) )
    {
      v36 = v40[4];
      v37 = v10;
      goto LABEL_46;
    }
    v42 = &v39->obj.klass + v41;
    v10->fields._size = v41 + 1;
    v42[4] = (Il2CppClass *)v7;
    v35 = (CGThumbnailListItem_o *)(v42 + 4);
    goto LABEL_44;
  }
  if ( !v10 )
LABEL_51:
    sub_1C2D6EC(Instance, v7);
  return (UserCommandCodeCollectionEntity_array *)System_Collections_Generic_List_object___ToArray(
                                                    v10,
                                                    (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity__ToArray__);
}


System_Int32_array *UserCommandCodeCollectionMaster__getCommandCodeIdList(
        UserCommandCodeCollectionMaster_o *this,
        int64_t userId,
        int32_t svtId,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v7; // x1

  if ( (byte_4C2802E & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C2802E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___)) == 0 )
  {
    sub_1C2D6EC(Instance, v7);
  }
  return UserServantCommandCodeMaster__getCommandCodeIdList(
           (UserServantCommandCodeMaster_o *)Instance,
           userId,
           svtId,
           0);
}


UserCommandCodeCollectionEntity_array *UserCommandCodeCollectionMaster__getList(
        UserCommandCodeCollectionMaster_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  NetworkManager_c *v6; // x0
  __int64 Instance; // x0
  __int64 v8; // x1
  __int64 v9; // x22
  unsigned __int64 v10; // x25
  __int64 v11; // x29
  System_String_o *v12; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  System_String_o *v15; // x23
  System_String_o *v16; // x0
  System_String_o *v17; // x23
  __int64 v18; // x8
  __int64 v19; // x24
  __int64 v20; // x9
  int *v21; // x10
  __int64 v22; // x0
  __int64 v23; // x8
  __int64 v24; // x24
  __int64 v25; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__UserCommandCodeCollectionEntity__c **v26; // x10
  __int64 v27; // x0
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x0
  int64_t userIdNumber; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4C28029 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C2D490(&Method_DataMasterBase_UserCommandCodeCollectionMaster__UserCommandCodeCollectionEntity__string__get_lookup__);
    sub_1C2D490(&System_Collections_Generic_IReadOnlyDictionary_string__UserCommandCodeCollectionEntity__TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_UserCommandCodeCollectionEntity__TypeInfo);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&StringLiteral_1456/*":"*/);
    byte_4C28029 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_UserCommandCodeCollectionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity___ctor__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C211E1 )
  {
    sub_1C2D490(&NetworkManager_TypeInfo);
    byte_4C211E1 = 1;
  }
  v6 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v6 = NetworkManager_TypeInfo;
  }
  userIdNumber = v6->static_fields->userIdNumber;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_40;
  Instance = (__int64)ServantMaster__GetCollectionList((ServantMaster_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_40;
  v9 = Instance;
  if ( (int)*(_QWORD *)(Instance + 24) >= 1 )
  {
    v10 = 0;
    v11 = (unsigned int)*(_QWORD *)(Instance + 24);
    while ( 1 )
    {
      v12 = System_Int64__ToString((int64_t)&userIdNumber, 0);
      if ( v10 >= *(unsigned int *)(v9 + 24) )
        sub_1C2D6F4(v12, v13, v14);
      v15 = v12;
      v16 = System_Int32__ToString((int)v9 + 4 * (int)v10 + 32, 0);
      v17 = System_String__Concat_63496112(v15, (System_String_o *)StringLiteral_1456/*":"*/, v16, 0);
      Instance = (__int64)DataMasterBase_object__object__object___get_lookup(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                            (const MethodInfo_338A644 *)Method_DataMasterBase_UserCommandCodeCollectionMaster__UserCommandCodeCollectionEntity__string__get_lookup__);
      if ( !Instance )
        break;
      v18 = *(_QWORD *)Instance;
      v19 = Instance;
      v20 = *(unsigned __int16 *)(*(_QWORD *)Instance + 302LL);
      if ( *(_WORD *)(*(_QWORD *)Instance + 302LL) )
      {
        v21 = (int *)(*(_QWORD *)(v18 + 176) + 8LL);
        while ( *((System_Collections_Generic_IReadOnlyDictionary_string__UserCommandCodeCollectionEntity__c **)v21 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__UserCommandCodeCollectionEntity__TypeInfo )
        {
          --v20;
          v21 += 4;
          if ( !v20 )
            goto LABEL_20;
        }
        v22 = v18 + 16LL * *v21 + 312;
      }
      else
      {
LABEL_20:
        v22 = sub_1C7DCA8(
                Instance,
                System_Collections_Generic_IReadOnlyDictionary_string__UserCommandCodeCollectionEntity__TypeInfo,
                0);
      }
      Instance = (*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v22)(v19, v17, *(_QWORD *)(v22 + 8));
      if ( (Instance & 1) != 0 )
      {
        Instance = (__int64)DataMasterBase_object__object__object___get_lookup(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                              (const MethodInfo_338A644 *)Method_DataMasterBase_UserCommandCodeCollectionMaster__UserCommandCodeCollectionEntity__string__get_lookup__);
        if ( !Instance )
          break;
        v23 = *(_QWORD *)Instance;
        v24 = Instance;
        v25 = *(unsigned __int16 *)(*(_QWORD *)Instance + 302LL);
        if ( *(_WORD *)(*(_QWORD *)Instance + 302LL) )
        {
          v26 = (System_Collections_Generic_IReadOnlyDictionary_string__UserCommandCodeCollectionEntity__c **)(*(_QWORD *)(v23 + 176) + 8LL);
          while ( *(v26 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__UserCommandCodeCollectionEntity__TypeInfo )
          {
            --v25;
            v26 += 2;
            if ( !v25 )
              goto LABEL_28;
          }
          v27 = v23 + 16LL * (*(_DWORD *)v26 + 2) + 312;
        }
        else
        {
LABEL_28:
          v27 = sub_1C7DCA8(
                  Instance,
                  System_Collections_Generic_IReadOnlyDictionary_string__UserCommandCodeCollectionEntity__TypeInfo,
                  2);
        }
        Instance = (*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v27)(v24, v17, *(_QWORD *)(v27 + 8));
        if ( !Instance )
          break;
        v8 = Instance;
        if ( *(_DWORD *)(Instance + 40) == kind )
        {
          if ( !v5 )
            break;
          items = v5->fields._items;
          v31 = Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity__Add__;
          ++v5->fields._version;
          if ( !items )
            break;
          size = v5->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v5,
              (Il2CppObject *)Instance,
              *(const MethodInfo_3789B84 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
          }
          else
          {
            v33 = &items->obj.klass + size;
            v5->fields._size = size + 1;
            v33[4] = (Il2CppClass *)v8;
            sub_1C2D434((CGThumbnailListItem_o *)(v33 + 4), v8, v28, v29);
          }
        }
      }
      if ( ++v10 == v11 )
        goto LABEL_38;
    }
LABEL_40:
    sub_1C2D6EC(Instance, v8);
  }
LABEL_38:
  if ( !v5 )
    goto LABEL_40;
  return (UserCommandCodeCollectionEntity_array *)System_Collections_Generic_List_object___ToArray(
                                                    v5,
                                                    (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity__ToArray__);
}