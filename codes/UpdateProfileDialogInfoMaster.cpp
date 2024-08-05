void __fastcall UpdateProfileDialogInfoMaster___ctor(UpdateProfileDialogInfoMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FEFA9 & 1) == 0 )
  {
    sub_1B64870(
      &Method_DataMasterBase_UpdateProfileDialogInfoMaster__UpdateProfileDialogInfoEntity__string___ctor__,
      method);
    byte_49FEFA9 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    389,
    (const MethodInfo_30D6498 *)Method_DataMasterBase_UpdateProfileDialogInfoMaster__UpdateProfileDialogInfoEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UpdateProfileDialogInfoEntity_o *__fastcall UpdateProfileDialogInfoMaster__GetEntity(
        UpdateProfileDialogInfoMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_49FEFA7 & 1) == 0 )
  {
    sub_1B64870(
      &Method_DataMasterBase_UpdateProfileDialogInfoMaster__UpdateProfileDialogInfoEntity__string__GetEntity__,
      *(_QWORD *)&svtId);
    byte_49FEFA7 = 1;
  }
  PK = (Il2CppObject *)UpdateProfileDialogInfoEntity__CreatePK(svtId, *(const MethodInfo **)&svtId);
  return (UpdateProfileDialogInfoEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                              (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                              PK,
                                              (const MethodInfo_30D64D8 *)Method_DataMasterBase_UpdateProfileDialogInfoMaster__UpdateProfileDialogInfoEntity__string__GetEntity__);
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
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *v11; // x20
  __int64 v12; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v14; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v17; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v20; // x8
  __int64 v21; // x9
  int32_t *v22; // x10
  __int64 v23; // x0
  Il2CppObject *v24; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  Il2CppObject *v27; // x8
  UpdateProfileDialogInfoEntity_c *v28; // x1
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x9
  _QWORD *v31; // x10
  __int64 size; // x11
  Il2CppClass **v33; // x0
  System_Collections_Generic_IEnumerator_T__c *v34; // x8
  __int64 v35; // x9
  int32_t *v36; // x10
  __int64 v37; // x0

  if ( (byte_49FEFAA & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, method);
    sub_1B64870(&System_IDisposable_TypeInfo, v3);
    sub_1B64870(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v4);
    sub_1B64870(&System_Collections_IEnumerator_TypeInfo, v5);
    sub_1B64870(&Method_System_Collections_Generic_List_UpdateProfileDialogInfoEntity__Add__, v6);
    sub_1B64870(&Method_System_Collections_Generic_List_UpdateProfileDialogInfoEntity__ToArray__, v7);
    sub_1B64870(&Method_System_Collections_Generic_List_UpdateProfileDialogInfoEntity___ctor__, v8);
    sub_1B64870(&System_Collections_Generic_List_UpdateProfileDialogInfoEntity__TypeInfo, v9);
    sub_1B64870(&UpdateProfileDialogInfoEntity_TypeInfo, v10);
    byte_49FEFAA = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_1B64ABC(System_Collections_Generic_List_UpdateProfileDialogInfoEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_34AF17C *)Method_System_Collections_Generic_List_UpdateProfileDialogInfoEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_37;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_30733BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B64ACC(0LL, v14);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v17 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v17;
        p_offset += 4;
        if ( !v17 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1BB6850(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v20 = Enumerator->klass;
    v21 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v22 = &v20->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v22 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v21;
        v22 += 4;
        if ( !v21 )
          goto LABEL_16;
      }
      v23 = (__int64)&v20->vtable[*v22].method;
    }
    else
    {
LABEL_16:
      v23 = sub_1BB6850(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v24 = (Il2CppObject *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v23)(
                            Enumerator,
                            *(_QWORD *)(v23 + 8));
    v27 = v24;
    if ( v24 )
    {
      v28 = UpdateProfileDialogInfoEntity_TypeInfo;
      methodPtr_low = LOBYTE(UpdateProfileDialogInfoEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v24->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
        || (UpdateProfileDialogInfoEntity_c *)v24->klass->_2.typeHierarchy[methodPtr_low - 1] != UpdateProfileDialogInfoEntity_TypeInfo )
      {
        sub_1B64D8C(v24);
LABEL_35:
        sub_1B64ACC(v24, v28);
      }
      if ( !v11 )
        goto LABEL_35;
      items = v11->fields._items;
      v31 = Method_System_Collections_Generic_List_UpdateProfileDialogInfoEntity__Add__;
      ++v11->fields._version;
      if ( !items )
        sub_1B64ACC(v24, v28);
      size = v11->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v11,
          v24,
          *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
      }
      else
      {
        v33 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v33[4] = (Il2CppClass *)v27;
        sub_1B64814((ServantStatusBattleListViewItem_o *)(v33 + 4), (int32_t)v27, v25, v26);
      }
    }
  }
  v34 = Enumerator->klass;
  v35 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v36 = &v34->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v36 - 1) != System_IDisposable_TypeInfo )
    {
      --v35;
      v36 += 4;
      if ( !v35 )
        goto LABEL_30;
    }
    v37 = (__int64)&v34->vtable[*v36].method;
  }
  else
  {
LABEL_30:
    v37 = sub_1BB6850(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v37)(
                                                             Enumerator,
                                                             *(_QWORD *)(v37 + 8));
  if ( !v11 )
LABEL_37:
    sub_1B64ACC(list, v12);
  return (UpdateProfileDialogInfoEntity_array *)System_Collections_Generic_List_object___ToArray(
                                                  v11,
                                                  (const MethodInfo_34B15A8 *)Method_System_Collections_Generic_List_UpdateProfileDialogInfoEntity__ToArray__);
}


bool __fastcall UpdateProfileDialogInfoMaster__TryGetEntity(
        UpdateProfileDialogInfoMaster_o *this,
        UpdateProfileDialogInfoEntity_o **entity,
        int32_t svtId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_49FEFA8 & 1) == 0 )
  {
    sub_1B64870(
      &Method_DataMasterBase_UpdateProfileDialogInfoMaster__UpdateProfileDialogInfoEntity__string__TryGetEntity__,
      entity);
    byte_49FEFA8 = 1;
  }
  PK = (Il2CppObject *)UpdateProfileDialogInfoEntity__CreatePK(svtId, (const MethodInfo *)entity);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_30D6528 *)Method_DataMasterBase_UpdateProfileDialogInfoMaster__UpdateProfileDialogInfoEntity__string__TryGetEntity__);
}