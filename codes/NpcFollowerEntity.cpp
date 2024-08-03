void __fastcall NpcFollowerEntity___ctor(NpcFollowerEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49FC7CD & 1) == 0 )
  {
    sub_1B640C8(&Method_DataEntityBase_string___ctor__, method);
    byte_49FC7CD = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_30D3D1C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall NpcFollowerEntity__CreatePK(
        int64_t id,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  if ( (byte_49FC7BD & 1) == 0 )
  {
    sub_1B640C8(&Method_DataEntityBase_CreateMultiplePK_long__int__int___, *(_QWORD *)&questId);
    byte_49FC7BD = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int__int_(
           id,
           questId,
           questPhase,
           (const MethodInfo_2E37C5C *)Method_DataEntityBase_CreateMultiplePK_long__int__int___);
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

  if ( (byte_49FC7C7 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_17071/*"battle_svt_id"*/, *(_QWORD *)&priority);
    byte_49FC7C7 = 1;
  }
  if ( NpcFollowerEntity__IsExistSvtChangeParam(this, *(const MethodInfo **)&priority) )
    return NpcFollowerEntity__GetSvtChangeValueInt(
             this,
             (System_String_o *)StringLiteral_17071/*"battle_svt_id"*/,
             priority,
             defaultValue,
             v7);
  else
    return defaultValue;
}


int32_t __fastcall NpcFollowerEntity__GetDispLimitCnt(NpcFollowerEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FC7BF & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_18569/*"dispLimitCount"*/, method);
    byte_49FC7BF = 1;
  }
  return NpcFollowerEntity__GetScriptInt(this, (System_String_o *)StringLiteral_18569/*"dispLimitCount"*/, -1, v2);
}


int32_t __fastcall NpcFollowerEntity__GetEventDeckIndex(NpcFollowerEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FC7C9 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_19057/*"eventDeckIndex"*/, method);
    byte_49FC7C9 = 1;
  }
  return NpcFollowerEntity__GetScriptInt(this, (System_String_o *)StringLiteral_19057/*"eventDeckIndex"*/, 0, v2);
}


int32_t __fastcall NpcFollowerEntity__GetImageSvtId(NpcFollowerEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FC7CA & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_20158/*"imageSvtId"*/, method);
    byte_49FC7CA = 1;
  }
  return NpcFollowerEntity__GetScriptInt(this, (System_String_o *)StringLiteral_20158/*"imageSvtId"*/, 0, v2);
}


System_String_o *__fastcall NpcFollowerEntity__GetOverwriteServantName(
        NpcFollowerEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_49FC7CB & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_23592/*"supportName"*/, method);
    byte_49FC7CB = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.npcScript, (System_String_o *)StringLiteral_23592/*"supportName"*/, 0LL, 0LL);
}


