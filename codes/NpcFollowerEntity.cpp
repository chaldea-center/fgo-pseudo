void NpcFollowerEntity___ctor(NpcFollowerEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5938C49 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_string___ctor__);
    byte_5938C49 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3EDADE8 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *NpcFollowerEntity__CreatePK(int64_t id, int32_t questId, int32_t questPhase, const MethodInfo *method)
{
  if ( (byte_5938C3A & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_CreateMultiplePK_long__int__int___);
    byte_5938C3A = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int__int_(
           id,
           questId,
           questPhase,
           (const MethodInfo_38215B8 *)Method_DataEntityBase_CreateMultiplePK_long__int__int___);
}


System_String_o *NpcFollowerEntity__CreatePrimaryKey(NpcFollowerEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return NpcFollowerEntity__CreatePK(this->fields.id, this->fields.questId, this->fields.questPhase, v2);
}


int32_t NpcFollowerEntity__GetDispLimitCnt(NpcFollowerEntity_o *this, int32_t defValue, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_5938C3C & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_19451/*"dispLimitCount"*/);
    byte_5938C3C = 1;
  }
  return NpcFollowerEntity__GetScriptInt(this, (System_String_o *)StringLiteral_19451/*"dispLimitCount"*/, defValue, v3);
}


int32_t NpcFollowerEntity__GetEventDeckIndex(NpcFollowerEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5938C44 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_19993/*"eventDeckIndex"*/);
    byte_5938C44 = 1;
  }
  return NpcFollowerEntity__GetScriptInt(this, (System_String_o *)StringLiteral_19993/*"eventDeckIndex"*/, 0, v2);
}


int32_t NpcFollowerEntity__GetImageSvtId(NpcFollowerEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5938C45 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_21233/*"imageSvtId"*/);
    byte_5938C45 = 1;
  }
  return NpcFollowerEntity__GetScriptInt(this, (System_String_o *)StringLiteral_21233/*"imageSvtId"*/, 0, v2);
}


System_String_o *NpcFollowerEntity__GetOverwriteServantName(NpcFollowerEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5938C46 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_25072/*"supportName"*/);
    byte_5938C46 = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.npcScript, (System_String_o *)StringLiteral_25072/*"supportName"*/, 0, 0);
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
  NpcFollowerEntity_o *v11; // x0
  int32_t v12; // w1
  const MethodInfo *v13; // x2
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5938C3B & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    byte_5938C3B = 1;
  }
  npcScript = this->fields.npcScript;
  value = 0;
  if ( !npcScript
    || !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)npcScript,
          (Il2CppObject *)key,
          &value,
          (const MethodInfo_3FCBFD0 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    return defVal;
  }
  if ( !value )
    sub_21FFECC(0, v8);
  if ( value->klass->_1.element_class == *(Il2CppClass **)(qword_594C090 + 64) )
    return *(_DWORD *)j_il2cpp_object_unbox_0(value, qword_594C090, v9);
  sub_220024C(value, qword_594C090, v9);
  return NpcFollowerEntity__GetDispLimitCnt(v11, v12, v13);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *NpcFollowerEntity__GetServantName(
        NpcFollowerEntity_o *this,
        int32_t priority,
        System_String_o *defaultValue,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x4

  if ( (byte_5938C42 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_23220/*"name"*/);
    byte_5938C42 = 1;
  }
  if ( NpcFollowerEntity__IsExistSvtChangeParam(this, *(const MethodInfo **)&priority) )
    return NpcFollowerEntity__GetSvtChangeValueString(
             this,
             (System_String_o *)StringLiteral_23220/*"name"*/,
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

  if ( (byte_5938C43 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_25239/*"td"*/);
    byte_5938C43 = 1;
  }
  if ( NpcFollowerEntity__IsExistSvtChangeParam(this, *(const MethodInfo **)&priority) )
    return NpcFollowerEntity__GetSvtChangeValueInt(
             this,
             (System_String_o *)StringLiteral_25239/*"td"*/,
             priority,
             defaultValue,
             v7);
  else
    return defaultValue;
}


System_String_o *NpcFollowerEntity__GetSupportSelectOverwriteTreasureDeviceName(
        NpcFollowerEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_5938C48 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_25073/*"supportSelectOverwriteTreasureDeviceName"*/);
    byte_5938C48 = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.npcScript, (System_String_o *)StringLiteral_25073/*"supportSelectOverwriteTreasureDeviceName"*/, 0, 0);
}


