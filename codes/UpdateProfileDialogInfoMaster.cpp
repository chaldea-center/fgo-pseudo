void UpdateProfileDialogInfoMaster___ctor(UpdateProfileDialogInfoMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4D2D5D4 & 1) == 0 )
  {
    sub_1C94098(&Method_DataMasterBase_UpdateProfileDialogInfoMaster__UpdateProfileDialogInfoEntity__string___ctor__);
    byte_4D2D5D4 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    395,
    (const MethodInfo_345DC54 *)Method_DataMasterBase_UpdateProfileDialogInfoMaster__UpdateProfileDialogInfoEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UpdateProfileDialogInfoEntity_o *UpdateProfileDialogInfoMaster__GetEntity(
        UpdateProfileDialogInfoMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4D2D5D2 & 1) == 0 )
  {
    sub_1C94098(&Method_DataMasterBase_UpdateProfileDialogInfoMaster__UpdateProfileDialogInfoEntity__string__GetEntity__);
    byte_4D2D5D2 = 1;
  }
  PK = (Il2CppObject *)UpdateProfileDialogInfoEntity__CreatePK(svtId, *(const MethodInfo **)&svtId);
  return (UpdateProfileDialogInfoEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                              (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                              PK,
                                              (const MethodInfo_345FF78 *)Method_DataMasterBase_UpdateProfileDialogInfoMaster__UpdateProfileDialogInfoEntity__string__GetEntity__);
}


UpdateProfileDialogInfoEntity_array *UpdateProfileDialogInfoMaster__GetUpdateProfileList(
        UpdateProfileDialogInfoMaster_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  __int64 v4; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v6; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v9; // x9
  int32_t *p_offset; // x10
  __int64 v11; // x0
  System_Collections_Generic_IEnumerator_T__c *v12; // x8
  __int64 v13; // x9
  int32_t *v14; // x10
  __int64 v15; // x0
  Il2CppObject *v16; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  Il2CppObject *v23; // x1
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  Il2CppClass **v27; // x0
  System_Collections_Generic_IEnumerator_T__c *v28; // x8
  __int64 v29; // x9
  int32_t *v30; // x10
  __int64 v31; // x0

  if ( (byte_4D2D5D5 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_ObjectModel_Collection_UpdateProfileDialogInfoEntity__GetEnumerator__);
    sub_1C94098(&System_IDisposable_TypeInfo);
    sub_1C94098(&System_Collections_Generic_IEnumerator_UpdateProfileDialogInfoEntity__TypeInfo);
    sub_1C94098(&System_Collections_IEnumerator_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_UpdateProfileDialogInfoEntity__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_UpdateProfileDialogInfoEntity__ToArray__);
    sub_1C94098(&Method_System_Collections_Generic_List_UpdateProfileDialogInfoEntity___ctor__);
    sub_1C94098(&System_Collections_Generic_List_UpdateProfileDialogInfoEntity__TypeInfo);
    byte_4D2D5D5 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_UpdateProfileDialogInfoEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_UpdateProfileDialogInfoEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_34;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_33F413C *)Method_System_Collections_ObjectModel_Collection_UpdateProfileDialogInfoEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C942F0(0, v6);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v9 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v9;
        p_offset += 4;
        if ( !v9 )
          goto LABEL_9;
      }
      v11 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_9:
      v11 = sub_1C6A420(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v11)(
            Enumerator,
            *(_QWORD *)(v11 + 8))
        & 1) == 0 )
      break;
    v12 = Enumerator->klass;
    v13 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v14 = &v12->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_UpdateProfileDialogInfoEntity__c **)v14 - 1) != System_Collections_Generic_IEnumerator_UpdateProfileDialogInfoEntity__TypeInfo )
      {
        --v13;
        v14 += 4;
        if ( !v13 )
          goto LABEL_16;
      }
      v15 = (__int64)&v12->vtable[*v14];
    }
    else
    {
LABEL_16:
      v15 = sub_1C6A420(Enumerator, System_Collections_Generic_IEnumerator_UpdateProfileDialogInfoEntity__TypeInfo, 0);
    }
    v16 = (Il2CppObject *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v15)(
                            Enumerator,
                            *(_QWORD *)(v15 + 8));
    v23 = v16;
    if ( v16 )
    {
      if ( !v3 )
        sub_1C942F0(v16, v16);
      items = v3->fields._items;
      v25 = Method_System_Collections_Generic_List_UpdateProfileDialogInfoEntity__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1C942F0(v16, v16);
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          v16,
          *(const MethodInfo_386AE34 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
      }
      else
      {
        v27 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v27[4] = (Il2CppClass *)v23;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)(v27 + 4), (int32_t)v23, v17, v18, v19, v20, v21, v22);
      }
    }
  }
  v28 = Enumerator->klass;
  v29 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v30 = &v28->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v30 - 1) != System_IDisposable_TypeInfo )
    {
      --v29;
      v30 += 4;
      if ( !v29 )
        goto LABEL_28;
    }
    v31 = (__int64)&v28->vtable[*v30];
  }
  else
  {
LABEL_28:
    v31 = sub_1C6A420(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v31)(
                                                             Enumerator,
                                                             *(_QWORD *)(v31 + 8));
  if ( !v3 )
LABEL_34:
    sub_1C942F0(list, v4);
  return (UpdateProfileDialogInfoEntity_array *)System_Collections_Generic_List_object___ToArray(
                                                  v3,
                                                  (const MethodInfo_386C98C *)Method_System_Collections_Generic_List_UpdateProfileDialogInfoEntity__ToArray__);
}


bool UpdateProfileDialogInfoMaster__TryGetEntity(
        UpdateProfileDialogInfoMaster_o *this,
        UpdateProfileDialogInfoEntity_o **entity,
        int32_t svtId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4D2D5D3 & 1) == 0 )
  {
    sub_1C94098(&Method_DataMasterBase_UpdateProfileDialogInfoMaster__UpdateProfileDialogInfoEntity__string__TryGetEntity__);
    byte_4D2D5D3 = 1;
  }
  PK = (Il2CppObject *)UpdateProfileDialogInfoEntity__CreatePK(svtId, (const MethodInfo *)entity);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_345FFC4 *)Method_DataMasterBase_UpdateProfileDialogInfoMaster__UpdateProfileDialogInfoEntity__string__TryGetEntity__);
}