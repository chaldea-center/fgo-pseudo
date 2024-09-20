void __fastcall NpcFollowerEntity___ctor(NpcFollowerEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B52B & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_string___ctor__);
    byte_4A5B52B = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_311D7AC *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall NpcFollowerEntity__CreatePK(
        int64_t id,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  if ( (byte_4A5B51B & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_CreateMultiplePK_long__int__int___);
    byte_4A5B51B = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int__int_(
           id,
           questId,
           questPhase,
           (const MethodInfo_2E7E178 *)Method_DataEntityBase_CreateMultiplePK_long__int__int___);
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

  if ( (byte_4A5B525 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_17139/*"battle_svt_id"*/);
    byte_4A5B525 = 1;
  }
  if ( NpcFollowerEntity__IsExistSvtChangeParam(this, *(const MethodInfo **)&priority) )
    return NpcFollowerEntity__GetSvtChangeValueInt(
             this,
             (System_String_o *)StringLiteral_17139/*"battle_svt_id"*/,
             priority,
             defaultValue,
             v7);
  else
    return defaultValue;
}


int32_t __fastcall NpcFollowerEntity__GetDispLimitCnt(NpcFollowerEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5B51D & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_18640/*"dispLimitCount"*/);
    byte_4A5B51D = 1;
  }
  return NpcFollowerEntity__GetScriptInt(this, (System_String_o *)StringLiteral_18640/*"dispLimitCount"*/, -1, v2);
}


int32_t __fastcall NpcFollowerEntity__GetEventDeckIndex(NpcFollowerEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5B527 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_19130/*"eventDeckIndex"*/);
    byte_4A5B527 = 1;
  }
  return NpcFollowerEntity__GetScriptInt(this, (System_String_o *)StringLiteral_19130/*"eventDeckIndex"*/, 0, v2);
}


int32_t __fastcall NpcFollowerEntity__GetImageSvtId(NpcFollowerEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5B528 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_20238/*"imageSvtId"*/);
    byte_4A5B528 = 1;
  }
  return NpcFollowerEntity__GetScriptInt(this, (System_String_o *)StringLiteral_20238/*"imageSvtId"*/, 0, v2);
}


System_String_o *__fastcall NpcFollowerEntity__GetOverwriteServantName(
        NpcFollowerEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A5B529 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_23689/*"supportName"*/);
    byte_4A5B529 = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.npcScript, (System_String_o *)StringLiteral_23689/*"supportName"*/, 0LL, 0LL);
}


