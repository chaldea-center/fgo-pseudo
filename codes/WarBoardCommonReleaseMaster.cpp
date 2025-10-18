void WarBoardCommonReleaseMaster___ctor(WarBoardCommonReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C4410A & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_WarBoardCommonReleaseMaster__WarBoardCommonReleaseEntity__string___ctor__);
    byte_4C4410A = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    471,
    (const MethodInfo_33A3834 *)Method_DataMasterBase_WarBoardCommonReleaseMaster__WarBoardCommonReleaseEntity__string___ctor__);
}


WarBoardCommonReleaseEntity_o *WarBoardCommonReleaseMaster__GetEntity(
        WarBoardCommonReleaseMaster_o *this,
        int32_t id,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C4410B & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_WarBoardCommonReleaseMaster__WarBoardCommonReleaseEntity__string__GetEntity__);
    byte_4C4410B = 1;
  }
  PK = (Il2CppObject *)WarBoardCommonReleaseEntity__CreatePK(id, priority, 0);
  return (WarBoardCommonReleaseEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                            PK,
                                            (const MethodInfo_33A5B58 *)Method_DataMasterBase_WarBoardCommonReleaseMaster__WarBoardCommonReleaseEntity__string__GetEntity__);
}


WarBoardCommonReleaseEntity_array *WarBoardCommonReleaseMaster__GetList(
        WarBoardCommonReleaseMaster_o *this,
        int32_t id,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v7; // w22
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  System_Collections_ObjectModel_Collection_T__o *v10; // x1
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x0

  if ( (byte_4C44108 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_WarBoardCommonReleaseEntity__get_Count__);
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_WarBoardCommonReleaseEntity__get_Item__);
    sub_1C37058(&Method_System_Collections_Generic_List_WarBoardCommonReleaseEntity__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_WarBoardCommonReleaseEntity__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_WarBoardCommonReleaseEntity___ctor__);
    sub_1C37058(&System_Collections_Generic_List_WarBoardCommonReleaseEntity__TypeInfo);
    byte_4C44108 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_WarBoardCommonReleaseEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_WarBoardCommonReleaseEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_18;
  v7 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                               list,
                                                               (const MethodInfo_333A510 *)Method_System_Collections_ObjectModel_Collection_WarBoardCommonReleaseEntity__get_Count__);
    if ( v7 >= (int)list )
      break;
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_18;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v7,
                                                               (const MethodInfo_333A5A0 *)Method_System_Collections_ObjectModel_Collection_WarBoardCommonReleaseEntity__get_Item__);
    if ( list )
    {
      v10 = list;
      if ( LODWORD(list->fields.items) == id )
      {
        if ( !v5 )
          goto LABEL_18;
        items = v5->fields._items;
        v12 = Method_System_Collections_Generic_List_WarBoardCommonReleaseEntity__Add__;
        ++v5->fields._version;
        if ( !items )
          goto LABEL_18;
        size = v5->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v5,
            (Il2CppObject *)list,
            *(const MethodInfo_37A3024 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
        }
        else
        {
          v14 = &items->obj.klass + size;
          v5->fields._size = size + 1;
          v14[4] = (Il2CppClass *)v10;
          sub_1C36FFC((CGThumbnailListItem_o *)(v14 + 4), (int32_t)v10, v8, v9);
        }
      }
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v7;
    if ( !list )
      goto LABEL_18;
  }
  if ( !v5 )
LABEL_18:
    sub_1C372B4(list);
  return (WarBoardCommonReleaseEntity_array *)System_Collections_Generic_List_object___ToArray(
                                                v5,
                                                (const MethodInfo_37A4B7C *)Method_System_Collections_Generic_List_WarBoardCommonReleaseEntity__ToArray__);
}


bool WarBoardCommonReleaseMaster__IsOpen(WarBoardCommonReleaseMaster_o *this, int32_t id, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int32_t condGroup; // [xsp+Ch] [xbp-4h] BYREF

  condGroup = 0;
  return WarBoardCommonReleaseMaster__IsOpen_43303060(this, id, &condGroup, v3);
}


