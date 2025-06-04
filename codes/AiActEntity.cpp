void __fastcall AiActEntity___ctor(AiActEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B01BE7 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataEntityBase_int___ctor__, method);
    byte_4B01BE7 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_32ACB8C *)Method_DataEntityBase_int___ctor__);
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
  _BOOL8 IntValueAndCompare; // x0
  __int64 v15; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  struct System_Int32_array *v19; // x8
  _QWORD *v20; // x9
  __int64 v21; // x10
  int32_t item; // [xsp+Ch] [xbp-44h] BYREF
  int32_t value[2]; // [xsp+10h] [xbp-40h] BYREF
  __int64 v25; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4B01BE6 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_int__Add__, *(_QWORD *)&commandType);
    sub_1BC3008(&Method_System_Collections_Generic_List_int__ToArray__, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_int___ctor__, v6);
    sub_1BC3008(&System_Collections_Generic_List_int__TypeInfo, v7);
    sub_1BC3008(&StringLiteral_19278/*"fixQuickCardId"*/, v8);
    sub_1BC3008(&StringLiteral_19275/*"fixBusterCardId"*/, v9);
    sub_1BC3008(&StringLiteral_19281/*"fixWeakCardId"*/, v10);
    sub_1BC3008(&StringLiteral_19274/*"fixArtsCardId"*/, v11);
    sub_1BC3008(&StringLiteral_19279/*"fixStrengthCardId"*/, v12);
    byte_4B01BE6 = 1;
  }
  *(_QWORD *)value = 0LL;
  v25 = 0LL;
  item = 0;
  v13 = (System_Collections_Generic_List_int__o *)sub_1BC3254(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v13,
    (const MethodInfo_36835C8 *)Method_System_Collections_Generic_List_int___ctor__);
  switch ( commandType )
  {
    case 1:
      IntValueAndCompare = EntityScriptUtil__GetIntValueAndCompare(
                             this->fields.script,
                             (System_String_o *)StringLiteral_19274/*"fixArtsCardId"*/,
                             (int32_t *)&v25 + 1,
                             -1,
                             0LL);
      if ( IntValueAndCompare )
      {
        if ( !v13 )
          goto LABEL_29;
        v15 = HIDWORD(v25);
        goto LABEL_25;
      }
      goto LABEL_28;
    case 2:
      IntValueAndCompare = EntityScriptUtil__GetIntValueAndCompare(
                             this->fields.script,
                             (System_String_o *)StringLiteral_19275/*"fixBusterCardId"*/,
                             (int32_t *)&v25,
                             -1,
                             0LL);
      if ( IntValueAndCompare )
      {
        if ( !v13 )
          goto LABEL_29;
        v15 = (unsigned int)v25;
        goto LABEL_25;
      }
LABEL_28:
      if ( v13 )
        return System_Collections_Generic_List_int___ToArray(
                 v13,
                 (const MethodInfo_36858D4 *)Method_System_Collections_Generic_List_int__ToArray__);
LABEL_29:
      sub_1BC3264(IntValueAndCompare, v15);
    case 3:
      IntValueAndCompare = EntityScriptUtil__GetIntValueAndCompare(
                             this->fields.script,
                             (System_String_o *)StringLiteral_19278/*"fixQuickCardId"*/,
                             &value[1],
                             -1,
                             0LL);
      if ( IntValueAndCompare )
      {
        if ( !v13 )
          goto LABEL_29;
        v15 = (unsigned int)value[1];
        goto LABEL_25;
      }
      goto LABEL_28;
  }
  if ( (commandType & 0xFFFFFFFE) != 10 )
    goto LABEL_28;
  IntValueAndCompare = EntityScriptUtil__GetIntValueAndCompare(
                         this->fields.script,
                         (System_String_o *)StringLiteral_19281/*"fixWeakCardId"*/,
                         value,
                         -1,
                         0LL);
  if ( IntValueAndCompare )
  {
    if ( !v13 )
      goto LABEL_29;
    v15 = (unsigned int)value[0];
    items = v13->fields._items;
    v17 = Method_System_Collections_Generic_List_int__Add__;
    ++v13->fields._version;
    if ( !items )
      goto LABEL_29;
    size = v13->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v13,
        v15,
        *(const MethodInfo_3683E1C **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
    }
    else
    {
      v13->fields._size = size + 1;
      items->m_Items[size + 1] = v15;
    }
  }
  IntValueAndCompare = EntityScriptUtil__GetIntValueAndCompare(
                         this->fields.script,
                         (System_String_o *)StringLiteral_19279/*"fixStrengthCardId"*/,
                         &item,
                         -1,
                         0LL);
  if ( !IntValueAndCompare )
    goto LABEL_28;
  if ( !v13 )
    goto LABEL_29;
  v15 = (unsigned int)item;
LABEL_25:
  v19 = v13->fields._items;
  v20 = Method_System_Collections_Generic_List_int__Add__;
  ++v13->fields._version;
  if ( !v19 )
    goto LABEL_29;
  v21 = v13->fields._size;
  if ( (unsigned int)v21 >= v19->max_length )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v13,
      v15,
      *(const MethodInfo_3683E1C **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
  }
  else
  {
    v13->fields._size = v21 + 1;
    v19->m_Items[v21 + 1] = v15;
  }
  return System_Collections_Generic_List_int___ToArray(
           v13,
           (const MethodInfo_36858D4 *)Method_System_Collections_Generic_List_int__ToArray__);
}


int32_t __fastcall AiActEntity__GetNoTargetNoActionType(AiActEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B01BE4 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_22034/*"noTargetNoActionType"*/, method);
    byte_4B01BE4 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_22034/*"noTargetNoActionType"*/, 0, 0LL);
}


bool __fastcall AiActEntity__IsIncludeDeathSvt(AiActEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B01BE2 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_20542/*"includeDeathSvt"*/, method);
    byte_4B01BE2 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_20542/*"includeDeathSvt"*/, 0LL);
}


bool __fastcall AiActEntity__IsNoCriticalOnAttack(AiActEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B01BE5 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_22025/*"noCriticalOnAttack"*/, method);
    byte_4B01BE5 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_22025/*"noCriticalOnAttack"*/, 0, 0LL) == 1;
}


bool __fastcall AiActEntity__TryGetMultiIndividuality(
        AiActEntity_o *this,
        System_Int32_array_array **resValues,
        const MethodInfo *method)
{
  if ( (byte_4B01BE3 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_7547/*"Individuality"*/, resValues);
    byte_4B01BE3 = 1;
  }
  return EntityScriptUtil__TryGet2DimensionalIntArray(
           this->fields.script,
           (System_String_o *)StringLiteral_7547/*"Individuality"*/,
           resValues,
           0LL);
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