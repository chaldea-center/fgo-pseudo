void EventBulletinBoardReleaseMaster___ctor(EventBulletinBoardReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_593855C & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_EventBulletinBoardReleaseMaster__EventBulletinBoardReleaseEntity__string___ctor__);
    byte_593855C = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    245,
    (const MethodInfo_3EDFBF4 *)Method_DataMasterBase_EventBulletinBoardReleaseMaster__EventBulletinBoardReleaseEntity__string___ctor__);
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

  if ( (byte_593855A & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_EventBulletinBoardReleaseMaster__EventBulletinBoardReleaseEntity__string__GetEntity__);
    byte_593855A = 1;
  }
  PK = (Il2CppObject *)EventBulletinBoardReleaseEntity__CreatePK(
                         bulletinBoardId,
                         condType,
                         condTargetId,
                         *(const MethodInfo **)&condTargetId);
  return (EventBulletinBoardReleaseEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                PK,
                                                (const MethodInfo_3EE2044 *)Method_DataMasterBase_EventBulletinBoardReleaseMaster__EventBulletinBoardReleaseEntity__string__GetEntity__);
}


bool EventBulletinBoardReleaseMaster__IsOpen(
        EventBulletinBoardReleaseMaster_o *this,
        int32_t messageId,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__bool__o *v5; // x21
  __int64 v6; // x1
  void *list; // x0
  int v8; // w22
  int32_t v9; // w23
  _DWORD *v10; // x24
  int64_t v11; // x27
  int32_t v12; // w25
  int32_t v13; // w26
  bool IsOpen; // w0
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x20
  System_Collections_Generic_List_bool__o *v16; // x19
  bool v17; // w19
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+18h] [xbp-78h] BYREF

  if ( (byte_593855D & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_EventBulletinBoardReleaseEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_EventBulletinBoardReleaseEntity__get_Item__);
    sub_21FFC50(&CondType_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__bool__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__bool__get_Item__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__bool__get_Values__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
    sub_21FFC50(&System_Collections_Generic_Dictionary_int__bool__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_bool__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_bool__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_bool__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_bool__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_bool___ctor___91414888);
    sub_21FFC50(&System_Collections_Generic_List_bool__TypeInfo);
    byte_593855D = 1;
  }
  memset(&v19, 0, sizeof(v19));
  v5 = (System_Collections_Generic_Dictionary_int__bool__o *)sub_21FFEBC(System_Collections_Generic_Dictionary_int__bool__TypeInfo);
  System_Collections_Generic_Dictionary_int__bool____ctor(
    v5,
    (const MethodInfo_3F551E8 *)Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_24;
  list = (void *)System_Collections_ObjectModel_Collection_object___get_Count(
                   (System_Collections_ObjectModel_Collection_T__o *)list,
                   (const MethodInfo_3E60A6C *)Method_System_Collections_ObjectModel_Collection_EventBulletinBoardReleaseEntity__get_Count__);
  if ( (int)list >= 1 )
  {
    v8 = (int)list;
    v9 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v9,
               (const MethodInfo_3E60B00 *)Method_System_Collections_ObjectModel_Collection_EventBulletinBoardReleaseEntity__get_Item__);
      if ( !list )
        break;
      v10 = list;
      if ( *((_DWORD *)list + 4) == messageId )
      {
        if ( !v5 )
          break;
        if ( !System_Collections_Generic_Dictionary_int__bool___ContainsKey(
                v5,
                *((_DWORD *)list + 8),
                (const MethodInfo_3F55D94 *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__)
          || (list = (void *)System_Collections_Generic_Dictionary_int__bool___get_Item(
                               v5,
                               v10[8],
                               (const MethodInfo_3F55AF8 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Item__),
              ((unsigned __int8)list & 1) != 0) )
        {
          v11 = (int)v10[7];
          v12 = v10[5];
          v13 = v10[6];
          if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v6);
          IsOpen = CondType__IsOpen(v12, v13, v11, 0, 0, 0);
          System_Collections_Generic_Dictionary_int__bool___set_Item(
            v5,
            v10[8],
            IsOpen,
            (const MethodInfo_3F55B88 *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
        }
      }
      if ( v8 == ++v9 )
        goto LABEL_16;
    }
LABEL_24:
    sub_21FFECC(list, v6);
  }
LABEL_16:
  if ( !v5 )
    goto LABEL_24;
  if ( System_Collections_Generic_Dictionary_int__bool___get_Count(
         v5,
         (const MethodInfo_3F55830 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Count__) < 1 )
  {
    return 1;
  }
  else
  {
    Values = System_Collections_Generic_Dictionary_int__bool___get_Values(
               v5,
               (const MethodInfo_3F5599C *)Method_System_Collections_Generic_Dictionary_int__bool__get_Values__);
    v16 = (System_Collections_Generic_List_bool__o *)sub_21FFEBC(System_Collections_Generic_List_bool__TypeInfo);
    System_Collections_Generic_List_bool____ctor_71159564(
      v16,
      (System_Collections_Generic_IEnumerable_T__o *)Values,
      (const MethodInfo_43DCF0C *)Method_System_Collections_Generic_List_bool___ctor___91414888);
    if ( !v16 )
      goto LABEL_24;
    System_Collections_Generic_List_bool___GetEnumerator(
      &v19,
      v16,
      (const MethodInfo_43DE140 *)Method_System_Collections_Generic_List_bool__GetEnumerator__);
    do
      v17 = System_Collections_Generic_List_Enumerator_bool___MoveNext(
              &v19,
              (const MethodInfo_40BA430 *)Method_System_Collections_Generic_List_Enumerator_bool__MoveNext__);
    while ( v17 && LOBYTE(v19.fields._current) == 0 );
    System_Collections_Generic_List_Enumerator_bool___Dispose(
      &v19,
      (const MethodInfo_40BA42C *)Method_System_Collections_Generic_List_Enumerator_bool__Dispose__);
  }
  return v17;
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

  if ( (byte_593855B & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_EventBulletinBoardReleaseMaster__EventBulletinBoardReleaseEntity__string__TryGetEntity__);
    byte_593855B = 1;
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
           (const MethodInfo_3EE2090 *)Method_DataMasterBase_EventBulletinBoardReleaseMaster__EventBulletinBoardReleaseEntity__string__TryGetEntity__);
}