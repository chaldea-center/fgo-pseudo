void EventUiReleaseMaster___ctor(EventUiReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5970B94 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_EventUiReleaseMaster__EventUiReleaseEntity__string___ctor__);
    byte_5970B94 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    280,
    (const MethodInfo_3F1339C *)Method_DataMasterBase_EventUiReleaseMaster__EventUiReleaseEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventUiReleaseEntity_o *EventUiReleaseMaster__GetEntity(
        EventUiReleaseMaster_o *this,
        int32_t eventUiId,
        int32_t priority,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_5970B92 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_EventUiReleaseMaster__EventUiReleaseEntity__string__GetEntity__);
    byte_5970B92 = 1;
  }
  PK = (Il2CppObject *)EventUiReleaseEntity__CreatePK(eventUiId, priority, idx, *(const MethodInfo **)&idx);
  return (EventUiReleaseEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                     PK,
                                     (const MethodInfo_3F157EC *)Method_DataMasterBase_EventUiReleaseMaster__EventUiReleaseEntity__string__GetEntity__);
}


bool EventUiReleaseMaster__IsOpen(
        EventUiReleaseMaster_o *this,
        EventUiEntity_o *eventUIEntity,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__bool__o *v5; // x21
  __int64 v6; // x1
  void *list; // x0
  int v8; // w22
  int32_t v9; // w23
  int32_t *v10; // x24
  int64_t v11; // x27
  int32_t v12; // w25
  int32_t v13; // w26
  bool IsOpen; // w0
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x20
  System_Collections_Generic_List_bool__o *v16; // x19
  System_Collections_Generic_List_Enumerator_T__o v18; // [xsp+18h] [xbp-78h] BYREF

  if ( (byte_5970B95 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_EventUiReleaseEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_EventUiReleaseEntity__get_Item__);
    sub_2213A60(&CondType_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__bool__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__bool__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__bool__get_Values__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
    sub_2213A60(&System_Collections_Generic_Dictionary_int__bool__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_bool__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_bool__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_bool__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_bool__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_bool___ctor___91640976);
    sub_2213A60(&System_Collections_Generic_List_bool__TypeInfo);
    byte_5970B95 = 1;
  }
  memset(&v18, 0, sizeof(v18));
  if ( eventUIEntity )
  {
    v5 = (System_Collections_Generic_Dictionary_int__bool__o *)sub_2213CCC(System_Collections_Generic_Dictionary_int__bool__TypeInfo);
    System_Collections_Generic_Dictionary_int__bool____ctor(
      v5,
      (const MethodInfo_3F88990 *)Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
    list = this->fields.list;
    if ( !list )
      goto LABEL_28;
    if ( System_Collections_ObjectModel_Collection_object___get_Count(
           (System_Collections_ObjectModel_Collection_T__o *)list,
           (const MethodInfo_3E94214 *)Method_System_Collections_ObjectModel_Collection_EventUiReleaseEntity__get_Count__) < 1 )
      goto LABEL_26;
    list = this->fields.list;
    if ( !list )
      goto LABEL_28;
    list = (void *)System_Collections_ObjectModel_Collection_object___get_Count(
                     (System_Collections_ObjectModel_Collection_T__o *)list,
                     (const MethodInfo_3E94214 *)Method_System_Collections_ObjectModel_Collection_EventUiReleaseEntity__get_Count__);
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
                 (const MethodInfo_3E942A8 *)Method_System_Collections_ObjectModel_Collection_EventUiReleaseEntity__get_Item__);
        if ( !list )
          break;
        v10 = (int32_t *)list;
        if ( *((_DWORD *)list + 4) == eventUIEntity->fields.id
          && *((_DWORD *)list + 5) == eventUIEntity->fields.priority )
        {
          if ( !v5 )
            break;
          if ( !System_Collections_Generic_Dictionary_int__bool___ContainsKey(
                  v5,
                  *((_DWORD *)list + 7),
                  (const MethodInfo_3F8953C *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__)
            || (list = (void *)System_Collections_Generic_Dictionary_int__bool___get_Item(
                                 v5,
                                 v10[7],
                                 (const MethodInfo_3F892A0 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Item__),
                ((unsigned __int8)list & 1) != 0) )
          {
            v11 = v10[10];
            v12 = v10[8];
            v13 = v10[9];
            if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v6);
            IsOpen = CondType__IsOpen(v12, v13, v11, 0, 0, 0);
            System_Collections_Generic_Dictionary_int__bool___set_Item(
              v5,
              v10[7],
              IsOpen,
              (const MethodInfo_3F89330 *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
          }
        }
        if ( v8 == ++v9 )
          goto LABEL_20;
      }
LABEL_28:
      sub_2213CDC(list, v6);
    }
LABEL_20:
    if ( !v5 )
      goto LABEL_28;
    if ( System_Collections_Generic_Dictionary_int__bool___get_Count(
           v5,
           (const MethodInfo_3F88FD8 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Count__) < 1 )
    {
LABEL_26:
      LOBYTE(eventUIEntity) = 1;
    }
    else
    {
      Values = System_Collections_Generic_Dictionary_int__bool___get_Values(
                 v5,
                 (const MethodInfo_3F89144 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Values__);
      v16 = (System_Collections_Generic_List_bool__o *)sub_2213CCC(System_Collections_Generic_List_bool__TypeInfo);
      System_Collections_Generic_List_bool____ctor_71372868(
        v16,
        (System_Collections_Generic_IEnumerable_T__o *)Values,
        (const MethodInfo_4411044 *)Method_System_Collections_Generic_List_bool___ctor___91640976);
      if ( !v16 )
        goto LABEL_28;
      System_Collections_Generic_List_bool___GetEnumerator(
        &v18,
        v16,
        (const MethodInfo_4412278 *)Method_System_Collections_Generic_List_bool__GetEnumerator__);
      do
        LOBYTE(eventUIEntity) = System_Collections_Generic_List_Enumerator_bool___MoveNext(
                                  &v18,
                                  (const MethodInfo_40EDFBC *)Method_System_Collections_Generic_List_Enumerator_bool__MoveNext__);
      while ( ((unsigned __int8)eventUIEntity & (LOBYTE(v18.fields._current) == 0)) != 0 );
      System_Collections_Generic_List_Enumerator_bool___Dispose(
        &v18,
        (const MethodInfo_40EDFB8 *)Method_System_Collections_Generic_List_Enumerator_bool__Dispose__);
    }
  }
  return (unsigned __int8)eventUIEntity & 1;
}


// local variable allocation has failed, the output may be wrong!
bool EventUiReleaseMaster__TryGetEntity(
        EventUiReleaseMaster_o *this,
        EventUiReleaseEntity_o **entity,
        int32_t eventUiId,
        int32_t priority,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_5970B93 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_EventUiReleaseMaster__EventUiReleaseEntity__string__TryGetEntity__);
    byte_5970B93 = 1;
  }
  PK = (Il2CppObject *)EventUiReleaseEntity__CreatePK(eventUiId, priority, idx, *(const MethodInfo **)&priority);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3F15838 *)Method_DataMasterBase_EventUiReleaseMaster__EventUiReleaseEntity__string__TryGetEntity__);
}