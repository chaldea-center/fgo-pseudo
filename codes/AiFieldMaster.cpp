void AiFieldMaster___ctor(AiFieldMaster_o *this, const MethodInfo *method)
{
  if ( (byte_593823C & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_AiFieldMaster__AiFieldEntity__string___ctor__);
    byte_593823C = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    187,
    (const MethodInfo_3EDFBF4 *)Method_DataMasterBase_AiFieldMaster__AiFieldEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
AiFieldEntity_o *AiFieldMaster__GetEntity(AiFieldMaster_o *this, int32_t id, int32_t idx, const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_593823A & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_AiFieldMaster__AiFieldEntity__string__GetEntity__);
    byte_593823A = 1;
  }
  PK = (Il2CppObject *)AiBaseEntity__CreatePK(id, idx, *(const MethodInfo **)&idx);
  return (AiFieldEntity_o *)DataMasterBase_object__object__object___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                              PK,
                              (const MethodInfo_3EE2044 *)Method_DataMasterBase_AiFieldMaster__AiFieldEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool AiFieldMaster__TryGetEntity(
        AiFieldMaster_o *this,
        AiFieldEntity_o **entity,
        int32_t id,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_593823B & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_AiFieldMaster__AiFieldEntity__string__TryGetEntity__);
    byte_593823B = 1;
  }
  PK = (Il2CppObject *)AiBaseEntity__CreatePK(id, idx, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3EE2090 *)Method_DataMasterBase_AiFieldMaster__AiFieldEntity__string__TryGetEntity__);
}


AiFieldEntity_array *AiFieldMaster__getListFormGroupId(int32_t id, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  __int64 Instance; // x0
  __int64 v5; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v7; // x1
  System_Collections_Generic_IEnumerator_T__o *i; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v10; // x9
  int *p_offset; // x10
  __int64 v12; // x0
  System_Collections_Generic_IEnumerator_T__c *v13; // x8
  __int64 v14; // x9
  int *v15; // x10
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x1
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  __int64 v25; // x8
  AiFieldEntity_c *v26; // x1
  __int64 naturalAligment; // x10
  struct System_Object_array *items; // x9
  _QWORD *v29; // x10
  __int64 size; // x11
  Il2CppClass **v31; // x0
  System_Collections_Generic_IEnumerator_T__c *v32; // x8
  __int64 v33; // x9
  int *v34; // x10
  __int64 v35; // x0
  System_Collections_Generic_IEnumerator_T__o *v37; // [xsp+18h] [xbp-48h]

  if ( (byte_593823D & 1) == 0 )
  {
    sub_21FFC50(&AiFieldEntity_TypeInfo);
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_AiFieldEntity__GetEnumerator__);
    sub_21FFC50(&Method_DataManager_GetMasterData_AiFieldMaster___);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerator_AiFieldEntity__TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_AiFieldEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_AiFieldEntity__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_AiFieldEntity___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_AiFieldEntity__TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_593823D = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_AiFieldEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_AiFieldEntity___ctor__);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_47;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_AiFieldMaster___);
  if ( !Instance )
    goto LABEL_47;
  Instance = *(_QWORD *)(Instance + 40);
  if ( !Instance )
    goto LABEL_47;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)Instance,
                 (const MethodInfo_3E61068 *)Method_System_Collections_ObjectModel_Collection_AiFieldEntity__GetEnumerator__);
  v37 = Enumerator;
  if ( !Enumerator )
    sub_21FFECC(Enumerator, v7);
  for ( i = Enumerator; ; i = v37 )
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
          goto LABEL_12;
      }
      v12 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_12:
      v12 = sub_2237E2C(i, System_Collections_IEnumerator_TypeInfo, 0);
    }
    Instance = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v12)(
                 i,
                 *(_QWORD *)(v12 + 8));
    if ( (Instance & 1) == 0 )
      break;
    if ( !v37 )
      sub_21FFECC(Instance, v5);
    v13 = v37->klass;
    v14 = *(unsigned __int16 *)&v37->klass->_2.rank;
    if ( *(_WORD *)&v37->klass->_2.rank )
    {
      v15 = &v13->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_AiFieldEntity__c **)v15 - 1) != System_Collections_Generic_IEnumerator_AiFieldEntity__TypeInfo )
      {
        --v14;
        v15 += 4;
        if ( !v14 )
          goto LABEL_20;
      }
      v16 = (__int64)&v13->vtable[*v15];
    }
    else
    {
LABEL_20:
      v16 = sub_2237E2C(v37, System_Collections_Generic_IEnumerator_AiFieldEntity__TypeInfo, 0);
    }
    v17 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v16)(
            v37,
            *(_QWORD *)(v16 + 8));
    v25 = v17;
    if ( !v17 )
      goto LABEL_44;
    v26 = AiFieldEntity_TypeInfo;
    naturalAligment = AiFieldEntity_TypeInfo->_2.naturalAligment;
    if ( *(unsigned __int8 *)(*(_QWORD *)v17 + 304LL) < (unsigned int)naturalAligment
      || *(AiFieldEntity_c **)(*(_QWORD *)(*(_QWORD *)v17 + 200LL) + 8 * naturalAligment - 8) != AiFieldEntity_TypeInfo )
    {
      sub_220024C(v17, AiFieldEntity_TypeInfo, v19, v20);
LABEL_44:
      sub_21FFECC(v17, v18);
    }
    if ( *(_DWORD *)(v17 + 16) == id )
    {
      if ( !v3
        || (items = v3->fields._items,
            v29 = Method_System_Collections_Generic_List_AiFieldEntity__Add__,
            ++v3->fields._version,
            !items) )
      {
        sub_21FFECC(v17, v26);
      }
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          (Il2CppObject *)v17,
          *(const MethodInfo_444FB2C **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
      }
      else
      {
        v31 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v31[4] = (Il2CppClass *)v25;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v31 + 4), v25, v19, v20, v21, v22, v23, v24);
      }
    }
  }
  if ( v37 )
  {
    v32 = v37->klass;
    v33 = *(unsigned __int16 *)&v37->klass->_2.rank;
    if ( *(_WORD *)&v37->klass->_2.rank )
    {
      v34 = &v32->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v34 - 1) != System_IDisposable_TypeInfo )
      {
        --v33;
        v34 += 4;
        if ( !v33 )
          goto LABEL_38;
      }
      v35 = (__int64)&v32->vtable[*v34];
    }
    else
    {
LABEL_38:
      v35 = sub_2237E2C(v37, System_IDisposable_TypeInfo, 0);
    }
    Instance = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v35)(
                 v37,
                 *(_QWORD *)(v35 + 8));
  }
  if ( !v3 )
LABEL_47:
    sub_21FFECC(Instance, v5);
  return (AiFieldEntity_array *)System_Collections_Generic_List_object___ToArray(
                                  v3,
                                  (const MethodInfo_445164C *)Method_System_Collections_Generic_List_AiFieldEntity__ToArray__);
}