void __fastcall BuffMaster___ctor(BuffMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5AEC0 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_BuffMaster__BuffEntity__int___ctor__);
    byte_4A5AEC0 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    56,
    (const MethodInfo_311D8F4 *)Method_DataMasterBase_BuffMaster__BuffEntity__int___ctor__);
}


int32_t __fastcall BuffMaster__GetBuffGroup(BuffMaster_o *this, int32_t buffId, int32_t def, const MethodInfo *method)
{
  _BOOL8 v7; // x0
  __int64 v8; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A5AEC4 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
    byte_4A5AEC4 = 1;
  }
  entity = 0LL;
  v7 = DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
         &entity,
         buffId,
         (const MethodInfo_311D988 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
  if ( v7 )
  {
    if ( !entity )
      sub_1B8880C(v7, v8);
    return (int32_t)entity[4].monitor;
  }
  return def;
}


int32_t __fastcall BuffMaster__GetBuffType(BuffMaster_o *this, int32_t buffId, int32_t def, const MethodInfo *method)
{
  _BOOL8 v7; // x0
  __int64 v8; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A5AEC3 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
    byte_4A5AEC3 = 1;
  }
  entity = 0LL;
  v7 = DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
         &entity,
         buffId,
         (const MethodInfo_311D988 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
  if ( v7 )
  {
    if ( !entity )
      sub_1B8880C(v7, v8);
    return HIDWORD(entity[1].klass);
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
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A5AEC2 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
    byte_4A5AEC2 = 1;
  }
  entity = 0LL;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
         &entity,
         buffId,
         (const MethodInfo_311D988 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__) )
  {
    if ( !entity )
      sub_1B8880C(0LL, v9);
    return BuffEntity__getScript_38995072((BuffEntity_o *)entity, key, def, v10);
  }
  return def;
}


int32_t __fastcall BuffMaster__GetUnSubWhenContinueStatus(BuffMaster_o *this, int32_t buffId, const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A5AEC6 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
    byte_4A5AEC6 = 1;
  }
  entity = 0LL;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
          &entity,
          buffId,
          (const MethodInfo_311D988 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__) )
    return 0;
  if ( !entity )
    sub_1B8880C(0LL, v5);
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
  int32_t v10; // w2
  int32_t v11; // w3
  Il2CppObject *Value_object; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A5AEC5 & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_GetValue_string___);
    sub_1B885B0(&Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
    sub_1B885B0(&StringLiteral_5331/*"DisplayCardBottomImageName"*/);
    byte_4A5AEC5 = 1;
  }
  entity = 0LL;
  v9 = DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
         &entity,
         buffId,
         (const MethodInfo_311D988 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
  Value_object = 0LL;
  if ( v9 )
  {
    if ( !entity )
      sub_1B8880C(v9, 0LL);
    Value_object = BasicHelper__GetValue_object_(
                     (System_Collections_Generic_Dictionary_string__object__o *)entity[6].klass,
                     (System_String_o *)StringLiteral_5331/*"DisplayCardBottomImageName"*/,
                     (Il2CppObject *)defName,
                     (const MethodInfo_2E6DC68 *)Method_BasicHelper_GetValue_string___);
  }
  *name = (System_String_o *)Value_object;
  sub_1B88554((ServantStatusBattleListViewItem_o *)name, (int32_t)Value_object, v10, v11);
  return !System_String__IsNullOrEmpty(*name, 0LL);
}


System_Int32_array *__fastcall BuffMaster__get_StateEffectIdArray(BuffMaster_o *this, const MethodInfo *method)
{
  return this->fields._StateEffectIdArray_k__BackingField;
}


