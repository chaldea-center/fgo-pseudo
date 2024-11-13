void __fastcall UserEventAlloutBattleMaster___ctor(UserEventAlloutBattleMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16E26 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_UserEventAlloutBattleMaster__UserEventAlloutBattleEntity__string___ctor__,
      method,
      v2);
    byte_4B16E26 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    407,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_UserEventAlloutBattleMaster__UserEventAlloutBattleEntity__string___ctor__);
}


System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__o *__fastcall UserEventAlloutBattleMaster__ConvertClearSvtInfo(
        UserEventAlloutBattleMaster_o *this,
        System_Collections_Generic_List_object__o *deckList,
        const MethodInfo *method)
{
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
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  System_Collections_Generic_List_object__o *v47; // x19
  __int64 v48; // x0
  __int64 v49; // x1
  System_Collections_Generic_Dictionary_string__object__c *v50; // x1
  __int64 v51; // x2
  __int64 v52; // x3
  Il2CppObject *current; // x22
  __int64 methodPtr_low; // x9
  int64_t v55; // x20
  UserEventAlloutBattleMaster_o *v56; // x0
  const MethodInfo *v57; // x3
  UserEventAlloutBattleMaster_o *DicToInt; // x0
  __int64 v59; // x1
  const MethodInfo *v60; // x3
  UserEventAlloutBattleMaster_o *v61; // x0
  const MethodInfo *v62; // x3
  UserEventAlloutBattleMaster_o *v63; // x0
  const MethodInfo *v64; // x3
  UserEventAlloutBattleMaster_o *v65; // x0
  const MethodInfo *v66; // x3
  UserEventAlloutBattleMaster_o *v67; // x0
  const MethodInfo *v68; // x3
  __int64 v69; // x1
  __int64 v70; // x2
  __int64 v71; // x3
  System_Collections_Generic_List_object__o *v72; // x23
  System_Collections_Generic_List_object__o **v73; // x21
  int64_t v74; // x2
  int32_t v75; // w3
  System_String_o *v76; // x4
  BattleSetupInfo_o *v77; // x5
  FollowerInfo_o *v78; // x6
  PartyListViewItem_o *v79; // x7
  __int64 v80; // x0
  __int64 v81; // x1
  _BOOL8 v82; // x0
  __int64 v83; // x1
  int64_t v84; // x2
  int32_t v85; // w3
  System_String_o *v86; // x4
  BattleSetupInfo_o *v87; // x5
  FollowerInfo_o *v88; // x6
  PartyListViewItem_o *v89; // x7
  __int64 v90; // x11
  System_Collections_Generic_Dictionary_string__object__c *v91; // x1
  __int64 v92; // x2
  __int64 v93; // x3
  Il2CppObject *v94; // x23
  __int64 v95; // x9
  int64_t v96; // x22
  UserEventAlloutBattleMaster_o *v97; // x0
  const MethodInfo *v98; // x3
  UserEventAlloutBattleMaster_o *v99; // x0
  __int64 v100; // x1
  const MethodInfo *v101; // x3
  __int64 v102; // x1
  int64_t v103; // x2
  int32_t v104; // w3
  System_String_o *v105; // x4
  BattleSetupInfo_o *v106; // x5
  FollowerInfo_o *v107; // x6
  PartyListViewItem_o *v108; // x7
  System_Collections_Generic_List_object__o *v109; // x0
  struct System_Object_array *v110; // x8
  _QWORD *v111; // x9
  __int64 v112; // x10
  Il2CppClass **v113; // x8
  struct System_Object_array *items; // x8
  _QWORD *v115; // x9
  __int64 size; // x10
  Il2CppClass **v117; // x0
  int v119; // w1
  int v120; // w20
  void *v121; // x0
  void *v122; // x22
  __int64 v123; // x20
  System_Collections_Generic_List_Enumerator_object__o v124; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v125; // [xsp+20h] [xbp-A0h] BYREF
  Il2CppObject *value; // [xsp+38h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v127; // [xsp+40h] [xbp-80h] BYREF

  if ( (byte_4B16E2B & 1) == 0 )
  {
    sub_1BCA7E0(&UserEventAlloutBattleMaster_ClearSvtEquipInfo_TypeInfo, deckList, method);
    sub_1BCA7E0(&UserEventAlloutBattleMaster_ClearSvtInfo_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v7, v8);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_object__Dispose__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_object__MoveNext__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_object__get_Current__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtEquipInfo__Add__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__Add__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_object__GetEnumerator__, v21, v22);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtEquipInfo___ctor__,
      v23,
      v24);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo___ctor__, v25, v26);
    sub_1BCA7E0(&System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__TypeInfo, v27, v28);
    sub_1BCA7E0(&System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtEquipInfo__TypeInfo, v29, v30);
    sub_1BCA7E0(&System_Collections_Generic_List_object__TypeInfo, v31, v32);
    sub_1BCA7E0(&StringLiteral_21287/*"lc"*/, v33, v34);
    sub_1BCA7E0(&StringLiteral_18984/*"ec"*/, v35, v36);
    sub_1BCA7E0(&StringLiteral_23952/*"svtEqs"*/, v37, v38);
    sub_1BCA7E0(&StringLiteral_23955/*"svtId"*/, v39, v40);
    sub_1BCA7E0(&StringLiteral_20414/*"id"*/, v41, v42);
    sub_1BCA7E0(&StringLiteral_20446/*"ilc"*/, v43, v44);
    sub_1BCA7E0(&StringLiteral_21457/*"lv"*/, v45, v46);
    byte_4B16E2B = 1;
  }
  memset(&v127, 0, sizeof(v127));
  value = 0LL;
  memset(&v125, 0, sizeof(v125));
  v47 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__TypeInfo,
                                                       deckList,
                                                       method,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v47,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo___ctor__);
  if ( !deckList )
    sub_1BCAA3C(v48, v49);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v124,
    deckList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_object__GetEnumerator__);
  v127 = v124;
  while ( 1 )
  {
    if ( !System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v127,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_object__MoveNext__) )
    {
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v127,
        (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
      return (System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__o *)v47;
    }
    current = v127.fields._current;
    if ( v127.fields._current )
    {
      v50 = System_Collections_Generic_Dictionary_string__object__TypeInfo;
      methodPtr_low = LOBYTE(System_Collections_Generic_Dictionary_string__object__TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v127.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
        || (System_Collections_Generic_Dictionary_string__object__c *)v127.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
      {
        sub_1BCACFC(v127.fields._current);
LABEL_42:
        sub_1BCAA3C(DicToInt, v59);
      }
    }
    v55 = sub_1BCAA2C(UserEventAlloutBattleMaster_ClearSvtInfo_TypeInfo, v50, v51, v52);
    System_Object___ctor((Il2CppObject *)v55, 0LL);
    DicToInt = (UserEventAlloutBattleMaster_o *)UserEventAlloutBattleMaster__GetDicToInt(
                                                  v56,
                                                  (System_Collections_Generic_Dictionary_string__object__o *)current,
                                                  (System_String_o *)StringLiteral_20414/*"id"*/,
                                                  v57);
    if ( !v55 )
      goto LABEL_42;
    *(_DWORD *)(v55 + 16) = (_DWORD)DicToInt;
    v61 = (UserEventAlloutBattleMaster_o *)UserEventAlloutBattleMaster__GetDicToInt(
                                             DicToInt,
                                             (System_Collections_Generic_Dictionary_string__object__o *)current,
                                             (System_String_o *)StringLiteral_23955/*"svtId"*/,
                                             v60);
    *(_DWORD *)(v55 + 20) = (_DWORD)v61;
    v63 = (UserEventAlloutBattleMaster_o *)UserEventAlloutBattleMaster__GetDicToInt(
                                             v61,
                                             (System_Collections_Generic_Dictionary_string__object__o *)current,
                                             (System_String_o *)StringLiteral_21457/*"lv"*/,
                                             v62);
    *(_DWORD *)(v55 + 24) = (_DWORD)v63;
    v65 = (UserEventAlloutBattleMaster_o *)UserEventAlloutBattleMaster__GetDicToInt(
                                             v63,
                                             (System_Collections_Generic_Dictionary_string__object__o *)current,
                                             (System_String_o *)StringLiteral_21287/*"lc"*/,
                                             v64);
    *(_DWORD *)(v55 + 28) = (_DWORD)v65;
    v67 = (UserEventAlloutBattleMaster_o *)UserEventAlloutBattleMaster__GetDicToInt(
                                             v65,
                                             (System_Collections_Generic_Dictionary_string__object__o *)current,
                                             (System_String_o *)StringLiteral_20446/*"ilc"*/,
                                             v66);
    *(_DWORD *)(v55 + 32) = (_DWORD)v67;
    *(_DWORD *)(v55 + 36) = UserEventAlloutBattleMaster__GetDicToInt(
                              v67,
                              (System_Collections_Generic_Dictionary_string__object__o *)current,
                              (System_String_o *)StringLiteral_18984/*"ec"*/,
                              v68);
    v72 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                         System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtEquipInfo__TypeInfo,
                                                         v69,
                                                         v70,
                                                         v71);
    System_Collections_Generic_List_object____ctor(
      v72,
      (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtEquipInfo___ctor__);
    *(_QWORD *)(v55 + 40) = v72;
    v73 = (System_Collections_Generic_List_object__o **)(v55 + 40);
    sub_1BCA784((PartyOrganizationUtility_o *)(v55 + 40), (int64_t)v72, v74, v75, v76, v77, v78, v79);
    if ( !current )
      sub_1BCAA3C(v80, v81);
    v82 = System_Collections_Generic_Dictionary_object__object___TryGetValue(
            (System_Collections_Generic_Dictionary_object__object__o *)current,
            (Il2CppObject *)StringLiteral_23952/*"svtEqs"*/,
            &value,
            (const MethodInfo_3266A6C *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    if ( v82 )
      break;
LABEL_27:
    if ( !v47 )
      sub_1BCAA3C(v82, v83);
    items = v47->fields._items;
    v115 = Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__Add__;
    ++v47->fields._version;
    if ( !items )
      sub_1BCAA3C(v82, v83);
    size = v47->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v47,
        (Il2CppObject *)v55,
        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v115[4] + 192LL) + 112LL));
    }
    else
    {
      v117 = &items->obj.klass + size;
      v47->fields._size = size + 1;
      v117[4] = (Il2CppClass *)v55;
      sub_1BCA784((PartyOrganizationUtility_o *)(v117 + 4), v55, v84, v85, v86, v87, v88, v89);
    }
  }
  if ( !value
    || (v90 = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(value->klass->vtable[0].methodPtr) < (unsigned int)v90)
    || (System_Collections_Generic_List_object__c *)value->klass->_2.typeHierarchy[v90 - 1] != System_Collections_Generic_List_object__TypeInfo )
  {
    sub_1BCAA3C(v82, v83);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v124,
    (System_Collections_Generic_List_object__o *)value,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_object__GetEnumerator__);
  v125 = v124;
  while ( 1 )
  {
    if ( !System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v125,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_object__MoveNext__) )
    {
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v125,
        (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
      goto LABEL_27;
    }
    v94 = v125.fields._current;
    if ( v125.fields._current )
    {
      v91 = System_Collections_Generic_Dictionary_string__object__TypeInfo;
      v95 = LOBYTE(System_Collections_Generic_Dictionary_string__object__TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v125.fields._current->klass->vtable[0].methodPtr) < (unsigned int)v95
        || (System_Collections_Generic_Dictionary_string__object__c *)v125.fields._current->klass->_2.typeHierarchy[v95 - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
      {
        break;
      }
    }
    v96 = sub_1BCAA2C(UserEventAlloutBattleMaster_ClearSvtEquipInfo_TypeInfo, v91, v92, v93);
    System_Object___ctor((Il2CppObject *)v96, 0LL);
    v99 = (UserEventAlloutBattleMaster_o *)UserEventAlloutBattleMaster__GetDicToInt(
                                             v97,
                                             (System_Collections_Generic_Dictionary_string__object__o *)v94,
                                             (System_String_o *)StringLiteral_23955/*"svtId"*/,
                                             v98);
    if ( !v96 )
      sub_1BCAA3C(v99, v100);
    *(_DWORD *)(v96 + 16) = (_DWORD)v99;
    *(_DWORD *)(v96 + 20) = UserEventAlloutBattleMaster__GetDicToInt(
                              v99,
                              (System_Collections_Generic_Dictionary_string__object__o *)v94,
                              (System_String_o *)StringLiteral_21287/*"lc"*/,
                              v101);
    v109 = *v73;
    if ( !*v73 )
      sub_1BCAA3C(0LL, v102);
    v110 = v109->fields._items;
    v111 = Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtEquipInfo__Add__;
    ++v109->fields._version;
    if ( !v110 )
      sub_1BCAA3C(v109, v102);
    v112 = v109->fields._size;
    if ( (unsigned int)v112 >= v110->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v109,
        (Il2CppObject *)v96,
        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v111[4] + 192LL) + 112LL));
    }
    else
    {
      v113 = &v110->obj.klass + v112;
      v109->fields._size = v112 + 1;
      v113[4] = (Il2CppClass *)v96;
      sub_1BCA784((PartyOrganizationUtility_o *)(v113 + 4), v96, v103, v104, v105, v106, v107, v108);
    }
  }
  sub_1BCACFC(v125.fields._current);
  v120 = v119;
  v122 = v121;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v125,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
  if ( v73 )
    sub_1BCAA34(v73);
  if ( v120 != 1 )
  {
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v127,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
    sub_1CB5270();
  }
  v123 = *(_QWORD *)__cxa_begin_catch(v122);
  __cxa_end_catch();
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v127,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
  if ( v123 )
    sub_1BCAA34(v123);
  return (System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__o *)v47;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__o *__fastcall UserEventAlloutBattleMaster__GetClearDeckInfo(
        UserEventAlloutBattleMaster_o *this,
        int32_t questId,
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
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v34; // x2
  __int64 v35; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  UserEventAlloutBattleEntity_c *v37; // x1
  System_Collections_Generic_IEnumerator_T__o *v38; // x19
  System_Collections_Generic_List_object__o *v39; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v41; // x9
  int *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v44; // x8
  __int64 v45; // x9
  int *v46; // x10
  __int64 v47; // x0
  _QWORD *v48; // x0
  __int64 v49; // x1
  __int64 methodPtr_low; // x9
  Il2CppObject *value; // x22
  UserEventAlloutBattleMaster_o *v52; // x0
  const MethodInfo *v53; // x2
  __int64 v54; // x10
  System_Collections_Generic_List_object__o *v55; // x1
  System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__o *v56; // x0
  int v57; // w23
  System_Collections_Generic_IEnumerator_T__c *v58; // x8
  __int64 v59; // x9
  int *v60; // x10
  __int64 v61; // x0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v63; // [xsp+18h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v64; // [xsp+40h] [xbp-90h] BYREF

  if ( (byte_4B16E2A & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      *(_QWORD *)&questId,
      method);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Current__, v13, v14);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v15, v16);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v17, v18);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Key__, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__, v23, v24);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo___ctor__, v25, v26);
    sub_1BCA7E0(&System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__TypeInfo, v27, v28);
    sub_1BCA7E0(&System_Collections_Generic_List_object__TypeInfo, v29, v30);
    sub_1BCA7E0(&UserEventAlloutBattleEntity_TypeInfo, v31, v32);
    byte_4B16E2A = 1;
  }
  memset(&v64, 0, sizeof(v64));
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_52;
  if ( System_Collections_ObjectModel_Collection_object___get_Count(
         list,
         (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) <= 0 )
  {
LABEL_47:
    v39 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                         System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__TypeInfo,
                                                         *(_QWORD *)&questId,
                                                         v34,
                                                         v35);
    System_Collections_Generic_List_object____ctor(
      v39,
      (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo___ctor__);
    return (System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__o *)v39;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_52:
    sub_1BCAA3C(list, *(_QWORD *)&questId);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_314F9E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  v38 = Enumerator;
  v39 = 0LL;
  while ( 1 )
  {
    if ( !v38 )
      goto LABEL_50;
    klass = v38->klass;
    v41 = *(unsigned __int16 *)(&v38->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v38->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v41;
        p_offset += 4;
        if ( !v41 )
          goto LABEL_12;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_12:
      p_method = sub_1C1C7C0(v38, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            v38,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v44 = v38->klass;
    v45 = *(unsigned __int16 *)(&v38->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v38->klass->_2.bitflags2 + 3) )
    {
      v46 = &v44->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v46 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v45;
        v46 += 4;
        if ( !v45 )
          goto LABEL_19;
      }
      v47 = (__int64)&v44->vtable[*v46].method;
    }
    else
    {
LABEL_19:
      v47 = sub_1C1C7C0(v38, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v48 = (_QWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v47)(
                      v38,
                      *(_QWORD *)(v47 + 8));
    if ( !v48 )
      sub_1BCAA3C(0LL, v49);
    v37 = UserEventAlloutBattleEntity_TypeInfo;
    methodPtr_low = LOBYTE(UserEventAlloutBattleEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*v48 + 304LL) < (unsigned int)methodPtr_low
      || *(UserEventAlloutBattleEntity_c **)(*(_QWORD *)(*v48 + 200LL) + 8 * methodPtr_low - 8) != UserEventAlloutBattleEntity_TypeInfo )
    {
      sub_1BCACFC(v48);
LABEL_50:
      sub_1BCAA3C(Enumerator, v37);
    }
    Enumerator = (System_Collections_Generic_IEnumerator_T__o *)v48[4];
    if ( Enumerator )
    {
      System_Collections_Generic_Dictionary_object__object___GetEnumerator(
        &v63,
        (System_Collections_Generic_Dictionary_object__object__o *)Enumerator,
        (const MethodInfo_3265690 *)Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
      v64 = v63;
      while ( System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
                &v64,
                (const MethodInfo_3364380 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__) )
      {
        value = v64.fields._current.fields.value;
        v52 = (UserEventAlloutBattleMaster_o *)System_Int32__Parse(
                                                 (System_String_o *)v64.fields._current.fields.key,
                                                 0LL);
        if ( (_DWORD)v52 == questId )
        {
          if ( value
            && (v54 = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr),
                LOBYTE(value->klass->vtable[0].methodPtr) >= (unsigned int)v54) )
          {
            v55 = (System_Collections_Generic_List_object__c *)value->klass->_2.typeHierarchy[v54 - 1] == System_Collections_Generic_List_object__TypeInfo
                ? (System_Collections_Generic_List_object__o *)value
                : 0LL;
          }
          else
          {
            v55 = 0LL;
          }
          v56 = UserEventAlloutBattleMaster__ConvertClearSvtInfo(v52, v55, v53);
          if ( v56 )
          {
            v57 = 7;
            v39 = (System_Collections_Generic_List_object__o *)v56;
            goto LABEL_37;
          }
        }
      }
      v57 = 3;
LABEL_37:
      System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
        &v64,
        (const MethodInfo_33644A0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
      if ( v57 != 3 )
        goto LABEL_40;
    }
  }
  v57 = 8;
LABEL_40:
  v58 = v38->klass;
  v59 = *(unsigned __int16 *)(&v38->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v38->klass->_2.bitflags2 + 3) )
  {
    v60 = &v58->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v60 - 1) != System_IDisposable_TypeInfo )
    {
      --v59;
      v60 += 4;
      if ( !v59 )
        goto LABEL_44;
    }
    v61 = (__int64)&v58->vtable[*v60].method;
  }
  else
  {
LABEL_44:
    v61 = sub_1C1C7C0(v38, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v61)(v38, *(_QWORD *)(v61 + 8));
  if ( (v57 | 8) == 8 )
    goto LABEL_47;
  return (System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__o *)v39;
}


int32_t __fastcall UserEventAlloutBattleMaster__GetDicToInt(
        UserEventAlloutBattleMaster_o *this,
        System_Collections_Generic_Dictionary_string__object__o *dic,
        System_String_o *key,
        const MethodInfo *method)
{
  System_String_o *v6; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B16E2C & 1) == 0 )
  {
    this = (UserEventAlloutBattleMaster_o *)sub_1BCA7E0(
                                              &Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__,
                                              dic,
                                              key);
    byte_4B16E2C = 1;
  }
  value = 0LL;
  if ( !dic )
    goto LABEL_9;
  if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
         (System_Collections_Generic_Dictionary_object__object__o *)dic,
         (Il2CppObject *)key,
         &value,
         (const MethodInfo_3266A6C *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
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
    sub_1BCAA3C(this, dic);
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

  if ( (byte_4B16E27 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_UserEventAlloutBattleMaster__UserEventAlloutBattleEntity__string__GetEntity__,
      userId,
      *(_QWORD *)&eventId);
    byte_4B16E27 = 1;
  }
  PK = (Il2CppObject *)UserEventAlloutBattleEntity__CreatePK(
                         userId,
                         eventId,
                         alloutBattleId,
                         *(const MethodInfo **)&alloutBattleId);
  return (UserEventAlloutBattleEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                            PK,
                                            (const MethodInfo_31B3198 *)Method_DataMasterBase_UserEventAlloutBattleMaster__UserEventAlloutBattleEntity__string__GetEntity__);
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
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  int64_t UserId; // x0
  const MethodInfo *v34; // x4
  UserEventAlloutBattleEntity_o *Entity; // x0
  __int64 v36; // x1
  System_Collections_Generic_Dictionary_object__object__o *clearDeckInfoDic; // x0
  char v38; // w22
  _BOOL8 v39; // x0
  __int64 v40; // x1
  __int64 methodPtr_low; // x11
  _BOOL8 v42; // x0
  const MethodInfo *v43; // x3
  __int64 v44; // x10
  int v45; // w23
  int v46; // w1
  int v47; // w23
  void *v48; // x0
  void *v49; // x19
  __int64 v50; // x20
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v52; // [xsp+8h] [xbp-D8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v53; // [xsp+30h] [xbp-B0h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v54; // [xsp+50h] [xbp-90h] BYREF

  v6 = (unsigned int)eventId;
  if ( (byte_4B16E29 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__,
      *(_QWORD *)&svtId,
      *(_QWORD *)&eventId);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_object__Dispose__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_object__MoveNext__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_object__get_Current__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Current__, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__, v23, v24);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_object__GetEnumerator__, v25, v26);
    sub_1BCA7E0(&System_Collections_Generic_List_object__TypeInfo, v27, v28);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v29, v30);
    sub_1BCA7E0(&StringLiteral_23955/*"svtId"*/, v31, v32);
    byte_4B16E29 = 1;
  }
  memset(&v54, 0, sizeof(v54));
  memset(&v53, 0, sizeof(v53));
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&svtId);
  UserId = NetworkManager__get_UserId(0LL);
  Entity = UserEventAlloutBattleMaster__GetEntity(this, UserId, v6, alloutBattleId, v34);
  if ( Entity )
  {
    clearDeckInfoDic = (System_Collections_Generic_Dictionary_object__object__o *)Entity->fields.clearDeckInfoDic;
    if ( !clearDeckInfoDic )
      sub_1BCAA3C(0LL, v36);
    System_Collections_Generic_Dictionary_object__object___GetEnumerator(
      &v52,
      clearDeckInfoDic,
      (const MethodInfo_3265690 *)Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
    v38 = 0;
    v54 = v52;
    while ( 2 )
    {
      v39 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
              &v54,
              (const MethodInfo_3364380 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__);
      if ( v39 )
      {
        if ( !v54.fields._current.fields.value
          || (methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr),
              LOBYTE(v54.fields._current.fields.value->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low)
          || (System_Collections_Generic_List_object__c *)v54.fields._current.fields.value->klass->_2.typeHierarchy[methodPtr_low - 1] != System_Collections_Generic_List_object__TypeInfo )
        {
          sub_1BCAA3C(v39, v40);
        }
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v52,
          (System_Collections_Generic_List_object__o *)v54.fields._current.fields.value,
          (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_object__GetEnumerator__);
        *(_OWORD *)&v53.fields._list = *(_OWORD *)&v52.fields._dictionary;
        v53.fields._current = v52.fields._current.fields.key;
        while ( 1 )
        {
          v42 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v53,
                  (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_object__MoveNext__);
          if ( !v42 )
            break;
          if ( v53.fields._current )
          {
            v44 = LOBYTE(System_Collections_Generic_Dictionary_string__object__TypeInfo->vtable._0_Equals.methodPtr);
            if ( LOBYTE(v53.fields._current->klass->vtable[0].methodPtr) < (unsigned int)v44
              || (System_Collections_Generic_Dictionary_string__object__c *)v53.fields._current->klass->_2.typeHierarchy[v44 - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
            {
              sub_1BCACFC(v53.fields._current);
              v47 = v46;
              v49 = v48;
              System_Collections_Generic_List_Enumerator_object___Dispose(
                &v53,
                (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
              if ( v6 )
                sub_1BCAA34(v6);
              if ( v47 != 1 )
              {
                System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
                  &v54,
                  (const MethodInfo_33644A0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
                sub_1CB5270();
              }
              v50 = *(_QWORD *)__cxa_begin_catch(v49);
              __cxa_end_catch();
              System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
                &v54,
                (const MethodInfo_33644A0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
              if ( v50 )
                sub_1BCAA34(v50);
              v45 = 0;
              goto LABEL_25;
            }
          }
          if ( UserEventAlloutBattleMaster__GetDicToInt(
                 (UserEventAlloutBattleMaster_o *)v42,
                 (System_Collections_Generic_Dictionary_string__object__o *)v53.fields._current,
                 (System_String_o *)StringLiteral_23955/*"svtId"*/,
                 v43) == svtId )
          {
            v6 = 0LL;
            v38 = 1;
            v45 = 7;
            goto LABEL_20;
          }
        }
        v6 = 0LL;
        v45 = 3;
LABEL_20:
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v53,
          (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
        if ( v45 == 3 )
          continue;
      }
      else
      {
        v45 = 8;
      }
      break;
    }
    System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
      &v54,
      (const MethodInfo_33644A0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
LABEL_25:
    LOBYTE(Entity) = v38 & (v45 == 7);
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

  if ( (byte_4B16E28 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_UserEventAlloutBattleMaster__UserEventAlloutBattleEntity__string__TryGetEntity__,
      entity,
      userId);
    byte_4B16E28 = 1;
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
           (const MethodInfo_31B31E8 *)Method_DataMasterBase_UserEventAlloutBattleMaster__UserEventAlloutBattleEntity__string__TryGetEntity__);
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