void WarBoardCommonReleaseMaster___ctor(WarBoardCommonReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4D2D9FF & 1) == 0 )
  {
    sub_1C94098(&Method_DataMasterBase_WarBoardCommonReleaseMaster__WarBoardCommonReleaseEntity__string___ctor__);
    byte_4D2D9FF = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    471,
    (const MethodInfo_345DC54 *)Method_DataMasterBase_WarBoardCommonReleaseMaster__WarBoardCommonReleaseEntity__string___ctor__);
}


WarBoardCommonReleaseEntity_o *WarBoardCommonReleaseMaster__GetEntity(
        WarBoardCommonReleaseMaster_o *this,
        int32_t id,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4D2DA00 & 1) == 0 )
  {
    sub_1C94098(&Method_DataMasterBase_WarBoardCommonReleaseMaster__WarBoardCommonReleaseEntity__string__GetEntity__);
    byte_4D2DA00 = 1;
  }
  PK = (Il2CppObject *)WarBoardCommonReleaseEntity__CreatePK(id, priority, 0);
  return (WarBoardCommonReleaseEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                            PK,
                                            (const MethodInfo_345FF78 *)Method_DataMasterBase_WarBoardCommonReleaseMaster__WarBoardCommonReleaseEntity__string__GetEntity__);
}


WarBoardCommonReleaseEntity_array *WarBoardCommonReleaseMaster__GetList(
        WarBoardCommonReleaseMaster_o *this,
        int32_t id,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  System_Collections_ObjectModel_Collection_T__o *v6; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v8; // w22
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0

  if ( (byte_4D2D9FD & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_ObjectModel_Collection_WarBoardCommonReleaseEntity__get_Count__);
    sub_1C94098(&Method_System_Collections_ObjectModel_Collection_WarBoardCommonReleaseEntity__get_Item__);
    sub_1C94098(&Method_System_Collections_Generic_List_WarBoardCommonReleaseEntity__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_WarBoardCommonReleaseEntity__ToArray__);
    sub_1C94098(&Method_System_Collections_Generic_List_WarBoardCommonReleaseEntity___ctor__);
    sub_1C94098(&System_Collections_Generic_List_WarBoardCommonReleaseEntity__TypeInfo);
    byte_4D2D9FD = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_WarBoardCommonReleaseEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_WarBoardCommonReleaseEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_18;
  v8 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                               list,
                                                               (const MethodInfo_33F3B64 *)Method_System_Collections_ObjectModel_Collection_WarBoardCommonReleaseEntity__get_Count__);
    if ( v8 >= (int)list )
      break;
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_18;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v8,
                                                               (const MethodInfo_33F3BF4 *)Method_System_Collections_ObjectModel_Collection_WarBoardCommonReleaseEntity__get_Item__);
    if ( list )
    {
      v6 = list;
      if ( LODWORD(list->fields.items) == id )
      {
        if ( !v5 )
          goto LABEL_18;
        items = v5->fields._items;
        v16 = Method_System_Collections_Generic_List_WarBoardCommonReleaseEntity__Add__;
        ++v5->fields._version;
        if ( !items )
          goto LABEL_18;
        size = v5->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v5,
            (Il2CppObject *)list,
            *(const MethodInfo_386AE34 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
        }
        else
        {
          v18 = &items->obj.klass + size;
          v5->fields._size = size + 1;
          v18[4] = (Il2CppClass *)v6;
          sub_1C9403C((GrandQuestFolderBoardItem_o *)(v18 + 4), (int32_t)v6, v9, v10, v11, v12, v13, v14);
        }
      }
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v8;
    if ( !list )
      goto LABEL_18;
  }
  if ( !v5 )
LABEL_18:
    sub_1C942F0(list, v6);
  return (WarBoardCommonReleaseEntity_array *)System_Collections_Generic_List_object___ToArray(
                                                v5,
                                                (const MethodInfo_386C98C *)Method_System_Collections_Generic_List_WarBoardCommonReleaseEntity__ToArray__);
}


bool WarBoardCommonReleaseMaster__IsOpen(WarBoardCommonReleaseMaster_o *this, int32_t id, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int32_t condGroup; // [xsp+Ch] [xbp-4h] BYREF

  condGroup = 0;
  return WarBoardCommonReleaseMaster__IsOpen_44089436(this, id, &condGroup, v3);
}


