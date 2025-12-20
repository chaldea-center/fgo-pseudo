void AiActEntity___ctor(AiActEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D2C3EC & 1) == 0 )
  {
    sub_1C94098(&Method_DataEntityBase_int___ctor__);
    byte_4D2C3EC = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3458FDC *)Method_DataEntityBase_int___ctor__);
}


int32_t AiActEntity__CreatePrimaryKey(AiActEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


int32_t AiActEntity__GetBattleScriptId(AiActEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D2C3E9 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_17164/*"battleScriptId"*/);
    byte_4D2C3E9 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_17164/*"battleScriptId"*/, -1, 0);
}


System_Int32_array *AiActEntity__GetFixCommandCardIds(
        AiActEntity_o *this,
        int32_t commandType,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v5; // x19
  _BOOL8 IntValueAndCompare; // x0
  __int64 v7; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v9; // x9
  __int64 size; // x10
  struct System_Int32_array *v11; // x8
  _QWORD *v12; // x9
  __int64 v13; // x10
  int32_t item; // [xsp+Ch] [xbp-44h] BYREF
  int32_t value[2]; // [xsp+10h] [xbp-40h] BYREF
  int32_t v17[2]; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4D2C3E8 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C94098(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C94098(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C94098(&StringLiteral_19624/*"fixQuickCardId"*/);
    sub_1C94098(&StringLiteral_19621/*"fixBusterCardId"*/);
    sub_1C94098(&StringLiteral_19627/*"fixWeakCardId"*/);
    sub_1C94098(&StringLiteral_19620/*"fixArtsCardId"*/);
    sub_1C94098(&StringLiteral_19625/*"fixStrengthCardId"*/);
    byte_4D2C3E8 = 1;
  }
  *(_QWORD *)value = 0;
  *(_QWORD *)v17 = 0;
  item = 0;
  v5 = (System_Collections_Generic_List_int__o *)sub_1C942E4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_384D5BC *)Method_System_Collections_Generic_List_int___ctor__);
  switch ( commandType )
  {
    case 1:
      IntValueAndCompare = EntityScriptUtil__GetIntValueAndCompare(
                             this->fields.script,
                             (System_String_o *)StringLiteral_19620/*"fixArtsCardId"*/,
                             &v17[1],
                             -1,
                             0);
      if ( IntValueAndCompare )
      {
        if ( !v5 )
          goto LABEL_29;
        v7 = (unsigned int)v17[1];
        goto LABEL_25;
      }
      goto LABEL_28;
    case 2:
      IntValueAndCompare = EntityScriptUtil__GetIntValueAndCompare(
                             this->fields.script,
                             (System_String_o *)StringLiteral_19621/*"fixBusterCardId"*/,
                             v17,
                             -1,
                             0);
      if ( IntValueAndCompare )
      {
        if ( !v5 )
          goto LABEL_29;
        v7 = (unsigned int)v17[0];
        goto LABEL_25;
      }
LABEL_28:
      if ( v5 )
        return System_Collections_Generic_List_int___ToArray(
                 v5,
                 (const MethodInfo_384F8C8 *)Method_System_Collections_Generic_List_int__ToArray__);
LABEL_29:
      sub_1C942F0(IntValueAndCompare, v7);
    case 3:
      IntValueAndCompare = EntityScriptUtil__GetIntValueAndCompare(
                             this->fields.script,
                             (System_String_o *)StringLiteral_19624/*"fixQuickCardId"*/,
                             &value[1],
                             -1,
                             0);
      if ( IntValueAndCompare )
      {
        if ( !v5 )
          goto LABEL_29;
        v7 = (unsigned int)value[1];
        goto LABEL_25;
      }
      goto LABEL_28;
  }
  if ( (commandType & 0xFFFFFFFE) != 0xA )
    goto LABEL_28;
  IntValueAndCompare = EntityScriptUtil__GetIntValueAndCompare(
                         this->fields.script,
                         (System_String_o *)StringLiteral_19627/*"fixWeakCardId"*/,
                         value,
                         -1,
                         0);
  if ( IntValueAndCompare )
  {
    if ( !v5 )
      goto LABEL_29;
    v7 = (unsigned int)value[0];
    items = v5->fields._items;
    v9 = Method_System_Collections_Generic_List_int__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_29;
    size = v5->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v5,
        v7,
        *(const MethodInfo_384DE10 **)(*(_QWORD *)(v9[4] + 192LL) + 112LL));
    }
    else
    {
      v5->fields._size = size + 1;
      items->m_Items[size] = v7;
    }
  }
  IntValueAndCompare = EntityScriptUtil__GetIntValueAndCompare(
                         this->fields.script,
                         (System_String_o *)StringLiteral_19625/*"fixStrengthCardId"*/,
                         &item,
                         -1,
                         0);
  if ( !IntValueAndCompare )
    goto LABEL_28;
  if ( !v5 )
    goto LABEL_29;
  v7 = (unsigned int)item;
LABEL_25:
  v11 = v5->fields._items;
  v12 = Method_System_Collections_Generic_List_int__Add__;
  ++v5->fields._version;
  if ( !v11 )
    goto LABEL_29;
  v13 = v5->fields._size;
  if ( (unsigned int)v13 >= LODWORD(v11->max_length) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v5,
      v7,
      *(const MethodInfo_384DE10 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
  }
  else
  {
    v5->fields._size = v13 + 1;
    v11->m_Items[v13] = v7;
  }
  return System_Collections_Generic_List_int___ToArray(
           v5,
           (const MethodInfo_384F8C8 *)Method_System_Collections_Generic_List_int__ToArray__);
}


int32_t AiActEntity__GetNoTargetNoActionType(AiActEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D2C3E6 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_22461/*"noTargetNoActionType"*/);
    byte_4D2C3E6 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_22461/*"noTargetNoActionType"*/, 0, 0);
}


bool AiActEntity__IsBattleScriptEachLoad(AiActEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D2C3EA & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_18813/*"eachLoadOnPlayOrder"*/);
    byte_4D2C3EA = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_18813/*"eachLoadOnPlayOrder"*/, 0, 0) == 1;
}


bool AiActEntity__IsEnableTarget(AiActEntity_o *this, bool isCheckHate, const MethodInfo *method)
{
  int32_t IntValue; // w0

  if ( (byte_4D2C3EB & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_19140/*"enableTarget"*/);
    byte_4D2C3EB = 1;
  }
  IntValue = EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_19140/*"enableTarget"*/, -1, 0);
  if ( IntValue )
    LOBYTE(IntValue) = IntValue > 0 || isCheckHate;
  return IntValue;
}


bool AiActEntity__IsIncludeDeathSvt(AiActEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D2C3E4 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_20922/*"includeDeathSvt"*/);
    byte_4D2C3E4 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_20922/*"includeDeathSvt"*/, 0);
}


bool AiActEntity__IsNoCriticalOnAttack(AiActEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D2C3E7 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_22452/*"noCriticalOnAttack"*/);
    byte_4D2C3E7 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_22452/*"noCriticalOnAttack"*/, 0, 0) == 1;
}


bool AiActEntity__TryGetMultiIndividuality(
        AiActEntity_o *this,
        System_Int32_array_array **resValues,
        const MethodInfo *method)
{
  if ( (byte_4D2C3E5 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_7642/*"Individuality"*/);
    byte_4D2C3E5 = 1;
  }
  return EntityScriptUtil__TryGet2DimensionalIntArray(
           this->fields.script,
           (System_String_o *)StringLiteral_7642/*"Individuality"*/,
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