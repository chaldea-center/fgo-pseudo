void NpcFollowerEntity___ctor(NpcFollowerEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D2CDD6 & 1) == 0 )
  {
    sub_1C94098(&Method_DataEntityBase_string___ctor__);
    byte_4D2CDD6 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3459054 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *NpcFollowerEntity__CreatePK(int64_t id, int32_t questId, int32_t questPhase, const MethodInfo *method)
{
  if ( (byte_4D2CDC6 & 1) == 0 )
  {
    sub_1C94098(&Method_DataEntityBase_CreateMultiplePK_long__int__int___);
    byte_4D2CDC6 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int__int_(
           id,
           questId,
           questPhase,
           (const MethodInfo_319A908 *)Method_DataEntityBase_CreateMultiplePK_long__int__int___);
}


System_String_o *NpcFollowerEntity__CreatePrimaryKey(NpcFollowerEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return NpcFollowerEntity__CreatePK(this->fields.id, this->fields.questId, this->fields.questPhase, v2);
}


// local variable allocation has failed, the output may be wrong!
int32_t NpcFollowerEntity__GetBattleSvtId(
        NpcFollowerEntity_o *this,
        int32_t priority,
        int32_t defaultValue,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x4

  if ( (byte_4D2CDD0 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_17191/*"battle_svt_id"*/);
    byte_4D2CDD0 = 1;
  }
  if ( NpcFollowerEntity__IsExistSvtChangeParam(this, *(const MethodInfo **)&priority) )
    return NpcFollowerEntity__GetSvtChangeValueInt(
             this,
             (System_String_o *)StringLiteral_17191/*"battle_svt_id"*/,
             priority,
             defaultValue,
             v7);
  else
    return defaultValue;
}


int32_t NpcFollowerEntity__GetDispLimitCnt(NpcFollowerEntity_o *this, int32_t defValue, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4D2CDC8 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_18757/*"dispLimitCount"*/);
    byte_4D2CDC8 = 1;
  }
  return NpcFollowerEntity__GetScriptInt(this, (System_String_o *)StringLiteral_18757/*"dispLimitCount"*/, defValue, v3);
}


int32_t NpcFollowerEntity__GetEventDeckIndex(NpcFollowerEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4D2CDD2 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_19288/*"eventDeckIndex"*/);
    byte_4D2CDD2 = 1;
  }
  return NpcFollowerEntity__GetScriptInt(this, (System_String_o *)StringLiteral_19288/*"eventDeckIndex"*/, 0, v2);
}


int32_t NpcFollowerEntity__GetImageSvtId(NpcFollowerEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4D2CDD3 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_20464/*"imageSvtId"*/);
    byte_4D2CDD3 = 1;
  }
  return NpcFollowerEntity__GetScriptInt(this, (System_String_o *)StringLiteral_20464/*"imageSvtId"*/, 0, v2);
}


System_String_o *NpcFollowerEntity__GetOverwriteServantName(NpcFollowerEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D2CDD4 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_24083/*"supportName"*/);
    byte_4D2CDD4 = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.npcScript, (System_String_o *)StringLiteral_24083/*"supportName"*/, 0, 0);
}


