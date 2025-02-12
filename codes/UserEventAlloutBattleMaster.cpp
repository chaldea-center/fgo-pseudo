void __fastcall UserEventAlloutBattleMaster___ctor(UserEventAlloutBattleMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BC8726 & 1) == 0 )
  {
    sub_1C1ABD4(
      &Method_DataMasterBase_UserEventAlloutBattleMaster__UserEventAlloutBattleEntity__string___ctor__,
      method);
    byte_4BC8726 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    411,
    (const MethodInfo_324AE0C *)Method_DataMasterBase_UserEventAlloutBattleMaster__UserEventAlloutBattleEntity__string___ctor__);
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
  int64_t v30; // x20
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
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  __int64 v52; // x0
  __int64 v53; // x1
  _BOOL8 v54; // x0
  __int64 v55; // x1
  int64_t v56; // x2
  int32_t v57; // w3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7
  __int64 v62; // x11
  Il2CppObject *v63; // x23
  __int64 v64; // x9
  int64_t v65; // x22
  UserEventAlloutBattleMaster_o *v66; // x0
  const MethodInfo *v67; // x3
  UserEventAlloutBattleMaster_o *v68; // x0
  __int64 v69; // x1
  const MethodInfo *v70; // x3
  __int64 v71; // x1
  int64_t v72; // x2
  int32_t v73; // w3
  System_String_o *v74; // x4
  BattleSetupInfo_o *v75; // x5
  FollowerInfo_o *v76; // x6
  PartyListViewItem_o *v77; // x7
  System_Collections_Generic_List_object__o *v78; // x0
  struct System_Object_array *v79; // x8
  _QWORD *v80; // x9
  __int64 v81; // x10
  Il2CppClass **v82; // x8
  struct System_Object_array *items; // x8
  _QWORD *v84; // x9
  __int64 size; // x10
  Il2CppClass **v86; // x0
  int v88; // w1
  int v89; // w20
  void *v90; // x0
  void *v91; // x22
  __int64 v92; // x20
  System_Collections_Generic_List_Enumerator_object__o v93; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v94; // [xsp+20h] [xbp-A0h] BYREF
  Il2CppObject *value; // [xsp+38h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v96; // [xsp+40h] [xbp-80h] BYREF

  if ( (byte_4BC872B & 1) == 0 )
  {
    sub_1C1ABD4(&UserEventAlloutBattleMaster_ClearSvtEquipInfo_TypeInfo, deckList);
    sub_1C1ABD4(&UserEventAlloutBattleMaster_ClearSvtInfo_TypeInfo, v4);
    sub_1C1ABD4(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v5);
    sub_1C1ABD4(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v6);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_object__Dispose__, v7);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_object__MoveNext__, v8);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_object__get_Current__, v9);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtEquipInfo__Add__, v10);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__Add__, v11);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_object__GetEnumerator__, v12);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtEquipInfo___ctor__, v13);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo___ctor__, v14);
    sub_1C1ABD4(&System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__TypeInfo, v15);
    sub_1C1ABD4(&System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtEquipInfo__TypeInfo, v16);
    sub_1C1ABD4(&System_Collections_Generic_List_object__TypeInfo, v17);
    sub_1C1ABD4(&StringLiteral_21421/*"lc"*/, v18);
    sub_1C1ABD4(&StringLiteral_19098/*"ec"*/, v19);
    sub_1C1ABD4(&StringLiteral_24113/*"svtEqs"*/, v20);
    sub_1C1ABD4(&StringLiteral_24116/*"svtId"*/, v21);
    sub_1C1ABD4(&StringLiteral_20540/*"id"*/, v22);
    sub_1C1ABD4(&StringLiteral_20573/*"ilc"*/, v23);
    sub_1C1ABD4(&StringLiteral_21591/*"lv"*/, v24);
    byte_4BC872B = 1;
  }
  memset(&v96, 0, sizeof(v96));
  value = 0LL;
  memset(&v94, 0, sizeof(v94));
  v25 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v25,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo___ctor__);
  if ( !deckList )
    sub_1C1AE30(v26, v27);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v93,
    deckList,
    (const MethodInfo_363D388 *)Method_System_Collections_Generic_List_object__GetEnumerator__);
  v96 = v93;
  while ( 1 )
  {
    if ( !System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v96,
            (const MethodInfo_33CE4F8 *)Method_System_Collections_Generic_List_Enumerator_object__MoveNext__) )
    {
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v96,
        (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
      return (System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__o *)v25;
    }
    current = v96.fields._current;
    if ( v96.fields._current )
    {
      methodPtr_low = LOBYTE(System_Collections_Generic_Dictionary_string__object__TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v96.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
        || (System_Collections_Generic_Dictionary_string__object__c *)v96.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
      {
        sub_1C1B0F0(v96.fields._current);
LABEL_42:
        sub_1C1AE30(DicToInt, v34);
      }
    }
    v30 = sub_1C1AE20(UserEventAlloutBattleMaster_ClearSvtInfo_TypeInfo);
    System_Object___ctor((Il2CppObject *)v30, 0LL);
    DicToInt = (UserEventAlloutBattleMaster_o *)UserEventAlloutBattleMaster__GetDicToInt(
                                                  v31,
                                                  (System_Collections_Generic_Dictionary_string__object__o *)current,
                                                  (System_String_o *)StringLiteral_20540/*"id"*/,
                                                  v32);
    if ( !v30 )
      goto LABEL_42;
    *(_DWORD *)(v30 + 16) = (_DWORD)DicToInt;
    v36 = (UserEventAlloutBattleMaster_o *)UserEventAlloutBattleMaster__GetDicToInt(
                                             DicToInt,
                                             (System_Collections_Generic_Dictionary_string__object__o *)current,
                                             (System_String_o *)StringLiteral_24116/*"svtId"*/,
                                             v35);
    *(_DWORD *)(v30 + 20) = (_DWORD)v36;
    v38 = (UserEventAlloutBattleMaster_o *)UserEventAlloutBattleMaster__GetDicToInt(
                                             v36,
                                             (System_Collections_Generic_Dictionary_string__object__o *)current,
                                             (System_String_o *)StringLiteral_21591/*"lv"*/,
                                             v37);
    *(_DWORD *)(v30 + 24) = (_DWORD)v38;
    v40 = (UserEventAlloutBattleMaster_o *)UserEventAlloutBattleMaster__GetDicToInt(
                                             v38,
                                             (System_Collections_Generic_Dictionary_string__object__o *)current,
                                             (System_String_o *)StringLiteral_21421/*"lc"*/,
                                             v39);
    *(_DWORD *)(v30 + 28) = (_DWORD)v40;
    v42 = (UserEventAlloutBattleMaster_o *)UserEventAlloutBattleMaster__GetDicToInt(
                                             v40,
                                             (System_Collections_Generic_Dictionary_string__object__o *)current,
                                             (System_String_o *)StringLiteral_20573/*"ilc"*/,
                                             v41);
    *(_DWORD *)(v30 + 32) = (_DWORD)v42;
    *(_DWORD *)(v30 + 36) = UserEventAlloutBattleMaster__GetDicToInt(
                              v42,
                              (System_Collections_Generic_Dictionary_string__object__o *)current,
                              (System_String_o *)StringLiteral_19098/*"ec"*/,
                              v43);
    v44 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtEquipInfo__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v44,
      (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtEquipInfo___ctor__);
    *(_QWORD *)(v30 + 40) = v44;
    v45 = (System_Collections_Generic_List_object__o **)(v30 + 40);
    sub_1C1AB78((PartyOrganizationUtility_o *)(v30 + 40), (int64_t)v44, v46, v47, v48, v49, v50, v51);
    if ( !current )
      sub_1C1AE30(v52, v53);
    v54 = System_Collections_Generic_Dictionary_object__object___TryGetValue(
            (System_Collections_Generic_Dictionary_object__object__o *)current,
            (Il2CppObject *)StringLiteral_24113/*"svtEqs"*/,
            &value,
            (const MethodInfo_33044FC *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    if ( v54 )
      break;
LABEL_27:
    if ( !v25 )
      sub_1C1AE30(v54, v55);
    items = v25->fields._items;
    v84 = Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__Add__;
    ++v25->fields._version;
    if ( !items )
      sub_1C1AE30(v54, v55);
    size = v25->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v25,
        (Il2CppObject *)v30,
        *(const MethodInfo_363C890 **)(*(_QWORD *)(v84[4] + 192LL) + 112LL));
    }
    else
    {
      v86 = &items->obj.klass + size;
      v25->fields._size = size + 1;
      v86[4] = (Il2CppClass *)v30;
      sub_1C1AB78((PartyOrganizationUtility_o *)(v86 + 4), v30, v56, v57, v58, v59, v60, v61);
    }
  }
  if ( !value
    || (v62 = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(value->klass->vtable[0].methodPtr) < (unsigned int)v62)
    || (System_Collections_Generic_List_object__c *)value->klass->_2.typeHierarchy[v62 - 1] != System_Collections_Generic_List_object__TypeInfo )
  {
    sub_1C1AE30(v54, v55);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v93,
    (System_Collections_Generic_List_object__o *)value,
    (const MethodInfo_363D388 *)Method_System_Collections_Generic_List_object__GetEnumerator__);
  v94 = v93;
  while ( 1 )
  {
    if ( !System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v94,
            (const MethodInfo_33CE4F8 *)Method_System_Collections_Generic_List_Enumerator_object__MoveNext__) )
    {
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v94,
        (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
      goto LABEL_27;
    }
    v63 = v94.fields._current;
    if ( v94.fields._current )
    {
      v64 = LOBYTE(System_Collections_Generic_Dictionary_string__object__TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v94.fields._current->klass->vtable[0].methodPtr) < (unsigned int)v64
        || (System_Collections_Generic_Dictionary_string__object__c *)v94.fields._current->klass->_2.typeHierarchy[v64 - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
      {
        break;
      }
    }
    v65 = sub_1C1AE20(UserEventAlloutBattleMaster_ClearSvtEquipInfo_TypeInfo);
    System_Object___ctor((Il2CppObject *)v65, 0LL);
    v68 = (UserEventAlloutBattleMaster_o *)UserEventAlloutBattleMaster__GetDicToInt(
                                             v66,
                                             (System_Collections_Generic_Dictionary_string__object__o *)v63,
                                             (System_String_o *)StringLiteral_24116/*"svtId"*/,
                                             v67);
    if ( !v65 )
      sub_1C1AE30(v68, v69);
    *(_DWORD *)(v65 + 16) = (_DWORD)v68;
    *(_DWORD *)(v65 + 20) = UserEventAlloutBattleMaster__GetDicToInt(
                              v68,
                              (System_Collections_Generic_Dictionary_string__object__o *)v63,
                              (System_String_o *)StringLiteral_21421/*"lc"*/,
                              v70);
    v78 = *v45;
    if ( !*v45 )
      sub_1C1AE30(0LL, v71);
    v79 = v78->fields._items;
    v80 = Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtEquipInfo__Add__;
    ++v78->fields._version;
    if ( !v79 )
      sub_1C1AE30(v78, v71);
    v81 = v78->fields._size;
    if ( (unsigned int)v81 >= v79->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v78,
        (Il2CppObject *)v65,
        *(const MethodInfo_363C890 **)(*(_QWORD *)(v80[4] + 192LL) + 112LL));
    }
    else
    {
      v82 = &v79->obj.klass + v81;
      v78->fields._size = v81 + 1;
      v82[4] = (Il2CppClass *)v65;
      sub_1C1AB78((PartyOrganizationUtility_o *)(v82 + 4), v65, v72, v73, v74, v75, v76, v77);
    }
  }
  sub_1C1B0F0(v94.fields._current);
  v89 = v88;
  v91 = v90;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v94,
    (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
  if ( v45 )
    sub_1C1AE28(v45);
  if ( v89 != 1 )
  {
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v96,
      (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
    sub_1D05664();
  }
  v92 = *(_QWORD *)__cxa_begin_catch(v91);
  __cxa_end_catch();
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v96,
    (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
  if ( v92 )
    sub_1C1AE28(v92);
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
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v20; // x1
  System_Collections_Generic_IEnumerator_T__o *v21; // x19
  System_Collections_Generic_List_object__o *v22; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v24; // x9
  int *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v27; // x8
  __int64 v28; // x9
  int *v29; // x10
  __int64 v30; // x0
  __int64 v31; // x0
  Il2CppObject *value; // x22
  UserEventAlloutBattleMaster_o *v33; // x0
  const MethodInfo *v34; // x2
  __int64 methodPtr_low; // x10
  System_Collections_Generic_List_object__o *v36; // x1
  System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__o *v37; // x0
  int v38; // w23
  System_Collections_Generic_IEnumerator_T__c *v39; // x8
  __int64 v40; // x9
  int *v41; // x10
  __int64 v42; // x0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v44; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v45; // [xsp+30h] [xbp-90h] BYREF

  if ( (byte_4BC872A & 1) == 0 )
  {
    sub_1C1ABD4(
      &Method_System_Collections_ObjectModel_Collection_UserEventAlloutBattleEntity__GetEnumerator__,
      *(_QWORD *)&questId);
    sub_1C1ABD4(&Method_System_Collections_ObjectModel_Collection_UserEventAlloutBattleEntity__get_Count__, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__, v6);
    sub_1C1ABD4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__, v7);
    sub_1C1ABD4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__, v8);
    sub_1C1ABD4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Current__, v9);
    sub_1C1ABD4(&System_IDisposable_TypeInfo, v10);
    sub_1C1ABD4(&System_Collections_Generic_IEnumerator_UserEventAlloutBattleEntity__TypeInfo, v11);
    sub_1C1ABD4(&System_Collections_IEnumerator_TypeInfo, v12);
    sub_1C1ABD4(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Key__, v13);
    sub_1C1ABD4(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__, v14);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo___ctor__, v15);
    sub_1C1ABD4(&System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__TypeInfo, v16);
    sub_1C1ABD4(&System_Collections_Generic_List_object__TypeInfo, v17);
    byte_4BC872A = 1;
  }
  memset(&v45, 0, sizeof(v45));
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_49;
  if ( System_Collections_ObjectModel_Collection_object___get_Count(
         list,
         (const MethodInfo_31E297C *)Method_System_Collections_ObjectModel_Collection_UserEventAlloutBattleEntity__get_Count__) <= 0 )
  {
LABEL_45:
    v22 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v22,
      (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo___ctor__);
    return (System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__o *)v22;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_49:
    sub_1C1AE30(list, *(_QWORD *)&questId);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_31E2F54 *)Method_System_Collections_ObjectModel_Collection_UserEventAlloutBattleEntity__GetEnumerator__);
  v21 = Enumerator;
  v22 = 0LL;
  while ( 1 )
  {
    if ( !v21 )
      sub_1C1AE30(Enumerator, v20);
    klass = v21->klass;
    v24 = *(unsigned __int16 *)(&v21->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v21->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v24;
        p_offset += 4;
        if ( !v24 )
          goto LABEL_12;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_12:
      p_method = sub_1C6CBB4(v21, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            v21,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v27 = v21->klass;
    v28 = *(unsigned __int16 *)(&v21->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v21->klass->_2.bitflags2 + 3) )
    {
      v29 = &v27->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_UserEventAlloutBattleEntity__c **)v29 - 1) != System_Collections_Generic_IEnumerator_UserEventAlloutBattleEntity__TypeInfo )
      {
        --v28;
        v29 += 4;
        if ( !v28 )
          goto LABEL_19;
      }
      v30 = (__int64)&v27->vtable[*v29].method;
    }
    else
    {
LABEL_19:
      v30 = sub_1C6CBB4(v21, System_Collections_Generic_IEnumerator_UserEventAlloutBattleEntity__TypeInfo, 0LL);
    }
    v31 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v30)(
            v21,
            *(_QWORD *)(v30 + 8));
    if ( !v31 )
      sub_1C1AE30(0LL, v20);
    Enumerator = *(System_Collections_Generic_IEnumerator_T__o **)(v31 + 32);
    if ( Enumerator )
    {
      System_Collections_Generic_Dictionary_object__object___GetEnumerator(
        &v44,
        (System_Collections_Generic_Dictionary_object__object__o *)Enumerator,
        (const MethodInfo_3303120 *)Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
      v45 = v44;
      while ( System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
                &v45,
                (const MethodInfo_33FF700 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__) )
      {
        value = v45.fields._current.fields.value;
        v33 = (UserEventAlloutBattleMaster_o *)System_Int32__Parse(
                                                 (System_String_o *)v45.fields._current.fields.key,
                                                 0LL);
        if ( (_DWORD)v33 == questId )
        {
          if ( value
            && (methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr),
                LOBYTE(value->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low) )
          {
            v36 = (System_Collections_Generic_List_object__c *)value->klass->_2.typeHierarchy[methodPtr_low - 1] == System_Collections_Generic_List_object__TypeInfo
                ? (System_Collections_Generic_List_object__o *)value
                : 0LL;
          }
          else
          {
            v36 = 0LL;
          }
          v37 = UserEventAlloutBattleMaster__ConvertClearSvtInfo(v33, v36, v34);
          if ( v37 )
          {
            v38 = 7;
            v22 = (System_Collections_Generic_List_object__o *)v37;
            goto LABEL_35;
          }
        }
      }
      v38 = 3;
LABEL_35:
      System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
        &v45,
        (const MethodInfo_33FF820 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
      if ( v38 != 3 )
        goto LABEL_38;
    }
  }
  v38 = 8;
LABEL_38:
  v39 = v21->klass;
  v40 = *(unsigned __int16 *)(&v21->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v21->klass->_2.bitflags2 + 3) )
  {
    v41 = &v39->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v41 - 1) != System_IDisposable_TypeInfo )
    {
      --v40;
      v41 += 4;
      if ( !v40 )
        goto LABEL_42;
    }
    v42 = (__int64)&v39->vtable[*v41].method;
  }
  else
  {
LABEL_42:
    v42 = sub_1C6CBB4(v21, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v42)(v21, *(_QWORD *)(v42 + 8));
  if ( (v38 | 8) == 8 )
    goto LABEL_45;
  return (System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__o *)v22;
}