int32_t __fastcall NpcFollowerEntity__GetScriptInt(
        NpcFollowerEntity_o *this,
        System_String_o *key,
        int32_t defVal,
        const MethodInfo *method)
{
  __int64 v7; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *npcScript; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  NpcFollowerEntity_o *v12; // x0
  const MethodInfo *v13; // x1
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49FC7BE & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, key);
    sub_1B640C8(&long_TypeInfo, v7);
    byte_49FC7BE = 1;
  }
  value = 0LL;
  npcScript = this->fields.npcScript;
  if ( !npcScript
    || !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)npcScript,
          (Il2CppObject *)key,
          &value,
          (const MethodInfo_317AC04 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    return defVal;
  }
  if ( !value )
    sub_1B64324(0LL);
  if ( value->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(value, long_TypeInfo, v9, v10);
  sub_1B645E4(value);
  return NpcFollowerEntity__GetDispLimitCnt(v12, v13);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall NpcFollowerEntity__GetServantName(
        NpcFollowerEntity_o *this,
        int32_t priority,
        System_String_o *defaultValue,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x4

  if ( (byte_49FC7C5 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_21895/*"name"*/, *(_QWORD *)&priority);
    byte_49FC7C5 = 1;
  }
  if ( NpcFollowerEntity__IsExistSvtChangeParam(this, *(const MethodInfo **)&priority) )
    return NpcFollowerEntity__GetSvtChangeValueString(
             this,
             (System_String_o *)StringLiteral_21895/*"name"*/,
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

  if ( (byte_49FC7C6 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_23768/*"td"*/, *(_QWORD *)&priority);
    byte_49FC7C6 = 1;
  }
  if ( NpcFollowerEntity__IsExistSvtChangeParam(this, *(const MethodInfo **)&priority) )
    return NpcFollowerEntity__GetSvtChangeValueInt(
             this,
             (System_String_o *)StringLiteral_23768/*"td"*/,
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

  if ( (byte_49FC7C8 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_23621/*"svt_voice_id"*/, *(_QWORD *)&priority);
    byte_49FC7C8 = 1;
  }
  if ( NpcFollowerEntity__IsExistSvtChangeParam(this, *(const MethodInfo **)&priority) )
    return NpcFollowerEntity__GetSvtChangeValueInt(
             this,
             (System_String_o *)StringLiteral_23621/*"svt_voice_id"*/,
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
  __int64 v3; // x1
  __int64 v4; // x1
  bool v5; // w8
  System_Collections_Generic_Dictionary_string__object__o *result; // x0
  __int64 methodPtr_low; // x11
  Il2CppObject *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_49FC7C1 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, method);
    sub_1B640C8(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v3);
    sub_1B640C8(&StringLiteral_23617/*"svt_change"*/, v4);
    byte_49FC7C1 = 1;
  }
  value = 0LL;
  v5 = NpcFollowerEntity__IsExistSvtChangeParam(this, method);
  result = 0LL;
  if ( v5 )
  {
    result = this->fields.npcScript;
    if ( result )
    {
      if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
             (System_Collections_Generic_Dictionary_object__object__o *)result,
             (Il2CppObject *)StringLiteral_23617/*"svt_change"*/,
             &value,
             (const MethodInfo_317AC04 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__)
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_Collections_Generic_List_object__o *v15; // x19
  const MethodInfo *v16; // x1
  System_Collections_Generic_Dictionary_string__object__array *result; // x0
  Il2CppObject *v18; // x0
  __int64 methodPtr_low; // x9
  _BOOL8 v20; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  Il2CppObject *current; // x1
  __int64 v24; // x10
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppClass **v28; // x0
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+20h] [xbp-50h] BYREF
  Il2CppObject *value; // [xsp+38h] [xbp-38h] BYREF

  if ( (byte_49FC7C2 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, key);
    sub_1B640C8(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_object__Dispose__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_object__MoveNext__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_object__get_Current__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_Dictionary_string__object___Add__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_object__GetEnumerator__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_Dictionary_string__object___ToArray__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_Dictionary_string__object____ctor__, v12);
    sub_1B640C8(&System_Collections_Generic_List_object__TypeInfo, v13);
    sub_1B640C8(&System_Collections_Generic_List_Dictionary_string__object___TypeInfo, v14);
    byte_49FC7C2 = 1;
  }
  value = 0LL;
  memset(&v30, 0, sizeof(v30));
  v15 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_Dictionary_string__object___TypeInfo,
                                                       key,
                                                       method);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_Dictionary_string__object____ctor__);
  result = (System_Collections_Generic_Dictionary_string__object__array *)NpcFollowerEntity__GetSvtChangeData(this, v16);
  if ( result )
  {
    if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
            (System_Collections_Generic_Dictionary_object__object__o *)result,
            (Il2CppObject *)key,
            &value,
            (const MethodInfo_317AC04 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
      return 0LL;
    v18 = value;
    if ( value )
    {
      methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(value->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
        && (System_Collections_Generic_List_object__c *)value->klass->_2.typeHierarchy[methodPtr_low - 1] == System_Collections_Generic_List_object__TypeInfo )
      {
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v29,
          (System_Collections_Generic_List_object__o *)value,
          (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_object__GetEnumerator__);
        v30 = v29;
        while ( 1 )
        {
          v20 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v30,
                  (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_object__MoveNext__);
          if ( !v20 )
            break;
          current = v30.fields._current;
          if ( v30.fields._current )
          {
            v24 = LOBYTE(System_Collections_Generic_Dictionary_string__object__TypeInfo->vtable._0_Equals.methodPtr);
            if ( LOBYTE(v30.fields._current->klass->vtable[0].methodPtr) >= (unsigned int)v24
              && (System_Collections_Generic_Dictionary_string__object__c *)v30.fields._current->klass->_2.typeHierarchy[v24 - 1] == System_Collections_Generic_Dictionary_string__object__TypeInfo )
            {
              if ( !v15 )
                sub_1B64324(v20);
              items = v15->fields._items;
              v26 = Method_System_Collections_Generic_List_Dictionary_string__object___Add__;
              ++v15->fields._version;
              if ( !items )
                sub_1B64324(v20);
              size = v15->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v15,
                  current,
                  *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
              }
              else
              {
                v28 = &items->obj.klass + size;
                v15->fields._size = size + 1;
                v28[4] = (Il2CppClass *)current;
                sub_1B6406C((ServantStatusBattleListViewItem_o *)(v28 + 4), (int32_t)current, v21, v22);
              }
            }
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v30,
          (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
        if ( v15 )
          return (System_Collections_Generic_Dictionary_string__object__array *)System_Collections_Generic_List_object___ToArray(
                                                                                  v15,
                                                                                  (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_Dictionary_string__object___ToArray__);
      }
      else
      {
        sub_1B645E4(value);
      }
    }
    sub_1B64324(v18);
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
  __int64 v10; // x1
  System_Collections_Generic_Dictionary_string__object__array *Item; // x0
  __int64 v12; // x1
  int max_length; // w8
  System_Collections_Generic_Dictionary_string__object__array *v14; // x21
  __int64 v15; // x23
  System_Collections_Generic_Dictionary_object__object__o *v16; // x22
  System_String_o *v17; // x0
  System_String_o *v18; // x0

  if ( (byte_49FC7C4 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, key);
    sub_1B640C8(&StringLiteral_22508/*"priority"*/, v9);
    sub_1B640C8(&StringLiteral_24402/*"value"*/, v10);
    byte_49FC7C4 = 1;
  }
  Item = NpcFollowerEntity__GetSvtChangeDataParams(this, key, *(const MethodInfo **)&priority);
  if ( Item )
  {
    max_length = Item->max_length;
    v14 = Item;
    if ( max_length >= 1 )
    {
      v15 = 0LL;
      do
      {
        if ( (unsigned int)v15 >= max_length )
          sub_1B6432C(Item, v12);
        v16 = (System_Collections_Generic_Dictionary_object__object__o *)v14->m_Items[v15];
        if ( !v16
          || (Item = (System_Collections_Generic_Dictionary_string__object__array *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                      (System_Collections_Generic_Dictionary_object__object__o *)v14->m_Items[v15],
                                                                                      (Il2CppObject *)StringLiteral_22508/*"priority"*/,
                                                                                      (const MethodInfo_3179378 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
        {
LABEL_14:
          sub_1B64324(Item);
        }
        v17 = (System_String_o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_string__object__array *, Il2CppMethodPointer))Item->obj.klass->vtable[3].method)(
                                   Item,
                                   Item->obj.klass->vtable[4].methodPtr);
        Item = (System_Collections_Generic_Dictionary_string__object__array *)System_Int32__Parse(v17, 0LL);
        if ( (_DWORD)Item == priority )
        {
          Item = (System_Collections_Generic_Dictionary_string__object__array *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                  v16,
                                                                                  (Il2CppObject *)StringLiteral_24402/*"value"*/,
                                                                                  (const MethodInfo_3179378 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
          if ( !Item )
            goto LABEL_14;
          v18 = (System_String_o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_string__object__array *, Il2CppMethodPointer))Item->obj.klass->vtable[3].method)(
                                     Item,
                                     Item->obj.klass->vtable[4].methodPtr);
          Item = (System_Collections_Generic_Dictionary_string__object__array *)System_Int32__Parse(v18, 0LL);
          defaultValue = (int)Item;
        }
        max_length = v14->max_length;
        ++v15;
      }
      while ( (int)v15 < max_length );
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
  __int64 v10; // x1
  System_Collections_Generic_Dictionary_string__object__array *Item; // x0
  __int64 v12; // x1
  int max_length; // w8
  System_Collections_Generic_Dictionary_string__object__array *v14; // x21
  __int64 v15; // x23
  System_Collections_Generic_Dictionary_object__object__o *v16; // x22
  System_String_o *v17; // x0

  if ( (byte_49FC7C3 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, key);
    sub_1B640C8(&StringLiteral_22508/*"priority"*/, v9);
    sub_1B640C8(&StringLiteral_24402/*"value"*/, v10);
    byte_49FC7C3 = 1;
  }
  Item = NpcFollowerEntity__GetSvtChangeDataParams(this, key, *(const MethodInfo **)&priority);
  if ( Item )
  {
    max_length = Item->max_length;
    v14 = Item;
    if ( max_length >= 1 )
    {
      v15 = 0LL;
      do
      {
        if ( (unsigned int)v15 >= max_length )
          sub_1B6432C(Item, v12);
        v16 = (System_Collections_Generic_Dictionary_object__object__o *)v14->m_Items[v15];
        if ( !v16
          || (Item = (System_Collections_Generic_Dictionary_string__object__array *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                      (System_Collections_Generic_Dictionary_object__object__o *)v14->m_Items[v15],
                                                                                      (Il2CppObject *)StringLiteral_22508/*"priority"*/,
                                                                                      (const MethodInfo_3179378 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
        {
LABEL_14:
          sub_1B64324(Item);
        }
        v17 = (System_String_o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_string__object__array *, Il2CppMethodPointer))Item->obj.klass->vtable[3].method)(
                                   Item,
                                   Item->obj.klass->vtable[4].methodPtr);
        Item = (System_Collections_Generic_Dictionary_string__object__array *)System_Int32__Parse(v17, 0LL);
        if ( (_DWORD)Item == priority )
        {
          Item = (System_Collections_Generic_Dictionary_string__object__array *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                  v16,
                                                                                  (Il2CppObject *)StringLiteral_24402/*"value"*/,
                                                                                  (const MethodInfo_3179378 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
          if ( !Item )
            goto LABEL_14;
          Item = (System_Collections_Generic_Dictionary_string__object__array *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_string__object__array *, Il2CppMethodPointer))Item->obj.klass->vtable[3].method)(
                                                                                  Item,
                                                                                  Item->obj.klass->vtable[4].methodPtr);
          defaultValue = (System_String_o *)Item;
        }
        max_length = v14->max_length;
        ++v15;
      }
      while ( (int)v15 < max_length );
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
  __int64 v3; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *npcScript; // x0

  if ( (byte_49FC7C0 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method);
    sub_1B640C8(&StringLiteral_23617/*"svt_change"*/, v3);
    byte_49FC7C0 = 1;
  }
  npcScript = this->fields.npcScript;
  if ( npcScript )
    LOBYTE(npcScript) = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                          (System_Collections_Generic_Dictionary_object__object__o *)npcScript,
                          (Il2CppObject *)StringLiteral_23617/*"svt_change"*/,
                          (const MethodInfo_31795EC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
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
  if ( (byte_49FC7CC & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_23613/*"svtOverwriteTreasureDevice"*/, method);
    byte_49FC7CC = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.npcScript, (System_String_o *)StringLiteral_23613/*"svtOverwriteTreasureDevice"*/, 0, 0LL) != 0;
}


bool __fastcall NpcFollowerEntity__IsRecommendedFollower(NpcFollowerEntity_o *this, const MethodInfo *method)
{
  return this->fields.flag & 1;
}