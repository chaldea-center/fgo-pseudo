void __fastcall NpcFollowerEntity___ctor(NpcFollowerEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4BB4AD6 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataEntityBase_string___ctor__, method);
    byte_4BB4AD6 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_32361B8 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall NpcFollowerEntity__CreatePK(
        int64_t id,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  if ( (byte_4BB4AC6 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataEntityBase_CreateMultiplePK_long__int__int___, *(_QWORD *)&questId);
    byte_4BB4AC6 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int__int_(
           id,
           questId,
           questPhase,
           (const MethodInfo_2F8DCDC *)Method_DataEntityBase_CreateMultiplePK_long__int__int___);
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

  if ( (byte_4BB4AD0 & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_17400/*"battle_command_spell"*/, *(_QWORD *)&priority);
    byte_4BB4AD0 = 1;
  }
  if ( NpcFollowerEntity__IsExistSvtChangeParam(this, *(const MethodInfo **)&priority) )
    return NpcFollowerEntity__GetSvtChangeValueInt(
             this,
             (System_String_o *)StringLiteral_17400/*"battle_command_spell"*/,
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

  if ( (byte_4BB4AC8 & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_18933/*"digits"*/, *(_QWORD *)&defValue);
    byte_4BB4AC8 = 1;
  }
  return NpcFollowerEntity__GetScriptInt(this, (System_String_o *)StringLiteral_18933/*"digits"*/, defValue, v3);
}


int32_t __fastcall NpcFollowerEntity__GetEventDeckIndex(NpcFollowerEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BB4AD2 & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_19429/*"event/expeditionStart"*/, method);
    byte_4BB4AD2 = 1;
  }
  return NpcFollowerEntity__GetScriptInt(this, (System_String_o *)StringLiteral_19429/*"event/expeditionStart"*/, 0, v2);
}


int32_t __fastcall NpcFollowerEntity__GetImageSvtId(NpcFollowerEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BB4AD3 & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_20566/*"ignoreBattleLoseDialog"*/, method);
    byte_4BB4AD3 = 1;
  }
  return NpcFollowerEntity__GetScriptInt(this, (System_String_o *)StringLiteral_20566/*"ignoreBattleLoseDialog"*/, 0, v2);
}


