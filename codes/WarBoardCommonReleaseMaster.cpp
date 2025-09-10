void WarBoardCommonReleaseMaster___ctor(WarBoardCommonReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C2840D & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_WarBoardCommonReleaseMaster__WarBoardCommonReleaseEntity__string___ctor__);
    byte_4C2840D = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    471,
    (const MethodInfo_338A52C *)Method_DataMasterBase_WarBoardCommonReleaseMaster__WarBoardCommonReleaseEntity__string___ctor__);
}


WarBoardCommonReleaseEntity_o *WarBoardCommonReleaseMaster__GetEntity(
        WarBoardCommonReleaseMaster_o *this,
        int32_t id,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C2840E & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_WarBoardCommonReleaseMaster__WarBoardCommonReleaseEntity__string__GetEntity__);
    byte_4C2840E = 1;
  }
  PK = (Il2CppObject *)WarBoardCommonReleaseEntity__CreatePK(id, priority, 0);
  return (WarBoardCommonReleaseEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                            PK,
                                            (const MethodInfo_338C850 *)Method_DataMasterBase_WarBoardCommonReleaseMaster__WarBoardCommonReleaseEntity__string__GetEntity__);
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
  const MethodInfo *v10; // x3
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x0

  if ( (byte_4C2840B & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_WarBoardCommonReleaseEntity__get_Count__);
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_WarBoardCommonReleaseEntity__get_Item__);
    sub_1C2D490(&Method_System_Collections_Generic_List_WarBoardCommonReleaseEntity__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_WarBoardCommonReleaseEntity__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_WarBoardCommonReleaseEntity___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_WarBoardCommonReleaseEntity__TypeInfo);
    byte_4C2840B = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_WarBoardCommonReleaseEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_WarBoardCommonReleaseEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_18;
  v8 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                               list,
                                                               (const MethodInfo_3321208 *)Method_System_Collections_ObjectModel_Collection_WarBoardCommonReleaseEntity__get_Count__);
    if ( v8 >= (int)list )
      break;
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_18;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v8,
                                                               (const MethodInfo_3321298 *)Method_System_Collections_ObjectModel_Collection_WarBoardCommonReleaseEntity__get_Item__);
    if ( list )
    {
      v6 = list;
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
            *(const MethodInfo_3789B84 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
        }
        else
        {
          v14 = &items->obj.klass + size;
          v5->fields._size = size + 1;
          v14[4] = (Il2CppClass *)v6;
          sub_1C2D434((CGThumbnailListItem_o *)(v14 + 4), (int32_t)v6, v9, v10);
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
    sub_1C2D6EC(list, v6);
  return (WarBoardCommonReleaseEntity_array *)System_Collections_Generic_List_object___ToArray(
                                                v5,
                                                (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_WarBoardCommonReleaseEntity__ToArray__);
}


bool WarBoardCommonReleaseMaster__IsOpen(WarBoardCommonReleaseMaster_o *this, int32_t id, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int32_t condGroup; // [xsp+Ch] [xbp-4h] BYREF

  condGroup = 0;
  return WarBoardCommonReleaseMaster__IsOpen_43067996(this, id, &condGroup, v3);
}


bool WarBoardCommonReleaseMaster__IsOpen_43067996(
        WarBoardCommonReleaseMaster_o *this,
        int32_t id,
        int32_t *condGroup,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__bool__o *v7; // x20
  __int64 v8; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  const MethodInfo *v10; // x2
  __int64 v11; // x2
  System_Collections_ObjectModel_Collection_T__c *klass; // x8
  System_Collections_ObjectModel_Collection_T__o *v13; // x21
  __int64 v14; // x22
  int32_t *v15; // x27
  bool IsOpen; // w0
  bool v18; // w20
  int v19; // w19
  _OWORD v20[2]; // [xsp+0h] [xbp-90h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v21; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4C2840C & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_WarBoardCommonReleaseEntity__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__bool__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__bool__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__bool__get_Item__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
    sub_1C2D490(&System_Collections_Generic_Dictionary_int__bool__TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_KeyValuePair_int__bool__get_Key__);
    sub_1C2D490(&Method_System_Collections_Generic_KeyValuePair_int__bool__get_Value__);
    byte_4C2840C = 1;
  }
  memset(&v21, 0, 32);
  *condGroup = -1;
  if ( id < 0 )
    return 0;
  v7 = (System_Collections_Generic_Dictionary_int__bool__o *)sub_1C2D6DC(System_Collections_Generic_Dictionary_int__bool__TypeInfo);
  System_Collections_Generic_Dictionary_int__bool____ctor(
    v7,
    (const MethodInfo_33D2048 *)Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_29;
  if ( System_Collections_ObjectModel_Collection_object___get_Count(
         list,
         (const MethodInfo_3321208 *)Method_System_Collections_ObjectModel_Collection_WarBoardCommonReleaseEntity__get_Count__) < 1 )
    return 1;
  list = (System_Collections_ObjectModel_Collection_T__o *)WarBoardCommonReleaseMaster__GetList(this, id, v10);
  if ( !list )
    goto LABEL_29;
  klass = list[1].klass;
  v13 = list;
  if ( !klass )
    return 0;
  if ( (int)klass >= 1 )
  {
    v14 = 0;
    while ( 1 )
    {
      if ( (unsigned int)v14 >= (unsigned int)klass )
        sub_1C2D6F4(list, v8, v11);
      v15 = (int32_t *)*((_QWORD *)&v13[1].monitor + v14);
      if ( !v15 || !v7 )
        break;
      if ( !System_Collections_Generic_Dictionary_int__bool___ContainsKey(
              v7,
              v15[6],
              (const MethodInfo_33D2C1C *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__)
        || (list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_Generic_Dictionary_int__bool___get_Item(
                                                                       v7,
                                                                       v15[6],
                                                                       (const MethodInfo_33D2978 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Item__),
            ((unsigned __int8)list & 1) != 0) )
      {
        IsOpen = WarBoardCondType__IsOpen(v15[7], v15[8], v15[9], v15[10], v15[11], 0);
        System_Collections_Generic_Dictionary_int__bool___set_Item(
          v7,
          v15[6],
          IsOpen,
          (const MethodInfo_33D2A08 *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
      }
      LODWORD(klass) = v13[1].klass;
      if ( (int)++v14 >= (int)klass )
        goto LABEL_20;
    }
LABEL_29:
    sub_1C2D6EC(list, v8);
  }
  if ( !v7 )
    goto LABEL_29;
LABEL_20:
  if ( System_Collections_Generic_Dictionary_int__bool___get_Count(
         v7,
         (const MethodInfo_33D26C8 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Count__) < 1 )
    return 1;
  System_Collections_Generic_Dictionary_int__bool___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v20,
    v7,
    (const MethodInfo_33D2E0C *)Method_System_Collections_Generic_Dictionary_int__bool__GetEnumerator__);
  *(_OWORD *)&v21.fields._dictionary = v20[0];
  v21.fields._current = (struct System_Collections_Generic_KeyValuePair_TKey__TValue__o)v20[1];
  while ( 1 )
  {
    v18 = System_Collections_Generic_Dictionary_Enumerator_int__bool___MoveNext(
            &v21,
            (const MethodInfo_35355E8 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__MoveNext__);
    if ( !v18 )
      break;
    if ( ((__int64)v21.fields._current.fields.key & 0xFF00000000LL) != 0 )
    {
      *condGroup = (int32_t)v21.fields._current.fields.key;
      v19 = 12;
      goto LABEL_27;
    }
  }
  v19 = 13;
LABEL_27:
  System_Collections_Generic_Dictionary_Enumerator_int__bool___Dispose(
    &v21,
    (const MethodInfo_35356F0 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__Dispose__);
  return v18 && v19 == 12;
}


bool WarBoardCommonReleaseMaster__TryGetEntity(
        WarBoardCommonReleaseMaster_o *this,
        WarBoardCommonReleaseEntity_o **entity,
        int32_t id,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4C2840F & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_WarBoardCommonReleaseMaster__WarBoardCommonReleaseEntity__string__TryGetEntity__);
    byte_4C2840F = 1;
  }
  PK = (Il2CppObject *)WarBoardCommonReleaseEntity__CreatePK(id, priority, 0);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_338C89C *)Method_DataMasterBase_WarBoardCommonReleaseMaster__WarBoardCommonReleaseEntity__string__TryGetEntity__);
}