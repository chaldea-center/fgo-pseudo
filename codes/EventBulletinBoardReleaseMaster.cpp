void EventBulletinBoardReleaseMaster___ctor(EventBulletinBoardReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C42E95 & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_EventBulletinBoardReleaseMaster__EventBulletinBoardReleaseEntity__string___ctor__);
    byte_4C42E95 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    243,
    (const MethodInfo_33A3834 *)Method_DataMasterBase_EventBulletinBoardReleaseMaster__EventBulletinBoardReleaseEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventBulletinBoardReleaseEntity_o *EventBulletinBoardReleaseMaster__GetEntity(
        EventBulletinBoardReleaseMaster_o *this,
        int32_t bulletinBoardId,
        int32_t condType,
        int32_t condTargetId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C42E93 & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_EventBulletinBoardReleaseMaster__EventBulletinBoardReleaseEntity__string__GetEntity__);
    byte_4C42E93 = 1;
  }
  PK = (Il2CppObject *)EventBulletinBoardReleaseEntity__CreatePK(
                         bulletinBoardId,
                         condType,
                         condTargetId,
                         *(const MethodInfo **)&condTargetId);
  return (EventBulletinBoardReleaseEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                PK,
                                                (const MethodInfo_33A5B58 *)Method_DataMasterBase_EventBulletinBoardReleaseMaster__EventBulletinBoardReleaseEntity__string__GetEntity__);
}


bool EventBulletinBoardReleaseMaster__IsOpen(
        EventBulletinBoardReleaseMaster_o *this,
        int32_t messageId,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__bool__o *v5; // x21
  void *list; // x0
  int v7; // w22
  int32_t v8; // w23
  _DWORD *v9; // x24
  int32_t v10; // w25
  int32_t v11; // w27
  int64_t v12; // x26
  bool IsOpen; // w0
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x20
  System_Collections_Generic_List_bool__o *v15; // x19
  bool v16; // w19
  int v17; // w20
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4C42E96 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_EventBulletinBoardReleaseEntity__get_Count__);
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_EventBulletinBoardReleaseEntity__get_Item__);
    sub_1C37058(&CondType_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__bool__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__bool__get_Item__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__bool__get_Values__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
    sub_1C37058(&System_Collections_Generic_Dictionary_int__bool__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_bool__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_bool__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_bool__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_bool__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_bool___ctor___78044272);
    sub_1C37058(&System_Collections_Generic_List_bool__TypeInfo);
    byte_4C42E96 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  v5 = (System_Collections_Generic_Dictionary_int__bool__o *)sub_1C372A4(System_Collections_Generic_Dictionary_int__bool__TypeInfo);
  System_Collections_Generic_Dictionary_int__bool____ctor(
    v5,
    (const MethodInfo_33EB350 *)Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_27;
  list = (void *)System_Collections_ObjectModel_Collection_object___get_Count(
                   (System_Collections_ObjectModel_Collection_T__o *)list,
                   (const MethodInfo_333A510 *)Method_System_Collections_ObjectModel_Collection_EventBulletinBoardReleaseEntity__get_Count__);
  if ( (int)list >= 1 )
  {
    v7 = (int)list;
    v8 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v8,
               (const MethodInfo_333A5A0 *)Method_System_Collections_ObjectModel_Collection_EventBulletinBoardReleaseEntity__get_Item__);
      if ( !list )
        break;
      v9 = list;
      if ( *((_DWORD *)list + 4) == messageId )
      {
        if ( !v5 )
          break;
        if ( !System_Collections_Generic_Dictionary_int__bool___ContainsKey(
                v5,
                *((_DWORD *)list + 8),
                (const MethodInfo_33EBF24 *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__)
          || (list = (void *)System_Collections_Generic_Dictionary_int__bool___get_Item(
                               v5,
                               v9[8],
                               (const MethodInfo_33EBC80 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Item__),
              ((unsigned __int8)list & 1) != 0) )
        {
          v11 = v9[5];
          v10 = v9[6];
          v12 = (int)v9[7];
          if ( !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          IsOpen = CondType__IsOpen(v11, v10, v12, 0, 0, 0);
          System_Collections_Generic_Dictionary_int__bool___set_Item(
            v5,
            v9[8],
            IsOpen,
            (const MethodInfo_33EBD10 *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
        }
      }
      if ( v7 == ++v8 )
        goto LABEL_16;
    }
LABEL_27:
    sub_1C372B4(list);
  }
LABEL_16:
  if ( !v5 )
    goto LABEL_27;
  if ( System_Collections_Generic_Dictionary_int__bool___get_Count(
         v5,
         (const MethodInfo_33EB9D0 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Count__) < 1 )
    return 1;
  Values = System_Collections_Generic_Dictionary_int__bool___get_Values(
             v5,
             (const MethodInfo_33EBB30 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Values__);
  v15 = (System_Collections_Generic_List_bool__o *)sub_1C372A4(System_Collections_Generic_List_bool__TypeInfo);
  System_Collections_Generic_List_bool____ctor_58049800(
    v15,
    (System_Collections_Generic_IEnumerable_T__o *)Values,
    (const MethodInfo_375C508 *)Method_System_Collections_Generic_List_bool___ctor___78044272);
  if ( !v15 )
    goto LABEL_27;
  System_Collections_Generic_List_bool___GetEnumerator(
    &v19,
    v15,
    (const MethodInfo_375D740 *)Method_System_Collections_Generic_List_bool__GetEnumerator__);
  v20 = v19;
  while ( 1 )
  {
    v16 = System_Collections_Generic_List_Enumerator_bool___MoveNext(
            &v20,
            (const MethodInfo_3525BFC *)Method_System_Collections_Generic_List_Enumerator_bool__MoveNext__);
    if ( !v16 )
      break;
    if ( LOBYTE(v20.fields._current) )
    {
      v17 = 9;
      goto LABEL_25;
    }
  }
  v17 = 10;
LABEL_25:
  System_Collections_Generic_List_Enumerator_bool___Dispose(
    &v20,
    (const MethodInfo_3525BF8 *)Method_System_Collections_Generic_List_Enumerator_bool__Dispose__);
  return v16 && v17 == 9;
}


// local variable allocation has failed, the output may be wrong!
bool EventBulletinBoardReleaseMaster__TryGetEntity(
        EventBulletinBoardReleaseMaster_o *this,
        EventBulletinBoardReleaseEntity_o **entity,
        int32_t bulletinBoardId,
        int32_t condType,
        int32_t condTargetId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4C42E94 & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_EventBulletinBoardReleaseMaster__EventBulletinBoardReleaseEntity__string__TryGetEntity__);
    byte_4C42E94 = 1;
  }
  PK = (Il2CppObject *)EventBulletinBoardReleaseEntity__CreatePK(
                         bulletinBoardId,
                         condType,
                         condTargetId,
                         *(const MethodInfo **)&condType);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_33A5BA4 *)Method_DataMasterBase_EventBulletinBoardReleaseMaster__EventBulletinBoardReleaseEntity__string__TryGetEntity__);
}