System_String_o *__fastcall NpcFollowerEntity__GetOverwriteServantName(
        NpcFollowerEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4BB4AD4 & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_24078/*"summon"*/, method);
    byte_4BB4AD4 = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.npcScript, (System_String_o *)StringLiteral_24078/*"summon"*/, 0LL, 0LL);
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

  if ( (byte_4BB4AC7 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, key);
    sub_1C13D24(&long_TypeInfo, v7);
    byte_4BB4AC7 = 1;
  }
  value = 0LL;
  npcScript = this->fields.npcScript;
  if ( !npcScript
    || !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)npcScript,
          (Il2CppObject *)key,
          &value,
          (const MethodInfo_32F41BC *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    return defVal;
  }
  if ( !value )
    sub_1C13F80(0LL, v9);
  if ( value->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(value, long_TypeInfo, v10, v11);
  sub_1C14240(value);
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

  if ( (byte_4BB4ACE & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_22348/*"mtu"*/, *(_QWORD *)&priority);
    byte_4BB4ACE = 1;
  }
  if ( NpcFollowerEntity__IsExistSvtChangeParam(this, *(const MethodInfo **)&priority) )
    return NpcFollowerEntity__GetSvtChangeValueString(
             this,
             (System_String_o *)StringLiteral_22348/*"mtu"*/,
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

  if ( (byte_4BB4ACF & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_24256/*"tan"*/, *(_QWORD *)&priority);
    byte_4BB4ACF = 1;
  }
  if ( NpcFollowerEntity__IsExistSvtChangeParam(this, *(const MethodInfo **)&priority) )
    return NpcFollowerEntity__GetSvtChangeValueInt(
             this,
             (System_String_o *)StringLiteral_24256/*"tan"*/,
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

  if ( (byte_4BB4AD1 & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_24108/*"svtCoinConfirm"*/, *(_QWORD *)&priority);
    byte_4BB4AD1 = 1;
  }
  if ( NpcFollowerEntity__IsExistSvtChangeParam(this, *(const MethodInfo **)&priority) )
    return NpcFollowerEntity__GetSvtChangeValueInt(
             this,
             (System_String_o *)StringLiteral_24108/*"svtCoinConfirm"*/,
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

  if ( (byte_4BB4ACA & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, method);
    sub_1C13D24(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v3);
    sub_1C13D24(&StringLiteral_24104/*"svf"*/, v4);
    byte_4BB4ACA = 1;
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
             (Il2CppObject *)StringLiteral_24104/*"svf"*/,
             &value,
             (const MethodInfo_32F41BC *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__)
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

  if ( (byte_4BB4ACB & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, key);
    sub_1C13D24(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v5);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_object__Dispose__, v6);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_object__MoveNext__, v7);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_object__get_Current__, v8);
    sub_1C13D24(&Method_System_Collections_Generic_List_Dictionary_string__object___Add__, v9);
    sub_1C13D24(&Method_System_Collections_Generic_List_object__GetEnumerator__, v10);
    sub_1C13D24(&Method_System_Collections_Generic_List_Dictionary_string__object___ToArray__, v11);
    sub_1C13D24(&Method_System_Collections_Generic_List_Dictionary_string__object____ctor__, v12);
    sub_1C13D24(&System_Collections_Generic_List_object__TypeInfo, v13);
    sub_1C13D24(&System_Collections_Generic_List_Dictionary_string__object___TypeInfo, v14);
    byte_4BB4ACB = 1;
  }
  value = 0LL;
  memset(&v35, 0, sizeof(v35));
  v15 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_Dictionary_string__object___TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_Dictionary_string__object____ctor__);
  result = (System_Collections_Generic_Dictionary_string__object__array *)NpcFollowerEntity__GetSvtChangeData(this, v16);
  if ( result )
  {
    if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
            (System_Collections_Generic_Dictionary_object__object__o *)result,
            (Il2CppObject *)key,
            &value,
            (const MethodInfo_32F41BC *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
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
          (const MethodInfo_362DCC4 *)Method_System_Collections_Generic_List_object__GetEnumerator__);
        v35 = v34;
        while ( 1 )
        {
          v21 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v35,
                  (const MethodInfo_33BEBE8 *)Method_System_Collections_Generic_List_Enumerator_object__MoveNext__);
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
                sub_1C13F80(v21, v35.fields._current);
              items = v15->fields._items;
              v31 = Method_System_Collections_Generic_List_Dictionary_string__object___Add__;
              ++v15->fields._version;
              if ( !items )
                sub_1C13F80(v21, current);
              size = v15->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v15,
                  current,
                  *(const MethodInfo_362D1CC **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
              }
              else
              {
                v33 = &items->obj.klass + size;
                v15->fields._size = size + 1;
                v33[4] = (Il2CppClass *)current;
                sub_1C13CC8((PartyOrganizationUtility_o *)(v33 + 4), (int64_t)current, v22, v23, v24, v25, v26, v27);
              }
            }
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v35,
          (const MethodInfo_33BEBE4 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
        if ( v15 )
          return (System_Collections_Generic_Dictionary_string__object__array *)System_Collections_Generic_List_object___ToArray(
                                                                                  v15,
                                                                                  (const MethodInfo_362ED24 *)Method_System_Collections_Generic_List_Dictionary_string__object___ToArray__);
      }
      else
      {
        sub_1C14240(value);
      }
    }
    sub_1C13F80(v19, v18);
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

  if ( (byte_4BB4ACD & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, key);
    sub_1C13D24(&StringLiteral_22975/*"prefab_roadmap_"*/, v9);
    sub_1C13D24(&StringLiteral_24899/*"utf-16BE"*/, v10);
    byte_4BB4ACD = 1;
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
          sub_1C13F88(Item, v12);
        v16 = (System_Collections_Generic_Dictionary_object__object__o *)v14->m_Items[v15];
        if ( !v16
          || (Item = (System_Collections_Generic_Dictionary_string__object__array *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                      (System_Collections_Generic_Dictionary_object__object__o *)v14->m_Items[v15],
                                                                                      (Il2CppObject *)StringLiteral_22975/*"prefab_roadmap_"*/,
                                                                                      (const MethodInfo_32F2930 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
        {
LABEL_14:
          sub_1C13F80(Item, v12);
        }
        v17 = (System_String_o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_string__object__array *, Il2CppMethodPointer))Item->obj.klass->vtable[3].method)(
                                   Item,
                                   Item->obj.klass->vtable[4].methodPtr);
        Item = (System_Collections_Generic_Dictionary_string__object__array *)System_Int32__Parse(v17, 0LL);
        if ( (_DWORD)Item == priority )
        {
          Item = (System_Collections_Generic_Dictionary_string__object__array *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                  v16,
                                                                                  (Il2CppObject *)StringLiteral_24899/*"utf-16BE"*/,
                                                                                  (const MethodInfo_32F2930 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
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

  if ( (byte_4BB4ACC & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, key);
    sub_1C13D24(&StringLiteral_22975/*"prefab_roadmap_"*/, v9);
    sub_1C13D24(&StringLiteral_24899/*"utf-16BE"*/, v10);
    byte_4BB4ACC = 1;
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
          sub_1C13F88(Item, v12);
        v16 = (System_Collections_Generic_Dictionary_object__object__o *)v14->m_Items[v15];
        if ( !v16
          || (Item = (System_Collections_Generic_Dictionary_string__object__array *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                      (System_Collections_Generic_Dictionary_object__object__o *)v14->m_Items[v15],
                                                                                      (Il2CppObject *)StringLiteral_22975/*"prefab_roadmap_"*/,
                                                                                      (const MethodInfo_32F2930 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
        {
LABEL_14:
          sub_1C13F80(Item, v12);
        }
        v17 = (System_String_o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_string__object__array *, Il2CppMethodPointer))Item->obj.klass->vtable[3].method)(
                                   Item,
                                   Item->obj.klass->vtable[4].methodPtr);
        Item = (System_Collections_Generic_Dictionary_string__object__array *)System_Int32__Parse(v17, 0LL);
        if ( (_DWORD)Item == priority )
        {
          Item = (System_Collections_Generic_Dictionary_string__object__array *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                  v16,
                                                                                  (Il2CppObject *)StringLiteral_24899/*"utf-16BE"*/,
                                                                                  (const MethodInfo_32F2930 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
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

  if ( (byte_4BB4AC9 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method);
    sub_1C13D24(&StringLiteral_24104/*"svf"*/, v3);
    byte_4BB4AC9 = 1;
  }
  npcScript = this->fields.npcScript;
  if ( npcScript )
    LOBYTE(npcScript) = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                          (System_Collections_Generic_Dictionary_object__object__o *)npcScript,
                          (Il2CppObject *)StringLiteral_24104/*"svf"*/,
                          (const MethodInfo_32F2BA4 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
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
  if ( (byte_4BB4AD5 & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_24099/*"suppress"*/, method);
    byte_4BB4AD5 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.npcScript, (System_String_o *)StringLiteral_24099/*"suppress"*/, 0, 0LL) != 0;
}


bool __fastcall NpcFollowerEntity__IsRecommendedFollower(NpcFollowerEntity_o *this, const MethodInfo *method)
{
  return this->fields.flag & 1;
}