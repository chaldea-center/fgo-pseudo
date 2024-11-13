void __fastcall BuffMaster___ctor(BuffMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B15F4F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_BuffMaster__BuffEntity__int___ctor__, method, v2);
    byte_4B15F4F = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    56,
    (const MethodInfo_31B2E00 *)Method_DataMasterBase_BuffMaster__BuffEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BuffMaster__AddEffectIdToList(
        BuffMaster_o *this,
        System_Collections_Generic_List_int__o *effectIdList,
        int32_t effectId,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x2
  struct System_Int32_array *items; // x8
  _QWORD *v9; // x9
  __int64 size; // x10

  if ( (byte_4B15F51 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, effectIdList, *(_QWORD *)&effectId);
    this = (BuffMaster_o *)sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Contains__, v6, v7);
    byte_4B15F51 = 1;
  }
  if ( effectId >= 1 )
  {
    if ( !effectIdList )
      goto LABEL_11;
    this = (BuffMaster_o *)System_Collections_Generic_List_int___Contains(
                             effectIdList,
                             effectId,
                             (const MethodInfo_3584FB0 *)Method_System_Collections_Generic_List_int__Contains__);
    if ( ((unsigned __int8)this & 1) != 0 )
      return;
    items = effectIdList->fields._items;
    v9 = Method_System_Collections_Generic_List_int__Add__;
    ++effectIdList->fields._version;
    if ( !items )
LABEL_11:
      sub_1BCAA3C(this, effectIdList);
    size = effectIdList->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_int___AddWithResize(
        effectIdList,
        effectId,
        *(const MethodInfo_3584C38 **)(*(_QWORD *)(v9[4] + 192LL) + 112LL));
    }
    else
    {
      effectIdList->fields._size = size + 1;
      items->m_Items[size + 1] = effectId;
    }
  }
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BuffMaster__GetBuffGroup(BuffMaster_o *this, int32_t buffId, int32_t def, const MethodInfo *method)
{
  int32_t v4; // w19
  _BOOL8 v7; // x0
  __int64 v8; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  v4 = def;
  if ( (byte_4B15F54 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__, *(_QWORD *)&buffId, *(_QWORD *)&def);
    byte_4B15F54 = 1;
  }
  entity = 0LL;
  v7 = DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
         &entity,
         buffId,
         (const MethodInfo_31B2E94 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
  if ( v7 )
  {
    if ( !entity )
      sub_1BCAA3C(v7, v8);
    return (int32_t)entity[4].monitor;
  }
  return v4;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BuffMaster__GetBuffType(BuffMaster_o *this, int32_t buffId, int32_t def, const MethodInfo *method)
{
  int32_t v4; // w19
  _BOOL8 v7; // x0
  __int64 v8; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  v4 = def;
  if ( (byte_4B15F53 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__, *(_QWORD *)&buffId, *(_QWORD *)&def);
    byte_4B15F53 = 1;
  }
  entity = 0LL;
  v7 = DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
         &entity,
         buffId,
         (const MethodInfo_31B2E94 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
  if ( v7 )
  {
    if ( !entity )
      sub_1BCAA3C(v7, v8);
    return HIDWORD(entity[1].klass);
  }
  return v4;
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
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B15F52 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__, *(_QWORD *)&buffId, key);
    byte_4B15F52 = 1;
  }
  entity = 0LL;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
         &entity,
         buffId,
         (const MethodInfo_31B2E94 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__) )
  {
    if ( !entity )
      sub_1BCAA3C(0LL, v9);
    return BuffEntity__getScript_39714980((BuffEntity_o *)entity, key, def, v10);
  }
  return def;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BuffMaster__GetUnSubWhenContinueStatus(BuffMaster_o *this, int32_t buffId, const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B15F56 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__, *(_QWORD *)&buffId, method);
    byte_4B15F56 = 1;
  }
  entity = 0LL;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
          &entity,
          buffId,
          (const MethodInfo_31B2E94 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__) )
    return 0;
  if ( !entity )
    sub_1BCAA3C(0LL, v5);
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


