void __fastcall BuffMaster___ctor(BuffMaster_o *this, const MethodInfo *method)
{
  if ( (byte_438D800 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_BuffMaster__BuffEntity__int___ctor__);
    byte_438D800 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    55,
    (const MethodInfo_21FB7F8 *)Method_DataMasterBase_BuffMaster__BuffEntity__int___ctor__);
}


int32_t __fastcall BuffMaster__GetBuffGroup(BuffMaster_o *this, int32_t buffId, int32_t def, const MethodInfo *method)
{
  _BOOL8 v7; // x0
  __int64 v8; // x1
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_438D804 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
    byte_438D804 = 1;
  }
  entity = 0LL;
  v7 = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         (DataMasterBase_WarMaster__WarEntity__int__o *)this,
         &entity,
         buffId,
         (const MethodInfo_21FB8F0 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
  if ( v7 )
  {
    if ( !entity )
      sub_B7769C(v7, v8);
    return (int32_t)entity->fields.emptyMessage;
  }
  return def;
}


int32_t __fastcall BuffMaster__GetBuffType(BuffMaster_o *this, int32_t buffId, int32_t def, const MethodInfo *method)
{
  _BOOL8 v7; // x0
  __int64 v8; // x1
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_438D803 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
    byte_438D803 = 1;
  }
  entity = 0LL;
  v7 = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         (DataMasterBase_WarMaster__WarEntity__int__o *)this,
         &entity,
         buffId,
         (const MethodInfo_21FB8F0 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
  if ( v7 )
  {
    if ( !entity )
      sub_B7769C(v7, v8);
    return *(&entity->fields.id + 1);
  }
  return def;
}


System_String_o *__fastcall BuffMaster__GetScriptStr(
        BuffMaster_o *this,
        int32_t buffId,
        System_String_o *key,
        System_String_o *def,
        const MethodInfo *method)
{
  __int64 v9; // x1
  const MethodInfo *v10; // x3
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_438D802 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
    byte_438D802 = 1;
  }
  entity = 0LL;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         (DataMasterBase_WarMaster__WarEntity__int__o *)this,
         &entity,
         buffId,
         (const MethodInfo_21FB8F0 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__) )
  {
    if ( !entity )
      sub_B7769C(0LL, v9);
    return BuffEntity__getScript_29585500((BuffEntity_o *)entity, key, def, v10);
  }
  return def;
}


int32_t __fastcall BuffMaster__GetUnSubWhenContinueStatus(BuffMaster_o *this, int32_t buffId, const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_438D806 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
    byte_438D806 = 1;
  }
  entity = 0LL;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)this,
          &entity,
          buffId,
          (const MethodInfo_21FB8F0 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__) )
    return 0;
  if ( !entity )
    sub_B7769C(0LL, v5);
  return BuffEntity__GetUnSubStateWhenContinueStatus((BuffEntity_o *)entity, v5);
}


bool __fastcall BuffMaster__IsUnSubStateWhenAliveContinue(BuffMaster_o *this, int32_t buffId, const MethodInfo *method)
{
  return ((unsigned int)BuffMaster__GetUnSubWhenContinueStatus(this, buffId, method) >> 1) & 1;
}


bool __fastcall BuffMaster__IsUnSubStateWhenDeadContinue(BuffMaster_o *this, int32_t buffId, const MethodInfo *method)
{
  return BuffMaster__GetUnSubWhenContinueStatus(this, buffId, method) & 1;
}


