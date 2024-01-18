void __fastcall BuffMaster___ctor(BuffMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4189762 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_BuffMaster__BuffEntity__int___ctor__, method);
    byte_4189762 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    54,
    (const MethodInfo_24E4034 *)Method_DataMasterBase_BuffMaster__BuffEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BuffMaster__GetBuffGroup(BuffMaster_o *this, int32_t buffId, int32_t def, const MethodInfo *method)
{
  _BOOL8 v7; // x0
  __int64 v8; // x1
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4189766 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__, *(_QWORD *)&buffId);
    byte_4189766 = 1;
  }
  entity = 0LL;
  v7 = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         (DataMasterBase_WarMaster__WarEntity__int__o *)this,
         &entity,
         buffId,
         (const MethodInfo_24E412C *)Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
  if ( v7 )
  {
    if ( !entity )
      sub_B2C434(v7, v8);
    return (int32_t)entity->fields.emptyMessage;
  }
  return def;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BuffMaster__GetBuffType(BuffMaster_o *this, int32_t buffId, int32_t def, const MethodInfo *method)
{
  _BOOL8 v7; // x0
  __int64 v8; // x1
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4189765 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__, *(_QWORD *)&buffId);
    byte_4189765 = 1;
  }
  entity = 0LL;
  v7 = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         (DataMasterBase_WarMaster__WarEntity__int__o *)this,
         &entity,
         buffId,
         (const MethodInfo_24E412C *)Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
  if ( v7 )
  {
    if ( !entity )
      sub_B2C434(v7, v8);
    return *(&entity->fields.id + 1);
  }
  return def;
}


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_4189764 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__, *(_QWORD *)&buffId);
    byte_4189764 = 1;
  }
  entity = 0LL;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         (DataMasterBase_WarMaster__WarEntity__int__o *)this,
         &entity,
         buffId,
         (const MethodInfo_24E412C *)Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__) )
  {
    if ( !entity )
      sub_B2C434(0LL, v9);
    return BuffEntity__getScript_28343480((BuffEntity_o *)entity, key, def, v10);
  }
  return def;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BuffMaster__GetUnSubWhenContinueStatus(BuffMaster_o *this, int32_t buffId, const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4189768 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__, *(_QWORD *)&buffId);
    byte_4189768 = 1;
  }
  entity = 0LL;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)this,
          &entity,
          buffId,
          (const MethodInfo_24E412C *)Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__) )
    return 0;
  if ( !entity )
    sub_B2C434(0LL, v5);
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
  __int64 v9; // x1
  __int64 v10; // x1
  _BOOL8 v11; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_String_o *Value_string; // x1
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4189767 & 1) == 0 )
  {
    sub_B2C35C(&Method_BasicHelper_GetValue_string___, name);
    sub_B2C35C(&Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__, v9);
    sub_B2C35C(&StringLiteral_5329/*"DisplayCardBottomImageName"*/, v10);
    byte_4189767 = 1;
  }
  entity = 0LL;
  v11 = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)this,
          &entity,
          buffId,
          (const MethodInfo_24E412C *)Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
  Value_string = 0LL;
  if ( v11 )
  {
    if ( !entity )
      sub_B2C434(v11, 0LL);
    Value_string = BasicHelper__GetValue_string_(
                     *(System_Collections_Generic_Dictionary_string__object__o **)&entity->fields.eventId,
                     (System_String_o *)StringLiteral_5329/*"DisplayCardBottomImageName"*/,
                     defName,
                     (const MethodInfo_17283E8 *)Method_BasicHelper_GetValue_string___);
  }
  *name = Value_string;
  sub_B2C2F8((BattleServantConfConponent_o *)name, (System_Int32_array **)Value_string, v12, v13, v14, v15, v16, v17);
  return !System_String__IsNullOrEmpty(*name, 0LL);
}


System_Int32_array *__fastcall BuffMaster__get_StateEffectIdArray(BuffMaster_o *this, const MethodInfo *method)
{
  return this->fields._StateEffectIdArray_k__BackingField;
}