// local variable allocation has failed, the output may be wrong!
bool __fastcall BuffMaster__TryGetDisplayCardBottomImageName(
        BuffMaster_o *this,
        System_String_o **name,
        int32_t buffId,
        System_String_o *defName,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  _BOOL8 v13; // x0
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  Il2CppObject *Value_object; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B15F55 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_GetValue_string___, name, *(_QWORD *)&buffId);
    sub_1BCA7E0(&Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__, v9, v10);
    sub_1BCA7E0(&StringLiteral_5406/*"DisplayCardBottomImageName"*/, v11, v12);
    byte_4B15F55 = 1;
  }
  entity = 0LL;
  v13 = DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
          &entity,
          buffId,
          (const MethodInfo_31B2E94 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
  Value_object = 0LL;
  if ( v13 )
  {
    if ( !entity )
      sub_1BCAA3C(v13, 0LL);
    Value_object = BasicHelper__GetValue_object_(
                     (System_Collections_Generic_Dictionary_string__object__o *)entity[6].klass,
                     (System_String_o *)StringLiteral_5406/*"DisplayCardBottomImageName"*/,
                     (Il2CppObject *)defName,
                     (const MethodInfo_2F00C2C *)Method_BasicHelper_GetValue_string___);
  }
  *name = (System_String_o *)Value_object;
  sub_1BCA784((PartyOrganizationUtility_o *)name, (int64_t)Value_object, v14, v15, v16, v17, v18, v19);
  return !System_String__IsNullOrEmpty(*name, 0LL);
}


System_Int32_array *__fastcall BuffMaster__get_StateEffectIdArray(BuffMaster_o *this, const MethodInfo *method)
{
  return this->fields._StateEffectIdArray_k__BackingField;
}


