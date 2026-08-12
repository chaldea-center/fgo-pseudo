void AttriMaster___ctor(AttriMaster_o *this, const MethodInfo *method)
{
  if ( (byte_597040C & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_AttriMaster__AttriEntity__int___ctor__);
    byte_597040C = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    487,
    (const MethodInfo_3F0E6E0 *)Method_DataMasterBase_AttriMaster__AttriEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
int32_t AttriMaster__GetAttrValue(AttriMaster_o *this, int32_t id, const MethodInfo *method)
{
  int v4; // w8
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_597040A & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_AttriMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_AttriMaster__AttriEntity__int__TryGetEntity__);
    byte_597040A = 1;
  }
  v4 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  entity = 0;
  if ( !v4 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&id);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_AttriMaster___);
  if ( !Master_object )
    goto LABEL_11;
  Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                    &entity,
                                    id,
                                    (const MethodInfo_3F10B80 *)Method_DataMasterBase_AttriMaster__AttriEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    if ( entity )
      return HIDWORD(entity[1].klass);
LABEL_11:
    sub_2213CDC(Master_object, v6);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
int32_t AttriMaster__GetIndividualityFromValue(AttriMaster_o *this, int32_t attrValue, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v7; // x1
  System_Collections_Generic_IEnumerator_T__o *i; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v10; // x9
  int *p_offset; // x10
  __int64 v12; // x0
  __int64 v13; // x0
  __int64 v14; // x1
  System_Collections_Generic_IEnumerator_T__c *v15; // x8
  __int64 v16; // x9
  int *v17; // x10
  __int64 v18; // x0
  _DWORD *v19; // x0
  __int64 naturalAligment; // x10
  int32_t v21; // w20
  System_Collections_Generic_IEnumerator_T__c *v22; // x8
  __int64 v23; // x9
  int *v24; // x10
  __int64 v25; // x0
  System_Collections_Generic_IEnumerator_T__o *v27; // [xsp+18h] [xbp-38h]

  if ( (byte_597040B & 1) == 0 )
  {
    sub_2213A60(&AttriEntity_TypeInfo);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_AttriEntity__GetEnumerator__);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_AttriEntity__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    byte_597040B = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_2213CDC(0, *(_QWORD *)&attrValue);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3E94810 *)Method_System_Collections_ObjectModel_Collection_AttriEntity__GetEnumerator__);
  v27 = Enumerator;
  if ( !Enumerator )
    sub_2213CDC(Enumerator, v7);
  for ( i = Enumerator; ; i = v27 )
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
      v12 = sub_224BC3C(i, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v13 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v12)(
            i,
            *(_QWORD *)(v12 + 8));
    if ( (v13 & 1) == 0 )
    {
      v21 = -1;
      goto LABEL_27;
    }
    if ( !v27 )
      sub_2213CDC(v13, v14);
    v15 = v27->klass;
    v16 = *(unsigned __int16 *)&v27->klass->_2.rank;
    if ( *(_WORD *)&v27->klass->_2.rank )
    {
      v17 = &v15->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_AttriEntity__c **)v17 - 1) != System_Collections_Generic_IEnumerator_AttriEntity__TypeInfo )
      {
        --v16;
        v17 += 4;
        if ( !v16 )
          goto LABEL_18;
      }
      v18 = (__int64)&v15->vtable[*v17];
    }
    else
    {
LABEL_18:
      v18 = sub_224BC3C(v27, System_Collections_Generic_IEnumerator_AttriEntity__TypeInfo, 0);
    }
    v19 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v18)(
                      v27,
                      *(_QWORD *)(v18 + 8));
    if ( v19 )
    {
      naturalAligment = AttriEntity_TypeInfo->_2.naturalAligment;
      if ( *(unsigned __int8 *)(*(_QWORD *)v19 + 304LL) >= (unsigned int)naturalAligment
        && *(AttriEntity_c **)(*(_QWORD *)(*(_QWORD *)v19 + 200LL) + 8 * naturalAligment - 8) == AttriEntity_TypeInfo
        && v19[5] == attrValue )
      {
        break;
      }
    }
  }
  v21 = v19[6];
LABEL_27:
  if ( v27 )
  {
    v22 = v27->klass;
    v23 = *(unsigned __int16 *)&v27->klass->_2.rank;
    if ( *(_WORD *)&v27->klass->_2.rank )
    {
      v24 = &v22->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v24 - 1) != System_IDisposable_TypeInfo )
      {
        --v23;
        v24 += 4;
        if ( !v23 )
          goto LABEL_32;
      }
      v25 = (__int64)&v22->vtable[*v24];
    }
    else
    {
LABEL_32:
      v25 = sub_224BC3C(v27, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v25)(v27, *(_QWORD *)(v25 + 8));
  }
  return v21;
}