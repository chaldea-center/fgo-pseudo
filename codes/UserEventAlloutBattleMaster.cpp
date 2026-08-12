void UserEventAlloutBattleMaster___ctor(UserEventAlloutBattleMaster_o *this, const MethodInfo *method)
{
  if ( (byte_597166E & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_UserEventAlloutBattleMaster__UserEventAlloutBattleEntity__string___ctor__);
    byte_597166E = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    415,
    (const MethodInfo_3F1339C *)Method_DataMasterBase_UserEventAlloutBattleMaster__UserEventAlloutBattleEntity__string___ctor__);
}


System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__o *UserEventAlloutBattleMaster__ConvertClearSvtInfo(
        UserEventAlloutBattleMaster_o *this,
        System_Collections_Generic_List_object__o *deckList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v4; // x19
  __int64 v5; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *current; // x22
  __int64 naturalAligment; // x9
  __int64 v10; // x20
  UserEventAlloutBattleMaster_o *v11; // x0
  const MethodInfo *v12; // x3
  UserEventAlloutBattleMaster_o *DicToInt; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x3
  System_String_o *v16; // x2
  UserEventAlloutBattleMaster_o *v17; // x0
  const MethodInfo *v18; // x3
  UserEventAlloutBattleMaster_o *v19; // x0
  System_String_o *v20; // x2
  const MethodInfo *v21; // x3
  UserEventAlloutBattleMaster_o *v22; // x0
  const MethodInfo *v23; // x3
  UserEventAlloutBattleMaster_o *v24; // x0
  const MethodInfo *v25; // x3
  System_Collections_Generic_List_object__o *v26; // x23
  System_Collections_Generic_List_object__o **v27; // x21
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  __int64 v34; // x0
  __int64 v35; // x1
  _BOOL8 v36; // x0
  __int64 v37; // x1
  System_String_o *v38; // x2
  System_String_o *v39; // x3
  int32_t v40; // w4
  int32_t v41; // w5
  bool v42; // w6
  bool v43; // w7
  __int64 v44; // x10
  __int64 v45; // x2
  Il2CppObject *v46; // x23
  __int64 v47; // x9
  __int64 v48; // x22
  UserEventAlloutBattleMaster_o *v49; // x0
  const MethodInfo *v50; // x3
  UserEventAlloutBattleMaster_o *v51; // x0
  __int64 v52; // x1
  const MethodInfo *v53; // x3
  System_String_o *v54; // x2
  __int64 v55; // x1
  System_String_o *v56; // x2
  System_String_o *v57; // x3
  int32_t v58; // w4
  int32_t v59; // w5
  bool v60; // w6
  bool v61; // w7
  System_Collections_Generic_List_object__o *v62; // x0
  struct System_Object_array *v63; // x8
  _QWORD *v64; // x9
  __int64 v65; // x10
  Il2CppClass **v66; // x8
  struct System_Object_array *items; // x8
  _QWORD *v68; // x9
  __int64 size; // x10
  Il2CppClass **v70; // x0
  __int64 v71; // x20
  int v73; // w1
  int v74; // w21
  void *v75; // x0
  void *v76; // x22
  __int64 v77; // [xsp+8h] [xbp-C8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o *v78; // [xsp+10h] [xbp-C0h]
  System_Collections_Generic_List_Enumerator_object__o v79; // [xsp+18h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v80; // [xsp+30h] [xbp-A0h] BYREF
  Il2CppObject *value; // [xsp+48h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v82; // [xsp+50h] [xbp-80h] BYREF

  if ( (byte_5971673 & 1) == 0 )
  {
    sub_2213A60(&UserEventAlloutBattleMaster_ClearSvtEquipInfo_TypeInfo);
    sub_2213A60(&UserEventAlloutBattleMaster_ClearSvtInfo_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_2213A60(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_object__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_object__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtEquipInfo__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_object__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtEquipInfo___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo___ctor__);
    sub_2213A60(&System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__TypeInfo);
    sub_2213A60(&System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtEquipInfo__TypeInfo);
    sub_2213A60(&System_Collections_Generic_List_object__TypeInfo);
    sub_2213A60(&StringLiteral_22257/*"lc"*/);
    sub_2213A60(&StringLiteral_19645/*"ec"*/);
    sub_2213A60(&StringLiteral_25136/*"svtEqs"*/);
    sub_2213A60(&StringLiteral_25139/*"svtId"*/);
    sub_2213A60(&StringLiteral_21233/*"id"*/);
    sub_2213A60(&StringLiteral_21265/*"ilc"*/);
    sub_2213A60(&StringLiteral_22451/*"lv"*/);
    byte_5971673 = 1;
  }
  memset(&v82, 0, sizeof(v82));
  value = 0;
  memset(&v80, 0, sizeof(v80));
  v4 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo___ctor__);
  if ( !deckList )
    sub_2213CDC(v5, v6);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v79,
    deckList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_object__GetEnumerator__);
  v82 = v79;
  v77 = 0;
  v78 = &v82;
  while ( 1 )
  {
    if ( !System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v82,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_object__MoveNext__) )
    {
      v71 = v77;
      goto LABEL_36;
    }
    current = v82.fields._current;
    if ( v82.fields._current )
    {
      naturalAligment = System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.naturalAligment;
      if ( v82.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (System_Collections_Generic_Dictionary_string__object__c *)v82.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
      {
        sub_221405C(v82.fields._current, System_Collections_Generic_Dictionary_string__object__TypeInfo, v7);
LABEL_41:
        sub_2213CDC(DicToInt, v14);
      }
    }
    v10 = sub_2213CCC(UserEventAlloutBattleMaster_ClearSvtInfo_TypeInfo);
    System_Object___ctor((Il2CppObject *)v10, 0);
    DicToInt = (UserEventAlloutBattleMaster_o *)UserEventAlloutBattleMaster__GetDicToInt(
                                                  v11,
                                                  (System_Collections_Generic_Dictionary_string__object__o *)current,
                                                  (System_String_o *)StringLiteral_21233/*"id"*/,
                                                  v12);
    if ( !v10 )
      goto LABEL_41;
    v16 = (System_String_o *)StringLiteral_25139/*"svtId"*/;
    *(_DWORD *)(v10 + 16) = (_DWORD)DicToInt;
    v17 = (UserEventAlloutBattleMaster_o *)UserEventAlloutBattleMaster__GetDicToInt(
                                             DicToInt,
                                             (System_Collections_Generic_Dictionary_string__object__o *)current,
                                             v16,
                                             v15);
    *(_DWORD *)(v10 + 20) = (_DWORD)v17;
    v19 = (UserEventAlloutBattleMaster_o *)UserEventAlloutBattleMaster__GetDicToInt(
                                             v17,
                                             (System_Collections_Generic_Dictionary_string__object__o *)current,
                                             (System_String_o *)StringLiteral_22451/*"lv"*/,
                                             v18);
    v20 = (System_String_o *)StringLiteral_22257/*"lc"*/;
    *(_DWORD *)(v10 + 24) = (_DWORD)v19;
    v22 = (UserEventAlloutBattleMaster_o *)UserEventAlloutBattleMaster__GetDicToInt(
                                             v19,
                                             (System_Collections_Generic_Dictionary_string__object__o *)current,
                                             v20,
                                             v21);
    *(_DWORD *)(v10 + 28) = (_DWORD)v22;
    v24 = (UserEventAlloutBattleMaster_o *)UserEventAlloutBattleMaster__GetDicToInt(
                                             v22,
                                             (System_Collections_Generic_Dictionary_string__object__o *)current,
                                             (System_String_o *)StringLiteral_21265/*"ilc"*/,
                                             v23);
    *(_DWORD *)(v10 + 32) = (_DWORD)v24;
    *(_DWORD *)(v10 + 36) = UserEventAlloutBattleMaster__GetDicToInt(
                              v24,
                              (System_Collections_Generic_Dictionary_string__object__o *)current,
                              (System_String_o *)StringLiteral_19645/*"ec"*/,
                              v25);
    v26 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtEquipInfo__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v26,
      (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtEquipInfo___ctor__);
    *(_QWORD *)(v10 + 40) = v26;
    v27 = (System_Collections_Generic_List_object__o **)(v10 + 40);
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v10 + 40), (int32_t)v26, v28, v29, v30, v31, v32, v33);
    if ( !current )
      sub_2213CDC(v34, v35);
    v36 = System_Collections_Generic_Dictionary_object__object___TryGetValue(
            (System_Collections_Generic_Dictionary_object__object__o *)current,
            (Il2CppObject *)StringLiteral_25136/*"svtEqs"*/,
            &value,
            (const MethodInfo_3FFF778 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    if ( v36 )
      break;
LABEL_27:
    if ( !v4
      || (items = v4->fields._items,
          v68 = Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__Add__,
          ++v4->fields._version,
          !items) )
    {
      sub_2213CDC(v36, v37);
    }
    size = v4->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v4,
        (Il2CppObject *)v10,
        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v68[4] + 192LL) + 112LL));
    }
    else
    {
      v70 = &items->obj.klass + size;
      v4->fields._size = size + 1;
      v70[4] = (Il2CppClass *)v10;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v70 + 4), v10, v38, v39, v40, v41, v42, v43);
    }
  }
  if ( !value
    || (v44 = System_Collections_Generic_List_object__TypeInfo->_2.naturalAligment,
        value->klass->_2.naturalAligment < (unsigned int)v44)
    || (System_Collections_Generic_List_object__c *)value->klass->_2.typeHierarchy[v44 - 1] != System_Collections_Generic_List_object__TypeInfo )
  {
    sub_2213CDC(value, v37);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v79,
    (System_Collections_Generic_List_object__o *)value,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_object__GetEnumerator__);
  v80 = v79;
  v79.fields._list = 0;
  *(_QWORD *)&v79.fields._index = &v80;
  while ( 1 )
  {
    if ( !System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v80,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_object__MoveNext__) )
    {
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v80,
        (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
      goto LABEL_27;
    }
    v46 = v80.fields._current;
    if ( v80.fields._current )
    {
      v47 = System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.naturalAligment;
      if ( v80.fields._current->klass->_2.naturalAligment < (unsigned int)v47
        || (System_Collections_Generic_Dictionary_string__object__c *)v80.fields._current->klass->_2.typeHierarchy[v47 - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
      {
        break;
      }
    }
    v48 = sub_2213CCC(UserEventAlloutBattleMaster_ClearSvtEquipInfo_TypeInfo);
    System_Object___ctor((Il2CppObject *)v48, 0);
    v51 = (UserEventAlloutBattleMaster_o *)UserEventAlloutBattleMaster__GetDicToInt(
                                             v49,
                                             (System_Collections_Generic_Dictionary_string__object__o *)v46,
                                             (System_String_o *)StringLiteral_25139/*"svtId"*/,
                                             v50);
    if ( !v48 )
      sub_2213CDC(v51, v52);
    v54 = (System_String_o *)StringLiteral_22257/*"lc"*/;
    *(_DWORD *)(v48 + 16) = (_DWORD)v51;
    *(_DWORD *)(v48 + 20) = UserEventAlloutBattleMaster__GetDicToInt(
                              v51,
                              (System_Collections_Generic_Dictionary_string__object__o *)v46,
                              v54,
                              v53);
    v62 = *v27;
    if ( !*v27
      || (v63 = v62->fields._items,
          v64 = Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtEquipInfo__Add__,
          ++v62->fields._version,
          !v63) )
    {
      sub_2213CDC(v62, v55);
    }
    v65 = v62->fields._size;
    if ( (unsigned int)v65 >= LODWORD(v63->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v62,
        (Il2CppObject *)v48,
        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v64[4] + 192LL) + 112LL));
    }
    else
    {
      v66 = &v63->obj.klass + v65;
      v62->fields._size = v65 + 1;
      v66[4] = (Il2CppClass *)v48;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v66 + 4), v48, v56, v57, v58, v59, v60, v61);
    }
  }
  sub_221405C(v80.fields._current, System_Collections_Generic_Dictionary_string__object__TypeInfo, v45);
  v74 = v73;
  v76 = v75;
  sub_200D580(&v79);
  if ( v74 != 1 )
  {
    sub_200D580(&v77);
    sub_230112C();
  }
  v71 = *(_QWORD *)__cxa_begin_catch(v76);
  v77 = v71;
  __cxa_end_catch();