bool __fastcall BuffMaster__preProcess(BuffMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  System_Collections_Generic_List_int__o *v23; // x21
  __int64 v24; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v26; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v29; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v32; // x8
  __int64 v33; // x9
  int32_t *v34; // x10
  __int64 v35; // x0
  unsigned int *v36; // x0
  __int64 v37; // x1
  BuffEntity_o *v38; // x22
  __int64 methodPtr_low; // x9
  unsigned __int64 effectId; // x1
  _BOOL8 v41; // x0
  struct System_Int32_array *items; // x8
  _QWORD *v43; // x9
  __int64 size; // x10
  const MethodInfo *v45; // x1
  __int64 CardEffectId; // x0
  __int64 v47; // x0
  struct System_Int32_array *v48; // x8
  _QWORD *v49; // x9
  __int64 v50; // x10
  BuffMaster_o *v51; // x0
  const MethodInfo *v52; // x3
  const MethodInfo *v53; // x2
  BuffMaster_o *v54; // x0
  const MethodInfo *v55; // x3
  System_Collections_Generic_IEnumerator_T__c *v56; // x8
  __int64 v57; // x9
  int32_t *v58; // x10
  __int64 v59; // x0
  struct System_Int32_array *v60; // x0
  int64_t v61; // x2
  int32_t v62; // w3
  System_String_o *v63; // x4
  BattleSetupInfo_o *v64; // x5
  FollowerInfo_o *v65; // x6
  PartyListViewItem_o *v66; // x7

  if ( (byte_4B15F50 & 1) == 0 )
  {
    sub_1BCA7E0(&BuffEntity_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, v5, v6);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v7, v8);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v9, v10);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Contains__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__ToArray__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v19, v20);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v21, v22);
    byte_4B15F50 = 1;
  }
  v23 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    method,
                                                    v2,
                                                    v3);
  System_Collections_Generic_List_int____ctor(
    v23,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_50;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_314F9E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BCAA3C(0LL, v26);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v29 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v29;
        p_offset += 4;
        if ( !v29 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v32 = Enumerator->klass;
    v33 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v34 = &v32->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v34 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v33;
        v34 += 4;
        if ( !v33 )
          goto LABEL_16;
      }
      v35 = (__int64)&v32->vtable[*v34].method;
    }
    else
    {
LABEL_16:
      v35 = sub_1C1C7C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v36 = (unsigned int *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v35)(
                            Enumerator,
                            *(_QWORD *)(v35 + 8));
    v38 = (BuffEntity_o *)v36;
    if ( !v36 )
      goto LABEL_45;
    methodPtr_low = LOBYTE(BuffEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v36 + 304LL) < (unsigned int)methodPtr_low
      || *(BuffEntity_c **)(*(_QWORD *)(*(_QWORD *)v36 + 200LL) + 8 * methodPtr_low - 8) != BuffEntity_TypeInfo )
    {
      sub_1BCACFC(v36);
LABEL_45:
      sub_1BCAA3C(v36, v37);
    }
    effectId = v36[26];
    if ( (int)effectId >= 1 )
    {
      if ( !v23 )
        sub_1BCAA3C(v36, effectId);
      v41 = System_Collections_Generic_List_int___Contains(
              v23,
              effectId,
              (const MethodInfo_3584FB0 *)Method_System_Collections_Generic_List_int__Contains__);
      if ( !v41 )
      {
        effectId = (unsigned int)v38->fields.effectId;
        items = v23->fields._items;
        v43 = Method_System_Collections_Generic_List_int__Add__;
        ++v23->fields._version;
        if ( !items )
          sub_1BCAA3C(v41, effectId);
        size = v23->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v23,
            effectId,
            *(const MethodInfo_3584C38 **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
        }
        else
        {
          v23->fields._size = size + 1;
          items->m_Items[size + 1] = effectId;
        }
      }
    }
    if ( BuffEntity__GetCardEffectId(v38, (const MethodInfo *)effectId) >= 1 )
    {
      CardEffectId = BuffEntity__GetCardEffectId(v38, v45);
      if ( !v23 )
        sub_1BCAA3C(CardEffectId, (unsigned int)CardEffectId);
      if ( !System_Collections_Generic_List_int___Contains(
              v23,
              CardEffectId,
              (const MethodInfo_3584FB0 *)Method_System_Collections_Generic_List_int__Contains__) )
      {
        v47 = BuffEntity__GetCardEffectId(v38, v45);
        v45 = (const MethodInfo *)(unsigned int)v47;
        v48 = v23->fields._items;
        v49 = Method_System_Collections_Generic_List_int__Add__;
        ++v23->fields._version;
        if ( !v48 )
          sub_1BCAA3C(v47, (unsigned int)v47);
        v50 = v23->fields._size;
        if ( (unsigned int)v50 >= v48->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v23,
            v47,
            *(const MethodInfo_3584C38 **)(*(_QWORD *)(v49[4] + 192LL) + 112LL));
        }
        else
        {
          v23->fields._size = v50 + 1;
          v48->m_Items[v50 + 1] = v47;
        }
      }
    }
    v51 = (BuffMaster_o *)BuffEntity__GetClassIconChangeEffectId(v38, v45);
    BuffMaster__AddEffectIdToList(v51, v23, (int32_t)v51, v52);
    v54 = (BuffMaster_o *)BuffEntity__GetOverwriteClassIconChangeEffectIdAtBuffRemove(v38, -1, v53);
    BuffMaster__AddEffectIdToList(v54, v23, (int32_t)v54, v55);
  }
  v56 = Enumerator->klass;
  v57 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v58 = &v56->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v58 - 1) != System_IDisposable_TypeInfo )
    {
      --v57;
      v58 += 4;
      if ( !v57 )
        goto LABEL_40;
    }
    v59 = (__int64)&v56->vtable[*v58].method;
  }
  else
  {
LABEL_40:
    v59 = sub_1C1C7C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v59)(
                                                             Enumerator,
                                                             *(_QWORD *)(v59 + 8));
  if ( !v23 )
LABEL_50:
    sub_1BCAA3C(list, v24);
  v60 = System_Collections_Generic_List_int___ToArray(
          v23,
          (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
  this->fields._StateEffectIdArray_k__BackingField = v60;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._StateEffectIdArray_k__BackingField,
    (int64_t)v60,
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._StateEffectIdArray_k__BackingField = value;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._StateEffectIdArray_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}