void __fastcall NpcFollowerEntity___ctor(NpcFollowerEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B165CF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_string___ctor__, method, v2);
    byte_4B165CF = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_31B2CB8 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall NpcFollowerEntity__CreatePK(
        int64_t id,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  if ( (byte_4B165BF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_CreateMultiplePK_long__int__int___, *(_QWORD *)&questId, *(_QWORD *)&questPhase);
    byte_4B165BF = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int__int_(
           id,
           questId,
           questPhase,
           (const MethodInfo_2F11500 *)Method_DataEntityBase_CreateMultiplePK_long__int__int___);
}


System_String_o *__fastcall NpcFollowerEntity__CreatePrimaryKey(NpcFollowerEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return NpcFollowerEntity__CreatePK(this->fields.id, this->fields.questId, this->fields.questPhase, v2);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall NpcFollowerEntity__GetBattleSvtId(
        NpcFollowerEntity_o *this,
        int32_t priority,
        int32_t defaultValue,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x4

  if ( (byte_4B165C9 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_17311/*"battle_svt_id"*/, *(_QWORD *)&priority, *(_QWORD *)&defaultValue);
    byte_4B165C9 = 1;
  }
  if ( NpcFollowerEntity__IsExistSvtChangeParam(this, *(const MethodInfo **)&priority) )
    return NpcFollowerEntity__GetSvtChangeValueInt(
             this,
             (System_String_o *)StringLiteral_17311/*"battle_svt_id"*/,
             priority,
             defaultValue,
             v7);
  else
    return defaultValue;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall NpcFollowerEntity__GetDispLimitCnt(
        NpcFollowerEntity_o *this,
        int32_t defValue,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4B165C1 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_18834/*"dispLimitCount"*/, *(_QWORD *)&defValue, method);
    byte_4B165C1 = 1;
  }
  return NpcFollowerEntity__GetScriptInt(this, (System_String_o *)StringLiteral_18834/*"dispLimitCount"*/, defValue, v3);
}


int32_t __fastcall NpcFollowerEntity__GetEventDeckIndex(NpcFollowerEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B165CB & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_19327/*"eventDeckIndex"*/, method, v2);
    byte_4B165CB = 1;
  }
  return NpcFollowerEntity__GetScriptInt(this, (System_String_o *)StringLiteral_19327/*"eventDeckIndex"*/, 0, v3);
}


int32_t __fastcall NpcFollowerEntity__GetImageSvtId(NpcFollowerEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B165CC & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_20452/*"imageSvtId"*/, method, v2);
    byte_4B165CC = 1;
  }
  return NpcFollowerEntity__GetScriptInt(this, (System_String_o *)StringLiteral_20452/*"imageSvtId"*/, 0, v3);
}


