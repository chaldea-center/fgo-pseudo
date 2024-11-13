void __fastcall WarBoardCommonReleaseMaster___ctor(WarBoardCommonReleaseMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B17188 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_WarBoardCommonReleaseMaster__WarBoardCommonReleaseEntity__string___ctor__,
      method,
      v2);
    byte_4B17188 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    465,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_WarBoardCommonReleaseMaster__WarBoardCommonReleaseEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
WarBoardCommonReleaseEntity_o *__fastcall WarBoardCommonReleaseMaster__GetEntity(
        WarBoardCommonReleaseMaster_o *this,
        int32_t id,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B17189 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_WarBoardCommonReleaseMaster__WarBoardCommonReleaseEntity__string__GetEntity__,
      *(_QWORD *)&id,
      *(_QWORD *)&priority);
    byte_4B17189 = 1;
  }
  PK = (Il2CppObject *)WarBoardCommonReleaseEntity__CreatePK(id, priority, *(const MethodInfo **)&priority);
  return (WarBoardCommonReleaseEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                            PK,
                                            (const MethodInfo_31B3198 *)Method_DataMasterBase_WarBoardCommonReleaseMaster__WarBoardCommonReleaseEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
WarBoardCommonReleaseEntity_array *__fastcall WarBoardCommonReleaseMaster__GetList(
        WarBoardCommonReleaseMaster_o *this,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  System_Collections_Generic_List_object__o *v18; // x21
  int64_t v19; // x1
  int64_t list; // x0
  int32_t v21; // w22
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  Il2CppClass **v32; // x0

  if ( (byte_4B17186 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&id, method);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardCommonReleaseEntity__Add__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardCommonReleaseEntity__ToArray__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardCommonReleaseEntity___ctor__, v12, v13);
    sub_1BCA7E0(&System_Collections_Generic_List_WarBoardCommonReleaseEntity__TypeInfo, v14, v15);
    sub_1BCA7E0(&WarBoardCommonReleaseEntity_TypeInfo, v16, v17);
    byte_4B17186 = 1;
  }
  v18 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_WarBoardCommonReleaseEntity__TypeInfo,
                                                       *(_QWORD *)&id,
                                                       method,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_WarBoardCommonReleaseEntity___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_20;
  v21 = 0;
  while ( 1 )
  {
    list = System_Collections_ObjectModel_Collection_object___get_Count(
             (System_Collections_ObjectModel_Collection_T__o *)list,
             (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( v21 >= (int)list )
      break;
    list = (int64_t)this->fields.list;
    if ( !list )
      goto LABEL_20;
    list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                      (System_Collections_ObjectModel_Collection_T__o *)list,
                      v21,
                      (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( list )
    {
      v19 = list;
      methodPtr_low = LOBYTE(WarBoardCommonReleaseEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) >= (unsigned int)methodPtr_low
        && *(WarBoardCommonReleaseEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) == WarBoardCommonReleaseEntity_TypeInfo
        && *(_DWORD *)(list + 16) == id )
      {
        if ( !v18 )
          goto LABEL_20;
        items = v18->fields._items;
        v30 = Method_System_Collections_Generic_List_WarBoardCommonReleaseEntity__Add__;
        ++v18->fields._version;
        if ( !items )
          goto LABEL_20;
        size = v18->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v18,
            (Il2CppObject *)list,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
        }
        else
        {
          v32 = &items->obj.klass + size;
          v18->fields._size = size + 1;
          v32[4] = (Il2CppClass *)v19;
          sub_1BCA784((PartyOrganizationUtility_o *)(v32 + 4), v19, v22, v23, v24, v25, v26, v27);
        }
      }
    }
    list = (int64_t)this->fields.list;
    ++v21;
    if ( !list )
      goto LABEL_20;
  }
  if ( !v18 )
LABEL_20:
    sub_1BCAA3C(list, v19);
  return (WarBoardCommonReleaseEntity_array *)System_Collections_Generic_List_object___ToArray(
                                                v18,
                                                (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_WarBoardCommonReleaseEntity__ToArray__);
}


bool __fastcall WarBoardCommonReleaseMaster__IsOpen(
        WarBoardCommonReleaseMaster_o *this,
        int32_t id,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int32_t condGroup; // [xsp+Ch] [xbp-4h] BYREF

  condGroup = 0;
  return WarBoardCommonReleaseMaster__IsOpen_41057200(this, id, &condGroup, v3);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall WarBoardCommonReleaseMaster__IsOpen_41057200(
        WarBoardCommonReleaseMaster_o *this,
        int32_t id,
        int32_t *condGroup,
        const MethodInfo *method)
{
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
  System_Collections_Generic_Dictionary_int__bool__o *v31; // x20
  __int64 v32; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  const MethodInfo *v34; // x2
  System_Collections_ObjectModel_Collection_T__c *klass; // x8
  System_Collections_ObjectModel_Collection_T__o *v36; // x21
  __int64 v37; // x22
  int32_t *v38; // x27
  bool IsOpen; // w0
  bool v41; // w20
  int v42; // w19
  __int128 v43[2]; // [xsp+0h] [xbp-90h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v44; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4B17187 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&id,
      condGroup);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__bool__GetEnumerator__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__bool___ctor__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__bool__get_Count__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__bool__get_Item__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__bool__set_Item__, v17, v18);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_int__bool__TypeInfo, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__Dispose__, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__MoveNext__, v23, v24);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__get_Current__, v25, v26);
    sub_1BCA7E0(&Method_System_Collections_Generic_KeyValuePair_int__bool__get_Key__, v27, v28);
    sub_1BCA7E0(&Method_System_Collections_Generic_KeyValuePair_int__bool__get_Value__, v29, v30);
    byte_4B17187 = 1;
  }
  memset(&v44, 0, 32);
  *condGroup = -1;
  if ( (id & 0x80000000) != 0 )
    return 0;
  v31 = (System_Collections_Generic_Dictionary_int__bool__o *)sub_1BCAA2C(
                                                                System_Collections_Generic_Dictionary_int__bool__TypeInfo,
                                                                *(_QWORD *)&id,
                                                                condGroup,
                                                                method);
  System_Collections_Generic_Dictionary_int__bool____ctor(
    v31,
    (const MethodInfo_31F6AE8 *)Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_29;
  if ( System_Collections_ObjectModel_Collection_object___get_Count(
         list,
         (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) < 1 )
    return 1;
  list = (System_Collections_ObjectModel_Collection_T__o *)WarBoardCommonReleaseMaster__GetList(this, id, v34);
  if ( !list )
    goto LABEL_29;
  klass = list[1].klass;
  v36 = list;
  if ( !klass )
    return 0;
  if ( (int)klass >= 1 )
  {
    v37 = 0LL;
    while ( 1 )
    {
      if ( (unsigned int)v37 >= (unsigned int)klass )
        sub_1BCAA44(list, v32);
      v38 = (int32_t *)*((_QWORD *)&v36[1].monitor + v37);
      if ( !v38 || !v31 )
        break;
      if ( !System_Collections_Generic_Dictionary_int__bool___ContainsKey(
              v31,
              v38[6],
              (const MethodInfo_31F76BC *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__)
        || (list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_Generic_Dictionary_int__bool___get_Item(
                                                                       v31,
                                                                       v38[6],
                                                                       (const MethodInfo_31F7418 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Item__),
            ((unsigned __int8)list & 1) != 0) )
      {
        IsOpen = WarBoardCondType__IsOpen(v38[7], v38[8], v38[9], v38[10], v38[11], 0LL);
        System_Collections_Generic_Dictionary_int__bool___set_Item(
          v31,
          v38[6],
          IsOpen,
          (const MethodInfo_31F74A8 *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
      }
      LODWORD(klass) = v36[1].klass;
      if ( (int)++v37 >= (int)klass )
        goto LABEL_20;
    }
LABEL_29:
    sub_1BCAA3C(list, v32);
  }
  if ( !v31 )
    goto LABEL_29;
LABEL_20:
  if ( System_Collections_Generic_Dictionary_int__bool___get_Count(
         v31,
         (const MethodInfo_31F7168 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Count__) < 1 )
    return 1;
  System_Collections_Generic_Dictionary_int__bool___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v43,
    v31,
    (const MethodInfo_31F78AC *)Method_System_Collections_Generic_Dictionary_int__bool__GetEnumerator__);
  *(_OWORD *)&v44.fields._dictionary = v43[0];
  v44.fields._current = (struct System_Collections_Generic_KeyValuePair_TKey__TValue__o)v43[1];
  while ( 1 )
  {
    v41 = System_Collections_Generic_Dictionary_Enumerator_int__bool___MoveNext(
            &v44,
            (const MethodInfo_3353C14 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__MoveNext__);
    if ( !v41 )
      break;
    if ( ((__int64)v44.fields._current.fields.key & 0xFF00000000LL) != 0 )
    {
      *condGroup = (int32_t)v44.fields._current.fields.key;
      v42 = 12;
      goto LABEL_27;
    }
  }
  v42 = 13;
LABEL_27:
  System_Collections_Generic_Dictionary_Enumerator_int__bool___Dispose(
    &v44,
    (const MethodInfo_3353D1C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__Dispose__);
  return v41 && v42 == 12;
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

  if ( (byte_4B1718A & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_WarBoardCommonReleaseMaster__WarBoardCommonReleaseEntity__string__TryGetEntity__,
      entity,
      *(_QWORD *)&id);
    byte_4B1718A = 1;
  }
  PK = (Il2CppObject *)WarBoardCommonReleaseEntity__CreatePK(id, priority, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31B31E8 *)Method_DataMasterBase_WarBoardCommonReleaseMaster__WarBoardCommonReleaseEntity__string__TryGetEntity__);
}