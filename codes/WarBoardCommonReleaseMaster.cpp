void __fastcall WarBoardCommonReleaseMaster___ctor(WarBoardCommonReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A4F53A & 1) == 0 )
  {
    sub_1B863B8(
      &Method_DataMasterBase_WarBoardCommonReleaseMaster__WarBoardCommonReleaseEntity__string___ctor__,
      method);
    byte_4A4F53A = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    471,
    (const MethodInfo_3216A14 *)Method_DataMasterBase_WarBoardCommonReleaseMaster__WarBoardCommonReleaseEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
WarBoardCommonReleaseEntity_o *__fastcall WarBoardCommonReleaseMaster__GetEntity(
        WarBoardCommonReleaseMaster_o *this,
        int32_t id,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A4F53B & 1) == 0 )
  {
    sub_1B863B8(
      &Method_DataMasterBase_WarBoardCommonReleaseMaster__WarBoardCommonReleaseEntity__string__GetEntity__,
      *(_QWORD *)&id);
    byte_4A4F53B = 1;
  }
  PK = (Il2CppObject *)WarBoardCommonReleaseEntity__CreatePK(id, priority, 0LL);
  return (WarBoardCommonReleaseEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                            PK,
                                            (const MethodInfo_3218D38 *)Method_DataMasterBase_WarBoardCommonReleaseMaster__WarBoardCommonReleaseEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
WarBoardCommonReleaseEntity_array *__fastcall WarBoardCommonReleaseMaster__GetList(
        WarBoardCommonReleaseMaster_o *this,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_object__o *v10; // x21
  System_Collections_ObjectModel_Collection_T__o *v11; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v13; // w22
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x0

  if ( (byte_4A4F538 & 1) == 0 )
  {
    sub_1B863B8(
      &Method_System_Collections_ObjectModel_Collection_WarBoardCommonReleaseEntity__get_Count__,
      *(_QWORD *)&id);
    sub_1B863B8(&Method_System_Collections_ObjectModel_Collection_WarBoardCommonReleaseEntity__get_Item__, v5);
    sub_1B863B8(&Method_System_Collections_Generic_List_WarBoardCommonReleaseEntity__Add__, v6);
    sub_1B863B8(&Method_System_Collections_Generic_List_WarBoardCommonReleaseEntity__ToArray__, v7);
    sub_1B863B8(&Method_System_Collections_Generic_List_WarBoardCommonReleaseEntity___ctor__, v8);
    sub_1B863B8(&System_Collections_Generic_List_WarBoardCommonReleaseEntity__TypeInfo, v9);
    byte_4A4F538 = 1;
  }
  v10 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_WarBoardCommonReleaseEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_WarBoardCommonReleaseEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_18;
  v13 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                               list,
                                                               (const MethodInfo_31B0908 *)Method_System_Collections_ObjectModel_Collection_WarBoardCommonReleaseEntity__get_Count__);
    if ( v13 >= (int)list )
      break;
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_18;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v13,
                                                               (const MethodInfo_31B0998 *)Method_System_Collections_ObjectModel_Collection_WarBoardCommonReleaseEntity__get_Item__);
    if ( list )
    {
      v11 = list;
      if ( LODWORD(list->fields.items) == id )
      {
        if ( !v10 )
          goto LABEL_18;
        items = v10->fields._items;
        v17 = Method_System_Collections_Generic_List_WarBoardCommonReleaseEntity__Add__;
        ++v10->fields._version;
        if ( !items )
          goto LABEL_18;
        size = v10->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v10,
            (Il2CppObject *)list,
            *(const MethodInfo_35FC958 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
        }
        else
        {
          v19 = &items->obj.klass + size;
          v10->fields._size = size + 1;
          v19[4] = (Il2CppClass *)v11;
          sub_1B8635C((CGThumbnailListItem_o *)(v19 + 4), (int32_t)v11, v14, v15);
        }
      }
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v13;
    if ( !list )
      goto LABEL_18;
  }
  if ( !v10 )
LABEL_18:
    sub_1B86614(list, v11);
  return (WarBoardCommonReleaseEntity_array *)System_Collections_Generic_List_object___ToArray(
                                                v10,
                                                (const MethodInfo_35FE4B0 *)Method_System_Collections_Generic_List_WarBoardCommonReleaseEntity__ToArray__);
}


