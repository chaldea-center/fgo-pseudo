void AiActEntity___ctor(AiActEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4E7724A & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataEntityBase_int___ctor__);
    byte_4E7724A = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3533444 *)Method_DataEntityBase_int___ctor__);
}


int32_t AiActEntity__CreatePrimaryKey(AiActEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


int32_t AiActEntity__GetBattleScriptId(AiActEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4E77247 & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_17335/*"battleScriptId"*/);
    byte_4E77247 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_17335/*"battleScriptId"*/, -1, 0);
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

  if ( (byte_4E77246 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Collections_Generic_List_int__Add__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1D0F0B4(&System_Collections_Generic_List_int__TypeInfo);
    sub_1D0F0B4(&StringLiteral_19815/*"fixQuickCardId"*/);
    sub_1D0F0B4(&StringLiteral_19812/*"fixBusterCardId"*/);
    sub_1D0F0B4(&StringLiteral_19818/*"fixWeakCardId"*/);
    sub_1D0F0B4(&StringLiteral_19811/*"fixArtsCardId"*/);
    sub_1D0F0B4(&StringLiteral_19816/*"fixStrengthCardId"*/);
    byte_4E77246 = 1;
  }
  *(_QWORD *)value = 0;
  *(_QWORD *)v17 = 0;
  item = 0;
  v5 = (System_Collections_Generic_List_int__o *)sub_1D0F300(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_393EB98 *)Method_System_Collections_Generic_List_int___ctor__);
  switch ( commandType )
  {
    case 1:
      IntValueAndCompare = EntityScriptUtil__GetIntValueAndCompare(
                             this->fields.script,
                             (System_String_o *)StringLiteral_19811/*"fixArtsCardId"*/,
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
                             (System_String_o *)StringLiteral_19812/*"fixBusterCardId"*/,
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
                 (const MethodInfo_3940EA4 *)Method_System_Collections_Generic_List_int__ToArray__);
LABEL_29:
      sub_1D0F30C(IntValueAndCompare, v7);
    case 3:
      IntValueAndCompare = EntityScriptUtil__GetIntValueAndCompare(
                             this->fields.script,
                             (System_String_o *)StringLiteral_19815/*"fixQuickCardId"*/,
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
                         (System_String_o *)StringLiteral_19818/*"fixWeakCardId"*/,
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
        *(const MethodInfo_393F3EC **)(*(_QWORD *)(v9[4] + 192LL) + 112LL));
    }
    else
    {
      v5->fields._size = size + 1;
      items->m_Items[size] = v7;
    }
  }
  IntValueAndCompare = EntityScriptUtil__GetIntValueAndCompare(
                         this->fields.script,
                         (System_String_o *)StringLiteral_19816/*"fixStrengthCardId"*/,
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
      *(const MethodInfo_393F3EC **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
  }
  else
  {
    v5->fields._size = v13 + 1;
    v11->m_Items[v13] = v7;
  }
  return System_Collections_Generic_List_int___ToArray(
           v5,
           (const MethodInfo_3940EA4 *)Method_System_Collections_Generic_List_int__ToArray__);
}


int32_t AiActEntity__GetNoTargetNoActionType(AiActEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4E77244 & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_22686/*"noTargetNoActionType"*/);
    byte_4E77244 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_22686/*"noTargetNoActionType"*/, 0, 0);
}


bool AiActEntity__IsBattleScriptEachLoad(AiActEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4E77248 & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_19004/*"eachLoadOnPlayOrder"*/);
    byte_4E77248 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_19004/*"eachLoadOnPlayOrder"*/, 0, 0) == 1;
}


bool AiActEntity__IsEnableTarget(AiActEntity_o *this, bool isCheckHate, const MethodInfo *method)
{
  int32_t IntValue; // w0

  if ( (byte_4E77249 & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_19328/*"enableTarget"*/);
    byte_4E77249 = 1;
  }
  IntValue = EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_19328/*"enableTarget"*/, -1, 0);
  if ( IntValue )
    LOBYTE(IntValue) = IntValue > 0 || isCheckHate;
  return IntValue;
}


bool AiActEntity__IsIncludeDeathSvt(AiActEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4E77242 & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_21138/*"includeDeathSvt"*/);
    byte_4E77242 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_21138/*"includeDeathSvt"*/, 0);
}


bool AiActEntity__IsNoCriticalOnAttack(AiActEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4E77245 & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_22677/*"noCriticalOnAttack"*/);
    byte_4E77245 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_22677/*"noCriticalOnAttack"*/, 0, 0) == 1;
}


bool AiActEntity__TryGetMultiIndividuality(
        AiActEntity_o *this,
        System_Int32_array_array **resValues,
        const MethodInfo *method)
{
  if ( (byte_4E77243 & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_7721/*"Individuality"*/);
    byte_4E77243 = 1;
  }
  return EntityScriptUtil__TryGet2DimensionalIntArray(
           this->fields.script,
           (System_String_o *)StringLiteral_7721/*"Individuality"*/,
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