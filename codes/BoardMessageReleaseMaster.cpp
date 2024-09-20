void __fastcall BoardMessageReleaseMaster___ctor(BoardMessageReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5AE55 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_BoardMessageReleaseMaster__BoardMessageReleaseEntity__string___ctor__);
    byte_4A5AE55 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    231,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_BoardMessageReleaseMaster__BoardMessageReleaseEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
BoardMessageReleaseEntity_o *__fastcall BoardMessageReleaseMaster__GetEntity(
        BoardMessageReleaseMaster_o *this,
        int32_t messageId,
        int32_t condType,
        int32_t condTargetId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A5AE53 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_BoardMessageReleaseMaster__BoardMessageReleaseEntity__string__GetEntity__);
    byte_4A5AE53 = 1;
  }
  PK = (Il2CppObject *)BoardMessageReleaseEntity__CreatePK(
                         messageId,
                         condType,
                         condTargetId,
                         *(const MethodInfo **)&condTargetId);
  return (BoardMessageReleaseEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                          PK,
                                          (const MethodInfo_311DC8C *)Method_DataMasterBase_BoardMessageReleaseMaster__BoardMessageReleaseEntity__string__GetEntity__);
}


bool __fastcall BoardMessageReleaseMaster__IsOpen(
        BoardMessageReleaseMaster_o *this,
        int32_t messageId,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__bool__o *v5; // x21
  __int64 v6; // x1
  void *list; // x0
  int v8; // w22
  int32_t v9; // w23
  _DWORD *v10; // x24
  __int64 methodPtr_low; // x10
  int32_t v12; // w25
  int32_t v13; // w27
  int64_t v14; // x26
  bool IsOpen; // w0
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x20
  System_Collections_Generic_List_bool__o *v17; // x19
  bool v18; // w19
  int v19; // w20
  System_Collections_Generic_List_Enumerator_T__o v21; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4A5AE56 & 1) == 0 )
  {
    sub_1B885B0(&BoardMessageReleaseEntity_TypeInfo);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&CondType_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__bool__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__bool__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__bool__get_Values__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_int__bool__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_bool__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_bool__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_bool__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_bool__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_bool___ctor___76025448);
    sub_1B885B0(&System_Collections_Generic_List_bool__TypeInfo);
    byte_4A5AE56 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  v5 = (System_Collections_Generic_Dictionary_int__bool__o *)sub_1B887FC(System_Collections_Generic_Dictionary_int__bool__TypeInfo);
  System_Collections_Generic_Dictionary_int__bool____ctor(
    v5,
    (const MethodInfo_315E6FC *)Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_29;
  list = (void *)System_Collections_ObjectModel_Collection_object___get_Count(
                   (System_Collections_ObjectModel_Collection_T__o *)list,
                   (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
               (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v10 = list;
      methodPtr_low = LOBYTE(BoardMessageReleaseEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) < (unsigned int)methodPtr_low
        || *(BoardMessageReleaseEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) != BoardMessageReleaseEntity_TypeInfo )
      {
        break;
      }
      if ( *((_DWORD *)list + 4) == messageId )
      {
        if ( !v5 )
          break;
        if ( !System_Collections_Generic_Dictionary_int__bool___ContainsKey(
                v5,
                *((_DWORD *)list + 8),
                (const MethodInfo_315F2D0 *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__)
          || (list = (void *)System_Collections_Generic_Dictionary_int__bool___get_Item(
                               v5,
                               v10[8],
                               (const MethodInfo_315F02C *)Method_System_Collections_Generic_Dictionary_int__bool__get_Item__),
              ((unsigned __int8)list & 1) != 0) )
        {
          v13 = v10[5];
          v12 = v10[6];
          v14 = (int)v10[7];
          if ( !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          IsOpen = CondType__IsOpen(v13, v12, v14, 0, 0LL, 0LL);
          System_Collections_Generic_Dictionary_int__bool___set_Item(
            v5,
            v10[8],
            IsOpen,
            (const MethodInfo_315F0BC *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
        }
      }
      if ( v8 == ++v9 )
        goto LABEL_18;
    }
LABEL_29:
    sub_1B8880C(list, v6);
  }
LABEL_18:
  if ( !v5 )
    goto LABEL_29;
  if ( System_Collections_Generic_Dictionary_int__bool___get_Count(
         v5,
         (const MethodInfo_315ED7C *)Method_System_Collections_Generic_Dictionary_int__bool__get_Count__) < 1 )
    return 1;
  Values = System_Collections_Generic_Dictionary_int__bool___get_Values(
             v5,
             (const MethodInfo_315EEDC *)Method_System_Collections_Generic_Dictionary_int__bool__get_Values__);
  v17 = (System_Collections_Generic_List_bool__o *)sub_1B887FC(System_Collections_Generic_List_bool__TypeInfo);
  System_Collections_Generic_List_bool____ctor_55263428(
    v17,
    (System_Collections_Generic_IEnumerable_T__o *)Values,
    (const MethodInfo_34B40C4 *)Method_System_Collections_Generic_List_bool___ctor___76025448);
  if ( !v17 )
    goto LABEL_29;
  System_Collections_Generic_List_bool___GetEnumerator(
    &v21,
    v17,
    (const MethodInfo_34B52FC *)Method_System_Collections_Generic_List_bool__GetEnumerator__);
  v22 = v21;
  while ( 1 )
  {
    v18 = System_Collections_Generic_List_Enumerator_bool___MoveNext(
            &v22,
            (const MethodInfo_326FF60 *)Method_System_Collections_Generic_List_Enumerator_bool__MoveNext__);
    if ( !v18 )
      break;
    if ( LOBYTE(v22.fields._current) )
    {
      v19 = 9;
      goto LABEL_27;
    }
  }
  v19 = 10;
LABEL_27:
  System_Collections_Generic_List_Enumerator_bool___Dispose(
    &v22,
    (const MethodInfo_326FF5C *)Method_System_Collections_Generic_List_Enumerator_bool__Dispose__);
  return v18 && v19 == 9;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BoardMessageReleaseMaster__TryGetEntity(
        BoardMessageReleaseMaster_o *this,
        BoardMessageReleaseEntity_o **entity,
        int32_t messageId,
        int32_t condType,
        int32_t condTargetId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4A5AE54 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_BoardMessageReleaseMaster__BoardMessageReleaseEntity__string__TryGetEntity__);
    byte_4A5AE54 = 1;
  }
  PK = (Il2CppObject *)BoardMessageReleaseEntity__CreatePK(
                         messageId,
                         condType,
                         condTargetId,
                         *(const MethodInfo **)&condType);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_BoardMessageReleaseMaster__BoardMessageReleaseEntity__string__TryGetEntity__);
}