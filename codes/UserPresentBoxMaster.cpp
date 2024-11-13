void __fastcall UserPresentBoxMaster___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2

  if ( (byte_4B16F7B & 1) == 0 )
  {
    sub_1BCA7E0(&UserPresentBoxMaster_TypeInfo, v1, v2);
    byte_4B16F7B = 1;
  }
  *UserPresentBoxMaster_TypeInfo->static_fields = (struct UserPresentBoxMaster_StaticFields)xmmword_BD2B70;
}


void __fastcall UserPresentBoxMaster___ctor(UserPresentBoxMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16F75 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_UserPresentBoxMaster__UserPresentBoxEntity__string___ctor__, method, v2);
    byte_4B16F75 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    66,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_UserPresentBoxMaster__UserPresentBoxEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall UserPresentBoxMaster__GetCount(
        UserPresentBoxMaster_o *this,
        int32_t type,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  UserPresentBoxEntity_c *v17; // x1
  System_Collections_Generic_IEnumerator_T__o *v18; // x19
  int32_t v19; // w20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v21; // x9
  int *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v24; // x8
  __int64 v25; // x9
  int *v26; // x10
  __int64 v27; // x0
  __int64 v28; // x1
  __int64 methodPtr_low; // x9
  System_Collections_Generic_IEnumerator_T__c *v30; // x8
  __int64 v31; // x9
  int *v32; // x10
  __int64 v33; // x0

  if ( (byte_4B16F79 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      *(_QWORD *)&type,
      *(_QWORD *)&id);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v7, v8);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v9, v10);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v11, v12);
    sub_1BCA7E0(&UserPresentBoxEntity_TypeInfo, v13, v14);
    byte_4B16F79 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1BCAA3C(0LL, *(_QWORD *)&type);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_314F9E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  v18 = Enumerator;
  v19 = 0;
  while ( 1 )
  {
    if ( !v18 )
      goto LABEL_34;
    klass = v18->klass;
    v21 = *(unsigned __int16 *)(&v18->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v18->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v21;
        p_offset += 4;
        if ( !v21 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_1C1C7C0(v18, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            v18,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v24 = v18->klass;
    v25 = *(unsigned __int16 *)(&v18->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v18->klass->_2.bitflags2 + 3) )
    {
      v26 = &v24->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v26 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v25;
        v26 += 4;
        if ( !v25 )
          goto LABEL_17;
      }
      v27 = (__int64)&v24->vtable[*v26].method;
    }
    else
    {
LABEL_17:
      v27 = sub_1C1C7C0(v18, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    Enumerator = (System_Collections_Generic_IEnumerator_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v27)(
                                                                  v18,
                                                                  *(_QWORD *)(v27 + 8));
    if ( !Enumerator )
      sub_1BCAA3C(0LL, v28);
    v17 = UserPresentBoxEntity_TypeInfo;
    methodPtr_low = LOBYTE(UserPresentBoxEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(Enumerator->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
      || (UserPresentBoxEntity_c *)Enumerator->klass->_2.typeHierarchy[methodPtr_low - 1] != UserPresentBoxEntity_TypeInfo )
    {
      sub_1BCACFC(Enumerator);
LABEL_34:
      sub_1BCAA3C(Enumerator, v17);
    }
    if ( LODWORD(Enumerator[4].monitor) == type && HIDWORD(Enumerator[4].monitor) == id )
      ++v19;
  }
  v30 = v18->klass;
  v31 = *(unsigned __int16 *)(&v18->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v18->klass->_2.bitflags2 + 3) )
  {
    v32 = &v30->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v32 - 1) != System_IDisposable_TypeInfo )
    {
      --v31;
      v32 += 4;
      if ( !v31 )
        goto LABEL_30;
    }
    v33 = (__int64)&v30->vtable[*v32].method;
  }
  else
  {
LABEL_30:
    v33 = sub_1C1C7C0(v18, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v33)(v18, *(_QWORD *)(v33 + 8));
  return v19;
}


UserPresentBoxEntity_o *__fastcall UserPresentBoxMaster__GetEntity(
        UserPresentBoxMaster_o *this,
        int64_t receiveUserId,
        int64_t presentId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B16F73 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_UserPresentBoxMaster__UserPresentBoxEntity__string__GetEntity__,
      receiveUserId,
      presentId);
    byte_4B16F73 = 1;
  }
  PK = (Il2CppObject *)UserPresentBoxEntity__CreatePK(receiveUserId, presentId, (const MethodInfo *)presentId);
  return (UserPresentBoxEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                     PK,
                                     (const MethodInfo_31B3198 *)Method_DataMasterBase_UserPresentBoxMaster__UserPresentBoxEntity__string__GetEntity__);
}


