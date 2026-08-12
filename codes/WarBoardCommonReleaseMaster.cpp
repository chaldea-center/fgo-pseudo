void WarBoardCommonReleaseMaster___ctor(WarBoardCommonReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5971A1A & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_WarBoardCommonReleaseMaster__WarBoardCommonReleaseEntity__string___ctor__);
    byte_5971A1A = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    473,
    (const MethodInfo_3F1339C *)Method_DataMasterBase_WarBoardCommonReleaseMaster__WarBoardCommonReleaseEntity__string___ctor__);
}


WarBoardCommonReleaseEntity_o *WarBoardCommonReleaseMaster__GetEntity(
        WarBoardCommonReleaseMaster_o *this,
        int32_t id,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_5971A1B & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_WarBoardCommonReleaseMaster__WarBoardCommonReleaseEntity__string__GetEntity__);
    byte_5971A1B = 1;
  }
  PK = (Il2CppObject *)WarBoardCommonReleaseEntity__CreatePK(id, priority, 0);
  return (WarBoardCommonReleaseEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                            PK,
                                            (const MethodInfo_3F157EC *)Method_DataMasterBase_WarBoardCommonReleaseMaster__WarBoardCommonReleaseEntity__string__GetEntity__);
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
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0

  if ( (byte_5971A18 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_WarBoardCommonReleaseEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_WarBoardCommonReleaseEntity__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_List_WarBoardCommonReleaseEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_WarBoardCommonReleaseEntity__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_WarBoardCommonReleaseEntity___ctor__);
    sub_2213A60(&System_Collections_Generic_List_WarBoardCommonReleaseEntity__TypeInfo);
    byte_5971A18 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_WarBoardCommonReleaseEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_WarBoardCommonReleaseEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_15;
  v8 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                               list,
                                                               (const MethodInfo_3E94214 *)Method_System_Collections_ObjectModel_Collection_WarBoardCommonReleaseEntity__get_Count__);
    if ( v8 >= (int)list )
      break;
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_15;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v8,
                                                               (const MethodInfo_3E942A8 *)Method_System_Collections_ObjectModel_Collection_WarBoardCommonReleaseEntity__get_Item__);
    if ( list )
    {
      v6 = list;
      if ( LODWORD(list->fields.items) == id )
      {
        if ( !v5 )
          goto LABEL_15;
        items = v5->fields._items;
        v16 = Method_System_Collections_Generic_List_WarBoardCommonReleaseEntity__Add__;
        ++v5->fields._version;
        if ( !items )
          goto LABEL_15;
        size = v5->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v5,
            (Il2CppObject *)list,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
        }
        else
        {
          v18 = &items->obj.klass + size;
          v5->fields._size = size + 1;
          v18[4] = (Il2CppClass *)v6;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v18 + 4), (int32_t)v6, v9, v10, v11, v12, v13, v14);
        }
      }
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v8;
    if ( !list )
      goto LABEL_15;
  }
  if ( !v5 )
LABEL_15:
    sub_2213CDC(list, v6);
  return (WarBoardCommonReleaseEntity_array *)System_Collections_Generic_List_object___ToArray(
                                                v5,
                                                (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_WarBoardCommonReleaseEntity__ToArray__);
}


bool WarBoardCommonReleaseMaster__IsOpen(WarBoardCommonReleaseMaster_o *this, int32_t id, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int32_t condGroup; // [xsp+Ch] [xbp-4h] BYREF

  condGroup = 0;
  return WarBoardCommonReleaseMaster__IsOpen_50320096(this, id, &condGroup, v3);
}


bool WarBoardCommonReleaseMaster__IsOpen_50320096(
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
  bool v16; // w20
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v18; // [xsp+10h] [xbp-70h] BYREF

  if ( (byte_5971A19 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_WarBoardCommonReleaseEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__bool__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__bool__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__bool__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
    sub_2213A60(&System_Collections_Generic_Dictionary_int__bool__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_int__bool__get_Key__);
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_int__bool__get_Value__);
    byte_5971A19 = 1;
  }
  *condGroup = -1;
  memset(&v18, 0, 32);
  if ( id < 0 )
    return 0;
  v7 = (System_Collections_Generic_Dictionary_int__bool__o *)sub_2213CCC(System_Collections_Generic_Dictionary_int__bool__TypeInfo);
  System_Collections_Generic_Dictionary_int__bool____ctor(
    v7,
    (const MethodInfo_3F88990 *)Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_26;
  if ( System_Collections_ObjectModel_Collection_object___get_Count(
         list,
         (const MethodInfo_3E94214 *)Method_System_Collections_ObjectModel_Collection_WarBoardCommonReleaseEntity__get_Count__) < 1 )
    return 1;
  list = (System_Collections_ObjectModel_Collection_T__o *)WarBoardCommonReleaseMaster__GetList(this, id, v10);
  if ( !list )
    goto LABEL_26;
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
        sub_2213CE4(list);
      v14 = (int32_t *)*((_QWORD *)&v12[1].monitor + v13);
      if ( !v14 || !v7 )
        break;
      if ( !System_Collections_Generic_Dictionary_int__bool___ContainsKey(
              v7,
              v14[6],
              (const MethodInfo_3F8953C *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__)
        || (list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_Generic_Dictionary_int__bool___get_Item(
                                                                       v7,
                                                                       v14[6],
                                                                       (const MethodInfo_3F892A0 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Item__),
            ((unsigned __int8)list & 1) != 0) )
      {
        IsOpen = WarBoardCondType__IsOpen(v14[7], v14[8], v14[9], v14[10], v14[11], 0);
        System_Collections_Generic_Dictionary_int__bool___set_Item(
          v7,
          v14[6],
          IsOpen,
          (const MethodInfo_3F89330 *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
      }
      LODWORD(klass) = v12[1].klass;
      if ( (int)++v13 >= (int)klass )
        goto LABEL_19;
    }
LABEL_26:
    sub_2213CDC(list, v8);
  }
  if ( !v7 )
    goto LABEL_26;
LABEL_19:
  if ( System_Collections_Generic_Dictionary_int__bool___get_Count(
         v7,
         (const MethodInfo_3F88FD8 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Count__) < 1 )
    return 1;
  System_Collections_Generic_Dictionary_int__bool___GetEnumerator(
    &v18,
    v7,
    (const MethodInfo_3F8972C *)Method_System_Collections_Generic_Dictionary_int__bool__GetEnumerator__);
  while ( 1 )
  {
    v16 = System_Collections_Generic_Dictionary_Enumerator_int__bool___MoveNext(
            &v18,
            (const MethodInfo_41550C4 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__MoveNext__);
    if ( !v16 )
      break;
    if ( ((__int64)v18.fields._current.fields.key & 0xFF00000000LL) != 0 )
    {
      *condGroup = (int32_t)v18.fields._current.fields.key;
      break;
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__bool___Dispose(
    &v18,
    (const MethodInfo_41551D4 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__Dispose__);
  return v16;
}


bool WarBoardCommonReleaseMaster__TryGetEntity(
        WarBoardCommonReleaseMaster_o *this,
        WarBoardCommonReleaseEntity_o **entity,
        int32_t id,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_5971A1C & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_WarBoardCommonReleaseMaster__WarBoardCommonReleaseEntity__string__TryGetEntity__);
    byte_5971A1C = 1;
  }
  PK = (Il2CppObject *)WarBoardCommonReleaseEntity__CreatePK(id, priority, 0);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3F15838 *)Method_DataMasterBase_WarBoardCommonReleaseMaster__WarBoardCommonReleaseEntity__string__TryGetEntity__);
}