System_Collections_Generic_Dictionary_string__object__o *NpcFollowerEntity__GetSvtChangeData(
        NpcFollowerEntity_o *this,
        const MethodInfo *method)
{
  bool v3; // w8
  System_Collections_Generic_Dictionary_string__object__o *result; // x0
  __int64 naturalAligment; // x11
  Il2CppObject *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_5938C3E & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_21FFC50(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_21FFC50(&StringLiteral_25099/*"svt_change"*/);
    byte_5938C3E = 1;
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
             (Il2CppObject *)StringLiteral_25099/*"svt_change"*/,
             &value,
             (const MethodInfo_3FCBFD0 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__)
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
  __int64 v9; // x2
  Il2CppObject *v10; // x0
  __int64 naturalAligment; // x9
  _BOOL8 v12; // x0
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  Il2CppObject *current; // x1
  __int64 v20; // x10
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+10h] [xbp-50h] BYREF
  Il2CppObject *value; // [xsp+28h] [xbp-38h] BYREF

  if ( (byte_5938C3F & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_21FFC50(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_object__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_object__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Dictionary_string__object___Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_object__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Dictionary_string__object___ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Dictionary_string__object____ctor__);
    sub_21FFC50(&System_Collections_Generic_List_object__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_List_Dictionary_string__object___TypeInfo);
    byte_5938C3F = 1;
  }
  value = 0;
  memset(&v25, 0, sizeof(v25));
  v5 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_Dictionary_string__object___TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_Dictionary_string__object____ctor__);
  result = (System_Collections_Generic_Dictionary_string__object__array *)NpcFollowerEntity__GetSvtChangeData(this, v6);
  if ( result )
  {
    if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
            (System_Collections_Generic_Dictionary_object__object__o *)result,
            (Il2CppObject *)key,
            &value,
            (const MethodInfo_3FCBFD0 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
      return 0;
    v10 = value;
    if ( value )
    {
      naturalAligment = System_Collections_Generic_List_object__TypeInfo->_2.naturalAligment;
      if ( value->klass->_2.naturalAligment >= (unsigned int)naturalAligment
        && (System_Collections_Generic_List_object__c *)value->klass->_2.typeHierarchy[naturalAligment - 1] == System_Collections_Generic_List_object__TypeInfo )
      {
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v25,
          (System_Collections_Generic_List_object__o *)value,
          (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_object__GetEnumerator__);
        while ( 1 )
        {
          v12 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v25,
                  (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_object__MoveNext__);
          if ( !v12 )
            break;
          current = v25.fields._current;
          if ( v25.fields._current )
          {
            v20 = System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.naturalAligment;
            if ( v25.fields._current->klass->_2.naturalAligment >= (unsigned int)v20
              && (System_Collections_Generic_Dictionary_string__object__c *)v25.fields._current->klass->_2.typeHierarchy[v20 - 1] == System_Collections_Generic_Dictionary_string__object__TypeInfo )
            {
              if ( !v5
                || (items = v5->fields._items,
                    v22 = Method_System_Collections_Generic_List_Dictionary_string__object___Add__,
                    ++v5->fields._version,
                    !items) )
              {
                sub_21FFECC(v12, current);
              }
              size = v5->fields._size;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v5,
                  current,
                  *(const MethodInfo_444FB2C **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
              }
              else
              {
                v24 = &items->obj.klass + size;
                v5->fields._size = size + 1;
                v24[4] = (Il2CppClass *)current;
                sub_21FFBF4(
                  (MissionNaviTransitionBoardItem_o *)(v24 + 4),
                  (int32_t)current,
                  v13,
                  v14,
                  v15,
                  v16,
                  v17,
                  v18);
              }
            }
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v25,
          (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
        if ( v5 )
          return (System_Collections_Generic_Dictionary_string__object__array *)System_Collections_Generic_List_object___ToArray(
                                                                                  v5,
                                                                                  (const MethodInfo_445164C *)Method_System_Collections_Generic_List_Dictionary_string__object___ToArray__);
      }
      else
      {
        sub_220024C(value, System_Collections_Generic_List_object__TypeInfo, v9);
      }
    }
    sub_21FFECC(v10, v8);
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

  if ( (byte_5938C41 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_21FFC50(&StringLiteral_23913/*"priority"*/);
    sub_21FFC50(&StringLiteral_25940/*"value"*/);
    byte_5938C41 = 1;
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
          sub_21FFED4(Item);
        v14 = (System_Collections_Generic_Dictionary_object__object__o *)v12->m_Items[v13];
        if ( !v14
          || (Item = (System_Collections_Generic_Dictionary_string__object__array *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                      (System_Collections_Generic_Dictionary_object__object__o *)v12->m_Items[v13],
                                                                                      (Il2CppObject *)StringLiteral_23913/*"priority"*/,
                                                                                      (const MethodInfo_3FCA3E8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0 )
        {
LABEL_14:
          sub_21FFECC(Item, v10);
        }
        v15 = (System_String_o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_string__object__array *, const MethodInfo *))Item->obj.klass->vtable[3].methodPtr)(
                                   Item,
                                   Item->obj.klass->vtable[3].method);
        Item = (System_Collections_Generic_Dictionary_string__object__array *)System_Int32__Parse(v15, 0);
        if ( (_DWORD)Item == priority )
        {
          Item = (System_Collections_Generic_Dictionary_string__object__array *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                  v14,
                                                                                  (Il2CppObject *)StringLiteral_25940/*"value"*/,
                                                                                  (const MethodInfo_3FCA3E8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
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

  if ( (byte_5938C40 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_21FFC50(&StringLiteral_23913/*"priority"*/);
    sub_21FFC50(&StringLiteral_25940/*"value"*/);
    byte_5938C40 = 1;
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
          sub_21FFED4(Item);
        v14 = (System_Collections_Generic_Dictionary_object__object__o *)v12->m_Items[v13];
        if ( !v14
          || (Item = (System_Collections_Generic_Dictionary_string__object__array *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                      (System_Collections_Generic_Dictionary_object__object__o *)v12->m_Items[v13],
                                                                                      (Il2CppObject *)StringLiteral_23913/*"priority"*/,
                                                                                      (const MethodInfo_3FCA3E8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0 )
        {
LABEL_14:
          sub_21FFECC(Item, v10);
        }
        v15 = (System_String_o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_string__object__array *, const MethodInfo *))Item->obj.klass->vtable[3].methodPtr)(
                                   Item,
                                   Item->obj.klass->vtable[3].method);
        Item = (System_Collections_Generic_Dictionary_string__object__array *)System_Int32__Parse(v15, 0);
        if ( (_DWORD)Item == priority )
        {
          Item = (System_Collections_Generic_Dictionary_string__object__array *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                  v14,
                                                                                  (Il2CppObject *)StringLiteral_25940/*"value"*/,
                                                                                  (const MethodInfo_3FCA3E8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
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

  if ( (byte_5938C3D & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_21FFC50(&StringLiteral_25099/*"svt_change"*/);
    byte_5938C3D = 1;
  }
  npcScript = this->fields.npcScript;
  if ( npcScript )
    LOBYTE(npcScript) = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                          (System_Collections_Generic_Dictionary_object__object__o *)npcScript,
                          (Il2CppObject *)StringLiteral_25099/*"svt_change"*/,
                          (const MethodInfo_3FCA65C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
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
  if ( (byte_5938C47 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_25094/*"svtOverwriteTreasureDevice"*/);
    byte_5938C47 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.npcScript, (System_String_o *)StringLiteral_25094/*"svtOverwriteTreasureDevice"*/, 0, 0) != 0;
}


bool NpcFollowerEntity__IsRecommendedFollower(NpcFollowerEntity_o *this, const MethodInfo *method)
{
  return this->fields.flag & 1;
}