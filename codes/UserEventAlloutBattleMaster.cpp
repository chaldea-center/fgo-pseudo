void __fastcall UserEventAlloutBattleMaster___ctor(UserEventAlloutBattleMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5BD71 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_UserEventAlloutBattleMaster__UserEventAlloutBattleEntity__string___ctor__);
    byte_4A5BD71 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    407,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_UserEventAlloutBattleMaster__UserEventAlloutBattleEntity__string___ctor__);
}


System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__o *__fastcall UserEventAlloutBattleMaster__ConvertClearSvtInfo(
        UserEventAlloutBattleMaster_o *this,
        System_Collections_Generic_List_object__o *deckList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v4; // x19
  __int64 v5; // x0
  __int64 v6; // x1
  Il2CppObject *current; // x22
  __int64 methodPtr_low; // x9
  __int64 v9; // x20
  UserEventAlloutBattleMaster_o *v10; // x0
  const MethodInfo *v11; // x3
  UserEventAlloutBattleMaster_o *DicToInt; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x3
  UserEventAlloutBattleMaster_o *v15; // x0
  const MethodInfo *v16; // x3
  UserEventAlloutBattleMaster_o *v17; // x0
  const MethodInfo *v18; // x3
  UserEventAlloutBattleMaster_o *v19; // x0
  const MethodInfo *v20; // x3
  UserEventAlloutBattleMaster_o *v21; // x0
  const MethodInfo *v22; // x3
  System_Collections_Generic_List_object__o *v23; // x23
  System_Collections_Generic_List_object__o **v24; // x21
  int32_t v25; // w2
  int32_t v26; // w3
  __int64 v27; // x0
  __int64 v28; // x1
  _BOOL8 v29; // x0
  __int64 v30; // x1
  int32_t v31; // w2
  int32_t v32; // w3
  __int64 v33; // x11
  Il2CppObject *v34; // x23
  __int64 v35; // x9
  __int64 v36; // x22
  UserEventAlloutBattleMaster_o *v37; // x0
  const MethodInfo *v38; // x3
  UserEventAlloutBattleMaster_o *v39; // x0
  __int64 v40; // x1
  const MethodInfo *v41; // x3
  __int64 v42; // x1
  int32_t v43; // w2
  int32_t v44; // w3
  System_Collections_Generic_List_object__o *v45; // x0
  struct System_Object_array *v46; // x8
  _QWORD *v47; // x9
  __int64 v48; // x10
  Il2CppClass **v49; // x8
  struct System_Object_array *items; // x8
  _QWORD *v51; // x9
  __int64 size; // x10
  Il2CppClass **v53; // x0
  int v55; // w1
  int v56; // w20
  void *v57; // x0
  void *v58; // x22
  __int64 v59; // x20
  System_Collections_Generic_List_Enumerator_object__o v60; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v61; // [xsp+20h] [xbp-A0h] BYREF
  Il2CppObject *value; // [xsp+38h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v63; // [xsp+40h] [xbp-80h] BYREF

  if ( (byte_4A5BD76 & 1) == 0 )
  {
    sub_1B885B0(&UserEventAlloutBattleMaster_ClearSvtEquipInfo_TypeInfo);
    sub_1B885B0(&UserEventAlloutBattleMaster_ClearSvtInfo_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_object__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_object__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtEquipInfo__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_object__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtEquipInfo___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtEquipInfo__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_List_object__TypeInfo);
    sub_1B885B0(&StringLiteral_21061/*"lc"*/);
    sub_1B885B0(&StringLiteral_18790/*"ec"*/);
    sub_1B885B0(&StringLiteral_23704/*"svtEqs"*/);
    sub_1B885B0(&StringLiteral_23707/*"svtId"*/);
    sub_1B885B0(&StringLiteral_20200/*"id"*/);
    sub_1B885B0(&StringLiteral_20232/*"ilc"*/);
    sub_1B885B0(&StringLiteral_21231/*"lv"*/);
    byte_4A5BD76 = 1;
  }
  memset(&v63, 0, sizeof(v63));
  value = 0LL;
  memset(&v61, 0, sizeof(v61));
  v4 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo___ctor__);
  if ( !deckList )
    sub_1B8880C(v5, v6);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v60,
    deckList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_object__GetEnumerator__);
  v63 = v60;
  while ( 1 )
  {
    if ( !System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v63,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_object__MoveNext__) )
    {
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v63,
        (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
      return (System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__o *)v4;
    }
    current = v63.fields._current;
    if ( v63.fields._current )
    {
      methodPtr_low = LOBYTE(System_Collections_Generic_Dictionary_string__object__TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v63.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
        || (System_Collections_Generic_Dictionary_string__object__c *)v63.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
      {
        sub_1B88ACC(v63.fields._current);
LABEL_42:
        sub_1B8880C(DicToInt, v13);
      }
    }
    v9 = sub_1B887FC(UserEventAlloutBattleMaster_ClearSvtInfo_TypeInfo);
    System_Object___ctor((Il2CppObject *)v9, 0LL);
    DicToInt = (UserEventAlloutBattleMaster_o *)UserEventAlloutBattleMaster__GetDicToInt(
                                                  v10,
                                                  (System_Collections_Generic_Dictionary_string__object__o *)current,
                                                  (System_String_o *)StringLiteral_20200/*"id"*/,
                                                  v11);
    if ( !v9 )
      goto LABEL_42;
    *(_DWORD *)(v9 + 16) = (_DWORD)DicToInt;
    v15 = (UserEventAlloutBattleMaster_o *)UserEventAlloutBattleMaster__GetDicToInt(
                                             DicToInt,
                                             (System_Collections_Generic_Dictionary_string__object__o *)current,
                                             (System_String_o *)StringLiteral_23707/*"svtId"*/,
                                             v14);
    *(_DWORD *)(v9 + 20) = (_DWORD)v15;
    v17 = (UserEventAlloutBattleMaster_o *)UserEventAlloutBattleMaster__GetDicToInt(
                                             v15,
                                             (System_Collections_Generic_Dictionary_string__object__o *)current,
                                             (System_String_o *)StringLiteral_21231/*"lv"*/,
                                             v16);
    *(_DWORD *)(v9 + 24) = (_DWORD)v17;
    v19 = (UserEventAlloutBattleMaster_o *)UserEventAlloutBattleMaster__GetDicToInt(
                                             v17,
                                             (System_Collections_Generic_Dictionary_string__object__o *)current,
                                             (System_String_o *)StringLiteral_21061/*"lc"*/,
                                             v18);
    *(_DWORD *)(v9 + 28) = (_DWORD)v19;
    v21 = (UserEventAlloutBattleMaster_o *)UserEventAlloutBattleMaster__GetDicToInt(
                                             v19,
                                             (System_Collections_Generic_Dictionary_string__object__o *)current,
                                             (System_String_o *)StringLiteral_20232/*"ilc"*/,
                                             v20);
    *(_DWORD *)(v9 + 32) = (_DWORD)v21;
    *(_DWORD *)(v9 + 36) = UserEventAlloutBattleMaster__GetDicToInt(
                             v21,
                             (System_Collections_Generic_Dictionary_string__object__o *)current,
                             (System_String_o *)StringLiteral_18790/*"ec"*/,
                             v22);
    v23 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtEquipInfo__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v23,
      (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtEquipInfo___ctor__);
    *(_QWORD *)(v9 + 40) = v23;
    v24 = (System_Collections_Generic_List_object__o **)(v9 + 40);
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 40), (int32_t)v23, v25, v26);
    if ( !current )
      sub_1B8880C(v27, v28);
    v29 = System_Collections_Generic_Dictionary_object__object___TryGetValue(
            (System_Collections_Generic_Dictionary_object__object__o *)current,
            (Il2CppObject *)StringLiteral_23704/*"svtEqs"*/,
            &value,
            (const MethodInfo_31C89D4 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    if ( v29 )
      break;
LABEL_27:
    if ( !v4 )
      sub_1B8880C(v29, v30);
    items = v4->fields._items;
    v51 = Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__Add__;
    ++v4->fields._version;
    if ( !items )
      sub_1B8880C(v29, v30);
    size = v4->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v4,
        (Il2CppObject *)v9,
        *(const MethodInfo_34FD834 **)(*(_QWORD *)(v51[4] + 192LL) + 112LL));
    }
    else
    {
      v53 = &items->obj.klass + size;
      v4->fields._size = size + 1;
      v53[4] = (Il2CppClass *)v9;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v53 + 4), v9, v31, v32);
    }
  }
  if ( !value
    || (v33 = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(value->klass->vtable[0].methodPtr) < (unsigned int)v33)
    || (System_Collections_Generic_List_object__c *)value->klass->_2.typeHierarchy[v33 - 1] != System_Collections_Generic_List_object__TypeInfo )
  {
    sub_1B8880C(v29, v30);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v60,
    (System_Collections_Generic_List_object__o *)value,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_object__GetEnumerator__);
  v61 = v60;
  while ( 1 )
  {
    if ( !System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v61,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_object__MoveNext__) )
    {
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v61,
        (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
      goto LABEL_27;
    }
    v34 = v61.fields._current;
    if ( v61.fields._current )
    {
      v35 = LOBYTE(System_Collections_Generic_Dictionary_string__object__TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v61.fields._current->klass->vtable[0].methodPtr) < (unsigned int)v35
        || (System_Collections_Generic_Dictionary_string__object__c *)v61.fields._current->klass->_2.typeHierarchy[v35 - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
      {
        break;
      }
    }
    v36 = sub_1B887FC(UserEventAlloutBattleMaster_ClearSvtEquipInfo_TypeInfo);
    System_Object___ctor((Il2CppObject *)v36, 0LL);
    v39 = (UserEventAlloutBattleMaster_o *)UserEventAlloutBattleMaster__GetDicToInt(
                                             v37,
                                             (System_Collections_Generic_Dictionary_string__object__o *)v34,
                                             (System_String_o *)StringLiteral_23707/*"svtId"*/,
                                             v38);
    if ( !v36 )
      sub_1B8880C(v39, v40);
    *(_DWORD *)(v36 + 16) = (_DWORD)v39;
    *(_DWORD *)(v36 + 20) = UserEventAlloutBattleMaster__GetDicToInt(
                              v39,
                              (System_Collections_Generic_Dictionary_string__object__o *)v34,
                              (System_String_o *)StringLiteral_21061/*"lc"*/,
                              v41);
    v45 = *v24;
    if ( !*v24 )
      sub_1B8880C(0LL, v42);
    v46 = v45->fields._items;
    v47 = Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtEquipInfo__Add__;
    ++v45->fields._version;
    if ( !v46 )
      sub_1B8880C(v45, v42);
    v48 = v45->fields._size;
    if ( (unsigned int)v48 >= v46->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v45,
        (Il2CppObject *)v36,
        *(const MethodInfo_34FD834 **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
    }
    else
    {
      v49 = &v46->obj.klass + v48;
      v45->fields._size = v48 + 1;
      v49[4] = (Il2CppClass *)v36;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v49 + 4), v36, v43, v44);
    }
  }
  sub_1B88ACC(v61.fields._current);
  v56 = v55;
  v58 = v57;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v61,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
  if ( v24 )
    sub_1B88804(v24);
  if ( v56 != 1 )
  {
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v63,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
    sub_1C73040();
  }
  v59 = *(_QWORD *)__cxa_begin_catch(v58);
  __cxa_end_catch();
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v63,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
  if ( v59 )
    sub_1B88804(v59);
  return (System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__o *)v4;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__o *__fastcall UserEventAlloutBattleMaster__GetClearDeckInfo(
        UserEventAlloutBattleMaster_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  UserEventAlloutBattleEntity_c *v7; // x1
  System_Collections_Generic_IEnumerator_T__o *v8; // x19
  System_Collections_Generic_List_object__o *v9; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v11; // x9
  int *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v14; // x8
  __int64 v15; // x9
  int *v16; // x10
  __int64 v17; // x0
  _QWORD *v18; // x0
  __int64 v19; // x1
  __int64 methodPtr_low; // x9
  Il2CppObject *value; // x22
  UserEventAlloutBattleMaster_o *v22; // x0
  const MethodInfo *v23; // x2
  __int64 v24; // x10
  System_Collections_Generic_List_object__o *v25; // x1
  System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__o *v26; // x0
  int v27; // w23
  System_Collections_Generic_IEnumerator_T__c *v28; // x8
  __int64 v29; // x9
  int *v30; // x10
  __int64 v31; // x0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v33; // [xsp+18h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v34; // [xsp+40h] [xbp-90h] BYREF

  if ( (byte_4A5BD75 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Current__);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Key__);
    sub_1B885B0(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_List_object__TypeInfo);
    sub_1B885B0(&UserEventAlloutBattleEntity_TypeInfo);
    byte_4A5BD75 = 1;
  }
  memset(&v34, 0, sizeof(v34));
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_52;
  if ( System_Collections_ObjectModel_Collection_object___get_Count(
         list,
         (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) <= 0 )
  {
LABEL_47:
    v9 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v9,
      (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo___ctor__);
    return (System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__o *)v9;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_52:
    sub_1B8880C(list, *(_QWORD *)&questId);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_30BAB58 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  v8 = Enumerator;
  v9 = 0LL;
  while ( 1 )
  {
    if ( !v8 )
      goto LABEL_50;
    klass = v8->klass;
    v11 = *(unsigned __int16 *)(&v8->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v8->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v11;
        p_offset += 4;
        if ( !v11 )
          goto LABEL_12;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_12:
      p_method = sub_1BDA590(v8, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            v8,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v14 = v8->klass;
    v15 = *(unsigned __int16 *)(&v8->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v8->klass->_2.bitflags2 + 3) )
    {
      v16 = &v14->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v16 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v15;
        v16 += 4;
        if ( !v15 )
          goto LABEL_19;
      }
      v17 = (__int64)&v14->vtable[*v16].method;
    }
    else
    {
LABEL_19:
      v17 = sub_1BDA590(v8, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v18 = (_QWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v17)(
                      v8,
                      *(_QWORD *)(v17 + 8));
    if ( !v18 )
      sub_1B8880C(0LL, v19);
    v7 = UserEventAlloutBattleEntity_TypeInfo;
    methodPtr_low = LOBYTE(UserEventAlloutBattleEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*v18 + 304LL) < (unsigned int)methodPtr_low
      || *(UserEventAlloutBattleEntity_c **)(*(_QWORD *)(*v18 + 200LL) + 8 * methodPtr_low - 8) != UserEventAlloutBattleEntity_TypeInfo )
    {
      sub_1B88ACC(v18);
LABEL_50:
      sub_1B8880C(Enumerator, v7);
    }
    Enumerator = (System_Collections_Generic_IEnumerator_T__o *)v18[4];
    if ( Enumerator )
    {
      System_Collections_Generic_Dictionary_object__object___GetEnumerator(
        &v33,
        (System_Collections_Generic_Dictionary_object__object__o *)Enumerator,
        (const MethodInfo_31C75F8 *)Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
      v34 = v33;
      while ( System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
                &v34,
                (const MethodInfo_32C3FD0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__) )
      {
        value = v34.fields._current.fields.value;
        v22 = (UserEventAlloutBattleMaster_o *)System_Int32__Parse(
                                                 (System_String_o *)v34.fields._current.fields.key,
                                                 0LL);
        if ( (_DWORD)v22 == questId )
        {
          if ( value
            && (v24 = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr),
                LOBYTE(value->klass->vtable[0].methodPtr) >= (unsigned int)v24) )
          {
            v25 = (System_Collections_Generic_List_object__c *)value->klass->_2.typeHierarchy[v24 - 1] == System_Collections_Generic_List_object__TypeInfo
                ? (System_Collections_Generic_List_object__o *)value
                : 0LL;
          }
          else
          {
            v25 = 0LL;
          }
          v26 = UserEventAlloutBattleMaster__ConvertClearSvtInfo(v22, v25, v23);
          if ( v26 )
          {
            v27 = 7;
            v9 = (System_Collections_Generic_List_object__o *)v26;
            goto LABEL_37;
          }
        }
      }
      v27 = 3;
LABEL_37:
      System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
        &v34,
        (const MethodInfo_32C40F0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
      if ( v27 != 3 )
        goto LABEL_40;
    }
  }
  v27 = 8;
LABEL_40:
  v28 = v8->klass;
  v29 = *(unsigned __int16 *)(&v8->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v8->klass->_2.bitflags2 + 3) )
  {
    v30 = &v28->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v30 - 1) != System_IDisposable_TypeInfo )
    {
      --v29;
      v30 += 4;
      if ( !v29 )
        goto LABEL_44;
    }
    v31 = (__int64)&v28->vtable[*v30].method;
  }
  else
  {
LABEL_44:
    v31 = sub_1BDA590(v8, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v31)(v8, *(_QWORD *)(v31 + 8));
  if ( (v27 | 8) == 8 )
    goto LABEL_47;
  return (System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__o *)v9;
}


int32_t __fastcall UserEventAlloutBattleMaster__GetDicToInt(
        UserEventAlloutBattleMaster_o *this,
        System_Collections_Generic_Dictionary_string__object__o *dic,
        System_String_o *key,
        const MethodInfo *method)
{
  System_String_o *v6; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A5BD77 & 1) == 0 )
  {
    this = (UserEventAlloutBattleMaster_o *)sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    byte_4A5BD77 = 1;
  }
  value = 0LL;
  if ( !dic )
    goto LABEL_9;
  if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
         (System_Collections_Generic_Dictionary_object__object__o *)dic,
         (Il2CppObject *)key,
         &value,
         (const MethodInfo_31C89D4 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    this = (UserEventAlloutBattleMaster_o *)value;
    if ( value )
    {
      v6 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))value->klass->vtable[3].method)(
                                value,
                                value->klass->vtable[4].methodPtr);
      return System_Int32__Parse(v6, 0LL);
    }