LABEL_36:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    v78,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
  if ( v71 )
    sub_2213CD4(v71);
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
  System_Collections_Generic_List_object__o *v8; // x19
  System_Collections_Generic_IEnumerator_T__o *v9; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v11; // x9
  int *p_offset; // x10
  __int64 v13; // x0
  __int64 v14; // x0
  __int64 v15; // x1
  System_Collections_Generic_IEnumerator_T__o *v16; // x21
  System_Collections_Generic_IEnumerator_T__c *v17; // x8
  __int64 v18; // x9
  int *v19; // x10
  __int64 v20; // x0
  __int64 v21; // x0
  __int128 v22; // q0
  Il2CppObject *value; // x21
  UserEventAlloutBattleMaster_o *v24; // x0
  const MethodInfo *v25; // x2
  __int64 naturalAligment; // x10
  System_Collections_Generic_List_object__o *v27; // x1
  System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__o *v28; // x8
  int v29; // w22
  System_Collections_Generic_IEnumerator_T__o *v30; // x20
  System_Collections_Generic_IEnumerator_T__c *v31; // x8
  __int64 v32; // x9
  int *v33; // x10
  __int64 v34; // x0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v36; // [xsp+8h] [xbp-C8h] BYREF
  __int64 v37; // [xsp+30h] [xbp-A0h]
  System_Collections_Generic_IEnumerator_T__o **v38; // [xsp+38h] [xbp-98h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v39; // [xsp+40h] [xbp-90h] BYREF
  System_Collections_Generic_IEnumerator_T__o *v40; // [xsp+68h] [xbp-68h] BYREF

  if ( (byte_5971672 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_UserEventAlloutBattleEntity__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_UserEventAlloutBattleEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Current__);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_UserEventAlloutBattleEntity__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Key__);
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__);
    sub_2213A60(&Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo___ctor__);
    sub_2213A60(&System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__TypeInfo);
    sub_2213A60(&System_Collections_Generic_List_object__TypeInfo);
    byte_5971672 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  v40 = 0;
  memset(&v39, 0, sizeof(v39));
  if ( !list )
    goto LABEL_54;
  if ( System_Collections_ObjectModel_Collection_object___get_Count(
         list,
         (const MethodInfo_3E94214 *)Method_System_Collections_ObjectModel_Collection_UserEventAlloutBattleEntity__get_Count__) <= 0 )
  {
LABEL_49:
    v8 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v8,
      (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo___ctor__);
    return (System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__o *)v8;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_54:
    sub_2213CDC(list, *(_QWORD *)&questId);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3E94810 *)Method_System_Collections_ObjectModel_Collection_UserEventAlloutBattleEntity__GetEnumerator__);
  v8 = 0;
  v40 = Enumerator;
  v37 = 0;
  v38 = &v40;
  while ( 1 )
  {
    v9 = v40;
    if ( !v40 )
      sub_2213CDC(Enumerator, v7);
    klass = v40->klass;
    v11 = *(unsigned __int16 *)&v40->klass->_2.rank;
    if ( *(_WORD *)&v40->klass->_2.rank )
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
      v13 = sub_224BC3C(v40, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v14 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v13)(
            v9,
            *(_QWORD *)(v13 + 8));
    if ( (v14 & 1) == 0 )
      break;
    v16 = v40;
    if ( !v40 )
      sub_2213CDC(v14, v15);
    v17 = v40->klass;
    v18 = *(unsigned __int16 *)&v40->klass->_2.rank;
    if ( *(_WORD *)&v40->klass->_2.rank )
    {
      v19 = &v17->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_UserEventAlloutBattleEntity__c **)v19 - 1) != System_Collections_Generic_IEnumerator_UserEventAlloutBattleEntity__TypeInfo )
      {
        --v18;
        v19 += 4;
        if ( !v18 )
          goto LABEL_20;
      }
      v20 = (__int64)&v17->vtable[*v19];
    }
    else
    {
LABEL_20:
      v20 = sub_224BC3C(v40, System_Collections_Generic_IEnumerator_UserEventAlloutBattleEntity__TypeInfo, 0);
    }
    v21 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v20)(
            v16,
            *(_QWORD *)(v20 + 8));
    if ( !v21 )
      sub_2213CDC(0, v7);
    Enumerator = *(System_Collections_Generic_IEnumerator_T__o **)(v21 + 32);
    if ( Enumerator )
    {
      System_Collections_Generic_Dictionary_object__object___GetEnumerator(
        &v36,
        (System_Collections_Generic_Dictionary_object__object__o *)Enumerator,
        (const MethodInfo_3FFE044 *)Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
      v22 = *(_OWORD *)&v36.fields._dictionary;
      v36.fields._dictionary = 0;
      *(_QWORD *)&v36.fields._version = &v39;
      *(_OWORD *)&v39.fields._dictionary = v22;
      v39.fields._current = v36.fields._current;
      *(_QWORD *)&v39.fields._getEnumeratorRetType = *(_QWORD *)&v36.fields._getEnumeratorRetType;
      while ( System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
                &v39,
                (const MethodInfo_41690A0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__) )
      {
        value = v39.fields._current.fields.value;
        v24 = (UserEventAlloutBattleMaster_o *)System_Int32__Parse((System_String_o *)v39.fields._current.fields.key, 0);
        if ( (_DWORD)v24 == questId )
        {
          if ( value
            && (naturalAligment = System_Collections_Generic_List_object__TypeInfo->_2.naturalAligment,
                value->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
          {
            v27 = (System_Collections_Generic_List_object__c *)value->klass->_2.typeHierarchy[naturalAligment - 1] == System_Collections_Generic_List_object__TypeInfo
                ? (System_Collections_Generic_List_object__o *)value
                : 0LL;
          }
          else
          {
            v27 = 0;
          }
          v28 = UserEventAlloutBattleMaster__ConvertClearSvtInfo(v24, v27, v25);
          if ( v28 )
          {
            v29 = 7;
            v8 = (System_Collections_Generic_List_object__o *)v28;
            goto LABEL_36;
          }
        }
      }
      v29 = 3;
LABEL_36:
      System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
        &v39,
        (const MethodInfo_41691C0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
      if ( v29 != 3 )
        goto LABEL_39;
    }
  }
  v29 = 8;
LABEL_39:
  v30 = *v38;
  if ( *v38 )
  {
    v31 = v30->klass;
    v32 = *(unsigned __int16 *)&v30->klass->_2.rank;
    if ( *(_WORD *)&v30->klass->_2.rank )
    {
      v33 = &v31->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v33 - 1) != System_IDisposable_TypeInfo )
      {
        --v32;
        v33 += 4;
        if ( !v32 )
          goto LABEL_44;
      }
      v34 = (__int64)&v31->vtable[*v33];
    }
    else
    {
LABEL_44:
      v34 = sub_224BC3C(*v38, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v34)(v30, *(_QWORD *)(v34 + 8));
  }
  if ( v37 )
    sub_2213CD4(v37);
  if ( (v29 | 8) == 8 )
    goto LABEL_49;
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

  if ( (byte_5971674 & 1) == 0 )
  {
    this = (UserEventAlloutBattleMaster_o *)sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    byte_5971674 = 1;
  }
  value = 0;
  if ( !dic )
    goto LABEL_9;
  if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
         (System_Collections_Generic_Dictionary_object__object__o *)dic,
         (Il2CppObject *)key,
         &value,
         (const MethodInfo_3FFF778 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
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
    sub_2213CDC(this, dic);
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

  if ( (byte_597166F & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_UserEventAlloutBattleMaster__UserEventAlloutBattleEntity__string__GetEntity__);
    byte_597166F = 1;
  }
  PK = (Il2CppObject *)UserEventAlloutBattleEntity__CreatePK(
                         userId,
                         eventId,
                         alloutBattleId,
                         *(const MethodInfo **)&alloutBattleId);
  return (UserEventAlloutBattleEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                            PK,
                                            (const MethodInfo_3F157EC *)Method_DataMasterBase_UserEventAlloutBattleMaster__UserEventAlloutBattleEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool UserEventAlloutBattleMaster__IsAlreadyUsedServant(
        UserEventAlloutBattleMaster_o *this,
        int32_t svtId,
        int32_t eventId,
        int32_t alloutBattleId,
        const MethodInfo *method)
{
  int v9; // w8
  NetworkManager_c *v10; // x0
  UserEventAlloutBattleEntity_o *Entity; // x0
  __int64 v12; // x1
  System_Collections_Generic_Dictionary_object__object__o *clearDeckInfoDic; // x0
  char v14; // w28
  __int64 v15; // x1
  __int64 naturalAligment; // x10
  __int128 v17; // q0
  _BOOL8 v18; // x0
  __int64 v19; // x2
  const MethodInfo *v20; // x3
  __int64 v21; // x10
  int v22; // w24
  __int64 v23; // x19
  bool v24; // w20
  int v26; // w1
  int v27; // w20
  void *v28; // x0
  void *v29; // x24
  __int64 v30; // [xsp+8h] [xbp-E8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *v31; // [xsp+10h] [xbp-E0h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v32; // [xsp+18h] [xbp-D8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v33; // [xsp+40h] [xbp-B0h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v34; // [xsp+60h] [xbp-90h] BYREF

  if ( (byte_5971671 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
    sub_2213A60(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_object__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_object__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__);
    sub_2213A60(&Method_System_Collections_Generic_List_object__GetEnumerator__);
    sub_2213A60(&System_Collections_Generic_List_object__TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&StringLiteral_25139/*"svtId"*/);
    byte_5971671 = 1;
  }
  memset(&v33, 0, sizeof(v33));
  v9 = *(&NetworkManager_TypeInfo->_2.cctor_finished + 1);
  memset(&v34, 0, sizeof(v34));
  if ( !v9 )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&svtId);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  v10 = NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&svtId);
    v10 = NetworkManager_TypeInfo;
  }
  Entity = UserEventAlloutBattleMaster__GetEntity(
             this,
             v10->static_fields->userIdNumber,
             eventId,
             alloutBattleId,
             method);
  if ( !Entity )
    return 0;
  clearDeckInfoDic = (System_Collections_Generic_Dictionary_object__object__o *)Entity->fields.clearDeckInfoDic;
  if ( !clearDeckInfoDic )
    sub_2213CDC(0, v12);
  System_Collections_Generic_Dictionary_object__object___GetEnumerator(
    &v32,
    clearDeckInfoDic,
    (const MethodInfo_3FFE044 *)Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
  v14 = 0;
  v34 = v32;
  v30 = 0;
  v31 = &v34;
  while ( 2 )
  {
    if ( System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
           &v34,
           (const MethodInfo_41690A0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__) )
    {
      if ( !v34.fields._current.fields.value
        || (naturalAligment = System_Collections_Generic_List_object__TypeInfo->_2.naturalAligment,
            v34.fields._current.fields.value->klass->_2.naturalAligment < (unsigned int)naturalAligment)
        || (System_Collections_Generic_List_object__c *)v34.fields._current.fields.value->klass->_2.typeHierarchy[naturalAligment - 1] != System_Collections_Generic_List_object__TypeInfo )
      {
        sub_2213CDC(v34.fields._current.fields.value, v15);
      }
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v32,
        (System_Collections_Generic_List_object__o *)v34.fields._current.fields.value,
        (const MethodInfo_448473C *)Method_System_Collections_Generic_List_object__GetEnumerator__);
      v17 = *(_OWORD *)&v32.fields._dictionary;
      v32.fields._dictionary = 0;
      *(_QWORD *)&v32.fields._version = &v33;
      *(_OWORD *)&v33.fields._list = v17;
      v33.fields._current = v32.fields._current.fields.key;
      while ( 1 )
      {
        v18 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v33,
                (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_object__MoveNext__);
        if ( !v18 )
          break;
        if ( v33.fields._current )
        {
          v21 = System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.naturalAligment;
          if ( v33.fields._current->klass->_2.naturalAligment < (unsigned int)v21
            || (System_Collections_Generic_Dictionary_string__object__c *)v33.fields._current->klass->_2.typeHierarchy[v21 - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
          {
            sub_221405C(v33.fields._current, System_Collections_Generic_Dictionary_string__object__TypeInfo, v19);
            v27 = v26;
            v29 = v28;
            sub_200D580(&v32);
            if ( v27 != 1 )
            {
              sub_1FF99AC(&v30);
              sub_230112C();
            }
            v23 = *(_QWORD *)__cxa_begin_catch(v29);
            v30 = v23;
            __cxa_end_catch();
            v24 = 0;
            goto LABEL_29;
          }
        }
        if ( UserEventAlloutBattleMaster__GetDicToInt(
               (UserEventAlloutBattleMaster_o *)v18,
               (System_Collections_Generic_Dictionary_string__object__o *)v33.fields._current,
               (System_String_o *)StringLiteral_25139/*"svtId"*/,
               v20) == svtId )
        {
          v14 = 1;
          v22 = 7;
          goto LABEL_24;
        }
      }
      v22 = 3;
LABEL_24:
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v33,
        (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
      if ( v22 == 3 )
        continue;
    }
    else
    {
      v22 = 8;
    }
    break;
  }
  v23 = v30;
  v24 = (v22 == 7) & v14;
LABEL_29:
  System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
    v31,
    (const MethodInfo_41691C0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
  if ( v23 )
    sub_2213CD4(v23);
  return v24;
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

  if ( (byte_5971670 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_UserEventAlloutBattleMaster__UserEventAlloutBattleEntity__string__TryGetEntity__);
    byte_5971670 = 1;
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
           (const MethodInfo_3F15838 *)Method_DataMasterBase_UserEventAlloutBattleMaster__UserEventAlloutBattleEntity__string__TryGetEntity__);
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