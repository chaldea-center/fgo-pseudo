void EventBulletinBoardReleaseMaster___ctor(EventBulletinBoardReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C271A9 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_EventBulletinBoardReleaseMaster__EventBulletinBoardReleaseEntity__string___ctor__);
    byte_4C271A9 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    243,
    (const MethodInfo_338A52C *)Method_DataMasterBase_EventBulletinBoardReleaseMaster__EventBulletinBoardReleaseEntity__string___ctor__);
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

  if ( (byte_4C271A7 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_EventBulletinBoardReleaseMaster__EventBulletinBoardReleaseEntity__string__GetEntity__);
    byte_4C271A7 = 1;
  }
  PK = (Il2CppObject *)EventBulletinBoardReleaseEntity__CreatePK(
                         bulletinBoardId,
                         condType,
                         condTargetId,
                         *(const MethodInfo **)&condTargetId);
  return (EventBulletinBoardReleaseEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                PK,
                                                (const MethodInfo_338C850 *)Method_DataMasterBase_EventBulletinBoardReleaseMaster__EventBulletinBoardReleaseEntity__string__GetEntity__);
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
  int32_t v11; // w25
  int32_t v12; // w27
  int64_t v13; // x26
  bool IsOpen; // w0
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x20
  System_Collections_Generic_List_bool__o *v16; // x19
  bool v17; // w19
  int v18; // w20
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v21; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4C271AA & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_EventBulletinBoardReleaseEntity__get_Count__);
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_EventBulletinBoardReleaseEntity__get_Item__);
    sub_1C2D490(&CondType_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__bool__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__bool__get_Item__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__bool__get_Values__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
    sub_1C2D490(&System_Collections_Generic_Dictionary_int__bool__TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_bool__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_bool__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_bool__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_bool__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_bool___ctor___77933232);
    sub_1C2D490(&System_Collections_Generic_List_bool__TypeInfo);
    byte_4C271AA = 1;
  }
  memset(&v21, 0, sizeof(v21));
  v5 = (System_Collections_Generic_Dictionary_int__bool__o *)sub_1C2D6DC(System_Collections_Generic_Dictionary_int__bool__TypeInfo);
  System_Collections_Generic_Dictionary_int__bool____ctor(
    v5,
    (const MethodInfo_33D2048 *)Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_27;
  list = (void *)System_Collections_ObjectModel_Collection_object___get_Count(
                   (System_Collections_ObjectModel_Collection_T__o *)list,
                   (const MethodInfo_3321208 *)Method_System_Collections_ObjectModel_Collection_EventBulletinBoardReleaseEntity__get_Count__);
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
               (const MethodInfo_3321298 *)Method_System_Collections_ObjectModel_Collection_EventBulletinBoardReleaseEntity__get_Item__);
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
                (const MethodInfo_33D2C1C *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__)
          || (list = (void *)System_Collections_Generic_Dictionary_int__bool___get_Item(
                               v5,
                               v10[8],
                               (const MethodInfo_33D2978 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Item__),
              ((unsigned __int8)list & 1) != 0) )
        {
          v12 = v10[5];
          v11 = v10[6];
          v13 = (int)v10[7];
          if ( !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          IsOpen = CondType__IsOpen(v12, v11, v13, 0, 0, 0);
          System_Collections_Generic_Dictionary_int__bool___set_Item(
            v5,
            v10[8],
            IsOpen,
            (const MethodInfo_33D2A08 *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
        }
      }
      if ( v8 == ++v9 )
        goto LABEL_16;
    }
LABEL_27:
    sub_1C2D6EC(list, v6);
  }
LABEL_16:
  if ( !v5 )
    goto LABEL_27;
  if ( System_Collections_Generic_Dictionary_int__bool___get_Count(
         v5,
         (const MethodInfo_33D26C8 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Count__) < 1 )
    return 1;
  Values = System_Collections_Generic_Dictionary_int__bool___get_Values(
             v5,
             (const MethodInfo_33D2828 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Values__);
  v16 = (System_Collections_Generic_List_bool__o *)sub_1C2D6DC(System_Collections_Generic_List_bool__TypeInfo);
  System_Collections_Generic_List_bool____ctor_57946216(
    v16,
    (System_Collections_Generic_IEnumerable_T__o *)Values,
    (const MethodInfo_3743068 *)Method_System_Collections_Generic_List_bool___ctor___77933232);
  if ( !v16 )
    goto LABEL_27;
  System_Collections_Generic_List_bool___GetEnumerator(
    &v20,
    v16,
    (const MethodInfo_37442A0 *)Method_System_Collections_Generic_List_bool__GetEnumerator__);
  v21 = v20;
  while ( 1 )
  {
    v17 = System_Collections_Generic_List_Enumerator_bool___MoveNext(
            &v21,
            (const MethodInfo_350C8F4 *)Method_System_Collections_Generic_List_Enumerator_bool__MoveNext__);
    if ( !v17 )
      break;
    if ( LOBYTE(v21.fields._current) )
    {
      v18 = 9;
      goto LABEL_25;
    }
  }
  v18 = 10;
LABEL_25:
  System_Collections_Generic_List_Enumerator_bool___Dispose(
    &v21,
    (const MethodInfo_350C8F0 *)Method_System_Collections_Generic_List_Enumerator_bool__Dispose__);
  return v17 && v18 == 9;
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

  if ( (byte_4C271A8 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_EventBulletinBoardReleaseMaster__EventBulletinBoardReleaseEntity__string__TryGetEntity__);
    byte_4C271A8 = 1;
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
           (const MethodInfo_338C89C *)Method_DataMasterBase_EventBulletinBoardReleaseMaster__EventBulletinBoardReleaseEntity__string__TryGetEntity__);
}