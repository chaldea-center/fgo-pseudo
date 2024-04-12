void __fastcall BuffMaster___ctor(BuffMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42B183A & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_BuffMaster__BuffEntity__int___ctor__);
    byte_42B183A = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    55,
    (const MethodInfo_23E223C *)Method_DataMasterBase_BuffMaster__BuffEntity__int___ctor__);
}


int32_t __fastcall BuffMaster__GetBuffGroup(BuffMaster_o *this, int32_t buffId, int32_t def, const MethodInfo *method)
{
  _BOOL8 v7; // x0
  __int64 v8; // x1
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42B183E & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
    byte_42B183E = 1;
  }
  entity = 0LL;
  v7 = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         (DataMasterBase_WarMaster__WarEntity__int__o *)this,
         &entity,
         buffId,
         (const MethodInfo_23E2334 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
  if ( v7 )
  {
    if ( !entity )
      sub_B52A5C(v7, v8);
    return (int32_t)entity->fields.emptyMessage;
  }
  return def;
}


int32_t __fastcall BuffMaster__GetBuffType(BuffMaster_o *this, int32_t buffId, int32_t def, const MethodInfo *method)
{
  _BOOL8 v7; // x0
  __int64 v8; // x1
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42B183D & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
    byte_42B183D = 1;
  }
  entity = 0LL;
  v7 = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         (DataMasterBase_WarMaster__WarEntity__int__o *)this,
         &entity,
         buffId,
         (const MethodInfo_23E2334 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
  if ( v7 )
  {
    if ( !entity )
      sub_B52A5C(v7, v8);
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

  if ( (byte_42B183C & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
    byte_42B183C = 1;
  }
  entity = 0LL;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         (DataMasterBase_WarMaster__WarEntity__int__o *)this,
         &entity,
         buffId,
         (const MethodInfo_23E2334 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__) )
  {
    if ( !entity )
      sub_B52A5C(0LL, v9);
    return BuffEntity__getScript_27767184((BuffEntity_o *)entity, key, def, v10);
  }
  return def;
}


int32_t __fastcall BuffMaster__GetUnSubWhenContinueStatus(BuffMaster_o *this, int32_t buffId, const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42B1840 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
    byte_42B1840 = 1;
  }
  entity = 0LL;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)this,
          &entity,
          buffId,
          (const MethodInfo_23E2334 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__) )
    return 0;
  if ( !entity )
    sub_B52A5C(0LL, v5);
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

  if ( (byte_42B183F & 1) == 0 )
  {
    sub_B52984(&Method_BasicHelper_GetValue_string___);
    sub_B52984(&Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
    sub_B52984(&StringLiteral_5370/*"DisplayCardBottomImageName"*/);
    byte_42B183F = 1;
  }
  entity = 0LL;
  v9 = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         (DataMasterBase_WarMaster__WarEntity__int__o *)this,
         &entity,
         buffId,
         (const MethodInfo_23E2334 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
  Value_string = 0LL;
  if ( v9 )
  {
    if ( !entity )
      sub_B52A5C(v9, 0LL);
    Value_string = BasicHelper__GetValue_string_(
                     *(System_Collections_Generic_Dictionary_string__object__o **)&entity->fields.eventId,
                     (System_String_o *)StringLiteral_5370/*"DisplayCardBottomImageName"*/,
                     defName,
                     (const MethodInfo_1A439A8 *)Method_BasicHelper_GetValue_string___);
  }
  *name = Value_string;
  sub_B52920((BattleServantConfConponent_o *)name, (System_Int32_array **)Value_string, v10, v11, v12, v13, v14, v15);
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
  __int64 v7; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v10; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v13; // x3
  System_Collections_Generic_IEnumerator_T__c *v14; // x8
  unsigned __int64 v15; // x10
  int32_t *v16; // x11
  __int64 v17; // x0
  unsigned int *v18; // x0
  __int64 v19; // x1
  BuffEntity_o *v20; // x22
  __int64 v21; // x9
  const MethodInfo *v22; // x1
  const MethodInfo *v23; // x1
  __int64 CardEffectId; // x0
  const MethodInfo *v25; // x1
  int32_t v26; // w0
  System_Collections_Generic_IEnumerator_T__c *v27; // x8
  unsigned __int64 v28; // x10
  int32_t *v29; // x11
  __int64 v30; // x0
  struct System_Int32_array *v31; // x0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7

  if ( (byte_42B183B & 1) == 0 )
  {
    sub_B52984(&BuffEntity_TypeInfo);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_int__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_int__Contains__);
    sub_B52984(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B52984(&System_Collections_Generic_List_int__TypeInfo);
    byte_42B183B = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_3056254 *)Method_System_Collections_Generic_List_int___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_41;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2B98BDC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B52A5C(0LL, v6);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v10 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v10;
        p_offset += 4;
        if ( v10 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AEB880(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v7);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v14 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v15 = 0LL;
      v16 = &v14->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v16 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v15;
        v16 += 4;
        if ( v15 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v17 = (__int64)&v14->vtable[*v16].method;
    }
    else
    {
LABEL_16:
      v17 = sub_AEB880(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v13);
    }
    v18 = (unsigned int *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v17)(
                            Enumerator,
                            *(_QWORD *)(v17 + 8));
    v20 = (BuffEntity_o *)v18;
    if ( !v18 )
      goto LABEL_38;
    v21 = *(&BuffEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)v18 + 300LL) < (unsigned int)v21
      || *(BuffEntity_c **)(*(_QWORD *)(*(_QWORD *)v18 + 200LL) + 8 * v21 - 8) != BuffEntity_TypeInfo )
    {
      v18 = (unsigned int *)sub_B52D50(v18);
LABEL_38:
      sub_B52A5C(v18, v19);
    }
    v22 = (const MethodInfo *)v18[26];
    if ( (int)v22 >= 1 )
    {
      if ( !v3 )
        sub_B52A5C(v18, v22);
      if ( !System_Collections_Generic_List_int___Contains(
              v3,
              (int32_t)v22,
              (const MethodInfo_3057404 *)Method_System_Collections_Generic_List_int__Contains__) )
        System_Collections_Generic_List_int___Add(
          v3,
          v20->fields.effectId,
          (const MethodInfo_3056FB0 *)Method_System_Collections_Generic_List_int__Add__);
    }
    if ( BuffEntity__GetCardEffectId(v20, v22) >= 1 )
    {
      CardEffectId = BuffEntity__GetCardEffectId(v20, v23);
      if ( !v3 )
        sub_B52A5C(CardEffectId, (unsigned int)CardEffectId);
      if ( !System_Collections_Generic_List_int___Contains(
              v3,
              CardEffectId,
              (const MethodInfo_3057404 *)Method_System_Collections_Generic_List_int__Contains__) )
      {
        v26 = BuffEntity__GetCardEffectId(v20, v25);
        System_Collections_Generic_List_int___Add(
          v3,
          v26,
          (const MethodInfo_3056FB0 *)Method_System_Collections_Generic_List_int__Add__);
      }
    }
  }
  v27 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v28 = 0LL;
    v29 = &v27->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v29 - 1) != System_IDisposable_TypeInfo )
    {
      ++v28;
      v29 += 4;
      if ( v28 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_33;
    }
    v30 = (__int64)&v27->vtable[*v29].method;
  }
  else
  {
LABEL_33:
    v30 = sub_AEB880(Enumerator, System_IDisposable_TypeInfo, 0LL, v13);
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v30)(
                                                                                       Enumerator,
                                                                                       *(_QWORD *)(v30 + 8));
  if ( !v3 )
LABEL_41:
    sub_B52A5C(list, v4);
  v31 = System_Collections_Generic_List_int___ToArray(
          v3,
          (const MethodInfo_30590BC *)Method_System_Collections_Generic_List_int__ToArray__);
  this->fields._StateEffectIdArray_k__BackingField = v31;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields._StateEffectIdArray_k__BackingField,
    (System_Int32_array **)v31,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
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
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields._StateEffectIdArray_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}