void __fastcall AiActEntity___ctor(AiActEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49BAA60 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataEntityBase_int___ctor__, method);
    byte_49BAA60 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_319B4B8 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall AiActEntity__CreatePrimaryKey(AiActEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall AiActEntity__GetFixCommandCardIds(
        AiActEntity_o *this,
        int32_t commandType,
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
  System_Collections_Generic_List_int__o *v13; // x19
  __int64 IntValue; // x0
  __int64 v15; // x1
  const MethodInfo *v16; // x3
  System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 *v18; // x8
  System_String_o *v19; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  struct System_Int32_array *v23; // x8
  _QWORD *v24; // x9
  __int64 v25; // x10

  if ( (byte_49BAA5F & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_int__Add__, *(_QWORD *)&commandType);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int__ToArray__, v5);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int___ctor__, v6);
    sub_1B4CF90(&System_Collections_Generic_List_int__TypeInfo, v7);
    sub_1B4CF90(&StringLiteral_19141/*"fixQuickCardId"*/, v8);
    sub_1B4CF90(&StringLiteral_19138/*"fixBusterCardId"*/, v9);
    sub_1B4CF90(&StringLiteral_19144/*"fixWeakCardId"*/, v10);
    sub_1B4CF90(&StringLiteral_19137/*"fixArtsCardId"*/, v11);
    sub_1B4CF90(&StringLiteral_19142/*"fixStrengthCardId"*/, v12);
    byte_49BAA5F = 1;
  }
  v13 = (System_Collections_Generic_List_int__o *)sub_1B4D1DC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v13,
    (const MethodInfo_3562964 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( commandType == 1 )
  {
    script = this->fields.script;
    v19 = (System_String_o *)StringLiteral_19137/*"fixArtsCardId"*/;
  }
  else
  {
    if ( commandType == 2 )
    {
      script = this->fields.script;
      v18 = &StringLiteral_19138/*"fixBusterCardId"*/;
    }
    else if ( commandType == 3 )
    {
      script = this->fields.script;
      v18 = &StringLiteral_19141/*"fixQuickCardId"*/;
    }
    else
    {
      if ( (commandType & 0xFFFFFFFE) != 10 )
        goto LABEL_23;
      IntValue = EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_19144/*"fixWeakCardId"*/, -1, v16);
      if ( (_DWORD)IntValue != -1 )
      {
        if ( !v13 )
          goto LABEL_24;
        items = v13->fields._items;
        v21 = Method_System_Collections_Generic_List_int__Add__;
        ++v13->fields._version;
        if ( !items )
          goto LABEL_24;
        size = v13->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v13,
            IntValue,
            *(const MethodInfo_35631B8 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
        }
        else
        {
          v13->fields._size = size + 1;
          items->m_Items[size + 1] = IntValue;
        }
      }
      script = this->fields.script;
      v18 = &StringLiteral_19142/*"fixStrengthCardId"*/;
    }
    v19 = (System_String_o *)*v18;
  }
  IntValue = EntityScriptUtil__GetIntValue(script, v19, -1, v16);
  if ( (_DWORD)IntValue == -1 )
  {
LABEL_23:
    if ( v13 )
      return System_Collections_Generic_List_int___ToArray(
               v13,
               (const MethodInfo_3564C70 *)Method_System_Collections_Generic_List_int__ToArray__);
LABEL_24:
    sub_1B4D1EC(IntValue, v15);
  }
  if ( !v13 )
    goto LABEL_24;
  v23 = v13->fields._items;
  v24 = Method_System_Collections_Generic_List_int__Add__;
  ++v13->fields._version;
  if ( !v23 )
    goto LABEL_24;
  v25 = v13->fields._size;
  if ( (unsigned int)v25 >= v23->max_length )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v13,
      IntValue,
      *(const MethodInfo_35631B8 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
  }
  else
  {
    v13->fields._size = v25 + 1;
    v23->m_Items[v25 + 1] = IntValue;
  }
  return System_Collections_Generic_List_int___ToArray(
           v13,
           (const MethodInfo_3564C70 *)Method_System_Collections_Generic_List_int__ToArray__);
}


int32_t __fastcall AiActEntity__GetNoTargetNoActionType(AiActEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49BAA5D & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_21816/*"noTargetNoActionType"*/, method);
    byte_49BAA5D = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_21816/*"noTargetNoActionType"*/, 0, v2);
}


bool __fastcall AiActEntity__IsIncludeDeathSvt(AiActEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_49BAA5B & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_20327/*"includeDeathSvt"*/, method);
    byte_49BAA5B = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_20327/*"includeDeathSvt"*/, v2);
}


bool __fastcall AiActEntity__IsNoCriticalOnAttack(AiActEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49BAA5E & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_21807/*"noCriticalOnAttack"*/, method);
    byte_49BAA5E = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_21807/*"noCriticalOnAttack"*/, 0, v2) == 1;
}


bool __fastcall AiActEntity__TryGetMultiIndividuality(
        AiActEntity_o *this,
        System_Int32_array_array **resValues,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_49BAA5C & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_7435/*"Individuality"*/, resValues);
    byte_49BAA5C = 1;
  }
  return EntityScriptUtil__TryGet2DimensionalIntArray(
           this->fields.script,
           (System_String_o *)StringLiteral_7435/*"Individuality"*/,
           resValues,
           v3);
}


int32_t __fastcall AiActEntity__getActTarget(AiActEntity_o *this, const MethodInfo *method)
{
  return this->fields.target;
}


int32_t __fastcall AiActEntity__getActType(AiActEntity_o *this, const MethodInfo *method)
{
  return this->fields.type;
}


bool __fastcall AiActEntity__isThinkEnd(AiActEntity_o *this, const MethodInfo *method)
{
  return AiAct__isThinkEnd(this->fields.type, 0LL);
}