void __fastcall UserCommandCodeCollectionMaster___ctor(
        UserCommandCodeCollectionMaster_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A0973A & 1) == 0 )
  {
    sub_1B686D4(
      &Method_DataMasterBase_UserCommandCodeCollectionMaster__UserCommandCodeCollectionEntity__string___ctor__,
      method);
    byte_4A0973A = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    253,
    (const MethodInfo_30E47D8 *)Method_DataMasterBase_UserCommandCodeCollectionMaster__UserCommandCodeCollectionEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserCommandCodeCollectionEntity_o *__fastcall UserCommandCodeCollectionMaster__GetEntity(
        UserCommandCodeCollectionMaster_o *this,
        int64_t userId,
        int32_t commandCodeId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A09738 & 1) == 0 )
  {
    sub_1B686D4(
      &Method_DataMasterBase_UserCommandCodeCollectionMaster__UserCommandCodeCollectionEntity__string__GetEntity__,
      userId);
    byte_4A09738 = 1;
  }
  PK = (Il2CppObject *)UserCommandCodeCollectionEntity__CreatePK(
                         userId,
                         commandCodeId,
                         *(const MethodInfo **)&commandCodeId);
  return (UserCommandCodeCollectionEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                PK,
                                                (const MethodInfo_30E4818 *)Method_DataMasterBase_UserCommandCodeCollectionMaster__UserCommandCodeCollectionEntity__string__GetEntity__);
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
  __int64 v11; // x1
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *klass; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v13; // x21
  __int64 v14; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *v17; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v18; // x20
  __int64 v19; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v20; // x10
  __int64 v21; // x0
  int64_t v22; // x20
  int32_t v23; // w21
  UserCommandCodeCollectionEntity_o *v24; // x19
  const MethodInfo *v25; // x3
  UserCommandCodeCollectionEntity_o *v26; // x0
  __int64 methodPtr_low; // x10
  int32_t v29; // [xsp+Ch] [xbp-34h] BYREF
  int64_t v30; // [xsp+18h] [xbp-28h] BYREF

  v30 = userId;
  v29 = svtId;
  if ( (byte_4A0973B & 1) == 0 )
  {
    sub_1B686D4(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, userId);
    sub_1B686D4(&UserCommandCodeCollectionEntity_TypeInfo, v5);
    sub_1B686D4(&StringLiteral_1544/*":"*/, v6);
    byte_4A0973B = 1;
  }
  v7 = System_Int64__ToString((int64_t)&v30, 0LL);
  v8 = System_Int32__ToString((int32_t)&v29, 0LL);
  v9 = System_String__Concat_61430728(v7, (System_String_o *)StringLiteral_1544/*":"*/, v8, 0LL);
  lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !lookup )
    goto LABEL_26;
  klass = lookup->klass;
  v13 = lookup;
  v14 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      --v14;
      p_offset += 4;
      if ( !v14 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1BBA6B4(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 0LL);
  }
  if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, _QWORD))p_method)(
          v13,
          v9,
          *(_QWORD *)(p_method + 8)) & 1) == 0 )
  {
    v22 = v30;
    v23 = v29;
    v24 = (UserCommandCodeCollectionEntity_o *)sub_1B68920(UserCommandCodeCollectionEntity_TypeInfo);
    UserCommandCodeCollectionEntity___ctor_39690956(v24, v22, v23, v25);
    return v24;
  }
  lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !lookup )
