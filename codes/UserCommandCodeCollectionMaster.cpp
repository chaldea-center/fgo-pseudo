void __fastcall UserCommandCodeCollectionMaster___ctor(
        UserCommandCodeCollectionMaster_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C22BDE & 1) == 0 )
  {
    sub_1C3B764(
      &Method_DataMasterBase_UserCommandCodeCollectionMaster__UserCommandCodeCollectionEntity__string___ctor__,
      method);
    byte_4C22BDE = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    259,
    (const MethodInfo_329D5DC *)Method_DataMasterBase_UserCommandCodeCollectionMaster__UserCommandCodeCollectionEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserCommandCodeCollectionEntity_o *__fastcall UserCommandCodeCollectionMaster__GetEntity(
        UserCommandCodeCollectionMaster_o *this,
        int64_t userId,
        int32_t commandCodeId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C22BDC & 1) == 0 )
  {
    sub_1C3B764(
      &Method_DataMasterBase_UserCommandCodeCollectionMaster__UserCommandCodeCollectionEntity__string__GetEntity__,
      userId);
    byte_4C22BDC = 1;
  }
  PK = (Il2CppObject *)UserCommandCodeCollectionEntity__CreatePK(
                         userId,
                         commandCodeId,
                         *(const MethodInfo **)&commandCodeId);
  return (UserCommandCodeCollectionEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                PK,
                                                (const MethodInfo_329F900 *)Method_DataMasterBase_UserCommandCodeCollectionMaster__UserCommandCodeCollectionEntity__string__GetEntity__);
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
  if ( (byte_4C22BDF & 1) == 0 )
  {
    sub_1C3B764(
      &Method_DataMasterBase_UserCommandCodeCollectionMaster__UserCommandCodeCollectionEntity__string__get_lookup__,
      userId);
    sub_1C3B764(&System_Collections_Generic_IReadOnlyDictionary_string__UserCommandCodeCollectionEntity__TypeInfo, v5);
    sub_1C3B764(&UserCommandCodeCollectionEntity_TypeInfo, v6);
    sub_1C3B764(&StringLiteral_1525/*"</Exponent></RSAKeyValue>"*/, v7);
    byte_4C22BDF = 1;
  }
  v8 = System_Int64__ToString((int64_t)&v29, 0LL);
  v9 = System_Int32__ToString((int32_t)&v28, 0LL);
  v10 = System_String__Concat_63379872(v8, (System_String_o *)StringLiteral_1525/*"</Exponent></RSAKeyValue>"*/, v9, 0LL);
  lookup = DataMasterBase_object__object__object___get_lookup(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             (const MethodInfo_329D6F4 *)Method_DataMasterBase_UserCommandCodeCollectionMaster__UserCommandCodeCollectionEntity__string__get_lookup__);
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
    p_method = sub_1C8D744(
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
    v25 = (UserCommandCodeCollectionEntity_o *)sub_1C3B9B0(UserCommandCodeCollectionEntity_TypeInfo);
    UserCommandCodeCollectionEntity___ctor_41512352(v25, v23, v24, v26);
    return v25;
  }
  lookup = DataMasterBase_object__object__object___get_lookup(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             (const MethodInfo_329D6F4 *)Method_DataMasterBase_UserCommandCodeCollectionMaster__UserCommandCodeCollectionEntity__string__get_lookup__);
  if ( !lookup )
