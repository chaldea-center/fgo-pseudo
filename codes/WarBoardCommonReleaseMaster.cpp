void __fastcall WarBoardCommonReleaseMaster___ctor(WarBoardCommonReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5C0CF & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_WarBoardCommonReleaseMaster__WarBoardCommonReleaseEntity__string___ctor__);
    byte_4A5C0CF = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    465,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_WarBoardCommonReleaseMaster__WarBoardCommonReleaseEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
WarBoardCommonReleaseEntity_o *__fastcall WarBoardCommonReleaseMaster__GetEntity(
        WarBoardCommonReleaseMaster_o *this,
        int32_t id,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A5C0D0 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_WarBoardCommonReleaseMaster__WarBoardCommonReleaseEntity__string__GetEntity__);
    byte_4A5C0D0 = 1;
  }
  PK = (Il2CppObject *)WarBoardCommonReleaseEntity__CreatePK(id, priority, *(const MethodInfo **)&priority);
  return (WarBoardCommonReleaseEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                            PK,
                                            (const MethodInfo_311DC8C *)Method_DataMasterBase_WarBoardCommonReleaseMaster__WarBoardCommonReleaseEntity__string__GetEntity__);
}


WarBoardCommonReleaseEntity_array *__fastcall WarBoardCommonReleaseMaster__GetList(
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
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  Il2CppClass **v15; // x0

  if ( (byte_4A5C0CD & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_List_WarBoardCommonReleaseEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_WarBoardCommonReleaseEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_WarBoardCommonReleaseEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_WarBoardCommonReleaseEntity__TypeInfo);
    sub_1B885B0(&WarBoardCommonReleaseEntity_TypeInfo);
    byte_4A5C0CD = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_WarBoardCommonReleaseEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_WarBoardCommonReleaseEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_20;
  v8 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                               list,
                                                               (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( v8 >= (int)list )
      break;
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_20;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v8,
                                                               (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( list )
    {
      v6 = list;
      methodPtr_low = LOBYTE(WarBoardCommonReleaseEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
        && (WarBoardCommonReleaseEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == WarBoardCommonReleaseEntity_TypeInfo
        && LODWORD(list->fields.items) == id )
      {
        if ( !v5 )
          goto LABEL_20;
        items = v5->fields._items;
        v13 = Method_System_Collections_Generic_List_WarBoardCommonReleaseEntity__Add__;
        ++v5->fields._version;
        if ( !items )
          goto LABEL_20;
        size = v5->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v5,
            (Il2CppObject *)list,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
        }
        else
        {
          v15 = &items->obj.klass + size;
          v5->fields._size = size + 1;
          v15[4] = (Il2CppClass *)v6;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v15 + 4), (int32_t)v6, v9, v10);
        }
      }
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v8;
    if ( !list )
      goto LABEL_20;
  }
  if ( !v5 )
LABEL_20:
    sub_1B8880C(list, v6);
  return (WarBoardCommonReleaseEntity_array *)System_Collections_Generic_List_object___ToArray(
                                                v5,
                                                (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_WarBoardCommonReleaseEntity__ToArray__);
}


bool __fastcall WarBoardCommonReleaseMaster__IsOpen(
        WarBoardCommonReleaseMaster_o *this,
        int32_t id,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int32_t condGroup; // [xsp+Ch] [xbp-4h] BYREF

  condGroup = 0;
  return WarBoardCommonReleaseMaster__IsOpen_40325648(this, id, &condGroup, v3);
}


bool __fastcall WarBoardCommonReleaseMaster__IsOpen_40325648(
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
  __int128 v19[2]; // [xsp+0h] [xbp-90h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v20; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4A5C0CE & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__bool__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__bool__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__bool__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_int__bool__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_KeyValuePair_int__bool__get_Key__);
    sub_1B885B0(&Method_System_Collections_Generic_KeyValuePair_int__bool__get_Value__);
    byte_4A5C0CE = 1;
  }
  memset(&v20, 0, 32);
  *condGroup = -1;
  if ( (id & 0x80000000) != 0 )
    return 0;
  v7 = (System_Collections_Generic_Dictionary_int__bool__o *)sub_1B887FC(System_Collections_Generic_Dictionary_int__bool__TypeInfo);
  System_Collections_Generic_Dictionary_int__bool____ctor(
    v7,
    (const MethodInfo_315E6FC *)Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_29;
  if ( System_Collections_ObjectModel_Collection_object___get_Count(
         list,
         (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) < 1 )
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
    v13 = 0LL;
    while ( 1 )
    {
      if ( (unsigned int)v13 >= (unsigned int)klass )
        sub_1B88814(list, v8);
      v14 = (int32_t *)*((_QWORD *)&v12[1].monitor + v13);
      if ( !v14 || !v7 )
        break;
      if ( !System_Collections_Generic_Dictionary_int__bool___ContainsKey(
              v7,
              v14[6],
              (const MethodInfo_315F2D0 *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__)
        || (list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_Generic_Dictionary_int__bool___get_Item(
                                                                       v7,
                                                                       v14[6],
                                                                       (const MethodInfo_315F02C *)Method_System_Collections_Generic_Dictionary_int__bool__get_Item__),
            ((unsigned __int8)list & 1) != 0) )
      {
        IsOpen = WarBoardCondType__IsOpen(v14[7], v14[8], v14[9], v14[10], v14[11], 0LL);
        System_Collections_Generic_Dictionary_int__bool___set_Item(
          v7,
          v14[6],
          IsOpen,
          (const MethodInfo_315F0BC *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
      }
      LODWORD(klass) = v12[1].klass;
      if ( (int)++v13 >= (int)klass )
        goto LABEL_20;
    }
LABEL_29:
    sub_1B8880C(list, v8);
  }
  if ( !v7 )
    goto LABEL_29;
LABEL_20:
  if ( System_Collections_Generic_Dictionary_int__bool___get_Count(
         v7,
         (const MethodInfo_315ED7C *)Method_System_Collections_Generic_Dictionary_int__bool__get_Count__) < 1 )
    return 1;
  System_Collections_Generic_Dictionary_int__bool___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v19,
    v7,
    (const MethodInfo_315F4C0 *)Method_System_Collections_Generic_Dictionary_int__bool__GetEnumerator__);
  *(_OWORD *)&v20.fields._dictionary = v19[0];
  v20.fields._current = (struct System_Collections_Generic_KeyValuePair_TKey__TValue__o)v19[1];
  while ( 1 )
  {
    v17 = System_Collections_Generic_Dictionary_Enumerator_int__bool___MoveNext(
            &v20,
            (const MethodInfo_32B4910 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__MoveNext__);
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
    (const MethodInfo_32B4A18 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__Dispose__);
  return v17 && v18 == 12;
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

  if ( (byte_4A5C0D1 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_WarBoardCommonReleaseMaster__WarBoardCommonReleaseEntity__string__TryGetEntity__);
    byte_4A5C0D1 = 1;
  }
  PK = (Il2CppObject *)WarBoardCommonReleaseEntity__CreatePK(id, priority, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_WarBoardCommonReleaseMaster__WarBoardCommonReleaseEntity__string__TryGetEntity__);
}