int32_t __fastcall UserEventAlloutBattleMaster__GetDicToInt(
        UserEventAlloutBattleMaster_o *this,
        System_Collections_Generic_Dictionary_string__object__o *dic,
        System_String_o *key,
        const MethodInfo *method)
{
  System_String_o *v6; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4BC872C & 1) == 0 )
  {
    this = (UserEventAlloutBattleMaster_o *)sub_1C1ABD4(
                                              &Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__,
                                              dic);
    byte_4BC872C = 1;
  }
  value = 0LL;
  if ( !dic )
    goto LABEL_9;
  if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
         (System_Collections_Generic_Dictionary_object__object__o *)dic,
         (Il2CppObject *)key,
         &value,
         (const MethodInfo_33044FC *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
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
    sub_1C1AE30(this, dic);
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

  if ( (byte_4BC8727 & 1) == 0 )
  {
    sub_1C1ABD4(
      &Method_DataMasterBase_UserEventAlloutBattleMaster__UserEventAlloutBattleEntity__string__GetEntity__,
      userId);
    byte_4BC8727 = 1;
  }
  PK = (Il2CppObject *)UserEventAlloutBattleEntity__CreatePK(
                         userId,
                         eventId,
                         alloutBattleId,
                         *(const MethodInfo **)&alloutBattleId);
  return (UserEventAlloutBattleEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                            PK,
                                            (const MethodInfo_324D130 *)Method_DataMasterBase_UserEventAlloutBattleMaster__UserEventAlloutBattleEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UserEventAlloutBattleMaster__IsAlreadyUsedServant(
        UserEventAlloutBattleMaster_o *this,
        int32_t svtId,
        int32_t eventId,
        int32_t alloutBattleId,
        const MethodInfo *method)
{
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
  NetworkManager_c *v21; // x0
  UserEventAlloutBattleEntity_o *Entity; // x0
  __int64 v23; // x1
  System_Collections_Generic_Dictionary_object__object__o *clearDeckInfoDic; // x0
  char v25; // w23
  _BOOL8 v26; // x0
  __int64 v27; // x1
  __int64 methodPtr_low; // x11
  _BOOL8 v29; // x0
  const MethodInfo *v30; // x3
  __int64 v31; // x10
  int v32; // w24
  int v33; // w1
  int v34; // w19
  void *v35; // x0
  void *v36; // x24
  __int64 v37; // x19
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v39; // [xsp+8h] [xbp-D8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v40; // [xsp+30h] [xbp-B0h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v41; // [xsp+50h] [xbp-90h] BYREF

  if ( (byte_4BC8729 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__, *(_QWORD *)&svtId);
    sub_1C1ABD4(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v9);
    sub_1C1ABD4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__, v10);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_object__Dispose__, v11);
    sub_1C1ABD4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__, v12);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_object__MoveNext__, v13);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_object__get_Current__, v14);
    sub_1C1ABD4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Current__, v15);
    sub_1C1ABD4(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__, v16);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_object__GetEnumerator__, v17);
    sub_1C1ABD4(&System_Collections_Generic_List_object__TypeInfo, v18);
    sub_1C1ABD4(&NetworkManager_TypeInfo, v19);
    sub_1C1ABD4(&StringLiteral_24116/*"svtId"*/, v20);
    byte_4BC8729 = 1;
  }
  memset(&v41, 0, sizeof(v41));
  memset(&v40, 0, sizeof(v40));
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4BC2585 )
  {
    sub_1C1ABD4(&NetworkManager_TypeInfo, *(_QWORD *)&svtId);
    byte_4BC2585 = 1;
  }
  v21 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v21 = NetworkManager_TypeInfo;
  }
  Entity = UserEventAlloutBattleMaster__GetEntity(
             this,
             v21->static_fields->userIdNumber,
             eventId,
             alloutBattleId,
             method);
  if ( Entity )
  {
    clearDeckInfoDic = (System_Collections_Generic_Dictionary_object__object__o *)Entity->fields.clearDeckInfoDic;
    if ( !clearDeckInfoDic )
      sub_1C1AE30(0LL, v23);
    System_Collections_Generic_Dictionary_object__object___GetEnumerator(
      &v39,
      clearDeckInfoDic,
      (const MethodInfo_3303120 *)Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
    v25 = 0;
    v41 = v39;
    while ( 2 )
    {
      v26 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
              &v41,
              (const MethodInfo_33FF700 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__);
      if ( v26 )
      {
        if ( !v41.fields._current.fields.value
          || (methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr),
              LOBYTE(v41.fields._current.fields.value->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low)
          || (System_Collections_Generic_List_object__c *)v41.fields._current.fields.value->klass->_2.typeHierarchy[methodPtr_low - 1] != System_Collections_Generic_List_object__TypeInfo )
        {
          sub_1C1AE30(v26, v27);
        }
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v39,
          (System_Collections_Generic_List_object__o *)v41.fields._current.fields.value,
          (const MethodInfo_363D388 *)Method_System_Collections_Generic_List_object__GetEnumerator__);
        *(_OWORD *)&v40.fields._list = *(_OWORD *)&v39.fields._dictionary;
        v40.fields._current = v39.fields._current.fields.key;
        while ( 1 )
        {
          v29 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v40,
                  (const MethodInfo_33CE4F8 *)Method_System_Collections_Generic_List_Enumerator_object__MoveNext__);
          if ( !v29 )
            break;
          if ( v40.fields._current )
          {
            v31 = LOBYTE(System_Collections_Generic_Dictionary_string__object__TypeInfo->vtable._0_Equals.methodPtr);
            if ( LOBYTE(v40.fields._current->klass->vtable[0].methodPtr) < (unsigned int)v31
              || (System_Collections_Generic_Dictionary_string__object__c *)v40.fields._current->klass->_2.typeHierarchy[v31 - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
            {
              sub_1C1B0F0(v40.fields._current);
              v34 = v33;
              v36 = v35;
              System_Collections_Generic_List_Enumerator_object___Dispose(
                &v40,
                (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
              if ( this )
                sub_1C1AE28(this);
              if ( v34 != 1 )
              {
                System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
                  &v41,
                  (const MethodInfo_33FF820 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
                sub_1D05664();
              }
              v37 = *(_QWORD *)__cxa_begin_catch(v36);
              __cxa_end_catch();
              System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
                &v41,
                (const MethodInfo_33FF820 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
              if ( v37 )
                sub_1C1AE28(v37);
              v32 = 0;
              goto LABEL_29;
            }
          }
          if ( UserEventAlloutBattleMaster__GetDicToInt(
                 (UserEventAlloutBattleMaster_o *)v29,
                 (System_Collections_Generic_Dictionary_string__object__o *)v40.fields._current,
                 (System_String_o *)StringLiteral_24116/*"svtId"*/,
                 v30) == svtId )
          {
            this = 0LL;
            v25 = 1;
            v32 = 7;
            goto LABEL_24;
          }
        }
        this = 0LL;
        v32 = 3;
LABEL_24:
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v40,
          (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
        if ( v32 == 3 )
          continue;
      }
      else
      {
        v32 = 8;
      }
      break;
    }
    System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
      &v41,
      (const MethodInfo_33FF820 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
LABEL_29:
    LOBYTE(Entity) = v25 & (v32 == 7);
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

  if ( (byte_4BC8728 & 1) == 0 )
  {
    sub_1C1ABD4(
      &Method_DataMasterBase_UserEventAlloutBattleMaster__UserEventAlloutBattleEntity__string__TryGetEntity__,
      entity);
    byte_4BC8728 = 1;
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
           (const MethodInfo_324D17C *)Method_DataMasterBase_UserEventAlloutBattleMaster__UserEventAlloutBattleEntity__string__TryGetEntity__);
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