void __fastcall NpcFollowerEntity___ctor(NpcFollowerEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4BFDB52 & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataEntityBase_string___ctor__, method);
    byte_4BFDB52 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3278D14 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall NpcFollowerEntity__CreatePK(
        int64_t id,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  if ( (byte_4BFDB42 & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataEntityBase_CreateMultiplePK_long__int__int___, *(_QWORD *)&questId);
    byte_4BFDB42 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int__int_(
           id,
           questId,
           questPhase,
           (const MethodInfo_2FD00A0 *)Method_DataEntityBase_CreateMultiplePK_long__int__int___);
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

  if ( (byte_4BFDB4C & 1) == 0 )
  {
    sub_1C2E12C(&StringLiteral_17442/*"battle_svt_id"*/, *(_QWORD *)&priority);
    byte_4BFDB4C = 1;
  }
  if ( NpcFollowerEntity__IsExistSvtChangeParam(this, *(const MethodInfo **)&priority) )
    return NpcFollowerEntity__GetSvtChangeValueInt(
             this,
             (System_String_o *)StringLiteral_17442/*"battle_svt_id"*/,
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

  if ( (byte_4BFDB44 & 1) == 0 )
  {
    sub_1C2E12C(&StringLiteral_18972/*"dispLimitCount"*/, *(_QWORD *)&defValue);
    byte_4BFDB44 = 1;
  }
  return NpcFollowerEntity__GetScriptInt(this, (System_String_o *)StringLiteral_18972/*"dispLimitCount"*/, defValue, v3);
}


int32_t __fastcall NpcFollowerEntity__GetEventDeckIndex(NpcFollowerEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BFDB4E & 1) == 0 )
  {
    sub_1C2E12C(&StringLiteral_19470/*"eventDeckIndex"*/, method);
    byte_4BFDB4E = 1;
  }
  return NpcFollowerEntity__GetScriptInt(this, (System_String_o *)StringLiteral_19470/*"eventDeckIndex"*/, 0, v2);
}


int32_t __fastcall NpcFollowerEntity__GetImageSvtId(NpcFollowerEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BFDB4F & 1) == 0 )
  {
    sub_1C2E12C(&StringLiteral_20606/*"imageSvtId"*/, method);
    byte_4BFDB4F = 1;
  }
  return NpcFollowerEntity__GetScriptInt(this, (System_String_o *)StringLiteral_20606/*"imageSvtId"*/, 0, v2);
}


System_String_o *__fastcall NpcFollowerEntity__GetOverwriteServantName(
        NpcFollowerEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4BFDB50 & 1) == 0 )
  {
    sub_1C2E12C(&StringLiteral_24140/*"supportName"*/, method);
    byte_4BFDB50 = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.npcScript, (System_String_o *)StringLiteral_24140/*"supportName"*/, 0LL, 0LL);
}


