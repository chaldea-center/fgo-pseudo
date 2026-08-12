void AiActEntity___ctor(AiActEntity_o *this, const MethodInfo *method)
{
  if ( (byte_59703BF & 1) == 0 )
  {
    sub_2213A60(&Method_DataEntityBase_int___ctor__);
    byte_59703BF = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3F0E518 *)Method_DataEntityBase_int___ctor__);
}


int32_t AiActEntity__CreatePrimaryKey(AiActEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


int32_t AiActEntity__GetBattleScriptId(AiActEntity_o *this, const MethodInfo *method)
{
  if ( (byte_59703B3 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_17815/*"battleScriptId"*/);
    byte_59703B3 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_17815/*"battleScriptId"*/, -1, 0);
}


System_Int32_array *AiActEntity__GetFixCommandCardIds(
        AiActEntity_o *this,
        int32_t commandType,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v5; // x19
  _BOOL8 IntValueAndCompare; // x0
  __int64 v7; // x1
  int32_t version; // w10
  struct System_Int32_array *items; // x8
  struct System_Int32_array *v10; // x8
  _QWORD *v11; // x9
  __int64 size; // x10
  _QWORD *v13; // x9
  __int64 v14; // x10
  int32_t item; // [xsp+Ch] [xbp-44h] BYREF
  int32_t value[2]; // [xsp+10h] [xbp-40h] BYREF
  __int64 v18; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_59703B2 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    sub_2213A60(&StringLiteral_20375/*"fixQuickCardId"*/);
    sub_2213A60(&StringLiteral_20372/*"fixBusterCardId"*/);
    sub_2213A60(&StringLiteral_20378/*"fixWeakCardId"*/);
    sub_2213A60(&StringLiteral_20371/*"fixArtsCardId"*/);
    sub_2213A60(&StringLiteral_20376/*"fixStrengthCardId"*/);
    byte_59703B2 = 1;
  }
  *(_QWORD *)value = 0;
  v18 = 0;
  item = 0;
  v5 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
  switch ( commandType )
  {
    case 1:
      IntValueAndCompare = EntityScriptUtil__GetIntValueAndCompare(
                             this->fields.script,
                             (System_String_o *)StringLiteral_20371/*"fixArtsCardId"*/,
                             (int32_t *)&v18 + 1,
                             -1,
                             0);
      if ( IntValueAndCompare )
      {
        if ( !v5 )
          goto LABEL_29;
        version = v5->fields._version;
        items = v5->fields._items;
        v7 = HIDWORD(v18);
        goto LABEL_25;
      }
LABEL_28:
      if ( v5 )
        return System_Collections_Generic_List_int___ToArray(
                 v5,
                 (const MethodInfo_4468CF0 *)Method_System_Collections_Generic_List_int__ToArray__);
LABEL_29:
      sub_2213CDC(IntValueAndCompare, v7);
    case 2:
      IntValueAndCompare = EntityScriptUtil__GetIntValueAndCompare(
                             this->fields.script,
                             (System_String_o *)StringLiteral_20372/*"fixBusterCardId"*/,
                             (int32_t *)&v18,
                             -1,
                             0);
      if ( IntValueAndCompare )
      {
        if ( !v5 )
          goto LABEL_29;
        version = v5->fields._version;
        items = v5->fields._items;
        v7 = (unsigned int)v18;
        goto LABEL_25;
      }
      goto LABEL_28;
    case 3:
      IntValueAndCompare = EntityScriptUtil__GetIntValueAndCompare(
                             this->fields.script,
                             (System_String_o *)StringLiteral_20375/*"fixQuickCardId"*/,
                             &value[1],
                             -1,
                             0);
      if ( IntValueAndCompare )
      {
        if ( !v5 )
          goto LABEL_29;
        version = v5->fields._version;
        items = v5->fields._items;
        v7 = (unsigned int)value[1];
        goto LABEL_25;
      }
      goto LABEL_28;
  }
  if ( (commandType & 0xFFFFFFFE) != 0xA )
    goto LABEL_28;
  IntValueAndCompare = EntityScriptUtil__GetIntValueAndCompare(
                         this->fields.script,
                         (System_String_o *)StringLiteral_20378/*"fixWeakCardId"*/,
                         value,
                         -1,
                         0);
  if ( IntValueAndCompare )
  {
    if ( !v5 )
      goto LABEL_29;
    v10 = v5->fields._items;
    v7 = (unsigned int)value[0];
    v11 = Method_System_Collections_Generic_List_int__Add__;
    ++v5->fields._version;
    if ( !v10 )
      goto LABEL_29;
    size = v5->fields._size;
    if ( (unsigned int)size >= LODWORD(v10->max_length) )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v5,
        v7,
        *(const MethodInfo_4467270 **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
    }
    else
    {
      v5->fields._size = size + 1;
      v10->m_Items[size] = v7;
    }
  }
  IntValueAndCompare = EntityScriptUtil__GetIntValueAndCompare(
                         this->fields.script,
                         (System_String_o *)StringLiteral_20376/*"fixStrengthCardId"*/,
                         &item,
                         -1,
                         0);
  if ( !IntValueAndCompare )
    goto LABEL_28;
  if ( !v5 )
    goto LABEL_29;
  version = v5->fields._version;
  items = v5->fields._items;
  v7 = (unsigned int)item;
LABEL_25:
  v13 = Method_System_Collections_Generic_List_int__Add__;
  v5->fields._version = version + 1;
  if ( !items )
    goto LABEL_29;
  v14 = v5->fields._size;
  if ( (unsigned int)v14 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v5,
      v7,
      *(const MethodInfo_4467270 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
  }
  else
  {
    v5->fields._size = v14 + 1;
    items->m_Items[v14] = v7;
  }
  return System_Collections_Generic_List_int___ToArray(
           v5,
           (const MethodInfo_4468CF0 *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_Int32_array *AiActEntity__GetGimmickAnimTypes(AiActEntity_o *this, const MethodInfo *method)
{
  if ( (byte_59703B8 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_20798/*"gimmickAnimTypes"*/);
    byte_59703B8 = 1;
  }
  return EntityScriptUtil__GetIntArray(this->fields.script, (System_String_o *)StringLiteral_20798/*"gimmickAnimTypes"*/, 0, 0);
}


bool AiActEntity__GetGimmickFixedReelOrder(AiActEntity_o *this, const MethodInfo *method)
{
  if ( (byte_59703BE & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_20799/*"gimmickFixedReelOrder"*/);
    byte_59703BE = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_20799/*"gimmickFixedReelOrder"*/, 0, 0) == 1;
}


System_String_o *AiActEntity__GetGimmickObjName(AiActEntity_o *this, const MethodInfo *method)
{
  System_String_o *result; // x0

  if ( (byte_59703BD & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_20801/*"gimmickObjName"*/);
    sub_2213A60(&StringLiteral_20796/*"gimmick"*/);
    byte_59703BD = 1;
  }
  result = EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_20801/*"gimmickObjName"*/, 0, 0);
  if ( !result )
    return (System_String_o *)StringLiteral_20796/*"gimmick"*/;
  return result;
}


System_Int32_array *AiActEntity__GetGimmickReelIcons(AiActEntity_o *this, const MethodInfo *method)
{
  if ( (byte_59703BC & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_20802/*"gimmickReelIcons"*/);
    byte_59703BC = 1;
  }
  return EntityScriptUtil__GetIntArray(this->fields.script, (System_String_o *)StringLiteral_20802/*"gimmickReelIcons"*/, 0, 0);
}


System_Object_array *AiActEntity__GetGimmickResultVoices(AiActEntity_o *this, const MethodInfo *method)
{
  AiActEntity___c_c *v3; // x0
  System_Collections_Generic_Dictionary_string__object__o *script; // x19
  struct AiActEntity___c_StaticFields *static_fields; // x8
  System_Func_object__object__o *_9__22_0; // x21
  System_String_o *v7; // x20
  Il2CppObject *v8; // x22
  struct AiActEntity___c_StaticFields *v9; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7

  if ( (byte_59703BA & 1) == 0 )
  {
    sub_2213A60(&Method_EntityScriptUtil_GetScriptValue_List_object___object_____);
    sub_2213A60(&System_Func_List_object___object____TypeInfo);
    sub_2213A60(&Method_AiActEntity___c__GetGimmickResultVoices_b__22_0__);
    sub_2213A60(&AiActEntity___c_TypeInfo);
    sub_2213A60(&StringLiteral_20803/*"gimmickResultVoices"*/);
    byte_59703BA = 1;
  }
  v3 = AiActEntity___c_TypeInfo;
  script = this->fields.script;
  if ( !*(&AiActEntity___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AiActEntity___c_TypeInfo, method);
    v3 = AiActEntity___c_TypeInfo;
  }
  static_fields = v3->static_fields;
  _9__22_0 = (System_Func_object__object__o *)static_fields->__9__22_0;
  v7 = (System_String_o *)StringLiteral_20803/*"gimmickResultVoices"*/;
  if ( !_9__22_0 )
  {
    if ( !*(&v3->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v3, method);
      static_fields = AiActEntity___c_TypeInfo->static_fields;
    }
    v8 = (Il2CppObject *)static_fields->__9;
    _9__22_0 = (System_Func_object__object__o *)sub_2213CCC(System_Func_List_object___object____TypeInfo);
    System_Func_object__object____ctor(_9__22_0, v8, Method_AiActEntity___c__GetGimmickResultVoices_b__22_0__, 0);
    v9 = AiActEntity___c_TypeInfo->static_fields;
    v9->__9__22_0 = (struct System_Func_List_object___object____o *)_9__22_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v9->__9__22_0, (int32_t)_9__22_0, v10, v11, v12, v13, v14, v15);
  }
  return (System_Object_array *)EntityScriptUtil__GetScriptValue_object__object_(
                                  script,
                                  v7,
                                  (System_Func_TSource__TDestination__o *)_9__22_0,
                                  0,
                                  (const MethodInfo_3861168 *)Method_EntityScriptUtil_GetScriptValue_List_object___object_____);
}


System_Int32_array *AiActEntity__GetGimmickSkillIds(AiActEntity_o *this, const MethodInfo *method)
{
  if ( (byte_59703B6 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_20804/*"gimmickSkillIds"*/);
    byte_59703B6 = 1;
  }
  return EntityScriptUtil__GetIntArray(this->fields.script, (System_String_o *)StringLiteral_20804/*"gimmickSkillIds"*/, 0, 0);
}


System_Int32_array *AiActEntity__GetGimmickSkillRates(AiActEntity_o *this, const MethodInfo *method)
{
  if ( (byte_59703B7 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_20805/*"gimmickSkillRates"*/);
    byte_59703B7 = 1;
  }
  return EntityScriptUtil__GetIntArray(this->fields.script, (System_String_o *)StringLiteral_20805/*"gimmickSkillRates"*/, 0, 0);
}


System_String_array *AiActEntity__GetGimmickStartVoices(AiActEntity_o *this, const MethodInfo *method)
{
  if ( (byte_59703B9 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_20806/*"gimmickStartVoices"*/);
    byte_59703B9 = 1;
  }
  return EntityScriptUtil__GetStringArray(this->fields.script, (System_String_o *)StringLiteral_20806/*"gimmickStartVoices"*/, 0, 0);
}


int32_t AiActEntity__GetGimmickSvtId(AiActEntity_o *this, const MethodInfo *method)
{
  if ( (byte_59703BB & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_20807/*"gimmickSvtId"*/);
    byte_59703BB = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_20807/*"gimmickSvtId"*/, -1, 0);
}


int32_t AiActEntity__GetNoTargetNoActionType(AiActEntity_o *this, const MethodInfo *method)
{
  if ( (byte_59703B0 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_23374/*"noTargetNoActionType"*/);
    byte_59703B0 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_23374/*"noTargetNoActionType"*/, 0, 0);
}


bool AiActEntity__IsBattleScriptEachLoad(AiActEntity_o *this, const MethodInfo *method)
{
  if ( (byte_59703B4 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_19553/*"eachLoadOnPlayOrder"*/);
    byte_59703B4 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_19553/*"eachLoadOnPlayOrder"*/, 0, 0) == 1;
}


bool AiActEntity__IsEnableTarget(AiActEntity_o *this, bool isCheckHate, const MethodInfo *method)
{
  int32_t IntValue; // w0

  if ( (byte_59703B5 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_19883/*"enableTarget"*/);
    byte_59703B5 = 1;
  }
  IntValue = EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_19883/*"enableTarget"*/, -1, 0);
  return IntValue && (IntValue > 0 || isCheckHate);
}


bool AiActEntity__IsIncludeDeathSvt(AiActEntity_o *this, const MethodInfo *method)
{
  if ( (byte_59703AE & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_21746/*"includeDeathSvt"*/);
    byte_59703AE = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_21746/*"includeDeathSvt"*/, 0);
}


bool AiActEntity__IsNoCriticalOnAttack(AiActEntity_o *this, const MethodInfo *method)
{
  if ( (byte_59703B1 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_23365/*"noCriticalOnAttack"*/);
    byte_59703B1 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_23365/*"noCriticalOnAttack"*/, 0, 0) == 1;
}


bool AiActEntity__TryGetMultiIndividuality(
        AiActEntity_o *this,
        System_Int32_array_array **resValues,
        const MethodInfo *method)
{
  if ( (byte_59703AF & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_7955/*"Individuality"*/);
    byte_59703AF = 1;
  }
  return EntityScriptUtil__TryGet2DimensionalIntArray(
           this->fields.script,
           (System_String_o *)StringLiteral_7955/*"Individuality"*/,
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


void AiActEntity___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_59703C0 & 1) == 0 )
  {
    sub_2213A60(&AiActEntity___c_TypeInfo);
    byte_59703C0 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(AiActEntity___c_TypeInfo);
  System_Object___ctor(v1, 0);
  AiActEntity___c_TypeInfo->static_fields->__9 = (struct AiActEntity___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)AiActEntity___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void AiActEntity___c___ctor(AiActEntity___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


System_Object_array *AiActEntity___c___GetGimmickResultVoices_b__22_0(
        AiActEntity___c_o *this,
        System_Collections_Generic_List_object__o *list,
        const MethodInfo *method)
{
  if ( (byte_59703C1 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_object__ToArray__);
    byte_59703C1 = 1;
  }
  if ( list )
    return System_Collections_Generic_List_object___ToArray(
             list,
             (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_object__ToArray__);
  else
    return 0;
}