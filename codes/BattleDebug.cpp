void BattleDebug___cctor(const MethodInfo *method)
{
  System_Collections_Generic_Queue_T__o *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D333E2 & 1) == 0 )
  {
    sub_1C93AD4(&BattleDebug_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_Queue_string___ctor__);
    sub_1C93AD4(&System_Collections_Generic_Queue_string__TypeInfo);
    byte_4D333E2 = 1;
  }
  v1 = (System_Collections_Generic_Queue_T__o *)sub_1C93D20(System_Collections_Generic_Queue_string__TypeInfo);
  System_Collections_Generic_Queue_object____ctor(
    v1,
    (const MethodInfo_3A217C4 *)Method_System_Collections_Generic_Queue_string___ctor__);
  BattleDebug_TypeInfo->static_fields->logQueue = (struct System_Collections_Generic_Queue_string__o *)v1;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)BattleDebug_TypeInfo->static_fields, (int32_t)v1, v2, v3, v4, v5, v6, v7);
}


void BattleDebug__CheckNull(System_String_o *errorText, Il2CppObject *obj, const MethodInfo *method)
{
  __int64 v4; // x0
  System_Exception_o *v5; // x20
  __int64 v6; // x0

  if ( !obj )
  {
    v4 = sub_1C93AE8(&System_Exception_TypeInfo);
    v5 = (System_Exception_o *)sub_1C93D20(v4);
    System_Exception___ctor_66171816(v5, errorText, 0);
    v6 = sub_1C93AE8(&Method_BattleDebug_CheckNull__);
    sub_1C93BFC(v5, v6);
  }
}


void BattleDebug__DebugLog(System_String_o *str, const MethodInfo *method)
{
  ;
}


void BattleDebug__ErrorLog(System_String_o *str, const MethodInfo *method)
{
  ;
}


void BattleDebug__Log(System_String_o *str, int32_t tag, const MethodInfo *method)
{
  ;
}


void BattleDebug__Log_46722628(
        System_Collections_Generic_LinkedList_BattleLogicTask__o *taskList,
        int32_t tag,
        const MethodInfo *method)
{
  ;
}


void __noreturn BattleDebug__OutputError(
        System_String_o *errorText,
        System_Exception_o *exception,
        const MethodInfo *method)
{
  System_String_o *v4; // x0
  Il2CppObject *v6; // x21
  Il2CppObject *v7; // x20
  System_String_o *v8; // x0
  System_String_o *v9; // x20
  System_String_o *v10; // x0
  System_String_o *v11; // x19
  __int64 v12; // x0
  System_Exception_o *v13; // x20
  __int64 v14; // x0

  if ( exception )
  {
    v6 = (Il2CppObject *)((__int64 (__fastcall *)(System_Exception_o *, const MethodInfo *, const MethodInfo *))exception->klass->vtable._5_get_Message.methodPtr)(
                           exception,
                           exception->klass->vtable._5_get_Message.method,
                           method);
    v7 = (Il2CppObject *)((__int64 (__fastcall *)(System_Exception_o *, const MethodInfo *))exception->klass->vtable._9_get_StackTrace.methodPtr)(
                           exception,
                           exception->klass->vtable._9_get_StackTrace.method);
    v8 = (System_String_o *)sub_1C93AE8(&StringLiteral_9087/*"Message:\n{0}\nStackTrace:\n{1}\n"*/);
    v4 = System_String__Format_64467032(v8, v6, v7, 0);
  }
  else
  {
    v4 = (System_String_o *)sub_1C93AE8(&StringLiteral_1/*""*/);
  }
  v9 = v4;
  v10 = (System_String_o *)sub_1C93AE8(&StringLiteral_43/*"\n"*/);
  v11 = System_String__Concat_64463988(errorText, v10, v9, 0);
  v12 = sub_1C93AE8(&System_Exception_TypeInfo);
  v13 = (System_Exception_o *)sub_1C93D20(v12);
  System_Exception___ctor_66171816(v13, v11, 0);
  v14 = sub_1C93AE8(&Method_BattleDebug_OutputError__);
  sub_1C93BFC(v13, v14);
}


void BattleDebug__Reset(const MethodInfo *method)
{
  __int64 v1; // x1
  BattleDebug_c *v2; // x0
  System_Collections_Generic_Queue_T__o *logQueue; // x0

  if ( (byte_4D333E0 & 1) == 0 )
  {
    sub_1C93AD4(&BattleDebug_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_Queue_string__Clear__);
    byte_4D333E0 = 1;
  }
  v2 = BattleDebug_TypeInfo;
  if ( !BattleDebug_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDebug_TypeInfo);
    v2 = BattleDebug_TypeInfo;
  }
  logQueue = (System_Collections_Generic_Queue_T__o *)v2->static_fields->logQueue;
  if ( !logQueue )
    sub_1C93D2C(0, v1);
  System_Collections_Generic_Queue_object___Clear(
    logQueue,
    (const MethodInfo_3A21A4C *)Method_System_Collections_Generic_Queue_string__Clear__);
}


void BattleDebug__WarningLog(System_String_o *str, const MethodInfo *method)
{
  ;
}


