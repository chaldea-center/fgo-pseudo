void GiftAddMaster___ctor(GiftAddMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5938AD6 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_GiftAddMaster__GiftAddEntity__string___ctor__);
    byte_5938AD6 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    25,
    (const MethodInfo_3EDFBF4 *)Method_DataMasterBase_GiftAddMaster__GiftAddEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
GiftAddEntity_o *GiftAddMaster__GetEntity(
        GiftAddMaster_o *this,
        int32_t giftId,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_5938AD4 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_GiftAddMaster__GiftAddEntity__string__GetEntity__);
    byte_5938AD4 = 1;
  }
  PK = (Il2CppObject *)GiftAddEntity__CreatePK(giftId, priority, *(const MethodInfo **)&priority);
  return (GiftAddEntity_o *)DataMasterBase_object__object__object___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                              PK,
                              (const MethodInfo_3EE2044 *)Method_DataMasterBase_GiftAddMaster__GiftAddEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
GiftAddEntity_o *GiftAddMaster__GetValidPriorDataById(GiftAddMaster_o *this, int32_t giftId, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v7; // x1
  System_Collections_Generic_IEnumerator_T__o *v8; // x21
  GiftAddEntity_o *v9; // x22
  GiftAddEntity_o *v10; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v12; // x9
  int *p_offset; // x10
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x1
  System_Collections_Generic_IEnumerator_T__c *v17; // x8
  __int64 v18; // x9
  int *v19; // x10
  __int64 v20; // x0
  GiftAddEntity_o *v21; // x0
  const MethodInfo *v22; // x1
  int32_t priority; // w8
  System_Collections_Generic_IEnumerator_T__c *v24; // x8
  __int64 v25; // x9
  int *v26; // x10
  __int64 v27; // x0
  System_Collections_Generic_IEnumerator_T__o *v29; // [xsp+18h] [xbp-38h]

  if ( (byte_5938AD7 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_GiftAddEntity__GetEnumerator__);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerator_GiftAddEntity__TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    byte_5938AD7 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_21FFECC(0, *(_QWORD *)&giftId);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3E61068 *)Method_System_Collections_ObjectModel_Collection_GiftAddEntity__GetEnumerator__);
  v29 = Enumerator;
  if ( !Enumerator )
    sub_21FFECC(0, v7);
  v8 = Enumerator;
  v9 = 0;
LABEL_6:
  v10 = v9;
  while ( 1 )
  {
    klass = v8->klass;
    v12 = *(unsigned __int16 *)&v8->klass->_2.rank;
    if ( *(_WORD *)&v8->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v12;
        p_offset += 4;
        if ( !v12 )
          goto LABEL_11;
      }
      v14 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_11:
      v14 = sub_2237E2C(v8, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v15 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v14)(
            v8,
            *(_QWORD *)(v14 + 8));
    if ( (v15 & 1) == 0 )
      break;
    if ( !v29 )
      sub_21FFECC(v15, v16);
    v17 = v29->klass;
    v18 = *(unsigned __int16 *)&v29->klass->_2.rank;
    if ( *(_WORD *)&v29->klass->_2.rank )
    {
      v19 = &v17->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_GiftAddEntity__c **)v19 - 1) != System_Collections_Generic_IEnumerator_GiftAddEntity__TypeInfo )
      {
        --v18;
        v19 += 4;
        if ( !v18 )
          goto LABEL_19;
      }
      v20 = (__int64)&v17->vtable[*v19];
    }
    else
    {
LABEL_19:
      v20 = sub_2237E2C(v29, System_Collections_Generic_IEnumerator_GiftAddEntity__TypeInfo, 0);
    }
    v21 = (GiftAddEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v20)(
                               v29,
                               *(_QWORD *)(v20 + 8));
    v9 = v21;
    if ( !v21 )
      sub_21FFECC(0, v22);
    if ( v21->fields.giftId == giftId
      && GiftAddEntity__CheckValid(v21, v22)
      && (!v10 || (priority = v9->fields.priority) != 0 && priority > v10->fields.priority) )
    {
      v8 = v29;
      goto LABEL_6;
    }
    v8 = v29;
  }
  if ( v29 )
  {
    v24 = v29->klass;
    v25 = *(unsigned __int16 *)&v29->klass->_2.rank;
    if ( *(_WORD *)&v29->klass->_2.rank )
    {
      v26 = &v24->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v26 - 1) != System_IDisposable_TypeInfo )
      {
        --v25;
        v26 += 4;
        if ( !v25 )
          goto LABEL_38;
      }
      v27 = (__int64)&v24->vtable[*v26];
    }
    else
    {
LABEL_38:
      v27 = sub_2237E2C(v29, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v27)(v29, *(_QWORD *)(v27 + 8));
  }
  return v10;
}


// local variable allocation has failed, the output may be wrong!
bool GiftAddMaster__TryGetEntity(
        GiftAddMaster_o *this,
        GiftAddEntity_o **entity,
        int32_t giftId,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_5938AD5 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_GiftAddMaster__GiftAddEntity__string__TryGetEntity__);
    byte_5938AD5 = 1;
  }
  PK = (Il2CppObject *)GiftAddEntity__CreatePK(giftId, priority, *(const MethodInfo **)&giftId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3EE2090 *)Method_DataMasterBase_GiftAddMaster__GiftAddEntity__string__TryGetEntity__);
}