bool WarBoardCommonReleaseMaster__IsOpen_44089436(
        WarBoardCommonReleaseMaster_o *this,
        int32_t id,
        int32_t *condGroup,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__bool__o *v7; // x20
  __int64 v8; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  const MethodInfo *v10; // x2
  System_Collections_ObjectModel_Collection_T__c *klass; // x8
  System_Collections_ObjectModel_Collection_T__o *v12; // x21
  __int64 v13; // x22
  int32_t *v14; // x27
  bool IsOpen; // w0
  bool v17; // w20
  int v18; // w19
  _OWORD v19[2]; // [xsp+0h] [xbp-90h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v20; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4D2D9FE & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_ObjectModel_Collection_WarBoardCommonReleaseEntity__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__bool__GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__bool__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__bool__get_Item__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
    sub_1C94098(&System_Collections_Generic_Dictionary_int__bool__TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_KeyValuePair_int__bool__get_Key__);
    sub_1C94098(&Method_System_Collections_Generic_KeyValuePair_int__bool__get_Value__);
    byte_4D2D9FE = 1;
  }
  memset(&v20, 0, 32);
  *condGroup = -1;
  if ( id < 0 )
    return 0;
  v7 = (System_Collections_Generic_Dictionary_int__bool__o *)sub_1C942E4(System_Collections_Generic_Dictionary_int__bool__TypeInfo);
  System_Collections_Generic_Dictionary_int__bool____ctor(
    v7,
    (const MethodInfo_34A56A0 *)Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_29;
  if ( System_Collections_ObjectModel_Collection_object___get_Count(
         list,
         (const MethodInfo_33F3B64 *)Method_System_Collections_ObjectModel_Collection_WarBoardCommonReleaseEntity__get_Count__) < 1 )
    return 1;
  list = (System_Collections_ObjectModel_Collection_T__o *)WarBoardCommonReleaseMaster__GetList(this, id, v10);
  if ( !list )
    goto LABEL_29;
  klass = list[1].klass;
  v12 = list;
  if ( !klass )
    return 0;
  if ( (int)klass >= 1 )
  {
    v13 = 0;
    while ( 1 )
    {
      if ( (unsigned int)v13 >= (unsigned int)klass )
        sub_1C942F8(list);
      v14 = (int32_t *)*((_QWORD *)&v12[1].monitor + v13);
      if ( !v14 || !v7 )
        break;
      if ( !System_Collections_Generic_Dictionary_int__bool___ContainsKey(
              v7,
              v14[6],
              (const MethodInfo_34A6274 *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__)
        || (list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_Generic_Dictionary_int__bool___get_Item(
                                                                       v7,
                                                                       v14[6],
                                                                       (const MethodInfo_34A5FD0 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Item__),
            ((unsigned __int8)list & 1) != 0) )
      {
        IsOpen = WarBoardCondType__IsOpen(v14[7], v14[8], v14[9], v14[10], v14[11], 0);
        System_Collections_Generic_Dictionary_int__bool___set_Item(
          v7,
          v14[6],
          IsOpen,
          (const MethodInfo_34A6060 *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
      }
      LODWORD(klass) = v12[1].klass;
      if ( (int)++v13 >= (int)klass )
        goto LABEL_20;
    }
LABEL_29:
    sub_1C942F0(list, v8);
  }
  if ( !v7 )
    goto LABEL_29;
LABEL_20:
  if ( System_Collections_Generic_Dictionary_int__bool___get_Count(
         v7,
         (const MethodInfo_34A5D20 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Count__) < 1 )
    return 1;
  System_Collections_Generic_Dictionary_int__bool___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v19,
    v7,
    (const MethodInfo_34A6464 *)Method_System_Collections_Generic_Dictionary_int__bool__GetEnumerator__);
  *(_OWORD *)&v20.fields._dictionary = v19[0];
  v20.fields._current = (struct System_Collections_Generic_KeyValuePair_TKey__TValue__o)v19[1];
  while ( 1 )
  {
    v17 = System_Collections_Generic_Dictionary_Enumerator_int__bool___MoveNext(
            &v20,
            (const MethodInfo_360D4A4 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__MoveNext__);
    if ( !v17 )
      break;
    if ( ((__int64)v20.fields._current.fields.key & 0xFF00000000LL) != 0 )
    {
      *condGroup = (int32_t)v20.fields._current.fields.key;
      v18 = 12;
      goto LABEL_27;
    }
  }
  v18 = 13;
LABEL_27:
  System_Collections_Generic_Dictionary_Enumerator_int__bool___Dispose(
    &v20,
    (const MethodInfo_360D5AC *)Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__Dispose__);
  return v17 && v18 == 12;
}


bool WarBoardCommonReleaseMaster__TryGetEntity(
        WarBoardCommonReleaseMaster_o *this,
        WarBoardCommonReleaseEntity_o **entity,
        int32_t id,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4D2DA01 & 1) == 0 )
  {
    sub_1C94098(&Method_DataMasterBase_WarBoardCommonReleaseMaster__WarBoardCommonReleaseEntity__string__TryGetEntity__);
    byte_4D2DA01 = 1;
  }
  PK = (Il2CppObject *)WarBoardCommonReleaseEntity__CreatePK(id, priority, 0);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_345FFC4 *)Method_DataMasterBase_WarBoardCommonReleaseMaster__WarBoardCommonReleaseEntity__string__TryGetEntity__);
}