LABEL_21:
    sub_1C3B9C0(lookup, v12);
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
    v22 = sub_1C8D744(
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

  if ( (byte_4C22BE3 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_ObjectModel_Collection_UserCommandCodeCollectionEntity__get_Count__, method);
    sub_1C3B764(&Method_System_Collections_ObjectModel_Collection_UserCommandCodeCollectionEntity__get_Item__, v3);
    sub_1C3B764(&Method_System_Collections_Generic_List_int__Add__, v4);
    sub_1C3B764(&Method_System_Collections_Generic_List_int__ToArray__, v5);
    sub_1C3B764(&Method_System_Collections_Generic_List_int___ctor__, v6);
    sub_1C3B764(&System_Collections_Generic_List_int__TypeInfo, v7);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    byte_4C22BE3 = 1;
  }
  v9 = (System_Collections_Generic_List_int__o *)sub_1C3B9B0(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_366E3F4 *)Method_System_Collections_Generic_List_int___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_19;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_32351F4 *)Method_System_Collections_ObjectModel_Collection_UserCommandCodeCollectionEntity__get_Count__);
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
                                                                 (const MethodInfo_3235284 *)Method_System_Collections_ObjectModel_Collection_UserCommandCodeCollectionEntity__get_Item__);
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
          list = (System_Collections_ObjectModel_Collection_T__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(
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
              *(const MethodInfo_366EC48 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
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
    sub_1C3B9C0(list, v10);
  }
LABEL_17:
  if ( !v9 )
    goto LABEL_19;
  return System_Collections_Generic_List_int___ToArray(
           v9,
           (const MethodInfo_3670700 *)Method_System_Collections_Generic_List_int__ToArray__);
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

  if ( (byte_4C22BE2 & 1) == 0 )
  {
    sub_1C3B764(
      &Method_System_Collections_ObjectModel_Collection_UserCommandCodeCollectionEntity__get_Count__,
      *(_QWORD *)&commandCodeId);
    sub_1C3B764(&Method_System_Collections_ObjectModel_Collection_UserCommandCodeCollectionEntity__get_Item__, v5);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    byte_4C22BE2 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_14:
    sub_1C3B9C0(list, *(_QWORD *)&commandCodeId);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_32351F4 *)Method_System_Collections_ObjectModel_Collection_UserCommandCodeCollectionEntity__get_Count__);
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
             (const MethodInfo_3235284 *)Method_System_Collections_ObjectModel_Collection_UserCommandCodeCollectionEntity__get_Item__);
    if ( Item )
    {
      v12 = (UserCommandCodeCollectionEntity_o *)Item;
      monitor = Item[1].monitor;
      klass = Item[2].klass;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v16.fields.currentCryptoKey = monitor;
      *(_QWORD *)&v16.fields.fakeValue = klass;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v16, 0LL) == commandCodeId )
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

  if ( (byte_4C22BDD & 1) == 0 )
  {
    sub_1C3B764(
      &Method_DataMasterBase_UserCommandCodeCollectionMaster__UserCommandCodeCollectionEntity__string__TryGetEntity__,
      entity);
    byte_4C22BDD = 1;
  }
  PK = (Il2CppObject *)UserCommandCodeCollectionEntity__CreatePK(userId, commandCodeId, (const MethodInfo *)userId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_329F94C *)Method_DataMasterBase_UserCommandCodeCollectionMaster__UserCommandCodeCollectionEntity__string__TryGetEntity__);
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

  if ( (byte_4C22BE4 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_ObjectModel_Collection_UserCommandCodeCollectionEntity__get_Count__, method);
    sub_1C3B764(&Method_System_Collections_ObjectModel_Collection_UserCommandCodeCollectionEntity__get_Item__, v3);
    sub_1C3B764(&Method_System_Collections_Generic_List_int__Add__, v4);
    sub_1C3B764(&Method_System_Collections_Generic_List_int__ToArray__, v5);
    sub_1C3B764(&Method_System_Collections_Generic_List_int___ctor__, v6);
    sub_1C3B764(&System_Collections_Generic_List_int__TypeInfo, v7);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_1C3B764(&UserCommandCodeCollectionManager_TypeInfo, v9);
    byte_4C22BE4 = 1;
  }
  v10 = (System_Collections_Generic_List_int__o *)sub_1C3B9B0(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v10,
    (const MethodInfo_366E3F4 *)Method_System_Collections_Generic_List_int___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_21;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_32351F4 *)Method_System_Collections_ObjectModel_Collection_UserCommandCodeCollectionEntity__get_Count__);
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
                                                                 (const MethodInfo_3235284 *)Method_System_Collections_ObjectModel_Collection_UserCommandCodeCollectionEntity__get_Item__);
      if ( list && LODWORD(list[1].fields.items) == 2 )
      {
        klass = list[1].klass;
        monitor = list[1].monitor;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v21.fields.currentCryptoKey = klass;
        *(_QWORD *)&v21.fields.fakeValue = monitor;
        list = (System_Collections_ObjectModel_Collection_T__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(
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
            *(const MethodInfo_366EC48 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
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
    sub_1C3B9C0(list, v11);
  }
LABEL_17:
  if ( !v10 )
    goto LABEL_21;
  v20 = System_Collections_Generic_List_int___ToArray(
          v10,
          (const MethodInfo_3670700 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !UserCommandCodeCollectionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserCommandCodeCollectionManager_TypeInfo);
  UserCommandCodeCollectionManager__SetOld_42022328(v20, 0LL);
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
  unsigned __int64 v21; // x27
  System_String_o *v22; // x24
  System_String_o *v23; // x0
  System_String_o *v24; // x24
  DataManager_c *klass; // x8
  DataManager_o *v26; // x25
  __int64 v27; // x9
  int *p_offset; // x10
  __int64 v29; // x0
  DataManager_c *v30; // x8
  DataManager_o *v31; // x25
  __int64 v32; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__UserCommandCodeCollectionEntity__c **v33; // x10
  __int64 v34; // x0
  int64_t v35; // x25
  UserCommandCodeCollectionEntity_o *v36; // x24
  const MethodInfo *v37; // x3
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  struct System_Object_array *items; // x8
  _QWORD *v45; // x9
  __int64 size; // x10
  Il2CppClass **v47; // x0
  PartyOrganizationUtility_o *v48; // x0
  __int64 v49; // x8
  System_Collections_Generic_List_object__o *v50; // x0
  int datalist; // w8
  struct System_Object_array *v52; // x8
  _QWORD *v53; // x9
  __int64 v54; // x10
  Il2CppClass **v55; // x0
  int commandCodeId; // [xsp+10h] [xbp-70h]
  int v60; // [xsp+14h] [xbp-6Ch] BYREF
  int64_t userIdNumber; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4C22BE1 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_CommandCodeMaster___, getSum);
    sub_1C3B764(
      &Method_DataMasterBase_UserCommandCodeCollectionMaster__UserCommandCodeCollectionEntity__string__get_lookup__,
      v5);
    sub_1C3B764(&System_Collections_Generic_IReadOnlyDictionary_string__UserCommandCodeCollectionEntity__TypeInfo, v6);
    sub_1C3B764(&Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity__Add__, v7);
    sub_1C3B764(&Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity__ToArray__, v8);
    sub_1C3B764(&Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity___ctor__, v9);
    sub_1C3B764(&System_Collections_Generic_List_UserCommandCodeCollectionEntity__TypeInfo, v10);
    sub_1C3B764(&NetworkManager_TypeInfo, v11);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_1C3B764(&UserCommandCodeCollectionEntity_TypeInfo, v13);
    sub_1C3B764(&StringLiteral_1525/*"</Exponent></RSAKeyValue>"*/, v14);
    byte_4C22BE1 = 1;
  }
  v60 = 0;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C1C955 )
  {
    sub_1C3B764(&NetworkManager_TypeInfo, getSum);
    byte_4C1C955 = 1;
  }
  v15 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v15 = NetworkManager_TypeInfo;
  }
  userIdNumber = v15->static_fields->userIdNumber;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_51;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  if ( !Instance )
    goto LABEL_51;
  Instance = (DataManager_o *)CommandCodeMaster__GetCollectionList((CommandCodeMaster_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_51;
  v18 = Instance;
  m_CancellationTokenSource = Instance->fields.m_CancellationTokenSource;
  v20 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_UserCommandCodeCollectionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity___ctor__);
  *getSum = 0;
  *findSum = 0;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    v21 = 0LL;
    while ( 1 )
    {
      if ( v21 >= LODWORD(v18->fields.m_CancellationTokenSource) )
        sub_1C3B9C8(Instance, v17);
      v60 = *((_DWORD *)&v18->fields._DispLog + v21);
      v22 = System_Int64__ToString((int64_t)&userIdNumber, 0LL);
      v23 = System_Int32__ToString((int32_t)&v60, 0LL);
      v24 = System_String__Concat_63379872(v22, (System_String_o *)StringLiteral_1525/*"</Exponent></RSAKeyValue>"*/, v23, 0LL);
      Instance = (DataManager_o *)DataMasterBase_object__object__object___get_lookup(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                    (const MethodInfo_329D6F4 *)Method_DataMasterBase_UserCommandCodeCollectionMaster__UserCommandCodeCollectionEntity__string__get_lookup__);
      if ( !Instance )
        goto LABEL_51;
      klass = Instance->klass;
      v26 = Instance;
      v27 = *(unsigned __int16 *)(&Instance->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&Instance->klass->_2.bitflags2 + 3) )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IReadOnlyDictionary_string__UserCommandCodeCollectionEntity__c **)p_offset
                - 1) != System_Collections_Generic_IReadOnlyDictionary_string__UserCommandCodeCollectionEntity__TypeInfo )
        {
          --v27;
          p_offset += 4;
          if ( !v27 )
            goto LABEL_20;
        }
        v29 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
      }
      else
      {
LABEL_20:
        v29 = sub_1C8D744(
                Instance,
                System_Collections_Generic_IReadOnlyDictionary_string__UserCommandCodeCollectionEntity__TypeInfo,
                0LL);
      }
      if ( ((*(__int64 (__fastcall **)(DataManager_o *, System_String_o *, _QWORD))v29)(v26, v24, *(_QWORD *)(v29 + 8)) & 1) != 0 )
        break;
      v35 = userIdNumber;
      commandCodeId = v60;
      v36 = (UserCommandCodeCollectionEntity_o *)sub_1C3B9B0(UserCommandCodeCollectionEntity_TypeInfo);
      UserCommandCodeCollectionEntity___ctor_41512352(v36, v35, commandCodeId, v37);
      if ( !v20 )
        goto LABEL_51;
      items = v20->fields._items;
      v45 = Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity__Add__;
      ++v20->fields._version;
      if ( !items )
        goto LABEL_51;
      size = v20->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        v49 = v45[4];
        v50 = v20;
        v17 = (Il2CppObject *)v36;