int32_t NpcFollowerEntity__GetScriptInt(
        NpcFollowerEntity_o *this,
        System_String_o *key,
        int32_t defVal,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *npcScript; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  NpcFollowerEntity_o *v12; // x0
  int32_t v13; // w1
  const MethodInfo *v14; // x2
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4D2CDC7 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_1C94098(&long_TypeInfo);
    byte_4D2CDC7 = 1;
  }
  value = 0;
  npcScript = this->fields.npcScript;
  if ( !npcScript
    || !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)npcScript,
          (Il2CppObject *)key,
          &value,
          (const MethodInfo_3522400 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    return defVal;
  }
  if ( !value )
    sub_1C942F0(0, v8);
  if ( value->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(value, long_TypeInfo, v9, v10);
  sub_1C9468C(value);
  return NpcFollowerEntity__GetDispLimitCnt(v12, v13, v14);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *NpcFollowerEntity__GetServantName(
        NpcFollowerEntity_o *this,
        int32_t priority,
        System_String_o *defaultValue,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x4

  if ( (byte_4D2CDCE & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_22359/*"name"*/);
    byte_4D2CDCE = 1;
  }
  if ( NpcFollowerEntity__IsExistSvtChangeParam(this, *(const MethodInfo **)&priority) )
    return NpcFollowerEntity__GetSvtChangeValueString(
             this,
             (System_String_o *)StringLiteral_22359/*"name"*/,
             priority,
             defaultValue,
             v7);
  else
    return defaultValue;
}


// local variable allocation has failed, the output may be wrong!
int32_t NpcFollowerEntity__GetServantTd(
        NpcFollowerEntity_o *this,
        int32_t priority,
        int32_t defaultValue,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x4

  if ( (byte_4D2CDCF & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_24247/*"td"*/);
    byte_4D2CDCF = 1;
  }
  if ( NpcFollowerEntity__IsExistSvtChangeParam(this, *(const MethodInfo **)&priority) )
    return NpcFollowerEntity__GetSvtChangeValueInt(
             this,
             (System_String_o *)StringLiteral_24247/*"td"*/,
             priority,
             defaultValue,
             v7);
  else
    return defaultValue;
}


// local variable allocation has failed, the output may be wrong!
int32_t NpcFollowerEntity__GetServantVoiceId(
        NpcFollowerEntity_o *this,
        int32_t priority,
        int32_t defaultValue,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x4

  if ( (byte_4D2CDD1 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_24113/*"svt_voice_id"*/);
    byte_4D2CDD1 = 1;
  }
  if ( NpcFollowerEntity__IsExistSvtChangeParam(this, *(const MethodInfo **)&priority) )
    return NpcFollowerEntity__GetSvtChangeValueInt(
             this,
             (System_String_o *)StringLiteral_24113/*"svt_voice_id"*/,
             priority,
             defaultValue,
             v7);
  else
    return defaultValue;
}


System_Collections_Generic_Dictionary_string__object__o *NpcFollowerEntity__GetSvtChangeData(
        NpcFollowerEntity_o *this,
        const MethodInfo *method)
{
  bool v3; // w8
  System_Collections_Generic_Dictionary_string__object__o *result; // x0
  __int64 naturalAligment; // x11
  Il2CppObject *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4D2CDCA & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_1C94098(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_1C94098(&StringLiteral_24109/*"svt_change"*/);
    byte_4D2CDCA = 1;
  }
  value = 0;
  v3 = NpcFollowerEntity__IsExistSvtChangeParam(this, method);
  result = 0;
  if ( v3 )
  {
    result = this->fields.npcScript;
    if ( result )
    {
      if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
             (System_Collections_Generic_Dictionary_object__object__o *)result,
             (Il2CppObject *)StringLiteral_24109/*"svt_change"*/,
             &value,
             (const MethodInfo_3522400 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__)
        && value
        && (naturalAligment = System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.naturalAligment,
            value->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
      {
        if ( (System_Collections_Generic_Dictionary_string__object__c *)value->klass->_2.typeHierarchy[naturalAligment - 1] == System_Collections_Generic_Dictionary_string__object__TypeInfo )
          return (System_Collections_Generic_Dictionary_string__object__o *)value;
        else
          return 0;
      }
      else
      {
        return 0;
      }
    }
  }
  return result;
}


System_Collections_Generic_Dictionary_string__object__array *NpcFollowerEntity__GetSvtChangeDataParams(
        NpcFollowerEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x19
  const MethodInfo *v6; // x1
  System_Collections_Generic_Dictionary_string__object__array *result; // x0
  __int64 v8; // x1
  Il2CppObject *v9; // x0
  __int64 naturalAligment; // x9
  _BOOL8 v11; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  Il2CppObject *current; // x1
  __int64 v19; // x10
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+20h] [xbp-50h] BYREF
  Il2CppObject *value; // [xsp+38h] [xbp-38h] BYREF

  if ( (byte_4D2CDCB & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_1C94098(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_object__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_object__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_Dictionary_string__object___Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_object__GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_List_Dictionary_string__object___ToArray__);
    sub_1C94098(&Method_System_Collections_Generic_List_Dictionary_string__object____ctor__);
    sub_1C94098(&System_Collections_Generic_List_object__TypeInfo);
    sub_1C94098(&System_Collections_Generic_List_Dictionary_string__object___TypeInfo);
    byte_4D2CDCB = 1;
  }
  value = 0;
  memset(&v25, 0, sizeof(v25));
  v5 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_Dictionary_string__object___TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_Dictionary_string__object____ctor__);
  result = (System_Collections_Generic_Dictionary_string__object__array *)NpcFollowerEntity__GetSvtChangeData(this, v6);
  if ( result )
  {
    if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
            (System_Collections_Generic_Dictionary_object__object__o *)result,
            (Il2CppObject *)key,
            &value,
            (const MethodInfo_3522400 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
      return 0;
    v9 = value;
    if ( value )
    {
      naturalAligment = System_Collections_Generic_List_object__TypeInfo->_2.naturalAligment;
      if ( value->klass->_2.naturalAligment >= (unsigned int)naturalAligment
        && (System_Collections_Generic_List_object__c *)value->klass->_2.typeHierarchy[naturalAligment - 1] == System_Collections_Generic_List_object__TypeInfo )
      {
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v24,
          (System_Collections_Generic_List_object__o *)value,
          (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_object__GetEnumerator__);
        v25 = v24;
        while ( 1 )
        {
          v11 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v25,
                  (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_object__MoveNext__);
          if ( !v11 )
            break;
          current = v25.fields._current;
          if ( v25.fields._current )
          {
            v19 = System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.naturalAligment;
            if ( v25.fields._current->klass->_2.naturalAligment >= (unsigned int)v19
              && (System_Collections_Generic_Dictionary_string__object__c *)v25.fields._current->klass->_2.typeHierarchy[v19 - 1] == System_Collections_Generic_Dictionary_string__object__TypeInfo )
            {
              if ( !v5 )
                sub_1C942F0(v11, v25.fields._current);
              items = v5->fields._items;
              v21 = Method_System_Collections_Generic_List_Dictionary_string__object___Add__;
              ++v5->fields._version;
              if ( !items )
                sub_1C942F0(v11, current);
              size = v5->fields._size;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v5,
                  current,
                  *(const MethodInfo_386AE34 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
              }
              else
              {
                v23 = &items->obj.klass + size;
                v5->fields._size = size + 1;
                v23[4] = (Il2CppClass *)current;
                sub_1C9403C((GrandQuestFolderBoardItem_o *)(v23 + 4), (int32_t)current, v12, v13, v14, v15, v16, v17);
              }
            }
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v25,
          (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
        if ( v5 )
          return (System_Collections_Generic_Dictionary_string__object__array *)System_Collections_Generic_List_object___ToArray(
                                                                                  v5,
                                                                                  (const MethodInfo_386C98C *)Method_System_Collections_Generic_List_Dictionary_string__object___ToArray__);
      }
      else
      {
        sub_1C9468C(value);
      }
    }
    sub_1C942F0(v9, v8);
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
int32_t NpcFollowerEntity__GetSvtChangeValueInt(
        NpcFollowerEntity_o *this,
        System_String_o *key,
        int32_t priority,
        int32_t defaultValue,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_string__object__array *Item; // x0
  __int64 v10; // x1
  int max_length; // w8
  System_Collections_Generic_Dictionary_string__object__array *v12; // x21
  __int64 v13; // x23
  System_Collections_Generic_Dictionary_object__object__o *v14; // x22
  System_String_o *v15; // x0
  System_String_o *v16; // x0

  if ( (byte_4D2CDCD & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C94098(&StringLiteral_22998/*"priority"*/);
    sub_1C94098(&StringLiteral_24879/*"value"*/);
    byte_4D2CDCD = 1;
  }
  Item = NpcFollowerEntity__GetSvtChangeDataParams(this, key, *(const MethodInfo **)&priority);
  if ( Item )
  {
    max_length = Item->max_length;
    v12 = Item;
    if ( max_length >= 1 )
    {
      v13 = 0;
      do
      {
        if ( (unsigned int)v13 >= max_length )
          sub_1C942F8(Item);
        v14 = (System_Collections_Generic_Dictionary_object__object__o *)v12->m_Items[v13];
        if ( !v14
          || (Item = (System_Collections_Generic_Dictionary_string__object__array *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                      (System_Collections_Generic_Dictionary_object__object__o *)v12->m_Items[v13],
                                                                                      (Il2CppObject *)StringLiteral_22998/*"priority"*/,
                                                                                      (const MethodInfo_3520B74 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0 )
        {
LABEL_14:
          sub_1C942F0(Item, v10);
        }
        v15 = (System_String_o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_string__object__array *, const MethodInfo *))Item->obj.klass->vtable[3].methodPtr)(
                                   Item,
                                   Item->obj.klass->vtable[3].method);
        Item = (System_Collections_Generic_Dictionary_string__object__array *)System_Int32__Parse(v15, 0);
        if ( (_DWORD)Item == priority )
        {
          Item = (System_Collections_Generic_Dictionary_string__object__array *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                  v14,
                                                                                  (Il2CppObject *)StringLiteral_24879/*"value"*/,
                                                                                  (const MethodInfo_3520B74 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
          if ( !Item )
            goto LABEL_14;
          v16 = (System_String_o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_string__object__array *, const MethodInfo *))Item->obj.klass->vtable[3].methodPtr)(
                                     Item,
                                     Item->obj.klass->vtable[3].method);
          Item = (System_Collections_Generic_Dictionary_string__object__array *)System_Int32__Parse(v16, 0);
          defaultValue = (int)Item;
        }
        max_length = v12->max_length;
        ++v13;
      }
      while ( (int)v13 < max_length );
    }
  }
  return defaultValue;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *NpcFollowerEntity__GetSvtChangeValueString(
        NpcFollowerEntity_o *this,
        System_String_o *key,
        int32_t priority,
        System_String_o *defaultValue,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_string__object__array *Item; // x0
  __int64 v10; // x1
  int max_length; // w8
  System_Collections_Generic_Dictionary_string__object__array *v12; // x21
  __int64 v13; // x23
  System_Collections_Generic_Dictionary_object__object__o *v14; // x22
  System_String_o *v15; // x0

  if ( (byte_4D2CDCC & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C94098(&StringLiteral_22998/*"priority"*/);
    sub_1C94098(&StringLiteral_24879/*"value"*/);
    byte_4D2CDCC = 1;
  }
  Item = NpcFollowerEntity__GetSvtChangeDataParams(this, key, *(const MethodInfo **)&priority);
  if ( Item )
  {
    max_length = Item->max_length;
    v12 = Item;
    if ( max_length >= 1 )
    {
      v13 = 0;
      do
      {
        if ( (unsigned int)v13 >= max_length )
          sub_1C942F8(Item);
        v14 = (System_Collections_Generic_Dictionary_object__object__o *)v12->m_Items[v13];
        if ( !v14
          || (Item = (System_Collections_Generic_Dictionary_string__object__array *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                      (System_Collections_Generic_Dictionary_object__object__o *)v12->m_Items[v13],
                                                                                      (Il2CppObject *)StringLiteral_22998/*"priority"*/,
                                                                                      (const MethodInfo_3520B74 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0 )
        {
LABEL_14:
          sub_1C942F0(Item, v10);
        }
        v15 = (System_String_o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_string__object__array *, const MethodInfo *))Item->obj.klass->vtable[3].methodPtr)(
                                   Item,
                                   Item->obj.klass->vtable[3].method);
        Item = (System_Collections_Generic_Dictionary_string__object__array *)System_Int32__Parse(v15, 0);
        if ( (_DWORD)Item == priority )
        {
          Item = (System_Collections_Generic_Dictionary_string__object__array *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                  v14,
                                                                                  (Il2CppObject *)StringLiteral_24879/*"value"*/,
                                                                                  (const MethodInfo_3520B74 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
          if ( !Item )
            goto LABEL_14;
          Item = (System_Collections_Generic_Dictionary_string__object__array *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_string__object__array *, const MethodInfo *))Item->obj.klass->vtable[3].methodPtr)(
                                                                                  Item,
                                                                                  Item->obj.klass->vtable[3].method);
          defaultValue = (System_String_o *)Item;
        }
        max_length = v12->max_length;
        ++v13;
      }
      while ( (int)v13 < max_length );
    }
  }
  return defaultValue;
}


bool NpcFollowerEntity__HasFlag(NpcFollowerEntity_o *this, int32_t targetFlag, const MethodInfo *method)
{
  return (this->fields.flag & targetFlag) != 0;
}


bool NpcFollowerEntity__IsExistSvtChangeParam(NpcFollowerEntity_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *npcScript; // x0

  if ( (byte_4D2CDC9 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C94098(&StringLiteral_24109/*"svt_change"*/);
    byte_4D2CDC9 = 1;
  }
  npcScript = this->fields.npcScript;
  if ( npcScript )
    LOBYTE(npcScript) = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                          (System_Collections_Generic_Dictionary_object__object__o *)npcScript,
                          (Il2CppObject *)StringLiteral_24109/*"svt_change"*/,
                          (const MethodInfo_3520DE8 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)npcScript;
}


bool NpcFollowerEntity__IsFixedNpc(NpcFollowerEntity_o *this, const MethodInfo *method)
{
  return (LOBYTE(this->fields.flag) >> 2) & 1;
}


bool NpcFollowerEntity__IsMyServantOrNpc(NpcFollowerEntity_o *this, const MethodInfo *method)
{
  return (LOBYTE(this->fields.flag) >> 1) & 1;
}


bool NpcFollowerEntity__IsOverwriteTreasureDevice(NpcFollowerEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D2CDD5 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_24104/*"svtOverwriteTreasureDevice"*/);
    byte_4D2CDD5 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.npcScript, (System_String_o *)StringLiteral_24104/*"svtOverwriteTreasureDevice"*/, 0, 0) != 0;
}


bool NpcFollowerEntity__IsRecommendedFollower(NpcFollowerEntity_o *this, const MethodInfo *method)
{
  return this->fields.flag & 1;
}