System_String_o *__fastcall NpcFollowerEntity__GetOverwriteServantName(
        NpcFollowerEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B165CD & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_23937/*"supportName"*/, method, v2);
    byte_4B165CD = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.npcScript, (System_String_o *)StringLiteral_23937/*"supportName"*/, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall NpcFollowerEntity__GetScriptInt(
        NpcFollowerEntity_o *this,
        System_String_o *key,
        int32_t defVal,
        const MethodInfo *method)
{
  int32_t v4; // w19
  __int64 v7; // x1
  __int64 v8; // x2
  struct System_Collections_Generic_Dictionary_string__object__o *npcScript; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  NpcFollowerEntity_o *v14; // x0
  int32_t v15; // w1
  const MethodInfo *v16; // x2
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  v4 = defVal;
  if ( (byte_4B165C0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, key, *(_QWORD *)&defVal);
    sub_1BCA7E0(&long_TypeInfo, v7, v8);
    byte_4B165C0 = 1;
  }
  value = 0LL;
  npcScript = this->fields.npcScript;
  if ( !npcScript
    || !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)npcScript,
          (Il2CppObject *)key,
          &value,
          (const MethodInfo_3266A6C *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    return v4;
  }
  if ( !value )
    sub_1BCAA3C(0LL, v10);
  if ( value->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(value, long_TypeInfo, v11, v12);
  sub_1BCACFC(value);
  return NpcFollowerEntity__GetDispLimitCnt(v14, v15, v16);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall NpcFollowerEntity__GetServantName(
        NpcFollowerEntity_o *this,
        int32_t priority,
        System_String_o *defaultValue,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x4

  if ( (byte_4B165C7 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_22219/*"name"*/, *(_QWORD *)&priority, defaultValue);
    byte_4B165C7 = 1;
  }
  if ( NpcFollowerEntity__IsExistSvtChangeParam(this, *(const MethodInfo **)&priority) )
    return NpcFollowerEntity__GetSvtChangeValueString(
             this,
             (System_String_o *)StringLiteral_22219/*"name"*/,
             priority,
             defaultValue,
             v7);
  else
    return defaultValue;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall NpcFollowerEntity__GetServantTd(
        NpcFollowerEntity_o *this,
        int32_t priority,
        int32_t defaultValue,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x4

  if ( (byte_4B165C8 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_24114/*"td"*/, *(_QWORD *)&priority, *(_QWORD *)&defaultValue);
    byte_4B165C8 = 1;
  }
  if ( NpcFollowerEntity__IsExistSvtChangeParam(this, *(const MethodInfo **)&priority) )
    return NpcFollowerEntity__GetSvtChangeValueInt(
             this,
             (System_String_o *)StringLiteral_24114/*"td"*/,
             priority,
             defaultValue,
             v7);
  else
    return defaultValue;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall NpcFollowerEntity__GetServantVoiceId(
        NpcFollowerEntity_o *this,
        int32_t priority,
        int32_t defaultValue,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x4

  if ( (byte_4B165CA & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_23966/*"svt_voice_id"*/, *(_QWORD *)&priority, *(_QWORD *)&defaultValue);
    byte_4B165CA = 1;
  }
  if ( NpcFollowerEntity__IsExistSvtChangeParam(this, *(const MethodInfo **)&priority) )
    return NpcFollowerEntity__GetSvtChangeValueInt(
             this,
             (System_String_o *)StringLiteral_23966/*"svt_voice_id"*/,
             priority,
             defaultValue,
             v7);
  else
    return defaultValue;
}


System_Collections_Generic_Dictionary_string__object__o *__fastcall NpcFollowerEntity__GetSvtChangeData(
        NpcFollowerEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  bool v8; // w8
  System_Collections_Generic_Dictionary_string__object__o *result; // x0
  __int64 methodPtr_low; // x11
  Il2CppObject *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4B165C3 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, method, v2);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v4, v5);
    sub_1BCA7E0(&StringLiteral_23962/*"svt_change"*/, v6, v7);
    byte_4B165C3 = 1;
  }
  value = 0LL;
  v8 = NpcFollowerEntity__IsExistSvtChangeParam(this, method);
  result = 0LL;
  if ( v8 )
  {
    result = this->fields.npcScript;
    if ( result )
    {
      if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
             (System_Collections_Generic_Dictionary_object__object__o *)result,
             (Il2CppObject *)StringLiteral_23962/*"svt_change"*/,
             &value,
             (const MethodInfo_3266A6C *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__)
        && value
        && (methodPtr_low = LOBYTE(System_Collections_Generic_Dictionary_string__object__TypeInfo->vtable._0_Equals.methodPtr),
            LOBYTE(value->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low) )
      {
        if ( (System_Collections_Generic_Dictionary_string__object__c *)value->klass->_2.typeHierarchy[methodPtr_low - 1] == System_Collections_Generic_Dictionary_string__object__TypeInfo )
          return (System_Collections_Generic_Dictionary_string__object__o *)value;
        else
          return 0LL;
      }
      else
      {
        return 0LL;
      }
    }
  }
  return result;
}


System_Collections_Generic_Dictionary_string__object__array *__fastcall NpcFollowerEntity__GetSvtChangeDataParams(
        NpcFollowerEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  System_Collections_Generic_List_object__o *v26; // x19
  const MethodInfo *v27; // x1
  System_Collections_Generic_Dictionary_string__object__array *result; // x0
  __int64 v29; // x1
  Il2CppObject *v30; // x0
  __int64 methodPtr_low; // x9
  _BOOL8 v32; // x0
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  Il2CppObject *current; // x1
  __int64 v40; // x10
  struct System_Object_array *items; // x8
  _QWORD *v42; // x9
  __int64 size; // x10
  Il2CppClass **v44; // x0
  System_Collections_Generic_List_Enumerator_object__o v45; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v46; // [xsp+20h] [xbp-50h] BYREF
  Il2CppObject *value; // [xsp+38h] [xbp-38h] BYREF

  if ( (byte_4B165C4 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, key, method);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_object__Dispose__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_object__MoveNext__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_object__get_Current__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Dictionary_string__object___Add__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_object__GetEnumerator__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Dictionary_string__object___ToArray__, v18, v19);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Dictionary_string__object____ctor__, v20, v21);
    sub_1BCA7E0(&System_Collections_Generic_List_object__TypeInfo, v22, v23);
    sub_1BCA7E0(&System_Collections_Generic_List_Dictionary_string__object___TypeInfo, v24, v25);
    byte_4B165C4 = 1;
  }
  value = 0LL;
  memset(&v46, 0, sizeof(v46));
  v26 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_Dictionary_string__object___TypeInfo,
                                                       key,
                                                       method,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v26,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_Dictionary_string__object____ctor__);
  result = (System_Collections_Generic_Dictionary_string__object__array *)NpcFollowerEntity__GetSvtChangeData(this, v27);
  if ( result )
  {
    if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
            (System_Collections_Generic_Dictionary_object__object__o *)result,
            (Il2CppObject *)key,
            &value,
            (const MethodInfo_3266A6C *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
      return 0LL;
    v30 = value;
    if ( value )
    {
      methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(value->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
        && (System_Collections_Generic_List_object__c *)value->klass->_2.typeHierarchy[methodPtr_low - 1] == System_Collections_Generic_List_object__TypeInfo )
      {
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v45,
          (System_Collections_Generic_List_object__o *)value,
          (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_object__GetEnumerator__);
        v46 = v45;
        while ( 1 )
        {
          v32 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v46,
                  (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_object__MoveNext__);
          if ( !v32 )
            break;
          current = v46.fields._current;
          if ( v46.fields._current )
          {
            v40 = LOBYTE(System_Collections_Generic_Dictionary_string__object__TypeInfo->vtable._0_Equals.methodPtr);
            if ( LOBYTE(v46.fields._current->klass->vtable[0].methodPtr) >= (unsigned int)v40
              && (System_Collections_Generic_Dictionary_string__object__c *)v46.fields._current->klass->_2.typeHierarchy[v40 - 1] == System_Collections_Generic_Dictionary_string__object__TypeInfo )
            {
              if ( !v26 )
                sub_1BCAA3C(v32, v46.fields._current);
              items = v26->fields._items;
              v42 = Method_System_Collections_Generic_List_Dictionary_string__object___Add__;
              ++v26->fields._version;
              if ( !items )
                sub_1BCAA3C(v32, current);
              size = v26->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v26,
                  current,
                  *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
              }
              else
              {
                v44 = &items->obj.klass + size;
                v26->fields._size = size + 1;
                v44[4] = (Il2CppClass *)current;
                sub_1BCA784((PartyOrganizationUtility_o *)(v44 + 4), (int64_t)current, v33, v34, v35, v36, v37, v38);
              }
            }
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v46,
          (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
        if ( v26 )
          return (System_Collections_Generic_Dictionary_string__object__array *)System_Collections_Generic_List_object___ToArray(
                                                                                  v26,
                                                                                  (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_Dictionary_string__object___ToArray__);
      }
      else
      {
        sub_1BCACFC(value);
      }
    }
    sub_1BCAA3C(v30, v29);
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall NpcFollowerEntity__GetSvtChangeValueInt(
        NpcFollowerEntity_o *this,
        System_String_o *key,
        int32_t priority,
        int32_t defaultValue,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  System_Collections_Generic_Dictionary_string__object__array *Item; // x0
  __int64 v14; // x1
  int max_length; // w8
  System_Collections_Generic_Dictionary_string__object__array *v16; // x21
  __int64 v17; // x23
  System_Collections_Generic_Dictionary_object__object__o *v18; // x22
  System_String_o *v19; // x0
  System_String_o *v20; // x0

  if ( (byte_4B165C6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, key, *(_QWORD *)&priority);
    sub_1BCA7E0(&StringLiteral_22844/*"priority"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_24755/*"value"*/, v11, v12);
    byte_4B165C6 = 1;
  }
  Item = NpcFollowerEntity__GetSvtChangeDataParams(this, key, *(const MethodInfo **)&priority);
  if ( Item )
  {
    max_length = Item->max_length;
    v16 = Item;
    if ( max_length >= 1 )
    {
      v17 = 0LL;
      do
      {
        if ( (unsigned int)v17 >= max_length )
          sub_1BCAA44(Item, v14);
        v18 = (System_Collections_Generic_Dictionary_object__object__o *)v16->m_Items[v17];
        if ( !v18
          || (Item = (System_Collections_Generic_Dictionary_string__object__array *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                      (System_Collections_Generic_Dictionary_object__object__o *)v16->m_Items[v17],
                                                                                      (Il2CppObject *)StringLiteral_22844/*"priority"*/,
                                                                                      (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
        {
LABEL_14:
          sub_1BCAA3C(Item, v14);
        }
        v19 = (System_String_o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_string__object__array *, Il2CppMethodPointer))Item->obj.klass->vtable[3].method)(
                                   Item,
                                   Item->obj.klass->vtable[4].methodPtr);
        Item = (System_Collections_Generic_Dictionary_string__object__array *)System_Int32__Parse(v19, 0LL);
        if ( (_DWORD)Item == priority )
        {
          Item = (System_Collections_Generic_Dictionary_string__object__array *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                  v18,
                                                                                  (Il2CppObject *)StringLiteral_24755/*"value"*/,
                                                                                  (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
          if ( !Item )
            goto LABEL_14;
          v20 = (System_String_o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_string__object__array *, Il2CppMethodPointer))Item->obj.klass->vtable[3].method)(
                                     Item,
                                     Item->obj.klass->vtable[4].methodPtr);
          Item = (System_Collections_Generic_Dictionary_string__object__array *)System_Int32__Parse(v20, 0LL);
          defaultValue = (int)Item;
        }
        max_length = v16->max_length;
        ++v17;
      }
      while ( (int)v17 < max_length );
    }
  }
  return defaultValue;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall NpcFollowerEntity__GetSvtChangeValueString(
        NpcFollowerEntity_o *this,
        System_String_o *key,
        int32_t priority,
        System_String_o *defaultValue,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  System_Collections_Generic_Dictionary_string__object__array *Item; // x0
  __int64 v14; // x1
  int max_length; // w8
  System_Collections_Generic_Dictionary_string__object__array *v16; // x21
  __int64 v17; // x23
  System_Collections_Generic_Dictionary_object__object__o *v18; // x22
  System_String_o *v19; // x0

  if ( (byte_4B165C5 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, key, *(_QWORD *)&priority);
    sub_1BCA7E0(&StringLiteral_22844/*"priority"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_24755/*"value"*/, v11, v12);
    byte_4B165C5 = 1;
  }
  Item = NpcFollowerEntity__GetSvtChangeDataParams(this, key, *(const MethodInfo **)&priority);
  if ( Item )
  {
    max_length = Item->max_length;
    v16 = Item;
    if ( max_length >= 1 )
    {
      v17 = 0LL;
      do
      {
        if ( (unsigned int)v17 >= max_length )
          sub_1BCAA44(Item, v14);
        v18 = (System_Collections_Generic_Dictionary_object__object__o *)v16->m_Items[v17];
        if ( !v18
          || (Item = (System_Collections_Generic_Dictionary_string__object__array *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                      (System_Collections_Generic_Dictionary_object__object__o *)v16->m_Items[v17],
                                                                                      (Il2CppObject *)StringLiteral_22844/*"priority"*/,
                                                                                      (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
        {
LABEL_14:
          sub_1BCAA3C(Item, v14);
        }
        v19 = (System_String_o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_string__object__array *, Il2CppMethodPointer))Item->obj.klass->vtable[3].method)(
                                   Item,
                                   Item->obj.klass->vtable[4].methodPtr);
        Item = (System_Collections_Generic_Dictionary_string__object__array *)System_Int32__Parse(v19, 0LL);
        if ( (_DWORD)Item == priority )
        {
          Item = (System_Collections_Generic_Dictionary_string__object__array *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                  v18,
                                                                                  (Il2CppObject *)StringLiteral_24755/*"value"*/,
                                                                                  (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
          if ( !Item )
            goto LABEL_14;
          Item = (System_Collections_Generic_Dictionary_string__object__array *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_string__object__array *, Il2CppMethodPointer))Item->obj.klass->vtable[3].method)(
                                                                                  Item,
                                                                                  Item->obj.klass->vtable[4].methodPtr);
          defaultValue = (System_String_o *)Item;
        }
        max_length = v16->max_length;
        ++v17;
      }
      while ( (int)v17 < max_length );
    }
  }
  return defaultValue;
}


bool __fastcall NpcFollowerEntity__HasFlag(NpcFollowerEntity_o *this, int32_t targetFlag, const MethodInfo *method)
{
  return (this->fields.flag & targetFlag) != 0;
}


bool __fastcall NpcFollowerEntity__IsExistSvtChangeParam(NpcFollowerEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  struct System_Collections_Generic_Dictionary_string__object__o *npcScript; // x0

  if ( (byte_4B165C2 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method, v2);
    sub_1BCA7E0(&StringLiteral_23962/*"svt_change"*/, v4, v5);
    byte_4B165C2 = 1;
  }
  npcScript = this->fields.npcScript;
  if ( npcScript )
    LOBYTE(npcScript) = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                          (System_Collections_Generic_Dictionary_object__object__o *)npcScript,
                          (Il2CppObject *)StringLiteral_23962/*"svt_change"*/,
                          (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)npcScript;
}


bool __fastcall NpcFollowerEntity__IsFixedNpc(NpcFollowerEntity_o *this, const MethodInfo *method)
{
  return (LOBYTE(this->fields.flag) >> 2) & 1;
}


bool __fastcall NpcFollowerEntity__IsMyServantOrNpc(NpcFollowerEntity_o *this, const MethodInfo *method)
{
  return (LOBYTE(this->fields.flag) >> 1) & 1;
}


bool __fastcall NpcFollowerEntity__IsOverwriteTreasureDevice(NpcFollowerEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B165CE & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_23958/*"svtOverwriteTreasureDevice"*/, method, v2);
    byte_4B165CE = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.npcScript, (System_String_o *)StringLiteral_23958/*"svtOverwriteTreasureDevice"*/, 0, 0LL) != 0;
}


bool __fastcall NpcFollowerEntity__IsRecommendedFollower(NpcFollowerEntity_o *this, const MethodInfo *method)
{
  return this->fields.flag & 1;
}