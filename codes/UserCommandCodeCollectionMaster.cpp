void __fastcall UserCommandCodeCollectionMaster___ctor(
        UserCommandCodeCollectionMaster_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16DE5 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_UserCommandCodeCollectionMaster__UserCommandCodeCollectionEntity__string___ctor__,
      method,
      v2);
    byte_4B16DE5 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    253,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_UserCommandCodeCollectionMaster__UserCommandCodeCollectionEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserCommandCodeCollectionEntity_o *__fastcall UserCommandCodeCollectionMaster__GetEntity(
        UserCommandCodeCollectionMaster_o *this,
        int64_t userId,
        int32_t commandCodeId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B16DE3 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_UserCommandCodeCollectionMaster__UserCommandCodeCollectionEntity__string__GetEntity__,
      userId,
      *(_QWORD *)&commandCodeId);
    byte_4B16DE3 = 1;
  }
  PK = (Il2CppObject *)UserCommandCodeCollectionEntity__CreatePK(
                         userId,
                         commandCodeId,
                         *(const MethodInfo **)&commandCodeId);
  return (UserCommandCodeCollectionEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                PK,
                                                (const MethodInfo_31B3198 *)Method_DataMasterBase_UserCommandCodeCollectionMaster__UserCommandCodeCollectionEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
UserCommandCodeCollectionEntity_o *__fastcall UserCommandCodeCollectionMaster__GetEntityDefinitely(
        UserCommandCodeCollectionMaster_o *this,
        int64_t userId,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  System_String_o *v9; // x19
  System_String_o *v10; // x0
  System_String_o *v11; // x19
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *lookup; // x0
  __int64 v13; // x1
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *klass; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v15; // x21
  __int64 v16; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *v22; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v23; // x20
  __int64 v24; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v25; // x10
  __int64 v26; // x0
  int64_t v27; // x20
  int32_t v28; // w21
  UserCommandCodeCollectionEntity_o *v29; // x19
  const MethodInfo *v30; // x3
  UserCommandCodeCollectionEntity_o *v31; // x0
  __int64 methodPtr_low; // x10
  int32_t v34; // [xsp+Ch] [xbp-34h] BYREF
  int64_t v35; // [xsp+18h] [xbp-28h] BYREF

  v35 = userId;
  v34 = svtId;
  if ( (byte_4B16DE6 & 1) == 0 )
  {
    sub_1BCA7E0(
      &System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
      userId,
      *(_QWORD *)&svtId);
    sub_1BCA7E0(&UserCommandCodeCollectionEntity_TypeInfo, v5, v6);
    sub_1BCA7E0(&StringLiteral_1541/*":"*/, v7, v8);
    byte_4B16DE6 = 1;
  }
  v9 = System_Int64__ToString((int64_t)&v35, 0LL);
  v10 = System_Int32__ToString((int32_t)&v34, 0LL);
  v11 = System_String__Concat_62412480(v9, (System_String_o *)StringLiteral_1541/*":"*/, v10, 0LL);
  lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !lookup )
    goto LABEL_26;
  klass = lookup->klass;
  v15 = lookup;
  v16 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      --v16;
      p_offset += 4;
      if ( !v16 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1C1C7C0(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 0LL);
  }
  if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, _QWORD))p_method)(
          v15,
          v11,
          *(_QWORD *)(p_method + 8)) & 1) == 0 )
  {
    v27 = v35;
    v28 = v34;
    v29 = (UserCommandCodeCollectionEntity_o *)sub_1BCAA2C(UserCommandCodeCollectionEntity_TypeInfo, v19, v20, v21);
    UserCommandCodeCollectionEntity___ctor_40771024(v29, v27, v28, v30);
    return v29;
  }
  lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !lookup )
