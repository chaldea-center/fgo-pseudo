void UserEventAlloutBattleMaster___ctor(UserEventAlloutBattleMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C57B1E & 1) == 0 )
  {
    sub_1C3E564(&Method_DataMasterBase_UserEventAlloutBattleMaster__UserEventAlloutBattleEntity__string___ctor__);
    byte_4C57B1E = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    413,
    (const MethodInfo_33B56EC *)Method_DataMasterBase_UserEventAlloutBattleMaster__UserEventAlloutBattleEntity__string___ctor__);
}


System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__o *UserEventAlloutBattleMaster__ConvertClearSvtInfo(
        UserEventAlloutBattleMaster_o *this,
        System_Collections_Generic_List_object__o *deckList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v4; // x19
  __int64 v5; // x0
  __int64 v6; // x1
  Il2CppObject *current; // x22
  __int64 naturalAligment; // x9
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
  const MethodInfo *v26; // x3
  __int64 v27; // x0
  __int64 v28; // x1
  _BOOL8 v29; // x0
  __int64 v30; // x1
  int32_t v31; // w2
  const MethodInfo *v32; // x3
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
  const MethodInfo *v44; // x3
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

  if ( (byte_4C57B23 & 1) == 0 )
  {
    sub_1C3E564(&UserEventAlloutBattleMaster_ClearSvtEquipInfo_TypeInfo);
    sub_1C3E564(&UserEventAlloutBattleMaster_ClearSvtInfo_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_1C3E564(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_object__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_object__get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtEquipInfo__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_object__GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtEquipInfo___ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__TypeInfo);
    sub_1C3E564(&System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtEquipInfo__TypeInfo);
    sub_1C3E564(&System_Collections_Generic_List_object__TypeInfo);
    sub_1C3E564(&StringLiteral_21210/*"lc"*/);
    sub_1C3E564(&StringLiteral_18807/*"ec"*/);
    sub_1C3E564(&StringLiteral_23885/*"svtEqs"*/);
    sub_1C3E564(&StringLiteral_23888/*"svtId"*/);
    sub_1C3E564(&StringLiteral_20272/*"id"*/);
    sub_1C3E564(&StringLiteral_20302/*"ilc"*/);
    sub_1C3E564(&StringLiteral_21388/*"lv"*/);
    byte_4C57B23 = 1;
  }
  memset(&v63, 0, sizeof(v63));
  value = 0;
  memset(&v61, 0, sizeof(v61));
  v4 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo___ctor__);
  if ( !deckList )
    sub_1C3E7C0(v5, v6);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v60,
    deckList,
    (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_object__GetEnumerator__);
  v63 = v60;
  while ( 1 )
  {
    if ( !System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v63,
            (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_object__MoveNext__) )
    {
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v63,
        (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
      return (System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__o *)v4;
    }
    current = v63.fields._current;
    if ( v63.fields._current )
    {
      naturalAligment = System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.naturalAligment;
      if ( v63.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (System_Collections_Generic_Dictionary_string__object__c *)v63.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
      {
        sub_1C3EA80(v63.fields._current);
LABEL_42:
        sub_1C3E7C0(DicToInt, v13);
      }
    }
    v9 = sub_1C3E7B0(UserEventAlloutBattleMaster_ClearSvtInfo_TypeInfo);
    System_Object___ctor((Il2CppObject *)v9, 0);
    DicToInt = (UserEventAlloutBattleMaster_o *)UserEventAlloutBattleMaster__GetDicToInt(
                                                  v10,
                                                  (System_Collections_Generic_Dictionary_string__object__o *)current,
                                                  (System_String_o *)StringLiteral_20272/*"id"*/,
                                                  v11);
    if ( !v9 )
      goto LABEL_42;
    *(_DWORD *)(v9 + 16) = (_DWORD)DicToInt;
    v15 = (UserEventAlloutBattleMaster_o *)UserEventAlloutBattleMaster__GetDicToInt(
                                             DicToInt,
                                             (System_Collections_Generic_Dictionary_string__object__o *)current,
                                             (System_String_o *)StringLiteral_23888/*"svtId"*/,
                                             v14);
    *(_DWORD *)(v9 + 20) = (_DWORD)v15;
    v17 = (UserEventAlloutBattleMaster_o *)UserEventAlloutBattleMaster__GetDicToInt(
                                             v15,
                                             (System_Collections_Generic_Dictionary_string__object__o *)current,
                                             (System_String_o *)StringLiteral_21388/*"lv"*/,
                                             v16);
    *(_DWORD *)(v9 + 24) = (_DWORD)v17;
    v19 = (UserEventAlloutBattleMaster_o *)UserEventAlloutBattleMaster__GetDicToInt(
                                             v17,
                                             (System_Collections_Generic_Dictionary_string__object__o *)current,
                                             (System_String_o *)StringLiteral_21210/*"lc"*/,
                                             v18);
    *(_DWORD *)(v9 + 28) = (_DWORD)v19;
    v21 = (UserEventAlloutBattleMaster_o *)UserEventAlloutBattleMaster__GetDicToInt(
                                             v19,
                                             (System_Collections_Generic_Dictionary_string__object__o *)current,
                                             (System_String_o *)StringLiteral_20302/*"ilc"*/,
                                             v20);
    *(_DWORD *)(v9 + 32) = (_DWORD)v21;
    *(_DWORD *)(v9 + 36) = UserEventAlloutBattleMaster__GetDicToInt(
                             v21,
                             (System_Collections_Generic_Dictionary_string__object__o *)current,
                             (System_String_o *)StringLiteral_18807/*"ec"*/,
                             v22);
    v23 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtEquipInfo__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v23,
      (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtEquipInfo___ctor__);
    *(_QWORD *)(v9 + 40) = v23;
    v24 = (System_Collections_Generic_List_object__o **)(v9 + 40);
    sub_1C3E508((CGThumbnailListItem_o *)(v9 + 40), (int32_t)v23, v25, v26);
    if ( !current )
      sub_1C3E7C0(v27, v28);
    v29 = System_Collections_Generic_Dictionary_object__object___TryGetValue(
            (System_Collections_Generic_Dictionary_object__object__o *)current,
            (Il2CppObject *)StringLiteral_23885/*"svtEqs"*/,
            &value,
            (const MethodInfo_3476FEC *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    if ( v29 )
      break;
LABEL_27:
    if ( !v4 )
      sub_1C3E7C0(v29, v30);
    items = v4->fields._items;
    v51 = Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__Add__;
    ++v4->fields._version;
    if ( !items )
      sub_1C3E7C0(v29, v30);
    size = v4->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v4,
        (Il2CppObject *)v9,
        *(const MethodInfo_37B5460 **)(*(_QWORD *)(v51[4] + 192LL) + 112LL));
    }
    else
    {
      v53 = &items->obj.klass + size;
      v4->fields._size = size + 1;
      v53[4] = (Il2CppClass *)v9;
      sub_1C3E508((CGThumbnailListItem_o *)(v53 + 4), v9, v31, v32);
    }
  }
  if ( !value
    || (v33 = System_Collections_Generic_List_object__TypeInfo->_2.naturalAligment,
        value->klass->_2.naturalAligment < (unsigned int)v33)
    || (System_Collections_Generic_List_object__c *)value->klass->_2.typeHierarchy[v33 - 1] != System_Collections_Generic_List_object__TypeInfo )
  {
    sub_1C3E7C0(v29, v30);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v60,
    (System_Collections_Generic_List_object__o *)value,
    (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_object__GetEnumerator__);
  v61 = v60;
  while ( 1 )
  {
    if ( !System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v61,
            (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_object__MoveNext__) )
    {
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v61,
        (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
      goto LABEL_27;
    }
    v34 = v61.fields._current;
    if ( v61.fields._current )
    {
      v35 = System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.naturalAligment;
      if ( v61.fields._current->klass->_2.naturalAligment < (unsigned int)v35
        || (System_Collections_Generic_Dictionary_string__object__c *)v61.fields._current->klass->_2.typeHierarchy[v35 - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
      {
        break;
      }
    }
    v36 = sub_1C3E7B0(UserEventAlloutBattleMaster_ClearSvtEquipInfo_TypeInfo);
    System_Object___ctor((Il2CppObject *)v36, 0);
    v39 = (UserEventAlloutBattleMaster_o *)UserEventAlloutBattleMaster__GetDicToInt(
                                             v37,
                                             (System_Collections_Generic_Dictionary_string__object__o *)v34,
                                             (System_String_o *)StringLiteral_23888/*"svtId"*/,
                                             v38);
    if ( !v36 )
      sub_1C3E7C0(v39, v40);
    *(_DWORD *)(v36 + 16) = (_DWORD)v39;
    *(_DWORD *)(v36 + 20) = UserEventAlloutBattleMaster__GetDicToInt(
                              v39,
                              (System_Collections_Generic_Dictionary_string__object__o *)v34,
                              (System_String_o *)StringLiteral_21210/*"lc"*/,
                              v41);
    v45 = *v24;
    if ( !*v24 )
      sub_1C3E7C0(0, v42);
    v46 = v45->fields._items;
    v47 = Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtEquipInfo__Add__;
    ++v45->fields._version;
    if ( !v46 )
      sub_1C3E7C0(v45, v42);
    v48 = v45->fields._size;
    if ( (unsigned int)v48 >= LODWORD(v46->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v45,
        (Il2CppObject *)v36,
        *(const MethodInfo_37B5460 **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
    }
    else
    {
      v49 = &v46->obj.klass + v48;
      v45->fields._size = v48 + 1;
      v49[4] = (Il2CppClass *)v36;
      sub_1C3E508((CGThumbnailListItem_o *)(v49 + 4), v36, v43, v44);
    }
  }
  sub_1C3EA80(v61.fields._current);
  v56 = v55;
  v58 = v57;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v61,
    (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
  if ( v24 )
    sub_1C3E7B8(v24);
  if ( v56 != 1 )
  {
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v63,
      (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
    sub_1D27698();
  }
  v59 = *(_QWORD *)__cxa_begin_catch(v58);
  __cxa_end_catch();
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v63,
    (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
  if ( v59 )
    sub_1C3E7B8(v59);
  return (System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__o *)v4;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__o *UserEventAlloutBattleMaster__GetClearDeckInfo(
        UserEventAlloutBattleMaster_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v7; // x1
  System_Collections_Generic_IEnumerator_T__o *v8; // x19
  System_Collections_Generic_List_object__o *v9; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v11; // x9
  int *p_offset; // x10
  __int64 v13; // x0
  System_Collections_Generic_IEnumerator_T__c *v14; // x8
  __int64 v15; // x9
  int *v16; // x10
  __int64 v17; // x0
  __int64 v18; // x0
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o current; // kr00_16
  UserEventAlloutBattleMaster_o *v20; // x0
  const MethodInfo *v21; // x2
  __int64 naturalAligment; // x10
  System_Collections_Generic_List_object__o *v23; // x1
  System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__o *v24; // x0
  int v25; // w23
  System_Collections_Generic_IEnumerator_T__c *v26; // x8
  __int64 v27; // x9
  int *v28; // x10
  __int64 v29; // x0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v31; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v32; // [xsp+30h] [xbp-90h] BYREF

  if ( (byte_4C57B22 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_ObjectModel_Collection_UserEventAlloutBattleEntity__GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_ObjectModel_Collection_UserEventAlloutBattleEntity__get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Current__);
    sub_1C3E564(&System_IDisposable_TypeInfo);
    sub_1C3E564(&System_Collections_Generic_IEnumerator_UserEventAlloutBattleEntity__TypeInfo);
    sub_1C3E564(&System_Collections_IEnumerator_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Key__);
    sub_1C3E564(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__);
    sub_1C3E564(&Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__TypeInfo);
    sub_1C3E564(&System_Collections_Generic_List_object__TypeInfo);
    byte_4C57B22 = 1;
  }
  memset(&v32, 0, sizeof(v32));
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_49;
  if ( System_Collections_ObjectModel_Collection_object___get_Count(
         list,
         (const MethodInfo_334C3C8 *)Method_System_Collections_ObjectModel_Collection_UserEventAlloutBattleEntity__get_Count__) <= 0 )
  {
LABEL_45:
    v9 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v9,
      (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo___ctor__);
    return (System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__o *)v9;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_49:
    sub_1C3E7C0(list, *(_QWORD *)&questId);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_334C9A0 *)Method_System_Collections_ObjectModel_Collection_UserEventAlloutBattleEntity__GetEnumerator__);
  v8 = Enumerator;
  v9 = 0;
  while ( 1 )
  {
    if ( !v8 )
      sub_1C3E7C0(Enumerator, v7);
    klass = v8->klass;
    v11 = *(unsigned __int16 *)&v8->klass->_2.rank;
    if ( *(_WORD *)&v8->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v11;
        p_offset += 4;
        if ( !v11 )
          goto LABEL_12;
      }
      v13 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_12:
      v13 = sub_1C8ED7C(v8, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v13)(
            v8,
            *(_QWORD *)(v13 + 8))
        & 1) == 0 )
      break;
    v14 = v8->klass;
    v15 = *(unsigned __int16 *)&v8->klass->_2.rank;
    if ( *(_WORD *)&v8->klass->_2.rank )
    {
      v16 = &v14->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_UserEventAlloutBattleEntity__c **)v16 - 1) != System_Collections_Generic_IEnumerator_UserEventAlloutBattleEntity__TypeInfo )
      {
        --v15;
        v16 += 4;
        if ( !v15 )
          goto LABEL_19;
      }
      v17 = (__int64)&v14->vtable[*v16];
    }
    else
    {
LABEL_19:
      v17 = sub_1C8ED7C(v8, System_Collections_Generic_IEnumerator_UserEventAlloutBattleEntity__TypeInfo, 0);
    }
    v18 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v17)(
            v8,
            *(_QWORD *)(v17 + 8));
    if ( !v18 )
      sub_1C3E7C0(0, v7);
    Enumerator = *(System_Collections_Generic_IEnumerator_T__o **)(v18 + 32);
    if ( Enumerator )
    {
      System_Collections_Generic_Dictionary_object__object___GetEnumerator(
        &v31,
        (System_Collections_Generic_Dictionary_object__object__o *)Enumerator,
        (const MethodInfo_3475C10 *)Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
      v32 = v31;
      while ( System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
                &v32,
                (const MethodInfo_3572518 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__) )
      {
        current = v32.fields._current;
        v20 = (UserEventAlloutBattleMaster_o *)System_Int32__Parse((System_String_o *)v32.fields._current.fields.key, 0);
        if ( (_DWORD)v20 == questId )
        {
          if ( current.fields.value
            && (naturalAligment = System_Collections_Generic_List_object__TypeInfo->_2.naturalAligment,
                current.fields.value->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
          {
            v23 = (System_Collections_Generic_List_object__c *)current.fields.value->klass->_2.typeHierarchy[naturalAligment - 1] == System_Collections_Generic_List_object__TypeInfo
                ? (System_Collections_Generic_List_object__o *)current.fields.value
                : 0LL;
          }
          else
          {
            v23 = 0;
          }
          v24 = UserEventAlloutBattleMaster__ConvertClearSvtInfo(v20, v23, v21);
          if ( v24 )
          {
            v25 = 7;
            v9 = (System_Collections_Generic_List_object__o *)v24;
            goto LABEL_35;
          }
        }
      }
      v25 = 3;
LABEL_35:
      System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
        &v32,
        (const MethodInfo_3572638 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
      if ( v25 != 3 )
        goto LABEL_38;
    }
  }
  v25 = 8;
LABEL_38:
  v26 = v8->klass;
  v27 = *(unsigned __int16 *)&v8->klass->_2.rank;
  if ( *(_WORD *)&v8->klass->_2.rank )
  {
    v28 = &v26->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v28 - 1) != System_IDisposable_TypeInfo )
    {
      --v27;
      v28 += 4;
      if ( !v27 )
        goto LABEL_42;
    }
    v29 = (__int64)&v26->vtable[*v28];
  }
  else
  {
LABEL_42:
    v29 = sub_1C8ED7C(v8, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v29)(v8, *(_QWORD *)(v29 + 8));
  if ( (v25 | 8) == 8 )
    goto LABEL_45;
  return (System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__o *)v9;
}


int32_t UserEventAlloutBattleMaster__GetDicToInt(
        UserEventAlloutBattleMaster_o *this,
        System_Collections_Generic_Dictionary_string__object__o *dic,
        System_String_o *key,
        const MethodInfo *method)
{
  System_String_o *v6; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C57B24 & 1) == 0 )
  {
    this = (UserEventAlloutBattleMaster_o *)sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    byte_4C57B24 = 1;
  }
  value = 0;
  if ( !dic )
    goto LABEL_9;
  if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
         (System_Collections_Generic_Dictionary_object__object__o *)dic,
         (Il2CppObject *)key,
         &value,
         (const MethodInfo_3476FEC *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    this = (UserEventAlloutBattleMaster_o *)value;
    if ( value )
    {
      v6 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))value->klass->vtable[3].methodPtr)(
                                value,
                                value->klass->vtable[3].method);
      return System_Int32__Parse(v6, 0);
    }
LABEL_9:
    sub_1C3E7C0(this, dic);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
UserEventAlloutBattleEntity_o *UserEventAlloutBattleMaster__GetEntity(
        UserEventAlloutBattleMaster_o *this,
        int64_t userId,
        int32_t eventId,
        int32_t alloutBattleId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C57B1F & 1) == 0 )
  {
    sub_1C3E564(&Method_DataMasterBase_UserEventAlloutBattleMaster__UserEventAlloutBattleEntity__string__GetEntity__);
    byte_4C57B1F = 1;
  }
  PK = (Il2CppObject *)UserEventAlloutBattleEntity__CreatePK(
                         userId,
                         eventId,
                         alloutBattleId,
                         *(const MethodInfo **)&alloutBattleId);
  return (UserEventAlloutBattleEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                            PK,
                                            (const MethodInfo_33B7A10 *)Method_DataMasterBase_UserEventAlloutBattleMaster__UserEventAlloutBattleEntity__string__GetEntity__);
}


bool UserEventAlloutBattleMaster__IsAlreadyUsedServant(
        UserEventAlloutBattleMaster_o *this,
        int32_t svtId,
        int32_t eventId,
        int32_t alloutBattleId,
        const MethodInfo *method)
{
  NetworkManager_c *v9; // x0
  UserEventAlloutBattleEntity_o *Entity; // x0
  __int64 v11; // x1
  System_Collections_Generic_Dictionary_object__object__o *clearDeckInfoDic; // x0
  char v13; // w23
  _BOOL8 v14; // x0
  __int64 v15; // x1
  __int64 naturalAligment; // x11
  _BOOL8 v17; // x0
  const MethodInfo *v18; // x3
  __int64 v19; // x10
  int v20; // w24
  int v21; // w1
  int v22; // w19
  void *v23; // x0
  void *v24; // x24
  __int64 v25; // x19
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v27; // [xsp+8h] [xbp-D8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+30h] [xbp-B0h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v29; // [xsp+50h] [xbp-90h] BYREF

  if ( (byte_4C57B21 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
    sub_1C3E564(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_object__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_object__get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__);
    sub_1C3E564(&Method_System_Collections_Generic_List_object__GetEnumerator__);
    sub_1C3E564(&System_Collections_Generic_List_object__TypeInfo);
    sub_1C3E564(&NetworkManager_TypeInfo);
    sub_1C3E564(&StringLiteral_23888/*"svtId"*/);
    byte_4C57B21 = 1;
  }
  memset(&v29, 0, sizeof(v29));
  memset(&v28, 0, sizeof(v28));
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C50AE2 )
  {
    sub_1C3E564(&NetworkManager_TypeInfo);
    byte_4C50AE2 = 1;
  }
  v9 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v9 = NetworkManager_TypeInfo;
  }
  Entity = UserEventAlloutBattleMaster__GetEntity(
             this,
             v9->static_fields->userIdNumber,
             eventId,
             alloutBattleId,
             method);
  if ( Entity )
  {
    clearDeckInfoDic = (System_Collections_Generic_Dictionary_object__object__o *)Entity->fields.clearDeckInfoDic;
    if ( !clearDeckInfoDic )
      sub_1C3E7C0(0, v11);
    System_Collections_Generic_Dictionary_object__object___GetEnumerator(
      &v27,
      clearDeckInfoDic,
      (const MethodInfo_3475C10 *)Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
    v13 = 0;
    v29 = v27;
    while ( 2 )
    {
      v14 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
              &v29,
              (const MethodInfo_3572518 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__);
      if ( v14 )
      {
        if ( !v29.fields._current.fields.value
          || (naturalAligment = System_Collections_Generic_List_object__TypeInfo->_2.naturalAligment,
              v29.fields._current.fields.value->klass->_2.naturalAligment < (unsigned int)naturalAligment)
          || (System_Collections_Generic_List_object__c *)v29.fields._current.fields.value->klass->_2.typeHierarchy[naturalAligment - 1] != System_Collections_Generic_List_object__TypeInfo )
        {
          sub_1C3E7C0(v14, v15);
        }
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v27,
          (System_Collections_Generic_List_object__o *)v29.fields._current.fields.value,
          (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_object__GetEnumerator__);
        *(_OWORD *)&v28.fields._list = *(_OWORD *)&v27.fields._dictionary;
        v28.fields._current = v27.fields._current.fields.key;
        while ( 1 )
        {
          v17 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v28,
                  (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_object__MoveNext__);
          if ( !v17 )
            break;
          if ( v28.fields._current )
          {
            v19 = System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.naturalAligment;
            if ( v28.fields._current->klass->_2.naturalAligment < (unsigned int)v19
              || (System_Collections_Generic_Dictionary_string__object__c *)v28.fields._current->klass->_2.typeHierarchy[v19 - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
            {
              sub_1C3EA80(v28.fields._current);
              v22 = v21;
              v24 = v23;
              System_Collections_Generic_List_Enumerator_object___Dispose(
                &v28,
                (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
              if ( this )
                sub_1C3E7B8(this);
              if ( v22 != 1 )
              {
                System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
                  &v29,
                  (const MethodInfo_3572638 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
                sub_1D27698();
              }
              v25 = *(_QWORD *)__cxa_begin_catch(v24);
              __cxa_end_catch();
              System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
                &v29,
                (const MethodInfo_3572638 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
              if ( v25 )
                sub_1C3E7B8(v25);
              v20 = 0;
              goto LABEL_29;
            }
          }
          if ( UserEventAlloutBattleMaster__GetDicToInt(
                 (UserEventAlloutBattleMaster_o *)v17,
                 (System_Collections_Generic_Dictionary_string__object__o *)v28.fields._current,
                 (System_String_o *)StringLiteral_23888/*"svtId"*/,
                 v18) == svtId )
          {
            this = 0;
            v13 = 1;
            v20 = 7;
            goto LABEL_24;
          }
        }
        this = 0;
        v20 = 3;
LABEL_24:
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v28,
          (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
        if ( v20 == 3 )
          continue;
      }
      else
      {
        v20 = 8;
      }
      break;
    }
    System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
      &v29,
      (const MethodInfo_3572638 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
LABEL_29:
    LOBYTE(Entity) = v13 & (v20 == 7);
  }
  return (char)Entity;
}


// local variable allocation has failed, the output may be wrong!
bool UserEventAlloutBattleMaster__TryGetEntity(
        UserEventAlloutBattleMaster_o *this,
        UserEventAlloutBattleEntity_o **entity,
        int64_t userId,
        int32_t eventId,
        int32_t alloutBattleId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4C57B20 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataMasterBase_UserEventAlloutBattleMaster__UserEventAlloutBattleEntity__string__TryGetEntity__);
    byte_4C57B20 = 1;
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
           (const MethodInfo_33B7A5C *)Method_DataMasterBase_UserEventAlloutBattleMaster__UserEventAlloutBattleEntity__string__TryGetEntity__);
}


void UserEventAlloutBattleMaster_ClearSvtEquipInfo___ctor(
        UserEventAlloutBattleMaster_ClearSvtEquipInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void UserEventAlloutBattleMaster_ClearSvtInfo___ctor(
        UserEventAlloutBattleMaster_ClearSvtInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}