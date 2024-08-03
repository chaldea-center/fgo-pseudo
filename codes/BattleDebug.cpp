void __fastcall BattleDebug___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_Queue_T__o *v5; // x19
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_49FE87E & 1) == 0 )
  {
    sub_1B640C8(&BattleDebug_TypeInfo, v1);
    sub_1B640C8(&Method_System_Collections_Generic_Queue_string___ctor__, v3);
    sub_1B640C8(&System_Collections_Generic_Queue_string__TypeInfo, v4);
    byte_49FE87E = 1;
  }
  v5 = (System_Collections_Generic_Queue_T__o *)sub_1B64314(System_Collections_Generic_Queue_string__TypeInfo, v1, v2);
  System_Collections_Generic_Queue_object____ctor(
    v5,
    (const MethodInfo_362251C *)Method_System_Collections_Generic_Queue_string___ctor__);
  BattleDebug_TypeInfo->static_fields->logQueue = (struct System_Collections_Generic_Queue_string__o *)v5;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)BattleDebug_TypeInfo->static_fields, (int32_t)v5, v6, v7);
}


void __fastcall BattleDebug__CheckNull(System_String_o *errorText, Il2CppObject *obj, const MethodInfo *method)
{
  __int64 v4; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  System_Exception_o *v7; // x20
  __int64 v8; // x0

  if ( !obj )
  {
    v4 = sub_1B640DC(&System_Exception_TypeInfo);
    v7 = (System_Exception_o *)sub_1B64314(v4, v5, v6);
    System_Exception___ctor_62416168(v7, errorText, 0LL);
    v8 = sub_1B640DC(&Method_BattleDebug_CheckNull__);
    sub_1B641F0(v7, v8);
  }
}


void __fastcall BattleDebug__DebugLog(System_String_o *str, const MethodInfo *method)
{
  ;
}


void __fastcall BattleDebug__ErrorLog(System_String_o *str, const MethodInfo *method)
{
  ;
}


void __fastcall BattleDebug__Log(System_String_o *str, int32_t tag, const MethodInfo *method)
{
  ;
}


void __fastcall BattleDebug__Log_42312984(
        System_Collections_Generic_LinkedList_BattleLogicTask__o *taskList,
        int32_t tag,
        const MethodInfo *method)
{
  ;
}


void __fastcall __noreturn BattleDebug__OutputError(
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
  __int64 v13; // x1
  __int64 v14; // x2
  System_Exception_o *v15; // x20
  __int64 v16; // x0

  if ( exception )
  {
    v6 = (Il2CppObject *)((__int64 (__fastcall *)(System_Exception_o *, Il2CppMethodPointer, const MethodInfo *))exception->klass->vtable._5_get_Message.method)(
                           exception,
                           exception->klass->vtable._6_get_Data.methodPtr,
                           method);
    v7 = (Il2CppObject *)((__int64 (__fastcall *)(System_Exception_o *, Il2CppMethodPointer))exception->klass->vtable._9_get_StackTrace.method)(
                           exception,
                           exception->klass->vtable._10_get_Source.methodPtr);
    v8 = (System_String_o *)sub_1B640DC(&StringLiteral_8958/*"Message:\n{0}\nStackTrace:\n{1}\n"*/);
    v4 = System_String__Format_61389768(v8, v6, v7, 0LL);
  }
  else
  {
    v4 = (System_String_o *)sub_1B640DC(&StringLiteral_1/*""*/);
  }
  v9 = v4;
  v10 = (System_String_o *)sub_1B640DC(&StringLiteral_43/*"\n"*/);
  v11 = System_String__Concat_61386656(errorText, v10, v9, 0LL);
  v12 = sub_1B640DC(&System_Exception_TypeInfo);
  v15 = (System_Exception_o *)sub_1B64314(v12, v13, v14);
  System_Exception___ctor_62416168(v15, v11, 0LL);
  v16 = sub_1B640DC(&Method_BattleDebug_OutputError__);
  sub_1B641F0(v15, v16);
}


void __fastcall BattleDebug__Reset(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  BattleDebug_c *v3; // x0
  System_Collections_Generic_Queue_T__o *logQueue; // x0

  if ( (byte_49FE87C & 1) == 0 )
  {
    sub_1B640C8(&BattleDebug_TypeInfo, v1);
    sub_1B640C8(&Method_System_Collections_Generic_Queue_string__Clear__, v2);
    byte_49FE87C = 1;
  }
  v3 = BattleDebug_TypeInfo;
  if ( !BattleDebug_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDebug_TypeInfo);
    v3 = BattleDebug_TypeInfo;
  }
  logQueue = (System_Collections_Generic_Queue_T__o *)v3->static_fields->logQueue;
  if ( !logQueue )
    sub_1B64324(0LL);
  System_Collections_Generic_Queue_object___Clear(
    logQueue,
    (const MethodInfo_36227A4 *)Method_System_Collections_Generic_Queue_string__Clear__);
}


