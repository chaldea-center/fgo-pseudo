void QuestExtensionEntity___ctor(QuestExtensionEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5938CFE & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_int___ctor__);
    byte_5938CFE = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3EDAD70 *)Method_DataEntityBase_int___ctor__);
}


int32_t QuestExtensionEntity__CreatePrimaryKey(QuestExtensionEntity_o *this, const MethodInfo *method)
{
  return this->fields.questId;
}


bool QuestExtensionEntity__ExistsExplanationDialog(QuestExtensionEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5938CFB & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_22094/*"jobExplanationDialog"*/);
    byte_5938CFB = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_22094/*"jobExplanationDialog"*/, 0);
}


int32_t QuestExtensionEntity__GetDiscountItemId(QuestExtensionEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5938CF6 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_19446/*"discountItem"*/);
    byte_5938CF6 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_19446/*"discountItem"*/, 0, 0);
}


System_String_o *QuestExtensionEntity__GetGiftSharedImageName(QuestExtensionEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5938CF9 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_7403/*"GiftSharedImageName"*/);
    byte_5938CF9 = 1;
  }
  return EntityScriptUtil__GetStringValue(
           this->fields.script,
           (System_String_o *)StringLiteral_7403/*"GiftSharedImageName"*/,
           **(System_String_o ***)(qword_594C0B8 + 184),
           0);
}


System_Int32_array *QuestExtensionEntity__GetJobDialogItemIds(QuestExtensionEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5938CFC & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_22092/*"jobDialogItemIds"*/);
    byte_5938CFC = 1;
  }
  return EntityScriptUtil__GetIntArray(this->fields.script, (System_String_o *)StringLiteral_22092/*"jobDialogItemIds"*/, 0, 0);
}


System_String_o *QuestExtensionEntity__GetJobDialogQuestLevel(QuestExtensionEntity_o *this, const MethodInfo *method)
{
  QuestExtensionEntity___c_c *v3; // x0
  int v4; // w8
  System_Collections_Generic_Dictionary_string__object__o *script; // x19
  struct QuestExtensionEntity___c_StaticFields *static_fields; // x8
  System_Func_object__object__o *_9__13_0; // x21
  System_String_o *v8; // x20
  Il2CppObject *v9; // x22
  struct QuestExtensionEntity___c_StaticFields *v10; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  System_String_o *result; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x8
  __int64 v21; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_5938CFD & 1) == 0 )
  {
    sub_21FFC50(&Method_EntityScriptUtil_GetScriptValue_object__object___);
    sub_21FFC50(&System_Func_object__object__TypeInfo);
    sub_21FFC50(&Method_QuestExtensionEntity___c__GetJobDialogQuestLevel_b__13_0__);
    sub_21FFC50(&QuestExtensionEntity___c_TypeInfo);
    sub_21FFC50(&StringLiteral_22093/*"jobDialogLv"*/);
    byte_5938CFD = 1;
  }
  v3 = QuestExtensionEntity___c_TypeInfo;
  v4 = *(&QuestExtensionEntity___c_TypeInfo->_2.cctor_finished + 1);
  script = this->fields.script;
  v21 = 0;
  if ( !v4 )
  {
    j_il2cpp_runtime_class_init_0(QuestExtensionEntity___c_TypeInfo, method);
    v3 = QuestExtensionEntity___c_TypeInfo;
  }
  static_fields = v3->static_fields;
  _9__13_0 = static_fields->__9__13_0;
  v8 = (System_String_o *)StringLiteral_22093/*"jobDialogLv"*/;
  if ( !_9__13_0 )
  {
    if ( !*(&v3->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v3, method);
      static_fields = QuestExtensionEntity___c_TypeInfo->static_fields;
    }
    v9 = (Il2CppObject *)static_fields->__9;
    _9__13_0 = (System_Func_object__object__o *)sub_21FFEBC(System_Func_object__object__TypeInfo);
    System_Func_object__object____ctor(
      _9__13_0,
      v9,
      Method_QuestExtensionEntity___c__GetJobDialogQuestLevel_b__13_0__,
      0);
    v10 = QuestExtensionEntity___c_TypeInfo->static_fields;
    v10->__9__13_0 = _9__13_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v10->__9__13_0, (int32_t)_9__13_0, v11, v12, v13, v14, v15, v16);
  }
  result = (System_String_o *)EntityScriptUtil__GetScriptValue_object__object_(
                                script,
                                v8,
                                (System_Func_TSource__TDestination__o *)_9__13_0,
                                0,
                                (const MethodInfo_382DCA0 *)Method_EntityScriptUtil_GetScriptValue_object__object___);
  if ( !result )
  {
    v20 = qword_594C0B8;
    return **(System_String_o ***)(v20 + 184);
  }
  if ( result->klass == (System_String_c *)qword_594C090 )
  {
    v21 = *(_QWORD *)j_il2cpp_object_unbox_0(result, v18, v19);
    return System_Int64__ToString((int64_t)&v21, 0);
  }
  v20 = qword_594C0B8;
  if ( result->klass != (System_String_c *)qword_594C0B8 )
    return **(System_String_o ***)(v20 + 184);
  return result;
}


