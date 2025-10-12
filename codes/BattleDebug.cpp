void BattleDebug___cctor(const MethodInfo *method)
{
  System_Collections_Generic_Queue_T__o *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C3A259 & 1) == 0 )
  {
    sub_1C32C20(&BattleDebug_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_Queue_string___ctor__);
    sub_1C32C20(&System_Collections_Generic_Queue_string__TypeInfo);
    byte_4C3A259 = 1;
  }
  v1 = (System_Collections_Generic_Queue_T__o *)sub_1C32E6C(System_Collections_Generic_Queue_string__TypeInfo);
  System_Collections_Generic_Queue_object____ctor(
    v1,
    (const MethodInfo_393F3D8 *)Method_System_Collections_Generic_Queue_string___ctor__);
  BattleDebug_TypeInfo->static_fields->logQueue = (struct System_Collections_Generic_Queue_string__o *)v1;
  sub_1C32BC4((CGThumbnailListItem_o *)BattleDebug_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void BattleDebug__CheckNull(System_String_o *errorText, Il2CppObject *obj, const MethodInfo *method)
{
  __int64 v4; // x0
  System_Exception_o *v5; // x20
  __int64 v6; // x0

  if ( !obj )
  {
    v4 = sub_1C32C34(&System_Exception_TypeInfo);
    v5 = (System_Exception_o *)sub_1C32E6C(v4);
    System_Exception___ctor_65266192(v5, errorText, 0);
    v6 = sub_1C32C34(&Method_BattleDebug_CheckNull__);
    sub_1C32D48(v5, v6);
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


void BattleDebug__Log_45764036(
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
    v8 = (System_String_o *)sub_1C32C34(&StringLiteral_9035/*"Message:\n{0}\nStackTrace:\n{1}\n"*/);
    v4 = System_String__Format_63559836(v8, v6, v7, 0);
  }
  else
  {
    v4 = (System_String_o *)sub_1C32C34(&StringLiteral_1/*""*/);
  }
  v9 = v4;
  v10 = (System_String_o *)sub_1C32C34(&StringLiteral_43/*"\n"*/);
  v11 = System_String__Concat_63556792(errorText, v10, v9, 0);
  v12 = sub_1C32C34(&System_Exception_TypeInfo);
  v13 = (System_Exception_o *)sub_1C32E6C(v12);
  System_Exception___ctor_65266192(v13, v11, 0);
  v14 = sub_1C32C34(&Method_BattleDebug_OutputError__);
  sub_1C32D48(v13, v14);
}


void BattleDebug__Reset(const MethodInfo *method)
{
  BattleDebug_c *v1; // x0
  System_Collections_Generic_Queue_T__o *logQueue; // x0

  if ( (byte_4C3A257 & 1) == 0 )
  {
    sub_1C32C20(&BattleDebug_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_Queue_string__Clear__);
    byte_4C3A257 = 1;
  }
  v1 = BattleDebug_TypeInfo;
  if ( !BattleDebug_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDebug_TypeInfo);
    v1 = BattleDebug_TypeInfo;
  }
  logQueue = (System_Collections_Generic_Queue_T__o *)v1->static_fields->logQueue;
  if ( !logQueue )
    sub_1C32E7C(0);
  System_Collections_Generic_Queue_object___Clear(
    logQueue,
    (const MethodInfo_393F660 *)Method_System_Collections_Generic_Queue_string__Clear__);
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
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  BattleDebug_c *v11; // x0
  System_Object_array *v12; // x21
  System_Predicate_object__o *v13; // x23
  System_Predicate_object__o *v14; // x22
  System_Object_array *All_object; // x0
  System_String_array *v16; // x20

  if ( (byte_4C3A258 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Array_FindAll_string___);
    sub_1C32C20(&Method_System_Array_Reverse_string___);
    sub_1C32C20(&BattleDebug_TypeInfo);
    sub_1C32C20(&System_Predicate_string__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_Queue_string__ToArray__);
    sub_1C32C20(&Method_BattleDebug___c__DisplayClass7_0__getLoglist_b__0__);
    sub_1C32C20(&Method_BattleDebug___c__DisplayClass7_0__getLoglist_b__1__);
    sub_1C32C20(&BattleDebug___c__DisplayClass7_0_TypeInfo);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C3A258 = 1;
  }
  v7 = sub_1C32E6C(BattleDebug___c__DisplayClass7_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_13;
  *(_QWORD *)(v7 + 24) = serchText;
  *(_DWORD *)(v7 + 16) = tag;
  sub_1C32BC4((CGThumbnailListItem_o *)(v7 + 24), (int32_t)serchText, v9, v10);
  v11 = BattleDebug_TypeInfo;
  if ( !BattleDebug_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDebug_TypeInfo);
    v11 = BattleDebug_TypeInfo;
  }
  logQueue = (System_Collections_Generic_Queue_T__o *)v11->static_fields->logQueue;
  if ( !logQueue )
    goto LABEL_13;
  logQueue = (System_Collections_Generic_Queue_T__o *)System_Collections_Generic_Queue_object___ToArray(
                                                        logQueue,
                                                        (const MethodInfo_393FDDC *)Method_System_Collections_Generic_Queue_string__ToArray__);
  v12 = (System_Object_array *)logQueue;
  if ( *(_DWORD *)(v7 + 16) )
  {
    v13 = (System_Predicate_object__o *)sub_1C32E6C(System_Predicate_string__TypeInfo);
    System_Predicate_object____ctor(
      v13,
      (Il2CppObject *)v7,
      Method_BattleDebug___c__DisplayClass7_0__getLoglist_b__0__,
      0);
    logQueue = (System_Collections_Generic_Queue_T__o *)System_Array__FindAll_object_(
                                                          v12,
                                                          (System_Predicate_T__o *)v13,
                                                          (const MethodInfo_31E2A64 *)Method_System_Array_FindAll_string___);
    v12 = (System_Object_array *)logQueue;
  }
  if ( !*(_QWORD *)(v7 + 24) )
LABEL_13:
    sub_1C32E7C(logQueue);
  v14 = (System_Predicate_object__o *)sub_1C32E6C(System_Predicate_string__TypeInfo);
  System_Predicate_object____ctor(
    v14,
    (Il2CppObject *)v7,
    Method_BattleDebug___c__DisplayClass7_0__getLoglist_b__1__,
    0);
  All_object = System_Array__FindAll_object_(
                 v12,
                 (System_Predicate_T__o *)v14,
                 (const MethodInfo_31E2A64 *)Method_System_Array_FindAll_string___);
  v16 = (System_String_array *)All_object;
  if ( reverseFlg )
    System_Array__Reverse_object_(All_object, (const MethodInfo_309DE7C *)Method_System_Array_Reverse_string___);
  return v16;
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
  System_Enum_o v8; // [xsp+8h] [xbp-48h] BYREF
  int32_t tag; // [xsp+18h] [xbp-38h]

  if ( (byte_4C3A25A & 1) == 0 )
  {
    sub_1C32C20(&BattleDebug_TAG_TypeInfo);
    sub_1C32C20(&StringLiteral_1743/*"<{0}>"*/);
    byte_4C3A25A = 1;
  }
  v8.klass = (System_Enum_c *)BattleDebug_TAG_TypeInfo;
  v8.monitor = (void *)-1LL;
  tag = this->fields.tag;
  v5 = (Il2CppObject *)System_Enum__ToString(&v8, 0);
  v6 = System_String__Format((System_String_o *)StringLiteral_1743/*"<{0}>"*/, v5, 0);
  if ( !s )
    sub_1C32E7C(v6);
  return System_String__IndexOf_63576920(s, v6, 0) >= 0;
}


bool BattleDebug___c__DisplayClass7_0___getLoglist_b__1(
        BattleDebug___c__DisplayClass7_0_o *this,
        System_String_o *s,
        const MethodInfo *method)
{
  System_String_o *v5; // x0

  if ( (byte_4C3A25B & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_25096/*"{0}"*/);
    byte_4C3A25B = 1;
  }
  v5 = System_String__Format((System_String_o *)StringLiteral_25096/*"{0}"*/, (Il2CppObject *)this->fields.serchText, 0);
  if ( !s )
    sub_1C32E7C(v5);
  return System_String__IndexOf_63576920(s, v5, 0) >= 0;
}