bool __fastcall UserPresentBoxMaster__TryGetEntity(
        UserPresentBoxMaster_o *this,
        UserPresentBoxEntity_o **entity,
        int64_t receiveUserId,
        int64_t presentId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4B16F74 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_UserPresentBoxMaster__UserPresentBoxEntity__string__TryGetEntity__,
      entity,
      receiveUserId);
    byte_4B16F74 = 1;
  }
  PK = (Il2CppObject *)UserPresentBoxEntity__CreatePK(receiveUserId, presentId, (const MethodInfo *)receiveUserId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31B31E8 *)Method_DataMasterBase_UserPresentBoxMaster__UserPresentBoxEntity__string__TryGetEntity__);
}


UserPresentBoxEntity_array *__fastcall UserPresentBoxMaster__getVaildList(
        UserPresentBoxMaster_o *this,
        int64_t userId,
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
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w21
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  System_Collections_Generic_List_object__o *v22; // x22
  int32_t v23; // w23
  const MethodInfo *v24; // x2
  Il2CppObject *v25; // x24
  __int64 methodPtr_low; // x10
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  struct System_Object_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  Il2CppClass **v36; // x0

  if ( (byte_4B16F76 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, userId, method);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserPresentBoxEntity__Add__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserPresentBoxEntity__ToArray__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserPresentBoxEntity___ctor__, v11, v12);
    sub_1BCA7E0(&System_Collections_Generic_List_UserPresentBoxEntity__TypeInfo, v13, v14);
    sub_1BCA7E0(&UserPresentBoxEntity_TypeInfo, v15, v16);
    byte_4B16F76 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_20;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v22 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_UserPresentBoxEntity__TypeInfo,
                                                       v19,
                                                       v20,
                                                       v21);
  System_Collections_Generic_List_object____ctor(
    v22,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_UserPresentBoxEntity___ctor__);
  if ( Count >= 1 )
  {
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
        v25 = (Il2CppObject *)list;
        methodPtr_low = LOBYTE(UserPresentBoxEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (UserPresentBoxEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == UserPresentBoxEntity_TypeInfo
          && list->fields.items == (struct System_Collections_Generic_IList_T__o *)userId )
        {
          list = (System_Collections_ObjectModel_Collection_T__o *)UserPresentBoxEntity__IsExpired(
                                                                     (UserPresentBoxEntity_o *)list,
                                                                     1,
                                                                     v24);
          if ( ((unsigned __int8)list & 1) == 0 )
          {
            if ( !v22 )
              break;
            items = v22->fields._items;
            v34 = Method_System_Collections_Generic_List_UserPresentBoxEntity__Add__;
            ++v22->fields._version;
            if ( !items )
              break;
            size = v22->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v22,
                v25,
                *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
            }
            else
            {
              v36 = &items->obj.klass + size;
              v22->fields._size = size + 1;
              v36[4] = (Il2CppClass *)v25;
              sub_1BCA784((PartyOrganizationUtility_o *)(v36 + 4), (int64_t)v25, v27, v28, v29, v30, v31, v32);
            }
          }
        }
      }
      if ( Count == ++v23 )
        goto LABEL_18;
    }
LABEL_20:
    sub_1BCAA3C(list, userId);
  }