bool __fastcall BuffMaster__preProcess(BuffMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_int__o *v12; // x20
  __int64 v13; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v15; // x1
  __int64 v16; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v19; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v22; // x3
  System_Collections_Generic_IEnumerator_T__c *v23; // x8
  unsigned __int64 v24; // x10
  int32_t *v25; // x11
  __int64 v26; // x0
  unsigned int *v27; // x0
  __int64 v28; // x1
  BuffEntity_o *v29; // x22
  __int64 v30; // x9
  const MethodInfo *v31; // x1
  const MethodInfo *v32; // x1
  __int64 CardEffectId; // x0
  const MethodInfo *v34; // x1
  int32_t v35; // w0
  System_Collections_Generic_IEnumerator_T__c *v36; // x8
  unsigned __int64 v37; // x10
  int32_t *v38; // x11
  __int64 v39; // x0
  struct System_Int32_array *v40; // x0
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7

  if ( (byte_4189763 & 1) == 0 )
  {
    sub_B2C35C(&BuffEntity_TypeInfo, method);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, v3);
    sub_B2C35C(&System_IDisposable_TypeInfo, v4);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v5);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Contains__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__ToArray__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v10);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v11);
    byte_4189763 = 1;
  }
  v12 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v12,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_41;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2A0E96C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B2C434(0LL, v15);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v19 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v19;
        p_offset += 4;
        if ( v19 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v16);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v23 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v24 = 0LL;
      v25 = &v23->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v25 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v24;
        v25 += 4;
        if ( v24 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v26 = (__int64)&v23->vtable[*v25].method;
    }
    else
    {
LABEL_16:
      v26 = sub_AC5258(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v22);
    }
    v27 = (unsigned int *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v26)(
                            Enumerator,
                            *(_QWORD *)(v26 + 8));
    v29 = (BuffEntity_o *)v27;
    if ( !v27 )
      goto LABEL_38;
    v30 = *(&BuffEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)v27 + 300LL) < (unsigned int)v30
      || *(BuffEntity_c **)(*(_QWORD *)(*(_QWORD *)v27 + 200LL) + 8 * v30 - 8) != BuffEntity_TypeInfo )
    {
      v27 = (unsigned int *)sub_B2C728(v27);
LABEL_38:
      sub_B2C434(v27, v28);
    }
    v31 = (const MethodInfo *)v27[26];
    if ( (int)v31 >= 1 )
    {
      if ( !v12 )
        sub_B2C434(v27, v31);
      if ( !System_Collections_Generic_List_int___Contains(
              v12,
              (int32_t)v31,
              (const MethodInfo_2F6744C *)Method_System_Collections_Generic_List_int__Contains__) )
        System_Collections_Generic_List_int___Add(
          v12,
          v29->fields.effectId,
          (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
    }
    if ( BuffEntity__GetCardEffectId(v29, v31) >= 1 )
    {
      CardEffectId = BuffEntity__GetCardEffectId(v29, v32);
      if ( !v12 )
        sub_B2C434(CardEffectId, (unsigned int)CardEffectId);
      if ( !System_Collections_Generic_List_int___Contains(
              v12,
              CardEffectId,
              (const MethodInfo_2F6744C *)Method_System_Collections_Generic_List_int__Contains__) )
      {
        v35 = BuffEntity__GetCardEffectId(v29, v34);
        System_Collections_Generic_List_int___Add(
          v12,
          v35,
          (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
      }
    }
  }
  v36 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v37 = 0LL;
    v38 = &v36->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v38 - 1) != System_IDisposable_TypeInfo )
    {
      ++v37;
      v38 += 4;
      if ( v37 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_33;
    }
    v39 = (__int64)&v36->vtable[*v38].method;
  }
  else
  {
LABEL_33:
    v39 = sub_AC5258(Enumerator, System_IDisposable_TypeInfo, 0LL, v22);
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v39)(
                                                                                       Enumerator,
                                                                                       *(_QWORD *)(v39 + 8));
  if ( !v12 )
LABEL_41:
    sub_B2C434(list, v13);
  v40 = System_Collections_Generic_List_int___ToArray(
          v12,
          (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__);
  this->fields._StateEffectIdArray_k__BackingField = v40;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields._StateEffectIdArray_k__BackingField,
    (System_Int32_array **)v40,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
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
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields._StateEffectIdArray_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}