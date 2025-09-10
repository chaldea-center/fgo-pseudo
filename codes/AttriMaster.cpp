void AttriMaster___ctor(AttriMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C26ECA & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_AttriMaster__AttriEntity__int___ctor__);
    byte_4C26ECA = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    485,
    (const MethodInfo_3385A74 *)Method_DataMasterBase_AttriMaster__AttriEntity__int___ctor__);
}


int32_t AttriMaster__GetAttrValue(AttriMaster_o *this, int32_t id, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v5; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C26EC8 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_AttriMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_AttriMaster__AttriEntity__int__TryGetEntity__);
    byte_4C26EC8 = 1;
  }
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_AttriMaster___);
  if ( !Master_object )
    goto LABEL_11;
  Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                    &entity,
                                    id,
                                    (const MethodInfo_3387DE4 *)Method_DataMasterBase_AttriMaster__AttriEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    if ( entity )
      return HIDWORD(entity[1].klass);
LABEL_11:
    sub_1C2D6EC(Master_object, v5);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
int32_t AttriMaster__GetIndividualityFromValue(AttriMaster_o *this, int32_t attrValue, const MethodInfo *method)
{
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
  _DWORD *v16; // x0
  __int64 naturalAligment; // x10
  int32_t v18; // w21
  System_Collections_Generic_IEnumerator_T__c *v19; // x8
  __int64 v20; // x9
  int32_t *v21; // x10
  __int64 v22; // x0

  if ( (byte_4C26EC9 & 1) == 0 )
  {
    sub_1C2D490(&AttriEntity_TypeInfo);
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_AttriEntity__GetEnumerator__);
    sub_1C2D490(&System_IDisposable_TypeInfo);
    sub_1C2D490(&System_Collections_Generic_IEnumerator_AttriEntity__TypeInfo);
    sub_1C2D490(&System_Collections_IEnumerator_TypeInfo);
    byte_4C26EC9 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C2D6EC(0, *(_QWORD *)&attrValue);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_33217E0 *)Method_System_Collections_ObjectModel_Collection_AttriEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C2D6EC(0, v6);
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
      v11 = sub_1C7DCA8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
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
      while ( *((System_Collections_Generic_IEnumerator_AttriEntity__c **)v14 - 1) != System_Collections_Generic_IEnumerator_AttriEntity__TypeInfo )
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
      v15 = sub_1C7DCA8(Enumerator, System_Collections_Generic_IEnumerator_AttriEntity__TypeInfo, 0);
    }
    v16 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v15)(
                      Enumerator,
                      *(_QWORD *)(v15 + 8));
    if ( v16 )
    {
      naturalAligment = AttriEntity_TypeInfo->_2.naturalAligment;
      if ( *(unsigned __int8 *)(*(_QWORD *)v16 + 304LL) >= (unsigned int)naturalAligment
        && *(AttriEntity_c **)(*(_QWORD *)(*(_QWORD *)v16 + 200LL) + 8 * naturalAligment - 8) == AttriEntity_TypeInfo
        && v16[5] == attrValue )
      {
        v18 = v16[6];
        goto LABEL_24;
      }
    }
  }
  v18 = -1;
LABEL_24:
  v19 = Enumerator->klass;
  v20 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v21 = &v19->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v21 - 1) != System_IDisposable_TypeInfo )
    {
      --v20;
      v21 += 4;
      if ( !v20 )
        goto LABEL_28;
    }
    v22 = (__int64)&v19->vtable[*v21];
  }
  else
  {
LABEL_28:
    v22 = sub_1C7DCA8(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v22)(Enumerator, *(_QWORD *)(v22 + 8));
  return v18;
}