LABEL_18:
  if ( !v22 )
    goto LABEL_20;
  return (UserPresentBoxEntity_array *)System_Collections_Generic_List_object___ToArray(
                                         v22,
                                         (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_UserPresentBoxEntity__ToArray__);
}


UserPresentBoxEntity_array *__fastcall UserPresentBoxMaster__getVaildList_40873316(
        UserPresentBoxMaster_o *this,
        int64_t userId,
        System_Int64_array *presentIdList,
        const MethodInfo *method)
{
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
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  void *list; // x0
  __int64 v28; // x2
  __int64 v29; // x3
  int v30; // w23
  signed int max_length; // w26
  System_Collections_Generic_List_object__o *v32; // x22
  const MethodInfo *v33; // x2
  __int64 v34; // x3
  int32_t v35; // w24
  UserPresentBoxEntity_o *Item; // x0
  Il2CppObject *v37; // x25
  __int64 methodPtr_low; // x10
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  int v43; // w10
  struct System_Object_array *items; // x8
  _QWORD *v45; // x9
  __int64 size; // x10
  Il2CppClass **v47; // x0
  System_Comparison_T__o *v48; // x19
  Il2CppObject *v49; // x20
  struct UserPresentBoxMaster___c_StaticFields *static_fields; // x0
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7

  if ( (byte_4B16F77 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, userId, presentIdList);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7, v8);
    sub_1BCA7E0(&System_Comparison_UserPresentBoxEntity__TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserPresentBoxEntity__Add__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserPresentBoxEntity__Sort__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserPresentBoxEntity__ToArray__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserPresentBoxEntity___ctor__, v17, v18);
    sub_1BCA7E0(&System_Collections_Generic_List_UserPresentBoxEntity__TypeInfo, v19, v20);
    sub_1BCA7E0(&Method_UserPresentBoxMaster___c__getVaildList_b__8_0__, v21, v22);
    sub_1BCA7E0(&UserPresentBoxMaster___c_TypeInfo, v23, v24);
    sub_1BCA7E0(&UserPresentBoxEntity_TypeInfo, v25, v26);
    byte_4B16F77 = 1;
  }
  list = this->fields.list;
  if ( !list )
    goto LABEL_33;
  list = (void *)System_Collections_ObjectModel_Collection_object___get_Count(
                   (System_Collections_ObjectModel_Collection_T__o *)list,
                   (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( !presentIdList )
    goto LABEL_33;
  v30 = (int)list;
  max_length = presentIdList->max_length;
  v32 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_UserPresentBoxEntity__TypeInfo,
                                                       userId,
                                                       v28,
                                                       v29);
  System_Collections_Generic_List_object____ctor(
    v32,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_UserPresentBoxEntity___ctor__);
  if ( v30 >= 1 )
  {
    v35 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      Item = (UserPresentBoxEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                         (System_Collections_ObjectModel_Collection_T__o *)list,
                                         v35,
                                         (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v37 = (Il2CppObject *)Item;
        methodPtr_low = LOBYTE(UserPresentBoxEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (UserPresentBoxEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == UserPresentBoxEntity_TypeInfo
          && Item->fields.receiveUserId == userId )
        {
          list = (void *)UserPresentBoxEntity__IsExpired(Item, 1, v33);
          if ( ((unsigned __int8)list & 1) == 0 && max_length >= 1 )
          {
            v43 = 0;
            while ( 1 )
            {
              if ( presentIdList->max_length == v43 )
                sub_1BCAA44(list, userId);
              if ( (void *)presentIdList->m_Items[v43] == v37[1].monitor )
                break;
              if ( max_length == ++v43 )
                goto LABEL_24;
            }
            if ( !v32 )
              break;
            items = v32->fields._items;
            v45 = Method_System_Collections_Generic_List_UserPresentBoxEntity__Add__;
            ++v32->fields._version;
            if ( !items )
              break;
            size = v32->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v32,
                v37,
                *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
            }
            else
            {
              v47 = &items->obj.klass + size;
              v32->fields._size = size + 1;
              v47[4] = (Il2CppClass *)v37;
              sub_1BCA784((PartyOrganizationUtility_o *)(v47 + 4), (int64_t)v37, (int64_t)v33, v34, v39, v40, v41, v42);
            }
          }
        }
      }
LABEL_24:
      if ( ++v35 == v30 )
        goto LABEL_25;
    }
LABEL_33:
    sub_1BCAA3C(list, userId);
  }
LABEL_25:
  list = UserPresentBoxMaster___c_TypeInfo;
  if ( !UserPresentBoxMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentBoxMaster___c_TypeInfo, userId);
    list = UserPresentBoxMaster___c_TypeInfo;
  }
  v48 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 8LL);
  if ( !v48 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list, userId);
      list = UserPresentBoxMaster___c_TypeInfo;
    }
    v49 = (Il2CppObject *)**((_QWORD **)list + 23);
    v48 = (System_Comparison_T__o *)sub_1BCAA2C(System_Comparison_UserPresentBoxEntity__TypeInfo, userId, v33, v34);
    System_Comparison_object____ctor(v48, v49, Method_UserPresentBoxMaster___c__getVaildList_b__8_0__, 0LL);
    static_fields = UserPresentBoxMaster___c_TypeInfo->static_fields;
    static_fields->__9__8_0 = (struct System_Comparison_UserPresentBoxEntity__o *)v48;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__8_0, (int64_t)v48, v51, v52, v53, v54, v55, v56);
  }
  if ( !v32 )
    goto LABEL_33;
  System_Collections_Generic_List_object___Sort_56244000(
    v32,
    v48,
    (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_UserPresentBoxEntity__Sort__);
  return (UserPresentBoxEntity_array *)System_Collections_Generic_List_object___ToArray(
                                         v32,
                                         (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_UserPresentBoxEntity__ToArray__);
}


void __fastcall UserPresentBoxMaster__getValidItemInfo(
        UserPresentBoxMaster_o *this,
        int64_t userId,
        int32_t *count,
        bool *hasLimited,
        const MethodInfo *method)
{
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
  int64_t Instance; // x0
  const MethodInfo *v22; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v24; // x24
  int32_t v25; // w25
  const MethodInfo *v26; // x2
  UserPresentBoxEntity_o *v27; // x26
  __int64 methodPtr_low; // x10
  int64_t v29; // x23
  int64_t Time; // [xsp+8h] [xbp-68h]

  if ( (byte_4B16F7A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, userId, count);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9, v10);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ItemMaster___, v11, v12);
    sub_1BCA7E0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v13, v14);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17, v18);
    sub_1BCA7E0(&UserPresentBoxEntity_TypeInfo, v19, v20);
    byte_4B16F7A = 1;
  }
  *count = 0;
  *hasLimited = 0;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, userId);
  Time = NetworkManager__getTime(0LL);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (int64_t)DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ItemMaster___),
        (list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list) == 0LL) )
  {
LABEL_23:
    sub_1BCAA3C(Instance, v22);
  }
  v24 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v25 = 0;
  while ( v25 < System_Collections_ObjectModel_Collection_object___get_Count(
                  list,
                  (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    Instance = (int64_t)this->fields.list;
    if ( !Instance )
      goto LABEL_23;
    Instance = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                          (System_Collections_ObjectModel_Collection_T__o *)Instance,
                          v25,
                          (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !Instance )
      goto LABEL_23;
    v27 = (UserPresentBoxEntity_o *)Instance;
    methodPtr_low = LOBYTE(UserPresentBoxEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) < (unsigned int)methodPtr_low
      || *(UserPresentBoxEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) != UserPresentBoxEntity_TypeInfo )
    {
      goto LABEL_23;
    }
    if ( *(_QWORD *)(Instance + 16) == userId )
    {
      Instance = UserPresentBoxEntity__IsExpired((UserPresentBoxEntity_o *)Instance, 1, v26);
      if ( (Instance & 1) == 0 )
      {
        ++*count;
        if ( !*hasLimited && v27->fields.giftType == 2 )
        {
          if ( !v24 )
            goto LABEL_23;
          Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                v24,
                                v27->fields.objectId,
                                (const MethodInfo_31B2E40 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
          if ( !Instance )
            goto LABEL_23;
          v29 = *(_QWORD *)(Instance + 96);
          if ( v29 > Time )
          {
            Instance = UserPresentBoxEntity__expireAt(v27, v22);
            if ( v29 < Instance )
              *hasLimited = 1;
          }
        }
      }
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v25;
    if ( !list )
      goto LABEL_23;
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UserPresentBoxMaster__isExist(
        UserPresentBoxMaster_o *this,
        int32_t type,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v16; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v19; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  char v22; // w22
  System_Collections_Generic_IEnumerator_T__c *v23; // x8
  __int64 v24; // x9
  int32_t *v25; // x10
  __int64 v26; // x0
  _DWORD *v27; // x0
  __int64 v28; // x1
  __int64 methodPtr_low; // x9
  System_Collections_Generic_IEnumerator_T__c *v30; // x8
  __int64 v31; // x9
  int32_t *v32; // x10
  __int64 v33; // x0

  if ( (byte_4B16F78 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      *(_QWORD *)&type,
      *(_QWORD *)&id);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v7, v8);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v9, v10);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v11, v12);
    sub_1BCA7E0(&UserPresentBoxEntity_TypeInfo, v13, v14);
    byte_4B16F78 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1BCAA3C(0LL, *(_QWORD *)&type);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_314F9E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BCAA3C(0LL, v16);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v19 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v19;
        p_offset += 4;
        if ( !v19 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    v22 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8));
    if ( (v22 & 1) == 0 )
      break;
    v23 = Enumerator->klass;
    v24 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v25 = &v23->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v25 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v24;
        v25 += 4;
        if ( !v24 )
          goto LABEL_16;
      }
      v26 = (__int64)&v23->vtable[*v25].method;
    }
    else
    {
LABEL_16:
      v26 = sub_1C1C7C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v27 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v26)(
                      Enumerator,
                      *(_QWORD *)(v26 + 8));
    if ( !v27 )
      goto LABEL_33;
    methodPtr_low = LOBYTE(UserPresentBoxEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v27 + 304LL) < (unsigned int)methodPtr_low
      || *(UserPresentBoxEntity_c **)(*(_QWORD *)(*(_QWORD *)v27 + 200LL) + 8 * methodPtr_low - 8) != UserPresentBoxEntity_TypeInfo )
    {
      sub_1BCACFC(v27);
LABEL_33:
      sub_1BCAA3C(v27, v28);
    }
    if ( v27[18] == type && v27[19] == id )
      goto LABEL_25;
  }
  v22 = 0;
