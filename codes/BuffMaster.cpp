void __fastcall BuffMaster___ctor(BuffMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EA61C & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_BuffMaster__BuffEntity__int___ctor__, (_DWORD)method, v2, v3);
    byte_42EA61C = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    55,
    (const MethodInfo_23FAD74 *)Method_DataMasterBase_BuffMaster__BuffEntity__int___ctor__);
}


int32_t __fastcall BuffMaster__GetBuffGroup(BuffMaster_o *this, int32_t buffId, int32_t def, const MethodInfo *method)
{
  int32_t v4; // w19
  _BOOL8 v7; // x0
  __int64 v8; // x1
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  v4 = def;
  if ( (byte_42EA620 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__, buffId, def, method);
    byte_42EA620 = 1;
  }
  entity = 0LL;
  v7 = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         (DataMasterBase_WarMaster__WarEntity__int__o *)this,
         &entity,
         buffId,
         (const MethodInfo_23FAE6C *)Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
  if ( v7 )
  {
    if ( !entity )
      sub_B5D69C(v7, v8);
    return (int32_t)entity->fields.emptyMessage;
  }
  return v4;
}


int32_t __fastcall BuffMaster__GetBuffType(BuffMaster_o *this, int32_t buffId, int32_t def, const MethodInfo *method)
{
  int32_t v4; // w19
  _BOOL8 v7; // x0
  __int64 v8; // x1
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  v4 = def;
  if ( (byte_42EA61F & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__, buffId, def, method);
    byte_42EA61F = 1;
  }
  entity = 0LL;
  v7 = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         (DataMasterBase_WarMaster__WarEntity__int__o *)this,
         &entity,
         buffId,
         (const MethodInfo_23FAE6C *)Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
  if ( v7 )
  {
    if ( !entity )
      sub_B5D69C(v7, v8);
    return *(&entity->fields.id + 1);
  }
  return v4;
}


System_String_o *__fastcall BuffMaster__GetScriptStr(
        BuffMaster_o *this,
        int32_t buffId,
        System_String_o *key,
        System_String_o *def,
        const MethodInfo *method)
{
  System_String_o *v5; // x19
  __int64 v9; // x1
  const MethodInfo *v10; // x3
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  v5 = def;
  if ( (byte_42EA61E & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__, buffId, (_DWORD)key, def);
    byte_42EA61E = 1;
  }
  entity = 0LL;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         (DataMasterBase_WarMaster__WarEntity__int__o *)this,
         &entity,
         buffId,
         (const MethodInfo_23FAE6C *)Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__) )
  {
    if ( !entity )
      sub_B5D69C(0LL, v9);
    return BuffEntity__getScript_28558956((BuffEntity_o *)entity, key, v5, v10);
  }
  return v5;
}


int32_t __fastcall BuffMaster__GetUnSubWhenContinueStatus(BuffMaster_o *this, int32_t buffId, const MethodInfo *method)
{
  __int64 v3; // x3
  const MethodInfo *v6; // x1
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42EA622 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__, buffId, (_DWORD)method, v3);
    byte_42EA622 = 1;
  }
  entity = 0LL;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)this,
          &entity,
          buffId,
          (const MethodInfo_23FAE6C *)Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__) )
    return 0;
  if ( !entity )
    sub_B5D69C(0LL, v6);
  return BuffEntity__GetUnSubStateWhenContinueStatus((BuffEntity_o *)entity, v6);
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  _BOOL8 v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_String_o *Value_string; // x1
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42EA621 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_GetValue_string___, (_DWORD)name, buffId, defName);
    sub_B5D5C4(&Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_5405/*"DisplayCardBottomImageName"*/, v12, v13, v14);
    byte_42EA621 = 1;
  }
  entity = 0LL;
  v15 = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)this,
          &entity,
          buffId,
          (const MethodInfo_23FAE6C *)Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
  Value_string = 0LL;
  if ( v15 )
  {
    if ( !entity )
      sub_B5D69C(v15, 0LL);
    Value_string = BasicHelper__GetValue_string_(
                     *(System_Collections_Generic_Dictionary_string__object__o **)&entity->fields.eventId,
                     (System_String_o *)StringLiteral_5405/*"DisplayCardBottomImageName"*/,
                     defName,
                     (const MethodInfo_1AD8A70 *)Method_BasicHelper_GetValue_string___);
  }
  *name = Value_string;
  sub_B5D560((BattleServantConfConponent_o *)name, (System_Int32_array **)Value_string, v16, v17, v18, v19, v20, v21);
  return !System_String__IsNullOrEmpty(*name, 0LL);
}