int32_t __fastcall NpcFollowerEntity__GetScriptInt(
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
  const MethodInfo *v13; // x1
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A5B51C & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_1B885B0(&long_TypeInfo);
    byte_4A5B51C = 1;
  }
  value = 0LL;
  npcScript = this->fields.npcScript;
  if ( !npcScript
    || !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)npcScript,
          (Il2CppObject *)key,
          &value,
          (const MethodInfo_31C89D4 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    return defVal;
  }
  if ( !value )
    sub_1B8880C(0LL, v8);
  if ( value->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(value, long_TypeInfo, v9, v10);
  sub_1B88ACC(value);
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

  if ( (byte_4A5B523 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_21982/*"name"*/);
    byte_4A5B523 = 1;
  }
  if ( NpcFollowerEntity__IsExistSvtChangeParam(this, *(const MethodInfo **)&priority) )
    return NpcFollowerEntity__GetSvtChangeValueString(
             this,
             (System_String_o *)StringLiteral_21982/*"name"*/,
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

  if ( (byte_4A5B524 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_23865/*"td"*/);
    byte_4A5B524 = 1;
  }
  if ( NpcFollowerEntity__IsExistSvtChangeParam(this, *(const MethodInfo **)&priority) )
    return NpcFollowerEntity__GetSvtChangeValueInt(
             this,
             (System_String_o *)StringLiteral_23865/*"td"*/,
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

  if ( (byte_4A5B526 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_23718/*"svt_voice_id"*/);
    byte_4A5B526 = 1;
  }
  if ( NpcFollowerEntity__IsExistSvtChangeParam(this, *(const MethodInfo **)&priority) )
    return NpcFollowerEntity__GetSvtChangeValueInt(
             this,
             (System_String_o *)StringLiteral_23718/*"svt_voice_id"*/,
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
  bool v3; // w8
  System_Collections_Generic_Dictionary_string__object__o *result; // x0
  __int64 methodPtr_low; // x11
  Il2CppObject *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4A5B51F & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_1B885B0(&StringLiteral_23714/*"svt_change"*/);
    byte_4A5B51F = 1;
  }
  value = 0LL;
  v3 = NpcFollowerEntity__IsExistSvtChangeParam(this, method);
  result = 0LL;
  if ( v3 )
  {
    result = this->fields.npcScript;
    if ( result )
    {
      if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
             (System_Collections_Generic_Dictionary_object__object__o *)result,
             (Il2CppObject *)StringLiteral_23714/*"svt_change"*/,
             &value,
             (const MethodInfo_31C89D4 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__)
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
  System_Collections_Generic_List_object__o *v5; // x19
  const MethodInfo *v6; // x1
  System_Collections_Generic_Dictionary_string__object__array *result; // x0
  __int64 v8; // x1
  Il2CppObject *v9; // x0
  __int64 methodPtr_low; // x9
  _BOOL8 v11; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  Il2CppObject *current; // x1
  __int64 v15; // x10
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x0
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+20h] [xbp-50h] BYREF
  Il2CppObject *value; // [xsp+38h] [xbp-38h] BYREF

  if ( (byte_4A5B520 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_object__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_object__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Dictionary_string__object___Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_object__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Dictionary_string__object___ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Dictionary_string__object____ctor__);
    sub_1B885B0(&System_Collections_Generic_List_object__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_List_Dictionary_string__object___TypeInfo);
    byte_4A5B520 = 1;
  }
  value = 0LL;
  memset(&v21, 0, sizeof(v21));
  v5 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_Dictionary_string__object___TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_Dictionary_string__object____ctor__);
  result = (System_Collections_Generic_Dictionary_string__object__array *)NpcFollowerEntity__GetSvtChangeData(this, v6);
  if ( result )
  {
    if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
            (System_Collections_Generic_Dictionary_object__object__o *)result,
            (Il2CppObject *)key,
            &value,
            (const MethodInfo_31C89D4 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
      return 0LL;
    v9 = value;
    if ( value )
    {
      methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(value->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
        && (System_Collections_Generic_List_object__c *)value->klass->_2.typeHierarchy[methodPtr_low - 1] == System_Collections_Generic_List_object__TypeInfo )
      {
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v20,
          (System_Collections_Generic_List_object__o *)value,
          (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_object__GetEnumerator__);
        v21 = v20;
        while ( 1 )
        {
          v11 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v21,
                  (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_object__MoveNext__);
          if ( !v11 )
            break;
          current = v21.fields._current;
          if ( v21.fields._current )
          {
            v15 = LOBYTE(System_Collections_Generic_Dictionary_string__object__TypeInfo->vtable._0_Equals.methodPtr);
            if ( LOBYTE(v21.fields._current->klass->vtable[0].methodPtr) >= (unsigned int)v15
              && (System_Collections_Generic_Dictionary_string__object__c *)v21.fields._current->klass->_2.typeHierarchy[v15 - 1] == System_Collections_Generic_Dictionary_string__object__TypeInfo )
            {
              if ( !v5 )
                sub_1B8880C(v11, v21.fields._current);
              items = v5->fields._items;
              v17 = Method_System_Collections_Generic_List_Dictionary_string__object___Add__;
              ++v5->fields._version;
              if ( !items )
                sub_1B8880C(v11, current);
              size = v5->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v5,
                  current,
                  *(const MethodInfo_34FD834 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
              }
              else
              {
                v19 = &items->obj.klass + size;
                v5->fields._size = size + 1;
                v19[4] = (Il2CppClass *)current;
                sub_1B88554((ServantStatusBattleListViewItem_o *)(v19 + 4), (int32_t)current, v12, v13);
              }
            }
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v21,
          (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
        if ( v5 )
          return (System_Collections_Generic_Dictionary_string__object__array *)System_Collections_Generic_List_object___ToArray(
                                                                                  v5,
                                                                                  (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_Dictionary_string__object___ToArray__);
      }
      else
      {
        sub_1B88ACC(value);
      }
    }
    sub_1B8880C(v9, v8);
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
  System_Collections_Generic_Dictionary_string__object__array *Item; // x0
  __int64 v10; // x1
  int max_length; // w8
  System_Collections_Generic_Dictionary_string__object__array *v12; // x21
  __int64 v13; // x23
  System_Collections_Generic_Dictionary_object__object__o *v14; // x22
  System_String_o *v15; // x0
  System_String_o *v16; // x0

  if ( (byte_4A5B522 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1B885B0(&StringLiteral_22600/*"priority"*/);
    sub_1B885B0(&StringLiteral_24501/*"value"*/);
    byte_4A5B522 = 1;
  }
  Item = NpcFollowerEntity__GetSvtChangeDataParams(this, key, *(const MethodInfo **)&priority);
  if ( Item )
  {
    max_length = Item->max_length;
    v12 = Item;
    if ( max_length >= 1 )
    {
      v13 = 0LL;
      do
      {
        if ( (unsigned int)v13 >= max_length )
          sub_1B88814(Item, v10);
        v14 = (System_Collections_Generic_Dictionary_object__object__o *)v12->m_Items[v13];
        if ( !v14
          || (Item = (System_Collections_Generic_Dictionary_string__object__array *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                      (System_Collections_Generic_Dictionary_object__object__o *)v12->m_Items[v13],
                                                                                      (Il2CppObject *)StringLiteral_22600/*"priority"*/,
                                                                                      (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
        {
LABEL_14:
          sub_1B8880C(Item, v10);
        }
        v15 = (System_String_o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_string__object__array *, Il2CppMethodPointer))Item->obj.klass->vtable[3].method)(
                                   Item,
                                   Item->obj.klass->vtable[4].methodPtr);
        Item = (System_Collections_Generic_Dictionary_string__object__array *)System_Int32__Parse(v15, 0LL);
        if ( (_DWORD)Item == priority )
        {
          Item = (System_Collections_Generic_Dictionary_string__object__array *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                  v14,
                                                                                  (Il2CppObject *)StringLiteral_24501/*"value"*/,
                                                                                  (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
          if ( !Item )
            goto LABEL_14;
          v16 = (System_String_o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_string__object__array *, Il2CppMethodPointer))Item->obj.klass->vtable[3].method)(
                                     Item,
                                     Item->obj.klass->vtable[4].methodPtr);
          Item = (System_Collections_Generic_Dictionary_string__object__array *)System_Int32__Parse(v16, 0LL);
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
System_String_o *__fastcall NpcFollowerEntity__GetSvtChangeValueString(
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

  if ( (byte_4A5B521 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1B885B0(&StringLiteral_22600/*"priority"*/);
    sub_1B885B0(&StringLiteral_24501/*"value"*/);
    byte_4A5B521 = 1;
  }
  Item = NpcFollowerEntity__GetSvtChangeDataParams(this, key, *(const MethodInfo **)&priority);
  if ( Item )
  {
    max_length = Item->max_length;
    v12 = Item;
    if ( max_length >= 1 )
    {
      v13 = 0LL;
      do
      {
        if ( (unsigned int)v13 >= max_length )
          sub_1B88814(Item, v10);
        v14 = (System_Collections_Generic_Dictionary_object__object__o *)v12->m_Items[v13];
        if ( !v14
          || (Item = (System_Collections_Generic_Dictionary_string__object__array *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                      (System_Collections_Generic_Dictionary_object__object__o *)v12->m_Items[v13],
                                                                                      (Il2CppObject *)StringLiteral_22600/*"priority"*/,
                                                                                      (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
        {
LABEL_14:
          sub_1B8880C(Item, v10);
        }
        v15 = (System_String_o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_string__object__array *, Il2CppMethodPointer))Item->obj.klass->vtable[3].method)(
                                   Item,
                                   Item->obj.klass->vtable[4].methodPtr);
        Item = (System_Collections_Generic_Dictionary_string__object__array *)System_Int32__Parse(v15, 0LL);
        if ( (_DWORD)Item == priority )
        {
          Item = (System_Collections_Generic_Dictionary_string__object__array *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                  v14,
                                                                                  (Il2CppObject *)StringLiteral_24501/*"value"*/,
                                                                                  (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
          if ( !Item )
            goto LABEL_14;
          Item = (System_Collections_Generic_Dictionary_string__object__array *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_string__object__array *, Il2CppMethodPointer))Item->obj.klass->vtable[3].method)(
                                                                                  Item,
                                                                                  Item->obj.klass->vtable[4].methodPtr);
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


bool __fastcall NpcFollowerEntity__HasFlag(NpcFollowerEntity_o *this, int32_t targetFlag, const MethodInfo *method)
{
  return (this->fields.flag & targetFlag) != 0;
}


bool __fastcall NpcFollowerEntity__IsExistSvtChangeParam(NpcFollowerEntity_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *npcScript; // x0

  if ( (byte_4A5B51E & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1B885B0(&StringLiteral_23714/*"svt_change"*/);
    byte_4A5B51E = 1;
  }
  npcScript = this->fields.npcScript;
  if ( npcScript )
    LOBYTE(npcScript) = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                          (System_Collections_Generic_Dictionary_object__object__o *)npcScript,
                          (Il2CppObject *)StringLiteral_23714/*"svt_change"*/,
                          (const MethodInfo_31C73BC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
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
  if ( (byte_4A5B52A & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_23710/*"svtOverwriteTreasureDevice"*/);
    byte_4A5B52A = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.npcScript, (System_String_o *)StringLiteral_23710/*"svtOverwriteTreasureDevice"*/, 0, 0LL) != 0;
}


bool __fastcall NpcFollowerEntity__IsRecommendedFollower(NpcFollowerEntity_o *this, const MethodInfo *method)
{
  return this->fields.flag & 1;
}