LABEL_9:
    sub_1B8880C(this, dic);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
UserEventAlloutBattleEntity_o *__fastcall UserEventAlloutBattleMaster__GetEntity(
        UserEventAlloutBattleMaster_o *this,
        int64_t userId,
        int32_t eventId,
        int32_t alloutBattleId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A5BD72 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_UserEventAlloutBattleMaster__UserEventAlloutBattleEntity__string__GetEntity__);
    byte_4A5BD72 = 1;
  }
  PK = (Il2CppObject *)UserEventAlloutBattleEntity__CreatePK(
                         userId,
                         eventId,
                         alloutBattleId,
                         *(const MethodInfo **)&alloutBattleId);
  return (UserEventAlloutBattleEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                            PK,
                                            (const MethodInfo_311DC8C *)Method_DataMasterBase_UserEventAlloutBattleMaster__UserEventAlloutBattleEntity__string__GetEntity__);
}


bool __fastcall UserEventAlloutBattleMaster__IsAlreadyUsedServant(
        UserEventAlloutBattleMaster_o *this,
        int32_t svtId,
        int32_t eventId,
        int32_t alloutBattleId,
        const MethodInfo *method)
{
  __int64 v6; // x21
  int64_t UserId; // x0
  const MethodInfo *v10; // x4
  UserEventAlloutBattleEntity_o *Entity; // x0
  __int64 v12; // x1
  System_Collections_Generic_Dictionary_object__object__o *clearDeckInfoDic; // x0
  char v14; // w22
  _BOOL8 v15; // x0
  __int64 v16; // x1
  __int64 methodPtr_low; // x11
  _BOOL8 v18; // x0
  const MethodInfo *v19; // x3
  __int64 v20; // x10
  int v21; // w23
  int v22; // w1
  int v23; // w23
  void *v24; // x0
  void *v25; // x19
  __int64 v26; // x20
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v28; // [xsp+8h] [xbp-D8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+30h] [xbp-B0h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v30; // [xsp+50h] [xbp-90h] BYREF

  v6 = (unsigned int)eventId;
  if ( (byte_4A5BD74 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_object__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_object__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__);
    sub_1B885B0(&Method_System_Collections_Generic_List_object__GetEnumerator__);
    sub_1B885B0(&System_Collections_Generic_List_object__TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&StringLiteral_23707/*"svtId"*/);
    byte_4A5BD74 = 1;
  }
  memset(&v30, 0, sizeof(v30));
  memset(&v29, 0, sizeof(v29));
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  UserId = NetworkManager__get_UserId(0LL);
  Entity = UserEventAlloutBattleMaster__GetEntity(this, UserId, v6, alloutBattleId, v10);
  if ( Entity )
  {
    clearDeckInfoDic = (System_Collections_Generic_Dictionary_object__object__o *)Entity->fields.clearDeckInfoDic;
    if ( !clearDeckInfoDic )
      sub_1B8880C(0LL, v12);
    System_Collections_Generic_Dictionary_object__object___GetEnumerator(
      &v28,
      clearDeckInfoDic,
      (const MethodInfo_31C75F8 *)Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
    v14 = 0;
    v30 = v28;
    while ( 2 )
    {
      v15 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
              &v30,
              (const MethodInfo_32C3FD0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__);
      if ( v15 )
      {
        if ( !v30.fields._current.fields.value
          || (methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr),
              LOBYTE(v30.fields._current.fields.value->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low)
          || (System_Collections_Generic_List_object__c *)v30.fields._current.fields.value->klass->_2.typeHierarchy[methodPtr_low - 1] != System_Collections_Generic_List_object__TypeInfo )
        {
          sub_1B8880C(v15, v16);
        }
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v28,
          (System_Collections_Generic_List_object__o *)v30.fields._current.fields.value,
          (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_object__GetEnumerator__);
        *(_OWORD *)&v29.fields._list = *(_OWORD *)&v28.fields._dictionary;
        v29.fields._current = v28.fields._current.fields.key;
        while ( 1 )
        {
          v18 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v29,
                  (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_object__MoveNext__);
          if ( !v18 )
            break;
          if ( v29.fields._current )
          {
            v20 = LOBYTE(System_Collections_Generic_Dictionary_string__object__TypeInfo->vtable._0_Equals.methodPtr);
            if ( LOBYTE(v29.fields._current->klass->vtable[0].methodPtr) < (unsigned int)v20
              || (System_Collections_Generic_Dictionary_string__object__c *)v29.fields._current->klass->_2.typeHierarchy[v20 - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
            {
              sub_1B88ACC(v29.fields._current);
              v23 = v22;
              v25 = v24;
              System_Collections_Generic_List_Enumerator_object___Dispose(
                &v29,
                (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
              if ( v6 )
                sub_1B88804(v6);
              if ( v23 != 1 )
              {
                System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
                  &v30,
                  (const MethodInfo_32C40F0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
                sub_1C73040();
              }
              v26 = *(_QWORD *)__cxa_begin_catch(v25);
              __cxa_end_catch();
              System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
                &v30,
                (const MethodInfo_32C40F0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
              if ( v26 )
                sub_1B88804(v26);
              v21 = 0;
              goto LABEL_25;
            }
          }
          if ( UserEventAlloutBattleMaster__GetDicToInt(
                 (UserEventAlloutBattleMaster_o *)v18,
                 (System_Collections_Generic_Dictionary_string__object__o *)v29.fields._current,
                 (System_String_o *)StringLiteral_23707/*"svtId"*/,
                 v19) == svtId )
          {
            v6 = 0LL;
            v14 = 1;
            v21 = 7;
            goto LABEL_20;
          }
        }
        v6 = 0LL;
        v21 = 3;
LABEL_20:
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v29,
          (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
        if ( v21 == 3 )
          continue;
      }
      else
      {
        v21 = 8;
      }
      break;
    }
    System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
      &v30,
      (const MethodInfo_32C40F0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
LABEL_25:
    LOBYTE(Entity) = v14 & (v21 == 7);
  }
  return (char)Entity;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UserEventAlloutBattleMaster__TryGetEntity(
        UserEventAlloutBattleMaster_o *this,
        UserEventAlloutBattleEntity_o **entity,
        int64_t userId,
        int32_t eventId,
        int32_t alloutBattleId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4A5BD73 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_UserEventAlloutBattleMaster__UserEventAlloutBattleEntity__string__TryGetEntity__);
    byte_4A5BD73 = 1;
  }
  PK = (Il2CppObject *)UserEventAlloutBattleEntity__CreatePK(
                         userId,
                         eventId,
                         alloutBattleId,
                         *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_UserEventAlloutBattleMaster__UserEventAlloutBattleEntity__string__TryGetEntity__);
}


void __fastcall UserEventAlloutBattleMaster_ClearSvtEquipInfo___ctor(
        UserEventAlloutBattleMaster_ClearSvtEquipInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall UserEventAlloutBattleMaster_ClearSvtInfo___ctor(
        UserEventAlloutBattleMaster_ClearSvtInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}