System_Int32_array *__fastcall BuffMaster__get_StateEffectIdArray(BuffMaster_o *this, const MethodInfo *method)
{
  return this->fields._StateEffectIdArray_k__BackingField;
}


bool __fastcall BuffMaster__preProcess(BuffMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  System_Collections_Generic_List_int__o *v32; // x20
  __int64 v33; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v35; // x1
  __int64 v36; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v39; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v42; // x3
  System_Collections_Generic_IEnumerator_T__c *v43; // x8
  unsigned __int64 v44; // x10
  int32_t *v45; // x11
  __int64 v46; // x0
  unsigned int *v47; // x0
  __int64 v48; // x1
  BuffEntity_o *v49; // x22
  __int64 v50; // x9
  const MethodInfo *v51; // x1
  const MethodInfo *v52; // x1
  __int64 CardEffectId; // x0
  const MethodInfo *v54; // x1
  int32_t v55; // w0
  System_Collections_Generic_IEnumerator_T__c *v56; // x8
  unsigned __int64 v57; // x10
  int32_t *v58; // x11
  __int64 v59; // x0
  struct System_Int32_array *v60; // x0
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7

  if ( (byte_42EA61D & 1) == 0 )
  {
    sub_B5D5C4(&BuffEntity_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, v5, v6, v7);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v11, v12, v13);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Contains__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v26, v27, v28);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v29, v30, v31);
    byte_42EA61D = 1;
  }
  v32 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v32,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_41;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2BB8C48 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B5D69C(0LL, v35);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v39 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v39;
        p_offset += 4;
        if ( v39 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v36);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v43 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v44 = 0LL;
      v45 = &v43->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v45 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v44;
        v45 += 4;
        if ( v44 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v46 = (__int64)&v43->vtable[*v45].method;
    }
    else
    {
LABEL_16:
      v46 = sub_AF54C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v42);
    }
    v47 = (unsigned int *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v46)(
                            Enumerator,
                            *(_QWORD *)(v46 + 8));
    v49 = (BuffEntity_o *)v47;
    if ( !v47 )
      goto LABEL_38;
    v50 = *(&BuffEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)v47 + 300LL) < (unsigned int)v50
      || *(BuffEntity_c **)(*(_QWORD *)(*(_QWORD *)v47 + 200LL) + 8 * v50 - 8) != BuffEntity_TypeInfo )
    {
      v47 = (unsigned int *)sub_B5D990(v47);
LABEL_38:
      sub_B5D69C(v47, v48);
    }
    v51 = (const MethodInfo *)v47[26];
    if ( (int)v51 >= 1 )
    {
      if ( !v32 )
        sub_B5D69C(v47, v51);
      if ( !System_Collections_Generic_List_int___Contains(
              v32,
              (int32_t)v51,
              (const MethodInfo_3084860 *)Method_System_Collections_Generic_List_int__Contains__) )
        System_Collections_Generic_List_int___Add(
          v32,
          v49->fields.effectId,
          (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
    }
    if ( BuffEntity__GetCardEffectId(v49, v51) >= 1 )
    {
      CardEffectId = BuffEntity__GetCardEffectId(v49, v52);
      if ( !v32 )
        sub_B5D69C(CardEffectId, (unsigned int)CardEffectId);
      if ( !System_Collections_Generic_List_int___Contains(
              v32,
              CardEffectId,
              (const MethodInfo_3084860 *)Method_System_Collections_Generic_List_int__Contains__) )
      {
        v55 = BuffEntity__GetCardEffectId(v49, v54);
        System_Collections_Generic_List_int___Add(
          v32,
          v55,
          (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
      }
    }
  }
  v56 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v57 = 0LL;
    v58 = &v56->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v58 - 1) != System_IDisposable_TypeInfo )
    {
      ++v57;
      v58 += 4;
      if ( v57 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_33;
    }
    v59 = (__int64)&v56->vtable[*v58].method;
  }
  else
  {
LABEL_33:
    v59 = sub_AF54C0(Enumerator, System_IDisposable_TypeInfo, 0LL, v42);
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v59)(
                                                                                       Enumerator,
                                                                                       *(_QWORD *)(v59 + 8));
  if ( !v32 )
LABEL_41:
    sub_B5D69C(list, v33);
  v60 = System_Collections_Generic_List_int___ToArray(
          v32,
          (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
  this->fields._StateEffectIdArray_k__BackingField = v60;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._StateEffectIdArray_k__BackingField,
    (System_Int32_array **)v60,
    v61,
    v62,
    v63,
    v64,
    v65,
    v66);
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
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._StateEffectIdArray_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}