bool WarBoardCommonReleaseMaster__IsOpen_43303060(
        WarBoardCommonReleaseMaster_o *this,
        int32_t id,
        int32_t *condGroup,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__bool__o *v7; // x20
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  const MethodInfo *v9; // x2
  System_Collections_ObjectModel_Collection_T__c *klass; // x8
  System_Collections_ObjectModel_Collection_T__o *v11; // x21
  __int64 v12; // x22
  int32_t *v13; // x27
  bool IsOpen; // w0
  bool v16; // w20
  int v17; // w19
  _OWORD v18[2]; // [xsp+0h] [xbp-90h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v19; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4C44109 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_WarBoardCommonReleaseEntity__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__bool__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__bool__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__bool__get_Item__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
    sub_1C37058(&System_Collections_Generic_Dictionary_int__bool__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_KeyValuePair_int__bool__get_Key__);
    sub_1C37058(&Method_System_Collections_Generic_KeyValuePair_int__bool__get_Value__);
    byte_4C44109 = 1;
  }
  memset(&v19, 0, 32);
  *condGroup = -1;
  if ( id < 0 )
    return 0;
  v7 = (System_Collections_Generic_Dictionary_int__bool__o *)sub_1C372A4(System_Collections_Generic_Dictionary_int__bool__TypeInfo);
  System_Collections_Generic_Dictionary_int__bool____ctor(
    v7,
    (const MethodInfo_33EB350 *)Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_29;
  if ( System_Collections_ObjectModel_Collection_object___get_Count(
         list,
         (const MethodInfo_333A510 *)Method_System_Collections_ObjectModel_Collection_WarBoardCommonReleaseEntity__get_Count__) < 1 )
    return 1;
  list = (System_Collections_ObjectModel_Collection_T__o *)WarBoardCommonReleaseMaster__GetList(this, id, v9);
  if ( !list )
    goto LABEL_29;
  klass = list[1].klass;
  v11 = list;
  if ( !klass )
    return 0;
  if ( (int)klass >= 1 )
  {
    v12 = 0;
    while ( 1 )
    {
      if ( (unsigned int)v12 >= (unsigned int)klass )
        sub_1C372BC(list);
      v13 = (int32_t *)*((_QWORD *)&v11[1].monitor + v12);
      if ( !v13 || !v7 )
        break;
      if ( !System_Collections_Generic_Dictionary_int__bool___ContainsKey(
              v7,
              v13[6],
              (const MethodInfo_33EBF24 *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__)
        || (list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_Generic_Dictionary_int__bool___get_Item(
                                                                       v7,
                                                                       v13[6],
                                                                       (const MethodInfo_33EBC80 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Item__),
            ((unsigned __int8)list & 1) != 0) )
      {
        IsOpen = WarBoardCondType__IsOpen(v13[7], v13[8], v13[9], v13[10], v13[11], 0);
        System_Collections_Generic_Dictionary_int__bool___set_Item(
          v7,
          v13[6],
          IsOpen,
          (const MethodInfo_33EBD10 *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
      }
      LODWORD(klass) = v11[1].klass;
      if ( (int)++v12 >= (int)klass )
        goto LABEL_20;
    }
LABEL_29:
    sub_1C372B4(list);
  }
  if ( !v7 )
    goto LABEL_29;
LABEL_20:
  if ( System_Collections_Generic_Dictionary_int__bool___get_Count(
         v7,
         (const MethodInfo_33EB9D0 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Count__) < 1 )
    return 1;
  System_Collections_Generic_Dictionary_int__bool___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v18,
    v7,
    (const MethodInfo_33EC114 *)Method_System_Collections_Generic_Dictionary_int__bool__GetEnumerator__);
  *(_OWORD *)&v19.fields._dictionary = v18[0];
  v19.fields._current = (struct System_Collections_Generic_KeyValuePair_TKey__TValue__o)v18[1];
  while ( 1 )
  {
    v16 = System_Collections_Generic_Dictionary_Enumerator_int__bool___MoveNext(
            &v19,
            (const MethodInfo_354E8F0 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__MoveNext__);
    if ( !v16 )
      break;
    if ( ((__int64)v19.fields._current.fields.key & 0xFF00000000LL) != 0 )
    {
      *condGroup = (int32_t)v19.fields._current.fields.key;
      v17 = 12;
      goto LABEL_27;
    }
  }
  v17 = 13;
LABEL_27:
  System_Collections_Generic_Dictionary_Enumerator_int__bool___Dispose(
    &v19,
    (const MethodInfo_354E9F8 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__Dispose__);
  return v16 && v17 == 12;
}


bool WarBoardCommonReleaseMaster__TryGetEntity(
        WarBoardCommonReleaseMaster_o *this,
        WarBoardCommonReleaseEntity_o **entity,
        int32_t id,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4C4410C & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_WarBoardCommonReleaseMaster__WarBoardCommonReleaseEntity__string__TryGetEntity__);
    byte_4C4410C = 1;
  }
  PK = (Il2CppObject *)WarBoardCommonReleaseEntity__CreatePK(id, priority, 0);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_33A5BA4 *)Method_DataMasterBase_WarBoardCommonReleaseMaster__WarBoardCommonReleaseEntity__string__TryGetEntity__);
}