int32_t __fastcall NpcFollowerEntity__GetScriptInt(
        NpcFollowerEntity_o *this,
        System_String_o *key,
        int32_t defVal,
        const MethodInfo *method)
{
  __int64 v7; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *npcScript; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  NpcFollowerEntity_o *v13; // x0
  int32_t v14; // w1
  const MethodInfo *v15; // x2
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4BFDB43 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, key);
    sub_1C2E12C(&long_TypeInfo, v7);
    byte_4BFDB43 = 1;
  }
  value = 0LL;
  npcScript = this->fields.npcScript;
  if ( !npcScript
    || !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)npcScript,
          (Il2CppObject *)key,
          &value,
          (const MethodInfo_3337380 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    return defVal;
  }
  if ( !value )
    sub_1C2E388(0LL, v9);
  if ( value->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(value, long_TypeInfo, v10, v11);
  sub_1C2E648(value);
  return NpcFollowerEntity__GetDispLimitCnt(v13, v14, v15);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall NpcFollowerEntity__GetServantName(
        NpcFollowerEntity_o *this,
        int32_t priority,
        System_String_o *defaultValue,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x4

  if ( (byte_4BFDB4A & 1) == 0 )
  {
    sub_1C2E12C(&StringLiteral_22395/*"name"*/, *(_QWORD *)&priority);
    byte_4BFDB4A = 1;
  }
  if ( NpcFollowerEntity__IsExistSvtChangeParam(this, *(const MethodInfo **)&priority) )
    return NpcFollowerEntity__GetSvtChangeValueString(
             this,
             (System_String_o *)StringLiteral_22395/*"name"*/,
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

  if ( (byte_4BFDB4B & 1) == 0 )
  {
    sub_1C2E12C(&StringLiteral_24319/*"td"*/, *(_QWORD *)&priority);
    byte_4BFDB4B = 1;
  }
  if ( NpcFollowerEntity__IsExistSvtChangeParam(this, *(const MethodInfo **)&priority) )
    return NpcFollowerEntity__GetSvtChangeValueInt(
             this,
             (System_String_o *)StringLiteral_24319/*"td"*/,
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

  if ( (byte_4BFDB4D & 1) == 0 )
  {
    sub_1C2E12C(&StringLiteral_24170/*"svt_voice_id"*/, *(_QWORD *)&priority);
    byte_4BFDB4D = 1;
  }
  if ( NpcFollowerEntity__IsExistSvtChangeParam(this, *(const MethodInfo **)&priority) )
    return NpcFollowerEntity__GetSvtChangeValueInt(
             this,
             (System_String_o *)StringLiteral_24170/*"svt_voice_id"*/,
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

  if ( (byte_4BFDB46 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, method);
    sub_1C2E12C(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v3);
    sub_1C2E12C(&StringLiteral_24166/*"svt_change"*/, v4);
    byte_4BFDB46 = 1;
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
             (Il2CppObject *)StringLiteral_24166/*"svt_change"*/,
             &value,
             (const MethodInfo_3337380 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__)
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
  __int64 v18; // x1
  Il2CppObject *v19; // x0
  __int64 methodPtr_low; // x9
  _BOOL8 v21; // x0
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  Il2CppObject *current; // x1
  __int64 v29; // x10
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x0
  System_Collections_Generic_List_Enumerator_object__o v34; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v35; // [xsp+20h] [xbp-50h] BYREF
  Il2CppObject *value; // [xsp+38h] [xbp-38h] BYREF

  if ( (byte_4BFDB47 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, key);
    sub_1C2E12C(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v5);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_object__Dispose__, v6);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_object__MoveNext__, v7);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_object__get_Current__, v8);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Dictionary_string__object___Add__, v9);
    sub_1C2E12C(&Method_System_Collections_Generic_List_object__GetEnumerator__, v10);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Dictionary_string__object___ToArray__, v11);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Dictionary_string__object____ctor__, v12);
    sub_1C2E12C(&System_Collections_Generic_List_object__TypeInfo, v13);
    sub_1C2E12C(&System_Collections_Generic_List_Dictionary_string__object___TypeInfo, v14);
    byte_4BFDB47 = 1;
  }
  value = 0LL;
  memset(&v35, 0, sizeof(v35));
  v15 = (System_Collections_Generic_List_object__o *)sub_1C2E378(System_Collections_Generic_List_Dictionary_string__object___TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_366B078 *)Method_System_Collections_Generic_List_Dictionary_string__object____ctor__);
  result = (System_Collections_Generic_Dictionary_string__object__array *)NpcFollowerEntity__GetSvtChangeData(this, v16);
  if ( result )
  {
    if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
            (System_Collections_Generic_Dictionary_object__object__o *)result,
            (Il2CppObject *)key,
            &value,
            (const MethodInfo_3337380 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
      return 0LL;
    v19 = value;
    if ( value )
    {
      methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(value->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
        && (System_Collections_Generic_List_object__c *)value->klass->_2.typeHierarchy[methodPtr_low - 1] == System_Collections_Generic_List_object__TypeInfo )
      {
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v34,
          (System_Collections_Generic_List_object__o *)value,
          (const MethodInfo_366C3A4 *)Method_System_Collections_Generic_List_object__GetEnumerator__);
        v35 = v34;
        while ( 1 )
        {
          v21 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v35,
                  (const MethodInfo_34001C4 *)Method_System_Collections_Generic_List_Enumerator_object__MoveNext__);
          if ( !v21 )
            break;
          current = v35.fields._current;
          if ( v35.fields._current )
          {
            v29 = LOBYTE(System_Collections_Generic_Dictionary_string__object__TypeInfo->vtable._0_Equals.methodPtr);
            if ( LOBYTE(v35.fields._current->klass->vtable[0].methodPtr) >= (unsigned int)v29
              && (System_Collections_Generic_Dictionary_string__object__c *)v35.fields._current->klass->_2.typeHierarchy[v29 - 1] == System_Collections_Generic_Dictionary_string__object__TypeInfo )
            {
              if ( !v15 )
                sub_1C2E388(v21, v35.fields._current);
              items = v15->fields._items;
              v31 = Method_System_Collections_Generic_List_Dictionary_string__object___Add__;
              ++v15->fields._version;
              if ( !items )
                sub_1C2E388(v21, current);
              size = v15->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v15,
                  current,
                  *(const MethodInfo_366B8AC **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
              }
              else
              {
                v33 = &items->obj.klass + size;
                v15->fields._size = size + 1;
                v33[4] = (Il2CppClass *)current;
                sub_1C2E0D0((PartyOrganizationUtility_o *)(v33 + 4), (int64_t)current, v22, v23, v24, v25, v26, v27);
              }
            }
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v35,
          (const MethodInfo_34001C0 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
        if ( v15 )
          return (System_Collections_Generic_Dictionary_string__object__array *)System_Collections_Generic_List_object___ToArray(
                                                                                  v15,
                                                                                  (const MethodInfo_366D404 *)Method_System_Collections_Generic_List_Dictionary_string__object___ToArray__);
      }
      else
      {
        sub_1C2E648(value);
      }
    }
    sub_1C2E388(v19, v18);
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

  if ( (byte_4BFDB49 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, key);
    sub_1C2E12C(&StringLiteral_23030/*"priority"*/, v9);
    sub_1C2E12C(&StringLiteral_24966/*"value"*/, v10);
    byte_4BFDB49 = 1;
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
          sub_1C2E390(Item, v12);
        v16 = (System_Collections_Generic_Dictionary_object__object__o *)v14->m_Items[v15];
        if ( !v16
          || (Item = (System_Collections_Generic_Dictionary_string__object__array *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                      (System_Collections_Generic_Dictionary_object__object__o *)v14->m_Items[v15],
                                                                                      (Il2CppObject *)StringLiteral_23030/*"priority"*/,
                                                                                      (const MethodInfo_3335AF4 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
        {
LABEL_14:
          sub_1C2E388(Item, v12);
        }
        v17 = (System_String_o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_string__object__array *, Il2CppMethodPointer))Item->obj.klass->vtable[3].method)(
                                   Item,
                                   Item->obj.klass->vtable[4].methodPtr);
        Item = (System_Collections_Generic_Dictionary_string__object__array *)System_Int32__Parse(v17, 0LL);
        if ( (_DWORD)Item == priority )
        {
          Item = (System_Collections_Generic_Dictionary_string__object__array *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                  v16,
                                                                                  (Il2CppObject *)StringLiteral_24966/*"value"*/,
                                                                                  (const MethodInfo_3335AF4 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
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

  if ( (byte_4BFDB48 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, key);
    sub_1C2E12C(&StringLiteral_23030/*"priority"*/, v9);
    sub_1C2E12C(&StringLiteral_24966/*"value"*/, v10);
    byte_4BFDB48 = 1;
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
          sub_1C2E390(Item, v12);
        v16 = (System_Collections_Generic_Dictionary_object__object__o *)v14->m_Items[v15];
        if ( !v16
          || (Item = (System_Collections_Generic_Dictionary_string__object__array *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                      (System_Collections_Generic_Dictionary_object__object__o *)v14->m_Items[v15],
                                                                                      (Il2CppObject *)StringLiteral_23030/*"priority"*/,
                                                                                      (const MethodInfo_3335AF4 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
        {
LABEL_14:
          sub_1C2E388(Item, v12);
        }
        v17 = (System_String_o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_string__object__array *, Il2CppMethodPointer))Item->obj.klass->vtable[3].method)(
                                   Item,
                                   Item->obj.klass->vtable[4].methodPtr);
        Item = (System_Collections_Generic_Dictionary_string__object__array *)System_Int32__Parse(v17, 0LL);
        if ( (_DWORD)Item == priority )
        {
          Item = (System_Collections_Generic_Dictionary_string__object__array *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                  v16,
                                                                                  (Il2CppObject *)StringLiteral_24966/*"value"*/,
                                                                                  (const MethodInfo_3335AF4 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
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

  if ( (byte_4BFDB45 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method);
    sub_1C2E12C(&StringLiteral_24166/*"svt_change"*/, v3);
    byte_4BFDB45 = 1;
  }
  npcScript = this->fields.npcScript;
  if ( npcScript )
    LOBYTE(npcScript) = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                          (System_Collections_Generic_Dictionary_object__object__o *)npcScript,
                          (Il2CppObject *)StringLiteral_24166/*"svt_change"*/,
                          (const MethodInfo_3335D68 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
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
  if ( (byte_4BFDB51 & 1) == 0 )
  {
    sub_1C2E12C(&StringLiteral_24161/*"svtOverwriteTreasureDevice"*/, method);
    byte_4BFDB51 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.npcScript, (System_String_o *)StringLiteral_24161/*"svtOverwriteTreasureDevice"*/, 0, 0LL) != 0;
}


bool __fastcall NpcFollowerEntity__IsRecommendedFollower(NpcFollowerEntity_o *this, const MethodInfo *method)
{
  return this->fields.flag & 1;
}