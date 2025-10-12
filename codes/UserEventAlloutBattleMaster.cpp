void UserEventAlloutBattleMaster___ctor(UserEventAlloutBattleMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C3876D & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_UserEventAlloutBattleMaster__UserEventAlloutBattleEntity__string___ctor__);
    byte_4C3876D = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    413,
    (const MethodInfo_3398FCC *)Method_DataMasterBase_UserEventAlloutBattleMaster__UserEventAlloutBattleEntity__string___ctor__);
}


System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__o *UserEventAlloutBattleMaster__ConvertClearSvtInfo(
        UserEventAlloutBattleMaster_o *this,
        System_Collections_Generic_List_object__o *deckList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v4; // x19
  __int64 v5; // x0
  Il2CppObject *current; // x22
  __int64 naturalAligment; // x9
  __int64 v8; // x20
  UserEventAlloutBattleMaster_o *v9; // x0
  const MethodInfo *v10; // x3
  UserEventAlloutBattleMaster_o *DicToInt; // x0
  const MethodInfo *v12; // x3
  UserEventAlloutBattleMaster_o *v13; // x0
  const MethodInfo *v14; // x3
  UserEventAlloutBattleMaster_o *v15; // x0
  const MethodInfo *v16; // x3
  UserEventAlloutBattleMaster_o *v17; // x0
  const MethodInfo *v18; // x3
  UserEventAlloutBattleMaster_o *v19; // x0
  const MethodInfo *v20; // x3
  System_Collections_Generic_List_object__o *v21; // x23
  System_Collections_Generic_List_object__o **v22; // x21
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  __int64 v25; // x0
  _BOOL8 v26; // x0
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  __int64 v29; // x11
  Il2CppObject *v30; // x23
  __int64 v31; // x9
  __int64 v32; // x22
  UserEventAlloutBattleMaster_o *v33; // x0
  const MethodInfo *v34; // x3
  UserEventAlloutBattleMaster_o *v35; // x0
  const MethodInfo *v36; // x3
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  System_Collections_Generic_List_object__o *v39; // x0
  struct System_Object_array *v40; // x8
  _QWORD *v41; // x9
  __int64 v42; // x10
  Il2CppClass **v43; // x8
  struct System_Object_array *items; // x8
  _QWORD *v45; // x9
  __int64 size; // x10
  Il2CppClass **v47; // x0
  int v49; // w1
  int v50; // w20
  void *v51; // x0
  void *v52; // x22
  __int64 v53; // x20
  System_Collections_Generic_List_Enumerator_object__o v54; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v55; // [xsp+20h] [xbp-A0h] BYREF
  Il2CppObject *value; // [xsp+38h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v57; // [xsp+40h] [xbp-80h] BYREF

  if ( (byte_4C38772 & 1) == 0 )
  {
    sub_1C32C20(&UserEventAlloutBattleMaster_ClearSvtEquipInfo_TypeInfo);
    sub_1C32C20(&UserEventAlloutBattleMaster_ClearSvtInfo_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_1C32C20(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_object__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_object__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtEquipInfo__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_object__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtEquipInfo___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtEquipInfo__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_List_object__TypeInfo);
    sub_1C32C20(&StringLiteral_21189/*"lc"*/);
    sub_1C32C20(&StringLiteral_18786/*"ec"*/);
    sub_1C32C20(&StringLiteral_23861/*"svtEqs"*/);
    sub_1C32C20(&StringLiteral_23864/*"svtId"*/);
    sub_1C32C20(&StringLiteral_20251/*"id"*/);
    sub_1C32C20(&StringLiteral_20281/*"ilc"*/);
    sub_1C32C20(&StringLiteral_21367/*"lv"*/);
    byte_4C38772 = 1;
  }
  memset(&v57, 0, sizeof(v57));
  value = 0;
  memset(&v55, 0, sizeof(v55));
  v4 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo___ctor__);
  if ( !deckList )
    sub_1C32E7C(v5);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v54,
    deckList,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_object__GetEnumerator__);
  v57 = v54;
  while ( 1 )
  {
    if ( !System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v57,
            (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_object__MoveNext__) )
    {
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v57,
        (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
      return (System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__o *)v4;
    }
    current = v57.fields._current;
    if ( v57.fields._current )
    {
      naturalAligment = System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.naturalAligment;
      if ( v57.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (System_Collections_Generic_Dictionary_string__object__c *)v57.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
      {
        sub_1C3313C(v57.fields._current);
LABEL_42:
        sub_1C32E7C(DicToInt);
      }
    }
    v8 = sub_1C32E6C(UserEventAlloutBattleMaster_ClearSvtInfo_TypeInfo);
    System_Object___ctor((Il2CppObject *)v8, 0);
    DicToInt = (UserEventAlloutBattleMaster_o *)UserEventAlloutBattleMaster__GetDicToInt(
                                                  v9,
                                                  (System_Collections_Generic_Dictionary_string__object__o *)current,
                                                  (System_String_o *)StringLiteral_20251/*"id"*/,
                                                  v10);
    if ( !v8 )
      goto LABEL_42;
    *(_DWORD *)(v8 + 16) = (_DWORD)DicToInt;
    v13 = (UserEventAlloutBattleMaster_o *)UserEventAlloutBattleMaster__GetDicToInt(
                                             DicToInt,
                                             (System_Collections_Generic_Dictionary_string__object__o *)current,
                                             (System_String_o *)StringLiteral_23864/*"svtId"*/,
                                             v12);
    *(_DWORD *)(v8 + 20) = (_DWORD)v13;
    v15 = (UserEventAlloutBattleMaster_o *)UserEventAlloutBattleMaster__GetDicToInt(
                                             v13,
                                             (System_Collections_Generic_Dictionary_string__object__o *)current,
                                             (System_String_o *)StringLiteral_21367/*"lv"*/,
                                             v14);
    *(_DWORD *)(v8 + 24) = (_DWORD)v15;
    v17 = (UserEventAlloutBattleMaster_o *)UserEventAlloutBattleMaster__GetDicToInt(
                                             v15,
                                             (System_Collections_Generic_Dictionary_string__object__o *)current,
                                             (System_String_o *)StringLiteral_21189/*"lc"*/,
                                             v16);
    *(_DWORD *)(v8 + 28) = (_DWORD)v17;
    v19 = (UserEventAlloutBattleMaster_o *)UserEventAlloutBattleMaster__GetDicToInt(
                                             v17,
                                             (System_Collections_Generic_Dictionary_string__object__o *)current,
                                             (System_String_o *)StringLiteral_20281/*"ilc"*/,
                                             v18);
    *(_DWORD *)(v8 + 32) = (_DWORD)v19;
    *(_DWORD *)(v8 + 36) = UserEventAlloutBattleMaster__GetDicToInt(
                             v19,
                             (System_Collections_Generic_Dictionary_string__object__o *)current,
                             (System_String_o *)StringLiteral_18786/*"ec"*/,
                             v20);
    v21 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtEquipInfo__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v21,
      (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtEquipInfo___ctor__);
    *(_QWORD *)(v8 + 40) = v21;
    v22 = (System_Collections_Generic_List_object__o **)(v8 + 40);
    sub_1C32BC4((CGThumbnailListItem_o *)(v8 + 40), (int32_t)v21, v23, v24);
    if ( !current )
      sub_1C32E7C(v25);
    v26 = System_Collections_Generic_Dictionary_object__object___TryGetValue(
            (System_Collections_Generic_Dictionary_object__object__o *)current,
            (Il2CppObject *)StringLiteral_23861/*"svtEqs"*/,
            &value,
            (const MethodInfo_345A5D4 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    if ( v26 )
      break;
LABEL_27:
    if ( !v4 )
      sub_1C32E7C(v26);
    items = v4->fields._items;
    v45 = Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__Add__;
    ++v4->fields._version;
    if ( !items )
      sub_1C32E7C(v26);
    size = v4->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v4,
        (Il2CppObject *)v8,
        *(const MethodInfo_37987BC **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
    }
    else
    {
      v47 = &items->obj.klass + size;
      v4->fields._size = size + 1;
      v47[4] = (Il2CppClass *)v8;
      sub_1C32BC4((CGThumbnailListItem_o *)(v47 + 4), v8, v27, v28);
    }
  }
  if ( !value
    || (v29 = System_Collections_Generic_List_object__TypeInfo->_2.naturalAligment,
        value->klass->_2.naturalAligment < (unsigned int)v29)
    || (System_Collections_Generic_List_object__c *)value->klass->_2.typeHierarchy[v29 - 1] != System_Collections_Generic_List_object__TypeInfo )
  {
    sub_1C32E7C(v26);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v54,
    (System_Collections_Generic_List_object__o *)value,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_object__GetEnumerator__);
  v55 = v54;
  while ( 1 )
  {
    if ( !System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v55,
            (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_object__MoveNext__) )
    {
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v55,
        (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
      goto LABEL_27;
    }
    v30 = v55.fields._current;
    if ( v55.fields._current )
    {
      v31 = System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.naturalAligment;
      if ( v55.fields._current->klass->_2.naturalAligment < (unsigned int)v31
        || (System_Collections_Generic_Dictionary_string__object__c *)v55.fields._current->klass->_2.typeHierarchy[v31 - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
      {
        break;
      }
    }
    v32 = sub_1C32E6C(UserEventAlloutBattleMaster_ClearSvtEquipInfo_TypeInfo);
    System_Object___ctor((Il2CppObject *)v32, 0);
    v35 = (UserEventAlloutBattleMaster_o *)UserEventAlloutBattleMaster__GetDicToInt(
                                             v33,
                                             (System_Collections_Generic_Dictionary_string__object__o *)v30,
                                             (System_String_o *)StringLiteral_23864/*"svtId"*/,
                                             v34);
    if ( !v32 )
      sub_1C32E7C(v35);
    *(_DWORD *)(v32 + 16) = (_DWORD)v35;
    *(_DWORD *)(v32 + 20) = UserEventAlloutBattleMaster__GetDicToInt(
                              v35,
                              (System_Collections_Generic_Dictionary_string__object__o *)v30,
                              (System_String_o *)StringLiteral_21189/*"lc"*/,
                              v36);
    v39 = *v22;
    if ( !*v22 )
      sub_1C32E7C(0);
    v40 = v39->fields._items;
    v41 = Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtEquipInfo__Add__;
    ++v39->fields._version;
    if ( !v40 )
      sub_1C32E7C(v39);
    v42 = v39->fields._size;
    if ( (unsigned int)v42 >= LODWORD(v40->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v39,
        (Il2CppObject *)v32,
        *(const MethodInfo_37987BC **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
    }
    else
    {
      v43 = &v40->obj.klass + v42;
      v39->fields._size = v42 + 1;
      v43[4] = (Il2CppClass *)v32;
      sub_1C32BC4((CGThumbnailListItem_o *)(v43 + 4), v32, v37, v38);
    }
  }
  sub_1C3313C(v55.fields._current);
  v50 = v49;
  v52 = v51;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v55,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
  if ( v22 )
    sub_1C32E74(v22);
  if ( v50 != 1 )
  {
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v57,
      (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
    sub_1D1BD54();
  }
  v53 = *(_QWORD *)__cxa_begin_catch(v52);
  __cxa_end_catch();
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v57,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
  if ( v53 )
    sub_1C32E74(v53);
  return (System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__o *)v4;
}


System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__o *UserEventAlloutBattleMaster__GetClearDeckInfo(
        UserEventAlloutBattleMaster_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  System_Collections_Generic_IEnumerator_T__o *v7; // x19
  System_Collections_Generic_List_object__o *v8; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v10; // x9
  int *p_offset; // x10
  __int64 v12; // x0
  System_Collections_Generic_IEnumerator_T__c *v13; // x8
  __int64 v14; // x9
  int *v15; // x10
  __int64 v16; // x0
  __int64 v17; // x0
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o current; // kr00_16
  UserEventAlloutBattleMaster_o *v19; // x0
  const MethodInfo *v20; // x2
  __int64 naturalAligment; // x10
  System_Collections_Generic_List_object__o *v22; // x1
  System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__o *v23; // x0
  int v24; // w23
  System_Collections_Generic_IEnumerator_T__c *v25; // x8
  __int64 v26; // x9
  int *v27; // x10
  __int64 v28; // x0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v30; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v31; // [xsp+30h] [xbp-90h] BYREF

  if ( (byte_4C38771 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_UserEventAlloutBattleEntity__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_UserEventAlloutBattleEntity__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Current__);
    sub_1C32C20(&System_IDisposable_TypeInfo);
    sub_1C32C20(&System_Collections_Generic_IEnumerator_UserEventAlloutBattleEntity__TypeInfo);
    sub_1C32C20(&System_Collections_IEnumerator_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Key__);
    sub_1C32C20(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__);
    sub_1C32C20(&Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_List_object__TypeInfo);
    byte_4C38771 = 1;
  }
  memset(&v31, 0, sizeof(v31));
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_49;
  if ( System_Collections_ObjectModel_Collection_object___get_Count(
         list,
         (const MethodInfo_332FCA8 *)Method_System_Collections_ObjectModel_Collection_UserEventAlloutBattleEntity__get_Count__) <= 0 )
  {
LABEL_45:
    v8 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v8,
      (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo___ctor__);
    return (System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__o *)v8;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_49:
    sub_1C32E7C(list);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3330280 *)Method_System_Collections_ObjectModel_Collection_UserEventAlloutBattleEntity__GetEnumerator__);
  v7 = Enumerator;
  v8 = 0;
  while ( 1 )
  {
    if ( !v7 )
      sub_1C32E7C(Enumerator);
    klass = v7->klass;
    v10 = *(unsigned __int16 *)&v7->klass->_2.rank;
    if ( *(_WORD *)&v7->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v10;
        p_offset += 4;
        if ( !v10 )
          goto LABEL_12;
      }
      v12 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_12:
      v12 = sub_1C83438(v7, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v12)(
            v7,
            *(_QWORD *)(v12 + 8))
        & 1) == 0 )
      break;
    v13 = v7->klass;
    v14 = *(unsigned __int16 *)&v7->klass->_2.rank;
    if ( *(_WORD *)&v7->klass->_2.rank )
    {
      v15 = &v13->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_UserEventAlloutBattleEntity__c **)v15 - 1) != System_Collections_Generic_IEnumerator_UserEventAlloutBattleEntity__TypeInfo )
      {
        --v14;
        v15 += 4;
        if ( !v14 )
          goto LABEL_19;
      }
      v16 = (__int64)&v13->vtable[*v15];
    }
    else
    {
LABEL_19:
      v16 = sub_1C83438(v7, System_Collections_Generic_IEnumerator_UserEventAlloutBattleEntity__TypeInfo, 0);
    }
    v17 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v16)(
            v7,
            *(_QWORD *)(v16 + 8));
    if ( !v17 )
      sub_1C32E7C(0);
    Enumerator = *(System_Collections_Generic_IEnumerator_T__o **)(v17 + 32);
    if ( Enumerator )
    {
      System_Collections_Generic_Dictionary_object__object___GetEnumerator(
        &v30,
        (System_Collections_Generic_Dictionary_object__object__o *)Enumerator,
        (const MethodInfo_34591F8 *)Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
      v31 = v30;
      while ( System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
                &v31,
                (const MethodInfo_3555874 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__) )
      {
        current = v31.fields._current;
        v19 = (UserEventAlloutBattleMaster_o *)System_Int32__Parse((System_String_o *)v31.fields._current.fields.key, 0);
        if ( (_DWORD)v19 == questId )
        {
          if ( current.fields.value
            && (naturalAligment = System_Collections_Generic_List_object__TypeInfo->_2.naturalAligment,
                current.fields.value->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
          {
            v22 = (System_Collections_Generic_List_object__c *)current.fields.value->klass->_2.typeHierarchy[naturalAligment - 1] == System_Collections_Generic_List_object__TypeInfo
                ? (System_Collections_Generic_List_object__o *)current.fields.value
                : 0LL;
          }
          else
          {
            v22 = 0;
          }
          v23 = UserEventAlloutBattleMaster__ConvertClearSvtInfo(v19, v22, v20);
          if ( v23 )
          {
            v24 = 7;
            v8 = (System_Collections_Generic_List_object__o *)v23;
            goto LABEL_35;
          }
        }
      }
      v24 = 3;
LABEL_35:
      System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
        &v31,
        (const MethodInfo_3555994 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
      if ( v24 != 3 )
        goto LABEL_38;
    }
  }
  v24 = 8;
LABEL_38:
  v25 = v7->klass;
  v26 = *(unsigned __int16 *)&v7->klass->_2.rank;
  if ( *(_WORD *)&v7->klass->_2.rank )
  {
    v27 = &v25->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v27 - 1) != System_IDisposable_TypeInfo )
    {
      --v26;
      v27 += 4;
      if ( !v26 )
        goto LABEL_42;
    }
    v28 = (__int64)&v25->vtable[*v27];
  }
  else
  {
LABEL_42:
    v28 = sub_1C83438(v7, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v28)(v7, *(_QWORD *)(v28 + 8));
  if ( (v24 | 8) == 8 )
    goto LABEL_45;
  return (System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__o *)v8;
}


int32_t UserEventAlloutBattleMaster__GetDicToInt(
        UserEventAlloutBattleMaster_o *this,
        System_Collections_Generic_Dictionary_string__object__o *dic,
        System_String_o *key,
        const MethodInfo *method)
{
  System_String_o *v6; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C38773 & 1) == 0 )
  {
    this = (UserEventAlloutBattleMaster_o *)sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    byte_4C38773 = 1;
  }
  value = 0;
  if ( !dic )
    goto LABEL_9;
  if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
         (System_Collections_Generic_Dictionary_object__object__o *)dic,
         (Il2CppObject *)key,
         &value,
         (const MethodInfo_345A5D4 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
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
    sub_1C32E7C(this);
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

  if ( (byte_4C3876E & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_UserEventAlloutBattleMaster__UserEventAlloutBattleEntity__string__GetEntity__);
    byte_4C3876E = 1;
  }
  PK = (Il2CppObject *)UserEventAlloutBattleEntity__CreatePK(
                         userId,
                         eventId,
                         alloutBattleId,
                         *(const MethodInfo **)&alloutBattleId);
  return (UserEventAlloutBattleEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                            PK,
                                            (const MethodInfo_339B2F0 *)Method_DataMasterBase_UserEventAlloutBattleMaster__UserEventAlloutBattleEntity__string__GetEntity__);
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
  System_Collections_Generic_Dictionary_object__object__o *clearDeckInfoDic; // x0
  char v12; // w23
  _BOOL8 v13; // x0
  __int64 naturalAligment; // x11
  _BOOL8 v15; // x0
  const MethodInfo *v16; // x3
  __int64 v17; // x10
  int v18; // w24
  int v19; // w1
  int v20; // w19
  void *v21; // x0
  void *v22; // x24
  __int64 v23; // x19
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v25; // [xsp+8h] [xbp-D8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+30h] [xbp-B0h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v27; // [xsp+50h] [xbp-90h] BYREF

  if ( (byte_4C38770 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
    sub_1C32C20(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_object__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_object__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__);
    sub_1C32C20(&Method_System_Collections_Generic_List_object__GetEnumerator__);
    sub_1C32C20(&System_Collections_Generic_List_object__TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&StringLiteral_23864/*"svtId"*/);
    byte_4C38770 = 1;
  }
  memset(&v27, 0, sizeof(v27));
  memset(&v26, 0, sizeof(v26));
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C31812 )
  {
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C31812 = 1;
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
      sub_1C32E7C(0);
    System_Collections_Generic_Dictionary_object__object___GetEnumerator(
      &v25,
      clearDeckInfoDic,
      (const MethodInfo_34591F8 *)Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
    v12 = 0;
    v27 = v25;
    while ( 2 )
    {
      v13 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
              &v27,
              (const MethodInfo_3555874 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__);
      if ( v13 )
      {
        if ( !v27.fields._current.fields.value
          || (naturalAligment = System_Collections_Generic_List_object__TypeInfo->_2.naturalAligment,
              v27.fields._current.fields.value->klass->_2.naturalAligment < (unsigned int)naturalAligment)
          || (System_Collections_Generic_List_object__c *)v27.fields._current.fields.value->klass->_2.typeHierarchy[naturalAligment - 1] != System_Collections_Generic_List_object__TypeInfo )
        {
          sub_1C32E7C(v13);
        }
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v25,
          (System_Collections_Generic_List_object__o *)v27.fields._current.fields.value,
          (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_object__GetEnumerator__);
        *(_OWORD *)&v26.fields._list = *(_OWORD *)&v25.fields._dictionary;
        v26.fields._current = v25.fields._current.fields.key;
        while ( 1 )
        {
          v15 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v26,
                  (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_object__MoveNext__);
          if ( !v15 )
            break;
          if ( v26.fields._current )
          {
            v17 = System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.naturalAligment;
            if ( v26.fields._current->klass->_2.naturalAligment < (unsigned int)v17
              || (System_Collections_Generic_Dictionary_string__object__c *)v26.fields._current->klass->_2.typeHierarchy[v17 - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
            {
              sub_1C3313C(v26.fields._current);
              v20 = v19;
              v22 = v21;
              System_Collections_Generic_List_Enumerator_object___Dispose(
                &v26,
                (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
              if ( this )
                sub_1C32E74(this);
              if ( v20 != 1 )
              {
                System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
                  &v27,
                  (const MethodInfo_3555994 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
                sub_1D1BD54();
              }
              v23 = *(_QWORD *)__cxa_begin_catch(v22);
              __cxa_end_catch();
              System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
                &v27,
                (const MethodInfo_3555994 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
              if ( v23 )
                sub_1C32E74(v23);
              v18 = 0;
              goto LABEL_29;
            }
          }
          if ( UserEventAlloutBattleMaster__GetDicToInt(
                 (UserEventAlloutBattleMaster_o *)v15,
                 (System_Collections_Generic_Dictionary_string__object__o *)v26.fields._current,
                 (System_String_o *)StringLiteral_23864/*"svtId"*/,
                 v16) == svtId )
          {
            this = 0;
            v12 = 1;
            v18 = 7;
            goto LABEL_24;
          }
        }
        this = 0;
        v18 = 3;
LABEL_24:
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v26,
          (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
        if ( v18 == 3 )
          continue;
      }
      else
      {
        v18 = 8;
      }
      break;
    }
    System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
      &v27,
      (const MethodInfo_3555994 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
LABEL_29:
    LOBYTE(Entity) = v12 & (v18 == 7);
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

  if ( (byte_4C3876F & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_UserEventAlloutBattleMaster__UserEventAlloutBattleEntity__string__TryGetEntity__);
    byte_4C3876F = 1;
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
           (const MethodInfo_339B33C *)Method_DataMasterBase_UserEventAlloutBattleMaster__UserEventAlloutBattleEntity__string__TryGetEntity__);
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