bool __fastcall BuffMaster__TryGetDisplayCardBottomImageName(
        BuffMaster_o *this,
        System_String_o **name,
        int32_t buffId,
        System_String_o *defName,
        const MethodInfo *method)
{
  _BOOL8 v9; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_String_o *Value_string; // x1
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_438D805 & 1) == 0 )
  {
    sub_B775C4(&Method_BasicHelper_GetValue_string___);
    sub_B775C4(&Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
    sub_B775C4(&StringLiteral_5468/*"DisplayCardBottomImageName"*/);
    byte_438D805 = 1;
  }
  entity = 0LL;
  v9 = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         (DataMasterBase_WarMaster__WarEntity__int__o *)this,
         &entity,
         buffId,
         (const MethodInfo_21FB8F0 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
  Value_string = 0LL;
  if ( v9 )
  {
    if ( !entity )
      sub_B7769C(v9, 0LL);
    Value_string = BasicHelper__GetValue_string_(
                     *(System_Collections_Generic_Dictionary_string__object__o **)&entity->fields.eventId,
                     (System_String_o *)StringLiteral_5468/*"DisplayCardBottomImageName"*/,
                     defName,
                     (const MethodInfo_1C67E80 *)Method_BasicHelper_GetValue_string___);
  }
  *name = Value_string;
  sub_B77560((BattleServantConfConponent_o *)name, (System_Int32_array **)Value_string, v10, v11, v12, v13, v14, v15);
  return !System_String__IsNullOrEmpty(*name, 0LL);
}


System_Int32_array *__fastcall BuffMaster__get_StateEffectIdArray(BuffMaster_o *this, const MethodInfo *method)
{
  return this->fields._StateEffectIdArray_k__BackingField;
}


bool __fastcall BuffMaster__preProcess(BuffMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v3; // x20
  __int64 v4; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v6; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v9; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v12; // x8
  unsigned __int64 v13; // x10
  int32_t *v14; // x11
  __int64 v15; // x0
  unsigned int *v16; // x0
  __int64 v17; // x1
  BuffEntity_o *v18; // x22
  __int64 v19; // x9
  const MethodInfo *v20; // x1
  const MethodInfo *v21; // x1
  __int64 CardEffectId; // x0
  const MethodInfo *v23; // x1
  int32_t v24; // w0
  System_Collections_Generic_IEnumerator_T__c *v25; // x8
  unsigned __int64 v26; // x10
  int32_t *v27; // x11
  __int64 v28; // x0
  struct System_Int32_array *v29; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7

  if ( (byte_438D801 & 1) == 0 )
  {
    sub_B775C4(&BuffEntity_TypeInfo);
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B775C4(&System_IDisposable_TypeInfo);
    sub_B775C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B775C4(&System_Collections_IEnumerator_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_int__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__Contains__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_int___ctor___69397304);
    sub_B775C4(&System_Collections_Generic_List_int__TypeInfo);
    byte_438D801 = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_B77694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_30E508C *)Method_System_Collections_Generic_List_int___ctor___69397304);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_41;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2CC56C8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B7769C(0LL, v6);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v9 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v9;
        p_offset += 4;
        if ( v9 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_B0F4C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v12 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v13 = 0LL;
      v14 = &v12->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v14 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v13;
        v14 += 4;
        if ( v13 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v15 = (__int64)&v12->vtable[*v14].method;
    }
    else
    {
LABEL_16:
      v15 = sub_B0F4C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v16 = (unsigned int *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v15)(
                            Enumerator,
                            *(_QWORD *)(v15 + 8));
    v18 = (BuffEntity_o *)v16;
    if ( !v16 )
      goto LABEL_38;
    v19 = *(&BuffEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)v16 + 300LL) < (unsigned int)v19
      || *(BuffEntity_c **)(*(_QWORD *)(*(_QWORD *)v16 + 200LL) + 8 * v19 - 8) != BuffEntity_TypeInfo )
    {
      sub_B77990(v16);
LABEL_38:
      sub_B7769C(v16, v17);
    }
    v20 = (const MethodInfo *)v16[26];
    if ( (int)v20 >= 1 )
    {
      if ( !v3 )
        sub_B7769C(v16, v20);
      if ( !System_Collections_Generic_List_int___Contains(
              v3,
              (int32_t)v20,
              (const MethodInfo_30E623C *)Method_System_Collections_Generic_List_int__Contains__) )
        System_Collections_Generic_List_int___Add(
          v3,
          v18->fields.effectId,
          (const MethodInfo_30E5DE8 *)Method_System_Collections_Generic_List_int__Add__);
    }
    if ( BuffEntity__GetCardEffectId(v18, v20) >= 1 )
    {
      CardEffectId = BuffEntity__GetCardEffectId(v18, v21);
      if ( !v3 )
        sub_B7769C(CardEffectId, (unsigned int)CardEffectId);
      if ( !System_Collections_Generic_List_int___Contains(
              v3,
              CardEffectId,
              (const MethodInfo_30E623C *)Method_System_Collections_Generic_List_int__Contains__) )
      {
        v24 = BuffEntity__GetCardEffectId(v18, v23);
        System_Collections_Generic_List_int___Add(
          v3,
          v24,
          (const MethodInfo_30E5DE8 *)Method_System_Collections_Generic_List_int__Add__);
      }
    }
  }
  v25 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v26 = 0LL;
    v27 = &v25->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v27 - 1) != System_IDisposable_TypeInfo )
    {
      ++v26;
      v27 += 4;
      if ( v26 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_33;
    }
    v28 = (__int64)&v25->vtable[*v27].method;
  }
  else
  {
LABEL_33:
    v28 = sub_B0F4C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v28)(
                                                                                       Enumerator,
                                                                                       *(_QWORD *)(v28 + 8));
  if ( !v3 )
LABEL_41:
    sub_B7769C(list, v4);
  v29 = System_Collections_Generic_List_int___ToArray(
          v3,
          (const MethodInfo_30E7EF4 *)Method_System_Collections_Generic_List_int__ToArray__);
  this->fields._StateEffectIdArray_k__BackingField = v29;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields._StateEffectIdArray_k__BackingField,
    (System_Int32_array **)v29,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  return 1;
}


void __fastcall BuffMaster__set_StateEffectIdArray(
        BuffMaster_o *this,
        System_Int32_array *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._StateEffectIdArray_k__BackingField = value;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields._StateEffectIdArray_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}