void __fastcall WarBoardCommonReleaseMaster___ctor(WarBoardCommonReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B67B88 & 1) == 0 )
  {
    sub_1BE4ACC(
      &Method_DataMasterBase_WarBoardCommonReleaseMaster__WarBoardCommonReleaseEntity__string___ctor__,
      method);
    byte_4B67B88 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    469,
    (const MethodInfo_31FDADC *)Method_DataMasterBase_WarBoardCommonReleaseMaster__WarBoardCommonReleaseEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
WarBoardCommonReleaseEntity_o *__fastcall WarBoardCommonReleaseMaster__GetEntity(
        WarBoardCommonReleaseMaster_o *this,
        int32_t id,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B67B89 & 1) == 0 )
  {
    sub_1BE4ACC(
      &Method_DataMasterBase_WarBoardCommonReleaseMaster__WarBoardCommonReleaseEntity__string__GetEntity__,
      *(_QWORD *)&id);
    byte_4B67B89 = 1;
  }
  PK = (Il2CppObject *)WarBoardCommonReleaseEntity__CreatePK(id, priority, *(const MethodInfo **)&priority);
  return (WarBoardCommonReleaseEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                            PK,
                                            (const MethodInfo_31FDB1C *)Method_DataMasterBase_WarBoardCommonReleaseMaster__WarBoardCommonReleaseEntity__string__GetEntity__);
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
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *v11; // x21
  int64_t v12; // x1
  int64_t list; // x0
  int32_t v14; // w22
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0

  if ( (byte_4B67B86 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&id);
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_WarBoardCommonReleaseEntity__Add__, v6);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_WarBoardCommonReleaseEntity__ToArray__, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_WarBoardCommonReleaseEntity___ctor__, v8);
    sub_1BE4ACC(&System_Collections_Generic_List_WarBoardCommonReleaseEntity__TypeInfo, v9);
    sub_1BE4ACC(&WarBoardCommonReleaseEntity_TypeInfo, v10);
    byte_4B67B86 = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_WarBoardCommonReleaseEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_WarBoardCommonReleaseEntity___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_20;
  v14 = 0;
  while ( 1 )
  {
    list = System_Collections_ObjectModel_Collection_object___get_Count(
             (System_Collections_ObjectModel_Collection_T__o *)list,
             (const MethodInfo_3199D94 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( v14 >= (int)list )
      break;
    list = (int64_t)this->fields.list;
    if ( !list )
      goto LABEL_20;
    list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                      (System_Collections_ObjectModel_Collection_T__o *)list,
                      v14,
                      (const MethodInfo_3199E24 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( list )
    {
      v12 = list;
      methodPtr_low = LOBYTE(WarBoardCommonReleaseEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) >= (unsigned int)methodPtr_low
        && *(WarBoardCommonReleaseEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) == WarBoardCommonReleaseEntity_TypeInfo
        && *(_DWORD *)(list + 16) == id )
      {
        if ( !v11 )
          goto LABEL_20;
        items = v11->fields._items;
        v23 = Method_System_Collections_Generic_List_WarBoardCommonReleaseEntity__Add__;
        ++v11->fields._version;
        if ( !items )
          goto LABEL_20;
        size = v11->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v11,
            (Il2CppObject *)list,
            *(const MethodInfo_35EC224 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
        }
        else
        {
          v25 = &items->obj.klass + size;
          v11->fields._size = size + 1;
          v25[4] = (Il2CppClass *)v12;
          sub_1BE4A70((PartyOrganizationUtility_o *)(v25 + 4), v12, v15, v16, v17, v18, v19, v20);
        }
      }
    }
    list = (int64_t)this->fields.list;
    ++v14;
    if ( !list )
      goto LABEL_20;
  }
  if ( !v11 )
LABEL_20:
    sub_1BE4D28(list, v12);
  return (WarBoardCommonReleaseEntity_array *)System_Collections_Generic_List_object___ToArray(
                                                v11,
                                                (const MethodInfo_35EDD7C *)Method_System_Collections_Generic_List_WarBoardCommonReleaseEntity__ToArray__);
}


bool __fastcall WarBoardCommonReleaseMaster__IsOpen(
        WarBoardCommonReleaseMaster_o *this,
        int32_t id,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int32_t condGroup; // [xsp+Ch] [xbp-4h] BYREF

  condGroup = 0;
  return WarBoardCommonReleaseMaster__IsOpen_41293280(this, id, &condGroup, v3);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall WarBoardCommonReleaseMaster__IsOpen_41293280(
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

  if ( (byte_4B67B87 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&id);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_int__bool__GetEnumerator__, v8);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_int__bool___ctor__, v9);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_int__bool__get_Count__, v10);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_int__bool__get_Item__, v11);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_int__bool__set_Item__, v12);
    sub_1BE4ACC(&System_Collections_Generic_Dictionary_int__bool__TypeInfo, v13);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__Dispose__, v14);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__MoveNext__, v15);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__get_Current__, v16);
    sub_1BE4ACC(&Method_System_Collections_Generic_KeyValuePair_int__bool__get_Key__, v17);
    sub_1BE4ACC(&Method_System_Collections_Generic_KeyValuePair_int__bool__get_Value__, v18);
    byte_4B67B87 = 1;
  }
  memset(&v32, 0, 32);
  *condGroup = -1;
  if ( (id & 0x80000000) != 0 )
    return 0;
  v19 = (System_Collections_Generic_Dictionary_int__bool__o *)sub_1BE4D18(System_Collections_Generic_Dictionary_int__bool__TypeInfo);
  System_Collections_Generic_Dictionary_int__bool____ctor(
    v19,
    (const MethodInfo_324146C *)Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_29;
  if ( System_Collections_ObjectModel_Collection_object___get_Count(
         list,
         (const MethodInfo_3199D94 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) < 1 )
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
        sub_1BE4D30(list, v20);
      v26 = (int32_t *)*((_QWORD *)&v24[1].monitor + v25);
      if ( !v26 || !v19 )
        break;
      if ( !System_Collections_Generic_Dictionary_int__bool___ContainsKey(
              v19,
              v26[6],
              (const MethodInfo_3242040 *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__)
        || (list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_Generic_Dictionary_int__bool___get_Item(
                                                                       v19,
                                                                       v26[6],
                                                                       (const MethodInfo_3241D9C *)Method_System_Collections_Generic_Dictionary_int__bool__get_Item__),
            ((unsigned __int8)list & 1) != 0) )
      {
        IsOpen = WarBoardCondType__IsOpen(v26[7], v26[8], v26[9], v26[10], v26[11], 0LL);
        System_Collections_Generic_Dictionary_int__bool___set_Item(
          v19,
          v26[6],
          IsOpen,
          (const MethodInfo_3241E2C *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
      }
      LODWORD(klass) = v24[1].klass;
      if ( (int)++v25 >= (int)klass )
        goto LABEL_20;
    }
LABEL_29:
    sub_1BE4D28(list, v20);
  }
  if ( !v19 )
    goto LABEL_29;
LABEL_20:
  if ( System_Collections_Generic_Dictionary_int__bool___get_Count(
         v19,
         (const MethodInfo_3241AEC *)Method_System_Collections_Generic_Dictionary_int__bool__get_Count__) < 1 )
    return 1;
  System_Collections_Generic_Dictionary_int__bool___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v31,
    v19,
    (const MethodInfo_3242230 *)Method_System_Collections_Generic_Dictionary_int__bool__GetEnumerator__);
  *(_OWORD *)&v32.fields._dictionary = v31[0];
  v32.fields._current = (struct System_Collections_Generic_KeyValuePair_TKey__TValue__o)v31[1];
  while ( 1 )
  {
    v29 = System_Collections_Generic_Dictionary_Enumerator_int__bool___MoveNext(
            &v32,
            (const MethodInfo_339E1D4 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__MoveNext__);
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
    (const MethodInfo_339E2DC *)Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__Dispose__);
  return v29 && v30 == 12;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall WarBoardCommonReleaseMaster__TryGetEntity(
        WarBoardCommonReleaseMaster_o *this,
        WarBoardCommonReleaseEntity_o **entity,
        int32_t id,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4B67B8A & 1) == 0 )
  {
    sub_1BE4ACC(
      &Method_DataMasterBase_WarBoardCommonReleaseMaster__WarBoardCommonReleaseEntity__string__TryGetEntity__,
      entity);
    byte_4B67B8A = 1;
  }
  PK = (Il2CppObject *)WarBoardCommonReleaseEntity__CreatePK(id, priority, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31FDB6C *)Method_DataMasterBase_WarBoardCommonReleaseMaster__WarBoardCommonReleaseEntity__string__TryGetEntity__);
}