LABEL_25:
  v30 = Enumerator->klass;
  v31 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v32 = &v30->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v32 - 1) != System_IDisposable_TypeInfo )
    {
      --v31;
      v32 += 4;
      if ( !v31 )
        goto LABEL_29;
    }
    v33 = (__int64)&v30->vtable[*v32].method;
  }
  else
  {
LABEL_29:
    v33 = sub_1C1C7C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v33)(Enumerator, *(_QWORD *)(v33 + 8));
  return v22 & 1;
}


void __fastcall UserPresentBoxMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B16F7C & 1) == 0 )
  {
    sub_1BCA7E0(&UserPresentBoxMaster___c_TypeInfo, v1, v2);
    byte_4B16F7C = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(UserPresentBoxMaster___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  UserPresentBoxMaster___c_TypeInfo->static_fields->__9 = (struct UserPresentBoxMaster___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)UserPresentBoxMaster___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall UserPresentBoxMaster___c___ctor(UserPresentBoxMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall UserPresentBoxMaster___c___getVaildList_b__8_0(
        UserPresentBoxMaster___c_o *this,
        UserPresentBoxEntity_o *a,
        UserPresentBoxEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1BCAA3C(this, a);
  return LODWORD(b->fields.createdAt) - LODWORD(a->fields.createdAt);
}