void UpdateProfileDialogInfoMaster___ctor(UpdateProfileDialogInfoMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5939440 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_UpdateProfileDialogInfoMaster__UpdateProfileDialogInfoEntity__string___ctor__);
    byte_5939440 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    397,
    (const MethodInfo_3EDFBF4 *)Method_DataMasterBase_UpdateProfileDialogInfoMaster__UpdateProfileDialogInfoEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UpdateProfileDialogInfoEntity_o *UpdateProfileDialogInfoMaster__GetEntity(
        UpdateProfileDialogInfoMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_593943E & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_UpdateProfileDialogInfoMaster__UpdateProfileDialogInfoEntity__string__GetEntity__);
    byte_593943E = 1;
  }
  PK = (Il2CppObject *)UpdateProfileDialogInfoEntity__CreatePK(svtId, *(const MethodInfo **)&svtId);
  return (UpdateProfileDialogInfoEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                              (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                              PK,
                                              (const MethodInfo_3EE2044 *)Method_DataMasterBase_UpdateProfileDialogInfoMaster__UpdateProfileDialogInfoEntity__string__GetEntity__);
}


UpdateProfileDialogInfoEntity_array *UpdateProfileDialogInfoMaster__GetUpdateProfileList(
        UpdateProfileDialogInfoMaster_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  __int64 v4; // x1
  __int64 list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v7; // x1
  System_Collections_Generic_IEnumerator_T__o *i; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v10; // x9
  int *p_offset; // x10
  __int64 v12; // x0
  System_Collections_Generic_IEnumerator_T__c *v13; // x8
  __int64 v14; // x9
  int *v15; // x10
  __int64 v16; // x0
  Il2CppObject *v17; // x0
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  Il2CppObject *v24; // x1
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppClass **v28; // x0
  System_Collections_Generic_IEnumerator_T__c *v29; // x8
  __int64 v30; // x9
  int *v31; // x10
  __int64 v32; // x0
  System_Collections_Generic_IEnumerator_T__o *v34; // [xsp+18h] [xbp-38h]

  if ( (byte_5939441 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_UpdateProfileDialogInfoEntity__GetEnumerator__);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerator_UpdateProfileDialogInfoEntity__TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_UpdateProfileDialogInfoEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UpdateProfileDialogInfoEntity__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UpdateProfileDialogInfoEntity___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_UpdateProfileDialogInfoEntity__TypeInfo);
    byte_5939441 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_UpdateProfileDialogInfoEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_UpdateProfileDialogInfoEntity___ctor__);
  list = (__int64)this->fields.list;
  if ( !list )
    goto LABEL_40;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)list,
                 (const MethodInfo_3E61068 *)Method_System_Collections_ObjectModel_Collection_UpdateProfileDialogInfoEntity__GetEnumerator__);
  v34 = Enumerator;
  if ( !Enumerator )
    sub_21FFECC(Enumerator, v7);
  for ( i = Enumerator; ; i = v34 )
  {
    klass = i->klass;
    v10 = *(unsigned __int16 *)&i->klass->_2.rank;
    if ( *(_WORD *)&i->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v10;
        p_offset += 4;
        if ( !v10 )
          goto LABEL_10;
      }
      v12 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v12 = sub_2237E2C(i, System_Collections_IEnumerator_TypeInfo, 0);
    }
    list = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v12)(
             i,
             *(_QWORD *)(v12 + 8));
    if ( (list & 1) == 0 )
      break;
    if ( !v34 )
      sub_21FFECC(list, v4);
    v13 = v34->klass;
    v14 = *(unsigned __int16 *)&v34->klass->_2.rank;
    if ( *(_WORD *)&v34->klass->_2.rank )
    {
      v15 = &v13->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_UpdateProfileDialogInfoEntity__c **)v15 - 1) != System_Collections_Generic_IEnumerator_UpdateProfileDialogInfoEntity__TypeInfo )
      {
        --v14;
        v15 += 4;
        if ( !v14 )
          goto LABEL_18;
      }
      v16 = (__int64)&v13->vtable[*v15];
    }
    else
    {
LABEL_18:
      v16 = sub_2237E2C(v34, System_Collections_Generic_IEnumerator_UpdateProfileDialogInfoEntity__TypeInfo, 0);
    }
    v17 = (Il2CppObject *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v16)(
                            v34,
                            *(_QWORD *)(v16 + 8));
    v24 = v17;
    if ( v17 )
    {
      if ( !v3
        || (items = v3->fields._items,
            v26 = Method_System_Collections_Generic_List_UpdateProfileDialogInfoEntity__Add__,
            ++v3->fields._version,
            !items) )
      {
        sub_21FFECC(v17, v17);
      }
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          v17,
          *(const MethodInfo_444FB2C **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
      }
      else
      {
        v28 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v28[4] = (Il2CppClass *)v24;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v28 + 4), (int32_t)v24, v18, v19, v20, v21, v22, v23);
      }
    }
  }
  if ( v34 )
  {
    v29 = v34->klass;
    v30 = *(unsigned __int16 *)&v34->klass->_2.rank;
    if ( *(_WORD *)&v34->klass->_2.rank )
    {
      v31 = &v29->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v31 - 1) != System_IDisposable_TypeInfo )
      {
        --v30;
        v31 += 4;
        if ( !v30 )
          goto LABEL_33;
      }
      v32 = (__int64)&v29->vtable[*v31];
    }
    else
    {
LABEL_33:
      v32 = sub_2237E2C(v34, System_IDisposable_TypeInfo, 0);
    }
    list = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v32)(
             v34,
             *(_QWORD *)(v32 + 8));
  }
  if ( !v3 )
LABEL_40:
    sub_21FFECC(list, v4);
  return (UpdateProfileDialogInfoEntity_array *)System_Collections_Generic_List_object___ToArray(
                                                  v3,
                                                  (const MethodInfo_445164C *)Method_System_Collections_Generic_List_UpdateProfileDialogInfoEntity__ToArray__);
}


bool UpdateProfileDialogInfoMaster__TryGetEntity(
        UpdateProfileDialogInfoMaster_o *this,
        UpdateProfileDialogInfoEntity_o **entity,
        int32_t svtId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_593943F & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_UpdateProfileDialogInfoMaster__UpdateProfileDialogInfoEntity__string__TryGetEntity__);
    byte_593943F = 1;
  }
  PK = (Il2CppObject *)UpdateProfileDialogInfoEntity__CreatePK(svtId, (const MethodInfo *)entity);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3EE2090 *)Method_DataMasterBase_UpdateProfileDialogInfoMaster__UpdateProfileDialogInfoEntity__string__TryGetEntity__);
}