int32_t QuestExtensionEntity__GetJobId(QuestExtensionEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5938CFA & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_22095/*"jobId"*/);
    byte_5938CFA = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_22095/*"jobId"*/, 0, 0);
}


System_String_o *QuestExtensionEntity__GetQuestBoardFrameName(QuestExtensionEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5938CF5 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_11380/*"QuestBoardFrame"*/);
    byte_5938CF5 = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_11380/*"QuestBoardFrame"*/, 0, 0);
}


System_String_o *QuestExtensionEntity__GetQuestBoardTitleColor(QuestExtensionEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5938CF8 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_11383/*"QuestBoardTitleColor"*/);
    byte_5938CF8 = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_11383/*"QuestBoardTitleColor"*/, 0, 0);
}


System_String_o *QuestExtensionEntity__GetQuestStartEffectDispName(
        QuestExtensionEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_5938CF2 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_11391/*"QuestStartEffectDispName"*/);
    byte_5938CF2 = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_11391/*"QuestStartEffectDispName"*/, 0, 0);
}


bool QuestExtensionEntity__IsActiveClearCnt(QuestExtensionEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5938CF3 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_8293/*"IsActiveClearCnt"*/);
    byte_5938CF3 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_8293/*"IsActiveClearCnt"*/, 0);
}


bool QuestExtensionEntity__IsQuestBoardFrameChange(QuestExtensionEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5938CF4 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_11380/*"QuestBoardFrame"*/);
    byte_5938CF4 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_11380/*"QuestBoardFrame"*/, 0);
}


bool QuestExtensionEntity__IsQuestBoardTitleColorChange(QuestExtensionEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5938CF7 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_11383/*"QuestBoardTitleColor"*/);
    byte_5938CF7 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_11383/*"QuestBoardTitleColor"*/, 0);
}


bool QuestExtensionEntity__IsSvtCoinQuest(QuestExtensionEntity_o *this, const MethodInfo *method)
{
  return this->fields.subType == 1;
}


void QuestExtensionEntity___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5938CFF & 1) == 0 )
  {
    sub_21FFC50(&QuestExtensionEntity___c_TypeInfo);
    byte_5938CFF = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(QuestExtensionEntity___c_TypeInfo);
  System_Object___ctor(v1, 0);
  QuestExtensionEntity___c_TypeInfo->static_fields->__9 = (struct QuestExtensionEntity___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)QuestExtensionEntity___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void QuestExtensionEntity___c___ctor(QuestExtensionEntity___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


Il2CppObject *QuestExtensionEntity___c___GetJobDialogQuestLevel_b__13_0(
        QuestExtensionEntity___c_o *this,
        Il2CppObject *x,
        const MethodInfo *method)
{
  return x;
}