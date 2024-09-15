void __fastcall UserEventAlloutBattleMaster___ctor(UserEventAlloutBattleMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A2EB41 & 1) == 0 )
  {
    sub_1B761C0(
      &Method_DataMasterBase_UserEventAlloutBattleMaster__UserEventAlloutBattleEntity__string___ctor__,
      method);
    byte_4A2EB41 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    407,
    (const MethodInfo_30FFA98 *)Method_DataMasterBase_UserEventAlloutBattleMaster__UserEventAlloutBattleEntity__string___ctor__);
}


System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__o *__fastcall UserEventAlloutBattleMaster__ConvertClearSvtInfo(
        UserEventAlloutBattleMaster_o *this,
        System_Collections_Generic_List_object__o *deckList,
        const MethodInfo *method)
{
  __int64 v4; // x1
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
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  System_Collections_Generic_List_object__o *v25; // x19
  __int64 v26; // x0
  __int64 v27; // x1
  Il2CppObject *current; // x22
  __int64 methodPtr_low; // x9
  __int64 v30; // x20
  UserEventAlloutBattleMaster_o *v31; // x0
  const MethodInfo *v32; // x3
  UserEventAlloutBattleMaster_o *DicToInt; // x0
  __int64 v34; // x1
  const MethodInfo *v35; // x3
  UserEventAlloutBattleMaster_o *v36; // x0
  const MethodInfo *v37; // x3
  UserEventAlloutBattleMaster_o *v38; // x0
  const MethodInfo *v39; // x3
  UserEventAlloutBattleMaster_o *v40; // x0
  const MethodInfo *v41; // x3
  UserEventAlloutBattleMaster_o *v42; // x0
  const MethodInfo *v43; // x3
  System_Collections_Generic_List_object__o *v44; // x23
  System_Collections_Generic_List_object__o **v45; // x21
  int32_t v46; // w2
  int32_t v47; // w3
  __int64 v48; // x0
  __int64 v49; // x1
  _BOOL8 v50; // x0
  __int64 v51; // x1
  int32_t v52; // w2
  int32_t v53; // w3
  __int64 v54; // x11
  Il2CppObject *v55; // x23
  __int64 v56; // x9
  __int64 v57; // x22
  UserEventAlloutBattleMaster_o *v58; // x0
  const MethodInfo *v59; // x3
  UserEventAlloutBattleMaster_o *v60; // x0
  __int64 v61; // x1
  const MethodInfo *v62; // x3
  __int64 v63; // x1
  int32_t v64; // w2
  int32_t v65; // w3
  System_Collections_Generic_List_object__o *v66; // x0
  struct System_Object_array *v67; // x8
  _QWORD *v68; // x9
  __int64 v69; // x10
  Il2CppClass **v70; // x8
  struct System_Object_array *items; // x8
  _QWORD *v72; // x9
  __int64 size; // x10
  Il2CppClass **v74; // x0
  int v76; // w1
  int v77; // w20
  void *v78; // x0
  void *v79; // x22
  __int64 v80; // x20
  System_Collections_Generic_List_Enumerator_object__o v81; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v82; // [xsp+20h] [xbp-A0h] BYREF
  Il2CppObject *value; // [xsp+38h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v84; // [xsp+40h] [xbp-80h] BYREF

  if ( (byte_4A2EB46 & 1) == 0 )
  {
    sub_1B761C0(&UserEventAlloutBattleMaster_ClearSvtEquipInfo_TypeInfo, deckList);
    sub_1B761C0(&UserEventAlloutBattleMaster_ClearSvtInfo_TypeInfo, v4);
    sub_1B761C0(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v5);
    sub_1B761C0(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v6);
    sub_1B761C0(&Method_System_Collections_Generic_List_Enumerator_object__Dispose__, v7);
    sub_1B761C0(&Method_System_Collections_Generic_List_Enumerator_object__MoveNext__, v8);
    sub_1B761C0(&Method_System_Collections_Generic_List_Enumerator_object__get_Current__, v9);
    sub_1B761C0(&Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtEquipInfo__Add__, v10);
    sub_1B761C0(&Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__Add__, v11);
    sub_1B761C0(&Method_System_Collections_Generic_List_object__GetEnumerator__, v12);
    sub_1B761C0(&Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtEquipInfo___ctor__, v13);
    sub_1B761C0(&Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo___ctor__, v14);
    sub_1B761C0(&System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__TypeInfo, v15);
    sub_1B761C0(&System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtEquipInfo__TypeInfo, v16);
    sub_1B761C0(&System_Collections_Generic_List_object__TypeInfo, v17);
    sub_1B761C0(&StringLiteral_21054/*"lc"*/, v18);
    sub_1B761C0(&StringLiteral_18784/*"ec"*/, v19);
    sub_1B761C0(&StringLiteral_23692/*"svtEqs"*/, v20);
    sub_1B761C0(&StringLiteral_23695/*"svtId"*/, v21);
    sub_1B761C0(&StringLiteral_20193/*"id"*/, v22);
    sub_1B761C0(&StringLiteral_20225/*"ilc"*/, v23);
    sub_1B761C0(&StringLiteral_21224/*"lv"*/, v24);
    byte_4A2EB46 = 1;
  }
  memset(&v84, 0, sizeof(v84));
  value = 0LL;
  memset(&v82, 0, sizeof(v82));
  v25 = (System_Collections_Generic_List_object__o *)sub_1B7640C(System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v25,
    (const MethodInfo_34D6DA0 *)Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo___ctor__);
  if ( !deckList )
    sub_1B7641C(v26, v27);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v81,
    deckList,
    (const MethodInfo_34D80CC *)Method_System_Collections_Generic_List_object__GetEnumerator__);
  v84 = v81;
  while ( 1 )
  {
    if ( !System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v84,
            (const MethodInfo_32568D8 *)Method_System_Collections_Generic_List_Enumerator_object__MoveNext__) )
    {
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v84,
        (const MethodInfo_32568D4 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
      return (System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__o *)v25;
    }
    current = v84.fields._current;
    if ( v84.fields._current )
    {
      methodPtr_low = LOBYTE(System_Collections_Generic_Dictionary_string__object__TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v84.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
        || (System_Collections_Generic_Dictionary_string__object__c *)v84.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
      {
        sub_1B766DC(v84.fields._current);
LABEL_42:
        sub_1B7641C(DicToInt, v34);
      }
    }
    v30 = sub_1B7640C(UserEventAlloutBattleMaster_ClearSvtInfo_TypeInfo);
    System_Object___ctor((Il2CppObject *)v30, 0LL);
    DicToInt = (UserEventAlloutBattleMaster_o *)UserEventAlloutBattleMaster__GetDicToInt(
                                                  v31,
                                                  (System_Collections_Generic_Dictionary_string__object__o *)current,
                                                  (System_String_o *)StringLiteral_20193/*"id"*/,
                                                  v32);
    if ( !v30 )
      goto LABEL_42;
    *(_DWORD *)(v30 + 16) = (_DWORD)DicToInt;
    v36 = (UserEventAlloutBattleMaster_o *)UserEventAlloutBattleMaster__GetDicToInt(
                                             DicToInt,
                                             (System_Collections_Generic_Dictionary_string__object__o *)current,
                                             (System_String_o *)StringLiteral_23695/*"svtId"*/,
                                             v35);
    *(_DWORD *)(v30 + 20) = (_DWORD)v36;
    v38 = (UserEventAlloutBattleMaster_o *)UserEventAlloutBattleMaster__GetDicToInt(
                                             v36,
                                             (System_Collections_Generic_Dictionary_string__object__o *)current,
                                             (System_String_o *)StringLiteral_21224/*"lv"*/,
                                             v37);
    *(_DWORD *)(v30 + 24) = (_DWORD)v38;
    v40 = (UserEventAlloutBattleMaster_o *)UserEventAlloutBattleMaster__GetDicToInt(
                                             v38,
                                             (System_Collections_Generic_Dictionary_string__object__o *)current,
                                             (System_String_o *)StringLiteral_21054/*"lc"*/,
                                             v39);
    *(_DWORD *)(v30 + 28) = (_DWORD)v40;
    v42 = (UserEventAlloutBattleMaster_o *)UserEventAlloutBattleMaster__GetDicToInt(
                                             v40,
                                             (System_Collections_Generic_Dictionary_string__object__o *)current,
                                             (System_String_o *)StringLiteral_20225/*"ilc"*/,
                                             v41);
    *(_DWORD *)(v30 + 32) = (_DWORD)v42;
    *(_DWORD *)(v30 + 36) = UserEventAlloutBattleMaster__GetDicToInt(
                              v42,
                              (System_Collections_Generic_Dictionary_string__object__o *)current,
                              (System_String_o *)StringLiteral_18784/*"ec"*/,
                              v43);
    v44 = (System_Collections_Generic_List_object__o *)sub_1B7640C(System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtEquipInfo__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v44,
      (const MethodInfo_34D6DA0 *)Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtEquipInfo___ctor__);
    *(_QWORD *)(v30 + 40) = v44;
    v45 = (System_Collections_Generic_List_object__o **)(v30 + 40);
    sub_1B76164((ServantStatusBattleListViewItem_o *)(v30 + 40), (int32_t)v44, v46, v47);
    if ( !current )
      sub_1B7641C(v48, v49);
    v50 = System_Collections_Generic_Dictionary_object__object___TryGetValue(
            (System_Collections_Generic_Dictionary_object__object__o *)current,
            (Il2CppObject *)StringLiteral_23692/*"svtEqs"*/,
            &value,
            (const MethodInfo_31A753C *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    if ( v50 )
      break;
LABEL_27:
    if ( !v25 )
      sub_1B7641C(v50, v51);
    items = v25->fields._items;
    v72 = Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__Add__;
    ++v25->fields._version;
    if ( !items )
      sub_1B7641C(v50, v51);
    size = v25->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v25,
        (Il2CppObject *)v30,
        *(const MethodInfo_34D75D4 **)(*(_QWORD *)(v72[4] + 192LL) + 112LL));
    }
    else
    {
      v74 = &items->obj.klass + size;
      v25->fields._size = size + 1;
      v74[4] = (Il2CppClass *)v30;
      sub_1B76164((ServantStatusBattleListViewItem_o *)(v74 + 4), v30, v52, v53);
    }
  }
  if ( !value
    || (v54 = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(value->klass->vtable[0].methodPtr) < (unsigned int)v54)
    || (System_Collections_Generic_List_object__c *)value->klass->_2.typeHierarchy[v54 - 1] != System_Collections_Generic_List_object__TypeInfo )
  {
    sub_1B7641C(v50, v51);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v81,
    (System_Collections_Generic_List_object__o *)value,
    (const MethodInfo_34D80CC *)Method_System_Collections_Generic_List_object__GetEnumerator__);
  v82 = v81;
  while ( 1 )
  {
    if ( !System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v82,
            (const MethodInfo_32568D8 *)Method_System_Collections_Generic_List_Enumerator_object__MoveNext__) )
    {
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v82,
        (const MethodInfo_32568D4 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
      goto LABEL_27;
    }
    v55 = v82.fields._current;
    if ( v82.fields._current )
    {
      v56 = LOBYTE(System_Collections_Generic_Dictionary_string__object__TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v82.fields._current->klass->vtable[0].methodPtr) < (unsigned int)v56
        || (System_Collections_Generic_Dictionary_string__object__c *)v82.fields._current->klass->_2.typeHierarchy[v56 - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
      {
        break;
      }
    }
    v57 = sub_1B7640C(UserEventAlloutBattleMaster_ClearSvtEquipInfo_TypeInfo);
    System_Object___ctor((Il2CppObject *)v57, 0LL);
    v60 = (UserEventAlloutBattleMaster_o *)UserEventAlloutBattleMaster__GetDicToInt(
                                             v58,
                                             (System_Collections_Generic_Dictionary_string__object__o *)v55,
                                             (System_String_o *)StringLiteral_23695/*"svtId"*/,
                                             v59);
    if ( !v57 )
      sub_1B7641C(v60, v61);
    *(_DWORD *)(v57 + 16) = (_DWORD)v60;
    *(_DWORD *)(v57 + 20) = UserEventAlloutBattleMaster__GetDicToInt(
                              v60,
                              (System_Collections_Generic_Dictionary_string__object__o *)v55,
                              (System_String_o *)StringLiteral_21054/*"lc"*/,
                              v62);
    v66 = *v45;
    if ( !*v45 )
      sub_1B7641C(0LL, v63);
    v67 = v66->fields._items;
    v68 = Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtEquipInfo__Add__;
    ++v66->fields._version;
    if ( !v67 )
      sub_1B7641C(v66, v63);
    v69 = v66->fields._size;
    if ( (unsigned int)v69 >= v67->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v66,
        (Il2CppObject *)v57,
        *(const MethodInfo_34D75D4 **)(*(_QWORD *)(v68[4] + 192LL) + 112LL));
    }
    else
    {
      v70 = &v67->obj.klass + v69;
      v66->fields._size = v69 + 1;
      v70[4] = (Il2CppClass *)v57;
      sub_1B76164((ServantStatusBattleListViewItem_o *)(v70 + 4), v57, v64, v65);
    }
  }
  sub_1B766DC(v82.fields._current);
  v77 = v76;
  v79 = v78;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v82,
    (const MethodInfo_32568D4 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
  if ( v45 )
    sub_1B76414(v45);
  if ( v77 != 1 )
  {
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v84,
      (const MethodInfo_32568D4 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
    sub_1C60C50();
  }
  v80 = *(_QWORD *)__cxa_begin_catch(v79);
  __cxa_end_catch();
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v84,
    (const MethodInfo_32568D4 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
  if ( v80 )
    sub_1B76414(v80);
  return (System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__o *)v25;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__o *__fastcall UserEventAlloutBattleMaster__GetClearDeckInfo(
        UserEventAlloutBattleMaster_o *this,
        int32_t questId,
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
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  UserEventAlloutBattleEntity_c *v21; // x1
  System_Collections_Generic_IEnumerator_T__o *v22; // x19
  System_Collections_Generic_List_object__o *v23; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v25; // x9
  int *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v28; // x8
  __int64 v29; // x9
  int *v30; // x10
  __int64 v31; // x0
  _QWORD *v32; // x0
  __int64 v33; // x1
  __int64 methodPtr_low; // x9
  Il2CppObject *value; // x22
  UserEventAlloutBattleMaster_o *v36; // x0
  const MethodInfo *v37; // x2
  __int64 v38; // x10
  System_Collections_Generic_List_object__o *v39; // x1
  System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__o *v40; // x0
  int v41; // w23
  System_Collections_Generic_IEnumerator_T__c *v42; // x8
  __int64 v43; // x9
  int *v44; // x10
  __int64 v45; // x0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v47; // [xsp+18h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v48; // [xsp+40h] [xbp-90h] BYREF

  if ( (byte_4A2EB45 & 1) == 0 )
  {
    sub_1B761C0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&questId);
    sub_1B761C0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v5);
    sub_1B761C0(&Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__, v6);
    sub_1B761C0(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__, v7);
    sub_1B761C0(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__, v8);
    sub_1B761C0(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Current__, v9);
    sub_1B761C0(&System_IDisposable_TypeInfo, v10);
    sub_1B761C0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v11);
    sub_1B761C0(&System_Collections_IEnumerator_TypeInfo, v12);
    sub_1B761C0(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Key__, v13);
    sub_1B761C0(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__, v14);
    sub_1B761C0(&Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo___ctor__, v15);
    sub_1B761C0(&System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__TypeInfo, v16);
    sub_1B761C0(&System_Collections_Generic_List_object__TypeInfo, v17);
    sub_1B761C0(&UserEventAlloutBattleEntity_TypeInfo, v18);
    byte_4A2EB45 = 1;
  }
  memset(&v48, 0, sizeof(v48));
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_52;
  if ( System_Collections_ObjectModel_Collection_object___get_Count(
         list,
         (const MethodInfo_309CAC8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) <= 0 )
  {
LABEL_47:
    v23 = (System_Collections_Generic_List_object__o *)sub_1B7640C(System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v23,
      (const MethodInfo_34D6DA0 *)Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo___ctor__);
    return (System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__o *)v23;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_52:
    sub_1B7641C(list, *(_QWORD *)&questId);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_309D0A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  v22 = Enumerator;
  v23 = 0LL;
  while ( 1 )
  {
    if ( !v22 )
      goto LABEL_50;
    klass = v22->klass;
    v25 = *(unsigned __int16 *)(&v22->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v22->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v25;
        p_offset += 4;
        if ( !v25 )
          goto LABEL_12;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_12:
      p_method = sub_1BC81A0(v22, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            v22,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v28 = v22->klass;
    v29 = *(unsigned __int16 *)(&v22->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v22->klass->_2.bitflags2 + 3) )
    {
      v30 = &v28->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v30 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v29;
        v30 += 4;
        if ( !v29 )
          goto LABEL_19;
      }
      v31 = (__int64)&v28->vtable[*v30].method;
    }
    else
    {
LABEL_19:
      v31 = sub_1BC81A0(v22, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v32 = (_QWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v31)(
                      v22,
                      *(_QWORD *)(v31 + 8));
    if ( !v32 )
      sub_1B7641C(0LL, v33);
    v21 = UserEventAlloutBattleEntity_TypeInfo;
    methodPtr_low = LOBYTE(UserEventAlloutBattleEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*v32 + 304LL) < (unsigned int)methodPtr_low
      || *(UserEventAlloutBattleEntity_c **)(*(_QWORD *)(*v32 + 200LL) + 8 * methodPtr_low - 8) != UserEventAlloutBattleEntity_TypeInfo )
    {
      sub_1B766DC(v32);
LABEL_50:
      sub_1B7641C(Enumerator, v21);
    }
    Enumerator = (System_Collections_Generic_IEnumerator_T__o *)v32[4];
    if ( Enumerator )
    {
      System_Collections_Generic_Dictionary_object__object___GetEnumerator(
        &v47,
        (System_Collections_Generic_Dictionary_object__object__o *)Enumerator,
        (const MethodInfo_31A6160 *)Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
      v48 = v47;
      while ( System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
                &v48,
                (const MethodInfo_32A1D28 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__) )
      {
        value = v48.fields._current.fields.value;
        v36 = (UserEventAlloutBattleMaster_o *)System_Int32__Parse(
                                                 (System_String_o *)v48.fields._current.fields.key,
                                                 0LL);
        if ( (_DWORD)v36 == questId )
        {
          if ( value
            && (v38 = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr),
                LOBYTE(value->klass->vtable[0].methodPtr) >= (unsigned int)v38) )
          {
            v39 = (System_Collections_Generic_List_object__c *)value->klass->_2.typeHierarchy[v38 - 1] == System_Collections_Generic_List_object__TypeInfo
                ? (System_Collections_Generic_List_object__o *)value
                : 0LL;
          }
          else
          {
            v39 = 0LL;
          }
          v40 = UserEventAlloutBattleMaster__ConvertClearSvtInfo(v36, v39, v37);
          if ( v40 )
          {
            v41 = 7;
            v23 = (System_Collections_Generic_List_object__o *)v40;
            goto LABEL_37;
          }
        }
      }
      v41 = 3;
LABEL_37:
      System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
        &v48,
        (const MethodInfo_32A1E48 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
      if ( v41 != 3 )
        goto LABEL_40;
    }
  }
  v41 = 8;
LABEL_40:
  v42 = v22->klass;
  v43 = *(unsigned __int16 *)(&v22->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v22->klass->_2.bitflags2 + 3) )
  {
    v44 = &v42->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v44 - 1) != System_IDisposable_TypeInfo )
    {
      --v43;
      v44 += 4;
      if ( !v43 )
        goto LABEL_44;
    }
    v45 = (__int64)&v42->vtable[*v44].method;
  }
  else
  {
LABEL_44:
    v45 = sub_1BC81A0(v22, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v45)(v22, *(_QWORD *)(v45 + 8));
  if ( (v41 | 8) == 8 )
    goto LABEL_47;
  return (System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__o *)v23;
}


int32_t __fastcall UserEventAlloutBattleMaster__GetDicToInt(
        UserEventAlloutBattleMaster_o *this,
        System_Collections_Generic_Dictionary_string__object__o *dic,
        System_String_o *key,
        const MethodInfo *method)
{
  System_String_o *v6; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A2EB47 & 1) == 0 )
  {
    this = (UserEventAlloutBattleMaster_o *)sub_1B761C0(
                                              &Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__,
                                              dic);
    byte_4A2EB47 = 1;
  }
  value = 0LL;
  if ( !dic )
    goto LABEL_9;
  if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
         (System_Collections_Generic_Dictionary_object__object__o *)dic,
         (Il2CppObject *)key,
         &value,
         (const MethodInfo_31A753C *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
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
    sub_1B7641C(this, dic);
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

  if ( (byte_4A2EB42 & 1) == 0 )
  {
    sub_1B761C0(
      &Method_DataMasterBase_UserEventAlloutBattleMaster__UserEventAlloutBattleEntity__string__GetEntity__,
      userId);
    byte_4A2EB42 = 1;
  }
  PK = (Il2CppObject *)UserEventAlloutBattleEntity__CreatePK(
                         userId,
                         eventId,
                         alloutBattleId,
                         *(const MethodInfo **)&alloutBattleId);
  return (UserEventAlloutBattleEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                            PK,
                                            (const MethodInfo_30FFAD8 *)Method_DataMasterBase_UserEventAlloutBattleMaster__UserEventAlloutBattleEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UserEventAlloutBattleMaster__IsAlreadyUsedServant(
        UserEventAlloutBattleMaster_o *this,
        int32_t svtId,
        int32_t eventId,
        int32_t alloutBattleId,
        const MethodInfo *method)
{
  __int64 v6; // x21
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  int64_t UserId; // x0
  const MethodInfo *v22; // x4
  UserEventAlloutBattleEntity_o *Entity; // x0
  __int64 v24; // x1
  System_Collections_Generic_Dictionary_object__object__o *clearDeckInfoDic; // x0
  char v26; // w22
  _BOOL8 v27; // x0
  __int64 v28; // x1
  __int64 methodPtr_low; // x11
  _BOOL8 v30; // x0
  const MethodInfo *v31; // x3
  __int64 v32; // x10
  int v33; // w23
  int v34; // w1
  int v35; // w23
  void *v36; // x0
  void *v37; // x19
  __int64 v38; // x20
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v40; // [xsp+8h] [xbp-D8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v41; // [xsp+30h] [xbp-B0h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v42; // [xsp+50h] [xbp-90h] BYREF

  v6 = (unsigned int)eventId;
  if ( (byte_4A2EB44 & 1) == 0 )
  {
    sub_1B761C0(&Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__, *(_QWORD *)&svtId);
    sub_1B761C0(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v9);
    sub_1B761C0(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__, v10);
    sub_1B761C0(&Method_System_Collections_Generic_List_Enumerator_object__Dispose__, v11);
    sub_1B761C0(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__, v12);
    sub_1B761C0(&Method_System_Collections_Generic_List_Enumerator_object__MoveNext__, v13);
    sub_1B761C0(&Method_System_Collections_Generic_List_Enumerator_object__get_Current__, v14);
    sub_1B761C0(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Current__, v15);
    sub_1B761C0(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__, v16);
    sub_1B761C0(&Method_System_Collections_Generic_List_object__GetEnumerator__, v17);
    sub_1B761C0(&System_Collections_Generic_List_object__TypeInfo, v18);
    sub_1B761C0(&NetworkManager_TypeInfo, v19);
    sub_1B761C0(&StringLiteral_23695/*"svtId"*/, v20);
    byte_4A2EB44 = 1;
  }
  memset(&v42, 0, sizeof(v42));
  memset(&v41, 0, sizeof(v41));
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  UserId = NetworkManager__get_UserId(0LL);
  Entity = UserEventAlloutBattleMaster__GetEntity(this, UserId, v6, alloutBattleId, v22);
  if ( Entity )
  {
    clearDeckInfoDic = (System_Collections_Generic_Dictionary_object__object__o *)Entity->fields.clearDeckInfoDic;
    if ( !clearDeckInfoDic )
      sub_1B7641C(0LL, v24);
    System_Collections_Generic_Dictionary_object__object___GetEnumerator(
      &v40,
      clearDeckInfoDic,
      (const MethodInfo_31A6160 *)Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
    v26 = 0;
    v42 = v40;
    while ( 2 )
    {
      v27 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
              &v42,
              (const MethodInfo_32A1D28 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__);
      if ( v27 )
      {
        if ( !v42.fields._current.fields.value
          || (methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr),
              LOBYTE(v42.fields._current.fields.value->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low)
          || (System_Collections_Generic_List_object__c *)v42.fields._current.fields.value->klass->_2.typeHierarchy[methodPtr_low - 1] != System_Collections_Generic_List_object__TypeInfo )
        {
          sub_1B7641C(v27, v28);
        }
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v40,
          (System_Collections_Generic_List_object__o *)v42.fields._current.fields.value,
          (const MethodInfo_34D80CC *)Method_System_Collections_Generic_List_object__GetEnumerator__);
        *(_OWORD *)&v41.fields._list = *(_OWORD *)&v40.fields._dictionary;
        v41.fields._current = v40.fields._current.fields.key;
        while ( 1 )
        {
          v30 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v41,
                  (const MethodInfo_32568D8 *)Method_System_Collections_Generic_List_Enumerator_object__MoveNext__);
          if ( !v30 )
            break;
          if ( v41.fields._current )
          {
            v32 = LOBYTE(System_Collections_Generic_Dictionary_string__object__TypeInfo->vtable._0_Equals.methodPtr);
            if ( LOBYTE(v41.fields._current->klass->vtable[0].methodPtr) < (unsigned int)v32
              || (System_Collections_Generic_Dictionary_string__object__c *)v41.fields._current->klass->_2.typeHierarchy[v32 - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
            {
              sub_1B766DC(v41.fields._current);
              v35 = v34;
              v37 = v36;
              System_Collections_Generic_List_Enumerator_object___Dispose(
                &v41,
                (const MethodInfo_32568D4 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
              if ( v6 )
                sub_1B76414(v6);
              if ( v35 != 1 )
              {
                System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
                  &v42,
                  (const MethodInfo_32A1E48 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
                sub_1C60C50();
              }
              v38 = *(_QWORD *)__cxa_begin_catch(v37);
              __cxa_end_catch();
              System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
                &v42,
                (const MethodInfo_32A1E48 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
              if ( v38 )
                sub_1B76414(v38);
              v33 = 0;
              goto LABEL_25;
            }
          }
          if ( UserEventAlloutBattleMaster__GetDicToInt(
                 (UserEventAlloutBattleMaster_o *)v30,
                 (System_Collections_Generic_Dictionary_string__object__o *)v41.fields._current,
                 (System_String_o *)StringLiteral_23695/*"svtId"*/,
                 v31) == svtId )
          {
            v6 = 0LL;
            v26 = 1;
            v33 = 7;
            goto LABEL_20;
          }
        }
        v6 = 0LL;
        v33 = 3;
LABEL_20:
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v41,
          (const MethodInfo_32568D4 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
        if ( v33 == 3 )
          continue;
      }
      else
      {
        v33 = 8;
      }
      break;
    }
    System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
      &v42,
      (const MethodInfo_32A1E48 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
LABEL_25:
    LOBYTE(Entity) = v26 & (v33 == 7);
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

  if ( (byte_4A2EB43 & 1) == 0 )
  {
    sub_1B761C0(
      &Method_DataMasterBase_UserEventAlloutBattleMaster__UserEventAlloutBattleEntity__string__TryGetEntity__,
      entity);
    byte_4A2EB43 = 1;
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
           (const MethodInfo_30FFB28 *)Method_DataMasterBase_UserEventAlloutBattleMaster__UserEventAlloutBattleEntity__string__TryGetEntity__);
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