bool __fastcall BuffMaster__preProcess(BuffMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v3; // x21
  __int64 v4; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v6; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v9; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v12; // x8
  __int64 v13; // x9
  int32_t *v14; // x10
  __int64 v15; // x0
  unsigned int *v16; // x0
  __int64 v17; // x1
  BuffEntity_o *v18; // x22
  __int64 methodPtr_low; // x9
  unsigned __int64 effectId; // x1
  _BOOL8 v21; // x0
  struct System_Int32_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  const MethodInfo *v25; // x1
  __int64 CardEffectId; // x0
  const MethodInfo *v27; // x1
  __int64 v28; // x0
  struct System_Int32_array *v29; // x8
  _QWORD *v30; // x9
  __int64 v31; // x10
  System_Collections_Generic_IEnumerator_T__c *v32; // x8
  __int64 v33; // x9
  int32_t *v34; // x10
  __int64 v35; // x0
  struct System_Int32_array *v36; // x0
  int32_t v37; // w2
  int32_t v38; // w3

  if ( (byte_4A5AEC1 & 1) == 0 )
  {
    sub_1B885B0(&BuffEntity_TypeInfo);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    byte_4A5AEC1 = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_49;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_30BAB58 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B8880C(0LL, v6);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v9 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v9;
        p_offset += 4;
        if ( !v9 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1BDA590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v12 = Enumerator->klass;
    v13 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v14 = &v12->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v14 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v13;
        v14 += 4;
        if ( !v13 )
          goto LABEL_16;
      }
      v15 = (__int64)&v12->vtable[*v14].method;
    }
    else
    {
LABEL_16:
      v15 = sub_1BDA590(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v16 = (unsigned int *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v15)(
                            Enumerator,
                            *(_QWORD *)(v15 + 8));
    v18 = (BuffEntity_o *)v16;
    if ( !v16 )
      goto LABEL_44;
    methodPtr_low = LOBYTE(BuffEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v16 + 304LL) < (unsigned int)methodPtr_low
      || *(BuffEntity_c **)(*(_QWORD *)(*(_QWORD *)v16 + 200LL) + 8 * methodPtr_low - 8) != BuffEntity_TypeInfo )
    {
      sub_1B88ACC(v16);
LABEL_44:
      sub_1B8880C(v16, v17);
    }
    effectId = v16[26];
    if ( (int)effectId >= 1 )
    {
      if ( !v3 )
        sub_1B8880C(v16, effectId);
      v21 = System_Collections_Generic_List_int___Contains(
              v3,
              effectId,
              (const MethodInfo_34E0B88 *)Method_System_Collections_Generic_List_int__Contains__);
      if ( !v21 )
      {
        effectId = (unsigned int)v18->fields.effectId;
        items = v3->fields._items;
        v23 = Method_System_Collections_Generic_List_int__Add__;
        ++v3->fields._version;
        if ( !items )
          sub_1B8880C(v21, effectId);
        size = v3->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v3,
            effectId,
            *(const MethodInfo_34E0810 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
        }
        else
        {
          v3->fields._size = size + 1;
          items->m_Items[size + 1] = effectId;
        }
      }
    }
    if ( BuffEntity__GetCardEffectId(v18, (const MethodInfo *)effectId) >= 1 )
    {
      CardEffectId = BuffEntity__GetCardEffectId(v18, v25);
      if ( !v3 )
        sub_1B8880C(CardEffectId, (unsigned int)CardEffectId);
      if ( !System_Collections_Generic_List_int___Contains(
              v3,
              CardEffectId,
              (const MethodInfo_34E0B88 *)Method_System_Collections_Generic_List_int__Contains__) )
      {
        v28 = BuffEntity__GetCardEffectId(v18, v27);
        v29 = v3->fields._items;
        v30 = Method_System_Collections_Generic_List_int__Add__;
        ++v3->fields._version;
        if ( !v29 )
          sub_1B8880C(v28, (unsigned int)v28);
        v31 = v3->fields._size;
        if ( (unsigned int)v31 >= v29->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v3,
            v28,
            *(const MethodInfo_34E0810 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
        }
        else
        {
          v3->fields._size = v31 + 1;
          v29->m_Items[v31 + 1] = v28;
        }
      }
    }
  }
  v32 = Enumerator->klass;
  v33 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v34 = &v32->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v34 - 1) != System_IDisposable_TypeInfo )
    {
      --v33;
      v34 += 4;
      if ( !v33 )
        goto LABEL_39;
    }
    v35 = (__int64)&v32->vtable[*v34].method;
  }
  else
  {
LABEL_39:
    v35 = sub_1BDA590(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v35)(
                                                             Enumerator,
                                                             *(_QWORD *)(v35 + 8));
  if ( !v3 )
LABEL_49:
    sub_1B8880C(list, v4);
  v36 = System_Collections_Generic_List_int___ToArray(
          v3,
          (const MethodInfo_34E22C8 *)Method_System_Collections_Generic_List_int__ToArray__);
  this->fields._StateEffectIdArray_k__BackingField = v36;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._StateEffectIdArray_k__BackingField,
    (int32_t)v36,
    v37,
    v38);
  return 1;
}


void __fastcall BuffMaster__set_StateEffectIdArray(
        BuffMaster_o *this,
        System_Int32_array *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._StateEffectIdArray_k__BackingField = value;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._StateEffectIdArray_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}