void __fastcall UpdateProfileDialogInfoMaster___ctor(UpdateProfileDialogInfoMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BC86B8 & 1) == 0 )
  {
    sub_1C1ABD4(
      &Method_DataMasterBase_UpdateProfileDialogInfoMaster__UpdateProfileDialogInfoEntity__string___ctor__,
      method);
    byte_4BC86B8 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    393,
    (const MethodInfo_324AE0C *)Method_DataMasterBase_UpdateProfileDialogInfoMaster__UpdateProfileDialogInfoEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UpdateProfileDialogInfoEntity_o *__fastcall UpdateProfileDialogInfoMaster__GetEntity(
        UpdateProfileDialogInfoMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4BC86B6 & 1) == 0 )
  {
    sub_1C1ABD4(
      &Method_DataMasterBase_UpdateProfileDialogInfoMaster__UpdateProfileDialogInfoEntity__string__GetEntity__,
      *(_QWORD *)&svtId);
    byte_4BC86B6 = 1;
  }
  PK = (Il2CppObject *)UpdateProfileDialogInfoEntity__CreatePK(svtId, *(const MethodInfo **)&svtId);
  return (UpdateProfileDialogInfoEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                              (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                              PK,
                                              (const MethodInfo_324D130 *)Method_DataMasterBase_UpdateProfileDialogInfoMaster__UpdateProfileDialogInfoEntity__string__GetEntity__);
}


UpdateProfileDialogInfoEntity_array *__fastcall UpdateProfileDialogInfoMaster__GetUpdateProfileList(
        UpdateProfileDialogInfoMaster_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_object__o *v10; // x20
  __int64 v11; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v13; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v16; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v19; // x8
  __int64 v20; // x9
  int32_t *v21; // x10
  __int64 v22; // x0
  Il2CppObject *v23; // x0
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  int64_t v30; // x1
  struct System_Object_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10
  Il2CppClass **v34; // x0
  System_Collections_Generic_IEnumerator_T__c *v35; // x8
  __int64 v36; // x9
  int32_t *v37; // x10
  __int64 v38; // x0

  if ( (byte_4BC86B9 & 1) == 0 )
  {
    sub_1C1ABD4(
      &Method_System_Collections_ObjectModel_Collection_UpdateProfileDialogInfoEntity__GetEnumerator__,
      method);
    sub_1C1ABD4(&System_IDisposable_TypeInfo, v3);
    sub_1C1ABD4(&System_Collections_Generic_IEnumerator_UpdateProfileDialogInfoEntity__TypeInfo, v4);
    sub_1C1ABD4(&System_Collections_IEnumerator_TypeInfo, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_UpdateProfileDialogInfoEntity__Add__, v6);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_UpdateProfileDialogInfoEntity__ToArray__, v7);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_UpdateProfileDialogInfoEntity___ctor__, v8);
    sub_1C1ABD4(&System_Collections_Generic_List_UpdateProfileDialogInfoEntity__TypeInfo, v9);
    byte_4BC86B9 = 1;
  }
  v10 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_UpdateProfileDialogInfoEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_UpdateProfileDialogInfoEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_34;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_31E2F54 *)Method_System_Collections_ObjectModel_Collection_UpdateProfileDialogInfoEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C1AE30(0LL, v13);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v16 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v16;
        p_offset += 4;
        if ( !v16 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1C6CBB4(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v19 = Enumerator->klass;
    v20 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v21 = &v19->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_UpdateProfileDialogInfoEntity__c **)v21 - 1) != System_Collections_Generic_IEnumerator_UpdateProfileDialogInfoEntity__TypeInfo )
      {
        --v20;
        v21 += 4;
        if ( !v20 )
          goto LABEL_16;
      }
      v22 = (__int64)&v19->vtable[*v21].method;
    }
    else
    {
LABEL_16:
      v22 = sub_1C6CBB4(Enumerator, System_Collections_Generic_IEnumerator_UpdateProfileDialogInfoEntity__TypeInfo, 0LL);
    }
    v23 = (Il2CppObject *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v22)(
                            Enumerator,
                            *(_QWORD *)(v22 + 8));
    v30 = (int64_t)v23;
    if ( v23 )
    {
      if ( !v10 )
        sub_1C1AE30(v23, v23);
      items = v10->fields._items;
      v32 = Method_System_Collections_Generic_List_UpdateProfileDialogInfoEntity__Add__;
      ++v10->fields._version;
      if ( !items )
        sub_1C1AE30(v23, v23);
      size = v10->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v10,
          v23,
          *(const MethodInfo_363C890 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
      }
      else
      {
        v34 = &items->obj.klass + size;
        v10->fields._size = size + 1;
        v34[4] = (Il2CppClass *)v30;
        sub_1C1AB78((PartyOrganizationUtility_o *)(v34 + 4), v30, v24, v25, v26, v27, v28, v29);
      }
    }
  }
  v35 = Enumerator->klass;
  v36 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v37 = &v35->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v37 - 1) != System_IDisposable_TypeInfo )
    {
      --v36;
      v37 += 4;
      if ( !v36 )
        goto LABEL_28;
    }
    v38 = (__int64)&v35->vtable[*v37].method;
  }
  else
  {
LABEL_28:
    v38 = sub_1C6CBB4(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v38)(
                                                             Enumerator,
                                                             *(_QWORD *)(v38 + 8));
  if ( !v10 )
LABEL_34:
    sub_1C1AE30(list, v11);
  return (UpdateProfileDialogInfoEntity_array *)System_Collections_Generic_List_object___ToArray(
                                                  v10,
                                                  (const MethodInfo_363E3E8 *)Method_System_Collections_Generic_List_UpdateProfileDialogInfoEntity__ToArray__);
}


bool __fastcall UpdateProfileDialogInfoMaster__TryGetEntity(
        UpdateProfileDialogInfoMaster_o *this,
        UpdateProfileDialogInfoEntity_o **entity,
        int32_t svtId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4BC86B7 & 1) == 0 )
  {
    sub_1C1ABD4(
      &Method_DataMasterBase_UpdateProfileDialogInfoMaster__UpdateProfileDialogInfoEntity__string__TryGetEntity__,
      entity);
    byte_4BC86B7 = 1;
  }
  PK = (Il2CppObject *)UpdateProfileDialogInfoEntity__CreatePK(svtId, (const MethodInfo *)entity);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_324D17C *)Method_DataMasterBase_UpdateProfileDialogInfoMaster__UpdateProfileDialogInfoEntity__string__TryGetEntity__);
}