LABEL_26:
    sub_1BCAA3C(lookup, v13);
  v22 = lookup->klass;
  v23 = lookup;
  v24 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
  {
    v25 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&v22->_1.interfaceOffsets->offset;
    while ( *(v25 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      --v24;
      v25 += 2;
      if ( !v24 )
        goto LABEL_16;
    }
    v26 = (__int64)&v22->vtable[*(_DWORD *)v25 + 2].method;
  }
  else
  {
LABEL_16:
    v26 = sub_1C1C7C0(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 2LL);
  }
  v31 = (UserCommandCodeCollectionEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, _QWORD))v26)(
                                               v23,
                                               v11,
                                               *(_QWORD *)(v26 + 8));
  if ( !v31 )
    return 0LL;
  methodPtr_low = LOBYTE(UserCommandCodeCollectionEntity_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(v31->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
    return 0LL;
  if ( (UserCommandCodeCollectionEntity_c *)v31->klass->_2.typeHierarchy[methodPtr_low - 1] == UserCommandCodeCollectionEntity_TypeInfo )
    return v31;
  return 0LL;
}


System_Int32_array *__fastcall UserCommandCodeCollectionMaster__GetNewList(
        UserCommandCodeCollectionMaster_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  System_Collections_Generic_List_int__o *v19; // x20
  const MethodInfo *v20; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int v22; // w21
  int32_t v23; // w22
  System_Collections_ObjectModel_Collection_T__o *v24; // x23
  __int64 methodPtr_low; // x10
  void *monitor; // x23
  System_Collections_ObjectModel_Collection_T__c *klass; // x24
  struct System_Int32_array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v32; // 0:x0.16

  if ( (byte_4B16DEA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__ToArray__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v11, v12);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v13, v14);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15, v16);
    sub_1BCA7E0(&UserCommandCodeCollectionEntity_TypeInfo, v17, v18);
    byte_4B16DEA = 1;
  }
  v19 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    method,
                                                    v2,
                                                    v3);
  System_Collections_Generic_List_int____ctor(
    v19,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_21;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v22 = (int)list;
    v23 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v23,
                                                                 (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v24 = list;
        methodPtr_low = LOBYTE(UserCommandCodeCollectionEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (UserCommandCodeCollectionEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == UserCommandCodeCollectionEntity_TypeInfo )
        {
          list = (System_Collections_ObjectModel_Collection_T__o *)UserCommandCodeCollectionEntity__IsNew(
                                                                     (UserCommandCodeCollectionEntity_o *)list,
                                                                     v20);
          if ( ((unsigned __int8)list & 1) != 0 )
          {
            klass = v24[1].klass;
            monitor = v24[1].monitor;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v20);
            *(_QWORD *)&v32.fields.currentCryptoKey = klass;
            *(_QWORD *)&v32.fields.fakeValue = monitor;
            list = (System_Collections_ObjectModel_Collection_T__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                                                       v32,
                                                                       0LL);
            if ( !v19 )
              break;
            items = v19->fields._items;
            v29 = Method_System_Collections_Generic_List_int__Add__;
            ++v19->fields._version;
            if ( !items )
              break;
            size = v19->fields._size;
            v20 = (const MethodInfo *)(unsigned int)list;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v19,
                (int32_t)list,
                *(const MethodInfo_3584C38 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
            }
            else
            {
              v19->fields._size = size + 1;
              items->m_Items[size + 1] = (int)list;
            }
          }
        }
      }
      if ( v22 == ++v23 )
        goto LABEL_19;
    }
LABEL_21:
    sub_1BCAA3C(list, v20);
  }
LABEL_19:
  if ( !v19 )
    goto LABEL_21;
  return System_Collections_Generic_List_int___ToArray(
           v19,
           (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UserCommandCodeCollectionMaster__IsNew(
        UserCommandCodeCollectionMaster_o *this,
        int32_t commandCodeId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v13; // w21
  int32_t v14; // w22
  Il2CppObject *Item; // x0
  UserCommandCodeCollectionEntity_o *v16; // x23
  __int64 methodPtr_low; // x10
  Il2CppClass *klass; // x24
  void *monitor; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  if ( (byte_4B16DE9 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&commandCodeId,
      method);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5, v6);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7, v8);
    sub_1BCA7E0(&UserCommandCodeCollectionEntity_TypeInfo, v9, v10);
    byte_4B16DE9 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_16:
    sub_1BCAA3C(list, *(_QWORD *)&commandCodeId);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return 0;
  v13 = Count;
  v14 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_16;
    Item = System_Collections_ObjectModel_Collection_object___get_Item(
             list,
             v14,
             (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      v16 = (UserCommandCodeCollectionEntity_o *)Item;
      methodPtr_low = LOBYTE(UserCommandCodeCollectionEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
        && (UserCommandCodeCollectionEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == UserCommandCodeCollectionEntity_TypeInfo )
      {
        monitor = Item[1].monitor;
        klass = Item[2].klass;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(
            CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
            *(_QWORD *)&commandCodeId);
        *(_QWORD *)&v21.fields.currentCryptoKey = monitor;
        *(_QWORD *)&v21.fields.fakeValue = klass;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v21, 0LL) == commandCodeId )
          return UserCommandCodeCollectionEntity__IsNew(v16, *(const MethodInfo **)&commandCodeId);
      }
    }
    if ( v13 == ++v14 )
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

  if ( (byte_4B16DE4 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_UserCommandCodeCollectionMaster__UserCommandCodeCollectionEntity__string__TryGetEntity__,
      entity,
      userId);
    byte_4B16DE4 = 1;
  }
  PK = (Il2CppObject *)UserCommandCodeCollectionEntity__CreatePK(userId, commandCodeId, (const MethodInfo *)userId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31B31E8 *)Method_DataMasterBase_UserCommandCodeCollectionMaster__UserCommandCodeCollectionEntity__string__TryGetEntity__);
}