System_String_array *BattleDebug__getLoglist(
        System_String_o *serchText,
        int32_t tag,
        bool reverseFlg,
        const MethodInfo *method)
{
  __int64 v7; // x20
  System_Collections_Generic_Queue_T__o *logQueue; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  BattleDebug_c *v16; // x0
  System_Object_array *v17; // x21
  System_Predicate_object__o *v18; // x23
  System_Predicate_object__o *v19; // x22
  System_Object_array *All_object; // x0
  System_String_array *v21; // x20

  if ( (byte_4D333E1 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Array_FindAll_string___);
    sub_1C93AD4(&Method_System_Array_Reverse_string___);
    sub_1C93AD4(&BattleDebug_TypeInfo);
    sub_1C93AD4(&System_Predicate_string__TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_Queue_string__ToArray__);
    sub_1C93AD4(&Method_BattleDebug___c__DisplayClass7_0__getLoglist_b__0__);
    sub_1C93AD4(&Method_BattleDebug___c__DisplayClass7_0__getLoglist_b__1__);
    sub_1C93AD4(&BattleDebug___c__DisplayClass7_0_TypeInfo);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D333E1 = 1;
  }
  v7 = sub_1C93D20(BattleDebug___c__DisplayClass7_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_13;
  *(_QWORD *)(v7 + 24) = serchText;
  *(_DWORD *)(v7 + 16) = tag;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v7 + 24), (int32_t)serchText, v10, v11, v12, v13, v14, v15);
  v16 = BattleDebug_TypeInfo;
  if ( !BattleDebug_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDebug_TypeInfo);
    v16 = BattleDebug_TypeInfo;
  }
  logQueue = (System_Collections_Generic_Queue_T__o *)v16->static_fields->logQueue;
  if ( !logQueue )
    goto LABEL_13;
  logQueue = (System_Collections_Generic_Queue_T__o *)System_Collections_Generic_Queue_object___ToArray(
                                                        logQueue,
                                                        (const MethodInfo_3A221C8 *)Method_System_Collections_Generic_Queue_string__ToArray__);
  v17 = (System_Object_array *)logQueue;
  if ( *(_DWORD *)(v7 + 16) )
  {
    v18 = (System_Predicate_object__o *)sub_1C93D20(System_Predicate_string__TypeInfo);
    System_Predicate_object____ctor(
      v18,
      (Il2CppObject *)v7,
      Method_BattleDebug___c__DisplayClass7_0__getLoglist_b__0__,
      0);
    logQueue = (System_Collections_Generic_Queue_T__o *)System_Array__FindAll_object_(
                                                          v17,
                                                          (System_Predicate_T__o *)v18,
                                                          (const MethodInfo_32A9748 *)Method_System_Array_FindAll_string___);
    v17 = (System_Object_array *)logQueue;
  }
  if ( !*(_QWORD *)(v7 + 24) )
LABEL_13:
    sub_1C93D2C(logQueue, v9);
  v19 = (System_Predicate_object__o *)sub_1C93D20(System_Predicate_string__TypeInfo);
  System_Predicate_object____ctor(
    v19,
    (Il2CppObject *)v7,
    Method_BattleDebug___c__DisplayClass7_0__getLoglist_b__1__,
    0);
  All_object = System_Array__FindAll_object_(
                 v17,
                 (System_Predicate_T__o *)v19,
                 (const MethodInfo_32A9748 *)Method_System_Array_FindAll_string___);
  v21 = (System_String_array *)All_object;
  if ( reverseFlg )
    System_Array__Reverse_object_(All_object, (const MethodInfo_3164E58 *)Method_System_Array_Reverse_string___);
  return v21;
}


int32_t BattleDebug__getTag(int32_t param, const MethodInfo *method)
{
  return param;
}


void BattleDebug___c__DisplayClass7_0___ctor(BattleDebug___c__DisplayClass7_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleDebug___c__DisplayClass7_0___getLoglist_b__0(
        BattleDebug___c__DisplayClass7_0_o *this,
        System_String_o *s,
        const MethodInfo *method)
{
  Il2CppObject *v5; // x0
  System_String_o *v6; // x0
  __int64 v7; // x1
  System_Enum_o v9; // [xsp+8h] [xbp-48h] BYREF
  int32_t tag; // [xsp+18h] [xbp-38h]

  if ( (byte_4D333E3 & 1) == 0 )
  {
    sub_1C93AD4(&BattleDebug_TAG_TypeInfo);
    sub_1C93AD4(&StringLiteral_1737/*"<{0}>"*/);
    byte_4D333E3 = 1;
  }
  v9.klass = (System_Enum_c *)BattleDebug_TAG_TypeInfo;
  v9.monitor = (void *)-1LL;
  tag = this->fields.tag;
  v5 = (Il2CppObject *)System_Enum__ToString(&v9, 0);
  v6 = System_String__Format((System_String_o *)StringLiteral_1737/*"<{0}>"*/, v5, 0);
  if ( !s )
    sub_1C93D2C(v6, v7);
  return System_String__IndexOf_64484116(s, v6, 0) >= 0;
}


bool BattleDebug___c__DisplayClass7_0___getLoglist_b__1(
        BattleDebug___c__DisplayClass7_0_o *this,
        System_String_o *s,
        const MethodInfo *method)
{
  System_String_o *v5; // x0
  __int64 v6; // x1

  if ( (byte_4D333E4 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_25426/*"{0}"*/);
    byte_4D333E4 = 1;
  }
  v5 = System_String__Format((System_String_o *)StringLiteral_25426/*"{0}"*/, (Il2CppObject *)this->fields.serchText, 0);
  if ( !s )
    sub_1C93D2C(v5, v6);
  return System_String__IndexOf_64484116(s, v5, 0) >= 0;
}