LABEL_26:
    sub_1B68930(lookup, v11);
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
    v21 = sub_1BBA6B4(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 2LL);
  }
  v26 = (UserCommandCodeCollectionEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, _QWORD))v21)(
                                               v18,
                                               v9,
                                               *(_QWORD *)(v21 + 8));
  if ( !v26 )
    return 0LL;
  methodPtr_low = LOBYTE(UserCommandCodeCollectionEntity_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(v26->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
    return 0LL;
  if ( (UserCommandCodeCollectionEntity_c *)v26->klass->_2.typeHierarchy[methodPtr_low - 1] == UserCommandCodeCollectionEntity_TypeInfo )
    return v26;
  return 0LL;
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

  if ( (byte_4A0973F & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_1B686D4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_1B686D4(&Method_System_Collections_Generic_List_int__Add__, v4);
    sub_1B686D4(&Method_System_Collections_Generic_List_int__ToArray__, v5);
    sub_1B686D4(&Method_System_Collections_Generic_List_int___ctor__, v6);
    sub_1B686D4(&System_Collections_Generic_List_int__TypeInfo, v7);
    sub_1B686D4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_1B686D4(&UserCommandCodeCollectionEntity_TypeInfo, v9);
    byte_4A0973F = 1;
  }
  v10 = (System_Collections_Generic_List_int__o *)sub_1B68920(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v10,
    (const MethodInfo_349EA00 *)Method_System_Collections_Generic_List_int___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_21;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_3081124 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
                                                                 (const MethodInfo_30811B4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v15 = list;
        methodPtr_low = LOBYTE(UserCommandCodeCollectionEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (UserCommandCodeCollectionEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == UserCommandCodeCollectionEntity_TypeInfo )
        {
          list = (System_Collections_ObjectModel_Collection_T__o *)UserCommandCodeCollectionEntity__IsNew(
                                                                     (UserCommandCodeCollectionEntity_o *)list,
                                                                     v11);
          if ( ((unsigned __int8)list & 1) != 0 )
          {
            klass = v15[1].klass;
            monitor = v15[1].monitor;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v23.fields.currentCryptoKey = klass;
            *(_QWORD *)&v23.fields.fakeValue = monitor;
            list = (System_Collections_ObjectModel_Collection_T__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416(
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
                *(const MethodInfo_349F254 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
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
    sub_1B68930(list, v11);
  }
LABEL_19:
  if ( !v10 )
    goto LABEL_21;
  return System_Collections_Generic_List_int___ToArray(
           v10,
           (const MethodInfo_34A0D0C *)Method_System_Collections_Generic_List_int__ToArray__);
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
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_4A0973E & 1) == 0 )
  {
    sub_1B686D4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&commandCodeId);
    sub_1B686D4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1B686D4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_1B686D4(&UserCommandCodeCollectionEntity_TypeInfo, v7);
    byte_4A0973E = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_16:
    sub_1B68930(list, *(_QWORD *)&commandCodeId);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3081124 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
             (const MethodInfo_30811B4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
        *(_QWORD *)&v18.fields.currentCryptoKey = monitor;
        *(_QWORD *)&v18.fields.fakeValue = klass;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416(v18, 0LL) == commandCodeId )
          return UserCommandCodeCollectionEntity__IsNew(v13, *(const MethodInfo **)&commandCodeId);
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

  if ( (byte_4A09739 & 1) == 0 )
  {
    sub_1B686D4(
      &Method_DataMasterBase_UserCommandCodeCollectionMaster__UserCommandCodeCollectionEntity__string__TryGetEntity__,
      entity);
    byte_4A09739 = 1;
  }
  PK = (Il2CppObject *)UserCommandCodeCollectionEntity__CreatePK(userId, commandCodeId, (const MethodInfo *)userId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_30E4868 *)Method_DataMasterBase_UserCommandCodeCollectionMaster__UserCommandCodeCollectionEntity__string__TryGetEntity__);
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

  if ( (byte_4A09740 & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_1B686D4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_1B686D4(&Method_System_Collections_Generic_List_int__Add__, v4);
    sub_1B686D4(&Method_System_Collections_Generic_List_int__ToArray__, v5);
    sub_1B686D4(&Method_System_Collections_Generic_List_int___ctor__, v6);
    sub_1B686D4(&System_Collections_Generic_List_int__TypeInfo, v7);
    sub_1B686D4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_1B686D4(&UserCommandCodeCollectionEntity_TypeInfo, v9);
    sub_1B686D4(&UserCommandCodeCollectionManager_TypeInfo, v10);
    byte_4A09740 = 1;
  }
  v11 = (System_Collections_Generic_List_int__o *)sub_1B68920(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v11,
    (const MethodInfo_349EA00 *)Method_System_Collections_Generic_List_int___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_23;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_3081124 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
                                                                 (const MethodInfo_30811B4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
          list = (System_Collections_ObjectModel_Collection_T__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416(
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
              *(const MethodInfo_349F254 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
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
    sub_1B68930(list, v12);
  }
LABEL_19:
  if ( !v11 )
    goto LABEL_23;
  v22 = System_Collections_Generic_List_int___ToArray(
          v11,
          (const MethodInfo_34A0D0C *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !UserCommandCodeCollectionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserCommandCodeCollectionManager_TypeInfo);
  UserCommandCodeCollectionManager__SetOld_40270128(v22, 0LL);
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
  Il2CppObject *v15; // x1
  DataManager_o *v16; // x22
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x20
  System_Collections_Generic_List_object__o *v18; // x23
  unsigned __int64 v19; // x27
  System_String_o *v20; // x24
  System_String_o *v21; // x0
  System_String_o *v22; // x24
  DataManager_c *klass; // x8
  DataManager_o *v24; // x25
  __int64 v25; // x9
  int *p_offset; // x10
  __int64 v27; // x0
  DataManager_c *v28; // x8
  DataManager_o *v29; // x25
  __int64 v30; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v31; // x10
  __int64 v32; // x0
  int64_t v33; // x25
  int32_t v34; // w19
  UserCommandCodeCollectionEntity_o *v35; // x24
  const MethodInfo *v36; // x3
  int32_t v37; // w2
  int32_t v38; // w3
  struct System_Object_array *items; // x8
  _QWORD *v40; // x9
  __int64 size; // x10
  Il2CppClass **v42; // x0
  ServantStatusBattleListViewItem_o *v43; // x0
  __int64 v44; // x8
  System_Collections_Generic_List_object__o *v45; // x0
  __int64 methodPtr_low; // x10
  int datalist; // w8
  struct System_Object_array *v48; // x8
  _QWORD *v49; // x9
  __int64 v50; // x10
  Il2CppClass **v51; // x0
  int32_t v55; // [xsp+14h] [xbp-6Ch] BYREF
  int64_t UserId; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4A0973D & 1) == 0 )
  {
    sub_1B686D4(&Method_DataManager_GetMasterData_CommandCodeMaster___, getSum);
    sub_1B686D4(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, v5);
    sub_1B686D4(&Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity__Add__, v6);
    sub_1B686D4(&Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity__ToArray__, v7);
    sub_1B686D4(&Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity___ctor__, v8);
    sub_1B686D4(&System_Collections_Generic_List_UserCommandCodeCollectionEntity__TypeInfo, v9);
    sub_1B686D4(&NetworkManager_TypeInfo, v10);
    sub_1B686D4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_1B686D4(&UserCommandCodeCollectionEntity_TypeInfo, v12);
    sub_1B686D4(&StringLiteral_1544/*":"*/, v13);
    byte_4A0973D = 1;
  }
  v55 = 0;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  UserId = NetworkManager__get_UserId(0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_49;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  if ( !Instance )
    goto LABEL_49;
  Instance = (DataManager_o *)CommandCodeMaster__GetCollectionList((CommandCodeMaster_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_49;
  v16 = Instance;
  m_CancellationTokenSource = Instance->fields.m_CancellationTokenSource;
  v18 = (System_Collections_Generic_List_object__o *)sub_1B68920(System_Collections_Generic_List_UserCommandCodeCollectionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_34BBA44 *)Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity___ctor__);
  *getSum = 0;
  *findSum = 0;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    v19 = 0LL;
    while ( 1 )
    {
      if ( v19 >= LODWORD(v16->fields.m_CancellationTokenSource) )
        sub_1B68938(Instance, v15);
      v55 = *((_DWORD *)&v16->fields._DispLog + v19);
      v20 = System_Int64__ToString((int64_t)&UserId, 0LL);
      v21 = System_Int32__ToString((int32_t)&v55, 0LL);
      v22 = System_String__Concat_61430728(v20, (System_String_o *)StringLiteral_1544/*":"*/, v21, 0LL);
      Instance = (DataManager_o *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( !Instance )
        goto LABEL_49;
      klass = Instance->klass;
      v24 = Instance;
      v25 = *(unsigned __int16 *)(&Instance->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&Instance->klass->_2.bitflags2 + 3) )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
        {
          --v25;
          p_offset += 4;
          if ( !v25 )
            goto LABEL_16;
        }
        v27 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
      }
      else
      {
LABEL_16:
        v27 = sub_1BBA6B4(
                Instance,
                System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                0LL);
      }
      if ( ((*(__int64 (__fastcall **)(DataManager_o *, System_String_o *, _QWORD))v27)(v24, v22, *(_QWORD *)(v27 + 8)) & 1) != 0 )
        break;
      v33 = UserId;
      v34 = v55;
      v35 = (UserCommandCodeCollectionEntity_o *)sub_1B68920(UserCommandCodeCollectionEntity_TypeInfo);
      UserCommandCodeCollectionEntity___ctor_39690956(v35, v33, v34, v36);
      if ( !v18 )
        goto LABEL_49;
      items = v18->fields._items;
      v40 = Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity__Add__;
      ++v18->fields._version;
      if ( !items )
        goto LABEL_49;
      size = v18->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        v44 = v40[4];
        v45 = v18;
        v15 = (Il2CppObject *)v35;
LABEL_44:
        System_Collections_Generic_List_object___AddWithResize(
          v45,
          v15,
          *(const MethodInfo_34BC278 **)(*(_QWORD *)(v44 + 192) + 112LL));
        goto LABEL_45;
      }
      v42 = &items->obj.klass + size;
      v18->fields._size = size + 1;
      v42[4] = (Il2CppClass *)v35;
      v43 = (ServantStatusBattleListViewItem_o *)(v42 + 4);
      LODWORD(v15) = (_DWORD)v35;
LABEL_42:
      sub_1B68678(v43, (int32_t)v15, v37, v38);
LABEL_45:
      if ( ++v19 == (unsigned int)m_CancellationTokenSource )
        return (UserCommandCodeCollectionEntity_array *)System_Collections_Generic_List_object___ToArray(
                                                          v18,
                                                          (const MethodInfo_34BDDD0 *)Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity__ToArray__);
    }
    Instance = (DataManager_o *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
    if ( !Instance )
      goto LABEL_49;
    v28 = Instance->klass;
    v29 = Instance;
    v30 = *(unsigned __int16 *)(&Instance->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Instance->klass->_2.bitflags2 + 3) )
    {
      v31 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&v28->_1.interfaceOffsets->offset;
      while ( *(v31 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
      {
        --v30;
        v31 += 2;
        if ( !v30 )
          goto LABEL_24;
      }
      v32 = (__int64)(&v28->vtable._2_GetHashCode.method + 2 * *(_DWORD *)v31);
    }
    else
    {
LABEL_24:
      v32 = sub_1BBA6B4(Instance, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 2LL);
    }
    Instance = (DataManager_o *)(*(__int64 (__fastcall **)(DataManager_o *, System_String_o *, _QWORD))v32)(
                                  v29,
                                  v22,
                                  *(_QWORD *)(v32 + 8));
    if ( !Instance )
      goto LABEL_49;
    v15 = (Il2CppObject *)Instance;
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
    if ( !v18 )
      goto LABEL_49;
    v48 = v18->fields._items;
    v49 = Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity__Add__;
    ++v18->fields._version;
    if ( !v48 )
      goto LABEL_49;
    v50 = v18->fields._size;
    if ( (unsigned int)v50 >= v48->max_length )
    {
      v44 = v49[4];
      v45 = v18;
      goto LABEL_44;
    }
    v51 = &v48->obj.klass + v50;
    v18->fields._size = v50 + 1;
    v51[4] = (Il2CppClass *)v15;
    v43 = (ServantStatusBattleListViewItem_o *)(v51 + 4);
    goto LABEL_42;
  }
  if ( !v18 )
LABEL_49:
    sub_1B68930(Instance, v15);
  return (UserCommandCodeCollectionEntity_array *)System_Collections_Generic_List_object___ToArray(
                                                    v18,
                                                    (const MethodInfo_34BDDD0 *)Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity__ToArray__);
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

  if ( (byte_4A09741 & 1) == 0 )
  {
    sub_1B686D4(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___, userId);
    sub_1B686D4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4A09741 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___)) == 0LL )
  {
    sub_1B68930(Instance, v8);
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

  if ( (byte_4A0973C & 1) == 0 )
  {
    sub_1B686D4(&Method_DataManager_GetMasterData_ServantMaster___, *(_QWORD *)&kind);
    sub_1B686D4(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, v5);
    sub_1B686D4(&Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity__Add__, v6);
    sub_1B686D4(&Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity__ToArray__, v7);
    sub_1B686D4(&Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity___ctor__, v8);
    sub_1B686D4(&System_Collections_Generic_List_UserCommandCodeCollectionEntity__TypeInfo, v9);
    sub_1B686D4(&NetworkManager_TypeInfo, v10);
    sub_1B686D4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_1B686D4(&UserCommandCodeCollectionEntity_TypeInfo, v12);
    sub_1B686D4(&StringLiteral_1544/*":"*/, v13);
    byte_4A0973C = 1;
  }
  v14 = (System_Collections_Generic_List_object__o *)sub_1B68920(System_Collections_Generic_List_UserCommandCodeCollectionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_34BBA44 *)Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity___ctor__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  UserId = NetworkManager__get_UserId(0LL);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_ServantMaster___);
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
        sub_1B68938(v20, v21);
      v22 = v20;
      v23 = System_Int32__ToString((int)v17 + 4 * (int)v18 + 32, 0LL);
      v24 = System_String__Concat_61430728(v22, (System_String_o *)StringLiteral_1544/*":"*/, v23, 0LL);
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
        v29 = sub_1BBA6B4(
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
          v34 = sub_1BBA6B4(
                  Instance,
                  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                  2LL);
        }
        Instance = (*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v34)(v31, v24, *(_QWORD *)(v34 + 8));
        if ( !Instance )
          break;
        v16 = Instance;
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
              *(const MethodInfo_34BC278 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
          }
          else
          {
            v41 = &items->obj.klass + size;
            v14->fields._size = size + 1;
            v41[4] = (Il2CppClass *)v16;
            sub_1B68678((ServantStatusBattleListViewItem_o *)(v41 + 4), v16, v35, v36);
          }
        }
      }
      if ( ++v18 == v19 )
        goto LABEL_36;
    }
LABEL_38:
    sub_1B68930(Instance, v16);
  }
LABEL_36:
  if ( !v14 )
    goto LABEL_38;
  return (UserCommandCodeCollectionEntity_array *)System_Collections_Generic_List_object___ToArray(
                                                    v14,
                                                    (const MethodInfo_34BDDD0 *)Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity__ToArray__);
}