void __fastcall UserCommandCodeCollectionMaster__continueDeviceUserCommandCodeCollection(
        UserCommandCodeCollectionMaster_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  System_Collections_Generic_List_int__o *v21; // x20
  __int64 v22; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int v24; // w21
  int32_t v25; // w22
  __int64 methodPtr_low; // x10
  void *monitor; // x23
  System_Collections_ObjectModel_Collection_T__c *klass; // x24
  struct System_Int32_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  __int64 v32; // x1
  System_Int32_array *v33; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v34; // 0:x0.16

  if ( (byte_4B16DEB & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__ToArray__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v11, v12);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v13, v14);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15, v16);
    sub_1BCA7E0(&UserCommandCodeCollectionEntity_TypeInfo, v17, v18);
    sub_1BCA7E0(&UserCommandCodeCollectionManager_TypeInfo, v19, v20);
    byte_4B16DEB = 1;
  }
  v21 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    method,
                                                    v2,
                                                    v3);
  System_Collections_Generic_List_int____ctor(
    v21,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_23;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v24 = (int)list;
    v25 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v25,
                                                                 (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v22);
          *(_QWORD *)&v34.fields.currentCryptoKey = klass;
          *(_QWORD *)&v34.fields.fakeValue = monitor;
          list = (System_Collections_ObjectModel_Collection_T__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                                                     v34,
                                                                     0LL);
          if ( !v21 )
            break;
          items = v21->fields._items;
          v30 = Method_System_Collections_Generic_List_int__Add__;
          ++v21->fields._version;
          if ( !items )
            break;
          size = v21->fields._size;
          v22 = (unsigned int)list;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v21,
              (int32_t)list,
              *(const MethodInfo_3584C38 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
          }
          else
          {
            v21->fields._size = size + 1;
            items->m_Items[size + 1] = (int)list;
          }
        }
      }
      if ( v24 == ++v25 )
        goto LABEL_19;
    }
LABEL_23:
    sub_1BCAA3C(list, v22);
  }
LABEL_19:
  if ( !v21 )
    goto LABEL_23;
  v33 = System_Collections_Generic_List_int___ToArray(
          v21,
          (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !UserCommandCodeCollectionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserCommandCodeCollectionManager_TypeInfo, v32);
  UserCommandCodeCollectionManager__SetOld_41273916(v33, 0LL);
}


