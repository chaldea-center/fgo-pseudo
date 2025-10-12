void AiActEntity___ctor(AiActEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C3755F & 1) == 0 )
  {
    sub_1C32C20(&Method_DataEntityBase_int___ctor__);
    byte_4C3755F = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3394354 *)Method_DataEntityBase_int___ctor__);
}


int32_t AiActEntity__CreatePrimaryKey(AiActEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


int32_t AiActEntity__GetBattleScriptId(AiActEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C3755D & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_17081/*"battleScriptId"*/);
    byte_4C3755D = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_17081/*"battleScriptId"*/, -1, 0);
}


System_Int32_array *AiActEntity__GetFixCommandCardIds(
        AiActEntity_o *this,
        int32_t commandType,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v5; // x19
  _BOOL8 IntValueAndCompare; // x0
  int32_t v7; // w1
  int32_t v8; // w1
  struct System_Int32_array *items; // x8
  _QWORD *v10; // x9
  __int64 size; // x10
  struct System_Int32_array *v12; // x8
  _QWORD *v13; // x9
  __int64 v14; // x10
  int32_t item; // [xsp+Ch] [xbp-44h] BYREF
  int32_t value[2]; // [xsp+10h] [xbp-40h] BYREF
  int32_t v18[2]; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4C3755C & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C32C20(&StringLiteral_19461/*"fixQuickCardId"*/);
    sub_1C32C20(&StringLiteral_19458/*"fixBusterCardId"*/);
    sub_1C32C20(&StringLiteral_19464/*"fixWeakCardId"*/);
    sub_1C32C20(&StringLiteral_19457/*"fixArtsCardId"*/);
    sub_1C32C20(&StringLiteral_19462/*"fixStrengthCardId"*/);
    byte_4C3755C = 1;
  }
  *(_QWORD *)value = 0;
  *(_QWORD *)v18 = 0;
  item = 0;
  v5 = (System_Collections_Generic_List_int__o *)sub_1C32E6C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_377AF44 *)Method_System_Collections_Generic_List_int___ctor__);
  switch ( commandType )
  {
    case 1:
      IntValueAndCompare = EntityScriptUtil__GetIntValueAndCompare(
                             this->fields.script,
                             (System_String_o *)StringLiteral_19457/*"fixArtsCardId"*/,
                             &v18[1],
                             -1,
                             0);
      if ( IntValueAndCompare )
      {
        if ( !v5 )
          goto LABEL_29;
        v7 = v18[1];
        goto LABEL_25;
      }
      goto LABEL_28;
    case 2:
      IntValueAndCompare = EntityScriptUtil__GetIntValueAndCompare(
                             this->fields.script,
                             (System_String_o *)StringLiteral_19458/*"fixBusterCardId"*/,
                             v18,
                             -1,
                             0);
      if ( IntValueAndCompare )
      {
        if ( !v5 )
          goto LABEL_29;
        v7 = v18[0];
        goto LABEL_25;
      }
LABEL_28:
      if ( v5 )
        return System_Collections_Generic_List_int___ToArray(
                 v5,
                 (const MethodInfo_377D250 *)Method_System_Collections_Generic_List_int__ToArray__);
LABEL_29:
      sub_1C32E7C(IntValueAndCompare);
    case 3:
      IntValueAndCompare = EntityScriptUtil__GetIntValueAndCompare(
                             this->fields.script,
                             (System_String_o *)StringLiteral_19461/*"fixQuickCardId"*/,
                             &value[1],
                             -1,
                             0);
      if ( IntValueAndCompare )
      {
        if ( !v5 )
          goto LABEL_29;
        v7 = value[1];
        goto LABEL_25;
      }
      goto LABEL_28;
  }
  if ( (commandType & 0xFFFFFFFE) != 0xA )
    goto LABEL_28;
  IntValueAndCompare = EntityScriptUtil__GetIntValueAndCompare(
                         this->fields.script,
                         (System_String_o *)StringLiteral_19464/*"fixWeakCardId"*/,
                         value,
                         -1,
                         0);
  if ( IntValueAndCompare )
  {
    if ( !v5 )
      goto LABEL_29;
    v8 = value[0];
    items = v5->fields._items;
    v10 = Method_System_Collections_Generic_List_int__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_29;
    size = v5->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v5,
        v8,
        *(const MethodInfo_377B798 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    }
    else
    {
      v5->fields._size = size + 1;
      items->m_Items[size] = v8;
    }
  }
  IntValueAndCompare = EntityScriptUtil__GetIntValueAndCompare(
                         this->fields.script,
                         (System_String_o *)StringLiteral_19462/*"fixStrengthCardId"*/,
                         &item,
                         -1,
                         0);
  if ( !IntValueAndCompare )
    goto LABEL_28;
  if ( !v5 )
    goto LABEL_29;
  v7 = item;
LABEL_25:
  v12 = v5->fields._items;
  v13 = Method_System_Collections_Generic_List_int__Add__;
  ++v5->fields._version;
  if ( !v12 )
    goto LABEL_29;
  v14 = v5->fields._size;
  if ( (unsigned int)v14 >= LODWORD(v12->max_length) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v5,
      v7,
      *(const MethodInfo_377B798 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
  }
  else
  {
    v5->fields._size = v14 + 1;
    v12->m_Items[v14] = v7;
  }
  return System_Collections_Generic_List_int___ToArray(
           v5,
           (const MethodInfo_377D250 *)Method_System_Collections_Generic_List_int__ToArray__);
}


int32_t AiActEntity__GetNoTargetNoActionType(AiActEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C3755A & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_22249/*"noTargetNoActionType"*/);
    byte_4C3755A = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_22249/*"noTargetNoActionType"*/, 0, 0);
}


bool AiActEntity__IsBattleScriptEachLoad(AiActEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C3755E & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_18696/*"eachLoadOnPlayOrder"*/);
    byte_4C3755E = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_18696/*"eachLoadOnPlayOrder"*/, 0, 0) == 1;
}


bool AiActEntity__IsIncludeDeathSvt(AiActEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C37558 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_20742/*"includeDeathSvt"*/);
    byte_4C37558 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_20742/*"includeDeathSvt"*/, 0);
}


bool AiActEntity__IsNoCriticalOnAttack(AiActEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C3755B & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_22240/*"noCriticalOnAttack"*/);
    byte_4C3755B = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_22240/*"noCriticalOnAttack"*/, 0, 0) == 1;
}


bool AiActEntity__TryGetMultiIndividuality(
        AiActEntity_o *this,
        System_Int32_array_array **resValues,
        const MethodInfo *method)
{
  if ( (byte_4C37559 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_7624/*"Individuality"*/);
    byte_4C37559 = 1;
  }
  return EntityScriptUtil__TryGet2DimensionalIntArray(
           this->fields.script,
           (System_String_o *)StringLiteral_7624/*"Individuality"*/,
           resValues,
           0);
}


int32_t AiActEntity__getActTarget(AiActEntity_o *this, const MethodInfo *method)
{
  return this->fields.target;
}


int32_t AiActEntity__getActType(AiActEntity_o *this, const MethodInfo *method)
{
  return this->fields.type;
}


bool AiActEntity__isThinkEnd(AiActEntity_o *this, const MethodInfo *method)
{
  return AiAct__isThinkEnd(this->fields.type, 0);
}