void __fastcall BattleDebug__WarningLog(System_String_o *str, const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
System_String_array *__fastcall BattleDebug__getLoglist(
        System_String_o *serchText,
        int32_t tag,
        bool reverseFlg,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x20
  System_Collections_Generic_Queue_T__o *logQueue; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  BattleDebug_c *v19; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  System_Object_array *v22; // x21
  System_Predicate_object__o *v23; // x23
  System_Predicate_object__o *v24; // x22
  System_Object_array *All_object; // x0
  System_String_array *v26; // x20

  if ( (byte_49FE87D & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Array_FindAll_string___, *(_QWORD *)&tag);
    sub_1B640C8(&Method_System_Array_Reverse_string___, v7);
    sub_1B640C8(&BattleDebug_TypeInfo, v8);
    sub_1B640C8(&System_Predicate_string__TypeInfo, v9);
    sub_1B640C8(&Method_System_Collections_Generic_Queue_string__ToArray__, v10);
    sub_1B640C8(&Method_BattleDebug___c__DisplayClass7_0__getLoglist_b__0__, v11);
    sub_1B640C8(&Method_BattleDebug___c__DisplayClass7_0__getLoglist_b__1__, v12);
    sub_1B640C8(&BattleDebug___c__DisplayClass7_0_TypeInfo, v13);
    sub_1B640C8(&StringLiteral_1/*""*/, v14);
    byte_49FE87D = 1;
  }
  v15 = sub_1B64314(BattleDebug___c__DisplayClass7_0_TypeInfo, *(_QWORD *)&tag, reverseFlg);
  System_Object___ctor((Il2CppObject *)v15, 0LL);
  if ( !v15 )
    goto LABEL_13;
  *(_QWORD *)(v15 + 24) = serchText;
  *(_DWORD *)(v15 + 16) = tag;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v15 + 24), (int32_t)serchText, v17, v18);
  v19 = BattleDebug_TypeInfo;
  if ( !BattleDebug_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDebug_TypeInfo);
    v19 = BattleDebug_TypeInfo;
  }
  logQueue = (System_Collections_Generic_Queue_T__o *)v19->static_fields->logQueue;
  if ( !logQueue )
    goto LABEL_13;
  logQueue = (System_Collections_Generic_Queue_T__o *)System_Collections_Generic_Queue_object___ToArray(
                                                        logQueue,
                                                        (const MethodInfo_3622E04 *)Method_System_Collections_Generic_Queue_string__ToArray__);
  v22 = (System_Object_array *)logQueue;
  if ( *(_DWORD *)(v15 + 16) )
  {
    v23 = (System_Predicate_object__o *)sub_1B64314(System_Predicate_string__TypeInfo, v20, v21);
    System_Predicate_object____ctor(
      v23,
      (Il2CppObject *)v15,
      Method_BattleDebug___c__DisplayClass7_0__getLoglist_b__0__,
      0LL);
    logQueue = (System_Collections_Generic_Queue_T__o *)System_Array__FindAll_object_(
                                                          v22,
                                                          (System_Predicate_T__o *)v23,
                                                          (const MethodInfo_2F3045C *)Method_System_Array_FindAll_string___);
    v22 = (System_Object_array *)logQueue;
  }
  if ( !*(_QWORD *)(v15 + 24) )
LABEL_13:
    sub_1B64324(logQueue);
  v24 = (System_Predicate_object__o *)sub_1B64314(System_Predicate_string__TypeInfo, v20, v21);
  System_Predicate_object____ctor(
    v24,
    (Il2CppObject *)v15,
    Method_BattleDebug___c__DisplayClass7_0__getLoglist_b__1__,
    0LL);
  All_object = System_Array__FindAll_object_(
                 v22,
                 (System_Predicate_T__o *)v24,
                 (const MethodInfo_2F3045C *)Method_System_Array_FindAll_string___);
  v26 = (System_String_array *)All_object;
  if ( reverseFlg )
    System_Array__Reverse_object_(All_object, (const MethodInfo_2DFB444 *)Method_System_Array_Reverse_string___);
  return v26;
}


int32_t __fastcall BattleDebug__getTag(int32_t param, const MethodInfo *method)
{
  return param;
}


void __fastcall BattleDebug___c__DisplayClass7_0___ctor(
        BattleDebug___c__DisplayClass7_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleDebug___c__DisplayClass7_0___getLoglist_b__0(
        BattleDebug___c__DisplayClass7_0_o *this,
        System_String_o *s,
        const MethodInfo *method)
{
  __int64 v5; // x1
  Il2CppObject *v6; // x0
  System_String_o *v7; // x0
  System_Enum_o v9; // [xsp+8h] [xbp-48h] BYREF
  int32_t tag; // [xsp+18h] [xbp-38h]

  if ( (byte_49FE87F & 1) == 0 )
  {
    sub_1B640C8(&BattleDebug_TAG_TypeInfo, s);
    sub_1B640C8(&StringLiteral_1853/*"<{0}>"*/, v5);
    byte_49FE87F = 1;
  }
  v9.klass = (System_Enum_c *)BattleDebug_TAG_TypeInfo;
  v9.monitor = (void *)-1LL;
  tag = this->fields.tag;
  v6 = (Il2CppObject *)System_Enum__ToString(&v9, 0LL);
  v7 = System_String__Format((System_String_o *)StringLiteral_1853/*"<{0}>"*/, v6, 0LL);
  if ( !s )
    sub_1B64324(v7);
  return System_String__IndexOf_61406964(s, v7, 0LL) >= 0;
}


bool __fastcall BattleDebug___c__DisplayClass7_0___getLoglist_b__1(
        BattleDebug___c__DisplayClass7_0_o *this,
        System_String_o *s,
        const MethodInfo *method)
{
  System_String_o *v5; // x0

  if ( (byte_49FE880 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_24883/*"{0}"*/, s);
    byte_49FE880 = 1;
  }
  v5 = System_String__Format((System_String_o *)StringLiteral_24883/*"{0}"*/, (Il2CppObject *)this->fields.serchText, 0LL);
  if ( !s )
    sub_1B64324(v5);
  return System_String__IndexOf_61406964(s, v5, 0LL) >= 0;
}