bool __fastcall WarBoardCommonReleaseMaster__IsOpen(
        WarBoardCommonReleaseMaster_o *this,
        int32_t id,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int32_t condGroup; // [xsp+Ch] [xbp-4h] BYREF

  condGroup = 0;
  return WarBoardCommonReleaseMaster__IsOpen_41368412(this, id, &condGroup, v3);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall WarBoardCommonReleaseMaster__IsOpen_41368412(
        WarBoardCommonReleaseMaster_o *this,
        int32_t id,
        int32_t *condGroup,
        const MethodInfo *method)
{
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
  System_Collections_Generic_Dictionary_int__bool__o *v19; // x20
  __int64 v20; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  const MethodInfo *v22; // x2
  System_Collections_ObjectModel_Collection_T__c *klass; // x8
  System_Collections_ObjectModel_Collection_T__o *v24; // x21
  __int64 v25; // x22
  int32_t *v26; // x27
  bool IsOpen; // w0
  bool v29; // w20
  int v30; // w19
  __int128 v31[2]; // [xsp+0h] [xbp-90h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v32; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4A4F539 & 1) == 0 )
  {
    sub_1B863B8(
      &Method_System_Collections_ObjectModel_Collection_WarBoardCommonReleaseEntity__get_Count__,
      *(_QWORD *)&id);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__, v7);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_int__bool__GetEnumerator__, v8);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_int__bool___ctor__, v9);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_int__bool__get_Count__, v10);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_int__bool__get_Item__, v11);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_int__bool__set_Item__, v12);
    sub_1B863B8(&System_Collections_Generic_Dictionary_int__bool__TypeInfo, v13);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__Dispose__, v14);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__MoveNext__, v15);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__get_Current__, v16);
    sub_1B863B8(&Method_System_Collections_Generic_KeyValuePair_int__bool__get_Key__, v17);
    sub_1B863B8(&Method_System_Collections_Generic_KeyValuePair_int__bool__get_Value__, v18);
    byte_4A4F539 = 1;
  }
  memset(&v32, 0, 32);
  *condGroup = -1;
  if ( (id & 0x80000000) != 0 )
    return 0;
  v19 = (System_Collections_Generic_Dictionary_int__bool__o *)sub_1B86604(System_Collections_Generic_Dictionary_int__bool__TypeInfo);
  System_Collections_Generic_Dictionary_int__bool____ctor(
    v19,
    (const MethodInfo_325E2C0 *)Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_29;
  if ( System_Collections_ObjectModel_Collection_object___get_Count(
         list,
         (const MethodInfo_31B0908 *)Method_System_Collections_ObjectModel_Collection_WarBoardCommonReleaseEntity__get_Count__) < 1 )
    return 1;
  list = (System_Collections_ObjectModel_Collection_T__o *)WarBoardCommonReleaseMaster__GetList(this, id, v22);
  if ( !list )
    goto LABEL_29;
  klass = list[1].klass;
  v24 = list;
  if ( !klass )
    return 0;
  if ( (int)klass >= 1 )
  {
    v25 = 0LL;
    while ( 1 )
    {
      if ( (unsigned int)v25 >= (unsigned int)klass )
        sub_1B8661C(list, v20);
      v26 = (int32_t *)*((_QWORD *)&v24[1].monitor + v25);
      if ( !v26 || !v19 )
        break;
      if ( !System_Collections_Generic_Dictionary_int__bool___ContainsKey(
              v19,
              v26[6],
              (const MethodInfo_325EE94 *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__)
        || (list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_Generic_Dictionary_int__bool___get_Item(
                                                                       v19,
                                                                       v26[6],
                                                                       (const MethodInfo_325EBF0 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Item__),
            ((unsigned __int8)list & 1) != 0) )
      {
        IsOpen = WarBoardCondType__IsOpen(v26[7], v26[8], v26[9], v26[10], v26[11], 0LL);
        System_Collections_Generic_Dictionary_int__bool___set_Item(
          v19,
          v26[6],
          IsOpen,
          (const MethodInfo_325EC80 *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
      }
      LODWORD(klass) = v24[1].klass;
      if ( (int)++v25 >= (int)klass )
        goto LABEL_20;
    }
LABEL_29:
    sub_1B86614(list, v20);
  }
  if ( !v19 )
    goto LABEL_29;
LABEL_20:
  if ( System_Collections_Generic_Dictionary_int__bool___get_Count(
         v19,
         (const MethodInfo_325E940 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Count__) < 1 )
    return 1;
  System_Collections_Generic_Dictionary_int__bool___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v31,
    v19,
    (const MethodInfo_325F084 *)Method_System_Collections_Generic_Dictionary_int__bool__GetEnumerator__);
  *(_OWORD *)&v32.fields._dictionary = v31[0];
  v32.fields._current = (struct System_Collections_Generic_KeyValuePair_TKey__TValue__o)v31[1];
  while ( 1 )
  {
    v29 = System_Collections_Generic_Dictionary_Enumerator_int__bool___MoveNext(
            &v32,
            (const MethodInfo_33B9320 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__MoveNext__);
    if ( !v29 )
      break;
    if ( ((__int64)v32.fields._current.fields.key & 0xFF00000000LL) != 0 )
    {
      *condGroup = (int32_t)v32.fields._current.fields.key;
      v30 = 12;
      goto LABEL_27;
    }
  }
  v30 = 13;
LABEL_27:
  System_Collections_Generic_Dictionary_Enumerator_int__bool___Dispose(
    &v32,
    (const MethodInfo_33B9428 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__Dispose__);
  return v29 && v30 == 12;
}


bool __fastcall WarBoardCommonReleaseMaster__TryGetEntity(
        WarBoardCommonReleaseMaster_o *this,
        WarBoardCommonReleaseEntity_o **entity,
        int32_t id,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4A4F53C & 1) == 0 )
  {
    sub_1B863B8(
      &Method_DataMasterBase_WarBoardCommonReleaseMaster__WarBoardCommonReleaseEntity__string__TryGetEntity__,
      entity);
    byte_4A4F53C = 1;
  }
  PK = (Il2CppObject *)WarBoardCommonReleaseEntity__CreatePK(id, priority, 0LL);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3218D84 *)Method_DataMasterBase_WarBoardCommonReleaseMaster__WarBoardCommonReleaseEntity__string__TryGetEntity__);
}