LABEL_46:
        System_Collections_Generic_List_object___AddWithResize(
          v50,
          v17,
          *(const MethodInfo_368BC6C **)(*(_QWORD *)(v49 + 192) + 112LL));
        goto LABEL_47;
      }
      v47 = &items->obj.klass + size;
      v20->fields._size = size + 1;
      v47[4] = (Il2CppClass *)v36;
      v48 = (PartyOrganizationUtility_o *)(v47 + 4);
      v17 = (Il2CppObject *)v36;
LABEL_44:
      sub_1C3B708(v48, (int64_t)v17, v38, v39, v40, v41, v42, v43);
LABEL_47:
      if ( ++v21 == (unsigned int)m_CancellationTokenSource )
        return (UserCommandCodeCollectionEntity_array *)System_Collections_Generic_List_object___ToArray(
                                                          v20,
                                                          (const MethodInfo_368D7C4 *)Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity__ToArray__);
    }
    Instance = (DataManager_o *)DataMasterBase_object__object__object___get_lookup(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                  (const MethodInfo_329D6F4 *)Method_DataMasterBase_UserCommandCodeCollectionMaster__UserCommandCodeCollectionEntity__string__get_lookup__);
    if ( !Instance )
      goto LABEL_51;
    v30 = Instance->klass;
    v31 = Instance;
    v32 = *(unsigned __int16 *)(&Instance->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Instance->klass->_2.bitflags2 + 3) )
    {
      v33 = (System_Collections_Generic_IReadOnlyDictionary_string__UserCommandCodeCollectionEntity__c **)&v30->_1.interfaceOffsets->offset;
      while ( *(v33 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__UserCommandCodeCollectionEntity__TypeInfo )
      {
        --v32;
        v33 += 2;
        if ( !v32 )
          goto LABEL_28;
      }
      v34 = (__int64)(&v30->vtable._2_GetHashCode.method + 2 * *(_DWORD *)v33);
    }
    else
    {
LABEL_28:
      v34 = sub_1C8D744(
              Instance,
              System_Collections_Generic_IReadOnlyDictionary_string__UserCommandCodeCollectionEntity__TypeInfo,
              2LL);
    }
    Instance = (DataManager_o *)(*(__int64 (__fastcall **)(DataManager_o *, System_String_o *, _QWORD))v34)(
                                  v31,
                                  v24,
                                  *(_QWORD *)(v34 + 8));
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
    v52 = v20->fields._items;
    v53 = Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity__Add__;
    ++v20->fields._version;
    if ( !v52 )
      goto LABEL_51;
    v54 = v20->fields._size;
    if ( (unsigned int)v54 >= v52->max_length )
    {
      v49 = v53[4];
      v50 = v20;
      goto LABEL_46;
    }
    v55 = &v52->obj.klass + v54;
    v20->fields._size = v54 + 1;
    v55[4] = (Il2CppClass *)v17;
    v48 = (PartyOrganizationUtility_o *)(v55 + 4);
    goto LABEL_44;
  }
  if ( !v20 )