UserCommandCodeCollectionEntity_array *__fastcall UserCommandCodeCollectionMaster__getCollectionList(
        UserCommandCodeCollectionMaster_o *this,
        int32_t *getSum,
        int32_t *findSum,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  DataManager_o *Instance; // x0
  Il2CppObject *v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  DataManager_o *v27; // x22
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x20
  System_Collections_Generic_List_object__o *v29; // x23
  unsigned __int64 v30; // x27
  System_String_o *v31; // x24
  System_String_o *v32; // x0
  System_String_o *v33; // x24
  DataManager_c *klass; // x8
  DataManager_o *v35; // x25
  __int64 v36; // x9
  int *p_offset; // x10
  __int64 v38; // x0
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x3
  DataManager_c *v42; // x8
  DataManager_o *v43; // x25
  __int64 v44; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v45; // x10
  __int64 v46; // x0
  int64_t v47; // x25
  int32_t v48; // w19
  UserCommandCodeCollectionEntity_o *v49; // x24
  const MethodInfo *v50; // x3
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  struct System_Object_array *items; // x8
  _QWORD *v58; // x9
  __int64 size; // x10
  Il2CppClass **v60; // x0
  PartyOrganizationUtility_o *v61; // x0
  __int64 v62; // x8
  System_Collections_Generic_List_object__o *v63; // x0
  __int64 methodPtr_low; // x10
  int datalist; // w8
  struct System_Object_array *v66; // x8
  _QWORD *v67; // x9
  __int64 v68; // x10
  Il2CppClass **v69; // x0
  int32_t v73; // [xsp+14h] [xbp-6Ch] BYREF
  int64_t UserId; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4B16DE8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_CommandCodeMaster___, getSum, findSum);
    sub_1BCA7E0(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity__Add__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity__ToArray__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity___ctor__, v11, v12);
    sub_1BCA7E0(&System_Collections_Generic_List_UserCommandCodeCollectionEntity__TypeInfo, v13, v14);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17, v18);
    sub_1BCA7E0(&UserCommandCodeCollectionEntity_TypeInfo, v19, v20);
    sub_1BCA7E0(&StringLiteral_1541/*":"*/, v21, v22);
    byte_4B16DE8 = 1;
  }
  v73 = 0;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, getSum);
  UserId = NetworkManager__get_UserId(0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_49;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  if ( !Instance )
    goto LABEL_49;
  Instance = (DataManager_o *)CommandCodeMaster__GetCollectionList((CommandCodeMaster_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_49;
  v27 = Instance;
  m_CancellationTokenSource = Instance->fields.m_CancellationTokenSource;
  v29 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_UserCommandCodeCollectionEntity__TypeInfo,
                                                       v24,
                                                       v25,
                                                       v26);
  System_Collections_Generic_List_object____ctor(
    v29,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity___ctor__);
  *getSum = 0;
  *findSum = 0;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    v30 = 0LL;
    while ( 1 )
    {
      if ( v30 >= LODWORD(v27->fields.m_CancellationTokenSource) )
        sub_1BCAA44(Instance, v24);
      v73 = *((_DWORD *)&v27->fields._DispLog + v30);
      v31 = System_Int64__ToString((int64_t)&UserId, 0LL);
      v32 = System_Int32__ToString((int32_t)&v73, 0LL);
      v33 = System_String__Concat_62412480(v31, (System_String_o *)StringLiteral_1541/*":"*/, v32, 0LL);
      Instance = (DataManager_o *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( !Instance )
        goto LABEL_49;
      klass = Instance->klass;
      v35 = Instance;
      v36 = *(unsigned __int16 *)(&Instance->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&Instance->klass->_2.bitflags2 + 3) )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
        {
          --v36;
          p_offset += 4;
          if ( !v36 )
            goto LABEL_16;
        }
        v38 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
      }
      else
      {
LABEL_16:
        v38 = sub_1C1C7C0(
                Instance,
                System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                0LL);
      }
      if ( ((*(__int64 (__fastcall **)(DataManager_o *, System_String_o *, _QWORD))v38)(v35, v33, *(_QWORD *)(v38 + 8)) & 1) != 0 )
        break;
      v47 = UserId;
      v48 = v73;
      v49 = (UserCommandCodeCollectionEntity_o *)sub_1BCAA2C(UserCommandCodeCollectionEntity_TypeInfo, v39, v40, v41);
      UserCommandCodeCollectionEntity___ctor_40771024(v49, v47, v48, v50);
      if ( !v29 )
        goto LABEL_49;
      items = v29->fields._items;
      v58 = Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity__Add__;
      ++v29->fields._version;
      if ( !items )
        goto LABEL_49;
      size = v29->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        v62 = v58[4];
        v63 = v29;
        v24 = (Il2CppObject *)v49;
LABEL_44:
        System_Collections_Generic_List_object___AddWithResize(
          v63,
          v24,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v62 + 192) + 112LL));
        goto LABEL_45;
      }
      v60 = &items->obj.klass + size;
      v29->fields._size = size + 1;
      v60[4] = (Il2CppClass *)v49;
      v61 = (PartyOrganizationUtility_o *)(v60 + 4);
      v24 = (Il2CppObject *)v49;