LABEL_51:
    sub_1C3B9C0(Instance, v17);
  return (UserCommandCodeCollectionEntity_array *)System_Collections_Generic_List_object___ToArray(
                                                    v20,
                                                    (const MethodInfo_368D7C4 *)Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity__ToArray__);
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

  if ( (byte_4C22BE5 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___, userId);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4C22BE5 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___)) == 0LL )
  {
    sub_1C3B9C0(Instance, v8);
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
  int64_t v18; // x1
  __int64 v19; // x22
  unsigned __int64 v20; // x25
  __int64 v21; // x29
  System_String_o *v22; // x0
  __int64 v23; // x1
  System_String_o *v24; // x23
  System_String_o *v25; // x0
  System_String_o *v26; // x23
  __int64 v27; // x8
  __int64 v28; // x24
  __int64 v29; // x9
  int *v30; // x10
  __int64 v31; // x0
  __int64 v32; // x8
  __int64 v33; // x24
  __int64 v34; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__UserCommandCodeCollectionEntity__c **v35; // x10
  __int64 v36; // x0
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  struct System_Object_array *items; // x8
  _QWORD *v44; // x9
  __int64 size; // x10
  Il2CppClass **v46; // x0
  int64_t userIdNumber; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4C22BE0 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_ServantMaster___, *(_QWORD *)&kind);
    sub_1C3B764(
      &Method_DataMasterBase_UserCommandCodeCollectionMaster__UserCommandCodeCollectionEntity__string__get_lookup__,
      v5);
    sub_1C3B764(&System_Collections_Generic_IReadOnlyDictionary_string__UserCommandCodeCollectionEntity__TypeInfo, v6);
    sub_1C3B764(&Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity__Add__, v7);
    sub_1C3B764(&Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity__ToArray__, v8);
    sub_1C3B764(&Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity___ctor__, v9);
    sub_1C3B764(&System_Collections_Generic_List_UserCommandCodeCollectionEntity__TypeInfo, v10);
    sub_1C3B764(&NetworkManager_TypeInfo, v11);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_1C3B764(&StringLiteral_1525/*"</Exponent></RSAKeyValue>"*/, v13);
    byte_4C22BE0 = 1;
  }
  v14 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_UserCommandCodeCollectionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity___ctor__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C1C955 )
  {
    sub_1C3B764(&NetworkManager_TypeInfo, v15);
    byte_4C1C955 = 1;
  }
  v16 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v16 = NetworkManager_TypeInfo;
  }
  userIdNumber = v16->static_fields->userIdNumber;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_ServantMaster___);
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
        sub_1C3B9C8(v22, v23);
      v24 = v22;
      v25 = System_Int32__ToString((int)v19 + 4 * (int)v20 + 32, 0LL);
      v26 = System_String__Concat_63379872(v24, (System_String_o *)StringLiteral_1525/*"</Exponent></RSAKeyValue>"*/, v25, 0LL);
      Instance = (__int64)DataMasterBase_object__object__object___get_lookup(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                            (const MethodInfo_329D6F4 *)Method_DataMasterBase_UserCommandCodeCollectionMaster__UserCommandCodeCollectionEntity__string__get_lookup__);
      if ( !Instance )
        break;
      v27 = *(_QWORD *)Instance;
      v28 = Instance;
      v29 = *(unsigned __int16 *)(*(_QWORD *)Instance + 302LL);
      if ( *(_WORD *)(*(_QWORD *)Instance + 302LL) )
      {
        v30 = (int *)(*(_QWORD *)(v27 + 176) + 8LL);
        while ( *((System_Collections_Generic_IReadOnlyDictionary_string__UserCommandCodeCollectionEntity__c **)v30 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__UserCommandCodeCollectionEntity__TypeInfo )
        {
          --v29;
          v30 += 4;
          if ( !v29 )
            goto LABEL_20;
        }
        v31 = v27 + 16LL * *v30 + 312;
      }
      else
      {
LABEL_20:
        v31 = sub_1C8D744(
                Instance,
                System_Collections_Generic_IReadOnlyDictionary_string__UserCommandCodeCollectionEntity__TypeInfo,
                0LL);
      }
      Instance = (*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v31)(v28, v26, *(_QWORD *)(v31 + 8));
      if ( (Instance & 1) != 0 )
      {
        Instance = (__int64)DataMasterBase_object__object__object___get_lookup(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                              (const MethodInfo_329D6F4 *)Method_DataMasterBase_UserCommandCodeCollectionMaster__UserCommandCodeCollectionEntity__string__get_lookup__);
        if ( !Instance )
          break;
        v32 = *(_QWORD *)Instance;
        v33 = Instance;
        v34 = *(unsigned __int16 *)(*(_QWORD *)Instance + 302LL);
        if ( *(_WORD *)(*(_QWORD *)Instance + 302LL) )
        {
          v35 = (System_Collections_Generic_IReadOnlyDictionary_string__UserCommandCodeCollectionEntity__c **)(*(_QWORD *)(v32 + 176) + 8LL);
          while ( *(v35 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__UserCommandCodeCollectionEntity__TypeInfo )
          {
            --v34;
            v35 += 2;
            if ( !v34 )
              goto LABEL_28;
          }
          v36 = v32 + 16LL * (*(_DWORD *)v35 + 2) + 312;
        }
        else
        {
LABEL_28:
          v36 = sub_1C8D744(
                  Instance,
                  System_Collections_Generic_IReadOnlyDictionary_string__UserCommandCodeCollectionEntity__TypeInfo,
                  2LL);
        }
        Instance = (*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v36)(v33, v26, *(_QWORD *)(v36 + 8));
        if ( !Instance )
          break;
        v18 = Instance;
        if ( *(_DWORD *)(Instance + 40) == kind )
        {
          if ( !v14 )
            break;
          items = v14->fields._items;
          v44 = Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity__Add__;
          ++v14->fields._version;
          if ( !items )
            break;
          size = v14->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v14,
              (Il2CppObject *)Instance,
              *(const MethodInfo_368BC6C **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
          }
          else
          {
            v46 = &items->obj.klass + size;
            v14->fields._size = size + 1;
            v46[4] = (Il2CppClass *)v18;
            sub_1C3B708((PartyOrganizationUtility_o *)(v46 + 4), v18, v37, v38, v39, v40, v41, v42);
          }
        }
      }
      if ( ++v20 == v21 )
        goto LABEL_38;
    }
LABEL_40:
    sub_1C3B9C0(Instance, v18);
  }
LABEL_38:
  if ( !v14 )
    goto LABEL_40;
  return (UserCommandCodeCollectionEntity_array *)System_Collections_Generic_List_object___ToArray(
                                                    v14,
                                                    (const MethodInfo_368D7C4 *)Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity__ToArray__);
}