LABEL_42:
      sub_1BCA784(v61, (int64_t)v24, v51, v52, v53, v54, v55, v56);
LABEL_45:
      if ( ++v30 == (unsigned int)m_CancellationTokenSource )
        return (UserCommandCodeCollectionEntity_array *)System_Collections_Generic_List_object___ToArray(
                                                          v29,
                                                          (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity__ToArray__);
    }
    Instance = (DataManager_o *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
    if ( !Instance )
      goto LABEL_49;
    v42 = Instance->klass;
    v43 = Instance;
    v44 = *(unsigned __int16 *)(&Instance->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Instance->klass->_2.bitflags2 + 3) )
    {
      v45 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&v42->_1.interfaceOffsets->offset;
      while ( *(v45 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
      {
        --v44;
        v45 += 2;
        if ( !v44 )
          goto LABEL_24;
      }
      v46 = (__int64)(&v42->vtable._2_GetHashCode.method + 2 * *(_DWORD *)v45);
    }
    else
    {
LABEL_24:
      v46 = sub_1C1C7C0(Instance, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 2LL);
    }
    Instance = (DataManager_o *)(*(__int64 (__fastcall **)(DataManager_o *, System_String_o *, _QWORD))v46)(
                                  v43,
                                  v33,
                                  *(_QWORD *)(v46 + 8));
    if ( !Instance )
      goto LABEL_49;
    v24 = (Il2CppObject *)Instance;
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
    if ( !v29 )
      goto LABEL_49;
    v66 = v29->fields._items;
    v67 = Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity__Add__;
    ++v29->fields._version;
    if ( !v66 )
      goto LABEL_49;
    v68 = v29->fields._size;
    if ( (unsigned int)v68 >= v66->max_length )
    {
      v62 = v67[4];
      v63 = v29;
      goto LABEL_44;
    }
    v69 = &v66->obj.klass + v68;
    v29->fields._size = v68 + 1;
    v69[4] = (Il2CppClass *)v24;
    v61 = (PartyOrganizationUtility_o *)(v69 + 4);
    goto LABEL_42;
  }
  if ( !v29 )
LABEL_49:
    sub_1BCAA3C(Instance, v24);
  return (UserCommandCodeCollectionEntity_array *)System_Collections_Generic_List_object___ToArray(
                                                    v29,
                                                    (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall UserCommandCodeCollectionMaster__getCommandCodeIdList(
        UserCommandCodeCollectionMaster_o *this,
        int64_t userId,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Instance; // x0
  __int64 v9; // x1

  if ( (byte_4B16DEC & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___, userId, *(_QWORD *)&svtId);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7);
    byte_4B16DEC = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___)) == 0LL )
  {
    sub_1BCAA3C(Instance, v9);
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
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  System_Collections_Generic_List_object__o *v24; // x21
  __int64 v25; // x1
  __int64 Instance; // x0
  int64_t v27; // x1
  __int64 v28; // x22
  unsigned __int64 v29; // x25
  __int64 v30; // x29
  System_String_o *v31; // x0
  __int64 v32; // x1
  System_String_o *v33; // x23
  System_String_o *v34; // x0
  System_String_o *v35; // x23
  __int64 v36; // x8
  __int64 v37; // x24
  __int64 v38; // x9
  int *v39; // x10
  __int64 v40; // x0
  __int64 v41; // x8
  __int64 v42; // x24
  __int64 v43; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v44; // x10
  __int64 v45; // x0
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v54; // x9
  __int64 size; // x10
  Il2CppClass **v56; // x0
  int64_t UserId; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B16DE7 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, *(_QWORD *)&kind, method);
    sub_1BCA7E0(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity__Add__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity__ToArray__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity___ctor__, v12, v13);
    sub_1BCA7E0(&System_Collections_Generic_List_UserCommandCodeCollectionEntity__TypeInfo, v14, v15);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v16, v17);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18, v19);
    sub_1BCA7E0(&UserCommandCodeCollectionEntity_TypeInfo, v20, v21);
    sub_1BCA7E0(&StringLiteral_1541/*":"*/, v22, v23);
    byte_4B16DE7 = 1;
  }
  v24 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_UserCommandCodeCollectionEntity__TypeInfo,
                                                       *(_QWORD *)&kind,
                                                       method,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v24,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity___ctor__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v25);
  UserId = NetworkManager__get_UserId(0LL);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_38;
  Instance = (__int64)ServantMaster__GetCollectionList((ServantMaster_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_38;
  v28 = Instance;
  if ( (int)*(_QWORD *)(Instance + 24) >= 1 )
  {
    v29 = 0LL;
    v30 = (unsigned int)*(_QWORD *)(Instance + 24);
    while ( 1 )
    {
      v31 = System_Int64__ToString((int64_t)&UserId, 0LL);
      if ( v29 >= *(unsigned int *)(v28 + 24) )
        sub_1BCAA44(v31, v32);
      v33 = v31;
      v34 = System_Int32__ToString((int)v28 + 4 * (int)v29 + 32, 0LL);
      v35 = System_String__Concat_62412480(v33, (System_String_o *)StringLiteral_1541/*":"*/, v34, 0LL);
      Instance = (__int64)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( !Instance )
        break;
      v36 = *(_QWORD *)Instance;
      v37 = Instance;
      v38 = *(unsigned __int16 *)(*(_QWORD *)Instance + 302LL);
      if ( *(_WORD *)(*(_QWORD *)Instance + 302LL) )
      {
        v39 = (int *)(*(_QWORD *)(v36 + 176) + 8LL);
        while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)v39 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
        {
          --v38;
          v39 += 4;
          if ( !v38 )
            goto LABEL_16;
        }
        v40 = v36 + 16LL * *v39 + 312;
      }
      else
      {
LABEL_16:
        v40 = sub_1C1C7C0(
                Instance,
                System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                0LL);
      }
      Instance = (*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v40)(v37, v35, *(_QWORD *)(v40 + 8));
      if ( (Instance & 1) != 0 )
      {
        Instance = (__int64)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
        if ( !Instance )
          break;
        v41 = *(_QWORD *)Instance;
        v42 = Instance;
        v43 = *(unsigned __int16 *)(*(_QWORD *)Instance + 302LL);
        if ( *(_WORD *)(*(_QWORD *)Instance + 302LL) )
        {
          v44 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)(*(_QWORD *)(v41 + 176)
                                                                                            + 8LL);
          while ( *(v44 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
          {
            --v43;
            v44 += 2;
            if ( !v43 )
              goto LABEL_24;
          }
          v45 = v41 + 16LL * (*(_DWORD *)v44 + 2) + 312;
        }
        else
        {
LABEL_24:
          v45 = sub_1C1C7C0(
                  Instance,
                  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                  2LL);
        }
        Instance = (*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v45)(v42, v35, *(_QWORD *)(v45 + 8));
        if ( !Instance )
          break;
        v27 = Instance;
        methodPtr_low = LOBYTE(UserCommandCodeCollectionEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) < (unsigned int)methodPtr_low
          || *(UserCommandCodeCollectionEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) != UserCommandCodeCollectionEntity_TypeInfo )
        {
          break;
        }
        if ( *(_DWORD *)(Instance + 40) == kind )
        {
          if ( !v24 )
            break;
          items = v24->fields._items;
          v54 = Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity__Add__;
          ++v24->fields._version;
          if ( !items )
            break;
          size = v24->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v24,
              (Il2CppObject *)Instance,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v54[4] + 192LL) + 112LL));
          }
          else
          {
            v56 = &items->obj.klass + size;
            v24->fields._size = size + 1;
            v56[4] = (Il2CppClass *)v27;
            sub_1BCA784((PartyOrganizationUtility_o *)(v56 + 4), v27, v46, v47, v48, v49, v50, v51);
          }
        }
      }
      if ( ++v29 == v30 )
        goto LABEL_36;
    }
LABEL_38:
    sub_1BCAA3C(Instance, v27);
  }
LABEL_36:
  if ( !v24 )
    goto LABEL_38;
  return (UserCommandCodeCollectionEntity_array *)System_Collections_Generic_List_object___ToArray(
                                                    v24,
                                                    (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity__ToArray__);
}